/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/port");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/port */

EXT(Yclone,"goo/boot","clone");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
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
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
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
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
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
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
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
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
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
DEF(YgooSioSportYgets,"goo/io/port","gets");
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
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
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
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
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
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
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
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
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
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSioSportYout,"goo/io/port","out");
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
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
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
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
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

DEFLIT(lit_14);
DEFLIT(lit_15);
DEFLIT(lit_10);
DEFLIT(lit_28);
DEFLIT(lit_45);
DEFLIT(lit_1);
DEFLIT(lit_60);
DEFLIT(lit_48);
DEFLIT(lit_50);
DEFLIT(lit_74);
DEFLIT(lit_85);
DEFLIT(lit_66);
DEFLIT(lit_62);
DEFLIT(lit_34);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_68);
DEFLIT(lit_31);
DEFLIT(lit_69);
DEFLIT(lit_54);
DEFLIT(lit_22);
DEFLIT(lit_88);
DEFLIT(lit_83);
DEFLIT(lit_7);
DEFLIT(lit_81);
DEFLIT(lit_41);
DEFLIT(lit_75);
DEFLIT(lit_76);
DEFLIT(lit_49);
DEFLIT(lit_29);
DEFLIT(lit_17);
DEFLIT(lit_63);
DEFLIT(lit_42);
DEFLIT(lit_4);
DEFLIT(lit_72);
DEFLIT(lit_40);
DEFLIT(lit_70);
DEFLIT(lit_79);
DEFLIT(lit_58);
DEFLIT(lit_2);
DEFLIT(lit_18);
DEFLIT(lit_8);
DEFLIT(lit_80);
DEFLIT(lit_38);
DEFLIT(lit_61);
DEFLIT(lit_25);
DEFLIT(lit_39);
DEFLIT(lit_78);
DEFLIT(lit_35);
DEFLIT(lit_82);
DEFLIT(lit_30);
DEFLIT(lit_77);
DEFLIT(lit_73);
DEFLIT(lit_19);
DEFLIT(lit_44);
DEFLIT(lit_12);
DEFLIT(lit_67);
DEFLIT(lit_24);
DEFLIT(lit_65);
DEFLIT(lit_37);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_55);
DEFLIT(lit_57);
DEFLIT(lit_21);
DEFLIT(lit_59);
DEFLIT(lit_32);
DEFLIT(lit_71);
DEFLIT(lit_5);
DEFLIT(lit_13);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_6);
DEFLIT(lit_87);
DEFLIT(lit_84);
DEFLIT(lit_20);
DEFLIT(lit_86);
DEFLIT(lit_56);
DEFLIT(lit_16);
DEFLIT(lit_0);
DEFLIT(lit_33);
DEFLIT(lit_23);
DEFLIT(lit_64);
DEFLIT(lit_27);
DEFLIT(lit_53);

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
LOCFOR(fun_gets_12);
LOCFOR(fun_open_13);
LOCFOR(fun_open_14);
LOCFOR(fun_close_15);
LOCFOR(fun_close_16);
LOCFOR(fun_x_1381_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_get_20);
LOCFOR(fun_peek_21);
LOCFOR(fun_readyQ_22);
LOCFOR(fun_newline_23);
LOCFOR(fun_force_out_24);
LOCFOR(fun_put_25);
LOCFOR(fun_puts_26);
LOCFOR(fun_port_contents_27);
LOCFOR(fun_open_28);
LOCFOR(fun_open_29);
LOCFOR(fun_peek_30);
LOCFOR(fun_get_31);
LOCFOR(fun_readyQ_32);
LOCFOR(fun_put_33);
LOCFOR(fun_puts_34);
LOCFOR(fun_x_1387_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)1));
}

FUNCODEDEF(fun_port_handle_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_5) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_port_guts_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_42));
}

FUNCODEDEF(fun_port_index_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_10) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
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

FUNCODEDEF(fun_gets_12) {
  P port_;
  P tmpF2364;
  P cF2363;
  P resF2362;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(port_, 0);
  resF2362 = Ynil;
  T2 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF2363 = T2;
  for (;;) {
    P a144_0,a144_1;
  loop144:
    T6 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2363);
    tmpF2364 = T6;
    if (tmpF2364 != YPfalse) {
      T7 = tmpF2364;
    } else {
      T8 = CALL2(1,VARREF(YgooSmacrosYEE),cF2363,YPchr((P)10));
      T7 = T8;
    }
    T5 = T7;
    if (T5 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2362);
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
      T4 = T9;
    } else {
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),cF2363,resF2362);
      T13 = CALL1(1,VARREF(YgooSioSportYget),port_);
      a144_0 = T12;
      a144_1 = T13;
      resF2362 = a144_0;
      cF2363 = a144_1;
      goto loop144;
      T4 = T11;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_13) {
  P t_,filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_in_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_14) {
  P t_,filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_out_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_15) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_16) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1381_17) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_61),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P return_;
  P x_1380F2379;
  P x_1380F2378;
  P x_1380F2377;
  P x_1380F2376;
  P x_1380F2375;
  P x_1380F2374;
  P x_1380F2373;
  P x_1380F2372;
  P x_1380F2371;
  P x_1380F2370;
  P bodyF2369;
  P portF2368;
  P nameF2367;
  P x_1380F2366;
  P x_1381F2365;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1381_17,2);
  x_1381F2365 = T1;
  FUNINIT(x_1381F2365, 2,FREEREF(0),return_);
  x_1380F2366 = FREEREF(0);
  nameF2367 = YPfalse;
  nameF2367 = BOXFAB(nameF2367);
  portF2368 = YPfalse;
  portF2368 = BOXFAB(portF2368);
  bodyF2369 = YPfalse;
  bodyF2369 = BOXFAB(bodyF2369);
  T9 = CALL2(1,VARREF(YisaQ),x_1380F2366,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1380F2366,LITREF(lit_61),x_1381F2365);
    x_1380F2370 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1380F2370,x_1381F2365);
    x_1380F2371 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1380F2371,x_1381F2365);
    BOXVAL(nameF2367) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1380F2371);
    x_1380F2372 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1380F2372,x_1381F2365);
    BOXVAL(portF2368) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1380F2372);
    x_1380F2373 = T19;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1380F2373,x_1381F2365);
    x_1380F2374 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1380F2374,x_1381F2365);
    T23 = CALL1(1,VARREF(Ytail),x_1380F2373);
    x_1380F2375 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1380F2375,x_1381F2365);
    T20 = T24;
    T17 = T20;
    T14 = T17;
    T25 = CALL1(1,VARREF(Ytail),x_1380F2370);
    x_1380F2376 = T25;
    BOXVAL(bodyF2369) = x_1380F2376;
    x_1380F2377 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1380F2377,x_1381F2365);
    x_1380F2378 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1380F2378,x_1381F2365);
    T30 = CALL1(1,VARREF(Ytail),x_1380F2377);
    x_1380F2379 = T30;
    T31 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1380F2379,x_1381F2365);
    T27 = T31;
    T26 = T27;
    T12 = T26;
    T10 = T12;
  } else {
    T32 = CALL2(1,x_1381F2365,LITREF(lit_62),x_1380F2366);
  }
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T40 = BOXVAL(nameF2367);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T41 = CALL1(1,VARREF(Ylst),YPfalse);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T41,LITREF(lit_64));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_64));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T52 = BOXVAL(nameF2367);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T54 = BOXVAL(portF2368);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T53,LITREF(lit_64));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T55 = BOXVAL(bodyF2369);
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T55,LITREF(lit_64));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T60 = BOXVAL(nameF2367);
  T59 = CALL1(1,VARREF(Ylst),T60);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T65 = BOXVAL(nameF2367);
  T64 = CALL1(1,VARREF(Ylst),T65);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,LITREF(lit_64));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T59,T61,LITREF(lit_64));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T43 = CALL4(1,VARREF(YgooSmacrosYcat),T44,T45,T56,LITREF(lit_64));
  T42 = CALL1(1,VARREF(Ylst),T43);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_64));
  T7 = T33;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_20) {
  P port_;
  P x_1382F2384;
  P cF2383;
  P tF2382;
  P xF2381;
  P xF2380;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(port_, 0);
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  xF2380 = T2;
  xF2381 = xF2380;
  tF2382 = (P)2;
  T6 = (P)YPiLL(xF2381,(P)2);
  T5 = (P)YPiv(T6,tF2382);
  T4 = T5;
  T1 = T4;
  cF2383 = T1;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),cF2383,YPchr((P)10));
  if (T7 != YPfalse) {
    x_1382F2384 = port_;
    T11 = CALL1(1,VARREF(YgooSioSportYport_line),x_1382F2384);
    T10 = CALL2(1,VARREF(YgooSmathYA),T11,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T10,x_1382F2384);
    T8 = T9;
  } else {
  }
  T0 = cF2383;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_21) {
  P port_;
  P tF2387;
  P xF2386;
  P xF2385;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPpeek(T2);
  xF2385 = T1;
  xF2386 = xF2385;
  tF2387 = (P)2;
  T5 = (P)YPiLL(xF2386,(P)2);
  T4 = (P)YPiv(T5,tF2387);
  T3 = T4;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_22) {
  P port_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_23) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_out_24) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_25) {
  P port_,c_;
  P xF2389;
  P xF2388;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF2388 = c_;
  xF2389 = xF2388;
  T4 = (P)YPiGG(xF2389,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_26) {
  P port_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_contents_27) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_28) {
  P t_,dat_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_29) {
  P t_,dat_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),dat_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_out_portG),VARREF(YgooSioSportYport_guts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_30) {
  P port_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(port_, 0);
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

FUNCODEDEF(fun_get_31) {
  P port_;
  P x_1383F2391;
  P resF2390;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(port_, 0);
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
    resF2390 = T7;
    x_1383F2391 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_1383F2391);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_1383F2391);
    T6 = resF2390;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_32) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_33) {
  P port_,c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYaddX),T2,c_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_34) {
  P port_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T2,s_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1387_35) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_88),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P return_;
  P x_1386F2400;
  P x_1386F2399;
  P x_1386F2398;
  P x_1386F2397;
  P x_1386F2396;
  P bodyF2395;
  P nameF2394;
  P x_1386F2393;
  P x_1387F2392;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1387_35,2);
  x_1387F2392 = T1;
  FUNINIT(x_1387F2392, 2,FREEREF(0),return_);
  x_1386F2393 = FREEREF(0);
  nameF2394 = YPfalse;
  nameF2394 = BOXFAB(nameF2394);
  bodyF2395 = YPfalse;
  bodyF2395 = BOXFAB(bodyF2395);
  T7 = CALL2(1,VARREF(YisaQ),x_1386F2393,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1386F2393,LITREF(lit_88),x_1387F2392);
    x_1386F2396 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1386F2396,x_1387F2392);
    BOXVAL(nameF2394) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1386F2396);
    x_1386F2397 = T12;
    BOXVAL(bodyF2395) = x_1386F2397;
    x_1386F2398 = Ynil;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1386F2398,x_1387F2392);
    x_1386F2399 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1386F2399,x_1387F2392);
    T17 = CALL1(1,VARREF(Ytail),x_1386F2398);
    x_1386F2400 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1386F2400,x_1387F2392);
    T14 = T18;
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1387F2392,LITREF(lit_62),x_1386F2393);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T27 = BOXVAL(nameF2394);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T29 = CALL4(1,VARREF(YgooSmacrosYcat),T30,T31,T32,LITREF(lit_64));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_64));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_64));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T33 = BOXVAL(bodyF2395);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T38 = BOXVAL(nameF2394);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T37,LITREF(lit_64));
  T34 = CALL1(1,VARREF(Ylst),T35);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T33,T34,LITREF(lit_64));
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_36,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
DEFCREGS();
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
  T11 = VARREF_OR(YgooSioSportYport_line,YPfalse);
  T12 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooSioSportYport_line,T10);
  lit_8 = YPPsym((P)"port-line-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_8),T13,ENVNUL,PNUL,sloc(13));
  T15 = VARREF_OR(YgooSioSportYport_line_setter,YPfalse);
  T16 = fun_port_line_setter_1;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YgooSioSportYport_line_setter,T14);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T17,ENVNUL,PNUL,sloc(13));
  T18 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T18);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPlist(1,YPPsym((P)"port"));
  T20 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T19 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T20,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYget,T19);
  lit_13 = YPPsym((P)"gets");
  lit_14 = YPPlist(1,YPPsym((P)"port"));
  T22 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYgets,T21);
  lit_15 = YPPsym((P)"peek");
  lit_16 = YPPlist(1,YPPsym((P)"port"));
  T24 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYpeek,T23);
  lit_17 = YPPsym((P)"ready?");
  lit_18 = YPPlist(1,YPPsym((P)"port"));
  T26 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYreadyQ,T25);
  lit_19 = YPPsym((P)"<out-port>");
  T28 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T27 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_19),T28);
  VARSET(YgooSioSportYLout_portG,T27);
  lit_20 = YPPsym((P)"newline");
  lit_21 = YPPlist(1,YPPsym((P)"port"));
  T30 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T29 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T30,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T29);
  lit_22 = YPPsym((P)"force-out");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T32 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T31);
  lit_24 = YPPsym((P)"put");
  lit_25 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T34 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T33);
  lit_26 = YPPsym((P)"puts");
  lit_27 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T36 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T35);
  lit_28 = YPPsym((P)"<file-port>");
  T38 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T37 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_28),T38);
  VARSET(YgooSioSportYLfile_portG,T37);
  lit_29 = YPPsym((P)"port-handle");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T39 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_3 = YPmet(FUNCODEREF(fun_port_handle_3),LITREF(lit_29),T39,ENVNUL,PNUL,sloc(13));
  T41 = VARREF_OR(YgooSioSportYport_handle,YPfalse);
  T42 = fun_port_handle_3;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YgooSioSportYport_handle,T40);
  lit_31 = YPPsym((P)"port-handle-setter");
  lit_32 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T43 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_handle_setter_4 = YPmet(FUNCODEREF(fun_port_handle_setter_4),LITREF(lit_31),T43,ENVNUL,PNUL,sloc(13));
  T45 = VARREF_OR(YgooSioSportYport_handle_setter,YPfalse);
  T46 = fun_port_handle_setter_4;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YgooSioSportYport_handle_setter,T44);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLportG),VARREF(YgooSioSportYport_handle),VARREF(YgooSioSportYport_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_33 = YPPlist(1,YPPsym((P)"port"));
  T47 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_3),T47,ENVNUL,PNUL,sloc(37));
  T49 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T50 = fun_close_5;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooSioSportYclose,T48);
  lit_34 = YPPsym((P)"<file-in-port>");
  T53 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T52 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T53);
  T51 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_34),T52);
  VARSET(YgooSioSportYLfile_in_portG,T51);
  lit_35 = YPPsym((P)"<file-out-port>");
  T56 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T55 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T56);
  T54 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T55);
  VARSET(YgooSioSportYLfile_out_portG,T54);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_36 = YPPsym((P)"<str-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T57 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T58);
  VARSET(YgooSioSportYLstr_portG,T57);
  lit_37 = YPPsym((P)"port-guts");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_6 = YPmet(FUNCODEREF(fun_port_guts_6),LITREF(lit_37),T59,ENVNUL,PNUL,sloc(48));
  T61 = VARREF_OR(YgooSioSportYport_guts,YPfalse);
  T62 = fun_port_guts_6;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooSioSportYport_guts,T60);
  lit_39 = YPPsym((P)"port-guts-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_7 = YPmet(FUNCODEREF(fun_port_guts_setter_7),LITREF(lit_39),T63,ENVNUL,PNUL,sloc(48));
  T65 = VARREF_OR(YgooSioSportYport_guts_setter,YPfalse);
  T66 = fun_port_guts_setter_7;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YgooSioSportYport_guts_setter,T64);
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  lit_42 = YPsb((P)"");
  T67 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T67,ENVNUL,PNUL,sloc(48));
  T68 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T68);
  lit_43 = YPPsym((P)"port-contents");
  lit_44 = YPPlist(1,YPPsym((P)"port"));
  T72 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T71 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T72,Ynil,YPfalse,YPfalse,YPfalse);
  T70 = VARSET(YgooSioSportYport_contents,T71);
  T69 = T70;
  return T69;
}

P YgooSioSportY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116;
DEFCREGS();
  lit_45 = YPPsym((P)"<str-in-port>");
  T2 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T1 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_45),T1);
  VARSET(YgooSioSportYLstr_in_portG,T0);
  lit_46 = YPPsym((P)"port-index");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T3 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_9 = YPmet(FUNCODEREF(fun_port_index_9),LITREF(lit_46),T3,ENVNUL,PNUL,sloc(50));
  T5 = VARREF_OR(YgooSioSportYport_index,YPfalse);
  T6 = fun_port_index_9;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T6);
  VARSET(YgooSioSportYport_index,T4);
  lit_48 = YPPsym((P)"port-index-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T7 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_10 = YPmet(FUNCODEREF(fun_port_index_setter_10),LITREF(lit_48),T7,ENVNUL,PNUL,sloc(50));
  T9 = VARREF_OR(YgooSioSportYport_index_setter,YPfalse);
  T10 = fun_port_index_setter_10;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T10);
  VARSET(YgooSioSportYport_index_setter,T8);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T11,ENVNUL,PNUL,sloc(50));
  T12 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T12);
  lit_51 = YPPsym((P)"<str-out-port>");
  T15 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T14 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T15);
  T13 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_51),T14);
  VARSET(YgooSioSportYLstr_out_portG,T13);
  lit_52 = YPPlist(1,YPPsym((P)"port"));
  T16 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_12 = YPmet(FUNCODEREF(fun_gets_12),LITREF(lit_13),T16,ENVNUL,PNUL,sloc(57));
  T18 = VARREF_OR(YgooSioSportYgets,YPfalse);
  T19 = fun_gets_12;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSioSportYgets,T17);
  lit_53 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T21 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T20 = YPsig(LITREF(lit_53),YPPlist(2,T21,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_13 = YPmet(FUNCODEREF(fun_open_13),LITREF(lit_1),T20,ENVNUL,PNUL,sloc(63));
  T23 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T24 = fun_open_13;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YgooSioSportYopen,T22);
  lit_54 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T26 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T25 = YPsig(LITREF(lit_54),YPPlist(2,T26,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T25,ENVNUL,PNUL,sloc(66));
  T28 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T29 = fun_open_14;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSioSportYopen,T27);
  lit_55 = YPPlist(1,YPPsym((P)"port"));
  T30 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_15 = YPmet(FUNCODEREF(fun_close_15),LITREF(lit_3),T30,ENVNUL,PNUL,sloc(69));
  T32 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T33 = fun_close_15;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooSioSportYclose,T31);
  lit_56 = YPPlist(1,YPPsym((P)"port"));
  T34 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_16 = YPmet(FUNCODEREF(fun_close_16),LITREF(lit_3),T34,ENVNUL,PNUL,sloc(72));
  T36 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T37 = fun_close_16;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooSioSportYclose,T35);
  lit_57 = YPPlist(1,YPPsym((P)"exp"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"x-1381");
  lit_60 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_61 = YPPsym((P)"with-port");
  lit_62 = YPsb((P)"Match Pattern Failure");
  lit_63 = YPPsym((P)"let");
  lit_64 = Ynil;
  lit_65 = YPPsym((P)"fin");
  lit_66 = YPPsym((P)"seq");
  lit_67 = YPPsym((P)"set");
  lit_68 = YPPsym((P)"and");
  T40 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1381_17 = YPmet(FUNCODEREF(fun_x_1381_17),LITREF(lit_59),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T38,ENVNUL,PNUL,YPfalse);
  T41 = fun_19;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T41);
  T43 = (P)YPcurrent_in_port();
  T42 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T43);
  VARSET(YgooSioSportYin,T42);
  T45 = (P)YPcurrent_out_port();
  T44 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T45);
  VARSET(YgooSioSportYout,T44);
  lit_69 = YPPlist(1,YPPsym((P)"port"));
  T46 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_20 = YPmet(FUNCODEREF(fun_get_20),LITREF(lit_11),T46,ENVNUL,PNUL,sloc(84));
  T48 = VARREF_OR(YgooSioSportYget,YPfalse);
  T49 = fun_get_20;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooSioSportYget,T47);
  lit_70 = YPPlist(1,YPPsym((P)"port"));
  T50 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_21 = YPmet(FUNCODEREF(fun_peek_21),LITREF(lit_15),T50,ENVNUL,PNUL,sloc(89));
  T52 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T53 = fun_peek_21;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooSioSportYpeek,T51);
  lit_71 = YPPlist(1,YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_22 = YPmet(FUNCODEREF(fun_readyQ_22),LITREF(lit_17),T54,ENVNUL,PNUL,sloc(92));
  T56 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T57 = fun_readyQ_22;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YgooSioSportYreadyQ,T55);
  lit_72 = YPPlist(1,YPPsym((P)"port"));
  T58 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_23 = YPmet(FUNCODEREF(fun_newline_23),LITREF(lit_20),T58,ENVNUL,PNUL,sloc(95));
  T60 = VARREF_OR(YgooSioSportYnewline,YPfalse);
  T61 = fun_newline_23;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YgooSioSportYnewline,T59);
  lit_73 = YPPlist(1,YPPsym((P)"port"));
  T62 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_24 = YPmet(FUNCODEREF(fun_force_out_24),LITREF(lit_22),T62,ENVNUL,PNUL,sloc(98));
  T64 = VARREF_OR(YgooSioSportYforce_out,YPfalse);
  T65 = fun_force_out_24;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YgooSioSportYforce_out,T63);
  lit_74 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T66 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_25 = YPmet(FUNCODEREF(fun_put_25),LITREF(lit_24),T66,ENVNUL,PNUL,sloc(101));
  T68 = VARREF_OR(YgooSioSportYput,YPfalse);
  T69 = fun_put_25;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooSioSportYput,T67);
  lit_75 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T70 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_26 = YPmet(FUNCODEREF(fun_puts_26),LITREF(lit_26),T70,ENVNUL,PNUL,sloc(104));
  T72 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T73 = fun_puts_26;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YgooSioSportYputs,T71);
  lit_76 = YPPlist(1,YPPsym((P)"port"));
  T74 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_27 = YPmet(FUNCODEREF(fun_port_contents_27),LITREF(lit_43),T74,ENVNUL,PNUL,sloc(109));
  T76 = VARREF_OR(YgooSioSportYport_contents,YPfalse);
  T77 = fun_port_contents_27;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YgooSioSportYport_contents,T75);
  lit_77 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T79 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T78 = YPsig(LITREF(lit_77),YPPlist(2,T79,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_28 = YPmet(FUNCODEREF(fun_open_28),LITREF(lit_1),T78,ENVNUL,PNUL,sloc(112));
  T81 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T82 = fun_open_28;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YgooSioSportYopen,T80);
  lit_78 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T84 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T83 = YPsig(LITREF(lit_78),YPPlist(2,T84,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_29 = YPmet(FUNCODEREF(fun_open_29),LITREF(lit_1),T83,ENVNUL,PNUL,sloc(117));
  T86 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T87 = fun_open_29;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YgooSioSportYopen,T85);
  lit_79 = YPPlist(1,YPPsym((P)"port"));
  T88 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_30 = YPmet(FUNCODEREF(fun_peek_30),LITREF(lit_15),T88,ENVNUL,PNUL,sloc(122));
  T90 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T91 = fun_peek_30;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooSioSportYpeek,T89);
  lit_80 = YPPlist(1,YPPsym((P)"port"));
  T92 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_31 = YPmet(FUNCODEREF(fun_get_31),LITREF(lit_11),T92,ENVNUL,PNUL,sloc(127));
  T94 = VARREF_OR(YgooSioSportYget,YPfalse);
  T95 = fun_get_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YgooSioSportYget,T93);
  lit_81 = YPPlist(1,YPPsym((P)"port"));
  T96 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_32 = YPmet(FUNCODEREF(fun_readyQ_32),LITREF(lit_17),T96,ENVNUL,PNUL,sloc(134));
  T98 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T99 = fun_readyQ_32;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooSioSportYreadyQ,T97);
  lit_82 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T100 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_33 = YPmet(FUNCODEREF(fun_put_33),LITREF(lit_24),T100,ENVNUL,PNUL,sloc(137));
  T102 = VARREF_OR(YgooSioSportYput,YPfalse);
  T103 = fun_put_33;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSioSportYput,T101);
  lit_83 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T104 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_34 = YPmet(FUNCODEREF(fun_puts_34),LITREF(lit_26),T104,ENVNUL,PNUL,sloc(140));
  T106 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T107 = fun_puts_34;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSioSportYputs,T105);
  lit_84 = YPPlist(1,YPPsym((P)"exp"));
  lit_85 = YPPlist(1,YPPsym((P)"return"));
  lit_86 = YPPsym((P)"x-1387");
  lit_87 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_88 = YPPsym((P)"port-to-str");
  T114 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T113 = fun_x_1387_35 = YPmet(FUNCODEREF(fun_x_1387_35),LITREF(lit_86),T114,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T111 = fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T116 = fun_37;
  T115 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port-to-str"),T116);
  T108 = T115;
  return T108;
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
  {"<vec>", &module_info_gooScolsSvec, NULL},
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
  {"vec", &module_info_gooScolsSvec, NULL},
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
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"get", CVAR, &YgooSioSportYget},
  {"put", CVAR, &YgooSioSportYput},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"close", CVAR, &YgooSioSportYclose},
  {"open", CVAR, &YgooSioSportYopen},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"gets", CVAR, &YgooSioSportYgets},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"port-to-str", PVAR, NULL},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"port-handle-setter", CVAR, &YgooSioSportYport_handle_setter},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"in", CVAR, &YgooSioSportYin},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"out", CVAR, &YgooSioSportYout},
  {"with-port", PVAR, NULL},
  {"puts", CVAR, &YgooSioSportYputs},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<str-out-port>", NULL},
  {"get", NULL},
  {"put", NULL},
  {"<str-port>", NULL},
  {"ready?", NULL},
  {"<port>", NULL},
  {"port-index", NULL},
  {"force-out", NULL},
  {"close", NULL},
  {"with-port", NULL},
  {"<file-out-port>", NULL},
  {"peek", NULL},
  {"port-line", NULL},
  {"newline", NULL},
  {"gets", NULL},
  {"<str-in-port>", NULL},
  {"<file-in-port>", NULL},
  {"port-to-str", NULL},
  {"port-contents", NULL},
  {"port-handle-setter", NULL},
  {"port-line-setter", NULL},
  {"<file-port>", NULL},
  {"open", NULL},
  {"in", NULL},
  {"out", NULL},
  {"puts", NULL},
  {"port-handle", NULL},
  {"port-index-setter", NULL},
  {"<in-port>", NULL},
  {"<out-port>", NULL},
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
