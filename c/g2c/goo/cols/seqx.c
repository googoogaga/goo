/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seqx");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seqx */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
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
DEF(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
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
DEF(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
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
DEF(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
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
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
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
DEF(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
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
DEF(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
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
DEF(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
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
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
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
EXT(YgooSmacrosYdo,"goo/macros","do");
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
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
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

DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_17);
DEFLIT(lit_33);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_21);
DEFLIT(lit_19);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_27);
DEFLIT(lit_25);
DEFLIT(lit_0);
DEFLIT(lit_28);
DEFLIT(lit_24);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_6);
DEFLIT(lit_8);
DEFLIT(lit_31);
DEFLIT(lit_16);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_32);

/* FUNCTIONS: */

LOCFOR(fun_revX_0);
LOCFOR(fun_catX_1);
LOCFOR(fun_pushX_2);
LOCFOR(fun_popX_3);
LOCFOR(fun_insX_4);
LOCFOR(fun_del_valsX_5);
LOCFOR(fun_del_dupsX_6);
LOCFOR(fun_into_7);
LOCFOR(fun_sub_setter_8);
LOCFOR(fun_subT_setter_9);
LOCFOR(fun_sortX_10);
LOCFOR(fun_alter_11);
extern P YgooScolsSseqxY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_revX_0) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYrev),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_catX_1) {
  P x_,more_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmacrosYcat),YPfalse,more_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_2) {
  P l_,x_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpush),l_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_3) {
  P l_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYpop),l_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_insX_4) {
  P x_,v_,before_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,v_,before_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_valsX_5) {
  P x_,v_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  T0 = CALL2(1,VARREF(YgooScolsSseqYdel_vals),x_,v_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_dupsX_6) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_into_7) {
  P dst_,src_;
  P tmpF8174;
  P esF8173;
  P edF8172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  edF8172 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  esF8173 = T9;
  LOOP_341: {
    P a341_0,a341_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),esF8173);
    tmpF8174 = T3;
    if (tmpF8174 != YPfalse) {
      T1 = tmpF8174;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),edF8172);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),esF8173);
      CALL2(1,VARREF(YgooScolsScolYnow_setter),T4,edF8172);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),edF8172);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),esF8173);
      a341_0 = T6;
      a341_1 = T7;
      edF8172 = a341_0;
      esF8173 = a341_1;
      goto LOOP_341;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_setter_8) {
  P src_,dst_,from_,below_;
  P iF8193;
  P dF8192;
  P ndF8191;
  P iF8190;
  P dF8189;
  P sF8188;
  P ndF8187;
  P iF8186;
  P dF8185;
  P ndF8184;
  P ndstF8183;
  P new_lenF8182;
  P sF8181;
  P dF8180;
  P iF8179;
  P dF8178;
  P del_lenF8177;
  P src_lenF8176;
  P dst_lenF8175;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
  T49 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  check_type(T49,VARREF(YLintG));
  dst_lenF8175 = T49;
  T48 = CALL1(1,VARREF(YgooStypesYlen),src_);
  check_type(T48,VARREF(YLintG));
  src_lenF8176 = T48;
  T47 = CALL2(1,VARREF(YgooSmathY_),below_,from_);
  check_type(T47,VARREF(YLintG));
  del_lenF8177 = T47;
  T1 = CALL2(1,VARREF(YgooSmathYE),del_lenF8177,src_lenF8176);
  if (T1 != YPfalse) {
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    dF8178 = T14;
    iF8179 = YPint((P)0);
    LOOP_342: {
      P a342_0,a342_1;
      T3 = CALL2(1,VARREF(YgooSmathYE),iF8179,from_);
      if (T3 != YPfalse) {
        dF8180 = dF8178;
        T10 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
        sF8181 = T10;
        LOOP_343: {
          P a343_0,a343_1;
          T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF8181);
          if (T5 != YPfalse) {
            T4 = dst_;
          } else {
            T6 = CALL1(1,VARREF(YgooScolsScolYnow),sF8181);
            CALL2(1,VARREF(YgooScolsScolYnow_setter),T6,dF8180);
            T8 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8180);
            T9 = CALL1(1,VARREF(YgooScolsScolYnxt),sF8181);
            a343_0 = T8;
            a343_1 = T9;
            dF8180 = a343_0;
            sF8181 = a343_1;
            goto LOOP_343;
            T4 = T7;
          }
        }
        T2 = T4;
      } else {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8178);
        T13 = CALL2(1,VARREF(YgooSmathYA),iF8179,YPint((P)1));
        a342_0 = T12;
        a342_1 = T13;
        dF8178 = a342_0;
        iF8179 = a342_1;
        goto LOOP_342;
        T2 = T11;
      }
    }
    T0 = T2;
  } else {
    T46 = CALL2(1,VARREF(YgooSmathY_),dst_lenF8175,del_lenF8177);
    T45 = CALL2(1,VARREF(YgooSmathYA),T46,src_lenF8176);
    new_lenF8182 = T45;
    T44 = CALL1(1,VARREF(YgooSclassYclass_of),dst_);
    T43 = CALL2(1,VARREF(YgooScolsScolYfab),T44,new_lenF8182);
    ndstF8183 = T43;
    T41 = CALL1(1,VARREF(YgooScolsScolYenum),ndstF8183);
    ndF8184 = T41;
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
    dF8185 = T42;
    iF8186 = YPint((P)0);
    LOOP_344: {
      P a344_0,a344_1,a344_2;
      T16 = CALL2(1,VARREF(YgooSmathYE),iF8186,from_);
      if (T16 != YPfalse) {
        ndF8187 = ndF8184;
        T35 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
        sF8188 = T35;
        LOOP_345: {
          P a345_0,a345_1;
          T18 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF8188);
          if (T18 != YPfalse) {
            dF8189 = dF8185;
            iF8190 = from_;
            LOOP_346: {
              P a346_0,a346_1;
              T20 = CALL2(1,VARREF(YgooSmathYE),iF8190,below_);
              if (T20 != YPfalse) {
                ndF8191 = ndF8187;
                dF8192 = dF8189;
                iF8193 = below_;
                LOOP_347: {
                  P a347_0,a347_1,a347_2;
                  T22 = CALL2(1,VARREF(YgooSmathYE),iF8193,dst_lenF8175);
                  if (T22 != YPfalse) {
                    T21 = ndstF8183;
                  } else {
                    T23 = CALL1(1,VARREF(YgooScolsScolYnow),dF8192);
                    CALL2(1,VARREF(YgooScolsScolYnow_setter),T23,ndF8191);
                    T25 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF8191);
                    T26 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8192);
                    T27 = CALL2(1,VARREF(YgooSmathYA),iF8193,YPint((P)1));
                    a347_0 = T25;
                    a347_1 = T26;
                    a347_2 = T27;
                    ndF8191 = a347_0;
                    dF8192 = a347_1;
                    iF8193 = a347_2;
                    goto LOOP_347;
                    T21 = T24;
                  }
                }
                T19 = T21;
              } else {
                T29 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8189);
                T30 = CALL2(1,VARREF(YgooSmathYA),iF8190,YPint((P)1));
                a346_0 = T29;
                a346_1 = T30;
                dF8189 = a346_0;
                iF8190 = a346_1;
                goto LOOP_346;
                T19 = T28;
              }
            }
            T17 = T19;
          } else {
            T31 = CALL1(1,VARREF(YgooScolsScolYnow),sF8188);
            CALL2(1,VARREF(YgooScolsScolYnow_setter),T31,ndF8187);
            T33 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF8187);
            T34 = CALL1(1,VARREF(YgooScolsScolYnxt),sF8188);
            a345_0 = T33;
            a345_1 = T34;
            ndF8187 = a345_0;
            sF8188 = a345_1;
            goto LOOP_345;
            T17 = T32;
          }
        }
        T15 = T17;
      } else {
        T36 = CALL1(1,VARREF(YgooScolsScolYnow),dF8185);
        CALL2(1,VARREF(YgooScolsScolYnow_setter),T36,ndF8184);
        T38 = CALL1(1,VARREF(YgooScolsScolYnxt),ndF8184);
        T39 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8185);
        T40 = CALL2(1,VARREF(YgooSmathYA),iF8186,YPint((P)1));
        a344_0 = T38;
        a344_1 = T39;
        a344_2 = T40;
        ndF8184 = a344_0;
        dF8185 = a344_1;
        iF8186 = a344_2;
        goto LOOP_344;
        T15 = T37;
      }
    }
    T0 = T15;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subT_setter_9) {
  P src_,dst_,from_;
  P T0,T1;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  ARG(from_, 2);
  T1 = CALL1(1,VARREF(YgooStypesYlen),dst_);
  T0 = CALL4(1,VARREF(YgooScolsSseqxYsub_setter),src_,dst_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sortX_10) {
  P items_;
  P T0;
LINK_STACK();
  ARG(items_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),items_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_alter_11) {
  P dst_,src_,from_,below_;
  P tmpF8196;
  P sF8195;
  P dF8194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  ARG(from_, 2);
  ARG(below_, 3);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dF8194 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  sF8195 = T9;
  LOOP_348: {
    P a348_0,a348_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),dF8194);
    tmpF8196 = T3;
    if (tmpF8196 != YPfalse) {
      T1 = tmpF8196;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),sF8195);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),sF8195);
      CALL2(1,VARREF(YgooScolsScolYnow_setter),T4,dF8194);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),dF8194);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),sF8195);
      a348_0 = T6;
      a348_1 = T7;
      dF8194 = a348_0;
      sF8195 = a348_1;
      goto LOOP_348;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqxY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76;
DEFCREGS();
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
  fun_revX_0 = YPmet(FUNCODEREF(fun_revX_0),LITREF(lit_0),T25,ENVNUL,PNUL,sloc(45));
  T27 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T28 = fun_revX_0;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSmacrosYrevX,T26);
  lit_25 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T29 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLseqXG)),YPtrue,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_catX_1 = YPmet(FUNCODEREF(fun_catX_1),LITREF(lit_2),T29,ENVNUL,PNUL,sloc(46));
  T31 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T32 = fun_catX_1;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSseqxYcatX,T30);
  lit_26 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_26),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_pushX_2 = YPmet(FUNCODEREF(fun_pushX_2),LITREF(lit_4),T33,ENVNUL,PNUL,sloc(47));
  T35 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T36 = fun_pushX_2;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsSseqxYpushX,T34);
  lit_27 = YPPlist(1,YPPsym((P)"l"));
  T38 = XCALL2(1,VARREF(YtT),VARREF(YLseqXG),VARREF(YLanyG));
  T37 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),T38,Ynil);
  fun_popX_3 = YPmet(FUNCODEREF(fun_popX_3),LITREF(lit_6),T37,ENVNUL,PNUL,sloc(48));
  T40 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T41 = fun_popX_3;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooScolsSseqxYpopX,T39);
  lit_28 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T42 = YPsig(LITREF(lit_28),YPPlist(3,VARREF(YLseqXG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_insX_4 = YPmet(FUNCODEREF(fun_insX_4),LITREF(lit_12),T42,ENVNUL,PNUL,sloc(49));
  T44 = VARREF_OR(YgooScolsSseqxYinsX,YPfalse);
  T45 = fun_insX_4;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsSseqxYinsX,T43);
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T46 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLseqXG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_del_valsX_5 = YPmet(FUNCODEREF(fun_del_valsX_5),LITREF(lit_14),T46,ENVNUL,PNUL,sloc(50));
  T48 = VARREF_OR(YgooScolsSseqxYdel_valsX,YPfalse);
  T49 = fun_del_valsX_5;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsSseqxYdel_valsX,T47);
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_del_dupsX_6 = YPmet(FUNCODEREF(fun_del_dupsX_6),LITREF(lit_16),T50,ENVNUL,PNUL,sloc(51));
  T52 = VARREF_OR(YgooScolsSseqxYdel_dupsX,YPfalse);
  T53 = fun_del_dupsX_6;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsSseqxYdel_dupsX,T51);
  lit_31 = YPPsym((P)"into");
  lit_32 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T54 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLseqXG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_into_7 = YPmet(FUNCODEREF(fun_into_7),LITREF(lit_31),T54,ENVNUL,PNUL,sloc(53));
  T56 = VARREF_OR(YgooScolsScolYinto,YPfalse);
  T57 = fun_into_7;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYinto,T55);
  lit_33 = YPPlist(4,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"),YPPsym((P)"below"));
  T58 = YPsig(LITREF(lit_33),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  fun_sub_setter_8 = YPmet(FUNCODEREF(fun_sub_setter_8),LITREF(lit_8),T58,ENVNUL,PNUL,sloc(60));
  T60 = VARREF_OR(YgooScolsSseqxYsub_setter,YPfalse);
  T61 = fun_sub_setter_8;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsSseqxYsub_setter,T59);
  lit_34 = YPPlist(3,YPPsym((P)"src"),YPPsym((P)"dst"),YPPsym((P)"from"));
  T62 = YPsig(LITREF(lit_34),YPPlist(3,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqXG),Ynil);
  fun_subT_setter_9 = YPmet(FUNCODEREF(fun_subT_setter_9),LITREF(lit_10),T62,ENVNUL,PNUL,sloc(92));
  T64 = VARREF_OR(YgooScolsSseqxYsubT_setter,YPfalse);
  T65 = fun_subT_setter_9;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsSseqxYsubT_setter,T63);
  lit_35 = YPPlist(1,YPPsym((P)"items"));
  T66 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLseqXG)),YPfalse,YPint((P)1),VARREF(YLseqXG),Ynil);
  fun_sortX_10 = YPmet(FUNCODEREF(fun_sortX_10),LITREF(lit_18),T66,ENVNUL,PNUL,sloc(95));
  T68 = VARREF_OR(YgooScolsSseqxYsortX,YPfalse);
  T69 = fun_sortX_10;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsSseqxYsortX,T67);
  lit_36 = YPPlist(4,YPPsym((P)"dst"),YPPsym((P)"src"),YPPsym((P)"from"),YPPsym((P)"below"));
  T72 = YPsig(LITREF(lit_36),YPPlist(4,VARREF(YLseqXG),VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLseqXG),Ynil);
  T71 = fun_alter_11 = YPmet(FUNCODEREF(fun_alter_11),LITREF(lit_22),T72,ENVNUL,PNUL,sloc(103));
  T75 = VARREF_OR(YgooScolsSseqxYalter,YPfalse);
  T76 = fun_alter_11;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  T73 = VARSET(YgooScolsSseqxYalter,T74);
  T70 = T73;
  return T70;
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
  {"cat!", CVAR, &YgooScolsSseqxYcatX},
  {"alter", CVAR, &YgooScolsSseqxYalter},
  {"sort!", CVAR, &YgooScolsSseqxYsortX},
  {"push!", CVAR, &YgooScolsSseqxYpushX},
  {"pop!", CVAR, &YgooScolsSseqxYpopX},
  {"---main-0---", PVAR, NULL},
  {"del-dups!", CVAR, &YgooScolsSseqxYdel_dupsX},
  {"del-vals!", CVAR, &YgooScolsSseqxYdel_valsX},
  {"ins!", CVAR, &YgooScolsSseqxYinsX},
  {"sub*-setter", CVAR, &YgooScolsSseqxYsubT_setter},
  {"sub-setter", CVAR, &YgooScolsSseqxYsub_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"cat!", NULL},
  {"rev!", NULL},
  {"alter", NULL},
  {"push!", NULL},
  {"sort-by!", NULL},
  {"pop!", NULL},
  {"sort!", NULL},
  {"del-dups!", NULL},
  {"del-vals!", NULL},
  {"ins!", NULL},
  {"sub*-setter", NULL},
  {"sub-setter", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();

  (P)YgooScolsSseqxY___main_0___();

}

/* END OF GENERATED CODE. */
