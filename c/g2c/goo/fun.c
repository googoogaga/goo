/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/fun");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/fun */

DEF(YgooSfunYfun_name_setter,"goo/fun","fun-name-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSfunYmethod_accessor_offset,"goo/fun","method-accessor-offset");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSfunYOorder_specs,"goo/fun","@order-specs");
DEF(YgooSfunYOspecd_args,"goo/fun","@specd-args");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSfunYfun_same_metQ,"goo/fun","fun-same-met?");
DEF(YgooSfunYOmets_singletons_at,"goo/fun","@mets-singletons-at");
EXT(YLanyG,"goo/boot","<any>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSfunYOgen_cache_classes_setter,"goo/fun","@gen-cache-classes-setter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSfunYfun_unification_vars_setter,"goo/fun","fun-unification-vars-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSfunYchoose_methods,"goo/fun","choose-methods");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
DEF(YgooSfunYDnul_assocs,"goo/fun","$nul-assocs");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSfunYOmets_subclasses_at,"goo/fun","@mets-subclasses-at");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YgooSfunYOgen_cache_classes,"goo/fun","@gen-cache-classes");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YgooSfunYOmets_specs_at,"goo/fun","@mets-specs-at");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooSfunYfun_unification_vars,"goo/fun","fun-unification-vars");
DEF(YgooSfunYOsubclass_specQ,"goo/fun","@subclass-spec?");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YOnew,"goo/boot","@new");
DEF(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSfunYgen_lookup_miss,"goo/fun","gen-lookup-miss");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSfunYOgen_cache_singletons_setter,"goo/fun","@gen-cache-singletons-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSfunYOfun_mets_setter,"goo/fun","@fun-mets-setter");
DEF(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YgooSfunYfun_val_setter,"goo/fun","fun-val-setter");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
DEF(YgooSfunYOgen_cache_singletons,"goo/fun","@gen-cache-singletons");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSfunYfun_src_loc_setter,"goo/fun","fun-src-loc-setter");
DEF(YgooSfunYOprune_mets_by_type_at,"goo/fun","@prune-mets-by-type-at");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSfunYOfun_unification_vars,"goo/fun","@fun-unification-vars");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSfunYOgen_cache_arg_pos_setter,"goo/fun","@gen-cache-arg-pos-setter");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSfunYfun_arity_setter,"goo/fun","fun-arity-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooSfunYOfun_val,"goo/fun","@fun-val");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
DEF(YgooSfunYgen_lookup_miss_1,"goo/fun","gen-lookup-miss-1");
DEF(YgooSfunYgen_lookup_miss_1_using,"goo/fun","gen-lookup-miss-1-using");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
DEF(YgooSfunYOfun_arity,"goo/fun","@fun-arity");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
DEF(YgooSfunYOgen_cache_arg_pos,"goo/fun","@gen-cache-arg-pos");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
DEF(YgooSfunYLmetsG,"goo/fun","<mets>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSfunYLenvG,"goo/fun","<env>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSfunYfun_src_setter,"goo/fun","fun-src-setter");
DEF(YgooSfunYOprecise_specQ,"goo/fun","@precise-spec?");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSfunYOfun_naryQ,"goo/fun","@fun-nary?");
DEF(YgooSfunYOmets_unspecialized_atQ,"goo/fun","@mets-unspecialized-at?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSfunYDmissed_dispatch,"goo/fun","$missed-dispatch");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSfunYord_app_mets_1,"goo/fun","ord-app-mets-1");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
DEF(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YOpick,"goo/boot","@pick");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooSfunYOunion_specQ,"goo/fun","@union-spec?");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSfunYOfun_specs,"goo/fun","@fun-specs");
DEF(YgooSfunYfun_naryQ_setter,"goo/fun","fun-nary?-setter");
DEF(YgooSfunYOcache_add,"goo/fun","@cache-add");
EXT(Yfun_info,"goo/boot","fun-info");
DEF(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YgooSfunYfun_names_setter,"goo/fun","fun-names-setter");
DEF(YgooSfunYLspecsG,"goo/fun","<specs>");
DEF(YgooSfunYensure_singleton_cache,"goo/fun","ensure-singleton-cache");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSfunYgen_from_met,"goo/fun","gen-from-met");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSfunYord_app_metsT,"goo/fun","ord-app-mets*");
DEF(YgooSfunYOfun_names,"goo/fun","@fun-names");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSfunYLbodyG,"goo/fun","<body>");
DEF(YgooSfunYmet_app_unify,"goo/fun","met-app-unify");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSfunYOsingleton_specQ,"goo/fun","@singleton-spec?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
DEF(YgooSfunYorder_mets,"goo/fun","order-mets");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YgooSfunYrequires_singleton_prec,"goo/fun","requires-singleton-prec");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSfunYfun_specs_setter,"goo/fun","fun-specs-setter");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooSfunYfun_congruentQ,"goo/fun","fun-congruent?");
EXT(YOrev,"goo/boot","@rev");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_69);
DEFLIT(lit_46);
DEFLIT(lit_142);
DEFLIT(lit_128);
DEFLIT(lit_59);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_68);
DEFLIT(lit_129);
DEFLIT(lit_23);
DEFLIT(lit_76);
DEFLIT(lit_64);
DEFLIT(lit_35);
DEFLIT(lit_131);
DEFLIT(lit_40);
DEFLIT(lit_156);
DEFLIT(lit_62);
DEFLIT(lit_152);
DEFLIT(lit_106);
DEFLIT(lit_18);
DEFLIT(lit_33);
DEFLIT(lit_109);
DEFLIT(lit_22);
DEFLIT(lit_112);
DEFLIT(lit_83);
DEFLIT(lit_132);
DEFLIT(lit_77);
DEFLIT(lit_63);
DEFLIT(lit_97);
DEFLIT(lit_86);
DEFLIT(lit_34);
DEFLIT(lit_54);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_148);
DEFLIT(lit_41);
DEFLIT(lit_26);
DEFLIT(lit_141);
DEFLIT(lit_72);
DEFLIT(lit_29);
DEFLIT(lit_99);
DEFLIT(lit_24);
DEFLIT(lit_121);
DEFLIT(lit_8);
DEFLIT(lit_45);
DEFLIT(lit_38);
DEFLIT(lit_149);
DEFLIT(lit_60);
DEFLIT(lit_6);
DEFLIT(lit_93);
DEFLIT(lit_136);
DEFLIT(lit_43);
DEFLIT(lit_67);
DEFLIT(lit_78);
DEFLIT(lit_44);
DEFLIT(lit_126);
DEFLIT(lit_144);
DEFLIT(lit_74);
DEFLIT(lit_31);
DEFLIT(lit_151);
DEFLIT(lit_127);
DEFLIT(lit_123);
DEFLIT(lit_30);
DEFLIT(lit_135);
DEFLIT(lit_49);
DEFLIT(lit_17);
DEFLIT(lit_133);
DEFLIT(lit_88);
DEFLIT(lit_104);
DEFLIT(lit_11);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_107);
DEFLIT(lit_28);
DEFLIT(lit_138);
DEFLIT(lit_139);
DEFLIT(lit_160);
DEFLIT(lit_140);
DEFLIT(lit_159);
DEFLIT(lit_71);
DEFLIT(lit_57);
DEFLIT(lit_0);
DEFLIT(lit_37);
DEFLIT(lit_85);
DEFLIT(lit_75);
DEFLIT(lit_118);
DEFLIT(lit_154);
DEFLIT(lit_105);
DEFLIT(lit_58);
DEFLIT(lit_100);
DEFLIT(lit_25);
DEFLIT(lit_113);
DEFLIT(lit_111);
DEFLIT(lit_92);
DEFLIT(lit_147);
DEFLIT(lit_12);
DEFLIT(lit_145);
DEFLIT(lit_80);
DEFLIT(lit_82);
DEFLIT(lit_53);
DEFLIT(lit_96);
DEFLIT(lit_103);
DEFLIT(lit_20);
DEFLIT(lit_110);
DEFLIT(lit_117);
DEFLIT(lit_48);
DEFLIT(lit_21);
DEFLIT(lit_119);
DEFLIT(lit_61);
DEFLIT(lit_4);
DEFLIT(lit_81);
DEFLIT(lit_120);
DEFLIT(lit_90);
DEFLIT(lit_155);
DEFLIT(lit_32);
DEFLIT(lit_50);
DEFLIT(lit_98);
DEFLIT(lit_137);
DEFLIT(lit_9);
DEFLIT(lit_55);
DEFLIT(lit_124);
DEFLIT(lit_102);
DEFLIT(lit_157);
DEFLIT(lit_16);
DEFLIT(lit_7);
DEFLIT(lit_108);
DEFLIT(lit_114);
DEFLIT(lit_116);
DEFLIT(lit_122);
DEFLIT(lit_153);
DEFLIT(lit_130);
DEFLIT(lit_27);
DEFLIT(lit_134);
DEFLIT(lit_47);
DEFLIT(lit_79);
DEFLIT(lit_65);
DEFLIT(lit_115);
DEFLIT(lit_42);
DEFLIT(lit_84);
DEFLIT(lit_70);
DEFLIT(lit_101);
DEFLIT(lit_13);
DEFLIT(lit_87);
DEFLIT(lit_66);
DEFLIT(lit_73);
DEFLIT(lit_125);
DEFLIT(lit_39);
DEFLIT(lit_89);
DEFLIT(lit_146);
DEFLIT(lit_158);
DEFLIT(lit_15);
DEFLIT(lit_36);
DEFLIT(lit_10);
DEFLIT(lit_94);
DEFLIT(lit_91);
DEFLIT(lit_56);
DEFLIT(lit_52);
DEFLIT(lit_95);
DEFLIT(lit_143);
DEFLIT(lit_3);
DEFLIT(lit_150);

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
FUNFOR(YgooSfunYfab_gen);
LOCFOR(fun_88);
FUNFOR(YgooSfunYgen_from_met);
FUNFOR(YgooSfunYPdefine_method);
extern P YgooSfunY___main_0___ ();
extern P YgooSfunY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSfunYOfun_names) {
  P x_;
  P xF1132;
  P xF1131;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1131 = x_;
  T1 = (P)YPprop_elt(xF1131,(P)2);
  xF1132 = T1;
  T0 = (P)YPprop_elt(xF1132,(P)1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_specs) {
  P x_;
  P xF1134;
  P xF1133;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1133 = x_;
  T1 = (P)YPprop_elt(xF1133,(P)1);
  xF1134 = T1;
  T0 = (P)YPprop_elt(xF1134,(P)0);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_naryQ) {
  P x_;
  P xF1136;
  P xF1135;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1135 = x_;
  T1 = (P)YPprop_elt(xF1135,(P)1);
  xF1136 = T1;
  T0 = (P)YPprop_elt(xF1136,(P)1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_arity) {
  P x_;
  P xF1138;
  P xF1137;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1137 = x_;
  T1 = (P)YPprop_elt(xF1137,(P)1);
  xF1138 = T1;
  T0 = (P)YPprop_elt(xF1138,(P)2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_val) {
  P x_;
  P xF1140;
  P xF1139;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1139 = x_;
  T1 = (P)YPprop_elt(xF1139,(P)1);
  xF1140 = T1;
  T0 = (P)YPprop_elt(xF1140,(P)3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOfun_unification_vars) {
  P x_;
  P xF1142;
  P xF1141;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF1141 = x_;
  T1 = (P)YPprop_elt(xF1141,(P)1);
  xF1142 = T1;
  T0 = (P)YPprop_elt(xF1142,(P)4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_mets) {
  P x_;
  P xF1143;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1143 = x_;
  T0 = (P)YPprop_elt(xF1143,(P)3);
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
  P yF1147;
  P xF1146;
  P yF1145;
  P xF1144;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),x_);
  xF1144 = T3;
  T4 = CALL1(1,VARREF(YgooSfunYOfun_arity),y_);
  yF1145 = T4;
  T2 = (P)YPiE(xF1144,yF1145);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
    xF1146 = T8;
    T9 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),y_);
    yF1147 = T9;
    T7 = (P)YPeqQ(xF1146,yF1147);
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
  P xF1175;
  P xF1174;
  P tmpF1173;
  P now_sameQF1172;
  P gmF1171;
  P xF1170;
  P xF1169;
  P xF1168;
  P xF1167;
  P gmsF1166;
  P sameQF1165;
  P metsF1164;
  P xF1163;
  P xF1162;
  P xF1161;
  P xF1160;
  P spec_classF1159;
  P xF1158;
  P yF1157;
  P xF1156;
  P tmpF1155;
  P specF1154;
  P xF1153;
  P xF1152;
  P xF1151;
  P xF1150;
  P xF1149;
  P specsF1148;
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
    specsF1148 = T27;
    LOOP_28: {
      P a28_0;
      xF1149 = specsF1148;
      xF1150 = xF1149;
      T11 = (P)YPeqQ(xF1150,VARREF(Ynil));
      T10 = (P)YPbb(T11);
      xF1151 = T10;
      T9 = (P)YPeqQ(xF1151,YPfalse);
      T8 = (P)YPbb(T9);
      if (T9) {
        xF1152 = specsF1148;
        xF1153 = xF1152;
        T26 = (P)YPprop_elt(xF1153,(P)0);
        specF1154 = T26;
        T18 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),specF1154);
        tmpF1155 = T18;
        if (tmpF1155 != YPfalse) {
          T15 = tmpF1155;
        } else {
          xF1156 = specF1154;
          yF1157 = VARREF(YLanyG);
          T17 = (P)YPeqQ(xF1156,yF1157);
          T16 = (P)YPbb(T17);
          T15 = T16;
        }
        xF1158 = T15;
        T14 = (P)YPeqQ(xF1158,YPfalse);
        T13 = (P)YPbb(T14);
        if (T14) {
          T25 = (P)YPobject_class(specF1154);
          spec_classF1159 = T25;
          xF1160 = spec_classF1159;
          T20 = (P)YPprop_elt(xF1160,(P)7);
          T19 = (P)YOadd_new(T20,g_);
          (P)YPclass_gens_setter(T19,spec_classF1159);
          xF1161 = spec_classF1159;
          T22 = (P)YPprop_elt(xF1161,(P)8);
          T21 = (P)YOadd_new(T22,m_);
          (P)YPclass_mets_setter(T21,spec_classF1159);
          xF1162 = specsF1148;
          xF1163 = xF1162;
          T24 = (P)YPprop_elt(xF1163,(P)1);
          a28_0 = T24;
          specsF1148 = a28_0;
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
    metsF1164 = Ynil;
    sameQF1165 = YPfalse;
    T42 = CALL1(1,VARREF(YgooSfunYOfun_mets),g_);
    check_type(T42,VARREF(YgooSfunYLmetsG));
    gmsF1166 = T42;
    LOOP_29: {
      P a29_0,a29_1,a29_2;
      xF1167 = gmsF1166;
      xF1168 = xF1167;
      T30 = (P)YPeqQ(xF1168,VARREF(Ynil));
      T29 = (P)YPbb(T30);
      if (T30) {
        if (sameQF1165 != YPfalse) {
          T33 = metsF1164;
        } else {
          T34 = (P)YOadd(metsF1164,m_);
          T33 = T34;
        }
        T32 = CALL1(1,VARREF(YOrevX),T33);
        T31 = (P)YPgen_mets_setter(T32,g_);
        T28 = T31;
      } else {
        xF1169 = gmsF1166;
        xF1170 = xF1169;
        T41 = (P)YPprop_elt(xF1170,(P)0);
        gmF1171 = T41;
        T40 = CALL2(1,VARREF(YgooSfunYfun_same_metQ),gmF1171,m_);
        now_sameQF1172 = T40;
        if (now_sameQF1172 != YPfalse) {
          T37 = m_;
        } else {
          T37 = gmF1171;
        }
        T36 = (P)YOadd(metsF1164,T37);
        tmpF1173 = now_sameQF1172;
        if (tmpF1173 != YPfalse) {
          T38 = tmpF1173;
        } else {
          T38 = sameQF1165;
        }
        xF1174 = gmsF1166;
        xF1175 = xF1174;
        T39 = (P)YPprop_elt(xF1175,(P)1);
        a29_0 = T36;
        a29_1 = T38;
        a29_2 = T39;
        metsF1164 = a29_0;
        sameQF1165 = a29_1;
        gmsF1166 = a29_2;
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
  P xF1188;
  P xF1187;
  P yF1186;
  P xF1185;
  P yF1184;
  P xF1183;
  P cF1182;
  P xF1181;
  P xF1180;
  P xF1179;
  P xF1178;
  P psF1177;
  P xF1176;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
  xF1176 = wrt_;
  T13 = (P)YPprop_elt(xF1176,(P)4);
  psF1177 = T13;
  LOOP_30: {
    P a30_0;
    xF1178 = psF1177;
    xF1179 = xF1178;
    T2 = (P)YPeqQ(xF1179,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_30),LITREF(lit_31),wrt_,c1_,c2_);
      T0 = T3;
    } else {
      xF1180 = psF1177;
      xF1181 = xF1180;
      T12 = (P)YPprop_elt(xF1181,(P)0);
      cF1182 = T12;
      xF1183 = cF1182;
      yF1184 = c1_;
      T6 = (P)YPeqQ(xF1183,yF1184);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPtrue;
      } else {
        xF1185 = cF1182;
        yF1186 = c2_;
        T9 = (P)YPeqQ(xF1185,yF1186);
        T8 = (P)YPbb(T9);
        if (T9) {
          T7 = YPfalse;
        } else {
          xF1187 = psF1177;
          xF1188 = xF1187;
          T11 = (P)YPprop_elt(xF1188,(P)1);
          a30_0 = T11;
          psF1177 = a30_0;
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
  P tagF1193;
  P xF1192;
  P xF1191;
  P yF1190;
  P xF1189;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF1189 = t1_;
  yF1190 = t2_;
  T2 = (P)YPeqQ(xF1189,yF1190);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_34),t1_);
    T0 = T3;
  } else {
    xF1191 = arg_;
    xF1192 = xF1191;
    T11 = (P)YPiB(xF1192,(P)3);
    tagF1193 = T11;
    T8 = (P)YPiE(tagF1193,(P)0);
    T7 = (P)YPbb(T8);
    if (T8) {
      T9 = (P)YPobject_class(xF1191);
      T6 = T9;
    } else {
      T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF1193);
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
  P yF1203;
  P xF1202;
  P tagF1201;
  P xF1200;
  P xF1199;
  P yF1198;
  P xF1197;
  P tagF1196;
  P xF1195;
  P xF1194;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF1194 = t1_;
  xF1195 = xF1194;
  T9 = (P)YPiB(xF1195,(P)3);
  tagF1196 = T9;
  T6 = (P)YPiE(tagF1196,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF1194);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF1196);
    T4 = T8;
  }
  xF1197 = T4;
  yF1198 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF1197,yF1198);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF1199 = t2_;
    xF1200 = xF1199;
    T17 = (P)YPiB(xF1200,(P)3);
    tagF1201 = T17;
    T14 = (P)YPiE(tagF1201,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF1199);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF1201);
      T12 = T16;
    }
    xF1202 = T12;
    yF1203 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF1202,yF1203);
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
  P yF1240;
  P xF1239;
  P tmpF1238;
  P yF1237;
  P xF1236;
  P yF1235;
  P xF1234;
  P yF1233;
  P xF1232;
  P idxF1231;
  P tF1230;
  P xF1229;
  P xF1228;
  P xF1227;
  P xF1226;
  P xF1225;
  P xF1224;
  P yF1223;
  P xF1222;
  P cmpF1221;
  P xF1220;
  P xF1219;
  P iF1218;
  P xF1217;
  P cmpAtypF1216;
  P xF1215;
  P xF1214;
  P xF1213;
  P iF1212;
  P xF1211;
  P m2specF1210;
  P m1specF1209;
  P yF1208;
  P xF1207;
  P idxF1206;
  P stateF1205;
  P arityF1204;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
  T32 = CALL1(1,VARREF(YgooSfunYOfun_arity),m1_);
  check_type(T32,VARREF(YLfixnumG));
  arityF1204 = T32;
  check_type(LITREF(lit_34),VARREF(YLsymG));
  stateF1205 = LITREF(lit_34);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  idxF1206 = YPint((P)0);
  LOOP_31: {
    P a31_0,a31_1;
    xF1207 = idxF1206;
    yF1208 = arityF1204;
    T2 = (P)YPiE(xF1207,yF1208);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = stateF1205;
    } else {
      T31 = CALL2(1,VARREF(YgooSfunYfun_spec),m1_,idxF1206);
      m1specF1209 = T31;
      T30 = CALL2(1,VARREF(YgooSfunYfun_spec),m2_,idxF1206);
      m2specF1210 = T30;
      xF1211 = args_;
      iF1212 = idxF1206;
      xF1213 = xF1211;
      T27 = (P)YPprop_elt(xF1213,(P)0);
      xF1214 = iF1212;
      xF1215 = xF1214;
      T29 = (P)YPiGG(xF1215,(P)2);
      T28 = (P)YPi_((P)0,T29);
      T26 = (P)YPloc_off(T27,T28);
      T25 = CALL3(1,VARREF(YgooSfunYOorder_specs),m1specF1209,m2specF1210,T26);
      check_type(T25,VARREF(YLtupG));
      cmpAtypF1216 = T25;
      xF1217 = cmpAtypF1216;
      iF1218 = YPint((P)0);
      xF1219 = iF1218;
      xF1220 = xF1219;
      T24 = (P)YPiGG(xF1220,(P)2);
      T23 = (P)YPtelt(xF1217,T24);
      check_type(T23,VARREF(YLsymG));
      cmpF1221 = T23;
      xF1222 = idxF1206;
      yF1223 = YPint((P)1);
      xF1224 = xF1222;
      xF1225 = xF1224;
      T21 = (P)YPiGG(xF1225,(P)2);
      xF1226 = yF1223;
      xF1227 = xF1226;
      T22 = (P)YPiGG(xF1227,(P)2);
      T20 = (P)YPiA(T21,T22);
      xF1228 = T20;
      xF1229 = xF1228;
      tF1230 = (P)1;
      T19 = (P)YPiLL(xF1229,(P)2);
      T18 = (P)YPiv(T19,tF1230);
      check_type(T18,VARREF(YLfixnumG));
      idxF1231 = T18;
      xF1232 = cmpF1221;
      yF1233 = LITREF(lit_34);
      T5 = (P)YPeqQ(xF1232,yF1233);
      T4 = (P)YPbb(T5);
      if (T5) {
        a31_0 = stateF1205;
        a31_1 = idxF1231;
        stateF1205 = a31_0;
        idxF1206 = a31_1;
        goto LOOP_31;
        T3 = T6;
      } else {
        xF1234 = cmpF1221;
        yF1235 = LITREF(lit_41);
        T11 = (P)YPeqQ(xF1234,yF1235);
        T10 = (P)YPbb(T11);
        T9 = CALL1(1,VARREF(Ynot),T10);
        if (T9 != YPfalse) {
          xF1236 = stateF1205;
          yF1237 = LITREF(lit_34);
          T16 = (P)YPeqQ(xF1236,yF1237);
          T15 = (P)YPbb(T16);
          tmpF1238 = T15;
          if (tmpF1238 != YPfalse) {
            T12 = tmpF1238;
          } else {
            xF1239 = cmpF1221;
            yF1240 = stateF1205;
            T14 = (P)YPeqQ(xF1239,yF1240);
            T13 = (P)YPbb(T14);
            T12 = T13;
          }
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        if (T8 != YPfalse) {
          a31_0 = cmpF1221;
          a31_1 = idxF1231;
          stateF1205 = a31_0;
          idxF1206 = a31_1;
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
  P xF1253;
  P xF1252;
  P xF1251;
  P xF1250;
  P t1F1249;
  P xF1248;
  P xF1247;
  P tmpF1246;
  P yF1245;
  P xF1244;
  P lF1243;
  P xF1242;
  P xF1241;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(headed_list_, 0);
  xF1241 = headed_list_;
  xF1242 = xF1241;
  T6 = (P)YPprop_elt(xF1242,(P)1);
  check_type(T6,VARREF(YLlstG));
  lF1243 = T6;
  LOOP_32: {
    P a32_0;
    xF1244 = lF1243;
    yF1245 = Ynil;
    T5 = (P)YPeqQ(xF1244,yF1245);
    T4 = (P)YPbb(T5);
    tmpF1246 = T4;
    if (tmpF1246 != YPfalse) {
      T0 = tmpF1246;
    } else {
      xF1247 = lF1243;
      xF1248 = xF1247;
      T3 = (P)YPprop_elt(xF1248,(P)1);
      t1F1249 = T3;
      xF1250 = FREEREF(0);
      xF1251 = xF1250;
      T1 = (P)YPprop_elt(xF1251,(P)1);
      (P)YOtail_setter(T1,lF1243);
      (P)YOtail_setter(lF1243,FREEREF(0));
      a32_0 = t1F1249;
      lF1243 = a32_0;
      goto LOOP_32;
      T0 = T2;
    }
  }
  (P)YOtail_setter(Ynil,headed_list_);
  xF1252 = FREEREF(0);
  xF1253 = xF1252;
  T9 = (P)YPprop_elt(xF1253,(P)1);
  T8 = (P)YOpair(FREEREF(1),T9);
  T7 = (P)YOtail_setter(T8,FREEREF(0));
UNLINK_STACK();
  QRET(T7);
}

LOCCODEDEF(fun_precedes_allQ_21) {
  P l_;
  P xF1262;
  P xF1261;
  P yF1260;
  P xF1259;
  P xF1258;
  P xF1257;
  P yF1256;
  P xF1255;
  P lF1254;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(l_, 0);
  check_type(l_,VARREF(YLlstG));
  lF1254 = l_;
  LOOP_33: {
    P a33_0;
    xF1255 = lF1254;
    yF1256 = Ynil;
    T2 = (P)YPeqQ(xF1255,yF1256);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF1257 = lF1254;
      xF1258 = xF1257;
      T7 = (P)YPprop_elt(xF1258,(P)0);
      T6 = CALL3(1,FREEREF(2),FREEREF(0),T7,FREEREF(1));
      xF1259 = T6;
      yF1260 = LITREF(lit_35);
      T5 = (P)YPeqQ(xF1259,yF1260);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF1261 = lF1254;
        xF1262 = xF1261;
        T9 = (P)YPprop_elt(xF1262,(P)1);
        a33_0 = T9;
        lF1254 = a33_0;
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
  P xF1269;
  P xF1268;
  P xF1267;
  P xF1266;
  P tmpF1265;
  P xF1264;
  P xF1263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(oprev_, 0);
  xF1263 = oprev_;
  xF1264 = xF1263;
  T7 = (P)YPprop_elt(xF1264,(P)1);
  T6 = CALL1(1,FREEREF(0),T7);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF1265 = T5;
  if (tmpF1265 != YPfalse) {
    T1 = tmpF1265;
  } else {
    xF1266 = FREEREF(1);
    xF1267 = xF1266;
    T4 = (P)YPprop_elt(xF1267,(P)1);
    T3 = CALL1(1,FREEREF(0),T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T8 = CALL1(1,FREEREF(2),oprev_);
    T0 = T8;
  } else {
    xF1268 = oprev_;
    xF1269 = xF1268;
    T11 = (P)YPprop_elt(xF1269,(P)1);
    T10 = (P)YOpair(FREEREF(3),T11);
    T9 = (P)YOtail_setter(T10,oprev_);
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_insert_23) {
  P oprev_,osub_;
  P xF1291;
  P xF1290;
  P yF1289;
  P xF1288;
  P yF1287;
  P xF1286;
  P indicF1285;
  P xF1284;
  P xF1283;
  P xF1282;
  P xF1281;
  P xF1280;
  P xF1279;
  P yF1278;
  P xF1277;
  P yF1276;
  P xF1275;
  P indicF1274;
  P xF1273;
  P xF1272;
  P xF1271;
  P xF1270;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
  LOOP_34: {
    P a34_0,a34_1;
    xF1281 = osub_;
    xF1282 = xF1281;
    T2 = (P)YPeqQ(xF1282,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,FREEREF(0),oprev_);
      T0 = T3;
    } else {
      xF1283 = osub_;
      xF1284 = xF1283;
      T15 = (P)YPprop_elt(xF1284,(P)0);
      T14 = CALL3(1,FREEREF(3),FREEREF(1),T15,FREEREF(2));
      indicF1285 = T14;
      xF1286 = indicF1285;
      yF1287 = LITREF(lit_35);
      T6 = (P)YPeqQ(xF1286,yF1287);
      T5 = (P)YPbb(T6);
      if (T6) {
        T7 = CALL1(1,FREEREF(0),oprev_);
        T4 = T7;
      } else {
        xF1288 = indicF1285;
        yF1289 = LITREF(lit_36);
        T10 = (P)YPeqQ(xF1288,yF1289);
        T9 = (P)YPbb(T10);
        if (T10) {
          xF1290 = osub_;
          xF1291 = xF1290;
          T12 = (P)YPprop_elt(xF1291,(P)1);
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
  P xF1312;
  P xF1311;
  P xF1310;
  P xF1309;
  P xF1308;
  P xF1307;
  P xF1306;
  P xF1305;
  P insertF1304;
  P check_subsequent_ambiguitiesF1303;
  P precedes_allQF1302;
  P make_ambiguousF1301;
  P metF1300;
  P xF1299;
  P xF1298;
  P xF1297;
  P yF1296;
  P xF1295;
  P metsF1294;
  P aheadF1293;
  P oheadF1292;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
  T17 = (P)YOpair(YPfalse,Ynil);
  check_type(T17,VARREF(YLlstG));
  oheadF1292 = T17;
  T16 = (P)YOpair(YPfalse,Ynil);
  check_type(T16,VARREF(YLlstG));
  aheadF1293 = T16;
  check_type(mets_,VARREF(YLlstG));
  metsF1294 = mets_;
  LOOP_35: {
    P a35_0;
    xF1295 = metsF1294;
    yF1296 = Ynil;
    T4 = (P)YPeqQ(xF1295,yF1296);
    T3 = (P)YPbb(T4);
    xF1297 = T3;
    T2 = (P)YPeqQ(xF1297,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF1298 = metsF1294;
      xF1299 = xF1298;
      T12 = (P)YPprop_elt(xF1299,(P)0);
      check_type(T12,VARREF(YLmetG));
      metF1300 = T12;
      T8 = FUNSHELL(1,fun_make_ambiguous_20,2);
      make_ambiguousF1301 = T8;
      T9 = FUNSHELL(1,fun_precedes_allQ_21,3);
      precedes_allQF1302 = T9;
      T10 = FUNSHELL(1,fun_check_subsequent_ambiguities_22,4);
      check_subsequent_ambiguitiesF1303 = T10;
      T11 = FUNSHELL(1,fun_insert_23,5);
      insertF1304 = T11;
      FUNINIT(make_ambiguousF1301, 2,aheadF1293,metF1300);
      FUNINIT(precedes_allQF1302, 3,metF1300,args_,order_mets_);
      FUNINIT(check_subsequent_ambiguitiesF1303, 4,precedes_allQF1302,aheadF1293,make_ambiguousF1301,metF1300);
      FUNINIT(insertF1304, 5,check_subsequent_ambiguitiesF1303,metF1300,args_,order_mets_,make_ambiguousF1301);
      xF1305 = oheadF1292;
      xF1306 = xF1305;
      T5 = (P)YPprop_elt(xF1306,(P)1);
      CALL2(1,insertF1304,oheadF1292,T5);
      xF1307 = metsF1294;
      xF1308 = xF1307;
      T7 = (P)YPprop_elt(xF1308,(P)1);
      a35_0 = T7;
      metsF1294 = a35_0;
      goto LOOP_35;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  xF1309 = oheadF1292;
  xF1310 = xF1309;
  T14 = (P)YPprop_elt(xF1310,(P)1);
  xF1311 = aheadF1293;
  xF1312 = xF1311;
  T15 = (P)YPprop_elt(xF1312,(P)1);
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
  P tF1352;
  P xF1351;
  P xF1350;
  P xF1349;
  P xF1348;
  P xF1347;
  P xF1346;
  P yF1345;
  P xF1344;
  P xF1343;
  P xF1342;
  P xF1341;
  P xF1340;
  P xF1339;
  P xF1338;
  P c2F1337;
  P c1F1336;
  P tagF1335;
  P xF1334;
  P xF1333;
  P cF1332;
  P oF1331;
  P yF1330;
  P xF1329;
  P tagF1328;
  P xF1327;
  P xF1326;
  P tF1325;
  P oF1324;
  P xF1323;
  P xF1322;
  P xF1321;
  P iF1320;
  P xF1319;
  P yF1318;
  P xF1317;
  P iF1316;
  P nF1315;
  P xF1314;
  P xF1313;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T4 = CALL1(1,VARREF(YgooSfunYOfun_unification_vars),met_);
  xF1313 = T4;
  xF1314 = xF1313;
  T3 = (P)YPeqQ(xF1314,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSfunYmet_app_unify),met_,args_);
    T0 = T5;
  } else {
    T44 = CALL1(1,VARREF(YgooSfunYOfun_arity),met_);
    check_type(T44,VARREF(YLfixnumG));
    nF1315 = T44;
    check_type(YPint((P)0),VARREF(YLfixnumG));
    iF1316 = YPint((P)0);
    LOOP_36: {
      P a36_0;
      xF1317 = iF1316;
      yF1318 = nF1315;
      T8 = (P)YPiE(xF1317,yF1318);
      T7 = (P)YPbb(T8);
      if (T8) {
        T6 = YPtrue;
      } else {
        xF1319 = args_;
        iF1320 = iF1316;
        xF1321 = xF1319;
        T34 = (P)YPprop_elt(xF1321,(P)0);
        xF1322 = iF1320;
        xF1323 = xF1322;
        T36 = (P)YPiGG(xF1323,(P)2);
        T35 = (P)YPi_((P)0,T36);
        T33 = (P)YPloc_off(T34,T35);
        oF1324 = T33;
        T37 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,iF1316);
        tF1325 = T37;
        xF1326 = tF1325;
        xF1327 = xF1326;
        T18 = (P)YPiB(xF1327,(P)3);
        tagF1328 = T18;
        T15 = (P)YPiE(tagF1328,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF1326);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1328);
          T13 = T17;
        }
        xF1329 = T13;
        yF1330 = VARREF(YLclassG);
        T12 = (P)YPeqQ(xF1329,yF1330);
        T11 = (P)YPbb(T12);
        if (T12) {
          oF1331 = oF1324;
          cF1332 = tF1325;
          xF1333 = oF1331;
          xF1334 = xF1333;
          T31 = (P)YPiB(xF1334,(P)3);
          tagF1335 = T31;
          T28 = (P)YPiE(tagF1335,(P)0);
          T27 = (P)YPbb(T28);
          if (T28) {
            T29 = (P)YPobject_class(xF1333);
            T26 = T29;
          } else {
            T30 = (P)YPelt(VARREF(YDdirect_object_class),tagF1335);
            T26 = T30;
          }
          c1F1336 = T26;
          c2F1337 = cF1332;
          xF1338 = c1F1336;
          T22 = (P)YPprop_elt(xF1338,(P)11);
          xF1339 = c2F1337;
          T24 = (P)YPprop_elt(xF1339,(P)10);
          xF1340 = T24;
          xF1341 = xF1340;
          T23 = (P)YPiGG(xF1341,(P)2);
          T21 = (P)YPselt(T22,T23);
          xF1342 = YPint((P)1);
          xF1343 = xF1342;
          T25 = (P)YPiGG(xF1343,(P)2);
          T20 = (P)YPiE(T21,T25);
          T19 = (P)YPbb(T20);
          T10 = T19;
        } else {
          T32 = CALL2(1,VARREF(YisaQ),oF1324,tF1325);
          T10 = T32;
        }
        if (T10 != YPfalse) {
          xF1344 = iF1316;
          yF1345 = YPint((P)1);
          xF1346 = xF1344;
          xF1347 = xF1346;
          T42 = (P)YPiGG(xF1347,(P)2);
          xF1348 = yF1345;
          xF1349 = xF1348;
          T43 = (P)YPiGG(xF1349,(P)2);
          T41 = (P)YPiA(T42,T43);
          xF1350 = T41;
          xF1351 = xF1350;
          tF1352 = (P)1;
          T40 = (P)YPiLL(xF1351,(P)2);
          T39 = (P)YPiv(T40,tF1352);
          a36_0 = T39;
          iF1316 = a36_0;
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
  P considered_metsF1363;
  P xF1362;
  P xF1361;
  P ansF1360;
  P mF1359;
  P xF1358;
  P xF1357;
  P xF1356;
  P xF1355;
  P msF1354;
  P ansF1353;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
  ansF1353 = Ynil;
  T10 = CALL1(1,VARREF(YgooSfunYOfun_mets),gf_);
  msF1354 = T10;
  LOOP_37: {
    P a37_0,a37_1;
    xF1355 = msF1354;
    xF1356 = xF1355;
    T3 = (P)YPeqQ(xF1356,VARREF(Ynil));
    T2 = (P)YPbb(T3);
    if (T3) {
      T1 = ansF1353;
    } else {
      xF1357 = msF1354;
      xF1358 = xF1357;
      T9 = (P)YPprop_elt(xF1358,(P)0);
      mF1359 = T9;
      T7 = CALL2(1,VARREF(YgooSfunYmet_appQ),mF1359,args_);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(mF1359,ansF1353);
        T6 = T8;
      } else {
        T6 = ansF1353;
      }
      ansF1360 = T6;
      xF1361 = msF1354;
      xF1362 = xF1361;
      T5 = (P)YPprop_elt(xF1362,(P)1);
      a37_0 = ansF1360;
      a37_1 = T5;
      ansF1353 = a37_0;
      msF1354 = a37_1;
      goto LOOP_37;
      T1 = T4;
    }
  }
  considered_metsF1363 = T1;
  T0 = CALL3(1,VARREF(YgooSfunYord_app_mets_1),considered_metsF1363,args_,VARREF(YgooSfunYorder_mets));
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
  P xF1364;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1364 = x_;
  T0 = (P)YPprop_elt(xF1364,(P)1);
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
  P xF1365;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1365 = x_;
  T0 = (P)YPprop_elt(xF1365,(P)2);
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
  P xF1366;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF1366 = x_;
  T0 = (P)YPprop_elt(xF1366,(P)3);
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
  P xF1390;
  P xF1389;
  P xF1388;
  P xF1387;
  P iF1386;
  P xF1385;
  P xF1384;
  P xF1383;
  P xF1382;
  P iF1381;
  P xF1380;
  P yF1379;
  P xF1378;
  P nF1377;
  P xF1376;
  P xF1375;
  P propQF1374;
  P yF1373;
  P xF1372;
  P tagF1371;
  P xF1370;
  P xF1369;
  P propF1368;
  P xF1367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
  xF1367 = met_;
  T25 = (P)YPprop_elt(xF1367,(P)3);
  propF1368 = T25;
  if (propF1368 != YPfalse) {
    xF1369 = propF1368;
    xF1370 = xF1369;
    T24 = (P)YPiB(xF1370,(P)3);
    tagF1371 = T24;
    T21 = (P)YPiE(tagF1371,(P)0);
    T20 = (P)YPbb(T21);
    if (T21) {
      T22 = (P)YPobject_class(xF1369);
      T19 = T22;
    } else {
      T23 = (P)YPelt(VARREF(YDdirect_object_class),tagF1371);
      T19 = T23;
    }
    xF1372 = T19;
    yF1373 = VARREF(YLpropG);
    T18 = (P)YPeqQ(xF1372,yF1373);
    T17 = (P)YPbb(T18);
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
  propQF1374 = T16;
  xF1375 = args_;
  xF1376 = xF1375;
  T15 = (P)YPprop_elt(xF1376,(P)1);
  nF1377 = T15;
  if (propQF1374 != YPfalse) {
    xF1378 = nF1377;
    yF1379 = YPint((P)1);
    T3 = (P)YPiE(xF1378,yF1379);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF1380 = args_;
      iF1381 = YPint((P)0);
      xF1382 = xF1380;
      T6 = (P)YPprop_elt(xF1382,(P)0);
      xF1383 = iF1381;
      xF1384 = xF1383;
      T8 = (P)YPiGG(xF1384,(P)2);
      T7 = (P)YPi_((P)0,T8);
      T5 = (P)YPloc_off(T6,T7);
      T4 = CALL2(1,VARREF(Yprop_offset),T5,gen_);
      T1 = T4;
    } else {
      xF1385 = args_;
      iF1386 = YPint((P)1);
      xF1387 = xF1385;
      T11 = (P)YPprop_elt(xF1387,(P)0);
      xF1388 = iF1386;
      xF1389 = xF1388;
      T13 = (P)YPiGG(xF1389,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      xF1390 = propF1368;
      T14 = (P)YPprop_elt(xF1390,(P)1);
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
  P xF1403;
  P xF1402;
  P xF1401;
  P xF1400;
  P xF1399;
  P xF1398;
  P c2F1397;
  P c1F1396;
  P tagF1395;
  P xF1394;
  P xF1393;
  P cF1392;
  P oF1391;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1391 = x_;
  cF1392 = VARREF(YLsingletonG);
  xF1393 = oF1391;
  xF1394 = xF1393;
  T12 = (P)YPiB(xF1394,(P)3);
  tagF1395 = T12;
  T9 = (P)YPiE(tagF1395,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1393);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1395);
    T7 = T11;
  }
  c1F1396 = T7;
  c2F1397 = cF1392;
  xF1398 = c1F1396;
  T3 = (P)YPprop_elt(xF1398,(P)11);
  xF1399 = c2F1397;
  T5 = (P)YPprop_elt(xF1399,(P)10);
  xF1400 = T5;
  xF1401 = xF1400;
  T4 = (P)YPiGG(xF1401,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1402 = YPint((P)1);
  xF1403 = xF1402;
  T6 = (P)YPiGG(xF1403,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOsubclass_specQ) {
  P x_;
  P xF1416;
  P xF1415;
  P xF1414;
  P xF1413;
  P xF1412;
  P xF1411;
  P c2F1410;
  P c1F1409;
  P tagF1408;
  P xF1407;
  P xF1406;
  P cF1405;
  P oF1404;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1404 = x_;
  cF1405 = VARREF(YLsubclassG);
  xF1406 = oF1404;
  xF1407 = xF1406;
  T12 = (P)YPiB(xF1407,(P)3);
  tagF1408 = T12;
  T9 = (P)YPiE(tagF1408,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1406);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1408);
    T7 = T11;
  }
  c1F1409 = T7;
  c2F1410 = cF1405;
  xF1411 = c1F1409;
  T3 = (P)YPprop_elt(xF1411,(P)11);
  xF1412 = c2F1410;
  T5 = (P)YPprop_elt(xF1412,(P)10);
  xF1413 = T5;
  xF1414 = xF1413;
  T4 = (P)YPiGG(xF1414,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1415 = YPint((P)1);
  xF1416 = xF1415;
  T6 = (P)YPiGG(xF1416,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOunion_specQ) {
  P x_;
  P xF1429;
  P xF1428;
  P xF1427;
  P xF1426;
  P xF1425;
  P xF1424;
  P c2F1423;
  P c1F1422;
  P tagF1421;
  P xF1420;
  P xF1419;
  P cF1418;
  P oF1417;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF1417 = x_;
  cF1418 = VARREF(YLunionG);
  xF1419 = oF1417;
  xF1420 = xF1419;
  T12 = (P)YPiB(xF1420,(P)3);
  tagF1421 = T12;
  T9 = (P)YPiE(tagF1421,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF1419);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF1421);
    T7 = T11;
  }
  c1F1422 = T7;
  c2F1423 = cF1418;
  xF1424 = c1F1422;
  T3 = (P)YPprop_elt(xF1424,(P)11);
  xF1425 = c2F1423;
  T5 = (P)YPprop_elt(xF1425,(P)10);
  xF1426 = T5;
  xF1427 = xF1426;
  T4 = (P)YPiGG(xF1427,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF1428 = YPint((P)1);
  xF1429 = xF1428;
  T6 = (P)YPiGG(xF1429,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOprecise_specQ) {
  P x_;
  P xF1432;
  P tmpF1431;
  P tmpF1430;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T7 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),x_);
  tmpF1430 = T7;
  if (tmpF1430 != YPfalse) {
    T0 = tmpF1430;
  } else {
    T6 = CALL1(1,VARREF(YgooSfunYOsubclass_specQ),x_);
    tmpF1431 = T6;
    if (tmpF1431 != YPfalse) {
      T1 = tmpF1431;
    } else {
      T3 = CALL1(1,VARREF(YgooSfunYOunion_specQ),x_);
      if (T3 != YPfalse) {
        xF1432 = x_;
        T5 = (P)YPprop_elt(xF1432,(P)0);
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
  P yF1434;
  P xF1433;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  T2 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,FREEREF(0));
  xF1433 = T2;
  yF1434 = VARREF(YLanyG);
  T1 = (P)YPiE(xF1433,yF1434);
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
  P xF1511;
  P xF1510;
  P iF1509;
  P xF1508;
  P zF1507;
  P tF1506;
  P xF1505;
  P xF1504;
  P xF1503;
  P xF1502;
  P xF1501;
  P xF1500;
  P yF1499;
  P xF1498;
  P xF1497;
  P xF1496;
  P iF1495;
  P xF1494;
  P zF1493;
  P tF1492;
  P xF1491;
  P xF1490;
  P xF1489;
  P xF1488;
  P xF1487;
  P xF1486;
  P yF1485;
  P xF1484;
  P xF1483;
  P xF1482;
  P iF1481;
  P xF1480;
  P zF1479;
  P xF1478;
  P xF1477;
  P iF1476;
  P xF1475;
  P iF1474;
  P tF1473;
  P xF1472;
  P xF1471;
  P xF1470;
  P xF1469;
  P xF1468;
  P xF1467;
  P yF1466;
  P xF1465;
  P xF1464;
  P xF1463;
  P iF1462;
  P xF1461;
  P zF1460;
  P xF1459;
  P xF1458;
  P iF1457;
  P xF1456;
  P xF1455;
  P yF1454;
  P xF1453;
  P iF1452;
  P resF1451;
  P xF1450;
  P xF1449;
  P tF1448;
  P xF1447;
  P xF1446;
  P xF1445;
  P xF1444;
  P xF1443;
  P xF1442;
  P yF1441;
  P xF1440;
  P olenF1439;
  P tF1438;
  P xF1437;
  P xF1436;
  P xF1435;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
  xF1435 = t_;
  T42 = (P)YPtlen(xF1435);
  xF1436 = T42;
  xF1437 = xF1436;
  tF1438 = (P)1;
  T41 = (P)YPiLL(xF1437,(P)2);
  T40 = (P)YPiv(T41,tF1438);
  olenF1439 = T40;
  xF1440 = olenF1439;
  yF1441 = YPint((P)2);
  xF1442 = xF1440;
  xF1443 = xF1442;
  T38 = (P)YPiGG(xF1443,(P)2);
  xF1444 = yF1441;
  xF1445 = xF1444;
  T39 = (P)YPiGG(xF1445,(P)2);
  T37 = (P)YPiA(T38,T39);
  xF1446 = T37;
  xF1447 = xF1446;
  tF1448 = (P)1;
  T36 = (P)YPiLL(xF1447,(P)2);
  T35 = (P)YPiv(T36,tF1448);
  xF1449 = T35;
  xF1450 = xF1449;
  T34 = (P)YPiGG(xF1450,(P)2);
  T33 = (P)YPtup(T34,YPfalse);
  resF1451 = T33;
  iF1452 = YPint((P)0);
  LOOP_38: {
    P a38_0;
    xF1453 = iF1452;
    yF1454 = olenF1439;
    T4 = (P)YPiE(xF1453,yF1454);
    T3 = (P)YPbb(T4);
    xF1455 = T3;
    T2 = (P)YPeqQ(xF1455,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF1456 = t_;
      iF1457 = iF1452;
      xF1458 = iF1457;
      xF1459 = xF1458;
      T8 = (P)YPiGG(xF1459,(P)2);
      T7 = (P)YPtelt(xF1456,T8);
      zF1460 = T7;
      xF1461 = resF1451;
      iF1462 = iF1452;
      xF1463 = iF1462;
      xF1464 = xF1463;
      T6 = (P)YPiGG(xF1464,(P)2);
      T5 = (P)YPtelt_setter(zF1460,xF1461,T6);
      xF1465 = iF1452;
      yF1466 = YPint((P)1);
      xF1467 = xF1465;
      xF1468 = xF1467;
      T22 = (P)YPiGG(xF1468,(P)2);
      xF1469 = yF1466;
      xF1470 = xF1469;
      T23 = (P)YPiGG(xF1470,(P)2);
      T21 = (P)YPiA(T22,T23);
      xF1471 = T21;
      xF1472 = xF1471;
      tF1473 = (P)1;
      T20 = (P)YPiLL(xF1472,(P)2);
      T19 = (P)YPiv(T20,tF1473);
      iF1474 = T19;
      xF1475 = t_;
      iF1476 = iF1474;
      xF1477 = iF1476;
      xF1478 = xF1477;
      T12 = (P)YPiGG(xF1478,(P)2);
      T11 = (P)YPtelt(xF1475,T12);
      zF1479 = T11;
      xF1480 = resF1451;
      iF1481 = iF1474;
      xF1482 = iF1481;
      xF1483 = xF1482;
      T10 = (P)YPiGG(xF1483,(P)2);
      T9 = (P)YPtelt_setter(zF1479,xF1480,T10);
      xF1484 = iF1474;
      yF1485 = YPint((P)1);
      xF1486 = xF1484;
      xF1487 = xF1486;
      T17 = (P)YPiGG(xF1487,(P)2);
      xF1488 = yF1485;
      xF1489 = xF1488;
      T18 = (P)YPiGG(xF1489,(P)2);
      T16 = (P)YPiA(T17,T18);
      xF1490 = T16;
      xF1491 = xF1490;
      tF1492 = (P)1;
      T15 = (P)YPiLL(xF1491,(P)2);
      T14 = (P)YPiv(T15,tF1492);
      a38_0 = T14;
      iF1452 = a38_0;
      goto LOOP_38;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
  zF1493 = k_;
  xF1494 = resF1451;
  iF1495 = olenF1439;
  xF1496 = iF1495;
  xF1497 = xF1496;
  T25 = (P)YPiGG(xF1497,(P)2);
  T24 = (P)YPtelt_setter(zF1493,xF1494,T25);
  zF1507 = v_;
  xF1508 = resF1451;
  xF1498 = olenF1439;
  yF1499 = YPint((P)1);
  xF1500 = xF1498;
  xF1501 = xF1500;
  T31 = (P)YPiGG(xF1501,(P)2);
  xF1502 = yF1499;
  xF1503 = xF1502;
  T32 = (P)YPiGG(xF1503,(P)2);
  T30 = (P)YPiA(T31,T32);
  xF1504 = T30;
  xF1505 = xF1504;
  tF1506 = (P)1;
  T29 = (P)YPiLL(xF1505,(P)2);
  T28 = (P)YPiv(T29,tF1506);
  iF1509 = T28;
  xF1510 = iF1509;
  xF1511 = xF1510;
  T27 = (P)YPiGG(xF1511,(P)2);
  T26 = (P)YPtelt_setter(zF1507,xF1508,T27);
UNLINK_STACK();
  QRET(resF1451);
}

FUNCODEDEF(YgooSfunYgen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P tF1575;
  P xF1574;
  P xF1573;
  P xF1572;
  P xF1571;
  P xF1570;
  P xF1569;
  P yF1568;
  P xF1567;
  P tF1566;
  P xF1565;
  P xF1564;
  P xF1563;
  P xF1562;
  P xF1561;
  P xF1560;
  P yF1559;
  P xF1558;
  P vF1557;
  P xF1556;
  P xF1555;
  P iF1554;
  P xF1553;
  P tF1552;
  P xF1551;
  P xF1550;
  P xF1549;
  P xF1548;
  P xF1547;
  P xF1546;
  P yF1545;
  P xF1544;
  P yF1543;
  P xF1542;
  P xF1541;
  P xF1540;
  P iF1539;
  P xF1538;
  P valF1537;
  P tF1536;
  P xF1535;
  P xF1534;
  P xF1533;
  P xF1532;
  P xF1531;
  P xF1530;
  P yF1529;
  P xF1528;
  P tagF1527;
  P xF1526;
  P xF1525;
  P xF1524;
  P yF1523;
  P xF1522;
  P yF1521;
  P xF1520;
  P tF1519;
  P xF1518;
  P xF1517;
  P xF1516;
  P jF1515;
  P assocsF1514;
  P cacheF1513;
  P tmpF1512;
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
  tmpF1512 = cache_;
  if (tmpF1512 != YPfalse) {
    T56 = tmpF1512;
  } else {
    T57 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
    T56 = T57;
  }
  cacheF1513 = T56;
  T55 = CALL1(1,all_assocs_,cacheF1513);
  assocsF1514 = T55;
  jF1515 = YPint((P)0);
  LOOP_39: {
    P a39_0;
    xF1520 = jF1515;
    xF1516 = assocsF1514;
    T6 = (P)YPtlen(xF1516);
    xF1517 = T6;
    xF1518 = xF1517;
    tF1519 = (P)1;
    T5 = (P)YPiLL(xF1518,(P)2);
    T4 = (P)YPiv(T5,tF1519);
    yF1521 = T4;
    T3 = (P)YPiE(xF1520,yF1521);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF1522 = all_assocs_;
      yF1523 = VARREF(YgooSfunYOgen_cache_classes);
      T10 = (P)YPeqQ(xF1522,yF1523);
      T9 = (P)YPbb(T10);
      if (T10) {
        T12 = key_;
        xF1524 = T12;
        T11 = (P)YPprop_elt(xF1524,(P)9);
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
      if (T8 != YPfalse) {
        CALL1(1,VARREF(Yupdate_instance_for_changed_class),instance_);
        xF1525 = instance_;
        xF1526 = xF1525;
        T18 = (P)YPiB(xF1526,(P)3);
        tagF1527 = T18;
        T15 = (P)YPiE(tagF1527,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF1525);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1527);
          T13 = T17;
        }
        key_ = T13;
        T20 = CALL1(0,all_assocs_,cacheF1513);
        a39_0 = T20;
        jF1515 = a39_0;
        goto LOOP_39;
        T7 = T19;
      } else {
        xF1528 = i_;
        yF1529 = YPint((P)1);
        xF1530 = xF1528;
        xF1531 = xF1530;
        T28 = (P)YPiGG(xF1531,(P)2);
        xF1532 = yF1529;
        xF1533 = xF1532;
        T29 = (P)YPiGG(xF1533,(P)2);
        T27 = (P)YPiA(T28,T29);
        xF1534 = T27;
        xF1535 = xF1534;
        tF1536 = (P)1;
        T26 = (P)YPiLL(xF1535,(P)2);
        T25 = (P)YPiv(T26,tF1536);
        T24 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,YPfalse,mets_,sorted_mets_,T25,args_);
        valF1537 = T24;
        T23 = key_;
        T22 = CALL3(1,VARREF(YgooSfunYOcache_add),assocsF1514,T23,valF1537);
        T21 = CALL2(1,all_assocs_setter_,T22,cacheF1513);
        T7 = T21;
      }
      T1 = T7;
    } else {
      xF1538 = assocsF1514;
      iF1539 = jF1515;
      xF1540 = iF1539;
      xF1541 = xF1540;
      T34 = (P)YPiGG(xF1541,(P)2);
      T33 = (P)YPtelt(xF1538,T34);
      xF1542 = T33;
      T35 = key_;
      yF1543 = T35;
      T32 = (P)YPeqQ(xF1542,yF1543);
      T31 = (P)YPbb(T32);
      if (T32) {
        xF1553 = assocsF1514;
        xF1544 = jF1515;
        yF1545 = YPint((P)1);
        xF1546 = xF1544;
        xF1547 = xF1546;
        T47 = (P)YPiGG(xF1547,(P)2);
        xF1548 = yF1545;
        xF1549 = xF1548;
        T48 = (P)YPiGG(xF1549,(P)2);
        T46 = (P)YPiA(T47,T48);
        xF1550 = T46;
        xF1551 = xF1550;
        tF1552 = (P)1;
        T45 = (P)YPiLL(xF1551,(P)2);
        T44 = (P)YPiv(T45,tF1552);
        iF1554 = T44;
        xF1555 = iF1554;
        xF1556 = xF1555;
        T43 = (P)YPiGG(xF1556,(P)2);
        T42 = (P)YPtelt(xF1553,T43);
        vF1557 = T42;
        xF1558 = i_;
        yF1559 = YPint((P)1);
        xF1560 = xF1558;
        xF1561 = xF1560;
        T40 = (P)YPiGG(xF1561,(P)2);
        xF1562 = yF1559;
        xF1563 = xF1562;
        T41 = (P)YPiGG(xF1563,(P)2);
        T39 = (P)YPiA(T40,T41);
        xF1564 = T39;
        xF1565 = xF1564;
        tF1566 = (P)1;
        T38 = (P)YPiLL(xF1565,(P)2);
        T37 = (P)YPiv(T38,tF1566);
        T36 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,vF1557,mets_,sorted_mets_,T37,args_);
        T30 = T36;
      } else {
        xF1567 = jF1515;
        yF1568 = YPint((P)2);
        xF1569 = xF1567;
        xF1570 = xF1569;
        T53 = (P)YPiGG(xF1570,(P)2);
        xF1571 = yF1568;
        xF1572 = xF1571;
        T54 = (P)YPiGG(xF1572,(P)2);
        T52 = (P)YPiA(T53,T54);
        xF1573 = T52;
        xF1574 = xF1573;
        tF1575 = (P)1;
        T51 = (P)YPiLL(xF1574,(P)2);
        T50 = (P)YPiv(T51,tF1575);
        a39_0 = T50;
        jF1515 = a39_0;
        goto LOOP_39;
        T30 = T49;
      }
      T1 = T30;
    }
  }
UNLINK_STACK();
  QRET(cacheF1513);
}

FUNCODEDEF(YgooSfunYOspecd_args) {
  P args_,i_,arg_;
  P tF1612;
  P xF1611;
  P xF1610;
  P xF1609;
  P xF1608;
  P xF1607;
  P xF1606;
  P yF1605;
  P xF1604;
  P xF1603;
  P xF1602;
  P xF1601;
  P iF1600;
  P xF1599;
  P zF1598;
  P xF1597;
  P xF1596;
  P xF1595;
  P iF1594;
  P xF1593;
  P yF1592;
  P xF1591;
  P yF1590;
  P xF1589;
  P xF1588;
  P xF1587;
  P kF1586;
  P rF1585;
  P tF1584;
  P xF1583;
  P xF1582;
  P xF1581;
  P vF1580;
  P xF1579;
  P xF1578;
  P xF1577;
  P xF1576;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
  xF1576 = args_;
  xF1577 = xF1576;
  T30 = (P)YPprop_elt(xF1577,(P)1);
  xF1578 = T30;
  xF1579 = xF1578;
  T29 = (P)YPiGG(xF1579,(P)2);
  T28 = (P)YPtup(T29,YPfalse);
  vF1580 = T28;
  T24 = (P)YPtlen(vF1580);
  T23 = (P)YPprop_dat_at(vF1580,T24);
  xF1581 = T23;
  T22 = (P)YPtag_into(xF1581,(P)3);
  T27 = (P)YPtlen(vF1580);
  xF1582 = T27;
  xF1583 = xF1582;
  tF1584 = (P)1;
  T26 = (P)YPiLL(xF1583,(P)2);
  T25 = (P)YPiv(T26,tF1584);
  T21 = (P)YPopts_tup(T22,T25,vF1580);
  rF1585 = T21;
  kF1586 = YPint((P)0);
  LOOP_40: {
    P a40_0;
    xF1587 = args_;
    xF1588 = xF1587;
    T3 = (P)YPprop_elt(xF1588,(P)1);
    xF1589 = T3;
    yF1590 = kF1586;
    T2 = (P)YPeqQ(xF1589,yF1590);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF1585;
    } else {
      xF1591 = kF1586;
      yF1592 = i_;
      T10 = (P)YPeqQ(xF1591,yF1592);
      T9 = (P)YPbb(T10);
      if (T10) {
        T8 = arg_;
      } else {
        xF1593 = args_;
        iF1594 = kF1586;
        xF1595 = xF1593;
        T12 = (P)YPprop_elt(xF1595,(P)0);
        xF1596 = iF1594;
        xF1597 = xF1596;
        T14 = (P)YPiGG(xF1597,(P)2);
        T13 = (P)YPi_((P)0,T14);
        T11 = (P)YPloc_off(T12,T13);
        T8 = T11;
      }
      zF1598 = T8;
      xF1599 = rF1585;
      iF1600 = kF1586;
      xF1601 = xF1599;
      T5 = (P)YPprop_elt(xF1601,(P)0);
      xF1602 = iF1600;
      xF1603 = xF1602;
      T7 = (P)YPiGG(xF1603,(P)2);
      T6 = (P)YPi_((P)0,T7);
      T4 = (P)YPloc_off_setter(zF1598,T5,T6);
      xF1604 = kF1586;
      yF1605 = YPint((P)1);
      xF1606 = xF1604;
      xF1607 = xF1606;
      T19 = (P)YPiGG(xF1607,(P)2);
      xF1608 = yF1605;
      xF1609 = xF1608;
      T20 = (P)YPiGG(xF1609,(P)2);
      T18 = (P)YPiA(T19,T20);
      xF1610 = T18;
      xF1611 = xF1610;
      tF1612 = (P)1;
      T17 = (P)YPiLL(xF1611,(P)2);
      T16 = (P)YPiv(T17,tF1612);
      a40_0 = T16;
      kF1586 = a40_0;
      goto LOOP_40;
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYrequires_singleton_prec) {
  P mets_,pos_;
  P xF1614;
  P xF1613;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYOmets_subclasses_at),mets_,pos_);
  xF1613 = T3;
  xF1614 = xF1613;
  T2 = (P)YPeqQ(xF1614,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P xF1632;
  P xF1631;
  P app_metsF1630;
  P smetsF1629;
  P argsF1628;
  P argF1627;
  P xF1626;
  P singF1625;
  P xF1624;
  P xF1623;
  P xF1622;
  P xF1621;
  P singletonsF1620;
  P cacheF1619;
  P xF1618;
  P xF1617;
  P singletonsF1616;
  P tmpF1615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  tmpF1615 = cache_;
  if (tmpF1615 != YPfalse) {
    T0 = tmpF1615;
  } else {
    T2 = CALL2(1,VARREF(YgooSfunYrequires_singleton_prec),mets_,i_);
    if (T2 != YPfalse) {
      T3 = (P)YPgen_cache(YPfalse,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
      T1 = T3;
    } else {
      T18 = CALL2(1,VARREF(YgooSfunYOmets_singletons_at),mets_,i_);
      singletonsF1616 = T18;
      xF1617 = singletonsF1616;
      xF1618 = xF1617;
      T6 = (P)YPeqQ(xF1618,VARREF(Ynil));
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPfalse;
      } else {
        T17 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
        cacheF1619 = T17;
        singletonsF1620 = singletonsF1616;
        LOOP_41: {
          P a41_0;
          xF1621 = singletonsF1620;
          xF1622 = xF1621;
          T9 = (P)YPeqQ(xF1622,VARREF(Ynil));
          T8 = (P)YPbb(T9);
          if (T9) {
            T7 = cacheF1619;
          } else {
            xF1623 = singletonsF1620;
            xF1624 = xF1623;
            T16 = (P)YPprop_elt(xF1624,(P)0);
            singF1625 = T16;
            xF1626 = singF1625;
            T15 = (P)YPprop_elt(xF1626,(P)0);
            argF1627 = T15;
            T14 = CALL3(1,VARREF(YgooSfunYOspecd_args),args_,i_,argF1627);
            argsF1628 = T14;
            T13 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,argsF1628);
            smetsF1629 = T13;
            T12 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,singF1625,i_);
            app_metsF1630 = T12;
            CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF1627,argF1627,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF1619,mets_,smetsF1629,i_,argsF1628);
            xF1631 = singletonsF1620;
            xF1632 = xF1631;
            T11 = (P)YPprop_elt(xF1632,(P)1);
            a41_0 = T11;
            singletonsF1620 = a41_0;
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
  P app_metsF1674;
  P classF1673;
  P tagF1672;
  P xF1671;
  P xF1670;
  P metsF1669;
  P xF1668;
  P tmpF1667;
  P yF1666;
  P xF1665;
  P singQF1664;
  P xF1663;
  P xF1662;
  P cacheF1661;
  P argF1660;
  P xF1659;
  P xF1658;
  P xF1657;
  P iF1656;
  P xF1655;
  P tF1654;
  P xF1653;
  P xF1652;
  P xF1651;
  P xF1650;
  P xF1649;
  P xF1648;
  P yF1647;
  P xF1646;
  P tmpF1645;
  P xF1644;
  P xF1643;
  P xF1642;
  P xF1641;
  P yF1640;
  P xF1639;
  P xF1638;
  P tmpF1637;
  P xF1636;
  P xF1635;
  P yF1634;
  P xF1633;
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
  xF1633 = i_;
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),gen_);
  yF1634 = T3;
  T2 = (P)YPiE(xF1633,yF1634);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1635 = sorted_mets_;
    xF1636 = xF1635;
    T6 = (P)YPprop_elt(xF1636,(P)0);
    T5 = CALL3(1,VARREF(YgooSfunYmethod_accessor_offset),gen_,T6,args_);
    tmpF1637 = T5;
    if (tmpF1637 != YPfalse) {
      T4 = tmpF1637;
    } else {
      T4 = sorted_mets_;
    }
    T0 = T4;
  } else {
    if (ocache_ != YPfalse) {
      xF1639 = i_;
      xF1638 = ocache_;
      T15 = (P)YPprop_elt(xF1638,(P)1);
      yF1640 = T15;
      xF1641 = xF1639;
      xF1642 = xF1641;
      T13 = (P)YPiGG(xF1642,(P)2);
      xF1643 = yF1640;
      xF1644 = xF1643;
      T14 = (P)YPiGG(xF1644,(P)2);
      T12 = (P)YPiL(T13,T14);
      T11 = (P)YPbb(T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    tmpF1645 = T10;
    if (tmpF1645 != YPfalse) {
      T8 = tmpF1645;
    } else {
      T9 = CALL2(1,VARREF(YgooSfunYOmets_unspecialized_atQ),mets_,i_);
      T8 = T9;
    }
    if (T8 != YPfalse) {
      xF1646 = i_;
      yF1647 = YPint((P)1);
      xF1648 = xF1646;
      xF1649 = xF1648;
      T20 = (P)YPiGG(xF1649,(P)2);
      xF1650 = yF1647;
      xF1651 = xF1650;
      T21 = (P)YPiGG(xF1651,(P)2);
      T19 = (P)YPiA(T20,T21);
      xF1652 = T19;
      xF1653 = xF1652;
      tF1654 = (P)1;
      T18 = (P)YPiLL(xF1653,(P)2);
      T17 = (P)YPiv(T18,tF1654);
      T16 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T17,args_);
      T7 = T16;
    } else {
      xF1655 = args_;
      iF1656 = i_;
      xF1657 = xF1655;
      T47 = (P)YPprop_elt(xF1657,(P)0);
      xF1658 = iF1656;
      xF1659 = xF1658;
      T49 = (P)YPiGG(xF1659,(P)2);
      T48 = (P)YPi_((P)0,T49);
      T46 = (P)YPloc_off(T47,T48);
      argF1660 = T46;
      T45 = CALLN(1,VARREF(YgooSfunYensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
      cacheF1661 = T45;
      xF1662 = sorted_mets_;
      xF1663 = xF1662;
      T44 = (P)YPprop_elt(xF1663,(P)0);
      T43 = CALL2(1,VARREF(YgooSfunYfun_spec),T44,i_);
      T42 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),T43);
      singQF1664 = T42;
      if (singQF1664 != YPfalse) {
        xF1665 = ocache_;
        yF1666 = cacheF1661;
        T29 = (P)YPeqQ(xF1665,yF1666);
        T28 = (P)YPbb(T29);
        T27 = T28;
      } else {
        T27 = YPfalse;
      }
      tmpF1667 = T27;
      if (tmpF1667 != YPfalse) {
        T23 = tmpF1667;
      } else {
        if (cacheF1661 != YPfalse) {
          xF1668 = cacheF1661;
          T26 = (P)YPprop_elt(xF1668,(P)0);
          T25 = CALL1(1,VARREF(Ynot),T26);
          T24 = T25;
        } else {
          T24 = YPfalse;
        }
        T23 = T24;
      }
      if (T23 != YPfalse) {
        T32 = (P)YPsingleton(argF1660);
        T31 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,T32,i_);
        metsF1669 = T31;
        T30 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF1660,argF1660,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF1661,metsF1669,sorted_mets_,i_,args_);
        T22 = T30;
      } else {
        if (singQF1664 != YPfalse) {
          T33 = cacheF1661;
        } else {
          xF1670 = argF1660;
          xF1671 = xF1670;
          T41 = (P)YPiB(xF1671,(P)3);
          tagF1672 = T41;
          T38 = (P)YPiE(tagF1672,(P)0);
          T37 = (P)YPbb(T38);
          if (T38) {
            T39 = (P)YPobject_class(xF1670);
            T36 = T39;
          } else {
            T40 = (P)YPelt(VARREF(YDdirect_object_class),tagF1672);
            T36 = T40;
          }
          classF1673 = T36;
          T35 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,classF1673,i_);
          app_metsF1674 = T35;
          T34 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,classF1673,argF1660,VARREF(YgooSfunYOgen_cache_classes),VARREF(YgooSfunYOgen_cache_classes_setter),gen_,cacheF1661,app_metsF1674,sorted_mets_,i_,args_);
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
  P xF1677;
  P xF1676;
  P metsF1675;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,args_);
  metsF1675 = T3;
  xF1676 = gen_;
  T1 = (P)YPprop_elt(xF1676,(P)4);
  xF1677 = gen_;
  T2 = (P)YPprop_elt(xF1677,(P)3);
  T0 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,T1,T2,metsF1675,YPint((P)0),args_);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YgooSfunYprop_value_at(P object_,P offset_) {
  P xF1686;
  P xF1685;
  P xF1684;
  P propsF1683;
  P yF1682;
  P xF1681;
  P valF1680;
  P xF1679;
  P xF1678;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF1678 = offset_;
  xF1679 = xF1678;
  T10 = (P)YPiGG(xF1679,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF1680 = T9;
  xF1681 = valF1680;
  yF1682 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF1681,yF1682);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yprops_of),object_);
    propsF1683 = T8;
    T6 = XCALL2(1,VARREF(YOelt),propsF1683,offset_);
    xF1684 = T6;
    T5 = (P)YPprop_elt(xF1684,(P)4);
    T4 = XCALL1(1,T5,object_);
    xF1685 = offset_;
    xF1686 = xF1685;
    T7 = (P)YPiGG(xF1686,(P)2);
    T3 = (P)YPprop_elt_setter(T4,object_,T7);
    T0 = T3;
  } else {
    T0 = valF1680;
  }
  return T0;
}

P YgooSfunYprop_bound_atQ(P object_,P offset_) {
  P yF1695;
  P xF1694;
  P xF1693;
  P propsF1692;
  P yF1691;
  P xF1690;
  P valF1689;
  P xF1688;
  P xF1687;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF1687 = offset_;
  xF1688 = xF1687;
  T10 = (P)YPiGG(xF1688,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF1689 = T9;
  xF1690 = valF1689;
  yF1691 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF1690,yF1691);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yprops_of),object_);
    propsF1692 = T8;
    T7 = XCALL2(1,VARREF(YOelt),propsF1692,offset_);
    xF1693 = T7;
    T6 = (P)YPprop_elt(xF1693,(P)4);
    xF1694 = T6;
    yF1695 = VARREF(YPprop_unbound_error);
    T5 = (P)YPeqQ(xF1694,yF1695);
    T4 = (P)YPbb(T5);
    T3 = XCALL1(1,VARREF(Ynot),T4);
    T0 = T3;
  } else {
    T0 = YPtrue;
  }
  return T0;
}

INLINE P YgooSfunYprop_value_at_setter(P z_,P object_,P offset_) {
  P xF1697;
  P xF1696;
  P T0,T1;
DEFCREGS();
  xF1696 = offset_;
  xF1697 = xF1696;
  T1 = (P)YPiGG(xF1697,(P)2);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P YgooSfunYgen_lookup(P gen_,P args_) {
  P tmpF1699;
  P xF1698;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF1698 = gen_;
  T4 = (P)YPprop_elt(xF1698,(P)4);
  tmpF1699 = T4;
  if (tmpF1699 != YPfalse) {
    T1 = tmpF1699;
  } else {
    T3 = XCALL2(1,VARREF(YgooSfunYgen_lookup_miss),gen_,args_);
    T2 = (P)YPfun_cache_setter(T3,gen_);
    T1 = T2;
  }
  T0 = (P)YgooSfunYgen_lookup_1(gen_,T1,args_);
  return T0;
}

INLINE P YgooSfunYgen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF1702;
  P xF1701;
  P iF1700;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  iF1700 = i_;
  LOOP_42: {
    P a42_0;
    T2 = (P)YPiE(iF1700,len_);
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
      T9 = (P)YPtelt(assocs_,iF1700);
      xF1701 = T9;
      yF1702 = key_;
      T8 = (P)YPeqQ(xF1701,yF1702);
      T7 = (P)YPbb(T8);
      if (T8) {
        T12 = (P)YPiA(iF1700,(P)1);
        T11 = (P)YPtelt(assocs_,T12);
        T10 = (P)YgooSfunYgen_lookup_1(gen_,T11,args_);
        T6 = T10;
      } else {
        T14 = (P)YPiA(iF1700,(P)2);
        a42_0 = T14;
        iF1700 = a42_0;
        goto LOOP_42;
        T6 = T13;
      }
      T0 = T6;
    }
  }
  return T0;
}

INLINE P YgooSfunYgen_lookup_1i(P gen_,P cache_,P args_) {
  P tagF1725;
  P xF1724;
  P xF1723;
  P assocsF1722;
  P xF1721;
  P yF1720;
  P xF1719;
  P valF1718;
  P xF1717;
  P assocsF1716;
  P xF1715;
  P argF1714;
  P xF1713;
  P xF1712;
  P xF1711;
  P iF1710;
  P xF1709;
  P xF1708;
  P yF1707;
  P xF1706;
  P tagF1705;
  P xF1704;
  P xF1703;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
  xF1703 = cache_;
  xF1704 = xF1703;
  T8 = (P)YPiB(xF1704,(P)3);
  tagF1705 = T8;
  T5 = (P)YPiE(tagF1705,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF1703);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF1705);
    T3 = T7;
  }
  xF1706 = T3;
  yF1707 = VARREF(YLgen_cacheG);
  T2 = (P)YPeqQ(xF1706,yF1707);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1709 = args_;
    xF1708 = cache_;
    T29 = (P)YPprop_elt(xF1708,(P)1);
    iF1710 = T29;
    xF1711 = xF1709;
    T26 = (P)YPprop_elt(xF1711,(P)0);
    xF1712 = iF1710;
    xF1713 = xF1712;
    T28 = (P)YPiGG(xF1713,(P)2);
    T27 = (P)YPi_((P)0,T28);
    T25 = (P)YPloc_off(T26,T27);
    argF1714 = T25;
    xF1715 = cache_;
    T24 = (P)YPprop_elt(xF1715,(P)2);
    assocsF1716 = T24;
    T22 = (P)YPtlen(assocsF1716);
    xF1717 = cache_;
    T23 = (P)YPprop_elt(xF1717,(P)0);
    T21 = (P)YgooSfunYgen_lookup_1_using(argF1714,(P)0,T22,assocsF1716,T23,gen_,args_);
    valF1718 = T21;
    xF1719 = valF1718;
    yF1720 = VARREF(YgooSfunYDmissed_dispatch);
    T11 = (P)YPeqQ(xF1719,yF1720);
    T10 = (P)YPbb(T11);
    if (T11) {
      xF1721 = cache_;
      T20 = (P)YPprop_elt(xF1721,(P)3);
      assocsF1722 = T20;
      xF1723 = argF1714;
      xF1724 = xF1723;
      T18 = (P)YPiB(xF1724,(P)3);
      tagF1725 = T18;
      T15 = (P)YPiE(tagF1725,(P)0);
      T14 = (P)YPbb(T15);
      if (T15) {
        T16 = (P)YPobject_class(xF1723);
        T13 = T16;
      } else {
        T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF1725);
        T13 = T17;
      }
      T19 = (P)YPtlen(assocsF1722);
      T12 = (P)YgooSfunYgen_lookup_1_using(T13,(P)0,T19,assocsF1722,YPfalse,gen_,args_);
      T9 = T12;
    } else {
      T9 = valF1718;
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
  P xF1738;
  P xF1737;
  P ambiguous_metsF1736;
  P xF1735;
  P xF1734;
  P iF1733;
  P xF1732;
  P sorted_metsF1731;
  P xF1730;
  P xF1729;
  P iF1728;
  P xF1727;
  P ord_amb_metsF1726;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T8 = CALL2(1,VARREF(YgooSfunYord_app_metsT),gen_,args_);
  ord_amb_metsF1726 = T8;
  xF1727 = ord_amb_metsF1726;
  iF1728 = YPint((P)0);
  xF1729 = iF1728;
  xF1730 = xF1729;
  T7 = (P)YPiGG(xF1730,(P)2);
  T6 = (P)YPtelt(xF1727,T7);
  sorted_metsF1731 = T6;
  xF1732 = ord_amb_metsF1726;
  iF1733 = YPint((P)1);
  xF1734 = iF1733;
  xF1735 = xF1734;
  T5 = (P)YPiGG(xF1735,(P)2);
  T4 = (P)YPtelt(xF1732,T5);
  ambiguous_metsF1736 = T4;
  xF1737 = sorted_metsF1731;
  xF1738 = xF1737;
  T2 = (P)YPeqQ(xF1738,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T0 = T3;
  } else {
    T0 = sorted_metsF1731;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YgooSfunYgen_lookup_i(P gen_,P args_) {
  P tmpF1740;
  P xF1739;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF1739 = gen_;
  T4 = (P)YPprop_elt(xF1739,(P)4);
  tmpF1740 = T4;
  if (tmpF1740 != YPfalse) {
    T1 = tmpF1740;
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
  P xF1765;
  P xF1764;
  P resF1763;
  P xF1762;
  P xF1761;
  P xF1760;
  P iF1759;
  P xF1758;
  P xF1757;
  P xF1756;
  P xF1755;
  P iF1754;
  P xF1753;
  P xF1752;
  P xF1751;
  P xF1750;
  P iF1749;
  P xF1748;
  P yF1747;
  P xF1746;
  P xF1745;
  P xF1744;
  P xF1743;
  P xF1742;
  P resultF1741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  NARGS(args_, 0);
  T26 = (P)YPfun_reg();
  T25 = (P)YgooSfunYgen_lookup_i(T26,args_);
  resultF1741 = T25;
  xF1742 = resultF1741;
  xF1743 = xF1742;
  T3 = (P)YPiB(xF1743,(P)3);
  T2 = (P)YPiE(T3,(P)1);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF1744 = args_;
    xF1745 = xF1744;
    T7 = (P)YPprop_elt(xF1745,(P)1);
    xF1746 = T7;
    yF1747 = YPint((P)1);
    T6 = (P)YPiE(xF1746,yF1747);
    T5 = (P)YPbb(T6);
    if (T6) {
      xF1748 = args_;
      iF1749 = YPint((P)0);
      xF1750 = xF1748;
      T10 = (P)YPprop_elt(xF1750,(P)0);
      xF1751 = iF1749;
      xF1752 = xF1751;
      T12 = (P)YPiGG(xF1752,(P)2);
      T11 = (P)YPi_((P)0,T12);
      T9 = (P)YPloc_off(T10,T11);
      T8 = (P)YgooSfunYprop_value_at(T9,resultF1741);
      T4 = T8;
    } else {
      xF1753 = args_;
      iF1754 = YPint((P)0);
      xF1755 = xF1753;
      T15 = (P)YPprop_elt(xF1755,(P)0);
      xF1756 = iF1754;
      xF1757 = xF1756;
      T17 = (P)YPiGG(xF1757,(P)2);
      T16 = (P)YPi_((P)0,T17);
      T14 = (P)YPloc_off(T15,T16);
      xF1758 = args_;
      iF1759 = YPint((P)1);
      xF1760 = xF1758;
      T19 = (P)YPprop_elt(xF1760,(P)0);
      xF1761 = iF1759;
      xF1762 = xF1761;
      T21 = (P)YPiGG(xF1762,(P)2);
      T20 = (P)YPi_((P)0,T21);
      T18 = (P)YPloc_off(T19,T20);
      T13 = (P)YgooSfunYprop_value_at_setter(T14,T18,resultF1741);
      T4 = T13;
    }
    resF1763 = T4;
    (P)YPunlink_stack();
    T0 = resF1763;
  } else {
    xF1764 = resultF1741;
    T23 = (P)YPprop_elt(xF1764,(P)0);
    xF1765 = resultF1741;
    T24 = (P)YPprop_elt(xF1765,(P)1);
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

FUNCODEDEF(YgooSfunYfab_gen) {
  P specs_,naryQ_,val_,name_,names_;
  P xF1768;
  P gF1767;
  P iF1766;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(val_, 2);
  ARG(name_, 3);
  ARG(names_, 4);
  T4 = CALLN(1,VARREF(YOnew),7,VARREF(YLfun_infoG),VARREF(Yfun_info_name),name_,VARREF(Yfun_info_names),names_,VARREF(Yfun_info_count),YPint((P)0));
  iF1766 = T4;
  T3 = (P)YOlen(specs_);
  T2 = CALLN(1,VARREF(YOnew),9,VARREF(YLsigG),VARREF(Ysig_specs),specs_,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),T3,VARREF(Ysig_val),val_);
  T1 = CALLN(1,VARREF(YOnew),9,VARREF(YLgenG),VARREF(Yfun_sig),T2,VARREF(Yfun_info),iF1766,VARREF(Yfun_mets),Ynil,VARREF(Yfun_cache),YPfalse);
  gF1767 = T1;
  xF1768 = VARREF(YPdispatch);
  T0 = (P)YPprop_elt(xF1768,(P)0);
  (P)YPgen_code_setter(T0,gF1767);
UNLINK_STACK();
  RET(gF1767);
}

LOCCODEDEF(fun_88) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(YgooSfunYgen_from_met) {
  P x_;
  P specsF1769;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T4 = fun_88;
  T5 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
  T3 = CALL2(1,VARREF(YOmap),T4,T5);
  specsF1769 = T3;
  T1 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
  T2 = CALL1(1,VARREF(YgooSfunYfun_name),x_);
  T0 = CALL5(1,VARREF(YgooSfunYfab_gen),specsF1769,T1,VARREF(YLanyG),T2,Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYPdefine_method) {
  P gen_,met_;
  P tmpF1770;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  tmpF1770 = gen_;
  if (tmpF1770 != YPfalse) {
    T1 = tmpF1770;
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
  YgooSfunYOfun_names = YPfab_met(FUNCODEREF(YgooSfunYOfun_names),T0,LITREF(lit_0),LITREF(lit_1),sloc(22),YPsb((P)"(fun ((x <fun>) => <lst>) (%fun-info-names (%gen-info x)))"));
  T1 = YgooSfunYOfun_names;
  VARSET(YgooSfunYOfun_names,T1);
  lit_2 = YPPsym((P)"@fun-specs");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_specs = YPfab_met(FUNCODEREF(YgooSfunYOfun_specs),T2,LITREF(lit_2),LITREF(lit_3),sloc(24),YPsb((P)"(fun ((x <fun>) => <lst>) (%sig-specs (%gen-sig x)))"));
  T3 = YgooSfunYOfun_specs;
  VARSET(YgooSfunYOfun_specs,T3);
  lit_4 = YPPsym((P)"@fun-nary?");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSfunYOfun_naryQ = YPfab_met(FUNCODEREF(YgooSfunYOfun_naryQ),T4,LITREF(lit_4),LITREF(lit_5),sloc(26),YPsb((P)"(fun ((x <fun>) => <log>) (%sig-nary? (%gen-sig x)))"));
  T5 = YgooSfunYOfun_naryQ;
  VARSET(YgooSfunYOfun_naryQ,T5);
  lit_6 = YPPsym((P)"@fun-arity");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSfunYOfun_arity = YPfab_met(FUNCODEREF(YgooSfunYOfun_arity),T6,LITREF(lit_6),LITREF(lit_7),sloc(28),YPsb((P)"(fun ((x <fun>) => <fixnum>) (%sig-arity (%gen-sig x)))"));
  T7 = YgooSfunYOfun_arity;
  VARSET(YgooSfunYOfun_arity,T7);
  lit_8 = YPPsym((P)"@fun-val");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_val = YPfab_met(FUNCODEREF(YgooSfunYOfun_val),T8,LITREF(lit_8),LITREF(lit_9),sloc(30),YPsb((P)"(fun ((x <fun>) => <any>) (%sig-val (%gen-sig x)))"));
  T9 = YgooSfunYOfun_val;
  VARSET(YgooSfunYOfun_val,T9);
  lit_10 = YPPsym((P)"@fun-unification-vars");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_unification_vars = YPfab_met(FUNCODEREF(YgooSfunYOfun_unification_vars),T10,LITREF(lit_10),LITREF(lit_11),sloc(32),YPsb((P)"(fun ((x <fun>) => <lst>) (%sig-unification-vars (%gen-sig x)))"));
  T11 = YgooSfunYOfun_unification_vars;
  VARSET(YgooSfunYOfun_unification_vars,T11);
  lit_12 = YPPsym((P)"@fun-mets");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_mets = YPfab_met(FUNCODEREF(YgooSfunYOfun_mets),T12,LITREF(lit_12),LITREF(lit_13),sloc(34),YPsb((P)"(fun ((x <fun>) => <lst>) (%gen-mets x))"));
  T13 = YgooSfunYOfun_mets;
  VARSET(YgooSfunYOfun_mets,T13);
  lit_14 = YPPsym((P)"@fun-mets-setter");
  lit_15 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_mets_setter = YPfab_met(FUNCODEREF(YgooSfunYOfun_mets_setter),T14,LITREF(lit_14),LITREF(lit_15),sloc(36),YPsb((P)"(fun ((z <lst>) (x <fun>)) (set (%gen-mets x) z))"));
  T15 = YgooSfunYOfun_mets_setter;
  VARSET(YgooSfunYOfun_mets_setter,T15);
  VARSET(YgooSfunYLenvG,VARREF(YLanyG));
  VARSET(YgooSfunYLspecsG,VARREF(YLlstG));
  VARSET(YgooSfunYLbodyG,VARREF(YLanyG));
  lit_16 = YPPsym((P)"fun-spec");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_spec = YPfab_met(FUNCODEREF(YgooSfunYfun_spec),T16,LITREF(lit_16),LITREF(lit_17),sloc(42),YPsb((P)"(fun ((x <met>) (i <fixnum>) => <any>) (@elt (@fun-specs x) i))"));
  T17 = YgooSfunYfun_spec;
  VARSET(YgooSfunYfun_spec,T17);
  VARSET(YgooSfunYLmetsG,VARREF(YLlstG));
  lit_18 = YPPsym((P)"fun-same-met?");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T18 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_same_metQ = YPfab_met(FUNCODEREF(YgooSfunYfun_same_metQ),T18,LITREF(lit_18),LITREF(lit_19),sloc(47),YPsb((P)"(fun ((x <met>) (y <met>) => <log>) (@all2? @@== (@fun-specs x) (@fun-specs y)))"));
  T19 = YgooSfunYfun_same_metQ;
  VARSET(YgooSfunYfun_same_metQ,T19);
  lit_20 = YPPsym((P)"fun-congruent?");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_congruentQ = YPfab_met(FUNCODEREF(YgooSfunYfun_congruentQ),T20,LITREF(lit_20),LITREF(lit_21),sloc(50),YPsb((P)"(fun ((x <fun>) (y <fun>) => <log>) (and (@= (@fun-arity x) (@fun-arity y)) (@== (@fun-nary? x) (@fun-nary? y)) (@all2? @subtype? (@fun-specs x) (@fun-specs y)) (@subtype? (@fun-val x) (@fun-val y))))"));
  T21 = YgooSfunYfun_congruentQ;
  VARSET(YgooSfunYfun_congruentQ,T21);
  lit_22 = YPPsym((P)"gen-add-met");
  lit_23 = YPPlist(2,YPPsym((P)"g"),YPPsym((P)"m"));
  lit_24 = YPPlist(1,YPPsym((P)"return"));
  lit_25 = YPsb((P)"Replace %= with an nul generic congruent with %=");
  lit_26 = Ynil;
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  T26 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPfab_met(FUNCODEREF(fun_11),T26,YPfalse,LITREF(lit_26),YPfalse,YPsb((P)"(fun () #t)"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T25,YPfalse,LITREF(lit_27),sloc(70),YPsb((P)"(fun (c r) (return (gen-add-met (gen-from-met m) m)))"));
  T24 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPfab_met(FUNCODEREF(fun_13),T24,YPfalse,LITREF(lit_26),sloc(72),YPsb((P)"(fun () (incongruent-method-error g m))"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPfab_met(FUNCODEREF(fun_14),T23,YPfalse,LITREF(lit_24),sloc(66),YPsb((P)"(fun (return) (try ((type <replace-generic-restart>) (description Replace %= with an nul generic congruent with %= g m)) (fun (c r) (return (gen-add-met (gen-from-met m) m))) (incongruent-method-error g m)))"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYgen_add_met = YPfab_met(FUNCODEREF(YgooSfunYgen_add_met),T22,LITREF(lit_22),LITREF(lit_23),sloc(59),YPsb((P)"(fun ((g <gen>) (m <met>) => <gen>) (set (%fun-cache g) #f) (if (not (fun-congruent? m g)) (if *restarts-ok?* (esc return (try ((type <replace-generic-restart>) (description Replace %= with an nul generic congruent with %= g m)) (fun (c r) (return (gen-add-met (gen-from-met m) m))) (incongruent-method-error g m))) (incongruent-method-error g m)) (seq (rep lop ((specs (@fun-specs m))) (unless (@nul? specs) (def spec (@head specs)) (unless (or (@singleton-spec? spec) (@== spec <any>)) (def spec-class (%object-class spec)) (set (%class-gens spec-class) (@add-new (%class-gens spec-class) g)) (set (%class-mets spec-class) (@add-new (%class-mets spec-class) m)) (lop (@tail specs))))) (rep col ((mets '()) (same? #f) ((gms <mets>) (@fun-mets g))) (if (@nul? gms) (set (%gen-mets g) (@rev! (if same? mets (@add mets m)))) (let ((gm (@head gms)) (now-same? (fun-same-met? gm m))) (col (@add mets (if now-same? m gm)) (or now-same? same?) (@tail gms))))) g)))"));
  T27 = YgooSfunYgen_add_met;
  VARSET(YgooSfunYgen_add_met,T27);
  lit_28 = YPPsym((P)"@class<");
  lit_29 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_30 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_31 = YPsb((P)"neither %= nor %=");
  T28 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YgooSfunYOclassL = YPfab_met(FUNCODEREF(YgooSfunYOclassL),T28,LITREF(lit_28),LITREF(lit_29),sloc(101),YPsb((P)"(fun (c1 c2 wrt => <log>) (rep find ((ps (%class-ancestors wrt))) (if (@nul? ps) (cpl-error can't order specializers - arg/reference object %= is  neither %= nor %= wrt c1 c2) (let ((c (@head ps))) (if (@== c c1) #t (if (@== c c2) #f (find (@tail ps))))))))"));
  T29 = YgooSfunYOclassL;
  VARSET(YgooSfunYOclassL,T29);
  lit_32 = YPPsym((P)"@order-specs-class");
  lit_33 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_34 = YPPsym((P)"=");
  lit_35 = YPPsym((P)"<");
  lit_36 = YPPsym((P)">");
  T30 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs_class = YPfab_met(FUNCODEREF(YgooSfunYOorder_specs_class),T30,LITREF(lit_32),LITREF(lit_33),sloc(113),YPsb((P)"(fun (t1 t2 arg) (if (@== t1 t2) (@tup '= t1) (if (@class< t1 t2 (%class-of arg)) (@tup '< t1) (@tup '> t2))))"));
  T31 = YgooSfunYOorder_specs_class;
  VARSET(YgooSfunYOorder_specs_class,T31);
  lit_37 = YPPsym((P)"@order-specs");
  lit_38 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T32 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs = YPfab_met(FUNCODEREF(YgooSfunYOorder_specs),T32,LITREF(lit_37),LITREF(lit_38),sloc(120),YPsb((P)"(fun (t1 t2 arg) (if (and (@== (%class-of t1) <class>) (@== (%class-of t2) <class>)) (@order-specs-class t1 t2 arg) (order-specs t1 t2 arg)))"));
  T33 = YgooSfunYOorder_specs;
  VARSET(YgooSfunYOorder_specs,T33);
  lit_39 = YPPsym((P)"order-mets");
  lit_40 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"<>");
  T34 = YPfab_sig(YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  YgooSfunYorder_mets = YPfab_met(FUNCODEREF(YgooSfunYorder_mets),T34,LITREF(lit_39),LITREF(lit_40),sloc(125),YPsb((P)"(fun ((m1 <met>) (m2 <met>) (args <opts>) => <sym>) (def (arity <fixnum>) (@fun-arity m1)) (rep loop (((state <sym>) '=) ((idx <fixnum>) 0)) (if (@= idx arity) state (let ((m1spec (fun-spec m1 idx)) (m2spec (fun-spec m2 idx)) ((cmp+typ <tup>) (@order-specs m1spec m2spec (@oelt args idx))) ((cmp <sym>) (@telt cmp+typ 0)) ((idx <fixnum>) (@+ idx 1))) (if (@== cmp '=) (loop state idx) (if (and (not (@== cmp '<>)) (or (@== state '=) (@== cmp state))) (loop cmp idx) '<>))))))"));
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
  fun_make_ambiguous_20 = YPfab_met(FUNCODEREF(fun_make_ambiguous_20),T40,LITREF(lit_44),LITREF(lit_45),sloc(150),YPsb((P)"(fun ((headed-list <lst>)) (rep loop (((l <lst>) (@tail headed-list))) (or (@== l '()) (let ((t1 (@tail l))) (set (@tail l) (@tail ahead)) (set (@tail ahead) l) (loop t1)))) (set (@tail headed-list) '()) (set (@tail ahead) (@pair met (@tail ahead))))"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_21 = YPfab_met(FUNCODEREF(fun_precedes_allQ_21),T39,LITREF(lit_46),LITREF(lit_47),sloc(159),YPsb((P)"(fun ((l <lst>)) (rep loop (((l <lst>) l)) (if (@== l '()) #t (if (@== (order-mets met (@head l) args) '<) (loop (@tail l)) #f))))"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_22 = YPfab_met(FUNCODEREF(fun_check_subsequent_ambiguities_22),T38,LITREF(lit_48),LITREF(lit_49),sloc(166),YPsb((P)"(fun ((oprev <lst>)) (if (or (not (precedes-all? (@tail oprev))) (not (precedes-all? (@tail ahead)))) (make-ambiguous oprev) (set (@tail oprev) (@pair met (@tail oprev)))))"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_23 = YPfab_met(FUNCODEREF(fun_insert_23),T37,LITREF(lit_50),LITREF(lit_51),sloc(171),YPsb((P)"(fun ((oprev <lst>) (osub <lst>)) (if (@nul? osub) (check-subsequent-ambiguities oprev) (let ((indic (order-mets met (@head osub) args))) (if (@== indic '<) (check-subsequent-ambiguities oprev) (if (@== indic '>) (insert osub (@tail osub)) (make-ambiguous oprev))))))"));
  T36 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_mets_1 = YPfab_met(FUNCODEREF(YgooSfunYord_app_mets_1),T36,LITREF(lit_42),LITREF(lit_43),sloc(142),YPsb((P)"(fun ((mets <lst>) (args <opts>) (order-mets <fun>) => <tup>) (def (ohead <lst>) (@pair #f '())) (def (ahead <lst>) (@pair #f '())) (rep loop (((mets <lst>) mets)) (unless (@== mets '()) (def (met <met>) (@head mets)) (loc ((make-ambiguous ((headed-list <lst>)) (rep loop (((l <lst>) (@tail headed-list))) (or (@== l '()) (let ((t1 (@tail l))) (set (@tail l) (@tail ahead)) (set (@tail ahead) l) (loop t1)))) (set (@tail headed-list) '()) (set (@tail ahead) (@pair met (@tail ahead)))) (precedes-all? ((l <lst>)) (rep loop (((l <lst>) l)) (if (@== l '()) #t (if (@== (order-mets met (@head l) args) '<) (loop (@tail l)) #f)))) (check-subsequent-ambiguities ((oprev <lst>)) (if (or (not (precedes-all? (@tail oprev))) (not (precedes-all? (@tail ahead)))) (make-ambiguous oprev) (set (@tail oprev) (@pair met (@tail oprev))))) (insert ((oprev <lst>) (osub <lst>)) (if (@nul? osub) (check-subsequent-ambiguities oprev) (let ((indic (order-mets met (@head osub) args))) (if (@== indic '<) (check-subsequent-ambiguities oprev) (if (@== indic '>) (insert osub (@tail osub)) (make-ambiguous oprev))))))) (insert ohead (@tail ohead)) (loop (@tail mets))))) (@tup (@tail ohead) (@tail ahead)))"));
  T41 = YgooSfunYord_app_mets_1;
  VARSET(YgooSfunYord_app_mets_1,T41);
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T42,YPfalse,LITREF(lit_52),sloc(184),YPsb((P)"(fun (x y) #f)"));
  T43 = fun_25;
  VARSET(YgooSfunYmet_app_unify,T43);
  lit_53 = YPPsym((P)"met-app?");
  lit_54 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYmet_appQ = YPfab_met(FUNCODEREF(YgooSfunYmet_appQ),T44,LITREF(lit_53),LITREF(lit_54),sloc(186),YPsb((P)"(fun ((met <met>) (args <opts>) => <log>) (if (not (@nul? (@fun-unification-vars met))) (met-app-unify met args) (let (((n <fixnum>) (@fun-arity met))) (rep loop (((i <fixnum>) 0)) (if (@= i n) #t (if (@isa? (@oelt args i) (fun-spec met i)) (loop (@+ i 1)) #f))))))"));
  T45 = YgooSfunYmet_appQ;
  VARSET(YgooSfunYmet_appQ,T45);
  lit_55 = YPPsym((P)"ord-app-mets*");
  lit_56 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_metsT = YPfab_met(FUNCODEREF(YgooSfunYord_app_metsT),T46,LITREF(lit_55),LITREF(lit_56),sloc(197),YPsb((P)"(fun ((gf <gen>) (args <opts>) => <tup>) (def considered-mets (rep col ((ans '()) (ms (@fun-mets gf))) (if (@nul? ms) ans (let ((m (@head ms)) (ans (if (met-app? m args) (@pair m ans) ans))) (col ans (@tail ms)))))) (ord-app-mets-1 considered-mets args order-mets))"));
  T47 = YgooSfunYord_app_metsT;
  VARSET(YgooSfunYord_app_metsT,T47);
  lit_57 = YPPsym((P)"ord-app-mets");
  lit_58 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T49,Ynil);
  YgooSfunYord_app_mets = YPfab_met(FUNCODEREF(YgooSfunYord_app_mets),T48,LITREF(lit_57),LITREF(lit_58),sloc(208),YPsb((P)"(fun ((gf <gen>) (args ...) => (tup (ordered <lst>) (ambig <lst>))) (ord-app-mets* gf args))"));
  T50 = YgooSfunYord_app_mets;
  VARSET(YgooSfunYord_app_mets,T50);
  lit_59 = YPPsym((P)"@gen-cache-arg-pos");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_arg_pos),T51,LITREF(lit_59),LITREF(lit_60),sloc(219),YPsb((P)"(fun (x) (%gen-cache-arg-pos x))"));
  T52 = YgooSfunYOgen_cache_arg_pos;
  VARSET(YgooSfunYOgen_cache_arg_pos,T52);
  lit_61 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_62 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_arg_pos_setter),T53,LITREF(lit_61),LITREF(lit_62),sloc(220),YPsb((P)"(fun (z x) (set (%gen-cache-arg-pos x) z))"));
  T54 = YgooSfunYOgen_cache_arg_pos_setter;
  VARSET(YgooSfunYOgen_cache_arg_pos_setter,T54);
  lit_63 = YPPsym((P)"@gen-cache-singletons");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_singletons),T55,LITREF(lit_63),LITREF(lit_64),sloc(221),YPsb((P)"(fun (x) (%gen-cache-singletons x))"));
  T56 = YgooSfunYOgen_cache_singletons;
  VARSET(YgooSfunYOgen_cache_singletons,T56);
  lit_65 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_singletons_setter),T57,LITREF(lit_65),LITREF(lit_66),sloc(222),YPsb((P)"(fun (z x) (set (%gen-cache-singletons x) z))"));
  T58 = YgooSfunYOgen_cache_singletons_setter;
  VARSET(YgooSfunYOgen_cache_singletons_setter,T58);
  lit_67 = YPPsym((P)"@gen-cache-classes");
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_classes),T59,LITREF(lit_67),LITREF(lit_68),sloc(223),YPsb((P)"(fun (x) (%gen-cache-classes x))"));
  T60 = YgooSfunYOgen_cache_classes;
  VARSET(YgooSfunYOgen_cache_classes,T60);
  lit_69 = YPPsym((P)"@gen-cache-classes-setter");
  lit_70 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T61 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes_setter = YPfab_met(FUNCODEREF(YgooSfunYOgen_cache_classes_setter),T61,LITREF(lit_69),LITREF(lit_70),sloc(224),YPsb((P)"(fun (z x) (set (%gen-cache-classes x) z))"));
  T62 = YgooSfunYOgen_cache_classes_setter;
  VARSET(YgooSfunYOgen_cache_classes_setter,T62);
  lit_71 = YPPsym((P)"method-accessor-offset");
  lit_72 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T63 = YPfab_sig(YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYmethod_accessor_offset = YPfab_met(FUNCODEREF(YgooSfunYmethod_accessor_offset),T63,LITREF(lit_71),LITREF(lit_72),sloc(228),YPsb((P)"(fun ((gen <gen>) (met <met>) (args <opts>)) (def prop (%met-env met)) (def prop? (and prop (@== (%class-of prop) <prop>))) (def n (@olen args)) (and prop? (if (@= n 1) (prop-offset (@oelt args 0) gen) (prop-offset (@oelt args 1) (%prop-getter prop)))))"));
  T64 = YgooSfunYmethod_accessor_offset;
  VARSET(YgooSfunYmethod_accessor_offset,T64);
  lit_73 = YPPsym((P)"@singleton-spec?");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T65 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsingleton_specQ = YPfab_met(FUNCODEREF(YgooSfunYOsingleton_specQ),T65,LITREF(lit_73),LITREF(lit_74),sloc(237),YPsb((P)"(fun (x) (@class-isa? x <singleton>))"));
  T66 = YgooSfunYOsingleton_specQ;
  VARSET(YgooSfunYOsingleton_specQ,T66);
  lit_75 = YPPsym((P)"@subclass-spec?");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsubclass_specQ = YPfab_met(FUNCODEREF(YgooSfunYOsubclass_specQ),T67,LITREF(lit_75),LITREF(lit_76),sloc(240),YPsb((P)"(fun (x) (@class-isa? x <subclass>))"));
  T68 = YgooSfunYOsubclass_specQ;
  VARSET(YgooSfunYOsubclass_specQ,T68);
  lit_77 = YPPsym((P)"@union-spec?");
  lit_78 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOunion_specQ = YPfab_met(FUNCODEREF(YgooSfunYOunion_specQ),T69,LITREF(lit_77),LITREF(lit_78),sloc(243),YPsb((P)"(fun (x) (@class-isa? x <union>))"));
  T70 = YgooSfunYOunion_specQ;
  VARSET(YgooSfunYOunion_specQ,T70);
  lit_79 = YPPsym((P)"@precise-spec?");
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOprecise_specQ = YPfab_met(FUNCODEREF(YgooSfunYOprecise_specQ),T71,LITREF(lit_79),LITREF(lit_80),sloc(246),YPsb((P)"(fun (x) (or (@singleton-spec? x) (@subclass-spec? x) (and (@union-spec? x) (@any? @precise-spec? (%union-elts x)))))"));
  T72 = YgooSfunYOprecise_specQ;
  VARSET(YgooSfunYOprecise_specQ,T72);
  lit_81 = YPPsym((P)"@mets-unspecialized-at?");
  lit_82 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_83 = YPPlist(1,YPPsym((P)"met"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPfab_met(FUNCODEREF(fun_40),T74,YPfalse,LITREF(lit_83),sloc(251),YPsb((P)"(fun (met) (@= (fun-spec met pos) <any>))"));
  T73 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYOmets_unspecialized_atQ = YPfab_met(FUNCODEREF(YgooSfunYOmets_unspecialized_atQ),T73,LITREF(lit_81),LITREF(lit_82),sloc(250),YPsb((P)"(fun ((mets <lst>) (pos <fixnum>) => <log>) (@all? (fun (met) (@= (fun-spec met pos) <any>)) mets))"));
  T75 = YgooSfunYOmets_unspecialized_atQ;
  VARSET(YgooSfunYOmets_unspecialized_atQ,T75);
  lit_84 = YPPsym((P)"@prune-mets-by-type-at");
  lit_85 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_86 = YPPlist(1,YPPsym((P)"met"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPfab_met(FUNCODEREF(fun_42),T77,YPfalse,LITREF(lit_86),sloc(255),YPsb((P)"(fun (met) (@subtype? type (fun-spec met pos)))"));
  T76 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YgooSfunYLmetsG),Ynil);
  YgooSfunYOprune_mets_by_type_at = YPfab_met(FUNCODEREF(YgooSfunYOprune_mets_by_type_at),T76,LITREF(lit_84),LITREF(lit_85),sloc(253),YPsb((P)"(fun ((mets <lst>) (type <type>) (pos <fixnum>) => <mets>) (@pick (fun (met) (@subtype? type (fun-spec met pos))) mets))"));
  T78 = YgooSfunYOprune_mets_by_type_at;
  VARSET(YgooSfunYOprune_mets_by_type_at,T78);
  lit_87 = YPPsym((P)"@mets-specs-at");
  lit_88 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_89 = YPPlist(1,YPPsym((P)"met"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T80,YPfalse,LITREF(lit_89),sloc(258),YPsb((P)"(fun (met) (fun-spec met pos))"));
  T79 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_specs_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_specs_at),T79,LITREF(lit_87),LITREF(lit_88),sloc(257),YPsb((P)"(fun ((mets <lst>) (pos <fixnum>) => <lst>) (@map (fun (met) (fun-spec met pos)) mets))"));
  T81 = YgooSfunYOmets_specs_at;
  VARSET(YgooSfunYOmets_specs_at,T81);
  lit_90 = YPPsym((P)"@mets-singletons-at");
  lit_91 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_92 = YPPlist(1,YPPsym((P)"spec"));
  T83 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPfab_met(FUNCODEREF(fun_46),T83,YPfalse,LITREF(lit_92),sloc(263),YPsb((P)"(fun (spec) (@singleton-spec? spec))"));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_singletons_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_singletons_at),T82,LITREF(lit_90),LITREF(lit_91),sloc(262),YPsb((P)"(fun ((mets <lst>) (pos <fixnum>) => <lst>) (@pick (fun (spec) (@singleton-spec? spec)) (@mets-specs-at mets pos)))"));
  T84 = YgooSfunYOmets_singletons_at;
  VARSET(YgooSfunYOmets_singletons_at,T84);
  lit_93 = YPPsym((P)"@mets-subclasses-at");
  lit_94 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_95 = YPPlist(1,YPPsym((P)"spec"));
  T86 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPfab_met(FUNCODEREF(fun_48),T86,YPfalse,LITREF(lit_95),sloc(266),YPsb((P)"(fun (spec) (@subclass-spec? spec))"));
  T85 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_subclasses_at = YPfab_met(FUNCODEREF(YgooSfunYOmets_subclasses_at),T85,LITREF(lit_93),LITREF(lit_94),sloc(265),YPsb((P)"(fun ((mets <lst>) (pos <fixnum>) => <lst>) (@pick (fun (spec) (@subclass-spec? spec)) (@mets-specs-at mets pos)))"));
  T87 = YgooSfunYOmets_subclasses_at;
  VARSET(YgooSfunYOmets_subclasses_at,T87);
  VARSET(YgooSfunYDnul_assocs,VARREF(YPtnul));
  lit_96 = YPPsym((P)"@cache-add");
  lit_97 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  T88 = YPfab_sig(YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOcache_add = YPfab_met(FUNCODEREF(YgooSfunYOcache_add),T88,LITREF(lit_96),LITREF(lit_97),sloc(270),YPsb((P)"(fun ((t <tup>) k v) (def olen (@tlen t)) (def res (%tup (%iu (@+ olen 2)) #f)) (rep copy ((i 0)) (unless (@= i olen) (set (@telt res i) (@telt t i)) (def i (@+ i 1)) (set (@telt res i) (@telt t i)) (copy (@+ i 1)))) (set (@telt res olen) k) (set (@telt res (@+ olen 1)) v) res)"));
  T89 = YgooSfunYOcache_add;
  VARSET(YgooSfunYOcache_add,T89);
  lit_98 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_99 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T90 = YPfab_sig(YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1_using = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss_1_using),T90,LITREF(lit_98),LITREF(lit_99),sloc(283),YPsb((P)"(fun (key instance (all-assocs <fun>) (all-assocs-setter <fun>) (gen <gen>) cache (mets <lst>) (sorted-mets <lst>) (i <fixnum>) (args <opts>)) (def cache (or cache (%gen-cache #t i $nul-assocs $nul-assocs (%raw 0)))) (def assocs (all-assocs cache)) (rep loop ((j 0)) (if (@= j (@tlen assocs)) (if (and (@== all-assocs @gen-cache-classes) (%class-forward key)) (seq (update-instance-for-changed-class instance) (set key (%class-of instance)) (loop (all-assocs cache))) (let ((val (gen-lookup-miss-1 gen #f mets sorted-mets (@+ i 1) args))) (set (all-assocs cache) (@cache-add assocs key val)))) (if (@== (@telt assocs j) key) (let ((v (@telt assocs (@+ j 1)))) (gen-lookup-miss-1 gen v mets sorted-mets (@+ i 1) args)) (loop (@+ j 2))))) cache)"));
  T91 = YgooSfunYgen_lookup_miss_1_using;
  VARSET(YgooSfunYgen_lookup_miss_1_using,T91);
  lit_100 = YPPsym((P)"@specd-args");
  lit_101 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  T94 = YPfab_sig(YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  T93 = YgooSfunYOspecd_args = YPfab_met(FUNCODEREF(YgooSfunYOspecd_args),T94,LITREF(lit_100),LITREF(lit_101),sloc(308),YPsb((P)"(fun ((args <opts>) (i <fixnum>) (arg <any>) => <opts>) (def v (%tup (%iu (@olen args)) #f)) (def r (%opts-tup (%lb (%prop-dat-at v (%tlen v))) (%ib (%tlen v)) v)) (rep copy ((k 0)) (if (@== (@olen args) k) r (seq (set (@oelt r k) (if (@== k i) arg (@oelt args k))) (copy (@+ k 1))))))"));
  T96 = YgooSfunYOspecd_args;
  T95 = VARSET(YgooSfunYOspecd_args,T96);
  T92 = T95;
  return T92;
}

P YgooSfunY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60;
DEFCREGS();
  lit_102 = YPPsym((P)"requires-singleton-prec");
  lit_103 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYrequires_singleton_prec = YPfab_met(FUNCODEREF(YgooSfunYrequires_singleton_prec),T0,LITREF(lit_102),LITREF(lit_103),sloc(318),YPsb((P)"(fun (mets pos) (not (@nul? (@mets-subclasses-at mets pos))))"));
  T1 = YgooSfunYrequires_singleton_prec;
  VARSET(YgooSfunYrequires_singleton_prec,T1);
  lit_104 = YPPsym((P)"ensure-singleton-cache");
  lit_105 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T2 = YPfab_sig(YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYensure_singleton_cache = YPfab_met(FUNCODEREF(YgooSfunYensure_singleton_cache),T2,LITREF(lit_104),LITREF(lit_105),sloc(333),YPsb((P)"(fun ((gen <gen>) cache (mets <lst>) (sorted-mets <lst>) (i <fixnum>) (args <opts>)) (or cache (if (requires-singleton-prec mets i) (%gen-cache #f i $nul-assocs $nul-assocs (%raw 0)) (let ((singletons (@mets-singletons-at mets i))) (if (@nul? singletons) #f (let ((cache (%gen-cache #t i $nul-assocs $nul-assocs (%raw 0)))) (rep loop ((singletons singletons)) (if (@nul? singletons) cache (let ((sing (@head singletons)) (arg (%type-object sing)) (args (@specd-args args i arg)) (smets (choose-methods gen args)) (app-mets (@prune-mets-by-type-at mets sing i))) (gen-lookup-miss-1-using arg arg @gen-cache-singletons @gen-cache-singletons-setter gen cache mets smets i args) (loop (@tail singletons)))))))))))"));
  T3 = YgooSfunYensure_singleton_cache;
  VARSET(YgooSfunYensure_singleton_cache,T3);
  lit_106 = YPPsym((P)"gen-lookup-miss-1");
  lit_107 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T4 = YPfab_sig(YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1 = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss_1),T4,LITREF(lit_106),LITREF(lit_107),sloc(356),YPsb((P)"(fun ((gen <gen>) ocache (mets <lst>) (sorted-mets <lst>) (i <fixnum>) (args <opts>)) (if (@= i (@fun-arity gen)) (or (method-accessor-offset gen (@head sorted-mets) args) sorted-mets) (if (or (and ocache (@< i (%gen-cache-arg-pos ocache))) (@mets-unspecialized-at? mets i)) (gen-lookup-miss-1 gen ocache mets sorted-mets (@+ i 1) args) (let ((arg (@oelt args i)) (cache (ensure-singleton-cache gen ocache mets sorted-mets i args)) (sing? (@singleton-spec? (fun-spec (@head sorted-mets) i)))) (if (or (and sing? (@== ocache cache)) (and cache (not (%gen-cache-missable? cache)))) (let ((mets (@prune-mets-by-type-at mets (%singleton arg) i))) (gen-lookup-miss-1-using arg arg @gen-cache-singletons @gen-cache-singletons-setter gen cache mets sorted-mets i args)) (if sing? cache (let ((class (%class-of arg)) (app-mets (@prune-mets-by-type-at mets class i))) (gen-lookup-miss-1-using class arg @gen-cache-classes @gen-cache-classes-setter gen cache app-mets sorted-mets i args))))))))"));
  T5 = YgooSfunYgen_lookup_miss_1;
  VARSET(YgooSfunYgen_lookup_miss_1,T5);
  lit_108 = YPPsym((P)"gen-lookup-miss");
  lit_109 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss = YPfab_met(FUNCODEREF(YgooSfunYgen_lookup_miss),T6,LITREF(lit_108),LITREF(lit_109),sloc(380),YPsb((P)"(fun ((gen <gen>) (args <opts>) => <any>) (def mets (choose-methods gen args)) (gen-lookup-miss-1 gen (%fun-cache gen) (%gen-mets gen) mets 0 args))"));
  T7 = YgooSfunYgen_lookup_miss;
  VARSET(YgooSfunYgen_lookup_miss,T7);
  T8 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YgooSfunYDmissed_dispatch,T8);
  lit_110 = YPPsym((P)"choose-methods");
  lit_111 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYchoose_methods = YPfab_met(FUNCODEREF(YgooSfunYchoose_methods),T9,LITREF(lit_110),LITREF(lit_111),sloc(456),YPsb((P)"(fun ((gen <gen>) (args <opts>) => <lst>) (def ord-amb-mets (ord-app-mets* gen args)) (def sorted-mets (@telt ord-amb-mets 0)) (def ambiguous-mets (@telt ord-amb-mets 1)) (if (@nul? sorted-mets) (no-applicable-methods-error gen args) sorted-mets))"));
  T10 = YgooSfunYchoose_methods;
  VARSET(YgooSfunYchoose_methods,T10);
  lit_112 = YPPsym((P)"%dispatch");
  lit_113 = YPPlist(1,YPPsym((P)"args"));
  T11 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPfab_met(FUNCODEREF(YPdispatch),T11,LITREF(lit_112),LITREF(lit_113),sloc(474),YPsb((P)"(fun ((args ...)) (let ((result (gen-lookup-i (%fun-reg) args))) (if (@int? result) (let ((res (if (@= (@olen args) 1) (prop-value-at (@oelt args 0) result) (set (prop-value-at (@oelt args 1) result) (@oelt args 0))))) (%unlink-stack) res) (%raw-met-call (%head result) (%tail result)))))"));
  T12 = YPdispatch;
  VARSET(YPdispatch,T12);
  (P)YPpatch_early_generics();
  lit_114 = YPPsym((P)"fun-specs");
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs = YPfab_met(FUNCODEREF(YgooSfunYfun_specs),T13,LITREF(lit_114),LITREF(lit_115),sloc(497),YPsb((P)"(fun (x) (sig-specs (fun-sig x)))"));
  T14 = YgooSfunYfun_specs;
  VARSET(YgooSfunYfun_specs,T14);
  lit_116 = YPPsym((P)"fun-specs-setter");
  lit_117 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_specs_setter),T15,LITREF(lit_116),LITREF(lit_117),sloc(497),YPsb((P)"(fun (z x) (set (sig-specs (fun-sig x)) z))"));
  T16 = YgooSfunYfun_specs_setter;
  VARSET(YgooSfunYfun_specs_setter,T16);
  lit_118 = YPPsym((P)"fun-nary?");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ = YPfab_met(FUNCODEREF(YgooSfunYfun_naryQ),T17,LITREF(lit_118),LITREF(lit_119),sloc(498),YPsb((P)"(fun (x) (sig-nary? (fun-sig x)))"));
  T18 = YgooSfunYfun_naryQ;
  VARSET(YgooSfunYfun_naryQ,T18);
  lit_120 = YPPsym((P)"fun-nary?-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_naryQ_setter),T19,LITREF(lit_120),LITREF(lit_121),sloc(498),YPsb((P)"(fun (z x) (set (sig-nary? (fun-sig x)) z))"));
  T20 = YgooSfunYfun_naryQ_setter;
  VARSET(YgooSfunYfun_naryQ_setter,T20);
  lit_122 = YPPsym((P)"fun-arity");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity = YPfab_met(FUNCODEREF(YgooSfunYfun_arity),T21,LITREF(lit_122),LITREF(lit_123),sloc(499),YPsb((P)"(fun (x) (sig-arity (fun-sig x)))"));
  T22 = YgooSfunYfun_arity;
  VARSET(YgooSfunYfun_arity,T22);
  lit_124 = YPPsym((P)"fun-arity-setter");
  lit_125 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_arity_setter),T23,LITREF(lit_124),LITREF(lit_125),sloc(499),YPsb((P)"(fun (z x) (set (sig-arity (fun-sig x)) z))"));
  T24 = YgooSfunYfun_arity_setter;
  VARSET(YgooSfunYfun_arity_setter,T24);
  lit_126 = YPPsym((P)"fun-val");
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val = YPfab_met(FUNCODEREF(YgooSfunYfun_val),T25,LITREF(lit_126),LITREF(lit_127),sloc(500),YPsb((P)"(fun (x) (sig-val (fun-sig x)))"));
  T26 = YgooSfunYfun_val;
  VARSET(YgooSfunYfun_val,T26);
  lit_128 = YPPsym((P)"fun-val-setter");
  lit_129 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_val_setter),T27,LITREF(lit_128),LITREF(lit_129),sloc(500),YPsb((P)"(fun (z x) (set (sig-val (fun-sig x)) z))"));
  T28 = YgooSfunYfun_val_setter;
  VARSET(YgooSfunYfun_val_setter,T28);
  lit_130 = YPPsym((P)"fun-unification-vars");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars = YPfab_met(FUNCODEREF(YgooSfunYfun_unification_vars),T29,LITREF(lit_130),LITREF(lit_131),sloc(501),YPsb((P)"(fun (x) (sig-unification-vars (fun-sig x)))"));
  T30 = YgooSfunYfun_unification_vars;
  VARSET(YgooSfunYfun_unification_vars,T30);
  lit_132 = YPPsym((P)"fun-unification-vars-setter");
  lit_133 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_unification_vars_setter),T31,LITREF(lit_132),LITREF(lit_133),sloc(501),YPsb((P)"(fun (z x) (set (sig-unification-vars (fun-sig x)) z))"));
  T32 = YgooSfunYfun_unification_vars_setter;
  VARSET(YgooSfunYfun_unification_vars_setter,T32);
  lit_134 = YPPsym((P)"fun-name");
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_name = YPfab_met(FUNCODEREF(YgooSfunYfun_name),T33,LITREF(lit_134),LITREF(lit_135),sloc(509),YPsb((P)"(fun (x) (fun-info-name (fun-info x)))"));
  T34 = YgooSfunYfun_name;
  VARSET(YgooSfunYfun_name,T34);
  lit_136 = YPPsym((P)"fun-name-setter");
  lit_137 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_name_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_name_setter),T35,LITREF(lit_136),LITREF(lit_137),sloc(509),YPsb((P)"(fun (z x) (set (fun-info-name (fun-info x)) z))"));
  T36 = YgooSfunYfun_name_setter;
  VARSET(YgooSfunYfun_name_setter,T36);
  lit_138 = YPPsym((P)"fun-names");
  lit_139 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names = YPfab_met(FUNCODEREF(YgooSfunYfun_names),T37,LITREF(lit_138),LITREF(lit_139),sloc(510),YPsb((P)"(fun (x) (fun-info-names (fun-info x)))"));
  T38 = YgooSfunYfun_names;
  VARSET(YgooSfunYfun_names,T38);
  lit_140 = YPPsym((P)"fun-names-setter");
  lit_141 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_names_setter),T39,LITREF(lit_140),LITREF(lit_141),sloc(510),YPsb((P)"(fun (z x) (set (fun-info-names (fun-info x)) z))"));
  T40 = YgooSfunYfun_names_setter;
  VARSET(YgooSfunYfun_names_setter,T40);
  lit_142 = YPPsym((P)"fun-src");
  lit_143 = YPPlist(1,YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src = YPfab_met(FUNCODEREF(YgooSfunYfun_src),T41,LITREF(lit_142),LITREF(lit_143),sloc(511),YPsb((P)"(fun (x) (fun-info-src (fun-info x)))"));
  T42 = YgooSfunYfun_src;
  VARSET(YgooSfunYfun_src,T42);
  lit_144 = YPPsym((P)"fun-src-setter");
  lit_145 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_src_setter),T43,LITREF(lit_144),LITREF(lit_145),sloc(511),YPsb((P)"(fun (z x) (set (fun-info-src (fun-info x)) z))"));
  T44 = YgooSfunYfun_src_setter;
  VARSET(YgooSfunYfun_src_setter,T44);
  lit_146 = YPPsym((P)"fun-src-loc");
  lit_147 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_loc = YPfab_met(FUNCODEREF(YgooSfunYfun_src_loc),T45,LITREF(lit_146),LITREF(lit_147),sloc(512),YPsb((P)"(fun (x) (fun-info-src-loc (fun-info x)))"));
  T46 = YgooSfunYfun_src_loc;
  VARSET(YgooSfunYfun_src_loc,T46);
  lit_148 = YPPsym((P)"fun-src-loc-setter");
  lit_149 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_src_loc_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_src_loc_setter),T47,LITREF(lit_148),LITREF(lit_149),sloc(512),YPsb((P)"(fun (z x) (set (fun-info-src-loc (fun-info x)) z))"));
  T48 = YgooSfunYfun_src_loc_setter;
  VARSET(YgooSfunYfun_src_loc_setter,T48);
  lit_150 = YPPsym((P)"fun-count");
  lit_151 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_count = YPfab_met(FUNCODEREF(YgooSfunYfun_count),T49,LITREF(lit_150),LITREF(lit_151),sloc(513),YPsb((P)"(fun (x) (fun-info-count (fun-info x)))"));
  T50 = YgooSfunYfun_count;
  VARSET(YgooSfunYfun_count,T50);
  lit_152 = YPPsym((P)"fun-count-setter");
  lit_153 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_count_setter = YPfab_met(FUNCODEREF(YgooSfunYfun_count_setter),T51,LITREF(lit_152),LITREF(lit_153),sloc(513),YPsb((P)"(fun (z x) (set (fun-info-count (fun-info x)) z))"));
  T52 = YgooSfunYfun_count_setter;
  VARSET(YgooSfunYfun_count_setter,T52);
  lit_154 = YPPsym((P)"fab-gen");
  lit_155 = YPPlist(5,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"name"),YPPsym((P)"names"));
  T53 = YPfab_sig(YPPlist(5,VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)5),VARREF(YLgenG),Ynil);
  YgooSfunYfab_gen = YPfab_met(FUNCODEREF(YgooSfunYfab_gen),T53,LITREF(lit_154),LITREF(lit_155),sloc(517),YPsb((P)"(fun ((specs <lst>) (nary? <log>) (val <type>) name (names <lst>) => <gen>) (def i (@new <fun-info> fun-info-name name fun-info-names names fun-info-count 0)) (def g (@new <gen> fun-sig (@new <sig> sig-specs specs sig-nary? nary? sig-arity (@len specs) sig-val val) fun-info i fun-mets '() fun-cache #f)) (set (%gen-code g) (%met-code %dispatch)) g)"));
  T54 = YgooSfunYfab_gen;
  VARSET(YgooSfunYfab_gen,T54);
  lit_156 = YPPsym((P)"gen-from-met");
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  lit_158 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPfab_met(FUNCODEREF(fun_88),T56,YPfalse,LITREF(lit_158),sloc(536),YPsb((P)"(fun (x) <any>)"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  YgooSfunYgen_from_met = YPfab_met(FUNCODEREF(YgooSfunYgen_from_met),T55,LITREF(lit_156),LITREF(lit_157),sloc(535),YPsb((P)"(fun ((x <met>) => <gen>) (def specs (@map (fun (x) <any>) (@fun-specs x))) (fab-gen specs (@fun-nary? x) <any> (fun-name x) '()))"));
  T57 = YgooSfunYgen_from_met;
  VARSET(YgooSfunYgen_from_met,T57);
  lit_159 = YPPsym((P)"%define-method");
  lit_160 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYPdefine_method = YPfab_met(FUNCODEREF(YgooSfunYPdefine_method),T58,LITREF(lit_159),LITREF(lit_160),sloc(541),YPsb((P)"(fun (gen (met <met>) => <gen>) (gen-add-met (or gen (gen-from-met met)) met))"));
  T59 = YgooSfunYPdefine_method;
  VARSET(YgooSfunYPdefine_method,T59);
  T60 = YPfalse;
  return T60;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
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
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
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
  {"@olen", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
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
  {"<sig>", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
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
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
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
  {"fun-name-setter", CVAR, &YgooSfunYfun_name_setter},
  {"fun-specs", CVAR, &YgooSfunYfun_specs},
  {"gen-lookup", PVAR, NULL},
  {"method-accessor-offset", CVAR, &YgooSfunYmethod_accessor_offset},
  {"@order-specs", CVAR, &YgooSfunYOorder_specs},
  {"@specd-args", CVAR, &YgooSfunYOspecd_args},
  {"unless", PVAR, NULL},
  {"fun-name", CVAR, &YgooSfunYfun_name},
  {"fun-same-met?", CVAR, &YgooSfunYfun_same_metQ},
  {"@mets-singletons-at", CVAR, &YgooSfunYOmets_singletons_at},
  {"gen-lookup-1i", PVAR, NULL},
  {"and", PVAR, NULL},
  {"@gen-cache-classes-setter", CVAR, &YgooSfunYOgen_cache_classes_setter},
  {"fab-gen", CVAR, &YgooSfunYfab_gen},
  {"fun-unification-vars-setter", CVAR, &YgooSfunYfun_unification_vars_setter},
  {"choose-methods", CVAR, &YgooSfunYchoose_methods},
  {"---main-0---", PVAR, NULL},
  {"$nul-assocs", CVAR, &YgooSfunYDnul_assocs},
  {"@mets-subclasses-at", CVAR, &YgooSfunYOmets_subclasses_at},
  {"fun-val", CVAR, &YgooSfunYfun_val},
  {"@gen-cache-classes", CVAR, &YgooSfunYOgen_cache_classes},
  {"fun-spec", CVAR, &YgooSfunYfun_spec},
  {"@mets-specs-at", CVAR, &YgooSfunYOmets_specs_at},
  {"fun-unification-vars", CVAR, &YgooSfunYfun_unification_vars},
  {"@subclass-spec?", CVAR, &YgooSfunYOsubclass_specQ},
  {"fun-count-setter", CVAR, &YgooSfunYfun_count_setter},
  {"handler-info-arguments", CVAR, &YgooSfunYhandler_info_arguments},
  {"---main-1---", PVAR, NULL},
  {"gen-lookup-miss", CVAR, &YgooSfunYgen_lookup_miss},
  {"@order-specs-class", CVAR, &YgooSfunYOorder_specs_class},
  {"@gen-cache-singletons-setter", CVAR, &YgooSfunYOgen_cache_singletons_setter},
  {"@fun-mets-setter", CVAR, &YgooSfunYOfun_mets_setter},
  {"<simple-handler-info>", CVAR, &YgooSfunYLsimple_handler_infoG},
  {"fun-count", CVAR, &YgooSfunYfun_count},
  {"def-fun/info-accessor", PVAR, NULL},
  {"or-set", PVAR, NULL},
  {"fun-val-setter", CVAR, &YgooSfunYfun_val_setter},
  {"@gen-cache-singletons", CVAR, &YgooSfunYOgen_cache_singletons},
  {"@fun-mets", CVAR, &YgooSfunYOfun_mets},
  {"gen-lookup-1-using", PVAR, NULL},
  {"fun-src-loc-setter", CVAR, &YgooSfunYfun_src_loc_setter},
  {"@prune-mets-by-type-at", CVAR, &YgooSfunYOprune_mets_by_type_at},
  {"@class<", CVAR, &YgooSfunYOclassL},
  {"@fun-unification-vars", CVAR, &YgooSfunYOfun_unification_vars},
  {"@gen-cache-arg-pos-setter", CVAR, &YgooSfunYOgen_cache_arg_pos_setter},
  {"fun-src-loc", CVAR, &YgooSfunYfun_src_loc},
  {"fun-arity-setter", CVAR, &YgooSfunYfun_arity_setter},
  {"<replace-generic-restart>", CVAR, &YgooSfunYLreplace_generic_restartG},
  {"@fun-val", CVAR, &YgooSfunYOfun_val},
  {"gen-lookup-miss-1", CVAR, &YgooSfunYgen_lookup_miss_1},
  {"gen-lookup-miss-1-using", CVAR, &YgooSfunYgen_lookup_miss_1_using},
  {"@fun-arity", CVAR, &YgooSfunYOfun_arity},
  {"@gen-cache-arg-pos", CVAR, &YgooSfunYOgen_cache_arg_pos},
  {"<mets>", CVAR, &YgooSfunYLmetsG},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"fun-arity", CVAR, &YgooSfunYfun_arity},
  {"<env>", CVAR, &YgooSfunYLenvG},
  {"fun-src-setter", CVAR, &YgooSfunYfun_src_setter},
  {"@precise-spec?", CVAR, &YgooSfunYOprecise_specQ},
  {"@fun-nary?", CVAR, &YgooSfunYOfun_naryQ},
  {"@mets-unspecialized-at?", CVAR, &YgooSfunYOmets_unspecialized_atQ},
  {"$missed-dispatch", CVAR, &YgooSfunYDmissed_dispatch},
  {"gen-lookup-1", PVAR, NULL},
  {"ord-app-mets-1", CVAR, &YgooSfunYord_app_mets_1},
  {"fun-src", CVAR, &YgooSfunYfun_src},
  {"ord-app-mets", CVAR, &YgooSfunYord_app_mets},
  {"%define-method", CVAR, &YgooSfunYPdefine_method},
  {"@union-spec?", CVAR, &YgooSfunYOunion_specQ},
  {"@fun-specs", CVAR, &YgooSfunYOfun_specs},
  {"fun-nary?-setter", CVAR, &YgooSfunYfun_naryQ_setter},
  {"@cache-add", CVAR, &YgooSfunYOcache_add},
  {"handler-info-message", CVAR, &YgooSfunYhandler_info_message},
  {"when", PVAR, NULL},
  {"fun-names-setter", CVAR, &YgooSfunYfun_names_setter},
  {"<specs>", CVAR, &YgooSfunYLspecsG},
  {"ensure-singleton-cache", CVAR, &YgooSfunYensure_singleton_cache},
  {"gen-lookup-i", PVAR, NULL},
  {"fun-nary?", CVAR, &YgooSfunYfun_naryQ},
  {"gen-from-met", CVAR, &YgooSfunYgen_from_met},
  {"prop-value-at", PVAR, NULL},
  {"ord-app-mets*", CVAR, &YgooSfunYord_app_metsT},
  {"@fun-names", CVAR, &YgooSfunYOfun_names},
  {"gen-add-met", CVAR, &YgooSfunYgen_add_met},
  {"<body>", CVAR, &YgooSfunYLbodyG},
  {"met-app-unify", CVAR, &YgooSfunYmet_app_unify},
  {"fun-names", CVAR, &YgooSfunYfun_names},
  {"@singleton-spec?", CVAR, &YgooSfunYOsingleton_specQ},
  {"or", PVAR, NULL},
  {"order-mets", CVAR, &YgooSfunYorder_mets},
  {"requires-singleton-prec", CVAR, &YgooSfunYrequires_singleton_prec},
  {"prop-bound-at?", PVAR, NULL},
  {"fun-specs-setter", CVAR, &YgooSfunYfun_specs_setter},
  {"met-app?", CVAR, &YgooSfunYmet_appQ},
  {"incongruent-method-error", CVAR, &YgooSfunYincongruent_method_error},
  {"prop-value-at-setter", PVAR, NULL},
  {"fun-congruent?", CVAR, &YgooSfunYfun_congruentQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fun-specs", NULL},
  {"fun-name", NULL},
  {"%dispatch", NULL},
  {"fab-gen", NULL},
  {"fun-spec", NULL},
  {"fun-count-setter", NULL},
  {"handler-info-arguments", NULL},
  {"@order-specs-class", NULL},
  {"<simple-handler-info>", NULL},
  {"fun-count", NULL},
  {"@fun-mets", NULL},
  {"fun-val", NULL},
  {"@class<", NULL},
  {"fun-src-loc", NULL},
  {"<replace-generic-restart>", NULL},
  {"fun-arity", NULL},
  {"fun-src", NULL},
  {"ord-app-mets", NULL},
  {"%define-method", NULL},
  {"handler-info-message", NULL},
  {"fun-nary?", NULL},
  {"prop-value-at", NULL},
  {"gen-add-met", NULL},
  {"fun-names", NULL},
  {"prop-bound-at?", NULL},
  {"met-app?", NULL},
  {"incongruent-method-error", NULL},
  {"prop-value-at-setter", NULL},
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
