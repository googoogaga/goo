/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seqx");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seqx */

EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ynew,"goo/boot","new");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yclass_parents,"goo/boot","class-parents");
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
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
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
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooStypesYtQ,"goo/types","t?");
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
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtL,"goo/types","t<");
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
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
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
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
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
DEF(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
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
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
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
DEF(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooStypesYas,"goo/types","as");
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
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYmap,"goo/macros","map");
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
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_40);
DEFLIT(lit_46);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_44);
DEFLIT(lit_28);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_4);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_21);
DEFLIT(lit_27);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_39);
DEFLIT(lit_45);
DEFLIT(lit_35);
DEFLIT(lit_6);
DEFLIT(lit_20);
DEFLIT(lit_50);
DEFLIT(lit_13);
DEFLIT(lit_30);
DEFLIT(lit_22);
DEFLIT(lit_48);
DEFLIT(lit_49);
DEFLIT(lit_38);
DEFLIT(lit_23);
DEFLIT(lit_14);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_16);
DEFLIT(lit_47);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_43);
DEFLIT(lit_36);
DEFLIT(lit_11);
DEFLIT(lit_31);
DEFLIT(lit_17);
DEFLIT(lit_33);
DEFLIT(lit_26);
DEFLIT(lit_3);

/* FUNCTIONS: */

LOCFOR(fun_revX_0);
LOCFOR(fun_catX_1);
LOCFOR(fun_pushX_2);
LOCFOR(fun_popX_3);
LOCFOR(fun_insX_4);
LOCFOR(fun_del_valsX_5);
LOCFOR(fun_del_dupsX_6);
LOCFOR(fun_in_7);
LOCFOR(fun_into_8);
LOCFOR(fun_in_9);
LOCFOR(fun_find_10);
LOCFOR(fun_onto_11);
LOCFOR(fun_skip_12);
LOCFOR(fun_insert_13);
LOCFOR(fun_copy_14);
LOCFOR(fun_sub_setter_15);
LOCFOR(fun_subT_setter_16);
LOCFOR(fun_sortX_17);
LOCFOR(fun_in_18);
LOCFOR(fun_alter_19);
extern P YgooScolsSseqxY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_revX_0) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYrev),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_1) {
  P x_,more_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_2) {
  P l_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYpush),l_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_3) {
  P l_;
  P T0;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYpop),l_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insX_4) {
  P x_,v_,before_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,v_,before_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_valsX_5) {
  P x_,v_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYdel_vals),x_,v_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_dupsX_6) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_7) {
  P ed_,es_;
  P tmpF1794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ed_, 0);
  ARG(es_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),es_);
  tmpF1794 = T2;
  if (tmpF1794 != YPfalse) {
    T3 = tmpF1794;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ed_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),es_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,ed_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),ed_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),es_);
    a1 = T7;
    a2 = T8;
    ed_ = a1;
    es_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_into_8) {
  P dst_,src_;
  P inF1795;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
loop:
  T1 = FUNSHELL(1,fun_in_7,2);
  inF1795 = T1;
  FUNINIT(inF1795, 2,dst_,inF1795);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL2(0,inF1795,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_9) {
  P d_,s_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T2,d_);
    T4 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T4;
    a2 = T5;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_10) {
  P d_,i_;
  P inF1796;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_in_9,2);
    inF1796 = T3;
    FUNINIT(inF1796, 2,FREEREF(1),inF1796);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(2));
    T4 = CALL2(0,inF1796,d_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T8 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_onto_11) {
  P nd_,d_,i_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T0 = FREEREF(1);
  } else {
    T2 = CALL1(1,VARREF(YgooScolsScolYnow),d_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T2,nd_);
    T4 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T5 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    a3 = T6;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_skip_12) {
  P d_,i_;
  P ontoF1797;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_onto_11,3);
    ontoF1797 = T3;
    FUNINIT(ontoF1797, 3,FREEREF(1),FREEREF(2),ontoF1797);
    T4 = CALL3(0,ontoF1797,FREEREF(3),d_,FREEREF(0));
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    d_ = a1;
    i_ = a2;
    goto loop;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_13) {
  P nd_,s_;
  P skipF1798;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(nd_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_skip_12,5);
    skipF1798 = T3;
    FUNINIT(skipF1798, 5,FREEREF(0),FREEREF(1),FREEREF(2),nd_,skipF1798);
    T4 = CALL2(0,skipF1798,FREEREF(3),FREEREF(4));
    T2 = T4;
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,nd_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T7;
    a2 = T8;
    nd_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_14) {
  P nd_,d_,i_;
  P insertF1799;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(nd_, 0);
  ARG(d_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_insert_13,6);
    insertF1799 = T3;
    FUNINIT(insertF1799, 6,FREEREF(1),FREEREF(2),FREEREF(3),d_,FREEREF(0),insertF1799);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(4));
    T4 = CALL2(0,insertF1799,nd_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),d_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T6,nd_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),nd_);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T10 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T8;
    a2 = T9;
    a3 = T10;
    nd_ = a1;
    d_ = a2;
    i_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_setter_15) {
  P src_,dst_,from_,below_;
  P copyF1806;
  P ndstF1805;
  P new_lenF1804;
  P findF1803;
  P del_lenF1802;
  P src_lenF1801;
  P dst_lenF1800;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  check_type(T1,VARREF(YLintG));
  dst_lenF1800 = T1;
  T3 = CALL1(1,VARREF(YgooStypesYlen),src_);
  check_type(T3,VARREF(YLintG));
  src_lenF1801 = T3;
  T5 = CALL2(1,VARREF(YgooSmathY_),below_,from_);
  check_type(T5,VARREF(YLintG));
  del_lenF1802 = T5;
  T7 = CALL2(1,VARREF(YgooSmathYE),del_lenF1802,src_lenF1801);
  if (T7 != YPfalse) {
    T9 = FUNSHELL(1,fun_find_10,4);
    findF1803 = T9;
    FUNINIT(findF1803, 4,from_,dst_,src_,findF1803);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    T10 = CALL2(0,findF1803,T11,YPint((P)0));
    T8 = T10;
    T6 = T8;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathY_),dst_lenF1800,del_lenF1802);
    T13 = CALL2(1,VARREF(YgooSmathYA),T14,src_lenF1801);
    new_lenF1804 = T13;
    T17 = CALL1(1,VARREF(Yclass_of),dst_);
    T16 = CALL2(1,VARREF(YgooScolsScolYfab),T17,new_lenF1804);
    ndstF1805 = T16;
    T19 = FUNSHELL(1,fun_copy_14,6);
    copyF1806 = T19;
    FUNINIT(copyF1806, 6,from_,below_,dst_lenF1800,ndstF1805,src_,copyF1806);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),ndstF1805);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    T20 = CALL3(0,copyF1806,T21,T22,YPint((P)0));
    T18 = T20;
    T15 = T18;
    T12 = T15;
    T6 = T12;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subT_setter_16) {
  P src_,dst_,from_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  T0 = CALL4(1,VARREF(YgooScolsSseqxYsub_setter),src_,dst_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sortX_17) {
  P items_;
  P T0;
  P a1;
LINK_STACK();
  ARG(items_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),items_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_in_18) {
  P d_,s_;
  P tmpF1807;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),d_);
  tmpF1807 = T2;
  if (tmpF1807 != YPfalse) {
    T3 = tmpF1807;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),s_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),s_);
    CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,d_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),d_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),s_);
    a1 = T7;
    a2 = T8;
    d_ = a1;
    s_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_alter_19) {
  P dst_,src_,from_,below_;
  P inF1808;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
loop:
  T1 = FUNSHELL(1,fun_in_18,2);
  inF1808 = T1;
  FUNINIT(inF1808, 2,dst_,inF1808);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  T2 = CALL2(0,inF1808,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"rev!");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYrevX,T0);
  lit_2 = YPPsym((P)"cat!");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYcatX,T2);
  lit_4 = YPPsym((P)"push!");
  lit_5 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYpushX,T4);
  lit_6 = YPPsym((P)"pop!");
  lit_7 = YPPlist(1,YPPsym((P)"l"));
  T8 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T8,Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYpopX,T6);
  lit_8 = YPPsym((P)"sub-setter");
  lit_9 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T10 = YPsig(LITREF(lit_9),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYsub_setter,T9);
  lit_10 = YPPsym((P)"sub*-setter");
  lit_11 = YPPlist(3,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"));
  T12 = YPsig(LITREF(lit_11),YPPlist(3,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T11 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T12,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYsubT_setter,T11);
  lit_12 = YPPsym((P)"ins!");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"e"),YPPsym((P)"before"));
  T14 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYinsX,T13);
  lit_14 = YPPsym((P)"del-vals!");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T16 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T15 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T16,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYdel_valsX,T15);
  lit_16 = YPPsym((P)"del-dups!");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T17 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T18,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYdel_dupsX,T17);
  lit_18 = YPPsym((P)"sort!");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  T19 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T20,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYsortX,T19);
  lit_20 = YPPsym((P)"sort-by!");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"test"));
  T22 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort_byX,T21);
  lit_22 = YPPsym((P)"alter");
  lit_23 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T24 = YPsig(LITREF(lit_23),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqxYalter,T23);
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_revX_0 = YPmet(FUNCODEREF(fun_revX_0),LITREF(lit_0),T25,ENVNUL,PNUL,sloc(43));
  T28 = BOUNDP(YgooSmacrosYrevX);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSmacrosYrevX);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_revX_0;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSmacrosYrevX,T26);
  lit_25 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T30 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_catX_1 = YPmet(FUNCODEREF(fun_catX_1),LITREF(lit_2),T30,ENVNUL,PNUL,sloc(44));
  T33 = BOUNDP(YgooScolsSseqxYcatX);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_catX_1;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooScolsSseqxYcatX,T31);
  lit_26 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_pushX_2 = YPmet(FUNCODEREF(fun_pushX_2),LITREF(lit_4),T35,ENVNUL,PNUL,sloc(45));
  T38 = BOUNDP(YgooScolsSseqxYpushX);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_pushX_2;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooScolsSseqxYpushX,T36);
  lit_27 = YPPlist(1,YPPsym((P)"l"));
  T41 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T40 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T41,Ynil);
  fun_popX_3 = YPmet(FUNCODEREF(fun_popX_3),LITREF(lit_6),T40,ENVNUL,PNUL,sloc(46));
  T44 = BOUNDP(YgooScolsSseqxYpopX);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_popX_3;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooScolsSseqxYpopX,T42);
  lit_28 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T46 = YPsig(LITREF(lit_28),YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_insX_4 = YPmet(FUNCODEREF(fun_insX_4),LITREF(lit_12),T46,ENVNUL,PNUL,sloc(47));
  T49 = BOUNDP(YgooScolsSseqxYinsX);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooScolsSseqxYinsX);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_insX_4;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooScolsSseqxYinsX,T47);
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T51 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_del_valsX_5 = YPmet(FUNCODEREF(fun_del_valsX_5),LITREF(lit_14),T51,ENVNUL,PNUL,sloc(48));
  T54 = BOUNDP(YgooScolsSseqxYdel_valsX);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooScolsSseqxYdel_valsX);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_del_valsX_5;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooScolsSseqxYdel_valsX,T52);
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_del_dupsX_6 = YPmet(FUNCODEREF(fun_del_dupsX_6),LITREF(lit_16),T56,ENVNUL,PNUL,sloc(49));
  T59 = BOUNDP(YgooScolsSseqxYdel_dupsX);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooScolsSseqxYdel_dupsX);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_del_dupsX_6;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooScolsSseqxYdel_dupsX,T57);
  lit_31 = YPPsym((P)"into");
  lit_32 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  lit_33 = YPPsym((P)"in");
  lit_34 = YPPlist(2,YPPsym((P)"ed"),YPPsym((P)"es"));
  T62 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_7 = YPmet(FUNCODEREF(fun_in_7),LITREF(lit_33),T62,ENVNUL,PNUL,sloc(52));
  T61 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLseqXG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_into_8 = YPmet(FUNCODEREF(fun_into_8),LITREF(lit_31),T61,ENVNUL,PNUL,sloc(51));
  T65 = BOUNDP(YgooScolsScolYinto);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooScolsScolYinto);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_into_8;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooScolsScolYinto,T63);
  lit_35 = YPPlist(4,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"),YPPsym((P)"below"));
  lit_36 = YPPsym((P)"find");
  lit_37 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"i"));
  lit_38 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"s"));
  lit_39 = YPPsym((P)"copy");
  lit_40 = YPPlist(3,YPPsym((P)"nd"),YPPsym((P)"d"),YPPsym((P)"i"));
  lit_41 = YPPsym((P)"insert");
  lit_42 = YPPlist(2,YPPsym((P)"nd"),YPPsym((P)"s"));
  lit_43 = YPPsym((P)"skip");
  lit_44 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"i"));
  lit_45 = YPPsym((P)"onto");
  lit_46 = YPPlist(3,YPPsym((P)"nd"),YPPsym((P)"d"),YPPsym((P)"i"));
  T73 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_in_9 = YPmet(FUNCODEREF(fun_in_9),LITREF(lit_33),T73,ENVNUL,PNUL,sloc(65));
  T72 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_10 = YPmet(FUNCODEREF(fun_find_10),LITREF(lit_36),T72,ENVNUL,PNUL,sloc(63));
  T71 = YPsig(LITREF(lit_46),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_onto_11 = YPmet(FUNCODEREF(fun_onto_11),LITREF(lit_45),T71,ENVNUL,PNUL,sloc(79));
  T70 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_skip_12 = YPmet(FUNCODEREF(fun_skip_12),LITREF(lit_43),T70,ENVNUL,PNUL,sloc(77));
  T69 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_13 = YPmet(FUNCODEREF(fun_insert_13),LITREF(lit_41),T69,ENVNUL,PNUL,sloc(75));
  T68 = YPsig(LITREF(lit_40),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_14 = YPmet(FUNCODEREF(fun_copy_14),LITREF(lit_39),T68,ENVNUL,PNUL,sloc(73));
  T67 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  fun_sub_setter_15 = YPmet(FUNCODEREF(fun_sub_setter_15),LITREF(lit_8),T67,ENVNUL,PNUL,sloc(58));
  T76 = BOUNDP(YgooScolsSseqxYsub_setter);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooScolsSseqxYsub_setter);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_sub_setter_15;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooScolsSseqxYsub_setter,T74);
  lit_47 = YPPlist(3,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"));
  T78 = YPsig(LITREF(lit_47),YPPlist(3,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_subT_setter_16 = YPmet(FUNCODEREF(fun_subT_setter_16),LITREF(lit_10),T78,ENVNUL,PNUL,sloc(90));
  T81 = BOUNDP(YgooScolsSseqxYsubT_setter);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooScolsSseqxYsubT_setter);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_subT_setter_16;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooScolsSseqxYsubT_setter,T79);
  lit_48 = YPPlist(1,YPPsym((P)"items"));
  T83 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_sortX_17 = YPmet(FUNCODEREF(fun_sortX_17),LITREF(lit_18),T83,ENVNUL,PNUL,sloc(93));
  T86 = BOUNDP(YgooScolsSseqxYsortX);
  if (T86 != YPfalse) {
    T85 = VARREF(YgooScolsSseqxYsortX);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_sortX_17;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(YgooScolsSseqxYsortX,T84);
  lit_49 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  lit_50 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"s"));
  T92 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T91 = fun_in_18 = YPmet(FUNCODEREF(fun_in_18),LITREF(lit_33),T92,ENVNUL,PNUL,sloc(102));
  T90 = YPsig(LITREF(lit_49),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T89 = fun_alter_19 = YPmet(FUNCODEREF(fun_alter_19),LITREF(lit_22),T90,ENVNUL,PNUL,sloc(101));
  T96 = BOUNDP(YgooScolsSseqxYalter);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooScolsSseqxYalter);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_alter_19;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  T93 = VARSET(YgooScolsSseqxYalter,T94);
  T88 = T93;
  return T88;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
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
  {"%i>>", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
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
  {"<flat>", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"t?", &module_info_gooStypes, NULL},
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
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
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
  {"1st", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSmath, NULL},
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
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
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
  {"%gen-src", &module_info_gooSboot, NULL},
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
  {"key-type", &module_info_gooScolsScol, NULL},
  {"as", &module_info_gooStypes, NULL},
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
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
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
  {"sqrt", &module_info_gooSmath, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
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
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
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
  {"sub*-setter", CVAR, &YgooScolsSseqxYsubT_setter},
  {"---main-0---", PVAR, NULL},
  {"push!", CVAR, &YgooScolsSseqxYpushX},
  {"pop!", CVAR, &YgooScolsSseqxYpopX},
  {"alter", CVAR, &YgooScolsSseqxYalter},
  {"cat!", CVAR, &YgooScolsSseqxYcatX},
  {"sort!", CVAR, &YgooScolsSseqxYsortX},
  {"del-dups!", CVAR, &YgooScolsSseqxYdel_dupsX},
  {"del-vals!", CVAR, &YgooScolsSseqxYdel_valsX},
  {"sub-setter", CVAR, &YgooScolsSseqxYsub_setter},
  {"ins!", CVAR, &YgooScolsSseqxYinsX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sub*-setter", NULL},
  {"push!", NULL},
  {"pop!", NULL},
  {"alter", NULL},
  {"sort-by!", NULL},
  {"cat!", NULL},
  {"sort!", NULL},
  {"rev!", NULL},
  {"del-dups!", NULL},
  {"del-vals!", NULL},
  {"sub-setter", NULL},
  {"ins!", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseqx;
MODULE_INFO module_info_gooScolsSseqx = {
  "goo/cols/seqx",
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

/* EXPRESSION: */

extern void load_module_gooScolsSseqx (void);

void load_module_gooScolsSseqx (void) {
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

  (P)YgooScolsSseqxY___main_0___();

}

/* END OF GENERATED CODE. */
