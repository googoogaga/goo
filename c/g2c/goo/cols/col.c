/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/col");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(Yclass_children,"goo/boot","class-children");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYK,"goo/math","|");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YOrev,"goo/boot","@rev");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ylst,"goo/boot","lst");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YOnew,"goo/boot","@new");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ybox_value,"goo/boot","box-value");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YOfold,"goo/boot","@fold");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSlogYE,"goo/log","=");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLclassG,"goo/boot","<class>");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yclass_row,"goo/boot","class-row");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
DEF(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yhead,"goo/boot","head");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yerror,"goo/boot","error");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YPfalse,"goo/boot","%false");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOlit,"goo/boot","@lit");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmacrosYpair,"goo/macros","pair");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_55);
DEFLIT(lit_74);
DEFLIT(lit_78);
DEFLIT(lit_67);
DEFLIT(lit_90);
DEFLIT(lit_24);
DEFLIT(lit_53);
DEFLIT(lit_115);
DEFLIT(lit_103);
DEFLIT(lit_17);
DEFLIT(lit_106);
DEFLIT(lit_93);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_62);
DEFLIT(lit_58);
DEFLIT(lit_108);
DEFLIT(lit_47);
DEFLIT(lit_61);
DEFLIT(lit_11);
DEFLIT(lit_32);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_4);
DEFLIT(lit_57);
DEFLIT(lit_12);
DEFLIT(lit_77);
DEFLIT(lit_35);
DEFLIT(lit_50);
DEFLIT(lit_102);
DEFLIT(lit_112);
DEFLIT(lit_43);
DEFLIT(lit_25);
DEFLIT(lit_59);
DEFLIT(lit_91);
DEFLIT(lit_36);
DEFLIT(lit_22);
DEFLIT(lit_104);
DEFLIT(lit_49);
DEFLIT(lit_40);
DEFLIT(lit_97);
DEFLIT(lit_99);
DEFLIT(lit_5);
DEFLIT(lit_44);
DEFLIT(lit_117);
DEFLIT(lit_16);
DEFLIT(lit_81);
DEFLIT(lit_63);
DEFLIT(lit_85);
DEFLIT(lit_51);
DEFLIT(lit_56);
DEFLIT(lit_39);
DEFLIT(lit_70);
DEFLIT(lit_107);
DEFLIT(lit_60);
DEFLIT(lit_116);
DEFLIT(lit_101);
DEFLIT(lit_27);
DEFLIT(lit_88);
DEFLIT(lit_64);
DEFLIT(lit_71);
DEFLIT(lit_123);
DEFLIT(lit_92);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_41);
DEFLIT(lit_69);
DEFLIT(lit_109);
DEFLIT(lit_26);
DEFLIT(lit_31);
DEFLIT(lit_30);
DEFLIT(lit_72);
DEFLIT(lit_86);
DEFLIT(lit_68);
DEFLIT(lit_2);
DEFLIT(lit_29);
DEFLIT(lit_75);
DEFLIT(lit_66);
DEFLIT(lit_65);
DEFLIT(lit_48);
DEFLIT(lit_114);
DEFLIT(lit_111);
DEFLIT(lit_87);
DEFLIT(lit_94);
DEFLIT(lit_80);
DEFLIT(lit_82);
DEFLIT(lit_118);
DEFLIT(lit_37);
DEFLIT(lit_96);
DEFLIT(lit_121);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_45);
DEFLIT(lit_38);
DEFLIT(lit_8);
DEFLIT(lit_42);
DEFLIT(lit_9);
DEFLIT(lit_52);
DEFLIT(lit_79);
DEFLIT(lit_3);
DEFLIT(lit_100);
DEFLIT(lit_122);
DEFLIT(lit_84);
DEFLIT(lit_124);
DEFLIT(lit_105);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_119);
DEFLIT(lit_113);
DEFLIT(lit_76);
DEFLIT(lit_54);
DEFLIT(lit_0);
DEFLIT(lit_83);
DEFLIT(lit_110);
DEFLIT(lit_73);
DEFLIT(lit_14);
DEFLIT(lit_95);
DEFLIT(lit_120);
DEFLIT(lit_46);
DEFLIT(lit_89);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_21);
DEFLIT(lit_98);
DEFLIT(lit_28);

/* FUNCTIONS: */

LOCFOR(fun_enum_0);
LOCFOR(fun_as_1);
LOCFOR(fun_dup_2);
LOCFOR(fun_dup_3);
LOCFOR(fun_len_4);
LOCFOR(fun_elt_type_5);
LOCFOR(fun_key_type_6);
LOCFOR(fun_key_test_7);
LOCFOR(fun_nulQ_8);
LOCFOR(fun_nul_9);
LOCFOR(fun_elt_default_10);
LOCFOR(fun_fab_into_11);
LOCFOR(fun_fabs_12);
LOCFOR(fun_fab_fillX_13);
LOCFOR(fun_fill_14);
LOCFOR(fun_anyQ_15);
LOCFOR(fun_allQ_16);
LOCFOR(fun_fold_17);
LOCFOR(fun_foldA_18);
LOCFOR(fun_find_or_19);
LOCFOR(fun_find_20);
LOCFOR(fun_zap_21);
LOCFOR(fun_do_22);
LOCFOR(fun_map_23);
LOCFOR(fun_do_keyed_24);
LOCFOR(fun_map_keyed_25);
LOCFOR(fun_keys_26);
LOCFOR(fun_items_27);
LOCFOR(fun_28);
LOCFOR(fun_memQ_29);
LOCFOR(fun_col_res_type_30);
LOCFOR(fun_col_res_31);
LOCFOR(fun_E_32);
LOCFOR(fun_elt_33);
extern P YgooScolsScolY___main_0___ ();
extern P YgooScolsScolY___main_1___ ();
extern P YgooScolsScolY___main_2___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_enum_0) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_as_1) {
  P t_,x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,t_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T5);
    T3 = CALL2(1,VARREF(YgooScolsScolYfab_into),T4,x_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_dup_2) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),T2,T3);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_dup_3) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_len_4) {
  P x_;
  P iF2960;
  P eF2959;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF2959 = T5;
  iF2960 = YPint((P)0);
  LOOP_53: {
    P a53_0,a53_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2959);
    if (T1 != YPfalse) {
      T0 = iF2960;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2959);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF2960,YPint((P)1));
      a53_0 = T3;
      a53_1 = T4;
      eF2959 = a53_0;
      iF2960 = a53_1;
      goto LOOP_53;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_type_5) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_key_type_6) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_key_test_7) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

LOCCODEDEF(fun_nulQ_8) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nul_9) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_default_10) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_fab_into_11) {
  P dst_,src_;
  P ssF2961;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  ssF2961 = T6;
  LOOP_54: {
    P a54_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ssF2961);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow),ssF2961);
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ssF2961);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,dst_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ssF2961);
      a54_0 = T5;
      ssF2961 = a54_0;
      goto LOOP_54;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fabs_12) {
  P c_,objects_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),c_,T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,objects_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_fillX_13) {
  P dst_,src_;
  P dsF2962;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dsF2962 = T5;
  LOOP_55: {
    P a55_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),dsF2962);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow_key),dsF2962);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),src_,dst_,T2);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),dsF2962);
      a55_0 = T4;
      dsF2962 = a55_0;
      goto LOOP_55;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fill_14) {
  P dst_,val_;
  P T0,T1;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),dst_);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_fillX),T1,val_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_anyQ_15) {
  P test_,c_;
  P tmpF2964;
  P eF2963;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2963 = T8;
  LOOP_56: {
    P a56_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2963);
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2963);
      T6 = CALL1(0,test_,T7);
      T5 = CALL1(1,VARREF(YgooSlogYas_log),T6);
      tmpF2964 = T5;
      if (tmpF2964 != YPfalse) {
        T2 = tmpF2964;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2963);
        a56_0 = T4;
        eF2963 = a56_0;
        goto LOOP_56;
        T2 = T3;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_allQ_16) {
  P test_,c_;
  P tmpF2966;
  P eF2965;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2965 = T7;
  LOOP_57: {
    P a57_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2965);
    tmpF2966 = T6;
    if (tmpF2966 != YPfalse) {
      T0 = tmpF2966;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF2965);
      T2 = CALL1(0,test_,T3);
      if (T2 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2965);
        a57_0 = T5;
        eF2965 = a57_0;
        goto LOOP_57;
        T1 = T4;
      } else {
        T1 = YPfalse;
      }
      T0 = T1;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fold_17) {
  P combine_,init_,c_;
  P eF2968;
  P resF2967;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF2967 = init_;
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2968 = T6;
  LOOP_58: {
    P a58_0,a58_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2968);
    if (T1 != YPfalse) {
      T0 = resF2967;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2968);
      T3 = CALL2(0,combine_,resF2967,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2968);
      a58_0 = T3;
      a58_1 = T5;
      resF2967 = a58_0;
      eF2968 = a58_1;
      goto LOOP_58;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_foldA_18) {
  P combine_,c_;
  P eF2972;
  P resF2971;
  P initF2970;
  P eF2969;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2969 = T8;
  T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2969);
  initF2970 = T7;
  resF2971 = initF2970;
  T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2969);
  eF2972 = T6;
  LOOP_59: {
    P a59_0,a59_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2972);
    if (T1 != YPfalse) {
      T0 = resF2971;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2972);
      T3 = CALL2(0,combine_,resF2971,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2972);
      a59_0 = T3;
      a59_1 = T5;
      resF2971 = a59_0;
      eF2972 = a59_1;
      goto LOOP_59;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_or_19) {
  P f_,c_,default_;
  P eF2973;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2973 = T8;
  LOOP_60: {
    P a60_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2973);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2973);
      T3 = CALL1(0,f_,T4);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2973);
        T2 = T5;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2973);
        a60_0 = T7;
        eF2973 = a60_0;
        goto LOOP_60;
        T2 = T6;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_20) {
  P f_,c_;
  P valF2974;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF2974 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF2974,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T0 = T2;
  } else {
    T0 = valF2974;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_zap_21) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(YgooScolsScolYnul),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_22) {
  P f_,c_;
  P eF2975;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2975 = T6;
  LOOP_61: {
    P a61_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2975);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF2975);
      CALL1(0,f_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2975);
      a61_0 = T5;
      eF2975 = a61_0;
      goto LOOP_61;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_23) {
  P f_,c_;
  P eF2977;
  P resF2976;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF2976 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2977 = T9;
  LOOP_62: {
    P a62_0,a62_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2977);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF2976);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2977);
      T3 = CALL1(1,f_,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2977);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF2976,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2977);
      a62_0 = resF2976;
      a62_1 = T7;
      resF2976 = a62_0;
      eF2977 = a62_1;
      goto LOOP_62;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_keyed_24) {
  P f_,c_;
  P eF2978;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2978 = T7;
  LOOP_63: {
    P a63_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2978);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2978);
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2978);
      CALL2(1,f_,T3,T4);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2978);
      a63_0 = T6;
      eF2978 = a63_0;
      goto LOOP_63;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_keyed_25) {
  P f_,c_;
  P keyF2981;
  P eF2980;
  P resF2979;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF2979 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2980 = T9;
  LOOP_64: {
    P a64_0,a64_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2980);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF2979);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2980);
      keyF2981 = T7;
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2980);
      T3 = CALL2(0,f_,keyF2981,T4);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF2979,keyF2981);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2980);
      a64_0 = resF2979;
      a64_1 = T6;
      resF2979 = a64_0;
      eF2980 = a64_1;
      goto LOOP_64;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_keys_26) {
  P c_;
  P eF2983;
  P resF2982;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  resF2982 = Ynil;
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2983 = T7;
  LOOP_65: {
    P a65_0,a65_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2983);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2982);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2983);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF2982,T5);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2983);
      a65_0 = T4;
      a65_1 = T6;
      resF2982 = a65_0;
      eF2983 = a65_1;
      goto LOOP_65;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_items_27) {
  P c_;
  P eF2985;
  P resF2984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  resF2984 = Ynil;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2985 = T9;
  LOOP_66: {
    P a66_0,a66_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2985);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2984);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2985);
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2985);
      T5 = CALL2(1,VARREF(Ytup),T6,T7);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF2984,T5);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2985);
      a66_0 = T4;
      a66_1 = T8;
      resF2984 = a66_0;
      eF2985 = a66_1;
      goto LOOP_66;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_28) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_memQ_29) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_28,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_res_type_30) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_res_31) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYcol_res_type),c_);
  T0 = CALL2(1,VARREF(YgooStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_E_32) {
  P c1_,c2_;
  P e1F2986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSlogYE),T2,T3);
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    e1F2986 = T13;
    LOOP_67: {
      P a67_0;
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F2986);
      if (T5 != YPfalse) {
        T4 = YPtrue;
      } else {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),e1F2986);
        T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),e1F2986);
        T9 = CALL3(1,VARREF(YgooScolsScolYelt_or),c2_,T10,VARREF(YgooScolsScolYDeq_nul));
        T7 = CALL2(1,VARREF(YgooSlogYE),T8,T9);
        if (T7 != YPfalse) {
          T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F2986);
          a67_0 = T12;
          e1F2986 = a67_0;
          goto LOOP_67;
          T6 = T11;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
    }
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_33) {
  P c_,key_;
  P valF2987;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF2987 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF2987,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T0 = T2;
  } else {
    T0 = valF2987;
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsScolY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
DEFCREGS();
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooStypesYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-or");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"k"),YPPsym((P)"default"));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsScolYelt_or,T4);
  lit_6 = YPPsym((P)"elt-type");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsScolYelt_type,T6);
  lit_8 = YPPsym((P)"elt-default");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsScolYelt_default,T8);
  lit_10 = YPPsym((P)"key-type");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooScolsScolYkey_type,T10);
  lit_12 = YPPsym((P)"key-test");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooScolsScolYkey_test,T12);
  lit_14 = YPPsym((P)"elts");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooScolsScolYelts,T14);
  lit_16 = YPPsym((P)"nul?");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooSmacrosYnulQ,T16);
  lit_18 = YPPsym((P)"nul");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPfab_sig(YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooScolsScolYnul,T18);
  VARSET(YgooScolsScolYemptyQ,VARREF(YgooSmacrosYnulQ));
  VARSET(YgooScolsScolYempty,VARREF(YgooScolsScolYnul));
  lit_20 = YPPsym((P)"add");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPfab_gen(T22,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooScolsScolYadd,T21);
  lit_22 = YPPsym((P)"dup");
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T23 = YPfab_gen(T24,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooScolsScolYdup,T23);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T26 = YPfab_sig(YPPlist(2,T27,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T25 = YPfab_gen(T26,LITREF(lit_24),LITREF(lit_25),YPfalse);
  VARSET(YgooScolsScolYfab,T25);
  lit_26 = YPPsym((P)"col");
  lit_27 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T29 = YPfab_sig(YPPlist(1,T30),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_26),LITREF(lit_27),YPfalse);
  VARSET(YgooScolsScolYcol,T28);
  lit_28 = YPPsym((P)"fabs");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"elts"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPfab_sig(YPPlist(1,T33),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T31 = YPfab_gen(T32,LITREF(lit_28),LITREF(lit_29),YPfalse);
  VARSET(YgooSchrYfabs,T31);
  lit_30 = YPPsym((P)"fill");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"val"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_30),LITREF(lit_31),YPfalse);
  VARSET(YgooScolsScolYfill,T34);
  lit_32 = YPPsym((P)"any?");
  lit_33 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_32),LITREF(lit_33),YPfalse);
  T37 = VARSET(YgooStypesYanyQ,T38);
  T36 = T37;
  return T36;
}

P YgooScolsScolY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
DEFCREGS();
  lit_34 = YPPsym((P)"all?");
  lit_35 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_34),LITREF(lit_35),YPfalse);
  VARSET(YgooScolsScolYallQ,T0);
  lit_36 = YPPsym((P)"fold");
  lit_37 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"x"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_36),LITREF(lit_37),YPfalse);
  VARSET(YgooScolsScolYfold,T2);
  lit_38 = YPPsym((P)"fold+");
  lit_39 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_38),LITREF(lit_39),YPfalse);
  VARSET(YgooScolsScolYfoldA,T4);
  lit_40 = YPPsym((P)"find-or");
  lit_41 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"default"));
  T7 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_40),LITREF(lit_41),YPfalse);
  VARSET(YgooScolsScolYfind_or,T6);
  lit_42 = YPPsym((P)"find");
  lit_43 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_42),LITREF(lit_43),YPfalse);
  VARSET(YgooScolsScolYfind,T8);
  lit_44 = YPPsym((P)"del");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_44),LITREF(lit_45),YPfalse);
  VARSET(YgooScolsScolYdel,T10);
  lit_46 = YPPsym((P)"zap");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_46),LITREF(lit_47),YPfalse);
  VARSET(YgooScolsScolYzap,T12);
  lit_48 = YPPsym((P)"do");
  lit_49 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_48),LITREF(lit_49),YPfalse);
  VARSET(YgooSmacrosYdo,T14);
  lit_50 = YPPsym((P)"mem?");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_50),LITREF(lit_51),YPfalse);
  VARSET(YgooScolsScolYmemQ,T16);
  lit_52 = YPPsym((P)"keys");
  lit_53 = YPPlist(1,YPPsym((P)"c"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_52),LITREF(lit_53),YPfalse);
  VARSET(YgooScolsScolYkeys,T18);
  lit_54 = YPPsym((P)"items");
  lit_55 = YPPlist(1,YPPsym((P)"c"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_54),LITREF(lit_55),YPfalse);
  VARSET(YgooScolsScolYitems,T20);
  lit_56 = YPPsym((P)"col-res-type");
  lit_57 = YPPlist(1,YPPsym((P)"c"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T22 = YPfab_gen(T23,LITREF(lit_56),LITREF(lit_57),YPfalse);
  VARSET(YgooScolsScolYcol_res_type,T22);
  lit_58 = YPPsym((P)"<enum>");
  T25 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T24 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_58),T25);
  VARSET(YgooScolsScolYLenumG,T24);
  lit_59 = YPPsym((P)"enum");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T26 = YPfab_gen(T27,LITREF(lit_59),LITREF(lit_60),YPfalse);
  VARSET(YgooScolsScolYenum,T26);
  lit_61 = YPPsym((P)"fin?");
  lit_62 = YPPlist(1,YPPsym((P)"e"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_61),LITREF(lit_62),YPfalse);
  VARSET(YgooScolsScolYfinQ,T28);
  lit_63 = YPPsym((P)"nxt");
  lit_64 = YPPlist(1,YPPsym((P)"e"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_63),LITREF(lit_64),YPfalse);
  VARSET(YgooScolsScolYnxt,T30);
  lit_65 = YPPsym((P)"now");
  lit_66 = YPPlist(1,YPPsym((P)"e"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T32 = YPfab_gen(T33,LITREF(lit_65),LITREF(lit_66),YPfalse);
  VARSET(YgooScolsScolYnow,T32);
  lit_67 = YPPsym((P)"now-setter");
  lit_68 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_67),LITREF(lit_68),YPfalse);
  VARSET(YgooScolsScolYnow_setter,T34);
  lit_69 = YPPsym((P)"now-key");
  lit_70 = YPPlist(1,YPPsym((P)"e"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T36 = YPfab_gen(T37,LITREF(lit_69),LITREF(lit_70),YPfalse);
  VARSET(YgooScolsScolYnow_key,T36);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_71),LITREF(lit_72),YPfalse);
  VARSET(YgooScolsScolYdo_keyed,T38);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T40 = YPfab_gen(T41,LITREF(lit_73),LITREF(lit_74),YPfalse);
  VARSET(YgooScolsScolYmap_keyed,T40);
  lit_75 = YPPsym((P)"map");
  lit_76 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T42 = YPfab_gen(T43,LITREF(lit_75),LITREF(lit_76),YPfalse);
  VARSET(YgooSmacrosYmap,T42);
  lit_77 = YPPsym((P)"fab-into");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T44 = YPfab_gen(T45,LITREF(lit_77),LITREF(lit_78),YPfalse);
  VARSET(YgooScolsScolYfab_into,T44);
  lit_79 = YPPsym((P)"fab-fill!");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T46 = YPfab_gen(T47,LITREF(lit_79),LITREF(lit_80),YPfalse);
  VARSET(YgooScolsScolYfab_fillX,T46);
  lit_81 = YPPsym((P)"low-elt");
  lit_82 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T50 = YPfab_gen(T51,LITREF(lit_81),LITREF(lit_82),YPfalse);
  T49 = VARSET(YgooScolsScolYlow_elt,T50);
  T48 = T49;
  return T48;
}

P YgooScolsScolY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
DEFCREGS();
  lit_83 = YPPsym((P)"fab-elt-setter");
  lit_84 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T1 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_83),LITREF(lit_84),YPfalse);
  VARSET(YgooScolsScolYfab_elt_setter,T0);
  lit_85 = YPPsym((P)"col-res");
  lit_86 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_85),LITREF(lit_86),YPfalse);
  VARSET(YgooScolsScolYcol_res,T2);
  lit_87 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  fun_enum_0 = YPfab_met(FUNCODEREF(fun_enum_0),T4,LITREF(lit_59),LITREF(lit_87),sloc(73),YPfalse);
  T6 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T7 = fun_enum_0;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsScolYenum,T5);
  lit_88 = YPPsym((P)"as");
  lit_89 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T9 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T8 = YPfab_sig(YPPlist(2,T9,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_1 = YPfab_met(FUNCODEREF(fun_as_1),T8,LITREF(lit_88),LITREF(lit_89),sloc(76),YPfalse);
  T11 = VARREF_OR(YgooStypesYas,YPfalse);
  T12 = fun_as_1;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooStypesYas,T10);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_2 = YPfab_met(FUNCODEREF(fun_dup_2),T13,LITREF(lit_22),LITREF(lit_90),sloc(81),YPfalse);
  T15 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T16 = fun_dup_2;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooScolsScolYdup,T14);
  lit_91 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_3 = YPfab_met(FUNCODEREF(fun_dup_3),T17,LITREF(lit_22),LITREF(lit_91),sloc(85),YPfalse);
  T19 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T20 = fun_dup_3;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooScolsScolYdup,T18);
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_4 = YPfab_met(FUNCODEREF(fun_len_4),T21,LITREF(lit_0),LITREF(lit_92),sloc(90),YPfalse);
  T23 = VARREF_OR(YgooStypesYlen,YPfalse);
  T24 = fun_len_4;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooStypesYlen,T22);
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_5 = YPfab_met(FUNCODEREF(fun_elt_type_5),T25,LITREF(lit_6),LITREF(lit_93),sloc(94),YPfalse);
  T27 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T28 = fun_elt_type_5;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYelt_type,T26);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_6 = YPfab_met(FUNCODEREF(fun_key_type_6),T29,LITREF(lit_10),LITREF(lit_94),sloc(95),YPfalse);
  T31 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T32 = fun_key_type_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsScolYkey_type,T30);
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_7 = YPfab_met(FUNCODEREF(fun_key_test_7),T33,LITREF(lit_12),LITREF(lit_95),sloc(96),YPfalse);
  T35 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T36 = fun_key_test_7;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsScolYkey_test,T34);
  lit_96 = YPPlist(1,YPPsym((P)"c"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_nulQ_8 = YPfab_met(FUNCODEREF(fun_nulQ_8),T37,LITREF(lit_16),LITREF(lit_96),sloc(102),YPfalse);
  T39 = VARREF_OR(YgooSmacrosYnulQ,YPfalse);
  T40 = fun_nulQ_8;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSmacrosYnulQ,T38);
  lit_97 = YPPlist(1,YPPsym((P)"c"));
  T42 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T41 = YPfab_sig(YPPlist(1,T42),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_nul_9 = YPfab_met(FUNCODEREF(fun_nul_9),T41,LITREF(lit_18),LITREF(lit_97),sloc(105),YPfalse);
  T44 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T45 = fun_nul_9;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsScolYnul,T43);
  lit_98 = YPPlist(1,YPPsym((P)"x"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_10 = YPfab_met(FUNCODEREF(fun_elt_default_10),T46,LITREF(lit_8),LITREF(lit_98),sloc(108),YPfalse);
  T48 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T49 = fun_elt_default_10;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsScolYelt_default,T47);
  lit_99 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_11 = YPfab_met(FUNCODEREF(fun_fab_into_11),T50,LITREF(lit_77),LITREF(lit_99),sloc(113),YPfalse);
  T52 = VARREF_OR(YgooScolsScolYfab_into,YPfalse);
  T53 = fun_fab_into_11;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsScolYfab_into,T51);
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T55 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T54 = YPfab_sig(YPPlist(1,T55),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_12 = YPfab_met(FUNCODEREF(fun_fabs_12),T54,LITREF(lit_28),LITREF(lit_100),sloc(120),YPfalse);
  T57 = VARREF_OR(YgooSchrYfabs,YPfalse);
  T58 = fun_fabs_12;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSchrYfabs,T56);
  lit_101 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T59 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_13 = YPfab_met(FUNCODEREF(fun_fab_fillX_13),T59,LITREF(lit_79),LITREF(lit_101),sloc(123),YPfalse);
  T61 = VARREF_OR(YgooScolsScolYfab_fillX,YPfalse);
  T62 = fun_fab_fillX_13;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooScolsScolYfab_fillX,T60);
  lit_102 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T63 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_14 = YPfab_met(FUNCODEREF(fun_fill_14),T63,LITREF(lit_30),LITREF(lit_102),sloc(130),YPfalse);
  T65 = VARREF_OR(YgooScolsScolYfill,YPfalse);
  T66 = fun_fill_14;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooScolsScolYfill,T64);
  lit_103 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_15 = YPfab_met(FUNCODEREF(fun_anyQ_15),T67,LITREF(lit_32),LITREF(lit_103),sloc(133),YPfalse);
  T69 = VARREF_OR(YgooStypesYanyQ,YPfalse);
  T70 = fun_anyQ_15;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YgooStypesYanyQ,T68);
  lit_104 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T71 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_16 = YPfab_met(FUNCODEREF(fun_allQ_16),T71,LITREF(lit_34),LITREF(lit_104),sloc(139),YPfalse);
  T73 = VARREF_OR(YgooScolsScolYallQ,YPfalse);
  T74 = fun_allQ_16;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooScolsScolYallQ,T72);
  lit_105 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T75 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_17 = YPfab_met(FUNCODEREF(fun_fold_17),T75,LITREF(lit_36),LITREF(lit_105),sloc(144),YPfalse);
  T77 = VARREF_OR(YgooScolsScolYfold,YPfalse);
  T78 = fun_fold_17;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooScolsScolYfold,T76);
  lit_106 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_18 = YPfab_met(FUNCODEREF(fun_foldA_18),T79,LITREF(lit_38),LITREF(lit_106),sloc(150),YPfalse);
  T81 = VARREF_OR(YgooScolsScolYfoldA,YPfalse);
  T82 = fun_foldA_18;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YgooScolsScolYfoldA,T80);
  lit_107 = YPPsym((P)"<elt-default>");
  T84 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T83 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_107),T84);
  VARSET(YgooScolsScolYLelt_defaultG,T83);
  T85 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T85);
  lit_108 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  T86 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_19 = YPfab_met(FUNCODEREF(fun_find_or_19),T86,LITREF(lit_40),LITREF(lit_108),sloc(161),YPfalse);
  T88 = VARREF_OR(YgooScolsScolYfind_or,YPfalse);
  T89 = fun_find_or_19;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooScolsScolYfind_or,T87);
  lit_109 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T90 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_20 = YPfab_met(FUNCODEREF(fun_find_20),T90,LITREF(lit_42),LITREF(lit_109),sloc(167),YPfalse);
  T92 = VARREF_OR(YgooScolsScolYfind,YPfalse);
  T93 = fun_find_20;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooScolsScolYfind,T91);
  lit_110 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_21 = YPfab_met(FUNCODEREF(fun_zap_21),T94,LITREF(lit_46),LITREF(lit_110),sloc(173),YPfalse);
  T96 = VARREF_OR(YgooScolsScolYzap,YPfalse);
  T97 = fun_zap_21;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooScolsScolYzap,T95);
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T98 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_22 = YPfab_met(FUNCODEREF(fun_do_22),T98,LITREF(lit_48),LITREF(lit_111),sloc(176),YPfalse);
  T100 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T101 = fun_do_22;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooSmacrosYdo,T99);
  lit_112 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_23 = YPfab_met(FUNCODEREF(fun_map_23),T102,LITREF(lit_75),LITREF(lit_112),sloc(181),YPfalse);
  T104 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T105 = fun_map_23;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YgooSmacrosYmap,T103);
  lit_113 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_24 = YPfab_met(FUNCODEREF(fun_do_keyed_24),T106,LITREF(lit_71),LITREF(lit_113),sloc(188),YPfalse);
  T108 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T109 = fun_do_keyed_24;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooScolsScolYdo_keyed,T107);
  lit_114 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T110 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_25 = YPfab_met(FUNCODEREF(fun_map_keyed_25),T110,LITREF(lit_73),LITREF(lit_114),sloc(193),YPfalse);
  T112 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T113 = fun_map_keyed_25;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooScolsScolYmap_keyed,T111);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_26 = YPfab_met(FUNCODEREF(fun_keys_26),T114,LITREF(lit_52),LITREF(lit_115),sloc(201),YPfalse);
  T116 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T117 = fun_keys_26;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YgooScolsScolYkeys,T115);
  lit_116 = YPPlist(1,YPPsym((P)"c"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_27 = YPfab_met(FUNCODEREF(fun_items_27),T118,LITREF(lit_54),LITREF(lit_116),sloc(207),YPfalse);
  T120 = VARREF_OR(YgooScolsScolYitems,YPfalse);
  T121 = fun_items_27;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YgooScolsScolYitems,T119);
  lit_117 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_118 = YPPlist(1,YPPsym((P)"y"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T123,YPfalse,LITREF(lit_118),sloc(214),YPfalse);
  T122 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_29 = YPfab_met(FUNCODEREF(fun_memQ_29),T122,LITREF(lit_50),LITREF(lit_117),sloc(213),YPfalse);
  T125 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T126 = fun_memQ_29;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YgooScolsScolYmemQ,T124);
  lit_119 = YPPlist(1,YPPsym((P)"c"));
  T127 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_30 = YPfab_met(FUNCODEREF(fun_col_res_type_30),T127,LITREF(lit_56),LITREF(lit_119),sloc(216),YPfalse);
  T129 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T130 = fun_col_res_type_30;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YgooScolsScolYcol_res_type,T128);
  lit_120 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_col_res_31 = YPfab_met(FUNCODEREF(fun_col_res_31),T131,LITREF(lit_85),LITREF(lit_120),sloc(221),YPfalse);
  T133 = VARREF_OR(YgooScolsScolYcol_res,YPfalse);
  T134 = fun_col_res_31;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YgooScolsScolYcol_res,T132);
  lit_121 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_121));
  lit_122 = YPPsym((P)"=");
  lit_123 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T135 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_32 = YPfab_met(FUNCODEREF(fun_E_32),T135,LITREF(lit_122),LITREF(lit_123),sloc(226),YPfalse);
  T137 = VARREF_OR(YgooSlogYE,YPfalse);
  T138 = fun_E_32;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YgooSlogYE,T136);
  lit_124 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T139 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_33 = YPfab_met_inlineable(FUNCODEREF(fun_elt_33),T139,LITREF(lit_2),LITREF(lit_124),sloc(234),YPfalse);
  T141 = VARREF_OR(YgooSmacrosYelt,YPfalse);
  T142 = fun_elt_33;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YgooSmacrosYelt,T140);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T143 = YPfalse;
  return T143;
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
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-children", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"into", CVAR, &YgooScolsScolYinto},
  {"items", CVAR, &YgooScolsScolYitems},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"---main-2---", PVAR, NULL},
  {"now", CVAR, &YgooScolsScolYnow},
  {"col", CVAR, &YgooScolsScolYcol},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"del", CVAR, &YgooScolsScolYdel},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"find", CVAR, &YgooScolsScolYfind},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"empty?", CVAR, &YgooScolsScolYemptyQ},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"---main-0---", PVAR, NULL},
  {"add", CVAR, &YgooScolsScolYadd},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"---main-1---", PVAR, NULL},
  {"nul", CVAR, &YgooScolsScolYnul},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"key-type", NULL},
  {"into", NULL},
  {"fab-into", NULL},
  {"items", NULL},
  {"any?", NULL},
  {"elt-default", NULL},
  {"elt-type", NULL},
  {"empty?", NULL},
  {"map", NULL},
  {"fill", NULL},
  {"mem?", NULL},
  {"map-keyed", NULL},
  {"fabs", NULL},
  {"elt-or", NULL},
  {"do", NULL},
  {"nxt", NULL},
  {"now-key", NULL},
  {"do-keyed", NULL},
  {"zap", NULL},
  {"now", NULL},
  {"elt", NULL},
  {"col", NULL},
  {"len", NULL},
  {"empty", NULL},
  {"del", NULL},
  {"now-setter", NULL},
  {"fin?", NULL},
  {"fab", NULL},
  {"enum", NULL},
  {"find", NULL},
  {"dup", NULL},
  {"<tab>", NULL},
  {"add", NULL},
  {"col-res", NULL},
  {"find-or", NULL},
  {"nul", NULL},
  {"fold+", NULL},
  {"fab-elt-setter", NULL},
  {"nul?", NULL},
  {"low-elt", NULL},
  {"fold", NULL},
  {"keys", NULL},
  {"<col.>", NULL},
  {"elts", NULL},
  {"<enum>", NULL},
  {"<col>", NULL},
  {"fab-fill!", NULL},
  {"all?", NULL},
  {"key-test", NULL},
  {"col-res-type", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScol;
MODULE_INFO module_info_gooScolsScol = {
  "goo/cols/col",
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
extern void load_module_gooSmath (void);

/* EXPRESSION: */

extern void load_module_gooScolsScol (void);

void load_module_gooScolsScol (void) {
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
  load_module_gooSmath();

  (P)YgooScolsScolY___main_0___();
  (P)YgooScolsScolY___main_1___();
  (P)YgooScolsScolY___main_2___();

}

/* END OF GENERATED CODE. */
