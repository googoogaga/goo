/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/packer");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/packer */

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
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
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
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooStypesYtQ,"goo/types","t?");
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
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
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
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
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
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
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
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooStypesYtA,"goo/types","t+");
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
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
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
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
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
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
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
EXT(YgooStypesYas,"goo/types","as");
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
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yunexec,"goo/boot","unexec");
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
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_72);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_36);
DEFLIT(lit_76);
DEFLIT(lit_12);
DEFLIT(lit_85);
DEFLIT(lit_35);
DEFLIT(lit_23);
DEFLIT(lit_39);
DEFLIT(lit_80);
DEFLIT(lit_49);
DEFLIT(lit_65);
DEFLIT(lit_61);
DEFLIT(lit_71);
DEFLIT(lit_6);
DEFLIT(lit_50);
DEFLIT(lit_33);
DEFLIT(lit_75);
DEFLIT(lit_38);
DEFLIT(lit_25);
DEFLIT(lit_57);
DEFLIT(lit_51);
DEFLIT(lit_34);
DEFLIT(lit_24);
DEFLIT(lit_69);
DEFLIT(lit_74);
DEFLIT(lit_81);
DEFLIT(lit_77);
DEFLIT(lit_59);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_63);
DEFLIT(lit_22);
DEFLIT(lit_40);
DEFLIT(lit_1);
DEFLIT(lit_52);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_29);
DEFLIT(lit_10);
DEFLIT(lit_62);
DEFLIT(lit_32);
DEFLIT(lit_83);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_20);
DEFLIT(lit_26);
DEFLIT(lit_44);
DEFLIT(lit_66);
DEFLIT(lit_2);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_58);
DEFLIT(lit_21);
DEFLIT(lit_64);
DEFLIT(lit_18);
DEFLIT(lit_15);
DEFLIT(lit_60);
DEFLIT(lit_68);
DEFLIT(lit_79);
DEFLIT(lit_28);
DEFLIT(lit_37);
DEFLIT(lit_84);
DEFLIT(lit_30);
DEFLIT(lit_67);
DEFLIT(lit_78);
DEFLIT(lit_70);
DEFLIT(lit_45);
DEFLIT(lit_43);
DEFLIT(lit_9);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_41);
DEFLIT(lit_31);
DEFLIT(lit_14);
DEFLIT(lit_82);
DEFLIT(lit_56);
DEFLIT(lit_17);
DEFLIT(lit_0);
DEFLIT(lit_47);
DEFLIT(lit_53);
DEFLIT(lit_55);

/* FUNCTIONS: */

LOCFOR(fun_packer_value_0);
LOCFOR(fun_packer_value_setter_1);
LOCFOR(fun_packer_adder_2);
LOCFOR(fun_packer_reser_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_packer_6);
LOCFOR(fun_packer_add_7);
LOCFOR(fun_packer_res_8);
LOCFOR(fun_9);
LOCFOR(fun_packer_fab_10);
LOCFOR(fun_11);
LOCFOR(fun_packer_fab_12);
LOCFOR(fun_x_1376_13);
LOCFOR(fun_x_1382_14);
LOCFOR(fun_15);
LOCFOR(fun_x_1379_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_1395_20);
LOCFOR(fun_x_1404_21);
LOCFOR(fun_22);
LOCFOR(fun_x_1401_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1398_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_1408_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_x_1412_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_x_1416_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_x_1420_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_x_1424_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
extern P YgooSpackerY___main_0___ ();
extern P YgooSpackerY___main_1___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_reser_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = fun_4;
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_6) {
  P init_,add_,res_;
  P T0;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_packer_add_7) {
  P a_,x_;
  P x_1366F3396;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
  x_1366F3396 = a_;
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL2(1,T2,x_,T1);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T0,x_1366F3396);
UNLINK_STACK();
  RET(x_1366F3396);
}

LOCCODEDEF(fun_packer_res_8) {
  P a_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_packer_fab_10) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = FUNFAB(fun_9,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_11) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

LOCCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = fun_11;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1376_13) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_31),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1382_14) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_15) {
  P return_;
  P x_1381F3410;
  P x_1381F3409;
  P x_1381F3408;
  P x_1381F3407;
  P x_1381F3406;
  P x_1381F3405;
  P x_1381F3404;
  P x_1381F3403;
  P x_1381F3402;
  P restF3401;
  P packF3400;
  P varF3399;
  P x_1381F3398;
  P x_1382F3397;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_1382_14,1);
  x_1382F3397 = T36;
  FUNINIT(x_1382F3397, 1,return_);
  x_1381F3398 = FREEREF(0);
  varF3399 = YPfalse;
  packF3400 = YPfalse;
  restF3401 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1381F3398,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3398,x_1382F3397);
    x_1381F3402 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1381F3402,x_1382F3397);
    varF3399 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1381F3402);
    x_1381F3403 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1381F3403,x_1382F3397);
    packF3400 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1381F3403);
    x_1381F3404 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3404,x_1382F3397);
    x_1381F3405 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3405,x_1382F3397);
    T11 = CALL1(1,VARREF(Ytail),x_1381F3404);
    x_1381F3406 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3406,x_1382F3397);
    T17 = CALL1(1,VARREF(Ytail),x_1381F3398);
    x_1381F3407 = T17;
    restF3401 = x_1381F3407;
    x_1381F3408 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1381F3408,x_1382F3397);
    x_1381F3409 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3409,x_1382F3397);
    T7 = CALL1(1,VARREF(Ytail),x_1381F3408);
    x_1381F3410 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1381F3410,x_1382F3397);
  } else {
    T18 = CALL2(1,x_1382F3397,LITREF(lit_32),x_1381F3398);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T26 = varF3399;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = packF3400;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T34 = restF3401;
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T35 = BOXGET(FREEREF(1));
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T35,LITREF(lit_41));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T29,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_x_1379_16) {
  P msg_,args_;
  P x_1380F3411;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1380F3411 = FREEREF(0);
  T2 = FUNFAB(fun_15,2,x_1380F3411,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_17) {
  P return_;
  P x_1378F3413;
  P x_1379F3412;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1379_16,3);
  x_1379F3412 = T6;
  FUNINIT(x_1379F3412, 3,FREEREF(0),FREEREF(1),return_);
  x_1378F3413 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1378F3413,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1378F3413,x_1379F3412);
  } else {
    T2 = CALL2(1,x_1379F3412,LITREF(lit_32),x_1378F3413);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_18) {
  P return_;
  P x_1377F3427;
  P x_1375F3426;
  P x_1375F3425;
  P x_1375F3424;
  P x_1375F3423;
  P x_1375F3422;
  P x_1375F3421;
  P x_1375F3420;
  P x_1375F3419;
  P x_1375F3418;
  P bodyF3417;
  P declsF3416;
  P x_1375F3415;
  P x_1376F3414;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1376_13,2);
  x_1376F3414 = T18;
  FUNINIT(x_1376F3414, 2,FREEREF(0),return_);
  x_1375F3415 = FREEREF(0);
  declsF3416 = YPfalse;
  bodyF3417 = YPfalse;
  bodyF3417 = BOXFAB(bodyF3417);
  T2 = CALL2(1,VARREF(YisaQ),x_1375F3415,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1375F3415,LITREF(lit_31),x_1376F3414);
    x_1375F3418 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1375F3418,x_1376F3414);
    x_1375F3419 = T11;
    declsF3416 = x_1375F3419;
    x_1375F3420 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1375F3420,x_1376F3414);
    x_1375F3421 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3421,x_1376F3414);
    T10 = CALL1(1,VARREF(Ytail),x_1375F3420);
    x_1375F3422 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3422,x_1376F3414);
    T12 = CALL1(1,VARREF(Ytail),x_1375F3418);
    x_1375F3423 = T12;
    BOXPUT(x_1375F3423,bodyF3417);
    x_1375F3424 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1375F3424,x_1376F3414);
    x_1375F3425 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3425,x_1376F3414);
    T6 = CALL1(1,VARREF(Ytail),x_1375F3424);
    x_1375F3426 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1375F3426,x_1376F3414);
  } else {
    T14 = CALL2(1,x_1376F3414,LITREF(lit_32),x_1375F3415);
  }
  T17 = declsF3416;
  x_1377F3427 = T17;
  T16 = FUNFAB(fun_17,2,x_1377F3427,bodyF3417);
  T15 = with_exit(T16);
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1395_20) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_47),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1404_21) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_22) {
  P return_;
  P x_1403F3435;
  P x_1403F3434;
  P x_1403F3433;
  P x_1403F3432;
  P restF3431;
  P nameF3430;
  P x_1403F3429;
  P x_1404F3428;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1404_21,1);
  x_1404F3428 = T21;
  FUNINIT(x_1404F3428, 1,return_);
  x_1403F3429 = FREEREF(0);
  nameF3430 = YPfalse;
  restF3431 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1403F3429,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1403F3429,x_1404F3428);
    nameF3430 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1403F3429);
    x_1403F3432 = T8;
    restF3431 = x_1403F3432;
    x_1403F3433 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1403F3433,x_1404F3428);
    x_1403F3434 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1403F3434,x_1404F3428);
    T6 = CALL1(1,VARREF(Ytail),x_1403F3433);
    x_1403F3435 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1403F3435,x_1404F3428);
  } else {
    T9 = CALL2(1,x_1404F3428,LITREF(lit_32),x_1403F3429);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T17 = nameF3430;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T18,LITREF(lit_41));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T19 = restF3431;
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T19,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = BOXGET(FREEREF(1));
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T20,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_x_1401_23) {
  P msg_,args_;
  P x_1402F3436;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1402F3436 = FREEREF(0);
  T2 = FUNFAB(fun_22,2,x_1402F3436,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P return_;
  P x_1400F3450;
  P x_1400F3449;
  P x_1400F3448;
  P x_1400F3447;
  P x_1400F3446;
  P x_1400F3445;
  P x_1400F3444;
  P x_1400F3443;
  P x_1400F3442;
  P restF3441;
  P typeF3440;
  P nameF3439;
  P x_1400F3438;
  P x_1401F3437;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_1401_23,3);
  x_1401F3437 = T39;
  FUNINIT(x_1401F3437, 3,FREEREF(0),FREEREF(1),return_);
  x_1400F3438 = FREEREF(0);
  nameF3439 = YPfalse;
  typeF3440 = YPfalse;
  restF3441 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1400F3438,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3438,x_1401F3437);
    x_1400F3442 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1400F3442,x_1401F3437);
    nameF3439 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1400F3442);
    x_1400F3443 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1400F3443,x_1401F3437);
    typeF3440 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1400F3443);
    x_1400F3444 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3444,x_1401F3437);
    x_1400F3445 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3445,x_1401F3437);
    T11 = CALL1(1,VARREF(Ytail),x_1400F3444);
    x_1400F3446 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3446,x_1401F3437);
    T17 = CALL1(1,VARREF(Ytail),x_1400F3438);
    x_1400F3447 = T17;
    restF3441 = x_1400F3447;
    x_1400F3448 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1400F3448,x_1401F3437);
    x_1400F3449 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3449,x_1401F3437);
    T7 = CALL1(1,VARREF(Ytail),x_1400F3448);
    x_1400F3450 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1400F3450,x_1401F3437);
  } else {
    T18 = CALL2(1,x_1401F3437,LITREF(lit_32),x_1400F3438);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T26 = nameF3439;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T31 = typeF3440;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_41));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T37 = restF3441;
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_41));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = BOXGET(FREEREF(1));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T38,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T32,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

LOCCODEDEF(fun_x_1398_25) {
  P msg_,args_;
  P x_1399F3451;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1399F3451 = FREEREF(0);
  T2 = FUNFAB(fun_24,2,x_1399F3451,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_26) {
  P return_;
  P x_1397F3453;
  P x_1398F3452;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_1398_25,3);
  x_1398F3452 = T6;
  FUNINIT(x_1398F3452, 3,FREEREF(0),FREEREF(1),return_);
  x_1397F3453 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_1397F3453,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1397F3453,x_1398F3452);
  } else {
    T2 = CALL2(1,x_1398F3452,LITREF(lit_32),x_1397F3453);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

LOCCODEDEF(fun_27) {
  P return_;
  P x_1396F3467;
  P x_1394F3466;
  P x_1394F3465;
  P x_1394F3464;
  P x_1394F3463;
  P x_1394F3462;
  P x_1394F3461;
  P x_1394F3460;
  P x_1394F3459;
  P x_1394F3458;
  P bodyF3457;
  P varsF3456;
  P x_1394F3455;
  P x_1395F3454;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_1395_20,2);
  x_1395F3454 = T18;
  FUNINIT(x_1395F3454, 2,FREEREF(0),return_);
  x_1394F3455 = FREEREF(0);
  varsF3456 = YPfalse;
  bodyF3457 = YPfalse;
  bodyF3457 = BOXFAB(bodyF3457);
  T2 = CALL2(1,VARREF(YisaQ),x_1394F3455,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1394F3455,LITREF(lit_47),x_1395F3454);
    x_1394F3458 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1394F3458,x_1395F3454);
    x_1394F3459 = T11;
    varsF3456 = x_1394F3459;
    x_1394F3460 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1394F3460,x_1395F3454);
    x_1394F3461 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3461,x_1395F3454);
    T10 = CALL1(1,VARREF(Ytail),x_1394F3460);
    x_1394F3462 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3462,x_1395F3454);
    T12 = CALL1(1,VARREF(Ytail),x_1394F3458);
    x_1394F3463 = T12;
    BOXPUT(x_1394F3463,bodyF3457);
    x_1394F3464 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1394F3464,x_1395F3454);
    x_1394F3465 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3465,x_1395F3454);
    T6 = CALL1(1,VARREF(Ytail),x_1394F3464);
    x_1394F3466 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1394F3466,x_1395F3454);
  } else {
    T14 = CALL2(1,x_1395F3454,LITREF(lit_32),x_1394F3455);
  }
  T17 = varsF3456;
  x_1396F3467 = T17;
  T16 = FUNFAB(fun_26,2,x_1396F3467,bodyF3457);
  T15 = with_exit(T16);
UNLINK_STACK();
  QRET(T15);
}

LOCCODEDEF(fun_28) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1408_29) {
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

LOCCODEDEF(fun_30) {
  P return_;
  P x_1407F3474;
  P x_1407F3473;
  P x_1407F3472;
  P x_1407F3471;
  P bodyF3470;
  P x_1407F3469;
  P x_1408F3468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1408_29,2);
  x_1408F3468 = T24;
  FUNINIT(x_1408F3468, 2,FREEREF(0),return_);
  x_1407F3469 = FREEREF(0);
  bodyF3470 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1407F3469,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1407F3469,LITREF(lit_62),x_1408F3468);
    x_1407F3471 = T6;
    bodyF3470 = x_1407F3471;
    x_1407F3472 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1407F3472,x_1408F3468);
    x_1407F3473 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1407F3473,x_1408F3468);
    T5 = CALL1(1,VARREF(Ytail),x_1407F3472);
    x_1407F3474 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1407F3474,x_1408F3468);
  } else {
    T7 = CALL2(1,x_1408F3468,LITREF(lit_32),x_1407F3469);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_41));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T19 = bodyF3470;
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_41));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_41));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T16,LITREF(lit_41));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_31) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_30,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1412_32) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P return_;
  P x_1411F3483;
  P x_1411F3482;
  P x_1411F3481;
  P x_1411F3480;
  P x_1411F3479;
  P bodyF3478;
  P typeF3477;
  P x_1411F3476;
  P x_1412F3475;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_1412_32,2);
  x_1412F3475 = T28;
  FUNINIT(x_1412F3475, 2,FREEREF(0),return_);
  x_1411F3476 = FREEREF(0);
  typeF3477 = YPfalse;
  bodyF3478 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1411F3476,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1411F3476,LITREF(lit_69),x_1412F3475);
    x_1411F3479 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1411F3479,x_1412F3475);
    typeF3477 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1411F3479);
    x_1411F3480 = T8;
    bodyF3478 = x_1411F3480;
    x_1411F3481 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1411F3481,x_1412F3475);
    x_1411F3482 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1411F3482,x_1412F3475);
    T6 = CALL1(1,VARREF(Ytail),x_1411F3481);
    x_1411F3483 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1411F3483,x_1412F3475);
  } else {
    T10 = CALL2(1,x_1412F3475,LITREF(lit_32),x_1411F3476);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T19 = typeF3477;
  T18 = CALL1(1,VARREF(Ylst),T19);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,LITREF(lit_41));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_41));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T23 = bodyF3478;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T27,LITREF(lit_41));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL4(1,VARREF(YgooSmacrosYcat),T22,T23,T24,LITREF(lit_41));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T20,LITREF(lit_41));
UNLINK_STACK();
  QRET(T11);
}

LOCCODEDEF(fun_34) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_33,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1416_35) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_74),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_36) {
  P return_;
  P x_1415F3492;
  P x_1415F3491;
  P x_1415F3490;
  P x_1415F3489;
  P x_1415F3488;
  P valueF3487;
  P packF3486;
  P x_1415F3485;
  P x_1416F3484;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_1416_35,2);
  x_1416F3484 = T23;
  FUNINIT(x_1416F3484, 2,FREEREF(0),return_);
  x_1415F3485 = FREEREF(0);
  packF3486 = YPfalse;
  valueF3487 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1415F3485,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1415F3485,LITREF(lit_74),x_1416F3484);
    x_1415F3488 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1415F3488,x_1416F3484);
    packF3486 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1415F3488);
    x_1415F3489 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1415F3489,x_1416F3484);
    valueF3487 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1415F3489);
    x_1415F3490 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1415F3490,x_1416F3484);
    x_1415F3491 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1415F3491,x_1416F3484);
    T6 = CALL1(1,VARREF(Ytail),x_1415F3490);
    x_1415F3492 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1415F3492,x_1416F3484);
  } else {
    T12 = CALL2(1,x_1416F3484,LITREF(lit_32),x_1415F3485);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T16 = packF3486;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T22 = valueF3487;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_41));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_41));
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_37) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_36,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1420_38) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_81),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_39) {
  P return_;
  P x_1419F3499;
  P x_1419F3498;
  P x_1419F3497;
  P x_1419F3496;
  P valueF3495;
  P x_1419F3494;
  P x_1420F3493;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T15 = FUNSHELL(0,fun_x_1420_38,2);
  x_1420F3493 = T15;
  FUNINIT(x_1420F3493, 2,FREEREF(0),return_);
  x_1419F3494 = FREEREF(0);
  valueF3495 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1419F3494,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1419F3494,LITREF(lit_81),x_1420F3493);
    x_1419F3496 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1419F3496,x_1420F3493);
    valueF3495 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1419F3496);
    x_1419F3497 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1419F3497,x_1420F3493);
    x_1419F3498 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1419F3498,x_1420F3493);
    T5 = CALL1(1,VARREF(Ytail),x_1419F3497);
    x_1419F3499 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1419F3499,x_1420F3493);
  } else {
    T9 = CALL2(1,x_1420F3493,LITREF(lit_32),x_1419F3494);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T14 = valueF3495;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_40) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_39,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1424_41) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_64),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_42) {
  P return_;
  P x_1423F3506;
  P x_1423F3505;
  P x_1423F3504;
  P x_1423F3503;
  P nameF3502;
  P x_1423F3501;
  P x_1424F3500;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_1424_41,2);
  x_1424F3500 = T14;
  FUNINIT(x_1424F3500, 2,FREEREF(0),return_);
  x_1423F3501 = FREEREF(0);
  nameF3502 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_1423F3501,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1423F3501,LITREF(lit_64),x_1424F3500);
    x_1423F3503 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1423F3503,x_1424F3500);
    nameF3502 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1423F3503);
    x_1423F3504 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1423F3504,x_1424F3500);
    x_1423F3505 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1423F3505,x_1424F3500);
    T5 = CALL1(1,VARREF(Ytail),x_1423F3504);
    x_1423F3506 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1423F3506,x_1424F3500);
  } else {
    T9 = CALL2(1,x_1424F3500,LITREF(lit_32),x_1423F3501);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T13 = nameF3502;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSpackerY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81;
DEFCREGS();
  lit_0 = YPPsym((P)"<packer>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSpackerYLpackerG,T0);
  lit_1 = YPPsym((P)"packer");
  lit_2 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLpackerG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooSpackerYpacker,T2);
  lit_3 = YPPsym((P)"packer-fab");
  lit_4 = YPPlist(1,YPPsym((P)"t"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_3),LITREF(lit_4),YPfalse);
  VARSET(YgooSpackerYpacker_fab,T4);
  lit_5 = YPPsym((P)"packer-add");
  lit_6 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YgooSpackerYLpackerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLpackerG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_5),LITREF(lit_6),YPfalse);
  VARSET(YgooSpackerYpacker_add,T6);
  lit_7 = YPPsym((P)"packer-res");
  lit_8 = YPPlist(1,YPPsym((P)"a"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLpackerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_7),LITREF(lit_8),YPfalse);
  VARSET(YgooSpackerYpacker_res,T8);
  lit_9 = YPPsym((P)"<sim-packer>");
  T11 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSpackerYLpackerG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T11);
  VARSET(YgooSpackerYLsim_packerG,T10);
  lit_10 = YPPsym((P)"packer-value");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_value_0 = YPfab_met(FUNCODEREF(fun_packer_value_0),T12,LITREF(lit_10),LITREF(lit_11),sloc(21),YPfalse);
  T14 = VARREF_OR(YgooSpackerYpacker_value,YPfalse);
  T15 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_12 = YPPsym((P)"packer-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPfab_met(FUNCODEREF(fun_packer_value_setter_1),T16,LITREF(lit_12),LITREF(lit_13),sloc(21),YPfalse);
  T18 = VARREF_OR(YgooSpackerYpacker_value_setter,YPfalse);
  T19 = fun_packer_value_setter_1;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSpackerYpacker_value_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"packer-adder");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPfab_met(FUNCODEREF(fun_packer_adder_2),T20,LITREF(lit_14),LITREF(lit_15),sloc(22),YPfalse);
  T22 = VARREF_OR(YgooSpackerYpacker_adder,YPfalse);
  T23 = fun_packer_adder_2;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSpackerYpacker_adder,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"packer-reser");
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_3 = YPfab_met(FUNCODEREF(fun_packer_reser_3),T24,LITREF(lit_16),LITREF(lit_17),sloc(23),YPfalse);
  T26 = VARREF_OR(YgooSpackerYpacker_reser,YPfalse);
  T27 = fun_packer_reser_3;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSpackerYpacker_reser,T25);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T29,YPfalse,LITREF(lit_19),sloc(23),YPfalse);
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T28,YPfalse,LITREF(lit_18),sloc(23),YPfalse);
  T30 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),YPfalse,VARREF(YLfunG),T30);
  lit_20 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T31 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_6 = YPfab_met(FUNCODEREF(fun_packer_6),T31,LITREF(lit_1),LITREF(lit_20),sloc(25),YPfalse);
  T33 = VARREF_OR(YgooSpackerYpacker,YPfalse);
  T34 = fun_packer_6;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSpackerYpacker,T32);
  lit_21 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_7 = YPfab_met(FUNCODEREF(fun_packer_add_7),T35,LITREF(lit_5),LITREF(lit_21),sloc(28),YPfalse);
  T37 = VARREF_OR(YgooSpackerYpacker_add,YPfalse);
  T38 = fun_packer_add_7;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSpackerYpacker_add,T36);
  lit_22 = YPPlist(1,YPPsym((P)"a"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_8 = YPfab_met(FUNCODEREF(fun_packer_res_8),T39,LITREF(lit_7),LITREF(lit_22),sloc(30),YPfalse);
  T41 = VARREF_OR(YgooSpackerYpacker_res,YPfalse);
  T42 = fun_packer_res_8;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSpackerYpacker_res,T40);
  lit_23 = YPPlist(1,YPPsym((P)"t"));
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T45,YPfalse,LITREF(lit_24),sloc(34),YPfalse);
  T44 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T43 = YPfab_sig(YPPlist(1,T44),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_10 = YPfab_met(FUNCODEREF(fun_packer_fab_10),T43,LITREF(lit_3),LITREF(lit_23),sloc(33),YPfalse);
  T47 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T48 = fun_packer_fab_10;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSpackerYpacker_fab,T46);
  lit_25 = YPPlist(1,YPPsym((P)"t"));
  lit_26 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T51,YPfalse,LITREF(lit_26),sloc(37),YPfalse);
  T50 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T49 = YPfab_sig(YPPlist(1,T50),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPfab_met(FUNCODEREF(fun_packer_fab_12),T49,LITREF(lit_3),LITREF(lit_25),sloc(36),YPfalse);
  T53 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T54 = fun_packer_fab_12;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSpackerYpacker_fab,T52);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-1376");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"packing-with");
  lit_32 = YPsb((P)"Match Pattern Failure");
  lit_33 = YPPlist(1,YPPsym((P)"return"));
  lit_34 = YPPsym((P)"x-1379");
  lit_35 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_36 = YPPlist(1,YPPsym((P)"return"));
  lit_37 = YPPsym((P)"x-1382");
  lit_38 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_39 = YPsb((P)"failed to match.");
  lit_40 = YPPsym((P)"let");
  lit_41 = Ynil;
  lit_42 = YPPsym((P)"seq");
  T61 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1376_13 = YPfab_met(FUNCODEREF(fun_x_1376_13),T61,LITREF(lit_29),LITREF(lit_30),YPfalse,YPfalse);
  T60 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1382_14 = YPfab_met(FUNCODEREF(fun_x_1382_14),T60,LITREF(lit_37),LITREF(lit_38),YPfalse,YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPfab_met(FUNCODEREF(fun_15),T59,YPfalse,LITREF(lit_36),YPfalse,YPfalse);
  T58 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1379_16 = YPfab_met(FUNCODEREF(fun_x_1379_16),T58,LITREF(lit_34),LITREF(lit_35),YPfalse,YPfalse);
  T57 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPfab_met(FUNCODEREF(fun_17),T57,YPfalse,LITREF(lit_33),YPfalse,YPfalse);
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPfab_met(FUNCODEREF(fun_18),T56,YPfalse,LITREF(lit_28),YPfalse,YPfalse);
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T55,YPfalse,LITREF(lit_27),YPfalse,YPfalse);
  T62 = fun_19;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T62);
  lit_43 = YPPlist(1,YPPsym((P)"exp"));
  lit_44 = YPPlist(1,YPPsym((P)"return"));
  lit_45 = YPPsym((P)"x-1395");
  lit_46 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_47 = YPPsym((P)"packing-in");
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1398");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-1401");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPlist(1,YPPsym((P)"return"));
  lit_55 = YPPsym((P)"x-1404");
  lit_56 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_57 = YPPsym((P)"<lst>");
  T71 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1395_20 = YPfab_met(FUNCODEREF(fun_x_1395_20),T71,LITREF(lit_45),LITREF(lit_46),YPfalse,YPfalse);
  T70 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1404_21 = YPfab_met(FUNCODEREF(fun_x_1404_21),T70,LITREF(lit_55),LITREF(lit_56),YPfalse,YPfalse);
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPfab_met(FUNCODEREF(fun_22),T69,YPfalse,LITREF(lit_54),YPfalse,YPfalse);
  T68 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1401_23 = YPfab_met(FUNCODEREF(fun_x_1401_23),T68,LITREF(lit_52),LITREF(lit_53),YPfalse,YPfalse);
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T67,YPfalse,LITREF(lit_51),YPfalse,YPfalse);
  T66 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1398_25 = YPfab_met(FUNCODEREF(fun_x_1398_25),T66,LITREF(lit_49),LITREF(lit_50),YPfalse,YPfalse);
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T65,YPfalse,LITREF(lit_48),YPfalse,YPfalse);
  T64 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T64,YPfalse,LITREF(lit_44),YPfalse,YPfalse);
  T63 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T63,YPfalse,LITREF(lit_43),YPfalse,YPfalse);
  T72 = fun_28;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T72);
  lit_58 = YPPlist(1,YPPsym((P)"exp"));
  lit_59 = YPPlist(1,YPPsym((P)"return"));
  lit_60 = YPPsym((P)"x-1408");
  lit_61 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_62 = YPPsym((P)"packing");
  lit_63 = YPPsym((P)"packer-");
  lit_64 = YPPsym((P)"packed");
  T79 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T78 = fun_x_1408_29 = YPfab_met(FUNCODEREF(fun_x_1408_29),T79,LITREF(lit_60),LITREF(lit_61),YPfalse,YPfalse);
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T76 = fun_30 = YPfab_met(FUNCODEREF(fun_30),T77,YPfalse,LITREF(lit_59),YPfalse,YPfalse);
  T75 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T74 = fun_31 = YPfab_met(FUNCODEREF(fun_31),T75,YPfalse,LITREF(lit_58),YPfalse,YPfalse);
  T81 = fun_31;
  T80 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T81);
  T73 = T80;
  return T73;
}

P YgooSpackerY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
DEFCREGS();
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-1412");
  lit_68 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_69 = YPPsym((P)"packing-as");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1412_32 = YPfab_met(FUNCODEREF(fun_x_1412_32),T2,LITREF(lit_67),LITREF(lit_68),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T1,YPfalse,LITREF(lit_66),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T0,YPfalse,LITREF(lit_65),YPfalse,YPfalse);
  T3 = fun_34;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-as"),T3);
  lit_70 = YPPlist(1,YPPsym((P)"exp"));
  lit_71 = YPPlist(1,YPPsym((P)"return"));
  lit_72 = YPPsym((P)"x-1416");
  lit_73 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_74 = YPPsym((P)"pack-in");
  lit_75 = YPPsym((P)"opf");
  lit_76 = YPPsym((P)"_");
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1416_35 = YPfab_met(FUNCODEREF(fun_x_1416_35),T6,LITREF(lit_72),LITREF(lit_73),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPfab_met(FUNCODEREF(fun_36),T5,YPfalse,LITREF(lit_71),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T4,YPfalse,LITREF(lit_70),YPfalse,YPfalse);
  T7 = fun_37;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T7);
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-1420");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_81 = YPPsym((P)"pack");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1420_38 = YPfab_met(FUNCODEREF(fun_x_1420_38),T10,LITREF(lit_79),LITREF(lit_80),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPfab_met(FUNCODEREF(fun_39),T9,YPfalse,LITREF(lit_78),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T8,YPfalse,LITREF(lit_77),YPfalse,YPfalse);
  T11 = fun_40;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T11);
  lit_82 = YPPlist(1,YPPsym((P)"exp"));
  lit_83 = YPPlist(1,YPPsym((P)"return"));
  lit_84 = YPPsym((P)"x-1424");
  lit_85 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T17 = fun_x_1424_41 = YPfab_met(FUNCODEREF(fun_x_1424_41),T18,LITREF(lit_84),LITREF(lit_85),YPfalse,YPfalse);
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T15 = fun_42 = YPfab_met(FUNCODEREF(fun_42),T16,YPfalse,LITREF(lit_83),YPfalse,YPfalse);
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T13 = fun_43 = YPfab_met(FUNCODEREF(fun_43),T14,YPfalse,LITREF(lit_82),YPfalse,YPfalse);
  T20 = fun_43;
  T19 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T20);
  T12 = T19;
  return T12;
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
  {"t?", &module_info_gooStypes, NULL},
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
  {"t<", &module_info_gooStypes, NULL},
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
  {"t=", &module_info_gooStypes, NULL},
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
  {"t+", &module_info_gooStypes, NULL},
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
  {"$bot", &module_info_gooStypes, NULL},
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
  {"split", &module_info_gooScolsSseq, NULL},
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
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
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
  {"as", &module_info_gooStypes, NULL},
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
  {"<bot>", &module_info_gooStypes, NULL},
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
  {"packed", PVAR, NULL},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"pack", PVAR, NULL},
  {"packing-with", PVAR, NULL},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packing", PVAR, NULL},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"packer", CVAR, &YgooSpackerYpacker},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"pack-in", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"packing-as", PVAR, NULL},
  {"packing-in", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packed", NULL},
  {"packing-with", NULL},
  {"packing", NULL},
  {"packer-res", NULL},
  {"packer-add", NULL},
  {"packer-fab", NULL},
  {"pack", NULL},
  {"packer", NULL},
  {"pack-in", NULL},
  {"packing-in", NULL},
  {"<packer>", NULL},
  {"packing-as", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSpacker;
MODULE_INFO module_info_gooSpacker = {
  "goo/packer",
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

extern void load_module_gooSpacker (void);

void load_module_gooSpacker (void) {
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

  (P)YgooSpackerY___main_0___();
  (P)YgooSpackerY___main_1___();

}

/* END OF GENERATED CODE. */
