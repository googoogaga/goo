/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
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
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSlstYDline_pah_empty,"goo/cols/lst","$line-pah-empty");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
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
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
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
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
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
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
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
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
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
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
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
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
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
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
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
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYbitQ,"goo/math","bit?");
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
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
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
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(Yassert_error,"goo/boot","assert-error");
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
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
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
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
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

DEFLIT(lit_57);
DEFLIT(lit_79);
DEFLIT(lit_29);
DEFLIT(lit_86);
DEFLIT(lit_80);
DEFLIT(lit_40);
DEFLIT(lit_58);
DEFLIT(lit_54);
DEFLIT(lit_110);
DEFLIT(lit_81);
DEFLIT(lit_100);
DEFLIT(lit_37);
DEFLIT(lit_47);
DEFLIT(lit_108);
DEFLIT(lit_24);
DEFLIT(lit_55);
DEFLIT(lit_64);
DEFLIT(lit_97);
DEFLIT(lit_32);
DEFLIT(lit_56);
DEFLIT(lit_76);
DEFLIT(lit_49);
DEFLIT(lit_96);
DEFLIT(lit_17);
DEFLIT(lit_44);
DEFLIT(lit_38);
DEFLIT(lit_105);
DEFLIT(lit_22);
DEFLIT(lit_62);
DEFLIT(lit_4);
DEFLIT(lit_9);
DEFLIT(lit_11);
DEFLIT(lit_45);
DEFLIT(lit_43);
DEFLIT(lit_46);
DEFLIT(lit_15);
DEFLIT(lit_103);
DEFLIT(lit_50);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_59);
DEFLIT(lit_95);
DEFLIT(lit_89);
DEFLIT(lit_5);
DEFLIT(lit_25);
DEFLIT(lit_31);
DEFLIT(lit_72);
DEFLIT(lit_7);
DEFLIT(lit_51);
DEFLIT(lit_91);
DEFLIT(lit_70);
DEFLIT(lit_109);
DEFLIT(lit_20);
DEFLIT(lit_63);
DEFLIT(lit_10);
DEFLIT(lit_18);
DEFLIT(lit_36);
DEFLIT(lit_106);
DEFLIT(lit_39);
DEFLIT(lit_73);
DEFLIT(lit_104);
DEFLIT(lit_99);
DEFLIT(lit_16);
DEFLIT(lit_78);
DEFLIT(lit_98);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_12);
DEFLIT(lit_75);
DEFLIT(lit_21);
DEFLIT(lit_52);
DEFLIT(lit_13);
DEFLIT(lit_48);
DEFLIT(lit_93);
DEFLIT(lit_68);
DEFLIT(lit_2);
DEFLIT(lit_66);
DEFLIT(lit_6);
DEFLIT(lit_71);
DEFLIT(lit_77);
DEFLIT(lit_82);
DEFLIT(lit_85);
DEFLIT(lit_28);
DEFLIT(lit_60);
DEFLIT(lit_53);
DEFLIT(lit_74);
DEFLIT(lit_94);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_33);
DEFLIT(lit_90);
DEFLIT(lit_92);
DEFLIT(lit_67);
DEFLIT(lit_84);
DEFLIT(lit_14);
DEFLIT(lit_83);
DEFLIT(lit_87);
DEFLIT(lit_26);
DEFLIT(lit_107);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_34);
DEFLIT(lit_61);
DEFLIT(lit_8);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_101);
DEFLIT(lit_27);
DEFLIT(lit_69);
DEFLIT(lit_88);
DEFLIT(lit_23);

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
LOCFOR(fun_x_2201_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_line_of_34);
LOCFOR(fun_line_of_35);
LOCFOR(fun_36);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_empty_38);
FUNFOR(YgooScolsSlstYline_pair);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_41);
LOCFOR(fun_line_list_of_42);
LOCFOR(fun_line_list_of_43);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_len_0) {
  P x_;
  P xF8211;
  P countF8210;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)0),VARREF(YLintG));
  countF8210 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF8211 = x_;
  LOOP_349: {
    P a349_0,a349_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF8211);
    if (T1 != YPfalse) {
      T0 = countF8210;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),countF8210,YPint((P)1));
      T4 = CALL1(1,VARREF(Ytail),xF8211);
      a349_0 = T3;
      a349_1 = T4;
      countF8210 = a349_0;
      xF8211 = a349_1;
      goto LOOP_349;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_1) {
  P x_,key_,default_;
  P xF8213;
  P countF8212;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF8212 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF8213 = x_;
  LOOP_350: {
    P a350_0,a350_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF8213);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),countF8212,key_);
      if (T3 != YPfalse) {
        T4 = CALL1(1,VARREF(Yhead),xF8213);
        T2 = T4;
      } else {
        T6 = CALL2(1,VARREF(YgooSmathYA),countF8212,YPint((P)1));
        T7 = CALL1(1,VARREF(Ytail),xF8213);
        a350_0 = T6;
        a350_1 = T7;
        countF8212 = a350_0;
        xF8213 = a350_1;
        goto LOOP_350;
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_2) {
  P z_,x_,key_;
  P xF8215;
  P countF8214;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF8214 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF8215 = x_;
  LOOP_351: {
    P a351_0,a351_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF8215);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(Yrange_error),xF8215,key_);
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF8214,key_);
      if (T4 != YPfalse) {
        T5 = CALL2(1,VARREF(Yhead_setter),z_,xF8215);
        T3 = T5;
      } else {
        T7 = CALL2(1,VARREF(YgooSmathYA),countF8214,YPint((P)1));
        T8 = CALL1(1,VARREF(Ytail),xF8215);
        a351_0 = T7;
        a351_1 = T8;
        countF8214 = a351_0;
        xF8215 = a351_1;
        goto LOOP_351;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_3) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
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
  P resF8217;
  P iF8216;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLintG));
  iF8216 = s_;
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  check_type(T5,VARREF(YLlstG));
  resF8217 = T5;
  LOOP_352: {
    P a352_0,a352_1;
    T1 = CALL2(1,VARREF(YgooSmagYG),iF8216,YPint((P)0));
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathY_),iF8216,YPint((P)1));
      T4 = CALL3(1,VARREF(Ynew),t_,VARREF(Ytail),resF8217);
      a352_0 = T3;
      a352_1 = T4;
      iF8216 = a352_0;
      resF8217 = a352_1;
      goto LOOP_352;
      T0 = T2;
    } else {
      T0 = resF8217;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P resultF8219;
  P indexF8218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T6 = CALL2(1,VARREF(YgooSmathY_),T7,YPint((P)1));
  check_type(T6,VARREF(YLintG));
  indexF8218 = T6;
  T8 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  check_type(T8,VARREF(YLlstG));
  resultF8219 = T8;
  LOOP_353: {
    P a353_0,a353_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),indexF8218,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = resultF8219;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathY_),indexF8218,YPint((P)1));
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),objects_,indexF8218);
      T4 = CALL5(1,VARREF(Ynew),c_,VARREF(Yhead),T5,VARREF(Ytail),resultF8219);
      a353_0 = T3;
      a353_1 = T4;
      indexF8218 = a353_0;
      resultF8219 = a353_1;
      goto LOOP_353;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_10) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
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
  P x_2195F8220;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  x_2195F8220 = e_;
  T1 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T0,x_2195F8220);
  T3 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T2 = CALL1(1,VARREF(Ytail),T3);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T2,x_2195F8220);
UNLINK_STACK();
  RET(x_2195F8220);
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
  P pxF8222;
  P xF8221;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  xF8221 = x_;
  pxF8222 = x_;
  LOOP_354: {
    P a354_0,a354_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF8221);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(Yhead),pxF8222);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(Ytail),xF8221);
      a354_0 = T4;
      a354_1 = xF8221;
      xF8221 = a354_0;
      pxF8222 = a354_1;
      goto LOOP_354;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_20) {
  P c_;
  P tF8225;
  P rF8224;
  P lF8223;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  lF8223 = c_;
  T5 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T4 = CALL1(1,VARREF(YgooScolsScolYempty),T5);
  rF8224 = T4;
  LOOP_355: {
    P a355_0,a355_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),lF8223);
    if (T1 != YPfalse) {
      T0 = rF8224;
    } else {
      T3 = CALL1(1,VARREF(Ytail),lF8223);
      tF8225 = T3;
      CALL2(1,VARREF(Ytail_setter),rF8224,lF8223);
      a355_0 = tF8225;
      a355_1 = lF8223;
      lF8223 = a355_0;
      rF8224 = a355_1;
      goto LOOP_355;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_connect_21) {
  P x_,y_;
  P pF8226;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    check_type(y_,VARREF(YLlstG));
    pF8226 = y_;
    LOOP_356: {
      P a356_0;
      T4 = CALL1(1,VARREF(Ytail),pF8226);
      T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T4);
      if (T3 != YPfalse) {
        T2 = pF8226;
      } else {
        T6 = CALL1(1,VARREF(Ytail),pF8226);
        a356_0 = T6;
        pF8226 = a356_0;
        goto LOOP_356;
        T2 = T5;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_22) {
  P x_,more_;
  P xF8231;
  P x_2196F8230;
  P curF8229;
  P resultF8228;
  P connectF8227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T16 = fun_connect_21;
  connectF8227 = T16;
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF8228 = T15;
  curF8229 = resultF8228;
  T2 = curF8229;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T1 = CALL2(1,connectF8227,T2,T3);
  curF8229 = T1;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_2196F8230 = T13;
  LOOP_357: {
    P a357_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2196F8230);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_2196F8230);
      xF8231 = T12;
      T8 = curF8229;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF8231);
      T7 = CALL2(1,connectF8227,T8,T9);
      curF8229 = T7;
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2196F8230);
      a357_0 = T11;
      x_2196F8230 = a357_0;
      goto LOOP_357;
      T4 = T10;
    } else {
      T4 = YPfalse;
    }
  }
  T14 = CALL1(1,VARREF(Ytail),resultF8228);
UNLINK_STACK();
  RET(T14);
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
  P tmpF8236;
  P nextF8235;
  P prevF8234;
  P tmpF8233;
  P tmpF8232;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
  tmpF8232 = YPfalse;
  LOOP_358: {
    P a358_0;
    T2 = CALL1(1,VARREF(Yhead),items_);
    T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmpF8232,T2);
    if (T1 != YPfalse) {
      T0 = items_;
    } else {
      T16 = CALL1(1,VARREF(Yhead),items_);
      tmpF8233 = T16;
      prevF8234 = items_;
      T17 = CALL1(1,VARREF(Ytail),items_);
      nextF8235 = T17;
      LOOP_359: {
        P a359_0,a359_1,a359_2;
        T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nextF8235);
        if (T4 != YPfalse) {
          a358_0 = tmpF8233;
          tmpF8232 = a358_0;
          goto LOOP_358;
          T3 = T5;
        } else {
          T9 = CALL1(1,VARREF(Yhead),nextF8235);
          T10 = CALL1(1,VARREF(Yhead),prevF8234);
          T8 = CALL2(1,test_,T9,T10);
          if (T8 != YPfalse) {
            T13 = CALL1(1,VARREF(Yhead),prevF8234);
            tmpF8236 = T13;
            T11 = CALL1(1,VARREF(Yhead),nextF8235);
            CALL2(1,VARREF(Yhead_setter),T11,prevF8234);
            T12 = CALL2(1,VARREF(Yhead_setter),tmpF8236,nextF8235);
            T7 = T12;
          } else {
            T7 = tmpF8233;
          }
          T14 = CALL1(1,VARREF(Ytail),prevF8234);
          T15 = CALL1(1,VARREF(Ytail),nextF8235);
          a359_0 = T7;
          a359_1 = T14;
          a359_2 = T15;
          tmpF8233 = a359_0;
          prevF8234 = a359_1;
          nextF8235 = a359_2;
          goto LOOP_359;
          T3 = T6;
        }
      }
      T0 = T3;
    }
  }
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

FUNCODEDEF(fun_x_2201_31) {
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
  P DemptyF8251;
  P classF8250;
  P x_2200F8249;
  P x_2200F8248;
  P x_2200F8247;
  P x_2200F8246;
  P x_2200F8245;
  P x_2200F8244;
  P x_2200F8243;
  P x_2200F8242;
  P x_2200F8241;
  P supersF8240;
  P nameF8239;
  P x_2200F8238;
  P x_2201F8237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
LINK_STACK();
  ARG(return_, 0);
  T72 = FUNSHELL(0,fun_x_2201_31,2);
  x_2201F8237 = T72;
  FUNINIT(x_2201F8237, 2,FREEREF(0),return_);
  x_2200F8238 = FREEREF(0);
  nameF8239 = YPfalse;
  supersF8240 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2200F8238,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2200F8238,LITREF(lit_72),x_2201F8237);
    x_2200F8241 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2200F8241,x_2201F8237);
    nameF8239 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2200F8241);
    x_2200F8242 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2200F8242,x_2201F8237);
    x_2200F8243 = T11;
    supersF8240 = x_2200F8243;
    x_2200F8244 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2200F8244,x_2201F8237);
    x_2200F8245 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2200F8245,x_2201F8237);
    T10 = CALL1(1,VARREF(Ytail),x_2200F8244);
    x_2200F8246 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2200F8246,x_2201F8237);
    T12 = CALL1(1,VARREF(Ytail),x_2200F8242);
    x_2200F8247 = T12;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2200F8247,x_2201F8237);
    x_2200F8248 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2200F8248,x_2201F8237);
    T6 = CALL1(1,VARREF(Ytail),x_2200F8247);
    x_2200F8249 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2200F8249,x_2201F8237);
  } else {
    T16 = CALL2(1,x_2201F8237,LITREF(lit_73),x_2200F8238);
  }
  T71 = nameF8239;
  T70 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_74),T71,LITREF(lit_75));
  classF8250 = T70;
  T69 = nameF8239;
  T68 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_76),T69,LITREF(lit_77));
  DemptyF8251 = T68;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T22 = CALL1(1,VARREF(Ylst),classF8250);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T26 = supersF8240;
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_81));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T30 = CALL1(1,VARREF(Ylst),DemptyF8251);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T34 = CALL1(1,VARREF(Ylst),classF8250);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,LITREF(lit_81));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T31,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T39 = nameF8239;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_81));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T47 = CALL1(1,VARREF(Ylst),classF8250);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T45 = CALLN(1,VARREF(YgooSmacrosYcat),7,T46,T47,T48,T49,T50,T51,LITREF(lit_81));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T36 = CALL5(1,VARREF(YgooSmacrosYcat),T37,T38,T40,T44,LITREF(lit_81));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_16));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T64 = CALL1(1,VARREF(Ylst),classF8250);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,LITREF(lit_81));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_81));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T66 = CALL1(1,VARREF(Ylst),classF8250);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T65,T66,LITREF(lit_81));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T67 = CALL1(1,VARREF(Ylst),DemptyF8251);
  T53 = CALL5(1,VARREF(YgooSmacrosYcat),T54,T55,T56,T67,LITREF(lit_81));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T27,T35,T52,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
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
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
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

FUNCODEDEF(fun_empty_38) {
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
  P iF8253;
  P rF8252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YgooScolsSlstYLline_listG));
  rF8252 = T6;
  T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  iF8253 = T7;
  LOOP_360: {
    P a360_0,a360_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF8253,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF8252;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),elts_,iF8253);
      T3 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T4,rF8252,l_);
      T5 = CALL2(1,VARREF(YgooSmathY_),iF8253,YPint((P)1));
      a360_0 = T3;
      a360_1 = T5;
      rF8252 = a360_0;
      iF8253 = a360_1;
      goto LOOP_360;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_copy_41) {
  P l_,src_;
  P tmpF8257;
  P tmpF8256;
  P tF8255;
  P hF8254;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),src_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),src_);
    hF8254 = T13;
    T12 = CALL1(1,VARREF(Ytail),src_);
    tF8255 = T12;
    T8 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF8254);
    tmpF8256 = T8;
    if (tmpF8256 != YPfalse) {
      T7 = tmpF8256;
    } else {
      T7 = l_;
    }
    T6 = CALL2(0,FREEREF(0),T7,hF8254);
    T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF8255);
    tmpF8257 = T11;
    if (tmpF8257 != YPfalse) {
      T10 = tmpF8257;
    } else {
      T10 = l_;
    }
    T9 = CALL2(0,FREEREF(0),T10,tF8255);
    T5 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T6,T9,l_);
    T0 = T5;
  } else {
    T0 = src_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_line_list_of_42) {
  P ctx_,src_;
  P copyF8258;
  P T0,T1,T2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
  T2 = FUNSHELL(1,fun_copy_41,1);
  copyF8258 = T2;
  FUNINIT(copyF8258, 1,copyF8258);
  T1 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T0 = CALL2(1,copyF8258,T1,src_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_line_list_of_43) {
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
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61;
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
  fun_len_0 = YPmet(FUNCODEREF(fun_len_0),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(39));
  T10 = VARREF_OR(YgooStypesYlen,YPfalse);
  T11 = fun_len_0;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooStypesYlen,T9);
  lit_10 = YPPsym((P)"elt-or");
  lit_11 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  T12 = YPsig(LITREF(lit_11),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPmet(FUNCODEREF(fun_elt_or_1),LITREF(lit_10),T12,ENVNUL,PNUL,sloc(43));
  T14 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T15 = fun_elt_or_1;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYelt_or,T13);
  lit_12 = YPPsym((P)"elt-setter");
  lit_13 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  T16 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_2 = YPmet(FUNCODEREF(fun_elt_setter_2),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(51));
  T18 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T19 = fun_elt_setter_2;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolxYelt_setter,T17);
  lit_14 = YPPsym((P)"empty?");
  lit_15 = YPPlist(1,YPPsym((P)"c"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_3 = YPmet(FUNCODEREF(fun_emptyQ_3),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(59));
  T22 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T23 = fun_emptyQ_3;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmacrosYemptyQ,T21);
  lit_16 = YPPsym((P)"empty");
  lit_17 = YPPlist(1,YPPsym((P)"c"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T24 = YPsig(LITREF(lit_17),YPPlist(1,T25),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_4 = YPmet(FUNCODEREF(fun_empty_4),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(61));
  T27 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T28 = fun_empty_4;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYempty,T26);
  lit_18 = YPPsym((P)"fab");
  lit_19 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T29 = YPsig(LITREF(lit_19),YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_5 = YPmet(FUNCODEREF(fun_fab_5),LITREF(lit_18),T29,ENVNUL,PNUL,sloc(63));
  T32 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T33 = fun_fab_5;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsScolYfab,T31);
  lit_20 = YPPsym((P)"fabs");
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T35 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T34 = YPsig(LITREF(lit_21),YPPlist(1,T35),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_6 = YPmet(FUNCODEREF(fun_fabs_6),LITREF(lit_20),T34,ENVNUL,PNUL,sloc(69));
  T37 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T38 = fun_fabs_6;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSmathYfabs,T36);
  lit_22 = YPPsym((P)"<lst-enum>");
  T40 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T39 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_22),T40);
  VARSET(YgooScolsSlstYLlst_enumG,T39);
  lit_23 = YPPsym((P)"%dat");
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_7 = YPmet(FUNCODEREF(fun_Pdat_7),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(78));
  T43 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T44 = fun_Pdat_7;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsSlstYPdat,T42);
  lit_25 = YPPsym((P)"%dat-setter");
  lit_26 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T45 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_8 = YPmet(FUNCODEREF(fun_Pdat_setter_8),LITREF(lit_25),T45,ENVNUL,PNUL,sloc(78));
  T47 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T48 = fun_Pdat_setter_8;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooScolsSlstYPdat_setter,T46);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"%key");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_9 = YPmet(FUNCODEREF(fun_Pkey_9),LITREF(lit_27),T49,ENVNUL,PNUL,sloc(79));
  T51 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T52 = fun_Pkey_9;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooScolsSlstYPkey,T50);
  lit_29 = YPPsym((P)"%key-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_10 = YPmet(FUNCODEREF(fun_Pkey_setter_10),LITREF(lit_29),T53,ENVNUL,PNUL,sloc(79));
  T55 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T56 = fun_Pkey_setter_10;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooScolsSlstYPkey_setter,T54);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T58 = fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T59,ENVNUL,PNUL,sloc(79));
  T61 = fun_11;
  T60 = XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T61);
  T57 = T60;
  return T57;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115;
DEFCREGS();
  lit_32 = YPPsym((P)"enum");
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_12 = YPmet(FUNCODEREF(fun_enum_12),LITREF(lit_32),T0,ENVNUL,PNUL,sloc(80));
  T2 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T3 = fun_enum_12;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsScolYenum,T1);
  lit_34 = YPPsym((P)"fin?");
  lit_35 = YPPlist(1,YPPsym((P)"e"));
  T4 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_13 = YPmet(FUNCODEREF(fun_finQ_13),LITREF(lit_34),T4,ENVNUL,PNUL,sloc(82));
  T6 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T7 = fun_finQ_13;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsScolYfinQ,T5);
  lit_36 = YPPsym((P)"nxt");
  lit_37 = YPPlist(1,YPPsym((P)"e"));
  T8 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_14 = YPmet(FUNCODEREF(fun_nxt_14),LITREF(lit_36),T8,ENVNUL,PNUL,sloc(84));
  T10 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T11 = fun_nxt_14;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsScolYnxt,T9);
  lit_38 = YPPsym((P)"now");
  lit_39 = YPPlist(1,YPPsym((P)"e"));
  T12 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_15 = YPmet(FUNCODEREF(fun_now_15),LITREF(lit_38),T12,ENVNUL,PNUL,sloc(86));
  T14 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T15 = fun_now_15;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYnow,T13);
  lit_40 = YPPsym((P)"now-setter");
  lit_41 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T16 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_16 = YPmet(FUNCODEREF(fun_now_setter_16),LITREF(lit_40),T16,ENVNUL,PNUL,sloc(88));
  T18 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T19 = fun_now_setter_16;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolYnow_setter,T17);
  lit_42 = YPPsym((P)"now-key");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T20 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_17 = YPmet(FUNCODEREF(fun_now_key_17),LITREF(lit_42),T20,ENVNUL,PNUL,sloc(90));
  T22 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T23 = fun_now_key_17;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYnow_key,T21);
  lit_44 = YPPsym((P)"add");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_18 = YPmet(FUNCODEREF(fun_add_18),LITREF(lit_44),T24,ENVNUL,PNUL,sloc(94));
  T26 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T27 = fun_add_18;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooScolsScolYadd,T25);
  lit_46 = YPPsym((P)"last");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_19 = YPmet(FUNCODEREF(fun_last_19),LITREF(lit_46),T28,ENVNUL,PNUL,sloc(97));
  T30 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T31 = fun_last_19;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmacrosYlast,T29);
  lit_48 = YPPsym((P)"rev!");
  lit_49 = YPPlist(1,YPPsym((P)"c"));
  T32 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_20 = YPmet(FUNCODEREF(fun_revX_20),LITREF(lit_48),T32,ENVNUL,PNUL,sloc(101));
  T34 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T35 = fun_revX_20;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmacrosYrevX,T33);
  lit_50 = YPPsym((P)"cat!");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_52 = YPPsym((P)"connect");
  lit_53 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T37 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_21 = YPmet(FUNCODEREF(fun_connect_21),LITREF(lit_52),T37,ENVNUL,PNUL,sloc(110));
  T36 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_22 = YPmet(FUNCODEREF(fun_catX_22),LITREF(lit_50),T36,ENVNUL,PNUL,sloc(109));
  T39 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T40 = fun_catX_22;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooScolsSseqxYcatX,T38);
  lit_54 = YPPlist(1,YPPsym((P)"objects"));
  T41 = YPsig(LITREF(lit_54),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_23 = YPmet(FUNCODEREF(fun_lst_23),LITREF(lit_0),T41,ENVNUL,PNUL,sloc(127));
  T43 = VARREF_OR(Ylst,YPfalse);
  T44 = fun_lst_23;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(Ylst,T42);
  lit_55 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T45 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_24 = YPmet(FUNCODEREF(fun_pair_24),LITREF(lit_2),T45,ENVNUL,PNUL,sloc(130));
  T47 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T48 = fun_pair_24;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSmacrosYpair,T46);
  lit_56 = YPPsym((P)"push!");
  lit_57 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_25 = YPmet(FUNCODEREF(fun_pushX_25),LITREF(lit_56),T49,ENVNUL,PNUL,sloc(133));
  T51 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T52 = fun_pushX_25;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooScolsSseqxYpushX,T50);
  lit_58 = YPPsym((P)"pop!");
  lit_59 = YPPlist(1,YPPsym((P)"c"));
  T54 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T53 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T54,Ynil);
  fun_popX_26 = YPmet(FUNCODEREF(fun_popX_26),LITREF(lit_58),T53,ENVNUL,PNUL,sloc(136));
  T56 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T57 = fun_popX_26;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsSseqxYpopX,T55);
  lit_60 = YPPsym((P)"sort-by!");
  lit_61 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  T58 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_27 = YPmet(FUNCODEREF(fun_sort_byX_27),LITREF(lit_60),T58,ENVNUL,PNUL,sloc(140));
  T60 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T61 = fun_sort_byX_27;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsSseqYsort_byX,T59);
  lit_62 = YPPsym((P)"to-str");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPsb((P)"(");
  lit_65 = YPsb((P)")");
  T62 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_28 = YPmet(FUNCODEREF(fun_to_str_28),LITREF(lit_62),T62,ENVNUL,PNUL,sloc(155));
  T64 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T65 = fun_to_str_28;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSmathYto_str,T63);
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T66 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_29 = YPmet(FUNCODEREF(fun_assq_29),LITREF(lit_6),T66,ENVNUL,PNUL,sloc(162));
  T68 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T69 = fun_assq_29;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsSlstYassq,T67);
  lit_67 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T70 = YPsig(LITREF(lit_67),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_30 = YPmet(FUNCODEREF(fun_assqn_30),LITREF(lit_4),T70,ENVNUL,PNUL,sloc(169));
  T72 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T73 = fun_assqn_30;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooScolsSlstYassqn,T71);
  lit_68 = YPPlist(1,YPPsym((P)"exp"));
  lit_69 = YPPlist(1,YPPsym((P)"return"));
  lit_70 = YPPsym((P)"x-2201");
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
  T76 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2201_31 = YPmet(FUNCODEREF(fun_x_2201_31),LITREF(lit_70),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T77 = fun_33;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T77);
  lit_93 = YPPsym((P)"line-of");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_34 = YPmet(FUNCODEREF(fun_line_of_34),LITREF(lit_93),T78,ENVNUL,PNUL,sloc(185));
  T80 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T81 = fun_line_of_34;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooScolsSlstYline_of,T79);
  lit_95 = YPPsym((P)"<line>");
  T83 = (P)YPpair(VARREF(YLmagG),Ynil);
  T82 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_95),T83);
  VARSET(YgooScolsSlstYLlineG,T82);
  lit_96 = YPPlist(1,YPPsym((P)"_x"));
  T84 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_35 = YPmet(FUNCODEREF(fun_line_of_35),LITREF(lit_93),T84,ENVNUL,PNUL,sloc(188));
  T86 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T87 = fun_line_of_35;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsSlstYline_of,T85);
  lit_97 = YPPlist(1,YPPsym((P)"_x"));
  T88 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T88,ENVNUL,PNUL,sloc(188));
  T89 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T90 = fun_36;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),YPfalse,T89,T90);
  lit_98 = YPPsym((P)"<line-pah>");
  T93 = (P)YPpair(VARREF(YgooScolsSlstYLlineG),Ynil);
  T92 = (P)YPpair(VARREF(YLlstG),T93);
  T91 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T92);
  VARSET(YgooScolsSlstYLline_pahG,T91);
  T94 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_empty,T94);
  lit_99 = YPPsym((P)"line-pah");
  lit_100 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T95 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPmet(FUNCODEREF(YgooScolsSlstYline_pah),LITREF(lit_99),T95,ENVNUL,PNUL,sloc(190));
  T96 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T96);
  lit_101 = YPPlist(1,YPPsym((P)"e"));
  T98 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T97 = YPsig(LITREF(lit_101),YPPlist(1,T98),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_empty_38 = YPmet(FUNCODEREF(fun_empty_38),LITREF(lit_16),T97,ENVNUL,PNUL,sloc(190));
  T100 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T101 = fun_empty_38;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooScolsScolYempty,T99);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_102 = YPPsym((P)"line-pair");
  lit_103 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T102 = YPsig(LITREF(lit_103),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPmet(FUNCODEREF(YgooScolsSlstYline_pair),LITREF(lit_102),T102,ENVNUL,PNUL,sloc(194));
  T103 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T103);
  lit_104 = YPPsym((P)"line-list");
  lit_105 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  T104 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPmet(FUNCODEREF(YgooScolsSlstYline_list),LITREF(lit_104),T104,ENVNUL,PNUL,sloc(196));
  T105 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T105);
  lit_106 = YPPsym((P)"line-list-of");
  lit_107 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_108 = YPPsym((P)"copy");
  lit_109 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T107 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_41 = YPmet(FUNCODEREF(fun_copy_41),LITREF(lit_108),T107,ENVNUL,PNUL,sloc(203));
  T106 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_42 = YPmet(FUNCODEREF(fun_line_list_of_42),LITREF(lit_106),T106,ENVNUL,PNUL,sloc(202));
  T109 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T110 = fun_line_list_of_42;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YgooScolsSlstYline_list_of,T108);
  lit_110 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T111 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_43 = YPmet(FUNCODEREF(fun_line_list_of_43),LITREF(lit_106),T111,ENVNUL,PNUL,sloc(209));
  T113 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T114 = fun_line_list_of_43;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YgooScolsSlstYline_list_of,T112);
  T115 = YPfalse;
  return T115;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
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
  {&module_info_gooSfun},
  {&module_info_gooSclass},
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
  {"len", &module_info_gooStypes, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
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
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"$line-pah-empty", CVAR, &YgooScolsSlstYDline_pah_empty},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"---main-0---", PVAR, NULL},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"def-list", PVAR, NULL},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"---main-1---", PVAR, NULL},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"line-list-of", NULL},
  {"line-list", NULL},
  {"assq", NULL},
  {"list", NULL},
  {"<lst>", NULL},
  {"line-pair", NULL},
  {"tail-setter", NULL},
  {"tail", NULL},
  {"nil", NULL},
  {"assqn", NULL},
  {"<line>", NULL},
  {"pair", NULL},
  {"lst", NULL},
  {"line-of", NULL},
  {"head-setter", NULL},
  {"head", NULL},
  {"def-list", NULL},
  {"<list>", NULL},
  {"<line-list>", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
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
