/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/zip");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/zip */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsnul,"goo/boot","%snul");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooScolsSzipYPenums,"goo/cols/zip","%enums");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsSzipYzip_states,"goo/cols/zip","zip-states");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ylst,"goo/boot","lst");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Ytail,"goo/boot","tail");
DEF(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooScolsSzipYLzip_enumG,"goo/cols/zip","<zip-enum>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
DEF(YgooScolsSzipYzip_dat,"goo/cols/zip","zip-dat");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YOlit,"goo/boot","@lit");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YgooScolsSzipYPenums_setter,"goo/cols/zip","%enums-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOcat2,"goo/boot","@cat2");
DEF(YgooScolsSzipYLzip_stateG,"goo/cols/zip","<zip-state>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_17);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_9);
DEFLIT(lit_12);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_3);
DEFLIT(lit_21);
DEFLIT(lit_13);
DEFLIT(lit_16);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_22);
DEFLIT(lit_25);
DEFLIT(lit_6);
DEFLIT(lit_24);
DEFLIT(lit_27);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_29);
DEFLIT(lit_2);

/* FUNCTIONS: */

LOCFOR(fun_zip_dat_0);
LOCFOR(fun_1);
LOCFOR(fun_zip_2);
LOCFOR(fun_unzip_3);
LOCFOR(fun_zip_states_4);
LOCFOR(fun_Penums_5);
LOCFOR(fun_Penums_setter_6);
LOCFOR(fun_enum_7);
LOCFOR(fun_finQ_8);
LOCFOR(fun_nxt_9);
LOCFOR(fun_now_10);
LOCFOR(fun_now_setter_11);
LOCFOR(fun_now_key_12);
extern P YgooScolsSzipY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_zip_dat_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSzipYzip_dat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_8));
}

LOCCODEDEF(fun_zip_2) {
  P e_;
  P T0,T1;
LINK_STACK();
  NARGS(e_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),e_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_unzip_3) {
  P z_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSzipYzip_dat),z_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zip_states_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSzipYzip_states));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Penums_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSzipYPenums));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Penums_setter_6) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSzipYPenums));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_enum_7) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYenum),x_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSzipYLzip_enumG),VARREF(YgooScolsSzipYPenums),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_8) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),VARREF(YgooSmacrosYnulQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_9) {
  P e_;
  P x_1436F3685;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  x_1436F3685 = e_;
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnxt),T1);
  CALL2(1,VARREF(YgooScolsSzipYPenums_setter),T0,x_1436F3685);
UNLINK_STACK();
  RET(x_1436F3685);
}

LOCCODEDEF(fun_now_10) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnow),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_11) {
  P v_,e_;
  P veF3690;
  P eeF3689;
  P tmpF3688;
  P x_1437F3687;
  P x_1438F3686;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
  T12 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  x_1438F3686 = T11;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),v_);
  x_1437F3687 = T13;
  LOOP_153: {
    P a153_0,a153_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1438F3686);
    tmpF3688 = T4;
    if (tmpF3688 != YPfalse) {
      T2 = tmpF3688;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1437F3687);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1438F3686);
      eeF3689 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1437F3687);
      veF3690 = T9;
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),veF3690);
      CALL2(1,VARREF(YgooScolsScolYnow_setter),T5,eeF3689);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1438F3686);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1437F3687);
      a153_0 = T7;
      a153_1 = T8;
      x_1438F3686 = a153_0;
      x_1437F3687 = a153_1;
      goto LOOP_153;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_key_12) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSzipYPenums),e_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsScolYnow_key),T1);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSzipY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62;
DEFCREGS();
  lit_0 = YPPsym((P)"<zip>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSzipYLzipG,T0);
  lit_1 = YPPsym((P)"zip");
  lit_2 = YPPlist(1,YPPsym((P)"e"));
  T3 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSzipYLzipG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooScolsSzipYzip,T2);
  lit_3 = YPPsym((P)"unzip");
  lit_4 = YPPlist(1,YPPsym((P)"z"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_3),LITREF(lit_4),YPfalse);
  VARSET(YgooScolsSzipYunzip,T4);
  lit_5 = YPPsym((P)"zip-dat");
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_dat_0 = YPfab_met(FUNCODEREF(fun_zip_dat_0),T6,LITREF(lit_5),LITREF(lit_6),sloc(17),YPfalse);
  T8 = VARREF_OR(YgooScolsSzipYzip_dat,YPfalse);
  T9 = fun_zip_dat_0;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooScolsSzipYzip_dat,T7);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  lit_8 = XCALLN(1, Ytup, 0);
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T10,YPfalse,LITREF(lit_7),sloc(17),YPfalse);
  T11 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYzip_dat),YPfalse,VARREF(YLtupG),T11);
  lit_9 = YPPlist(1,YPPsym((P)"e"));
  T12 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSzipYLzipG),Ynil);
  fun_zip_2 = YPfab_met(FUNCODEREF(fun_zip_2),T12,LITREF(lit_1),LITREF(lit_9),sloc(19),YPfalse);
  T14 = VARREF_OR(YgooScolsSzipYzip,YPfalse);
  T15 = fun_zip_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsSzipYzip,T13);
  lit_10 = YPPlist(1,YPPsym((P)"z"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YLtupG),Ynil);
  fun_unzip_3 = YPfab_met(FUNCODEREF(fun_unzip_3),T16,LITREF(lit_3),LITREF(lit_10),sloc(22),YPfalse);
  T18 = VARREF_OR(YgooScolsSzipYunzip,YPfalse);
  T19 = fun_unzip_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsSzipYunzip,T17);
  lit_11 = YPPsym((P)"<zip-state>");
  T21 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T21);
  VARSET(YgooScolsSzipYLzip_stateG,T20);
  lit_12 = YPPsym((P)"zip-states");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_stateG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_zip_states_4 = YPfab_met(FUNCODEREF(fun_zip_states_4),T22,LITREF(lit_12),LITREF(lit_13),sloc(27),YPfalse);
  T24 = VARREF_OR(YgooScolsSzipYzip_states,YPfalse);
  T25 = fun_zip_states_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsSzipYzip_states,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSzipYLzip_stateG),VARREF(YgooScolsSzipYzip_states),YPfalse,VARREF(YLtupG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"<zip-enum>");
  T27 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T26 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T27);
  VARSET(YgooScolsSzipYLzip_enumG,T26);
  lit_15 = YPPsym((P)"%enums");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Penums_5 = YPfab_met(FUNCODEREF(fun_Penums_5),T28,LITREF(lit_15),LITREF(lit_16),sloc(31),YPfalse);
  T30 = VARREF_OR(YgooScolsSzipYPenums,YPfalse);
  T31 = fun_Penums_5;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsSzipYPenums,T29);
  lit_17 = YPPsym((P)"%enums-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Penums_setter_6 = YPfab_met(FUNCODEREF(fun_Penums_setter_6),T32,LITREF(lit_17),LITREF(lit_18),sloc(31),YPfalse);
  T34 = VARREF_OR(YgooScolsSzipYPenums_setter,YPfalse);
  T35 = fun_Penums_setter_6;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsSzipYPenums_setter,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSzipYLzip_enumG),VARREF(YgooScolsSzipYPenums),VARREF(YgooScolsSzipYPenums_setter),VARREF(YgooScolsSzipYLzipG),VARREF(YPprop_unbound_error));
  lit_19 = YPPsym((P)"enum");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzipG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzip_enumG),Ynil);
  fun_enum_7 = YPfab_met(FUNCODEREF(fun_enum_7),T36,LITREF(lit_19),LITREF(lit_20),sloc(33),YPfalse);
  T38 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T39 = fun_enum_7;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYenum,T37);
  lit_21 = YPPsym((P)"fin?");
  lit_22 = YPPlist(1,YPPsym((P)"e"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_8 = YPfab_met(FUNCODEREF(fun_finQ_8),T40,LITREF(lit_21),LITREF(lit_22),sloc(36),YPfalse);
  T42 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T43 = fun_finQ_8;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsScolYfinQ,T41);
  lit_23 = YPPsym((P)"nxt");
  lit_24 = YPPlist(1,YPPsym((P)"e"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzip_enumG),Ynil);
  fun_nxt_9 = YPfab_met(FUNCODEREF(fun_nxt_9),T44,LITREF(lit_23),LITREF(lit_24),sloc(39),YPfalse);
  T46 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T47 = fun_nxt_9;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsScolYnxt,T45);
  lit_25 = YPPsym((P)"now");
  lit_26 = YPPlist(1,YPPsym((P)"e"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_10 = YPfab_met(FUNCODEREF(fun_now_10),T48,LITREF(lit_25),LITREF(lit_26),sloc(42),YPfalse);
  T50 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T51 = fun_now_10;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooScolsScolYnow,T49);
  lit_27 = YPPsym((P)"now-setter");
  lit_28 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YgooScolsSzipYLzipG),VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_11 = YPfab_met(FUNCODEREF(fun_now_setter_11),T52,LITREF(lit_27),LITREF(lit_28),sloc(45),YPfalse);
  T54 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T55 = fun_now_setter_11;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooScolsScolYnow_setter,T53);
  lit_29 = YPPsym((P)"now-key");
  lit_30 = YPPlist(1,YPPsym((P)"e"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSzipYLzip_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSzipYLzipG),Ynil);
  T57 = fun_now_key_12 = YPfab_met(FUNCODEREF(fun_now_key_12),T58,LITREF(lit_29),LITREF(lit_30),sloc(48),YPfalse);
  T61 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T62 = fun_now_key_12;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  T59 = VARSET(YgooScolsScolYnow_key,T60);
  T56 = T59;
  return T56;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSchr;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fold+", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%enums", CVAR, &YgooScolsSzipYPenums},
  {"zip-states", CVAR, &YgooScolsSzipYzip_states},
  {"<zip>", CVAR, &YgooScolsSzipYLzipG},
  {"<zip-enum>", CVAR, &YgooScolsSzipYLzip_enumG},
  {"zip-dat", CVAR, &YgooScolsSzipYzip_dat},
  {"unzip", CVAR, &YgooScolsSzipYunzip},
  {"%enums-setter", CVAR, &YgooScolsSzipYPenums_setter},
  {"<zip-state>", CVAR, &YgooScolsSzipYLzip_stateG},
  {"zip", CVAR, &YgooScolsSzipYzip},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<zip>", NULL},
  {"unzip", NULL},
  {"zip", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSzip;
MODULE_INFO module_info_gooScolsSzip = {
  "goo/cols/zip",
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
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSzip (void);

void load_module_gooScolsSzip (void) {
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
  load_module_gooScolsSseq();

  (P)YgooScolsSzipY___main_0___();

}

/* END OF GENERATED CODE. */
