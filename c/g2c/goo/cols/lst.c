/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(Yclone,"goo/boot","clone");
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
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
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
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
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
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
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
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
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
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
DEF(YgooScolsSlstYline_of_setter,"goo/cols/lst","line-of-setter");
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
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
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
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
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
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
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
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
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
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
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
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YgooScolsSlstYDline_pah_empty,"goo/cols/lst","$line-pah-empty");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
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
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
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

DEFLIT(lit_55);
DEFLIT(lit_49);
DEFLIT(lit_34);
DEFLIT(lit_77);
DEFLIT(lit_106);
DEFLIT(lit_100);
DEFLIT(lit_24);
DEFLIT(lit_76);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_83);
DEFLIT(lit_59);
DEFLIT(lit_26);
DEFLIT(lit_96);
DEFLIT(lit_30);
DEFLIT(lit_33);
DEFLIT(lit_73);
DEFLIT(lit_53);
DEFLIT(lit_3);
DEFLIT(lit_39);
DEFLIT(lit_48);
DEFLIT(lit_61);
DEFLIT(lit_32);
DEFLIT(lit_1);
DEFLIT(lit_56);
DEFLIT(lit_7);
DEFLIT(lit_91);
DEFLIT(lit_60);
DEFLIT(lit_90);
DEFLIT(lit_15);
DEFLIT(lit_62);
DEFLIT(lit_14);
DEFLIT(lit_87);
DEFLIT(lit_98);
DEFLIT(lit_10);
DEFLIT(lit_84);
DEFLIT(lit_82);
DEFLIT(lit_41);
DEFLIT(lit_72);
DEFLIT(lit_103);
DEFLIT(lit_88);
DEFLIT(lit_35);
DEFLIT(lit_85);
DEFLIT(lit_63);
DEFLIT(lit_25);
DEFLIT(lit_75);
DEFLIT(lit_105);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_29);
DEFLIT(lit_51);
DEFLIT(lit_6);
DEFLIT(lit_42);
DEFLIT(lit_31);
DEFLIT(lit_102);
DEFLIT(lit_74);
DEFLIT(lit_36);
DEFLIT(lit_52);
DEFLIT(lit_68);
DEFLIT(lit_47);
DEFLIT(lit_2);
DEFLIT(lit_79);
DEFLIT(lit_89);
DEFLIT(lit_38);
DEFLIT(lit_70);
DEFLIT(lit_107);
DEFLIT(lit_44);
DEFLIT(lit_58);
DEFLIT(lit_66);
DEFLIT(lit_27);
DEFLIT(lit_8);
DEFLIT(lit_108);
DEFLIT(lit_45);
DEFLIT(lit_67);
DEFLIT(lit_101);
DEFLIT(lit_104);
DEFLIT(lit_17);
DEFLIT(lit_18);
DEFLIT(lit_110);
DEFLIT(lit_97);
DEFLIT(lit_43);
DEFLIT(lit_0);
DEFLIT(lit_50);
DEFLIT(lit_69);
DEFLIT(lit_9);
DEFLIT(lit_111);
DEFLIT(lit_109);
DEFLIT(lit_19);
DEFLIT(lit_95);
DEFLIT(lit_78);
DEFLIT(lit_28);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_80);
DEFLIT(lit_64);
DEFLIT(lit_54);
DEFLIT(lit_99);
DEFLIT(lit_40);
DEFLIT(lit_46);
DEFLIT(lit_57);
DEFLIT(lit_21);
DEFLIT(lit_112);
DEFLIT(lit_94);
DEFLIT(lit_22);
DEFLIT(lit_16);
DEFLIT(lit_71);
DEFLIT(lit_12);
DEFLIT(lit_65);
DEFLIT(lit_92);
DEFLIT(lit_81);
DEFLIT(lit_37);
DEFLIT(lit_93);
DEFLIT(lit_86);

/* FUNCTIONS: */

LOCFOR(fun_len_0);
LOCFOR(fun_elt_or_1);
LOCFOR(fun_elt_setter_2);
LOCFOR(fun_emptyQ_3);
LOCFOR(fun_empty_4);
LOCFOR(fun_fab_5);
LOCFOR(fun_fabs_6);
LOCFOR(fun_Pdat_7);
LOCFOR(fun_Pdat_setter_8);
LOCFOR(fun_Pkey_9);
LOCFOR(fun_Pkey_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_enum_12);
LOCFOR(fun_finQ_13);
LOCFOR(fun_nxt_14);
LOCFOR(fun_now_15);
LOCFOR(fun_now_setter_16);
LOCFOR(fun_now_key_17);
LOCFOR(fun_add_18);
LOCFOR(fun_last_19);
LOCFOR(fun_revX_20);
LOCFOR(fun_connect_21);
LOCFOR(fun_catX_22);
LOCFOR(fun_lst_23);
LOCFOR(fun_pair_24);
LOCFOR(fun_pushX_25);
LOCFOR(fun_popX_26);
LOCFOR(fun_sort_byX_27);
LOCFOR(fun_to_str_28);
LOCFOR(fun_assq_29);
LOCFOR(fun_assqn_30);
LOCFOR(fun_x_1308_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_line_of_34);
LOCFOR(fun_line_of_35);
LOCFOR(fun_line_of_setter_36);
LOCFOR(fun_37);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_empty_39);
FUNFOR(YgooScolsSlstYline_pair);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_42);
LOCFOR(fun_line_list_of_43);
LOCFOR(fun_line_list_of_44);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_len_0) {
  P x_;
  P xF1925;
  P countF1924;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)0),VARREF(YLintG));
  countF1924 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF1925 = x_;
  for (;;) {
    P a94_0,a94_1;
  loop94:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF1925);
    if (T4 != YPfalse) {
      T3 = countF1924;
    } else {
      T6 = CALL2(1,VARREF(YgooSmathYA),countF1924,YPint((P)1));
      T7 = CALL1(1,VARREF(Ytail),xF1925);
      a94_0 = T6;
      a94_1 = T7;
      countF1924 = a94_0;
      xF1925 = a94_1;
      goto loop94;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_1) {
  P x_,key_,default_;
  P xF1927;
  P countF1926;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF1926 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF1927 = x_;
  for (;;) {
    P a95_0,a95_1;
  loop95:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF1927);
    if (T4 != YPfalse) {
      T3 = default_;
    } else {
      T6 = CALL2(1,VARREF(YgooSmacrosYEE),countF1926,key_);
      if (T6 != YPfalse) {
        T7 = CALL1(1,VARREF(Yhead),xF1927);
        T5 = T7;
      } else {
        T9 = CALL2(1,VARREF(YgooSmathYA),countF1926,YPint((P)1));
        T10 = CALL1(1,VARREF(Ytail),xF1927);
        a95_0 = T9;
        a95_1 = T10;
        countF1926 = a95_0;
        xF1927 = a95_1;
        goto loop95;
        T5 = T8;
      }
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_2) {
  P z_,x_,key_;
  P xF1929;
  P countF1928;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF1928 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF1929 = x_;
  for (;;) {
    P a96_0,a96_1;
  loop96:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF1929);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yrange_error),xF1929,key_);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),countF1928,key_);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(Yhead_setter),z_,xF1929);
        T6 = T8;
      } else {
        T10 = CALL2(1,VARREF(YgooSmathYA),countF1928,YPint((P)1));
        T11 = CALL1(1,VARREF(Ytail),xF1929);
        a96_0 = T10;
        a96_1 = T11;
        countF1928 = a96_0;
        xF1929 = a96_1;
        goto loop96;
        T6 = T9;
      }
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_3) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(Yclass_of),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYempty),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_4) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_fab_5) {
  P t_,s_;
  P resF1931;
  P iF1930;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLintG));
  iF1930 = s_;
  T2 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  check_type(T2,VARREF(YLlstG));
  resF1931 = T2;
  for (;;) {
    P a97_0,a97_1;
  loop97:
    T5 = CALL2(1,VARREF(YgooSmagYG),iF1930,YPint((P)0));
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathY_),iF1930,YPint((P)1));
      T8 = CALL3(1,VARREF(Ynew),t_,VARREF(Ytail),resF1931);
      a97_0 = T7;
      a97_1 = T8;
      iF1930 = a97_0;
      resF1931 = a97_1;
      goto loop97;
      T4 = T6;
    } else {
      T4 = resF1931;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P resultF1933;
  P indexF1932;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  check_type(T2,VARREF(YLintG));
  indexF1932 = T2;
  T4 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  check_type(T4,VARREF(YLlstG));
  resultF1933 = T4;
  for (;;) {
    P a98_0,a98_1;
  loop98:
    T7 = CALL2(1,VARREF(YgooSmagYL),indexF1932,YPint((P)0));
    if (T7 != YPfalse) {
      T6 = resultF1933;
    } else {
      T9 = CALL2(1,VARREF(YgooSmathY_),indexF1932,YPint((P)1));
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),objects_,indexF1932);
      T10 = CALL5(1,VARREF(Ynew),c_,VARREF(Yhead),T11,VARREF(Ytail),resultF1933);
      a98_0 = T9;
      a98_1 = T10;
      indexF1932 = a98_0;
      resultF1933 = a98_1;
      goto loop98;
      T6 = T8;
    }
    break;
  }
  T5 = T6;
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_10) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_enum_12) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_13) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_14) {
  P e_;
  P x_1302F1934;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  x_1302F1934 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1302F1934);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1302F1934);
  T0 = x_1302F1934;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_15) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_16) {
  P v_,e_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_17) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_18) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_19) {
  P x_;
  P pxF1936;
  P xF1935;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  xF1935 = x_;
  pxF1936 = x_;
  for (;;) {
    P a99_0,a99_1;
  loop99:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF1935);
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(Yhead),pxF1936);
      T3 = T5;
    } else {
      T7 = CALL1(1,VARREF(Ytail),xF1935);
      a99_0 = T7;
      a99_1 = xF1935;
      xF1935 = a99_0;
      pxF1936 = a99_1;
      goto loop99;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_20) {
  P c_;
  P tF1939;
  P rF1938;
  P lF1937;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  lF1937 = c_;
  T3 = CALL1(1,VARREF(Yclass_of),c_);
  T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
  rF1938 = T2;
  for (;;) {
    P a100_0,a100_1;
  loop100:
    T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),lF1937);
    if (T6 != YPfalse) {
      T5 = rF1938;
    } else {
      T8 = CALL1(1,VARREF(Ytail),lF1937);
      tF1939 = T8;
      CALL2(1,VARREF(Ytail_setter),rF1938,lF1937);
      a100_0 = tF1939;
      a100_1 = lF1937;
      lF1937 = a100_0;
      rF1938 = a100_1;
      goto loop100;
      T7 = T9;
      T5 = T7;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_connect_21) {
  P x_,y_;
  P pF1940;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    check_type(y_,VARREF(YLlstG));
    pF1940 = y_;
    for (;;) {
      P a101_0;
    loop101:
      T6 = CALL1(1,VARREF(Ytail),pF1940);
      T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
      if (T5 != YPfalse) {
        T4 = pF1940;
      } else {
        T8 = CALL1(1,VARREF(Ytail),pF1940);
        a101_0 = T8;
        pF1940 = a101_0;
        goto loop101;
        T4 = T7;
      }
      break;
    }
    T3 = T4;
    T2 = T3;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_22) {
  P x_,more_;
  P xF1945;
  P x_1303F1944;
  P curF1943;
  P resultF1942;
  P connectF1941;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T1 = fun_connect_21;
  connectF1941 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1942 = T3;
  curF1943 = resultF1942;
  curF1943 = BOXFAB(curF1943);
  T7 = BOXVAL(curF1943);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1941,T7,T8);
  BOXVAL(curF1943) = T6;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1303F1944 = T9;
  for (;;) {
    P a102_0;
  loop102:
    T13 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1303F1944);
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_1303F1944);
      xF1945 = T15;
      T17 = BOXVAL(curF1943);
      T18 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1945);
      T16 = CALL2(1,connectF1941,T17,T18);
      BOXVAL(curF1943) = T16;
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1303F1944);
      a102_0 = T20;
      x_1303F1944 = a102_0;
      goto loop102;
      T14 = T19;
      T11 = T14;
    } else {
      T11 = YPfalse;
    }
    break;
  }
  T10 = T11;
  T21 = CALL1(1,VARREF(Ytail),resultF1942);
  T4 = T21;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lst_23) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pair_24) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_25) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_26) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_byX_27) {
  P items_,test_;
  P tmpF1950;
  P nextF1949;
  P prevF1948;
  P tmpF1947;
  P tmpF1946;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
  tmpF1946 = YPfalse;
  for (;;) {
    P a103_0;
  loop103:
    T5 = CALL1(1,VARREF(Yhead),items_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),tmpF1946,T5);
    if (T4 != YPfalse) {
      T3 = items_;
    } else {
      T7 = CALL1(1,VARREF(Yhead),items_);
      tmpF1947 = T7;
      prevF1948 = items_;
      T8 = CALL1(1,VARREF(Ytail),items_);
      nextF1949 = T8;
      for (;;) {
        P a104_0,a104_1,a104_2;
      loop104:
        T11 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nextF1949);
        if (T11 != YPfalse) {
          a103_0 = tmpF1947;
          tmpF1946 = a103_0;
          goto loop103;
          T10 = T12;
        } else {
          T16 = CALL1(1,VARREF(Yhead),nextF1949);
          T17 = CALL1(1,VARREF(Yhead),prevF1948);
          T15 = CALL2(1,test_,T16,T17);
          if (T15 != YPfalse) {
            T19 = CALL1(1,VARREF(Yhead),prevF1948);
            tmpF1950 = T19;
            T20 = CALL1(1,VARREF(Yhead),nextF1949);
            CALL2(1,VARREF(Yhead_setter),T20,prevF1948);
            T21 = CALL2(1,VARREF(Yhead_setter),tmpF1950,nextF1949);
            T18 = T21;
            T14 = T18;
          } else {
            T14 = tmpF1947;
          }
          T22 = CALL1(1,VARREF(Ytail),prevF1948);
          T23 = CALL1(1,VARREF(Ytail),nextF1949);
          a104_0 = T14;
          a104_1 = T22;
          a104_2 = T23;
          tmpF1947 = a104_0;
          prevF1948 = a104_1;
          nextF1949 = a104_2;
          goto loop104;
          T10 = T13;
        }
        break;
      }
      T9 = T10;
      T6 = T9;
      T3 = T6;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_28) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_64),T1,LITREF(lit_65));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_29) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
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

FUNCODEDEF(fun_assqn_30) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
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

FUNCODEDEF(fun_x_1308_31) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_72),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P DemptyF1965;
  P classF1964;
  P x_1307F1963;
  P x_1307F1962;
  P x_1307F1961;
  P x_1307F1960;
  P x_1307F1959;
  P x_1307F1958;
  P x_1307F1957;
  P x_1307F1956;
  P x_1307F1955;
  P supersF1954;
  P nameF1953;
  P x_1307F1952;
  P x_1308F1951;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1308_31,2);
  x_1308F1951 = T1;
  FUNINIT(x_1308F1951, 2,FREEREF(0),return_);
  x_1307F1952 = FREEREF(0);
  nameF1953 = YPfalse;
  nameF1953 = BOXFAB(nameF1953);
  supersF1954 = YPfalse;
  supersF1954 = BOXFAB(supersF1954);
  T7 = CALL2(1,VARREF(YisaQ),x_1307F1952,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1307F1952,LITREF(lit_72),x_1308F1951);
    x_1307F1955 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1307F1955,x_1308F1951);
    BOXVAL(nameF1953) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1307F1955);
    x_1307F1956 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1307F1956,x_1308F1951);
    x_1307F1957 = T14;
    BOXVAL(supersF1954) = x_1307F1957;
    x_1307F1958 = Ynil;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1307F1958,x_1308F1951);
    x_1307F1959 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1307F1959,x_1308F1951);
    T19 = CALL1(1,VARREF(Ytail),x_1307F1958);
    x_1307F1960 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1307F1960,x_1308F1951);
    T16 = T20;
    T15 = T16;
    T21 = CALL1(1,VARREF(Ytail),x_1307F1956);
    x_1307F1961 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1307F1961,x_1308F1951);
    x_1307F1962 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1307F1962,x_1308F1951);
    T25 = CALL1(1,VARREF(Ytail),x_1307F1961);
    x_1307F1963 = T25;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1307F1963,x_1308F1951);
    T22 = T26;
    T13 = T22;
    T10 = T13;
    T8 = T10;
  } else {
    T27 = CALL2(1,x_1308F1951,LITREF(lit_73),x_1307F1952);
  }
  T30 = BOXVAL(nameF1953);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_74),T30,LITREF(lit_75));
  classF1964 = T29;
  T33 = BOXVAL(nameF1953);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_76),T33,LITREF(lit_77));
  DemptyF1965 = T32;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T39 = CALL1(1,VARREF(Ylst),classF1964);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T43 = BOXVAL(supersF1954);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_81));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T40,LITREF(lit_81));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T47 = CALL1(1,VARREF(Ylst),DemptyF1965);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T51 = CALL1(1,VARREF(Ylst),classF1964);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_81));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T48,LITREF(lit_81));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T56 = BOXVAL(nameF1953);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T58 = CALL3(1,VARREF(YgooSmacrosYcat),T59,T60,LITREF(lit_81));
  T57 = CALL1(1,VARREF(Ylst),T58);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T64 = CALL1(1,VARREF(Ylst),classF1964);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T66 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),7,T63,T64,T65,T66,T67,T68,LITREF(lit_81));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T53 = CALL5(1,VARREF(YgooSmacrosYcat),T54,T55,T57,T61,LITREF(lit_81));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T81 = CALL1(1,VARREF(Ylst),classF1964);
  T79 = CALL3(1,VARREF(YgooSmacrosYcat),T80,T81,LITREF(lit_81));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T76 = CALL3(1,VARREF(YgooSmacrosYcat),T77,T78,LITREF(lit_81));
  T75 = CALL1(1,VARREF(Ylst),T76);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T83 = CALL1(1,VARREF(Ylst),classF1964);
  T74 = CALL4(1,VARREF(YgooSmacrosYcat),T75,T82,T83,LITREF(lit_81));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T84 = CALL1(1,VARREF(Ylst),DemptyF1965);
  T70 = CALL5(1,VARREF(YgooSmacrosYcat),T71,T72,T73,T84,LITREF(lit_81));
  T69 = CALL1(1,VARREF(Ylst),T70);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),6,T35,T36,T44,T52,T69,LITREF(lit_81));
  T31 = T34;
  T28 = T31;
  T5 = T28;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_of_34) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_line_of_35) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_of_setter_36) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooScolsSlstYline_pah) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_empty_39) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsSlstYDline_pah_empty));
}

FUNCODEDEF(YgooScolsSlstYline_pair) {
  P h_,t_,l_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  ARG(l_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSlstYLline_listG),VARREF(Yhead),h_,VARREF(Ytail),t_,VARREF(YgooScolsSlstYline_of),l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSlstYline_list) {
  P l_,elts_;
  P iF1967;
  P rF1966;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YgooScolsSlstYLline_listG));
  rF1966 = T2;
  T4 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  iF1967 = T3;
  for (;;) {
    P a105_0,a105_1;
  loop105:
    T7 = CALL2(1,VARREF(YgooSmagYL),iF1967,YPint((P)0));
    if (T7 != YPfalse) {
      T6 = rF1966;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),elts_,iF1967);
      T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T10,rF1966,l_);
      T11 = CALL2(1,VARREF(YgooSmathY_),iF1967,YPint((P)1));
      a105_0 = T9;
      a105_1 = T11;
      rF1966 = a105_0;
      iF1967 = a105_1;
      goto loop105;
      T6 = T8;
    }
    break;
  }
  T5 = T6;
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_42) {
  P l_,src_;
  P tmpF1972;
  P tmpF1971;
  P tF1970;
  P hF1969;
  P tmpF1968;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  tmpF1968 = T2;
  if (tmpF1968 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),src_);
    T4 = CALL1(1,VARREF(Ynot),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(Yhead),src_);
    hF1969 = T7;
    T9 = CALL1(1,VARREF(Ytail),src_);
    tF1970 = T9;
    T13 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF1969);
    tmpF1971 = T13;
    if (tmpF1971 != YPfalse) {
      T14 = tmpF1971;
    } else {
      T14 = l_;
    }
    T12 = T14;
    T11 = CALL2(0,FREEREF(0),T12,hF1969);
    T17 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF1970);
    tmpF1972 = T17;
    if (tmpF1972 != YPfalse) {
      T18 = tmpF1972;
    } else {
      T18 = l_;
    }
    T16 = T18;
    T15 = CALL2(0,FREEREF(0),T16,tF1970);
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

FUNCODEDEF(fun_line_list_of_43) {
  P ctx_,src_;
  P copyF1973;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
  T1 = FUNSHELL(1,fun_copy_42,1);
  copyF1973 = T1;
  FUNINIT(copyF1973, 1,copyF1973);
  T3 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T2 = CALL2(1,copyF1973,T3,src_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_line_list_of_44) {
  P ctx_,src_;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
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
DEFCREGS();
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
  T8 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPmet(FUNCODEREF(fun_len_0),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(37));
  T10 = VARREF_OR(YgooStypesYlen,YPfalse);
  T11 = fun_len_0;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YgooStypesYlen,T9);
  lit_10 = YPPsym((P)"elt-or");
  lit_11 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  T12 = YPsig(LITREF(lit_11),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPmet(FUNCODEREF(fun_elt_or_1),LITREF(lit_10),T12,ENVNUL,PNUL,sloc(41));
  T14 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T15 = fun_elt_or_1;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooScolsScolYelt_or,T13);
  lit_12 = YPPsym((P)"elt-setter");
  lit_13 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  T16 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_2 = YPmet(FUNCODEREF(fun_elt_setter_2),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(49));
  T18 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T19 = fun_elt_setter_2;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooScolsScolxYelt_setter,T17);
  lit_14 = YPPsym((P)"empty?");
  lit_15 = YPPlist(1,YPPsym((P)"c"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_3 = YPmet(FUNCODEREF(fun_emptyQ_3),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(57));
  T22 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T23 = fun_emptyQ_3;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooSmacrosYemptyQ,T21);
  lit_16 = YPPsym((P)"empty");
  lit_17 = YPPlist(1,YPPsym((P)"c"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T24 = YPsig(LITREF(lit_17),YPPlist(1,T25),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_4 = YPmet(FUNCODEREF(fun_empty_4),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(59));
  T27 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T28 = fun_empty_4;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooScolsScolYempty,T26);
  lit_18 = YPPsym((P)"fab");
  lit_19 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T29 = YPsig(LITREF(lit_19),YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_5 = YPmet(FUNCODEREF(fun_fab_5),LITREF(lit_18),T29,ENVNUL,PNUL,sloc(61));
  T32 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T33 = fun_fab_5;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooScolsScolYfab,T31);
  lit_20 = YPPsym((P)"fabs");
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T35 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T34 = YPsig(LITREF(lit_21),YPPlist(1,T35),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_6 = YPmet(FUNCODEREF(fun_fabs_6),LITREF(lit_20),T34,ENVNUL,PNUL,sloc(67));
  T37 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T38 = fun_fabs_6;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T38);
  VARSET(YgooSmathYfabs,T36);
  lit_22 = YPPsym((P)"<lst-enum>");
  T40 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T39 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_22),T40);
  VARSET(YgooScolsSlstYLlst_enumG,T39);
  lit_23 = YPPsym((P)"%dat");
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_7 = YPmet(FUNCODEREF(fun_Pdat_7),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(76));
  T43 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T44 = fun_Pdat_7;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YgooScolsSlstYPdat,T42);
  lit_25 = YPPsym((P)"%dat-setter");
  lit_26 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_8 = YPmet(FUNCODEREF(fun_Pdat_setter_8),LITREF(lit_25),T45,ENVNUL,PNUL,sloc(76));
  T47 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T48 = fun_Pdat_setter_8;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YgooScolsSlstYPdat_setter,T46);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"%key");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_9 = YPmet(FUNCODEREF(fun_Pkey_9),LITREF(lit_27),T49,ENVNUL,PNUL,sloc(77));
  T51 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T52 = fun_Pkey_9;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YgooScolsSlstYPkey,T50);
  lit_29 = YPPsym((P)"%key-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_10 = YPmet(FUNCODEREF(fun_Pkey_setter_10),LITREF(lit_29),T53,ENVNUL,PNUL,sloc(77));
  T55 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T56 = fun_Pkey_setter_10;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooScolsSlstYPkey_setter,T54);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T57 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T57,ENVNUL,PNUL,sloc(77));
  T58 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T58);
  lit_32 = YPPsym((P)"enum");
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_12 = YPmet(FUNCODEREF(fun_enum_12),LITREF(lit_32),T59,ENVNUL,PNUL,sloc(78));
  T61 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T62 = fun_enum_12;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooScolsScolYenum,T60);
  lit_34 = YPPsym((P)"fin?");
  lit_35 = YPPlist(1,YPPsym((P)"e"));
  T63 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_13 = YPmet(FUNCODEREF(fun_finQ_13),LITREF(lit_34),T63,ENVNUL,PNUL,sloc(80));
  T65 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T66 = fun_finQ_13;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YgooScolsScolYfinQ,T64);
  lit_36 = YPPsym((P)"nxt");
  lit_37 = YPPlist(1,YPPsym((P)"e"));
  T67 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_14 = YPmet(FUNCODEREF(fun_nxt_14),LITREF(lit_36),T67,ENVNUL,PNUL,sloc(82));
  T69 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T70 = fun_nxt_14;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YgooScolsScolYnxt,T68);
  lit_38 = YPPsym((P)"now");
  lit_39 = YPPlist(1,YPPsym((P)"e"));
  T71 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_15 = YPmet(FUNCODEREF(fun_now_15),LITREF(lit_38),T71,ENVNUL,PNUL,sloc(84));
  T73 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T74 = fun_now_15;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YgooScolsScolYnow,T72);
  lit_40 = YPPsym((P)"now-setter");
  lit_41 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T75 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_16 = YPmet(FUNCODEREF(fun_now_setter_16),LITREF(lit_40),T75,ENVNUL,PNUL,sloc(86));
  T77 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T78 = fun_now_setter_16;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YgooScolsScolYnow_setter,T76);
  lit_42 = YPPsym((P)"now-key");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T79 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_17 = YPmet(FUNCODEREF(fun_now_key_17),LITREF(lit_42),T79,ENVNUL,PNUL,sloc(88));
  T81 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T82 = fun_now_key_17;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YgooScolsScolYnow_key,T80);
  lit_44 = YPPsym((P)"add");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T83 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_18 = YPmet(FUNCODEREF(fun_add_18),LITREF(lit_44),T83,ENVNUL,PNUL,sloc(92));
  T85 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T86 = fun_add_18;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YgooScolsScolYadd,T84);
  lit_46 = YPPsym((P)"last");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T87 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_19 = YPmet(FUNCODEREF(fun_last_19),LITREF(lit_46),T87,ENVNUL,PNUL,sloc(95));
  T89 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T90 = fun_last_19;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YgooSmacrosYlast,T88);
  lit_48 = YPPsym((P)"rev!");
  lit_49 = YPPlist(1,YPPsym((P)"c"));
  T91 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_20 = YPmet(FUNCODEREF(fun_revX_20),LITREF(lit_48),T91,ENVNUL,PNUL,sloc(99));
  T93 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T94 = fun_revX_20;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T94);
  VARSET(YgooSmacrosYrevX,T92);
  lit_50 = YPPsym((P)"cat!");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_52 = YPPsym((P)"connect");
  lit_53 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T96 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_21 = YPmet(FUNCODEREF(fun_connect_21),LITREF(lit_52),T96,ENVNUL,PNUL,sloc(108));
  T95 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_22 = YPmet(FUNCODEREF(fun_catX_22),LITREF(lit_50),T95,ENVNUL,PNUL,sloc(107));
  T98 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T99 = fun_catX_22;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooScolsSseqxYcatX,T97);
  lit_54 = YPPlist(1,YPPsym((P)"objects"));
  T100 = YPsig(LITREF(lit_54),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_23 = YPmet(FUNCODEREF(fun_lst_23),LITREF(lit_0),T100,ENVNUL,PNUL,sloc(125));
  T102 = VARREF_OR(Ylst,YPfalse);
  T103 = fun_lst_23;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(Ylst,T101);
  lit_55 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T104 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_24 = YPmet(FUNCODEREF(fun_pair_24),LITREF(lit_2),T104,ENVNUL,PNUL,sloc(128));
  T106 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T107 = fun_pair_24;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSmacrosYpair,T105);
  lit_56 = YPPsym((P)"push!");
  lit_57 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T108 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_25 = YPmet(FUNCODEREF(fun_pushX_25),LITREF(lit_56),T108,ENVNUL,PNUL,sloc(131));
  T110 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T111 = fun_pushX_25;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YgooScolsSseqxYpushX,T109);
  lit_58 = YPPsym((P)"pop!");
  lit_59 = YPPlist(1,YPPsym((P)"c"));
  T113 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T112 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T113,Ynil);
  fun_popX_26 = YPmet(FUNCODEREF(fun_popX_26),LITREF(lit_58),T112,ENVNUL,PNUL,sloc(134));
  T115 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T116 = fun_popX_26;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T116);
  VARSET(YgooScolsSseqxYpopX,T114);
  lit_60 = YPPsym((P)"sort-by!");
  lit_61 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  T117 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_27 = YPmet(FUNCODEREF(fun_sort_byX_27),LITREF(lit_60),T117,ENVNUL,PNUL,sloc(138));
  T119 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T120 = fun_sort_byX_27;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T120);
  VARSET(YgooScolsSseqYsort_byX,T118);
  lit_62 = YPPsym((P)"to-str");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPsb((P)"(");
  lit_65 = YPsb((P)")");
  T123 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T122 = fun_to_str_28 = YPmet(FUNCODEREF(fun_to_str_28),LITREF(lit_62),T123,ENVNUL,PNUL,sloc(153));
  T126 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T127 = fun_to_str_28;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  T124 = VARSET(YgooSmathYto_str,T125);
  T121 = T124;
  return T121;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T0 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_29 = YPmet(FUNCODEREF(fun_assq_29),LITREF(lit_6),T0,ENVNUL,PNUL,sloc(160));
  T2 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T3 = fun_assq_29;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YgooScolsSlstYassq,T1);
  lit_67 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T4 = YPsig(LITREF(lit_67),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_30 = YPmet(FUNCODEREF(fun_assqn_30),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(167));
  T6 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T7 = fun_assqn_30;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooScolsSlstYassqn,T5);
  lit_68 = YPPlist(1,YPPsym((P)"exp"));
  lit_69 = YPPlist(1,YPPsym((P)"return"));
  lit_70 = YPPsym((P)"x-1308");
  lit_71 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_72 = YPPsym((P)"def-list");
  lit_73 = YPsb((P)"Match Pattern Failure");
  lit_74 = YPsb((P)"<");
  lit_75 = YPsb((P)">");
  lit_76 = YPsb((P)"$");
  lit_77 = YPsb((P)"-empty");
  lit_78 = YPPsym((P)"seq");
  lit_79 = YPPsym((P)"dc");
  lit_80 = YPPsym((P)"<lst>");
  lit_81 = Ynil;
  lit_82 = YPPsym((P)"dv");
  lit_83 = YPPsym((P)"new");
  lit_84 = YPPsym((P)"df");
  lit_85 = YPPsym((P)"h");
  lit_86 = YPPsym((P)"t");
  lit_87 = YPPsym((P)"head");
  lit_88 = YPPsym((P)"tail");
  lit_89 = YPPsym((P)"dm");
  lit_90 = YPPsym((P)"e");
  lit_91 = YPPsym((P)"t=");
  lit_92 = YPPsym((P)"=>");
  T10 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1308_31 = YPmet(FUNCODEREF(fun_x_1308_31),LITREF(lit_70),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_33;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T11);
  lit_93 = YPPsym((P)"line-of");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_34 = YPmet(FUNCODEREF(fun_line_of_34),LITREF(lit_93),T12,ENVNUL,PNUL,sloc(183));
  T14 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T15 = fun_line_of_34;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooScolsSlstYline_of,T13);
  lit_95 = YPPsym((P)"<line>");
  T17 = (P)YPpair(VARREF(YLmagG),Ynil);
  T16 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_95),T17);
  VARSET(YgooScolsSlstYLlineG,T16);
  lit_96 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_35 = YPmet(FUNCODEREF(fun_line_of_35),LITREF(lit_93),T18,ENVNUL,PNUL,sloc(186));
  T20 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T21 = fun_line_of_35;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YgooScolsSlstYline_of,T19);
  lit_97 = YPPsym((P)"line-of-setter");
  lit_98 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T23 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T22 = YPsig(LITREF(lit_98),YPPlist(2,T23,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_of_setter_36 = YPmet(FUNCODEREF(fun_line_of_setter_36),LITREF(lit_97),T22,ENVNUL,PNUL,sloc(186));
  T25 = VARREF_OR(YgooScolsSlstYline_of_setter,YPfalse);
  T26 = fun_line_of_setter_36;
  T24 = XCALL2(1,VARREF(YPdefine_method),T25,T26);
  VARSET(YgooScolsSlstYline_of_setter,T24);
  lit_99 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T27,ENVNUL,PNUL,sloc(186));
  T28 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T29 = fun_37;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),VARREF(YgooScolsSlstYline_of_setter),T28,T29);
  lit_100 = YPPsym((P)"<line-pah>");
  T32 = (P)YPpair(VARREF(YgooScolsSlstYLlineG),Ynil);
  T31 = (P)YPpair(VARREF(YLlstG),T32);
  T30 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_100),T31);
  VARSET(YgooScolsSlstYLline_pahG,T30);
  T33 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_empty,T33);
  lit_101 = YPPsym((P)"line-pah");
  lit_102 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T34 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPmet(FUNCODEREF(YgooScolsSlstYline_pah),LITREF(lit_101),T34,ENVNUL,PNUL,sloc(188));
  T35 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T35);
  lit_103 = YPPlist(1,YPPsym((P)"e"));
  T37 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T36 = YPsig(LITREF(lit_103),YPPlist(1,T37),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_empty_39 = YPmet(FUNCODEREF(fun_empty_39),LITREF(lit_16),T36,ENVNUL,PNUL,sloc(188));
  T39 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T40 = fun_empty_39;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooScolsScolYempty,T38);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_104 = YPPsym((P)"line-pair");
  lit_105 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T41 = YPsig(LITREF(lit_105),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPmet(FUNCODEREF(YgooScolsSlstYline_pair),LITREF(lit_104),T41,ENVNUL,PNUL,sloc(192));
  T42 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T42);
  lit_106 = YPPsym((P)"line-list");
  lit_107 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  T43 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPmet(FUNCODEREF(YgooScolsSlstYline_list),LITREF(lit_106),T43,ENVNUL,PNUL,sloc(194));
  T44 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T44);
  lit_108 = YPPsym((P)"line-list-of");
  lit_109 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_110 = YPPsym((P)"copy");
  lit_111 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T46 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_42 = YPmet(FUNCODEREF(fun_copy_42),LITREF(lit_110),T46,ENVNUL,PNUL,sloc(201));
  T45 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_43 = YPmet(FUNCODEREF(fun_line_list_of_43),LITREF(lit_108),T45,ENVNUL,PNUL,sloc(200));
  T48 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T49 = fun_line_list_of_43;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooScolsSlstYline_list_of,T47);
  lit_112 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T50 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_44 = YPmet(FUNCODEREF(fun_line_list_of_44),LITREF(lit_108),T50,ENVNUL,PNUL,sloc(207));
  T52 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T53 = fun_line_list_of_44;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooScolsSlstYline_list_of,T51);
  T54 = YPfalse;
  return T54;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
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
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
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
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
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
  {"t=", &module_info_gooStypes, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
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
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
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
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"def-list", PVAR, NULL},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"---main-0---", PVAR, NULL},
  {"line-of-setter", CVAR, &YgooScolsSlstYline_of_setter},
  {"---main-1---", PVAR, NULL},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {"$line-pah-empty", CVAR, &YgooScolsSlstYDline_pah_empty},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<line>", NULL},
  {"tail", NULL},
  {"line-list", NULL},
  {"line-of", NULL},
  {"line-pair", NULL},
  {"def-list", NULL},
  {"head-setter", NULL},
  {"list", NULL},
  {"head", NULL},
  {"nil", NULL},
  {"assqn", NULL},
  {"<list>", NULL},
  {"pair", NULL},
  {"assq", NULL},
  {"<line-list>", NULL},
  {"lst", NULL},
  {"line-list-of", NULL},
  {"tail-setter", NULL},
  {"<lst>", NULL},
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
