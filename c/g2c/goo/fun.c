/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/fun");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/fun */

EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSfunYOspecd_args,"goo/fun","@specd-args");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSfunYmethod_accessor_offset,"goo/fun","method-accessor-offset");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
DEF(YgooSfunYfun_unification_vars,"goo/fun","fun-unification-vars");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSfunYOorder_specs,"goo/fun","@order-specs");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YgooSfunYOmets_singletons_at,"goo/fun","@mets-singletons-at");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooSfunYfun_same_metQ,"goo/fun","fun-same-met?");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooSfunYLbodyG,"goo/fun","<body>");
DEF(YgooSfunYOgen_cache_classes_setter,"goo/fun","@gen-cache-classes-setter");
DEF(YgooSfunYfun_val_setter,"goo/fun","fun-val-setter");
DEF(YgooSfunYchoose_methods,"goo/fun","choose-methods");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YOfold,"goo/boot","@fold");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSfunYOmets_specs_at,"goo/fun","@mets-specs-at");
DEF(YgooSfunYDmissed_dispatch,"goo/fun","$missed-dispatch");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YgooSfunYOgen_cache_classes,"goo/fun","@gen-cache-classes");
DEF(YgooSfunYDnul_assocs,"goo/fun","$nul-assocs");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSfunYLspecsG,"goo/fun","<specs>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSfunYgen_lookup_miss,"goo/fun","gen-lookup-miss");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSfunYOfun_mets_setter,"goo/fun","@fun-mets-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooSfunYOgen_cache_singletons_setter,"goo/fun","@gen-cache-singletons-setter");
DEF(YgooSfunYfun_arity_setter,"goo/fun","fun-arity-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
DEF(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSfunYOprune_mets_by_type_at,"goo/fun","@prune-mets-by-type-at");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YgooSfunYord_app_metsT,"goo/fun","ord-app-mets*");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSfunYOgen_cache_singletons,"goo/fun","@gen-cache-singletons");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
DEF(YgooSfunYOfun_unification_vars,"goo/fun","@fun-unification-vars");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooSfunYLmetsG,"goo/fun","<mets>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSfunYgen_from_met,"goo/fun","gen-from-met");
DEF(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSfunYmet_app_unify,"goo/fun","met-app-unify");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSfunYOgen_cache_arg_pos_setter,"goo/fun","@gen-cache-arg-pos-setter");
DEF(YgooSfunYfun_naryQ_setter,"goo/fun","fun-nary?-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooSfunYOfun_val,"goo/fun","@fun-val");
DEF(YgooSfunYgen_lookup_miss_1,"goo/fun","gen-lookup-miss-1");
DEF(YgooSfunYgen_lookup_miss_1_using,"goo/fun","gen-lookup-miss-1-using");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSfunYOmets_unspecialized_atQ,"goo/fun","@mets-unspecialized-at?");
EXT(YOdo,"goo/boot","@do");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSfunYOgen_cache_arg_pos,"goo/fun","@gen-cache-arg-pos");
DEF(YgooSfunYfun_names_setter,"goo/fun","fun-names-setter");
DEF(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooSfunYOfun_arity,"goo/fun","@fun-arity");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSfunYOfun_names,"goo/fun","@fun-names");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YOmemQ,"goo/boot","@mem?");
DEF(YgooSfunYOprecise_specQ,"goo/fun","@precise-spec?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
DEF(YgooSfunYord_app_mets_1,"goo/fun","ord-app-mets-1");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YOpick,"goo/boot","@pick");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSfunYOfun_naryQ,"goo/fun","@fun-nary?");
DEF(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSfunYfun_specs_setter,"goo/fun","fun-specs-setter");
DEF(YgooSfunYLenvG,"goo/fun","<env>");
DEF(YgooSfunYOcache_add,"goo/fun","@cache-add");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSfunYOunion_specQ,"goo/fun","@union-spec?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSfunYOfun_specs,"goo/fun","@fun-specs");
EXT(YOOEE,"goo/boot","@@==");
DEF(YgooSfunYensure_singleton_cache,"goo/fun","ensure-singleton-cache");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YOmap,"goo/boot","@map");
DEF(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
DEF(YgooSfunYOsubclass_specQ,"goo/fun","@subclass-spec?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YOtup,"goo/boot","@tup");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooSfunYOmets_subclasses_at,"goo/fun","@mets-subclasses-at");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSfunYrequires_singleton_prec,"goo/fun","requires-singleton-prec");
DEF(YgooSfunYOsingleton_specQ,"goo/fun","@singleton-spec?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSfunYorder_mets,"goo/fun","order-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSfunYfun_unification_vars_setter,"goo/fun","fun-unification-vars-setter");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSfunYfun_congruentQ,"goo/fun","fun-congruent?");
DEF(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_77);
DEFLIT(lit_63);
DEFLIT(lit_138);
DEFLIT(lit_124);
DEFLIT(lit_106);
DEFLIT(lit_98);
DEFLIT(lit_12);
DEFLIT(lit_34);
DEFLIT(lit_114);
DEFLIT(lit_120);
DEFLIT(lit_128);
DEFLIT(lit_132);
DEFLIT(lit_41);
DEFLIT(lit_43);
DEFLIT(lit_102);
DEFLIT(lit_137);
DEFLIT(lit_140);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_109);
DEFLIT(lit_50);
DEFLIT(lit_115);
DEFLIT(lit_4);
DEFLIT(lit_97);
DEFLIT(lit_67);
DEFLIT(lit_3);
DEFLIT(lit_133);
DEFLIT(lit_21);
DEFLIT(lit_62);
DEFLIT(lit_72);
DEFLIT(lit_1);
DEFLIT(lit_127);
DEFLIT(lit_139);
DEFLIT(lit_68);
DEFLIT(lit_29);
DEFLIT(lit_110);
DEFLIT(lit_100);
DEFLIT(lit_28);
DEFLIT(lit_81);
DEFLIT(lit_40);
DEFLIT(lit_112);
DEFLIT(lit_64);
DEFLIT(lit_38);
DEFLIT(lit_57);
DEFLIT(lit_131);
DEFLIT(lit_37);
DEFLIT(lit_75);
DEFLIT(lit_122);
DEFLIT(lit_108);
DEFLIT(lit_143);
DEFLIT(lit_14);
DEFLIT(lit_142);
DEFLIT(lit_82);
DEFLIT(lit_107);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_20);
DEFLIT(lit_118);
DEFLIT(lit_119);
DEFLIT(lit_125);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_58);
DEFLIT(lit_56);
DEFLIT(lit_54);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_87);
DEFLIT(lit_61);
DEFLIT(lit_136);
DEFLIT(lit_13);
DEFLIT(lit_2);
DEFLIT(lit_45);
DEFLIT(lit_126);
DEFLIT(lit_32);
DEFLIT(lit_23);
DEFLIT(lit_71);
DEFLIT(lit_79);
DEFLIT(lit_88);
DEFLIT(lit_31);
DEFLIT(lit_90);
DEFLIT(lit_95);
DEFLIT(lit_104);
DEFLIT(lit_70);
DEFLIT(lit_80);
DEFLIT(lit_25);
DEFLIT(lit_99);
DEFLIT(lit_144);
DEFLIT(lit_111);
DEFLIT(lit_51);
DEFLIT(lit_76);
DEFLIT(lit_65);
DEFLIT(lit_30);
DEFLIT(lit_42);
DEFLIT(lit_74);
DEFLIT(lit_129);
DEFLIT(lit_130);
DEFLIT(lit_116);
DEFLIT(lit_73);
DEFLIT(lit_24);
DEFLIT(lit_121);
DEFLIT(lit_39);
DEFLIT(lit_78);
DEFLIT(lit_123);
DEFLIT(lit_83);
DEFLIT(lit_101);
DEFLIT(lit_26);
DEFLIT(lit_36);
DEFLIT(lit_135);
DEFLIT(lit_27);
DEFLIT(lit_86);
DEFLIT(lit_89);
DEFLIT(lit_6);
DEFLIT(lit_44);
DEFLIT(lit_69);
DEFLIT(lit_52);
DEFLIT(lit_46);
DEFLIT(lit_92);
DEFLIT(lit_66);
DEFLIT(lit_94);
DEFLIT(lit_59);
DEFLIT(lit_134);
DEFLIT(lit_113);
DEFLIT(lit_0);
DEFLIT(lit_91);
DEFLIT(lit_60);
DEFLIT(lit_47);
DEFLIT(lit_35);
DEFLIT(lit_9);
DEFLIT(lit_117);
DEFLIT(lit_103);
DEFLIT(lit_85);
DEFLIT(lit_16);
DEFLIT(lit_105);
DEFLIT(lit_49);
DEFLIT(lit_84);
DEFLIT(lit_141);
DEFLIT(lit_17);
DEFLIT(lit_18);
DEFLIT(lit_55);
DEFLIT(lit_93);
DEFLIT(lit_22);
DEFLIT(lit_96);
DEFLIT(lit_11);

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
FUNFOR(YgooSfunYfun_names);
FUNFOR(YgooSfunYfun_names_setter);
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
FUNFOR(YgooSfunYfab_gen);
LOCFOR(fun_80);
FUNFOR(YgooSfunYgen_from_met);
FUNFOR(YgooSfunYPdefine_method);
extern P YgooSfunY___main_0___ ();
extern P YgooSfunY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSfunYOfun_names) {
  P x_;
  P xF6140;
  P xF6139;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6139 = x_;
  T1 = (P)YPprop_elt(xF6139,(P)2);
  xF6140 = T1;
  T0 = (P)YPprop_elt(xF6140,(P)0);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_specs) {
  P x_;
  P xF6142;
  P xF6141;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6141 = x_;
  T1 = (P)YPprop_elt(xF6141,(P)2);
  xF6142 = T1;
  T0 = (P)YPprop_elt(xF6142,(P)1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_naryQ) {
  P x_;
  P xF6144;
  P xF6143;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6143 = x_;
  T1 = (P)YPprop_elt(xF6143,(P)2);
  xF6144 = T1;
  T0 = (P)YPprop_elt(xF6144,(P)2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_arity) {
  P x_;
  P xF6146;
  P xF6145;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6145 = x_;
  T1 = (P)YPprop_elt(xF6145,(P)2);
  xF6146 = T1;
  T0 = (P)YPprop_elt(xF6146,(P)3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_val) {
  P x_;
  P xF6148;
  P xF6147;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6147 = x_;
  T1 = (P)YPprop_elt(xF6147,(P)2);
  xF6148 = T1;
  T0 = (P)YPprop_elt(xF6148,(P)4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOfun_unification_vars) {
  P x_;
  P xF6150;
  P xF6149;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  xF6149 = x_;
  T1 = (P)YPprop_elt(xF6149,(P)2);
  xF6150 = T1;
  T0 = (P)YPprop_elt(xF6150,(P)5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYOfun_mets) {
  P x_;
  P xF6151;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6151 = x_;
  T0 = (P)YPprop_elt(xF6151,(P)3);
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
  P yF6155;
  P xF6154;
  P yF6153;
  P xF6152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),x_);
  xF6152 = T3;
  T4 = CALL1(1,VARREF(YgooSfunYOfun_arity),y_);
  yF6153 = T4;
  T2 = (P)YPiE(xF6152,yF6153);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
    xF6154 = T8;
    T9 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),y_);
    yF6155 = T9;
    T7 = (P)YPeqQ(xF6154,yF6155);
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

FUNCODEDEF(fun_11) {
LINK_STACK();
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_12) {
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

FUNCODEDEF(fun_13) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSfunYincongruent_method_error),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
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
  P xF6183;
  P xF6182;
  P tmpF6181;
  P now_sameQF6180;
  P gmF6179;
  P xF6178;
  P xF6177;
  P xF6176;
  P xF6175;
  P gmsF6174;
  P sameQF6173;
  P metsF6172;
  P xF6171;
  P xF6170;
  P xF6169;
  P xF6168;
  P spec_classF6167;
  P xF6166;
  P yF6165;
  P xF6164;
  P tmpF6163;
  P specF6162;
  P xF6161;
  P xF6160;
  P xF6159;
  P xF6158;
  P xF6157;
  P specsF6156;
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
    specsF6156 = T27;
    LOOP_278: {
      P a278_0;
      xF6157 = specsF6156;
      xF6158 = xF6157;
      T11 = (P)YPeqQ(xF6158,VARREF(Ynil));
      T10 = (P)YPbb(T11);
      xF6159 = T10;
      T9 = (P)YPeqQ(xF6159,YPfalse);
      T8 = (P)YPbb(T9);
      if (T9) {
        xF6160 = specsF6156;
        xF6161 = xF6160;
        T26 = (P)YPprop_elt(xF6161,(P)0);
        specF6162 = T26;
        T18 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),specF6162);
        tmpF6163 = T18;
        if (tmpF6163 != YPfalse) {
          T15 = tmpF6163;
        } else {
          xF6164 = specF6162;
          yF6165 = VARREF(YLanyG);
          T17 = (P)YPeqQ(xF6164,yF6165);
          T16 = (P)YPbb(T17);
          T15 = T16;
        }
        xF6166 = T15;
        T14 = (P)YPeqQ(xF6166,YPfalse);
        T13 = (P)YPbb(T14);
        if (T14) {
          T25 = (P)YPobject_class(specF6162);
          spec_classF6167 = T25;
          xF6168 = spec_classF6167;
          T20 = (P)YPprop_elt(xF6168,(P)7);
          T19 = (P)YOadd_new(T20,g_);
          (P)YPclass_gens_setter(T19,spec_classF6167);
          xF6169 = spec_classF6167;
          T22 = (P)YPprop_elt(xF6169,(P)8);
          T21 = (P)YOadd_new(T22,m_);
          (P)YPclass_mets_setter(T21,spec_classF6167);
          xF6170 = specsF6156;
          xF6171 = xF6170;
          T24 = (P)YPprop_elt(xF6171,(P)1);
          a278_0 = T24;
          specsF6156 = a278_0;
          goto LOOP_278;
          T12 = T23;
        } else {
          T12 = YPfalse;
        }
        T7 = T12;
      } else {
        T7 = YPfalse;
      }
    }
    metsF6172 = Ynil;
    sameQF6173 = YPfalse;
    T42 = CALL1(1,VARREF(YgooSfunYOfun_mets),g_);
    check_type(T42,VARREF(YgooSfunYLmetsG));
    gmsF6174 = T42;
    LOOP_279: {
      P a279_0,a279_1,a279_2;
      xF6175 = gmsF6174;
      xF6176 = xF6175;
      T30 = (P)YPeqQ(xF6176,VARREF(Ynil));
      T29 = (P)YPbb(T30);
      if (T30) {
        if (sameQF6173 != YPfalse) {
          T33 = metsF6172;
        } else {
          T34 = (P)YOadd(metsF6172,m_);
          T33 = T34;
        }
        T32 = CALL1(1,VARREF(YOrevX),T33);
        T31 = (P)YPgen_mets_setter(T32,g_);
        T28 = T31;
      } else {
        xF6177 = gmsF6174;
        xF6178 = xF6177;
        T41 = (P)YPprop_elt(xF6178,(P)0);
        gmF6179 = T41;
        T40 = CALL2(1,VARREF(YgooSfunYfun_same_metQ),gmF6179,m_);
        now_sameQF6180 = T40;
        if (now_sameQF6180 != YPfalse) {
          T37 = m_;
        } else {
          T37 = gmF6179;
        }
        T36 = (P)YOadd(metsF6172,T37);
        tmpF6181 = now_sameQF6180;
        if (tmpF6181 != YPfalse) {
          T38 = tmpF6181;
        } else {
          T38 = sameQF6173;
        }
        xF6182 = gmsF6174;
        xF6183 = xF6182;
        T39 = (P)YPprop_elt(xF6183,(P)1);
        a279_0 = T36;
        a279_1 = T38;
        a279_2 = T39;
        metsF6172 = a279_0;
        sameQF6173 = a279_1;
        gmsF6174 = a279_2;
        goto LOOP_279;
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
  P xF6196;
  P xF6195;
  P yF6194;
  P xF6193;
  P yF6192;
  P xF6191;
  P cF6190;
  P xF6189;
  P xF6188;
  P xF6187;
  P xF6186;
  P psF6185;
  P xF6184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  ARG(wrt_, 2);
  xF6184 = wrt_;
  T13 = (P)YPprop_elt(xF6184,(P)4);
  psF6185 = T13;
  LOOP_280: {
    P a280_0;
    xF6186 = psF6185;
    xF6187 = xF6186;
    T2 = (P)YPeqQ(xF6187,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL5(1,VARREF(Ycpl_error),LITREF(lit_30),LITREF(lit_31),wrt_,c1_,c2_);
      T0 = T3;
    } else {
      xF6188 = psF6185;
      xF6189 = xF6188;
      T12 = (P)YPprop_elt(xF6189,(P)0);
      cF6190 = T12;
      xF6191 = cF6190;
      yF6192 = c1_;
      T6 = (P)YPeqQ(xF6191,yF6192);
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPtrue;
      } else {
        xF6193 = cF6190;
        yF6194 = c2_;
        T9 = (P)YPeqQ(xF6193,yF6194);
        T8 = (P)YPbb(T9);
        if (T9) {
          T7 = YPfalse;
        } else {
          xF6195 = psF6185;
          xF6196 = xF6195;
          T11 = (P)YPprop_elt(xF6196,(P)1);
          a280_0 = T11;
          psF6185 = a280_0;
          goto LOOP_280;
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
  P tagF6201;
  P xF6200;
  P xF6199;
  P yF6198;
  P xF6197;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF6197 = t1_;
  yF6198 = t2_;
  T2 = (P)YPeqQ(xF6197,yF6198);
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(YOtup),LITREF(lit_34),t1_);
    T0 = T3;
  } else {
    xF6199 = arg_;
    xF6200 = xF6199;
    T11 = (P)YPiB(xF6200,(P)3);
    tagF6201 = T11;
    T8 = (P)YPiE(tagF6201,(P)0);
    T7 = (P)YPbb(T8);
    if (T8) {
      T9 = (P)YPobject_class(xF6199);
      T6 = T9;
    } else {
      T10 = (P)YPelt(VARREF(YDdirect_object_class),tagF6201);
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
  P yF6211;
  P xF6210;
  P tagF6209;
  P xF6208;
  P xF6207;
  P yF6206;
  P xF6205;
  P tagF6204;
  P xF6203;
  P xF6202;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(t1_, 0);
  ARG(t2_, 1);
  ARG(arg_, 2);
  xF6202 = t1_;
  xF6203 = xF6202;
  T9 = (P)YPiB(xF6203,(P)3);
  tagF6204 = T9;
  T6 = (P)YPiE(tagF6204,(P)0);
  T5 = (P)YPbb(T6);
  if (T6) {
    T7 = (P)YPobject_class(xF6202);
    T4 = T7;
  } else {
    T8 = (P)YPelt(VARREF(YDdirect_object_class),tagF6204);
    T4 = T8;
  }
  xF6205 = T4;
  yF6206 = VARREF(YLclassG);
  T3 = (P)YPeqQ(xF6205,yF6206);
  T2 = (P)YPbb(T3);
  if (T3) {
    xF6207 = t2_;
    xF6208 = xF6207;
    T17 = (P)YPiB(xF6208,(P)3);
    tagF6209 = T17;
    T14 = (P)YPiE(tagF6209,(P)0);
    T13 = (P)YPbb(T14);
    if (T14) {
      T15 = (P)YPobject_class(xF6207);
      T12 = T15;
    } else {
      T16 = (P)YPelt(VARREF(YDdirect_object_class),tagF6209);
      T12 = T16;
    }
    xF6210 = T12;
    yF6211 = VARREF(YLclassG);
    T11 = (P)YPeqQ(xF6210,yF6211);
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
  P yF6248;
  P xF6247;
  P tmpF6246;
  P yF6245;
  P xF6244;
  P yF6243;
  P xF6242;
  P yF6241;
  P xF6240;
  P idxF6239;
  P tF6238;
  P xF6237;
  P xF6236;
  P xF6235;
  P xF6234;
  P xF6233;
  P xF6232;
  P yF6231;
  P xF6230;
  P cmpF6229;
  P xF6228;
  P xF6227;
  P iF6226;
  P xF6225;
  P cmpAtypF6224;
  P xF6223;
  P xF6222;
  P xF6221;
  P iF6220;
  P xF6219;
  P m2specF6218;
  P m1specF6217;
  P yF6216;
  P xF6215;
  P idxF6214;
  P stateF6213;
  P arityF6212;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(m1_, 0);
  ARG(m2_, 1);
  ARG(args_, 2);
  T32 = CALL1(1,VARREF(YgooSfunYOfun_arity),m1_);
  check_type(T32,VARREF(YLfixnumG));
  arityF6212 = T32;
  check_type(LITREF(lit_34),VARREF(YLsymG));
  stateF6213 = LITREF(lit_34);
  check_type(YPint((P)0),VARREF(YLfixnumG));
  idxF6214 = YPint((P)0);
  LOOP_281: {
    P a281_0,a281_1;
    xF6215 = idxF6214;
    yF6216 = arityF6212;
    T2 = (P)YPiE(xF6215,yF6216);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = stateF6213;
    } else {
      T31 = CALL2(1,VARREF(YgooSfunYfun_spec),m1_,idxF6214);
      m1specF6217 = T31;
      T30 = CALL2(1,VARREF(YgooSfunYfun_spec),m2_,idxF6214);
      m2specF6218 = T30;
      xF6219 = args_;
      iF6220 = idxF6214;
      xF6221 = xF6219;
      T27 = (P)YPprop_elt(xF6221,(P)0);
      xF6222 = iF6220;
      xF6223 = xF6222;
      T29 = (P)YPiGG(xF6223,(P)2);
      T28 = (P)YPi_((P)0,T29);
      T26 = (P)YPloc_off(T27,T28);
      T25 = CALL3(1,VARREF(YgooSfunYOorder_specs),m1specF6217,m2specF6218,T26);
      check_type(T25,VARREF(YLtupG));
      cmpAtypF6224 = T25;
      xF6225 = cmpAtypF6224;
      iF6226 = YPint((P)0);
      xF6227 = iF6226;
      xF6228 = xF6227;
      T24 = (P)YPiGG(xF6228,(P)2);
      T23 = (P)YPtelt(xF6225,T24);
      check_type(T23,VARREF(YLsymG));
      cmpF6229 = T23;
      xF6230 = idxF6214;
      yF6231 = YPint((P)1);
      xF6232 = xF6230;
      xF6233 = xF6232;
      T21 = (P)YPiGG(xF6233,(P)2);
      xF6234 = yF6231;
      xF6235 = xF6234;
      T22 = (P)YPiGG(xF6235,(P)2);
      T20 = (P)YPiA(T21,T22);
      xF6236 = T20;
      xF6237 = xF6236;
      tF6238 = (P)1;
      T19 = (P)YPiLL(xF6237,(P)2);
      T18 = (P)YPiv(T19,tF6238);
      check_type(T18,VARREF(YLfixnumG));
      idxF6239 = T18;
      xF6240 = cmpF6229;
      yF6241 = LITREF(lit_34);
      T5 = (P)YPeqQ(xF6240,yF6241);
      T4 = (P)YPbb(T5);
      if (T5) {
        a281_0 = stateF6213;
        a281_1 = idxF6239;
        stateF6213 = a281_0;
        idxF6214 = a281_1;
        goto LOOP_281;
        T3 = T6;
      } else {
        xF6242 = cmpF6229;
        yF6243 = LITREF(lit_41);
        T11 = (P)YPeqQ(xF6242,yF6243);
        T10 = (P)YPbb(T11);
        T9 = CALL1(1,VARREF(Ynot),T10);
        if (T9 != YPfalse) {
          xF6244 = stateF6213;
          yF6245 = LITREF(lit_34);
          T16 = (P)YPeqQ(xF6244,yF6245);
          T15 = (P)YPbb(T16);
          tmpF6246 = T15;
          if (tmpF6246 != YPfalse) {
            T12 = tmpF6246;
          } else {
            xF6247 = cmpF6229;
            yF6248 = stateF6213;
            T14 = (P)YPeqQ(xF6247,yF6248);
            T13 = (P)YPbb(T14);
            T12 = T13;
          }
          T8 = T12;
        } else {
          T8 = YPfalse;
        }
        if (T8 != YPfalse) {
          a281_0 = cmpF6229;
          a281_1 = idxF6239;
          stateF6213 = a281_0;
          idxF6214 = a281_1;
          goto LOOP_281;
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

FUNCODEDEF(fun_make_ambiguous_20) {
  P headed_list_;
  P xF6261;
  P xF6260;
  P xF6259;
  P xF6258;
  P t1F6257;
  P xF6256;
  P xF6255;
  P tmpF6254;
  P yF6253;
  P xF6252;
  P lF6251;
  P xF6250;
  P xF6249;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(headed_list_, 0);
  xF6249 = headed_list_;
  xF6250 = xF6249;
  T6 = (P)YPprop_elt(xF6250,(P)1);
  check_type(T6,VARREF(YLlstG));
  lF6251 = T6;
  LOOP_282: {
    P a282_0;
    xF6252 = lF6251;
    yF6253 = Ynil;
    T5 = (P)YPeqQ(xF6252,yF6253);
    T4 = (P)YPbb(T5);
    tmpF6254 = T4;
    if (tmpF6254 != YPfalse) {
      T0 = tmpF6254;
    } else {
      xF6255 = lF6251;
      xF6256 = xF6255;
      T3 = (P)YPprop_elt(xF6256,(P)1);
      t1F6257 = T3;
      xF6258 = FREEREF(0);
      xF6259 = xF6258;
      T1 = (P)YPprop_elt(xF6259,(P)1);
      (P)YOtail_setter(T1,lF6251);
      (P)YOtail_setter(lF6251,FREEREF(0));
      a282_0 = t1F6257;
      lF6251 = a282_0;
      goto LOOP_282;
      T0 = T2;
    }
  }
  (P)YOtail_setter(Ynil,headed_list_);
  xF6260 = FREEREF(0);
  xF6261 = xF6260;
  T9 = (P)YPprop_elt(xF6261,(P)1);
  T8 = (P)YOpair(FREEREF(1),T9);
  T7 = (P)YOtail_setter(T8,FREEREF(0));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_precedes_allQ_21) {
  P l_;
  P xF6270;
  P xF6269;
  P yF6268;
  P xF6267;
  P xF6266;
  P xF6265;
  P yF6264;
  P xF6263;
  P lF6262;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(l_, 0);
  check_type(l_,VARREF(YLlstG));
  lF6262 = l_;
  LOOP_283: {
    P a283_0;
    xF6263 = lF6262;
    yF6264 = Ynil;
    T2 = (P)YPeqQ(xF6263,yF6264);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = YPtrue;
    } else {
      xF6265 = lF6262;
      xF6266 = xF6265;
      T7 = (P)YPprop_elt(xF6266,(P)0);
      T6 = CALL3(1,FREEREF(2),FREEREF(0),T7,FREEREF(1));
      xF6267 = T6;
      yF6268 = LITREF(lit_35);
      T5 = (P)YPeqQ(xF6267,yF6268);
      T4 = (P)YPbb(T5);
      if (T5) {
        xF6269 = lF6262;
        xF6270 = xF6269;
        T9 = (P)YPprop_elt(xF6270,(P)1);
        a283_0 = T9;
        lF6262 = a283_0;
        goto LOOP_283;
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

FUNCODEDEF(fun_check_subsequent_ambiguities_22) {
  P oprev_;
  P xF6277;
  P xF6276;
  P xF6275;
  P xF6274;
  P tmpF6273;
  P xF6272;
  P xF6271;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(oprev_, 0);
  xF6271 = oprev_;
  xF6272 = xF6271;
  T7 = (P)YPprop_elt(xF6272,(P)1);
  T6 = CALL1(1,FREEREF(0),T7);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF6273 = T5;
  if (tmpF6273 != YPfalse) {
    T1 = tmpF6273;
  } else {
    xF6274 = FREEREF(1);
    xF6275 = xF6274;
    T4 = (P)YPprop_elt(xF6275,(P)1);
    T3 = CALL1(1,FREEREF(0),T4);
    T2 = CALL1(1,VARREF(Ynot),T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T8 = CALL1(1,FREEREF(2),oprev_);
    T0 = T8;
  } else {
    xF6276 = oprev_;
    xF6277 = xF6276;
    T11 = (P)YPprop_elt(xF6277,(P)1);
    T10 = (P)YOpair(FREEREF(3),T11);
    T9 = (P)YOtail_setter(T10,oprev_);
    T0 = T9;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_23) {
  P oprev_,osub_;
  P xF6299;
  P xF6298;
  P yF6297;
  P xF6296;
  P yF6295;
  P xF6294;
  P indicF6293;
  P xF6292;
  P xF6291;
  P xF6290;
  P xF6289;
  P xF6288;
  P xF6287;
  P yF6286;
  P xF6285;
  P yF6284;
  P xF6283;
  P indicF6282;
  P xF6281;
  P xF6280;
  P xF6279;
  P xF6278;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(oprev_, 0);
  ARG(osub_, 1);
  LOOP_284: {
    P a284_0,a284_1;
    xF6289 = osub_;
    xF6290 = xF6289;
    T2 = (P)YPeqQ(xF6290,VARREF(Ynil));
    T1 = (P)YPbb(T2);
    if (T2) {
      T3 = CALL1(1,FREEREF(0),oprev_);
      T0 = T3;
    } else {
      xF6291 = osub_;
      xF6292 = xF6291;
      T15 = (P)YPprop_elt(xF6292,(P)0);
      T14 = CALL3(1,FREEREF(3),FREEREF(1),T15,FREEREF(2));
      indicF6293 = T14;
      xF6294 = indicF6293;
      yF6295 = LITREF(lit_35);
      T6 = (P)YPeqQ(xF6294,yF6295);
      T5 = (P)YPbb(T6);
      if (T6) {
        T7 = CALL1(1,FREEREF(0),oprev_);
        T4 = T7;
      } else {
        xF6296 = indicF6293;
        yF6297 = LITREF(lit_36);
        T10 = (P)YPeqQ(xF6296,yF6297);
        T9 = (P)YPbb(T10);
        if (T10) {
          xF6298 = osub_;
          xF6299 = xF6298;
          T12 = (P)YPprop_elt(xF6299,(P)1);
          a284_0 = osub_;
          a284_1 = T12;
          oprev_ = a284_0;
          osub_ = a284_1;
          goto LOOP_284;
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
  P xF6320;
  P xF6319;
  P xF6318;
  P xF6317;
  P xF6316;
  P xF6315;
  P xF6314;
  P xF6313;
  P insertF6312;
  P check_subsequent_ambiguitiesF6311;
  P precedes_allQF6310;
  P make_ambiguousF6309;
  P metF6308;
  P xF6307;
  P xF6306;
  P xF6305;
  P yF6304;
  P xF6303;
  P metsF6302;
  P aheadF6301;
  P oheadF6300;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(mets_, 0);
  ARG(args_, 1);
  ARG(order_mets_, 2);
  T17 = (P)YOpair(YPfalse,Ynil);
  check_type(T17,VARREF(YLlstG));
  oheadF6300 = T17;
  T16 = (P)YOpair(YPfalse,Ynil);
  check_type(T16,VARREF(YLlstG));
  aheadF6301 = T16;
  check_type(mets_,VARREF(YLlstG));
  metsF6302 = mets_;
  LOOP_285: {
    P a285_0;
    xF6303 = metsF6302;
    yF6304 = Ynil;
    T4 = (P)YPeqQ(xF6303,yF6304);
    T3 = (P)YPbb(T4);
    xF6305 = T3;
    T2 = (P)YPeqQ(xF6305,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF6306 = metsF6302;
      xF6307 = xF6306;
      T12 = (P)YPprop_elt(xF6307,(P)0);
      check_type(T12,VARREF(YLmetG));
      metF6308 = T12;
      T8 = FUNSHELL(1,fun_make_ambiguous_20,2);
      make_ambiguousF6309 = T8;
      T9 = FUNSHELL(1,fun_precedes_allQ_21,3);
      precedes_allQF6310 = T9;
      T10 = FUNSHELL(1,fun_check_subsequent_ambiguities_22,4);
      check_subsequent_ambiguitiesF6311 = T10;
      T11 = FUNSHELL(1,fun_insert_23,5);
      insertF6312 = T11;
      FUNINIT(make_ambiguousF6309, 2,aheadF6301,metF6308);
      FUNINIT(precedes_allQF6310, 3,metF6308,args_,order_mets_);
      FUNINIT(check_subsequent_ambiguitiesF6311, 4,precedes_allQF6310,aheadF6301,make_ambiguousF6309,metF6308);
      FUNINIT(insertF6312, 5,check_subsequent_ambiguitiesF6311,metF6308,args_,order_mets_,make_ambiguousF6309);
      xF6313 = oheadF6300;
      xF6314 = xF6313;
      T5 = (P)YPprop_elt(xF6314,(P)1);
      CALL2(1,insertF6312,oheadF6300,T5);
      xF6315 = metsF6302;
      xF6316 = xF6315;
      T7 = (P)YPprop_elt(xF6316,(P)1);
      a285_0 = T7;
      metsF6302 = a285_0;
      goto LOOP_285;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  xF6317 = oheadF6300;
  xF6318 = xF6317;
  T14 = (P)YPprop_elt(xF6318,(P)1);
  xF6319 = aheadF6301;
  xF6320 = xF6319;
  T15 = (P)YPprop_elt(xF6320,(P)1);
  T13 = CALL2(1,VARREF(YOtup),T14,T15);
UNLINK_STACK();
  RET(T13);
}

FUNCODEDEF(fun_25) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSfunYmet_appQ) {
  P met_,args_;
  P tF6360;
  P xF6359;
  P xF6358;
  P xF6357;
  P xF6356;
  P xF6355;
  P xF6354;
  P yF6353;
  P xF6352;
  P xF6351;
  P xF6350;
  P xF6349;
  P xF6348;
  P xF6347;
  P xF6346;
  P c2F6345;
  P c1F6344;
  P tagF6343;
  P xF6342;
  P xF6341;
  P cF6340;
  P oF6339;
  P yF6338;
  P xF6337;
  P tagF6336;
  P xF6335;
  P xF6334;
  P tF6333;
  P oF6332;
  P xF6331;
  P xF6330;
  P xF6329;
  P iF6328;
  P xF6327;
  P yF6326;
  P xF6325;
  P iF6324;
  P nF6323;
  P xF6322;
  P xF6321;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T4 = CALL1(1,VARREF(YgooSfunYOfun_unification_vars),met_);
  xF6321 = T4;
  xF6322 = xF6321;
  T3 = (P)YPeqQ(xF6322,VARREF(Ynil));
  T2 = (P)YPbb(T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSfunYmet_app_unify),met_,args_);
    T0 = T5;
  } else {
    T44 = CALL1(1,VARREF(YgooSfunYOfun_arity),met_);
    check_type(T44,VARREF(YLfixnumG));
    nF6323 = T44;
    check_type(YPint((P)0),VARREF(YLfixnumG));
    iF6324 = YPint((P)0);
    LOOP_286: {
      P a286_0;
      xF6325 = iF6324;
      yF6326 = nF6323;
      T8 = (P)YPiE(xF6325,yF6326);
      T7 = (P)YPbb(T8);
      if (T8) {
        T6 = YPtrue;
      } else {
        xF6327 = args_;
        iF6328 = iF6324;
        xF6329 = xF6327;
        T34 = (P)YPprop_elt(xF6329,(P)0);
        xF6330 = iF6328;
        xF6331 = xF6330;
        T36 = (P)YPiGG(xF6331,(P)2);
        T35 = (P)YPi_((P)0,T36);
        T33 = (P)YPloc_off(T34,T35);
        oF6332 = T33;
        T37 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,iF6324);
        tF6333 = T37;
        xF6334 = tF6333;
        xF6335 = xF6334;
        T18 = (P)YPiB(xF6335,(P)3);
        tagF6336 = T18;
        T15 = (P)YPiE(tagF6336,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF6334);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF6336);
          T13 = T17;
        }
        xF6337 = T13;
        yF6338 = VARREF(YLclassG);
        T12 = (P)YPeqQ(xF6337,yF6338);
        T11 = (P)YPbb(T12);
        if (T12) {
          oF6339 = oF6332;
          cF6340 = tF6333;
          xF6341 = oF6339;
          xF6342 = xF6341;
          T31 = (P)YPiB(xF6342,(P)3);
          tagF6343 = T31;
          T28 = (P)YPiE(tagF6343,(P)0);
          T27 = (P)YPbb(T28);
          if (T28) {
            T29 = (P)YPobject_class(xF6341);
            T26 = T29;
          } else {
            T30 = (P)YPelt(VARREF(YDdirect_object_class),tagF6343);
            T26 = T30;
          }
          c1F6344 = T26;
          c2F6345 = cF6340;
          xF6346 = c1F6344;
          T22 = (P)YPprop_elt(xF6346,(P)12);
          xF6347 = c2F6345;
          T24 = (P)YPprop_elt(xF6347,(P)11);
          xF6348 = T24;
          xF6349 = xF6348;
          T23 = (P)YPiGG(xF6349,(P)2);
          T21 = (P)YPselt(T22,T23);
          xF6350 = YPint((P)1);
          xF6351 = xF6350;
          T25 = (P)YPiGG(xF6351,(P)2);
          T20 = (P)YPiE(T21,T25);
          T19 = (P)YPbb(T20);
          T10 = T19;
        } else {
          T32 = CALL2(1,VARREF(YisaQ),oF6332,tF6333);
          T10 = T32;
        }
        if (T10 != YPfalse) {
          xF6352 = iF6324;
          yF6353 = YPint((P)1);
          xF6354 = xF6352;
          xF6355 = xF6354;
          T42 = (P)YPiGG(xF6355,(P)2);
          xF6356 = yF6353;
          xF6357 = xF6356;
          T43 = (P)YPiGG(xF6357,(P)2);
          T41 = (P)YPiA(T42,T43);
          xF6358 = T41;
          xF6359 = xF6358;
          tF6360 = (P)1;
          T40 = (P)YPiLL(xF6359,(P)2);
          T39 = (P)YPiv(T40,tF6360);
          a286_0 = T39;
          iF6324 = a286_0;
          goto LOOP_286;
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
  P considered_metsF6371;
  P xF6370;
  P xF6369;
  P ansF6368;
  P mF6367;
  P xF6366;
  P xF6365;
  P xF6364;
  P xF6363;
  P msF6362;
  P ansF6361;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(gf_, 0);
  ARG(args_, 1);
  ansF6361 = Ynil;
  T10 = CALL1(1,VARREF(YgooSfunYOfun_mets),gf_);
  msF6362 = T10;
  LOOP_287: {
    P a287_0,a287_1;
    xF6363 = msF6362;
    xF6364 = xF6363;
    T3 = (P)YPeqQ(xF6364,VARREF(Ynil));
    T2 = (P)YPbb(T3);
    if (T3) {
      T1 = ansF6361;
    } else {
      xF6365 = msF6362;
      xF6366 = xF6365;
      T9 = (P)YPprop_elt(xF6366,(P)0);
      mF6367 = T9;
      T7 = CALL2(1,VARREF(YgooSfunYmet_appQ),mF6367,args_);
      if (T7 != YPfalse) {
        T8 = (P)YOpair(mF6367,ansF6361);
        T6 = T8;
      } else {
        T6 = ansF6361;
      }
      ansF6368 = T6;
      xF6369 = msF6362;
      xF6370 = xF6369;
      T5 = (P)YPprop_elt(xF6370,(P)1);
      a287_0 = ansF6368;
      a287_1 = T5;
      ansF6361 = a287_0;
      msF6362 = a287_1;
      goto LOOP_287;
      T1 = T4;
    }
  }
  considered_metsF6371 = T1;
  T0 = CALL3(1,VARREF(YgooSfunYord_app_mets_1),considered_metsF6371,args_,VARREF(YgooSfunYorder_mets));
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
  P xF6372;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6372 = x_;
  T0 = (P)YPprop_elt(xF6372,(P)1);
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
  P xF6373;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6373 = x_;
  T0 = (P)YPprop_elt(xF6373,(P)2);
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
  P xF6374;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  xF6374 = x_;
  T0 = (P)YPprop_elt(xF6374,(P)3);
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
  P xF6398;
  P xF6397;
  P xF6396;
  P xF6395;
  P iF6394;
  P xF6393;
  P xF6392;
  P xF6391;
  P xF6390;
  P iF6389;
  P xF6388;
  P yF6387;
  P xF6386;
  P nF6385;
  P xF6384;
  P xF6383;
  P propQF6382;
  P yF6381;
  P xF6380;
  P tagF6379;
  P xF6378;
  P xF6377;
  P propF6376;
  P xF6375;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  ARG(args_, 2);
  xF6375 = met_;
  T25 = (P)YPprop_elt(xF6375,(P)3);
  propF6376 = T25;
  if (propF6376 != YPfalse) {
    xF6377 = propF6376;
    xF6378 = xF6377;
    T24 = (P)YPiB(xF6378,(P)3);
    tagF6379 = T24;
    T21 = (P)YPiE(tagF6379,(P)0);
    T20 = (P)YPbb(T21);
    if (T21) {
      T22 = (P)YPobject_class(xF6377);
      T19 = T22;
    } else {
      T23 = (P)YPelt(VARREF(YDdirect_object_class),tagF6379);
      T19 = T23;
    }
    xF6380 = T19;
    yF6381 = VARREF(YLpropG);
    T18 = (P)YPeqQ(xF6380,yF6381);
    T17 = (P)YPbb(T18);
    T16 = T17;
  } else {
    T16 = YPfalse;
  }
  propQF6382 = T16;
  xF6383 = args_;
  xF6384 = xF6383;
  T15 = (P)YPprop_elt(xF6384,(P)1);
  nF6385 = T15;
  if (propQF6382 != YPfalse) {
    xF6386 = nF6385;
    yF6387 = YPint((P)1);
    T3 = (P)YPiE(xF6386,yF6387);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF6388 = args_;
      iF6389 = YPint((P)0);
      xF6390 = xF6388;
      T6 = (P)YPprop_elt(xF6390,(P)0);
      xF6391 = iF6389;
      xF6392 = xF6391;
      T8 = (P)YPiGG(xF6392,(P)2);
      T7 = (P)YPi_((P)0,T8);
      T5 = (P)YPloc_off(T6,T7);
      T4 = CALL2(1,VARREF(Yprop_offset),T5,gen_);
      T1 = T4;
    } else {
      xF6393 = args_;
      iF6394 = YPint((P)1);
      xF6395 = xF6393;
      T11 = (P)YPprop_elt(xF6395,(P)0);
      xF6396 = iF6394;
      xF6397 = xF6396;
      T13 = (P)YPiGG(xF6397,(P)2);
      T12 = (P)YPi_((P)0,T13);
      T10 = (P)YPloc_off(T11,T12);
      xF6398 = propF6376;
      T14 = (P)YPprop_elt(xF6398,(P)1);
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
  P xF6411;
  P xF6410;
  P xF6409;
  P xF6408;
  P xF6407;
  P xF6406;
  P c2F6405;
  P c1F6404;
  P tagF6403;
  P xF6402;
  P xF6401;
  P cF6400;
  P oF6399;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF6399 = x_;
  cF6400 = VARREF(YLsingletonG);
  xF6401 = oF6399;
  xF6402 = xF6401;
  T12 = (P)YPiB(xF6402,(P)3);
  tagF6403 = T12;
  T9 = (P)YPiE(tagF6403,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF6401);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF6403);
    T7 = T11;
  }
  c1F6404 = T7;
  c2F6405 = cF6400;
  xF6406 = c1F6404;
  T3 = (P)YPprop_elt(xF6406,(P)12);
  xF6407 = c2F6405;
  T5 = (P)YPprop_elt(xF6407,(P)11);
  xF6408 = T5;
  xF6409 = xF6408;
  T4 = (P)YPiGG(xF6409,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF6410 = YPint((P)1);
  xF6411 = xF6410;
  T6 = (P)YPiGG(xF6411,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOsubclass_specQ) {
  P x_;
  P xF6424;
  P xF6423;
  P xF6422;
  P xF6421;
  P xF6420;
  P xF6419;
  P c2F6418;
  P c1F6417;
  P tagF6416;
  P xF6415;
  P xF6414;
  P cF6413;
  P oF6412;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF6412 = x_;
  cF6413 = VARREF(YLsubclassG);
  xF6414 = oF6412;
  xF6415 = xF6414;
  T12 = (P)YPiB(xF6415,(P)3);
  tagF6416 = T12;
  T9 = (P)YPiE(tagF6416,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF6414);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF6416);
    T7 = T11;
  }
  c1F6417 = T7;
  c2F6418 = cF6413;
  xF6419 = c1F6417;
  T3 = (P)YPprop_elt(xF6419,(P)12);
  xF6420 = c2F6418;
  T5 = (P)YPprop_elt(xF6420,(P)11);
  xF6421 = T5;
  xF6422 = xF6421;
  T4 = (P)YPiGG(xF6422,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF6423 = YPint((P)1);
  xF6424 = xF6423;
  T6 = (P)YPiGG(xF6424,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOunion_specQ) {
  P x_;
  P xF6437;
  P xF6436;
  P xF6435;
  P xF6434;
  P xF6433;
  P xF6432;
  P c2F6431;
  P c1F6430;
  P tagF6429;
  P xF6428;
  P xF6427;
  P cF6426;
  P oF6425;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(x_, 0);
  oF6425 = x_;
  cF6426 = VARREF(YLunionG);
  xF6427 = oF6425;
  xF6428 = xF6427;
  T12 = (P)YPiB(xF6428,(P)3);
  tagF6429 = T12;
  T9 = (P)YPiE(tagF6429,(P)0);
  T8 = (P)YPbb(T9);
  if (T9) {
    T10 = (P)YPobject_class(xF6427);
    T7 = T10;
  } else {
    T11 = (P)YPelt(VARREF(YDdirect_object_class),tagF6429);
    T7 = T11;
  }
  c1F6430 = T7;
  c2F6431 = cF6426;
  xF6432 = c1F6430;
  T3 = (P)YPprop_elt(xF6432,(P)12);
  xF6433 = c2F6431;
  T5 = (P)YPprop_elt(xF6433,(P)11);
  xF6434 = T5;
  xF6435 = xF6434;
  T4 = (P)YPiGG(xF6435,(P)2);
  T2 = (P)YPselt(T3,T4);
  xF6436 = YPint((P)1);
  xF6437 = xF6436;
  T6 = (P)YPiGG(xF6437,(P)2);
  T1 = (P)YPiE(T2,T6);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYOprecise_specQ) {
  P x_;
  P xF6440;
  P tmpF6439;
  P tmpF6438;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  T7 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),x_);
  tmpF6438 = T7;
  if (tmpF6438 != YPfalse) {
    T0 = tmpF6438;
  } else {
    T6 = CALL1(1,VARREF(YgooSfunYOsubclass_specQ),x_);
    tmpF6439 = T6;
    if (tmpF6439 != YPfalse) {
      T1 = tmpF6439;
    } else {
      T3 = CALL1(1,VARREF(YgooSfunYOunion_specQ),x_);
      if (T3 != YPfalse) {
        xF6440 = x_;
        T5 = (P)YPprop_elt(xF6440,(P)0);
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

FUNCODEDEF(fun_40) {
  P met_;
  P yF6442;
  P xF6441;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  T2 = CALL2(1,VARREF(YgooSfunYfun_spec),met_,FREEREF(0));
  xF6441 = T2;
  yF6442 = VARREF(YLanyG);
  T1 = (P)YPiE(xF6441,yF6442);
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

FUNCODEDEF(fun_42) {
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

FUNCODEDEF(fun_44) {
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

FUNCODEDEF(fun_46) {
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

FUNCODEDEF(fun_48) {
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
  P xF6519;
  P xF6518;
  P iF6517;
  P xF6516;
  P zF6515;
  P tF6514;
  P xF6513;
  P xF6512;
  P xF6511;
  P xF6510;
  P xF6509;
  P xF6508;
  P yF6507;
  P xF6506;
  P xF6505;
  P xF6504;
  P iF6503;
  P xF6502;
  P zF6501;
  P tF6500;
  P xF6499;
  P xF6498;
  P xF6497;
  P xF6496;
  P xF6495;
  P xF6494;
  P yF6493;
  P xF6492;
  P xF6491;
  P xF6490;
  P iF6489;
  P xF6488;
  P zF6487;
  P xF6486;
  P xF6485;
  P iF6484;
  P xF6483;
  P iF6482;
  P tF6481;
  P xF6480;
  P xF6479;
  P xF6478;
  P xF6477;
  P xF6476;
  P xF6475;
  P yF6474;
  P xF6473;
  P xF6472;
  P xF6471;
  P iF6470;
  P xF6469;
  P zF6468;
  P xF6467;
  P xF6466;
  P iF6465;
  P xF6464;
  P xF6463;
  P yF6462;
  P xF6461;
  P iF6460;
  P resF6459;
  P xF6458;
  P xF6457;
  P tF6456;
  P xF6455;
  P xF6454;
  P xF6453;
  P xF6452;
  P xF6451;
  P xF6450;
  P yF6449;
  P xF6448;
  P olenF6447;
  P tF6446;
  P xF6445;
  P xF6444;
  P xF6443;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(t_, 0);
  ARG(k_, 1);
  ARG(v_, 2);
  xF6443 = t_;
  T42 = (P)YPtlen(xF6443);
  xF6444 = T42;
  xF6445 = xF6444;
  tF6446 = (P)1;
  T41 = (P)YPiLL(xF6445,(P)2);
  T40 = (P)YPiv(T41,tF6446);
  olenF6447 = T40;
  xF6448 = olenF6447;
  yF6449 = YPint((P)2);
  xF6450 = xF6448;
  xF6451 = xF6450;
  T38 = (P)YPiGG(xF6451,(P)2);
  xF6452 = yF6449;
  xF6453 = xF6452;
  T39 = (P)YPiGG(xF6453,(P)2);
  T37 = (P)YPiA(T38,T39);
  xF6454 = T37;
  xF6455 = xF6454;
  tF6456 = (P)1;
  T36 = (P)YPiLL(xF6455,(P)2);
  T35 = (P)YPiv(T36,tF6456);
  xF6457 = T35;
  xF6458 = xF6457;
  T34 = (P)YPiGG(xF6458,(P)2);
  T33 = (P)YPtup(T34,VARREF(Ynul));
  resF6459 = T33;
  iF6460 = YPint((P)0);
  LOOP_288: {
    P a288_0;
    xF6461 = iF6460;
    yF6462 = olenF6447;
    T4 = (P)YPiE(xF6461,yF6462);
    T3 = (P)YPbb(T4);
    xF6463 = T3;
    T2 = (P)YPeqQ(xF6463,YPfalse);
    T1 = (P)YPbb(T2);
    if (T2) {
      xF6464 = t_;
      iF6465 = iF6460;
      xF6466 = iF6465;
      xF6467 = xF6466;
      T8 = (P)YPiGG(xF6467,(P)2);
      T7 = (P)YPtelt(xF6464,T8);
      zF6468 = T7;
      xF6469 = resF6459;
      iF6470 = iF6460;
      xF6471 = iF6470;
      xF6472 = xF6471;
      T6 = (P)YPiGG(xF6472,(P)2);
      T5 = (P)YPtelt_setter(zF6468,xF6469,T6);
      xF6473 = iF6460;
      yF6474 = YPint((P)1);
      xF6475 = xF6473;
      xF6476 = xF6475;
      T22 = (P)YPiGG(xF6476,(P)2);
      xF6477 = yF6474;
      xF6478 = xF6477;
      T23 = (P)YPiGG(xF6478,(P)2);
      T21 = (P)YPiA(T22,T23);
      xF6479 = T21;
      xF6480 = xF6479;
      tF6481 = (P)1;
      T20 = (P)YPiLL(xF6480,(P)2);
      T19 = (P)YPiv(T20,tF6481);
      iF6482 = T19;
      xF6483 = t_;
      iF6484 = iF6482;
      xF6485 = iF6484;
      xF6486 = xF6485;
      T12 = (P)YPiGG(xF6486,(P)2);
      T11 = (P)YPtelt(xF6483,T12);
      zF6487 = T11;
      xF6488 = resF6459;
      iF6489 = iF6482;
      xF6490 = iF6489;
      xF6491 = xF6490;
      T10 = (P)YPiGG(xF6491,(P)2);
      T9 = (P)YPtelt_setter(zF6487,xF6488,T10);
      xF6492 = iF6482;
      yF6493 = YPint((P)1);
      xF6494 = xF6492;
      xF6495 = xF6494;
      T17 = (P)YPiGG(xF6495,(P)2);
      xF6496 = yF6493;
      xF6497 = xF6496;
      T18 = (P)YPiGG(xF6497,(P)2);
      T16 = (P)YPiA(T17,T18);
      xF6498 = T16;
      xF6499 = xF6498;
      tF6500 = (P)1;
      T15 = (P)YPiLL(xF6499,(P)2);
      T14 = (P)YPiv(T15,tF6500);
      a288_0 = T14;
      iF6460 = a288_0;
      goto LOOP_288;
      T0 = T13;
    } else {
      T0 = YPfalse;
    }
  }
  zF6501 = k_;
  xF6502 = resF6459;
  iF6503 = olenF6447;
  xF6504 = iF6503;
  xF6505 = xF6504;
  T25 = (P)YPiGG(xF6505,(P)2);
  T24 = (P)YPtelt_setter(zF6501,xF6502,T25);
  zF6515 = v_;
  xF6516 = resF6459;
  xF6506 = olenF6447;
  yF6507 = YPint((P)1);
  xF6508 = xF6506;
  xF6509 = xF6508;
  T31 = (P)YPiGG(xF6509,(P)2);
  xF6510 = yF6507;
  xF6511 = xF6510;
  T32 = (P)YPiGG(xF6511,(P)2);
  T30 = (P)YPiA(T31,T32);
  xF6512 = T30;
  xF6513 = xF6512;
  tF6514 = (P)1;
  T29 = (P)YPiLL(xF6513,(P)2);
  T28 = (P)YPiv(T29,tF6514);
  iF6517 = T28;
  xF6518 = iF6517;
  xF6519 = xF6518;
  T27 = (P)YPiGG(xF6519,(P)2);
  T26 = (P)YPtelt_setter(zF6515,xF6516,T27);
UNLINK_STACK();
  QRET(resF6459);
}

FUNCODEDEF(YgooSfunYgen_lookup_miss_1_using) {
  P key_,instance_,all_assocs_,all_assocs_setter_,gen_,cache_,mets_,sorted_mets_,i_,args_;
  P tF6583;
  P xF6582;
  P xF6581;
  P xF6580;
  P xF6579;
  P xF6578;
  P xF6577;
  P yF6576;
  P xF6575;
  P tF6574;
  P xF6573;
  P xF6572;
  P xF6571;
  P xF6570;
  P xF6569;
  P xF6568;
  P yF6567;
  P xF6566;
  P vF6565;
  P xF6564;
  P xF6563;
  P iF6562;
  P xF6561;
  P tF6560;
  P xF6559;
  P xF6558;
  P xF6557;
  P xF6556;
  P xF6555;
  P xF6554;
  P yF6553;
  P xF6552;
  P yF6551;
  P xF6550;
  P xF6549;
  P xF6548;
  P iF6547;
  P xF6546;
  P valF6545;
  P tF6544;
  P xF6543;
  P xF6542;
  P xF6541;
  P xF6540;
  P xF6539;
  P xF6538;
  P yF6537;
  P xF6536;
  P tagF6535;
  P xF6534;
  P xF6533;
  P xF6532;
  P yF6531;
  P xF6530;
  P yF6529;
  P xF6528;
  P tF6527;
  P xF6526;
  P xF6525;
  P xF6524;
  P jF6523;
  P assocsF6522;
  P cacheF6521;
  P tmpF6520;
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
  tmpF6520 = cache_;
  if (tmpF6520 != YPfalse) {
    T56 = tmpF6520;
  } else {
    T57 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
    T56 = T57;
  }
  cacheF6521 = T56;
  T55 = CALL1(1,all_assocs_,cacheF6521);
  assocsF6522 = T55;
  jF6523 = YPint((P)0);
  LOOP_289: {
    P a289_0;
    xF6528 = jF6523;
    xF6524 = assocsF6522;
    T6 = (P)YPtlen(xF6524);
    xF6525 = T6;
    xF6526 = xF6525;
    tF6527 = (P)1;
    T5 = (P)YPiLL(xF6526,(P)2);
    T4 = (P)YPiv(T5,tF6527);
    yF6529 = T4;
    T3 = (P)YPiE(xF6528,yF6529);
    T2 = (P)YPbb(T3);
    if (T3) {
      xF6530 = all_assocs_;
      yF6531 = VARREF(YgooSfunYOgen_cache_classes);
      T10 = (P)YPeqQ(xF6530,yF6531);
      T9 = (P)YPbb(T10);
      if (T10) {
        T12 = key_;
        xF6532 = T12;
        T11 = (P)YPprop_elt(xF6532,(P)9);
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
      if (T8 != YPfalse) {
        CALL1(1,VARREF(Yupdate_instance_for_changed_class),instance_);
        xF6533 = instance_;
        xF6534 = xF6533;
        T18 = (P)YPiB(xF6534,(P)3);
        tagF6535 = T18;
        T15 = (P)YPiE(tagF6535,(P)0);
        T14 = (P)YPbb(T15);
        if (T15) {
          T16 = (P)YPobject_class(xF6533);
          T13 = T16;
        } else {
          T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF6535);
          T13 = T17;
        }
        key_ = T13;
        T20 = CALL1(0,all_assocs_,cacheF6521);
        a289_0 = T20;
        jF6523 = a289_0;
        goto LOOP_289;
        T7 = T19;
      } else {
        xF6536 = i_;
        yF6537 = YPint((P)1);
        xF6538 = xF6536;
        xF6539 = xF6538;
        T28 = (P)YPiGG(xF6539,(P)2);
        xF6540 = yF6537;
        xF6541 = xF6540;
        T29 = (P)YPiGG(xF6541,(P)2);
        T27 = (P)YPiA(T28,T29);
        xF6542 = T27;
        xF6543 = xF6542;
        tF6544 = (P)1;
        T26 = (P)YPiLL(xF6543,(P)2);
        T25 = (P)YPiv(T26,tF6544);
        T24 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,YPfalse,mets_,sorted_mets_,T25,args_);
        valF6545 = T24;
        T23 = key_;
        T22 = CALL3(1,VARREF(YgooSfunYOcache_add),assocsF6522,T23,valF6545);
        T21 = CALL2(1,all_assocs_setter_,T22,cacheF6521);
        T7 = T21;
      }
      T1 = T7;
    } else {
      xF6546 = assocsF6522;
      iF6547 = jF6523;
      xF6548 = iF6547;
      xF6549 = xF6548;
      T34 = (P)YPiGG(xF6549,(P)2);
      T33 = (P)YPtelt(xF6546,T34);
      xF6550 = T33;
      T35 = key_;
      yF6551 = T35;
      T32 = (P)YPeqQ(xF6550,yF6551);
      T31 = (P)YPbb(T32);
      if (T32) {
        xF6561 = assocsF6522;
        xF6552 = jF6523;
        yF6553 = YPint((P)1);
        xF6554 = xF6552;
        xF6555 = xF6554;
        T47 = (P)YPiGG(xF6555,(P)2);
        xF6556 = yF6553;
        xF6557 = xF6556;
        T48 = (P)YPiGG(xF6557,(P)2);
        T46 = (P)YPiA(T47,T48);
        xF6558 = T46;
        xF6559 = xF6558;
        tF6560 = (P)1;
        T45 = (P)YPiLL(xF6559,(P)2);
        T44 = (P)YPiv(T45,tF6560);
        iF6562 = T44;
        xF6563 = iF6562;
        xF6564 = xF6563;
        T43 = (P)YPiGG(xF6564,(P)2);
        T42 = (P)YPtelt(xF6561,T43);
        vF6565 = T42;
        xF6566 = i_;
        yF6567 = YPint((P)1);
        xF6568 = xF6566;
        xF6569 = xF6568;
        T40 = (P)YPiGG(xF6569,(P)2);
        xF6570 = yF6567;
        xF6571 = xF6570;
        T41 = (P)YPiGG(xF6571,(P)2);
        T39 = (P)YPiA(T40,T41);
        xF6572 = T39;
        xF6573 = xF6572;
        tF6574 = (P)1;
        T38 = (P)YPiLL(xF6573,(P)2);
        T37 = (P)YPiv(T38,tF6574);
        T36 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,vF6565,mets_,sorted_mets_,T37,args_);
        T30 = T36;
      } else {
        xF6575 = jF6523;
        yF6576 = YPint((P)2);
        xF6577 = xF6575;
        xF6578 = xF6577;
        T53 = (P)YPiGG(xF6578,(P)2);
        xF6579 = yF6576;
        xF6580 = xF6579;
        T54 = (P)YPiGG(xF6580,(P)2);
        T52 = (P)YPiA(T53,T54);
        xF6581 = T52;
        xF6582 = xF6581;
        tF6583 = (P)1;
        T51 = (P)YPiLL(xF6582,(P)2);
        T50 = (P)YPiv(T51,tF6583);
        a289_0 = T50;
        jF6523 = a289_0;
        goto LOOP_289;
        T30 = T49;
      }
      T1 = T30;
    }
  }
UNLINK_STACK();
  QRET(cacheF6521);
}

FUNCODEDEF(YgooSfunYOspecd_args) {
  P args_,i_,arg_;
  P tF6620;
  P xF6619;
  P xF6618;
  P xF6617;
  P xF6616;
  P xF6615;
  P xF6614;
  P yF6613;
  P xF6612;
  P xF6611;
  P xF6610;
  P xF6609;
  P iF6608;
  P xF6607;
  P zF6606;
  P xF6605;
  P xF6604;
  P xF6603;
  P iF6602;
  P xF6601;
  P yF6600;
  P xF6599;
  P yF6598;
  P xF6597;
  P xF6596;
  P xF6595;
  P kF6594;
  P rF6593;
  P tF6592;
  P xF6591;
  P xF6590;
  P xF6589;
  P vF6588;
  P xF6587;
  P xF6586;
  P xF6585;
  P xF6584;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(args_, 0);
  ARG(i_, 1);
  ARG(arg_, 2);
  xF6584 = args_;
  xF6585 = xF6584;
  T30 = (P)YPprop_elt(xF6585,(P)1);
  xF6586 = T30;
  xF6587 = xF6586;
  T29 = (P)YPiGG(xF6587,(P)2);
  T28 = (P)YPtup(T29,VARREF(Ynul));
  vF6588 = T28;
  T24 = (P)YPtlen(vF6588);
  T23 = (P)YPprop_dat_at(vF6588,T24);
  xF6589 = T23;
  T22 = (P)YPtag_into(xF6589,(P)3);
  T27 = (P)YPtlen(vF6588);
  xF6590 = T27;
  xF6591 = xF6590;
  tF6592 = (P)1;
  T26 = (P)YPiLL(xF6591,(P)2);
  T25 = (P)YPiv(T26,tF6592);
  T21 = (P)YPopts_tup(T22,T25,vF6588);
  rF6593 = T21;
  kF6594 = YPint((P)0);
  LOOP_290: {
    P a290_0;
    xF6595 = args_;
    xF6596 = xF6595;
    T3 = (P)YPprop_elt(xF6596,(P)1);
    xF6597 = T3;
    yF6598 = kF6594;
    T2 = (P)YPeqQ(xF6597,yF6598);
    T1 = (P)YPbb(T2);
    if (T2) {
      T0 = rF6593;
    } else {
      xF6599 = kF6594;
      yF6600 = i_;
      T10 = (P)YPeqQ(xF6599,yF6600);
      T9 = (P)YPbb(T10);
      if (T10) {
        T8 = arg_;
      } else {
        xF6601 = args_;
        iF6602 = kF6594;
        xF6603 = xF6601;
        T12 = (P)YPprop_elt(xF6603,(P)0);
        xF6604 = iF6602;
        xF6605 = xF6604;
        T14 = (P)YPiGG(xF6605,(P)2);
        T13 = (P)YPi_((P)0,T14);
        T11 = (P)YPloc_off(T12,T13);
        T8 = T11;
      }
      zF6606 = T8;
      xF6607 = rF6593;
      iF6608 = kF6594;
      xF6609 = xF6607;
      T5 = (P)YPprop_elt(xF6609,(P)0);
      xF6610 = iF6608;
      xF6611 = xF6610;
      T7 = (P)YPiGG(xF6611,(P)2);
      T6 = (P)YPi_((P)0,T7);
      T4 = (P)YPloc_off_setter(zF6606,T5,T6);
      xF6612 = kF6594;
      yF6613 = YPint((P)1);
      xF6614 = xF6612;
      xF6615 = xF6614;
      T19 = (P)YPiGG(xF6615,(P)2);
      xF6616 = yF6613;
      xF6617 = xF6616;
      T20 = (P)YPiGG(xF6617,(P)2);
      T18 = (P)YPiA(T19,T20);
      xF6618 = T18;
      xF6619 = xF6618;
      tF6620 = (P)1;
      T17 = (P)YPiLL(xF6619,(P)2);
      T16 = (P)YPiv(T17,tF6620);
      a290_0 = T16;
      kF6594 = a290_0;
      goto LOOP_290;
      T0 = T15;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYrequires_singleton_prec) {
  P mets_,pos_;
  P xF6622;
  P xF6621;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mets_, 0);
  ARG(pos_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYOmets_subclasses_at),mets_,pos_);
  xF6621 = T3;
  xF6622 = xF6621;
  T2 = (P)YPeqQ(xF6622,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYensure_singleton_cache) {
  P gen_,cache_,mets_,sorted_mets_,i_,args_;
  P xF6640;
  P xF6639;
  P app_metsF6638;
  P smetsF6637;
  P argsF6636;
  P argF6635;
  P xF6634;
  P singF6633;
  P xF6632;
  P xF6631;
  P xF6630;
  P xF6629;
  P singletonsF6628;
  P cacheF6627;
  P xF6626;
  P xF6625;
  P singletonsF6624;
  P tmpF6623;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(gen_, 0);
  ARG(cache_, 1);
  ARG(mets_, 2);
  ARG(sorted_mets_, 3);
  ARG(i_, 4);
  ARG(args_, 5);
  tmpF6623 = cache_;
  if (tmpF6623 != YPfalse) {
    T0 = tmpF6623;
  } else {
    T2 = CALL2(1,VARREF(YgooSfunYrequires_singleton_prec),mets_,i_);
    if (T2 != YPfalse) {
      T3 = (P)YPgen_cache(YPfalse,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
      T1 = T3;
    } else {
      T18 = CALL2(1,VARREF(YgooSfunYOmets_singletons_at),mets_,i_);
      singletonsF6624 = T18;
      xF6625 = singletonsF6624;
      xF6626 = xF6625;
      T6 = (P)YPeqQ(xF6626,VARREF(Ynil));
      T5 = (P)YPbb(T6);
      if (T6) {
        T4 = YPfalse;
      } else {
        T17 = (P)YPgen_cache(YPtrue,i_,VARREF(YgooSfunYDnul_assocs),VARREF(YgooSfunYDnul_assocs),(P)0);
        cacheF6627 = T17;
        singletonsF6628 = singletonsF6624;
        LOOP_291: {
          P a291_0;
          xF6629 = singletonsF6628;
          xF6630 = xF6629;
          T9 = (P)YPeqQ(xF6630,VARREF(Ynil));
          T8 = (P)YPbb(T9);
          if (T9) {
            T7 = cacheF6627;
          } else {
            xF6631 = singletonsF6628;
            xF6632 = xF6631;
            T16 = (P)YPprop_elt(xF6632,(P)0);
            singF6633 = T16;
            xF6634 = singF6633;
            T15 = (P)YPprop_elt(xF6634,(P)0);
            argF6635 = T15;
            T14 = CALL3(1,VARREF(YgooSfunYOspecd_args),args_,i_,argF6635);
            argsF6636 = T14;
            T13 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,argsF6636);
            smetsF6637 = T13;
            T12 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,singF6633,i_);
            app_metsF6638 = T12;
            CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF6635,argF6635,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF6627,mets_,smetsF6637,i_,argsF6636);
            xF6639 = singletonsF6628;
            xF6640 = xF6639;
            T11 = (P)YPprop_elt(xF6640,(P)1);
            a291_0 = T11;
            singletonsF6628 = a291_0;
            goto LOOP_291;
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
  P app_metsF6682;
  P classF6681;
  P tagF6680;
  P xF6679;
  P xF6678;
  P metsF6677;
  P xF6676;
  P tmpF6675;
  P yF6674;
  P xF6673;
  P singQF6672;
  P xF6671;
  P xF6670;
  P cacheF6669;
  P argF6668;
  P xF6667;
  P xF6666;
  P xF6665;
  P iF6664;
  P xF6663;
  P tF6662;
  P xF6661;
  P xF6660;
  P xF6659;
  P xF6658;
  P xF6657;
  P xF6656;
  P yF6655;
  P xF6654;
  P tmpF6653;
  P xF6652;
  P xF6651;
  P xF6650;
  P xF6649;
  P yF6648;
  P xF6647;
  P xF6646;
  P tmpF6645;
  P xF6644;
  P xF6643;
  P yF6642;
  P xF6641;
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
  xF6641 = i_;
  T3 = CALL1(1,VARREF(YgooSfunYOfun_arity),gen_);
  yF6642 = T3;
  T2 = (P)YPiE(xF6641,yF6642);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF6643 = sorted_mets_;
    xF6644 = xF6643;
    T6 = (P)YPprop_elt(xF6644,(P)0);
    T5 = CALL3(1,VARREF(YgooSfunYmethod_accessor_offset),gen_,T6,args_);
    tmpF6645 = T5;
    if (tmpF6645 != YPfalse) {
      T4 = tmpF6645;
    } else {
      T4 = sorted_mets_;
    }
    T0 = T4;
  } else {
    if (ocache_ != YPfalse) {
      xF6647 = i_;
      xF6646 = ocache_;
      T15 = (P)YPprop_elt(xF6646,(P)1);
      yF6648 = T15;
      xF6649 = xF6647;
      xF6650 = xF6649;
      T13 = (P)YPiGG(xF6650,(P)2);
      xF6651 = yF6648;
      xF6652 = xF6651;
      T14 = (P)YPiGG(xF6652,(P)2);
      T12 = (P)YPiL(T13,T14);
      T11 = (P)YPbb(T12);
      T10 = T11;
    } else {
      T10 = YPfalse;
    }
    tmpF6653 = T10;
    if (tmpF6653 != YPfalse) {
      T8 = tmpF6653;
    } else {
      T9 = CALL2(1,VARREF(YgooSfunYOmets_unspecialized_atQ),mets_,i_);
      T8 = T9;
    }
    if (T8 != YPfalse) {
      xF6654 = i_;
      yF6655 = YPint((P)1);
      xF6656 = xF6654;
      xF6657 = xF6656;
      T20 = (P)YPiGG(xF6657,(P)2);
      xF6658 = yF6655;
      xF6659 = xF6658;
      T21 = (P)YPiGG(xF6659,(P)2);
      T19 = (P)YPiA(T20,T21);
      xF6660 = T19;
      xF6661 = xF6660;
      tF6662 = (P)1;
      T18 = (P)YPiLL(xF6661,(P)2);
      T17 = (P)YPiv(T18,tF6662);
      T16 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,ocache_,mets_,sorted_mets_,T17,args_);
      T7 = T16;
    } else {
      xF6663 = args_;
      iF6664 = i_;
      xF6665 = xF6663;
      T47 = (P)YPprop_elt(xF6665,(P)0);
      xF6666 = iF6664;
      xF6667 = xF6666;
      T49 = (P)YPiGG(xF6667,(P)2);
      T48 = (P)YPi_((P)0,T49);
      T46 = (P)YPloc_off(T47,T48);
      argF6668 = T46;
      T45 = CALLN(1,VARREF(YgooSfunYensure_singleton_cache),6,gen_,ocache_,mets_,sorted_mets_,i_,args_);
      cacheF6669 = T45;
      xF6670 = sorted_mets_;
      xF6671 = xF6670;
      T44 = (P)YPprop_elt(xF6671,(P)0);
      T43 = CALL2(1,VARREF(YgooSfunYfun_spec),T44,i_);
      T42 = CALL1(1,VARREF(YgooSfunYOsingleton_specQ),T43);
      singQF6672 = T42;
      if (singQF6672 != YPfalse) {
        xF6673 = ocache_;
        yF6674 = cacheF6669;
        T29 = (P)YPeqQ(xF6673,yF6674);
        T28 = (P)YPbb(T29);
        T27 = T28;
      } else {
        T27 = YPfalse;
      }
      tmpF6675 = T27;
      if (tmpF6675 != YPfalse) {
        T23 = tmpF6675;
      } else {
        if (cacheF6669 != YPfalse) {
          xF6676 = cacheF6669;
          T26 = (P)YPprop_elt(xF6676,(P)0);
          T25 = CALL1(1,VARREF(Ynot),T26);
          T24 = T25;
        } else {
          T24 = YPfalse;
        }
        T23 = T24;
      }
      if (T23 != YPfalse) {
        T32 = (P)YPsingleton(argF6668);
        T31 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,T32,i_);
        metsF6677 = T31;
        T30 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,argF6668,argF6668,VARREF(YgooSfunYOgen_cache_singletons),VARREF(YgooSfunYOgen_cache_singletons_setter),gen_,cacheF6669,metsF6677,sorted_mets_,i_,args_);
        T22 = T30;
      } else {
        if (singQF6672 != YPfalse) {
          T33 = cacheF6669;
        } else {
          xF6678 = argF6668;
          xF6679 = xF6678;
          T41 = (P)YPiB(xF6679,(P)3);
          tagF6680 = T41;
          T38 = (P)YPiE(tagF6680,(P)0);
          T37 = (P)YPbb(T38);
          if (T38) {
            T39 = (P)YPobject_class(xF6678);
            T36 = T39;
          } else {
            T40 = (P)YPelt(VARREF(YDdirect_object_class),tagF6680);
            T36 = T40;
          }
          classF6681 = T36;
          T35 = CALL3(1,VARREF(YgooSfunYOprune_mets_by_type_at),mets_,classF6681,i_);
          app_metsF6682 = T35;
          T34 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1_using),10,classF6681,argF6668,VARREF(YgooSfunYOgen_cache_classes),VARREF(YgooSfunYOgen_cache_classes_setter),gen_,cacheF6669,app_metsF6682,sorted_mets_,i_,args_);
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
  P xF6685;
  P xF6684;
  P metsF6683;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T3 = CALL2(1,VARREF(YgooSfunYchoose_methods),gen_,args_);
  metsF6683 = T3;
  xF6684 = gen_;
  T1 = (P)YPprop_elt(xF6684,(P)4);
  xF6685 = gen_;
  T2 = (P)YPprop_elt(xF6685,(P)3);
  T0 = CALLN(1,VARREF(YgooSfunYgen_lookup_miss_1),6,gen_,T1,T2,metsF6683,YPint((P)0),args_);
UNLINK_STACK();
  QRET(T0);
}

INLINE P YgooSfunYprop_value_at(P object_,P offset_) {
  P xF6694;
  P xF6693;
  P xF6692;
  P propsF6691;
  P yF6690;
  P xF6689;
  P valF6688;
  P xF6687;
  P xF6686;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF6686 = offset_;
  xF6687 = xF6686;
  T10 = (P)YPiGG(xF6687,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF6688 = T9;
  xF6689 = valF6688;
  yF6690 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF6689,yF6690);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF6691 = T8;
    T6 = XCALL2(1,VARREF(YOelt),propsF6691,offset_);
    xF6692 = T6;
    T5 = (P)YPprop_elt(xF6692,(P)4);
    T4 = XCALL1(1,T5,object_);
    xF6693 = offset_;
    xF6694 = xF6693;
    T7 = (P)YPiGG(xF6694,(P)2);
    T3 = (P)YPprop_elt_setter(T4,object_,T7);
    T0 = T3;
  } else {
    T0 = valF6688;
  }
  return T0;
}

P YgooSfunYprop_bound_atQ(P object_,P offset_) {
  P yF6703;
  P xF6702;
  P xF6701;
  P propsF6700;
  P yF6699;
  P xF6698;
  P valF6697;
  P xF6696;
  P xF6695;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
DEFCREGS();
  xF6695 = offset_;
  xF6696 = xF6695;
  T10 = (P)YPiGG(xF6696,(P)2);
  T9 = (P)YPprop_elt(object_,T10);
  valF6697 = T9;
  xF6698 = valF6697;
  yF6699 = VARREF(Ynul_prop);
  T2 = (P)YPeqQ(xF6698,yF6699);
  T1 = (P)YPbb(T2);
  if (T2) {
    T8 = XCALL1(1,VARREF(Yobject_props),object_);
    propsF6700 = T8;
    T7 = XCALL2(1,VARREF(YOelt),propsF6700,offset_);
    xF6701 = T7;
    T6 = (P)YPprop_elt(xF6701,(P)4);
    xF6702 = T6;
    yF6703 = VARREF(YPprop_unbound_error);
    T5 = (P)YPeqQ(xF6702,yF6703);
    T4 = (P)YPbb(T5);
    T3 = XCALL1(1,VARREF(Ynot),T4);
    T0 = T3;
  } else {
    T0 = YPtrue;
  }
  return T0;
}

INLINE P YgooSfunYprop_value_at_setter(P z_,P object_,P offset_) {
  P xF6705;
  P xF6704;
  P T0,T1;
DEFCREGS();
  xF6704 = offset_;
  xF6705 = xF6704;
  T1 = (P)YPiGG(xF6705,(P)2);
  T0 = (P)YPprop_elt_setter(z_,object_,T1);
  return T0;
}

INLINE P YgooSfunYgen_lookup(P gen_,P args_) {
  P tmpF6707;
  P xF6706;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF6706 = gen_;
  T4 = (P)YPprop_elt(xF6706,(P)4);
  tmpF6707 = T4;
  if (tmpF6707 != YPfalse) {
    T1 = tmpF6707;
  } else {
    T3 = XCALL2(1,VARREF(YgooSfunYgen_lookup_miss),gen_,args_);
    T2 = (P)YPfun_cache_setter(T3,gen_);
    T1 = T2;
  }
  T0 = (P)YgooSfunYgen_lookup_1(gen_,T1,args_);
  return T0;
}

INLINE P YgooSfunYgen_lookup_1_using(P key_,P i_,P len_,P assocs_,P missableQ_,P gen_,P args_) {
  P yF6710;
  P xF6709;
  P iF6708;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
DEFCREGS();
  iF6708 = i_;
  LOOP_292: {
    P a292_0;
    T2 = (P)YPiE(iF6708,len_);
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
      T9 = (P)YPtelt(assocs_,iF6708);
      xF6709 = T9;
      yF6710 = key_;
      T8 = (P)YPeqQ(xF6709,yF6710);
      T7 = (P)YPbb(T8);
      if (T8) {
        T12 = (P)YPiA(iF6708,(P)1);
        T11 = (P)YPtelt(assocs_,T12);
        T10 = (P)YgooSfunYgen_lookup_1(gen_,T11,args_);
        T6 = T10;
      } else {
        T14 = (P)YPiA(iF6708,(P)2);
        a292_0 = T14;
        iF6708 = a292_0;
        goto LOOP_292;
        T6 = T13;
      }
      T0 = T6;
    }
  }
  return T0;
}

INLINE P YgooSfunYgen_lookup_1i(P gen_,P cache_,P args_) {
  P tagF6733;
  P xF6732;
  P xF6731;
  P assocsF6730;
  P xF6729;
  P yF6728;
  P xF6727;
  P valF6726;
  P xF6725;
  P assocsF6724;
  P xF6723;
  P argF6722;
  P xF6721;
  P xF6720;
  P xF6719;
  P iF6718;
  P xF6717;
  P xF6716;
  P yF6715;
  P xF6714;
  P tagF6713;
  P xF6712;
  P xF6711;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
DEFCREGS();
  xF6711 = cache_;
  xF6712 = xF6711;
  T8 = (P)YPiB(xF6712,(P)3);
  tagF6713 = T8;
  T5 = (P)YPiE(tagF6713,(P)0);
  T4 = (P)YPbb(T5);
  if (T5) {
    T6 = (P)YPobject_class(xF6711);
    T3 = T6;
  } else {
    T7 = (P)YPelt(VARREF(YDdirect_object_class),tagF6713);
    T3 = T7;
  }
  xF6714 = T3;
  yF6715 = VARREF(YLgen_cacheG);
  T2 = (P)YPeqQ(xF6714,yF6715);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF6717 = args_;
    xF6716 = cache_;
    T29 = (P)YPprop_elt(xF6716,(P)1);
    iF6718 = T29;
    xF6719 = xF6717;
    T26 = (P)YPprop_elt(xF6719,(P)0);
    xF6720 = iF6718;
    xF6721 = xF6720;
    T28 = (P)YPiGG(xF6721,(P)2);
    T27 = (P)YPi_((P)0,T28);
    T25 = (P)YPloc_off(T26,T27);
    argF6722 = T25;
    xF6723 = cache_;
    T24 = (P)YPprop_elt(xF6723,(P)2);
    assocsF6724 = T24;
    T22 = (P)YPtlen(assocsF6724);
    xF6725 = cache_;
    T23 = (P)YPprop_elt(xF6725,(P)0);
    T21 = (P)YgooSfunYgen_lookup_1_using(argF6722,(P)0,T22,assocsF6724,T23,gen_,args_);
    valF6726 = T21;
    xF6727 = valF6726;
    yF6728 = VARREF(YgooSfunYDmissed_dispatch);
    T11 = (P)YPeqQ(xF6727,yF6728);
    T10 = (P)YPbb(T11);
    if (T11) {
      xF6729 = cache_;
      T20 = (P)YPprop_elt(xF6729,(P)3);
      assocsF6730 = T20;
      xF6731 = argF6722;
      xF6732 = xF6731;
      T18 = (P)YPiB(xF6732,(P)3);
      tagF6733 = T18;
      T15 = (P)YPiE(tagF6733,(P)0);
      T14 = (P)YPbb(T15);
      if (T15) {
        T16 = (P)YPobject_class(xF6731);
        T13 = T16;
      } else {
        T17 = (P)YPelt(VARREF(YDdirect_object_class),tagF6733);
        T13 = T17;
      }
      T19 = (P)YPtlen(assocsF6730);
      T12 = (P)YgooSfunYgen_lookup_1_using(T13,(P)0,T19,assocsF6730,YPfalse,gen_,args_);
      T9 = T12;
    } else {
      T9 = valF6726;
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
  P xF6746;
  P xF6745;
  P ambiguous_metsF6744;
  P xF6743;
  P xF6742;
  P iF6741;
  P xF6740;
  P sorted_metsF6739;
  P xF6738;
  P xF6737;
  P iF6736;
  P xF6735;
  P ord_amb_metsF6734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T8 = CALL2(1,VARREF(YgooSfunYord_app_metsT),gen_,args_);
  ord_amb_metsF6734 = T8;
  xF6735 = ord_amb_metsF6734;
  iF6736 = YPint((P)0);
  xF6737 = iF6736;
  xF6738 = xF6737;
  T7 = (P)YPiGG(xF6738,(P)2);
  T6 = (P)YPtelt(xF6735,T7);
  sorted_metsF6739 = T6;
  xF6740 = ord_amb_metsF6734;
  iF6741 = YPint((P)1);
  xF6742 = iF6741;
  xF6743 = xF6742;
  T5 = (P)YPiGG(xF6743,(P)2);
  T4 = (P)YPtelt(xF6740,T5);
  ambiguous_metsF6744 = T4;
  xF6745 = sorted_metsF6739;
  xF6746 = xF6745;
  T2 = (P)YPeqQ(xF6746,VARREF(Ynil));
  T1 = (P)YPbb(T2);
  if (T2) {
    T3 = CALL2(1,VARREF(Yno_applicable_methods_error),gen_,args_);
    T0 = T3;
  } else {
    T0 = sorted_metsF6739;
  }
UNLINK_STACK();
  RET(T0);
}

INLINE P YgooSfunYgen_lookup_i(P gen_,P args_) {
  P tmpF6748;
  P xF6747;
  P T0,T1,T2,T3,T4;
DEFCREGS();
  xF6747 = gen_;
  T4 = (P)YPprop_elt(xF6747,(P)4);
  tmpF6748 = T4;
  if (tmpF6748 != YPfalse) {
    T1 = tmpF6748;
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
  P xF6773;
  P xF6772;
  P resF6771;
  P xF6770;
  P xF6769;
  P xF6768;
  P iF6767;
  P xF6766;
  P xF6765;
  P xF6764;
  P xF6763;
  P iF6762;
  P xF6761;
  P xF6760;
  P xF6759;
  P xF6758;
  P iF6757;
  P xF6756;
  P yF6755;
  P xF6754;
  P xF6753;
  P xF6752;
  P xF6751;
  P xF6750;
  P resultF6749;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  NARGS(args_, 0);
  T26 = (P)YPfun_reg();
  T25 = (P)YgooSfunYgen_lookup_i(T26,args_);
  resultF6749 = T25;
  xF6750 = resultF6749;
  xF6751 = xF6750;
  T3 = (P)YPiB(xF6751,(P)3);
  T2 = (P)YPiE(T3,(P)1);
  T1 = (P)YPbb(T2);
  if (T2) {
    xF6752 = args_;
    xF6753 = xF6752;
    T7 = (P)YPprop_elt(xF6753,(P)1);
    xF6754 = T7;
    yF6755 = YPint((P)1);
    T6 = (P)YPiE(xF6754,yF6755);
    T5 = (P)YPbb(T6);
    if (T6) {
      xF6756 = args_;
      iF6757 = YPint((P)0);
      xF6758 = xF6756;
      T10 = (P)YPprop_elt(xF6758,(P)0);
      xF6759 = iF6757;
      xF6760 = xF6759;
      T12 = (P)YPiGG(xF6760,(P)2);
      T11 = (P)YPi_((P)0,T12);
      T9 = (P)YPloc_off(T10,T11);
      T8 = (P)YgooSfunYprop_value_at(T9,resultF6749);
      T4 = T8;
    } else {
      xF6761 = args_;
      iF6762 = YPint((P)0);
      xF6763 = xF6761;
      T15 = (P)YPprop_elt(xF6763,(P)0);
      xF6764 = iF6762;
      xF6765 = xF6764;
      T17 = (P)YPiGG(xF6765,(P)2);
      T16 = (P)YPi_((P)0,T17);
      T14 = (P)YPloc_off(T15,T16);
      xF6766 = args_;
      iF6767 = YPint((P)1);
      xF6768 = xF6766;
      T19 = (P)YPprop_elt(xF6768,(P)0);
      xF6769 = iF6767;
      xF6770 = xF6769;
      T21 = (P)YPiGG(xF6770,(P)2);
      T20 = (P)YPi_((P)0,T21);
      T18 = (P)YPloc_off(T19,T20);
      T13 = (P)YgooSfunYprop_value_at_setter(T14,T18,resultF6749);
      T4 = T13;
    }
    resF6771 = T4;
    (P)YPunlink_stack();
    T0 = resF6771;
  } else {
    xF6772 = resultF6749;
    T23 = (P)YPprop_elt(xF6772,(P)0);
    xF6773 = resultF6749;
    T24 = (P)YPprop_elt(xF6773,(P)1);
    T22 = (P)YPraw_met_call(T23,T24);
    T0 = T22;
  }
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_names) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL1(1,VARREF(Ysig_names),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYfun_names_setter) {
  P z_,x_;
  P T0,T1;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(Yfun_sig),x_);
  T0 = CALL2(1,VARREF(Ysig_names_setter),z_,T1);
UNLINK_STACK();
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

FUNCODEDEF(YgooSfunYfab_gen) {
  P name_,names_,specs_,naryQ_,val_,mets_;
  P xF6775;
  P gF6774;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(val_, 4);
  ARG(mets_, 5);
  T3 = (P)YOlen(specs_);
  T2 = CALLN(1,VARREF(YOnew),11,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),specs_,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),T3,VARREF(Ysig_val),val_);
  T1 = CALLN(1,VARREF(YOnew),7,VARREF(YLgenG),VARREF(Yfun_name),name_,VARREF(Yfun_sig),T2,VARREF(Yfun_mets),mets_);
  gF6774 = T1;
  xF6775 = VARREF(YPdispatch);
  T0 = (P)YPprop_elt(xF6775,(P)0);
  (P)YPgen_code_setter(T0,gF6774);
UNLINK_STACK();
  RET(gF6774);
}

FUNCODEDEF(fun_80) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(VARREF(YLanyG));
}

FUNCODEDEF(YgooSfunYgen_from_met) {
  P x_;
  P specsF6776;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T4 = fun_80;
  T5 = CALL1(1,VARREF(YgooSfunYOfun_specs),x_);
  T3 = CALL2(1,VARREF(YOmap),T4,T5);
  specsF6776 = T3;
  T1 = CALL1(1,VARREF(Yfun_name),x_);
  T2 = CALL1(1,VARREF(YgooSfunYOfun_naryQ),x_);
  T0 = CALLN(1,VARREF(YgooSfunYfab_gen),6,T1,Ynil,specsF6776,T2,VARREF(YLanyG),Ynil);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSfunYPdefine_method) {
  P gen_,met_;
  P tmpF6777;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  tmpF6777 = gen_;
  if (tmpF6777 != YPfalse) {
    T1 = tmpF6777;
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
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_names = YPmet(FUNCODEREF(YgooSfunYOfun_names),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(20));
  T1 = YgooSfunYOfun_names;
  VARSET(YgooSfunYOfun_names,T1);
  lit_2 = YPPsym((P)"@fun-specs");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_specs = YPmet(FUNCODEREF(YgooSfunYOfun_specs),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(22));
  T3 = YgooSfunYOfun_specs;
  VARSET(YgooSfunYOfun_specs,T3);
  lit_4 = YPPsym((P)"@fun-nary?");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSfunYOfun_naryQ = YPmet(FUNCODEREF(YgooSfunYOfun_naryQ),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(24));
  T5 = YgooSfunYOfun_naryQ;
  VARSET(YgooSfunYOfun_naryQ,T5);
  lit_6 = YPPsym((P)"@fun-arity");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  YgooSfunYOfun_arity = YPmet(FUNCODEREF(YgooSfunYOfun_arity),LITREF(lit_6),T6,ENVNUL,PNUL,sloc(26));
  T7 = YgooSfunYOfun_arity;
  VARSET(YgooSfunYOfun_arity,T7);
  lit_8 = YPPsym((P)"@fun-val");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_val = YPmet(FUNCODEREF(YgooSfunYOfun_val),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(28));
  T9 = YgooSfunYOfun_val;
  VARSET(YgooSfunYOfun_val,T9);
  lit_10 = YPPsym((P)"@fun-unification-vars");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_unification_vars = YPmet(FUNCODEREF(YgooSfunYOfun_unification_vars),LITREF(lit_10),T10,ENVNUL,PNUL,sloc(30));
  T11 = YgooSfunYOfun_unification_vars;
  VARSET(YgooSfunYOfun_unification_vars,T11);
  lit_12 = YPPsym((P)"@fun-mets");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSfunYOfun_mets = YPmet(FUNCODEREF(YgooSfunYOfun_mets),LITREF(lit_12),T12,ENVNUL,PNUL,sloc(32));
  T13 = YgooSfunYOfun_mets;
  VARSET(YgooSfunYOfun_mets,T13);
  lit_14 = YPPsym((P)"@fun-mets-setter");
  lit_15 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOfun_mets_setter = YPmet(FUNCODEREF(YgooSfunYOfun_mets_setter),LITREF(lit_14),T14,ENVNUL,PNUL,sloc(34));
  T15 = YgooSfunYOfun_mets_setter;
  VARSET(YgooSfunYOfun_mets_setter,T15);
  VARSET(YgooSfunYLenvG,VARREF(YLanyG));
  VARSET(YgooSfunYLspecsG,VARREF(YLlstG));
  VARSET(YgooSfunYLbodyG,VARREF(YLanyG));
  lit_16 = YPPsym((P)"fun-spec");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T16 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLmetG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_spec = YPmet(FUNCODEREF(YgooSfunYfun_spec),LITREF(lit_16),T16,ENVNUL,PNUL,sloc(40));
  T17 = YgooSfunYfun_spec;
  VARSET(YgooSfunYfun_spec,T17);
  VARSET(YgooSfunYLmetsG,VARREF(YLlstG));
  lit_18 = YPPsym((P)"fun-same-met?");
  lit_19 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T18 = YPsig(LITREF(lit_19),YPPlist(2,VARREF(YLmetG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_same_metQ = YPmet(FUNCODEREF(YgooSfunYfun_same_metQ),LITREF(lit_18),T18,ENVNUL,PNUL,sloc(45));
  T19 = YgooSfunYfun_same_metQ;
  VARSET(YgooSfunYfun_same_metQ,T19);
  lit_20 = YPPsym((P)"fun-congruent?");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T20 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYfun_congruentQ = YPmet(FUNCODEREF(YgooSfunYfun_congruentQ),LITREF(lit_20),T20,ENVNUL,PNUL,sloc(48));
  T21 = YgooSfunYfun_congruentQ;
  VARSET(YgooSfunYfun_congruentQ,T21);
  lit_22 = YPPsym((P)"gen-add-met");
  lit_23 = YPPlist(2,YPPsym((P)"g"),YPPsym((P)"m"));
  lit_24 = YPPlist(1,YPPsym((P)"return"));
  lit_25 = YPsb((P)"Replace %= with an empty generic congruent with %=");
  lit_26 = Ynil;
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"r"));
  T26 = YPsig(LITREF(lit_26),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T25,ENVNUL,PNUL,sloc(68));
  T24 = YPsig(LITREF(lit_26),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T24,ENVNUL,PNUL,sloc(70));
  T23 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T23,ENVNUL,PNUL,sloc(64));
  T22 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYgen_add_met = YPmet(FUNCODEREF(YgooSfunYgen_add_met),LITREF(lit_22),T22,ENVNUL,PNUL,sloc(57));
  T27 = YgooSfunYgen_add_met;
  VARSET(YgooSfunYgen_add_met,T27);
  lit_28 = YPPsym((P)"@class<");
  lit_29 = YPPlist(3,YPPsym((P)"c1"),YPPsym((P)"c2"),YPPsym((P)"wrt"));
  lit_30 = YPsb((P)"can't order specializers - arg/reference object %= is ");
  lit_31 = YPsb((P)"neither %= nor %=");
  T28 = YPsig(LITREF(lit_29),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  YgooSfunYOclassL = YPmet(FUNCODEREF(YgooSfunYOclassL),LITREF(lit_28),T28,ENVNUL,PNUL,sloc(99));
  T29 = YgooSfunYOclassL;
  VARSET(YgooSfunYOclassL,T29);
  lit_32 = YPPsym((P)"@order-specs-class");
  lit_33 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  lit_34 = YPPsym((P)"=");
  lit_35 = YPPsym((P)"<");
  lit_36 = YPPsym((P)">");
  T30 = YPsig(LITREF(lit_33),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs_class = YPmet(FUNCODEREF(YgooSfunYOorder_specs_class),LITREF(lit_32),T30,ENVNUL,PNUL,sloc(111));
  T31 = YgooSfunYOorder_specs_class;
  VARSET(YgooSfunYOorder_specs_class,T31);
  lit_37 = YPPsym((P)"@order-specs");
  lit_38 = YPPlist(3,YPPsym((P)"t1"),YPPsym((P)"t2"),YPPsym((P)"arg"));
  T32 = YPsig(LITREF(lit_38),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOorder_specs = YPmet(FUNCODEREF(YgooSfunYOorder_specs),LITREF(lit_37),T32,ENVNUL,PNUL,sloc(118));
  T33 = YgooSfunYOorder_specs;
  VARSET(YgooSfunYOorder_specs,T33);
  lit_39 = YPPsym((P)"order-mets");
  lit_40 = YPPlist(3,YPPsym((P)"m1"),YPPsym((P)"m2"),YPPsym((P)"args"));
  lit_41 = YPPsym((P)"<>");
  T34 = YPsig(LITREF(lit_40),YPPlist(3,VARREF(YLmetG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLsymG),Ynil);
  YgooSfunYorder_mets = YPmet(FUNCODEREF(YgooSfunYorder_mets),LITREF(lit_39),T34,ENVNUL,PNUL,sloc(123));
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
  T40 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_ambiguous_20 = YPmet(FUNCODEREF(fun_make_ambiguous_20),LITREF(lit_44),T40,ENVNUL,PNUL,sloc(148));
  T39 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_precedes_allQ_21 = YPmet(FUNCODEREF(fun_precedes_allQ_21),LITREF(lit_46),T39,ENVNUL,PNUL,sloc(157));
  T38 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_check_subsequent_ambiguities_22 = YPmet(FUNCODEREF(fun_check_subsequent_ambiguities_22),LITREF(lit_48),T38,ENVNUL,PNUL,sloc(164));
  T37 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_insert_23 = YPmet(FUNCODEREF(fun_insert_23),LITREF(lit_50),T37,ENVNUL,PNUL,sloc(169));
  T36 = YPsig(LITREF(lit_43),YPPlist(3,VARREF(YLlstG),VARREF(YLoptsG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_mets_1 = YPmet(FUNCODEREF(YgooSfunYord_app_mets_1),LITREF(lit_42),T36,ENVNUL,PNUL,sloc(140));
  T41 = YgooSfunYord_app_mets_1;
  VARSET(YgooSfunYord_app_mets_1,T41);
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T42,ENVNUL,PNUL,sloc(182));
  T43 = fun_25;
  VARSET(YgooSfunYmet_app_unify,T43);
  lit_53 = YPPsym((P)"met-app?");
  lit_54 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T44 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYmet_appQ = YPmet(FUNCODEREF(YgooSfunYmet_appQ),LITREF(lit_53),T44,ENVNUL,PNUL,sloc(184));
  T45 = YgooSfunYmet_appQ;
  VARSET(YgooSfunYmet_appQ,T45);
  lit_55 = YPPsym((P)"ord-app-mets*");
  lit_56 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T46 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLtupG),Ynil);
  YgooSfunYord_app_metsT = YPmet(FUNCODEREF(YgooSfunYord_app_metsT),LITREF(lit_55),T46,ENVNUL,PNUL,sloc(195));
  T47 = YgooSfunYord_app_metsT;
  VARSET(YgooSfunYord_app_metsT,T47);
  lit_57 = YPPsym((P)"ord-app-mets");
  lit_58 = YPPlist(2,YPPsym((P)"gf"),YPPsym((P)"args"));
  T49 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T48 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLgenG)),YPtrue,YPint((P)1),T49,Ynil);
  YgooSfunYord_app_mets = YPmet(FUNCODEREF(YgooSfunYord_app_mets),LITREF(lit_57),T48,ENVNUL,PNUL,sloc(206));
  T50 = YgooSfunYord_app_mets;
  VARSET(YgooSfunYord_app_mets,T50);
  lit_59 = YPPsym((P)"@gen-cache-arg-pos");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos = YPmet(FUNCODEREF(YgooSfunYOgen_cache_arg_pos),LITREF(lit_59),T51,ENVNUL,PNUL,sloc(217));
  T52 = YgooSfunYOgen_cache_arg_pos;
  VARSET(YgooSfunYOgen_cache_arg_pos,T52);
  lit_61 = YPPsym((P)"@gen-cache-arg-pos-setter");
  lit_62 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_62),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_arg_pos_setter = YPmet(FUNCODEREF(YgooSfunYOgen_cache_arg_pos_setter),LITREF(lit_61),T53,ENVNUL,PNUL,sloc(218));
  T54 = YgooSfunYOgen_cache_arg_pos_setter;
  VARSET(YgooSfunYOgen_cache_arg_pos_setter,T54);
  lit_63 = YPPsym((P)"@gen-cache-singletons");
  lit_64 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons = YPmet(FUNCODEREF(YgooSfunYOgen_cache_singletons),LITREF(lit_63),T55,ENVNUL,PNUL,sloc(219));
  T56 = YgooSfunYOgen_cache_singletons;
  VARSET(YgooSfunYOgen_cache_singletons,T56);
  lit_65 = YPPsym((P)"@gen-cache-singletons-setter");
  lit_66 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T57 = YPsig(LITREF(lit_66),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_singletons_setter = YPmet(FUNCODEREF(YgooSfunYOgen_cache_singletons_setter),LITREF(lit_65),T57,ENVNUL,PNUL,sloc(220));
  T58 = YgooSfunYOgen_cache_singletons_setter;
  VARSET(YgooSfunYOgen_cache_singletons_setter,T58);
  lit_67 = YPPsym((P)"@gen-cache-classes");
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes = YPmet(FUNCODEREF(YgooSfunYOgen_cache_classes),LITREF(lit_67),T59,ENVNUL,PNUL,sloc(221));
  T60 = YgooSfunYOgen_cache_classes;
  VARSET(YgooSfunYOgen_cache_classes,T60);
  lit_69 = YPPsym((P)"@gen-cache-classes-setter");
  lit_70 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T61 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYOgen_cache_classes_setter = YPmet(FUNCODEREF(YgooSfunYOgen_cache_classes_setter),LITREF(lit_69),T61,ENVNUL,PNUL,sloc(222));
  T62 = YgooSfunYOgen_cache_classes_setter;
  VARSET(YgooSfunYOgen_cache_classes_setter,T62);
  lit_71 = YPPsym((P)"method-accessor-offset");
  lit_72 = YPPlist(3,YPPsym((P)"gen"),YPPsym((P)"met"),YPPsym((P)"args"));
  T63 = YPsig(LITREF(lit_72),YPPlist(3,VARREF(YLgenG),VARREF(YLmetG),VARREF(YLoptsG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYmethod_accessor_offset = YPmet(FUNCODEREF(YgooSfunYmethod_accessor_offset),LITREF(lit_71),T63,ENVNUL,PNUL,sloc(226));
  T64 = YgooSfunYmethod_accessor_offset;
  VARSET(YgooSfunYmethod_accessor_offset,T64);
  lit_73 = YPPsym((P)"@singleton-spec?");
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T65 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsingleton_specQ = YPmet(FUNCODEREF(YgooSfunYOsingleton_specQ),LITREF(lit_73),T65,ENVNUL,PNUL,sloc(235));
  T66 = YgooSfunYOsingleton_specQ;
  VARSET(YgooSfunYOsingleton_specQ,T66);
  lit_75 = YPPsym((P)"@subclass-spec?");
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T67 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOsubclass_specQ = YPmet(FUNCODEREF(YgooSfunYOsubclass_specQ),LITREF(lit_75),T67,ENVNUL,PNUL,sloc(238));
  T68 = YgooSfunYOsubclass_specQ;
  VARSET(YgooSfunYOsubclass_specQ,T68);
  lit_77 = YPPsym((P)"@union-spec?");
  lit_78 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOunion_specQ = YPmet(FUNCODEREF(YgooSfunYOunion_specQ),LITREF(lit_77),T69,ENVNUL,PNUL,sloc(241));
  T70 = YgooSfunYOunion_specQ;
  VARSET(YgooSfunYOunion_specQ,T70);
  lit_79 = YPPsym((P)"@precise-spec?");
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T71 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYOprecise_specQ = YPmet(FUNCODEREF(YgooSfunYOprecise_specQ),LITREF(lit_79),T71,ENVNUL,PNUL,sloc(244));
  T72 = YgooSfunYOprecise_specQ;
  VARSET(YgooSfunYOprecise_specQ,T72);
  lit_81 = YPPsym((P)"@mets-unspecialized-at?");
  lit_82 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_83 = YPPlist(1,YPPsym((P)"met"));
  T74 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T74,ENVNUL,PNUL,sloc(249));
  T73 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSfunYOmets_unspecialized_atQ = YPmet(FUNCODEREF(YgooSfunYOmets_unspecialized_atQ),LITREF(lit_81),T73,ENVNUL,PNUL,sloc(248));
  T75 = YgooSfunYOmets_unspecialized_atQ;
  VARSET(YgooSfunYOmets_unspecialized_atQ,T75);
  lit_84 = YPPsym((P)"@prune-mets-by-type-at");
  lit_85 = YPPlist(3,YPPsym((P)"mets"),YPPsym((P)"type"),YPPsym((P)"pos"));
  lit_86 = YPPlist(1,YPPsym((P)"met"));
  T77 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T77,ENVNUL,PNUL,sloc(253));
  T76 = YPsig(LITREF(lit_85),YPPlist(3,VARREF(YLlstG),VARREF(YLtypeG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YgooSfunYLmetsG),Ynil);
  YgooSfunYOprune_mets_by_type_at = YPmet(FUNCODEREF(YgooSfunYOprune_mets_by_type_at),LITREF(lit_84),T76,ENVNUL,PNUL,sloc(251));
  T78 = YgooSfunYOprune_mets_by_type_at;
  VARSET(YgooSfunYOprune_mets_by_type_at,T78);
  lit_87 = YPPsym((P)"@mets-specs-at");
  lit_88 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_89 = YPPlist(1,YPPsym((P)"met"));
  T80 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T80,ENVNUL,PNUL,sloc(256));
  T79 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_specs_at = YPmet(FUNCODEREF(YgooSfunYOmets_specs_at),LITREF(lit_87),T79,ENVNUL,PNUL,sloc(255));
  T81 = YgooSfunYOmets_specs_at;
  VARSET(YgooSfunYOmets_specs_at,T81);
  lit_90 = YPPsym((P)"@mets-singletons-at");
  lit_91 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_92 = YPPlist(1,YPPsym((P)"spec"));
  T83 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T83,ENVNUL,PNUL,sloc(261));
  T82 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_singletons_at = YPmet(FUNCODEREF(YgooSfunYOmets_singletons_at),LITREF(lit_90),T82,ENVNUL,PNUL,sloc(260));
  T84 = YgooSfunYOmets_singletons_at;
  VARSET(YgooSfunYOmets_singletons_at,T84);
  lit_93 = YPPsym((P)"@mets-subclasses-at");
  lit_94 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  lit_95 = YPPlist(1,YPPsym((P)"spec"));
  T86 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T86,ENVNUL,PNUL,sloc(264));
  T85 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLlstG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYOmets_subclasses_at = YPmet(FUNCODEREF(YgooSfunYOmets_subclasses_at),LITREF(lit_93),T85,ENVNUL,PNUL,sloc(263));
  T87 = YgooSfunYOmets_subclasses_at;
  VARSET(YgooSfunYOmets_subclasses_at,T87);
  VARSET(YgooSfunYDnul_assocs,VARREF(YPtnul));
  lit_96 = YPPsym((P)"@cache-add");
  lit_97 = YPPlist(3,YPPsym((P)"t"),YPPsym((P)"k"),YPPsym((P)"v"));
  T88 = YPsig(LITREF(lit_97),YPPlist(3,VARREF(YLtupG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSfunYOcache_add = YPmet(FUNCODEREF(YgooSfunYOcache_add),LITREF(lit_96),T88,ENVNUL,PNUL,sloc(268));
  T89 = YgooSfunYOcache_add;
  VARSET(YgooSfunYOcache_add,T89);
  lit_98 = YPPsym((P)"gen-lookup-miss-1-using");
  lit_99 = YPPlist(10,YPPsym((P)"key"),YPPsym((P)"instance"),YPPsym((P)"all-assocs"),YPPsym((P)"all-assocs-setter"),YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T90 = YPsig(LITREF(lit_99),YPPlist(10,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)10),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1_using = YPmet(FUNCODEREF(YgooSfunYgen_lookup_miss_1_using),LITREF(lit_98),T90,ENVNUL,PNUL,sloc(281));
  T91 = YgooSfunYgen_lookup_miss_1_using;
  VARSET(YgooSfunYgen_lookup_miss_1_using,T91);
  lit_100 = YPPsym((P)"@specd-args");
  lit_101 = YPPlist(3,YPPsym((P)"args"),YPPsym((P)"i"),YPPsym((P)"arg"));
  T94 = YPsig(LITREF(lit_101),YPPlist(3,VARREF(YLoptsG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLoptsG),Ynil);
  T93 = YgooSfunYOspecd_args = YPmet(FUNCODEREF(YgooSfunYOspecd_args),LITREF(lit_100),T94,ENVNUL,PNUL,sloc(306));
  T96 = YgooSfunYOspecd_args;
  T95 = VARSET(YgooSfunYOspecd_args,T96);
  T92 = T95;
  return T92;
}

P YgooSfunY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
DEFCREGS();
  lit_102 = YPPsym((P)"requires-singleton-prec");
  lit_103 = YPPlist(2,YPPsym((P)"mets"),YPPsym((P)"pos"));
  T0 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYrequires_singleton_prec = YPmet(FUNCODEREF(YgooSfunYrequires_singleton_prec),LITREF(lit_102),T0,ENVNUL,PNUL,sloc(316));
  T1 = YgooSfunYrequires_singleton_prec;
  VARSET(YgooSfunYrequires_singleton_prec,T1);
  lit_104 = YPPsym((P)"ensure-singleton-cache");
  lit_105 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"cache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T2 = YPsig(LITREF(lit_105),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYensure_singleton_cache = YPmet(FUNCODEREF(YgooSfunYensure_singleton_cache),LITREF(lit_104),T2,ENVNUL,PNUL,sloc(331));
  T3 = YgooSfunYensure_singleton_cache;
  VARSET(YgooSfunYensure_singleton_cache,T3);
  lit_106 = YPPsym((P)"gen-lookup-miss-1");
  lit_107 = YPPlist(6,YPPsym((P)"gen"),YPPsym((P)"ocache"),YPPsym((P)"mets"),YPPsym((P)"sorted-mets"),YPPsym((P)"i"),YPPsym((P)"args"));
  T4 = YPsig(LITREF(lit_107),YPPlist(6,VARREF(YLgenG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLfixnumG),VARREF(YLoptsG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss_1 = YPmet(FUNCODEREF(YgooSfunYgen_lookup_miss_1),LITREF(lit_106),T4,ENVNUL,PNUL,sloc(354));
  T5 = YgooSfunYgen_lookup_miss_1;
  VARSET(YgooSfunYgen_lookup_miss_1,T5);
  lit_108 = YPPsym((P)"gen-lookup-miss");
  lit_109 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T6 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYgen_lookup_miss = YPmet(FUNCODEREF(YgooSfunYgen_lookup_miss),LITREF(lit_108),T6,ENVNUL,PNUL,sloc(378));
  T7 = YgooSfunYgen_lookup_miss;
  VARSET(YgooSfunYgen_lookup_miss,T7);
  T8 = (P)YPpair(VARREF(Ynil),VARREF(Ynil));
  VARSET(YgooSfunYDmissed_dispatch,T8);
  lit_110 = YPPsym((P)"choose-methods");
  lit_111 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T9 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  YgooSfunYchoose_methods = YPmet(FUNCODEREF(YgooSfunYchoose_methods),LITREF(lit_110),T9,ENVNUL,PNUL,sloc(454));
  T10 = YgooSfunYchoose_methods;
  VARSET(YgooSfunYchoose_methods,T10);
  lit_112 = YPPsym((P)"%dispatch");
  lit_113 = YPPlist(1,YPPsym((P)"args"));
  T11 = YPsig(LITREF(lit_113),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  YPdispatch = YPmet(FUNCODEREF(YPdispatch),LITREF(lit_112),T11,ENVNUL,PNUL,sloc(472));
  T12 = YPdispatch;
  VARSET(YPdispatch,T12);
  (P)YPpatch_early_generics();
  lit_114 = YPPsym((P)"fun-names");
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names = YPmet(FUNCODEREF(YgooSfunYfun_names),LITREF(lit_114),T13,ENVNUL,PNUL,sloc(495));
  T14 = YgooSfunYfun_names;
  VARSET(YgooSfunYfun_names,T14);
  lit_116 = YPPsym((P)"fun-names-setter");
  lit_117 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_names_setter = YPmet(FUNCODEREF(YgooSfunYfun_names_setter),LITREF(lit_116),T15,ENVNUL,PNUL,sloc(495));
  T16 = YgooSfunYfun_names_setter;
  VARSET(YgooSfunYfun_names_setter,T16);
  lit_118 = YPPsym((P)"fun-specs");
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs = YPmet(FUNCODEREF(YgooSfunYfun_specs),LITREF(lit_118),T17,ENVNUL,PNUL,sloc(496));
  T18 = YgooSfunYfun_specs;
  VARSET(YgooSfunYfun_specs,T18);
  lit_120 = YPPsym((P)"fun-specs-setter");
  lit_121 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T19 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_specs_setter = YPmet(FUNCODEREF(YgooSfunYfun_specs_setter),LITREF(lit_120),T19,ENVNUL,PNUL,sloc(496));
  T20 = YgooSfunYfun_specs_setter;
  VARSET(YgooSfunYfun_specs_setter,T20);
  lit_122 = YPPsym((P)"fun-nary?");
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ = YPmet(FUNCODEREF(YgooSfunYfun_naryQ),LITREF(lit_122),T21,ENVNUL,PNUL,sloc(497));
  T22 = YgooSfunYfun_naryQ;
  VARSET(YgooSfunYfun_naryQ,T22);
  lit_124 = YPPsym((P)"fun-nary?-setter");
  lit_125 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T23 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_naryQ_setter = YPmet(FUNCODEREF(YgooSfunYfun_naryQ_setter),LITREF(lit_124),T23,ENVNUL,PNUL,sloc(497));
  T24 = YgooSfunYfun_naryQ_setter;
  VARSET(YgooSfunYfun_naryQ_setter,T24);
  lit_126 = YPPsym((P)"fun-arity");
  lit_127 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_127),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity = YPmet(FUNCODEREF(YgooSfunYfun_arity),LITREF(lit_126),T25,ENVNUL,PNUL,sloc(498));
  T26 = YgooSfunYfun_arity;
  VARSET(YgooSfunYfun_arity,T26);
  lit_128 = YPPsym((P)"fun-arity-setter");
  lit_129 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T27 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_arity_setter = YPmet(FUNCODEREF(YgooSfunYfun_arity_setter),LITREF(lit_128),T27,ENVNUL,PNUL,sloc(498));
  T28 = YgooSfunYfun_arity_setter;
  VARSET(YgooSfunYfun_arity_setter,T28);
  lit_130 = YPPsym((P)"fun-val");
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val = YPmet(FUNCODEREF(YgooSfunYfun_val),LITREF(lit_130),T29,ENVNUL,PNUL,sloc(499));
  T30 = YgooSfunYfun_val;
  VARSET(YgooSfunYfun_val,T30);
  lit_132 = YPPsym((P)"fun-val-setter");
  lit_133 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T31 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_val_setter = YPmet(FUNCODEREF(YgooSfunYfun_val_setter),LITREF(lit_132),T31,ENVNUL,PNUL,sloc(499));
  T32 = YgooSfunYfun_val_setter;
  VARSET(YgooSfunYfun_val_setter,T32);
  lit_134 = YPPsym((P)"fun-unification-vars");
  lit_135 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars = YPmet(FUNCODEREF(YgooSfunYfun_unification_vars),LITREF(lit_134),T33,ENVNUL,PNUL,sloc(500));
  T34 = YgooSfunYfun_unification_vars;
  VARSET(YgooSfunYfun_unification_vars,T34);
  lit_136 = YPPsym((P)"fun-unification-vars-setter");
  lit_137 = YPPlist(2,YPPsym((P)"z"),YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_137),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYfun_unification_vars_setter = YPmet(FUNCODEREF(YgooSfunYfun_unification_vars_setter),LITREF(lit_136),T35,ENVNUL,PNUL,sloc(500));
  T36 = YgooSfunYfun_unification_vars_setter;
  VARSET(YgooSfunYfun_unification_vars_setter,T36);
  lit_138 = YPPsym((P)"fab-gen");
  lit_139 = YPPlist(6,YPPsym((P)"name"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"val"),YPPsym((P)"mets"));
  T37 = YPsig(LITREF(lit_139),YPPlist(6,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG),VARREF(YLlogG),VARREF(YLtypeG),VARREF(YLlstG)),YPfalse,YPint((P)6),VARREF(YLgenG),Ynil);
  YgooSfunYfab_gen = YPmet(FUNCODEREF(YgooSfunYfab_gen),LITREF(lit_138),T37,ENVNUL,PNUL,sloc(504));
  T38 = YgooSfunYfab_gen;
  VARSET(YgooSfunYfab_gen,T38);
  lit_140 = YPPsym((P)"gen-from-met");
  lit_141 = YPPlist(1,YPPsym((P)"x"));
  lit_142 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T40,ENVNUL,PNUL,sloc(519));
  T39 = YPsig(LITREF(lit_141),YPPlist(1,VARREF(YLmetG)),YPfalse,YPint((P)1),VARREF(YLgenG),Ynil);
  YgooSfunYgen_from_met = YPmet(FUNCODEREF(YgooSfunYgen_from_met),LITREF(lit_140),T39,ENVNUL,PNUL,sloc(518));
  T41 = YgooSfunYgen_from_met;
  VARSET(YgooSfunYgen_from_met,T41);
  lit_143 = YPPsym((P)"%define-method");
  lit_144 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T42 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLanyG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLgenG),Ynil);
  YgooSfunYPdefine_method = YPmet(FUNCODEREF(YgooSfunYPdefine_method),LITREF(lit_143),T42,ENVNUL,PNUL,sloc(524));
  T43 = YgooSfunYPdefine_method;
  VARSET(YgooSfunYPdefine_method,T43);
  T44 = YPfalse;
  return T44;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"@specd-args", CVAR, &YgooSfunYOspecd_args},
  {"method-accessor-offset", CVAR, &YgooSfunYmethod_accessor_offset},
  {"prop-bound-at?", PVAR, NULL},
  {"<replace-generic-restart>", CVAR, &YgooSfunYLreplace_generic_restartG},
  {"fun-unification-vars", CVAR, &YgooSfunYfun_unification_vars},
  {"@order-specs", CVAR, &YgooSfunYOorder_specs},
  {"@mets-singletons-at", CVAR, &YgooSfunYOmets_singletons_at},
  {"fun-same-met?", CVAR, &YgooSfunYfun_same_metQ},
  {"<body>", CVAR, &YgooSfunYLbodyG},
  {"@gen-cache-classes-setter", CVAR, &YgooSfunYOgen_cache_classes_setter},
  {"fun-val-setter", CVAR, &YgooSfunYfun_val_setter},
  {"choose-methods", CVAR, &YgooSfunYchoose_methods},
  {"@mets-specs-at", CVAR, &YgooSfunYOmets_specs_at},
  {"$missed-dispatch", CVAR, &YgooSfunYDmissed_dispatch},
  {"fun-spec", CVAR, &YgooSfunYfun_spec},
  {"gen-lookup-1-using", PVAR, NULL},
  {"@gen-cache-classes", CVAR, &YgooSfunYOgen_cache_classes},
  {"$nul-assocs", CVAR, &YgooSfunYDnul_assocs},
  {"<specs>", CVAR, &YgooSfunYLspecsG},
  {"handler-info-message", CVAR, &YgooSfunYhandler_info_message},
  {"gen-lookup-miss", CVAR, &YgooSfunYgen_lookup_miss},
  {"@fun-mets-setter", CVAR, &YgooSfunYOfun_mets_setter},
  {"when", PVAR, NULL},
  {"@order-specs-class", CVAR, &YgooSfunYOorder_specs_class},
  {"prop-value-at", PVAR, NULL},
  {"@gen-cache-singletons-setter", CVAR, &YgooSfunYOgen_cache_singletons_setter},
  {"fun-arity-setter", CVAR, &YgooSfunYfun_arity_setter},
  {"gen-lookup-i", PVAR, NULL},
  {"%define-method", CVAR, &YgooSfunYPdefine_method},
  {"prop-value-at-setter", PVAR, NULL},
  {"@fun-mets", CVAR, &YgooSfunYOfun_mets},
  {"---main-0---", PVAR, NULL},
  {"@prune-mets-by-type-at", CVAR, &YgooSfunYOprune_mets_by_type_at},
  {"ord-app-mets*", CVAR, &YgooSfunYord_app_metsT},
  {"@gen-cache-singletons", CVAR, &YgooSfunYOgen_cache_singletons},
  {"incongruent-method-error", CVAR, &YgooSfunYincongruent_method_error},
  {"@fun-unification-vars", CVAR, &YgooSfunYOfun_unification_vars},
  {"<mets>", CVAR, &YgooSfunYLmetsG},
  {"gen-from-met", CVAR, &YgooSfunYgen_from_met},
  {"@class<", CVAR, &YgooSfunYOclassL},
  {"met-app-unify", CVAR, &YgooSfunYmet_app_unify},
  {"@gen-cache-arg-pos-setter", CVAR, &YgooSfunYOgen_cache_arg_pos_setter},
  {"fun-nary?-setter", CVAR, &YgooSfunYfun_naryQ_setter},
  {"@fun-val", CVAR, &YgooSfunYOfun_val},
  {"gen-lookup-miss-1", CVAR, &YgooSfunYgen_lookup_miss_1},
  {"gen-lookup-miss-1-using", CVAR, &YgooSfunYgen_lookup_miss_1_using},
  {"@mets-unspecialized-at?", CVAR, &YgooSfunYOmets_unspecialized_atQ},
  {"or-set", PVAR, NULL},
  {"unless", PVAR, NULL},
  {"@gen-cache-arg-pos", CVAR, &YgooSfunYOgen_cache_arg_pos},
  {"fun-names-setter", CVAR, &YgooSfunYfun_names_setter},
  {"fun-nary?", CVAR, &YgooSfunYfun_naryQ},
  {"@fun-arity", CVAR, &YgooSfunYOfun_arity},
  {"met-app?", CVAR, &YgooSfunYmet_appQ},
  {"@fun-names", CVAR, &YgooSfunYOfun_names},
  {"gen-lookup", PVAR, NULL},
  {"and", PVAR, NULL},
  {"@precise-spec?", CVAR, &YgooSfunYOprecise_specQ},
  {"ord-app-mets-1", CVAR, &YgooSfunYord_app_mets_1},
  {"gen-lookup-1i", PVAR, NULL},
  {"@fun-nary?", CVAR, &YgooSfunYOfun_naryQ},
  {"gen-lookup-1", PVAR, NULL},
  {"ord-app-mets", CVAR, &YgooSfunYord_app_mets},
  {"fun-specs-setter", CVAR, &YgooSfunYfun_specs_setter},
  {"<env>", CVAR, &YgooSfunYLenvG},
  {"@cache-add", CVAR, &YgooSfunYOcache_add},
  {"@union-spec?", CVAR, &YgooSfunYOunion_specQ},
  {"@fun-specs", CVAR, &YgooSfunYOfun_specs},
  {"ensure-singleton-cache", CVAR, &YgooSfunYensure_singleton_cache},
  {"handler-info-arguments", CVAR, &YgooSfunYhandler_info_arguments},
  {"fun-specs", CVAR, &YgooSfunYfun_specs},
  {"fun-arity", CVAR, &YgooSfunYfun_arity},
  {"<simple-handler-info>", CVAR, &YgooSfunYLsimple_handler_infoG},
  {"@subclass-spec?", CVAR, &YgooSfunYOsubclass_specQ},
  {"or", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"fab-gen", CVAR, &YgooSfunYfab_gen},
  {"gen-add-met", CVAR, &YgooSfunYgen_add_met},
  {"@mets-subclasses-at", CVAR, &YgooSfunYOmets_subclasses_at},
  {"def-fun/sig-accessor", PVAR, NULL},
  {"requires-singleton-prec", CVAR, &YgooSfunYrequires_singleton_prec},
  {"@singleton-spec?", CVAR, &YgooSfunYOsingleton_specQ},
  {"order-mets", CVAR, &YgooSfunYorder_mets},
  {"fun-unification-vars-setter", CVAR, &YgooSfunYfun_unification_vars_setter},
  {"fun-names", CVAR, &YgooSfunYfun_names},
  {"fun-congruent?", CVAR, &YgooSfunYfun_congruentQ},
  {"fun-val", CVAR, &YgooSfunYfun_val},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"prop-bound-at?", NULL},
  {"<replace-generic-restart>", NULL},
  {"%dispatch", NULL},
  {"fun-spec", NULL},
  {"fun-val", NULL},
  {"handler-info-message", NULL},
  {"@order-specs-class", NULL},
  {"prop-value-at", NULL},
  {"%define-method", NULL},
  {"prop-value-at-setter", NULL},
  {"@fun-mets", NULL},
  {"fun-arity", NULL},
  {"incongruent-method-error", NULL},
  {"@class<", NULL},
  {"fun-nary?", NULL},
  {"ord-app-mets", NULL},
  {"handler-info-arguments", NULL},
  {"fun-specs", NULL},
  {"<simple-handler-info>", NULL},
  {"fab-gen", NULL},
  {"gen-add-met", NULL},
  {"met-app?", NULL},
  {"fun-names", NULL},
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
