/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YgooScolsSlstYDline_pah_nul,"goo/cols/lst","$line-pah-nul");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_45);
DEFLIT(lit_67);
DEFLIT(lit_80);
DEFLIT(lit_109);
DEFLIT(lit_19);
DEFLIT(lit_75);
DEFLIT(lit_73);
DEFLIT(lit_82);
DEFLIT(lit_47);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_28);
DEFLIT(lit_55);
DEFLIT(lit_108);
DEFLIT(lit_105);
DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_24);
DEFLIT(lit_90);
DEFLIT(lit_49);
DEFLIT(lit_59);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_69);
DEFLIT(lit_65);
DEFLIT(lit_18);
DEFLIT(lit_42);
DEFLIT(lit_71);
DEFLIT(lit_12);
DEFLIT(lit_93);
DEFLIT(lit_94);
DEFLIT(lit_85);
DEFLIT(lit_16);
DEFLIT(lit_78);
DEFLIT(lit_4);
DEFLIT(lit_98);
DEFLIT(lit_30);
DEFLIT(lit_103);
DEFLIT(lit_39);
DEFLIT(lit_83);
DEFLIT(lit_64);
DEFLIT(lit_38);
DEFLIT(lit_87);
DEFLIT(lit_74);
DEFLIT(lit_86);
DEFLIT(lit_25);
DEFLIT(lit_7);
DEFLIT(lit_61);
DEFLIT(lit_96);
DEFLIT(lit_54);
DEFLIT(lit_53);
DEFLIT(lit_48);
DEFLIT(lit_110);
DEFLIT(lit_95);
DEFLIT(lit_66);
DEFLIT(lit_15);
DEFLIT(lit_72);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_77);
DEFLIT(lit_99);
DEFLIT(lit_60);
DEFLIT(lit_43);
DEFLIT(lit_17);
DEFLIT(lit_81);
DEFLIT(lit_23);
DEFLIT(lit_102);
DEFLIT(lit_51);
DEFLIT(lit_70);
DEFLIT(lit_63);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_79);
DEFLIT(lit_89);
DEFLIT(lit_91);
DEFLIT(lit_97);
DEFLIT(lit_100);
DEFLIT(lit_106);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_84);
DEFLIT(lit_6);
DEFLIT(lit_57);
DEFLIT(lit_41);
DEFLIT(lit_76);
DEFLIT(lit_21);
DEFLIT(lit_58);
DEFLIT(lit_29);
DEFLIT(lit_5);
DEFLIT(lit_92);
DEFLIT(lit_27);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_13);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_40);
DEFLIT(lit_107);
DEFLIT(lit_101);
DEFLIT(lit_62);
DEFLIT(lit_33);
DEFLIT(lit_56);
DEFLIT(lit_68);
DEFLIT(lit_88);
DEFLIT(lit_0);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_26);
DEFLIT(lit_104);

/* FUNCTIONS: */

LOCFOR(fun_len_0);
LOCFOR(fun_elt_or_1);
LOCFOR(fun_elt_setter_2);
LOCFOR(fun_nulQ_3);
LOCFOR(fun_nul_4);
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
LOCFOR(fun_x_1360_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_line_of_34);
LOCFOR(fun_line_of_35);
LOCFOR(fun_36);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_nul_38);
FUNFOR(YgooScolsSlstYline_pair);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_41);
LOCFOR(fun_line_list_of_42);
LOCFOR(fun_line_list_of_43);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_len_0) {
  P x_;
  P xF3205;
  P countF3204;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3204 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3205 = x_;
  LOOP_99: {
    P a99_0,a99_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3205);
    if (T1 != YPfalse) {
      T0 = countF3204;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),countF3204,YPint((P)1));
      T4 = CALL1(1,VARREF(Ytail),xF3205);
      a99_0 = T3;
      a99_1 = T4;
      countF3204 = a99_0;
      xF3205 = a99_1;
      goto LOOP_99;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_or_1) {
  P x_,key_,default_;
  P xF3207;
  P countF3206;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3206 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3207 = x_;
  LOOP_100: {
    P a100_0,a100_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3207);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),countF3206,key_);
      if (T3 != YPfalse) {
        T4 = CALL1(1,VARREF(Yhead),xF3207);
        T2 = T4;
      } else {
        T6 = CALL2(1,VARREF(YgooSmathYA),countF3206,YPint((P)1));
        T7 = CALL1(1,VARREF(Ytail),xF3207);
        a100_0 = T6;
        a100_1 = T7;
        countF3206 = a100_0;
        xF3207 = a100_1;
        goto LOOP_100;
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elt_setter_2) {
  P z_,x_,key_;
  P xF3209;
  P countF3208;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3208 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3209 = x_;
  LOOP_101: {
    P a101_0,a101_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3209);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(Yrange_error),xF3209,key_);
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF3208,key_);
      if (T4 != YPfalse) {
        T5 = CALL2(1,VARREF(Yhead_setter),z_,xF3209);
        T3 = T5;
      } else {
        T7 = CALL2(1,VARREF(YgooSmathYA),countF3208,YPint((P)1));
        T8 = CALL1(1,VARREF(Ytail),xF3209);
        a101_0 = T7;
        a101_1 = T8;
        countF3208 = a101_0;
        xF3209 = a101_1;
        goto LOOP_101;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nulQ_3) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYnul),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nul_4) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(Ynil);
}

LOCCODEDEF(fun_fab_5) {
  P t_,s_;
  P resF3211;
  P iF3210;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLintG));
  iF3210 = s_;
  T5 = CALL1(1,VARREF(YgooScolsScolYnul),t_);
  check_type(T5,VARREF(YLlstG));
  resF3211 = T5;
  LOOP_102: {
    P a102_0,a102_1;
    T1 = CALL2(1,VARREF(YgooSmagYG),iF3210,YPint((P)0));
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathY_),iF3210,YPint((P)1));
      T4 = CALL3(1,VARREF(Ynew),t_,VARREF(Ytail),resF3211);
      a102_0 = T3;
      a102_1 = T4;
      iF3210 = a102_0;
      resF3211 = a102_1;
      goto LOOP_102;
      T0 = T2;
    } else {
      T0 = resF3211;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P resultF3213;
  P indexF3212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T6 = CALL2(1,VARREF(YgooSmathY_),T7,YPint((P)1));
  check_type(T6,VARREF(YLintG));
  indexF3212 = T6;
  T8 = CALL1(1,VARREF(YgooScolsScolYnul),c_);
  check_type(T8,VARREF(YLlstG));
  resultF3213 = T8;
  LOOP_103: {
    P a103_0,a103_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),indexF3212,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = resultF3213;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathY_),indexF3212,YPint((P)1));
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),objects_,indexF3212);
      T4 = CALL5(1,VARREF(Ynew),c_,VARREF(Yhead),T5,VARREF(Ytail),resultF3213);
      a103_0 = T3;
      a103_1 = T4;
      indexF3212 = a103_0;
      resultF3213 = a103_1;
      goto LOOP_103;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_Pdat_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdat_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_setter_10) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_11) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_enum_12) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_13) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_14) {
  P e_;
  P x_1354F3214;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  x_1354F3214 = e_;
  T1 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T0,x_1354F3214);
  T3 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T2 = CALL1(1,VARREF(Ytail),T3);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T2,x_1354F3214);
UNLINK_STACK();
  RET(x_1354F3214);
}

LOCCODEDEF(fun_now_15) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_16) {
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

LOCCODEDEF(fun_now_key_17) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_18) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_last_19) {
  P x_;
  P pxF3216;
  P xF3215;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  xF3215 = x_;
  pxF3216 = x_;
  LOOP_104: {
    P a104_0,a104_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3215);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(Yhead),pxF3216);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(Ytail),xF3215);
      a104_0 = T4;
      a104_1 = xF3215;
      xF3215 = a104_0;
      pxF3216 = a104_1;
      goto LOOP_104;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_revX_20) {
  P c_;
  P tF3219;
  P rF3218;
  P lF3217;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  lF3217 = c_;
  T5 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T4 = CALL1(1,VARREF(YgooScolsScolYnul),T5);
  rF3218 = T4;
  LOOP_105: {
    P a105_0,a105_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3217);
    if (T1 != YPfalse) {
      T0 = rF3218;
    } else {
      T3 = CALL1(1,VARREF(Ytail),lF3217);
      tF3219 = T3;
      CALL2(1,VARREF(Ytail_setter),rF3218,lF3217);
      a105_0 = tF3219;
      a105_1 = lF3217;
      lF3217 = a105_0;
      rF3218 = a105_1;
      goto LOOP_105;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_connect_21) {
  P x_,y_;
  P pF3220;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    check_type(y_,VARREF(YLlstG));
    pF3220 = y_;
    LOOP_106: {
      P a106_0;
      T4 = CALL1(1,VARREF(Ytail),pF3220);
      T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),T4);
      if (T3 != YPfalse) {
        T2 = pF3220;
      } else {
        T6 = CALL1(1,VARREF(Ytail),pF3220);
        a106_0 = T6;
        pF3220 = a106_0;
        goto LOOP_106;
        T2 = T5;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_catX_22) {
  P x_,more_;
  P xF3225;
  P x_1355F3224;
  P curF3223;
  P resultF3222;
  P connectF3221;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T16 = fun_connect_21;
  connectF3221 = T16;
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF3222 = T15;
  curF3223 = resultF3222;
  T2 = curF3223;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T1 = CALL2(1,connectF3221,T2,T3);
  curF3223 = T1;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1355F3224 = T13;
  LOOP_107: {
    P a107_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1355F3224);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1355F3224);
      xF3225 = T12;
      T8 = curF3223;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF3225);
      T7 = CALL2(1,connectF3221,T8,T9);
      curF3223 = T7;
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1355F3224);
      a107_0 = T11;
      x_1355F3224 = a107_0;
      goto LOOP_107;
      T4 = T10;
    } else {
      T4 = YPfalse;
    }
  }
  T14 = CALL1(1,VARREF(Ytail),resultF3222);
UNLINK_STACK();
  RET(T14);
}

LOCCODEDEF(fun_lst_23) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pair_24) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pushX_25) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_popX_26) {
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

LOCCODEDEF(fun_sort_byX_27) {
  P items_,test_;
  P tmpF3230;
  P nextF3229;
  P prevF3228;
  P tmpF3227;
  P tmpF3226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
  tmpF3226 = YPfalse;
  LOOP_108: {
    P a108_0;
    T2 = CALL1(1,VARREF(Yhead),items_);
    T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmpF3226,T2);
    if (T1 != YPfalse) {
      T0 = items_;
    } else {
      T16 = CALL1(1,VARREF(Yhead),items_);
      tmpF3227 = T16;
      prevF3228 = items_;
      T17 = CALL1(1,VARREF(Ytail),items_);
      nextF3229 = T17;
      LOOP_109: {
        P a109_0,a109_1,a109_2;
        T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),nextF3229);
        if (T4 != YPfalse) {
          a108_0 = tmpF3227;
          tmpF3226 = a108_0;
          goto LOOP_108;
          T3 = T5;
        } else {
          T9 = CALL1(1,VARREF(Yhead),nextF3229);
          T10 = CALL1(1,VARREF(Yhead),prevF3228);
          T8 = CALL2(1,test_,T9,T10);
          if (T8 != YPfalse) {
            T13 = CALL1(1,VARREF(Yhead),prevF3228);
            tmpF3230 = T13;
            T11 = CALL1(1,VARREF(Yhead),nextF3229);
            CALL2(1,VARREF(Yhead_setter),T11,prevF3228);
            T12 = CALL2(1,VARREF(Yhead_setter),tmpF3230,nextF3229);
            T7 = T12;
          } else {
            T7 = tmpF3227;
          }
          T14 = CALL1(1,VARREF(Ytail),prevF3228);
          T15 = CALL1(1,VARREF(Ytail),nextF3229);
          a109_0 = T7;
          a109_1 = T14;
          a109_2 = T15;
          tmpF3227 = a109_0;
          prevF3228 = a109_1;
          nextF3229 = a109_2;
          goto LOOP_109;
          T3 = T6;
        }
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_28) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_64),T1,LITREF(lit_65));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_assq_29) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
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

LOCCODEDEF(fun_assqn_30) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
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

LOCCODEDEF(fun_x_1360_31) {
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

LOCCODEDEF(fun_32) {
  P return_;
  P DnulF3245;
  P classF3244;
  P x_1359F3243;
  P x_1359F3242;
  P x_1359F3241;
  P x_1359F3240;
  P x_1359F3239;
  P x_1359F3238;
  P x_1359F3237;
  P x_1359F3236;
  P x_1359F3235;
  P supersF3234;
  P nameF3233;
  P x_1359F3232;
  P x_1360F3231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72;
LINK_STACK();
  ARG(return_, 0);
  T72 = FUNSHELL(0,fun_x_1360_31,2);
  x_1360F3231 = T72;
  FUNINIT(x_1360F3231, 2,FREEREF(0),return_);
  x_1359F3232 = FREEREF(0);
  nameF3233 = YPfalse;
  supersF3234 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1359F3232,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F3232,LITREF(lit_72),x_1360F3231);
    x_1359F3235 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F3235,x_1360F3231);
    nameF3233 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1359F3235);
    x_1359F3236 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3236,x_1360F3231);
    x_1359F3237 = T11;
    supersF3234 = x_1359F3237;
    x_1359F3238 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3238,x_1360F3231);
    x_1359F3239 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3239,x_1360F3231);
    T10 = CALL1(1,VARREF(Ytail),x_1359F3238);
    x_1359F3240 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3240,x_1360F3231);
    T12 = CALL1(1,VARREF(Ytail),x_1359F3236);
    x_1359F3241 = T12;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3241,x_1360F3231);
    x_1359F3242 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3242,x_1360F3231);
    T6 = CALL1(1,VARREF(Ytail),x_1359F3241);
    x_1359F3243 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3243,x_1360F3231);
  } else {
    T16 = CALL2(1,x_1360F3231,LITREF(lit_73),x_1359F3232);
  }
  T71 = nameF3233;
  T70 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_74),T71,LITREF(lit_75));
  classF3244 = T70;
  T69 = nameF3233;
  T68 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_76),T69,LITREF(lit_77));
  DnulF3245 = T68;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T22 = CALL1(1,VARREF(Ylst),classF3244);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T26 = supersF3234;
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,LITREF(lit_81));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T30 = CALL1(1,VARREF(Ylst),DnulF3245);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T34 = CALL1(1,VARREF(Ylst),classF3244);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,LITREF(lit_81));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T31,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T39 = nameF3233;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,LITREF(lit_81));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T47 = CALL1(1,VARREF(Ylst),classF3244);
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
  T64 = CALL1(1,VARREF(Ylst),classF3244);
  T62 = CALL3(1,VARREF(YgooSmacrosYcat),T63,T64,LITREF(lit_81));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_81));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T65 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T66 = CALL1(1,VARREF(Ylst),classF3244);
  T57 = CALL4(1,VARREF(YgooSmacrosYcat),T58,T65,T66,LITREF(lit_81));
  T56 = CALL1(1,VARREF(Ylst),T57);
  T67 = CALL1(1,VARREF(Ylst),DnulF3245);
  T53 = CALL5(1,VARREF(YgooSmacrosYcat),T54,T55,T56,T67,LITREF(lit_81));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T27,T35,T52,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_33) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_line_of_34) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_line_of_35) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_36) {
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

LOCCODEDEF(fun_nul_38) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsSlstYDline_pah_nul));
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
  P iF3247;
  P rF3246;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YgooScolsSlstYLline_listG));
  rF3246 = T6;
  T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  iF3247 = T7;
  LOOP_110: {
    P a110_0,a110_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3247,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF3246;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),elts_,iF3247);
      T3 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T4,rF3246,l_);
      T5 = CALL2(1,VARREF(YgooSmathY_),iF3247,YPint((P)1));
      a110_0 = T3;
      a110_1 = T5;
      rF3246 = a110_0;
      iF3247 = a110_1;
      goto LOOP_110;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_copy_41) {
  P l_,src_;
  P tmpF3251;
  P tmpF3250;
  P tF3249;
  P hF3248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),src_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),src_);
    hF3248 = T13;
    T12 = CALL1(1,VARREF(Ytail),src_);
    tF3249 = T12;
    T8 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF3248);
    tmpF3250 = T8;
    if (tmpF3250 != YPfalse) {
      T7 = tmpF3250;
    } else {
      T7 = l_;
    }
    T6 = CALL2(0,FREEREF(0),T7,hF3248);
    T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF3249);
    tmpF3251 = T11;
    if (tmpF3251 != YPfalse) {
      T10 = tmpF3251;
    } else {
      T10 = l_;
    }
    T9 = CALL2(0,FREEREF(0),T10,tF3249);
    T5 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T6,T9,l_);
    T0 = T5;
  } else {
    T0 = src_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_line_list_of_42) {
  P ctx_,src_;
  P copyF3252;
  P T0,T1,T2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
  T2 = FUNSHELL(1,fun_copy_41,1);
  copyF3252 = T2;
  FUNINIT(copyF3252, 1,copyF3252);
  T1 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T0 = CALL2(1,copyF3252,T1,src_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_line_list_of_43) {
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
  P T48,T49,T50,T51;
DEFCREGS();
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPlist(1,YPPsym((P)"elts"));
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_4 = YPPsym((P)"assqn");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsSlstYassqn,T4);
  lit_6 = YPPsym((P)"assq");
  lit_7 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSlstYassq,T6);
  lit_8 = YPPsym((P)"len");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPfab_met(FUNCODEREF(fun_len_0),T8,LITREF(lit_8),LITREF(lit_9),sloc(43),YPsb((P)"(fun ((x <lst>) => <int>) (rep sum (((count <int>) 0) ((x <lst>) x)) (if (nul? x) count (sum (+ count 1) (tail x)))))"));
  T10 = VARREF_OR(YgooStypesYlen,YPfalse);
  T11 = fun_len_0;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooStypesYlen,T9);
  lit_10 = YPPsym((P)"elt-or");
  lit_11 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  T12 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPfab_met(FUNCODEREF(fun_elt_or_1),T12,LITREF(lit_10),LITREF(lit_11),sloc(47),YPsb((P)"(fun ((x <lst>) (key <int>) default => <any>) (rep fnd (((count <int>) 0) ((x <lst>) x)) (if (nul? x) default (if (== count key) (head x) (fnd (+ count 1) (tail x))))))"));
  T14 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T15 = fun_elt_or_1;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYelt_or,T13);
  lit_12 = YPPsym((P)"elt-setter");
  lit_13 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  T16 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_2 = YPfab_met(FUNCODEREF(fun_elt_setter_2),T16,LITREF(lit_12),LITREF(lit_13),sloc(55),YPsb((P)"(fun (z (x <lst>) (key <int>)) (rep fnd (((count <int>) 0) ((x <lst>) x)) (if (nul? x) (range-error x key) (if (== count key) (set (head x) z) (fnd (+ count 1) (tail x))))))"));
  T18 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T19 = fun_elt_setter_2;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolxYelt_setter,T17);
  lit_14 = YPPsym((P)"nul?");
  lit_15 = YPPlist(1,YPPsym((P)"c"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_nulQ_3 = YPfab_met(FUNCODEREF(fun_nulQ_3),T20,LITREF(lit_14),LITREF(lit_15),sloc(63),YPsb((P)"(fun ((c <lst>) => <log>) (== c (nul (class-of c))))"));
  T22 = VARREF_OR(YgooSmacrosYnulQ,YPfalse);
  T23 = fun_nulQ_3;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmacrosYnulQ,T21);
  lit_16 = YPPsym((P)"nul");
  lit_17 = YPPlist(1,YPPsym((P)"c"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T24 = YPfab_sig(YPPlist(1,T25),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_nul_4 = YPfab_met(FUNCODEREF(fun_nul_4),T24,LITREF(lit_16),LITREF(lit_17),sloc(65),YPsb((P)"(fun ((c (t= <lst>)) => <lst>) '())"));
  T27 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T28 = fun_nul_4;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYnul,T26);
  lit_18 = YPPsym((P)"fab");
  lit_19 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T29 = YPfab_sig(YPPlist(2,T30,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_5 = YPfab_met(FUNCODEREF(fun_fab_5),T29,LITREF(lit_18),LITREF(lit_19),sloc(67),YPsb((P)"(fun ((t (t< <lst>)) (s <int>) => <lst>) (rep fab (((i <int>) s) ((res <lst>) (nul t))) (if (> i 0) (fab (- i 1) (new t tail res)) res)))"));
  T32 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T33 = fun_fab_5;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsScolYfab,T31);
  lit_20 = YPPsym((P)"fabs");
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T35 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T34 = YPfab_sig(YPPlist(1,T35),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_6 = YPfab_met(FUNCODEREF(fun_fabs_6),T34,LITREF(lit_20),LITREF(lit_21),sloc(73),YPsb((P)"(fun ((c (t< <lst>)) (objects ...) => <lst>) (rep build (((index <int>) (- (len objects) 1)) ((result <lst>) (nul c))) (if (< index 0) result (build (- index 1) (new c head (elt objects index) tail result)))))"));
  T37 = VARREF_OR(YgooSchrYfabs,YPfalse);
  T38 = fun_fabs_6;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSchrYfabs,T36);
  lit_22 = YPPsym((P)"<lst-enum>");
  T40 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T39 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_22),T40);
  VARSET(YgooScolsSlstYLlst_enumG,T39);
  lit_23 = YPPsym((P)"%dat");
  lit_24 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_7 = YPfab_met(FUNCODEREF(fun_Pdat_7),T41,LITREF(lit_23),LITREF(lit_24),sloc(82),YPsb((P)"(fun ((_x <lst-enum>)) (prop-value _x %dat))"));
  T43 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T44 = fun_Pdat_7;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsSlstYPdat,T42);
  lit_25 = YPPsym((P)"%dat-setter");
  lit_26 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T46 = fun_Pdat_setter_8 = YPfab_met(FUNCODEREF(fun_Pdat_setter_8),T47,LITREF(lit_25),LITREF(lit_26),sloc(82),YPsb((P)"(fun ((_z <lst>) (_x <lst-enum>)) (prop-value-setter _z _x %dat))"));
  T50 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T51 = fun_Pdat_setter_8;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  T48 = VARSET(YgooScolsSlstYPdat_setter,T49);
  T45 = T48;
  return T45;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125;
DEFCREGS();
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"%key");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_9 = YPfab_met(FUNCODEREF(fun_Pkey_9),T0,LITREF(lit_27),LITREF(lit_28),sloc(83),YPsb((P)"(fun ((_x <lst-enum>)) (prop-value _x %key))"));
  T2 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T3 = fun_Pkey_9;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsSlstYPkey,T1);
  lit_29 = YPPsym((P)"%key-setter");
  lit_30 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_10 = YPfab_met(FUNCODEREF(fun_Pkey_setter_10),T4,LITREF(lit_29),LITREF(lit_30),sloc(83),YPsb((P)"(fun ((_z <int>) (_x <lst-enum>)) (prop-value-setter _z _x %key))"));
  T6 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T7 = fun_Pkey_setter_10;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsSlstYPkey_setter,T5);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T8,YPfalse,LITREF(lit_31),sloc(83),YPsb((P)"(fun ((_x <any>)) 0)"));
  T9 = fun_11;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T9);
  lit_32 = YPPsym((P)"enum");
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_12 = YPfab_met(FUNCODEREF(fun_enum_12),T10,LITREF(lit_32),LITREF(lit_33),sloc(84),YPsb((P)"(fun ((x <lst>) => <lst-enum>) (new <lst-enum> %dat x))"));
  T12 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T13 = fun_enum_12;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooScolsScolYenum,T11);
  lit_34 = YPPsym((P)"fin?");
  lit_35 = YPPlist(1,YPPsym((P)"e"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_13 = YPfab_met(FUNCODEREF(fun_finQ_13),T14,LITREF(lit_34),LITREF(lit_35),sloc(86),YPsb((P)"(fun ((e <lst-enum>) => <log>) (nul? (%dat e)))"));
  T16 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T17 = fun_finQ_13;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsScolYfinQ,T15);
  lit_36 = YPPsym((P)"nxt");
  lit_37 = YPPlist(1,YPPsym((P)"e"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_14 = YPfab_met(FUNCODEREF(fun_nxt_14),T18,LITREF(lit_36),LITREF(lit_37),sloc(88),YPsb((P)"(fun ((e <lst-enum>) => <lst-enum>) (renew e %key (+ (%key e) 1) %dat (tail (%dat e))))"));
  T20 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T21 = fun_nxt_14;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsScolYnxt,T19);
  lit_38 = YPPsym((P)"now");
  lit_39 = YPPlist(1,YPPsym((P)"e"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_15 = YPfab_met(FUNCODEREF(fun_now_15),T22,LITREF(lit_38),LITREF(lit_39),sloc(90),YPsb((P)"(fun ((e <lst-enum>) => <any>) (head (%dat e)))"));
  T24 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T25 = fun_now_15;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsScolYnow,T23);
  lit_40 = YPPsym((P)"now-setter");
  lit_41 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_16 = YPfab_met(FUNCODEREF(fun_now_setter_16),T26,LITREF(lit_40),LITREF(lit_41),sloc(92),YPsb((P)"(fun ((v <any>) (e <lst-enum>)) (set (head (%dat e)) v))"));
  T28 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T29 = fun_now_setter_16;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooScolsScolYnow_setter,T27);
  lit_42 = YPPsym((P)"now-key");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_17 = YPfab_met(FUNCODEREF(fun_now_key_17),T30,LITREF(lit_42),LITREF(lit_43),sloc(94),YPsb((P)"(fun ((e <lst-enum>) => <int>) (%key e))"));
  T32 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T33 = fun_now_key_17;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsScolYnow_key,T31);
  lit_44 = YPPsym((P)"add");
  lit_45 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_18 = YPfab_met(FUNCODEREF(fun_add_18),T34,LITREF(lit_44),LITREF(lit_45),sloc(98),YPsb((P)"(fun ((c <lst>) x => <lst>) (pair x c))"));
  T36 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T37 = fun_add_18;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooScolsScolYadd,T35);
  lit_46 = YPPsym((P)"last");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_19 = YPfab_met(FUNCODEREF(fun_last_19),T38,LITREF(lit_46),LITREF(lit_47),sloc(101),YPsb((P)"(fun ((x <lst>) => <any>) (rep fnd ((x x) (px x)) (if (nul? x) (head px) (fnd (tail x) x))))"));
  T40 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T41 = fun_last_19;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmacrosYlast,T39);
  lit_48 = YPPsym((P)"rev!");
  lit_49 = YPPlist(1,YPPsym((P)"c"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_20 = YPfab_met(FUNCODEREF(fun_revX_20),T42,LITREF(lit_48),LITREF(lit_49),sloc(105),YPsb((P)"(fun ((c <lst>) => <lst>) (rep loop ((l c) (r (nul (class-of c)))) (if (nul? l) r (let ((t (tail l))) (set (tail l) r) (loop t l)))))"));
  T44 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T45 = fun_revX_20;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSmacrosYrevX,T43);
  lit_50 = YPPsym((P)"cat!");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_52 = YPPsym((P)"connect");
  lit_53 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_21 = YPfab_met(FUNCODEREF(fun_connect_21),T47,LITREF(lit_52),LITREF(lit_53),sloc(114),YPsb((P)"(fun ((x <lst>) (y <lst>) => <lst>) (if (nul? y) x (seq (set (tail x) y) (rep find-tail (((p <lst>) y)) (if (nul? (tail p)) p (find-tail (tail p)))))))"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_22 = YPfab_met(FUNCODEREF(fun_catX_22),T46,LITREF(lit_50),LITREF(lit_51),sloc(113),YPsb((P)"(fun ((x <lst>) (more ...) => <lst>) (loc ((connect ((x <lst>) (y <lst>) => <lst>) (if (nul? y) x (seq (set (tail x) y) (rep find-tail (((p <lst>) y)) (if (nul? (tail p)) p (find-tail (tail p)))))))) (def result (lst #f)) (def cur result) (set cur (connect cur (as <lst> x))) (for ((x more)) (set cur (connect cur (as <lst> x)))) (tail result)))"));
  T49 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T50 = fun_catX_22;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooScolsSseqxYcatX,T48);
  lit_54 = YPPlist(1,YPPsym((P)"objects"));
  T51 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_23 = YPfab_met(FUNCODEREF(fun_lst_23),T51,LITREF(lit_0),LITREF(lit_54),sloc(131),YPsb((P)"(fun ((objects ...) => <lst>) (app fabs <lst> objects))"));
  T53 = VARREF_OR(Ylst,YPfalse);
  T54 = fun_lst_23;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(Ylst,T52);
  lit_55 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_24 = YPfab_met(FUNCODEREF(fun_pair_24),T55,LITREF(lit_2),LITREF(lit_55),sloc(134),YPsb((P)"(fun (h (t <lst>) => <lst>) (new <lst> head h tail t))"));
  T57 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T58 = fun_pair_24;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSmacrosYpair,T56);
  lit_56 = YPPsym((P)"push!");
  lit_57 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_25 = YPfab_met(FUNCODEREF(fun_pushX_25),T59,LITREF(lit_56),LITREF(lit_57),sloc(137),YPsb((P)"(fun ((c <lst>) x => <lst>) (pair x c))"));
  T61 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T62 = fun_pushX_25;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooScolsSseqxYpushX,T60);
  lit_58 = YPPsym((P)"pop!");
  lit_59 = YPPlist(1,YPPsym((P)"c"));
  T64 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T63 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T64,Ynil);
  fun_popX_26 = YPfab_met(FUNCODEREF(fun_popX_26),T63,LITREF(lit_58),LITREF(lit_59),sloc(140),YPsb((P)"(fun ((c <lst>) => (tup (new-c <lst>) (value <any>))) (tup (tail c) (head c)))"));
  T66 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T67 = fun_popX_26;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooScolsSseqxYpopX,T65);
  lit_60 = YPPsym((P)"sort-by!");
  lit_61 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_27 = YPfab_met(FUNCODEREF(fun_sort_byX_27),T68,LITREF(lit_60),LITREF(lit_61),sloc(144),YPsb((P)"(fun ((items <lst>) (test <fun>) => <lst>) (rep loop ((tmp #f)) (if (== tmp (head items)) items (rep bub ((tmp (head items)) (prev items) (next (tail items))) (if (nul? next) (loop tmp) (bub (if (test (head next) (head prev)) (let ((tmp (head prev))) (set (head prev) (head next)) (set (head next) tmp)) tmp) (tail prev) (tail next)))))))"));
  T70 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T71 = fun_sort_byX_27;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooScolsSseqYsort_byX,T69);
  lit_62 = YPPsym((P)"to-str");
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  lit_64 = YPsb((P)"(");
  lit_65 = YPsb((P)")");
  T72 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_28 = YPfab_met(FUNCODEREF(fun_to_str_28),T72,LITREF(lit_62),LITREF(lit_63),sloc(159),YPsb((P)"(fun ((x <lst>) => <str>) (cat ( (vals-to-str x) )))"));
  T74 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T75 = fun_to_str_28;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSanyYto_str,T73);
  lit_66 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_29 = YPfab_met(FUNCODEREF(fun_assq_29),T76,LITREF(lit_6),LITREF(lit_66),sloc(166),YPsb((P)"(fun (x (l <lst>) => <any>) (if (nul? l) #f (if (== x (head (head l))) (head l) (assq x (tail l)))))"));
  T78 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T79 = fun_assq_29;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsSlstYassq,T77);
  lit_67 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T80 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_30 = YPfab_met(FUNCODEREF(fun_assqn_30),T80,LITREF(lit_4),LITREF(lit_67),sloc(173),YPsb((P)"(fun (x (l <lst>) (pos <int>) => <any>) (if (nul? l) #f (if (== x (elt (head l) pos)) (head l) (assqn x (tail l) pos))))"));
  T82 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T83 = fun_assqn_30;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsSlstYassqn,T81);
  lit_68 = YPPlist(1,YPPsym((P)"exp"));
  lit_69 = YPPlist(1,YPPsym((P)"return"));
  lit_70 = YPPsym((P)"x-1360");
  lit_71 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_72 = YPPsym((P)"def-list");
  lit_73 = YPsb((P)"Match Pattern Failure");
  lit_74 = YPsb((P)"<");
  lit_75 = YPsb((P)">");
  lit_76 = YPsb((P)"$");
  lit_77 = YPsb((P)"-nul");
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
  T86 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_31 = YPfab_met(FUNCODEREF(fun_x_1360_31),T86,LITREF(lit_70),LITREF(lit_71),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'def-list exp)))"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T85,YPfalse,LITREF(lit_69),YPfalse,YPsb((P)"(fun (return) (loc ((x-1360 ((msg <str>) (args ...)) (return (macro-error 'def-list exp)))) (let ((x-1359 exp)) (let ((name #f) (supers #f)) (if (isa? x-1359 <lst>) (let ((x-1359 (match-atom x-1359 'def-list x-1360))) (let ((x-1359 (seq (set name (match-unquote x-1359 x-1360)) (tail x-1359)))) (let ((x-1359 (seq (let ((x-1359 (match-sublist x-1359 x-1360))) (let ((x-1359 (seq (set supers x-1359) '()))) (let ((x-1359 (seq (let ((x-1359 (match-sublist x-1359 x-1360))) (match-nul-list x-1359 x-1360)) (tail x-1359)))) (match-nul-list x-1359 x-1360)))) (tail x-1359)))) (let ((x-1359 (seq (let ((x-1359 (match-sublist x-1359 x-1360))) (match-nul-list x-1359 x-1360)) (tail x-1359)))) (match-nul-list x-1359 x-1360))))) (x-1360 Match Pattern Failure x-1359)) (let ((class (cat-sym < name >)) ($nul (cat-sym $ name -nul))) (quasiquote (seq (dc (unquote class) (<lst> (unquote-splicing supers))) (dv (unquote $nul) (new (unquote class))) (df (unquote name) (h t) (new (unquote class) head h tail t)) (dm nul ((e (t= (unquote class))) => (unquote class)) (unquote $nul)))))))))"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T84,YPfalse,LITREF(lit_68),YPfalse,YPsb((P)"(fun (exp) (mif ((def-list (unquote name) ((unquote-splicing supers))) exp) (let ((class (cat-sym < name >)) ($nul (cat-sym $ name -nul))) (quasiquote (seq (dc (unquote class) (<lst> (unquote-splicing supers))) (dv (unquote $nul) (new (unquote class))) (df (unquote name) (h t) (new (unquote class) head h tail t)) (dm nul ((e (t= (unquote class))) => (unquote class)) (unquote $nul))))) (macro-error 'def-list exp)))"));
  T87 = fun_33;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T87);
  lit_93 = YPPsym((P)"line-of");
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_34 = YPfab_met(FUNCODEREF(fun_line_of_34),T88,LITREF(lit_93),LITREF(lit_94),sloc(189),YPsb((P)"(fun (x) #f)"));
  T90 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T91 = fun_line_of_34;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooScolsSlstYline_of,T89);
  lit_95 = YPPsym((P)"<line>");
  T93 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLmagG),Ynil);
  T92 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_95),T93);
  VARSET(YgooScolsSlstYLlineG,T92);
  lit_96 = YPPlist(1,YPPsym((P)"_x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_35 = YPfab_met(FUNCODEREF(fun_line_of_35),T94,LITREF(lit_93),LITREF(lit_96),sloc(192),YPsb((P)"(fun ((_x <line>)) (prop-value _x line-of))"));
  T96 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T97 = fun_line_of_35;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooScolsSlstYline_of,T95);
  lit_97 = YPPlist(1,YPPsym((P)"_x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T98,YPfalse,LITREF(lit_97),sloc(192),YPsb((P)"(fun ((_x <any>)) #f)"));
  T99 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T100 = fun_36;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),YPfalse,T99,T100);
  lit_98 = YPPsym((P)"<line-pah>");
  T103 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsSlstYLlineG),Ynil);
  T102 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T103);
  T101 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T102);
  VARSET(YgooScolsSlstYLline_pahG,T101);
  T104 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_nul,T104);
  lit_99 = YPPsym((P)"line-pah");
  lit_100 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pah),T105,LITREF(lit_99),LITREF(lit_100),sloc(194),YPsb((P)"(fun (h t) (new <line-pah> head h tail t))"));
  T106 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T106);
  lit_101 = YPPlist(1,YPPsym((P)"e"));
  T108 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T107 = YPfab_sig(YPPlist(1,T108),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_nul_38 = YPfab_met(FUNCODEREF(fun_nul_38),T107,LITREF(lit_16),LITREF(lit_101),sloc(194),YPsb((P)"(fun ((e (t= <line-pah>)) => <line-pah>) $line-pah-nul)"));
  T110 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T111 = fun_nul_38;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooScolsScolYnul,T109);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_102 = YPPsym((P)"line-pair");
  lit_103 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T112 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pair),T112,LITREF(lit_102),LITREF(lit_103),sloc(198),YPsb((P)"(fun (h t l) (new <line-list> head h tail t line-of l))"));
  T113 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T113);
  lit_104 = YPPsym((P)"line-list");
  lit_105 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPfab_met(FUNCODEREF(YgooScolsSlstYline_list),T114,LITREF(lit_104),LITREF(lit_105),sloc(200),YPsb((P)"(fun (l (elts ...)) (rep fab ((r (nul <line-list>)) (i (- (len elts) 1))) (if (< i 0) r (fab (line-pair (elt elts i) r l) (- i 1)))))"));
  T115 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T115);
  lit_106 = YPPsym((P)"line-list-of");
  lit_107 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_108 = YPPsym((P)"copy");
  lit_109 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_41 = YPfab_met(FUNCODEREF(fun_copy_41),T117,LITREF(lit_108),LITREF(lit_109),sloc(207),YPsb((P)"(fun (l src => #f) (if (and (isa? src <lst>) (not (nul? src))) (let ((h (head src)) (t (tail src))) (line-pair (copy (or (line-of h) l) h) (copy (or (line-of t) l) t) l)) src))"));
  T116 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_42 = YPfab_met(FUNCODEREF(fun_line_list_of_42),T116,LITREF(lit_106),LITREF(lit_107),sloc(206),YPsb((P)"(fun ((ctx <lst>) (src <lst>) => <lst>) (rep copy ((l (line-of ctx)) (src src)) (if (and (isa? src <lst>) (not (nul? src))) (let ((h (head src)) (t (tail src))) (line-pair (copy (or (line-of h) l) h) (copy (or (line-of t) l) t) l)) src)))"));
  T119 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T120 = fun_line_list_of_42;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooScolsSlstYline_list_of,T118);
  lit_110 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T121 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_43 = YPfab_met(FUNCODEREF(fun_line_list_of_43),T121,LITREF(lit_106),LITREF(lit_110),sloc(213),YPsb((P)"(fun (ctx src => <any>) src)"));
  T123 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T124 = fun_line_list_of_43;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooScolsSlstYline_list_of,T122);
  T125 = YPfalse;
  return T125;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"def-list", PVAR, NULL},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"$line-pah-nul", CVAR, &YgooScolsSlstYDline_pah_nul},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"nil", NULL},
  {"def-list", NULL},
  {"list", NULL},
  {"<line-list>", NULL},
  {"line-list-of", NULL},
  {"<lst>", NULL},
  {"line-list", NULL},
  {"assq", NULL},
  {"tail-setter", NULL},
  {"tail", NULL},
  {"line-pair", NULL},
  {"assqn", NULL},
  {"pair", NULL},
  {"<line>", NULL},
  {"lst", NULL},
  {"head-setter", NULL},
  {"line-of", NULL},
  {"<list>", NULL},
  {"head", NULL},
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
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
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
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();
  (P)YgooScolsSlstY___main_1___();

}

/* END OF GENERATED CODE. */
