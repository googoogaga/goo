/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/fun");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/fun */

DEF(YgooSfunYDmissed_dispatch,"goo/fun","$missed-dispatch");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ynil,"goo/boot","nil");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
DEF(YgooSfunYOgen_cache_singletons_setter,"goo/fun","@gen-cache-singletons-setter");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooSfunYfun_val_setter,"goo/fun","fun-val-setter");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSfunYOfun_mets_setter,"goo/fun","@fun-mets-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooSfunYOunion_specQ,"goo/fun","@union-spec?");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSfunYfun_unification_vars_setter,"goo/fun","fun-unification-vars-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLmetG,"goo/boot","<met>");
DEF(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSfunYfun_same_metQ,"goo/fun","fun-same-met?");
DEF(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
DEF(YgooSfunYfun_src_loc_setter,"goo/fun","fun-src-loc-setter");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooSfunYOgen_cache_singletons,"goo/fun","@gen-cache-singletons");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooSfunYOprune_mets_by_type_at,"goo/fun","@prune-mets-by-type-at");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSfunYDnul_assocs,"goo/fun","$nul-assocs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSfunYOfun_unification_vars,"goo/fun","@fun-unification-vars");
DEF(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooSfunYOgen_cache_arg_pos_setter,"goo/fun","@gen-cache-arg-pos-setter");
DEF(YgooSfunYfun_arity_setter,"goo/fun","fun-arity-setter");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSfunYgen_lookup_miss_1,"goo/fun","gen-lookup-miss-1");
DEF(YgooSfunYgen_lookup_miss_1_using,"goo/fun","gen-lookup-miss-1-using");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSfunYLenvG,"goo/fun","<env>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
DEF(YgooSfunYLspecsG,"goo/fun","<specs>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSfunYOfun_val,"goo/fun","@fun-val");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Yfun_env,"goo/boot","fun-env");
DEF(YgooSfunYOgen_cache_arg_pos,"goo/fun","@gen-cache-arg-pos");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YgooSfunYgen_from_met,"goo/fun","gen-from-met");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooSfunYfun_src_setter,"goo/fun","fun-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YgooSfunYOmets_unspecialized_atQ,"goo/fun","@mets-unspecialized-at?");
EXT(YOdo,"goo/boot","@do");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YgooSfunYOfun_arity,"goo/fun","@fun-arity");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSfunYord_app_mets_1,"goo/fun","ord-app-mets-1");
DEF(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSfunYOprecise_specQ,"goo/fun","@precise-spec?");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YgooSfunYLmetsG,"goo/fun","<mets>");
DEF(YgooSfunYfun_naryQ_setter,"goo/fun","fun-nary?-setter");
DEF(YgooSfunYOcache_add,"goo/fun","@cache-add");
EXT(YOlit,"goo/boot","@lit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSfunYOfun_naryQ,"goo/fun","@fun-nary?");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YgooSfunYmet_app_unify,"goo/fun","met-app-unify");
EXT(YOpick,"goo/boot","@pick");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSfunYensure_singleton_cache,"goo/fun","ensure-singleton-cache");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSfunYfun_names_setter,"goo/fun","fun-names-setter");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YgooSfunYOfun_specs,"goo/fun","@fun-specs");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSfunYord_app_metsT,"goo/fun","ord-app-mets*");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSfunYOsubclass_specQ,"goo/fun","@subclass-spec?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSfunYOmets_subclasses_at,"goo/fun","@mets-subclasses-at");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooSfunYrequires_singleton_prec,"goo/fun","requires-singleton-prec");
DEF(YgooSfunYfun_specs_setter,"goo/fun","fun-specs-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSfunYorder_mets,"goo/fun","order-mets");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSfunYOfun_names,"goo/fun","@fun-names");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooSfunYOsingleton_specQ,"goo/fun","@singleton-spec?");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSfunYfun_congruentQ,"goo/fun","fun-congruent?");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSfunYfun_name_setter,"goo/fun","fun-name-setter");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooSfunYOspecd_args,"goo/fun","@specd-args");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSfunYOorder_specs,"goo/fun","@order-specs");
DEF(YgooSfunYfun_name,"goo/fun","fun-name");
DEF(YgooSfunYOmets_singletons_at,"goo/fun","@mets-singletons-at");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YgooSfunYmethod_accessor_offset,"goo/fun","method-accessor-offset");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ytail,"goo/boot","tail");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSfunYOgen_cache_classes_setter,"goo/fun","@gen-cache-classes-setter");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
DEF(YgooSfunYchoose_methods,"goo/fun","choose-methods");
EXT(YLboxG,"goo/boot","<box>");
DEF(YgooSfunYLbodyG,"goo/fun","<body>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YgooSfunYOmets_specs_at,"goo/fun","@mets-specs-at");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooSfunYOgen_cache_classes,"goo/fun","@gen-cache-classes");
DEF(YgooSfunYfun_unification_vars,"goo/fun","fun-unification-vars");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooSfunYfun_spec,"goo/fun","fun-spec");
DEF(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ynew,"goo/boot","new");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
DEF(YgooSfunYgen_lookup_miss,"goo/fun","gen-lookup-miss");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_103);
DEFLIT(lit_159);
DEFLIT(lit_105);
DEFLIT(lit_2);
DEFLIT(lit_44);
DEFLIT(lit_17);
DEFLIT(lit_158);
DEFLIT(lit_31);
DEFLIT(lit_118);
DEFLIT(lit_51);
DEFLIT(lit_116);
DEFLIT(lit_134);
DEFLIT(lit_50);
DEFLIT(lit_113);
DEFLIT(lit_73);
DEFLIT(lit_95);
DEFLIT(lit_61);
DEFLIT(lit_74);
DEFLIT(lit_136);
DEFLIT(lit_67);
DEFLIT(lit_109);
DEFLIT(lit_28);
DEFLIT(lit_83);
DEFLIT(lit_141);
DEFLIT(lit_86);
DEFLIT(lit_112);
DEFLIT(lit_143);
DEFLIT(lit_57);
DEFLIT(lit_132);
DEFLIT(lit_37);
DEFLIT(lit_152);
DEFLIT(lit_21);
DEFLIT(lit_122);
DEFLIT(lit_108);
DEFLIT(lit_125);
DEFLIT(lit_52);
DEFLIT(lit_161);
DEFLIT(lit_149);
DEFLIT(lit_3);
DEFLIT(lit_33);
DEFLIT(lit_101);
DEFLIT(lit_24);
DEFLIT(lit_82);
DEFLIT(lit_151);
DEFLIT(lit_140);
DEFLIT(lit_155);
DEFLIT(lit_38);
DEFLIT(lit_53);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_48);
DEFLIT(lit_81);
DEFLIT(lit_111);
DEFLIT(lit_54);
DEFLIT(lit_114);
DEFLIT(lit_13);
DEFLIT(lit_139);
DEFLIT(lit_146);
DEFLIT(lit_43);
DEFLIT(lit_126);
DEFLIT(lit_32);
DEFLIT(lit_49);
DEFLIT(lit_119);
DEFLIT(lit_121);
DEFLIT(lit_77);
DEFLIT(lit_27);
DEFLIT(lit_106);
DEFLIT(lit_60);
DEFLIT(lit_163);
DEFLIT(lit_16);
DEFLIT(lit_78);
DEFLIT(lit_19);
DEFLIT(lit_144);
DEFLIT(lit_79);
DEFLIT(lit_97);
DEFLIT(lit_80);
DEFLIT(lit_110);
DEFLIT(lit_1);
DEFLIT(lit_164);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_154);
DEFLIT(lit_129);
DEFLIT(lit_11);
DEFLIT(lit_65);
DEFLIT(lit_42);
DEFLIT(lit_87);
DEFLIT(lit_130);
DEFLIT(lit_90);
DEFLIT(lit_7);
DEFLIT(lit_93);
DEFLIT(lit_115);
DEFLIT(lit_15);
DEFLIT(lit_39);
DEFLIT(lit_100);
DEFLIT(lit_69);
DEFLIT(lit_127);
DEFLIT(lit_104);
DEFLIT(lit_148);
DEFLIT(lit_36);
DEFLIT(lit_62);
DEFLIT(lit_10);
DEFLIT(lit_107);
DEFLIT(lit_138);
DEFLIT(lit_124);
DEFLIT(lit_29);
DEFLIT(lit_96);
DEFLIT(lit_145);
DEFLIT(lit_94);
DEFLIT(lit_64);
DEFLIT(lit_150);
DEFLIT(lit_40);
DEFLIT(lit_147);
DEFLIT(lit_46);
DEFLIT(lit_162);
DEFLIT(lit_59);
DEFLIT(lit_30);
DEFLIT(lit_120);
DEFLIT(lit_135);
DEFLIT(lit_25);
DEFLIT(lit_71);
DEFLIT(lit_131);
DEFLIT(lit_75);
DEFLIT(lit_35);
DEFLIT(lit_123);
DEFLIT(lit_68);
DEFLIT(lit_58);
DEFLIT(lit_142);
DEFLIT(lit_76);
DEFLIT(lit_18);
DEFLIT(lit_55);
DEFLIT(lit_133);
DEFLIT(lit_99);
DEFLIT(lit_22);
DEFLIT(lit_160);
DEFLIT(lit_156);
DEFLIT(lit_157);
DEFLIT(lit_85);
DEFLIT(lit_91);
DEFLIT(lit_63);
DEFLIT(lit_84);
DEFLIT(lit_66);
DEFLIT(lit_92);
DEFLIT(lit_98);
DEFLIT(lit_45);
DEFLIT(lit_128);
DEFLIT(lit_34);
DEFLIT(lit_88);
DEFLIT(lit_117);
DEFLIT(lit_137);
DEFLIT(lit_14);
DEFLIT(lit_70);
DEFLIT(lit_41);
DEFLIT(lit_153);
DEFLIT(lit_102);
DEFLIT(lit_89);
DEFLIT(lit_47);
DEFLIT(lit_23);
DEFLIT(lit_8);
DEFLIT(lit_72);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_56);

/* FUNCTIONS: */

FUNFOR(YgooSfunYOfun_names);
FUNFOR(YgooSfunYOfun_specs);
FUNFOR(YgooSfunYOfun_naryQ);
FUNFOR(YgooSfunYOfun_arity);
FUNFOR(YgooSfunYOfun_val);
FUNFOR(YgooSfunYOfun_unification_vars);
FUNFOR(YgooSfunYOfun_mets);
FUNFOR(YgooSfunYOfun_mets_setter);
FUNFOR(YgooSfunYfun_spec);
FUNFOR(YgooSfunYfun_same_metQ);
FUNFOR(YgooSfunYfun_congruentQ);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_14);
FUNFOR(YgooSfunYgen_add_met);
FUNFOR(YgooSfunYOclassL);
FUNFOR(YgooSfunYOorder_specs_class);
FUNFOR(YgooSfunYOorder_specs);
FUNFOR(YgooSfunYorder_mets);
LOCFOR(fun_make_ambiguous_20);
LOCFOR(fun_precedes_allQ_21);
LOCFOR(fun_check_subsequent_ambiguities_22);
LOCFOR(fun_insert_23);
FUNFOR(YgooSfunYord_app_mets_1);
LOCFOR(fun_25);
FUNFOR(YgooSfunYmet_appQ);
FUNFOR(YgooSfunYord_app_metsT);
FUNFOR(YgooSfunYord_app_mets);
FUNFOR(YgooSfunYOgen_cache_arg_pos);
FUNFOR(YgooSfunYOgen_cache_arg_pos_setter);
FUNFOR(YgooSfunYOgen_cache_singletons);
FUNFOR(YgooSfunYOgen_cache_singletons_setter);
FUNFOR(YgooSfunYOgen_cache_classes);
FUNFOR(YgooSfunYOgen_cache_classes_setter);
FUNFOR(YgooSfunYmethod_accessor_offset);
FUNFOR(YgooSfunYOsingleton_specQ);
FUNFOR(YgooSfunYOsubclass_specQ);
FUNFOR(YgooSfunYOunion_specQ);
FUNFOR(YgooSfunYOprecise_specQ);
LOCFOR(fun_40);
FUNFOR(YgooSfunYOmets_unspecialized_atQ);
LOCFOR(fun_42);
FUNFOR(YgooSfunYOprune_mets_by_type_at);
LOCFOR(fun_44);
FUNFOR(YgooSfunYOmets_specs_at);
LOCFOR(fun_46);
FUNFOR(YgooSfunYOmets_singletons_at);
LOCFOR(fun_48);
FUNFOR(YgooSfunYOmets_subclasses_at);
FUNFOR(YgooSfunYOcache_add);
FUNFOR(YgooSfunYgen_lookup_miss_1_using);
FUNFOR(YgooSfunYOspecd_args);
FUNFOR(YgooSfunYrequires_singleton_prec);
FUNFOR(YgooSfunYensure_singleton_cache);
FUNFOR(YgooSfunYgen_lookup_miss_1);
FUNFOR(YgooSfunYgen_lookup_miss);
extern P YgooSfunYprop_value_at (P,P);
extern P YgooSfunYprop_bound_atQ (P,P);
extern P YgooSfunYprop_value_at_setter (P,P,P);
extern P YgooSfunYgen_lookup (P,P);
extern P YgooSfunYgen_lookup_1_using (P,P,P,P,P,P,P);
extern P YgooSfunYgen_lookup_1i (P,P,P);
extern P YgooSfunYgen_lookup_1 (P,P,P);
FUNFOR(YgooSfunYchoose_methods);
extern P YgooSfunYgen_lookup_i (P,P);
FUNFOR(YPdispatch);
FUNFOR(YgooSfunYfun_specs);
FUNFOR(YgooSfunYfun_specs_setter);
FUNFOR(YgooSfunYfun_naryQ);
FUNFOR(YgooSfunYfun_naryQ_setter);
FUNFOR(YgooSfunYfun_arity);
FUNFOR(YgooSfunYfun_arity_setter);
FUNFOR(YgooSfunYfun_val);
FUNFOR(YgooSfunYfun_val_setter);
FUNFOR(YgooSfunYfun_unification_vars);
FUNFOR(YgooSfunYfun_unification_vars_setter);
FUNFOR(YgooSfunYfun_name);
FUNFOR(YgooSfunYfun_name_setter);
FUNFOR(YgooSfunYfun_names);
FUNFOR(YgooSfunYfun_names_setter);
FUNFOR(YgooSfunYfun_src);
FUNFOR(YgooSfunYfun_src_setter);
FUNFOR(YgooSfunYfun_src_loc);
FUNFOR(YgooSfunYfun_src_loc_setter);
FUNFOR(YgooSfunYfun_count);
FUNFOR(YgooSfunYfun_count_setter);
FUNFOR(YgooSfunYfun_inlineableQ);
FUNFOR(YgooSfunYfun_inlineableQ_setter);
FUNFOR(YgooSfunYfab_gen);
LOCFOR(fun_90);
FUNFOR(YgooSfunYgen_from_met);
FUNFOR(YgooSfunYPdefine_method);
extern P YgooSfunY___main_0___ ();
extern P YgooSfunY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

FUNCODEDEF(YgooSfunYOfun_names) {
  P x_;
  P xF1215;
  P xF1214;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1214 = x_;
  T1 = (P)YPprop_elt(xF1214,(P)2);
  xF1215 = T1;
  T0 = (P)YPprop_elt(xF1215,(P)1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_specs) {
  P x_;
  P xF1217;
  P xF1216;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1216 = x_;
  T1 = (P)YPprop_elt(xF1216,(P)1);
  xF1217 = T1;
  T0 = (P)YPprop_elt(xF1217,(P)0);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_naryQ) {
  P x_;
  P xF1219;
  P xF1218;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1218 = x_;
  T1 = (P)YPprop_elt(xF1218,(P)1);
  xF1219 = T1;
  T0 = (P)YPprop_elt(xF1219,(P)1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_arity) {
  P x_;
  P xF1221;
  P xF1220;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1220 = x_;
  T1 = (P)YPprop_elt(xF1220,(P)1);
  xF1221 = T1;
  T0 = (P)YPprop_elt(xF1221,(P)2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_val) {
  P x_;
  P xF1223;
  P xF1222;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1222 = x_;
  T1 = (P)YPprop_elt(xF1222,(P)1);
  xF1223 = T1;
  T0 = (P)YPprop_elt(xF1223,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOfun_unification_vars) {
  P x_;
  P xF1225;
  P xF1224;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1224 = x_;
  T1 = (P)YPprop_elt(xF1224,(P)1);
  xF1225 = T1;
  T0 = (P)YPprop_elt(xF1225,(P)4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_mets) {
  P x_;
  P xF1226;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1226 = x_;
  T0 = (P)YPprop_elt(xF1226,(P)3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_mets_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_mets_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_spec) {
  P x_,i_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
  T0 = CALL2(1,VARREF(YOelt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_same_metQ) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
  T2 = CALL1(1,VARREF(YgooSfunYOfun_specs),y_);
  T0 = CALL3(1,VARREF(YOall2Q),VARREF(YOOEE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYfun_congruentQ) {
  P x_,y_;
  P yF1230;
  P xF1229;
  P yF1228;
  P xF1227;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),x_);
  xF1227 = T3;
  T4 = CALL1(1,VARREF(YgooSfunYOfun_arity),y_);
  yF1228 = T4;
  T2 = (P)YPiE(xF1227,yF1228);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
    xF1229 = T8;
    T9 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),y_);
    yF1230 = T9;
    T7 = (P)YPeqQ(xF1229,yF1230);
    T6 = (P)YPbb(T7);
    if (T7) {
      T12 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
      T13 = CALL1(1,VARREF(YgooSfunYOfun_specs),y_);
      T11 = CALL3(1,VARREF(YOall2Q),VARREF(YOsubtypeQ),T12,T13);
      if (T11 != YPfalse) {
        T15 = CALL1(1,VARREF(YgooSfunYOfun_val),x_);
        T16 = CALL1(1,VARREF(YgooSfunYOfun_val),y_);
        T14 = CALL2(1,VARREF(YOsubtypeQ),T15,T16);
        T10 = T14;
      } else {
        T10 = YPfalse;
      }
      T5 = T10;
    } else {
      T5 = YPfalse;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_11) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

LOCCODEDEF(fun_12) {
  P c_,r_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
  T2 = CALL1(1,VARREF(YgooSfunYgen_from_met),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSfunYgen_add_met),T2,FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_13) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSfunYincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_14) {
  P return_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(return_, 0);
  T2 = CALL2(1,VARREF(Ylst),FREEREF(0),FREEREF(1));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),LITREF(lit_25),VARREF(YgooSfunYhandler_info_arguments),T2);
  T3 = fun_11;
  T4 = FUNFAB(fun_12,2,FREEREF(1),return_);
  T5 = FUNFAB(fun_13,2,FREEREF(0),FREEREF(1));
  T0 = XCALLN(1,YPwith_monitor,5,VARREF(YgooSfunYLreplace_generic_restartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYgen_add_met) {
  P g_,m_;
  P xF1258;
  P xF1257;
  P tmpF1256;
  P now_sameQF1255;
  P gmF1254;
  P xF1253;
  P xF1252;
  P xF1251;
  P xF1250;
  P gmsF1249;
  P sameQF1248;
  P metsF1247;
  P xF1246;
  P xF1245;
  P xF1244;
  P xF1243;
  P spec_classF1242;
  P xF1241;
  P yF1240;
  P xF1239;
  P tmpF1238;
  P specF1237;
  P xF1236;
  P xF1235;
  P xF1234;
  P xF1233;
  P xF1232;
  P specsF1231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(g_, 0);
  ARG(m_, 1);
  (P)YPfun_cache_setter(YPfalse,g_);
  T2 = CALL2(1,VARREF(YgooSfunYfun_congruentQ),m_,g_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    if (VARREF(YTrestarts_okQT) != YPfalse) {
      T5 = FUNFAB(fun_14,2,g_,m_);
      T4 = with_exit(T5);
      T3 = T4;
    } else {
      T6 = CALL2(1,VARREF(YgooSfunYincongruent_method_error),g_,m_);
      T3 = T6;
    }
    T0 = T3;
  } else {
    T27 = CALL1(1,VARREF(YgooSfunYOfun_specs),m_);
    specsF1231 = T27;
    LOOP_28: {
      P a28_0;
      xF1232 = specsF1231;
      xF1233 = xF1232;
      T11 = (P)YPeqQ(xF1233,VARREF(Ynil));
      T10 = (P)YPbb(T11);
      xF1234 = T10;
      T9 = (P)YPeqQ(xF1234,YPfalse);
      T8 = (P)YPbb(T9);
      if (T9) {
        xF1235 = specsF1231;
        xF1236 = xF1235;
        T26 = (P)YPprop_elt(xF1236,(P)0);
        specF1237 = T26;
        T18 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),specF1237);
        tmpF1238 = T18;
        if (tmpF1238 != YPfalse) {
          T15 = tmpF1238;
        } else {
          xF1239 = specF1237;
          yF1240 = VARREF(YLanyG);
          T17 = (P)YPeqQ(xF1239,yF1240);
          T16 = (P)YPbb(T17);
          T15 = T16;
        }
        xF1241 = T15;
        T14 = (P)YPeqQ(xF1241,YPfalse);
        T13 = (P)YPbb(T14);
        if (T14) {
          T25 = (P)YPobject_class(specF1237);
          spec_classF1242 = T25;
          xF1243 = spec_classF1242;
          T20 = (P)YPprop_elt(xF1243,(P)7);
          T19 = (P)YOadd_new(T20,g_);
          (P)YPclass_gens_setter(T19,spec_classF1242);
          xF1244 = spec_classF1242;
          T22 = (P)YPprop_elt(xF1244,(P)8);
          T21 = (P)YOadd_new(T22,m_);
          (P)YPclass_mets_setter(T21,spec_classF1242);
          xF1245 = specsF1231;
          xF1246 = xF1245;
          T24 = (P)YPprop_elt(xF1246,(P)1);
          a28_0 = T24;
          specsF1231 = a28_0;
          goto LOOP_28;
          T12 = T23;
        } else {
          T12 = YPfalse;
        }
        T7 = T12;
      } else {
        T7 = YPfalse;
      }
    }
    metsF1247 = Ynil;
    sameQF1248 = YPfalse;
    T42 = CALL1(1,VARREF(YgooSfunYOfun_mets),g_);
    check_type(T42,VARREF(YgooSfunYLmetsG));
    gmsF1249 = T42;
    LOOP_29: {
      P a29_0,a29_1,a29_2;
      xF1250 = gmsF1249;
      xF1251 = xF1250;
      T30 = (P)YPeqQ(xF1251,VARREF(Ynil));
      T29 = (P)YPbb(T30);
      if (T30) {
        if (sameQF1248 != YPfalse) {
          T33 = metsF1247;
        } else {
          T34 = (P)YOadd(metsF1247,m_);
          T33 = T34;
        }
        T32 = CALL1(1,VARREF(YOrevX),T33);
        T31 = (P)YPgen_mets_setter(T32,g_);
        T28 = T31;
      } else {
        xF1252 = gmsF1249;
        xF1253 = xF1252;
        T41 = (P)YPprop_elt(xF1253,(P)0);
        gmF1254 = T41;
        T40 = CALL2(1,VARREF(YgooSfunYfun_same_metQ),gmF1254,m_);
        now_sameQF1255 = T40;
        if (now_sameQF1255 != YPfalse) {
          T37 = m_;
        } else {
          T37 = gmF1254;
        }
        T36 = (P)YOadd(metsF1247,T37);
        tmpF1256 = now_sameQF1255;
        if (tmpF1256 != YPfalse) {
          T38 = tmpF1256;
        } else {
          T38 = sameQF1248;
        }
        xF1257 = gmsF1249;
        xF1258 = xF1257;
        T39 = (P)YPprop_elt(xF1258,(P)1);
        a29_0 = T36;
        a29_1 = T38;
        a29_2 = T39;
        metsF1247 = a29_0;
        sameQF1248 = a29_1;
        gmsF1249 = a29_2;
        goto LOOP_29;
        T28 = T35;
      }
    }
    T0 = g_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOclassL) {
  P c1_,c2_,wrt_;
  P xF1271;
  P xF1270;
  P yF1269;
  P xF1268;
  P yF1267;
  P xF1266;
  P cF1265;
  P xF1264;
  P xF1263;
  P xF1262;
  P xF1261;
  P psF1260;
  P xF1259;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
  xF1259 = wrt_;
  T13 = (P)YPprop_elt(xF1259,(P)4);
  psF1260 = T13;
  LOOP_30: {
    P a30_0;
    xF1261 = psF1260;
    xF1262 = xF1261;
    T2 = (P)YPeqQ(xF1262,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_30),LITREF(lit_31),wrt_,c1_,c2_);
      T0 = T3;
    } else {
      xF1263 = psF1260;
      xF1264 = xF1263;
      T12 = (P)YPprop_elt(xF1264,(P)0);
      cF1265 = T12;
      xF1266 = cF1265;
      yF1267 = c1_;
      T6 = (P)YPeqQ(xF1266,yF1267);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPtrue;
      } else {
        xF1268 = cF1265;
        yF1269 = c2_;
        T9 = (P)YPeqQ(xF1268,yF1269);
        T8 = (P)YPbb(T9);
        if (T9) {
          T7 = YPfalse;
        } else {
          xF1270 = psF1260;
          xF1271 = xF1270;
          T11 = (P)YPprop_elt(xF1271,(P)1);
          a30_0 = T11;
          psF1260 = a30_0;
          goto LOOP_30;
          T7 = T10;
        }
        T4 = T7;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOorder_specs_class) {
  P t1_,t2_,arg_;
  P tagF1276;
  P xF1275;
  P xF1274;
  P yF1273;
  P xF1272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF1272 = t1_;
  yF1273 = t2_;
  T2 = (P)YPeqQ(xF1272,yF1273);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_34),t1_);
    T0 = T3;
  } else {
    xF1274 = arg_;
    xF1275 = xF1274;
    T11 = (P)YPiB(xF1275,(P)3);
    tagF1276 = T11;
    T8 = (P)YPiE(tagF1276,(P)0);
    T7 = (P)YPbb(T8);
    if (T8) {
      T9 = (P)YPobject_class(xF1274);
      T6 = T9;
    } else {
      T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF1276);
      T6 = T10;
    }
    T5 = CALL3(1,VARREF(YgooSfunYOclassL),t1_,t2_,T6);
    if (T5 != YPfalse) {
      T12 = CALL2(1,VARREF(YOtup),LITREF(lit_35),t1_);
      T4 = T12;
    } else {
      T13 = CALL2(1,VARREF(YOtup),LITREF(lit_36),t2_);
      T4 = T13;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOorder_specs) {
  P t1_,t2_,arg_;
  P yF1286;
  P xF1285;
  P tagF1284;
  P xF1283;
  P xF1282;
  P yF1281;
  P xF1280;
  P tagF1279;
  P xF1278;
  P xF1277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF1277 = t1_;
  xF1278 = xF1277;
  T9 = (P)YPiB(xF1278,(P)3);
  tagF1279 = T9;
  T6 = (P)YPiE(tagF1279,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF1277);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF1279);
    T4 = T8;
  }
  xF1280 = T4;
  yF1281 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF1280,yF1281);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF1282 = t2_;
    xF1283 = xF1282;
    T17 = (P)YPiB(xF1283,(P)3);
    tagF1284 = T17;
    T14 = (P)YPiE(tagF1284,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF1282);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF1284);
      T12 = T16;
    }
    xF1285 = T12;
    yF1286 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF1285,yF1286);
    T10 = (P)YPbb(T11);
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSfunYOorder_specs_class),t1_,t2_,arg_);
    T0 = T18;
  } else {
    T19 = CALL3(1,VARREF(Yorder_specs),t1_,t2_,arg_);
    T0 = T19;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYorder_mets) {
  P m1_,m2_,args_;
  P yF1323;
  P xF1322;
  P tmpF1321;
  P yF1320;
  P xF1319;
  P yF1318;
  P xF1317;
  P yF1316;
  P xF1315;
  P idxF1314;
  P tF1313;
  P xF1312;
  P xF1311;
  P xF1310;
  P xF1309;
  P xF1308;
  P xF1307;
  P yF1306;
  P xF1305;
  P cmpF1304;
  P xF1303;
  P xF1302;
  P iF1301;
  P xF1300;
  P cmpAtypF1299;
  P xF1298;
  P xF1297;
  P xF1296;
  P iF1295;
  P xF1294;
  P m2specF1293;
  P m1specF1292;
  P yF1291;
  P xF1290;
  P idxF1289;
  P stateF1288;
  P arityF1287;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
  T32 = CALL1(1,VARREF(YgooSfunYOfun_arity),m1_);
  check_type(T32,VARREF(YLfixnumG));
  arityF1287 = T32;
  check_type(LITREF(lit_34),VARREF(YLsymG));
  stateF1288 = LITREF(lit_34);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  idxF1289 = YPint((P)0);
  LOOP_31: {
    P a31_0,a31_1;
    xF1290 = idxF1289;
    yF1291 = arityF1287;
    T2 = (P)YPiE(xF1290,yF1291);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = stateF1288;
    } else {
      T31 = CALL2(1,VARREF(YgooSfunYfun_spec),m1_,idxF1289);
      m1specF1292 = T31;
      T30 = CALL2(1,VARREF(YgooSfunYfun_spec),m2_,idxF1289);
      m2specF1293 = T30;
      xF1294 = args_;
      iF1295 = idxF1289;
      xF1296 = xF1294;
      T27 = (P)YPprop_elt(xF1296,(P)0);
      xF1297 = iF1295;
      xF1298 = xF1297;
      T29 = (P)YPiGG(xF1298,(P)2);
      T28 = (P)YPi_((P)0,T29);
      T26 = (P)YPloc_off(T27,T28);
      T25 = CALL3(1,VARREF(YgooSfunYOorder_specs),m1specF1292,m2specF1293,T26);
      check_type(T25,VARREF(YLtupG));
      cmpAtypF1299 = T25;
      xF1300 = cmpAtypF1299;
      iF1301 = YPint((P)0);
      xF1302 = iF1301;
      xF1303 = xF1302;
      T24 = (P)YPiGG(xF1303,(P)2);
      T23 = (P)YPtelt(xF1300,T24);
      check_type(T23,VARREF(YLsymG));
      cmpF1304 = T23;
      xF1305 = idxF1289;
      yF1306 = YPint((P)1);
      xF1307 = xF1305;
      xF1308 = xF1307;
      T21 = (P)YPiGG(xF1308,(P)2);
      xF1309 = yF1306;
      xF1310 = xF1309;
      T22 = (P)YPiGG(xF1310,(P)2);
      T20 = (P)YPiA(T21,T22);
      xF1311 = T20;
      xF1312 = xF1311;
      tF1313 = (P)1;
      T19 = (P)YPiLL(xF1312,(P)2);
      T18 = (P)YPiv(T19,tF1313);
      check_type(T18,VARREF(YLfixnumG));
      idxF1314 = T18;
      xF1315 = cmpF1304;
      yF1316 = LITREF(lit_34);
      T5 = (P)YPeqQ(xF1315,yF1316);
      T4 = (P)YPbb(T5);
      if (T5) {
        a31_0 = stateF1288;
        a31_1 = idxF1314;
        stateF1288 = a31_0;
        idxF1289 = a31_1;
        goto LOOP_31;
        T3 = T6;
      } else {
        xF1317 = cmpF1304;
        yF1318 = LITREF(lit_41);
        T11 = (P)YPeqQ(xF1317,yF1318);
        T10 = (P)YPbb(T11);
        T9 = CALL1(1,VARREF(Ynot),T10);
        if (T9 != YPfalse) {
          xF1319 = stateF1288;
          yF1320 = LITREF(lit_34);
          T16 = (P)YPeqQ(xF1319,yF1320);
          T15 = (P)YPbb(T16);
          tmpF1321 = T15;
          if (tmpF1321 != YPfalse) {
            T12 = tmpF1321;
          } else {
            xF1322 = cmpF1304;
            yF1323 = stateF1288;
            T14 = (P)YPeqQ(xF1322,yF1323);
            T13 = (P)YPbb(T14);
            T12 = T13;
          }
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        if (T8 != YPfalse) {
          a31_0 = cmpF1304;
          a31_1 = idxF1314;
          stateF1288 = a31_0;
          idxF1289 = a31_1;
          goto LOOP_31;
          T7 = T17;
        } else {
          T7 = LITREF(lit_41);
        }
        T3 = T7;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_make_ambiguous_20) {
  P headed_list_;
  P xF1336;
  P xF1335;
  P xF1334;
  P xF1333;
  P t1F1332;
  P xF1331;
  P xF1330;
  P tmpF1329;
  P yF1328;
  P xF1327;
  P lF1326;
  P xF1325;
  P xF1324;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(headed_list_, 0);
  xF1324 = headed_list_;
  xF1325 = xF1324;
  T6 = (P)YPprop_elt(xF1325,(P)1);
  check_type(T6,VARREF(YLlstG));
  lF1326 = T6;
  LOOP_32: {
    P a32_0;
    xF1327 = lF1326;
    yF1328 = Ynil;
    T5 = (P)YPeqQ(xF1327,yF1328);
    T4 = (P)YPbb(T5);
    tmpF1329 = T4;
    if (tmpF1329 != YPfalse) {
      T0 = tmpF1329;
    } else {
      xF1330 = lF1326;
      xF1331 = xF1330;
      T3 = (P)YPprop_elt(xF1331,(P)1);
      t1F1332 = T3;
      xF1333 = FREEREF(0);
      xF1334 = xF1333;
      T1 = (P)YPprop_elt(xF1334,(P)1);
      (P)YOtail_setter(T1,lF1326);
      (P)YOtail_setter(lF1326,FREEREF(0));
      a32_0 = t1F1332;
      lF1326 = a32_0;
      goto LOOP_32;
      T0 = T2;
    }
  }
  (P)YOtail_setter(Ynil,headed_list_);
  xF1335 = FREEREF(0);
  xF1336 = xF1335;
  T9 = (P)YPprop_elt(xF1336,(P)1);
  T8 = (P)YOpair(FREEREF(1),T9);
  T7 = (P)YOtail_setter(T8,FREEREF(0));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_precedes_allQ_21) {
  P l_;
  P xF1345;
  P xF1344;
  P yF1343;
  P xF1342;
  P xF1341;
  P xF1340;
  P yF1339;
  P xF1338;
  P lF1337;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(l_, 0);
  check_type(l_,VARREF(YLlstG));
  lF1337 = l_;
  LOOP_33: {
    P a33_0;
    xF1338 = lF1337;
    yF1339 = Ynil;
    T2 = (P)YPeqQ(xF1338,yF1339);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF1340 = lF1337;
      xF1341 = xF1340;
      T7 = (P)YPprop_elt(xF1341,(P)0);
      T6 = CALL3(1,FREEREF(2),FREEREF(0),T7,FREEREF(1));
      xF1342 = T6;
      yF1343 = LITREF(lit_35);
      T5 = (P)YPeqQ(xF1342,yF1343);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF1344 = lF1337;
        xF1345 = xF1344;
        T9 = (P)YPprop_elt(xF1345,(P)1);
        a33_0 = T9;
        lF1337 = a33_0;
        goto LOOP_33;
        T3 = T8;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_check_subsequent_ambiguities_22) {
  P oprev_;
  P xF1352;
  P xF1351;
  P xF1350;
  P xF1349;
  P tmpF1348;
  P xF1347;
  P xF1346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(oprev_, 0);
  xF1346 = oprev_;
  xF1347 = xF1346;
  T7 = (P)YPprop_elt(xF1347,(P)1);
  T6 = CALL1(1,FREEREF(0),T7);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF1348 = T5;
  if (tmpF1348 != YPfalse) {
    T1 = tmpF1348;
  } else {
    xF1349 = FREEREF(1);
    xF1350 = xF1349;
    T4 = (P)YPprop_elt(xF1350,(P)1);
    T3 = CALL1(1,FREEREF(0),T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T8 = CALL1(1,FREEREF(2),oprev_);
    T0 = T8;
  } else {
    xF1351 = oprev_;
    xF1352 = xF1351;
    T11 = (P)YPprop_elt(xF1352,(P)1);
    T10 = (P)YOpair(FREEREF(3),T11);
    T9 = (P)YOtail_setter(T10,oprev_);
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_23) {
  P oprev_,osub_;
  P xF1374;
  P xF1373;
  P yF1372;
  P xF1371;
  P yF1370;
  P xF1369;
  P indicF1368;
  P xF1367;
  P xF1366;
  P xF1365;
  P xF1364;
  P xF1363;
  P xF1362;
  P yF1361;
  P xF1360;
  P yF1359;
  P xF1358;
  P indicF1357;
  P xF1356;
  P xF1355;
  P xF1354;
  P xF1353;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
  LOOP_34: {
    P a34_0,a34_1;
    xF1364 = osub_;
    xF1365 = xF1364;
    T2 = (P)YPeqQ(xF1365,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,FREEREF(0),oprev_);
      T0 = T3;
    } else {
      xF1366 = osub_;
      xF1367 = xF1366;
      T15 = (P)YPprop_elt(xF1367,(P)0);
      T14 = CALL3(1,FREEREF(3),FREEREF(1),T15,FREEREF(2));
      indicF1368 = T14;
      xF1369 = indicF1368;
      yF1370 = LITREF(lit_35);
      T6 = (P)YPeqQ(xF1369,yF1370);
      T5 = (P)YPbb(T6);
      if (T6) {
        T7 = CALL1(1,FREEREF(0),oprev_);
        T4 = T7;
      } else {
        xF1371 = indicF1368;
        yF1372 = LITREF(lit_36);
        T10 = (P)YPeqQ(xF1371,yF1372);
        T9 = (P)YPbb(T10);
        if (T10) {
          xF1373 = osub_;
          xF1374 = xF1373;
          T12 = (P)YPprop_elt(xF1374,(P)1);
          a34_0 = osub_;
          a34_1 = T12;
          oprev_ = a34_0;
          osub_ = a34_1;
          goto LOOP_34;
          T8 = T11;
        } else {
          T13 = CALL1(1,FREEREF(4),oprev_);
          T8 = T13;
        }
        T4 = T8;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYord_app_mets_1) {
  P mets_,args_,order_mets_;
  P xF1395;
  P xF1394;
  P xF1393;
  P xF1392;
  P xF1391;
  P xF1390;
  P xF1389;
  P xF1388;
  P insertF1387;
  P check_subsequent_ambiguitiesF1386;
  P precedes_allQF1385;
  P make_ambiguousF1384;
  P metF1383;
  P xF1382;
  P xF1381;
  P xF1380;
  P yF1379;
  P xF1378;
  P metsF1377;
  P aheadF1376;
  P oheadF1375;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
  T17 = (P)YOpair(YPfalse,Ynil);
  check_type(T17,VARREF(YLlstG));
  oheadF1375 = T17;
  T16 = (P)YOpair(YPfalse,Ynil);
  check_type(T16,VARREF(YLlstG));
  aheadF1376 = T16;
  check_type(mets_,VARREF(YLlstG));
  metsF1377 = mets_;
  LOOP_35: {
    P a35_0;
    xF1378 = metsF1377;
    yF1379 = Ynil;
    T4 = (P)YPeqQ(xF1378,yF1379);
    T3 = (P)YPbb(T4);
    xF1380 = T3;
    T2 = (P)YPeqQ(xF1380,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF1381 = metsF1377;
      xF1382 = xF1381;
      T12 = (P)YPprop_elt(xF1382,(P)0);
      check_type(T12,VARREF(YLmetG));
      metF1383 = T12;
      T8 = FUNSHELL(1,fun_make_ambiguous_20,2);
      make_ambiguousF1384 = T8;
      T9 = FUNSHELL(1,fun_precedes_allQ_21,3);
      precedes_allQF1385 = T9;
      T10 = FUNSHELL(1,fun_check_subsequent_ambiguities_22,4);
      check_subsequent_ambiguitiesF1386 = T10;
      T11 = FUNSHELL(1,fun_insert_23,5);
      insertF1387 = T11;
      FUNINIT(make_ambiguousF1384, 2,aheadF1376,metF1383);
      FUNINIT(precedes_allQF1385, 3,metF1383,args_,order_mets_);
      FUNINIT(check_subsequent_ambiguitiesF1386, 4,precedes_allQF1385,aheadF1376,make_ambiguousF1384,metF1383);
      FUNINIT(insertF1387, 5,check_subsequent_ambiguitiesF1386,metF1383,args_,order_mets_,make_ambiguousF1384);
      xF1388 = oheadF1375;
      xF1389 = xF1388;
      T5 = (P)YPprop_elt(xF1389,(P)1);
      CALL2(1,insertF1387,oheadF1375,T5);
      xF1390 = metsF1377;
      xF1391 = xF1390;
      T7 = (P)YPprop_elt(xF1391,(P)1);
      a35_0 = T7;
      metsF1377 = a35_0;
      goto LOOP_35;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  xF1392 = oheadF1375;
  xF1393 = xF1392;
  T14 = (P)YPprop_elt(xF1393,(P)1);
  xF1394 = aheadF1376;
  xF1395 = xF1394;
  T15 = (P)YPprop_elt(xF1395,(P)1);
  T13 = CALL2(1,VARREF(YOtup),T14,T15);
UNLINK_STACK();
  RET(T13);
}

LOCCODEDEF(fun_25) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSfunYmet_appQ) {
  P met_,args_;
  P tF1435;
  P xF1434;
  P xF1433;
  P xF1432;
  P xF1431;
  P xF1430;
  P xF1429;
  P yF1428;
  P xF1427;
  P xF1426;
  P xF1425;
  P xF1424;
  P xF1423;
  P xF1422;
  P xF1421;
  P c2F1420;
  P c1F1419;
  P tagF1418;
  P xF1417;
  P xF1416;
  P cF1415;
  P oF1414;
  P yF1413;
  P xF1412;
  P tagF1411;
  P xF1410;
  P xF1409;
  P tF1408;
  P oF1407;
  P xF1406;
  P xF1405;
  P xF1404;
  P iF1403;
  P xF1402;
  P yF1401;
  P xF1400;
  P iF1399;
  P nF1398;
  P xF1397;
  P xF1396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T4 = CALL1(1,VARREF(YgooSfunYOfun_unification_vars),met_);
  xF1396 = T4;
  xF1397 = xF1396;
  T3 = (P)YPeqQ(xF1397,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSfunYmet_app_unify),met_,args_);
    T0 = T5;
  } else {
    T44 = CALL1(1,VARREF(YgooSfunYOfun_arity),met_);
    check_type(T44,VARREF(YLfixnumG));
    nF1398 = T44;
    check_type(YPint((P)0),VARREF(YLfixnumG));
    iF1399 = YPint((P)0);
    LOOP_36: {
      P a36_0;
      xF1400 = iF1399;
      yF1401 = nF1398;
      T8 = (P)YPiE(xF1400,yF1401);
      T7 = (P)YPbb(T8);
      if (T8) {
        T6 = YPtrue;
      } else {
        xF1402 = args_;
        iF1403 = iF1399;
        xF1404 = xF1402;
        T34 = (P)YPprop_elt(xF1404,(P)0);
        xF1405 = iF1403;
        xF1406 = xF1405;
        T36 = (P)YPiGG(xF1406,(P)2);
        T35 = (P)YPi_((P)0,T36);
        T33 = (P)YPloc_off(T34,T35);
        oF1407 = T33;
        T37 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,iF1399);
        tF1408 = T37;
        xF1409 = tF1408;
        xF1410 = xF1409;
        T18 = (P)YPiB(xF1410,(P)3);
        tagF1411 = T18;
        T15 = (P)YPiE(tagF1411,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF1409);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1411);
          T13 = T17;
        }
        xF1412 = T13;
        yF1413 = VARREF(YLclassG);
        T12 = (P)YPeqQ(xF1412,yF1413);
        T11 = (P)YPbb(T12);
        if (T12) {
          oF1414 = oF1407;
          cF1415 = tF1408;
          xF1416 = oF1414;
          xF1417 = xF1416;
          T31 = (P)YPiB(xF1417,(P)3);
          tagF1418 = T31;
          T28 = (P)YPiE(tagF1418,(P)0);
          T27 = (P)YPbb(T28);
          if (T28) {
            T29 = (P)YPobject_class(xF1416);
            T26 = T29;
          } else {
            T30 = (P)YPelt(VARREF(YDdirect_object_class),tagF1418);
            T26 = T30;
          }
          c1F1419 = T26;
          c2F1420 = cF1415;
          xF1421 = c1F1419;
          T22 = (P)YPprop_elt(xF1421,(P)11);
          xF1422 = c2F1420;
          T24 = (P)YPprop_elt(xF1422,(P)10);
          xF1423 = T24;
          xF1424 = xF1423;
          T23 = (P)YPiGG(xF1424,(P)2);
          T21 = (P)YPselt(T22,T23);
          xF1425 = YPint((P)1);
          xF1426 = xF1425;
          T25 = (P)YPiGG(xF1426,(P)2);
          T20 = (P)YPiE(T21,T25);
          T19 = (P)YPbb(T20);
          T10 = T19;
        } else {
          T32 = CALL2(1,VARREF(YisaQ),oF1407,tF1408);
          T10 = T32;
        }
        if (T10 != YPfalse) {
          xF1427 = iF1399;
          yF1428 = YPint((P)1);
          xF1429 = xF1427;
          xF1430 = xF1429;
          T42 = (P)YPiGG(xF1430,(P)2);
          xF1431 = yF1428;
          xF1432 = xF1431;
          T43 = (P)YPiGG(xF1432,(P)2);
          T41 = (P)YPiA(T42,T43);
          xF1433 = T41;
          xF1434 = xF1433;
          tF1435 = (P)1;
          T40 = (P)YPiLL(xF1434,(P)2);
          T39 = (P)YPiv(T40,tF1435);
          a36_0 = T39;
          iF1399 = a36_0;
          goto LOOP_36;
          T9 = T38;
        } else {
          T9 = YPfalse;
        }
        T6 = T9;
      }
    }
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYord_app_metsT) {
  P gf_,args_;
  P considered_metsF1446;
  P xF1445;
  P xF1444;
  P ansF1443;
  P mF1442;
  P xF1441;
  P xF1440;
  P xF1439;
  P xF1438;
  P msF1437;
  P ansF1436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
  ansF1436 = Ynil;
  T10 = CALL1(1,VARREF(YgooSfunYOfun_mets),gf_);
  msF1437 = T10;
  LOOP_37: {
    P a37_0,a37_1;
    xF1438 = msF1437;
    xF1439 = xF1438;
    T3 = (P)YPeqQ(xF1439,VARREF(Ynil));
    T2 = (P)YPbb(T3);
    if (T3) {
      T1 = ansF1436;
    } else {
      xF1440 = msF1437;
      xF1441 = xF1440;
      T9 = (P)YPprop_elt(xF1441,(P)0);
      mF1442 = T9;
      T7 = CALL2(1,VARREF(YgooSfunYmet_appQ),mF1442,args_);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(mF1442,ansF1436);
        T6 = T8;
      } else {
        T6 = ansF1436;
      }
      ansF1443 = T6;
      xF1444 = msF1437;
      xF1445 = xF1444;
      T5 = (P)YPprop_elt(xF1445,(P)1);
      a37_0 = ansF1443;
      a37_1 = T5;
      ansF1436 = a37_0;
      msF1437 = a37_1;
      goto LOOP_37;
      T1 = T4;
    }
  }
  considered_metsF1446 = T1;
  T0 = CALL3(1,VARREF(YgooSfunYord_app_mets_1),considered_metsF1446,args_,VARREF(YgooSfunYorder_mets));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYord_app_mets) {
  P gf_,args_;
  P T0;
LINK_STACK();
  ARG(gf_, 0);
  NARGS(args_, 1);
  T0 = CALL2(1,VARREF(YgooSfunYord_app_metsT),gf_,args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_arg_pos) {
  P x_;
  P xF1447;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1447 = x_;
  T0 = (P)YPprop_elt(xF1447,(P)1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_arg_pos_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_arg_pos_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_singletons) {
  P x_;
  P xF1448;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1448 = x_;
  T0 = (P)YPprop_elt(xF1448,(P)2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_singletons_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_singletons_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_classes) {
  P x_;
  P xF1449;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1449 = x_;
  T0 = (P)YPprop_elt(xF1449,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOgen_cache_classes_setter) {
  P z_,x_;
  P T0;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T0 = (P)YPgen_cache_classes_setter(z_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYmethod_accessor_offset) {
  P gen_,met_,args_;
  P xF1473;
  P xF1472;
  P xF1471;
  P xF1470;
  P iF1469;
  P xF1468;
  P xF1467;
  P xF1466;
  P xF1465;
  P iF1464;
  P xF1463;
  P yF1462;
  P xF1461;
  P nF1460;
  P xF1459;
  P xF1458;
  P propQF1457;
  P yF1456;
  P xF1455;
  P tagF1454;
  P xF1453;
  P xF1452;
  P propF1451;
  P xF1450;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
  xF1450 = met_;
  T25 = (P)YPprop_elt(xF1450,(P)3);
  propF1451 = T25;
  if (propF1451 != YPfalse) {
    xF1452 = propF1451;
    xF1453 = xF1452;
    T24 = (P)YPiB(xF1453,(P)3);
    tagF1454 = T24;
    T21 = (P)YPiE(tagF1454,(P)0);
    T20 = (P)YPbb(T21);
    if (T21) {
      T22 = (P)YPobject_class(xF1452);
      T19 = T22;
    } else {
      T23 = (P)YPelt(VARREF(YDdirect_object_class),tagF1454);
      T19 = T23;
    }
    xF1455 = T19;
    yF1456 = VARREF(YLpropG);
    T18 = (P)YPeqQ(xF1455,yF1456);
    T17 = (P)YPbb(T18);
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
  propQF1457 = T16;
  xF1458 = args_;
  xF1459 = xF1458;
  T15 = (P)YPprop_elt(xF1459,(P)1);
  nF1460 = T15;
  if (propQF1457 != YPfalse) {
    xF1461 = nF1460;
    yF1462 = YPint((P)1);
    T3 = (P)YPiE(xF1461,yF1462);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF1463 = args_;
      iF1464 = YPint((P)0);
      xF1465 = xF1463;
      T6 = (P)YPprop_elt(xF1465,(P)0);
      xF1466 = iF1464;
      xF1467 = xF1466;
      T8 = (P)YPiGG(xF1467,(P)2);
      T7 = (P)YPi_((P)0,T8);
      T5 = (P)YPloc_off(T6,T7);
      T4 = CALL2(1,VARREF(Yprop_offset),T5,gen_);
      T1 = T4;
    } else {
      xF1468 = args_;
      iF1469 = YPint((P)1);
      xF1470 = xF1468;
      T11 = (P)YPprop_elt(xF1470,(P)0);
      xF1471 = iF1469;
      xF1472 = xF1471;
      T13 = (P)YPiGG(xF1472,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      xF1473 = propF1451;
      T14 = (P)YPprop_elt(xF1473,(P)1);
      T9 = CALL2(1,VARREF(Yprop_offset),T10,T14);
      T1 = T9;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOsingleton_specQ) {
  P x_;
  P xF1486;
  P xF1485;
  P xF1484;
  P xF1483;
  P xF1482;
  P xF1481;
  P c2F1480;
  P c1F1479;
  P tagF1478;
  P xF1477;
  P xF1476;
  P cF1475;
  P oF1474;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1474 = x_;
  cF1475 = VARREF(YLsingletonG);
  xF1476 = oF1474;
  xF1477 = xF1476;
  T12 = (P)YPiB(xF1477,(P)3);
  tagF1478 = T12;
  T9 = (P)YPiE(tagF1478,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1476);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1478);
    T7 = T11;
  }
  c1F1479 = T7;
  c2F1480 = cF1475;
  xF1481 = c1F1479;
  T3 = (P)YPprop_elt(xF1481,(P)11);
  xF1482 = c2F1480;
  T5 = (P)YPprop_elt(xF1482,(P)10);
  xF1483 = T5;
  xF1484 = xF1483;
  T4 = (P)YPiGG(xF1484,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1485 = YPint((P)1);
  xF1486 = xF1485;
  T6 = (P)YPiGG(xF1486,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOsubclass_specQ) {
  P x_;
  P xF1499;
  P xF1498;
  P xF1497;
  P xF1496;
  P xF1495;
  P xF1494;
  P c2F1493;
  P c1F1492;
  P tagF1491;
  P xF1490;
  P xF1489;
  P cF1488;
  P oF1487;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1487 = x_;
  cF1488 = VARREF(YLsubclassG);
  xF1489 = oF1487;
  xF1490 = xF1489;
  T12 = (P)YPiB(xF1490,(P)3);
  tagF1491 = T12;
  T9 = (P)YPiE(tagF1491,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1489);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1491);
    T7 = T11;
  }
  c1F1492 = T7;
  c2F1493 = cF1488;
  xF1494 = c1F1492;
  T3 = (P)YPprop_elt(xF1494,(P)11);
  xF1495 = c2F1493;
  T5 = (P)YPprop_elt(xF1495,(P)10);
  xF1496 = T5;
  xF1497 = xF1496;
  T4 = (P)YPiGG(xF1497,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1498 = YPint((P)1);
  xF1499 = xF1498;
  T6 = (P)YPiGG(xF1499,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOunion_specQ) {
  P x_;
  P xF1512;
  P xF1511;
  P xF1510;
  P xF1509;
  P xF1508;
  P xF1507;
  P c2F1506;
  P c1F1505;
  P tagF1504;
  P xF1503;
  P xF1502;
  P cF1501;
  P oF1500;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1500 = x_;
  cF1501 = VARREF(YLunionG);
  xF1502 = oF1500;
  xF1503 = xF1502;
  T12 = (P)YPiB(xF1503,(P)3);
  tagF1504 = T12;
  T9 = (P)YPiE(tagF1504,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1502);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1504);
    T7 = T11;
  }
  c1F1505 = T7;
  c2F1506 = cF1501;
  xF1507 = c1F1505;
  T3 = (P)YPprop_elt(xF1507,(P)11);
  xF1508 = c2F1506;
  T5 = (P)YPprop_elt(xF1508,(P)10);
  xF1509 = T5;
  xF1510 = xF1509;
  T4 = (P)YPiGG(xF1510,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1511 = YPint((P)1);
  xF1512 = xF1511;
  T6 = (P)YPiGG(xF1512,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOprecise_specQ) {
  P x_;
  P xF1515;
  P tmpF1514;
  P tmpF1513;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T7 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),x_);
  tmpF1513 = T7;
  if (tmpF1513 != YPfalse) {
    T0 = tmpF1513;
  } else {
    T6 = CALL1(1,VARREF(YgooSfunYOsubclass_specQ),x_);
    tmpF1514 = T6;
    if (tmpF1514 != YPfalse) {
      T1 = tmpF1514;
    } else {
      T3 = CALL1(1,VARREF(YgooSfunYOunion_specQ),x_);
      if (T3 != YPfalse) {
        xF1515 = x_;
        T5 = (P)YPprop_elt(xF1515,(P)0);
        T4 = CALL2(1,VARREF(YOanyQ),VARREF(YgooSfunYOprecise_specQ),T5);
        T2 = T4;
      } else {
        T2 = YPfalse;
      }
      T1 = T2;
    }
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_40) {
  P met_;
  P yF1517;
  P xF1516;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  T2 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,FREEREF(0));
  xF1516 = T2;
  yF1517 = VARREF(YLanyG);
  T1 = (P)YPiE(xF1516,yF1517);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOmets_unspecialized_atQ) {
  P mets_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = FUNFAB(fun_40,1,pos_);
  T0 = CALL2(1,VARREF(YOallQ),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_42) {
  P met_;
  P T0,T1;
LINK_STACK();
  ARG(met_, 0);
  T1 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,FREEREF(1));
  T0 = CALL2(1,VARREF(YOsubtypeQ),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOprune_mets_by_type_at) {
  P mets_,type_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(type_, 1);
  ARG(pos_, 2);
  T1 = FUNFAB(fun_42,2,type_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_44) {
  P met_;
  P T0;
LINK_STACK();
  ARG(met_, 0);
  T0 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOmets_specs_at) {
  P mets_,pos_;
  P T0,T1;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = FUNFAB(fun_44,1,pos_);
  T0 = CALL2(1,VARREF(YOmap),T1,mets_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_46) {
  P spec_;
  P T0;
LINK_STACK();
  ARG(spec_, 0);
  T0 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOmets_singletons_at) {
  P mets_,pos_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = fun_46;
  T2 = CALL2(1,VARREF(YgooSfunYOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_48) {
  P spec_;
  P T0;
LINK_STACK();
  ARG(spec_, 0);
  T0 = CALL1(1,VARREF(YgooSfunYOsubclass_specQ),spec_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOmets_subclasses_at) {
  P mets_,pos_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T1 = fun_48;
  T2 = CALL2(1,VARREF(YgooSfunYOmets_specs_at),mets_,pos_);
  T0 = CALL2(1,VARREF(YOpick),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOcache_add) {
  P t_,k_,v_;
  P xF1594;
  P xF1593;
  P iF1592;
  P xF1591;
  P zF1590;
  P tF1589;
  P xF1588;
  P xF1587;
  P xF1586;
  P xF1585;
  P xF1584;
  P xF1583;
  P yF1582;
  P xF1581;
  P xF1580;
  P xF1579;
  P iF1578;
  P xF1577;
  P zF1576;
  P tF1575;
  P xF1574;
  P xF1573;
  P xF1572;
  P xF1571;
  P xF1570;
  P xF1569;
  P yF1568;
  P xF1567;
  P xF1566;
  P xF1565;
  P iF1564;
  P xF1563;
  P zF1562;
  P xF1561;
  P xF1560;
  P iF1559;
  P xF1558;
  P iF1557;
  P tF1556;
  P xF1555;
  P xF1554;
  P xF1553;
  P xF1552;
  P xF1551;
  P xF1550;
  P yF1549;
  P xF1548;
  P xF1547;
  P xF1546;
  P iF1545;
  P xF1544;
  P zF1543;
  P xF1542;
  P xF1541;
  P iF1540;
  P xF1539;
  P xF1538;
  P yF1537;
  P xF1536;
  P iF1535;
  P resF1534;
  P xF1533;
  P xF1532;
  P tF1531;
  P xF1530;
  P xF1529;
  P xF1528;
  P xF1527;
  P xF1526;
  P xF1525;
  P yF1524;
  P xF1523;
  P olenF1522;
  P tF1521;
  P xF1520;
  P xF1519;
  P xF1518;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
  xF1518 = t_;
  T42 = (P)YPtlen(xF1518);
  xF1519 = T42;
  xF1520 = xF1519;
  tF1521 = (P)1;
  T41 = (P)YPiLL(xF1520,(P)2);
  T40 = (P)YPiv(T41,tF1521);
  olenF1522 = T40;
  xF1523 = olenF1522;
  yF1524 = YPint((P)2);
  xF1525 = xF1523;
  xF1526 = xF1525;
  T38 = (P)YPiGG(xF1526,(P)2);
  xF1527 = yF1524;
  xF1528 = xF1527;
  T39 = (P)YPiGG(xF1528,(P)2);
  T37 = (P)YPiA(T38,T39);
  xF1529 = T37;
  xF1530 = xF1529;
  tF1531 = (P)1;
  T36 = (P)YPiLL(xF1530,(P)2);
  T35 = (P)YPiv(T36,tF1531);
  xF1532 = T35;
  xF1533 = xF1532;
  T34 = (P)YPiGG(xF1533,(P)2);
  T33 = (P)YPtup(T34,YPfalse);
  resF1534 = T33;
  iF1535 = YPint((P)0);
  LOOP_38: {
    P a38_0;
    xF1536 = iF1535;
    yF1537 = olenF1522;
    T4 = (P)YPiE(xF1536,yF1537);
    T3 = (P)YPbb(T4);
    xF1538 = T3;
    T2 = (P)YPeqQ(xF1538,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF1539 = t_;
      iF1540 = iF1535;
      xF1541 = iF1540;
      xF1542 = xF1541;
      T8 = (P)YPiGG(xF1542,(P)2);
      T7 = (P)YPtelt(xF1539,T8);
      zF1543 = T7;
      xF1544 = resF1534;
      iF1545 = iF1535;
      xF1546 = iF1545;
      xF1547 = xF1546;
      T6 = (P)YPiGG(xF1547,(P)2);
      T5 = (P)YPtelt_setter(zF1543,xF1544,T6);
      xF1548 = iF1535;
      yF1549 = YPint((P)1);
      xF1550 = xF1548;
      xF1551 = xF1550;
      T22 = (P)YPiGG(xF1551,(P)2);
      xF1552 = yF1549;
      xF1553 = xF1552;
      T23 = (P)YPiGG(xF1553,(P)2);
      T21 = (P)YPiA(T22,T23);
      xF1554 = T21;
      xF1555 = xF1554;
      tF1556 = (P)1;
      T20 = (P)YPiLL(xF1555,(P)2);
      T19 = (P)YPiv(T20,tF1556);
      iF1557 = T19;
      xF1558 = t_;
      iF1559 = iF1557;
      xF1560 = iF1559;
      xF1561 = xF1560;
      T12 = (P)YPiGG(xF1561,(P)2);
      T11 = (P)YPtelt(xF1558,T12);
      zF1562 = T11;
      xF1563 = resF1534;
      iF1564 = iF1557;
      xF1565 = iF1564;
      xF1566 = xF1565;
      T10 = (P)YPiGG(xF1566,(P)2);
      T9 = (P)YPtelt_setter(zF1562,xF1563,T10);
      xF1567 = iF1557;
      yF1568 = YPint((P)1);
      xF1569 = xF1567;
      xF1570 = xF1569;
      T17 = (P)YPiGG(xF1570,(P)2);
      xF1571 = yF1568;
      xF1572 = xF1571;
      T18 = (P)YPiGG(xF1572,(P)2);
      T16 = (P)YPiA(T17,T18);
      xF1573 = T16;
      xF1574 = xF1573;
      tF1575 = (P)1;
      T15 = (P)YPiLL(xF1574,(P)2);
      T14 = (P)YPiv(T15,tF1575);
      a38_0 = T14;
      iF1535 = a38_0;
      goto LOOP_38;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
  zF1576 = k_;
  xF1577 = resF1534;
  iF1578 = olenF1522;
  xF1579 = iF1578;
  xF1580 = xF1579;
  T25 = (P)YPiGG(xF1580,(P)2);
  T24 = (P)YPtelt_setter(zF1576,xF1577,T25);
  zF1590 = v_;
  xF1591 = resF1534;
  xF1581 = olenF1522;
  yF1582 = YPint((P)1);
  xF1583 = xF1581;
  xF1584 = xF1583;
  T31 = (P)YPiGG(xF1584,(P)2);
  xF1585 = yF1582;
  xF1586 = xF1585;
  T32 = (P)YPiGG(xF1586,(P)2);
  T30 = (P)YPiA(T31,T32);
  xF1587 = T30;
  xF1588 = xF1587;
  tF1589 = (P)1;
  T29 = (P)YPiLL(xF1588,(P)2);
  T28 = (P)YPiv(T29,tF1589);
  iF1592 = T28;
  xF1593 = iF1592;
  xF1594 = xF1593;
  T27 = (P)YPiGG(xF1594,(P)2);
  T26 = (P)YPtelt_setter(zF1590,xF1591,T27);
UNLINK_STACK();
  QRET(resF1534);
}

FUNCODEDEF(YgooSfunYgen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P tF1658;
  P xF1657;
  P xF1656;
  P xF1655;
  P xF1654;
  P xF1653;
  P xF1652;
  P yF1651;
  P xF1650;
  P tF1649;
  P xF1648;
  P xF1647;
  P xF1646;
  P xF1645;
  P xF1644;
  P xF1643;
  P yF1642;
  P xF1641;
  P vF1640;
  P xF1639;
  P xF1638;
  P iF1637;
  P xF1636;
  P tF1635;
  P xF1634;
  P xF1633;
  P xF1632;
  P xF1631;
  P xF1630;
  P xF1629;
  P yF1628;
  P xF1627;
  P yF1626;
  P xF1625;
  P xF1624;
  P xF1623;
  P iF1622;
  P xF1621;
  P valF1620;
  P tF1619;
  P xF1618;
  P xF1617;
  P xF1616;
  P xF1615;
  P xF1614;
  P xF1613;
  P yF1612;
  P xF1611;
  P tagF1610;
  P xF1609;
  P xF1608;
  P xF1607;
  P yF1606;
  P xF1605;
  P yF1604;
  P xF1603;
  P tF1602;
  P xF1601;
  P xF1600;
  P xF1599;
  P jF1598;
  P assocsF1597;
  P cacheF1596;
  P tmpF1595;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
LINK_STACK();
  ARG(key_, 0);
  ARG(instance_, 1);
  ARG(all_assocs_, 2);
  ARG(all_assocs_setter_, 3);
  ARG(gen_, 4);
  ARG(cache_, 5);
  ARG(mets_, 6);
  ARG(sorted_mets_, 7);
  ARG(i_, 8);
  ARG(args_, 9);
  tmpF1595 = cache_;
  if (tmpF1595 != YPfalse) {
    T56 = tmpF1595;
  } else {
    T57 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
    T56 = T57;
  }
  cacheF1596 = T56;
  T55 = CALL1(1,all_assocs_,cacheF1596);
  assocsF1597 = T55;
  jF1598 = YPint((P)0);
  LOOP_39: {
    P a39_0;
    xF1603 = jF1598;
    xF1599 = assocsF1597;
    T6 = (P)YPtlen(xF1599);
    xF1600 = T6;
    xF1601 = xF1600;
    tF1602 = (P)1;
    T5 = (P)YPiLL(xF1601,(P)2);
    T4 = (P)YPiv(T5,tF1602);
    yF1604 = T4;
    T3 = (P)YPiE(xF1603,yF1604);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF1605 = all_assocs_;
      yF1606 = VARREF(YgooSfunYOgen_cache_classes);
      T10 = (P)YPeqQ(xF1605,yF1606);
      T9 = (P)YPbb(T10);
      if (T10) {
        T12 = key_;
        xF1607 = T12;
        T11 = (P)YPprop_elt(xF1607,(P)9);
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
      if (T8 != YPfalse) {
        CALL1(1,VARREF(Yupdate_instance_for_changed_class),instance_);
        xF1608 = instance_;
        xF1609 = xF1608;
        T18 = (P)YPiB(xF1609,(P)3);
        tagF1610 = T18;
        T15 = (P)YPiE(tagF1610,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF1608);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1610);
          T13 = T17;
        }
        key_ = T13;
        T20 = CALL1(0,all_assocs_,cacheF1596);
        a39_0 = T20;
        jF1598 = a39_0;
        goto LOOP_39;
        T7 = T19;
      } else {
        xF1611 = i_;
        yF1612 = YPint((P)1);
        xF1613 = xF1611;
        xF1614 = xF1613;
        T28 = (P)YPiGG(xF1614,(P)2);
        xF1615 = yF1612;
        xF1616 = xF1615;
        T29 = (P)YPiGG(xF1616,(P)2);
        T27 = (P)YPiA(T28,T29);
        xF1617 = T27;
        xF1618 = xF1617;
        tF1619 = (P)1;
        T26 = (P)YPiLL(xF1618,(P)2);
        T25 = (P)YPiv(T26,tF1619);
        T24 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,YPfalse,mets_,sorted_mets_,T25,args_);
        valF1620 = T24;
        T23 = key_;
        T22 = CALL3(1,VARREF(YgooSfunYOcache_add),assocsF1597,T23,valF1620);
        T21 = CALL2(1,all_assocs_setter_,T22,cacheF1596);
        T7 = T21;
      }
      T1 = T7;
    } else {
      xF1621 = assocsF1597;
      iF1622 = jF1598;
      xF1623 = iF1622;
      xF1624 = xF1623;
      T34 = (P)YPiGG(xF1624,(P)2);
      T33 = (P)YPtelt(xF1621,T34);
      xF1625 = T33;
      T35 = key_;
      yF1626 = T35;
      T32 = (P)YPeqQ(xF1625,yF1626);
      T31 = (P)YPbb(T32);
      if (T32) {
        xF1636 = assocsF1597;
        xF1627 = jF1598;
        yF1628 = YPint((P)1);
        xF1629 = xF1627;
        xF1630 = xF1629;
        T47 = (P)YPiGG(xF1630,(P)2);
        xF1631 = yF1628;
        xF1632 = xF1631;
        T48 = (P)YPiGG(xF1632,(P)2);
        T46 = (P)YPiA(T47,T48);
        xF1633 = T46;
        xF1634 = xF1633;
        tF1635 = (P)1;
        T45 = (P)YPiLL(xF1634,(P)2);
        T44 = (P)YPiv(T45,tF1635);
        iF1637 = T44;
        xF1638 = iF1637;
        xF1639 = xF1638;
        T43 = (P)YPiGG(xF1639,(P)2);
        T42 = (P)YPtelt(xF1636,T43);
        vF1640 = T42;
        xF1641 = i_;
        yF1642 = YPint((P)1);
        xF1643 = xF1641;
        xF1644 = xF1643;
        T40 = (P)YPiGG(xF1644,(P)2);
        xF1645 = yF1642;
        xF1646 = xF1645;
        T41 = (P)YPiGG(xF1646,(P)2);
        T39 = (P)YPiA(T40,T41);
        xF1647 = T39;
        xF1648 = xF1647;
        tF1649 = (P)1;
        T38 = (P)YPiLL(xF1648,(P)2);
        T37 = (P)YPiv(T38,tF1649);
        T36 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,vF1640,mets_,sorted_mets_,T37,args_);
        T30 = T36;
      } else {
        xF1650 = jF1598;
        yF1651 = YPint((P)2);
        xF1652 = xF1650;
        xF1653 = xF1652;
        T53 = (P)YPiGG(xF1653,(P)2);
        xF1654 = yF1651;
        xF1655 = xF1654;
        T54 = (P)YPiGG(xF1655,(P)2);
        T52 = (P)YPiA(T53,T54);
        xF1656 = T52;
        xF1657 = xF1656;
        tF1658 = (P)1;
        T51 = (P)YPiLL(xF1657,(P)2);
        T50 = (P)YPiv(T51,tF1658);
        a39_0 = T50;
        jF1598 = a39_0;
        goto LOOP_39;
        T30 = T49;
      }
      T1 = T30;
    }
  }
UNLINK_STACK();
  QRET(cacheF1596);
}

FUNCODEDEF(YgooSfunYOspecd_args) {
  P args_,i_,arg_;
  P tF1695;
  P xF1694;
  P xF1693;
  P xF1692;
  P xF1691;
  P xF1690;
  P xF1689;
  P yF1688;
  P xF1687;
  P xF1686;
  P xF1685;
  P xF1684;
  P iF1683;
  P xF1682;
  P zF1681;
  P xF1680;
  P xF1679;
  P xF1678;
  P iF1677;
  P xF1676;
  P yF1675;
  P xF1674;
  P yF1673;
  P xF1672;
  P xF1671;
  P xF1670;
  P kF1669;
  P rF1668;
  P tF1667;
  P xF1666;
  P xF1665;
  P xF1664;
  P vF1663;
  P xF1662;
  P xF1661;
  P xF1660;
  P xF1659;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
  xF1659 = args_;
  xF1660 = xF1659;
  T30 = (P)YPprop_elt(xF1660,(P)1);
  xF1661 = T30;
  xF1662 = xF1661;
  T29 = (P)YPiGG(xF1662,(P)2);
  T28 = (P)YPtup(T29,YPfalse);
  vF1663 = T28;
  T24 = (P)YPtlen(vF1663);
  T23 = (P)YPprop_dat_at(vF1663,T24);
  xF1664 = T23;
  T22 = (P)YPtag_into(xF1664,(P)3);
  T27 = (P)YPtlen(vF1663);
  xF1665 = T27;
  xF1666 = xF1665;
  tF1667 = (P)1;
  T26 = (P)YPiLL(xF1666,(P)2);
  T25 = (P)YPiv(T26,tF1667);
  T21 = (P)YPopts_tup(T22,T25,vF1663);
  rF1668 = T21;
  kF1669 = YPint((P)0);
  LOOP_40: {
    P a40_0;
    xF1670 = args_;
    xF1671 = xF1670;
    T3 = (P)YPprop_elt(xF1671,(P)1);
    xF1672 = T3;
    yF1673 = kF1669;
    T2 = (P)YPeqQ(xF1672,yF1673);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF1668;
    } else {
      xF1674 = kF1669;
      yF1675 = i_;
      T10 = (P)YPeqQ(xF1674,yF1675);
      T9 = (P)YPbb(T10);
      if (T10) {
        T8 = arg_;
      } else {
        xF1676 = args_;
        iF1677 = kF1669;
        xF1678 = xF1676;
        T12 = (P)YPprop_elt(xF1678,(P)0);
        xF1679 = iF1677;
        xF1680 = xF1679;
        T14 = (P)YPiGG(xF1680,(P)2);
        T13 = (P)YPi_((P)0,T14);
        T11 = (P)YPloc_off(T12,T13);
        T8 = T11;
      }
      zF1681 = T8;
      xF1682 = rF1668;
      iF1683 = kF1669;
      xF1684 = xF1682;
      T5 = (P)YPprop_elt(xF1684,(P)0);
      xF1685 = iF1683;
      xF1686 = xF1685;
      T7 = (P)YPiGG(xF1686,(P)2);
      T6 = (P)YPi_((P)0,T7);
      T4 = (P)YPloc_off_setter(zF1681,T5,T6);
      xF1687 = kF1669;
      yF1688 = YPint((P)1);
      xF1689 = xF1687;
      xF1690 = xF1689;
      T19 = (P)YPiGG(xF1690,(P)2);
      xF1691 = yF1688;
      xF1692 = xF1691;
      T20 = (P)YPiGG(xF1692,(P)2);
      T18 = (P)YPiA(T19,T20);
      xF1693 = T18;
      xF1694 = xF1693;
      tF1695 = (P)1;
      T17 = (P)YPiLL(xF1694,(P)2);
      T16 = (P)YPiv(T17,tF1695);
      a40_0 = T16;
      kF1669 = a40_0;
      goto LOOP_40;
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYrequires_singleton_prec) {
  P mets_,pos_;
  P xF1697;
  P xF1696;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYOmets_subclasses_at),mets_,pos_);
  xF1696 = T3;
  xF1697 = xF1696;
  T2 = (P)YPeqQ(xF1697,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P xF1715;
  P xF1714;
  P app_metsF1713;
  P smetsF1712;
  P argsF1711;
  P argF1710;
  P xF1709;
  P singF1708;
  P xF1707;
  P xF1706;
  P xF1705;
  P xF1704;
  P singletonsF1703;
  P cacheF1702;
  P xF1701;
  P xF1700;
  P singletonsF1699;
  P tmpF1698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  tmpF1698 = cache_;
  if (tmpF1698 != YPfalse) {
    T0 = tmpF1698;
  } else {
    T2 = CALL2(1,VARREF(YgooSfunYrequires_singleton_prec),mets_,i_);
    if (T2 != YPfalse) {
      T3 = (P)YPgen_cache(YPfalse,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
      T1 = T3;
    } else {
      T18 = CALL2(1,VARREF(YgooSfunYOmets_singletons_at),mets_,i_);
      singletonsF1699 = T18;
      xF1700 = singletonsF1699;
      xF1701 = xF1700;
      T6 = (P)YPeqQ(xF1701,VARREF(Ynil));
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPfalse;
      } else {
        T17 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
        cacheF1702 = T17;
        singletonsF1703 = singletonsF1699;
        LOOP_41: {
          P a41_0;
          xF1704 = singletonsF1703;
          xF1705 = xF1704;
          T9 = (P)YPeqQ(xF1705,VARREF(Ynil));
          T8 = (P)YPbb(T9);
          if (T9) {
            T7 = cacheF1702;
          } else {
            xF1706 = singletonsF1703;
            xF1707 = xF1706;
            T16 = (P)YPprop_elt(xF1707,(P)0);
            singF1708 = T16;
            xF1709 = singF1708;
            T15 = (P)YPprop_elt(xF1709,(P)0);
            argF1710 = T15;
            T14 = CALL3(1,VARREF(YgooSfunYOspecd_args),args_,i_,argF1710);
            argsF1711 = T14;
            T13 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,argsF1711);
            smetsF1712 = T13;
            T12 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,singF1708,i_);
            app_metsF1713 = T12;
            CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF1710,argF1710,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF1702,mets_,smetsF1712,i_,argsF1711);
            xF1714 = singletonsF1703;
            xF1715 = xF1714;
            T11 = (P)YPprop_elt(xF1715,(P)1);
            a41_0 = T11;
            singletonsF1703 = a41_0;
            goto LOOP_41;
            T7 = T10;
          }
        }
        T4 = T7;
      }
      T1 = T4;
    }
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYgen_lookup_miss_1) {
  P gen_,ocache_,mets_,sorted_mets_,i_,args_;
  P app_metsF1757;
  P classF1756;
  P tagF1755;
  P xF1754;
  P xF1753;
  P metsF1752;
  P xF1751;
  P tmpF1750;
  P yF1749;
  P xF1748;
  P singQF1747;
  P xF1746;
  P xF1745;
  P cacheF1744;
  P argF1743;
  P xF1742;
  P xF1741;
  P xF1740;
  P iF1739;
  P xF1738;
  P tF1737;
  P xF1736;
  P xF1735;
  P xF1734;
  P xF1733;
  P xF1732;
  P xF1731;
  P yF1730;
  P xF1729;
  P tmpF1728;
  P xF1727;
  P xF1726;
  P xF1725;
  P xF1724;
  P yF1723;
  P xF1722;
  P xF1721;
  P tmpF1720;
  P xF1719;
  P xF1718;
  P yF1717;
  P xF1716;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
LINK_STACK();
  ARG(gen_, 0);
  ARG(ocache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  xF1716 = i_;
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),gen_);
  yF1717 = T3;
  T2 = (P)YPiE(xF1716,yF1717);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1718 = sorted_mets_;
    xF1719 = xF1718;
    T6 = (P)YPprop_elt(xF1719,(P)0);
    T5 = CALL3(1,VARREF(YgooSfunYmethod_accessor_offset),gen_,T6,args_);
    tmpF1720 = T5;
    if (tmpF1720 != YPfalse) {
      T4 = tmpF1720;
    } else {
      T4 = sorted_mets_;
    }
    T0 = T4;
  } else {
    if (ocache_ != YPfalse) {
      xF1722 = i_;
      xF1721 = ocache_;
      T15 = (P)YPprop_elt(xF1721,(P)1);
      yF1723 = T15;
      xF1724 = xF1722;
      xF1725 = xF1724;
      T13 = (P)YPiGG(xF1725,(P)2);
      xF1726 = yF1723;
      xF1727 = xF1726;
      T14 = (P)YPiGG(xF1727,(P)2);
      T12 = (P)YPiL(T13,T14);
      T11 = (P)YPbb(T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    tmpF1728 = T10;
    if (tmpF1728 != YPfalse) {
      T8 = tmpF1728;
    } else {
      T9 = CALL2(1,VARREF(YgooSfunYOmets_unspecialized_atQ),mets_,i_);
      T8 = T9;
    }
    if (T8 != YPfalse) {
      xF1729 = i_;
      yF1730 = YPint((P)1);
      xF1731 = xF1729;
      xF1732 = xF1731;
      T20 = (P)YPiGG(xF1732,(P)2);
      xF1733 = yF1730;
      xF1734 = xF1733;
      T21 = (P)YPiGG(xF1734,(P)2);
      T19 = (P)YPiA(T20,T21);
      xF1735 = T19;
      xF1736 = xF1735;
      tF1737 = (P)1;
      T18 = (P)YPiLL(xF1736,(P)2);
      T17 = (P)YPiv(T18,tF1737);
      T16 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T17,args_);
      T7 = T16;
    } else {
      xF1738 = args_;
      iF1739 = i_;
      xF1740 = xF1738;
      T47 = (P)YPprop_elt(xF1740,(P)0);
      xF1741 = iF1739;
      xF1742 = xF1741;
      T49 = (P)YPiGG(xF1742,(P)2);
      T48 = (P)YPi_((P)0,T49);
      T46 = (P)YPloc_off(T47,T48);
      argF1743 = T46;
      T45 = CALLN(1,VARREF(YgooSfunYensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
      cacheF1744 = T45;
      xF1745 = sorted_mets_;
      xF1746 = xF1745;
      T44 = (P)YPprop_elt(xF1746,(P)0);
      T43 = CALL2(1,VARREF(YgooSfunYfun_spec),T44,i_);
      T42 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),T43);
      singQF1747 = T42;
      if (singQF1747 != YPfalse) {
        xF1748 = ocache_;
        yF1749 = cacheF1744;
        T29 = (P)YPeqQ(xF1748,yF1749);
        T28 = (P)YPbb(T29);
        T27 = T28;
      } else {
        T27 = YPfalse;
      }
      tmpF1750 = T27;
      if (tmpF1750 != YPfalse) {
        T23 = tmpF1750;
      } else {
        if (cacheF1744 != YPfalse) {
          xF1751 = cacheF1744;
          T26 = (P)YPprop_elt(xF1751,(P)0);
          T25 = CALL1(1,VARREF(Ynot),T26);
          T24 = T25;
        } else {
          T24 = YPfalse;
        }
        T23 = T24;
      }
      if (T23 != YPfalse) {
        T32 = (P)YPsingleton(argF1743);
        T31 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,T32,i_);
        metsF1752 = T31;
        T30 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF1743,argF1743,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF1744,metsF1752,sorted_mets_,i_,args_);
        T22 = T30;
      } else {
        if (singQF1747 != YPfalse) {
          T33 = cacheF1744;
        } else {
          xF1753 = argF1743;
          xF1754 = xF1753;
          T41 = (P)YPiB(xF1754,(P)3);
          tagF1755 = T41;
          T38 = (P)YPiE(tagF1755,(P)0);
          T37 = (P)YPbb(T38);
          if (T38) {
            T39 = (P)YPobject_class(xF1753);
            T36 = T39;
          } else {
            T40 = (P)YPelt(VARREF(YDdirect_object_class),tagF1755);
            T36 = T40;
          }
          classF1756 = T36;
          T35 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,classF1756,i_);
          app_metsF1757 = T35;
          T34 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,classF1756,argF1743,VARREF(YgooSfunYOgen_cache_classes),VARREF(YgooSfunYOgen_cache_classes_setter),gen_,cacheF1744,app_metsF1757,sorted_mets_,i_,args_);
          T33 = T34;
        }
        T22 = T33;
      }
      T7 = T22;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYgen_lookup_miss) {
  P gen_,args_;
  P xF1760;
  P xF1759;
  P metsF1758;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,args_);
  metsF1758 = T3;
  xF1759 = gen_;
  T1 = (P)YPprop_elt(xF1759,(P)4);
  xF1760 = gen_;
  T2 = (P)YPprop_elt(xF1760,(P)3);
  T0 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,T1,T2,metsF1758,YPint((P)0),args_);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YgooSfunYprop_value_at(P object_,P offset_) {
  P xF1769;
  P xF1768;
  P xF1767;
  P propsF1766;
  P yF1765;
  P xF1764;
  P valF1763;
  P xF1762;
  P xF1761;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF1761 = offset_;
  xF1762 = xF1761;
  T10 = (P)YPiGG(xF1762,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF1763 = T9;
  xF1764 = valF1763;
  yF1765 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF1764,yF1765);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yprops_of),object_);
    propsF1766 = T8;
    T6 = XCALL2(1,VARREF(YOelt),propsF1766,offset_);
    xF1767 = T6;
    T5 = (P)YPprop_elt(xF1767,(P)4);
    T4 = XCALL1(1,T5,object_);
    xF1768 = offset_;
    xF1769 = xF1768;
    T7 = (P)YPiGG(xF1769,(P)2);
    T3 = (P)YPprop_elt_setter(T4,object_,T7);
    T0 = T3;
  } else {
    T0 = valF1763;
  }
  return T0;
}

P YgooSfunYprop_bound_atQ(P object_,P offset_) {
  P yF1778;
  P xF1777;
  P xF1776;
  P propsF1775;
  P yF1774;
  P xF1773;
  P valF1772;
  P xF1771;
  P xF1770;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF1770 = offset_;
  xF1771 = xF1770;
  T10 = (P)YPiGG(xF1771,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF1772 = T9;
  xF1773 = valF1772;
  yF1774 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF1773,yF1774);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yprops_of),object_);
    propsF1775 = T8;
    T7 = XCALL2(1,VARREF(YOelt),propsF1775,offset_);
    xF1776 = T7;
    T6 = (P)YPprop_elt(xF1776,(P)4);
    xF1777 = T6;
    yF1778 = VARREF(YPprop_unbound_error);
    T5 = (P)YPeqQ(xF1777,yF1778);
    T4 = (P)YPbb(T5);
    T3 = XCALL1(1,VARREF(Ynot),T4);
    T0 = T3;
  } else {
    T0 = YPtrue;
  }
  return T0;
}

INLINE P YgooSfunYprop_value_at_setter(P z_,P object_,P offset_) {
  P xF1780;
  P xF1779;
  P T0,T1;
DEFCREGS();
  xF1779 = offset_;
  xF1780 = xF1779;
  T1 = (P)YPiGG(xF1780,(P)2);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P YgooSfunYgen_lookup(P gen_,P args_) {
  P tmpF1782;
  P xF1781;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF1781 = gen_;
  T4 = (P)YPprop_elt(xF1781,(P)4);
  tmpF1782 = T4;
  if (tmpF1782 != YPfalse) {
    T1 = tmpF1782;
  } else {
    T3 = XCALL2(1,VARREF(YgooSfunYgen_lookup_miss),gen_,args_);
    T2 = (P)YPfun_cache_setter(T3,gen_);
    T1 = T2;
  }
  T0 = (P)YgooSfunYgen_lookup_1(gen_,T1,args_);
  return T0;
}

INLINE P YgooSfunYgen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF1785;
  P xF1784;
  P iF1783;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  iF1783 = i_;
  LOOP_42: {
    P a42_0;
    T2 = (P)YPiE(iF1783,len_);
    T1 = (P)YPbb(T2);
    if (T2) {
      if (missableQ_ != YPfalse) {
        T3 = VARREF(YgooSfunYDmissed_dispatch);
      } else {
        T4 = XCALL2(1,VARREF(YgooSfunYgen_lookup_miss),gen_,args_);
        (P)YPfun_cache_setter(T4,gen_);
        T5 = (P)YgooSfunYgen_lookup(gen_,args_);
        T3 = T5;
      }
      T0 = T3;
    } else {
      T9 = (P)YPtelt(assocs_,iF1783);
      xF1784 = T9;
      yF1785 = key_;
      T8 = (P)YPeqQ(xF1784,yF1785);
      T7 = (P)YPbb(T8);
      if (T8) {
        T12 = (P)YPiA(iF1783,(P)1);
        T11 = (P)YPtelt(assocs_,T12);
        T10 = (P)YgooSfunYgen_lookup_1(gen_,T11,args_);
        T6 = T10;
      } else {
        T14 = (P)YPiA(iF1783,(P)2);
        a42_0 = T14;
        iF1783 = a42_0;
        goto LOOP_42;
        T6 = T13;
      }
      T0 = T6;
    }
  }
  return T0;
}

INLINE P YgooSfunYgen_lookup_1i(P gen_,P cache_,P args_) {
  P tagF1808;
  P xF1807;
  P xF1806;
  P assocsF1805;
  P xF1804;
  P yF1803;
  P xF1802;
  P valF1801;
  P xF1800;
  P assocsF1799;
  P xF1798;
  P argF1797;
  P xF1796;
  P xF1795;
  P xF1794;
  P iF1793;
  P xF1792;
  P xF1791;
  P yF1790;
  P xF1789;
  P tagF1788;
  P xF1787;
  P xF1786;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
  xF1786 = cache_;
  xF1787 = xF1786;
  T8 = (P)YPiB(xF1787,(P)3);
  tagF1788 = T8;
  T5 = (P)YPiE(tagF1788,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF1786);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF1788);
    T3 = T7;
  }
  xF1789 = T3;
  yF1790 = VARREF(YLgen_cacheG);
  T2 = (P)YPeqQ(xF1789,yF1790);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1792 = args_;
    xF1791 = cache_;
    T29 = (P)YPprop_elt(xF1791,(P)1);
    iF1793 = T29;
    xF1794 = xF1792;
    T26 = (P)YPprop_elt(xF1794,(P)0);
    xF1795 = iF1793;
    xF1796 = xF1795;
    T28 = (P)YPiGG(xF1796,(P)2);
    T27 = (P)YPi_((P)0,T28);
    T25 = (P)YPloc_off(T26,T27);
    argF1797 = T25;
    xF1798 = cache_;
    T24 = (P)YPprop_elt(xF1798,(P)2);
    assocsF1799 = T24;
    T22 = (P)YPtlen(assocsF1799);
    xF1800 = cache_;
    T23 = (P)YPprop_elt(xF1800,(P)0);
    T21 = (P)YgooSfunYgen_lookup_1_using(argF1797,(P)0,T22,assocsF1799,T23,gen_,args_);
    valF1801 = T21;
    xF1802 = valF1801;
    yF1803 = VARREF(YgooSfunYDmissed_dispatch);
    T11 = (P)YPeqQ(xF1802,yF1803);
    T10 = (P)YPbb(T11);
    if (T11) {
      xF1804 = cache_;
      T20 = (P)YPprop_elt(xF1804,(P)3);
      assocsF1805 = T20;
      xF1806 = argF1797;
      xF1807 = xF1806;
      T18 = (P)YPiB(xF1807,(P)3);
      tagF1808 = T18;
      T15 = (P)YPiE(tagF1808,(P)0);
      T14 = (P)YPbb(T15);
      if (T15) {
        T16 = (P)YPobject_class(xF1806);
        T13 = T16;
      } else {
        T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1808);
        T13 = T17;
      }
      T19 = (P)YPtlen(assocsF1805);
      T12 = (P)YgooSfunYgen_lookup_1_using(T13,(P)0,T19,assocsF1805,YPfalse,gen_,args_);
      T9 = T12;
    } else {
      T9 = valF1801;
    }
    T0 = T9;
  } else {
    T0 = cache_;
  }
  return T0;
}

P YgooSfunYgen_lookup_1(P gen_,P cache_,P args_) {
  P T0;
DEFCREGS();
  T0 = (P)YgooSfunYgen_lookup_1i(gen_,cache_,args_);
  return T0;
}

FUNCODEDEF(YgooSfunYchoose_methods) {
  P gen_,args_;
  P xF1821;
  P xF1820;
  P ambiguous_metsF1819;
  P xF1818;
  P xF1817;
  P iF1816;
  P xF1815;
  P sorted_metsF1814;
  P xF1813;
  P xF1812;
  P iF1811;
  P xF1810;
  P ord_amb_metsF1809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T8 = CALL2(1,VARREF(YgooSfunYord_app_metsT),gen_,args_);
  ord_amb_metsF1809 = T8;
  xF1810 = ord_amb_metsF1809;
  iF1811 = YPint((P)0);
  xF1812 = iF1811;
  xF1813 = xF1812;
  T7 = (P)YPiGG(xF1813,(P)2);
  T6 = (P)YPtelt(xF1810,T7);
  sorted_metsF1814 = T6;
  xF1815 = ord_amb_metsF1809;
  iF1816 = YPint((P)1);
  xF1817 = iF1816;
  xF1818 = xF1817;
  T5 = (P)YPiGG(xF1818,(P)2);
  T4 = (P)YPtelt(xF1815,T5);
  ambiguous_metsF1819 = T4;
  xF1820 = sorted_metsF1814;
  xF1821 = xF1820;
  T2 = (P)YPeqQ(xF1821,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T0 = T3;
  } else {
    T0 = sorted_metsF1814;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YgooSfunYgen_lookup_i(P gen_,P args_) {
  P tmpF1823;
  P xF1822;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF1822 = gen_;
  T4 = (P)YPprop_elt(xF1822,(P)4);
  tmpF1823 = T4;
  if (tmpF1823 != YPfalse) {
    T1 = tmpF1823;
  } else {
    T3 = XCALL2(1,VARREF(YgooSfunYgen_lookup_miss),gen_,args_);
    T2 = (P)YPfun_cache_setter(T3,gen_);
    T1 = T2;
  }
  T0 = (P)YgooSfunYgen_lookup_1i(gen_,T1,args_);
  return T0;
}

FUNCODEDEF(YPdispatch) {
  P args_;
  P xF1848;
  P xF1847;
  P resF1846;
  P xF1845;
  P xF1844;
  P xF1843;
  P iF1842;
  P xF1841;
  P xF1840;
  P xF1839;
  P xF1838;
  P iF1837;
  P xF1836;
  P xF1835;
  P xF1834;
  P xF1833;
  P iF1832;
  P xF1831;
  P yF1830;
  P xF1829;
  P xF1828;
  P xF1827;
  P xF1826;
  P xF1825;
  P resultF1824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  NARGS(args_, 0);
  T26 = (P)YPfun_reg();
  T25 = (P)YgooSfunYgen_lookup_i(T26,args_);
  resultF1824 = T25;
  xF1825 = resultF1824;
  xF1826 = xF1825;
  T3 = (P)YPiB(xF1826,(P)3);
  T2 = (P)YPiE(T3,(P)1);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1827 = args_;
    xF1828 = xF1827;
    T7 = (P)YPprop_elt(xF1828,(P)1);
    xF1829 = T7;
    yF1830 = YPint((P)1);
    T6 = (P)YPiE(xF1829,yF1830);
    T5 = (P)YPbb(T6);
    if (T6) {
      xF1831 = args_;
      iF1832 = YPint((P)0);
      xF1833 = xF1831;
      T10 = (P)YPprop_elt(xF1833,(P)0);
      xF1834 = iF1832;
      xF1835 = xF1834;
      T12 = (P)YPiGG(xF1835,(P)2);
      T11 = (P)YPi_((P)0,T12);
      T9 = (P)YPloc_off(T10,T11);
      T8 = (P)YgooSfunYprop_value_at(T9,resultF1824);
      T4 = T8;
    } else {
      xF1836 = args_;
      iF1837 = YPint((P)0);
      xF1838 = xF1836;
      T15 = (P)YPprop_elt(xF1838,(P)0);
      xF1839 = iF1837;
      xF1840 = xF1839;
      T17 = (P)YPiGG(xF1840,(P)2);
      T16 = (P)YPi_((P)0,T17);
      T14 = (P)YPloc_off(T15,T16);
      xF1841 = args_;
      iF1842 = YPint((P)1);
      xF1843 = xF1841;
      T19 = (P)YPprop_elt(xF1843,(P)0);
      xF1844 = iF1842;
      xF1845 = xF1844;
      T21 = (P)YPiGG(xF1845,(P)2);
      T20 = (P)YPi_((P)0,T21);
      T18 = (P)YPloc_off(T19,T20);
      T13 = (P)YgooSfunYprop_value_at_setter(T14,T18,resultF1824);
      T4 = T13;
    }
    resF1846 = T4;
    (P)YPunlink_stack();
    T0 = resF1846;
  } else {
    xF1847 = resultF1824;
    T23 = (P)YPprop_elt(xF1847,(P)0);
    xF1848 = resultF1824;
    T24 = (P)YPprop_elt(xF1848,(P)1);
    T22 = (P)YPraw_met_call(T23,T24);
    T0 = T22;
  }
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_specs) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_specs),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_specs_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_specs_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_naryQ) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_naryQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_naryQ_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_naryQ_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_arity) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_arity),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_arity_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_arity_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_val) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_val),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_val_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_val_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_unification_vars) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_unification_vars),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_unification_vars_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_unification_vars_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_name) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_name_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_name_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_names),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_names_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_names_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_src) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_src),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_src_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_src_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_src_loc) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_src_loc),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_src_loc_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_src_loc_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_count) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_count),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_count_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_count_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_inlineableQ) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL1(1,VARREF(Yfun_info_inlineableQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_inlineableQ_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_info),x_);
  T0 = CALL2(1,VARREF(Yfun_info_inlineableQ_setter),z_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfab_gen) {
  P specs_,naryQ_,val_,name_,names_;
  P xF1851;
  P gF1850;
  P iF1849;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(val_, 2);
  ARG(name_, 3);
  ARG(names_, 4);
  T4 = CALLN(1,VARREF(YOnew),7,VARREF(YLfun_infoG),VARREF(Yfun_info_name),name_,VARREF(Yfun_info_names),names_,VARREF(Yfun_info_count),YPint((P)0));
  iF1849 = T4;
  T3 = (P)YOlen(specs_);
  T2 = CALLN(1,VARREF(YOnew),9,VARREF(YLsigG),VARREF(Ysig_specs),specs_,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),T3,VARREF(Ysig_val),val_);
  T1 = CALLN(1,VARREF(YOnew),9,VARREF(YLgenG),VARREF(Yfun_sig),T2,VARREF(Yfun_info),iF1849,VARREF(Yfun_mets),Ynil,VARREF(Yfun_cache),YPfalse);
  gF1850 = T1;
  xF1851 = VARREF(YPdispatch);
  T0 = (P)YPprop_elt(xF1851,(P)0);
  (P)YPgen_code_setter(T0,gF1850);
UNLINK_STACK();
  RET(gF1850);
}

LOCCODEDEF(fun_90) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(YgooSfunYgen_from_met) {
  P x_;
  P specsF1852;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T4 = fun_90;
  T5 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
  T3 = CALL2(1,VARREF(YOmap),T4,T5);
  specsF1852 = T3;
  T1 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
  T2 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
  T0 = CALL5(1,VARREF(YgooSfunYfab_gen),specsF1852,T1,VARREF(YLanyG),T2,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYPdefine_method) {
  P gen_,met_;
  P tmpF1853;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  tmpF1853 = gen_;
  if (tmpF1853 != YPfalse) {
    T1 = tmpF1853;
  } else {
    T2 = CALL1(1,VARREF(YgooSfunYgen_from_met),met_);
    T1 = T2;
  }
  T0 = CALL2(1,VARREF(YgooSfunYgen_add_met),T1,met_);
UNLINK_STACK();
  RET(T0);
}

P YgooSfunY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96;
DEFCREGS();
  lit_0 = YPPsym((P)"@fun-names");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_names = YPfab_met(FUNCODEREF(YgooSfunYOfun_names),T0,LITREF(lit_0),LITREF(lit_1),sloc(22),YPfalse);
  T1 = YgooSfunYOfun_names;
  VARSET(YgooSfunYOfun_names,T1);
  lit_2 = YPPsym((P)"@fun-specs");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_specs = YPfab_met(FUNCODEREF(YgooSfunYOfun_specs),T2,LITREF(lit_2),LITREF(lit_3),sloc(24),YPfalse);
  T3 = YgooSfunYOfun_specs;
  VARSET(YgooSfunYOfun_specs,T3);
  lit_4 = YPPsym((P)"@fun-nary?");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSfunYOfun_naryQ = YPfab_met(FUNCODEREF(YgooSfunYOfun_naryQ),T4,LITREF(lit_4),LITREF(lit_5),sloc(26),YPfalse);
  T5 = YgooSfunYOfun_naryQ;
  VARSET(YgooSfunYOfun_naryQ,T5);
  lit_6 = YPPsym((P)"@fun-arity");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSfunYOfun_arity = YPfab_met(FUNCODEREF(YgooSfunYOfun_arity),T6,LITREF(lit_6),LITREF(lit_7),sloc(28),YPfalse);
  T7 = YgooSfunYOfun_arity;
  VARSET(YgooSfunYOfun_arity,T7);
  lit_8 = YPPsym((P)"@fun-val");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_val = YPfab_met(FUNCODEREF(YgooSfunYOfun_val),T8,LITREF(lit_8),LITREF(lit_9),sloc(30),YPfalse);
  T9 = YgooSfunYOfun_val;
  VARSET(YgooSfunYOfun_val,T9);
  lit_10 = YPPsym((P)"@fun-unification-vars");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_unification_vars = YPfab_met(FUNCODEREF(YgooSfunYOfun_unification_vars),T10,LITREF(lit_10),LITREF(lit_11),sloc(32),YPfalse);
  T11 = YgooSfunYOfun_unification_vars;
  VARSET(YgooSfunYOfun_unification_vars,T11);
  lit_12 = YPPsym((P)"@fun-mets");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_mets = YPfab_met(FUNCODEREF(YgooSfunYOfun_mets),T12,LITREF(lit_12),LITREF(lit_13),sloc(34),YPfalse);
  T13 = YgooSfunYOfun_mets;
  VARSET(YgooSfunYOfun_mets,T13);
  lit_14 = YPPsym((P)"@fun-mets-setter");
  lit_15 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_mets_setter = YPfab_met(FUNCODEREF(YgooSfunYOfun_mets_setter),T14,LITREF(lit_14),LITREF(lit_15),sloc(36),YPfalse);
  T15 = YgooSfunYOfun_mets_setter;
  VARSET(YgooSfunYOfun_mets_setter,T15);
  VARSET(YgooSfunYLenvG,VARREF(YLanyG));
  VARSET(YgooSfunYLspecsG,VARREF(YLlstG));
  VARSET(YgooSfunYLbodyG,VARREF(YLanyG));
  lit_16 = YPPsym((P)"fun-spec");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_spec = YPfab_met(FUNCODEREF(YgooSfunYfun_spec),T16,LITREF(lit_16),LITREF(lit_17),sloc(42),YPfalse);
  T17 = YgooSfunYfun_spec;
  VARSET(YgooSfunYfun_spec,T17);
  VARSET(YgooSfunYLmetsG,VARREF(YLlstG));
  lit_18 = YPPsym((P)"fun-same-met?");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_same_metQ = YPfab_met(FUNCODEREF(YgooSfunYfun_same_metQ),T18,LITREF(lit_18),LITREF(lit_19),sloc(47),YPfalse);
  T19 = YgooSfunYfun_same_metQ;
  VARSET(YgooSfunYfun_same_metQ,T19);
  lit_20 = YPPsym((P)"fun-congruent?");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_congruentQ = YPfab_met(FUNCODEREF(YgooSfunYfun_congruentQ),T20,LITREF(lit_20),LITREF(lit_21),sloc(50),YPfalse);
  T21 = YgooSfunYfun_congruentQ;
  VARSET(YgooSfunYfun_congruentQ,T21);
  lit_22 = YPPsym((P)"gen-add-met");
  lit_23 = YPPlist(2,YPPsym((P)"g"),YPPsym((P)"m"));
  lit_24 = YPPlist(1,YPPsym((P)"return"));
  lit_25 = YPsb((P)"Replace %= with an nul generic congruent with %=");
  lit_26 = Ynil;
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  T26 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T26,YPfalse,LITREF(lit_26),YPfalse,YPfalse);
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T25,YPfalse,LITREF(lit_27),sloc(70),YPfalse);
  T24 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T24,YPfalse,LITREF(lit_26),sloc(72),YPfalse);
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T23,YPfalse,LITREF(lit_24),sloc(66),YPfalse);
  T22 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYgen_add_met = YPfab_met(FUNCODEREF(YgooSfunYgen_add_met),T22,LITREF(lit_22),LITREF(lit_23),sloc(59),YPfalse);
  T27 = YgooSfunYgen_add_met;
  VARSET(YgooSfunYgen_add_met,T27);
  lit_28 = YPPsym((P)"@class<");
  lit_29 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_30 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_31 = YPsb((P)"neither %= nor %=");
  T28 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YgooSfunYOclassL = YPfab_met(FUNCODEREF(YgooSfunYOclassL),T28,LITREF(lit_28),LITREF(lit_29),sloc(101),YPfalse);
  T29 = YgooSfunYOclassL;
  VARSET(YgooSfunYOclassL,T29);
  lit_32 = YPPsym((P)"@order-specs-class");
  lit_33 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_34 = YPPsym((P)"=");
  lit_35 = YPPsym((P)"<");
  lit_36 = YPPsym((P)">");
  T30 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs_class = YPfab_met(FUNCODEREF(YgooSfunYOorder_specs_class),T30,LITREF(lit_32),LITREF(lit_33),sloc(113),YPfalse);
  T31 = YgooSfunYOorder_specs_class;
  VARSET(YgooSfunYOorder_specs_class,T31);
  lit_37 = YPPsym((P)"@order-specs");
  lit_38 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs = YPfab_met(FUNCODEREF(YgooSfunYOorder_specs),T32,LITREF(lit_37),LITREF(lit_38),sloc(120),YPfalse);
  T33 = YgooSfunYOorder_specs;
  VARSET(YgooSfunYOorder_specs,T33);
  lit_39 = YPPsym((P)"order-mets");
  lit_40 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"<>");
  T34 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  YgooSfunYorder_mets = YPfab_met(FUNCODEREF(YgooSfunYorder_mets),T34,LITREF(lit_39),LITREF(lit_40),sloc(125),YPfalse);
  T35 = YgooSfunYorder_mets;
  VARSET(YgooSfunYorder_mets,T35);
  lit_42 = YPPsym((P)"ord-app-mets-1");
  lit_43 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"args"),YPPsym((P)"order-mets"));
  lit_44 = YPPsym((P)"make-ambiguous");
  lit_45 = YPPlist(1,YPPsym((P)"headed-list"));
  lit_46 = YPPsym((P)"precedes-all?");
  lit_47 = YPPlist(1,YPPsym((P)"l"));
  lit_48 = YPPsym((P)"check-subsequent-ambiguities");
  lit_49 = YPPlist(1,YPPsym((P)"oprev"));
  lit_50 = YPPsym((P)"insert");
  lit_51 = YPPlist(2,YPPsym((P)"oprev"),YPPsym((P)"osub"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_20 = YPfab_met(FUNCODEREF(fun_make_ambiguous_20),T40,LITREF(lit_44),LITREF(lit_45),sloc(150),YPfalse);
  T39 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_21 = YPfab_met(FUNCODEREF(fun_precedes_allQ_21),T39,LITREF(lit_46),LITREF(lit_47),sloc(159),YPfalse);
  T38 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_22 = YPfab_met(FUNCODEREF(fun_check_subsequent_ambiguities_22),T38,LITREF(lit_48),LITREF(lit_49),sloc(166),YPfalse);
  T37 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_23 = YPfab_met(FUNCODEREF(fun_insert_23),T37,LITREF(lit_50),LITREF(lit_51),sloc(171),YPfalse);
  T36 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_mets_1 = YPfab_met(FUNCODEREF(YgooSfunYord_app_mets_1),T36,LITREF(lit_42),LITREF(lit_43),sloc(142),YPfalse);
  T41 = YgooSfunYord_app_mets_1;
  VARSET(YgooSfunYord_app_mets_1,T41);
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T42,YPfalse,LITREF(lit_52),sloc(184),YPfalse);
  T43 = fun_25;
  VARSET(YgooSfunYmet_app_unify,T43);
  lit_53 = YPPsym((P)"met-app?");
  lit_54 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYmet_appQ = YPfab_met(FUNCODEREF(YgooSfunYmet_appQ),T44,LITREF(lit_53),LITREF(lit_54),sloc(186),YPfalse);
  T45 = YgooSfunYmet_appQ;
  VARSET(YgooSfunYmet_appQ,T45);
  lit_55 = YPPsym((P)"ord-app-mets*");
  lit_56 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_metsT = YPfab_met(FUNCODEREF(YgooSfunYord_app_metsT),T46,LITREF(lit_55),LITREF(lit_56),sloc(197),YPfalse);
  T47 = YgooSfunYord_app_metsT;
  VARSET(YgooSfunYord_app_metsT,T47);
  lit_57 = YPPsym((P)"ord-app-mets");
  lit_58 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T49,Ynil);
  YgooSfunYord_app_mets = YPfab_met(FUNCODEREF(YgooSfunYord_app_mets),T48,LITREF(lit_57),LITREF(lit_58),sloc(208),YPfalse);
  T50 = YgooSfunYord_app_mets;
  VARSET(YgooSfunYord_app_mets,T50);
  lit_59 = YPPsym((P)"@gen-cache-arg-pos");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_arg_pos),T51,LITREF(lit_59),LITREF(lit_60),sloc(219),YPfalse);
  T52 = YgooSfunYOgen_cache_arg_pos;
  VARSET(YgooSfunYOgen_cache_arg_pos,T52);
  lit_61 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_62 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_arg_pos_setter),T53,LITREF(lit_61),LITREF(lit_62),sloc(220),YPfalse);
  T54 = YgooSfunYOgen_cache_arg_pos_setter;
  VARSET(YgooSfunYOgen_cache_arg_pos_setter,T54);
  lit_63 = YPPsym((P)"@gen-cache-singletons");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_singletons),T55,LITREF(lit_63),LITREF(lit_64),sloc(221),YPfalse);
  T56 = YgooSfunYOgen_cache_singletons;
  VARSET(YgooSfunYOgen_cache_singletons,T56);
  lit_65 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_singletons_setter),T57,LITREF(lit_65),LITREF(lit_66),sloc(222),YPfalse);
  T58 = YgooSfunYOgen_cache_singletons_setter;
  VARSET(YgooSfunYOgen_cache_singletons_setter,T58);
  lit_67 = YPPsym((P)"@gen-cache-classes");
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_classes),T59,LITREF(lit_67),LITREF(lit_68),sloc(223),YPfalse);
  T60 = YgooSfunYOgen_cache_classes;
  VARSET(YgooSfunYOgen_cache_classes,T60);
  lit_69 = YPPsym((P)"@gen-cache-classes-setter");
  lit_70 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T61 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_classes_setter),T61,LITREF(lit_69),LITREF(lit_70),sloc(224),YPfalse);
  T62 = YgooSfunYOgen_cache_classes_setter;
  VARSET(YgooSfunYOgen_cache_classes_setter,T62);
  lit_71 = YPPsym((P)"method-accessor-offset");
  lit_72 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T63 = YPfab_sig(YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYmethod_accessor_offset = YPfab_met(FUNCODEREF(YgooSfunYmethod_accessor_offset),T63,LITREF(lit_71),LITREF(lit_72),sloc(228),YPfalse);
  T64 = YgooSfunYmethod_accessor_offset;
  VARSET(YgooSfunYmethod_accessor_offset,T64);
  lit_73 = YPPsym((P)"@singleton-spec?");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsingleton_specQ = YPfab_met(FUNCODEREF(YgooSfunYOsingleton_specQ),T65,LITREF(lit_73),LITREF(lit_74),sloc(237),YPfalse);
  T66 = YgooSfunYOsingleton_specQ;
  VARSET(YgooSfunYOsingleton_specQ,T66);
  lit_75 = YPPsym((P)"@subclass-spec?");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsubclass_specQ = YPfab_met(FUNCODEREF(YgooSfunYOsubclass_specQ),T67,LITREF(lit_75),LITREF(lit_76),sloc(240),YPfalse);
  T68 = YgooSfunYOsubclass_specQ;
  VARSET(YgooSfunYOsubclass_specQ,T68);
  lit_77 = YPPsym((P)"@union-spec?");
  lit_78 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOunion_specQ = YPfab_met(FUNCODEREF(YgooSfunYOunion_specQ),T69,LITREF(lit_77),LITREF(lit_78),sloc(243),YPfalse);
  T70 = YgooSfunYOunion_specQ;
  VARSET(YgooSfunYOunion_specQ,T70);
  lit_79 = YPPsym((P)"@precise-spec?");
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOprecise_specQ = YPfab_met(FUNCODEREF(YgooSfunYOprecise_specQ),T71,LITREF(lit_79),LITREF(lit_80),sloc(246),YPfalse);
  T72 = YgooSfunYOprecise_specQ;
  VARSET(YgooSfunYOprecise_specQ,T72);
  lit_81 = YPPsym((P)"@mets-unspecialized-at?");
  lit_82 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_83 = YPPlist(1,YPPsym((P)"met"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T74,YPfalse,LITREF(lit_83),sloc(251),YPfalse);
  T73 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYOmets_unspecialized_atQ = YPfab_met(FUNCODEREF(YgooSfunYOmets_unspecialized_atQ),T73,LITREF(lit_81),LITREF(lit_82),sloc(250),YPfalse);
  T75 = YgooSfunYOmets_unspecialized_atQ;
  VARSET(YgooSfunYOmets_unspecialized_atQ,T75);
  lit_84 = YPPsym((P)"@prune-mets-by-type-at");
  lit_85 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_86 = YPPlist(1,YPPsym((P)"met"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T77,YPfalse,LITREF(lit_86),sloc(255),YPfalse);
  T76 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YgooSfunYLmetsG),Ynil);
  YgooSfunYOprune_mets_by_type_at = YPfab_met(FUNCODEREF(YgooSfunYOprune_mets_by_type_at),T76,LITREF(lit_84),LITREF(lit_85),sloc(253),YPfalse);
  T78 = YgooSfunYOprune_mets_by_type_at;
  VARSET(YgooSfunYOprune_mets_by_type_at,T78);
  lit_87 = YPPsym((P)"@mets-specs-at");
  lit_88 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_89 = YPPlist(1,YPPsym((P)"met"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T80,YPfalse,LITREF(lit_89),sloc(258),YPfalse);
  T79 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_specs_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_specs_at),T79,LITREF(lit_87),LITREF(lit_88),sloc(257),YPfalse);
  T81 = YgooSfunYOmets_specs_at;
  VARSET(YgooSfunYOmets_specs_at,T81);
  lit_90 = YPPsym((P)"@mets-singletons-at");
  lit_91 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_92 = YPPlist(1,YPPsym((P)"spec"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T83,YPfalse,LITREF(lit_92),sloc(263),YPfalse);
  T82 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_singletons_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_singletons_at),T82,LITREF(lit_90),LITREF(lit_91),sloc(262),YPfalse);
  T84 = YgooSfunYOmets_singletons_at;
  VARSET(YgooSfunYOmets_singletons_at,T84);
  lit_93 = YPPsym((P)"@mets-subclasses-at");
  lit_94 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_95 = YPPlist(1,YPPsym((P)"spec"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T86,YPfalse,LITREF(lit_95),sloc(266),YPfalse);
  T85 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_subclasses_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_subclasses_at),T85,LITREF(lit_93),LITREF(lit_94),sloc(265),YPfalse);
  T87 = YgooSfunYOmets_subclasses_at;
  VARSET(YgooSfunYOmets_subclasses_at,T87);
  VARSET(YgooSfunYDnul_assocs,VARREF(YPtnul));
  lit_96 = YPPsym((P)"@cache-add");
  lit_97 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  T88 = YPfab_sig(YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOcache_add = YPfab_met(FUNCODEREF(YgooSfunYOcache_add),T88,LITREF(lit_96),LITREF(lit_97),sloc(270),YPfalse);
  T89 = YgooSfunYOcache_add;
  VARSET(YgooSfunYOcache_add,T89);
  lit_98 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_99 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T90 = YPfab_sig(YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1_using = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss_1_using),T90,LITREF(lit_98),LITREF(lit_99),sloc(283),YPfalse);
  T91 = YgooSfunYgen_lookup_miss_1_using;
  VARSET(YgooSfunYgen_lookup_miss_1_using,T91);
  lit_100 = YPPsym((P)"@specd-args");
  lit_101 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  T94 = YPfab_sig(YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  T93 = YgooSfunYOspecd_args = YPfab_met(FUNCODEREF(YgooSfunYOspecd_args),T94,LITREF(lit_100),LITREF(lit_101),sloc(308),YPfalse);
  T96 = YgooSfunYOspecd_args;
  T95 = VARSET(YgooSfunYOspecd_args,T96);
  T92 = T95;
  return T92;
}

P YgooSfunY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
DEFCREGS();
  lit_102 = YPPsym((P)"requires-singleton-prec");
  lit_103 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYrequires_singleton_prec = YPfab_met(FUNCODEREF(YgooSfunYrequires_singleton_prec),T0,LITREF(lit_102),LITREF(lit_103),sloc(318),YPfalse);
  T1 = YgooSfunYrequires_singleton_prec;
  VARSET(YgooSfunYrequires_singleton_prec,T1);
  lit_104 = YPPsym((P)"ensure-singleton-cache");
  lit_105 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T2 = YPfab_sig(YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYensure_singleton_cache = YPfab_met(FUNCODEREF(YgooSfunYensure_singleton_cache),T2,LITREF(lit_104),LITREF(lit_105),sloc(333),YPfalse);
  T3 = YgooSfunYensure_singleton_cache;
  VARSET(YgooSfunYensure_singleton_cache,T3);
  lit_106 = YPPsym((P)"gen-lookup-miss-1");
  lit_107 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T4 = YPfab_sig(YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1 = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss_1),T4,LITREF(lit_106),LITREF(lit_107),sloc(356),YPfalse);
  T5 = YgooSfunYgen_lookup_miss_1;
  VARSET(YgooSfunYgen_lookup_miss_1,T5);
  lit_108 = YPPsym((P)"gen-lookup-miss");
  lit_109 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss),T6,LITREF(lit_108),LITREF(lit_109),sloc(380),YPfalse);
  T7 = YgooSfunYgen_lookup_miss;
  VARSET(YgooSfunYgen_lookup_miss,T7);
  T8 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YgooSfunYDmissed_dispatch,T8);
  lit_110 = YPPsym((P)"choose-methods");
  lit_111 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYchoose_methods = YPfab_met(FUNCODEREF(YgooSfunYchoose_methods),T9,LITREF(lit_110),LITREF(lit_111),sloc(456),YPfalse);
  T10 = YgooSfunYchoose_methods;
  VARSET(YgooSfunYchoose_methods,T10);
  lit_112 = YPPsym((P)"%dispatch");
  lit_113 = YPPlist(1,YPPsym((P)"args"));
  T11 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPfab_met(FUNCODEREF(YPdispatch),T11,LITREF(lit_112),LITREF(lit_113),sloc(474),YPfalse);
  T12 = YPdispatch;
  VARSET(YPdispatch,T12);
  (P)YPpatch_early_generics();
  lit_114 = YPPsym((P)"fun-specs");
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs = YPfab_met(FUNCODEREF(YgooSfunYfun_specs),T13,LITREF(lit_114),LITREF(lit_115),sloc(497),YPfalse);
  T14 = YgooSfunYfun_specs;
  VARSET(YgooSfunYfun_specs,T14);
  lit_116 = YPPsym((P)"fun-specs-setter");
  lit_117 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_specs_setter),T15,LITREF(lit_116),LITREF(lit_117),sloc(497),YPfalse);
  T16 = YgooSfunYfun_specs_setter;
  VARSET(YgooSfunYfun_specs_setter,T16);
  lit_118 = YPPsym((P)"fun-nary?");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ = YPfab_met(FUNCODEREF(YgooSfunYfun_naryQ),T17,LITREF(lit_118),LITREF(lit_119),sloc(498),YPfalse);
  T18 = YgooSfunYfun_naryQ;
  VARSET(YgooSfunYfun_naryQ,T18);
  lit_120 = YPPsym((P)"fun-nary?-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_naryQ_setter),T19,LITREF(lit_120),LITREF(lit_121),sloc(498),YPfalse);
  T20 = YgooSfunYfun_naryQ_setter;
  VARSET(YgooSfunYfun_naryQ_setter,T20);
  lit_122 = YPPsym((P)"fun-arity");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity = YPfab_met(FUNCODEREF(YgooSfunYfun_arity),T21,LITREF(lit_122),LITREF(lit_123),sloc(499),YPfalse);
  T22 = YgooSfunYfun_arity;
  VARSET(YgooSfunYfun_arity,T22);
  lit_124 = YPPsym((P)"fun-arity-setter");
  lit_125 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_arity_setter),T23,LITREF(lit_124),LITREF(lit_125),sloc(499),YPfalse);
  T24 = YgooSfunYfun_arity_setter;
  VARSET(YgooSfunYfun_arity_setter,T24);
  lit_126 = YPPsym((P)"fun-val");
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val = YPfab_met(FUNCODEREF(YgooSfunYfun_val),T25,LITREF(lit_126),LITREF(lit_127),sloc(500),YPfalse);
  T26 = YgooSfunYfun_val;
  VARSET(YgooSfunYfun_val,T26);
  lit_128 = YPPsym((P)"fun-val-setter");
  lit_129 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_val_setter),T27,LITREF(lit_128),LITREF(lit_129),sloc(500),YPfalse);
  T28 = YgooSfunYfun_val_setter;
  VARSET(YgooSfunYfun_val_setter,T28);
  lit_130 = YPPsym((P)"fun-unification-vars");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars = YPfab_met(FUNCODEREF(YgooSfunYfun_unification_vars),T29,LITREF(lit_130),LITREF(lit_131),sloc(501),YPfalse);
  T30 = YgooSfunYfun_unification_vars;
  VARSET(YgooSfunYfun_unification_vars,T30);
  lit_132 = YPPsym((P)"fun-unification-vars-setter");
  lit_133 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_unification_vars_setter),T31,LITREF(lit_132),LITREF(lit_133),sloc(501),YPfalse);
  T32 = YgooSfunYfun_unification_vars_setter;
  VARSET(YgooSfunYfun_unification_vars_setter,T32);
  lit_134 = YPPsym((P)"fun-name");
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_name = YPfab_met(FUNCODEREF(YgooSfunYfun_name),T33,LITREF(lit_134),LITREF(lit_135),sloc(509),YPfalse);
  T34 = YgooSfunYfun_name;
  VARSET(YgooSfunYfun_name,T34);
  lit_136 = YPPsym((P)"fun-name-setter");
  lit_137 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_name_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_name_setter),T35,LITREF(lit_136),LITREF(lit_137),sloc(509),YPfalse);
  T36 = YgooSfunYfun_name_setter;
  VARSET(YgooSfunYfun_name_setter,T36);
  lit_138 = YPPsym((P)"fun-names");
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names = YPfab_met(FUNCODEREF(YgooSfunYfun_names),T37,LITREF(lit_138),LITREF(lit_139),sloc(510),YPfalse);
  T38 = YgooSfunYfun_names;
  VARSET(YgooSfunYfun_names,T38);
  lit_140 = YPPsym((P)"fun-names-setter");
  lit_141 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_names_setter),T39,LITREF(lit_140),LITREF(lit_141),sloc(510),YPfalse);
  T40 = YgooSfunYfun_names_setter;
  VARSET(YgooSfunYfun_names_setter,T40);
  lit_142 = YPPsym((P)"fun-src");
  lit_143 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src = YPfab_met(FUNCODEREF(YgooSfunYfun_src),T41,LITREF(lit_142),LITREF(lit_143),sloc(511),YPfalse);
  T42 = YgooSfunYfun_src;
  VARSET(YgooSfunYfun_src,T42);
  lit_144 = YPPsym((P)"fun-src-setter");
  lit_145 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_src_setter),T43,LITREF(lit_144),LITREF(lit_145),sloc(511),YPfalse);
  T44 = YgooSfunYfun_src_setter;
  VARSET(YgooSfunYfun_src_setter,T44);
  lit_146 = YPPsym((P)"fun-src-loc");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_loc = YPfab_met(FUNCODEREF(YgooSfunYfun_src_loc),T45,LITREF(lit_146),LITREF(lit_147),sloc(512),YPfalse);
  T46 = YgooSfunYfun_src_loc;
  VARSET(YgooSfunYfun_src_loc,T46);
  lit_148 = YPPsym((P)"fun-src-loc-setter");
  lit_149 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_loc_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_src_loc_setter),T47,LITREF(lit_148),LITREF(lit_149),sloc(512),YPfalse);
  T48 = YgooSfunYfun_src_loc_setter;
  VARSET(YgooSfunYfun_src_loc_setter,T48);
  lit_150 = YPPsym((P)"fun-count");
  lit_151 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_count = YPfab_met(FUNCODEREF(YgooSfunYfun_count),T49,LITREF(lit_150),LITREF(lit_151),sloc(513),YPfalse);
  T50 = YgooSfunYfun_count;
  VARSET(YgooSfunYfun_count,T50);
  lit_152 = YPPsym((P)"fun-count-setter");
  lit_153 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_count_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_count_setter),T51,LITREF(lit_152),LITREF(lit_153),sloc(513),YPfalse);
  T52 = YgooSfunYfun_count_setter;
  VARSET(YgooSfunYfun_count_setter,T52);
  lit_154 = YPPsym((P)"fun-inlineable?");
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_inlineableQ = YPfab_met(FUNCODEREF(YgooSfunYfun_inlineableQ),T53,LITREF(lit_154),LITREF(lit_155),sloc(514),YPfalse);
  T54 = YgooSfunYfun_inlineableQ;
  VARSET(YgooSfunYfun_inlineableQ,T54);
  lit_156 = YPPsym((P)"fun-inlineable?-setter");
  lit_157 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_inlineableQ_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_inlineableQ_setter),T55,LITREF(lit_156),LITREF(lit_157),sloc(514),YPfalse);
  T56 = YgooSfunYfun_inlineableQ_setter;
  VARSET(YgooSfunYfun_inlineableQ_setter,T56);
  lit_158 = YPPsym((P)"fab-gen");
  lit_159 = YPPlist(5,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"name"),YPPsym((P)"names"));
  T57 = YPfab_sig(YPPlist(5,VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)5),VARREF(YLgenG),Ynil);
  YgooSfunYfab_gen = YPfab_met(FUNCODEREF(YgooSfunYfab_gen),T57,LITREF(lit_158),LITREF(lit_159),sloc(518),YPfalse);
  T58 = YgooSfunYfab_gen;
  VARSET(YgooSfunYfab_gen,T58);
  lit_160 = YPPsym((P)"gen-from-met");
  lit_161 = YPPlist(1,YPPsym((P)"x"));
  lit_162 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPfab_met(FUNCODEREF(fun_90),T60,YPfalse,LITREF(lit_162),sloc(537),YPfalse);
  T59 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  YgooSfunYgen_from_met = YPfab_met(FUNCODEREF(YgooSfunYgen_from_met),T59,LITREF(lit_160),LITREF(lit_161),sloc(536),YPfalse);
  T61 = YgooSfunYgen_from_met;
  VARSET(YgooSfunYgen_from_met,T61);
  lit_163 = YPPsym((P)"%define-method");
  lit_164 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T62 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYPdefine_method = YPfab_met(FUNCODEREF(YgooSfunYPdefine_method),T62,LITREF(lit_163),LITREF(lit_164),sloc(542),YPfalse);
  T63 = YgooSfunYPdefine_method;
  VARSET(YgooSfunYPdefine_method,T63);
  T64 = YPfalse;
  return T64;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
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
  {"fun-code", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
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
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
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
  {"<any>", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
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
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
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
  {"use/export", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
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
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$missed-dispatch", CVAR, &YgooSfunYDmissed_dispatch},
  {"@gen-cache-singletons-setter", CVAR, &YgooSfunYOgen_cache_singletons_setter},
  {"fun-val-setter", CVAR, &YgooSfunYfun_val_setter},
  {"@fun-mets-setter", CVAR, &YgooSfunYOfun_mets_setter},
  {"fun-count", CVAR, &YgooSfunYfun_count},
  {"gen-lookup-1i", PVAR, NULL},
  {"@union-spec?", CVAR, &YgooSfunYOunion_specQ},
  {"fun-specs", CVAR, &YgooSfunYfun_specs},
  {"fun-unification-vars-setter", CVAR, &YgooSfunYfun_unification_vars_setter},
  {"fun-val", CVAR, &YgooSfunYfun_val},
  {"fun-same-met?", CVAR, &YgooSfunYfun_same_metQ},
  {"@fun-mets", CVAR, &YgooSfunYOfun_mets},
  {"fun-src-loc-setter", CVAR, &YgooSfunYfun_src_loc_setter},
  {"@gen-cache-singletons", CVAR, &YgooSfunYOgen_cache_singletons},
  {"@prune-mets-by-type-at", CVAR, &YgooSfunYOprune_mets_by_type_at},
  {"<replace-generic-restart>", CVAR, &YgooSfunYLreplace_generic_restartG},
  {"%define-method", CVAR, &YgooSfunYPdefine_method},
  {"$nul-assocs", CVAR, &YgooSfunYDnul_assocs},
  {"or-set", PVAR, NULL},
  {"@class<", CVAR, &YgooSfunYOclassL},
  {"@fun-unification-vars", CVAR, &YgooSfunYOfun_unification_vars},
  {"fun-src-loc", CVAR, &YgooSfunYfun_src_loc},
  {"and", PVAR, NULL},
  {"gen-lookup", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"@order-specs-class", CVAR, &YgooSfunYOorder_specs_class},
  {"@gen-cache-arg-pos-setter", CVAR, &YgooSfunYOgen_cache_arg_pos_setter},
  {"fun-arity-setter", CVAR, &YgooSfunYfun_arity_setter},
  {"gen-lookup-miss-1", CVAR, &YgooSfunYgen_lookup_miss_1},
  {"gen-lookup-miss-1-using", CVAR, &YgooSfunYgen_lookup_miss_1_using},
  {"<env>", CVAR, &YgooSfunYLenvG},
  {"<specs>", CVAR, &YgooSfunYLspecsG},
  {"@fun-val", CVAR, &YgooSfunYOfun_val},
  {"gen-lookup-i", PVAR, NULL},
  {"@gen-cache-arg-pos", CVAR, &YgooSfunYOgen_cache_arg_pos},
  {"fun-arity", CVAR, &YgooSfunYfun_arity},
  {"gen-from-met", CVAR, &YgooSfunYgen_from_met},
  {"fun-src-setter", CVAR, &YgooSfunYfun_src_setter},
  {"@mets-unspecialized-at?", CVAR, &YgooSfunYOmets_unspecialized_atQ},
  {"@fun-arity", CVAR, &YgooSfunYOfun_arity},
  {"---main-1---", PVAR, NULL},
  {"ord-app-mets-1", CVAR, &YgooSfunYord_app_mets_1},
  {"fun-src", CVAR, &YgooSfunYfun_src},
  {"handler-info-message", CVAR, &YgooSfunYhandler_info_message},
  {"prop-value-at", PVAR, NULL},
  {"@precise-spec?", CVAR, &YgooSfunYOprecise_specQ},
  {"ord-app-mets", CVAR, &YgooSfunYord_app_mets},
  {"<mets>", CVAR, &YgooSfunYLmetsG},
  {"fun-nary?-setter", CVAR, &YgooSfunYfun_naryQ_setter},
  {"@cache-add", CVAR, &YgooSfunYOcache_add},
  {"@fun-nary?", CVAR, &YgooSfunYOfun_naryQ},
  {"met-app-unify", CVAR, &YgooSfunYmet_app_unify},
  {"def-fun/info-accessor", PVAR, NULL},
  {"ensure-singleton-cache", CVAR, &YgooSfunYensure_singleton_cache},
  {"fun-nary?", CVAR, &YgooSfunYfun_naryQ},
  {"fun-names-setter", CVAR, &YgooSfunYfun_names_setter},
  {"@fun-specs", CVAR, &YgooSfunYOfun_specs},
  {"ord-app-mets*", CVAR, &YgooSfunYord_app_metsT},
  {"unless", PVAR, NULL},
  {"@subclass-spec?", CVAR, &YgooSfunYOsubclass_specQ},
  {"gen-lookup-1", PVAR, NULL},
  {"gen-add-met", CVAR, &YgooSfunYgen_add_met},
  {"fun-names", CVAR, &YgooSfunYfun_names},
  {"@mets-subclasses-at", CVAR, &YgooSfunYOmets_subclasses_at},
  {"requires-singleton-prec", CVAR, &YgooSfunYrequires_singleton_prec},
  {"fun-specs-setter", CVAR, &YgooSfunYfun_specs_setter},
  {"order-mets", CVAR, &YgooSfunYorder_mets},
  {"@fun-names", CVAR, &YgooSfunYOfun_names},
  {"incongruent-method-error", CVAR, &YgooSfunYincongruent_method_error},
  {"fab-gen", CVAR, &YgooSfunYfab_gen},
  {"@singleton-spec?", CVAR, &YgooSfunYOsingleton_specQ},
  {"met-app?", CVAR, &YgooSfunYmet_appQ},
  {"fun-congruent?", CVAR, &YgooSfunYfun_congruentQ},
  {"fun-name-setter", CVAR, &YgooSfunYfun_name_setter},
  {"@specd-args", CVAR, &YgooSfunYOspecd_args},
  {"fun-inlineable?-setter", CVAR, &YgooSfunYfun_inlineableQ_setter},
  {"@order-specs", CVAR, &YgooSfunYOorder_specs},
  {"fun-name", CVAR, &YgooSfunYfun_name},
  {"@mets-singletons-at", CVAR, &YgooSfunYOmets_singletons_at},
  {"gen-lookup-1-using", PVAR, NULL},
  {"method-accessor-offset", CVAR, &YgooSfunYmethod_accessor_offset},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"fun-inlineable?", CVAR, &YgooSfunYfun_inlineableQ},
  {"@gen-cache-classes-setter", CVAR, &YgooSfunYOgen_cache_classes_setter},
  {"choose-methods", CVAR, &YgooSfunYchoose_methods},
  {"<body>", CVAR, &YgooSfunYLbodyG},
  {"prop-value-at-setter", PVAR, NULL},
  {"when", PVAR, NULL},
  {"or", PVAR, NULL},
  {"handler-info-arguments", CVAR, &YgooSfunYhandler_info_arguments},
  {"@mets-specs-at", CVAR, &YgooSfunYOmets_specs_at},
  {"@gen-cache-classes", CVAR, &YgooSfunYOgen_cache_classes},
  {"prop-bound-at?", PVAR, NULL},
  {"fun-unification-vars", CVAR, &YgooSfunYfun_unification_vars},
  {"fun-spec", CVAR, &YgooSfunYfun_spec},
  {"fun-count-setter", CVAR, &YgooSfunYfun_count_setter},
  {"<simple-handler-info>", CVAR, &YgooSfunYLsimple_handler_infoG},
  {"gen-lookup-miss", CVAR, &YgooSfunYgen_lookup_miss},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fun-count", NULL},
  {"@order-specs-class", NULL},
  {"fun-val", NULL},
  {"fun-spec", NULL},
  {"@fun-mets", NULL},
  {"<replace-generic-restart>", NULL},
  {"%define-method", NULL},
  {"@class<", NULL},
  {"fun-src-loc", NULL},
  {"fun-arity", NULL},
  {"fun-src", NULL},
  {"handler-info-message", NULL},
  {"prop-value-at", NULL},
  {"ord-app-mets", NULL},
  {"fun-nary?", NULL},
  {"gen-add-met", NULL},
  {"fun-names", NULL},
  {"incongruent-method-error", NULL},
  {"fab-gen", NULL},
  {"met-app?", NULL},
  {"fun-specs", NULL},
  {"%dispatch", NULL},
  {"fun-inlineable?-setter", NULL},
  {"fun-name", NULL},
  {"fun-inlineable?", NULL},
  {"prop-value-at-setter", NULL},
  {"handler-info-arguments", NULL},
  {"prop-bound-at?", NULL},
  {"fun-count-setter", NULL},
  {"<simple-handler-info>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSfun;
MODULE_INFO module_info_gooSfun = {
  "goo/fun",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);

/* EXPRESSION: */

extern void load_module_gooSfun (void);

void load_module_gooSfun (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();

  (P)YgooSfunY___main_0___();
  (P)YgooSfunY___main_1___();

}

/* END OF GENERATED CODE. */
