/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seq");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seq */

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
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
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
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
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
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
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
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
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
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
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
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
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
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YOnew,"goo/boot","@new");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
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
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
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
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
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
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
DEF(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
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
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
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
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
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
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
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
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
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
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
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

DEFLIT(lit_44);
DEFLIT(lit_90);
DEFLIT(lit_98);
DEFLIT(lit_65);
DEFLIT(lit_106);
DEFLIT(lit_129);
DEFLIT(lit_54);
DEFLIT(lit_76);
DEFLIT(lit_29);
DEFLIT(lit_116);
DEFLIT(lit_53);
DEFLIT(lit_58);
DEFLIT(lit_127);
DEFLIT(lit_5);
DEFLIT(lit_104);
DEFLIT(lit_102);
DEFLIT(lit_57);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_103);
DEFLIT(lit_19);
DEFLIT(lit_32);
DEFLIT(lit_120);
DEFLIT(lit_96);
DEFLIT(lit_94);
DEFLIT(lit_117);
DEFLIT(lit_7);
DEFLIT(lit_63);
DEFLIT(lit_21);
DEFLIT(lit_126);
DEFLIT(lit_83);
DEFLIT(lit_45);
DEFLIT(lit_0);
DEFLIT(lit_75);
DEFLIT(lit_8);
DEFLIT(lit_130);
DEFLIT(lit_86);
DEFLIT(lit_112);
DEFLIT(lit_3);
DEFLIT(lit_48);
DEFLIT(lit_100);
DEFLIT(lit_22);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_51);
DEFLIT(lit_119);
DEFLIT(lit_12);
DEFLIT(lit_114);
DEFLIT(lit_1);
DEFLIT(lit_72);
DEFLIT(lit_85);
DEFLIT(lit_69);
DEFLIT(lit_41);
DEFLIT(lit_18);
DEFLIT(lit_121);
DEFLIT(lit_89);
DEFLIT(lit_13);
DEFLIT(lit_111);
DEFLIT(lit_26);
DEFLIT(lit_109);
DEFLIT(lit_56);
DEFLIT(lit_118);
DEFLIT(lit_71);
DEFLIT(lit_17);
DEFLIT(lit_6);
DEFLIT(lit_60);
DEFLIT(lit_61);
DEFLIT(lit_99);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_38);
DEFLIT(lit_10);
DEFLIT(lit_74);
DEFLIT(lit_30);
DEFLIT(lit_23);
DEFLIT(lit_92);
DEFLIT(lit_46);
DEFLIT(lit_97);
DEFLIT(lit_52);
DEFLIT(lit_101);
DEFLIT(lit_115);
DEFLIT(lit_128);
DEFLIT(lit_64);
DEFLIT(lit_124);
DEFLIT(lit_80);
DEFLIT(lit_14);
DEFLIT(lit_66);
DEFLIT(lit_55);
DEFLIT(lit_125);
DEFLIT(lit_95);
DEFLIT(lit_91);
DEFLIT(lit_37);
DEFLIT(lit_24);
DEFLIT(lit_122);
DEFLIT(lit_9);
DEFLIT(lit_70);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_82);
DEFLIT(lit_84);
DEFLIT(lit_108);
DEFLIT(lit_88);
DEFLIT(lit_68);
DEFLIT(lit_110);
DEFLIT(lit_40);
DEFLIT(lit_27);
DEFLIT(lit_77);
DEFLIT(lit_20);
DEFLIT(lit_59);
DEFLIT(lit_105);
DEFLIT(lit_2);
DEFLIT(lit_87);
DEFLIT(lit_4);
DEFLIT(lit_31);
DEFLIT(lit_11);
DEFLIT(lit_16);
DEFLIT(lit_73);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_123);
DEFLIT(lit_81);
DEFLIT(lit_113);
DEFLIT(lit_62);
DEFLIT(lit_36);
DEFLIT(lit_25);
DEFLIT(lit_49);
DEFLIT(lit_42);
DEFLIT(lit_93);
DEFLIT(lit_50);
DEFLIT(lit_28);
DEFLIT(lit_107);

/* FUNCTIONS: */

FUNFOR(YgooScolsSseqYOtQ);
LOCFOR(fun_key_type_1);
LOCFOR(fun_1st_2);
LOCFOR(fun_2nd_3);
LOCFOR(fun_3rd_4);
LOCFOR(fun_map_5);
LOCFOR(fun_map_keyed_6);
LOCFOR(fun_do2_7);
LOCFOR(fun_do3_8);
LOCFOR(fun_map2_9);
LOCFOR(fun_any2Q_10);
LOCFOR(fun_all2Q_11);
LOCFOR(fun_E_12);
LOCFOR(fun_last_13);
LOCFOR(fun_14);
LOCFOR(fun_pos_15);
LOCFOR(fun_finds_16);
LOCFOR(fun_rev_17);
LOCFOR(fun_cat_18);
LOCFOR(fun_cat2_19);
LOCFOR(fun_sub_20);
LOCFOR(fun_subT_21);
LOCFOR(fun_push_22);
LOCFOR(fun_pop_23);
LOCFOR(fun_pick_24);
LOCFOR(fun_25);
LOCFOR(fun_reject_26);
LOCFOR(fun_del_27);
LOCFOR(fun_28);
LOCFOR(fun_del_vals_29);
LOCFOR(fun_30);
LOCFOR(fun_del_dups_31);
LOCFOR(fun_ins_32);
LOCFOR(fun_elts_33);
LOCFOR(fun_sort_34);
LOCFOR(fun_sort_by_35);
LOCFOR(fun_keys_36);
FUNFOR(YgooScolsSseqYrange_check);
FUNFOR(YgooScolsSseqYrange_checkQ);
LOCFOR(fun_add_39);
LOCFOR(fun_add_new_40);
LOCFOR(fun_41);
LOCFOR(fun_vals_to_str_42);
LOCFOR(fun_do_key_vals_43);
LOCFOR(fun_44);
LOCFOR(fun_col_45);
LOCFOR(fun_suffixQ_46);
LOCFOR(fun_prefixQ_47);
LOCFOR(fun_repeat_48);
LOCFOR(fun_split_49);
LOCFOR(fun_50);
LOCFOR(fun_join_51);
extern P YgooScolsSseqY___main_0___ ();
extern P YgooScolsSseqY___main_1___ ();
extern P YgooScolsSseqY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSseqYOtQ) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_key_type_1) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

LOCCODEDEF(fun_1st_2) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_2nd_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3rd_4) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_5) {
  P f_,c_;
  P eF3111;
  P resF3110;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF3110 = Ynil;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF3111 = T9;
  LOOP_73: {
    P a73_0,a73_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3111);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3110);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF3111);
      T6 = CALL1(1,f_,T7);
      T5 = CALL2(1,VARREF(YgooScolsScolYadd),resF3110,T6);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3111);
      a73_0 = T5;
      a73_1 = T8;
      resF3110 = a73_0;
      eF3111 = a73_1;
      goto LOOP_73;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_map_keyed_6) {
  P f_,c_;
  P eF3113;
  P resF3112;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF3112 = Ynil;
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF3113 = T10;
  LOOP_74: {
    P a74_0,a74_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3113);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3112);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF3113);
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF3113);
      T6 = CALL2(0,f_,T7,T8);
      T5 = CALL2(1,VARREF(YgooScolsScolYadd),resF3112,T6);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3113);
      a74_0 = T5;
      a74_1 = T9;
      resF3112 = a74_0;
      eF3113 = a74_1;
      goto LOOP_74;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do2_7) {
  P f_,x_,y_;
  P tmpF3116;
  P eyF3115;
  P exF3114;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3114 = T10;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF3115 = T11;
  LOOP_75: {
    P a75_0,a75_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3114);
    tmpF3116 = T4;
    if (tmpF3116 != YPfalse) {
      T2 = tmpF3116;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3115);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),exF3114);
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3115);
      CALL2(0,f_,T5,T6);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3114);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3115);
      a75_0 = T8;
      a75_1 = T9;
      exF3114 = a75_0;
      eyF3115 = a75_1;
      goto LOOP_75;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_do3_8) {
  P f_,x_,y_,z_;
  P tmpF3121;
  P tmpF3120;
  P ezF3119;
  P eyF3118;
  P exF3117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3117 = T14;
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF3118 = T15;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  ezF3119 = T16;
  LOOP_76: {
    P a76_0,a76_1,a76_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3117);
    tmpF3120 = T6;
    if (tmpF3120 != YPfalse) {
      T2 = tmpF3120;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3118);
      tmpF3121 = T5;
      if (tmpF3121 != YPfalse) {
        T3 = tmpF3121;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ezF3119);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),exF3117);
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3118);
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),ezF3119);
      CALL3(0,f_,T7,T8,T9);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3117);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3118);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ezF3119);
      a76_0 = T11;
      a76_1 = T12;
      a76_2 = T13;
      exF3117 = a76_0;
      eyF3118 = a76_1;
      ezF3119 = a76_2;
      goto LOOP_76;
      T0 = T10;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map2_9) {
  P f_,x_,y_;
  P tmpF3125;
  P eyF3124;
  P exF3123;
  P resF3122;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  resF3122 = Ynil;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3123 = T13;
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF3124 = T14;
  LOOP_77: {
    P a77_0,a77_1,a77_2;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3123);
    tmpF3125 = T3;
    if (tmpF3125 != YPfalse) {
      T1 = tmpF3125;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3124);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3122);
      T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T5);
      T0 = T4;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),exF3123);
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3124);
      T8 = CALL2(1,f_,T9,T10);
      T7 = CALL2(1,VARREF(YgooScolsScolYadd),resF3122,T8);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3123);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3124);
      a77_0 = T7;
      a77_1 = T11;
      a77_2 = T12;
      resF3122 = a77_0;
      exF3123 = a77_1;
      eyF3124 = a77_2;
      goto LOOP_77;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_any2Q_10) {
  P test_,x_,y_;
  P tmpF3129;
  P tmpF3128;
  P eyF3127;
  P exF3126;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3126 = T12;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF3127 = T13;
  LOOP_78: {
    P a78_0,a78_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3126);
    tmpF3128 = T3;
    if (tmpF3128 != YPfalse) {
      T1 = tmpF3128;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3127);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),exF3126);
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3127);
      T9 = CALL2(0,test_,T10,T11);
      T8 = CALL1(1,VARREF(YgooSlogYas_log),T9);
      tmpF3129 = T8;
      if (tmpF3129 != YPfalse) {
        T4 = tmpF3129;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3126);
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3127);
        a78_0 = T6;
        a78_1 = T7;
        exF3126 = a78_0;
        eyF3127 = a78_1;
        goto LOOP_78;
        T4 = T5;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_all2Q_11) {
  P test_,x_,y_;
  P tmpF3133;
  P tmpF3132;
  P eyF3131;
  P exF3130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3130 = T11;
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF3131 = T12;
  LOOP_79: {
    P a79_0,a79_1;
    T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3130);
    tmpF3132 = T10;
    if (tmpF3132 != YPfalse) {
      T0 = tmpF3132;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3131);
      tmpF3133 = T9;
      if (tmpF3133 != YPfalse) {
        T1 = tmpF3133;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYnow),exF3130);
        T5 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3131);
        T3 = CALL2(0,test_,T4,T5);
        if (T3 != YPfalse) {
          T7 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3130);
          T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3131);
          a79_0 = T7;
          a79_1 = T8;
          exF3130 = a79_0;
          eyF3131 = a79_1;
          goto LOOP_79;
          T2 = T6;
        } else {
          T2 = YPfalse;
        }
        T1 = T2;
      }
      T0 = T1;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_E_12) {
  P c1_,c2_;
  P e2F3135;
  P e1F3134;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  e1F3134 = T10;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  e2F3135 = T11;
  LOOP_80: {
    P a80_0,a80_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F3134);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e2F3135);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),e1F3134);
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),e2F3135);
      T4 = CALL2(1,VARREF(YgooSlogYE),T5,T6);
      if (T4 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F3134);
        T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e2F3135);
        a80_0 = T8;
        a80_1 = T9;
        e1F3134 = a80_0;
        e2F3135 = a80_1;
        goto LOOP_80;
        T3 = T7;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_last_13) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_14) {
  P a_;
  P T0;
LINK_STACK();
  ARG(a_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_pos_15) {
  P x_,v_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  T1 = FUNFAB(fun_14,1,v_);
  T0 = CALL3(1,VARREF(YgooScolsScolYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finds_16) {
  P x_,y_;
  P yiF3138;
  P xiF3137;
  P xsiF3136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xsiF3136 = YPint((P)0);
  LOOP_81: {
    P a81_0;
    T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T5 = CALL1(1,VARREF(YgooStypesYlen),y_);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,T5);
    T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYL),xsiF3136,T2);
    if (T1 != YPfalse) {
      xiF3137 = xsiF3136;
      yiF3138 = YPint((P)0);
      LOOP_82: {
        P a82_0,a82_1;
        T9 = CALL1(1,VARREF(YgooStypesYlen),x_);
        T8 = CALL2(1,VARREF(YgooSmagYL),xiF3137,T9);
        if (T8 != YPfalse) {
          T11 = CALL1(1,VARREF(YgooStypesYlen),y_);
          T10 = CALL2(1,VARREF(YgooSmagYL),yiF3138,T11);
          T7 = T10;
        } else {
          T7 = YPfalse;
        }
        if (T7 != YPfalse) {
          T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_,xiF3137);
          T15 = CALL2(1,VARREF(YgooSmacrosYelt),y_,yiF3138);
          T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
          if (T13 != YPfalse) {
            T17 = CALL2(1,VARREF(YgooSmathYA),xiF3137,YPint((P)1));
            T18 = CALL2(1,VARREF(YgooSmathYA),yiF3138,YPint((P)1));
            a82_0 = T17;
            a82_1 = T18;
            xiF3137 = a82_0;
            yiF3138 = a82_1;
            goto LOOP_82;
            T12 = T16;
          } else {
            T20 = CALL2(1,VARREF(YgooSmathYA),xsiF3136,YPint((P)1));
            a81_0 = T20;
            xsiF3136 = a81_0;
            goto LOOP_81;
            T12 = T19;
          }
          T6 = T12;
        } else {
          T6 = xsiF3136;
        }
      }
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_rev_17) {
  P x_;
  P eF3140;
  P seqF3139;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  seqF3139 = Ynil;
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF3140 = T7;
  LOOP_83: {
    P a83_0,a83_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3140);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,seqF3139);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),eF3140);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),seqF3139,T5);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3140);
      a83_0 = T4;
      a83_1 = T6;
      seqF3139 = a83_0;
      eF3140 = a83_1;
      goto LOOP_83;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cat_18) {
  P x_,ss_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooScolsSseqYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cat2_19) {
  P x_,y_;
  P eyF3144;
  P seqF3143;
  P exF3142;
  P seqF3141;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  seqF3141 = Ynil;
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF3142 = T15;
  LOOP_84: {
    P a84_0,a84_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF3142);
    if (T1 != YPfalse) {
      seqF3143 = seqF3141;
      T10 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
      eyF3144 = T10;
      LOOP_85: {
        P a85_0,a85_1;
        T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF3144);
        if (T3 != YPfalse) {
          T5 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF3143);
          T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T5);
          T2 = T4;
        } else {
          T8 = CALL1(1,VARREF(YgooScolsScolYnow),eyF3144);
          T7 = CALL2(1,VARREF(YgooScolsScolYadd),seqF3143,T8);
          T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF3144);
          a85_0 = T7;
          a85_1 = T9;
          seqF3143 = a85_0;
          eyF3144 = a85_1;
          goto LOOP_85;
          T2 = T6;
        }
      }
      T0 = T2;
    } else {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),exF3142);
      T12 = CALL2(1,VARREF(YgooScolsScolYadd),seqF3141,T13);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),exF3142);
      a84_0 = T12;
      a84_1 = T14;
      seqF3141 = a84_0;
      exF3142 = a84_1;
      goto LOOP_84;
      T0 = T11;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sub_20) {
  P x_,from_,below_;
  P eF3147;
  P iF3146;
  P seqF3145;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
  seqF3145 = Ynil;
  check_type(YPint((P)0),VARREF(YLintG));
  iF3146 = YPint((P)0);
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF3147 = T13;
  LOOP_86: {
    P a86_0,a86_1,a86_2;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3147);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF3145);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T7 = CALL2(1,VARREF(YgooSmagYGE),iF3146,from_);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSmagYL),iF3146,below_);
        T6 = T8;
      } else {
        T6 = YPfalse;
      }
      if (T6 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooScolsScolYnow),eF3147);
        T9 = CALL2(1,VARREF(YgooScolsScolYadd),seqF3145,T10);
        T5 = T9;
      } else {
        T5 = seqF3145;
      }
      T11 = CALL2(1,VARREF(YgooSmathYA),iF3146,YPint((P)1));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3147);
      a86_0 = T5;
      a86_1 = T11;
      a86_2 = T12;
      seqF3145 = a86_0;
      iF3146 = a86_1;
      eF3147 = a86_2;
      goto LOOP_86;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_subT_21) {
  P x_,from_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_push_22) {
  P l_,x_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),l_,x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pop_23) {
  P l_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(l_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),l_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),l_,YPint((P)1),T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),l_,YPint((P)0));
  T0 = CALL2(1,VARREF(Ytup),T1,T3);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pick_24) {
  P test_,x_;
  P vF3150;
  P eF3149;
  P seqF3148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  seqF3148 = Ynil;
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF3149 = T10;
  LOOP_87: {
    P a87_0,a87_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3149);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF3148);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF3149);
      vF3150 = T9;
      T6 = CALL1(1,test_,vF3150);
      if (T6 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooScolsScolYadd),seqF3148,vF3150);
        T5 = T7;
      } else {
        T5 = seqF3148;
      }
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3149);
      a87_0 = T5;
      a87_1 = T8;
      seqF3148 = a87_0;
      eF3149 = a87_1;
      goto LOOP_87;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_25) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(0,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_reject_26) {
  P test_,x_;
  P T0,T1;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_25,1,test_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_del_27) {
  P x_,key_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,YPint((P)0),key_);
  T3 = CALL2(1,VARREF(YgooSmathYA),key_,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,T3,T4);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_28) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_del_vals_29) {
  P s_,x_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_28,1,x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_30) {
  P s_,e_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_del_dups_31) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = fun_30;
  T2 = CALL3(1,VARREF(YgooScolsScolYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ins_32) {
  P x_,v_,before_;
  P eF3153;
  P iF3152;
  P rF3151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
  rF3151 = Ynil;
  iF3152 = YPint((P)0);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF3153 = T14;
  LOOP_88: {
    P a88_0,a88_1,a88_2;
    T1 = CALL2(1,VARREF(YgooSlogYE),iF3152,before_);
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmacrosYpair),v_,rF3151);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF3152,YPint((P)1));
      a88_0 = T3;
      a88_1 = T4;
      a88_2 = eF3153;
      rF3151 = a88_0;
      iF3152 = a88_1;
      eF3153 = a88_2;
      goto LOOP_88;
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3153);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooSmacrosYrevX),rF3151);
        T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T8);
        T5 = T7;
      } else {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF3153);
        T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,rF3151);
        T12 = CALL2(1,VARREF(YgooSmathYA),iF3152,YPint((P)1));
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3153);
        a88_0 = T10;
        a88_1 = T12;
        a88_2 = T13;
        rF3151 = a88_0;
        iF3152 = a88_1;
        eF3153 = a88_2;
        goto LOOP_88;
        T5 = T9;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elts_33) {
  P x_,keys_;
  P keyF3158;
  P keysF3157;
  P iF3156;
  P eF3155;
  P rF3154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  rF3154 = Ynil;
  T24 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF3155 = T24;
  iF3156 = YPint((P)0);
  T26 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  keysF3157 = T25;
  LOOP_89: {
    P a89_0,a89_1,a89_2,a89_3;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),keysF3157);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rF3154);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3155);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(Yrange_error),x_,iF3156);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T23 = CALL1(1,VARREF(YgooScolsScolYnow),keysF3157);
          keyF3158 = T23;
          T9 = CALL2(1,VARREF(YgooSlogYE),iF3156,keyF3158);
          if (T9 != YPfalse) {
            T12 = CALL1(1,VARREF(YgooScolsScolYnow),eF3155);
            T11 = CALL2(1,VARREF(YgooSmacrosYpair),T12,rF3154);
            T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3155);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF3156,YPint((P)1));
            T15 = CALL1(1,VARREF(YgooScolsScolYnxt),keysF3157);
            a89_0 = T11;
            a89_1 = T13;
            a89_2 = T14;
            a89_3 = T15;
            rF3154 = a89_0;
            eF3155 = a89_1;
            iF3156 = a89_2;
            keysF3157 = a89_3;
            goto LOOP_89;
            T8 = T10;
          } else {
            T17 = CALL2(1,VARREF(YisaQ),keyF3158,VARREF(YLintG));
            if (T17 != YPfalse) {
              T19 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3155);
              T20 = CALL2(1,VARREF(YgooSmathYA),iF3156,YPint((P)1));
              a89_0 = rF3154;
              a89_1 = T19;
              a89_2 = T20;
              a89_3 = keysF3157;
              rF3154 = a89_0;
              eF3155 = a89_1;
              iF3156 = a89_2;
              keysF3157 = a89_3;
              goto LOOP_89;
              T16 = T18;
            } else {
              if (YPtrue != YPfalse) {
                T22 = CALL2(1,VARREF(Yrange_error),x_,keyF3158);
                T21 = T22;
              } else {
                T21 = YPfalse;
              }
              T16 = T21;
            }
            T8 = T16;
          }
          T7 = T8;
        } else {
          T7 = YPfalse;
        }
        T4 = T7;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sort_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_by),x_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sort_by_35) {
  P a_,test_;
  P T0,T1;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),a_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T1,test_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_keys_36) {
  P d_;
  P T0,T1;
LINK_STACK();
  ARG(d_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),d_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_check) {
  P x_,i_;
  P tmpF3159;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T4 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF3159 = T4;
  if (tmpF3159 != YPfalse) {
    T1 = tmpF3159;
  } else {
    T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T2 = CALL2(1,VARREF(YgooSmagYGE),i_,T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(Yrange_error),x_,i_);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_checkQ) {
  P x_,i_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T2 = CALL2(1,VARREF(YgooSmagYL),i_,T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_add_39) {
  P x_,e_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(e_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,e_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_new_40) {
  P c_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

LOCCODEDEF(fun_41) {
  P s_,e_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T2 = CALL1(1,VARREF(YgooSmacrosYnulQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_119);
  } else {
    T1 = LITREF(lit_120);
  }
  T3 = CALL1(1,VARREF(YgooSanyYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_vals_to_str_42) {
  P s_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  T1 = fun_41;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_119),s_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_key_vals_43) {
  P fn_,key_vals_;
  P valF3163;
  P nxtsF3162;
  P keyF3161;
  P eF3160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  eF3160 = T11;
  LOOP_90: {
    P a90_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3160);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),eF3160);
      keyF3161 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3160);
      nxtsF3162 = T9;
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF3160);
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF3160);
        T5 = T8;
      } else {
        T5 = YPfalse;
      }
      valF3163 = T5;
      CALL2(1,fn_,keyF3161,valF3163);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),eF3160);
      a90_0 = T4;
      eF3160 = a90_0;
      goto LOOP_90;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_44) {
  P key_,val_;
  P T0;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_col_45) {
  P t_,key_vals_;
  P xF3164;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF3164 = T1;
  T0 = FUNFAB(fun_44,1,xF3164);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T0,key_vals_);
UNLINK_STACK();
  QRET(xF3164);
}

LOCCODEDEF(fun_suffixQ_46) {
  P s_,end_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(end_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),end_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,T4);
  T5 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T2,T5);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,end_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_prefixQ_47) {
  P s_,begin_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(begin_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),begin_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),T2);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,begin_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_repeat_48) {
  P s_,n_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(s_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYLE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSclassYclass_of),s_);
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),s_,T6);
    T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),s_,T5);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_split_49) {
  P s_,sep_;
  P matchF3165;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF3165 = T9;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),matchF3165,YPfalse);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),s_);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF3165);
    T7 = CALL2(1,VARREF(YgooSmathYA),matchF3165,YPint((P)1));
    T8 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T7,T8);
    T5 = CALL2(1,VARREF(YgooScolsSseqYsplit),T6,sep_);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_50) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),x_,FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_join_51) {
  P ss_,sep_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ss_, 0);
  ARG(sep_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSclassYclass_of),sep_);
    T2 = CALL1(1,VARREF(YgooScolsScolYnul),T3);
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_50,1,sep_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),ss_,YPint((P)0));
    T8 = CALL1(1,VARREF(YgooStypesYlen),ss_);
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),ss_,YPint((P)1),T8);
    T4 = CALL3(1,VARREF(YgooScolsScolYfold),T5,T6,T7);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
DEFCREGS();
  lit_0 = YPPsym((P)"@t?");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLunionG),Ynil);
  YgooScolsSseqYOtQ = YPfab_met(FUNCODEREF(YgooScolsSseqYOtQ),T0,LITREF(lit_0),LITREF(lit_1),sloc(15),YPsb((P)"(fun ((x <type>) => <union>) (new <union> union-elts (@lst x (new <singleton> type-object #f))))"));
  T1 = YgooScolsSseqYOtQ;
  VARSET(YgooScolsSseqYOtQ,T1);
  lit_2 = YPPsym((P)"1st");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSmacrosY1st,T2);
  lit_4 = YPPsym((P)"2nd");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSmacrosY2nd,T4);
  lit_6 = YPPsym((P)"3rd");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSseqY3rd,T6);
  lit_8 = YPPsym((P)"last");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooSmacrosYlast,T8);
  lit_10 = YPPsym((P)"pos");
  lit_11 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T12 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T12,Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooScolsSseqYpos,T10);
  lit_12 = YPPsym((P)"finds");
  lit_13 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T15,Ynil);
  T13 = YPfab_gen(T14,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooScolsSseqYfinds,T13);
  lit_14 = YPPsym((P)"do2");
  lit_15 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooScolsSseqYdo2,T16);
  lit_16 = YPPsym((P)"do3");
  lit_17 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T19 = YPfab_sig(YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooScolsSseqYdo3,T18);
  lit_18 = YPPsym((P)"map2");
  lit_19 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T21 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooSmacrosYmap2,T20);
  lit_20 = YPPsym((P)"any2?");
  lit_21 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T22 = YPfab_gen(T23,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooScolsSseqYany2Q,T22);
  lit_22 = YPPsym((P)"all2?");
  lit_23 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T25 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T24 = YPfab_gen(T25,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooStypesYall2Q,T24);
  lit_24 = YPPsym((P)"rev");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T26 = YPfab_gen(T27,LITREF(lit_24),LITREF(lit_25),YPfalse);
  VARSET(YgooScolsSseqYrev,T26);
  lit_26 = YPPsym((P)"cat");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_26),LITREF(lit_27),YPfalse);
  VARSET(YgooSmacrosYcat,T28);
  lit_28 = YPPsym((P)"cat2");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_28),LITREF(lit_29),YPfalse);
  VARSET(YgooScolsSseqYcat2,T30);
  lit_30 = YPPsym((P)"push");
  lit_31 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T32 = YPfab_gen(T33,LITREF(lit_30),LITREF(lit_31),YPfalse);
  VARSET(YgooScolsSseqYpush,T32);
  lit_32 = YPPsym((P)"pop");
  lit_33 = YPPlist(1,YPPsym((P)"l"));
  T36 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T36,Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_32),LITREF(lit_33),YPfalse);
  VARSET(YgooScolsSseqYpop,T34);
  lit_34 = YPPsym((P)"sub");
  lit_35 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T38 = YPfab_sig(YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T37 = YPfab_gen(T38,LITREF(lit_34),LITREF(lit_35),YPfalse);
  VARSET(YgooScolsSseqYsub,T37);
  T39 = YPfalse;
  return T39;
}

P YgooScolsSseqY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99;
DEFCREGS();
  lit_36 = YPPsym((P)"sub*");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_36),LITREF(lit_37),YPfalse);
  VARSET(YgooScolsSseqYsubT,T0);
  lit_38 = YPPsym((P)"ins");
  lit_39 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"e"),YPPsym((P)"before"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_38),LITREF(lit_39),YPfalse);
  VARSET(YgooScolsSseqYins,T2);
  lit_40 = YPPsym((P)"pick");
  lit_41 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_40),LITREF(lit_41),YPfalse);
  VARSET(YgooScolsSseqYpick,T4);
  lit_42 = YPPsym((P)"reject");
  lit_43 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_42),LITREF(lit_43),YPfalse);
  VARSET(YgooScolsSseqYreject,T6);
  lit_44 = YPPsym((P)"del-vals");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_44),LITREF(lit_45),YPfalse);
  VARSET(YgooScolsSseqYdel_vals,T8);
  lit_46 = YPPsym((P)"del-dups");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_46),LITREF(lit_47),YPfalse);
  VARSET(YgooScolsSseqYdel_dups,T10);
  lit_48 = YPPsym((P)"sort");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_48),LITREF(lit_49),YPfalse);
  VARSET(YgooScolsSseqYsort,T12);
  lit_50 = YPPsym((P)"sort-by");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"test"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_50),LITREF(lit_51),YPfalse);
  VARSET(YgooScolsSseqYsort_by,T14);
  lit_52 = YPPsym((P)"suffix?");
  lit_53 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"suffix"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_52),LITREF(lit_53),YPfalse);
  VARSET(YgooScolsSseqYsuffixQ,T16);
  lit_54 = YPPsym((P)"prefix?");
  lit_55 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"prefix"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_54),LITREF(lit_55),YPfalse);
  VARSET(YgooScolsSseqYprefixQ,T18);
  lit_56 = YPPsym((P)"repeat");
  lit_57 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T21 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_56),LITREF(lit_57),YPfalse);
  VARSET(YgooScolsSseqYrepeat,T20);
  lit_58 = YPPsym((P)"split");
  lit_59 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T22 = YPfab_gen(T23,LITREF(lit_58),LITREF(lit_59),YPfalse);
  VARSET(YgooScolsSseqYsplit,T22);
  lit_60 = YPPsym((P)"join");
  lit_61 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T24 = YPfab_gen(T25,LITREF(lit_60),LITREF(lit_61),YPfalse);
  VARSET(YgooScolsSseqYjoin,T24);
  lit_62 = YPPsym((P)"vals-to-str");
  lit_63 = YPPlist(1,YPPsym((P)"s"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T26 = YPfab_gen(T27,LITREF(lit_62),LITREF(lit_63),YPfalse);
  VARSET(YgooScolsSseqYvals_to_str,T26);
  lit_64 = YPPsym((P)"do-key-vals");
  lit_65 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_64),LITREF(lit_65),YPfalse);
  VARSET(YgooScolsSseqYdo_key_vals,T28);
  lit_66 = YPPsym((P)"key-type");
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_1 = YPfab_met(FUNCODEREF(fun_key_type_1),T30,LITREF(lit_66),LITREF(lit_67),sloc(111),YPsb((P)"(fun ((x <col>) => <type>) <int>)"));
  T32 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T33 = fun_key_type_1;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsScolYkey_type,T31);
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_2 = YPfab_met(FUNCODEREF(fun_1st_2),T34,LITREF(lit_2),LITREF(lit_68),sloc(115),YPsb((P)"(fun ((x <seq>) => <any>) (elt x 0))"));
  T36 = VARREF_OR(YgooSmacrosY1st,YPfalse);
  T37 = fun_1st_2;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmacrosY1st,T35);
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPfab_met(FUNCODEREF(fun_2nd_3),T38,LITREF(lit_4),LITREF(lit_69),sloc(117),YPsb((P)"(fun ((x <seq>) => <any>) (elt x 1))"));
  T40 = VARREF_OR(YgooSmacrosY2nd,YPfalse);
  T41 = fun_2nd_3;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmacrosY2nd,T39);
  lit_70 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_4 = YPfab_met(FUNCODEREF(fun_3rd_4),T42,LITREF(lit_6),LITREF(lit_70),sloc(119),YPsb((P)"(fun ((x <seq>) => <any>) (elt x 2))"));
  T44 = VARREF_OR(YgooScolsSseqY3rd,YPfalse);
  T45 = fun_3rd_4;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsSseqY3rd,T43);
  lit_71 = YPPsym((P)"map");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_5 = YPfab_met(FUNCODEREF(fun_map_5),T46,LITREF(lit_71),LITREF(lit_72),sloc(121),YPsb((P)"(fun ((f <fun>) (c <seq>) => <seq>) (rep con ((res '()) (e (enum c))) (if (fin? e) (col-res c (rev! res)) (con (add res (f (now e))) (nxt e)))))"));
  T48 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T49 = fun_map_5;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSmacrosYmap,T47);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_keyed_6 = YPfab_met(FUNCODEREF(fun_map_keyed_6),T50,LITREF(lit_73),LITREF(lit_74),sloc(127),YPsb((P)"(fun ((f <fun>) (c <seq>) => <seq>) (rep con ((res '()) (e (enum c))) (if (fin? e) (col-res c (rev! res)) (con (add res (f (now-key e) (now e))) (nxt e)))))"));
  T52 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T53 = fun_map_keyed_6;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsScolYmap_keyed,T51);
  lit_75 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T54 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_7 = YPfab_met(FUNCODEREF(fun_do2_7),T54,LITREF(lit_14),LITREF(lit_75),sloc(133),YPsb((P)"(fun ((f <fun>) (x <seq>) (y <seq>)) (rep lop ((ex (enum x)) (ey (enum y))) (unless (or (fin? ex) (fin? ey)) (f (now ex) (now ey)) (lop (nxt ex) (nxt ey)))))"));
  T56 = VARREF_OR(YgooScolsSseqYdo2,YPfalse);
  T57 = fun_do2_7;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsSseqYdo2,T55);
  lit_76 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T58 = YPfab_sig(YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_8 = YPfab_met(FUNCODEREF(fun_do3_8),T58,LITREF(lit_16),LITREF(lit_76),sloc(139),YPsb((P)"(fun ((f <fun>) (x <seq>) (y <seq>) (z <seq>)) (rep lop ((ex (enum x)) (ey (enum y)) (ez (enum z))) (unless (or (fin? ex) (fin? ey) (fin? ez)) (f (now ex) (now ey) (now ez)) (lop (nxt ex) (nxt ey) (nxt ez)))))"));
  T60 = VARREF_OR(YgooScolsSseqYdo3,YPfalse);
  T61 = fun_do3_8;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsSseqYdo3,T59);
  lit_77 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T62 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_map2_9 = YPfab_met(FUNCODEREF(fun_map2_9),T62,LITREF(lit_18),LITREF(lit_77),sloc(145),YPsb((P)"(fun ((f <fun>) (x <seq>) (y <seq>) => <seq>) (rep con ((res '()) (ex (enum x)) (ey (enum y))) (if (or (fin? ex) (fin? ey)) (col-res x (rev! res)) (con (add res (f (now ex) (now ey))) (nxt ex) (nxt ey)))))"));
  T64 = VARREF_OR(YgooSmacrosYmap2,YPfalse);
  T65 = fun_map2_9;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSmacrosYmap2,T63);
  lit_78 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T66 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_10 = YPfab_met(FUNCODEREF(fun_any2Q_10),T66,LITREF(lit_20),LITREF(lit_78),sloc(152),YPsb((P)"(fun ((test <fun>) (x <seq>) (y <seq>) => <log>) (rep fnd ((ex (enum x)) (ey (enum y))) (if (or (fin? ex) (fin? ey)) #f (or (as-log (test (now ex) (now ey))) (fnd (nxt ex) (nxt ey))))))"));
  T68 = VARREF_OR(YgooScolsSseqYany2Q,YPfalse);
  T69 = fun_any2Q_10;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsSseqYany2Q,T67);
  lit_79 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T70 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_11 = YPfab_met(FUNCODEREF(fun_all2Q_11),T70,LITREF(lit_22),LITREF(lit_79),sloc(159),YPsb((P)"(fun ((test <fun>) (x <seq>) (y <seq>) => <log>) (rep fnd ((ex (enum x)) (ey (enum y))) (or (fin? ex) (fin? ey) (and (test (now ex) (now ey)) (fnd (nxt ex) (nxt ey))))))"));
  T72 = VARREF_OR(YgooStypesYall2Q,YPfalse);
  T73 = fun_all2Q_11;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooStypesYall2Q,T71);
  lit_80 = YPPsym((P)"=");
  lit_81 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_12 = YPfab_met(FUNCODEREF(fun_E_12),T74,LITREF(lit_80),LITREF(lit_81),sloc(165),YPsb((P)"(fun ((c1 <seq>) (c2 <seq>) => <log>) (rep eq ((e1 (enum c1)) (e2 (enum c2))) (if (fin? e1) (fin? e2) (and (= (now e1) (now e2)) (eq (nxt e1) (nxt e2))))))"));
  T76 = VARREF_OR(YgooSlogYE,YPfalse);
  T77 = fun_E_12;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSlogYE,T75);
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_13 = YPfab_met(FUNCODEREF(fun_last_13),T78,LITREF(lit_8),LITREF(lit_82),sloc(173),YPsb((P)"(fun ((x <seq>) => <any>) (elt x (- (len x) 1)))"));
  T80 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T81 = fun_last_13;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSmacrosYlast,T79);
  lit_83 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  lit_84 = YPPlist(1,YPPsym((P)"a"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T84,YPfalse,LITREF(lit_84),sloc(176),YPsb((P)"(fun (a) (== v a))"));
  T83 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T83,Ynil);
  fun_pos_15 = YPfab_met(FUNCODEREF(fun_pos_15),T82,LITREF(lit_10),LITREF(lit_83),sloc(175),YPsb((P)"(fun ((x <seq>) v => (@t? <int>)) (find-or (fun (a) (== v a)) x #f))"));
  T86 = VARREF_OR(YgooScolsSseqYpos,YPfalse);
  T87 = fun_pos_15;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooScolsSseqYpos,T85);
  lit_85 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T89 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T88 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T89,Ynil);
  fun_finds_16 = YPfab_met(FUNCODEREF(fun_finds_16),T88,LITREF(lit_12),LITREF(lit_85),sloc(178),YPsb((P)"(fun ((x <seq>) (y <seq>) => (@t? <int>)) (rep outer ((xsi 0)) (if (< xsi (+ (- (len x) (len y)) 1)) (rep inner ((xi xsi) (yi 0)) (if (and (< xi (len x)) (< yi (len y))) (if (== (elt x xi) (elt y yi)) (inner (+ xi 1) (+ yi 1)) (outer (+ xsi 1))) xsi)) #f)))"));
  T91 = VARREF_OR(YgooScolsSseqYfinds,YPfalse);
  T92 = fun_finds_16;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooScolsSseqYfinds,T90);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T95 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T94 = fun_rev_17 = YPfab_met(FUNCODEREF(fun_rev_17),T95,LITREF(lit_24),LITREF(lit_86),sloc(189),YPsb((P)"(fun ((x <seq>) => <seq>) (rep con ((seq '()) (e (enum x))) (if (fin? e) (col-res x seq) (con (add seq (now e)) (nxt e)))))"));
  T98 = VARREF_OR(YgooScolsSseqYrev,YPfalse);
  T99 = fun_rev_17;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  T96 = VARSET(YgooScolsSseqYrev,T97);
  T93 = T96;
  return T93;
}

P YgooScolsSseqY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116;
DEFCREGS();
  lit_87 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ss"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_18 = YPfab_met(FUNCODEREF(fun_cat_18),T0,LITREF(lit_26),LITREF(lit_87),sloc(197),YPsb((P)"(fun ((x <seq>) (ss ...) => <seq>) (fold cat2 x ss))"));
  T2 = VARREF_OR(YgooSmacrosYcat,YPfalse);
  T3 = fun_cat_18;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmacrosYcat,T1);
  lit_88 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_19 = YPfab_met(FUNCODEREF(fun_cat2_19),T4,LITREF(lit_28),LITREF(lit_88),sloc(200),YPsb((P)"(fun ((x <seq>) (y <seq>) => <seq>) (rep con-x ((seq '()) (ex (enum x))) (if (fin? ex) (rep con-y ((seq seq) (ey (enum y))) (if (fin? ey) (col-res x (rev! seq)) (con-y (add seq (now ey)) (nxt ey)))) (con-x (add seq (now ex)) (nxt ex)))))"));
  T6 = VARREF_OR(YgooScolsSseqYcat2,YPfalse);
  T7 = fun_cat2_19;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsSseqYcat2,T5);
  lit_89 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T8 = YPfab_sig(YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_20 = YPfab_met(FUNCODEREF(fun_sub_20),T8,LITREF(lit_34),LITREF(lit_89),sloc(209),YPsb((P)"(fun ((x <seq>) (from <int>) (below <int>) => <seq>) (rep con-x ((seq '()) ((i <int>) 0) (e (enum x))) (if (fin? e) (col-res x (rev! seq)) (con-x (if (if (>= i from) (< i below)) (add seq (now e)) seq) (+ i 1) (nxt e)))))"));
  T10 = VARREF_OR(YgooScolsSseqYsub,YPfalse);
  T11 = fun_sub_20;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsSseqYsub,T9);
  lit_90 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_subT_21 = YPfab_met(FUNCODEREF(fun_subT_21),T12,LITREF(lit_36),LITREF(lit_90),sloc(216),YPsb((P)"(fun ((x <seq>) (from <int>) => <seq>) (sub x from (len x)))"));
  T14 = VARREF_OR(YgooScolsSseqYsubT,YPfalse);
  T15 = fun_subT_21;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsSseqYsubT,T13);
  lit_91 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_push_22 = YPfab_met(FUNCODEREF(fun_push_22),T16,LITREF(lit_30),LITREF(lit_91),sloc(219),YPsb((P)"(fun ((l <seq>) (x <any>) => <seq>) (ins l x 0))"));
  T18 = VARREF_OR(YgooScolsSseqYpush,YPfalse);
  T19 = fun_push_22;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsSseqYpush,T17);
  lit_92 = YPPlist(1,YPPsym((P)"l"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T21,Ynil);
  fun_pop_23 = YPfab_met(FUNCODEREF(fun_pop_23),T20,LITREF(lit_32),LITREF(lit_92),sloc(222),YPsb((P)"(fun ((l <seq>) => (tup (new-col <seq>) (value <any>))) (tup (sub l 1 (len l)) (elt l 0)))"));
  T23 = VARREF_OR(YgooScolsSseqYpop,YPfalse);
  T24 = fun_pop_23;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooScolsSseqYpop,T22);
  lit_93 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_24 = YPfab_met(FUNCODEREF(fun_pick_24),T25,LITREF(lit_40),LITREF(lit_93),sloc(225),YPsb((P)"(fun ((test <fun>) (x <seq>) => <seq>) (rep con ((seq '()) (e (enum x))) (if (fin? e) (col-res x (rev! seq)) (let ((v (now e))) (con (if (test v) (add seq v) seq) (nxt e))))))"));
  T27 = VARREF_OR(YgooScolsSseqYpick,YPfalse);
  T28 = fun_pick_24;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsSseqYpick,T26);
  lit_94 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T30,YPfalse,LITREF(lit_95),sloc(233),YPsb((P)"(fun (x) (not (test x)))"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_26 = YPfab_met(FUNCODEREF(fun_reject_26),T29,LITREF(lit_42),LITREF(lit_94),sloc(232),YPsb((P)"(fun ((test <fun>) (x <seq>) => <seq>) (pick (fun (x) (not (test x))) x))"));
  T32 = VARREF_OR(YgooScolsSseqYreject,YPfalse);
  T33 = fun_reject_26;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsSseqYreject,T31);
  lit_96 = YPPsym((P)"del");
  lit_97 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_27 = YPfab_met(FUNCODEREF(fun_del_27),T34,LITREF(lit_96),LITREF(lit_97),sloc(235),YPsb((P)"(fun ((x <seq>) (key <int>) => <seq>) (cat (sub x 0 key) (sub x (+ key 1) (len x))))"));
  T36 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T37 = fun_del_27;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooScolsScolYdel,T35);
  lit_98 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"e"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T39,YPfalse,LITREF(lit_99),sloc(239),YPsb((P)"(fun (e) (== e x))"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_29 = YPfab_met(FUNCODEREF(fun_del_vals_29),T38,LITREF(lit_44),LITREF(lit_98),sloc(238),YPsb((P)"(fun ((s <seq>) x => <seq>) (reject (fun (e) (== e x)) s))"));
  T41 = VARREF_OR(YgooScolsSseqYdel_vals,YPfalse);
  T42 = fun_del_vals_29;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooScolsSseqYdel_vals,T40);
  lit_100 = YPPlist(1,YPPsym((P)"x"));
  lit_101 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T44,YPfalse,LITREF(lit_101),sloc(242),YPsb((P)"(fun (s e) (if (mem? s e) s (pair e s)))"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_31 = YPfab_met(FUNCODEREF(fun_del_dups_31),T43,LITREF(lit_46),LITREF(lit_100),sloc(241),YPsb((P)"(fun ((x <seq>) => <seq>) (col-res x (rev! (fold (fun (s e) (if (mem? s e) s (pair e s))) '() x))))"));
  T46 = VARREF_OR(YgooScolsSseqYdel_dups,YPfalse);
  T47 = fun_del_dups_31;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsSseqYdel_dups,T45);
  lit_102 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T48 = YPfab_sig(YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_32 = YPfab_met(FUNCODEREF(fun_ins_32),T48,LITREF(lit_38),LITREF(lit_102),sloc(244),YPsb((P)"(fun ((x <seq>) (v <any>) (before <int>) => <seq>) (rep copy ((r '()) (i 0) (e (enum x))) (if (= i before) (copy (pair v r) (+ i 1) e) (if (fin? e) (col-res x (rev! r)) (copy (pair (now e) r) (+ i 1) (nxt e))))))"));
  T50 = VARREF_OR(YgooScolsSseqYins,YPfalse);
  T51 = fun_ins_32;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooScolsSseqYins,T49);
  lit_103 = YPPsym((P)"elts");
  lit_104 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_elts_33 = YPfab_met(FUNCODEREF(fun_elts_33),T52,LITREF(lit_103),LITREF(lit_104),sloc(253),YPsb((P)"(fun ((x <seq>) (keys <seq>) => <seq>) (rep copy ((r '()) (e (enum x)) (i 0) (keys (enum (sort keys)))) (cond ((fin? keys) (col-res x (rev! r))) ((fin? e) (range-error x i)) (#t (let ((key (now keys))) (cond ((= i key) (copy (pair (now e) r) (nxt e) (+ i 1) (nxt keys))) ((isa? key <int>) (copy r (nxt e) (+ i 1) keys)) (#t (range-error x key))))))))"));
  T54 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T55 = fun_elts_33;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooScolsScolYelts,T53);
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_sort_34 = YPfab_met(FUNCODEREF(fun_sort_34),T56,LITREF(lit_48),LITREF(lit_105),sloc(268),YPsb((P)"(fun ((x <seq>) => <seq>) (sort-by x <))"));
  T58 = VARREF_OR(YgooScolsSseqYsort,YPfalse);
  T59 = fun_sort_34;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooScolsSseqYsort,T57);
  lit_106 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_by_35 = YPfab_met(FUNCODEREF(fun_sort_by_35),T60,LITREF(lit_50),LITREF(lit_106),sloc(271),YPsb((P)"(fun ((a <seq!>) (test <fun>) => <seq!>) (sort-by! (dup a) test))"));
  T62 = VARREF_OR(YgooScolsSseqYsort_by,YPfalse);
  T63 = fun_sort_by_35;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooScolsSseqYsort_by,T61);
  lit_107 = YPPsym((P)"keys");
  lit_108 = YPPlist(1,YPPsym((P)"d"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_36 = YPfab_met(FUNCODEREF(fun_keys_36),T64,LITREF(lit_107),LITREF(lit_108),sloc(276),YPsb((P)"(fun ((d <seq>) => <seq>) (below (len d)))"));
  T66 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T67 = fun_keys_36;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooScolsScolYkeys,T65);
  lit_109 = YPPsym((P)"range-check");
  lit_110 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_check = YPfab_met(FUNCODEREF(YgooScolsSseqYrange_check),T68,LITREF(lit_109),LITREF(lit_110),sloc(279),YPsb((P)"(fun ((x <seq>) (i <int>)) (when (or (< i 0) (>= i (len x))) (range-error x i)))"));
  T69 = YgooScolsSseqYrange_check;
  VARSET(YgooScolsSseqYrange_check,T69);
  lit_111 = YPPsym((P)"range-check?");
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T70 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_checkQ = YPfab_met(FUNCODEREF(YgooScolsSseqYrange_checkQ),T70,LITREF(lit_111),LITREF(lit_112),sloc(283),YPsb((P)"(fun ((x <seq>) (i <int>)) (and (>= i 0) (< i (len x))))"));
  T71 = YgooScolsSseqYrange_checkQ;
  VARSET(YgooScolsSseqYrange_checkQ,T71);
  lit_113 = YPPsym((P)"add");
  lit_114 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"e"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_39 = YPfab_met(FUNCODEREF(fun_add_39),T72,LITREF(lit_113),LITREF(lit_114),sloc(286),YPsb((P)"(fun ((x <seq>) e => <seq>) (ins x e 0))"));
  T74 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T75 = fun_add_39;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooScolsScolYadd,T73);
  lit_115 = YPPsym((P)"add-new");
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_40 = YPfab_met(FUNCODEREF(fun_add_new_40),T76,LITREF(lit_115),LITREF(lit_116),sloc(289),YPsb((P)"(fun ((c <seq>) x => <seq>) (unless (mem? c x) (add c x)) c)"));
  T78 = VARREF_OR(YgooScolsSseqYadd_new,YPfalse);
  T79 = fun_add_new_40;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooScolsSseqYadd_new,T77);
  lit_117 = YPPlist(1,YPPsym((P)"s"));
  lit_118 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  lit_119 = YPsb((P)"");
  lit_120 = YPsb((P)" ");
  T81 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPfab_met(FUNCODEREF(fun_41),T81,YPfalse,LITREF(lit_118),sloc(294),YPsb((P)"(fun (s e) (cat s (if (nul? s)   ) (to-str e)))"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_42 = YPfab_met(FUNCODEREF(fun_vals_to_str_42),T80,LITREF(lit_62),LITREF(lit_117),sloc(293),YPsb((P)"(fun ((s <seq>) => <str>) (fold (fun (s e) (cat s (if (nul? s)   ) (to-str e)))  s))"));
  T83 = VARREF_OR(YgooScolsSseqYvals_to_str,YPfalse);
  T84 = fun_vals_to_str_42;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooScolsSseqYvals_to_str,T82);
  lit_121 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_43 = YPfab_met(FUNCODEREF(fun_do_key_vals_43),T85,LITREF(lit_64),LITREF(lit_121),sloc(296),YPsb((P)"(fun ((fn <fun>) (key-vals <seq>)) (rep rep ((e (enum key-vals))) (unless (fin? e) (def key (now e)) (def nxts (nxt e)) (def val (and (not (fin? e)) (now e))) (fn key val) (rep (nxt e)))))"));
  T87 = VARREF_OR(YgooScolsSseqYdo_key_vals,YPfalse);
  T88 = fun_do_key_vals_43;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooScolsSseqYdo_key_vals,T86);
  lit_122 = YPPsym((P)"col");
  lit_123 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  lit_124 = YPPlist(2,YPPsym((P)"key"),YPPsym((P)"val"));
  T91 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T91,YPfalse,LITREF(lit_124),sloc(306),YPsb((P)"(fun (key val) (set (fab-elt x key) val))"));
  T90 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T89 = YPfab_sig(YPPlist(1,T90),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_45 = YPfab_met(FUNCODEREF(fun_col_45),T89,LITREF(lit_122),LITREF(lit_123),sloc(304),YPsb((P)"(fun ((t (t< <col>)) (key-vals ...)) (def x (fab t (1st (trunc/ (len key-vals) 2)))) (do-key-vals (fun (key val) (set (fab-elt x key) val)) key-vals) x)"));
  T93 = VARREF_OR(YgooScolsScolYcol,YPfalse);
  T94 = fun_col_45;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooScolsScolYcol,T92);
  lit_125 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"end"));
  T95 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_46 = YPfab_met(FUNCODEREF(fun_suffixQ_46),T95,LITREF(lit_52),LITREF(lit_125),sloc(309),YPsb((P)"(fun ((s <seq>) (end <seq>) => <log>) (= (sub s (- (len s) (len end)) (len s)) end))"));
  T97 = VARREF_OR(YgooScolsSseqYsuffixQ,YPfalse);
  T98 = fun_suffixQ_46;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YgooScolsSseqYsuffixQ,T96);
  lit_126 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"begin"));
  T99 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_47 = YPfab_met(FUNCODEREF(fun_prefixQ_47),T99,LITREF(lit_54),LITREF(lit_126),sloc(312),YPsb((P)"(fun ((s <seq>) (begin <seq>) => <log>) (= (sub s 0 (len begin)) begin))"));
  T101 = VARREF_OR(YgooScolsSseqYprefixQ,YPfalse);
  T102 = fun_prefixQ_47;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YgooScolsSseqYprefixQ,T100);
  lit_127 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T103 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_48 = YPfab_met(FUNCODEREF(fun_repeat_48),T103,LITREF(lit_56),LITREF(lit_127),sloc(316),YPsb((P)"(fun ((s <seq>) (n <int>) => <seq>) (if (<= n 0) (nul (class-of s)) (cat2 s (repeat s (- n 1)))))"));
  T105 = VARREF_OR(YgooScolsSseqYrepeat,YPfalse);
  T106 = fun_repeat_48;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YgooScolsSseqYrepeat,T104);
  lit_128 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T107 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_49 = YPfab_met(FUNCODEREF(fun_split_49),T107,LITREF(lit_58),LITREF(lit_128),sloc(323),YPsb((P)"(fun ((s <seq>) sep => <lst>) (def match (pos s sep)) (if (== match #f) (lst s) (pair (sub s 0 match) (split (sub s (+ match 1) (len s)) sep))))"));
  T109 = VARREF_OR(YgooScolsSseqYsplit,YPfalse);
  T110 = fun_split_49;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YgooScolsSseqYsplit,T108);
  lit_129 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T112 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPfab_met(FUNCODEREF(fun_50),T112,YPfalse,LITREF(lit_130),sloc(334),YPsb((P)"(fun (x y) (cat x sep y))"));
  T111 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_51 = YPfab_met(FUNCODEREF(fun_join_51),T111,LITREF(lit_60),LITREF(lit_129),sloc(331),YPsb((P)"(fun ((ss <seq>) (sep <seq>) => <seq>) (if (nul? ss) (nul (class-of sep)) (fold (fun (x y) (cat x sep y)) (elt ss 0) (sub ss 1 (len ss)))))"));
  T114 = VARREF_OR(YgooScolsSseqYjoin,YPfalse);
  T115 = fun_join_51;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YgooScolsSseqYjoin,T113);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T116 = YPfalse;
  return T116;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
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
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
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
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
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
  {"rev!", &module_info_gooSmacros, NULL},
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
  {"digit?", &module_info_gooSchr, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
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
  {"alpha?", &module_info_gooSchr, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
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
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
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
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
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
  {"%opts-tup", &module_info_gooSboot, NULL},
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
  {"~", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
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
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
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
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"---main-0---", PVAR, NULL},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"ins", CVAR, &YgooScolsSseqYins},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"sub*", CVAR, &YgooScolsSseqYsubT},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"del-vals", NULL},
  {"cat", NULL},
  {"do-key-vals", NULL},
  {"rev", NULL},
  {"last", NULL},
  {"vals-to-str", NULL},
  {"reject", NULL},
  {"3rd", NULL},
  {"pick", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"join", NULL},
  {"1st", NULL},
  {"any2?", NULL},
  {"split", NULL},
  {"ins", NULL},
  {"range-check?", NULL},
  {"repeat", NULL},
  {"sub*", NULL},
  {"map2", NULL},
  {"sort-by!", NULL},
  {"<seq.>", NULL},
  {"<seq>", NULL},
  {"range-check", NULL},
  {"pos", NULL},
  {"prefix?", NULL},
  {"below", NULL},
  {"do3", NULL},
  {"sub", NULL},
  {"suffix?", NULL},
  {"pop", NULL},
  {"do2", NULL},
  {"sort-by", NULL},
  {"push", NULL},
  {"sort", NULL},
  {"finds", NULL},
  {"cat2", NULL},
  {"del-dups", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseq;
MODULE_INFO module_info_gooScolsSseq = {
  "goo/cols/seq",
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
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooScolsSseq (void);

void load_module_gooScolsSseq (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();

  (P)YgooScolsSseqY___main_0___();
  (P)YgooScolsSseqY___main_1___();
  (P)YgooScolsSseqY___main_2___();

}

/* END OF GENERATED CODE. */
