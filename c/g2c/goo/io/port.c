/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/port");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YgooSioSportYputs,"goo/io/port","puts");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_71);
DEFLIT(lit_38);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_53);
DEFLIT(lit_57);
DEFLIT(lit_44);
DEFLIT(lit_8);
DEFLIT(lit_65);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_46);
DEFLIT(lit_25);
DEFLIT(lit_89);
DEFLIT(lit_13);
DEFLIT(lit_66);
DEFLIT(lit_28);
DEFLIT(lit_19);
DEFLIT(lit_2);
DEFLIT(lit_29);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_5);
DEFLIT(lit_90);
DEFLIT(lit_4);
DEFLIT(lit_82);
DEFLIT(lit_79);
DEFLIT(lit_10);
DEFLIT(lit_81);
DEFLIT(lit_24);
DEFLIT(lit_72);
DEFLIT(lit_70);
DEFLIT(lit_42);
DEFLIT(lit_63);
DEFLIT(lit_34);
DEFLIT(lit_49);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_50);
DEFLIT(lit_32);
DEFLIT(lit_59);
DEFLIT(lit_78);
DEFLIT(lit_48);
DEFLIT(lit_67);
DEFLIT(lit_73);
DEFLIT(lit_61);
DEFLIT(lit_91);
DEFLIT(lit_47);
DEFLIT(lit_58);
DEFLIT(lit_80);
DEFLIT(lit_26);
DEFLIT(lit_12);
DEFLIT(lit_86);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_64);
DEFLIT(lit_69);
DEFLIT(lit_84);
DEFLIT(lit_6);
DEFLIT(lit_62);
DEFLIT(lit_41);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_74);
DEFLIT(lit_60);
DEFLIT(lit_85);
DEFLIT(lit_56);
DEFLIT(lit_87);
DEFLIT(lit_37);
DEFLIT(lit_35);
DEFLIT(lit_31);
DEFLIT(lit_17);
DEFLIT(lit_55);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_52);
DEFLIT(lit_45);
DEFLIT(lit_54);
DEFLIT(lit_75);
DEFLIT(lit_68);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_3);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_9);
DEFLIT(lit_77);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_27);

/* FUNCTIONS: */

LOCFOR(fun_port_line_0);
LOCFOR(fun_port_line_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_port_filename_3);
LOCFOR(fun_4);
LOCFOR(fun_port_handle_5);
LOCFOR(fun_close_6);
LOCFOR(fun_port_guts_7);
LOCFOR(fun_port_guts_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_port_index_10);
LOCFOR(fun_port_index_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_gets_13);
LOCFOR(fun_open_14);
LOCFOR(fun_open_15);
LOCFOR(fun_close_16);
LOCFOR(fun_close_17);
LOCFOR(fun_x_2274_18);
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
LOCFOR(fun_x_2280_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();
extern P YgooSioSportY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
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

FUNCODEDEF(fun_port_filename_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_32));
}

FUNCODEDEF(fun_port_handle_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_6) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_port_guts_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_32));
}

FUNCODEDEF(fun_port_index_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_gets_13) {
  P port_;
  P tmpF8625;
  P cF8624;
  P resF8623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(port_, 0);
  resF8623 = Ynil;
  T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF8624 = T9;
  LOOP_399: {
    P a399_0,a399_1;
    T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8624);
    tmpF8625 = T3;
    if (tmpF8625 != YPfalse) {
      T1 = tmpF8625;
    } else {
      T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF8624,YPchr((P)10));
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF8623);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T5);
      T0 = T4;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),cF8624,resF8623);
      T8 = CALL1(1,VARREF(YgooSioSportYget),port_);
      a399_0 = T7;
      a399_1 = T8;
      resF8623 = a399_0;
      cF8624 = a399_1;
      goto LOOP_399;
      T0 = T6;
    }
  }
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
  T1 = (P)YgooSioSportYPopen_in_file(T2);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_filename),filename_,VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_15) {
  P t_,filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
  T2 = (P)YPsu(filename_);
  T1 = (P)YgooSioSportYPopen_out_file(T2);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_filename),filename_,VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_16) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_17) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2274_18) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_62),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_2273F8640;
  P x_2273F8639;
  P x_2273F8638;
  P x_2273F8637;
  P x_2273F8636;
  P x_2273F8635;
  P x_2273F8634;
  P x_2273F8633;
  P x_2273F8632;
  P x_2273F8631;
  P bodyF8630;
  P portF8629;
  P nameF8628;
  P x_2273F8627;
  P x_2274F8626;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(return_, 0);
  T53 = FUNSHELL(0,fun_x_2274_18,2);
  x_2274F8626 = T53;
  FUNINIT(x_2274F8626, 2,FREEREF(0),return_);
  x_2273F8627 = FREEREF(0);
  nameF8628 = YPfalse;
  portF8629 = YPfalse;
  bodyF8630 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2273F8627,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2273F8627,LITREF(lit_62),x_2274F8626);
    x_2273F8631 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2273F8631,x_2274F8626);
    x_2273F8632 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2273F8632,x_2274F8626);
    nameF8628 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2273F8632);
    x_2273F8633 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2273F8633,x_2274F8626);
    portF8629 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2273F8633);
    x_2273F8634 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2273F8634,x_2274F8626);
    x_2273F8635 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2273F8635,x_2274F8626);
    T11 = CALL1(1,VARREF(Ytail),x_2273F8634);
    x_2273F8636 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2273F8636,x_2274F8626);
    T17 = CALL1(1,VARREF(Ytail),x_2273F8631);
    x_2273F8637 = T17;
    bodyF8630 = x_2273F8637;
    x_2273F8638 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2273F8638,x_2274F8626);
    x_2273F8639 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2273F8639,x_2274F8626);
    T7 = CALL1(1,VARREF(Ytail),x_2273F8638);
    x_2273F8640 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2273F8640,x_2274F8626);
  } else {
    T19 = CALL2(1,x_2274F8626,LITREF(lit_63),x_2273F8627);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T27 = nameF8628;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T28 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_65));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_65));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T39 = nameF8628;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = portF8629;
  T40 = CALL1(1,VARREF(Ylst),T41);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_65));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = bodyF8630;
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_65));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T47 = nameF8628;
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T52 = nameF8628;
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_65));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_65));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T43,LITREF(lit_65));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T29,LITREF(lit_65));
UNLINK_STACK();
  QRET(T20);
}

FUNCODEDEF(fun_20) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_19,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_21) {
  P port_;
  P x_2275F8645;
  P cF8644;
  P tF8643;
  P xF8642;
  P xF8641;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T6 = (P)YgooSioSportYPget(T7);
  xF8641 = T6;
  xF8642 = xF8641;
  tF8643 = (P)2;
  T5 = (P)YPiLL(xF8642,(P)2);
  T4 = (P)YPiv(T5,tF8643);
  cF8644 = T4;
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),cF8644,YPchr((P)10));
  if (T0 != YPfalse) {
    x_2275F8645 = port_;
    T3 = CALL1(1,VARREF(YgooSioSportYport_line),x_2275F8645);
    T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T2,x_2275F8645);
  } else {
  }
UNLINK_STACK();
  RET(cF8644);
}

FUNCODEDEF(fun_peek_22) {
  P port_;
  P tF8648;
  P xF8647;
  P xF8646;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YgooSioSportYPpeek(T3);
  xF8646 = T2;
  xF8647 = xF8646;
  tF8648 = (P)2;
  T1 = (P)YPiLL(xF8647,(P)2);
  T0 = (P)YPiv(T1,tF8648);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_23) {
  P port_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YgooSioSportYPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_24) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_out_25) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_26) {
  P port_,c_;
  P xF8650;
  P xF8649;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF8649 = c_;
  xF8650 = xF8649;
  T2 = (P)YPiGG(xF8650,(P)2);
  T0 = (P)YgooSioSportYPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_27) {
  P port_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YgooSioSportYPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_contents_28) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_29) {
  P t_,dat_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_30) {
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

FUNCODEDEF(fun_peek_31) {
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

FUNCODEDEF(fun_get_32) {
  P port_;
  P x_2276F8652;
  P resF8651;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
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
    T10 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T11 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),T10,T11);
    resF8651 = T9;
    x_2276F8652 = port_;
    T8 = CALL1(1,VARREF(YgooSioSportYport_index),x_2276F8652);
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T7,x_2276F8652);
    T0 = resF8651;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_33) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_34) {
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

FUNCODEDEF(fun_puts_35) {
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

FUNCODEDEF(fun_x_2280_36) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_91),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P return_;
  P x_2279F8661;
  P x_2279F8660;
  P x_2279F8659;
  P x_2279F8658;
  P x_2279F8657;
  P bodyF8656;
  P nameF8655;
  P x_2279F8654;
  P x_2280F8653;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_2280_36,2);
  x_2280F8653 = T30;
  FUNINIT(x_2280F8653, 2,FREEREF(0),return_);
  x_2279F8654 = FREEREF(0);
  nameF8655 = YPfalse;
  bodyF8656 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2279F8654,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2279F8654,LITREF(lit_91),x_2280F8653);
    x_2279F8657 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2279F8657,x_2280F8653);
    nameF8655 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2279F8657);
    x_2279F8658 = T8;
    bodyF8656 = x_2279F8658;
    x_2279F8659 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2279F8659,x_2280F8653);
    x_2279F8660 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2279F8660,x_2280F8653);
    T6 = CALL1(1,VARREF(Ytail),x_2279F8659);
    x_2279F8661 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2279F8661,x_2280F8653);
  } else {
    T10 = CALL2(1,x_2280F8653,LITREF(lit_63),x_2279F8654);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T18 = nameF8655;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_65));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,LITREF(lit_65));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_65));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T24 = bodyF8656;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T29 = nameF8655;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_65));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T24,T25,LITREF(lit_65));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
DEFCREGS();
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
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
  T7 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_6 = YPPsym((P)"port-line");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPmet(FUNCODEREF(fun_port_line_0),LITREF(lit_6),T9,ENVNUL,PNUL,sloc(31));
  T11 = VARREF_OR(YgooSioSportYport_line,YPfalse);
  T12 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooSioSportYport_line,T10);
  lit_8 = YPPsym((P)"port-line-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_8),T13,ENVNUL,PNUL,sloc(31));
  T15 = VARREF_OR(YgooSioSportYport_line_setter,YPfalse);
  T16 = fun_port_line_setter_1;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooSioSportYport_line_setter,T14);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T17,ENVNUL,PNUL,sloc(31));
  T18 = fun_2;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T18);
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
  T30 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T29 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_19),T30);
  T28 = VARSET(YgooSioSportYLout_portG,T29);
  T27 = T28;
  return T27;
}

P YgooSioSportY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_20 = YPPsym((P)"newline");
  lit_21 = YPPlist(1,YPPsym((P)"port"));
  T1 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T0);
  lit_22 = YPPsym((P)"force-out");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T3 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T2);
  lit_24 = YPPsym((P)"put");
  lit_25 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T5 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T4);
  lit_26 = YPPsym((P)"puts");
  lit_27 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T7 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T6);
  lit_28 = YPPsym((P)"<file-port>");
  T9 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_28),T9);
  VARSET(YgooSioSportYLfile_portG,T8);
  lit_29 = YPPsym((P)"port-filename");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YgooSioSportYLfile_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_filename_3 = YPmet(FUNCODEREF(fun_port_filename_3),LITREF(lit_29),T10,ENVNUL,PNUL,sloc(31));
  T12 = VARREF_OR(YgooSioSportYport_filename,YPfalse);
  T13 = fun_port_filename_3;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSportYport_filename,T11);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  lit_32 = YPsb((P)"");
  T14 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T14,ENVNUL,PNUL,sloc(31));
  T15 = fun_4;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLfile_portG),VARREF(YgooSioSportYport_filename),YPfalse,VARREF(YLstrG),T15);
  lit_33 = YPPsym((P)"port-handle");
  lit_34 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YgooSioSportYLfile_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_5 = YPmet(FUNCODEREF(fun_port_handle_5),LITREF(lit_33),T16,ENVNUL,PNUL,sloc(31));
  T18 = VARREF_OR(YgooSioSportYport_handle,YPfalse);
  T19 = fun_port_handle_5;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSportYport_handle,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLfile_portG),VARREF(YgooSioSportYport_handle),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_35 = YPPlist(1,YPPsym((P)"port"));
  T20 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_6 = YPmet(FUNCODEREF(fun_close_6),LITREF(lit_3),T20,ENVNUL,PNUL,sloc(56));
  T22 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T23 = fun_close_6;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSportYclose,T21);
  lit_36 = YPPsym((P)"<file-in-port>");
  T26 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T25 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T26);
  T24 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_36),T25);
  VARSET(YgooSioSportYLfile_in_portG,T24);
  lit_37 = YPPsym((P)"<file-out-port>");
  T29 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T28 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T29);
  T27 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_37),T28);
  VARSET(YgooSioSportYLfile_out_portG,T27);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_38 = YPPsym((P)"<str-port>");
  T31 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T30 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_38),T31);
  VARSET(YgooSioSportYLstr_portG,T30);
  lit_39 = YPPsym((P)"port-guts");
  lit_40 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_7 = YPmet(FUNCODEREF(fun_port_guts_7),LITREF(lit_39),T32,ENVNUL,PNUL,sloc(67));
  T34 = VARREF_OR(YgooSioSportYport_guts,YPfalse);
  T35 = fun_port_guts_7;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSioSportYport_guts,T33);
  lit_41 = YPPsym((P)"port-guts-setter");
  lit_42 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_8 = YPmet(FUNCODEREF(fun_port_guts_setter_8),LITREF(lit_41),T36,ENVNUL,PNUL,sloc(67));
  T38 = VARREF_OR(YgooSioSportYport_guts_setter,YPfalse);
  T39 = fun_port_guts_setter_8;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSportYport_guts_setter,T37);
  lit_43 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T40,ENVNUL,PNUL,sloc(67));
  T41 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T41);
  lit_44 = YPPsym((P)"port-contents");
  lit_45 = YPPlist(1,YPPsym((P)"port"));
  T43 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYport_contents,T42);
  lit_46 = YPPsym((P)"<str-in-port>");
  T46 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T45 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T46);
  T44 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_46),T45);
  VARSET(YgooSioSportYLstr_in_portG,T44);
  lit_47 = YPPsym((P)"port-index");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T47 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_10 = YPmet(FUNCODEREF(fun_port_index_10),LITREF(lit_47),T47,ENVNUL,PNUL,sloc(69));
  T49 = VARREF_OR(YgooSioSportYport_index,YPfalse);
  T50 = fun_port_index_10;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSioSportYport_index,T48);
  lit_49 = YPPsym((P)"port-index-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T51 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_11 = YPmet(FUNCODEREF(fun_port_index_setter_11),LITREF(lit_49),T51,ENVNUL,PNUL,sloc(69));
  T53 = VARREF_OR(YgooSioSportYport_index_setter,YPfalse);
  T54 = fun_port_index_setter_11;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSioSportYport_index_setter,T52);
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T55 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T55,ENVNUL,PNUL,sloc(69));
  T56 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T56);
  lit_52 = YPPsym((P)"<str-out-port>");
  T59 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T58 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T59);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_52),T58);
  VARSET(YgooSioSportYLstr_out_portG,T57);
  lit_53 = YPPlist(1,YPPsym((P)"port"));
  T60 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPmet(FUNCODEREF(fun_gets_13),LITREF(lit_13),T60,ENVNUL,PNUL,sloc(76));
  T62 = VARREF_OR(YgooSioSportYgets,YPfalse);
  T63 = fun_gets_13;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSportYgets,T61);
  lit_54 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T65 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T64 = YPsig(LITREF(lit_54),YPPlist(2,T65,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T64,ENVNUL,PNUL,sloc(82));
  T67 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T68 = fun_open_14;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSioSportYopen,T66);
  lit_55 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T70 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T69 = YPsig(LITREF(lit_55),YPPlist(2,T70,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_15 = YPmet(FUNCODEREF(fun_open_15),LITREF(lit_1),T69,ENVNUL,PNUL,sloc(87));
  T72 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T73 = fun_open_15;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSportYopen,T71);
  lit_56 = YPPlist(1,YPPsym((P)"port"));
  T76 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T75 = fun_close_16 = YPmet(FUNCODEREF(fun_close_16),LITREF(lit_3),T76,ENVNUL,PNUL,sloc(92));
  T79 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T80 = fun_close_16;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  T77 = VARSET(YgooSioSportYclose,T78);
  T74 = T77;
  return T74;
}

P YgooSioSportY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82;
DEFCREGS();
  lit_57 = YPPlist(1,YPPsym((P)"port"));
  T0 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPmet(FUNCODEREF(fun_close_17),LITREF(lit_3),T0,ENVNUL,PNUL,sloc(95));
  T2 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T3 = fun_close_17;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSportYclose,T1);
  lit_58 = YPPlist(1,YPPsym((P)"exp"));
  lit_59 = YPPlist(1,YPPsym((P)"return"));
  lit_60 = YPPsym((P)"x-2274");
  lit_61 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_62 = YPPsym((P)"with-port");
  lit_63 = YPsb((P)"Match Pattern Failure");
  lit_64 = YPPsym((P)"let");
  lit_65 = Ynil;
  lit_66 = YPPsym((P)"fin");
  lit_67 = YPPsym((P)"seq");
  lit_68 = YPPsym((P)"set");
  lit_69 = YPPsym((P)"and");
  T6 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2274_18 = YPmet(FUNCODEREF(fun_x_2274_18),LITREF(lit_60),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T7 = fun_20;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T7);
  lit_70 = YPsb((P)"in");
  T9 = (P)YgooSioSportYPcurrent_in_port();
  T8 = XCALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_filename),LITREF(lit_70),VARREF(YgooSioSportYport_handle),T9);
  VARSET(YgooSioSportYin,T8);
  lit_71 = YPsb((P)"out");
  T11 = (P)YgooSioSportYPcurrent_out_port();
  T10 = XCALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_filename),LITREF(lit_71),VARREF(YgooSioSportYport_handle),T11);
  VARSET(YgooSioSportYout,T10);
  lit_72 = YPPlist(1,YPPsym((P)"port"));
  T12 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_21 = YPmet(FUNCODEREF(fun_get_21),LITREF(lit_11),T12,ENVNUL,PNUL,sloc(111));
  T14 = VARREF_OR(YgooSioSportYget,YPfalse);
  T15 = fun_get_21;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSioSportYget,T13);
  lit_73 = YPPlist(1,YPPsym((P)"port"));
  T16 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_22 = YPmet(FUNCODEREF(fun_peek_22),LITREF(lit_15),T16,ENVNUL,PNUL,sloc(116));
  T18 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T19 = fun_peek_22;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSportYpeek,T17);
  lit_74 = YPPlist(1,YPPsym((P)"port"));
  T20 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_23 = YPmet(FUNCODEREF(fun_readyQ_23),LITREF(lit_17),T20,ENVNUL,PNUL,sloc(119));
  T22 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T23 = fun_readyQ_23;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSportYreadyQ,T21);
  lit_75 = YPPlist(1,YPPsym((P)"port"));
  T24 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_24 = YPmet(FUNCODEREF(fun_newline_24),LITREF(lit_20),T24,ENVNUL,PNUL,sloc(122));
  T26 = VARREF_OR(YgooSioSportYnewline,YPfalse);
  T27 = fun_newline_24;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSioSportYnewline,T25);
  lit_76 = YPPlist(1,YPPsym((P)"port"));
  T28 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_25 = YPmet(FUNCODEREF(fun_force_out_25),LITREF(lit_22),T28,ENVNUL,PNUL,sloc(125));
  T30 = VARREF_OR(YgooSioSportYforce_out,YPfalse);
  T31 = fun_force_out_25;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSioSportYforce_out,T29);
  lit_77 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T32 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_26 = YPmet(FUNCODEREF(fun_put_26),LITREF(lit_24),T32,ENVNUL,PNUL,sloc(128));
  T34 = VARREF_OR(YgooSioSportYput,YPfalse);
  T35 = fun_put_26;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSioSportYput,T33);
  lit_78 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T36 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_27 = YPmet(FUNCODEREF(fun_puts_27),LITREF(lit_26),T36,ENVNUL,PNUL,sloc(131));
  T38 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T39 = fun_puts_27;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSportYputs,T37);
  lit_79 = YPPlist(1,YPPsym((P)"port"));
  T40 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_28 = YPmet(FUNCODEREF(fun_port_contents_28),LITREF(lit_44),T40,ENVNUL,PNUL,sloc(136));
  T42 = VARREF_OR(YgooSioSportYport_contents,YPfalse);
  T43 = fun_port_contents_28;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSioSportYport_contents,T41);
  lit_80 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T45 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T44 = YPsig(LITREF(lit_80),YPPlist(2,T45,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_29 = YPmet(FUNCODEREF(fun_open_29),LITREF(lit_1),T44,ENVNUL,PNUL,sloc(139));
  T47 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T48 = fun_open_29;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSioSportYopen,T46);
  lit_81 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T50 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T49 = YPsig(LITREF(lit_81),YPPlist(2,T50,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T49,ENVNUL,PNUL,sloc(144));
  T52 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T53 = fun_open_30;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSioSportYopen,T51);
  lit_82 = YPPlist(1,YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_31 = YPmet(FUNCODEREF(fun_peek_31),LITREF(lit_15),T54,ENVNUL,PNUL,sloc(149));
  T56 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T57 = fun_peek_31;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSioSportYpeek,T55);
  lit_83 = YPPlist(1,YPPsym((P)"port"));
  T58 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_32 = YPmet(FUNCODEREF(fun_get_32),LITREF(lit_11),T58,ENVNUL,PNUL,sloc(154));
  T60 = VARREF_OR(YgooSioSportYget,YPfalse);
  T61 = fun_get_32;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSioSportYget,T59);
  lit_84 = YPPlist(1,YPPsym((P)"port"));
  T62 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_33 = YPmet(FUNCODEREF(fun_readyQ_33),LITREF(lit_17),T62,ENVNUL,PNUL,sloc(161));
  T64 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T65 = fun_readyQ_33;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSioSportYreadyQ,T63);
  lit_85 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T66 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_34 = YPmet(FUNCODEREF(fun_put_34),LITREF(lit_24),T66,ENVNUL,PNUL,sloc(164));
  T68 = VARREF_OR(YgooSioSportYput,YPfalse);
  T69 = fun_put_34;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSioSportYput,T67);
  lit_86 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T70 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_35 = YPmet(FUNCODEREF(fun_puts_35),LITREF(lit_26),T70,ENVNUL,PNUL,sloc(167));
  T72 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T73 = fun_puts_35;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSportYputs,T71);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-2280");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"port-to-str");
  T80 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T79 = fun_x_2280_36 = YPmet(FUNCODEREF(fun_x_2280_36),LITREF(lit_89),T80,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T77 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T75 = fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T82 = fun_38;
  T81 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port-to-str"),T82);
  T74 = T81;
  return T74;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
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
  {&module_info_gooSfun},
  {&module_info_gooSclass},
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
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"%close-out-port", PVAR, NULL},
  {"get", CVAR, &YgooSioSportYget},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"%force-out", PVAR, NULL},
  {"with-port", PVAR, NULL},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"%get", PVAR, NULL},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"puts", CVAR, &YgooSioSportYputs},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"gets", CVAR, &YgooSioSportYgets},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"%close-in-port", PVAR, NULL},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"---main-0---", PVAR, NULL},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"%peek", PVAR, NULL},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"port-to-str", PVAR, NULL},
  {"%current-in-port", PVAR, NULL},
  {"put", CVAR, &YgooSioSportYput},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"%puts", PVAR, NULL},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {"port-filename", CVAR, &YgooSioSportYport_filename},
  {"%open-out-file", PVAR, NULL},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"%current-out-port", PVAR, NULL},
  {"%ready?", PVAR, NULL},
  {"in", CVAR, &YgooSioSportYin},
  {"close", CVAR, &YgooSioSportYclose},
  {"%ready", PVAR, NULL},
  {"%put", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"out", CVAR, &YgooSioSportYout},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"%newline", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"open", CVAR, &YgooSioSportYopen},
  {"%open-in-file", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<str-port>", NULL},
  {"port-index-setter", NULL},
  {"port-line", NULL},
  {"get", NULL},
  {"port-handle", NULL},
  {"with-port", NULL},
  {"<file-port>", NULL},
  {"<file-out-port>", NULL},
  {"<str-out-port>", NULL},
  {"port-index", NULL},
  {"<port>", NULL},
  {"puts", NULL},
  {"<out-port>", NULL},
  {"<str-in-port>", NULL},
  {"<file-in-port>", NULL},
  {"port-to-str", NULL},
  {"put", NULL},
  {"ready?", NULL},
  {"port-contents", NULL},
  {"<in-port>", NULL},
  {"port-filename", NULL},
  {"port-line-setter", NULL},
  {"force-out", NULL},
  {"peek", NULL},
  {"in", NULL},
  {"close", NULL},
  {"out", NULL},
  {"newline", NULL},
  {"gets", NULL},
  {"open", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
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
  (P)YgooSioSportY___main_2___();

}

/* END OF GENERATED CODE. */
