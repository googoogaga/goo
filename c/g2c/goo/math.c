/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSmathYcos,"goo/math","cos");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
DEF(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSmathYsin,"goo/math","sin");
DEF(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSmathYmod_,"goo/math","mod-");
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
DEF(YgooSmathYround,"goo/math","round");
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
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yas_error,"goo/boot","as-error");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yhead,"goo/boot","head");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSmathYT,"goo/math","*");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
DEF(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
DEF(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
DEF(YgooSmathYN,"goo/math","~");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSmathYabs,"goo/math","abs");
DEF(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
DEF(YgooSmathYacos,"goo/math","acos");
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
DEF(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yapp_filename,"goo/boot","app-filename");
DEF(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSmathYpow,"goo/math","pow");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
DEF(YgooSmathYtanh,"goo/math","tanh");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
DEF(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSmathYoddQ,"goo/math","odd?");
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
DEF(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooSmathYrem,"goo/math","rem");
DEF(YgooSmathYK,"goo/math","|");
DEF(YgooSmathYB,"goo/math","&");
DEF(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
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
DEF(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmathYfloorS,"goo/math","floor/");
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
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ynew,"goo/boot","new");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_240);
DEFLIT(lit_231);
DEFLIT(lit_17);
DEFLIT(lit_242);
DEFLIT(lit_193);
DEFLIT(lit_75);
DEFLIT(lit_5);
DEFLIT(lit_205);
DEFLIT(lit_196);
DEFLIT(lit_150);
DEFLIT(lit_94);
DEFLIT(lit_114);
DEFLIT(lit_117);
DEFLIT(lit_118);
DEFLIT(lit_166);
DEFLIT(lit_24);
DEFLIT(lit_154);
DEFLIT(lit_149);
DEFLIT(lit_120);
DEFLIT(lit_95);
DEFLIT(lit_146);
DEFLIT(lit_175);
DEFLIT(lit_42);
DEFLIT(lit_167);
DEFLIT(lit_216);
DEFLIT(lit_190);
DEFLIT(lit_189);
DEFLIT(lit_137);
DEFLIT(lit_10);
DEFLIT(lit_0);
DEFLIT(lit_55);
DEFLIT(lit_97);
DEFLIT(lit_35);
DEFLIT(lit_23);
DEFLIT(lit_82);
DEFLIT(lit_246);
DEFLIT(lit_184);
DEFLIT(lit_235);
DEFLIT(lit_9);
DEFLIT(lit_133);
DEFLIT(lit_112);
DEFLIT(lit_129);
DEFLIT(lit_130);
DEFLIT(lit_92);
DEFLIT(lit_123);
DEFLIT(lit_176);
DEFLIT(lit_187);
DEFLIT(lit_153);
DEFLIT(lit_131);
DEFLIT(lit_81);
DEFLIT(lit_19);
DEFLIT(lit_203);
DEFLIT(lit_223);
DEFLIT(lit_188);
DEFLIT(lit_68);
DEFLIT(lit_147);
DEFLIT(lit_247);
DEFLIT(lit_22);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_250);
DEFLIT(lit_39);
DEFLIT(lit_165);
DEFLIT(lit_164);
DEFLIT(lit_2);
DEFLIT(lit_213);
DEFLIT(lit_232);
DEFLIT(lit_103);
DEFLIT(lit_209);
DEFLIT(lit_199);
DEFLIT(lit_221);
DEFLIT(lit_212);
DEFLIT(lit_58);
DEFLIT(lit_244);
DEFLIT(lit_87);
DEFLIT(lit_113);
DEFLIT(lit_215);
DEFLIT(lit_257);
DEFLIT(lit_43);
DEFLIT(lit_49);
DEFLIT(lit_34);
DEFLIT(lit_214);
DEFLIT(lit_8);
DEFLIT(lit_116);
DEFLIT(lit_45);
DEFLIT(lit_3);
DEFLIT(lit_157);
DEFLIT(lit_37);
DEFLIT(lit_127);
DEFLIT(lit_163);
DEFLIT(lit_251);
DEFLIT(lit_80);
DEFLIT(lit_73);
DEFLIT(lit_20);
DEFLIT(lit_38);
DEFLIT(lit_197);
DEFLIT(lit_179);
DEFLIT(lit_105);
DEFLIT(lit_178);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_90);
DEFLIT(lit_78);
DEFLIT(lit_172);
DEFLIT(lit_135);
DEFLIT(lit_182);
DEFLIT(lit_65);
DEFLIT(lit_201);
DEFLIT(lit_234);
DEFLIT(lit_29);
DEFLIT(lit_36);
DEFLIT(lit_145);
DEFLIT(lit_248);
DEFLIT(lit_61);
DEFLIT(lit_60);
DEFLIT(lit_93);
DEFLIT(lit_25);
DEFLIT(lit_1);
DEFLIT(lit_192);
DEFLIT(lit_104);
DEFLIT(lit_162);
DEFLIT(lit_99);
DEFLIT(lit_32);
DEFLIT(lit_106);
DEFLIT(lit_239);
DEFLIT(lit_243);
DEFLIT(lit_71);
DEFLIT(lit_224);
DEFLIT(lit_30);
DEFLIT(lit_100);
DEFLIT(lit_152);
DEFLIT(lit_173);
DEFLIT(lit_56);
DEFLIT(lit_121);
DEFLIT(lit_69);
DEFLIT(lit_208);
DEFLIT(lit_77);
DEFLIT(lit_233);
DEFLIT(lit_64);
DEFLIT(lit_211);
DEFLIT(lit_141);
DEFLIT(lit_171);
DEFLIT(lit_125);
DEFLIT(lit_101);
DEFLIT(lit_140);
DEFLIT(lit_66);
DEFLIT(lit_161);
DEFLIT(lit_170);
DEFLIT(lit_11);
DEFLIT(lit_237);
DEFLIT(lit_26);
DEFLIT(lit_132);
DEFLIT(lit_91);
DEFLIT(lit_156);
DEFLIT(lit_89);
DEFLIT(lit_88);
DEFLIT(lit_48);
DEFLIT(lit_143);
DEFLIT(lit_225);
DEFLIT(lit_76);
DEFLIT(lit_33);
DEFLIT(lit_16);
DEFLIT(lit_151);
DEFLIT(lit_258);
DEFLIT(lit_206);
DEFLIT(lit_18);
DEFLIT(lit_219);
DEFLIT(lit_194);
DEFLIT(lit_124);
DEFLIT(lit_186);
DEFLIT(lit_160);
DEFLIT(lit_207);
DEFLIT(lit_142);
DEFLIT(lit_228);
DEFLIT(lit_210);
DEFLIT(lit_67);
DEFLIT(lit_195);
DEFLIT(lit_252);
DEFLIT(lit_128);
DEFLIT(lit_155);
DEFLIT(lit_98);
DEFLIT(lit_62);
DEFLIT(lit_144);
DEFLIT(lit_241);
DEFLIT(lit_198);
DEFLIT(lit_51);
DEFLIT(lit_253);
DEFLIT(lit_15);
DEFLIT(lit_200);
DEFLIT(lit_220);
DEFLIT(lit_177);
DEFLIT(lit_108);
DEFLIT(lit_226);
DEFLIT(lit_136);
DEFLIT(lit_86);
DEFLIT(lit_148);
DEFLIT(lit_63);
DEFLIT(lit_54);
DEFLIT(lit_46);
DEFLIT(lit_119);
DEFLIT(lit_138);
DEFLIT(lit_27);
DEFLIT(lit_202);
DEFLIT(lit_79);
DEFLIT(lit_174);
DEFLIT(lit_102);
DEFLIT(lit_41);
DEFLIT(lit_74);
DEFLIT(lit_249);
DEFLIT(lit_14);
DEFLIT(lit_159);
DEFLIT(lit_227);
DEFLIT(lit_245);
DEFLIT(lit_168);
DEFLIT(lit_115);
DEFLIT(lit_180);
DEFLIT(lit_28);
DEFLIT(lit_217);
DEFLIT(lit_181);
DEFLIT(lit_191);
DEFLIT(lit_204);
DEFLIT(lit_83);
DEFLIT(lit_126);
DEFLIT(lit_139);
DEFLIT(lit_59);
DEFLIT(lit_70);
DEFLIT(lit_185);
DEFLIT(lit_21);
DEFLIT(lit_110);
DEFLIT(lit_85);
DEFLIT(lit_7);
DEFLIT(lit_230);
DEFLIT(lit_218);
DEFLIT(lit_57);
DEFLIT(lit_47);
DEFLIT(lit_96);
DEFLIT(lit_72);
DEFLIT(lit_122);
DEFLIT(lit_12);
DEFLIT(lit_109);
DEFLIT(lit_53);
DEFLIT(lit_169);
DEFLIT(lit_183);
DEFLIT(lit_84);
DEFLIT(lit_222);
DEFLIT(lit_134);
DEFLIT(lit_229);
DEFLIT(lit_44);
DEFLIT(lit_111);
DEFLIT(lit_158);
DEFLIT(lit_254);
DEFLIT(lit_236);
DEFLIT(lit_255);
DEFLIT(lit_31);
DEFLIT(lit_256);
DEFLIT(lit_238);
DEFLIT(lit_52);
DEFLIT(lit_107);

/* FUNCTIONS: */

LOCFOR(fun_contagious_call_0);
LOCFOR(fun_E_1);
LOCFOR(fun_L_2);
LOCFOR(fun_A_3);
FUNFOR(YgooSmathY1A);
LOCFOR(fun___5);
FUNFOR(YgooSmathY1_);
LOCFOR(fun_T_7);
LOCFOR(fun_S_8);
LOCFOR(fun_atan2_9);
LOCFOR(fun_logn_10);
LOCFOR(fun_floor_11);
LOCFOR(fun_ceil_12);
LOCFOR(fun_round_13);
LOCFOR(fun_round_to_14);
LOCFOR(fun_trunc_15);
LOCFOR(fun_floorS_16);
LOCFOR(fun_ceilS_17);
LOCFOR(fun_roundS_18);
LOCFOR(fun_truncS_19);
LOCFOR(fun_div_20);
LOCFOR(fun_mod_21);
LOCFOR(fun_modA_22);
LOCFOR(fun_mod__23);
LOCFOR(fun_x_1344_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1348_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_rem_30);
LOCFOR(fun_pow_31);
LOCFOR(fun_exp_32);
LOCFOR(fun_posQ_33);
LOCFOR(fun_zeroQ_34);
LOCFOR(fun_negQ_35);
LOCFOR(fun_neg_36);
LOCFOR(fun_abs_37);
LOCFOR(fun_to_str_38);
LOCFOR(fun_contagious_type_39);
LOCFOR(fun_contagious_type_40);
LOCFOR(fun_contagious_type_41);
LOCFOR(fun_contagious_type_42);
LOCFOR(fun_EE_43);
LOCFOR(fun_L_44);
LOCFOR(fun_A_45);
LOCFOR(fun___46);
LOCFOR(fun_T_47);
LOCFOR(fun_S_48);
LOCFOR(fun_floor_49);
LOCFOR(fun_ceil_50);
LOCFOR(fun_round_51);
LOCFOR(fun_trunc_52);
LOCFOR(fun_truncS_53);
LOCFOR(fun_mod_54);
LOCFOR(fun_pow_55);
LOCFOR(fun_K_56);
LOCFOR(fun_C_57);
LOCFOR(fun_B_58);
LOCFOR(fun_N_59);
LOCFOR(fun_bitQ_60);
LOCFOR(fun_evenQ_61);
LOCFOR(fun_oddQ_62);
LOCFOR(fun_GG_63);
LOCFOR(fun_GGG_64);
LOCFOR(fun_LL_65);
LOCFOR(fun_power_of_two_ceil_66);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_68);
LOCFOR(fun_EE_69);
LOCFOR(fun_L_70);
LOCFOR(fun_A_71);
LOCFOR(fun___72);
LOCFOR(fun_T_73);
LOCFOR(fun_S_74);
LOCFOR(fun_truncS_75);
LOCFOR(fun_pow_76);
LOCFOR(fun_isqrt_77);
LOCFOR(fun_x_1352_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_sqrt_81);
LOCFOR(fun_sqrt_82);
LOCFOR(fun_log_83);
LOCFOR(fun_log_84);
LOCFOR(fun_sin_85);
LOCFOR(fun_sin_86);
LOCFOR(fun_cos_87);
LOCFOR(fun_cos_88);
LOCFOR(fun_tan_89);
LOCFOR(fun_tan_90);
LOCFOR(fun_sinh_91);
LOCFOR(fun_sinh_92);
LOCFOR(fun_cosh_93);
LOCFOR(fun_cosh_94);
LOCFOR(fun_tanh_95);
LOCFOR(fun_tanh_96);
LOCFOR(fun_asin_97);
LOCFOR(fun_asin_98);
LOCFOR(fun_acos_99);
LOCFOR(fun_acos_100);
LOCFOR(fun_atan_101);
LOCFOR(fun_atan_102);
LOCFOR(fun_atan2_103);
LOCFOR(fun_atan2_104);
LOCFOR(fun_logn_105);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();
extern P YgooSmathY___main_3___ ();
extern P YgooSmathY___main_4___ ();
extern P YgooSmathY___main_5___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_contagious_call_0) {
  P f_,x_,y_;
  P typeF2771;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T3 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF2771 = T3;
  T1 = CALL2(1,VARREF(YgooStypesYas),typeF2771,x_);
  T2 = CALL2(1,VARREF(YgooStypesYas),typeF2771,y_);
  T0 = CALL2(1,f_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_E_1) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmacrosYEE),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_2) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmagYL),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_3) {
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

LOCCODEDEF(fun___5) {
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

LOCCODEDEF(fun_T_7) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYT),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_8) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYS),x_,y_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan2_9) {
  P y_,x_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYatan2),y_,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_logn_10) {
  P x_,b_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(b_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYlogn),x_,b_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floor_11) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYfloorS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ceil_12) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYceilS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_round_13) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYroundS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_round_to_14) {
  P x_,n_;
  P fF2772;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSlogYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_125),n_);
    fF2772 = T7;
    T6 = CALL2(1,VARREF(YgooSmathYT),x_,fF2772);
    T5 = CALL1(1,VARREF(YgooSmathYround),T6);
    T4 = CALL2(1,VARREF(YgooSmathYS),T5,fF2772);
    T3 = CALL1(1,x_,T4);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_trunc_15) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),x_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floorS_16) {
  P real_,divisor_;
  P remainderF2775;
  P integerF2774;
  P tup23F2773;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F2773 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2773,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2774 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2773,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2775 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2775);
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
    T9 = CALL2(1,VARREF(YgooSmathY_),integerF2774,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2775,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2774,remainderF2775);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ceilS_17) {
  P real_,divisor_;
  P remainderF2778;
  P integerF2777;
  P tup24F2776;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup24F2776 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2776,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2777 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2776,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2778 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2778);
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
    T9 = CALL2(1,VARREF(YgooSmathYA),integerF2777,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathY_),remainderF2778,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2777,remainderF2778);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_roundS_18) {
  P real_,divisor_;
  P tmpF2785;
  P minus_thresholdF2784;
  P tmpF2783;
  P thresholdF2782;
  P remainderF2781;
  P integerF2780;
  P tup25F2779;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T34 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup25F2779 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2779,YPint((P)0));
  check_type(T33,VARREF(YLintG));
  integerF2780 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2779,YPint((P)1));
  check_type(T32,VARREF(YLnumG));
  remainderF2781 = T32;
  T31 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T30 = CALL2(1,VARREF(YgooSmathYS),T31,LITREF(lit_130));
  check_type(T30,VARREF(YLnumG));
  thresholdF2782 = T30;
  T5 = CALL2(1,VARREF(YgooSmagYG),remainderF2781,thresholdF2782);
  tmpF2783 = T5;
  if (tmpF2783 != YPfalse) {
    T1 = tmpF2783;
  } else {
    T3 = CALL2(1,VARREF(YgooSlogYE),remainderF2781,thresholdF2782);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2780);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T7 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathY_),integerF2780,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2781,divisor_);
      T8 = CALL2(1,VARREF(Ytup),T9,T10);
      T6 = T8;
    } else {
      T12 = CALL2(1,VARREF(YgooSmathYA),integerF2780,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathY_),remainderF2781,divisor_);
      T11 = CALL2(1,VARREF(Ytup),T12,T13);
      T6 = T11;
    }
    T0 = T6;
  } else {
    T20 = CALL1(1,VARREF(YgooSmathYneg),thresholdF2782);
    minus_thresholdF2784 = T20;
    T19 = CALL2(1,VARREF(YgooSmagYL),remainderF2781,minus_thresholdF2784);
    tmpF2785 = T19;
    if (tmpF2785 != YPfalse) {
      T15 = tmpF2785;
    } else {
      T17 = CALL2(1,VARREF(YgooSlogYE),remainderF2781,minus_thresholdF2784);
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2780);
        T16 = T18;
      } else {
        T16 = YPfalse;
      }
      T15 = T16;
    }
    if (T15 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSmathYA),integerF2780,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathY_),remainderF2781,divisor_);
        T23 = CALL2(1,VARREF(Ytup),T24,T25);
        T21 = T23;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathY_),integerF2780,YPint((P)1));
        T28 = CALL2(1,VARREF(YgooSmathYA),remainderF2781,divisor_);
        T26 = CALL2(1,VARREF(Ytup),T27,T28);
        T21 = T26;
      }
      T14 = T21;
    } else {
      T29 = CALL2(1,VARREF(Ytup),integerF2780,remainderF2781);
      T14 = T29;
    }
    T0 = T14;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_truncS_19) {
  P real_,divisor_;
  P T0;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYtruncS),real_,divisor_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_div_20) {
  P x_,y_;
  P xF2787;
  P xF2786;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF2786 = YPint((P)0);
  xF2787 = xF2786;
  T2 = (P)YPiGG(xF2787,(P)2);
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_21) {
  P real_,divisor_;
  P remainderF2790;
  P UF2789;
  P tup26F2788;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup26F2788 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2788,YPint((P)0));
  UF2789 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2788,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2790 = T0;
UNLINK_STACK();
  RET(remainderF2790);
}

LOCCODEDEF(fun_modA_22) {
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

LOCCODEDEF(fun_mod__23) {
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

LOCCODEDEF(fun_x_1344_24) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_140),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P return_;
  P x_1343F2797;
  P x_1343F2796;
  P x_1343F2795;
  P maxF2794;
  P placeF2793;
  P x_1343F2792;
  P x_1344F2791;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1344_24,2);
  x_1344F2791 = T21;
  FUNINIT(x_1344F2791, 2,FREEREF(0),return_);
  x_1343F2792 = FREEREF(0);
  placeF2793 = YPfalse;
  maxF2794 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1343F2792,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1343F2792,LITREF(lit_140),x_1344F2791);
    x_1343F2795 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2795,x_1344F2791);
    placeF2793 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1343F2795);
    x_1343F2796 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2796,x_1344F2791);
    maxF2794 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1343F2796);
    x_1343F2797 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1343F2797,x_1344F2791);
  } else {
    T9 = CALL2(1,x_1344F2791,LITREF(lit_141),x_1343F2792);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T13 = placeF2793;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T18 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T20 = maxF2794;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_144));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_144));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_26) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_25,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1348_27) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_149),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_28) {
  P return_;
  P x_1347F2804;
  P x_1347F2803;
  P x_1347F2802;
  P maxF2801;
  P placeF2800;
  P x_1347F2799;
  P x_1348F2798;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_1348_27,2);
  x_1348F2798 = T21;
  FUNINIT(x_1348F2798, 2,FREEREF(0),return_);
  x_1347F2799 = FREEREF(0);
  placeF2800 = YPfalse;
  maxF2801 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1347F2799,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1347F2799,LITREF(lit_149),x_1348F2798);
    x_1347F2802 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2802,x_1348F2798);
    placeF2800 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_1347F2802);
    x_1347F2803 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2803,x_1348F2798);
    maxF2801 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1347F2803);
    x_1347F2804 = T5;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1347F2804,x_1348F2798);
  } else {
    T9 = CALL2(1,x_1348F2798,LITREF(lit_141),x_1347F2799);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_142));
  T13 = placeF2800;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_143));
  T18 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T20 = maxF2801;
  T19 = CALL1(1,VARREF(Ylst),T20);
  T15 = CALL5(1,VARREF(YgooSmacrosYcat),T16,T17,T18,T19,LITREF(lit_144));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T14,LITREF(lit_144));
UNLINK_STACK();
  QRET(T10);
}

LOCCODEDEF(fun_29) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_rem_30) {
  P real_,divisor_;
  P remainderF2807;
  P UF2806;
  P tup27F2805;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup27F2805 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2805,YPint((P)0));
  UF2806 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2805,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2807 = T0;
UNLINK_STACK();
  RET(remainderF2807);
}

LOCCODEDEF(fun_pow_31) {
  P base_,n_;
  P T0;
LINK_STACK();
  ARG(base_, 0);
  ARG(n_, 1);
  T0 = CALL3(1,VARREF(YgooSmathYcontagious_call),VARREF(YgooSmathYpow),base_,n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_exp_32) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYpow),VARREF(YgooSmathYDe),n_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_posQ_33) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zeroQ_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_negQ_35) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_neg_36) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_abs_37) {
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

LOCCODEDEF(fun_to_str_38) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_contagious_type_39) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

LOCCODEDEF(fun_contagious_type_40) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_contagious_type_41) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_contagious_type_42) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_EE_43) {
  P x_,y_;
  P xF2811;
  P xF2810;
  P xF2809;
  P xF2808;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2808 = x_;
  xF2809 = xF2808;
  T2 = (P)YPiGG(xF2809,(P)2);
  xF2810 = y_;
  xF2811 = xF2810;
  T3 = (P)YPiGG(xF2811,(P)2);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_44) {
  P x_,y_;
  P xF2815;
  P xF2814;
  P xF2813;
  P xF2812;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2812 = x_;
  xF2813 = xF2812;
  T2 = (P)YPiGG(xF2813,(P)2);
  xF2814 = y_;
  xF2815 = xF2814;
  T3 = (P)YPiGG(xF2815,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_45) {
  P x_,y_;
  P tF2822;
  P xF2821;
  P xF2820;
  P xF2819;
  P xF2818;
  P xF2817;
  P xF2816;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2816 = x_;
  xF2817 = xF2816;
  T3 = (P)YPiGG(xF2817,(P)2);
  xF2818 = y_;
  xF2819 = xF2818;
  T4 = (P)YPiGG(xF2819,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF2820 = T2;
  xF2821 = xF2820;
  tF2822 = (P)1;
  T1 = (P)YPiLL(xF2821,(P)2);
  T0 = (P)YPiv(T1,tF2822);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___46) {
  P x_,y_;
  P tF2829;
  P xF2828;
  P xF2827;
  P xF2826;
  P xF2825;
  P xF2824;
  P xF2823;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2823 = x_;
  xF2824 = xF2823;
  T3 = (P)YPiGG(xF2824,(P)2);
  xF2825 = y_;
  xF2826 = xF2825;
  T4 = (P)YPiGG(xF2826,(P)2);
  T2 = (P)YPi_(T3,T4);
  xF2827 = T2;
  xF2828 = xF2827;
  tF2829 = (P)1;
  T1 = (P)YPiLL(xF2828,(P)2);
  T0 = (P)YPiv(T1,tF2829);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_47) {
  P x_,y_;
  P tF2836;
  P xF2835;
  P xF2834;
  P xF2833;
  P xF2832;
  P xF2831;
  P xF2830;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2830 = x_;
  xF2831 = xF2830;
  T3 = (P)YPiGG(xF2831,(P)2);
  xF2832 = y_;
  xF2833 = xF2832;
  T4 = (P)YPiGG(xF2833,(P)2);
  T2 = (P)YPiT(T3,T4);
  xF2834 = T2;
  xF2835 = xF2834;
  tF2836 = (P)1;
  T1 = (P)YPiLL(xF2835,(P)2);
  T0 = (P)YPiv(T1,tF2836);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_48) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_171));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floor_49) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_ceil_50) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_round_51) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_trunc_52) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_truncS_53) {
  P x_,y_;
  P resultF2844;
  P tF2843;
  P xF2842;
  P xF2841;
  P xF2840;
  P xF2839;
  P xF2838;
  P xF2837;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2837 = x_;
  xF2838 = xF2837;
  T6 = (P)YPiGG(xF2838,(P)2);
  xF2839 = y_;
  xF2840 = xF2839;
  T7 = (P)YPiGG(xF2840,(P)2);
  T5 = (P)YPitS(T6,T7);
  xF2841 = T5;
  xF2842 = xF2841;
  tF2843 = (P)1;
  T4 = (P)YPiLL(xF2842,(P)2);
  T3 = (P)YPiv(T4,tF2843);
  resultF2844 = T3;
  T2 = CALL2(1,VARREF(YgooSmathYT),resultF2844,y_);
  T1 = CALL2(1,VARREF(YgooSmathY_),x_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2844,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_54) {
  P x_,y_;
  P resF2852;
  P tF2851;
  P xF2850;
  P xF2849;
  P xF2848;
  P xF2847;
  P xF2846;
  P xF2845;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2845 = x_;
  xF2846 = xF2845;
  T9 = (P)YPiGG(xF2846,(P)2);
  xF2847 = y_;
  xF2848 = xF2847;
  T10 = (P)YPiGG(xF2848,(P)2);
  T8 = (P)YPim(T9,T10);
  xF2849 = T8;
  xF2850 = xF2849;
  tF2851 = (P)1;
  T7 = (P)YPiLL(xF2850,(P)2);
  T6 = (P)YPiv(T7,tF2851);
  resF2852 = T6;
  T1 = CALL2(1,VARREF(YgooSmagYL),resF2852,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmathYA),resF2852,y_);
      T2 = T4;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathY_),resF2852,y_);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T0 = resF2852;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_55) {
  P x_,n_;
  P yF2855;
  P pF2854;
  P xF2853;
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
          check_type(T28,VARREF(YLfixnumG));
          xF2853 = T28;
          T31 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          check_type(T31,VARREF(YLfixnumG));
          pF2854 = T31;
          T33 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T33 != YPfalse) {
            T32 = x_;
          } else {
            T32 = YPint((P)1);
          }
          check_type(T32,VARREF(YLfixnumG));
          yF2855 = T32;
          LOOP_51: {
            P a51_0,a51_1,a51_2;
            T19 = CALL1(1,VARREF(YgooSmathYzeroQ),pF2854);
            if (T19 != YPfalse) {
              T18 = yF2855;
            } else {
              T22 = CALL2(1,VARREF(YgooSmagYG),pF2854,YPint((P)1));
              if (T22 != YPfalse) {
                T23 = CALL2(1,VARREF(YgooSmathYT),xF2853,xF2853);
                T21 = T23;
              } else {
                T21 = xF2853;
              }
              T24 = CALL2(1,VARREF(YgooSmathYGG),pF2854,YPint((P)1));
              T26 = CALL1(1,VARREF(YgooSmathYoddQ),pF2854);
              if (T26 != YPfalse) {
                T27 = CALL2(1,VARREF(YgooSmathYT),xF2853,yF2855);
                T25 = T27;
              } else {
                T25 = yF2855;
              }
              a51_0 = T21;
              a51_1 = T24;
              a51_2 = T25;
              xF2853 = a51_0;
              pF2854 = a51_1;
              yF2855 = a51_2;
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

LOCCODEDEF(fun_K_56) {
  P x_,y_;
  P tF2862;
  P xF2861;
  P xF2860;
  P xF2859;
  P xF2858;
  P xF2857;
  P xF2856;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2856 = x_;
  xF2857 = xF2856;
  T3 = (P)YPiGG(xF2857,(P)2);
  xF2858 = y_;
  xF2859 = xF2858;
  T4 = (P)YPiGG(xF2859,(P)2);
  T2 = (P)YPiv(T3,T4);
  xF2860 = T2;
  xF2861 = xF2860;
  tF2862 = (P)1;
  T1 = (P)YPiLL(xF2861,(P)2);
  T0 = (P)YPiv(T1,tF2862);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_C_57) {
  P x_,y_;
  P tF2869;
  P xF2868;
  P xF2867;
  P xF2866;
  P xF2865;
  P xF2864;
  P xF2863;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2863 = x_;
  xF2864 = xF2863;
  T3 = (P)YPiGG(xF2864,(P)2);
  xF2865 = y_;
  xF2866 = xF2865;
  T4 = (P)YPiGG(xF2866,(P)2);
  T2 = (P)YPiC(T3,T4);
  xF2867 = T2;
  xF2868 = xF2867;
  tF2869 = (P)1;
  T1 = (P)YPiLL(xF2868,(P)2);
  T0 = (P)YPiv(T1,tF2869);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_B_58) {
  P x_,y_;
  P tF2876;
  P xF2875;
  P xF2874;
  P xF2873;
  P xF2872;
  P xF2871;
  P xF2870;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2870 = x_;
  xF2871 = xF2870;
  T3 = (P)YPiGG(xF2871,(P)2);
  xF2872 = y_;
  xF2873 = xF2872;
  T4 = (P)YPiGG(xF2873,(P)2);
  T2 = (P)YPiB(T3,T4);
  xF2874 = T2;
  xF2875 = xF2874;
  tF2876 = (P)1;
  T1 = (P)YPiLL(xF2875,(P)2);
  T0 = (P)YPiv(T1,tF2876);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_N_59) {
  P x_;
  P tF2881;
  P xF2880;
  P xF2879;
  P xF2878;
  P xF2877;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF2877 = x_;
  xF2878 = xF2877;
  T3 = (P)YPiGG(xF2878,(P)2);
  T2 = (P)YPiX(T3);
  xF2879 = T2;
  xF2880 = xF2879;
  tF2881 = (P)1;
  T1 = (P)YPiLL(xF2880,(P)2);
  T0 = (P)YPiv(T1,tF2881);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_bitQ_60) {
  P o_,x_;
  P xF2885;
  P xF2884;
  P xF2883;
  P xF2882;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
  xF2882 = o_;
  xF2883 = xF2882;
  T2 = (P)YPiGG(xF2883,(P)2);
  xF2884 = x_;
  xF2885 = xF2884;
  T3 = (P)YPiGG(xF2885,(P)2);
  T1 = (P)YPiQ(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_evenQ_61) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_oddQ_62) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GG_63) {
  P x_,a_;
  P tF2892;
  P xF2891;
  P xF2890;
  P xF2889;
  P xF2888;
  P xF2887;
  P xF2886;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2886 = x_;
  xF2887 = xF2886;
  T3 = (P)YPiGG(xF2887,(P)2);
  xF2888 = a_;
  xF2889 = xF2888;
  T4 = (P)YPiGG(xF2889,(P)2);
  T2 = (P)YPiGG(T3,T4);
  xF2890 = T2;
  xF2891 = xF2890;
  tF2892 = (P)1;
  T1 = (P)YPiLL(xF2891,(P)2);
  T0 = (P)YPiv(T1,tF2892);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GGG_64) {
  P x_,a_;
  P tF2899;
  P xF2898;
  P xF2897;
  P xF2896;
  P xF2895;
  P xF2894;
  P xF2893;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2893 = x_;
  xF2894 = xF2893;
  T3 = (P)YPiGG(xF2894,(P)2);
  xF2895 = a_;
  xF2896 = xF2895;
  T4 = (P)YPiGG(xF2896,(P)2);
  T2 = (P)YPiGGG(T3,T4);
  xF2897 = T2;
  xF2898 = xF2897;
  tF2899 = (P)1;
  T1 = (P)YPiLL(xF2898,(P)2);
  T0 = (P)YPiv(T1,tF2899);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_LL_65) {
  P x_,a_;
  P tF2906;
  P xF2905;
  P xF2904;
  P xF2903;
  P xF2902;
  P xF2901;
  P xF2900;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2900 = x_;
  xF2901 = xF2900;
  T3 = (P)YPiGG(xF2901,(P)2);
  xF2902 = a_;
  xF2903 = xF2902;
  T4 = (P)YPiGG(xF2903,(P)2);
  T2 = (P)YPiLL(T3,T4);
  xF2904 = T2;
  xF2905 = xF2904;
  tF2906 = (P)1;
  T1 = (P)YPiLL(xF2905,(P)2);
  T0 = (P)YPiv(T1,tF2906);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_power_of_two_ceil_66) {
  P x_;
  P po2F2907;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)1),VARREF(YLintG));
  po2F2907 = YPint((P)1);
  LOOP_52: {
    P a52_0;
    T1 = CALL2(1,VARREF(YgooSmagYG),po2F2907,x_);
    if (T1 != YPfalse) {
      T0 = po2F2907;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),po2F2907,po2F2907);
      a52_0 = T3;
      po2F2907 = a52_0;
      goto LOOP_52;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF2910;
  P xF2909;
  P xF2908;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = (P)YPfu(x_);
  T2 = (P)YgooSmathYPflo_bits(T3);
  xF2908 = T2;
  xF2909 = xF2908;
  tF2910 = (P)1;
  T1 = (P)YPiLL(xF2909,(P)2);
  T0 = (P)YPiv(T1,tF2910);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_68) {
  P U_,x_;
  P xF2912;
  P xF2911;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
  xF2911 = x_;
  xF2912 = xF2911;
  T2 = (P)YPiGG(xF2912,(P)2);
  T1 = (P)YgooSmathYPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_EE_69) {
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

LOCCODEDEF(fun_L_70) {
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

LOCCODEDEF(fun_A_71) {
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

LOCCODEDEF(fun___72) {
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

LOCCODEDEF(fun_T_73) {
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

LOCCODEDEF(fun_S_74) {
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

LOCCODEDEF(fun_truncS_75) {
  P x_,y_;
  P resultF2917;
  P tF2916;
  P xF2915;
  P xF2914;
  P dividedF2913;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T8 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF2913 = T8;
  T7 = (P)YPfu(dividedF2913);
  T6 = (P)YgooSmathYPft(T7);
  xF2914 = T6;
  xF2915 = xF2914;
  tF2916 = (P)1;
  T5 = (P)YPiLL(xF2915,(P)2);
  T4 = (P)YPiv(T5,tF2916);
  resultF2917 = T4;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF2917);
  T2 = CALL2(1,VARREF(YgooSmathY_),dividedF2913,T3);
  T1 = CALL2(1,VARREF(YgooSmathYT),y_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2917,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_76) {
  P x_,n_;
  P resF2918;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T8 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T7 = (P)YPfu(T8);
  T9 = (P)YPfu(n_);
  T6 = (P)YgooSmathYPfpow(T7,T9);
  T5 = (P)YPfb(T6);
  resF2918 = T5;
  T2 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),resF2918);
    T0 = T4;
  } else {
    T0 = resF2918;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isqrt_77) {
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

LOCCODEDEF(fun_x_1352_78) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_208),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_79) {
  P return_;
  P PfpF2932;
  P x_1351F2931;
  P x_1351F2930;
  P x_1351F2929;
  P x_1351F2928;
  P x_1351F2927;
  P x_1351F2926;
  P x_1351F2925;
  P x_1351F2924;
  P prefixF2923;
  P paramF2922;
  P nameF2921;
  P x_1351F2920;
  P x_1352F2919;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86;
LINK_STACK();
  ARG(return_, 0);
  T86 = FUNSHELL(0,fun_x_1352_78,2);
  x_1352F2919 = T86;
  FUNINIT(x_1352F2919, 2,FREEREF(0),return_);
  x_1351F2920 = FREEREF(0);
  nameF2921 = YPfalse;
  paramF2922 = YPfalse;
  prefixF2923 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1351F2920,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1351F2920,LITREF(lit_208),x_1352F2919);
    x_1351F2924 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2924,x_1352F2919);
    nameF2921 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1351F2924);
    x_1351F2925 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2925,x_1352F2919);
    x_1351F2926 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2926,x_1352F2919);
    paramF2922 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1351F2926);
    x_1351F2927 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2927,x_1352F2919);
    x_1351F2928 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2928,x_1352F2919);
    T8 = CALL1(1,VARREF(Ytail),x_1351F2927);
    x_1351F2929 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2929,x_1352F2919);
    T12 = CALL1(1,VARREF(Ytail),x_1351F2925);
    x_1351F2930 = T12;
    prefixF2923 = x_1351F2930;
    x_1351F2931 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2931,x_1352F2919);
  } else {
    T16 = CALL2(1,x_1352F2919,LITREF(lit_141),x_1351F2920);
  }
  T85 = nameF2921;
  T84 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_209),T85);
  PfpF2932 = T84;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T23 = nameF2921;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = paramF2922;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T30,LITREF(lit_144));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T31,T32,LITREF(lit_144));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T24,LITREF(lit_144));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T37 = nameF2921;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T43 = paramF2922;
  T42 = CALL1(1,VARREF(Ylst),T43);
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T44,LITREF(lit_144));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_216));
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T45,T46,LITREF(lit_144));
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = prefixF2923;
  T51 = nameF2921;
  T50 = CALL1(1,VARREF(Ylst),T51);
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_191));
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_216));
  T57 = paramF2922;
  T56 = CALL1(1,VARREF(Ylst),T57);
  T53 = CALL4(1,VARREF(YgooSmacrosYcat),T54,T55,T56,LITREF(lit_144));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T52,LITREF(lit_144));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T34 = CALLN(1,VARREF(YgooSmacrosYcat),6,T35,T36,T38,T47,T48,LITREF(lit_144));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T62 = nameF2921;
  T61 = CALL1(1,VARREF(Ylst),T62);
  T68 = paramF2922;
  T67 = CALL1(1,VARREF(Ylst),T68);
  T69 = CALL1(1,VARREF(Ylst),LITREF(lit_216));
  T66 = CALL3(1,VARREF(YgooSmacrosYcat),T67,T69,LITREF(lit_144));
  T65 = CALL1(1,VARREF(Ylst),T66);
  T70 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_216));
  T64 = CALL4(1,VARREF(YgooSmacrosYcat),T65,T70,T71,LITREF(lit_144));
  T63 = CALL1(1,VARREF(Ylst),T64);
  T72 = prefixF2923;
  T75 = CALL1(1,VARREF(Ylst),LITREF(lit_217));
  T78 = CALL1(1,VARREF(Ylst),PfpF2932);
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_218));
  T83 = paramF2922;
  T82 = CALL1(1,VARREF(Ylst),T83);
  T80 = CALL3(1,VARREF(YgooSmacrosYcat),T81,T82,LITREF(lit_144));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T77 = CALL3(1,VARREF(YgooSmacrosYcat),T78,T79,LITREF(lit_144));
  T76 = CALL1(1,VARREF(Ylst),T77);
  T74 = CALL3(1,VARREF(YgooSmacrosYcat),T75,T76,LITREF(lit_144));
  T73 = CALL1(1,VARREF(Ylst),T74);
  T59 = CALLN(1,VARREF(YgooSmacrosYcat),6,T60,T61,T63,T72,T73,LITREF(lit_144));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T17 = CALL5(1,VARREF(YgooSmacrosYcat),T18,T19,T33,T58,LITREF(lit_144));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_80) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_79,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sqrt_81) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_221));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_sqrt_82) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_221));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_log_83) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_log_84) {
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

LOCCODEDEF(fun_sin_85) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sin_86) {
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

LOCCODEDEF(fun_cos_87) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cos_88) {
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

LOCCODEDEF(fun_tan_89) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tan_90) {
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

LOCCODEDEF(fun_sinh_91) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sinh_92) {
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

LOCCODEDEF(fun_cosh_93) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cosh_94) {
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

LOCCODEDEF(fun_tanh_95) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tanh_96) {
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

LOCCODEDEF(fun_asin_97) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_246));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_asin_98) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_246));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_99) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_250));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_100) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_250));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_atan_101) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan_102) {
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

LOCCODEDEF(fun_atan2_103) {
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

LOCCODEDEF(fun_atan2_104) {
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

LOCCODEDEF(fun_logn_105) {
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
  lit_68 = YPPsym((P)"exp");
  lit_69 = YPPlist(1,YPPsym((P)"<num>"));
  T35 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_68),LITREF(lit_69),YPfalse);
  VARSET(YgooSmathYexp,T34);
  lit_70 = YPPsym((P)"pos?");
  lit_71 = YPPlist(1,YPPsym((P)"<num>"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T36 = YPfab_gen(T37,LITREF(lit_70),LITREF(lit_71),YPfalse);
  VARSET(YgooSmathYposQ,T36);
  lit_72 = YPPsym((P)"zero?");
  lit_73 = YPPlist(1,YPPsym((P)"<num>"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_72),LITREF(lit_73),YPfalse);
  VARSET(YgooSmathYzeroQ,T38);
  lit_74 = YPPsym((P)"neg?");
  lit_75 = YPPlist(1,YPPsym((P)"<num>"));
  T41 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T40 = YPfab_gen(T41,LITREF(lit_74),LITREF(lit_75),YPfalse);
  VARSET(YgooSmathYnegQ,T40);
  lit_76 = YPPsym((P)"neg");
  lit_77 = YPPlist(1,YPPsym((P)"<num>"));
  T43 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T42 = YPfab_gen(T43,LITREF(lit_76),LITREF(lit_77),YPfalse);
  VARSET(YgooSmathYneg,T42);
  lit_78 = YPPsym((P)"abs");
  lit_79 = YPPlist(1,YPPsym((P)"<num>"));
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T44 = YPfab_gen(T45,LITREF(lit_78),LITREF(lit_79),YPfalse);
  VARSET(YgooSmathYabs,T44);
  lit_80 = YPPsym((P)"|");
  lit_81 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T46 = YPfab_gen(T47,LITREF(lit_80),LITREF(lit_81),YPfalse);
  VARSET(YgooSmathYK,T46);
  lit_82 = YPPsym((P)"^");
  lit_83 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T50 = YPfab_gen(T51,LITREF(lit_82),LITREF(lit_83),YPfalse);
  T49 = VARSET(YgooSmathYC,T50);
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
  P T112,T113,T114,T115,T116;
DEFCREGS();
  lit_84 = YPPsym((P)"&");
  lit_85 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_84),LITREF(lit_85),YPfalse);
  VARSET(YgooSmathYB,T0);
  lit_86 = YPPsym((P)"~");
  lit_87 = YPPlist(1,YPPsym((P)"<int>"));
  T3 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_86),LITREF(lit_87),YPfalse);
  VARSET(YgooSmathYN,T2);
  lit_88 = YPPsym((P)"bit?");
  lit_89 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_88),LITREF(lit_89),YPfalse);
  VARSET(YgooSmathYbitQ,T4);
  lit_90 = YPPsym((P)">>");
  lit_91 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_90),LITREF(lit_91),YPfalse);
  VARSET(YgooSmathYGG,T6);
  lit_92 = YPPsym((P)"even?");
  lit_93 = YPPlist(1,YPPsym((P)"<int>"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_92),LITREF(lit_93),YPfalse);
  VARSET(YgooSmathYevenQ,T8);
  lit_94 = YPPsym((P)"odd?");
  lit_95 = YPPlist(1,YPPsym((P)"<int>"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_94),LITREF(lit_95),YPfalse);
  VARSET(YgooSmathYoddQ,T10);
  lit_96 = YPPsym((P)">>>");
  lit_97 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_96),LITREF(lit_97),YPfalse);
  VARSET(YgooSmathYGGG,T12);
  lit_98 = YPPsym((P)"<<");
  lit_99 = YPPlist(2,YPPsym((P)"<int>"),YPPsym((P)"<int>"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_98),LITREF(lit_99),YPfalse);
  VARSET(YgooSmathYLL,T14);
  lit_100 = YPPsym((P)"isqrt");
  lit_101 = YPPlist(1,YPPsym((P)"<int>"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_100),LITREF(lit_101),YPfalse);
  VARSET(YgooSmathYisqrt,T16);
  lit_102 = YPPsym((P)"power-of-two-ceil");
  lit_103 = YPPlist(1,YPPsym((P)"<int>"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_102),LITREF(lit_103),YPfalse);
  VARSET(YgooSmathYpower_of_two_ceil,T18);
  lit_104 = YPPsym((P)"flo-bits");
  lit_105 = YPPlist(1,YPPsym((P)"<flo>"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_104),LITREF(lit_105),YPfalse);
  VARSET(YgooSmathYflo_bits,T20);
  lit_106 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_contagious_call_0 = YPfab_met(FUNCODEREF(fun_contagious_call_0),T22,LITREF(lit_2),LITREF(lit_106),sloc(75),YPfalse);
  T24 = VARREF_OR(YgooSmathYcontagious_call,YPfalse);
  T25 = fun_contagious_call_0;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmathYcontagious_call,T23);
  lit_107 = YPPsym((P)"=");
  lit_108 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_1 = YPfab_met(FUNCODEREF(fun_E_1),T26,LITREF(lit_107),LITREF(lit_108),sloc(79),YPfalse);
  T28 = VARREF_OR(YgooSlogYE,YPfalse);
  T29 = fun_E_1;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSlogYE,T27);
  lit_109 = YPPsym((P)"<");
  lit_110 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T30 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_2 = YPfab_met(FUNCODEREF(fun_L_2),T30,LITREF(lit_109),LITREF(lit_110),sloc(82),YPfalse);
  T32 = VARREF_OR(YgooSmagYL,YPfalse);
  T33 = fun_L_2;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmagYL,T31);
  lit_111 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_3 = YPfab_met(FUNCODEREF(fun_A_3),T34,LITREF(lit_4),LITREF(lit_111),sloc(85),YPfalse);
  T36 = VARREF_OR(YgooSmathYA,YPfalse);
  T37 = fun_A_3;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmathYA,T35);
  lit_112 = YPPsym((P)"1+");
  lit_113 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1A = YPfab_met_inlineable(FUNCODEREF(YgooSmathY1A),T38,LITREF(lit_112),LITREF(lit_113),sloc(88),YPfalse);
  T39 = YgooSmathY1A;
  VARSET(YgooSmathY1A,T39);
  lit_114 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___5 = YPfab_met(FUNCODEREF(fun___5),T40,LITREF(lit_6),LITREF(lit_114),sloc(90),YPfalse);
  T42 = VARREF_OR(YgooSmathY_,YPfalse);
  T43 = fun___5;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathY_,T41);
  lit_115 = YPPsym((P)"1-");
  lit_116 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1_ = YPfab_met_inlineable(FUNCODEREF(YgooSmathY1_),T44,LITREF(lit_115),LITREF(lit_116),sloc(93),YPfalse);
  T45 = YgooSmathY1_;
  VARSET(YgooSmathY1_,T45);
  lit_117 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_7 = YPfab_met(FUNCODEREF(fun_T_7),T46,LITREF(lit_8),LITREF(lit_117),sloc(95),YPfalse);
  T48 = VARREF_OR(YgooSmathYT,YPfalse);
  T49 = fun_T_7;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSmathYT,T47);
  lit_118 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_8 = YPfab_met(FUNCODEREF(fun_S_8),T50,LITREF(lit_10),LITREF(lit_118),sloc(98),YPfalse);
  T52 = VARREF_OR(YgooSmathYS,YPfalse);
  T53 = fun_S_8;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYS,T51);
  lit_119 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_9 = YPfab_met(FUNCODEREF(fun_atan2_9),T54,LITREF(lit_30),LITREF(lit_119),sloc(101),YPfalse);
  T56 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T57 = fun_atan2_9;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYatan2,T55);
  lit_120 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_10 = YPfab_met(FUNCODEREF(fun_logn_10),T58,LITREF(lit_36),LITREF(lit_120),sloc(104),YPfalse);
  T60 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T61 = fun_logn_10;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSmathYlogn,T59);
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_11 = YPfab_met(FUNCODEREF(fun_floor_11),T62,LITREF(lit_38),LITREF(lit_121),sloc(107),YPfalse);
  T64 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T65 = fun_floor_11;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooSmathYfloor,T63);
  lit_122 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_12 = YPfab_met(FUNCODEREF(fun_ceil_12),T66,LITREF(lit_40),LITREF(lit_122),sloc(110),YPfalse);
  T68 = VARREF_OR(YgooSmathYceil,YPfalse);
  T69 = fun_ceil_12;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooSmathYceil,T67);
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_13 = YPfab_met(FUNCODEREF(fun_round_13),T70,LITREF(lit_42),LITREF(lit_123),sloc(113),YPfalse);
  T72 = VARREF_OR(YgooSmathYround,YPfalse);
  T73 = fun_round_13;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYround,T71);
  lit_124 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_125 = YPflo(FLOINT(10.0));
  T74 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_14 = YPfab_met(FUNCODEREF(fun_round_to_14),T74,LITREF(lit_44),LITREF(lit_124),sloc(116),YPfalse);
  T76 = VARREF_OR(YgooSmathYround_to,YPfalse);
  T77 = fun_round_to_14;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmathYround_to,T75);
  lit_126 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_15 = YPfab_met(FUNCODEREF(fun_trunc_15),T78,LITREF(lit_46),LITREF(lit_126),sloc(122),YPfalse);
  T80 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T81 = fun_trunc_15;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSmathYtrunc,T79);
  lit_127 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T83 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T82 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T83,Ynil);
  fun_floorS_16 = YPfab_met(FUNCODEREF(fun_floorS_16),T82,LITREF(lit_48),LITREF(lit_127),sloc(125),YPfalse);
  T85 = VARREF_OR(YgooSmathYfloorS,YPfalse);
  T86 = fun_floorS_16;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YgooSmathYfloorS,T84);
  lit_128 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T88 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T87 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T88,Ynil);
  fun_ceilS_17 = YPfab_met(FUNCODEREF(fun_ceilS_17),T87,LITREF(lit_50),LITREF(lit_128),sloc(134),YPfalse);
  T90 = VARREF_OR(YgooSmathYceilS,YPfalse);
  T91 = fun_ceilS_17;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSmathYceilS,T89);
  lit_129 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_130 = YPflo(FLOINT(2.0));
  T93 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T92 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T93,Ynil);
  fun_roundS_18 = YPfab_met(FUNCODEREF(fun_roundS_18),T92,LITREF(lit_52),LITREF(lit_129),sloc(143),YPfalse);
  T95 = VARREF_OR(YgooSmathYroundS,YPfalse);
  T96 = fun_roundS_18;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YgooSmathYroundS,T94);
  lit_131 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T98 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T97 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T98,Ynil);
  fun_truncS_19 = YPfab_met(FUNCODEREF(fun_truncS_19),T97,LITREF(lit_54),LITREF(lit_131),sloc(159),YPfalse);
  T100 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T101 = fun_truncS_19;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooSmathYtruncS,T99);
  lit_132 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_20 = YPfab_met(FUNCODEREF(fun_div_20),T102,LITREF(lit_56),LITREF(lit_132),sloc(162),YPfalse);
  T104 = VARREF_OR(YgooSmathYdiv,YPfalse);
  T105 = fun_div_20;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YgooSmathYdiv,T103);
  lit_133 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_21 = YPfab_met(FUNCODEREF(fun_mod_21),T106,LITREF(lit_58),LITREF(lit_133),sloc(165),YPfalse);
  T108 = VARREF_OR(YgooSmathYmod,YPfalse);
  T109 = fun_mod_21;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooSmathYmod,T107);
  lit_134 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T112 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  T111 = fun_modA_22 = YPfab_met_inlineable(FUNCODEREF(fun_modA_22),T112,LITREF(lit_60),LITREF(lit_134),sloc(169),YPfalse);
  T115 = VARREF_OR(YgooSmathYmodA,YPfalse);
  T116 = fun_modA_22;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  T113 = VARSET(YgooSmathYmodA,T114);
  T110 = T113;
  return T110;
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165;
DEFCREGS();
  lit_135 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T0 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  fun_mod__23 = YPfab_met_inlineable(FUNCODEREF(fun_mod__23),T0,LITREF(lit_62),LITREF(lit_135),sloc(172),YPfalse);
  T2 = VARREF_OR(YgooSmathYmod_,YPfalse);
  T3 = fun_mod__23;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSmathYmod_,T1);
  lit_136 = YPPlist(1,YPPsym((P)"exp"));
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-1344");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPPsym((P)"modincf");
  lit_141 = YPsb((P)"Match Pattern Failure");
  lit_142 = YPPsym((P)"opf");
  lit_143 = YPPsym((P)"_");
  lit_144 = Ynil;
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1344_24 = YPfab_met(FUNCODEREF(fun_x_1344_24),T6,LITREF(lit_138),LITREF(lit_139),YPfalse,YPfalse);
  T5 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T5,YPfalse,LITREF(lit_137),YPfalse,YPfalse);
  T4 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T4,YPfalse,LITREF(lit_136),YPfalse,YPfalse);
  T7 = fun_26;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T7);
  lit_145 = YPPlist(1,YPPsym((P)"exp"));
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1348");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPPsym((P)"moddecf");
  T10 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1348_27 = YPfab_met(FUNCODEREF(fun_x_1348_27),T10,LITREF(lit_147),LITREF(lit_148),YPfalse,YPfalse);
  T9 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T9,YPfalse,LITREF(lit_146),YPfalse,YPfalse);
  T8 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T8,YPfalse,LITREF(lit_145),YPfalse,YPfalse);
  T11 = fun_29;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T11);
  lit_150 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T12 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_30 = YPfab_met(FUNCODEREF(fun_rem_30),T12,LITREF(lit_64),LITREF(lit_150),sloc(181),YPfalse);
  T14 = VARREF_OR(YgooSmathYrem,YPfalse);
  T15 = fun_rem_30;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYrem,T13);
  lit_151 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T16 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_31 = YPfab_met(FUNCODEREF(fun_pow_31),T16,LITREF(lit_66),LITREF(lit_151),sloc(185),YPfalse);
  T18 = VARREF_OR(YgooSmathYpow,YPfalse);
  T19 = fun_pow_31;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYpow,T17);
  lit_152 = YPPlist(1,YPPsym((P)"n"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_exp_32 = YPfab_met_inlineable(FUNCODEREF(fun_exp_32),T20,LITREF(lit_68),LITREF(lit_152),sloc(188),YPfalse);
  T22 = VARREF_OR(YgooSmathYexp,YPfalse);
  T23 = fun_exp_32;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYexp,T21);
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_33 = YPfab_met_inlineable(FUNCODEREF(fun_posQ_33),T24,LITREF(lit_70),LITREF(lit_153),sloc(191),YPfalse);
  T26 = VARREF_OR(YgooSmathYposQ,YPfalse);
  T27 = fun_posQ_33;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmathYposQ,T25);
  lit_154 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_34 = YPfab_met_inlineable(FUNCODEREF(fun_zeroQ_34),T28,LITREF(lit_72),LITREF(lit_154),sloc(194),YPfalse);
  T30 = VARREF_OR(YgooSmathYzeroQ,YPfalse);
  T31 = fun_zeroQ_34;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmathYzeroQ,T29);
  lit_155 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_35 = YPfab_met_inlineable(FUNCODEREF(fun_negQ_35),T32,LITREF(lit_74),LITREF(lit_155),sloc(197),YPfalse);
  T34 = VARREF_OR(YgooSmathYnegQ,YPfalse);
  T35 = fun_negQ_35;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYnegQ,T33);
  lit_156 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_36 = YPfab_met_inlineable(FUNCODEREF(fun_neg_36),T36,LITREF(lit_76),LITREF(lit_156),sloc(200),YPfalse);
  T38 = VARREF_OR(YgooSmathYneg,YPfalse);
  T39 = fun_neg_36;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYneg,T37);
  lit_157 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_37 = YPfab_met_inlineable(FUNCODEREF(fun_abs_37),T40,LITREF(lit_78),LITREF(lit_157),sloc(203),YPfalse);
  T42 = VARREF_OR(YgooSmathYabs,YPfalse);
  T43 = fun_abs_37;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYabs,T41);
  lit_158 = YPPsym((P)"to-str");
  lit_159 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_38 = YPfab_met(FUNCODEREF(fun_to_str_38),T44,LITREF(lit_158),LITREF(lit_159),sloc(206),YPfalse);
  T46 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T47 = fun_to_str_38;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSanyYto_str,T45);
  lit_160 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T49 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T49,Ynil);
  fun_contagious_type_39 = YPfab_met(FUNCODEREF(fun_contagious_type_39),T48,LITREF(lit_0),LITREF(lit_160),sloc(211),YPfalse);
  T51 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T52 = fun_contagious_type_39;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSmathYcontagious_type,T50);
  lit_161 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T54 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T53 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T54,Ynil);
  fun_contagious_type_40 = YPfab_met(FUNCODEREF(fun_contagious_type_40),T53,LITREF(lit_0),LITREF(lit_161),sloc(214),YPfalse);
  T56 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T57 = fun_contagious_type_40;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYcontagious_type,T55);
  lit_162 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T59 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T58 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T59,Ynil);
  fun_contagious_type_41 = YPfab_met(FUNCODEREF(fun_contagious_type_41),T58,LITREF(lit_0),LITREF(lit_162),sloc(217),YPfalse);
  T61 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T62 = fun_contagious_type_41;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSmathYcontagious_type,T60);
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T64 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T63 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T64,Ynil);
  fun_contagious_type_42 = YPfab_met(FUNCODEREF(fun_contagious_type_42),T63,LITREF(lit_0),LITREF(lit_163),sloc(220),YPfalse);
  T66 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T67 = fun_contagious_type_42;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYcontagious_type,T65);
  lit_164 = YPPsym((P)"==");
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_43 = YPfab_met_inlineable(FUNCODEREF(fun_EE_43),T68,LITREF(lit_164),LITREF(lit_165),sloc(223),YPfalse);
  T70 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T71 = fun_EE_43;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmacrosYEE,T69);
  lit_166 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_44 = YPfab_met_inlineable(FUNCODEREF(fun_L_44),T72,LITREF(lit_109),LITREF(lit_166),sloc(226),YPfalse);
  T74 = VARREF_OR(YgooSmagYL,YPfalse);
  T75 = fun_L_44;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmagYL,T73);
  lit_167 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T76 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_A_45 = YPfab_met_inlineable(FUNCODEREF(fun_A_45),T76,LITREF(lit_4),LITREF(lit_167),sloc(229),YPfalse);
  T78 = VARREF_OR(YgooSmathYA,YPfalse);
  T79 = fun_A_45;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYA,T77);
  lit_168 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun___46 = YPfab_met_inlineable(FUNCODEREF(fun___46),T80,LITREF(lit_6),LITREF(lit_168),sloc(232),YPfalse);
  T82 = VARREF_OR(YgooSmathY_,YPfalse);
  T83 = fun___46;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathY_,T81);
  lit_169 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_T_47 = YPfab_met_inlineable(FUNCODEREF(fun_T_47),T84,LITREF(lit_8),LITREF(lit_169),sloc(235),YPfalse);
  T86 = VARREF_OR(YgooSmathYT,YPfalse);
  T87 = fun_T_47;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYT,T85);
  lit_170 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_171 = YPsb((P)"No int divide, consider trunc/");
  T88 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_48 = YPfab_met_inlineable(FUNCODEREF(fun_S_48),T88,LITREF(lit_10),LITREF(lit_170),sloc(238),YPfalse);
  T90 = VARREF_OR(YgooSmathYS,YPfalse);
  T91 = fun_S_48;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSmathYS,T89);
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_49 = YPfab_met_inlineable(FUNCODEREF(fun_floor_49),T92,LITREF(lit_38),LITREF(lit_172),sloc(241),YPfalse);
  T94 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T95 = fun_floor_49;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSmathYfloor,T93);
  lit_173 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_50 = YPfab_met_inlineable(FUNCODEREF(fun_ceil_50),T96,LITREF(lit_40),LITREF(lit_173),sloc(243),YPfalse);
  T98 = VARREF_OR(YgooSmathYceil,YPfalse);
  T99 = fun_ceil_50;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYceil,T97);
  lit_174 = YPPlist(1,YPPsym((P)"x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_51 = YPfab_met_inlineable(FUNCODEREF(fun_round_51),T100,LITREF(lit_42),LITREF(lit_174),sloc(245),YPfalse);
  T102 = VARREF_OR(YgooSmathYround,YPfalse);
  T103 = fun_round_51;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYround,T101);
  lit_175 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_52 = YPfab_met_inlineable(FUNCODEREF(fun_trunc_52),T104,LITREF(lit_46),LITREF(lit_175),sloc(247),YPfalse);
  T106 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T107 = fun_trunc_52;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYtrunc,T105);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T109 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T108 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T109,Ynil);
  fun_truncS_53 = YPfab_met(FUNCODEREF(fun_truncS_53),T108,LITREF(lit_54),LITREF(lit_176),sloc(249),YPfalse);
  T111 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T112 = fun_truncS_53;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YgooSmathYtruncS,T110);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T113 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_54 = YPfab_met(FUNCODEREF(fun_mod_54),T113,LITREF(lit_58),LITREF(lit_177),sloc(253),YPfalse);
  T115 = VARREF_OR(YgooSmathYmod,YPfalse);
  T116 = fun_mod_54;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSmathYmod,T114);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_55 = YPfab_met(FUNCODEREF(fun_pow_55),T117,LITREF(lit_66),LITREF(lit_178),sloc(261),YPfalse);
  T119 = VARREF_OR(YgooSmathYpow,YPfalse);
  T120 = fun_pow_55;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSmathYpow,T118);
  lit_179 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T121 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_K_56 = YPfab_met_inlineable(FUNCODEREF(fun_K_56),T121,LITREF(lit_80),LITREF(lit_179),sloc(276),YPfalse);
  T123 = VARREF_OR(YgooSmathYK,YPfalse);
  T124 = fun_K_56;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSmathYK,T122);
  lit_180 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T125 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_C_57 = YPfab_met_inlineable(FUNCODEREF(fun_C_57),T125,LITREF(lit_82),LITREF(lit_180),sloc(279),YPfalse);
  T127 = VARREF_OR(YgooSmathYC,YPfalse);
  T128 = fun_C_57;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooSmathYC,T126);
  lit_181 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T129 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_B_58 = YPfab_met_inlineable(FUNCODEREF(fun_B_58),T129,LITREF(lit_84),LITREF(lit_181),sloc(282),YPfalse);
  T131 = VARREF_OR(YgooSmathYB,YPfalse);
  T132 = fun_B_58;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YgooSmathYB,T130);
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  T133 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_59 = YPfab_met_inlineable(FUNCODEREF(fun_N_59),T133,LITREF(lit_86),LITREF(lit_182),sloc(285),YPfalse);
  T135 = VARREF_OR(YgooSmathYN,YPfalse);
  T136 = fun_N_59;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YgooSmathYN,T134);
  lit_183 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_bitQ_60 = YPfab_met_inlineable(FUNCODEREF(fun_bitQ_60),T137,LITREF(lit_88),LITREF(lit_183),sloc(288),YPfalse);
  T139 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T140 = fun_bitQ_60;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YgooSmathYbitQ,T138);
  lit_184 = YPPlist(1,YPPsym((P)"x"));
  T141 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_61 = YPfab_met_inlineable(FUNCODEREF(fun_evenQ_61),T141,LITREF(lit_92),LITREF(lit_184),sloc(291),YPfalse);
  T143 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T144 = fun_evenQ_61;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YgooSmathYevenQ,T142);
  lit_185 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_62 = YPfab_met_inlineable(FUNCODEREF(fun_oddQ_62),T145,LITREF(lit_94),LITREF(lit_185),sloc(294),YPfalse);
  T147 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T148 = fun_oddQ_62;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YgooSmathYoddQ,T146);
  lit_186 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T149 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_63 = YPfab_met_inlineable(FUNCODEREF(fun_GG_63),T149,LITREF(lit_90),LITREF(lit_186),sloc(297),YPfalse);
  T151 = VARREF_OR(YgooSmathYGG,YPfalse);
  T152 = fun_GG_63;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YgooSmathYGG,T150);
  lit_187 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T153 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_64 = YPfab_met_inlineable(FUNCODEREF(fun_GGG_64),T153,LITREF(lit_96),LITREF(lit_187),sloc(300),YPfalse);
  T155 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T156 = fun_GGG_64;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YgooSmathYGGG,T154);
  lit_188 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T157 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_LL_65 = YPfab_met_inlineable(FUNCODEREF(fun_LL_65),T157,LITREF(lit_98),LITREF(lit_188),sloc(303),YPfalse);
  T159 = VARREF_OR(YgooSmathYLL,YPfalse);
  T160 = fun_LL_65;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YgooSmathYLL,T158);
  lit_189 = YPPlist(1,YPPsym((P)"x"));
  T161 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_66 = YPfab_met(FUNCODEREF(fun_power_of_two_ceil_66),T161,LITREF(lit_102),LITREF(lit_189),sloc(306),YPfalse);
  T163 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T164 = fun_power_of_two_ceil_66;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YgooSmathYpower_of_two_ceil,T162);
  T165 = YPfalse;
  return T165;
}

P YgooSmathY___main_4___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120;
DEFCREGS();
  lit_190 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPfab_met(FUNCODEREF(YgooSmathYflo_bits),T0,LITREF(lit_104),LITREF(lit_190),sloc(340),YPfalse);
  T1 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T1);
  lit_191 = YPPsym((P)"as");
  lit_192 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T3 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T2 = YPfab_sig(YPPlist(2,T3,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_68 = YPfab_met(FUNCODEREF(fun_as_68),T2,LITREF(lit_191),LITREF(lit_192),sloc(343),YPfalse);
  T5 = VARREF_OR(YgooStypesYas,YPfalse);
  T6 = fun_as_68;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooStypesYas,T4);
  lit_193 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_69 = YPfab_met_inlineable(FUNCODEREF(fun_EE_69),T7,LITREF(lit_164),LITREF(lit_193),sloc(346),YPfalse);
  T9 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T10 = fun_EE_69;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YgooSmacrosYEE,T8);
  lit_194 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_70 = YPfab_met_inlineable(FUNCODEREF(fun_L_70),T11,LITREF(lit_109),LITREF(lit_194),sloc(349),YPfalse);
  T13 = VARREF_OR(YgooSmagYL,YPfalse);
  T14 = fun_L_70;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSmagYL,T12);
  lit_195 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_71 = YPfab_met_inlineable(FUNCODEREF(fun_A_71),T15,LITREF(lit_4),LITREF(lit_195),sloc(352),YPfalse);
  T17 = VARREF_OR(YgooSmathYA,YPfalse);
  T18 = fun_A_71;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSmathYA,T16);
  lit_196 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___72 = YPfab_met_inlineable(FUNCODEREF(fun___72),T19,LITREF(lit_6),LITREF(lit_196),sloc(355),YPfalse);
  T21 = VARREF_OR(YgooSmathY_,YPfalse);
  T22 = fun___72;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSmathY_,T20);
  lit_197 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_73 = YPfab_met_inlineable(FUNCODEREF(fun_T_73),T23,LITREF(lit_8),LITREF(lit_197),sloc(358),YPfalse);
  T25 = VARREF_OR(YgooSmathYT,YPfalse);
  T26 = fun_T_73;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSmathYT,T24);
  lit_198 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_74 = YPfab_met_inlineable(FUNCODEREF(fun_S_74),T27,LITREF(lit_10),LITREF(lit_198),sloc(361),YPfalse);
  T29 = VARREF_OR(YgooSmathYS,YPfalse);
  T30 = fun_S_74;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSmathYS,T28);
  lit_199 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T32,Ynil);
  fun_truncS_75 = YPfab_met(FUNCODEREF(fun_truncS_75),T31,LITREF(lit_54),LITREF(lit_199),sloc(364),YPfalse);
  T34 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T35 = fun_truncS_75;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYtruncS,T33);
  lit_200 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_76 = YPfab_met(FUNCODEREF(fun_pow_76),T36,LITREF(lit_66),LITREF(lit_200),sloc(369),YPfalse);
  T38 = VARREF_OR(YgooSmathYpow,YPfalse);
  T39 = fun_pow_76;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYpow,T37);
  lit_201 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_201));
  lit_202 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_202));
  lit_203 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_77 = YPfab_met(FUNCODEREF(fun_isqrt_77),T40,LITREF(lit_100),LITREF(lit_203),sloc(376),YPfalse);
  T42 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T43 = fun_isqrt_77;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYisqrt,T41);
  lit_204 = YPPlist(1,YPPsym((P)"exp"));
  lit_205 = YPPlist(1,YPPsym((P)"return"));
  lit_206 = YPPsym((P)"x-1352");
  lit_207 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_208 = YPPsym((P)"def-unary-trans");
  lit_209 = YPsb((P)"%f");
  lit_210 = YPPsym((P)"seq");
  lit_211 = YPPsym((P)"dg");
  lit_212 = YPPsym((P)"<num>");
  lit_213 = YPPsym((P)"=>");
  lit_214 = YPPsym((P)"dm");
  lit_215 = YPPsym((P)"<int>");
  lit_216 = YPPsym((P)"<flo>");
  lit_217 = YPPsym((P)"%fb");
  lit_218 = YPPsym((P)"%fu");
  T46 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1352_78 = YPfab_met(FUNCODEREF(fun_x_1352_78),T46,LITREF(lit_206),LITREF(lit_207),YPfalse,YPfalse);
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T45,YPfalse,LITREF(lit_205),YPfalse,YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPfab_met(FUNCODEREF(fun_80),T44,YPfalse,LITREF(lit_204),YPfalse,YPfalse);
  T47 = fun_80;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T47);
  lit_219 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T48 = YPfab_gen(T49,LITREF(lit_32),LITREF(lit_219),YPfalse);
  VARSET(YgooSmathYsqrt,T48);
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  lit_221 = YPsb((P)"SQRT would produce complex number");
  T50 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_81 = YPfab_met(FUNCODEREF(fun_sqrt_81),T50,LITREF(lit_32),LITREF(lit_220),sloc(389),YPfalse);
  T52 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T53 = fun_sqrt_81;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYsqrt,T51);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_82 = YPfab_met(FUNCODEREF(fun_sqrt_82),T54,LITREF(lit_32),LITREF(lit_222),sloc(389),YPfalse);
  T56 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T57 = fun_sqrt_82;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYsqrt,T55);
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T58 = YPfab_gen(T59,LITREF(lit_34),LITREF(lit_223),YPfalse);
  VARSET(YgooSmathYlog,T58);
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_83 = YPfab_met(FUNCODEREF(fun_log_83),T60,LITREF(lit_34),LITREF(lit_224),sloc(392),YPfalse);
  T62 = VARREF_OR(YgooSmathYlog,YPfalse);
  T63 = fun_log_83;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYlog,T61);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_84 = YPfab_met(FUNCODEREF(fun_log_84),T64,LITREF(lit_34),LITREF(lit_225),sloc(392),YPfalse);
  T66 = VARREF_OR(YgooSmathYlog,YPfalse);
  T67 = fun_log_84;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYlog,T65);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T68 = YPfab_gen(T69,LITREF(lit_12),LITREF(lit_226),YPfalse);
  VARSET(YgooSmathYsin,T68);
  lit_227 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_85 = YPfab_met(FUNCODEREF(fun_sin_85),T70,LITREF(lit_12),LITREF(lit_227),sloc(393),YPfalse);
  T72 = VARREF_OR(YgooSmathYsin,YPfalse);
  T73 = fun_sin_85;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYsin,T71);
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_86 = YPfab_met(FUNCODEREF(fun_sin_86),T74,LITREF(lit_12),LITREF(lit_228),sloc(393),YPfalse);
  T76 = VARREF_OR(YgooSmathYsin,YPfalse);
  T77 = fun_sin_86;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmathYsin,T75);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T78 = YPfab_gen(T79,LITREF(lit_14),LITREF(lit_229),YPfalse);
  VARSET(YgooSmathYcos,T78);
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_87 = YPfab_met(FUNCODEREF(fun_cos_87),T80,LITREF(lit_14),LITREF(lit_230),sloc(394),YPfalse);
  T82 = VARREF_OR(YgooSmathYcos,YPfalse);
  T83 = fun_cos_87;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYcos,T81);
  lit_231 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_88 = YPfab_met(FUNCODEREF(fun_cos_88),T84,LITREF(lit_14),LITREF(lit_231),sloc(394),YPfalse);
  T86 = VARREF_OR(YgooSmathYcos,YPfalse);
  T87 = fun_cos_88;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYcos,T85);
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T88 = YPfab_gen(T89,LITREF(lit_16),LITREF(lit_232),YPfalse);
  VARSET(YgooSmathYtan,T88);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_89 = YPfab_met(FUNCODEREF(fun_tan_89),T90,LITREF(lit_16),LITREF(lit_233),sloc(395),YPfalse);
  T92 = VARREF_OR(YgooSmathYtan,YPfalse);
  T93 = fun_tan_89;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooSmathYtan,T91);
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_90 = YPfab_met(FUNCODEREF(fun_tan_90),T94,LITREF(lit_16),LITREF(lit_234),sloc(395),YPfalse);
  T96 = VARREF_OR(YgooSmathYtan,YPfalse);
  T97 = fun_tan_90;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSmathYtan,T95);
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T98 = YPfab_gen(T99,LITREF(lit_18),LITREF(lit_235),YPfalse);
  VARSET(YgooSmathYsinh,T98);
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_91 = YPfab_met(FUNCODEREF(fun_sinh_91),T100,LITREF(lit_18),LITREF(lit_236),sloc(396),YPfalse);
  T102 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T103 = fun_sinh_91;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYsinh,T101);
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_92 = YPfab_met(FUNCODEREF(fun_sinh_92),T104,LITREF(lit_18),LITREF(lit_237),sloc(396),YPfalse);
  T106 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T107 = fun_sinh_92;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYsinh,T105);
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T108 = YPfab_gen(T109,LITREF(lit_20),LITREF(lit_238),YPfalse);
  VARSET(YgooSmathYcosh,T108);
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_93 = YPfab_met(FUNCODEREF(fun_cosh_93),T110,LITREF(lit_20),LITREF(lit_239),sloc(397),YPfalse);
  T112 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T113 = fun_cosh_93;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooSmathYcosh,T111);
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T116 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T115 = fun_cosh_94 = YPfab_met(FUNCODEREF(fun_cosh_94),T116,LITREF(lit_20),LITREF(lit_240),sloc(397),YPfalse);
  T119 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T120 = fun_cosh_94;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  T117 = VARSET(YgooSmathYcosh,T118);
  T114 = T117;
  return T114;
}

P YgooSmathY___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
  lit_241 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_22),LITREF(lit_241),YPfalse);
  VARSET(YgooSmathYtanh,T0);
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_95 = YPfab_met(FUNCODEREF(fun_tanh_95),T2,LITREF(lit_22),LITREF(lit_242),sloc(398),YPfalse);
  T4 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T5 = fun_tanh_95;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSmathYtanh,T3);
  lit_243 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_96 = YPfab_met(FUNCODEREF(fun_tanh_96),T6,LITREF(lit_22),LITREF(lit_243),sloc(398),YPfalse);
  T8 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T9 = fun_tanh_96;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSmathYtanh,T7);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_24),LITREF(lit_244),YPfalse);
  VARSET(YgooSmathYasin,T10);
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  lit_246 = YPsb((P)"SQRT would produce complex number");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_97 = YPfab_met(FUNCODEREF(fun_asin_97),T12,LITREF(lit_24),LITREF(lit_245),sloc(399),YPfalse);
  T14 = VARREF_OR(YgooSmathYasin,YPfalse);
  T15 = fun_asin_97;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYasin,T13);
  lit_247 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_98 = YPfab_met(FUNCODEREF(fun_asin_98),T16,LITREF(lit_24),LITREF(lit_247),sloc(399),YPfalse);
  T18 = VARREF_OR(YgooSmathYasin,YPfalse);
  T19 = fun_asin_98;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYasin,T17);
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_26),LITREF(lit_248),YPfalse);
  VARSET(YgooSmathYacos,T20);
  lit_249 = YPPlist(1,YPPsym((P)"x"));
  lit_250 = YPsb((P)"SQRT would produce complex number");
  T22 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_99 = YPfab_met(FUNCODEREF(fun_acos_99),T22,LITREF(lit_26),LITREF(lit_249),sloc(401),YPfalse);
  T24 = VARREF_OR(YgooSmathYacos,YPfalse);
  T25 = fun_acos_99;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmathYacos,T23);
  lit_251 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_100 = YPfab_met(FUNCODEREF(fun_acos_100),T26,LITREF(lit_26),LITREF(lit_251),sloc(401),YPfalse);
  T28 = VARREF_OR(YgooSmathYacos,YPfalse);
  T29 = fun_acos_100;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmathYacos,T27);
  lit_252 = YPPlist(1,YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_28),LITREF(lit_252),YPfalse);
  VARSET(YgooSmathYatan,T30);
  lit_253 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_101 = YPfab_met(FUNCODEREF(fun_atan_101),T32,LITREF(lit_28),LITREF(lit_253),sloc(403),YPfalse);
  T34 = VARREF_OR(YgooSmathYatan,YPfalse);
  T35 = fun_atan_101;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYatan,T33);
  lit_254 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_102 = YPfab_met(FUNCODEREF(fun_atan_102),T36,LITREF(lit_28),LITREF(lit_254),sloc(403),YPfalse);
  T38 = VARREF_OR(YgooSmathYatan,YPfalse);
  T39 = fun_atan_102;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYatan,T37);
  lit_255 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T40 = YPfab_gen(T41,LITREF(lit_30),LITREF(lit_255),YPfalse);
  VARSET(YgooSmathYatan2,T40);
  lit_256 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_103 = YPfab_met(FUNCODEREF(fun_atan2_103),T42,LITREF(lit_30),LITREF(lit_256),sloc(406),YPfalse);
  T44 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T45 = fun_atan2_103;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSmathYatan2,T43);
  lit_257 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_104 = YPfab_met(FUNCODEREF(fun_atan2_104),T46,LITREF(lit_30),LITREF(lit_257),sloc(408),YPfalse);
  T48 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T49 = fun_atan2_104;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSmathYatan2,T47);
  lit_258 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_105 = YPfab_met(FUNCODEREF(fun_logn_105),T50,LITREF(lit_36),LITREF(lit_258),sloc(411),YPfalse);
  T52 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T53 = fun_logn_105;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYlogn,T51);
  if (YPfalse != YPfalse) {
  } else {
  }
  T54 = YPfalse;
  return T54;
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
  {"@add-new", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
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
  {"opf", &module_info_gooSmacros, NULL},
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
  {"as-log", &module_info_gooSlog, NULL},
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
  {"1st", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
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
  {"~==", &module_info_gooSlog, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
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
  {"$bot", &module_info_gooStypes, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
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
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
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
  {"%class-props", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
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
  {"%class-forward-setter", &module_info_gooSboot, NULL},
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
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
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
  {"%class-id", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
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
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
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
  {"sig-specs", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
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
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
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
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
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
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
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
  {"=", &module_info_gooSlog, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
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
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
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
  {"cos", CVAR, &YgooSmathYcos},
  {"%fpow", PVAR, NULL},
  {"%flog", PVAR, NULL},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"sin", CVAR, &YgooSmathYsin},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"round", CVAR, &YgooSmathYround},
  {"%flo-bits", PVAR, NULL},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"ceil", CVAR, &YgooSmathYceil},
  {"%f-", PVAR, NULL},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"%f=", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"floor", CVAR, &YgooSmathYfloor},
  {"*", CVAR, &YgooSmathYT},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"%fi2f", PVAR, NULL},
  {"1-", CVAR, &YgooSmathY1_},
  {"mod", CVAR, &YgooSmathYmod},
  {"%ft", PVAR, NULL},
  {"---main-4---", PVAR, NULL},
  {"---main-5---", PVAR, NULL},
  {"%f<", PVAR, NULL},
  {"^", CVAR, &YgooSmathYC},
  {"$e", CVAR, &YgooSmathYDe},
  {"log", CVAR, &YgooSmathYlog},
  {"%fc", PVAR, NULL},
  {"div", CVAR, &YgooSmathYdiv},
  {"---main-1---", PVAR, NULL},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"exp", CVAR, &YgooSmathYexp},
  {"%fasin", PVAR, NULL},
  {"-", CVAR, &YgooSmathY_},
  {"%f/", PVAR, NULL},
  {"~", CVAR, &YgooSmathYN},
  {"%fcos", PVAR, NULL},
  {"%f+", PVAR, NULL},
  {"%f*", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"%facos", PVAR, NULL},
  {"abs", CVAR, &YgooSmathYabs},
  {"/", CVAR, &YgooSmathYS},
  {"%ff", PVAR, NULL},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"1+", CVAR, &YgooSmathY1A},
  {"%ft/", PVAR, NULL},
  {"neg", CVAR, &YgooSmathYneg},
  {"atan", CVAR, &YgooSmathYatan},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"def-unary-trans", PVAR, NULL},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"round/", CVAR, &YgooSmathYroundS},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"%ftan", PVAR, NULL},
  {"acos", CVAR, &YgooSmathYacos},
  {"%fcosh", PVAR, NULL},
  {"moddecf", PVAR, NULL},
  {"<<", CVAR, &YgooSmathYLL},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"asin", CVAR, &YgooSmathYasin},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"%ftanh", PVAR, NULL},
  {"%fatan2", PVAR, NULL},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"pow", CVAR, &YgooSmathYpow},
  {"tanh", CVAR, &YgooSmathYtanh},
  {">>>", CVAR, &YgooSmathYGGG},
  {"%fsin", PVAR, NULL},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"logn", CVAR, &YgooSmathYlogn},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"rem", CVAR, &YgooSmathYrem},
  {"|", CVAR, &YgooSmathYK},
  {"&", CVAR, &YgooSmathYB},
  {"%fsqrt", PVAR, NULL},
  {"+", CVAR, &YgooSmathYA},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"modincf", PVAR, NULL},
  {"---main-3---", PVAR, NULL},
  {"%fatan", PVAR, NULL},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"---main-2---", PVAR, NULL},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"tan", CVAR, &YgooSmathYtan},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {">>", CVAR, &YgooSmathYGG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"cos", NULL},
  {"round-to", NULL},
  {"sin", NULL},
  {"bit?", NULL},
  {"mod-", NULL},
  {"round", NULL},
  {"~", NULL},
  {"/", NULL},
  {"ceil", NULL},
  {"mod+", NULL},
  {"&", NULL},
  {"floor", NULL},
  {"*", NULL},
  {"1-", NULL},
  {"mod", NULL},
  {"^", NULL},
  {"logn", NULL},
  {"$e", NULL},
  {"log", NULL},
  {"div", NULL},
  {"sqrt", NULL},
  {"exp", NULL},
  {"-", NULL},
  {"flo-bits", NULL},
  {"abs", NULL},
  {"trunc/", NULL},
  {"atan2", NULL},
  {"contagious-call", NULL},
  {"power-of-two-ceil", NULL},
  {"1+", NULL},
  {"neg", NULL},
  {"atan", NULL},
  {"isqrt", NULL},
  {"neg?", NULL},
  {"round/", NULL},
  {"contagious-type", NULL},
  {"acos", NULL},
  {"moddecf", NULL},
  {"$pi", NULL},
  {"<<", NULL},
  {"zero?", NULL},
  {"asin", NULL},
  {"ceil/", NULL},
  {"pos?", NULL},
  {"tanh", NULL},
  {">>>", NULL},
  {"|", NULL},
  {"+", NULL},
  {"cosh", NULL},
  {"odd?", NULL},
  {"pow", NULL},
  {"modincf", NULL},
  {"sinh", NULL},
  {"even?", NULL},
  {"floor/", NULL},
  {"tan", NULL},
  {"rem", NULL},
  {"trunc", NULL},
  {"num-to-str", NULL},
  {">>", NULL},
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
