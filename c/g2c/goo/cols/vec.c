/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/vec");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooScolsSvecYquicksortX,"goo/cols/vec","quicksort!");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooScolsSvecYpartitionX,"goo/cols/vec","partition!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_11);
DEFLIT(lit_24);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_8);
DEFLIT(lit_19);
DEFLIT(lit_44);
DEFLIT(lit_40);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_30);
DEFLIT(lit_51);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_34);
DEFLIT(lit_5);
DEFLIT(lit_36);
DEFLIT(lit_3);
DEFLIT(lit_46);
DEFLIT(lit_48);
DEFLIT(lit_9);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_14);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_31);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_52);
DEFLIT(lit_29);
DEFLIT(lit_49);
DEFLIT(lit_20);
DEFLIT(lit_47);
DEFLIT(lit_32);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_41);
DEFLIT(lit_21);
DEFLIT(lit_1);
DEFLIT(lit_39);
DEFLIT(lit_53);
DEFLIT(lit_42);
DEFLIT(lit_28);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_22);

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
LOCFOR(fun_catX_11);
LOCFOR(fun_vec_12);
LOCFOR(fun_pushX_13);
LOCFOR(fun_popX_14);
LOCFOR(fun_to_str_15);
LOCFOR(fun_addX_16);
LOCFOR(fun_lenSfill_setter_17);
LOCFOR(fun_len_setter_18);
LOCFOR(fun_zapX_19);
LOCFOR(fun_low_elt_20);
LOCFOR(fun_low_elt_setter_21);
LOCFOR(fun_sort_by_22);
LOCFOR(fun_sort_byX_23);
LOCFOR(fun_quicksortX_24);
LOCFOR(fun_partitionX_25);
extern P YgooScolsSvecY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_vec_len_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_len_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_vec_dat_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL0(1,VARREF(YgooScolsSrepYrep_nul));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSvecYvec_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
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
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
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
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF2001;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF2001 = T1;
  T3 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF2001);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_11) {
  P x_,more_;
  P eF2005;
  P x_1311F2004;
  P sF2003;
  P x_1309F2002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T0 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1309F2002 = T0;
  for (;;) {
    P a109_0;
  loop109:
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1309F2002);
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1309F2002);
      sF2003 = T6;
      T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF2003);
      x_1311F2004 = T7;
      for (;;) {
        P a110_0;
      loop110:
        T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1311F2004);
        T10 = CALL1(1,VARREF(Ynot),T11);
        if (T10 != YPfalse) {
          T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_1311F2004);
          eF2005 = T13;
          CALL2(1,VARREF(YgooScolsScolxYaddX),x_,eF2005);
          T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1311F2004);
          a110_0 = T15;
          x_1311F2004 = a110_0;
          goto loop110;
          T12 = T14;
          T9 = T12;
        } else {
          T9 = YPfalse;
        }
        break;
      }
      T8 = T9;
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1309F2002);
      a109_0 = T17;
      x_1309F2002 = a109_0;
      goto loop109;
      T5 = T16;
      T2 = T5;
    } else {
      T2 = YPfalse;
    }
    break;
  }
  T1 = T2;
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_vec_12) {
  P elts_;
  P T0;
LINK_STACK();
  NARGS(elts_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScolsSvecYLvecG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_13) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_14) {
  P c_;
  P xF2007;
  P new_lenF2006;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF2006 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYL),new_lenF2006,YPint((P)0));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Yrange_error),c_,new_lenF2006);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF2006);
  xF2007 = T6;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF2006,c_);
  T7 = CALL2(1,VARREF(Ytup),c_,xF2007);
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_15) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_32),T1,LITREF(lit_33));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_16) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_lenSfill_setter_17) {
  P new_len_,c_,default_;
  P tmpF2013;
  P tmpF2012;
  P iF2011;
  P old_lenF2010;
  P new_dataF2009;
  P datF2008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF2008 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF2008);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),new_len_);
    T6 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T7,default_);
    new_dataF2009 = T6;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF2009,datF2008);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T8 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF2009,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T10 = CALL2(1,VARREF(YgooSmagYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF2010 = T13;
      T14 = CALL2(1,VARREF(YgooSmagYL),new_len_,YPint((P)0));
      if (T14 != YPfalse) {
        T15 = CALL2(1,VARREF(Yrange_error),c_,new_len_);
      } else {
      }
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      check_type(new_len_,VARREF(YLintG));
      iF2011 = new_len_;
      for (;;) {
        P a111_0;
      loop111:
        T19 = CALL2(1,VARREF(YgooSmagYL),iF2011,old_lenF2010);
        tmpF2012 = T19;
        if (tmpF2012 != YPfalse) {
          T22 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),default_,datF2008,iF2011);
          tmpF2013 = T22;
          if (tmpF2013 != YPfalse) {
            T25 = CALL2(1,VARREF(YgooSmathYA),iF2011,YPint((P)1));
            a111_0 = T25;
            iF2011 = a111_0;
            goto loop111;
            T23 = T24;
          } else {
            T23 = YPfalse;
          }
          T21 = T23;
          T20 = T21;
        } else {
          T20 = YPfalse;
        }
        T18 = T20;
        break;
      }
      T17 = T18;
      T16 = T17;
      T12 = T16;
      T9 = T12;
    } else {
      T26 = CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T9 = T26;
    }
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_18) {
  P new_len_,c_;
  P T0,T1;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_19) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),c_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_low_elt_20) {
  P x_,i_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_21) {
  P z_,x_,i_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
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

FUNCODEDEF(fun_sort_by_22) {
  P a_,test_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T2,test_);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),a_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_byX_23) {
  P a_,test_;
  P sortedF2014;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),a_);
  T3 = CALL1(1,VARREF(YgooSmathY1_),T4);
  T1 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),T2,YPint((P)0),T3,test_);
  sortedF2014 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),a_,sortedF2014);
  if (T6 != YPfalse) {
    T5 = sortedF2014;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYinto),a_,sortedF2014);
    T5 = T7;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_quicksortX_24) {
  P a_,p_,r_,test_;
  P qF2015;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
  T1 = CALL2(1,VARREF(YgooSmagYL),p_,r_);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YgooScolsSvecYpartitionX),a_,p_,r_,test_);
    qF2015 = T3;
    CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,p_,qF2015,test_);
    T5 = CALL1(1,VARREF(YgooSmathY1A),qF2015);
    T4 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,T5,r_,test_);
    T2 = T4;
    T0 = T2;
  } else {
    T0 = a_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_partitionX_25) {
  P a_,p_,r_,test_;
  P x_1317F2024;
  P x_1315F2023;
  P x_1316F2022;
  P x_1313F2021;
  P x_1314F2020;
  P tmpF2019;
  P jF2018;
  P iF2017;
  P xF2016;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),a_,p_);
  xF2016 = T1;
  T3 = CALL1(1,VARREF(YgooSmathY1_),p_);
  iF2017 = T3;
  iF2017 = BOXFAB(iF2017);
  T6 = CALL1(1,VARREF(YgooSmathY1A),r_);
  jF2018 = T6;
  jF2018 = BOXFAB(jF2018);
  for (;;) {
  loop112:
    for (;;) {
    loop113:
      T12 = BOXVAL(jF2018);
      T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
      BOXVAL(jF2018) = T11;
      T18 = BOXVAL(jF2018);
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T18);
      T16 = CALL2(1,test_,T17,xF2016);
      tmpF2019 = T16;
      if (tmpF2019 != YPfalse) {
        T19 = tmpF2019;
      } else {
        T22 = BOXVAL(jF2018);
        T21 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T22);
        T20 = CALL2(1,VARREF(YgooSmathYE),T21,xF2016);
        T19 = T20;
      }
      T15 = T19;
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        goto loop113;
        T13 = T23;
      } else {
        T13 = YPfalse;
      }
      break;
    }
    T10 = T13;
    for (;;) {
    loop114:
      T26 = BOXVAL(iF2017);
      T25 = CALL2(1,VARREF(YgooSmathYA),T26,YPint((P)1));
      BOXVAL(iF2017) = T25;
      T32 = BOXVAL(iF2017);
      T31 = CALL2(1,VARREF(YgooSmacrosYelt),a_,T32);
      T30 = CALL2(1,test_,T31,xF2016);
      T29 = CALL1(1,VARREF(Ynot),T30);
      T28 = CALL1(1,VARREF(Ynot),T29);
      if (T28 != YPfalse) {
        goto loop114;
        T27 = T33;
      } else {
        T27 = YPfalse;
      }
      break;
    }
    T24 = T27;
    T36 = BOXVAL(iF2017);
    T37 = BOXVAL(jF2018);
    T35 = CALL2(1,VARREF(YgooSmagYL),T36,T37);
    if (T35 != YPfalse) {
      x_1314F2020 = a_;
      T39 = BOXVAL(iF2017);
      x_1313F2021 = T39;
      x_1316F2022 = a_;
      T42 = BOXVAL(jF2018);
      x_1315F2023 = T42;
      T44 = CALL2(1,VARREF(YgooSmacrosYelt),x_1314F2020,x_1313F2021);
      x_1317F2024 = T44;
      T45 = CALL2(1,VARREF(YgooSmacrosYelt),x_1316F2022,x_1315F2023);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T45,x_1314F2020,x_1313F2021);
      T46 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_1317F2024,x_1316F2022,x_1315F2023);
      T43 = T46;
      T41 = T43;
      T40 = T41;
      T38 = T40;
      goto loop112;
      T34 = T47;
    } else {
      T48 = BOXVAL(jF2018);
      T34 = T48;
    }
    break;
  }
  T9 = T34;
  T8 = T9;
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
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
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
  T7 = VARREF_OR(YgooScolsSvecYvec_len,YPfalse);
  T8 = fun_vec_len_0;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T8);
  VARSET(YgooScolsSvecYvec_len,T6);
  lit_5 = YPPsym((P)"vec-len-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_len_setter_1 = YPmet(FUNCODEREF(fun_vec_len_setter_1),LITREF(lit_5),T9,ENVNUL,PNUL,sloc(25));
  T11 = VARREF_OR(YgooScolsSvecYvec_len_setter,YPfalse);
  T12 = fun_vec_len_setter_1;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooScolsSvecYvec_len_setter,T10);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T13,ENVNUL,PNUL,sloc(25));
  T14 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),VARREF(YgooScolsSvecYvec_len_setter),VARREF(YLintG),T14);
  lit_8 = YPPsym((P)"vec-dat");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_dat_3 = YPmet(FUNCODEREF(fun_vec_dat_3),LITREF(lit_8),T15,ENVNUL,PNUL,sloc(26));
  T17 = VARREF_OR(YgooScolsSvecYvec_dat,YPfalse);
  T18 = fun_vec_dat_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T18);
  VARSET(YgooScolsSvecYvec_dat,T16);
  lit_10 = YPPsym((P)"vec-dat-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_dat_setter_4 = YPmet(FUNCODEREF(fun_vec_dat_setter_4),LITREF(lit_10),T19,ENVNUL,PNUL,sloc(26));
  T21 = VARREF_OR(YgooScolsSvecYvec_dat_setter,YPfalse);
  T22 = fun_vec_dat_setter_4;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T22);
  VARSET(YgooScolsSvecYvec_dat_setter,T20);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T23,ENVNUL,PNUL,sloc(26));
  T24 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_dat),VARREF(YgooScolsSvecYvec_dat_setter),VARREF(YLrepG),T24);
  lit_13 = YPPsym((P)"len");
  lit_14 = YPPlist(1,YPPsym((P)"c"));
  T25 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_13),T25,ENVNUL,PNUL,sloc(30));
  T27 = VARREF_OR(YgooStypesYlen,YPfalse);
  T28 = fun_len_6;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooStypesYlen,T26);
  lit_15 = YPPsym((P)"elt-or");
  lit_16 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"i"),YPPsym((P)"default"));
  T29 = YPsig(LITREF(lit_16),YPPlist(3,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_15),T29,ENVNUL,PNUL,sloc(33));
  T31 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T32 = fun_elt_or_7;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooScolsScolYelt_or,T30);
  lit_17 = YPPsym((P)"elt-setter");
  lit_18 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"c"),YPPsym((P)"i"));
  T33 = YPsig(LITREF(lit_18),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_17),T33,ENVNUL,PNUL,sloc(38));
  T35 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T36 = fun_elt_setter_8;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YgooScolsScolxYelt_setter,T34);
  lit_19 = YPPsym((P)"empty");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T38 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T37 = YPsig(LITREF(lit_20),YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_19),T37,ENVNUL,PNUL,sloc(42));
  T40 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T41 = fun_empty_9;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YgooScolsScolYempty,T39);
  lit_21 = YPPsym((P)"fab");
  lit_22 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T42 = YPsig(LITREF(lit_22),YPPlist(2,T43,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_21),T42,ENVNUL,PNUL,sloc(44));
  T45 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T46 = fun_fab_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YgooScolsScolYfab,T44);
  lit_23 = YPPsym((P)"cat!");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T47 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPtrue,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_catX_11 = YPmet(FUNCODEREF(fun_catX_11),LITREF(lit_23),T47,ENVNUL,PNUL,sloc(51));
  T49 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T50 = fun_catX_11;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooScolsSseqxYcatX,T48);
  lit_25 = YPPlist(1,YPPsym((P)"elts"));
  T51 = YPsig(LITREF(lit_25),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_vec_12 = YPmet(FUNCODEREF(fun_vec_12),LITREF(lit_1),T51,ENVNUL,PNUL,sloc(57));
  T53 = VARREF_OR(YgooScolsSvecYvec,YPfalse);
  T54 = fun_vec_12;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YgooScolsSvecYvec,T52);
  lit_26 = YPPsym((P)"push!");
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_pushX_13 = YPmet(FUNCODEREF(fun_pushX_13),LITREF(lit_26),T55,ENVNUL,PNUL,sloc(60));
  T57 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T58 = fun_pushX_13;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T58);
  VARSET(YgooScolsSseqxYpushX,T56);
  lit_28 = YPPsym((P)"pop!");
  lit_29 = YPPlist(1,YPPsym((P)"c"));
  T60 = XCALL2(1,VARREF(YtT),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG));
  T59 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),T60,Ynil);
  fun_popX_14 = YPmet(FUNCODEREF(fun_popX_14),LITREF(lit_28),T59,ENVNUL,PNUL,sloc(63));
  T62 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T63 = fun_popX_14;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooScolsSseqxYpopX,T61);
  lit_30 = YPPsym((P)"to-str");
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T64 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_15 = YPmet(FUNCODEREF(fun_to_str_15),LITREF(lit_30),T64,ENVNUL,PNUL,sloc(71));
  T66 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T67 = fun_to_str_15;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooSmathYto_str,T65);
  lit_34 = YPPsym((P)"add!");
  lit_35 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T68 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_addX_16 = YPmet(FUNCODEREF(fun_addX_16),LITREF(lit_34),T68,ENVNUL,PNUL,sloc(74));
  T70 = VARREF_OR(YgooScolsScolxYaddX,YPfalse);
  T71 = fun_addX_16;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooScolsScolxYaddX,T69);
  lit_36 = YPPsym((P)"len/fill-setter");
  lit_37 = YPPlist(3,YPPsym((P)"new-len"),YPPsym((P)"c"),YPPsym((P)"default"));
  T72 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_17 = YPmet(FUNCODEREF(fun_lenSfill_setter_17),LITREF(lit_36),T72,ENVNUL,PNUL,sloc(78));
  T74 = VARREF_OR(YgooScolsScolxYlenSfill_setter,YPfalse);
  T75 = fun_lenSfill_setter_17;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YgooScolsScolxYlenSfill_setter,T73);
  lit_38 = YPPsym((P)"len-setter");
  lit_39 = YPPlist(2,YPPsym((P)"new-len"),YPPsym((P)"c"));
  T76 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_18 = YPmet(FUNCODEREF(fun_len_setter_18),LITREF(lit_38),T76,ENVNUL,PNUL,sloc(95));
  T78 = VARREF_OR(YgooScolsScolxYlen_setter,YPfalse);
  T79 = fun_len_setter_18;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooScolsScolxYlen_setter,T77);
  lit_40 = YPPsym((P)"zap!");
  lit_41 = YPPlist(1,YPPsym((P)"c"));
  T80 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_zapX_19 = YPmet(FUNCODEREF(fun_zapX_19),LITREF(lit_40),T80,ENVNUL,PNUL,sloc(98));
  T82 = VARREF_OR(YgooScolsScolxYzapX,YPfalse);
  T83 = fun_zapX_19;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooScolsScolxYzapX,T81);
  lit_42 = YPPsym((P)"low-elt");
  lit_43 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T84 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_20 = YPmet(FUNCODEREF(fun_low_elt_20),LITREF(lit_42),T84,ENVNUL,PNUL,sloc(100));
  T86 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T87 = fun_low_elt_20;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooScolsScolYlow_elt,T85);
  lit_44 = YPPsym((P)"low-elt-setter");
  lit_45 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T88 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_21 = YPmet(FUNCODEREF(fun_low_elt_setter_21),LITREF(lit_44),T88,ENVNUL,PNUL,sloc(103));
  T90 = VARREF_OR(YgooScolsScolxYlow_elt_setter,YPfalse);
  T91 = fun_low_elt_setter_21;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooScolsScolxYlow_elt_setter,T89);
  lit_46 = YPPsym((P)"sort-by");
  lit_47 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T92 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YLseqIG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqIG),Ynil);
  fun_sort_by_22 = YPmet(FUNCODEREF(fun_sort_by_22),LITREF(lit_46),T92,ENVNUL,PNUL,sloc(108));
  T94 = VARREF_OR(YgooScolsSseqYsort_by,YPfalse);
  T95 = fun_sort_by_22;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YgooScolsSseqYsort_by,T93);
  lit_48 = YPPsym((P)"sort-by!");
  lit_49 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T96 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_byX_23 = YPmet(FUNCODEREF(fun_sort_byX_23),LITREF(lit_48),T96,ENVNUL,PNUL,sloc(111));
  T98 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T99 = fun_sort_byX_23;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooScolsSseqYsort_byX,T97);
  lit_50 = YPPsym((P)"quicksort!");
  lit_51 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  T100 = YPsig(LITREF(lit_51),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_quicksortX_24 = YPmet(FUNCODEREF(fun_quicksortX_24),LITREF(lit_50),T100,ENVNUL,PNUL,sloc(117));
  T102 = VARREF_OR(YgooScolsSvecYquicksortX,YPfalse);
  T103 = fun_quicksortX_24;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooScolsSvecYquicksortX,T101);
  lit_52 = YPPsym((P)"partition!");
  lit_53 = YPPlist(4,YPPsym((P)"a"),YPPsym((P)"p"),YPPsym((P)"r"),YPPsym((P)"test"));
  T106 = YPsig(LITREF(lit_53),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLintG),Ynil);
  T105 = fun_partitionX_25 = YPmet(FUNCODEREF(fun_partitionX_25),LITREF(lit_52),T106,ENVNUL,PNUL,sloc(124));
  T109 = VARREF_OR(YgooScolsSvecYpartitionX,YPfalse);
  T110 = fun_partitionX_25;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  T107 = VARSET(YgooScolsSvecYpartitionX,T108);
  T104 = T107;
  return T104;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"quicksort!", CVAR, &YgooScolsSvecYquicksortX},
  {"<vec>", CVAR, &YgooScolsSvecYLvecG},
  {"---main-0---", PVAR, NULL},
  {"vec-len-setter", CVAR, &YgooScolsSvecYvec_len_setter},
  {"partition!", CVAR, &YgooScolsSvecYpartitionX},
  {"vec-dat-setter", CVAR, &YgooScolsSvecYvec_dat_setter},
  {"vec-len", CVAR, &YgooScolsSvecYvec_len},
  {"vec", CVAR, &YgooScolsSvecYvec},
  {"vec-dat", CVAR, &YgooScolsSvecYvec_dat},
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
