/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

DEF(YgooSmathYlog,"goo/math","log");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
DEF(YgooSmathYC,"goo/math","^");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooSmathYacos,"goo/math","acos");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmathYnegQ,"goo/math","neg?");
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
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSmathYLL,"goo/math","<<");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
DEF(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
DEF(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
DEF(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YgooSmathYGGG,"goo/math",">>>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
DEF(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
DEF(YgooSmathYrem,"goo/math","rem");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YOdo,"goo/boot","@do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmathYround_to,"goo/math","round-to");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
DEF(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
DEF(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DEF(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YgooSmathYN,"goo/math","~");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSmathY_,"goo/math","-");
DEF(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YOcat2,"goo/boot","@cat2");
DEF(YgooSmathYT,"goo/math","*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSmathYlogn,"goo/math","logn");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
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

DEFLIT(lit_70);
DEFLIT(lit_107);
DEFLIT(lit_67);
DEFLIT(lit_105);
DEFLIT(lit_4);
DEFLIT(lit_97);
DEFLIT(lit_44);
DEFLIT(lit_182);
DEFLIT(lit_82);
DEFLIT(lit_130);
DEFLIT(lit_152);
DEFLIT(lit_157);
DEFLIT(lit_149);
DEFLIT(lit_208);
DEFLIT(lit_181);
DEFLIT(lit_18);
DEFLIT(lit_174);
DEFLIT(lit_95);
DEFLIT(lit_73);
DEFLIT(lit_197);
DEFLIT(lit_253);
DEFLIT(lit_136);
DEFLIT(lit_1);
DEFLIT(lit_60);
DEFLIT(lit_200);
DEFLIT(lit_227);
DEFLIT(lit_69);
DEFLIT(lit_201);
DEFLIT(lit_101);
DEFLIT(lit_111);
DEFLIT(lit_217);
DEFLIT(lit_187);
DEFLIT(lit_92);
DEFLIT(lit_68);
DEFLIT(lit_188);
DEFLIT(lit_140);
DEFLIT(lit_75);
DEFLIT(lit_13);
DEFLIT(lit_220);
DEFLIT(lit_141);
DEFLIT(lit_47);
DEFLIT(lit_52);
DEFLIT(lit_72);
DEFLIT(lit_88);
DEFLIT(lit_94);
DEFLIT(lit_203);
DEFLIT(lit_147);
DEFLIT(lit_190);
DEFLIT(lit_126);
DEFLIT(lit_222);
DEFLIT(lit_229);
DEFLIT(lit_85);
DEFLIT(lit_36);
DEFLIT(lit_6);
DEFLIT(lit_250);
DEFLIT(lit_156);
DEFLIT(lit_39);
DEFLIT(lit_168);
DEFLIT(lit_80);
DEFLIT(lit_22);
DEFLIT(lit_50);
DEFLIT(lit_215);
DEFLIT(lit_163);
DEFLIT(lit_128);
DEFLIT(lit_159);
DEFLIT(lit_106);
DEFLIT(lit_148);
DEFLIT(lit_90);
DEFLIT(lit_3);
DEFLIT(lit_61);
DEFLIT(lit_150);
DEFLIT(lit_0);
DEFLIT(lit_65);
DEFLIT(lit_122);
DEFLIT(lit_154);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_102);
DEFLIT(lit_180);
DEFLIT(lit_48);
DEFLIT(lit_58);
DEFLIT(lit_245);
DEFLIT(lit_246);
DEFLIT(lit_178);
DEFLIT(lit_33);
DEFLIT(lit_235);
DEFLIT(lit_114);
DEFLIT(lit_176);
DEFLIT(lit_66);
DEFLIT(lit_8);
DEFLIT(lit_194);
DEFLIT(lit_151);
DEFLIT(lit_11);
DEFLIT(lit_143);
DEFLIT(lit_135);
DEFLIT(lit_172);
DEFLIT(lit_46);
DEFLIT(lit_20);
DEFLIT(lit_118);
DEFLIT(lit_129);
DEFLIT(lit_89);
DEFLIT(lit_83);
DEFLIT(lit_127);
DEFLIT(lit_243);
DEFLIT(lit_153);
DEFLIT(lit_116);
DEFLIT(lit_211);
DEFLIT(lit_237);
DEFLIT(lit_242);
DEFLIT(lit_91);
DEFLIT(lit_100);
DEFLIT(lit_78);
DEFLIT(lit_10);
DEFLIT(lit_202);
DEFLIT(lit_161);
DEFLIT(lit_144);
DEFLIT(lit_191);
DEFLIT(lit_167);
DEFLIT(lit_218);
DEFLIT(lit_165);
DEFLIT(lit_81);
DEFLIT(lit_103);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_234);
DEFLIT(lit_15);
DEFLIT(lit_24);
DEFLIT(lit_239);
DEFLIT(lit_230);
DEFLIT(lit_224);
DEFLIT(lit_55);
DEFLIT(lit_175);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_63);
DEFLIT(lit_226);
DEFLIT(lit_199);
DEFLIT(lit_244);
DEFLIT(lit_241);
DEFLIT(lit_206);
DEFLIT(lit_64);
DEFLIT(lit_121);
DEFLIT(lit_137);
DEFLIT(lit_19);
DEFLIT(lit_213);
DEFLIT(lit_166);
DEFLIT(lit_76);
DEFLIT(lit_17);
DEFLIT(lit_219);
DEFLIT(lit_38);
DEFLIT(lit_145);
DEFLIT(lit_249);
DEFLIT(lit_139);
DEFLIT(lit_27);
DEFLIT(lit_169);
DEFLIT(lit_41);
DEFLIT(lit_223);
DEFLIT(lit_124);
DEFLIT(lit_183);
DEFLIT(lit_212);
DEFLIT(lit_16);
DEFLIT(lit_9);
DEFLIT(lit_110);
DEFLIT(lit_193);
DEFLIT(lit_162);
DEFLIT(lit_125);
DEFLIT(lit_240);
DEFLIT(lit_132);
DEFLIT(lit_86);
DEFLIT(lit_179);
DEFLIT(lit_35);
DEFLIT(lit_99);
DEFLIT(lit_155);
DEFLIT(lit_160);
DEFLIT(lit_93);
DEFLIT(lit_108);
DEFLIT(lit_133);
DEFLIT(lit_74);
DEFLIT(lit_209);
DEFLIT(lit_247);
DEFLIT(lit_214);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_185);
DEFLIT(lit_225);
DEFLIT(lit_134);
DEFLIT(lit_21);
DEFLIT(lit_173);
DEFLIT(lit_54);
DEFLIT(lit_205);
DEFLIT(lit_98);
DEFLIT(lit_28);
DEFLIT(lit_204);
DEFLIT(lit_177);
DEFLIT(lit_198);
DEFLIT(lit_233);
DEFLIT(lit_109);
DEFLIT(lit_96);
DEFLIT(lit_104);
DEFLIT(lit_228);
DEFLIT(lit_14);
DEFLIT(lit_119);
DEFLIT(lit_142);
DEFLIT(lit_117);
DEFLIT(lit_192);
DEFLIT(lit_84);
DEFLIT(lit_231);
DEFLIT(lit_62);
DEFLIT(lit_59);
DEFLIT(lit_146);
DEFLIT(lit_186);
DEFLIT(lit_251);
DEFLIT(lit_196);
DEFLIT(lit_138);
DEFLIT(lit_221);
DEFLIT(lit_40);
DEFLIT(lit_49);
DEFLIT(lit_184);
DEFLIT(lit_164);
DEFLIT(lit_29);
DEFLIT(lit_158);
DEFLIT(lit_115);
DEFLIT(lit_42);
DEFLIT(lit_79);
DEFLIT(lit_120);
DEFLIT(lit_210);
DEFLIT(lit_37);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_238);
DEFLIT(lit_189);
DEFLIT(lit_87);
DEFLIT(lit_45);
DEFLIT(lit_123);
DEFLIT(lit_77);
DEFLIT(lit_12);
DEFLIT(lit_216);
DEFLIT(lit_195);
DEFLIT(lit_170);
DEFLIT(lit_236);
DEFLIT(lit_53);
DEFLIT(lit_23);
DEFLIT(lit_248);
DEFLIT(lit_207);
DEFLIT(lit_26);
DEFLIT(lit_71);
DEFLIT(lit_171);
DEFLIT(lit_43);
DEFLIT(lit_112);
DEFLIT(lit_113);
DEFLIT(lit_232);
DEFLIT(lit_252);
DEFLIT(lit_51);
DEFLIT(lit_131);

/* FUNCTIONS: */

LOCFOR(fun_contagious_call_0);
LOCFOR(fun_L_1);
LOCFOR(fun_A_2);
FUNFOR(YgooSmathY1A);
LOCFOR(fun___4);
FUNFOR(YgooSmathY1_);
LOCFOR(fun_T_6);
LOCFOR(fun_S_7);
LOCFOR(fun_atan2_8);
LOCFOR(fun_logn_9);
LOCFOR(fun_floor_10);
LOCFOR(fun_ceil_11);
LOCFOR(fun_round_12);
LOCFOR(fun_round_to_13);
LOCFOR(fun_trunc_14);
LOCFOR(fun_floorS_15);
LOCFOR(fun_ceilS_16);
LOCFOR(fun_roundS_17);
LOCFOR(fun_truncS_18);
LOCFOR(fun_div_19);
LOCFOR(fun_mod_20);
LOCFOR(fun_modA_21);
LOCFOR(fun_mod__22);
LOCFOR(fun_x_1344_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_x_1348_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_rem_29);
LOCFOR(fun_pow_30);
LOCFOR(fun_posQ_31);
LOCFOR(fun_zeroQ_32);
LOCFOR(fun_negQ_33);
LOCFOR(fun_neg_34);
LOCFOR(fun_abs_35);
LOCFOR(fun_to_str_36);
LOCFOR(fun_contagious_type_37);
LOCFOR(fun_contagious_type_38);
LOCFOR(fun_contagious_type_39);
LOCFOR(fun_contagious_type_40);
LOCFOR(fun_EE_41);
LOCFOR(fun_L_42);
LOCFOR(fun_A_43);
LOCFOR(fun___44);
LOCFOR(fun_T_45);
LOCFOR(fun_S_46);
LOCFOR(fun_floor_47);
LOCFOR(fun_ceil_48);
LOCFOR(fun_round_49);
LOCFOR(fun_trunc_50);
LOCFOR(fun_truncS_51);
LOCFOR(fun_mod_52);
LOCFOR(fun_pow_53);
LOCFOR(fun_K_54);
LOCFOR(fun_C_55);
LOCFOR(fun_B_56);
LOCFOR(fun_N_57);
LOCFOR(fun_bitQ_58);
LOCFOR(fun_evenQ_59);
LOCFOR(fun_oddQ_60);
LOCFOR(fun_GG_61);
LOCFOR(fun_GGG_62);
LOCFOR(fun_LL_63);
LOCFOR(fun_power_of_two_ceil_64);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_66);
LOCFOR(fun_EE_67);
LOCFOR(fun_L_68);
LOCFOR(fun_A_69);
LOCFOR(fun___70);
LOCFOR(fun_T_71);
LOCFOR(fun_S_72);
LOCFOR(fun_truncS_73);
LOCFOR(fun_pow_74);
LOCFOR(fun_isqrt_75);
LOCFOR(fun_x_1352_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_sqrt_79);
LOCFOR(fun_sqrt_80);
LOCFOR(fun_log_81);
LOCFOR(fun_log_82);
LOCFOR(fun_sin_83);
LOCFOR(fun_sin_84);
LOCFOR(fun_cos_85);
LOCFOR(fun_cos_86);
LOCFOR(fun_tan_87);
LOCFOR(fun_tan_88);
LOCFOR(fun_sinh_89);
LOCFOR(fun_sinh_90);
LOCFOR(fun_cosh_91);
LOCFOR(fun_cosh_92);
LOCFOR(fun_tanh_93);
LOCFOR(fun_tanh_94);
LOCFOR(fun_asin_95);
LOCFOR(fun_asin_96);
LOCFOR(fun_acos_97);
LOCFOR(fun_acos_98);
LOCFOR(fun_atan_99);
LOCFOR(fun_atan_100);
LOCFOR(fun_atan2_101);
LOCFOR(fun_atan2_102);
LOCFOR(fun_logn_103);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();
extern P YgooSmathY___main_3___ ();
extern P YgooSmathY___main_4___ ();
extern P YgooSmathY___main_5___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_contagious_call_0) {
  P f_,x_,y_;
  P typeF2733;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T3 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF2733 = T3;
  T1 = CALL2(1,VARREF(YgooStypesYas),typeF2733,x_);
  T2 = CALL2(1,VARREF(YgooStypesYas),typeF2733,y_);
  T0 = CALL2(1,f_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_L_1) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmagYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_2) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYA),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathY1A) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___4) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathY_),x_,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathY1_) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),x_,YPint((P)1));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_6) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_7) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYS),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan2_8) {
  P y_,x_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_logn_9) {
  P x_,b_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floor_10) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ceil_11) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYceilS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_round_12) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_round_to_13) {
  P x_,n_;
  P fF2734;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSlogYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_121),n_);
    fF2734 = T7;
    T6 = CALL2(1,VARREF(YgooSmathYT),x_,fF2734);
    T5 = CALL1(1,VARREF(YgooSmathYround),T6);
    T4 = CALL2(1,VARREF(YgooSmathYS),T5,fF2734);
    T3 = CALL1(1,x_,T4);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_trunc_14) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floorS_15) {
  P real_,divisor_;
  P remainderF2737;
  P integerF2736;
  P tup23F2735;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F2735 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2735,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2736 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2735,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2737 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2737);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T4 = T6;
    } else {
      T7 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T4 = T7;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmathY_),integerF2736,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2737,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2736,remainderF2737);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ceilS_16) {
  P real_,divisor_;
  P remainderF2740;
  P integerF2739;
  P tup24F2738;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup24F2738 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2738,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2739 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2738,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2740 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2740);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T5 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooSmathYnegQ),real_);
      T4 = T6;
    } else {
      T7 = CALL1(1,VARREF(YgooSmathYposQ),real_);
      T4 = T7;
    }
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmathYA),integerF2739,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathY_),remainderF2740,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2739,remainderF2740);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_roundS_17) {
  P real_,divisor_;
  P tmpF2747;
  P minus_thresholdF2746;
  P tmpF2745;
  P thresholdF2744;
  P remainderF2743;
  P integerF2742;
  P tup25F2741;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T34 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup25F2741 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2741,YPint((P)0));
  check_type(T33,VARREF(YLintG));
  integerF2742 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2741,YPint((P)1));
  check_type(T32,VARREF(YLnumG));
  remainderF2743 = T32;
  T31 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T30 = CALL2(1,VARREF(YgooSmathYS),T31,LITREF(lit_126));
  check_type(T30,VARREF(YLnumG));
  thresholdF2744 = T30;
  T5 = CALL2(1,VARREF(YgooSmagYG),remainderF2743,thresholdF2744);
  tmpF2745 = T5;
  if (tmpF2745 != YPfalse) {
    T1 = tmpF2745;
  } else {
    T3 = CALL2(1,VARREF(YgooSlogYE),remainderF2743,thresholdF2744);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2742);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T7 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathY_),integerF2742,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2743,divisor_);
      T8 = CALL2(1,VARREF(Ytup),T9,T10);
      T6 = T8;
    } else {
      T12 = CALL2(1,VARREF(YgooSmathYA),integerF2742,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathY_),remainderF2743,divisor_);
      T11 = CALL2(1,VARREF(Ytup),T12,T13);
      T6 = T11;
    }
    T0 = T6;
  } else {
    T20 = CALL1(1,VARREF(YgooSmathYneg),thresholdF2744);
    minus_thresholdF2746 = T20;
    T19 = CALL2(1,VARREF(YgooSmagYL),remainderF2743,minus_thresholdF2746);
    tmpF2747 = T19;
    if (tmpF2747 != YPfalse) {
      T15 = tmpF2747;
    } else {
      T17 = CALL2(1,VARREF(YgooSlogYE),remainderF2743,minus_thresholdF2746);
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2742);
        T16 = T18;
      } else {
        T16 = YPfalse;
      }
      T15 = T16;
    }
    if (T15 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSmathYA),integerF2742,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathY_),remainderF2743,divisor_);
        T23 = CALL2(1,VARREF(Ytup),T24,T25);
        T21 = T23;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathY_),integerF2742,YPint((P)1));
        T28 = CALL2(1,VARREF(YgooSmathYA),remainderF2743,divisor_);
        T26 = CALL2(1,VARREF(Ytup),T27,T28);
        T21 = T26;
      }
      T14 = T21;
    } else {
      T29 = CALL2(1,VARREF(Ytup),integerF2742,remainderF2743);
      T14 = T29;
    }
    T0 = T14;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_18) {
  P real_,divisor_;
  P T0;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_div_19) {
  P x_,y_;
  P xF2749;
  P xF2748;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF2748 = YPint((P)0);
  xF2749 = xF2748;
  T2 = (P)YPiGG(xF2749,(P)2);
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_20) {
  P real_,divisor_;
  P remainderF2752;
  P UF2751;
  P tup26F2750;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup26F2750 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2750,YPint((P)0));
  UF2751 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2750,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2752 = T0;
UNLINK_STACK();
  RET(remainderF2752);
}

LOCCODEDEF(fun_modA_21) {
  P i_,j_,n_;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
  T1 = CALL2(1,VARREF(YgooSmathYA),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod__22) {
  P i_,j_,n_;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
  ARG(n_, 2);
  T1 = CALL2(1,VARREF(YgooSmathY_),i_,j_);
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1344_23) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_136),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_24) {
  P return_;
  P x_1343F2761;
  P x_1343F2760;
  P x_1343F2759;
  P x_1343F2758;
  P x_1343F2757;
  P maxF2756;
  P placeF2755;
  P x_1343F2754;
  P x_1344F2753;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1344_23,2);
  x_1344F2753 = T24;
  FUNINIT(x_1344F2753, 2,FREEREF(0),return_);
  x_1343F2754 = FREEREF(0);
  placeF2755 = YPfalse;
  maxF2756 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1343F2754,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1343F2754,LITREF(lit_136),x_1344F2753);
    x_1343F2757 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2757,x_1344F2753);
    placeF2755 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1343F2757);
    x_1343F2758 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2758,x_1344F2753);
    maxF2756 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1343F2758);
    x_1343F2759 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1343F2759,x_1344F2753);
    x_1343F2760 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1343F2760,x_1344F2753);
    T6 = CALL1(1,VARREF(Ytail),x_1343F2759);
    x_1343F2761 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1343F2761,x_1344F2753);
  } else {
    T12 = CALL2(1,x_1344F2753,LITREF(lit_137),x_1343F2754);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T16 = placeF2755;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_139));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF2756;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_140));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_140));
UNLINK_STACK();
  QRET(T13);
}

LOCCODEDEF(fun_25) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_24,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1348_26) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_145),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_27) {
  P return_;
  P x_1347F2770;
  P x_1347F2769;
  P x_1347F2768;
  P x_1347F2767;
  P x_1347F2766;
  P maxF2765;
  P placeF2764;
  P x_1347F2763;
  P x_1348F2762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1348_26,2);
  x_1348F2762 = T24;
  FUNINIT(x_1348F2762, 2,FREEREF(0),return_);
  x_1347F2763 = FREEREF(0);
  placeF2764 = YPfalse;
  maxF2765 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1347F2763,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1347F2763,LITREF(lit_145),x_1348F2762);
    x_1347F2766 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2766,x_1348F2762);
    placeF2764 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1347F2766);
    x_1347F2767 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2767,x_1348F2762);
    maxF2765 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1347F2767);
    x_1347F2768 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1347F2768,x_1348F2762);
    x_1347F2769 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1347F2769,x_1348F2762);
    T6 = CALL1(1,VARREF(Ytail),x_1347F2768);
    x_1347F2770 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1347F2770,x_1348F2762);
  } else {
    T12 = CALL2(1,x_1348F2762,LITREF(lit_137),x_1347F2763);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
  T16 = placeF2764;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_139));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF2765;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_140));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_140));
UNLINK_STACK();
  QRET(T13);
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

LOCCODEDEF(fun_rem_29) {
  P real_,divisor_;
  P remainderF2773;
  P UF2772;
  P tup27F2771;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup27F2771 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2771,YPint((P)0));
  UF2772 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2771,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2773 = T0;
UNLINK_STACK();
  RET(remainderF2773);
}

LOCCODEDEF(fun_pow_30) {
  P base_,n_;
  P T0;
LINK_STACK();
  ARG(base_, 0);
  ARG(n_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYpow),base_,n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_posQ_31) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zeroQ_32) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSlogYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_negQ_33) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_neg_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_abs_35) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYneg),x_);
    T0 = T2;
  } else {
    T0 = x_;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_36) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_contagious_type_37) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

LOCCODEDEF(fun_contagious_type_38) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_contagious_type_39) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_contagious_type_40) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_EE_41) {
  P x_,y_;
  P xF2777;
  P xF2776;
  P xF2775;
  P xF2774;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2774 = x_;
  xF2775 = xF2774;
  T2 = (P)YPiGG(xF2775,(P)2);
  xF2776 = y_;
  xF2777 = xF2776;
  T3 = (P)YPiGG(xF2777,(P)2);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_42) {
  P x_,y_;
  P xF2781;
  P xF2780;
  P xF2779;
  P xF2778;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2778 = x_;
  xF2779 = xF2778;
  T2 = (P)YPiGG(xF2779,(P)2);
  xF2780 = y_;
  xF2781 = xF2780;
  T3 = (P)YPiGG(xF2781,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_43) {
  P x_,y_;
  P tF2788;
  P xF2787;
  P xF2786;
  P xF2785;
  P xF2784;
  P xF2783;
  P xF2782;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2782 = x_;
  xF2783 = xF2782;
  T3 = (P)YPiGG(xF2783,(P)2);
  xF2784 = y_;
  xF2785 = xF2784;
  T4 = (P)YPiGG(xF2785,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF2786 = T2;
  xF2787 = xF2786;
  tF2788 = (P)1;
  T1 = (P)YPiLL(xF2787,(P)2);
  T0 = (P)YPiv(T1,tF2788);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___44) {
  P x_,y_;
  P tF2795;
  P xF2794;
  P xF2793;
  P xF2792;
  P xF2791;
  P xF2790;
  P xF2789;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2789 = x_;
  xF2790 = xF2789;
  T3 = (P)YPiGG(xF2790,(P)2);
  xF2791 = y_;
  xF2792 = xF2791;
  T4 = (P)YPiGG(xF2792,(P)2);
  T2 = (P)YPi_(T3,T4);
  xF2793 = T2;
  xF2794 = xF2793;
  tF2795 = (P)1;
  T1 = (P)YPiLL(xF2794,(P)2);
  T0 = (P)YPiv(T1,tF2795);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_45) {
  P x_,y_;
  P tF2802;
  P xF2801;
  P xF2800;
  P xF2799;
  P xF2798;
  P xF2797;
  P xF2796;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2796 = x_;
  xF2797 = xF2796;
  T3 = (P)YPiGG(xF2797,(P)2);
  xF2798 = y_;
  xF2799 = xF2798;
  T4 = (P)YPiGG(xF2799,(P)2);
  T2 = (P)YPiT(T3,T4);
  xF2800 = T2;
  xF2801 = xF2800;
  tF2802 = (P)1;
  T1 = (P)YPiLL(xF2801,(P)2);
  T0 = (P)YPiv(T1,tF2802);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_46) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_166));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floor_47) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_ceil_48) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_round_49) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_trunc_50) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_truncS_51) {
  P x_,y_;
  P resultF2810;
  P tF2809;
  P xF2808;
  P xF2807;
  P xF2806;
  P xF2805;
  P xF2804;
  P xF2803;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2803 = x_;
  xF2804 = xF2803;
  T6 = (P)YPiGG(xF2804,(P)2);
  xF2805 = y_;
  xF2806 = xF2805;
  T7 = (P)YPiGG(xF2806,(P)2);
  T5 = (P)YPitS(T6,T7);
  xF2807 = T5;
  xF2808 = xF2807;
  tF2809 = (P)1;
  T4 = (P)YPiLL(xF2808,(P)2);
  T3 = (P)YPiv(T4,tF2809);
  resultF2810 = T3;
  T2 = CALL2(1,VARREF(YgooSmathYT),resultF2810,y_);
  T1 = CALL2(1,VARREF(YgooSmathY_),x_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2810,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_52) {
  P x_,y_;
  P resF2818;
  P tF2817;
  P xF2816;
  P xF2815;
  P xF2814;
  P xF2813;
  P xF2812;
  P xF2811;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2811 = x_;
  xF2812 = xF2811;
  T9 = (P)YPiGG(xF2812,(P)2);
  xF2813 = y_;
  xF2814 = xF2813;
  T10 = (P)YPiGG(xF2814,(P)2);
  T8 = (P)YPim(T9,T10);
  xF2815 = T8;
  xF2816 = xF2815;
  tF2817 = (P)1;
  T7 = (P)YPiLL(xF2816,(P)2);
  T6 = (P)YPiv(T7,tF2817);
  resF2818 = T6;
  T1 = CALL2(1,VARREF(YgooSmagYL),resF2818,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmathYA),resF2818,y_);
      T2 = T4;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathY_),resF2818,y_);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T0 = resF2818;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_53) {
  P x_,n_;
  P yF2821;
  P pF2820;
  P xF2819;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYnegQ),n_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),n_);
    T3 = CALL2(1,VARREF(YgooSmathYpow),x_,T4);
    T2 = CALL2(1,VARREF(YgooSmathYS),YPint((P)1),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSlogYE),x_,YPint((P)2));
    if (T6 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYLL),YPint((P)1),n_);
      T5 = T7;
    } else {
      T9 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
      if (T9 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T13 = CALL2(1,VARREF(YgooSmathYpow),T14,n_);
          T12 = CALL1(1,VARREF(YgooSmathYneg),T13);
          T10 = T12;
        } else {
          T16 = CALL1(1,VARREF(YgooSmathYneg),x_);
          T15 = CALL2(1,VARREF(YgooSmathYpow),T16,n_);
          T10 = T15;
        }
        T8 = T10;
      } else {
        if (YPtrue != YPfalse) {
          T29 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)1));
          if (T29 != YPfalse) {
            T30 = CALL2(1,VARREF(YgooSmathYT),x_,x_);
            T28 = T30;
          } else {
            T28 = x_;
          }
          check_type(T28,VARREF(YLintG));
          xF2819 = T28;
          T31 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          check_type(T31,VARREF(YLintG));
          pF2820 = T31;
          T33 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T33 != YPfalse) {
            T32 = x_;
          } else {
            T32 = YPint((P)1);
          }
          check_type(T32,VARREF(YLintG));
          yF2821 = T32;
          LOOP_51: {
            P a51_0,a51_1,a51_2;
            T19 = CALL1(1,VARREF(YgooSmathYzeroQ),pF2820);
            if (T19 != YPfalse) {
              T18 = yF2821;
            } else {
              T22 = CALL2(1,VARREF(YgooSmagYG),pF2820,YPint((P)1));
              if (T22 != YPfalse) {
                T23 = CALL2(1,VARREF(YgooSmathYT),xF2819,xF2819);
                T21 = T23;
              } else {
                T21 = xF2819;
              }
              T24 = CALL2(1,VARREF(YgooSmathYGG),pF2820,YPint((P)1));
              T26 = CALL1(1,VARREF(YgooSmathYoddQ),pF2820);
              if (T26 != YPfalse) {
                T27 = CALL2(1,VARREF(YgooSmathYT),xF2819,yF2821);
                T25 = T27;
              } else {
                T25 = yF2821;
              }
              a51_0 = T21;
              a51_1 = T24;
              a51_2 = T25;
              xF2819 = a51_0;
              pF2820 = a51_1;
              yF2821 = a51_2;
              goto LOOP_51;
              T18 = T20;
            }
          }
          T17 = T18;
        } else {
          T17 = YPfalse;
        }
        T8 = T17;
      }
      T5 = T8;
    }
    T0 = T5;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_K_54) {
  P x_,y_;
  P tF2828;
  P xF2827;
  P xF2826;
  P xF2825;
  P xF2824;
  P xF2823;
  P xF2822;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2822 = x_;
  xF2823 = xF2822;
  T3 = (P)YPiGG(xF2823,(P)2);
  xF2824 = y_;
  xF2825 = xF2824;
  T4 = (P)YPiGG(xF2825,(P)2);
  T2 = (P)YPiv(T3,T4);
  xF2826 = T2;
  xF2827 = xF2826;
  tF2828 = (P)1;
  T1 = (P)YPiLL(xF2827,(P)2);
  T0 = (P)YPiv(T1,tF2828);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_C_55) {
  P x_,y_;
  P tF2835;
  P xF2834;
  P xF2833;
  P xF2832;
  P xF2831;
  P xF2830;
  P xF2829;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2829 = x_;
  xF2830 = xF2829;
  T3 = (P)YPiGG(xF2830,(P)2);
  xF2831 = y_;
  xF2832 = xF2831;
  T4 = (P)YPiGG(xF2832,(P)2);
  T2 = (P)YPiC(T3,T4);
  xF2833 = T2;
  xF2834 = xF2833;
  tF2835 = (P)1;
  T1 = (P)YPiLL(xF2834,(P)2);
  T0 = (P)YPiv(T1,tF2835);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_B_56) {
  P x_,y_;
  P tF2842;
  P xF2841;
  P xF2840;
  P xF2839;
  P xF2838;
  P xF2837;
  P xF2836;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2836 = x_;
  xF2837 = xF2836;
  T3 = (P)YPiGG(xF2837,(P)2);
  xF2838 = y_;
  xF2839 = xF2838;
  T4 = (P)YPiGG(xF2839,(P)2);
  T2 = (P)YPiB(T3,T4);
  xF2840 = T2;
  xF2841 = xF2840;
  tF2842 = (P)1;
  T1 = (P)YPiLL(xF2841,(P)2);
  T0 = (P)YPiv(T1,tF2842);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_N_57) {
  P x_;
  P tF2847;
  P xF2846;
  P xF2845;
  P xF2844;
  P xF2843;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF2843 = x_;
  xF2844 = xF2843;
  T3 = (P)YPiGG(xF2844,(P)2);
  T2 = (P)YPiX(T3);
  xF2845 = T2;
  xF2846 = xF2845;
  tF2847 = (P)1;
  T1 = (P)YPiLL(xF2846,(P)2);
  T0 = (P)YPiv(T1,tF2847);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_bitQ_58) {
  P o_,x_;
  P tF2854;
  P xF2853;
  P xF2852;
  P xF2851;
  P xF2850;
  P xF2849;
  P xF2848;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
  xF2848 = o_;
  xF2849 = xF2848;
  T3 = (P)YPiGG(xF2849,(P)2);
  xF2850 = x_;
  xF2851 = xF2850;
  T4 = (P)YPiGG(xF2851,(P)2);
  T2 = (P)YPiQ(T3,T4);
  xF2852 = T2;
  xF2853 = xF2852;
  tF2854 = (P)1;
  T1 = (P)YPiLL(xF2853,(P)2);
  T0 = (P)YPiv(T1,tF2854);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_evenQ_59) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_oddQ_60) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GG_61) {
  P x_,a_;
  P tF2861;
  P xF2860;
  P xF2859;
  P xF2858;
  P xF2857;
  P xF2856;
  P xF2855;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2855 = x_;
  xF2856 = xF2855;
  T3 = (P)YPiGG(xF2856,(P)2);
  xF2857 = a_;
  xF2858 = xF2857;
  T4 = (P)YPiGG(xF2858,(P)2);
  T2 = (P)YPiGG(T3,T4);
  xF2859 = T2;
  xF2860 = xF2859;
  tF2861 = (P)1;
  T1 = (P)YPiLL(xF2860,(P)2);
  T0 = (P)YPiv(T1,tF2861);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GGG_62) {
  P x_,a_;
  P tF2868;
  P xF2867;
  P xF2866;
  P xF2865;
  P xF2864;
  P xF2863;
  P xF2862;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2862 = x_;
  xF2863 = xF2862;
  T3 = (P)YPiGG(xF2863,(P)2);
  xF2864 = a_;
  xF2865 = xF2864;
  T4 = (P)YPiGG(xF2865,(P)2);
  T2 = (P)YPiGGG(T3,T4);
  xF2866 = T2;
  xF2867 = xF2866;
  tF2868 = (P)1;
  T1 = (P)YPiLL(xF2867,(P)2);
  T0 = (P)YPiv(T1,tF2868);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_LL_63) {
  P x_,a_;
  P tF2875;
  P xF2874;
  P xF2873;
  P xF2872;
  P xF2871;
  P xF2870;
  P xF2869;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2869 = x_;
  xF2870 = xF2869;
  T3 = (P)YPiGG(xF2870,(P)2);
  xF2871 = a_;
  xF2872 = xF2871;
  T4 = (P)YPiGG(xF2872,(P)2);
  T2 = (P)YPiLL(T3,T4);
  xF2873 = T2;
  xF2874 = xF2873;
  tF2875 = (P)1;
  T1 = (P)YPiLL(xF2874,(P)2);
  T0 = (P)YPiv(T1,tF2875);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_power_of_two_ceil_64) {
  P x_;
  P po2F2876;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)1),VARREF(YLintG));
  po2F2876 = YPint((P)1);
  LOOP_52: {
    P a52_0;
    T1 = CALL2(1,VARREF(YgooSmagYG),po2F2876,x_);
    if (T1 != YPfalse) {
      T0 = po2F2876;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),po2F2876,po2F2876);
      a52_0 = T3;
      po2F2876 = a52_0;
      goto LOOP_52;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF2879;
  P xF2878;
  P xF2877;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = (P)YPfu(x_);
  T2 = (P)YgooSmathYPflo_bits(T3);
  xF2877 = T2;
  xF2878 = xF2877;
  tF2879 = (P)1;
  T1 = (P)YPiLL(xF2878,(P)2);
  T0 = (P)YPiv(T1,tF2879);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_66) {
  P U_,x_;
  P xF2881;
  P xF2880;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
  xF2880 = x_;
  xF2881 = xF2880;
  T2 = (P)YPiGG(xF2881,(P)2);
  T1 = (P)YgooSmathYPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_EE_67) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPfE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_68) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPfL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_69) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPfA(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___70) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPf_(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_71) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPfT(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_72) {
  P x_,y_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T2 = (P)YPfu(x_);
  T3 = (P)YPfu(y_);
  T1 = (P)YgooSmathYPfS(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_73) {
  P x_,y_;
  P resultF2886;
  P tF2885;
  P xF2884;
  P xF2883;
  P dividedF2882;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T8 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF2882 = T8;
  T7 = (P)YPfu(dividedF2882);
  T6 = (P)YgooSmathYPft(T7);
  xF2883 = T6;
  xF2884 = xF2883;
  tF2885 = (P)1;
  T5 = (P)YPiLL(xF2884,(P)2);
  T4 = (P)YPiv(T5,tF2885);
  resultF2886 = T4;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF2886);
  T2 = CALL2(1,VARREF(YgooSmathY_),dividedF2882,T3);
  T1 = CALL2(1,VARREF(YgooSmathYT),y_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2886,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_74) {
  P x_,n_;
  P resF2887;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T8 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T7 = (P)YPfu(T8);
  T9 = (P)YPfu(n_);
  T6 = (P)YgooSmathYPfpow(T7,T9);
  T5 = (P)YPfb(T6);
  resF2887 = T5;
  T2 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),resF2887);
    T0 = T4;
  } else {
    T0 = resF2887;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isqrt_75) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYsqrt),T2);
  T0 = CALL1(1,VARREF(YgooSmathYround),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_x_1352_76) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_203),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_77) {
  P return_;
  P PfpF2903;
  P x_1351F2902;
  P x_1351F2901;
  P x_1351F2900;
  P x_1351F2899;
  P x_1351F2898;
  P x_1351F2897;
  P x_1351F2896;
  P x_1351F2895;
  P x_1351F2894;
  P x_1351F2893;
  P prefixF2892;
  P paramF2891;
  P nameF2890;
  P x_1351F2889;
  P x_1352F2888;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
LINK_STACK();
  ARG(return_, 0);
  T89 = FUNSHELL(0,fun_x_1352_76,2);
  x_1352F2888 = T89;
  FUNINIT(x_1352F2888, 2,FREEREF(0),return_);
  x_1351F2889 = FREEREF(0);
  nameF2890 = YPfalse;
  paramF2891 = YPfalse;
  prefixF2892 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1351F2889,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1351F2889,LITREF(lit_203),x_1352F2888);
    x_1351F2893 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2893,x_1352F2888);
    nameF2890 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1351F2893);
    x_1351F2894 = T17;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2894,x_1352F2888);
    x_1351F2895 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2895,x_1352F2888);
    paramF2891 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1351F2895);
    x_1351F2896 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2896,x_1352F2888);
    x_1351F2897 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2897,x_1352F2888);
    T11 = CALL1(1,VARREF(Ytail),x_1351F2896);
    x_1351F2898 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2898,x_1352F2888);
    T15 = CALL1(1,VARREF(Ytail),x_1351F2894);
    x_1351F2899 = T15;
    prefixF2892 = x_1351F2899;
    x_1351F2900 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2900,x_1352F2888);
    x_1351F2901 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2901,x_1352F2888);
    T7 = CALL1(1,VARREF(Ytail),x_1351F2900);
    x_1351F2902 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2902,x_1352F2888);
  } else {
    T19 = CALL2(1,x_1352F2888,LITREF(lit_137),x_1351F2889);
  }
  T88 = nameF2890;
  T87 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_204),T88);
  PfpF2903 = T87;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_205));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_206));
  T26 = nameF2890;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = paramF2891;
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_207));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,LITREF(lit_140));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_207));
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T34,T35,LITREF(lit_140));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_140));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_209));
  T40 = nameF2890;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T46 = paramF2891;
  T45 = CALL1(1,VARREF(Ylst),T46);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T47,LITREF(lit_140));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T48,T49,LITREF(lit_140));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T50 = prefixF2892;
  T54 = nameF2890;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_186));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T60 = paramF2891;
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_140));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,LITREF(lit_140));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),6,T38,T39,T41,T50,T51,LITREF(lit_140));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_209));
  T65 = nameF2890;
  T64 = CALL1(1,VARREF(Ylst),T65);
  T71 = paramF2891;
  T70 = CALL1(1,VARREF(Ylst),T71);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T72,LITREF(lit_140));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T73,T74,LITREF(lit_140));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T75 = prefixF2892;
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T81 = CALL1(1,VARREF(Ylst),PfpF2903);
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T86 = paramF2891;
  T85 = CALL1(1,VARREF(Ylst),T86);
  T83 = CALL3(1,VARREF(YgooSmacrosYcat),T84,T85,LITREF(lit_140));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T80 = CALL3(1,VARREF(YgooSmacrosYcat),T81,T82,LITREF(lit_140));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T77 = CALL3(1,VARREF(YgooSmacrosYcat),T78,T79,LITREF(lit_140));
  T76 = CALL1(1,VARREF(Ylst),T77);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),6,T63,T64,T66,T75,T76,LITREF(lit_140));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T36,T61,LITREF(lit_140));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_78) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_77,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sqrt_79) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_216));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_sqrt_80) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_216));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_log_81) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_log_82) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPflog(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sin_83) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sin_84) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfsin(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cos_85) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cos_86) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfcos(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tan_87) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tan_88) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPftan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sinh_89) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sinh_90) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfsinh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cosh_91) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cosh_92) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfcosh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tanh_93) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tanh_94) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPftanh(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_asin_95) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_241));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_asin_96) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_241));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_97) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_245));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_98) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_245));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_atan_99) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan_100) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfatan(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan2_101) {
  P y_,x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan2_102) {
  P y_,x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T2 = (P)YPfu(y_);
  T3 = (P)YPfu(x_);
  T1 = (P)YgooSmathYPfatan2(T2,T3);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_logn_103) {
  P x_,b_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYlog),x_);
  T2 = CALL1(1,VARREF(YgooSmathYlog),b_);
  T0 = CALL2(1,VARREF(YgooSmathYS),T1,T2);
UNLINK_STACK();
  RET(T0);
}

P YgooSmathY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
DEFCREGS();
  lit_0 = YPPsym((P)"contagious-type");
  lit_1 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T2 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLnumG));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),T2,Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooSmathYcontagious_type,T0);
  lit_2 = YPPsym((P)"contagious-call");
  lit_3 = YPPlist(3,YPPsym((P)"<fun>"),YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T4 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T3 = YPfab_gen(T4,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSmathYcontagious_call,T3);
  lit_4 = YPPsym((P)"+");
  lit_5 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T5 = YPfab_gen(T6,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSmathYA,T5);
  lit_6 = YPPsym((P)"-");
  lit_7 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T7 = YPfab_gen(T8,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooSmathY_,T7);
  lit_8 = YPPsym((P)"*");
  lit_9 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T9 = YPfab_gen(T10,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooSmathYT,T9);
  lit_10 = YPPsym((P)"/");
  lit_11 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T11 = YPfab_gen(T12,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooSmathYS,T11);
  lit_12 = YPPsym((P)"sin");
  lit_13 = YPPlist(1,YPPsym((P)"<num>"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T13 = YPfab_gen(T14,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooSmathYsin,T13);
  lit_14 = YPPsym((P)"cos");
  lit_15 = YPPlist(1,YPPsym((P)"<num>"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T15 = YPfab_gen(T16,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooSmathYcos,T15);
  lit_16 = YPPsym((P)"tan");
  lit_17 = YPPlist(1,YPPsym((P)"<num>"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T17 = YPfab_gen(T18,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooSmathYtan,T17);
  lit_18 = YPPsym((P)"sinh");
  lit_19 = YPPlist(1,YPPsym((P)"<num>"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T19 = YPfab_gen(T20,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooSmathYsinh,T19);
  lit_20 = YPPsym((P)"cosh");
  lit_21 = YPPlist(1,YPPsym((P)"<num>"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T21 = YPfab_gen(T22,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooSmathYcosh,T21);
  lit_22 = YPPsym((P)"tanh");
  lit_23 = YPPlist(1,YPPsym((P)"<num>"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T23 = YPfab_gen(T24,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooSmathYtanh,T23);
  lit_24 = YPPsym((P)"asin");
  lit_25 = YPPlist(1,YPPsym((P)"<num>"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T25 = YPfab_gen(T26,LITREF(lit_24),LITREF(lit_25),YPfalse);
  VARSET(YgooSmathYasin,T25);
  lit_26 = YPPsym((P)"acos");
  lit_27 = YPPlist(1,YPPsym((P)"<num>"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T27 = YPfab_gen(T28,LITREF(lit_26),LITREF(lit_27),YPfalse);
  VARSET(YgooSmathYacos,T27);
  lit_28 = YPPsym((P)"atan");
  lit_29 = YPPlist(1,YPPsym((P)"<num>"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T29 = YPfab_gen(T30,LITREF(lit_28),LITREF(lit_29),YPfalse);
  VARSET(YgooSmathYatan,T29);
  lit_30 = YPPsym((P)"atan2");
  lit_31 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T31 = YPfab_gen(T32,LITREF(lit_30),LITREF(lit_31),YPfalse);
  VARSET(YgooSmathYatan2,T31);
  lit_32 = YPPsym((P)"sqrt");
  lit_33 = YPPlist(1,YPPsym((P)"<num>"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T33 = YPfab_gen(T34,LITREF(lit_32),LITREF(lit_33),YPfalse);
  VARSET(YgooSmathYsqrt,T33);
  lit_34 = YPPsym((P)"log");
  lit_35 = YPPlist(1,YPPsym((P)"<num>"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T35 = YPfab_gen(T36,LITREF(lit_34),LITREF(lit_35),YPfalse);
  VARSET(YgooSmathYlog,T35);
  lit_36 = YPPsym((P)"logn");
  lit_37 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T39 = YPfab_gen(T40,LITREF(lit_36),LITREF(lit_37),YPfalse);
  T38 = VARSET(YgooSmathYlogn,T39);
  T37 = T38;
  return T37;
}

P YgooSmathY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
DEFCREGS();
  lit_38 = YPPsym((P)"floor");
  lit_39 = YPPlist(1,YPPsym((P)"<num>"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_38),LITREF(lit_39),YPfalse);
  VARSET(YgooSmathYfloor,T0);
  lit_40 = YPPsym((P)"ceil");
  lit_41 = YPPlist(1,YPPsym((P)"<num>"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_40),LITREF(lit_41),YPfalse);
  VARSET(YgooSmathYceil,T2);
  lit_42 = YPPsym((P)"round");
  lit_43 = YPPlist(1,YPPsym((P)"<num>"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_42),LITREF(lit_43),YPfalse);
  VARSET(YgooSmathYround,T4);
  lit_44 = YPPsym((P)"round-to");
  lit_45 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<int>"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_44),LITREF(lit_45),YPfalse);
  VARSET(YgooSmathYround_to,T6);
  lit_46 = YPPsym((P)"trunc");
  lit_47 = YPPlist(1,YPPsym((P)"<num>"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_46),LITREF(lit_47),YPfalse);
  VARSET(YgooSmathYtrunc,T8);
  lit_48 = YPPsym((P)"floor/");
  lit_49 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T12 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T12,Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_48),LITREF(lit_49),YPfalse);
  VARSET(YgooSmathYfloorS,T10);
  lit_50 = YPPsym((P)"ceil/");
  lit_51 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T15 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T15,Ynil);
  T13 = YPfab_gen(T14,LITREF(lit_50),LITREF(lit_51),YPfalse);
  VARSET(YgooSmathYceilS,T13);
  lit_52 = YPPsym((P)"round/");
  lit_53 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T18 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T18,Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_52),LITREF(lit_53),YPfalse);
  VARSET(YgooSmathYroundS,T16);
  lit_54 = YPPsym((P)"trunc/");
  lit_55 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T21 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T20 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T21,Ynil);
  T19 = YPfab_gen(T20,LITREF(lit_54),LITREF(lit_55),YPfalse);
  VARSET(YgooSmathYtruncS,T19);
  lit_56 = YPPsym((P)"div");
  lit_57 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T22 = YPfab_gen(T23,LITREF(lit_56),LITREF(lit_57),YPfalse);
  VARSET(YgooSmathYdiv,T22);
  lit_58 = YPPsym((P)"mod");
  lit_59 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T25 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T24 = YPfab_gen(T25,LITREF(lit_58),LITREF(lit_59),YPfalse);
  VARSET(YgooSmathYmod,T24);
  lit_60 = YPPsym((P)"mod+");
  lit_61 = YPPlist(3,YPPsym((P)"<num>"),YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T27 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  T26 = YPfab_gen(T27,LITREF(lit_60),LITREF(lit_61),YPfalse);
  VARSET(YgooSmathYmodA,T26);
  lit_62 = YPPsym((P)"mod-");
  lit_63 = YPPlist(3,YPPsym((P)"<num>"),YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T29 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_62),LITREF(lit_63),YPfalse);
  VARSET(YgooSmathYmod_,T28);
  lit_64 = YPPsym((P)"rem");
  lit_65 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_64),LITREF(lit_65),YPfalse);
  VARSET(YgooSmathYrem,T30);
  lit_66 = YPPsym((P)"pow");
  lit_67 = YPPlist(2,YPPsym((P)"<num>"),YPPsym((P)"<num>"));
  T33 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T32 = YPfab_gen(T33,LITREF(lit_66),LITREF(lit_67),YPfalse);
  VARSET(YgooSmathYpow,T32);
  lit_68 = YPPsym((P)"pos?");
  lit_69 = YPPlist(1,YPPsym((P)"<num>"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_68),LITREF(lit_69),YPfalse);
  VARSET(YgooSmathYposQ,T34);
  lit_70 = YPPsym((P)"zero?");
  lit_71 = YPPlist(1,YPPsym((P)"<num>"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T36 = YPfab_gen(T37,LITREF(lit_70),LITREF(lit_71),YPfalse);
  VARSET(YgooSmathYzeroQ,T36);
  lit_72 = YPPsym((P)"neg?");
  lit_73 = YPPlist(1,YPPsym((P)"<num>"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_72),LITREF(lit_73),YPfalse);
  VARSET(YgooSmathYnegQ,T38);
  lit_74 = YPPsym((P)"neg");
  lit_75 = YPPlist(1,YPPsym((P)"<num>"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T40 = YPfab_gen(T41,LITREF(lit_74),LITREF(lit_75),YPfalse);
  VARSET(YgooSmathYneg,T40);
  lit_76 = YPPsym((P)"abs");
  lit_77 = YPPlist(1,YPPsym((P)"<num>"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T42 = YPfab_gen(T43,LITREF(lit_76),LITREF(lit_77),YPfalse);
  VARSET(YgooSmathYabs,T42);
  lit_78 = YPPsym((P)"|");
  lit_79 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T44 = YPfab_gen(T45,LITREF(lit_78),LITREF(lit_79),YPfalse);
  VARSET(YgooSmathYK,T44);
  lit_80 = YPPsym((P)"^");
  lit_81 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T46 = YPfab_gen(T47,LITREF(lit_80),LITREF(lit_81),YPfalse);
  VARSET(YgooSmathYC,T46);
  lit_82 = YPPsym((P)"&");
  lit_83 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T50 = YPfab_gen(T51,LITREF(lit_82),LITREF(lit_83),YPfalse);
  T49 = VARSET(YgooSmathYB,T50);
  T48 = T49;
  return T48;
}

P YgooSmathY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124;
DEFCREGS();
  lit_84 = YPPsym((P)"~");
  lit_85 = YPPlist(1,YPPsym((P)"<fixnum>"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_84),LITREF(lit_85),YPfalse);
  VARSET(YgooSmathYN,T0);
  lit_86 = YPPsym((P)"bit?");
  lit_87 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_86),LITREF(lit_87),YPfalse);
  VARSET(YgooSmathYbitQ,T2);
  lit_88 = YPPsym((P)">>");
  lit_89 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_88),LITREF(lit_89),YPfalse);
  VARSET(YgooSmathYGG,T4);
  lit_90 = YPPsym((P)"even?");
  lit_91 = YPPlist(1,YPPsym((P)"<fixnum>"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_90),LITREF(lit_91),YPfalse);
  VARSET(YgooSmathYevenQ,T6);
  lit_92 = YPPsym((P)"odd?");
  lit_93 = YPPlist(1,YPPsym((P)"<fixnum>"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_92),LITREF(lit_93),YPfalse);
  VARSET(YgooSmathYoddQ,T8);
  lit_94 = YPPsym((P)">>>");
  lit_95 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_94),LITREF(lit_95),YPfalse);
  VARSET(YgooSmathYGGG,T10);
  lit_96 = YPPsym((P)"<<");
  lit_97 = YPPlist(2,YPPsym((P)"<fixnum>"),YPPsym((P)"<fixnum>"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_96),LITREF(lit_97),YPfalse);
  VARSET(YgooSmathYLL,T12);
  lit_98 = YPPsym((P)"isqrt");
  lit_99 = YPPlist(1,YPPsym((P)"<int>"));
  T15 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_98),LITREF(lit_99),YPfalse);
  VARSET(YgooSmathYisqrt,T14);
  lit_100 = YPPsym((P)"power-of-two-ceil");
  lit_101 = YPPlist(1,YPPsym((P)"<int>"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_100),LITREF(lit_101),YPfalse);
  VARSET(YgooSmathYpower_of_two_ceil,T16);
  lit_102 = YPPsym((P)"flo-bits");
  lit_103 = YPPlist(1,YPPsym((P)"<flo>"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_102),LITREF(lit_103),YPfalse);
  VARSET(YgooSmathYflo_bits,T18);
  lit_104 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T20 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_0 = YPfab_met(FUNCODEREF(fun_contagious_call_0),T20,LITREF(lit_2),LITREF(lit_104),sloc(74),YPsb((P)"(fun ((f <fun>) (x <num>) (y <num>) => <any>) (def type (contagious-type x y)) (f (as type x) (as type y)))"));
  T22 = VARREF_OR(YgooSmathYcontagious_call,YPfalse);
  T23 = fun_contagious_call_0;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYcontagious_call,T21);
  lit_105 = YPPsym((P)"<");
  lit_106 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_1 = YPfab_met(FUNCODEREF(fun_L_1),T24,LITREF(lit_105),LITREF(lit_106),sloc(78),YPsb((P)"(fun ((x <num>) (y <num>) => <log>) (contagious-call < x y))"));
  T26 = VARREF_OR(YgooSmagYL,YPfalse);
  T27 = fun_L_1;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmagYL,T25);
  lit_107 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_2 = YPfab_met(FUNCODEREF(fun_A_2),T28,LITREF(lit_4),LITREF(lit_107),sloc(81),YPsb((P)"(fun ((x <num>) (y <num>) => <num>) (contagious-call + x y))"));
  T30 = VARREF_OR(YgooSmathYA,YPfalse);
  T31 = fun_A_2;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmathYA,T29);
  lit_108 = YPPsym((P)"1+");
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1A = YPfab_met(FUNCODEREF(YgooSmathY1A),T32,LITREF(lit_108),LITREF(lit_109),sloc(84),YPsb((P)"(fun ((x <num>) => <num>) (+ x 1))"));
  T33 = YgooSmathY1A;
  VARSET(YgooSmathY1A,T33);
  lit_110 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___4 = YPfab_met(FUNCODEREF(fun___4),T34,LITREF(lit_6),LITREF(lit_110),sloc(86),YPsb((P)"(fun ((x <num>) (y <num>) => <num>) (contagious-call - x y))"));
  T36 = VARREF_OR(YgooSmathY_,YPfalse);
  T37 = fun___4;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmathY_,T35);
  lit_111 = YPPsym((P)"1-");
  lit_112 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1_ = YPfab_met(FUNCODEREF(YgooSmathY1_),T38,LITREF(lit_111),LITREF(lit_112),sloc(89),YPsb((P)"(fun ((x <num>) => <num>) (- x 1))"));
  T39 = YgooSmathY1_;
  VARSET(YgooSmathY1_,T39);
  lit_113 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_6 = YPfab_met(FUNCODEREF(fun_T_6),T40,LITREF(lit_8),LITREF(lit_113),sloc(91),YPsb((P)"(fun ((x <num>) (y <num>) => <num>) (contagious-call * x y))"));
  T42 = VARREF_OR(YgooSmathYT,YPfalse);
  T43 = fun_T_6;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYT,T41);
  lit_114 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_7 = YPfab_met(FUNCODEREF(fun_S_7),T44,LITREF(lit_10),LITREF(lit_114),sloc(94),YPsb((P)"(fun ((x <num>) (y <num>) => <num>) (contagious-call / x y))"));
  T46 = VARREF_OR(YgooSmathYS,YPfalse);
  T47 = fun_S_7;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSmathYS,T45);
  lit_115 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_8 = YPfab_met(FUNCODEREF(fun_atan2_8),T48,LITREF(lit_30),LITREF(lit_115),sloc(97),YPsb((P)"(fun ((y <num>) (x <num>) => <num>) (contagious-call atan2 y x))"));
  T50 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T51 = fun_atan2_8;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmathYatan2,T49);
  lit_116 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_9 = YPfab_met(FUNCODEREF(fun_logn_9),T52,LITREF(lit_36),LITREF(lit_116),sloc(100),YPsb((P)"(fun ((x <num>) (b <num>) => <num>) (contagious-call logn x b))"));
  T54 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T55 = fun_logn_9;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmathYlogn,T53);
  lit_117 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_10 = YPfab_met(FUNCODEREF(fun_floor_10),T56,LITREF(lit_38),LITREF(lit_117),sloc(103),YPsb((P)"(fun ((x <num>) => <int>) (elt (contagious-call floor/ x 1) 0))"));
  T58 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T59 = fun_floor_10;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmathYfloor,T57);
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_11 = YPfab_met(FUNCODEREF(fun_ceil_11),T60,LITREF(lit_40),LITREF(lit_118),sloc(106),YPsb((P)"(fun ((x <num>) => <int>) (elt (contagious-call ceil/ x 1) 0))"));
  T62 = VARREF_OR(YgooSmathYceil,YPfalse);
  T63 = fun_ceil_11;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYceil,T61);
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_12 = YPfab_met(FUNCODEREF(fun_round_12),T64,LITREF(lit_42),LITREF(lit_119),sloc(109),YPsb((P)"(fun ((x <num>) => <int>) (elt (contagious-call round/ x 1) 0))"));
  T66 = VARREF_OR(YgooSmathYround,YPfalse);
  T67 = fun_round_12;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYround,T65);
  lit_120 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_121 = YPflo(FLOINT(10.0));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_13 = YPfab_met(FUNCODEREF(fun_round_to_13),T68,LITREF(lit_44),LITREF(lit_120),sloc(112),YPsb((P)"(fun ((x <num>) (n <int>) => <num>) (if (= n 0) (round x) (let ((f (pow 10.0 n))) (x (/ (round (* x f)) f)))))"));
  T70 = VARREF_OR(YgooSmathYround_to,YPfalse);
  T71 = fun_round_to_13;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathYround_to,T69);
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_14 = YPfab_met(FUNCODEREF(fun_trunc_14),T72,LITREF(lit_46),LITREF(lit_122),sloc(118),YPsb((P)"(fun ((x <num>) => <int>) (elt (contagious-call trunc/ x 1) 0))"));
  T74 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T75 = fun_trunc_14;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYtrunc,T73);
  lit_123 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T77 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T77,Ynil);
  fun_floorS_15 = YPfab_met(FUNCODEREF(fun_floorS_15),T76,LITREF(lit_48),LITREF(lit_123),sloc(121),YPsb((P)"(fun ((real <num>) (divisor <num>) => (tup (x <int>) (rem <num>))) (def (tup (integer <int>) (remainder <num>)) (trunc/ real divisor)) (if (and (not (zero? remainder)) (if (neg? divisor) (pos? real) (neg? real))) (tup (- integer 1) (+ remainder divisor)) (tup integer remainder)))"));
  T79 = VARREF_OR(YgooSmathYfloorS,YPfalse);
  T80 = fun_floorS_15;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooSmathYfloorS,T78);
  lit_124 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T82 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T81 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T82,Ynil);
  fun_ceilS_16 = YPfab_met(FUNCODEREF(fun_ceilS_16),T81,LITREF(lit_50),LITREF(lit_124),sloc(130),YPsb((P)"(fun ((real <num>) (divisor <num>) => (tup (x <int>) (rem <num>))) (def (tup (integer <int>) (remainder <num>)) (trunc/ real divisor)) (if (and (not (zero? remainder)) (if (neg? divisor) (neg? real) (pos? real))) (tup (+ integer 1) (- remainder divisor)) (tup integer remainder)))"));
  T84 = VARREF_OR(YgooSmathYceilS,YPfalse);
  T85 = fun_ceilS_16;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSmathYceilS,T83);
  lit_125 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_126 = YPflo(FLOINT(2.0));
  T87 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T87,Ynil);
  fun_roundS_17 = YPfab_met(FUNCODEREF(fun_roundS_17),T86,LITREF(lit_52),LITREF(lit_125),sloc(139),YPsb((P)"(fun ((real <num>) (divisor <num>) => (tup (x <int>) (rem <num>))) (def (tup (integer <int>) (remainder <num>)) (trunc/ real divisor)) (def (threshold <num>) (/ (abs divisor) 2.0)) (if (or (> remainder threshold) (and (= remainder threshold) (odd? integer))) (if (neg? divisor) (tup (- integer 1) (+ remainder divisor)) (tup (+ integer 1) (- remainder divisor))) (if (let ((minus-threshold (neg threshold))) (or (< remainder minus-threshold) (and (= remainder minus-threshold) (odd? integer)))) (if (neg? divisor) (tup (+ integer 1) (- remainder divisor)) (tup (- integer 1) (+ remainder divisor))) (tup integer remainder))))"));
  T89 = VARREF_OR(YgooSmathYroundS,YPfalse);
  T90 = fun_roundS_17;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YgooSmathYroundS,T88);
  lit_127 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T92 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T91 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T92,Ynil);
  fun_truncS_18 = YPfab_met(FUNCODEREF(fun_truncS_18),T91,LITREF(lit_54),LITREF(lit_127),sloc(155),YPsb((P)"(fun ((real <num>) (divisor <num>) => (tup (x <int>) (rem <num>))) (contagious-call trunc/ real divisor))"));
  T94 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T95 = fun_truncS_18;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSmathYtruncS,T93);
  lit_128 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_19 = YPfab_met(FUNCODEREF(fun_div_19),T96,LITREF(lit_56),LITREF(lit_128),sloc(158),YPsb((P)"(fun ((x <num>) (y <num>) => <num>) (%telt (trunc/ x y) (%iu 0)))"));
  T98 = VARREF_OR(YgooSmathYdiv,YPfalse);
  T99 = fun_div_19;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYdiv,T97);
  lit_129 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_20 = YPfab_met(FUNCODEREF(fun_mod_20),T100,LITREF(lit_58),LITREF(lit_129),sloc(161),YPsb((P)"(fun ((real <num>) (divisor <num>) => <num>) (def (tup _ (remainder <num>)) (floor/ real divisor)) remainder)"));
  T102 = VARREF_OR(YgooSmathYmod,YPfalse);
  T103 = fun_mod_20;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYmod,T101);
  lit_130 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T104 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  fun_modA_21 = YPfab_met(FUNCODEREF(fun_modA_21),T104,LITREF(lit_60),LITREF(lit_130),sloc(165),YPsb((P)"(fun ((i <num>) (j <num>) (n <num>) => <num>) (mod (+ i j) n))"));
  T106 = VARREF_OR(YgooSmathYmodA,YPfalse);
  T107 = fun_modA_21;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYmodA,T105);
  lit_131 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T108 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  fun_mod__22 = YPfab_met(FUNCODEREF(fun_mod__22),T108,LITREF(lit_62),LITREF(lit_131),sloc(168),YPsb((P)"(fun ((i <num>) (j <num>) (n <num>) => <num>) (mod (- i j) n))"));
  T110 = VARREF_OR(YgooSmathYmod_,YPfalse);
  T111 = fun_mod__22;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSmathYmod_,T109);
  lit_132 = YPPlist(1,YPPsym((P)"exp"));
  lit_133 = YPPlist(1,YPPsym((P)"return"));
  lit_134 = YPPsym((P)"x-1344");
  lit_135 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_136 = YPPsym((P)"modincf");
  lit_137 = YPsb((P)"Match Pattern Failure");
  lit_138 = YPPsym((P)"opf");
  lit_139 = YPPsym((P)"_");
  lit_140 = Ynil;
  T114 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1344_23 = YPfab_met(FUNCODEREF(fun_x_1344_23),T114,LITREF(lit_134),LITREF(lit_135),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'modincf exp)))"));
  T113 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T113,YPfalse,LITREF(lit_133),YPfalse,YPsb((P)"(fun (return) (loc ((x-1344 ((msg <str>) (args ...)) (return (macro-error 'modincf exp)))) (let ((x-1343 exp)) (let ((place #f) (max #f)) (if (isa? x-1343 <lst>) (let ((x-1343 (match-atom x-1343 'modincf x-1344))) (let ((x-1343 (seq (set place (match-unquote x-1343 x-1344)) (tail x-1343)))) (let ((x-1343 (seq (set max (match-unquote x-1343 x-1344)) (tail x-1343)))) (let ((x-1343 (seq (let ((x-1343 (match-sublist x-1343 x-1344))) (match-nul-list x-1343 x-1344)) (tail x-1343)))) (match-nul-list x-1343 x-1344))))) (x-1344 Match Pattern Failure x-1343)) (quasiquote (opf (unquote place) (mod+ _ 1 (unquote max))))))))"));
  T112 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T112,YPfalse,LITREF(lit_132),YPfalse,YPsb((P)"(fun (exp) (mif ((modincf (unquote place) (unquote max)) exp) (quasiquote (opf (unquote place) (mod+ _ 1 (unquote max)))) (macro-error 'modincf exp)))"));
  T115 = fun_25;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T115);
  lit_141 = YPPlist(1,YPPsym((P)"exp"));
  lit_142 = YPPlist(1,YPPsym((P)"return"));
  lit_143 = YPPsym((P)"x-1348");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_145 = YPPsym((P)"moddecf");
  T122 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T121 = fun_x_1348_26 = YPfab_met(FUNCODEREF(fun_x_1348_26),T122,LITREF(lit_143),LITREF(lit_144),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'moddecf exp)))"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T119 = fun_27 = YPfab_met(FUNCODEREF(fun_27),T120,YPfalse,LITREF(lit_142),YPfalse,YPsb((P)"(fun (return) (loc ((x-1348 ((msg <str>) (args ...)) (return (macro-error 'moddecf exp)))) (let ((x-1347 exp)) (let ((place #f) (max #f)) (if (isa? x-1347 <lst>) (let ((x-1347 (match-atom x-1347 'moddecf x-1348))) (let ((x-1347 (seq (set place (match-unquote x-1347 x-1348)) (tail x-1347)))) (let ((x-1347 (seq (set max (match-unquote x-1347 x-1348)) (tail x-1347)))) (let ((x-1347 (seq (let ((x-1347 (match-sublist x-1347 x-1348))) (match-nul-list x-1347 x-1348)) (tail x-1347)))) (match-nul-list x-1347 x-1348))))) (x-1348 Match Pattern Failure x-1347)) (quasiquote (opf (unquote place) (mod- _ 1 (unquote max))))))))"));
  T118 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T117 = fun_28 = YPfab_met(FUNCODEREF(fun_28),T118,YPfalse,LITREF(lit_141),YPfalse,YPsb((P)"(fun (exp) (mif ((moddecf (unquote place) (unquote max)) exp) (quasiquote (opf (unquote place) (mod- _ 1 (unquote max)))) (macro-error 'moddecf exp)))"));
  T124 = fun_28;
  T123 = YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T124);
  T116 = T123;
  return T116;
}

P YgooSmathY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149;
DEFCREGS();
  lit_146 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T0 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_29 = YPfab_met(FUNCODEREF(fun_rem_29),T0,LITREF(lit_64),LITREF(lit_146),sloc(177),YPsb((P)"(fun ((real <num>) (divisor <num>) => <num>) (def (tup _ (remainder <num>)) (trunc/ real divisor)) remainder)"));
  T2 = VARREF_OR(YgooSmathYrem,YPfalse);
  T3 = fun_rem_29;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYrem,T1);
  lit_147 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_30 = YPfab_met(FUNCODEREF(fun_pow_30),T4,LITREF(lit_66),LITREF(lit_147),sloc(181),YPsb((P)"(fun ((base <num>) (n <num>) => <num>) (contagious-call pow base n))"));
  T6 = VARREF_OR(YgooSmathYpow,YPfalse);
  T7 = fun_pow_30;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSmathYpow,T5);
  lit_148 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_31 = YPfab_met(FUNCODEREF(fun_posQ_31),T8,LITREF(lit_68),LITREF(lit_148),sloc(184),YPsb((P)"(fun ((x <num>) => <log>) (> x 0))"));
  T10 = VARREF_OR(YgooSmathYposQ,YPfalse);
  T11 = fun_posQ_31;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSmathYposQ,T9);
  lit_149 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_32 = YPfab_met(FUNCODEREF(fun_zeroQ_32),T12,LITREF(lit_70),LITREF(lit_149),sloc(187),YPsb((P)"(fun ((x <num>) => <log>) (contagious-call = x 0))"));
  T14 = VARREF_OR(YgooSmathYzeroQ,YPfalse);
  T15 = fun_zeroQ_32;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYzeroQ,T13);
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_33 = YPfab_met(FUNCODEREF(fun_negQ_33),T16,LITREF(lit_72),LITREF(lit_150),sloc(190),YPsb((P)"(fun ((x <num>) => <log>) (< x 0))"));
  T18 = VARREF_OR(YgooSmathYnegQ,YPfalse);
  T19 = fun_negQ_33;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYnegQ,T17);
  lit_151 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_34 = YPfab_met(FUNCODEREF(fun_neg_34),T20,LITREF(lit_74),LITREF(lit_151),sloc(193),YPsb((P)"(fun ((x <num>) => <num>) (- 0 x))"));
  T22 = VARREF_OR(YgooSmathYneg,YPfalse);
  T23 = fun_neg_34;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYneg,T21);
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_35 = YPfab_met(FUNCODEREF(fun_abs_35),T24,LITREF(lit_76),LITREF(lit_152),sloc(196),YPsb((P)"(fun ((x <num>) => <num>) (if (neg? x) (neg x) x))"));
  T26 = VARREF_OR(YgooSmathYabs,YPfalse);
  T27 = fun_abs_35;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmathYabs,T25);
  lit_153 = YPPsym((P)"to-str");
  lit_154 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_36 = YPfab_met(FUNCODEREF(fun_to_str_36),T28,LITREF(lit_153),LITREF(lit_154),sloc(199),YPsb((P)"(fun ((x <num>) => <str>) (num-to-str x))"));
  T30 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T31 = fun_to_str_36;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSanyYto_str,T29);
  lit_155 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T33,Ynil);
  fun_contagious_type_37 = YPfab_met(FUNCODEREF(fun_contagious_type_37),T32,LITREF(lit_0),LITREF(lit_155),sloc(204),YPsb((P)"(fun ((x <int>) (y <int>) => (t< <int>)) <int>)"));
  T35 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T36 = fun_contagious_type_37;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooSmathYcontagious_type,T34);
  lit_156 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T38,Ynil);
  fun_contagious_type_38 = YPfab_met(FUNCODEREF(fun_contagious_type_38),T37,LITREF(lit_0),LITREF(lit_156),sloc(207),YPsb((P)"(fun ((x <flo>) (y <flo>) => (t= <flo>)) <flo>)"));
  T40 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T41 = fun_contagious_type_38;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathYcontagious_type,T39);
  lit_157 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T43 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T43,Ynil);
  fun_contagious_type_39 = YPfab_met(FUNCODEREF(fun_contagious_type_39),T42,LITREF(lit_0),LITREF(lit_157),sloc(210),YPsb((P)"(fun ((x <int>) (y <flo>) => (t= <flo>)) <flo>)"));
  T45 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T46 = fun_contagious_type_39;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSmathYcontagious_type,T44);
  lit_158 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T48 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T48,Ynil);
  fun_contagious_type_40 = YPfab_met(FUNCODEREF(fun_contagious_type_40),T47,LITREF(lit_0),LITREF(lit_158),sloc(213),YPsb((P)"(fun ((x <flo>) (y <int>) => (t= <flo>)) <flo>)"));
  T50 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T51 = fun_contagious_type_40;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmathYcontagious_type,T49);
  lit_159 = YPPsym((P)"==");
  lit_160 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_41 = YPfab_met(FUNCODEREF(fun_EE_41),T52,LITREF(lit_159),LITREF(lit_160),sloc(216),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <log>) (%bb (%i= (%iu x) (%iu y))))"));
  T54 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T55 = fun_EE_41;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmacrosYEE,T53);
  lit_161 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_42 = YPfab_met(FUNCODEREF(fun_L_42),T56,LITREF(lit_105),LITREF(lit_161),sloc(219),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <log>) (%bb (%i< (%iu x) (%iu y))))"));
  T58 = VARREF_OR(YgooSmagYL,YPfalse);
  T59 = fun_L_42;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmagYL,T57);
  lit_162 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_A_43 = YPfab_met(FUNCODEREF(fun_A_43),T60,LITREF(lit_4),LITREF(lit_162),sloc(222),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <fixnum>) (%ib (%i+ (%iu x) (%iu y))))"));
  T62 = VARREF_OR(YgooSmathYA,YPfalse);
  T63 = fun_A_43;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYA,T61);
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun___44 = YPfab_met(FUNCODEREF(fun___44),T64,LITREF(lit_6),LITREF(lit_163),sloc(225),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <fixnum>) (%ib (%i- (%iu x) (%iu y))))"));
  T66 = VARREF_OR(YgooSmathY_,YPfalse);
  T67 = fun___44;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathY_,T65);
  lit_164 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_T_45 = YPfab_met(FUNCODEREF(fun_T_45),T68,LITREF(lit_8),LITREF(lit_164),sloc(228),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <fixnum>) (%ib (%i* (%iu x) (%iu y))))"));
  T70 = VARREF_OR(YgooSmathYT,YPfalse);
  T71 = fun_T_45;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathYT,T69);
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_166 = YPsb((P)"No int divide, consider trunc/");
  T72 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_46 = YPfab_met(FUNCODEREF(fun_S_46),T72,LITREF(lit_10),LITREF(lit_165),sloc(231),YPsb((P)"(fun ((x <int>) (y <int>) => <int>) (arithmetic-error No int divide, consider trunc/))"));
  T74 = VARREF_OR(YgooSmathYS,YPfalse);
  T75 = fun_S_46;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYS,T73);
  lit_167 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_47 = YPfab_met(FUNCODEREF(fun_floor_47),T76,LITREF(lit_38),LITREF(lit_167),sloc(234),YPsb((P)"(fun ((x <int>) => <int>) x)"));
  T78 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T79 = fun_floor_47;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYfloor,T77);
  lit_168 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_48 = YPfab_met(FUNCODEREF(fun_ceil_48),T80,LITREF(lit_40),LITREF(lit_168),sloc(236),YPsb((P)"(fun ((x <int>) => <int>) x)"));
  T82 = VARREF_OR(YgooSmathYceil,YPfalse);
  T83 = fun_ceil_48;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYceil,T81);
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_49 = YPfab_met(FUNCODEREF(fun_round_49),T84,LITREF(lit_42),LITREF(lit_169),sloc(238),YPsb((P)"(fun ((x <int>) => <int>) x)"));
  T86 = VARREF_OR(YgooSmathYround,YPfalse);
  T87 = fun_round_49;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYround,T85);
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_50 = YPfab_met(FUNCODEREF(fun_trunc_50),T88,LITREF(lit_46),LITREF(lit_170),sloc(240),YPsb((P)"(fun ((x <int>) => <int>) x)"));
  T90 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T91 = fun_trunc_50;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSmathYtrunc,T89);
  lit_171 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T93 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T92 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T93,Ynil);
  fun_truncS_51 = YPfab_met(FUNCODEREF(fun_truncS_51),T92,LITREF(lit_54),LITREF(lit_171),sloc(242),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => (tup (x <fixnum>) (rem <fixnum>))) (def result (%ib (%it/ (%iu x) (%iu y)))) (tup result (- x (* result y))))"));
  T95 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T96 = fun_truncS_51;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YgooSmathYtruncS,T94);
  lit_172 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_52 = YPfab_met(FUNCODEREF(fun_mod_52),T97,LITREF(lit_58),LITREF(lit_172),sloc(246),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <fixnum>) (def res (%ib (%im (%iu x) (%iu y)))) (if (< res 0) (if (> y 0) (+ res y) (- res y)) res))"));
  T99 = VARREF_OR(YgooSmathYmod,YPfalse);
  T100 = fun_mod_52;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YgooSmathYmod,T98);
  lit_173 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_53 = YPfab_met(FUNCODEREF(fun_pow_53),T101,LITREF(lit_66),LITREF(lit_173),sloc(254),YPsb((P)"(fun ((x <fixnum>) (n <fixnum>) => <num>) (cond ((neg? n) (/ 1 (pow x (neg n)))) ((= x 2) (<< 1 n)) ((neg? x) (if (odd? n) (neg (pow (neg x) n)) (pow (neg x) n))) (#t (rep loop (((x <int>) (if (> n 1) (* x x) x)) ((p <int>) (>> n 1)) ((y <int>) (if (odd? n) x 1))) (if (zero? p) y (loop (if (> p 1) (* x x) x) (>> p 1) (if (odd? p) (* x y) y)))))))"));
  T103 = VARREF_OR(YgooSmathYpow,YPfalse);
  T104 = fun_pow_53;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YgooSmathYpow,T102);
  lit_174 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_54 = YPfab_met(FUNCODEREF(fun_K_54),T105,LITREF(lit_78),LITREF(lit_174),sloc(269),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <int>) (%ib (%iv (%iu x) (%iu y))))"));
  T107 = VARREF_OR(YgooSmathYK,YPfalse);
  T108 = fun_K_54;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YgooSmathYK,T106);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T109 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_55 = YPfab_met(FUNCODEREF(fun_C_55),T109,LITREF(lit_80),LITREF(lit_175),sloc(272),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <int>) (%ib (%i^ (%iu x) (%iu y))))"));
  T111 = VARREF_OR(YgooSmathYC,YPfalse);
  T112 = fun_C_55;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YgooSmathYC,T110);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T113 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_56 = YPfab_met(FUNCODEREF(fun_B_56),T113,LITREF(lit_82),LITREF(lit_176),sloc(275),YPsb((P)"(fun ((x <fixnum>) (y <fixnum>) => <int>) (%ib (%i& (%iu x) (%iu y))))"));
  T115 = VARREF_OR(YgooSmathYB,YPfalse);
  T116 = fun_B_56;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSmathYB,T114);
  lit_177 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_57 = YPfab_met(FUNCODEREF(fun_N_57),T117,LITREF(lit_84),LITREF(lit_177),sloc(278),YPsb((P)"(fun ((x <fixnum>) => <fixnum>) (%ib (%i! (%iu x))))"));
  T119 = VARREF_OR(YgooSmathYN,YPfalse);
  T120 = fun_N_57;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSmathYN,T118);
  lit_178 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T121 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_58 = YPfab_met(FUNCODEREF(fun_bitQ_58),T121,LITREF(lit_86),LITREF(lit_178),sloc(281),YPsb((P)"(fun ((o <fixnum>) (x <fixnum>) => <fixnum>) (%ib (%i? (%iu o) (%iu x))))"));
  T123 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T124 = fun_bitQ_58;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSmathYbitQ,T122);
  lit_179 = YPPlist(1,YPPsym((P)"x"));
  T125 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_59 = YPfab_met(FUNCODEREF(fun_evenQ_59),T125,LITREF(lit_90),LITREF(lit_179),sloc(284),YPsb((P)"(fun ((x <fixnum>) => <log>) (zero? (& x 1)))"));
  T127 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T128 = fun_evenQ_59;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooSmathYevenQ,T126);
  lit_180 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_60 = YPfab_met(FUNCODEREF(fun_oddQ_60),T129,LITREF(lit_92),LITREF(lit_180),sloc(287),YPsb((P)"(fun ((x <fixnum>) => <log>) (not (even? x)))"));
  T131 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T132 = fun_oddQ_60;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YgooSmathYoddQ,T130);
  lit_181 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T133 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_61 = YPfab_met(FUNCODEREF(fun_GG_61),T133,LITREF(lit_88),LITREF(lit_181),sloc(290),YPsb((P)"(fun ((x <fixnum>) (a <fixnum>) => <fixnum>) (%ib (%i>> (%iu x) (%iu a))))"));
  T135 = VARREF_OR(YgooSmathYGG,YPfalse);
  T136 = fun_GG_61;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YgooSmathYGG,T134);
  lit_182 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_62 = YPfab_met(FUNCODEREF(fun_GGG_62),T137,LITREF(lit_94),LITREF(lit_182),sloc(293),YPsb((P)"(fun ((x <fixnum>) (a <fixnum>) => <fixnum>) (%ib (%i>>> (%iu x) (%iu a))))"));
  T139 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T140 = fun_GGG_62;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YgooSmathYGGG,T138);
  lit_183 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_63 = YPfab_met(FUNCODEREF(fun_LL_63),T141,LITREF(lit_96),LITREF(lit_183),sloc(296),YPsb((P)"(fun ((x <fixnum>) (a <fixnum>) => <fixnum>) (%ib (%i<< (%iu x) (%iu a))))"));
  T143 = VARREF_OR(YgooSmathYLL,YPfalse);
  T144 = fun_LL_63;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YgooSmathYLL,T142);
  lit_184 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_64 = YPfab_met(FUNCODEREF(fun_power_of_two_ceil_64),T145,LITREF(lit_100),LITREF(lit_184),sloc(299),YPsb((P)"(fun ((x <int>) => <int>) (rep search (((po2 <int>) 1)) (if (> po2 x) po2 (search (+ po2 po2)))))"));
  T147 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T148 = fun_power_of_two_ceil_64;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YgooSmathYpower_of_two_ceil,T146);
  T149 = YPfalse;
  return T149;
}

P YgooSmathY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131;
DEFCREGS();
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPfab_met(FUNCODEREF(YgooSmathYflo_bits),T0,LITREF(lit_102),LITREF(lit_185),sloc(333),YPsb((P)"(fun ((x <flo>) => <int>) (%ib (%flo-bits (%fu x))))"));
  T1 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T1);
  lit_186 = YPPsym((P)"as");
  lit_187 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T3 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T2 = YPfab_sig(YPPlist(2,T3,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_66 = YPfab_met(FUNCODEREF(fun_as_66),T2,LITREF(lit_186),LITREF(lit_187),sloc(336),YPsb((P)"(fun ((_ (t= <flo>)) (x <fixnum>) => <flo>) (%fb (%fi2f (%iu x))))"));
  T5 = VARREF_OR(YgooStypesYas,YPfalse);
  T6 = fun_as_66;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooStypesYas,T4);
  lit_188 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_67 = YPfab_met(FUNCODEREF(fun_EE_67),T7,LITREF(lit_159),LITREF(lit_188),sloc(339),YPsb((P)"(fun ((x <flo>) (y <flo>) => <log>) (%bb (%f= (%fu x) (%fu y))))"));
  T9 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T10 = fun_EE_67;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YgooSmacrosYEE,T8);
  lit_189 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_68 = YPfab_met(FUNCODEREF(fun_L_68),T11,LITREF(lit_105),LITREF(lit_189),sloc(342),YPsb((P)"(fun ((x <flo>) (y <flo>) => <log>) (%bb (%f< (%fu x) (%fu y))))"));
  T13 = VARREF_OR(YgooSmagYL,YPfalse);
  T14 = fun_L_68;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSmagYL,T12);
  lit_190 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_69 = YPfab_met(FUNCODEREF(fun_A_69),T15,LITREF(lit_4),LITREF(lit_190),sloc(345),YPsb((P)"(fun ((x <flo>) (y <flo>) => <flo>) (%fb (%f+ (%fu x) (%fu y))))"));
  T17 = VARREF_OR(YgooSmathYA,YPfalse);
  T18 = fun_A_69;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSmathYA,T16);
  lit_191 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___70 = YPfab_met(FUNCODEREF(fun___70),T19,LITREF(lit_6),LITREF(lit_191),sloc(348),YPsb((P)"(fun ((x <flo>) (y <flo>) => <flo>) (%fb (%f- (%fu x) (%fu y))))"));
  T21 = VARREF_OR(YgooSmathY_,YPfalse);
  T22 = fun___70;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSmathY_,T20);
  lit_192 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_71 = YPfab_met(FUNCODEREF(fun_T_71),T23,LITREF(lit_8),LITREF(lit_192),sloc(351),YPsb((P)"(fun ((x <flo>) (y <flo>) => <flo>) (%fb (%f* (%fu x) (%fu y))))"));
  T25 = VARREF_OR(YgooSmathYT,YPfalse);
  T26 = fun_T_71;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSmathYT,T24);
  lit_193 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_72 = YPfab_met(FUNCODEREF(fun_S_72),T27,LITREF(lit_10),LITREF(lit_193),sloc(354),YPsb((P)"(fun ((x <flo>) (y <flo>) => <flo>) (%fb (%f/ (%fu x) (%fu y))))"));
  T29 = VARREF_OR(YgooSmathYS,YPfalse);
  T30 = fun_S_72;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSmathYS,T28);
  lit_194 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T32,Ynil);
  fun_truncS_73 = YPfab_met(FUNCODEREF(fun_truncS_73),T31,LITREF(lit_54),LITREF(lit_194),sloc(357),YPsb((P)"(fun ((x <flo>) (y <flo>) => (tup (z <fixnum>) (rem <flo>))) (def divided (/ x y)) (def result (%ib (%ft (%fu divided)))) (tup result (* y (- divided (as <flo> result)))))"));
  T34 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T35 = fun_truncS_73;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYtruncS,T33);
  lit_195 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_74 = YPfab_met(FUNCODEREF(fun_pow_74),T36,LITREF(lit_66),LITREF(lit_195),sloc(362),YPsb((P)"(fun ((x <flo>) (n <flo>) => <flo>) (def res (%fb (%fpow (%fu (abs x)) (%fu n)))) (if (and (neg? x) (odd? n)) (neg res) res))"));
  T38 = VARREF_OR(YgooSmathYpow,YPfalse);
  T39 = fun_pow_74;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYpow,T37);
  lit_196 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_196));
  lit_197 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_197));
  lit_198 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_75 = YPfab_met(FUNCODEREF(fun_isqrt_75),T40,LITREF(lit_98),LITREF(lit_198),sloc(369),YPsb((P)"(fun ((x <int>) => <int>) (round (sqrt (as <flo> x))))"));
  T42 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T43 = fun_isqrt_75;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYisqrt,T41);
  lit_199 = YPPlist(1,YPPsym((P)"exp"));
  lit_200 = YPPlist(1,YPPsym((P)"return"));
  lit_201 = YPPsym((P)"x-1352");
  lit_202 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_203 = YPPsym((P)"def-unary-trans");
  lit_204 = YPsb((P)"%f");
  lit_205 = YPPsym((P)"seq");
  lit_206 = YPPsym((P)"dg");
  lit_207 = YPPsym((P)"<num>");
  lit_208 = YPPsym((P)"=>");
  lit_209 = YPPsym((P)"dm");
  lit_210 = YPPsym((P)"<int>");
  lit_211 = YPPsym((P)"<flo>");
  lit_212 = YPPsym((P)"%fb");
  lit_213 = YPPsym((P)"%fu");
  T46 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1352_76 = YPfab_met(FUNCODEREF(fun_x_1352_76),T46,LITREF(lit_201),LITREF(lit_202),YPfalse,YPsb((P)"(fun ((msg <str>) (args ...)) (return (macro-error 'def-unary-trans exp)))"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPfab_met(FUNCODEREF(fun_77),T45,YPfalse,LITREF(lit_200),YPfalse,YPsb((P)"(fun (return) (loc ((x-1352 ((msg <str>) (args ...)) (return (macro-error 'def-unary-trans exp)))) (let ((x-1351 exp)) (let ((name #f) (param #f) (prefix #f)) (if (isa? x-1351 <lst>) (let ((x-1351 (match-atom x-1351 'def-unary-trans x-1352))) (let ((x-1351 (seq (set name (match-unquote x-1351 x-1352)) (tail x-1351)))) (let ((x-1351 (seq (let ((x-1351 (match-sublist x-1351 x-1352))) (let ((x-1351 (seq (set param (match-unquote x-1351 x-1352)) (tail x-1351)))) (let ((x-1351 (seq (let ((x-1351 (match-sublist x-1351 x-1352))) (match-nul-list x-1351 x-1352)) (tail x-1351)))) (match-nul-list x-1351 x-1352)))) (tail x-1351)))) (let ((x-1351 (seq (set prefix x-1351) '()))) (let ((x-1351 (seq (let ((x-1351 (match-sublist x-1351 x-1352))) (match-nul-list x-1351 x-1352)) (tail x-1351)))) (match-nul-list x-1351 x-1352)))))) (x-1352 Match Pattern Failure x-1351)) (let ((%fp (cat-sym %f name))) (quasiquote (seq (dg (unquote name) (((unquote param) <num>) => <num>)) (dm (unquote name) (((unquote param) <int>) => <flo>) (unquote-splicing prefix) ((unquote name) (as <flo> (unquote param)))) (dm (unquote name) (((unquote param) <flo>) => <flo>) (unquote-splicing prefix) (%fb ((unquote %fp) (%fu (unquote param))))))))))))"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPfab_met(FUNCODEREF(fun_78),T44,YPfalse,LITREF(lit_199),YPfalse,YPsb((P)"(fun (exp) (mif ((def-unary-trans (unquote name) ((unquote param)) (unquote-splicing prefix)) exp) (let ((%fp (cat-sym %f name))) (quasiquote (seq (dg (unquote name) (((unquote param) <num>) => <num>)) (dm (unquote name) (((unquote param) <int>) => <flo>) (unquote-splicing prefix) ((unquote name) (as <flo> (unquote param)))) (dm (unquote name) (((unquote param) <flo>) => <flo>) (unquote-splicing prefix) (%fb ((unquote %fp) (%fu (unquote param)))))))) (macro-error 'def-unary-trans exp)))"));
  T47 = fun_78;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T47);
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T48 = YPfab_gen(T49,LITREF(lit_32),LITREF(lit_214),YPfalse);
  VARSET(YgooSmathYsqrt,T48);
  lit_215 = YPPlist(1,YPPsym((P)"x"));
  lit_216 = YPsb((P)"SQRT would produce complex number");
  T50 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_79 = YPfab_met(FUNCODEREF(fun_sqrt_79),T50,LITREF(lit_32),LITREF(lit_215),sloc(382),YPsb((P)"(fun ((x <int>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (sqrt (as <flo> x)))"));
  T52 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T53 = fun_sqrt_79;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYsqrt,T51);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_80 = YPfab_met(FUNCODEREF(fun_sqrt_80),T54,LITREF(lit_32),LITREF(lit_217),sloc(382),YPsb((P)"(fun ((x <flo>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (%fb (%fsqrt (%fu x))))"));
  T56 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T57 = fun_sqrt_80;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYsqrt,T55);
  lit_218 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T58 = YPfab_gen(T59,LITREF(lit_34),LITREF(lit_218),YPfalse);
  VARSET(YgooSmathYlog,T58);
  lit_219 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_81 = YPfab_met(FUNCODEREF(fun_log_81),T60,LITREF(lit_34),LITREF(lit_219),sloc(385),YPsb((P)"(fun ((x <int>) => <flo>) (log (as <flo> x)))"));
  T62 = VARREF_OR(YgooSmathYlog,YPfalse);
  T63 = fun_log_81;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYlog,T61);
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_82 = YPfab_met(FUNCODEREF(fun_log_82),T64,LITREF(lit_34),LITREF(lit_220),sloc(385),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%flog (%fu x))))"));
  T66 = VARREF_OR(YgooSmathYlog,YPfalse);
  T67 = fun_log_82;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYlog,T65);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T68 = YPfab_gen(T69,LITREF(lit_12),LITREF(lit_221),YPfalse);
  VARSET(YgooSmathYsin,T68);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_83 = YPfab_met(FUNCODEREF(fun_sin_83),T70,LITREF(lit_12),LITREF(lit_222),sloc(386),YPsb((P)"(fun ((x <int>) => <flo>) (sin (as <flo> x)))"));
  T72 = VARREF_OR(YgooSmathYsin,YPfalse);
  T73 = fun_sin_83;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYsin,T71);
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_84 = YPfab_met(FUNCODEREF(fun_sin_84),T74,LITREF(lit_12),LITREF(lit_223),sloc(386),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%fsin (%fu x))))"));
  T76 = VARREF_OR(YgooSmathYsin,YPfalse);
  T77 = fun_sin_84;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmathYsin,T75);
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T78 = YPfab_gen(T79,LITREF(lit_14),LITREF(lit_224),YPfalse);
  VARSET(YgooSmathYcos,T78);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_85 = YPfab_met(FUNCODEREF(fun_cos_85),T80,LITREF(lit_14),LITREF(lit_225),sloc(387),YPsb((P)"(fun ((x <int>) => <flo>) (cos (as <flo> x)))"));
  T82 = VARREF_OR(YgooSmathYcos,YPfalse);
  T83 = fun_cos_85;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYcos,T81);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_86 = YPfab_met(FUNCODEREF(fun_cos_86),T84,LITREF(lit_14),LITREF(lit_226),sloc(387),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%fcos (%fu x))))"));
  T86 = VARREF_OR(YgooSmathYcos,YPfalse);
  T87 = fun_cos_86;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYcos,T85);
  lit_227 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T88 = YPfab_gen(T89,LITREF(lit_16),LITREF(lit_227),YPfalse);
  VARSET(YgooSmathYtan,T88);
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_87 = YPfab_met(FUNCODEREF(fun_tan_87),T90,LITREF(lit_16),LITREF(lit_228),sloc(388),YPsb((P)"(fun ((x <int>) => <flo>) (tan (as <flo> x)))"));
  T92 = VARREF_OR(YgooSmathYtan,YPfalse);
  T93 = fun_tan_87;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooSmathYtan,T91);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_88 = YPfab_met(FUNCODEREF(fun_tan_88),T94,LITREF(lit_16),LITREF(lit_229),sloc(388),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%ftan (%fu x))))"));
  T96 = VARREF_OR(YgooSmathYtan,YPfalse);
  T97 = fun_tan_88;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSmathYtan,T95);
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T98 = YPfab_gen(T99,LITREF(lit_18),LITREF(lit_230),YPfalse);
  VARSET(YgooSmathYsinh,T98);
  lit_231 = YPPlist(1,YPPsym((P)"x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_89 = YPfab_met(FUNCODEREF(fun_sinh_89),T100,LITREF(lit_18),LITREF(lit_231),sloc(389),YPsb((P)"(fun ((x <int>) => <flo>) (sinh (as <flo> x)))"));
  T102 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T103 = fun_sinh_89;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYsinh,T101);
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_90 = YPfab_met(FUNCODEREF(fun_sinh_90),T104,LITREF(lit_18),LITREF(lit_232),sloc(389),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%fsinh (%fu x))))"));
  T106 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T107 = fun_sinh_90;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYsinh,T105);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T108 = YPfab_gen(T109,LITREF(lit_20),LITREF(lit_233),YPfalse);
  VARSET(YgooSmathYcosh,T108);
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_91 = YPfab_met(FUNCODEREF(fun_cosh_91),T110,LITREF(lit_20),LITREF(lit_234),sloc(390),YPsb((P)"(fun ((x <int>) => <flo>) (cosh (as <flo> x)))"));
  T112 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T113 = fun_cosh_91;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooSmathYcosh,T111);
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_92 = YPfab_met(FUNCODEREF(fun_cosh_92),T114,LITREF(lit_20),LITREF(lit_235),sloc(390),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%fcosh (%fu x))))"));
  T116 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T117 = fun_cosh_92;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YgooSmathYcosh,T115);
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T118 = YPfab_gen(T119,LITREF(lit_22),LITREF(lit_236),YPfalse);
  VARSET(YgooSmathYtanh,T118);
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_93 = YPfab_met(FUNCODEREF(fun_tanh_93),T120,LITREF(lit_22),LITREF(lit_237),sloc(391),YPsb((P)"(fun ((x <int>) => <flo>) (tanh (as <flo> x)))"));
  T122 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T123 = fun_tanh_93;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YgooSmathYtanh,T121);
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_94 = YPfab_met(FUNCODEREF(fun_tanh_94),T124,LITREF(lit_22),LITREF(lit_238),sloc(391),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%ftanh (%fu x))))"));
  T126 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T127 = fun_tanh_94;
  T125 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T126,T127);
  VARSET(YgooSmathYtanh,T125);
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T130 = YPfab_gen(T131,LITREF(lit_24),LITREF(lit_239),YPfalse);
  T129 = VARSET(YgooSmathYasin,T130);
  T128 = T129;
  return T128;
}

P YgooSmathY___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
DEFCREGS();
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  lit_241 = YPsb((P)"SQRT would produce complex number");
  T0 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_95 = YPfab_met(FUNCODEREF(fun_asin_95),T0,LITREF(lit_24),LITREF(lit_240),sloc(392),YPsb((P)"(fun ((x <int>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (asin (as <flo> x)))"));
  T2 = VARREF_OR(YgooSmathYasin,YPfalse);
  T3 = fun_asin_95;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYasin,T1);
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_96 = YPfab_met(FUNCODEREF(fun_asin_96),T4,LITREF(lit_24),LITREF(lit_242),sloc(392),YPsb((P)"(fun ((x <flo>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (%fb (%fasin (%fu x))))"));
  T6 = VARREF_OR(YgooSmathYasin,YPfalse);
  T7 = fun_asin_96;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSmathYasin,T5);
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_26),LITREF(lit_243),YPfalse);
  VARSET(YgooSmathYacos,T8);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  lit_245 = YPsb((P)"SQRT would produce complex number");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_97 = YPfab_met(FUNCODEREF(fun_acos_97),T10,LITREF(lit_26),LITREF(lit_244),sloc(394),YPsb((P)"(fun ((x <int>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (acos (as <flo> x)))"));
  T12 = VARREF_OR(YgooSmathYacos,YPfalse);
  T13 = fun_acos_97;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSmathYacos,T11);
  lit_246 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_98 = YPfab_met(FUNCODEREF(fun_acos_98),T14,LITREF(lit_26),LITREF(lit_246),sloc(394),YPsb((P)"(fun ((x <flo>) => <flo>) (when (neg? x) (arithmetic-error SQRT would produce complex number)) (%fb (%facos (%fu x))))"));
  T16 = VARREF_OR(YgooSmathYacos,YPfalse);
  T17 = fun_acos_98;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSmathYacos,T15);
  lit_247 = YPPlist(1,YPPsym((P)"x"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_28),LITREF(lit_247),YPfalse);
  VARSET(YgooSmathYatan,T18);
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_99 = YPfab_met(FUNCODEREF(fun_atan_99),T20,LITREF(lit_28),LITREF(lit_248),sloc(396),YPsb((P)"(fun ((x <int>) => <flo>) (atan (as <flo> x)))"));
  T22 = VARREF_OR(YgooSmathYatan,YPfalse);
  T23 = fun_atan_99;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYatan,T21);
  lit_249 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_100 = YPfab_met(FUNCODEREF(fun_atan_100),T24,LITREF(lit_28),LITREF(lit_249),sloc(396),YPsb((P)"(fun ((x <flo>) => <flo>) (%fb (%fatan (%fu x))))"));
  T26 = VARREF_OR(YgooSmathYatan,YPfalse);
  T27 = fun_atan_100;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmathYatan,T25);
  lit_250 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_30),LITREF(lit_250),YPfalse);
  VARSET(YgooSmathYatan2,T28);
  lit_251 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_101 = YPfab_met(FUNCODEREF(fun_atan2_101),T30,LITREF(lit_30),LITREF(lit_251),sloc(399),YPsb((P)"(fun ((y <flo>) (x <flo>) => <flo>) (%fb (%fatan2 (%fu y) (%fu x))))"));
  T32 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T33 = fun_atan2_101;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmathYatan2,T31);
  lit_252 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_102 = YPfab_met(FUNCODEREF(fun_atan2_102),T34,LITREF(lit_30),LITREF(lit_252),sloc(401),YPsb((P)"(fun ((y <flo>) (x <flo>) => <flo>) (%fb (%fatan2 (%fu y) (%fu x))))"));
  T36 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T37 = fun_atan2_102;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmathYatan2,T35);
  lit_253 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_103 = YPfab_met(FUNCODEREF(fun_logn_103),T38,LITREF(lit_36),LITREF(lit_253),sloc(404),YPsb((P)"(fun ((x <num>) (b <num>) => <num>) (/ (log x) (log b)))"));
  T40 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T41 = fun_logn_103;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathYlogn,T39);
  if (YPfalse != YPfalse) {
  } else {
  }
  T42 = YPfalse;
  return T42;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmag},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
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
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i?", &module_info_gooSboot, NULL},
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
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
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
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
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
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
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
  {"fun-spec", &module_info_gooSfun, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
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
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
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
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
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
  {"swapf", &module_info_gooSmacros, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
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
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
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
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
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
  {"fun-arity", &module_info_gooSfun, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
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
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
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
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
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
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
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
  {"log", CVAR, &YgooSmathYlog},
  {"%flog", PVAR, NULL},
  {"^", CVAR, &YgooSmathYC},
  {"%f=", PVAR, NULL},
  {"div", CVAR, &YgooSmathYdiv},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"asin", CVAR, &YgooSmathYasin},
  {"|", CVAR, &YgooSmathYK},
  {"%f/", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"1-", CVAR, &YgooSmathY1_},
  {"acos", CVAR, &YgooSmathYacos},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"abs", CVAR, &YgooSmathYabs},
  {"%fpow", PVAR, NULL},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"%ftanh", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%fcos", PVAR, NULL},
  {"atan", CVAR, &YgooSmathYatan},
  {"neg", CVAR, &YgooSmathYneg},
  {"%fsinh", PVAR, NULL},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"+", CVAR, &YgooSmathYA},
  {"round/", CVAR, &YgooSmathYroundS},
  {"%fasin", PVAR, NULL},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"<<", CVAR, &YgooSmathYLL},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"%f<", PVAR, NULL},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"%ft/", PVAR, NULL},
  {"$e", CVAR, &YgooSmathYDe},
  {"%fatan", PVAR, NULL},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"1+", CVAR, &YgooSmathY1A},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"%flo-bits", PVAR, NULL},
  {">>>", CVAR, &YgooSmathYGGG},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"%fc", PVAR, NULL},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"pow", CVAR, &YgooSmathYpow},
  {"---main-3---", PVAR, NULL},
  {"%facos", PVAR, NULL},
  {"%f*", PVAR, NULL},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"ceil", CVAR, &YgooSmathYceil},
  {"tan", CVAR, &YgooSmathYtan},
  {"rem", CVAR, &YgooSmathYrem},
  {"def-unary-trans", PVAR, NULL},
  {"%fcosh", PVAR, NULL},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"cos", CVAR, &YgooSmathYcos},
  {">>", CVAR, &YgooSmathYGG},
  {"moddecf", PVAR, NULL},
  {"&", CVAR, &YgooSmathYB},
  {"%ft", PVAR, NULL},
  {"/", CVAR, &YgooSmathYS},
  {"round", CVAR, &YgooSmathYround},
  {"sin", CVAR, &YgooSmathYsin},
  {"%fatan2", PVAR, NULL},
  {"%fsin", PVAR, NULL},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"modincf", PVAR, NULL},
  {"%fi2f", PVAR, NULL},
  {"%ftan", PVAR, NULL},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"%f+", PVAR, NULL},
  {"%f-", PVAR, NULL},
  {"~", CVAR, &YgooSmathYN},
  {"---main-4---", PVAR, NULL},
  {"floor", CVAR, &YgooSmathYfloor},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"%fsqrt", PVAR, NULL},
  {"-", CVAR, &YgooSmathY_},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"*", CVAR, &YgooSmathYT},
  {"logn", CVAR, &YgooSmathYlogn},
  {"mod", CVAR, &YgooSmathYmod},
  {"%ff", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"log", NULL},
  {"^", NULL},
  {"div", NULL},
  {"sqrt", NULL},
  {"|", NULL},
  {"flo-bits", NULL},
  {"1-", NULL},
  {"num-to-str", NULL},
  {"trunc/", NULL},
  {"atan2", NULL},
  {"contagious-call", NULL},
  {"abs", NULL},
  {"power-of-two-ceil", NULL},
  {"atan", NULL},
  {"neg", NULL},
  {"isqrt", NULL},
  {"+", NULL},
  {"round/", NULL},
  {"contagious-type", NULL},
  {"$pi", NULL},
  {"acos", NULL},
  {"neg?", NULL},
  {"asin", NULL},
  {"<<", NULL},
  {"zero?", NULL},
  {"ceil/", NULL},
  {"$e", NULL},
  {"tanh", NULL},
  {"1+", NULL},
  {"pos?", NULL},
  {">>>", NULL},
  {"cosh", NULL},
  {"floor/", NULL},
  {"odd?", NULL},
  {"pow", NULL},
  {"moddecf", NULL},
  {"sinh", NULL},
  {"trunc", NULL},
  {"even?", NULL},
  {"tan", NULL},
  {"rem", NULL},
  {"round-to", NULL},
  {"cos", NULL},
  {">>", NULL},
  {"round", NULL},
  {"sin", NULL},
  {"mod-", NULL},
  {"modincf", NULL},
  {"bit?", NULL},
  {"ceil", NULL},
  {"/", NULL},
  {"~", NULL},
  {"floor", NULL},
  {"mod+", NULL},
  {"-", NULL},
  {"*", NULL},
  {"&", NULL},
  {"logn", NULL},
  {"mod", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSmath;
MODULE_INFO module_info_gooSmath = {
  "goo/math",
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
extern void load_module_gooSlog (void);

/* EXPRESSION: */

extern void load_module_gooSmath (void);

void load_module_gooSmath (void) {
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
  load_module_gooSlog();

  (P)YgooSmathY___main_0___();
  (P)YgooSmathY___main_1___();
  (P)YgooSmathY___main_2___();
  (P)YgooSmathY___main_3___();
  (P)YgooSmathY___main_4___();
  (P)YgooSmathY___main_5___();

}

/* END OF GENERATED CODE. */
