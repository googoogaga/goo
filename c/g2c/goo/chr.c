/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/chr");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/chr */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
DEF(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
DEF(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_35);
DEFLIT(lit_29);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_24);
DEFLIT(lit_21);
DEFLIT(lit_8);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_19);
DEFLIT(lit_27);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_5);
DEFLIT(lit_23);
DEFLIT(lit_31);
DEFLIT(lit_15);
DEFLIT(lit_1);
DEFLIT(lit_10);
DEFLIT(lit_25);
DEFLIT(lit_33);
DEFLIT(lit_28);
DEFLIT(lit_0);
DEFLIT(lit_16);
DEFLIT(lit_17);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_6);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_12);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_as_1);
LOCFOR(fun_L_2);
LOCFOR(fun_EE_3);
LOCFOR(fun_lowerQ_4);
LOCFOR(fun_upperQ_5);
LOCFOR(fun_to_lower_6);
LOCFOR(fun_to_upper_7);
LOCFOR(fun_to_digit_8);
LOCFOR(fun_to_str_9);
LOCFOR(fun_alphaQ_10);
LOCFOR(fun_digitQ_11);
LOCFOR(fun_eof_objectQ_12);
LOCFOR(fun_eof_objectQ_13);
LOCFOR(fun_eof_object_14);
extern P YgooSchrY___main_0___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_as_0) {
  P U_,i_;
  P tF2937;
  P xF2936;
  P xF2935;
  P xF2934;
  P xF2933;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(i_, 1);
  xF2933 = i_;
  xF2934 = xF2933;
  T2 = (P)YPiGG(xF2934,(P)2);
  xF2935 = T2;
  xF2936 = xF2935;
  tF2937 = (P)2;
  T1 = (P)YPiLL(xF2936,(P)2);
  T0 = (P)YPiv(T1,tF2937);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_1) {
  P U_,c_;
  P tF2942;
  P xF2941;
  P xF2940;
  P xF2939;
  P xF2938;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(c_, 1);
  xF2938 = c_;
  xF2939 = xF2938;
  T2 = (P)YPiGG(xF2939,(P)2);
  xF2940 = T2;
  xF2941 = xF2940;
  tF2942 = (P)1;
  T1 = (P)YPiLL(xF2941,(P)2);
  T0 = (P)YPiv(T1,tF2942);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_2) {
  P x_,y_;
  P xF2946;
  P xF2945;
  P xF2944;
  P xF2943;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2943 = x_;
  xF2944 = xF2943;
  T2 = (P)YPiGG(xF2944,(P)2);
  xF2945 = y_;
  xF2946 = xF2945;
  T3 = (P)YPiGG(xF2946,(P)2);
  T1 = (P)YPcL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_EE_3) {
  P x_,y_;
  P xF2950;
  P xF2949;
  P xF2948;
  P xF2947;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2947 = x_;
  xF2948 = xF2947;
  T2 = (P)YPiGG(xF2948,(P)2);
  xF2949 = y_;
  xF2950 = xF2949;
  T3 = (P)YPiGG(xF2950,(P)2);
  T1 = (P)YPcE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_lowerQ_4) {
  P x_;
  P codeF2951;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF2951 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF2951,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)122));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF2951,T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_upperQ_5) {
  P x_;
  P codeF2952;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
  codeF2952 = T5;
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
  T1 = CALL2(1,VARREF(YgooSmagYGE),codeF2952,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)90));
    T3 = CALL2(1,VARREF(YgooSmagYLE),codeF2952,T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_lower_6) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYupperQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_upper_7) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYlowerQ),x_);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),x_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)65));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfixnumG),YPchr((P)97));
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
    T3 = CALL2(1,VARREF(YgooSmathYA),T4,T5);
    T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),T3);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_digit_8) {
  P digit_;
  P T0,T1,T2;
LINK_STACK();
  ARG(digit_, 0);
  T1 = CALL1(1,VARREF(YgooSchrYchar_Gascii),digit_);
  T2 = CALL1(1,VARREF(YgooSchrYchar_Gascii),YPchr((P)48));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_9) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSchrYfabs),VARREF(YLstrG),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_alphaQ_10) {
  P x_;
  P tmpF2953;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)97),x_);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)122));
    T4 = T6;
  } else {
    T4 = YPfalse;
  }
  tmpF2953 = T4;
  if (tmpF2953 != YPfalse) {
    T0 = tmpF2953;
  } else {
    T2 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)65),x_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)90));
      T1 = T3;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_digitQ_11) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmagYLE),YPchr((P)48),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYLE),x_,YPchr((P)57));
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_eof_objectQ_12) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(YPfalse);
}

LOCCODEDEF(fun_eof_objectQ_13) {
  P x_;
  P xF2955;
  P xF2954;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF2954 = x_;
  xF2955 = xF2954;
  T2 = (P)YPiGG(xF2955,(P)2);
  T3 = (P)YPeof_object();
  T1 = (P)YPeqQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_eof_object_14) {
  P tF2958;
  P xF2957;
  P xF2956;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YPeof_object();
  xF2956 = T2;
  xF2957 = xF2956;
  tF2958 = (P)2;
  T1 = (P)YPiLL(xF2957,(P)2);
  T0 = (P)YPiv(T1,tF2958);
UNLINK_STACK();
  RET(T0);
}

P YgooSchrY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80;
DEFCREGS();
  lit_0 = YPPsym((P)"lower?");
  lit_1 = YPPlist(1,YPPsym((P)"<chr>"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooSchrYlowerQ,T0);
  lit_2 = YPPsym((P)"upper?");
  lit_3 = YPPlist(1,YPPsym((P)"<chr>"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSchrYupperQ,T2);
  lit_4 = YPPsym((P)"to-lower");
  lit_5 = YPPlist(1,YPPsym((P)"<chr>"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSchrYto_lower,T4);
  lit_6 = YPPsym((P)"to-upper");
  lit_7 = YPPlist(1,YPPsym((P)"<chr>"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooSchrYto_upper,T6);
  lit_8 = YPPsym((P)"to-digit");
  lit_9 = YPPlist(1,YPPsym((P)"<chr>"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooSchrYto_digit,T8);
  lit_10 = YPPsym((P)"alpha?");
  lit_11 = YPPlist(1,YPPsym((P)"<chr>"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooSchrYalphaQ,T10);
  lit_12 = YPPsym((P)"digit?");
  lit_13 = YPPlist(1,YPPsym((P)"<chr>"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooSchrYdigitQ,T12);
  lit_14 = YPPsym((P)"eof-object?");
  lit_15 = YPPlist(1,YPPsym((P)"<chr>"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooSchrYeof_objectQ,T14);
  lit_16 = YPPsym((P)"eof-object");
  lit_17 = Ynil;
  T17 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooSchrYeof_object,T16);
  lit_18 = YPPsym((P)"as");
  lit_19 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"i"));
  T19 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLchrG));
  T18 = YPfab_sig(YPPlist(2,T19,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_as_0 = YPfab_met(FUNCODEREF(fun_as_0),T18,LITREF(lit_18),LITREF(lit_19),sloc(24),YPfalse);
  T21 = VARREF_OR(YgooStypesYas,YPfalse);
  T22 = fun_as_0;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooStypesYas,T20);
  lit_20 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"c"));
  T24 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T23 = YPfab_sig(YPPlist(2,T24,VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_as_1 = YPfab_met(FUNCODEREF(fun_as_1),T23,LITREF(lit_18),LITREF(lit_20),sloc(27),YPfalse);
  T26 = VARREF_OR(YgooStypesYas,YPfalse);
  T27 = fun_as_1;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooStypesYas,T25);
  lit_21 = YPPsym((P)"<");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_2 = YPfab_met(FUNCODEREF(fun_L_2),T28,LITREF(lit_21),LITREF(lit_22),sloc(30),YPfalse);
  T30 = VARREF_OR(YgooSmagYL,YPfalse);
  T31 = fun_L_2;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmagYL,T29);
  lit_23 = YPPsym((P)"==");
  lit_24 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLchrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_3 = YPfab_met(FUNCODEREF(fun_EE_3),T32,LITREF(lit_23),LITREF(lit_24),sloc(33),YPfalse);
  T34 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T35 = fun_EE_3;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmacrosYEE,T33);
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_lowerQ_4 = YPfab_met(FUNCODEREF(fun_lowerQ_4),T36,LITREF(lit_0),LITREF(lit_25),sloc(36),YPfalse);
  T38 = VARREF_OR(YgooSchrYlowerQ,YPfalse);
  T39 = fun_lowerQ_4;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSchrYlowerQ,T37);
  lit_26 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_upperQ_5 = YPfab_met(FUNCODEREF(fun_upperQ_5),T40,LITREF(lit_2),LITREF(lit_26),sloc(42),YPfalse);
  T42 = VARREF_OR(YgooSchrYupperQ,YPfalse);
  T43 = fun_upperQ_5;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSchrYupperQ,T41);
  lit_27 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_lower_6 = YPfab_met(FUNCODEREF(fun_to_lower_6),T44,LITREF(lit_4),LITREF(lit_27),sloc(48),YPfalse);
  T46 = VARREF_OR(YgooSchrYto_lower,YPfalse);
  T47 = fun_to_lower_6;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSchrYto_lower,T45);
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_to_upper_7 = YPfab_met(FUNCODEREF(fun_to_upper_7),T48,LITREF(lit_6),LITREF(lit_28),sloc(53),YPfalse);
  T50 = VARREF_OR(YgooSchrYto_upper,YPfalse);
  T51 = fun_to_upper_7;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSchrYto_upper,T49);
  lit_29 = YPPlist(1,YPPsym((P)"digit"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_to_digit_8 = YPfab_met(FUNCODEREF(fun_to_digit_8),T52,LITREF(lit_8),LITREF(lit_29),sloc(58),YPfalse);
  T54 = VARREF_OR(YgooSchrYto_digit,YPfalse);
  T55 = fun_to_digit_8;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSchrYto_digit,T53);
  lit_30 = YPPsym((P)"to-str");
  lit_31 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPfab_met(FUNCODEREF(fun_to_str_9),T56,LITREF(lit_30),LITREF(lit_31),sloc(61),YPfalse);
  T58 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T59 = fun_to_str_9;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSanyYto_str,T57);
  lit_32 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_alphaQ_10 = YPfab_met(FUNCODEREF(fun_alphaQ_10),T60,LITREF(lit_10),LITREF(lit_32),sloc(64),YPfalse);
  T62 = VARREF_OR(YgooSchrYalphaQ,YPfalse);
  T63 = fun_alphaQ_10;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSchrYalphaQ,T61);
  lit_33 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_digitQ_11 = YPfab_met(FUNCODEREF(fun_digitQ_11),T64,LITREF(lit_12),LITREF(lit_33),sloc(68),YPfalse);
  T66 = VARREF_OR(YgooSchrYdigitQ,YPfalse);
  T67 = fun_digitQ_11;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSchrYdigitQ,T65);
  lit_34 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_12 = YPfab_met(FUNCODEREF(fun_eof_objectQ_12),T68,LITREF(lit_14),LITREF(lit_34),sloc(71),YPfalse);
  T70 = VARREF_OR(YgooSchrYeof_objectQ,YPfalse);
  T71 = fun_eof_objectQ_12;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSchrYeof_objectQ,T69);
  lit_35 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_eof_objectQ_13 = YPfab_met(FUNCODEREF(fun_eof_objectQ_13),T72,LITREF(lit_14),LITREF(lit_35),sloc(74),YPfalse);
  T74 = VARREF_OR(YgooSchrYeof_objectQ,YPfalse);
  T75 = fun_eof_objectQ_13;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSchrYeof_objectQ,T73);
  T76 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLchrG),Ynil);
  fun_eof_object_14 = YPfab_met(FUNCODEREF(fun_eof_object_14),T76,LITREF(lit_16),LITREF(lit_17),sloc(77),YPfalse);
  T78 = VARREF_OR(YgooSchrYeof_object,YPfalse);
  T79 = fun_eof_object_14;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSchrYeof_object,T77);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T80 = YPfalse;
  return T80;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSmath},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"eof-object", CVAR, &YgooSchrYeof_object},
  {"eof-object?", CVAR, &YgooSchrYeof_objectQ},
  {"char->ascii", CVAR, &YgooSchrYchar_Gascii},
  {"digit?", CVAR, &YgooSchrYdigitQ},
  {"alpha?", CVAR, &YgooSchrYalphaQ},
  {"to-digit", CVAR, &YgooSchrYto_digit},
  {"to-upper", CVAR, &YgooSchrYto_upper},
  {"fabs", CVAR, &YgooSchrYfabs},
  {"to-lower", CVAR, &YgooSchrYto_lower},
  {"upper?", CVAR, &YgooSchrYupperQ},
  {"lower?", CVAR, &YgooSchrYlowerQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"eof-object", NULL},
  {"eof-object?", NULL},
  {"char->ascii", NULL},
  {"digit?", NULL},
  {"alpha?", NULL},
  {"to-digit", NULL},
  {"to-upper", NULL},
  {"fabs", NULL},
  {"to-lower", NULL},
  {"upper?", NULL},
  {"lower?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSchr;
MODULE_INFO module_info_gooSchr = {
  "goo/chr",
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
extern void load_module_gooSmag (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSmath (void);

/* EXPRESSION: */

extern void load_module_gooSchr (void);

void load_module_gooSchr (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmag();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSmath();

  (P)YgooSchrY___main_0___();

}

/* END OF GENERATED CODE. */
