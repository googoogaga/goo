/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/port");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
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
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
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
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmathYLL,"goo/math","<<");
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
EXT(Yclass_of,"goo/boot","class-of");
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
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSioSportYput,"goo/io/port","put");
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
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
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
DEF(YgooSioSportYopen,"goo/io/port","open");
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
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
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
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
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
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
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
DEF(YgooSioSportYnewline,"goo/io/port","newline");
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
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
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
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_34);
DEFLIT(lit_57);
DEFLIT(lit_42);
DEFLIT(lit_30);
DEFLIT(lit_56);
DEFLIT(lit_16);
DEFLIT(lit_64);
DEFLIT(lit_14);
DEFLIT(lit_38);
DEFLIT(lit_79);
DEFLIT(lit_60);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_50);
DEFLIT(lit_52);
DEFLIT(lit_89);
DEFLIT(lit_39);
DEFLIT(lit_31);
DEFLIT(lit_59);
DEFLIT(lit_72);
DEFLIT(lit_18);
DEFLIT(lit_45);
DEFLIT(lit_55);
DEFLIT(lit_51);
DEFLIT(lit_4);
DEFLIT(lit_62);
DEFLIT(lit_13);
DEFLIT(lit_58);
DEFLIT(lit_41);
DEFLIT(lit_21);
DEFLIT(lit_17);
DEFLIT(lit_76);
DEFLIT(lit_75);
DEFLIT(lit_9);
DEFLIT(lit_70);
DEFLIT(lit_43);
DEFLIT(lit_44);
DEFLIT(lit_35);
DEFLIT(lit_29);
DEFLIT(lit_83);
DEFLIT(lit_19);
DEFLIT(lit_71);
DEFLIT(lit_47);
DEFLIT(lit_53);
DEFLIT(lit_49);
DEFLIT(lit_86);
DEFLIT(lit_0);
DEFLIT(lit_33);
DEFLIT(lit_84);
DEFLIT(lit_46);
DEFLIT(lit_74);
DEFLIT(lit_88);
DEFLIT(lit_69);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_40);
DEFLIT(lit_66);
DEFLIT(lit_1);
DEFLIT(lit_22);
DEFLIT(lit_81);
DEFLIT(lit_23);
DEFLIT(lit_15);
DEFLIT(lit_68);
DEFLIT(lit_37);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_85);
DEFLIT(lit_87);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_48);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_54);
DEFLIT(lit_61);
DEFLIT(lit_90);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_82);
DEFLIT(lit_10);
DEFLIT(lit_25);
DEFLIT(lit_65);
DEFLIT(lit_20);
DEFLIT(lit_36);
DEFLIT(lit_80);
DEFLIT(lit_27);
DEFLIT(lit_73);
DEFLIT(lit_78);
DEFLIT(lit_67);
DEFLIT(lit_77);
DEFLIT(lit_32);

/* FUNCTIONS: */

LOCFOR(fun_port_line_0);
LOCFOR(fun_port_line_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_port_handle_3);
LOCFOR(fun_port_handle_setter_4);
LOCFOR(fun_close_5);
LOCFOR(fun_port_guts_6);
LOCFOR(fun_port_guts_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_port_index_9);
LOCFOR(fun_port_index_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_loop_12);
LOCFOR(fun_gets_13);
LOCFOR(fun_open_14);
LOCFOR(fun_open_15);
LOCFOR(fun_close_16);
LOCFOR(fun_close_17);
LOCFOR(fun_x_1377_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_get_21);
LOCFOR(fun_peek_22);
LOCFOR(fun_readyQ_23);
LOCFOR(fun_newline_24);
LOCFOR(fun_force_out_25);
LOCFOR(fun_put_26);
LOCFOR(fun_puts_27);
LOCFOR(fun_port_contents_28);
LOCFOR(fun_open_29);
LOCFOR(fun_open_30);
LOCFOR(fun_peek_31);
LOCFOR(fun_get_32);
LOCFOR(fun_readyQ_33);
LOCFOR(fun_put_34);
LOCFOR(fun_puts_35);
LOCFOR(fun_x_1383_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
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
  QRET(YPint((P)1));
}

FUNCODEDEF(fun_port_handle_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_5) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_port_guts_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_42));
}

FUNCODEDEF(fun_port_index_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_loop_12) {
  P res_,c_;
  P tmpF2230;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),c_);
  tmpF2230 = T2;
  if (tmpF2230 != YPfalse) {
    T3 = tmpF2230;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)10));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),c_,res_);
    T9 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
    a1 = T8;
    a2 = T9;
    res_ = a1;
    c_ = a2;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gets_13) {
  P port_;
  P loopF2231;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_12,2);
  loopF2231 = T1;
  FUNINIT(loopF2231, 2,port_,loopF2231);
  T3 = CALL1(1,VARREF(YgooSioSportYget),port_);
  T2 = CALL2(0,loopF2231,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_14) {
  P t_,filename_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_in_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_15) {
  P t_,filename_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_out_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_16) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_17) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1377_18) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_63),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1376F2246;
  P x_1376F2245;
  P x_1376F2244;
  P x_1376F2243;
  P x_1376F2242;
  P x_1376F2241;
  P x_1376F2240;
  P x_1376F2239;
  P x_1376F2238;
  P x_1376F2237;
  P bodyF2236;
  P portF2235;
  P nameF2234;
  P x_1376F2233;
  P x_1377F2232;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1377_18,2);
  x_1377F2232 = T1;
  FUNINIT(x_1377F2232, 2,FREEREF(0),return_);
  x_1376F2233 = FREEREF(0);
  nameF2234 = YPfalse;
  nameF2234 = BOXFAB(nameF2234);
  portF2235 = YPfalse;
  portF2235 = BOXFAB(portF2235);
  bodyF2236 = YPfalse;
  bodyF2236 = BOXFAB(bodyF2236);
  T9 = CALL2(1,VARREF(YisaQ),x_1376F2233,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1376F2233,LITREF(lit_63),x_1377F2232);
    x_1376F2237 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1376F2237,x_1377F2232);
    x_1376F2238 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1376F2238,x_1377F2232);
    BOXVAL(nameF2234) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1376F2238);
    x_1376F2239 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1376F2239,x_1377F2232);
    BOXVAL(portF2235) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1376F2239);
    x_1376F2240 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1376F2240,x_1377F2232);
    x_1376F2241 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2241,x_1377F2232);
    T23 = CALL1(1,VARREF(Ytail),x_1376F2240);
    x_1376F2242 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2242,x_1377F2232);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1376F2237);
    x_1376F2243 = T25;
    BOXVAL(bodyF2236) = x_1376F2243;
    x_1376F2244 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1376F2244,x_1377F2232);
    x_1376F2245 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2245,x_1377F2232);
    T30 = CALL1(1,VARREF(Ytail),x_1376F2244);
    x_1376F2246 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2246,x_1377F2232);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1377F2232,LITREF(lit_64),x_1376F2233);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T40 = BOXVAL(nameF2234);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = CALL1(1,VARREF(Ylst),YPfalse);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T41,LITREF(lit_66));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_66));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T52 = BOXVAL(nameF2234);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T54 = BOXVAL(portF2235);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T53,LITREF(lit_66));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T55 = BOXVAL(bodyF2236);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T55,LITREF(lit_66));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T60 = BOXVAL(nameF2234);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T65 = BOXVAL(nameF2234);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,LITREF(lit_66));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T61,LITREF(lit_66));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T56,LITREF(lit_66));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_66));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_19,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_21) {
  P port_;
  P x_1378F2251;
  P cF2250;
  P tF2249;
  P xF2248;
  P xF2247;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  xF2247 = T2;
  xF2248 = xF2247;
  tF2249 = (P)2;
  T6 = (P)YPiLL(xF2248,(P)2);
  T5 = (P)YPiv(T6,tF2249);
  T4 = T5;
  T1 = T4;
  cF2250 = T1;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),cF2250,YPchr((P)10));
  if (T7 != YPfalse) {
    x_1378F2251 = port_;
    T11 = CALL1(1,VARREF(YgooSioSportYport_line),x_1378F2251);
    T10 = CALL2(1,VARREF(YgooSmathYA),T11,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T10,x_1378F2251);
    T8 = T9;
  } else {
  }
  T0 = cF2250;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_22) {
  P port_;
  P tF2254;
  P xF2253;
  P xF2252;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPpeek(T2);
  xF2252 = T1;
  xF2253 = xF2252;
  tF2254 = (P)2;
  T5 = (P)YPiLL(xF2253,(P)2);
  T4 = (P)YPiv(T5,tF2254);
  T3 = T4;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_23) {
  P port_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_24) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_out_25) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_26) {
  P port_,c_;
  P xF2256;
  P xF2255;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF2255 = c_;
  xF2256 = xF2255;
  T4 = (P)YPiGG(xF2256,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_27) {
  P port_,s_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_contents_28) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_29) {
  P t_,dat_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_30) {
  P t_,dat_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),dat_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_out_portG),VARREF(YgooSioSportYport_guts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_31) {
  P port_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T7 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T8 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),T7,T8);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_get_32) {
  P port_;
  P x_1379F2258;
  P resF2257;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T8 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T9 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,T9);
    resF2257 = T7;
    x_1379F2258 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_1379F2258);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_1379F2258);
    T6 = resF2257;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_33) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_34) {
  P port_,c_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYaddX),T2,c_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_35) {
  P port_,s_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T2,s_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1383_36) {
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

FUNCODEDEF(fun_37) {
  P return_;
  P x_1382F2267;
  P x_1382F2266;
  P x_1382F2265;
  P x_1382F2264;
  P x_1382F2263;
  P bodyF2262;
  P nameF2261;
  P x_1382F2260;
  P x_1383F2259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1383_36,2);
  x_1383F2259 = T1;
  FUNINIT(x_1383F2259, 2,FREEREF(0),return_);
  x_1382F2260 = FREEREF(0);
  nameF2261 = YPfalse;
  nameF2261 = BOXFAB(nameF2261);
  bodyF2262 = YPfalse;
  bodyF2262 = BOXFAB(bodyF2262);
  T7 = CALL2(1,VARREF(YisaQ),x_1382F2260,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1382F2260,LITREF(lit_90),x_1383F2259);
    x_1382F2263 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1382F2263,x_1383F2259);
    BOXVAL(nameF2261) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1382F2263);
    x_1382F2264 = T12;
    BOXVAL(bodyF2262) = x_1382F2264;
    x_1382F2265 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1382F2265,x_1383F2259);
    x_1382F2266 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1382F2266,x_1383F2259);
    T17 = CALL1(1,VARREF(Ytail),x_1382F2265);
    x_1382F2267 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1382F2267,x_1383F2259);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1383F2259,LITREF(lit_64),x_1382F2260);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T27 = BOXVAL(nameF2261);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_66));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_66));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_66));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T33 = BOXVAL(bodyF2262);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T38 = BOXVAL(nameF2261);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_66));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T33,T34,LITREF(lit_66));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"name"));
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
  T3 = YPsig(LITREF(lit_2),YPPlist(2,T4,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLportG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYopen,T2);
  lit_3 = YPPsym((P)"close");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYclose,T5);
  lit_5 = YPPsym((P)"<in-port>");
  T8 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_6 = YPPsym((P)"port-line");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPmet(FUNCODEREF(fun_port_line_0),LITREF(lit_6),T9,ENVNUL,PNUL,sloc(13));
  T12 = BOUNDP(YgooSioSportYport_line);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSioSportYport_line);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSioSportYport_line,T10);
  lit_8 = YPPsym((P)"port-line-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_8),T14,ENVNUL,PNUL,sloc(13));
  T17 = BOUNDP(YgooSioSportYport_line_setter);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSioSportYport_line_setter);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_port_line_setter_1;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSioSportYport_line_setter,T15);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T19,ENVNUL,PNUL,sloc(13));
  T20 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T20);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPlist(1,YPPsym((P)"port"));
  T22 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYget,T21);
  lit_13 = YPPsym((P)"gets");
  lit_14 = YPPlist(1,YPPsym((P)"port"));
  T24 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYgets,T23);
  lit_15 = YPPsym((P)"peek");
  lit_16 = YPPlist(1,YPPsym((P)"port"));
  T26 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYpeek,T25);
  lit_17 = YPPsym((P)"ready?");
  lit_18 = YPPlist(1,YPPsym((P)"port"));
  T28 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T27 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T28,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYreadyQ,T27);
  lit_19 = YPPsym((P)"<out-port>");
  T30 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T29 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_19),T30);
  VARSET(YgooSioSportYLout_portG,T29);
  lit_20 = YPPsym((P)"newline");
  lit_21 = YPPlist(1,YPPsym((P)"port"));
  T32 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T31);
  lit_22 = YPPsym((P)"force-out");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T34 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T33);
  lit_24 = YPPsym((P)"put");
  lit_25 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T36 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T35);
  lit_26 = YPPsym((P)"puts");
  lit_27 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T38 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T37);
  lit_28 = YPPsym((P)"<file-port>");
  T40 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T39 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_28),T40);
  VARSET(YgooSioSportYLfile_portG,T39);
  lit_29 = YPPsym((P)"port-handle");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_3 = YPmet(FUNCODEREF(fun_port_handle_3),LITREF(lit_29),T41,ENVNUL,PNUL,sloc(13));
  T44 = BOUNDP(YgooSioSportYport_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYport_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_port_handle_3;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYport_handle,T42);
  lit_31 = YPPsym((P)"port-handle-setter");
  lit_32 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_handle_setter_4 = YPmet(FUNCODEREF(fun_port_handle_setter_4),LITREF(lit_31),T46,ENVNUL,PNUL,sloc(13));
  T49 = BOUNDP(YgooSioSportYport_handle_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSioSportYport_handle_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_port_handle_setter_4;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSioSportYport_handle_setter,T47);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLportG),VARREF(YgooSioSportYport_handle),VARREF(YgooSioSportYport_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_33 = YPPlist(1,YPPsym((P)"port"));
  T51 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_3),T51,ENVNUL,PNUL,sloc(37));
  T54 = BOUNDP(YgooSioSportYclose);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYclose);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_close_5;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYclose,T52);
  lit_34 = YPPsym((P)"<file-in-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T57 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T58);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_34),T57);
  VARSET(YgooSioSportYLfile_in_portG,T56);
  lit_35 = YPPsym((P)"<file-out-port>");
  T61 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T61);
  T59 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T60);
  VARSET(YgooSioSportYLfile_out_portG,T59);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_36 = YPPsym((P)"<str-port>");
  T63 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T63);
  VARSET(YgooSioSportYLstr_portG,T62);
  lit_37 = YPPsym((P)"port-guts");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_6 = YPmet(FUNCODEREF(fun_port_guts_6),LITREF(lit_37),T64,ENVNUL,PNUL,sloc(48));
  T67 = BOUNDP(YgooSioSportYport_guts);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYport_guts);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_port_guts_6;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYport_guts,T65);
  lit_39 = YPPsym((P)"port-guts-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_7 = YPmet(FUNCODEREF(fun_port_guts_setter_7),LITREF(lit_39),T69,ENVNUL,PNUL,sloc(48));
  T72 = BOUNDP(YgooSioSportYport_guts_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYport_guts_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_port_guts_setter_7;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYport_guts_setter,T70);
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  lit_42 = YPsb((P)"");
  T74 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T74,ENVNUL,PNUL,sloc(48));
  T75 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T75);
  lit_43 = YPPsym((P)"port-contents");
  lit_44 = YPPlist(1,YPPsym((P)"port"));
  T79 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T78 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T79,Ynil,YPfalse,YPfalse,YPfalse);
  T77 = VARSET(YgooSioSportYport_contents,T78);
  T76 = T77;
  return T76;
}

P YgooSioSportY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139;
DEFCREGS();
loop:
  lit_45 = YPPsym((P)"<str-in-port>");
  T2 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T1 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_45),T1);
  VARSET(YgooSioSportYLstr_in_portG,T0);
  lit_46 = YPPsym((P)"port-index");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T3 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_9 = YPmet(FUNCODEREF(fun_port_index_9),LITREF(lit_46),T3,ENVNUL,PNUL,sloc(50));
  T6 = BOUNDP(YgooSioSportYport_index);
  if (T6 != YPfalse) {
    T5 = VARREF(YgooSioSportYport_index);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_port_index_9;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T7);
  VARSET(YgooSioSportYport_index,T4);
  lit_48 = YPPsym((P)"port-index-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_10 = YPmet(FUNCODEREF(fun_port_index_setter_10),LITREF(lit_48),T8,ENVNUL,PNUL,sloc(50));
  T11 = BOUNDP(YgooSioSportYport_index_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSportYport_index_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_port_index_setter_10;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSportYport_index_setter,T9);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T13,ENVNUL,PNUL,sloc(50));
  T14 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T14);
  lit_51 = YPPsym((P)"<str-out-port>");
  T17 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T16 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T17);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_51),T16);
  VARSET(YgooSioSportYLstr_out_portG,T15);
  lit_52 = YPPlist(1,YPPsym((P)"port"));
  lit_53 = YPPsym((P)"loop");
  lit_54 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"c"));
  T19 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_12 = YPmet(FUNCODEREF(fun_loop_12),LITREF(lit_53),T19,ENVNUL,PNUL,sloc(58));
  T18 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPmet(FUNCODEREF(fun_gets_13),LITREF(lit_13),T18,ENVNUL,PNUL,sloc(57));
  T22 = BOUNDP(YgooSioSportYgets);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSioSportYgets);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_gets_13;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSioSportYgets,T20);
  lit_55 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T24 = YPsig(LITREF(lit_55),YPPlist(2,T25,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T24,ENVNUL,PNUL,sloc(63));
  T28 = BOUNDP(YgooSioSportYopen);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSioSportYopen);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_open_14;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSioSportYopen,T26);
  lit_56 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T31 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T30 = YPsig(LITREF(lit_56),YPPlist(2,T31,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_15 = YPmet(FUNCODEREF(fun_open_15),LITREF(lit_1),T30,ENVNUL,PNUL,sloc(66));
  T34 = BOUNDP(YgooSioSportYopen);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSioSportYopen);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_open_15;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSioSportYopen,T32);
  lit_57 = YPPlist(1,YPPsym((P)"port"));
  T36 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_16 = YPmet(FUNCODEREF(fun_close_16),LITREF(lit_3),T36,ENVNUL,PNUL,sloc(69));
  T39 = BOUNDP(YgooSioSportYclose);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooSioSportYclose);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_close_16;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooSioSportYclose,T37);
  lit_58 = YPPlist(1,YPPsym((P)"port"));
  T41 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPmet(FUNCODEREF(fun_close_17),LITREF(lit_3),T41,ENVNUL,PNUL,sloc(72));
  T44 = BOUNDP(YgooSioSportYclose);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYclose);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_close_17;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYclose,T42);
  lit_59 = YPPlist(1,YPPsym((P)"exp"));
  lit_60 = YPPlist(1,YPPsym((P)"return"));
  lit_61 = YPPsym((P)"x-1377");
  lit_62 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_63 = YPPsym((P)"with-port");
  lit_64 = YPsb((P)"Match Pattern Failure");
  lit_65 = YPPsym((P)"let");
  lit_66 = Ynil;
  lit_67 = YPPsym((P)"fin");
  lit_68 = YPPsym((P)"seq");
  lit_69 = YPPsym((P)"set");
  lit_70 = YPPsym((P)"and");
  T48 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1377_18 = YPmet(FUNCODEREF(fun_x_1377_18),LITREF(lit_61),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T49 = fun_20;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T49);
  T51 = (P)YPcurrent_in_port();
  T50 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T51);
  VARSET(YgooSioSportYin,T50);
  T53 = (P)YPcurrent_out_port();
  T52 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T53);
  VARSET(YgooSioSportYout,T52);
  lit_71 = YPPlist(1,YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_21 = YPmet(FUNCODEREF(fun_get_21),LITREF(lit_11),T54,ENVNUL,PNUL,sloc(84));
  T57 = BOUNDP(YgooSioSportYget);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSportYget);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_get_21;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSportYget,T55);
  lit_72 = YPPlist(1,YPPsym((P)"port"));
  T59 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_22 = YPmet(FUNCODEREF(fun_peek_22),LITREF(lit_15),T59,ENVNUL,PNUL,sloc(89));
  T62 = BOUNDP(YgooSioSportYpeek);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSportYpeek);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_peek_22;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSportYpeek,T60);
  lit_73 = YPPlist(1,YPPsym((P)"port"));
  T64 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_23 = YPmet(FUNCODEREF(fun_readyQ_23),LITREF(lit_17),T64,ENVNUL,PNUL,sloc(92));
  T67 = BOUNDP(YgooSioSportYreadyQ);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYreadyQ);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_readyQ_23;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYreadyQ,T65);
  lit_74 = YPPlist(1,YPPsym((P)"port"));
  T69 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_24 = YPmet(FUNCODEREF(fun_newline_24),LITREF(lit_20),T69,ENVNUL,PNUL,sloc(95));
  T72 = BOUNDP(YgooSioSportYnewline);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYnewline);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_newline_24;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYnewline,T70);
  lit_75 = YPPlist(1,YPPsym((P)"port"));
  T74 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_25 = YPmet(FUNCODEREF(fun_force_out_25),LITREF(lit_22),T74,ENVNUL,PNUL,sloc(98));
  T77 = BOUNDP(YgooSioSportYforce_out);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSportYforce_out);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_force_out_25;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSportYforce_out,T75);
  lit_76 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T79 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_26 = YPmet(FUNCODEREF(fun_put_26),LITREF(lit_24),T79,ENVNUL,PNUL,sloc(101));
  T82 = BOUNDP(YgooSioSportYput);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSportYput);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_put_26;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSportYput,T80);
  lit_77 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T84 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_27 = YPmet(FUNCODEREF(fun_puts_27),LITREF(lit_26),T84,ENVNUL,PNUL,sloc(104));
  T87 = BOUNDP(YgooSioSportYputs);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSportYputs);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_puts_27;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSportYputs,T85);
  lit_78 = YPPlist(1,YPPsym((P)"port"));
  T89 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_28 = YPmet(FUNCODEREF(fun_port_contents_28),LITREF(lit_43),T89,ENVNUL,PNUL,sloc(109));
  T92 = BOUNDP(YgooSioSportYport_contents);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSportYport_contents);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_port_contents_28;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSportYport_contents,T90);
  lit_79 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T95 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T94 = YPsig(LITREF(lit_79),YPPlist(2,T95,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_29 = YPmet(FUNCODEREF(fun_open_29),LITREF(lit_1),T94,ENVNUL,PNUL,sloc(112));
  T98 = BOUNDP(YgooSioSportYopen);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSioSportYopen);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_open_29;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSioSportYopen,T96);
  lit_80 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T101 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T100 = YPsig(LITREF(lit_80),YPPlist(2,T101,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T100,ENVNUL,PNUL,sloc(117));
  T104 = BOUNDP(YgooSioSportYopen);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooSioSportYopen);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_open_30;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooSioSportYopen,T102);
  lit_81 = YPPlist(1,YPPsym((P)"port"));
  T106 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_31 = YPmet(FUNCODEREF(fun_peek_31),LITREF(lit_15),T106,ENVNUL,PNUL,sloc(122));
  T109 = BOUNDP(YgooSioSportYpeek);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooSioSportYpeek);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_peek_31;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooSioSportYpeek,T107);
  lit_82 = YPPlist(1,YPPsym((P)"port"));
  T111 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_32 = YPmet(FUNCODEREF(fun_get_32),LITREF(lit_11),T111,ENVNUL,PNUL,sloc(127));
  T114 = BOUNDP(YgooSioSportYget);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSioSportYget);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_get_32;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSioSportYget,T112);
  lit_83 = YPPlist(1,YPPsym((P)"port"));
  T116 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_33 = YPmet(FUNCODEREF(fun_readyQ_33),LITREF(lit_17),T116,ENVNUL,PNUL,sloc(134));
  T119 = BOUNDP(YgooSioSportYreadyQ);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSioSportYreadyQ);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_readyQ_33;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSioSportYreadyQ,T117);
  lit_84 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T121 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_34 = YPmet(FUNCODEREF(fun_put_34),LITREF(lit_24),T121,ENVNUL,PNUL,sloc(137));
  T124 = BOUNDP(YgooSioSportYput);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSportYput);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_put_34;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSportYput,T122);
  lit_85 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T126 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_35 = YPmet(FUNCODEREF(fun_puts_35),LITREF(lit_26),T126,ENVNUL,PNUL,sloc(140));
  T129 = BOUNDP(YgooSioSportYputs);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSportYputs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_puts_35;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSportYputs,T127);
  lit_86 = YPPlist(1,YPPsym((P)"exp"));
  lit_87 = YPPlist(1,YPPsym((P)"return"));
  lit_88 = YPPsym((P)"x-1383");
  lit_89 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_90 = YPPsym((P)"port-to-str");
  T137 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = fun_x_1383_36 = YPmet(FUNCODEREF(fun_x_1383_36),LITREF(lit_88),T137,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T134 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T132 = fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T139 = fun_38;
  T138 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port-to-str"),T139);
  T131 = T138;
  return T131;
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
extern MODULE_INFO module_info_gooScolsSvec;
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
  {&module_info_gooScolsSvec},
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
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
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
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"---main-1---", PVAR, NULL},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {"puts", CVAR, &YgooSioSportYputs},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"---main-0---", PVAR, NULL},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"out", CVAR, &YgooSioSportYout},
  {"gets", CVAR, &YgooSioSportYgets},
  {"close", CVAR, &YgooSioSportYclose},
  {"port-to-str", PVAR, NULL},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"put", CVAR, &YgooSioSportYput},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"open", CVAR, &YgooSioSportYopen},
  {"get", CVAR, &YgooSioSportYget},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"with-port", PVAR, NULL},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"port-handle-setter", CVAR, &YgooSioSportYport_handle_setter},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"in", CVAR, &YgooSioSportYin},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<port>", NULL},
  {"<file-port>", NULL},
  {"port-index", NULL},
  {"<str-port>", NULL},
  {"peek", NULL},
  {"<in-port>", NULL},
  {"puts", NULL},
  {"<str-in-port>", NULL},
  {"port-handle", NULL},
  {"<file-in-port>", NULL},
  {"out", NULL},
  {"gets", NULL},
  {"close", NULL},
  {"port-to-str", NULL},
  {"put", NULL},
  {"port-contents", NULL},
  {"open", NULL},
  {"get", NULL},
  {"<file-out-port>", NULL},
  {"<str-out-port>", NULL},
  {"force-out", NULL},
  {"port-index-setter", NULL},
  {"<out-port>", NULL},
  {"with-port", NULL},
  {"port-line", NULL},
  {"newline", NULL},
  {"port-line-setter", NULL},
  {"port-handle-setter", NULL},
  {"ready?", NULL},
  {"in", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSport;
MODULE_INFO module_info_gooSioSport = {
  "goo/io/port",
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
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooSioSport (void);

void load_module_gooSioSport (void) {
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
  load_module_gooScolsSvec();

  (P)YgooSioSportY___main_0___();
  (P)YgooSioSportY___main_1___();

}

/* END OF GENERATED CODE. */
