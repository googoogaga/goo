/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/step");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/step */

EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
DEF(YgooScolsSstepYstep_then,"goo/cols/step","step-then");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooScolsSstepYPfirstQ_setter,"goo/cols/step","%first?-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooScolsSstepYPdat,"goo/cols/step","%dat");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooScolsSstepYLeach_enumG,"goo/cols/step","<each-enum>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YOmap,"goo/boot","@map");
DEF(YgooScolsSstepYLstep_enumG,"goo/cols/step","<step-enum>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLintG,"goo/boot","<int>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooScolsSstepYPfirstQ,"goo/cols/step","%first?");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ynew,"goo/boot","new");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooScolsSstepYstep_first,"goo/cols/step","step-first");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooScolsSstepYeach_fun,"goo/cols/step","each-fun");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yhead,"goo/boot","head");
DEF(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_28);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_23);
DEFLIT(lit_26);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_20);
DEFLIT(lit_13);
DEFLIT(lit_34);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_25);
DEFLIT(lit_31);
DEFLIT(lit_9);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_6);
DEFLIT(lit_19);

/* FUNCTIONS: */

LOCFOR(fun_step_first_0);
LOCFOR(fun_step_then_1);
LOCFOR(fun_first_then_2);
LOCFOR(fun_Pdat_3);
LOCFOR(fun_PfirstQ_4);
LOCFOR(fun_PfirstQ_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_enum_7);
LOCFOR(fun_finQ_8);
LOCFOR(fun_nxt_9);
LOCFOR(fun_now_10);
LOCFOR(fun_each_fun_11);
LOCFOR(fun_Pdat_12);
LOCFOR(fun_enum_13);
LOCFOR(fun_finQ_14);
LOCFOR(fun_nxt_15);
LOCFOR(fun_now_16);
extern P YgooScolsSstepY___main_0___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_step_first_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYstep_first));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_step_then_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYstep_then));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_first_then_2) {
  P first_,then_;
  P T0;
LINK_STACK();
  ARG(first_, 0);
  ARG(then_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_first),first_,VARREF(YgooScolsSstepYstep_then),then_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_Pdat_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_PfirstQ_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYPfirstQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_PfirstQ_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSstepYPfirstQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_enum_7) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_8) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_nxt_9) {
  P e_;
  P x_1435F3776;
LINK_STACK();
  ARG(e_, 0);
  x_1435F3776 = e_;
  CALL2(1,VARREF(YgooScolsSstepYPfirstQ_setter),YPfalse,x_1435F3776);
UNLINK_STACK();
  RET(x_1435F3776);
}

LOCCODEDEF(fun_now_10) {
  P e_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSstepYPfirstQ),e_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
    T3 = CALL1(1,VARREF(YgooScolsSstepYstep_first),T4);
    T2 = CALL0(1,T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
    T6 = CALL1(1,VARREF(YgooScolsSstepYstep_then),T7);
    T5 = CALL0(1,T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_each_fun_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYeach_fun));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdat_12) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSstepYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_enum_13) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSstepYLeach_enumG),VARREF(YgooScolsSstepYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_14) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_nxt_15) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(e_);
}

LOCCODEDEF(fun_now_16) {
  P e_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  T2 = CALL1(1,VARREF(YgooScolsSstepYPdat),e_);
  T1 = CALL1(1,VARREF(YgooScolsSstepYeach_fun),T2);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsSstepY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_0 = YPPsym((P)"<step>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSstepYLstepG,T0);
  lit_1 = YPPsym((P)"first-then");
  lit_2 = YPPlist(2,YPPsym((P)"first"),YPPsym((P)"then"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooScolsSstepYfirst_then,T2);
  lit_3 = YPPsym((P)"<each>");
  T5 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqG),Ynil);
  T4 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_3),T5);
  VARSET(YgooScolsSstepYLeachG,T4);
  lit_4 = YPPsym((P)"each");
  lit_5 = YPPlist(1,YPPsym((P)"f"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsSstepYeach,T6);
  lit_6 = YPPsym((P)"step-first");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_step_first_0 = YPfab_met(FUNCODEREF(fun_step_first_0),T8,LITREF(lit_6),LITREF(lit_7),sloc(23),YPfalse);
  T10 = VARREF_OR(YgooScolsSstepYstep_first,YPfalse);
  T11 = fun_step_first_0;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsSstepYstep_first,T9);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_first),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"step-then");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_step_then_1 = YPfab_met(FUNCODEREF(fun_step_then_1),T12,LITREF(lit_8),LITREF(lit_9),sloc(24),YPfalse);
  T14 = VARREF_OR(YgooScolsSstepYstep_then,YPfalse);
  T15 = fun_step_then_1;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsSstepYstep_then,T13);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLstepG),VARREF(YgooScolsSstepYstep_then),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_10 = YPPlist(2,YPPsym((P)"first"),YPPsym((P)"then"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YgooScolsSstepYLstepG),Ynil);
  fun_first_then_2 = YPfab_met(FUNCODEREF(fun_first_then_2),T16,LITREF(lit_1),LITREF(lit_10),sloc(27),YPfalse);
  T18 = VARREF_OR(YgooScolsSstepYfirst_then,YPfalse);
  T19 = fun_first_then_2;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsSstepYfirst_then,T17);
  lit_11 = YPPsym((P)"<step-enum>");
  T21 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T21);
  VARSET(YgooScolsSstepYLstep_enumG,T20);
  lit_12 = YPPsym((P)"%dat");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_3 = YPfab_met(FUNCODEREF(fun_Pdat_3),T22,LITREF(lit_12),LITREF(lit_13),sloc(31),YPfalse);
  T24 = VARREF_OR(YgooScolsSstepYPdat,YPfalse);
  T25 = fun_Pdat_3;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsSstepYPdat,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPdat),YPfalse,VARREF(YgooScolsSstepYLstepG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"%first?");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_PfirstQ_4 = YPfab_met(FUNCODEREF(fun_PfirstQ_4),T26,LITREF(lit_14),LITREF(lit_15),sloc(32),YPfalse);
  T28 = VARREF_OR(YgooScolsSstepYPfirstQ,YPfalse);
  T29 = fun_PfirstQ_4;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooScolsSstepYPfirstQ,T27);
  lit_16 = YPPsym((P)"%first?-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLlogG),VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_PfirstQ_setter_5 = YPfab_met(FUNCODEREF(fun_PfirstQ_setter_5),T30,LITREF(lit_16),LITREF(lit_17),sloc(32),YPfalse);
  T32 = VARREF_OR(YgooScolsSstepYPfirstQ_setter,YPfalse);
  T33 = fun_PfirstQ_setter_5;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooScolsSstepYPfirstQ_setter,T31);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPfab_met(FUNCODEREF(fun_6),T34,YPfalse,LITREF(lit_18),sloc(32),YPfalse);
  T35 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLstep_enumG),VARREF(YgooScolsSstepYPfirstQ),VARREF(YgooScolsSstepYPfirstQ_setter),VARREF(YLlogG),T35);
  lit_19 = YPPsym((P)"enum");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstepG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLstep_enumG),Ynil);
  fun_enum_7 = YPfab_met(FUNCODEREF(fun_enum_7),T36,LITREF(lit_19),LITREF(lit_20),sloc(33),YPfalse);
  T38 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T39 = fun_enum_7;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYenum,T37);
  lit_21 = YPPsym((P)"fin?");
  lit_22 = YPPlist(1,YPPsym((P)"e"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_8 = YPfab_met(FUNCODEREF(fun_finQ_8),T40,LITREF(lit_21),LITREF(lit_22),sloc(35),YPfalse);
  T42 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T43 = fun_finQ_8;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsScolYfinQ,T41);
  lit_23 = YPPsym((P)"nxt");
  lit_24 = YPPlist(1,YPPsym((P)"e"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLstep_enumG),Ynil);
  fun_nxt_9 = YPfab_met(FUNCODEREF(fun_nxt_9),T44,LITREF(lit_23),LITREF(lit_24),sloc(36),YPfalse);
  T46 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T47 = fun_nxt_9;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsScolYnxt,T45);
  lit_25 = YPPsym((P)"now");
  lit_26 = YPPlist(1,YPPsym((P)"e"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLstep_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_10 = YPfab_met(FUNCODEREF(fun_now_10),T48,LITREF(lit_25),LITREF(lit_26),sloc(39),YPfalse);
  T50 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T51 = fun_now_10;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooScolsScolYnow,T49);
  lit_27 = YPPsym((P)"each-fun");
  lit_28 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeachG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_each_fun_11 = YPfab_met(FUNCODEREF(fun_each_fun_11),T52,LITREF(lit_27),LITREF(lit_28),sloc(44),YPfalse);
  T54 = VARREF_OR(YgooScolsSstepYeach_fun,YPfalse);
  T55 = fun_each_fun_11;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooScolsSstepYeach_fun,T53);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLeachG),VARREF(YgooScolsSstepYeach_fun),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_29 = YPPsym((P)"<each-enum>");
  T57 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T56 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_29),T57);
  VARSET(YgooScolsSstepYLeach_enumG,T56);
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_12 = YPfab_met(FUNCODEREF(fun_Pdat_12),T58,LITREF(lit_12),LITREF(lit_30),sloc(47),YPfalse);
  T60 = VARREF_OR(YgooScolsSstepYPdat,YPfalse);
  T61 = fun_Pdat_12;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsSstepYPdat,T59);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSstepYLeach_enumG),VARREF(YgooScolsSstepYPdat),YPfalse,VARREF(YgooScolsSstepYLeachG),VARREF(YPprop_unbound_error));
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeachG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLeach_enumG),Ynil);
  fun_enum_13 = YPfab_met(FUNCODEREF(fun_enum_13),T62,LITREF(lit_19),LITREF(lit_31),sloc(48),YPfalse);
  T64 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T65 = fun_enum_13;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsScolYenum,T63);
  lit_32 = YPPlist(1,YPPsym((P)"e"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_14 = YPfab_met(FUNCODEREF(fun_finQ_14),T66,LITREF(lit_21),LITREF(lit_32),sloc(50),YPfalse);
  T68 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T69 = fun_finQ_14;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsScolYfinQ,T67);
  lit_33 = YPPlist(1,YPPsym((P)"e"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSstepYLeach_enumG),Ynil);
  fun_nxt_15 = YPfab_met(FUNCODEREF(fun_nxt_15),T70,LITREF(lit_23),LITREF(lit_33),sloc(51),YPfalse);
  T72 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T73 = fun_nxt_15;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooScolsScolYnxt,T71);
  lit_34 = YPPlist(1,YPPsym((P)"e"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSstepYLeach_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T75 = fun_now_16 = YPfab_met(FUNCODEREF(fun_now_16),T76,LITREF(lit_25),LITREF(lit_34),sloc(52),YPfalse);
  T79 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T80 = fun_now_16;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  T77 = VARSET(YgooScolsScolYnow,T78);
  T74 = T77;
  return T74;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSchr;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"find-setter", &module_info_gooSclass, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"first-then", CVAR, &YgooScolsSstepYfirst_then},
  {"step-then", CVAR, &YgooScolsSstepYstep_then},
  {"%first?-setter", CVAR, &YgooScolsSstepYPfirstQ_setter},
  {"%dat", CVAR, &YgooScolsSstepYPdat},
  {"<each-enum>", CVAR, &YgooScolsSstepYLeach_enumG},
  {"<step-enum>", CVAR, &YgooScolsSstepYLstep_enumG},
  {"%first?", CVAR, &YgooScolsSstepYPfirstQ},
  {"<each>", CVAR, &YgooScolsSstepYLeachG},
  {"step-first", CVAR, &YgooScolsSstepYstep_first},
  {"<step>", CVAR, &YgooScolsSstepYLstepG},
  {"---main-0---", PVAR, NULL},
  {"each-fun", CVAR, &YgooScolsSstepYeach_fun},
  {"each", CVAR, &YgooScolsSstepYeach},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"first-then", NULL},
  {"<each>", NULL},
  {"<step>", NULL},
  {"each", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstep;
MODULE_INFO module_info_gooScolsSstep = {
  "goo/cols/step",
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
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstep (void);

void load_module_gooScolsSstep (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsSstepY___main_0___();

}

/* END OF GENERATED CODE. */
