/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/str");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYC,"goo/math","^");
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
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
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
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
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
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
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
EXT(Yerror,"goo/boot","error");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
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
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
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
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
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
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
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
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
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
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
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
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
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
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
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
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YgooSmathYbitQ,"goo/math","bit?");
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
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
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
EXT(YOtup,"goo/boot","@tup");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
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
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
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
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
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

DEFLIT(lit_72);
DEFLIT(lit_14);
DEFLIT(lit_68);
DEFLIT(lit_59);
DEFLIT(lit_49);
DEFLIT(lit_30);
DEFLIT(lit_57);
DEFLIT(lit_13);
DEFLIT(lit_78);
DEFLIT(lit_31);
DEFLIT(lit_19);
DEFLIT(lit_45);
DEFLIT(lit_0);
DEFLIT(lit_71);
DEFLIT(lit_6);
DEFLIT(lit_75);
DEFLIT(lit_73);
DEFLIT(lit_47);
DEFLIT(lit_3);
DEFLIT(lit_40);
DEFLIT(lit_56);
DEFLIT(lit_80);
DEFLIT(lit_64);
DEFLIT(lit_16);
DEFLIT(lit_37);
DEFLIT(lit_48);
DEFLIT(lit_50);
DEFLIT(lit_12);
DEFLIT(lit_20);
DEFLIT(lit_39);
DEFLIT(lit_61);
DEFLIT(lit_5);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_33);
DEFLIT(lit_41);
DEFLIT(lit_53);
DEFLIT(lit_35);
DEFLIT(lit_58);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_67);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_81);
DEFLIT(lit_27);
DEFLIT(lit_15);
DEFLIT(lit_77);
DEFLIT(lit_9);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_24);
DEFLIT(lit_21);
DEFLIT(lit_42);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_32);
DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_79);
DEFLIT(lit_51);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_66);
DEFLIT(lit_36);
DEFLIT(lit_52);
DEFLIT(lit_60);
DEFLIT(lit_11);
DEFLIT(lit_65);
DEFLIT(lit_29);
DEFLIT(lit_55);
DEFLIT(lit_54);
DEFLIT(lit_43);
DEFLIT(lit_70);
DEFLIT(lit_63);
DEFLIT(lit_34);
DEFLIT(lit_7);
DEFLIT(lit_44);

/* FUNCTIONS: */

LOCFOR(fun_nul_0);
LOCFOR(fun_elt_default_1);
LOCFOR(fun_elt_type_2);
LOCFOR(fun_fab_3);
LOCFOR(fun_str_4);
LOCFOR(fun_len_5);
LOCFOR(fun_low_elt_6);
LOCFOR(fun_fab_elt_setter_7);
LOCFOR(fun_elt_or_8);
LOCFOR(fun_to_str_9);
LOCFOR(fun_add_10);
LOCFOR(fun_11);
LOCFOR(fun_ascii_Gchar_12);
LOCFOR(fun_char_Ginteger_13);
LOCFOR(fun_integer_Gchar_14);
LOCFOR(fun_char_Gascii_15);
LOCFOR(fun_to_digit_base_16);
LOCFOR(fun_digit_baseQ_17);
LOCFOR(fun_match_18);
LOCFOR(fun_failXX_19);
LOCFOR(fun_20);
LOCFOR(fun_match_digitX_21);
LOCFOR(fun_looking_at_alphaQ_22);
LOCFOR(fun_str_to_num_23);
LOCFOR(fun_num_to_str_base_24);
LOCFOR(fun_num_to_str_25);
LOCFOR(fun_num_to_str_base_26);
LOCFOR(fun_num_to_str_27);
LOCFOR(fun_as_28);
LOCFOR(fun_as_29);
LOCFOR(fun_L_30);
LOCFOR(fun_to_str_31);
extern P YgooScolsSstrY___main_0___ ();
extern P YgooScolsSstrY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_nul_0) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(VARREF(YPsnul));
}

LOCCODEDEF(fun_elt_default_1) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPchr((P)32));
}

LOCCODEDEF(fun_elt_type_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLchrG));
}

LOCCODEDEF(fun_fab_3) {
  P x_,s_;
  P xF3412;
  P xF3411;
  P xF3410;
  P xF3409;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  xF3409 = s_;
  xF3410 = xF3409;
  T1 = (P)YPiGG(xF3410,(P)2);
  xF3411 = YPchr((P)32);
  xF3412 = xF3411;
  T2 = (P)YPiGG(xF3412,(P)2);
  T0 = (P)YPstr(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_str_4) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL2(1,VARREF(YgooSchrYfabs),VARREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_len_5) {
  P x_;
  P tF3415;
  P xF3414;
  P xF3413;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPslen(x_);
  xF3413 = T2;
  xF3414 = xF3413;
  tF3415 = (P)1;
  T1 = (P)YPiLL(xF3414,(P)2);
  T0 = (P)YPiv(T1,tF3415);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF3420;
  P xF3419;
  P xF3418;
  P xF3417;
  P xF3416;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  xF3416 = i_;
  xF3417 = xF3416;
  T3 = (P)YPiGG(xF3417,(P)2);
  T2 = (P)YPselt(x_,T3);
  xF3418 = T2;
  xF3419 = xF3418;
  tF3420 = (P)2;
  T1 = (P)YPiLL(xF3419,(P)2);
  T0 = (P)YPiv(T1,tF3420);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF3424;
  P xF3423;
  P xF3422;
  P xF3421;
  P T0,T1,T2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  xF3421 = z_;
  xF3422 = xF3421;
  T1 = (P)YPiGG(xF3422,(P)2);
  xF3423 = i_;
  xF3424 = xF3423;
  T2 = (P)YPiGG(xF3424,(P)2);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF3429;
  P xF3428;
  P xF3427;
  P xF3426;
  P xF3425;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF3425 = i_;
    xF3426 = xF3425;
    T5 = (P)YPiGG(xF3426,(P)2);
    T4 = (P)YPselt(x_,T5);
    xF3427 = T4;
    xF3428 = xF3427;
    tF3429 = (P)2;
    T3 = (P)YPiLL(xF3428,(P)2);
    T2 = (P)YPiv(T3,tF3429);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_to_str_9) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_add_10) {
  P s_,c_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSanyYto_str),c_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,s_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_11) {
  P i_,s_;
  P jF3431;
  P iF3430;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
  iF3430 = i_;
  jF3431 = YPint((P)0);
  LOOP_120: {
    P a120_0,a120_1;
    T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T2 = CALL2(1,VARREF(YgooSlogYE),jF3431,T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),s_,jF3431);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,FREEREF(0),iF3430);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF3430,YPint((P)1));
      T7 = CALL2(1,VARREF(YgooSmathYA),jF3431,YPint((P)1));
      a120_0 = T6;
      a120_1 = T7;
      iF3430 = a120_0;
      jF3431 = a120_1;
      goto LOOP_120;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ascii_Gchar_12) {
  P n_;
  P tmpF3432;
  P T0,T1,T2;
LINK_STACK();
  ARG(n_, 0);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF3432 = T2;
  if (tmpF3432 != YPfalse) {
    T0 = tmpF3432;
  } else {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_41),n_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_char_Ginteger_13) {
  P char_;
  P T0;
LINK_STACK();
  ARG(char_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_integer_Gchar_14) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_char_Gascii_15) {
  P char_;
  P tmpF3433;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(char_, 0);
  T4 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T3 = CALL1(1,VARREF(Yhead),T4);
  T6 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T7 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,T5);
  tmpF3433 = T2;
  if (tmpF3433 != YPfalse) {
    T0 = tmpF3433;
  } else {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_47),char_);
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_digit_base_16) {
  P digit_;
  P T0,T1;
LINK_STACK();
  ARG(digit_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYchar_Gascii),digit_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_digits),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_digit_baseQ_17) {
  P x_,radix_;
  P digF3434;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF3434 = T3;
  if (digF3434 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),digF3434,radix_);
    if (T2 != YPfalse) {
      T1 = digF3434;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_match_18) {
  P char_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(char_, 0);
  T3 = BOXGET(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T6 = BOXGET(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSlogYE),T5,char_);
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T8 = BOXGET(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    BOXPUT(T7,FREEREF(0));
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_failXX_19) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_20) {
  P return_;
  P charF3436;
  P failXXF3435;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(1,fun_failXX_19,1);
  failXXF3435 = T32;
  FUNINIT(failXXF3435, 1,return_);
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,FREEREF(1));
  if (T0 != YPfalse) {
    T2 = CALL0(1,failXXF3435);
  } else {
  }
  T31 = BOXGET(FREEREF(0));
  T30 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T31);
  charF3436 = T30;
  T5 = charF3436;
  T4 = CALL2(1,VARREF(YgooSlogYE),T5,YPchr((P)46));
  if (T4 != YPfalse) {
    T7 = BOXGET(FREEREF(3));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(Yerror),LITREF(lit_61),FREEREF(2));
      T6 = T8;
    } else {
      BOXPUT(YPtrue,FREEREF(3));
      T10 = BOXGET(FREEREF(0));
      T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
      BOXPUT(T9,FREEREF(0));
      T12 = BOXGET(FREEREF(0));
      T11 = CALL2(1,VARREF(YgooSmagYGE),T12,FREEREF(1));
      if (T11 != YPfalse) {
        T13 = CALL0(1,failXXF3435);
      } else {
      }
      T16 = BOXGET(FREEREF(0));
      T15 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T16);
      T14 = charF3436 = T15;
      T6 = T14;
    }
  } else {
  }
  T18 = charF3436;
  T19 = BOXGET(FREEREF(5));
  T17 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T18,T19);
  BOXPUT(T17,FREEREF(4));
  T21 = BOXGET(FREEREF(4));
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T22 = CALL0(1,failXXF3435);
  } else {
  }
  T24 = BOXGET(FREEREF(0));
  T23 = CALL2(1,VARREF(YgooSmathYA),T24,YPint((P)1));
  BOXPUT(T23,FREEREF(0));
  T25 = BOXGET(FREEREF(3));
  if (T25 != YPfalse) {
    T28 = BOXGET(FREEREF(6));
    T29 = BOXGET(FREEREF(5));
    T27 = CALL2(1,VARREF(YgooSmathYT),T28,T29);
    T26 = BOXPUT(T27,FREEREF(6));
  } else {
  }
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_match_digitX_21) {
  P U_;
  P T0,T1;
LINK_STACK();
  ARG(U_, 0);
  T1 = FUNFAB(fun_20,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_looking_at_alphaQ_22) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T2 = BOXGET(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T5);
    T3 = CALL1(1,VARREF(YgooSchrYalphaQ),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_str_to_num_23) {
  P string_;
  P fF3453;
  P tmpF3452;
  P tmpF3451;
  P tmpF3450;
  P tmpF3449;
  P tmpF3448;
  P looking_at_alphaQF3447;
  P match_digitXF3446;
  P matchF3445;
  P radixF3444;
  P seen_decimal_pointQF3443;
  P lengthF3442;
  P scaleF3441;
  P iF3440;
  P nF3439;
  P dF3438;
  P sF3437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
LINK_STACK();
  ARG(string_, 0);
  sF3437 = YPint((P)1);
  dF3438 = YPint((P)0);
  dF3438 = BOXFAB(dF3438);
  nF3439 = YPint((P)0);
  iF3440 = YPint((P)0);
  iF3440 = BOXFAB(iF3440);
  scaleF3441 = YPint((P)1);
  scaleF3441 = BOXFAB(scaleF3441);
  T66 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF3442 = T66;
  seen_decimal_pointQF3443 = YPfalse;
  seen_decimal_pointQF3443 = BOXFAB(seen_decimal_pointQF3443);
  radixF3444 = YPint((P)10);
  radixF3444 = BOXFAB(radixF3444);
  T63 = FUNSHELL(1,fun_match_18,3);
  matchF3445 = T63;
  T64 = FUNSHELL(1,fun_match_digitX_21,7);
  match_digitXF3446 = T64;
  T65 = FUNSHELL(1,fun_looking_at_alphaQ_22,3);
  looking_at_alphaQF3447 = T65;
  FUNINIT(matchF3445, 3,iF3440,lengthF3442,string_);
  FUNINIT(match_digitXF3446, 7,iF3440,lengthF3442,string_,seen_decimal_pointQF3443,dF3438,radixF3444,scaleF3441);
  FUNINIT(looking_at_alphaQF3447, 3,iF3440,lengthF3442,string_);
  T30 = CALL1(1,matchF3445,YPchr((P)43));
  tmpF3448 = T30;
  if (tmpF3448 != YPfalse) {
    T8 = tmpF3448;
  } else {
    T28 = CALL1(1,matchF3445,YPchr((P)45));
    if (T28 != YPfalse) {
      T29 = sF3437 = YPint((P)-1);
      T27 = T29;
    } else {
      T27 = YPfalse;
    }
    tmpF3449 = T27;
    if (tmpF3449 != YPfalse) {
      T9 = tmpF3449;
    } else {
      T11 = CALL1(1,matchF3445,YPchr((P)35));
      if (T11 != YPfalse) {
        T25 = CALL1(1,matchF3445,YPchr((P)98));
        if (T25 != YPfalse) {
          T26 = BOXPUT(YPint((P)2),radixF3444);
          T24 = T26;
        } else {
          T24 = YPfalse;
        }
        tmpF3450 = T24;
        if (tmpF3450 != YPfalse) {
          T12 = tmpF3450;
        } else {
          T22 = CALL1(1,matchF3445,YPchr((P)111));
          if (T22 != YPfalse) {
            T23 = BOXPUT(YPint((P)8),radixF3444);
            T21 = T23;
          } else {
            T21 = YPfalse;
          }
          tmpF3451 = T21;
          if (tmpF3451 != YPfalse) {
            T13 = tmpF3451;
          } else {
            T19 = CALL1(1,matchF3445,YPchr((P)100));
            if (T19 != YPfalse) {
              T20 = BOXPUT(YPint((P)10),radixF3444);
              T18 = T20;
            } else {
              T18 = YPfalse;
            }
            tmpF3452 = T18;
            if (tmpF3452 != YPfalse) {
              T14 = tmpF3452;
            } else {
              T16 = CALL1(1,matchF3445,YPchr((P)120));
              if (T16 != YPfalse) {
                T17 = BOXPUT(YPint((P)16),radixF3444);
                T15 = T17;
              } else {
                T15 = YPfalse;
              }
              T14 = T15;
            }
            T13 = T14;
          }
          T12 = T13;
        }
        T10 = T12;
      } else {
        T10 = YPtrue;
      }
      T9 = T10;
    }
    T8 = T9;
  }
  if (T8 != YPfalse) {
    T34 = BOXGET(dF3438);
    T33 = CALL1(1,match_digitXF3446,T34);
    if (T33 != YPfalse) {
      T36 = BOXGET(dF3438);
      T35 = nF3439 = T36;
      T32 = T35;
    } else {
      T32 = YPfalse;
    }
    if (T32 != YPfalse) {
      LOOP_121: {
        T41 = BOXGET(dF3438);
        T40 = CALL1(1,match_digitXF3446,T41);
        if (T40 != YPfalse) {
          T45 = nF3439;
          T46 = BOXGET(radixF3444);
          T44 = CALL2(1,VARREF(YgooSmathYT),T45,T46);
          T47 = BOXGET(dF3438);
          T43 = CALL2(1,VARREF(YgooSmathYA),T44,T47);
          T42 = nF3439 = T43;
          T39 = T42;
        } else {
          T39 = YPfalse;
        }
        if (T39 != YPfalse) {
          goto LOOP_121;
          T38 = T48;
        } else {
          T38 = YPtrue;
        }
      }
      if (T38 != YPfalse) {
        T51 = BOXGET(iF3440);
        T50 = CALL2(1,VARREF(YgooSlogYE),T51,lengthF3442);
        if (T50 != YPfalse) {
          T57 = sF3437;
          T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T57);
          T60 = nF3439;
          T59 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T60);
          T62 = BOXGET(scaleF3441);
          T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T62);
          T58 = CALL2(1,VARREF(YgooSmathYS),T59,T61);
          T55 = CALL2(1,VARREF(YgooSmathYT),T56,T58);
          fF3453 = T55;
          T53 = BOXGET(seen_decimal_pointQF3443);
          if (T53 != YPfalse) {
            T52 = fF3453;
          } else {
            T54 = CALL1(1,VARREF(YgooSmathYtrunc),fF3453);
            T52 = T54;
          }
          T49 = T52;
        } else {
          T49 = YPfalse;
        }
        T37 = T49;
      } else {
        T37 = YPfalse;
      }
      T31 = T37;
    } else {
      T31 = YPfalse;
    }
    T7 = T31;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  RET(T7);
}

LOCCODEDEF(fun_num_to_str_base_24) {
  P num_,radix_;
  P digit_listF3458;
  P digitF3457;
  P numF3456;
  P digit_listF3455;
  P sF3454;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T16 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T16 != YPfalse) {
    T15 = YPint((P)-1);
  } else {
    T15 = YPint((P)1);
  }
  sF3454 = T15;
  digit_listF3455 = Ynil;
  T14 = CALL2(1,VARREF(YgooSmathYT),num_,sF3454);
  numF3456 = T14;
  LOOP_122: {
    P a122_0,a122_1;
    T7 = CALL2(1,VARREF(YgooSlogYE),numF3456,YPint((P)0));
    if (T7 != YPfalse) {
      T6 = digit_listF3455;
    } else {
      T13 = CALL2(1,VARREF(YgooSmathYrem),numF3456,radix_);
      T12 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T13);
      digitF3457 = T12;
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),digitF3457,digit_listF3455);
      T11 = CALL2(1,VARREF(YgooSmathYtruncS),numF3456,radix_);
      T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
      a122_0 = T9;
      a122_1 = T10;
      digit_listF3455 = a122_0;
      numF3456 = a122_1;
      goto LOOP_122;
      T6 = T8;
    }
  }
  digit_listF3458 = T6;
  T2 = CALL2(1,VARREF(YgooSmagYL),sF3454,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF3458);
    T1 = T3;
  } else {
    T5 = CALL2(1,VARREF(YgooSlogYE),num_,YPint((P)0));
    if (T5 != YPfalse) {
      T4 = LITREF(lit_66);
    } else {
      T4 = digit_listF3458;
    }
    T1 = T4;
  }
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_num_to_str_25) {
  P num_;
  P T0;
LINK_STACK();
  ARG(num_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_num_to_str_base_26) {
  P num_,radix_;
  P lengthF3466;
  P eF3465;
  P iF3464;
  P eF3463;
  P pF3462;
  P stringF3461;
  P pF3460;
  P sF3459;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T40 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T40 != YPfalse) {
    T39 = YPint((P)-1);
  } else {
    T39 = YPint((P)1);
  }
  sF3459 = T39;
  T38 = CALL2(1,VARREF(YgooSmathYT),num_,sF3459);
  pF3460 = T38;
  stringF3461 = LITREF(lit_69);
  pF3462 = pF3460;
  eF3463 = YPint((P)0);
  LOOP_123: {
    P a123_0,a123_1;
    T37 = CALL1(1,VARREF(YgooSmathYtrunc),pF3462);
    iF3464 = T37;
    T32 = CALL2(1,VARREF(YgooSmathY_),pF3462,iF3464);
    T31 = CALL2(1,VARREF(YgooSmagYL),T32,VARREF(YgooScolsSstrYepsilon));
    if (T31 != YPfalse) {
      T33 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF3464,radix_);
      stringF3461 = T33;
      T30 = eF3463;
    } else {
      T35 = CALL2(1,VARREF(YgooSmathYT),pF3462,radix_);
      T36 = CALL2(1,VARREF(YgooSmathYA),eF3463,YPint((P)1));
      a123_0 = T35;
      a123_1 = T36;
      pF3462 = a123_0;
      eF3463 = a123_1;
      goto LOOP_123;
      T30 = T34;
    }
  }
  eF3465 = T30;
  T29 = stringF3461;
  T28 = CALL1(1,VARREF(YgooStypesYlen),T29);
  lengthF3466 = T28;
  T2 = CALL2(1,VARREF(YgooSlogYE),eF3465,YPint((P)0));
  if (T2 != YPfalse) {
    T4 = stringF3461;
    T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_70));
    T1 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),eF3465,lengthF3466);
    if (T6 != YPfalse) {
      T8 = stringF3461;
      T7 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_71),T8);
      T5 = T7;
    } else {
      T10 = CALL2(1,VARREF(YgooSmagYL),eF3465,lengthF3466);
      if (T10 != YPfalse) {
        T13 = stringF3461;
        T14 = CALL2(1,VARREF(YgooSmathY_),lengthF3466,eF3465);
        T12 = CALL3(1,VARREF(YgooScolsSseqYsub),T13,YPint((P)0),T14);
        T16 = stringF3461;
        T17 = CALL2(1,VARREF(YgooSmathY_),lengthF3466,eF3465);
        T15 = CALL3(1,VARREF(YgooScolsSseqYsub),T16,T17,lengthF3466);
        T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_72),T15);
        T9 = T11;
      } else {
        T21 = CALL2(1,VARREF(YgooSmathY_),eF3465,lengthF3466);
        T20 = CALL2(1,VARREF(YgooSmathYA),T21,YPint((P)2));
        T19 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_73),YPint((P)0),T20);
        T22 = stringF3461;
        T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,T22);
        T9 = T18;
      }
      T5 = T9;
    }
    T1 = T5;
  }
  stringF3461 = T1;
  T24 = CALL2(1,VARREF(YgooSmagYL),sF3459,YPint((P)0));
  if (T24 != YPfalse) {
    T26 = stringF3461;
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_74),T26);
    T23 = T25;
  } else {
    T27 = stringF3461;
    T23 = T27;
  }
UNLINK_STACK();
  RET(T23);
}

LOCCODEDEF(fun_num_to_str_27) {
  P num_;
  P T0;
LINK_STACK();
  ARG(num_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_28) {
  P U_,s_;
  P T0;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
  T0 = CALL1(1,VARREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_29) {
  P U_,s_;
  P T0;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
  T0 = CALL1(1,VARREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_30) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(Ysym_name),x_);
  T2 = CALL1(1,VARREF(Ysym_name),y_);
  T0 = CALL2(1,VARREF(YgooSmagYL),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_31) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSstrY___main_0___() {
  P nF3477;
  P cF3476;
  P cF3475;
  P iF3474;
  P vF3473;
  P greatestF3472;
  P leastF3471;
  P iF3470;
  P end259F3469;
  P initF3468;
  P ascii_charsF3467;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105;
DEFCREGS();
  lit_0 = YPPsym((P)"str");
  lit_1 = YPPlist(1,YPPsym((P)"objects"));
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooScolsSstrYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPlist(1,YPPsym((P)"char"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSchrYchar_Gascii,T2);
  VARSET(YgooScolsSstrYascii_whitespaces,YPfalse);
  VARSET(YgooScolsSstrYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPlist(1,YPPsym((P)"string"));
  T6 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsSstrYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPfab_gen(T8,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSstrYnum_to_str_base,T7);
  lit_8 = YPPsym((P)"num-to-str");
  lit_9 = YPPlist(1,YPPsym((P)"num"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPfab_gen(T10,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  DYNSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"nul");
  lit_11 = YPPlist(1,YPPsym((P)"c"));
  T12 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPfab_sig(YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_nul_0 = YPfab_met(FUNCODEREF(fun_nul_0),T11,LITREF(lit_10),LITREF(lit_11),sloc(31),YPsb((P)"(fun ((c (t= <str>)) => <str>) %snul)"));
  T14 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T15 = fun_nul_0;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYnul,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPfab_met(FUNCODEREF(fun_elt_default_1),T16,LITREF(lit_12),LITREF(lit_13),sloc(34),YPsb((P)"(fun ((x <str>) => <any>)  )"));
  T18 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T19 = fun_elt_default_1;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolYelt_default,T17);
  lit_14 = YPPsym((P)"elt-type");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPfab_met(FUNCODEREF(fun_elt_type_2),T20,LITREF(lit_14),LITREF(lit_15),sloc(37),YPsb((P)"(fun ((x <col>) => <type>) <chr>)"));
  T22 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T23 = fun_elt_type_2;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYelt_type,T21);
  lit_16 = YPPsym((P)"fab");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T24 = YPfab_sig(YPPlist(2,T25,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPfab_met(FUNCODEREF(fun_fab_3),T24,LITREF(lit_16),LITREF(lit_17),sloc(39),YPsb((P)"(fun ((x (t= <str>)) (s <fixnum>) => <str>) (%str (%iu s) (%cu  )))"));
  T27 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T28 = fun_fab_3;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYfab,T26);
  lit_18 = YPPlist(1,YPPsym((P)"objects"));
  T29 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPfab_met(FUNCODEREF(fun_str_4),T29,LITREF(lit_0),LITREF(lit_18),sloc(42),YPsb((P)"(fun ((objects ...)) (fabs <str> objects))"));
  T31 = VARREF_OR(YgooScolsSstrYstr,YPfalse);
  T32 = fun_str_4;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSstrYstr,T30);
  lit_19 = YPPsym((P)"len");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_len_5 = YPfab_met(FUNCODEREF(fun_len_5),T33,LITREF(lit_19),LITREF(lit_20),sloc(45),YPsb((P)"(fun ((x <str>) => <fixnum>) (%ib (%slen x)))"));
  T35 = VARREF_OR(YgooStypesYlen,YPfalse);
  T36 = fun_len_5;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooStypesYlen,T34);
  lit_21 = YPPsym((P)"low-elt");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPfab_met(FUNCODEREF(fun_low_elt_6),T37,LITREF(lit_21),LITREF(lit_22),sloc(48),YPsb((P)"(fun ((x <str>) (i <fixnum>) => <chr>) (%cb (%selt x (%iu i))))"));
  T39 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T40 = fun_low_elt_6;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooScolsScolYlow_elt,T38);
  lit_23 = YPPsym((P)"fab-elt-setter");
  lit_24 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T41 = YPfab_sig(YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPfab_met(FUNCODEREF(fun_fab_elt_setter_7),T41,LITREF(lit_23),LITREF(lit_24),sloc(51),YPsb((P)"(fun ((z <chr>) (x <str>) (i <fixnum>)) (set (%selt x (%iu i)) (%cu z)))"));
  T43 = VARREF_OR(YgooScolsScolYfab_elt_setter,YPfalse);
  T44 = fun_fab_elt_setter_7;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsScolYfab_elt_setter,T42);
  lit_25 = YPPsym((P)"elt-or");
  lit_26 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T45 = YPfab_sig(YPPlist(3,VARREF(YLstrG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPfab_met(FUNCODEREF(fun_elt_or_8),T45,LITREF(lit_25),LITREF(lit_26),sloc(54),YPsb((P)"(fun ((x <str>) (i <fixnum>) default => <any>) (if (range-check? x i) (%cb (%selt x (%iu i))) default))"));
  T47 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T48 = fun_elt_or_8;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooScolsScolYelt_or,T46);
  lit_27 = YPPsym((P)"to-str");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPfab_met(FUNCODEREF(fun_to_str_9),T49,LITREF(lit_27),LITREF(lit_28),sloc(63),YPsb((P)"(fun ((x <str>) => <str>) x)"));
  T51 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T52 = fun_to_str_9;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSanyYto_str,T50);
  lit_29 = YPPsym((P)"add");
  lit_30 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"c"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPfab_met(FUNCODEREF(fun_add_10),T53,LITREF(lit_29),LITREF(lit_30),sloc(66),YPsb((P)"(fun ((s <str>) (c <chr>) => <str>) (cat (to-str c) s))"));
  T55 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T56 = fun_add_10;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooScolsScolYadd,T54);
  VARSET(YgooScolsSstrYascii_limit,YPint((P)128));
  lit_31 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"s"));
  lit_32 = YPsb((P)"\t");
  lit_33 = YPsb((P)"\n");
  lit_34 = YPsb((P)"\f");
  lit_35 = YPsb((P)"\r");
  lit_36 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_37 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_38 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T57,YPfalse,LITREF(lit_31),sloc(77),YPsb((P)"(fun (i s) (rep loop ((i i) (j 0)) (unless (= j (len s)) (set (elt ascii-chars i) (elt s j)) (loop (+ i 1) (+ j 1)))))"));
  T60 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T59 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T60,YPfalse);
  ascii_charsF3467 = T59;
  T58 = FUNFAB(fun_11,1,ascii_charsF3467);
  initF3468 = T58;
  XCALL2(1,initF3468,YPint((P)9),LITREF(lit_32));
  XCALL2(1,initF3468,YPint((P)10),LITREF(lit_33));
  XCALL2(1,initF3468,YPint((P)12),LITREF(lit_34));
  XCALL2(1,initF3468,YPint((P)13),LITREF(lit_35));
  XCALL2(1,initF3468,YPint((P)32),LITREF(lit_36));
  XCALL2(1,initF3468,YPint((P)64),LITREF(lit_37));
  XCALL2(1,initF3468,YPint((P)96),LITREF(lit_38));
  VARSET(YgooScolsSstrYascii_chars,ascii_charsF3467);
  lit_39 = YPPsym((P)"ascii->char");
  lit_40 = YPPlist(1,YPPsym((P)"n"));
  lit_41 = YPsb((P)"not a standard character's ASCII code: %=");
  T61 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_12 = YPfab_met(FUNCODEREF(fun_ascii_Gchar_12),T61,LITREF(lit_39),LITREF(lit_40),sloc(91),YPsb((P)"(fun ((n <int>) => <chr>) (or (elt ascii-chars n) (error not a standard character's ASCII code: %= n)))"));
  T63 = VARREF_OR(YgooScolsSstrYascii_Gchar,YPfalse);
  T64 = fun_ascii_Gchar_12;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooScolsSstrYascii_Gchar,T62);
  lit_42 = YPPsym((P)"char->integer");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_13 = YPfab_met(FUNCODEREF(fun_char_Ginteger_13),T65,LITREF(lit_42),LITREF(lit_43),sloc(95),YPsb((P)"(fun ((char <chr>) => <int>) (as <int> char))"));
  T67 = VARREF_OR(YgooScolsSstrYchar_Ginteger,YPfalse);
  T68 = fun_char_Ginteger_13;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooScolsSstrYchar_Ginteger,T66);
  lit_44 = YPPsym((P)"integer->char");
  lit_45 = YPPlist(1,YPPsym((P)"n"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_14 = YPfab_met(FUNCODEREF(fun_integer_Gchar_14),T69,LITREF(lit_44),LITREF(lit_45),sloc(98),YPsb((P)"(fun ((n <int>) => <chr>) (as <chr> n))"));
  T71 = VARREF_OR(YgooScolsSstrYinteger_Gchar,YPfalse);
  T72 = fun_integer_Gchar_14;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsSstrYinteger_Gchar,T70);
  T99 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F3469 = T99;
  iF3470 = YPint((P)0);
  leastF3471 = YPfalse;
  greatestF3472 = YPfalse;
  LOOP_124: {
    P a124_0,a124_1,a124_2;
    T74 = XCALL2(1,VARREF(YgooSlogYE),iF3470,end259F3469);
    if (T74 != YPfalse) {
      T87 = XCALL2(1,VARREF(YgooSmathY_),greatestF3472,leastF3471);
      T86 = XCALL2(1,VARREF(YgooSmathYA),T87,YPint((P)1));
      T85 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T86);
      T84 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T85,YPfalse);
      vF3473 = T84;
      iF3474 = YPint((P)0);
      LOOP_125: {
        P a125_0;
        T76 = XCALL2(1,VARREF(YgooSlogYE),iF3474,end259F3469);
        if (T76 != YPfalse) {
          T77 = XCALL2(1,VARREF(Ylst),leastF3471,vF3473);
          T75 = T77;
        } else {
          T83 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF3474);
          cF3475 = T83;
          if (cF3475 != YPfalse) {
            T80 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF3475);
            T79 = XCALL2(1,VARREF(YgooSmathY_),T80,leastF3471);
            T78 = XCALL3(1,VARREF(YgooScolsScolxYelt_setter),iF3474,vF3473,T79);
          } else {
          }
          T82 = XCALL2(1,VARREF(YgooSmathYA),iF3474,YPint((P)1));
          a125_0 = T82;
          iF3474 = a125_0;
          goto LOOP_125;
          T75 = T81;
        }
      }
      T73 = T75;
    } else {
      T98 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF3470);
      cF3476 = T98;
      if (cF3476 != YPfalse) {
        T95 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF3476);
        nF3477 = T95;
        T90 = XCALL2(1,VARREF(YgooSmathYA),iF3470,YPint((P)1));
        if (leastF3471 != YPfalse) {
          T92 = XCALL2(1,VARREF(YgooSmagYmin),leastF3471,nF3477);
          T91 = T92;
        } else {
          T91 = nF3477;
        }
        if (greatestF3472 != YPfalse) {
          T94 = XCALL2(1,VARREF(YgooSmagYmax),greatestF3472,nF3477);
          T93 = T94;
        } else {
          T93 = nF3477;
        }
        a124_0 = T90;
        a124_1 = T91;
        a124_2 = T93;
        iF3470 = a124_0;
        leastF3471 = a124_1;
        greatestF3472 = a124_2;
        goto LOOP_124;
        T88 = T89;
      } else {
        T97 = XCALL2(1,VARREF(YgooSmathYA),iF3470,YPint((P)1));
        a124_0 = T97;
        a124_1 = leastF3471;
        a124_2 = greatestF3472;
        iF3470 = a124_0;
        leastF3471 = a124_1;
        greatestF3472 = a124_2;
        goto LOOP_124;
        T88 = T96;
      }
      T73 = T88;
    }
  }
  VARSET(YgooScolsSstrYnative_chars,T73);
  lit_46 = YPPlist(1,YPPsym((P)"char"));
  lit_47 = YPsb((P)"not a standard character: %=");
  T100 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_15 = YPfab_met(FUNCODEREF(fun_char_Gascii_15),T100,LITREF(lit_2),LITREF(lit_46),sloc(119),YPsb((P)"(fun ((char <chr>) => <int>) (or (elt (head (tail native-chars)) (- (char->integer char) (head native-chars))) (error not a standard character: %= char)))"));
  T102 = VARREF_OR(YgooSchrYchar_Gascii,YPfalse);
  T103 = fun_char_Gascii_15;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSchrYchar_Gascii,T101);
  lit_48 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  T105 = VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_48));
  T104 = T105;
  return T104;
}

P YgooScolsSstrY___main_1___() {
  P xF3484;
  P iF3483;
  P xF3482;
  P iF3481;
  P xF3480;
  P iF3479;
  P charsF3478;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
DEFCREGS();
  T22 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T21 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T22,YPfalse);
  charsF3478 = T21;
  T6 = XCALL1(1,VARREF(YgooSchrYchar_Gascii),YPchr((P)48));
  iF3479 = T6;
  xF3480 = YPint((P)0);
  LOOP_126: {
    P a126_0,a126_1;
    T2 = XCALL2(1,VARREF(YgooSmagYG),xF3480,YPint((P)9));
    T1 = XCALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF3480,charsF3478,iF3479);
      T4 = XCALL2(1,VARREF(YgooSmathYA),iF3479,YPint((P)1));
      T5 = XCALL2(1,VARREF(YgooSmathYA),xF3480,YPint((P)1));
      a126_0 = T4;
      a126_1 = T5;
      iF3479 = a126_0;
      xF3480 = a126_1;
      goto LOOP_126;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T13 = XCALL1(1,VARREF(YgooSchrYchar_Gascii),YPchr((P)97));
  iF3481 = T13;
  xF3482 = YPint((P)10);
  LOOP_127: {
    P a127_0,a127_1;
    T9 = XCALL2(1,VARREF(YgooSmagYG),xF3482,YPint((P)15));
    T8 = XCALL1(1,VARREF(Ynot),T9);
    if (T8 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF3482,charsF3478,iF3481);
      T11 = XCALL2(1,VARREF(YgooSmathYA),iF3481,YPint((P)1));
      T12 = XCALL2(1,VARREF(YgooSmathYA),xF3482,YPint((P)1));
      a127_0 = T11;
      a127_1 = T12;
      iF3481 = a127_0;
      xF3482 = a127_1;
      goto LOOP_127;
      T7 = T10;
    } else {
      T7 = YPfalse;
    }
  }
  T20 = XCALL1(1,VARREF(YgooSchrYchar_Gascii),YPchr((P)65));
  iF3483 = T20;
  xF3484 = YPint((P)10);
  LOOP_128: {
    P a128_0,a128_1;
    T16 = XCALL2(1,VARREF(YgooSmagYG),xF3484,YPint((P)15));
    T15 = XCALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF3484,charsF3478,iF3483);
      T18 = XCALL2(1,VARREF(YgooSmathYA),iF3483,YPint((P)1));
      T19 = XCALL2(1,VARREF(YgooSmathYA),xF3484,YPint((P)1));
      a128_0 = T18;
      a128_1 = T19;
      iF3483 = a128_0;
      xF3484 = a128_1;
      goto LOOP_128;
      T14 = T17;
    } else {
      T14 = YPfalse;
    }
  }
  VARSET(YgooScolsSstrYascii_digits,charsF3478);
  lit_49 = YPPsym((P)"to-digit-base");
  lit_50 = YPPlist(1,YPPsym((P)"digit"));
  T24 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T24,Ynil);
  fun_to_digit_base_16 = YPfab_met(FUNCODEREF(fun_to_digit_base_16),T23,LITREF(lit_49),LITREF(lit_50),sloc(136),YPsb((P)"(fun ((digit <chr>) => (t? <int>)) (elt ascii-digits (char->ascii digit)))"));
  T26 = VARREF_OR(YgooScolsSstrYto_digit_base,YPfalse);
  T27 = fun_to_digit_base_16;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooScolsSstrYto_digit_base,T25);
  lit_51 = YPPsym((P)"digit-base?");
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T29 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T29,Ynil);
  fun_digit_baseQ_17 = YPfab_met(FUNCODEREF(fun_digit_baseQ_17),T28,LITREF(lit_51),LITREF(lit_52),sloc(139),YPsb((P)"(fun ((x <chr>) (radix <int>) => (t? <int>)) (let ((dig (to-digit-base x))) (and dig (< dig radix) dig)))"));
  T31 = VARREF_OR(YgooScolsSstrYdigit_baseQ,YPfalse);
  T32 = fun_digit_baseQ_17;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSstrYdigit_baseQ,T30);
  lit_53 = YPPlist(1,YPPsym((P)"string"));
  lit_54 = YPPsym((P)"match");
  lit_55 = YPPlist(1,YPPsym((P)"char"));
  lit_56 = YPPsym((P)"match-digit!");
  lit_57 = YPPlist(1,YPPsym((P)"_"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"fail!!");
  lit_60 = Ynil;
  lit_61 = YPsb((P)"str-to-num: Two decimal points: %=");
  lit_62 = YPPsym((P)"looking-at-alpha?");
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_18 = YPfab_met(FUNCODEREF(fun_match_18),T39,LITREF(lit_54),LITREF(lit_55),sloc(152),YPsb((P)"(fun (char) (if (and (< i length) (= (elt string i) char)) (seq (set i (+ i 1)) #t) #f))"));
  T38 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_19 = YPfab_met(FUNCODEREF(fun_failXX_19),T38,LITREF(lit_59),LITREF(lit_60),sloc(158),YPsb((P)"(fun () (return #f))"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPfab_met(FUNCODEREF(fun_20),T37,YPfalse,LITREF(lit_58),sloc(157),YPsb((P)"(fun (return) (loc ((fail!! () (return #f))) (if (>= i length) (fail!!)) (def char (elt string i)) (if (= char .) (if seen-decimal-point? (error str-to-num: Two decimal points: %= string) (seq (set seen-decimal-point? #t) (set i (+ i 1)) (if (>= i length) (fail!!)) (set char (elt string i))))) (set d (digit-base? char radix)) (unless d (fail!!)) (set i (+ i 1)) (if seen-decimal-point? (set scale (* scale radix))) #t))"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_21 = YPfab_met(FUNCODEREF(fun_match_digitX_21),T36,LITREF(lit_56),LITREF(lit_57),sloc(156),YPsb((P)"(fun (_) (esc return (loc ((fail!! () (return #f))) (if (>= i length) (fail!!)) (def char (elt string i)) (if (= char .) (if seen-decimal-point? (error str-to-num: Two decimal points: %= string) (seq (set seen-decimal-point? #t) (set i (+ i 1)) (if (>= i length) (fail!!)) (set char (elt string i))))) (set d (digit-base? char radix)) (unless d (fail!!)) (set i (+ i 1)) (if seen-decimal-point? (set scale (* scale radix))) #t)))"));
  T35 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_22 = YPfab_met(FUNCODEREF(fun_looking_at_alphaQ_22),T35,LITREF(lit_62),LITREF(lit_60),sloc(176),YPsb((P)"(fun () (and (< i length) (alpha? (elt string i))))"));
  T34 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T34,Ynil);
  fun_str_to_num_23 = YPfab_met(FUNCODEREF(fun_str_to_num_23),T33,LITREF(lit_4),LITREF(lit_53),sloc(143),YPsb((P)"(fun ((string <str>) => (t? <num>)) (def s 1) (def d 0) (def n 0) (def i 0) (def scale 1) (def length (len string)) (def seen-decimal-point? #f) (def radix 10) (loc ((match (char) (if (and (< i length) (= (elt string i) char)) (seq (set i (+ i 1)) #t) #f)) (match-digit! (_) (esc return (loc ((fail!! () (return #f))) (if (>= i length) (fail!!)) (def char (elt string i)) (if (= char .) (if seen-decimal-point? (error str-to-num: Two decimal points: %= string) (seq (set seen-decimal-point? #t) (set i (+ i 1)) (if (>= i length) (fail!!)) (set char (elt string i))))) (set d (digit-base? char radix)) (unless d (fail!!)) (set i (+ i 1)) (if seen-decimal-point? (set scale (* scale radix))) #t))) (looking-at-alpha? () (and (< i length) (alpha? (elt string i))))) (and (or (match +) (and (match -) (set s -1)) (if (match #) (or (and (match b) (set radix 2)) (and (match o) (set radix 8)) (and (match d) (set radix 10)) (and (match x) (set radix 16))) #t)) (and (match-digit! d) (set n d)) (rep loop () (if (and (match-digit! d) (set n (+ (* n radix) d))) (loop) #t)) (= i length) (let ((f (* (as <flo> s) (/ (as <flo> n) (as <flo> scale))))) (if seen-decimal-point? f (trunc f))))))"));
  T41 = VARREF_OR(YgooScolsSstrYstr_to_num,YPfalse);
  T42 = fun_str_to_num_23;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooScolsSstrYstr_to_num,T40);
  lit_63 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_63));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_64 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_64));
  lit_65 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_66 = YPsb((P)"0");
  T43 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_24 = YPfab_met(FUNCODEREF(fun_num_to_str_base_24),T43,LITREF(lit_6),LITREF(lit_65),sloc(201),YPsb((P)"(fun ((num <int>) (radix <int>) => <str>) (def s (if (< num 0) -1 1)) (def digit-list (rep loop ((digit-list '()) (num (* num s))) (if (= num 0) digit-list (let ((digit (elt $digit-to-char (rem num radix)))) (loop (pair digit digit-list) (1st (trunc/ num radix))))))) (as <str> (if (< s 0) (pair - digit-list) (if (= num 0) 0 digit-list))))"));
  T45 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T46 = fun_num_to_str_base_24;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooScolsSstrYnum_to_str_base,T44);
  lit_67 = YPPlist(1,YPPsym((P)"num"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_25 = YPfab_met(FUNCODEREF(fun_num_to_str_25),T47,LITREF(lit_8),LITREF(lit_67),sloc(215),YPsb((P)"(fun ((num <int>) => <str>) (num-to-str-base num *print-base*))"));
  T49 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T50 = fun_num_to_str_25;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSmathYnum_to_str,T48);
  lit_68 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_69 = YPsb((P)"");
  lit_70 = YPsb((P)".0");
  lit_71 = YPsb((P)"0.");
  lit_72 = YPsb((P)".");
  lit_73 = YPsb((P)"0.0000000000000");
  lit_74 = YPsb((P)"-");
  T51 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_26 = YPfab_met(FUNCODEREF(fun_num_to_str_base_26),T51,LITREF(lit_6),LITREF(lit_68),sloc(218),YPsb((P)"(fun ((num <flo>) (radix <int>) => <str>) (def s (if (< num 0) -1 1)) (def p (* num s)) (def string ) (def e (rep loop ((p p) (e 0)) (def i (trunc p)) (if (< (- p i) epsilon) (seq (set string (num-to-str-base i radix)) e) (loop (* p radix) (+ e 1))))) (def length (len string)) (set string (if (= e 0) (cat string .0) (if (= e length) (cat 0. string) (if (< e length) (cat (sub string 0 (- length e)) . (sub string (- length e) length)) (cat (sub 0.0000000000000 0 (+ (- e length) 2)) string))))) (if (< s 0) (cat - string) string))"));
  T53 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T54 = fun_num_to_str_base_26;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooScolsSstrYnum_to_str_base,T52);
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_27 = YPfab_met(FUNCODEREF(fun_num_to_str_27),T55,LITREF(lit_8),LITREF(lit_75),sloc(240),YPsb((P)"(fun ((num <flo>) => <str>) (num-to-str-base num *print-base*))"));
  T57 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T58 = fun_num_to_str_27;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSmathYnum_to_str,T56);
  lit_76 = YPPsym((P)"as");
  lit_77 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T60 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T59 = YPfab_sig(YPPlist(2,T60,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_28 = YPfab_met(FUNCODEREF(fun_as_28),T59,LITREF(lit_76),LITREF(lit_77),sloc(245),YPsb((P)"(fun ((_ (t= <str>)) (s <sym>) => <str>) (sym-name s))"));
  T62 = VARREF_OR(YgooStypesYas,YPfalse);
  T63 = fun_as_28;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooStypesYas,T61);
  lit_78 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T65 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T64 = YPfab_sig(YPPlist(2,T65,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_29 = YPfab_met(FUNCODEREF(fun_as_29),T64,LITREF(lit_76),LITREF(lit_78),sloc(248),YPsb((P)"(fun ((_ (t= <sym>)) (s <str>) => <sym>) (fab-sym s))"));
  T67 = VARREF_OR(YgooStypesYas,YPfalse);
  T68 = fun_as_29;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooStypesYas,T66);
  lit_79 = YPPsym((P)"<");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T69 = YPfab_sig(YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_30 = YPfab_met(FUNCODEREF(fun_L_30),T69,LITREF(lit_79),LITREF(lit_80),sloc(256),YPsb((P)"(fun ((x <sym>) (y <sym>) => <log>) (< (sym-name x) (sym-name y)))"));
  T71 = VARREF_OR(YgooSmagYL,YPfalse);
  T72 = fun_L_30;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooSmagYL,T70);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T74 = fun_to_str_31 = YPfab_met(FUNCODEREF(fun_to_str_31),T75,LITREF(lit_27),LITREF(lit_81),sloc(259),YPsb((P)"(fun ((x <sym>) => <str>) (sym-name x))"));
  T78 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T79 = fun_to_str_31;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  T76 = VARSET(YgooSanyYto_str,T77);
  T73 = T76;
  return T73;
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
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;

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
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSvec},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
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
  {"def-list", &module_info_gooScolsSlst, NULL},
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
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
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
  {"<line-list>", &module_info_gooScolsSlst, NULL},
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
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {">>>", &module_info_gooSmath, NULL},
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
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
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
  {"assq", &module_info_gooScolsSlst, NULL},
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
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
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
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
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
  {"assqn", &module_info_gooScolsSlst, NULL},
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
  {"<line>", &module_info_gooScolsSlst, NULL},
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
  {"line-of", &module_info_gooScolsSlst, NULL},
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
  {"<list>", &module_info_gooScolsSlst, NULL},
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
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"num-to-str", NULL},
  {"num-to-str-base", NULL},
  {"str-to-num", NULL},
  {"ascii-whitespaces", NULL},
  {"char->ascii", NULL},
  {"str", NULL},
  {"*print-base*", NULL},
  {"ascii-limit", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstr;
MODULE_INFO module_info_gooScolsSstr = {
  "goo/cols/str",
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
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstr (void);

void load_module_gooScolsSstr (void) {
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
  load_module_gooScolsSlst();
  load_module_gooScolsSvec();

  (P)YgooScolsSstrY___main_0___();
  (P)YgooScolsSstrY___main_1___();

}

/* END OF GENERATED CODE. */
