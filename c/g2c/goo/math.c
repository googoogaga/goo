/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/math");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/math */

EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSmathYS,"goo/math","/");
DEF(YgooSmathYN,"goo/math","~");
DEF(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
DEF(YgooSmathYmodA,"goo/math","mod+");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSmathY_,"goo/math","-");
EXT(Yclass_id,"goo/boot","class-id");
DEF(YgooSmathYfloor,"goo/math","floor");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
DEF(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSmathYT,"goo/math","*");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
DEF(YgooSmathYB,"goo/math","&");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
DEF(YgooSmathYmod,"goo/math","mod");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSmathY1_,"goo/math","1-");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DEF(YgooSmathYC,"goo/math","^");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSmathYsqrt,"goo/math","sqrt");
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
DEF(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
DEF(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
DEF(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSmathYabs,"goo/math","abs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSmathYatan2,"goo/math","atan2");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YgooSmathYneg,"goo/math","neg");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSmathY1A,"goo/math","1+");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
DEF(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSmathYatan,"goo/math","atan");
EXT(YOmap,"goo/boot","@map");
DEF(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooSmathYacos,"goo/math","acos");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YLintG,"goo/boot","<int>");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
DEF(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
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
DEF(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooSmathYposQ,"goo/math","pos?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YgooSmathYDpi,"goo/math","$pi");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
DEF(YgooSmathYlogn,"goo/math","logn");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ybox_value,"goo/boot","box-value");
DEF(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooSmathYpow,"goo/math","pow");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSmathYDe,"goo/math","$e");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
DEF(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ynil,"goo/boot","nil");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSmathYtan,"goo/math","tan");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
DEF(YgooSmathYrem,"goo/math","rem");
DEF(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YOfold,"goo/boot","@fold");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSmathYcos,"goo/math","cos");
DEF(YgooSmathYGG,"goo/math",">>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooSmathYround_to,"goo/math","round-to");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSmathYsin,"goo/math","sin");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSmathYmod_,"goo/math","mod-");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yfun_code,"goo/boot","fun-code");
DEF(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSmathYround,"goo/math","round");
DEF(YgooSmathYA,"goo/math","+");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_60);
DEFLIT(lit_216);
DEFLIT(lit_42);
DEFLIT(lit_210);
DEFLIT(lit_106);
DEFLIT(lit_89);
DEFLIT(lit_209);
DEFLIT(lit_92);
DEFLIT(lit_75);
DEFLIT(lit_68);
DEFLIT(lit_118);
DEFLIT(lit_45);
DEFLIT(lit_0);
DEFLIT(lit_104);
DEFLIT(lit_144);
DEFLIT(lit_241);
DEFLIT(lit_192);
DEFLIT(lit_231);
DEFLIT(lit_4);
DEFLIT(lit_77);
DEFLIT(lit_177);
DEFLIT(lit_137);
DEFLIT(lit_174);
DEFLIT(lit_199);
DEFLIT(lit_254);
DEFLIT(lit_66);
DEFLIT(lit_99);
DEFLIT(lit_149);
DEFLIT(lit_5);
DEFLIT(lit_105);
DEFLIT(lit_119);
DEFLIT(lit_21);
DEFLIT(lit_211);
DEFLIT(lit_7);
DEFLIT(lit_182);
DEFLIT(lit_245);
DEFLIT(lit_234);
DEFLIT(lit_188);
DEFLIT(lit_178);
DEFLIT(lit_120);
DEFLIT(lit_253);
DEFLIT(lit_198);
DEFLIT(lit_80);
DEFLIT(lit_181);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_108);
DEFLIT(lit_116);
DEFLIT(lit_212);
DEFLIT(lit_53);
DEFLIT(lit_90);
DEFLIT(lit_57);
DEFLIT(lit_233);
DEFLIT(lit_87);
DEFLIT(lit_162);
DEFLIT(lit_55);
DEFLIT(lit_128);
DEFLIT(lit_102);
DEFLIT(lit_169);
DEFLIT(lit_58);
DEFLIT(lit_164);
DEFLIT(lit_11);
DEFLIT(lit_242);
DEFLIT(lit_179);
DEFLIT(lit_152);
DEFLIT(lit_51);
DEFLIT(lit_95);
DEFLIT(lit_230);
DEFLIT(lit_130);
DEFLIT(lit_47);
DEFLIT(lit_142);
DEFLIT(lit_8);
DEFLIT(lit_173);
DEFLIT(lit_6);
DEFLIT(lit_122);
DEFLIT(lit_49);
DEFLIT(lit_251);
DEFLIT(lit_226);
DEFLIT(lit_20);
DEFLIT(lit_126);
DEFLIT(lit_38);
DEFLIT(lit_160);
DEFLIT(lit_139);
DEFLIT(lit_23);
DEFLIT(lit_220);
DEFLIT(lit_67);
DEFLIT(lit_247);
DEFLIT(lit_195);
DEFLIT(lit_114);
DEFLIT(lit_17);
DEFLIT(lit_204);
DEFLIT(lit_215);
DEFLIT(lit_100);
DEFLIT(lit_78);
DEFLIT(lit_65);
DEFLIT(lit_185);
DEFLIT(lit_109);
DEFLIT(lit_190);
DEFLIT(lit_88);
DEFLIT(lit_250);
DEFLIT(lit_167);
DEFLIT(lit_143);
DEFLIT(lit_138);
DEFLIT(lit_159);
DEFLIT(lit_193);
DEFLIT(lit_240);
DEFLIT(lit_214);
DEFLIT(lit_148);
DEFLIT(lit_115);
DEFLIT(lit_22);
DEFLIT(lit_85);
DEFLIT(lit_56);
DEFLIT(lit_19);
DEFLIT(lit_168);
DEFLIT(lit_200);
DEFLIT(lit_243);
DEFLIT(lit_129);
DEFLIT(lit_64);
DEFLIT(lit_9);
DEFLIT(lit_203);
DEFLIT(lit_24);
DEFLIT(lit_69);
DEFLIT(lit_151);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_76);
DEFLIT(lit_36);
DEFLIT(lit_135);
DEFLIT(lit_158);
DEFLIT(lit_239);
DEFLIT(lit_197);
DEFLIT(lit_218);
DEFLIT(lit_201);
DEFLIT(lit_91);
DEFLIT(lit_217);
DEFLIT(lit_48);
DEFLIT(lit_208);
DEFLIT(lit_112);
DEFLIT(lit_255);
DEFLIT(lit_170);
DEFLIT(lit_161);
DEFLIT(lit_110);
DEFLIT(lit_16);
DEFLIT(lit_222);
DEFLIT(lit_123);
DEFLIT(lit_176);
DEFLIT(lit_136);
DEFLIT(lit_202);
DEFLIT(lit_145);
DEFLIT(lit_86);
DEFLIT(lit_189);
DEFLIT(lit_228);
DEFLIT(lit_10);
DEFLIT(lit_157);
DEFLIT(lit_41);
DEFLIT(lit_103);
DEFLIT(lit_74);
DEFLIT(lit_225);
DEFLIT(lit_117);
DEFLIT(lit_34);
DEFLIT(lit_246);
DEFLIT(lit_180);
DEFLIT(lit_43);
DEFLIT(lit_191);
DEFLIT(lit_171);
DEFLIT(lit_223);
DEFLIT(lit_207);
DEFLIT(lit_183);
DEFLIT(lit_196);
DEFLIT(lit_54);
DEFLIT(lit_46);
DEFLIT(lit_31);
DEFLIT(lit_83);
DEFLIT(lit_1);
DEFLIT(lit_96);
DEFLIT(lit_27);
DEFLIT(lit_3);
DEFLIT(lit_14);
DEFLIT(lit_127);
DEFLIT(lit_163);
DEFLIT(lit_125);
DEFLIT(lit_81);
DEFLIT(lit_232);
DEFLIT(lit_25);
DEFLIT(lit_156);
DEFLIT(lit_150);
DEFLIT(lit_229);
DEFLIT(lit_84);
DEFLIT(lit_93);
DEFLIT(lit_62);
DEFLIT(lit_224);
DEFLIT(lit_166);
DEFLIT(lit_154);
DEFLIT(lit_29);
DEFLIT(lit_172);
DEFLIT(lit_252);
DEFLIT(lit_235);
DEFLIT(lit_72);
DEFLIT(lit_236);
DEFLIT(lit_237);
DEFLIT(lit_32);
DEFLIT(lit_111);
DEFLIT(lit_238);
DEFLIT(lit_107);
DEFLIT(lit_79);
DEFLIT(lit_187);
DEFLIT(lit_227);
DEFLIT(lit_97);
DEFLIT(lit_186);
DEFLIT(lit_2);
DEFLIT(lit_61);
DEFLIT(lit_134);
DEFLIT(lit_132);
DEFLIT(lit_221);
DEFLIT(lit_141);
DEFLIT(lit_73);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_63);
DEFLIT(lit_248);
DEFLIT(lit_18);
DEFLIT(lit_39);
DEFLIT(lit_33);
DEFLIT(lit_131);
DEFLIT(lit_165);
DEFLIT(lit_249);
DEFLIT(lit_26);
DEFLIT(lit_44);
DEFLIT(lit_213);
DEFLIT(lit_155);
DEFLIT(lit_175);
DEFLIT(lit_35);
DEFLIT(lit_94);
DEFLIT(lit_140);
DEFLIT(lit_70);
DEFLIT(lit_146);
DEFLIT(lit_52);
DEFLIT(lit_71);
DEFLIT(lit_147);
DEFLIT(lit_82);
DEFLIT(lit_133);
DEFLIT(lit_205);
DEFLIT(lit_184);
DEFLIT(lit_124);
DEFLIT(lit_101);
DEFLIT(lit_113);
DEFLIT(lit_219);
DEFLIT(lit_28);
DEFLIT(lit_194);
DEFLIT(lit_30);
DEFLIT(lit_153);
DEFLIT(lit_15);
DEFLIT(lit_121);
DEFLIT(lit_206);
DEFLIT(lit_244);
DEFLIT(lit_59);

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
LOCFOR(fun_posQ_32);
LOCFOR(fun_zeroQ_33);
LOCFOR(fun_negQ_34);
LOCFOR(fun_neg_35);
LOCFOR(fun_abs_36);
LOCFOR(fun_to_str_37);
LOCFOR(fun_contagious_type_38);
LOCFOR(fun_contagious_type_39);
LOCFOR(fun_contagious_type_40);
LOCFOR(fun_contagious_type_41);
LOCFOR(fun_EE_42);
LOCFOR(fun_L_43);
LOCFOR(fun_A_44);
LOCFOR(fun___45);
LOCFOR(fun_T_46);
LOCFOR(fun_S_47);
LOCFOR(fun_floor_48);
LOCFOR(fun_ceil_49);
LOCFOR(fun_round_50);
LOCFOR(fun_trunc_51);
LOCFOR(fun_truncS_52);
LOCFOR(fun_mod_53);
LOCFOR(fun_pow_54);
LOCFOR(fun_K_55);
LOCFOR(fun_C_56);
LOCFOR(fun_B_57);
LOCFOR(fun_N_58);
LOCFOR(fun_bitQ_59);
LOCFOR(fun_evenQ_60);
LOCFOR(fun_oddQ_61);
LOCFOR(fun_GG_62);
LOCFOR(fun_GGG_63);
LOCFOR(fun_LL_64);
LOCFOR(fun_power_of_two_ceil_65);
FUNFOR(YgooSmathYflo_bits);
LOCFOR(fun_as_67);
LOCFOR(fun_EE_68);
LOCFOR(fun_L_69);
LOCFOR(fun_A_70);
LOCFOR(fun___71);
LOCFOR(fun_T_72);
LOCFOR(fun_S_73);
LOCFOR(fun_truncS_74);
LOCFOR(fun_pow_75);
LOCFOR(fun_isqrt_76);
LOCFOR(fun_x_1352_77);
LOCFOR(fun_78);
LOCFOR(fun_79);
LOCFOR(fun_sqrt_80);
LOCFOR(fun_sqrt_81);
LOCFOR(fun_log_82);
LOCFOR(fun_log_83);
LOCFOR(fun_sin_84);
LOCFOR(fun_sin_85);
LOCFOR(fun_cos_86);
LOCFOR(fun_cos_87);
LOCFOR(fun_tan_88);
LOCFOR(fun_tan_89);
LOCFOR(fun_sinh_90);
LOCFOR(fun_sinh_91);
LOCFOR(fun_cosh_92);
LOCFOR(fun_cosh_93);
LOCFOR(fun_tanh_94);
LOCFOR(fun_tanh_95);
LOCFOR(fun_asin_96);
LOCFOR(fun_asin_97);
LOCFOR(fun_acos_98);
LOCFOR(fun_acos_99);
LOCFOR(fun_atan_100);
LOCFOR(fun_atan_101);
LOCFOR(fun_atan2_102);
LOCFOR(fun_atan2_103);
LOCFOR(fun_logn_104);
extern P YgooSmathY___main_0___ ();
extern P YgooSmathY___main_1___ ();
extern P YgooSmathY___main_2___ ();
extern P YgooSmathY___main_3___ ();
extern P YgooSmathY___main_4___ ();
extern P YgooSmathY___main_5___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_contagious_call_0) {
  P f_,x_,y_;
  P typeF2831;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T3 = CALL2(1,VARREF(YgooSmathYcontagious_type),x_,y_);
  typeF2831 = T3;
  T1 = CALL2(1,VARREF(YgooStypesYas),typeF2831,x_);
  T2 = CALL2(1,VARREF(YgooStypesYas),typeF2831,y_);
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
  P fF2832;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSlogYE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmathYround),x_);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYpow),LITREF(lit_123),n_);
    fF2832 = T7;
    T6 = CALL2(1,VARREF(YgooSmathYT),x_,fF2832);
    T5 = CALL1(1,VARREF(YgooSmathYround),T6);
    T4 = CALL2(1,VARREF(YgooSmathYS),T5,fF2832);
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
  P remainderF2835;
  P integerF2834;
  P tup23F2833;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup23F2833 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2833,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2834 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup23F2833,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2835 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2835);
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
    T9 = CALL2(1,VARREF(YgooSmathY_),integerF2834,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2835,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2834,remainderF2835);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_ceilS_17) {
  P real_,divisor_;
  P remainderF2838;
  P integerF2837;
  P tup24F2836;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T14 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup24F2836 = T14;
  T13 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2836,YPint((P)0));
  check_type(T13,VARREF(YLintG));
  integerF2837 = T13;
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),tup24F2836,YPint((P)1));
  check_type(T12,VARREF(YLnumG));
  remainderF2838 = T12;
  T3 = CALL1(1,VARREF(YgooSmathYzeroQ),remainderF2838);
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
    T9 = CALL2(1,VARREF(YgooSmathYA),integerF2837,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSmathY_),remainderF2838,divisor_);
    T8 = CALL2(1,VARREF(Ytup),T9,T10);
    T0 = T8;
  } else {
    T11 = CALL2(1,VARREF(Ytup),integerF2837,remainderF2838);
    T0 = T11;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_roundS_18) {
  P real_,divisor_;
  P tmpF2845;
  P minus_thresholdF2844;
  P tmpF2843;
  P thresholdF2842;
  P remainderF2841;
  P integerF2840;
  P tup25F2839;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T34 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup25F2839 = T34;
  T33 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2839,YPint((P)0));
  check_type(T33,VARREF(YLintG));
  integerF2840 = T33;
  T32 = CALL2(1,VARREF(YgooSmacrosYelt),tup25F2839,YPint((P)1));
  check_type(T32,VARREF(YLnumG));
  remainderF2841 = T32;
  T31 = CALL1(1,VARREF(YgooSmathYabs),divisor_);
  T30 = CALL2(1,VARREF(YgooSmathYS),T31,LITREF(lit_128));
  check_type(T30,VARREF(YLnumG));
  thresholdF2842 = T30;
  T5 = CALL2(1,VARREF(YgooSmagYG),remainderF2841,thresholdF2842);
  tmpF2843 = T5;
  if (tmpF2843 != YPfalse) {
    T1 = tmpF2843;
  } else {
    T3 = CALL2(1,VARREF(YgooSlogYE),remainderF2841,thresholdF2842);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2840);
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
    if (T7 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSmathY_),integerF2840,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),remainderF2841,divisor_);
      T8 = CALL2(1,VARREF(Ytup),T9,T10);
      T6 = T8;
    } else {
      T12 = CALL2(1,VARREF(YgooSmathYA),integerF2840,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathY_),remainderF2841,divisor_);
      T11 = CALL2(1,VARREF(Ytup),T12,T13);
      T6 = T11;
    }
    T0 = T6;
  } else {
    T20 = CALL1(1,VARREF(YgooSmathYneg),thresholdF2842);
    minus_thresholdF2844 = T20;
    T19 = CALL2(1,VARREF(YgooSmagYL),remainderF2841,minus_thresholdF2844);
    tmpF2845 = T19;
    if (tmpF2845 != YPfalse) {
      T15 = tmpF2845;
    } else {
      T17 = CALL2(1,VARREF(YgooSlogYE),remainderF2841,minus_thresholdF2844);
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YgooSmathYoddQ),integerF2840);
        T16 = T18;
      } else {
        T16 = YPfalse;
      }
      T15 = T16;
    }
    if (T15 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooSmathYnegQ),divisor_);
      if (T22 != YPfalse) {
        T24 = CALL2(1,VARREF(YgooSmathYA),integerF2840,YPint((P)1));
        T25 = CALL2(1,VARREF(YgooSmathY_),remainderF2841,divisor_);
        T23 = CALL2(1,VARREF(Ytup),T24,T25);
        T21 = T23;
      } else {
        T27 = CALL2(1,VARREF(YgooSmathY_),integerF2840,YPint((P)1));
        T28 = CALL2(1,VARREF(YgooSmathYA),remainderF2841,divisor_);
        T26 = CALL2(1,VARREF(Ytup),T27,T28);
        T21 = T26;
      }
      T14 = T21;
    } else {
      T29 = CALL2(1,VARREF(Ytup),integerF2840,remainderF2841);
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
  P xF2847;
  P xF2846;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),x_,y_);
  xF2846 = YPint((P)0);
  xF2847 = xF2846;
  T2 = (P)YPiGG(xF2847,(P)2);
  T0 = (P)YPtelt(T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_21) {
  P real_,divisor_;
  P remainderF2850;
  P UF2849;
  P tup26F2848;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYfloorS),real_,divisor_);
  tup26F2848 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2848,YPint((P)0));
  UF2849 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup26F2848,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2850 = T0;
UNLINK_STACK();
  RET(remainderF2850);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_138),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P return_;
  P x_1343F2859;
  P x_1343F2858;
  P x_1343F2857;
  P x_1343F2856;
  P x_1343F2855;
  P maxF2854;
  P placeF2853;
  P x_1343F2852;
  P x_1344F2851;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1344_24,2);
  x_1344F2851 = T24;
  FUNINIT(x_1344F2851, 2,FREEREF(0),return_);
  x_1343F2852 = FREEREF(0);
  placeF2853 = YPfalse;
  maxF2854 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1343F2852,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1343F2852,LITREF(lit_138),x_1344F2851);
    x_1343F2855 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2855,x_1344F2851);
    placeF2853 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1343F2855);
    x_1343F2856 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1343F2856,x_1344F2851);
    maxF2854 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1343F2856);
    x_1343F2857 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1343F2857,x_1344F2851);
    x_1343F2858 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1343F2858,x_1344F2851);
    T6 = CALL1(1,VARREF(Ytail),x_1343F2857);
    x_1343F2859 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1343F2859,x_1344F2851);
  } else {
    T12 = CALL2(1,x_1344F2851,LITREF(lit_139),x_1343F2852);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_140));
  T16 = placeF2853;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF2854;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_142));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_142));
UNLINK_STACK();
  QRET(T13);
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
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_147),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_28) {
  P return_;
  P x_1347F2868;
  P x_1347F2867;
  P x_1347F2866;
  P x_1347F2865;
  P x_1347F2864;
  P maxF2863;
  P placeF2862;
  P x_1347F2861;
  P x_1348F2860;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_1348_27,2);
  x_1348F2860 = T24;
  FUNINIT(x_1348F2860, 2,FREEREF(0),return_);
  x_1347F2861 = FREEREF(0);
  placeF2862 = YPfalse;
  maxF2863 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1347F2861,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1347F2861,LITREF(lit_147),x_1348F2860);
    x_1347F2864 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2864,x_1348F2860);
    placeF2862 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1347F2864);
    x_1347F2865 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F2865,x_1348F2860);
    maxF2863 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1347F2865);
    x_1347F2866 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1347F2866,x_1348F2860);
    x_1347F2867 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1347F2867,x_1348F2860);
    T6 = CALL1(1,VARREF(Ytail),x_1347F2866);
    x_1347F2868 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1347F2868,x_1348F2860);
  } else {
    T12 = CALL2(1,x_1348F2860,LITREF(lit_139),x_1347F2861);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_140));
  T16 = placeF2862;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_141));
  T21 = CALL1(1,VARREF(Ylst),YPint((P)1));
  T23 = maxF2863;
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL5(1,VARREF(YgooSmacrosYcat),T19,T20,T21,T22,LITREF(lit_142));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_142));
UNLINK_STACK();
  QRET(T13);
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
  P remainderF2871;
  P UF2870;
  P tup27F2869;
  P T0,T1,T2;
LINK_STACK();
  ARG(real_, 0);
  ARG(divisor_, 1);
  T2 = CALL2(1,VARREF(YgooSmathYtruncS),real_,divisor_);
  tup27F2869 = T2;
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2869,YPint((P)0));
  UF2870 = T1;
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2869,YPint((P)1));
  check_type(T0,VARREF(YLnumG));
  remainderF2871 = T0;
UNLINK_STACK();
  RET(remainderF2871);
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

LOCCODEDEF(fun_posQ_32) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_zeroQ_33) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSlogYE),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_negQ_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmagYL),x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_neg_35) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathY_),YPint((P)0),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_abs_36) {
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

LOCCODEDEF(fun_to_str_37) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_contagious_type_38) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLintG));
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

LOCCODEDEF(fun_contagious_type_41) {
  P x_,y_;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
UNLINK_STACK();
  RET(VARREF(YLfloG));
}

LOCCODEDEF(fun_EE_42) {
  P x_,y_;
  P xF2875;
  P xF2874;
  P xF2873;
  P xF2872;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2872 = x_;
  xF2873 = xF2872;
  T2 = (P)YPiGG(xF2873,(P)2);
  xF2874 = y_;
  xF2875 = xF2874;
  T3 = (P)YPiGG(xF2875,(P)2);
  T1 = (P)YPiE(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_L_43) {
  P x_,y_;
  P xF2879;
  P xF2878;
  P xF2877;
  P xF2876;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2876 = x_;
  xF2877 = xF2876;
  T2 = (P)YPiGG(xF2877,(P)2);
  xF2878 = y_;
  xF2879 = xF2878;
  T3 = (P)YPiGG(xF2879,(P)2);
  T1 = (P)YPiL(T2,T3);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_A_44) {
  P x_,y_;
  P tF2886;
  P xF2885;
  P xF2884;
  P xF2883;
  P xF2882;
  P xF2881;
  P xF2880;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2880 = x_;
  xF2881 = xF2880;
  T3 = (P)YPiGG(xF2881,(P)2);
  xF2882 = y_;
  xF2883 = xF2882;
  T4 = (P)YPiGG(xF2883,(P)2);
  T2 = (P)YPiA(T3,T4);
  xF2884 = T2;
  xF2885 = xF2884;
  tF2886 = (P)1;
  T1 = (P)YPiLL(xF2885,(P)2);
  T0 = (P)YPiv(T1,tF2886);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun___45) {
  P x_,y_;
  P tF2893;
  P xF2892;
  P xF2891;
  P xF2890;
  P xF2889;
  P xF2888;
  P xF2887;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2887 = x_;
  xF2888 = xF2887;
  T3 = (P)YPiGG(xF2888,(P)2);
  xF2889 = y_;
  xF2890 = xF2889;
  T4 = (P)YPiGG(xF2890,(P)2);
  T2 = (P)YPi_(T3,T4);
  xF2891 = T2;
  xF2892 = xF2891;
  tF2893 = (P)1;
  T1 = (P)YPiLL(xF2892,(P)2);
  T0 = (P)YPiv(T1,tF2893);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_T_46) {
  P x_,y_;
  P tF2900;
  P xF2899;
  P xF2898;
  P xF2897;
  P xF2896;
  P xF2895;
  P xF2894;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2894 = x_;
  xF2895 = xF2894;
  T3 = (P)YPiGG(xF2895,(P)2);
  xF2896 = y_;
  xF2897 = xF2896;
  T4 = (P)YPiGG(xF2897,(P)2);
  T2 = (P)YPiT(T3,T4);
  xF2898 = T2;
  xF2899 = xF2898;
  tF2900 = (P)1;
  T1 = (P)YPiLL(xF2899,(P)2);
  T0 = (P)YPiv(T1,tF2900);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_S_47) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_168));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_floor_48) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_ceil_49) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_round_50) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_trunc_51) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_truncS_52) {
  P x_,y_;
  P resultF2908;
  P tF2907;
  P xF2906;
  P xF2905;
  P xF2904;
  P xF2903;
  P xF2902;
  P xF2901;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2901 = x_;
  xF2902 = xF2901;
  T6 = (P)YPiGG(xF2902,(P)2);
  xF2903 = y_;
  xF2904 = xF2903;
  T7 = (P)YPiGG(xF2904,(P)2);
  T5 = (P)YPitS(T6,T7);
  xF2905 = T5;
  xF2906 = xF2905;
  tF2907 = (P)1;
  T4 = (P)YPiLL(xF2906,(P)2);
  T3 = (P)YPiv(T4,tF2907);
  resultF2908 = T3;
  T2 = CALL2(1,VARREF(YgooSmathYT),resultF2908,y_);
  T1 = CALL2(1,VARREF(YgooSmathY_),x_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2908,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_mod_53) {
  P x_,y_;
  P resF2916;
  P tF2915;
  P xF2914;
  P xF2913;
  P xF2912;
  P xF2911;
  P xF2910;
  P xF2909;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2909 = x_;
  xF2910 = xF2909;
  T9 = (P)YPiGG(xF2910,(P)2);
  xF2911 = y_;
  xF2912 = xF2911;
  T10 = (P)YPiGG(xF2912,(P)2);
  T8 = (P)YPim(T9,T10);
  xF2913 = T8;
  xF2914 = xF2913;
  tF2915 = (P)1;
  T7 = (P)YPiLL(xF2914,(P)2);
  T6 = (P)YPiv(T7,tF2915);
  resF2916 = T6;
  T1 = CALL2(1,VARREF(YgooSmagYL),resF2916,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmagYG),y_,YPint((P)0));
    if (T3 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmathYA),resF2916,y_);
      T2 = T4;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathY_),resF2916,y_);
      T2 = T5;
    }
    T0 = T2;
  } else {
    T0 = resF2916;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_54) {
  P x_,n_;
  P yF2919;
  P pF2918;
  P xF2917;
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
          xF2917 = T28;
          T31 = CALL2(1,VARREF(YgooSmathYGG),n_,YPint((P)1));
          check_type(T31,VARREF(YLfixnumG));
          pF2918 = T31;
          T33 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
          if (T33 != YPfalse) {
            T32 = x_;
          } else {
            T32 = YPint((P)1);
          }
          check_type(T32,VARREF(YLfixnumG));
          yF2919 = T32;
          LOOP_51: {
            P a51_0,a51_1,a51_2;
            T19 = CALL1(1,VARREF(YgooSmathYzeroQ),pF2918);
            if (T19 != YPfalse) {
              T18 = yF2919;
            } else {
              T22 = CALL2(1,VARREF(YgooSmagYG),pF2918,YPint((P)1));
              if (T22 != YPfalse) {
                T23 = CALL2(1,VARREF(YgooSmathYT),xF2917,xF2917);
                T21 = T23;
              } else {
                T21 = xF2917;
              }
              T24 = CALL2(1,VARREF(YgooSmathYGG),pF2918,YPint((P)1));
              T26 = CALL1(1,VARREF(YgooSmathYoddQ),pF2918);
              if (T26 != YPfalse) {
                T27 = CALL2(1,VARREF(YgooSmathYT),xF2917,yF2919);
                T25 = T27;
              } else {
                T25 = yF2919;
              }
              a51_0 = T21;
              a51_1 = T24;
              a51_2 = T25;
              xF2917 = a51_0;
              pF2918 = a51_1;
              yF2919 = a51_2;
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

LOCCODEDEF(fun_K_55) {
  P x_,y_;
  P tF2926;
  P xF2925;
  P xF2924;
  P xF2923;
  P xF2922;
  P xF2921;
  P xF2920;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2920 = x_;
  xF2921 = xF2920;
  T3 = (P)YPiGG(xF2921,(P)2);
  xF2922 = y_;
  xF2923 = xF2922;
  T4 = (P)YPiGG(xF2923,(P)2);
  T2 = (P)YPiv(T3,T4);
  xF2924 = T2;
  xF2925 = xF2924;
  tF2926 = (P)1;
  T1 = (P)YPiLL(xF2925,(P)2);
  T0 = (P)YPiv(T1,tF2926);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_C_56) {
  P x_,y_;
  P tF2933;
  P xF2932;
  P xF2931;
  P xF2930;
  P xF2929;
  P xF2928;
  P xF2927;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2927 = x_;
  xF2928 = xF2927;
  T3 = (P)YPiGG(xF2928,(P)2);
  xF2929 = y_;
  xF2930 = xF2929;
  T4 = (P)YPiGG(xF2930,(P)2);
  T2 = (P)YPiC(T3,T4);
  xF2931 = T2;
  xF2932 = xF2931;
  tF2933 = (P)1;
  T1 = (P)YPiLL(xF2932,(P)2);
  T0 = (P)YPiv(T1,tF2933);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_B_57) {
  P x_,y_;
  P tF2940;
  P xF2939;
  P xF2938;
  P xF2937;
  P xF2936;
  P xF2935;
  P xF2934;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xF2934 = x_;
  xF2935 = xF2934;
  T3 = (P)YPiGG(xF2935,(P)2);
  xF2936 = y_;
  xF2937 = xF2936;
  T4 = (P)YPiGG(xF2937,(P)2);
  T2 = (P)YPiB(T3,T4);
  xF2938 = T2;
  xF2939 = xF2938;
  tF2940 = (P)1;
  T1 = (P)YPiLL(xF2939,(P)2);
  T0 = (P)YPiv(T1,tF2940);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_N_58) {
  P x_;
  P tF2945;
  P xF2944;
  P xF2943;
  P xF2942;
  P xF2941;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  xF2941 = x_;
  xF2942 = xF2941;
  T3 = (P)YPiGG(xF2942,(P)2);
  T2 = (P)YPiX(T3);
  xF2943 = T2;
  xF2944 = xF2943;
  tF2945 = (P)1;
  T1 = (P)YPiLL(xF2944,(P)2);
  T0 = (P)YPiv(T1,tF2945);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_bitQ_59) {
  P o_,x_;
  P tF2952;
  P xF2951;
  P xF2950;
  P xF2949;
  P xF2948;
  P xF2947;
  P xF2946;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(x_, 1);
  xF2946 = o_;
  xF2947 = xF2946;
  T3 = (P)YPiGG(xF2947,(P)2);
  xF2948 = x_;
  xF2949 = xF2948;
  T4 = (P)YPiGG(xF2949,(P)2);
  T2 = (P)YPiQ(T3,T4);
  xF2950 = T2;
  xF2951 = xF2950;
  tF2952 = (P)1;
  T1 = (P)YPiLL(xF2951,(P)2);
  T0 = (P)YPiv(T1,tF2952);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_evenQ_60) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooSmathYB),x_,YPint((P)1));
  T0 = CALL1(1,VARREF(YgooSmathYzeroQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_oddQ_61) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYevenQ),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GG_62) {
  P x_,a_;
  P tF2959;
  P xF2958;
  P xF2957;
  P xF2956;
  P xF2955;
  P xF2954;
  P xF2953;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2953 = x_;
  xF2954 = xF2953;
  T3 = (P)YPiGG(xF2954,(P)2);
  xF2955 = a_;
  xF2956 = xF2955;
  T4 = (P)YPiGG(xF2956,(P)2);
  T2 = (P)YPiGG(T3,T4);
  xF2957 = T2;
  xF2958 = xF2957;
  tF2959 = (P)1;
  T1 = (P)YPiLL(xF2958,(P)2);
  T0 = (P)YPiv(T1,tF2959);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_GGG_63) {
  P x_,a_;
  P tF2966;
  P xF2965;
  P xF2964;
  P xF2963;
  P xF2962;
  P xF2961;
  P xF2960;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2960 = x_;
  xF2961 = xF2960;
  T3 = (P)YPiGG(xF2961,(P)2);
  xF2962 = a_;
  xF2963 = xF2962;
  T4 = (P)YPiGG(xF2963,(P)2);
  T2 = (P)YPiGGG(T3,T4);
  xF2964 = T2;
  xF2965 = xF2964;
  tF2966 = (P)1;
  T1 = (P)YPiLL(xF2965,(P)2);
  T0 = (P)YPiv(T1,tF2966);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_LL_64) {
  P x_,a_;
  P tF2973;
  P xF2972;
  P xF2971;
  P xF2970;
  P xF2969;
  P xF2968;
  P xF2967;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(a_, 1);
  xF2967 = x_;
  xF2968 = xF2967;
  T3 = (P)YPiGG(xF2968,(P)2);
  xF2969 = a_;
  xF2970 = xF2969;
  T4 = (P)YPiGG(xF2970,(P)2);
  T2 = (P)YPiLL(T3,T4);
  xF2971 = T2;
  xF2972 = xF2971;
  tF2973 = (P)1;
  T1 = (P)YPiLL(xF2972,(P)2);
  T0 = (P)YPiv(T1,tF2973);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_power_of_two_ceil_65) {
  P x_;
  P po2F2974;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)1),VARREF(YLintG));
  po2F2974 = YPint((P)1);
  LOOP_52: {
    P a52_0;
    T1 = CALL2(1,VARREF(YgooSmagYG),po2F2974,x_);
    if (T1 != YPfalse) {
      T0 = po2F2974;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),po2F2974,po2F2974);
      a52_0 = T3;
      po2F2974 = a52_0;
      goto LOOP_52;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSmathYflo_bits) {
  P x_;
  P tF2977;
  P xF2976;
  P xF2975;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = (P)YPfu(x_);
  T2 = (P)YgooSmathYPflo_bits(T3);
  xF2975 = T2;
  xF2976 = xF2975;
  tF2977 = (P)1;
  T1 = (P)YPiLL(xF2976,(P)2);
  T0 = (P)YPiv(T1,tF2977);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_as_67) {
  P U_,x_;
  P xF2979;
  P xF2978;
  P T0,T1,T2;
LINK_STACK();
  ARG(U_, 0);
  ARG(x_, 1);
  xF2978 = x_;
  xF2979 = xF2978;
  T2 = (P)YPiGG(xF2979,(P)2);
  T1 = (P)YgooSmathYPfi2f(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_EE_68) {
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

LOCCODEDEF(fun_L_69) {
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

LOCCODEDEF(fun_A_70) {
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

LOCCODEDEF(fun___71) {
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

LOCCODEDEF(fun_T_72) {
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

LOCCODEDEF(fun_S_73) {
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

LOCCODEDEF(fun_truncS_74) {
  P x_,y_;
  P resultF2984;
  P tF2983;
  P xF2982;
  P xF2981;
  P dividedF2980;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T8 = CALL2(1,VARREF(YgooSmathYS),x_,y_);
  dividedF2980 = T8;
  T7 = (P)YPfu(dividedF2980);
  T6 = (P)YgooSmathYPft(T7);
  xF2981 = T6;
  xF2982 = xF2981;
  tF2983 = (P)1;
  T5 = (P)YPiLL(xF2982,(P)2);
  T4 = (P)YPiv(T5,tF2983);
  resultF2984 = T4;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),resultF2984);
  T2 = CALL2(1,VARREF(YgooSmathY_),dividedF2980,T3);
  T1 = CALL2(1,VARREF(YgooSmathYT),y_,T2);
  T0 = CALL2(1,VARREF(Ytup),resultF2984,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pow_75) {
  P x_,n_;
  P resF2985;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(n_, 1);
  T8 = CALL1(1,VARREF(YgooSmathYabs),x_);
  T7 = (P)YPfu(T8);
  T9 = (P)YPfu(n_);
  T6 = (P)YgooSmathYPfpow(T7,T9);
  T5 = (P)YPfb(T6);
  resF2985 = T5;
  T2 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T2 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmathYoddQ),n_);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmathYneg),resF2985);
    T0 = T4;
  } else {
    T0 = resF2985;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_isqrt_76) {
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

LOCCODEDEF(fun_x_1352_77) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_205),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_78) {
  P return_;
  P PfpF3001;
  P x_1351F3000;
  P x_1351F2999;
  P x_1351F2998;
  P x_1351F2997;
  P x_1351F2996;
  P x_1351F2995;
  P x_1351F2994;
  P x_1351F2993;
  P x_1351F2992;
  P x_1351F2991;
  P prefixF2990;
  P paramF2989;
  P nameF2988;
  P x_1351F2987;
  P x_1352F2986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
LINK_STACK();
  ARG(return_, 0);
  T89 = FUNSHELL(0,fun_x_1352_77,2);
  x_1352F2986 = T89;
  FUNINIT(x_1352F2986, 2,FREEREF(0),return_);
  x_1351F2987 = FREEREF(0);
  nameF2988 = YPfalse;
  paramF2989 = YPfalse;
  prefixF2990 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1351F2987,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1351F2987,LITREF(lit_205),x_1352F2986);
    x_1351F2991 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2991,x_1352F2986);
    nameF2988 = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1351F2991);
    x_1351F2992 = T17;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2992,x_1352F2986);
    x_1351F2993 = T14;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F2993,x_1352F2986);
    paramF2989 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1351F2993);
    x_1351F2994 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2994,x_1352F2986);
    x_1351F2995 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2995,x_1352F2986);
    T11 = CALL1(1,VARREF(Ytail),x_1351F2994);
    x_1351F2996 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2996,x_1352F2986);
    T15 = CALL1(1,VARREF(Ytail),x_1351F2992);
    x_1351F2997 = T15;
    prefixF2990 = x_1351F2997;
    x_1351F2998 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F2998,x_1352F2986);
    x_1351F2999 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F2999,x_1352F2986);
    T7 = CALL1(1,VARREF(Ytail),x_1351F2998);
    x_1351F3000 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1351F3000,x_1352F2986);
  } else {
    T19 = CALL2(1,x_1352F2986,LITREF(lit_139),x_1351F2987);
  }
  T88 = nameF2988;
  T87 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_206),T88);
  PfpF3001 = T87;
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_207));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_208));
  T26 = nameF2988;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = paramF2989;
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_209));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,LITREF(lit_142));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_209));
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T34,T35,LITREF(lit_142));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_142));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T40 = nameF2988;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T46 = paramF2989;
  T45 = CALL1(1,VARREF(Ylst),T46);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_212));
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T47,LITREF(lit_142));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T48,T49,LITREF(lit_142));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T50 = prefixF2990;
  T54 = nameF2988;
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_188));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T60 = paramF2989;
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_142));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T52 = CALL3(1,VARREF(YgooSmacrosYcat),T53,T55,LITREF(lit_142));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T37 = CALLN(1,VARREF(YgooSmacrosYcat),6,T38,T39,T41,T50,T51,LITREF(lit_142));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T63 = CALL1(1,VARREF(Ylst),LITREF(lit_211));
  T65 = nameF2988;
  T64 = CALL1(1,VARREF(Ylst),T65);
  T71 = paramF2989;
  T70 = CALL1(1,VARREF(Ylst),T71);
  T72 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T69 = CALL3(1,VARREF(YgooSmacrosYcat),T70,T72,LITREF(lit_142));
  T68 = CALL1(1,VARREF(Ylst),T69);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_213));
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T73,T74,LITREF(lit_142));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T75 = prefixF2990;
  T78 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T81 = CALL1(1,VARREF(Ylst),PfpF3001);
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_215));
  T86 = paramF2989;
  T85 = CALL1(1,VARREF(Ylst),T86);
  T83 = CALL3(1,VARREF(YgooSmacrosYcat),T84,T85,LITREF(lit_142));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T80 = CALL3(1,VARREF(YgooSmacrosYcat),T81,T82,LITREF(lit_142));
  T79 = CALL1(1,VARREF(Ylst),T80);
  T77 = CALL3(1,VARREF(YgooSmacrosYcat),T78,T79,LITREF(lit_142));
  T76 = CALL1(1,VARREF(Ylst),T77);
  T62 = CALLN(1,VARREF(YgooSmacrosYcat),6,T63,T64,T66,T75,T76,LITREF(lit_142));
  T61 = CALL1(1,VARREF(Ylst),T62);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T36,T61,LITREF(lit_142));
UNLINK_STACK();
  QRET(T20);
}

LOCCODEDEF(fun_79) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_78,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_sqrt_80) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_218));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYsqrt),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_sqrt_81) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_218));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfsqrt(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_log_82) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYlog),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_log_83) {
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

LOCCODEDEF(fun_sin_84) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsin),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sin_85) {
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

LOCCODEDEF(fun_cos_86) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcos),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cos_87) {
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

LOCCODEDEF(fun_tan_88) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tan_89) {
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

LOCCODEDEF(fun_sinh_90) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYsinh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sinh_91) {
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

LOCCODEDEF(fun_cosh_92) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYcosh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_cosh_93) {
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

LOCCODEDEF(fun_tanh_94) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYtanh),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_tanh_95) {
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

LOCCODEDEF(fun_asin_96) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_243));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYasin),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_asin_97) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_243));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfasin(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_98) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_247));
  } else {
  }
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYacos),T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_acos_99) {
  P x_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSmathYnegQ),x_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yarithmetic_error),LITREF(lit_247));
  } else {
  }
  T4 = (P)YPfu(x_);
  T3 = (P)YgooSmathYPfacos(T4);
  T2 = (P)YPfb(T3);
UNLINK_STACK();
  RET(T2);
}

LOCCODEDEF(fun_atan_100) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),x_);
  T0 = CALL1(1,VARREF(YgooSmathYatan),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_atan_101) {
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

LOCCODEDEF(fun_logn_104) {
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
  fun_contagious_call_0 = YPfab_met(FUNCODEREF(fun_contagious_call_0),T20,LITREF(lit_2),LITREF(lit_104),sloc(74),YPfalse);
  T22 = VARREF_OR(YgooSmathYcontagious_call,YPfalse);
  T23 = fun_contagious_call_0;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYcontagious_call,T21);
  lit_105 = YPPsym((P)"=");
  lit_106 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T24 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_1 = YPfab_met(FUNCODEREF(fun_E_1),T24,LITREF(lit_105),LITREF(lit_106),sloc(78),YPfalse);
  T26 = VARREF_OR(YgooSlogYE,YPfalse);
  T27 = fun_E_1;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSlogYE,T25);
  lit_107 = YPPsym((P)"<");
  lit_108 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T28 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_2 = YPfab_met(FUNCODEREF(fun_L_2),T28,LITREF(lit_107),LITREF(lit_108),sloc(81),YPfalse);
  T30 = VARREF_OR(YgooSmagYL,YPfalse);
  T31 = fun_L_2;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmagYL,T29);
  lit_109 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_A_3 = YPfab_met(FUNCODEREF(fun_A_3),T32,LITREF(lit_4),LITREF(lit_109),sloc(84),YPfalse);
  T34 = VARREF_OR(YgooSmathYA,YPfalse);
  T35 = fun_A_3;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYA,T33);
  lit_110 = YPPsym((P)"1+");
  lit_111 = YPPlist(1,YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1A = YPfab_met_inlineable(FUNCODEREF(YgooSmathY1A),T36,LITREF(lit_110),LITREF(lit_111),sloc(87),YPfalse);
  T37 = YgooSmathY1A;
  VARSET(YgooSmathY1A,T37);
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T38 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun___5 = YPfab_met(FUNCODEREF(fun___5),T38,LITREF(lit_6),LITREF(lit_112),sloc(89),YPfalse);
  T40 = VARREF_OR(YgooSmathY_,YPfalse);
  T41 = fun___5;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathY_,T39);
  lit_113 = YPPsym((P)"1-");
  lit_114 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  YgooSmathY1_ = YPfab_met_inlineable(FUNCODEREF(YgooSmathY1_),T42,LITREF(lit_113),LITREF(lit_114),sloc(92),YPfalse);
  T43 = YgooSmathY1_;
  VARSET(YgooSmathY1_,T43);
  lit_115 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_T_7 = YPfab_met(FUNCODEREF(fun_T_7),T44,LITREF(lit_8),LITREF(lit_115),sloc(94),YPfalse);
  T46 = VARREF_OR(YgooSmathYT,YPfalse);
  T47 = fun_T_7;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSmathYT,T45);
  lit_116 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T48 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_S_8 = YPfab_met(FUNCODEREF(fun_S_8),T48,LITREF(lit_10),LITREF(lit_116),sloc(97),YPfalse);
  T50 = VARREF_OR(YgooSmathYS,YPfalse);
  T51 = fun_S_8;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmathYS,T49);
  lit_117 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T52 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_atan2_9 = YPfab_met(FUNCODEREF(fun_atan2_9),T52,LITREF(lit_30),LITREF(lit_117),sloc(100),YPfalse);
  T54 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T55 = fun_atan2_9;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmathYatan2,T53);
  lit_118 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_10 = YPfab_met(FUNCODEREF(fun_logn_10),T56,LITREF(lit_36),LITREF(lit_118),sloc(103),YPfalse);
  T58 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T59 = fun_logn_10;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmathYlogn,T57);
  lit_119 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_11 = YPfab_met(FUNCODEREF(fun_floor_11),T60,LITREF(lit_38),LITREF(lit_119),sloc(106),YPfalse);
  T62 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T63 = fun_floor_11;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYfloor,T61);
  lit_120 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_12 = YPfab_met(FUNCODEREF(fun_ceil_12),T64,LITREF(lit_40),LITREF(lit_120),sloc(109),YPfalse);
  T66 = VARREF_OR(YgooSmathYceil,YPfalse);
  T67 = fun_ceil_12;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYceil,T65);
  lit_121 = YPPlist(1,YPPsym((P)"x"));
  T68 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_13 = YPfab_met(FUNCODEREF(fun_round_13),T68,LITREF(lit_42),LITREF(lit_121),sloc(112),YPfalse);
  T70 = VARREF_OR(YgooSmathYround,YPfalse);
  T71 = fun_round_13;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathYround,T69);
  lit_122 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  lit_123 = YPflo(FLOINT(10.0));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_round_to_14 = YPfab_met(FUNCODEREF(fun_round_to_14),T72,LITREF(lit_44),LITREF(lit_122),sloc(115),YPfalse);
  T74 = VARREF_OR(YgooSmathYround_to,YPfalse);
  T75 = fun_round_to_14;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYround_to,T73);
  lit_124 = YPPlist(1,YPPsym((P)"x"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_15 = YPfab_met(FUNCODEREF(fun_trunc_15),T76,LITREF(lit_46),LITREF(lit_124),sloc(121),YPfalse);
  T78 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T79 = fun_trunc_15;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYtrunc,T77);
  lit_125 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T81 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T81,Ynil);
  fun_floorS_16 = YPfab_met(FUNCODEREF(fun_floorS_16),T80,LITREF(lit_48),LITREF(lit_125),sloc(124),YPfalse);
  T83 = VARREF_OR(YgooSmathYfloorS,YPfalse);
  T84 = fun_floorS_16;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSmathYfloorS,T82);
  lit_126 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T86 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T85 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T86,Ynil);
  fun_ceilS_17 = YPfab_met(FUNCODEREF(fun_ceilS_17),T85,LITREF(lit_50),LITREF(lit_126),sloc(133),YPfalse);
  T88 = VARREF_OR(YgooSmathYceilS,YPfalse);
  T89 = fun_ceilS_17;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooSmathYceilS,T87);
  lit_127 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  lit_128 = YPflo(FLOINT(2.0));
  T91 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T90 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T91,Ynil);
  fun_roundS_18 = YPfab_met(FUNCODEREF(fun_roundS_18),T90,LITREF(lit_52),LITREF(lit_127),sloc(142),YPfalse);
  T93 = VARREF_OR(YgooSmathYroundS,YPfalse);
  T94 = fun_roundS_18;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooSmathYroundS,T92);
  lit_129 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T96 = XCALL2(1,VARREF(YtT),VARREF(YLintG),VARREF(YLnumG));
  T95 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),T96,Ynil);
  fun_truncS_19 = YPfab_met(FUNCODEREF(fun_truncS_19),T95,LITREF(lit_54),LITREF(lit_129),sloc(158),YPfalse);
  T98 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T99 = fun_truncS_19;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSmathYtruncS,T97);
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T100 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_div_20 = YPfab_met(FUNCODEREF(fun_div_20),T100,LITREF(lit_56),LITREF(lit_130),sloc(161),YPfalse);
  T102 = VARREF_OR(YgooSmathYdiv,YPfalse);
  T103 = fun_div_20;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYdiv,T101);
  lit_131 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T104 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_mod_21 = YPfab_met(FUNCODEREF(fun_mod_21),T104,LITREF(lit_58),LITREF(lit_131),sloc(164),YPfalse);
  T106 = VARREF_OR(YgooSmathYmod,YPfalse);
  T107 = fun_mod_21;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYmod,T105);
  lit_132 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T108 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  fun_modA_22 = YPfab_met_inlineable(FUNCODEREF(fun_modA_22),T108,LITREF(lit_60),LITREF(lit_132),sloc(168),YPfalse);
  T110 = VARREF_OR(YgooSmathYmodA,YPfalse);
  T111 = fun_modA_22;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSmathYmodA,T109);
  lit_133 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"j"),YPPsym((P)"n"));
  T112 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YLnumG),Ynil);
  fun_mod__23 = YPfab_met_inlineable(FUNCODEREF(fun_mod__23),T112,LITREF(lit_62),LITREF(lit_133),sloc(171),YPfalse);
  T114 = VARREF_OR(YgooSmathYmod_,YPfalse);
  T115 = fun_mod__23;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YgooSmathYmod_,T113);
  lit_134 = YPPlist(1,YPPsym((P)"exp"));
  lit_135 = YPPlist(1,YPPsym((P)"return"));
  lit_136 = YPPsym((P)"x-1344");
  lit_137 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_138 = YPPsym((P)"modincf");
  lit_139 = YPsb((P)"Match Pattern Failure");
  lit_140 = YPPsym((P)"opf");
  lit_141 = YPPsym((P)"_");
  lit_142 = Ynil;
  T122 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T121 = fun_x_1344_24 = YPfab_met(FUNCODEREF(fun_x_1344_24),T122,LITREF(lit_136),LITREF(lit_137),YPfalse,YPfalse);
  T120 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T119 = fun_25 = YPfab_met(FUNCODEREF(fun_25),T120,YPfalse,LITREF(lit_135),YPfalse,YPfalse);
  T118 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T117 = fun_26 = YPfab_met(FUNCODEREF(fun_26),T118,YPfalse,LITREF(lit_134),YPfalse,YPfalse);
  T124 = fun_26;
  T123 = YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"modincf"),T124);
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
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153;
DEFCREGS();
  lit_143 = YPPlist(1,YPPsym((P)"exp"));
  lit_144 = YPPlist(1,YPPsym((P)"return"));
  lit_145 = YPPsym((P)"x-1348");
  lit_146 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_147 = YPPsym((P)"moddecf");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1348_27 = YPfab_met(FUNCODEREF(fun_x_1348_27),T2,LITREF(lit_145),LITREF(lit_146),YPfalse,YPfalse);
  T1 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPfab_met(FUNCODEREF(fun_28),T1,YPfalse,LITREF(lit_144),YPfalse,YPfalse);
  T0 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPfab_met(FUNCODEREF(fun_29),T0,YPfalse,LITREF(lit_143),YPfalse,YPfalse);
  T3 = fun_29;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"moddecf"),T3);
  lit_148 = YPPlist(2,YPPsym((P)"real"),YPPsym((P)"divisor"));
  T4 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_rem_30 = YPfab_met(FUNCODEREF(fun_rem_30),T4,LITREF(lit_64),LITREF(lit_148),sloc(180),YPfalse);
  T6 = VARREF_OR(YgooSmathYrem,YPfalse);
  T7 = fun_rem_30;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSmathYrem,T5);
  lit_149 = YPPlist(2,YPPsym((P)"base"),YPPsym((P)"n"));
  T8 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_31 = YPfab_met(FUNCODEREF(fun_pow_31),T8,LITREF(lit_66),LITREF(lit_149),sloc(184),YPfalse);
  T10 = VARREF_OR(YgooSmathYpow,YPfalse);
  T11 = fun_pow_31;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSmathYpow,T9);
  lit_150 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_posQ_32 = YPfab_met_inlineable(FUNCODEREF(fun_posQ_32),T12,LITREF(lit_68),LITREF(lit_150),sloc(187),YPfalse);
  T14 = VARREF_OR(YgooSmathYposQ,YPfalse);
  T15 = fun_posQ_32;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYposQ,T13);
  lit_151 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_zeroQ_33 = YPfab_met_inlineable(FUNCODEREF(fun_zeroQ_33),T16,LITREF(lit_70),LITREF(lit_151),sloc(190),YPfalse);
  T18 = VARREF_OR(YgooSmathYzeroQ,YPfalse);
  T19 = fun_zeroQ_33;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYzeroQ,T17);
  lit_152 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_negQ_34 = YPfab_met_inlineable(FUNCODEREF(fun_negQ_34),T20,LITREF(lit_72),LITREF(lit_152),sloc(193),YPfalse);
  T22 = VARREF_OR(YgooSmathYnegQ,YPfalse);
  T23 = fun_negQ_34;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmathYnegQ,T21);
  lit_153 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_neg_35 = YPfab_met_inlineable(FUNCODEREF(fun_neg_35),T24,LITREF(lit_74),LITREF(lit_153),sloc(196),YPfalse);
  T26 = VARREF_OR(YgooSmathYneg,YPfalse);
  T27 = fun_neg_35;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSmathYneg,T25);
  lit_154 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_abs_36 = YPfab_met_inlineable(FUNCODEREF(fun_abs_36),T28,LITREF(lit_76),LITREF(lit_154),sloc(199),YPfalse);
  T30 = VARREF_OR(YgooSmathYabs,YPfalse);
  T31 = fun_abs_36;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSmathYabs,T29);
  lit_155 = YPPsym((P)"to-str");
  lit_156 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_37 = YPfab_met(FUNCODEREF(fun_to_str_37),T32,LITREF(lit_155),LITREF(lit_156),sloc(202),YPfalse);
  T34 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T35 = fun_to_str_37;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSanyYto_str,T33);
  lit_157 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T37 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),T37,Ynil);
  fun_contagious_type_38 = YPfab_met(FUNCODEREF(fun_contagious_type_38),T36,LITREF(lit_0),LITREF(lit_157),sloc(207),YPfalse);
  T39 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T40 = fun_contagious_type_38;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSmathYcontagious_type,T38);
  lit_158 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T42,Ynil);
  fun_contagious_type_39 = YPfab_met(FUNCODEREF(fun_contagious_type_39),T41,LITREF(lit_0),LITREF(lit_158),sloc(210),YPfalse);
  T44 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T45 = fun_contagious_type_39;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSmathYcontagious_type,T43);
  lit_159 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T47 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLfloG)),YPfalse,YPint((P)2),T47,Ynil);
  fun_contagious_type_40 = YPfab_met(FUNCODEREF(fun_contagious_type_40),T46,LITREF(lit_0),LITREF(lit_159),sloc(213),YPfalse);
  T49 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T50 = fun_contagious_type_40;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSmathYcontagious_type,T48);
  lit_160 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T52 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),T52,Ynil);
  fun_contagious_type_41 = YPfab_met(FUNCODEREF(fun_contagious_type_41),T51,LITREF(lit_0),LITREF(lit_160),sloc(216),YPfalse);
  T54 = VARREF_OR(YgooSmathYcontagious_type,YPfalse);
  T55 = fun_contagious_type_41;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmathYcontagious_type,T53);
  lit_161 = YPPsym((P)"==");
  lit_162 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T56 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_42 = YPfab_met_inlineable(FUNCODEREF(fun_EE_42),T56,LITREF(lit_161),LITREF(lit_162),sloc(219),YPfalse);
  T58 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T59 = fun_EE_42;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSmacrosYEE,T57);
  lit_163 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T60 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_43 = YPfab_met_inlineable(FUNCODEREF(fun_L_43),T60,LITREF(lit_107),LITREF(lit_163),sloc(222),YPfalse);
  T62 = VARREF_OR(YgooSmagYL,YPfalse);
  T63 = fun_L_43;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmagYL,T61);
  lit_164 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T64 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_A_44 = YPfab_met_inlineable(FUNCODEREF(fun_A_44),T64,LITREF(lit_4),LITREF(lit_164),sloc(225),YPfalse);
  T66 = VARREF_OR(YgooSmathYA,YPfalse);
  T67 = fun_A_44;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYA,T65);
  lit_165 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T68 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun___45 = YPfab_met_inlineable(FUNCODEREF(fun___45),T68,LITREF(lit_6),LITREF(lit_165),sloc(228),YPfalse);
  T70 = VARREF_OR(YgooSmathY_,YPfalse);
  T71 = fun___45;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSmathY_,T69);
  lit_166 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T72 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_T_46 = YPfab_met_inlineable(FUNCODEREF(fun_T_46),T72,LITREF(lit_8),LITREF(lit_166),sloc(231),YPfalse);
  T74 = VARREF_OR(YgooSmathYT,YPfalse);
  T75 = fun_T_46;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSmathYT,T73);
  lit_167 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_168 = YPsb((P)"No int divide, consider trunc/");
  T76 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_S_47 = YPfab_met_inlineable(FUNCODEREF(fun_S_47),T76,LITREF(lit_10),LITREF(lit_167),sloc(234),YPfalse);
  T78 = VARREF_OR(YgooSmathYS,YPfalse);
  T79 = fun_S_47;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSmathYS,T77);
  lit_169 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_floor_48 = YPfab_met_inlineable(FUNCODEREF(fun_floor_48),T80,LITREF(lit_38),LITREF(lit_169),sloc(237),YPfalse);
  T82 = VARREF_OR(YgooSmathYfloor,YPfalse);
  T83 = fun_floor_48;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYfloor,T81);
  lit_170 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_ceil_49 = YPfab_met_inlineable(FUNCODEREF(fun_ceil_49),T84,LITREF(lit_40),LITREF(lit_170),sloc(239),YPfalse);
  T86 = VARREF_OR(YgooSmathYceil,YPfalse);
  T87 = fun_ceil_49;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYceil,T85);
  lit_171 = YPPlist(1,YPPsym((P)"x"));
  T88 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_round_50 = YPfab_met_inlineable(FUNCODEREF(fun_round_50),T88,LITREF(lit_42),LITREF(lit_171),sloc(241),YPfalse);
  T90 = VARREF_OR(YgooSmathYround,YPfalse);
  T91 = fun_round_50;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSmathYround,T89);
  lit_172 = YPPlist(1,YPPsym((P)"x"));
  T92 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_trunc_51 = YPfab_met_inlineable(FUNCODEREF(fun_trunc_51),T92,LITREF(lit_46),LITREF(lit_172),sloc(243),YPfalse);
  T94 = VARREF_OR(YgooSmathYtrunc,YPfalse);
  T95 = fun_trunc_51;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSmathYtrunc,T93);
  lit_173 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T97 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfixnumG));
  T96 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),T97,Ynil);
  fun_truncS_52 = YPfab_met(FUNCODEREF(fun_truncS_52),T96,LITREF(lit_54),LITREF(lit_173),sloc(245),YPfalse);
  T99 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T100 = fun_truncS_52;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YgooSmathYtruncS,T98);
  lit_174 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T101 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_mod_53 = YPfab_met(FUNCODEREF(fun_mod_53),T101,LITREF(lit_58),LITREF(lit_174),sloc(249),YPfalse);
  T103 = VARREF_OR(YgooSmathYmod,YPfalse);
  T104 = fun_mod_53;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YgooSmathYmod,T102);
  lit_175 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T105 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_pow_54 = YPfab_met(FUNCODEREF(fun_pow_54),T105,LITREF(lit_66),LITREF(lit_175),sloc(257),YPfalse);
  T107 = VARREF_OR(YgooSmathYpow,YPfalse);
  T108 = fun_pow_54;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YgooSmathYpow,T106);
  lit_176 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T109 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_K_55 = YPfab_met_inlineable(FUNCODEREF(fun_K_55),T109,LITREF(lit_78),LITREF(lit_176),sloc(272),YPfalse);
  T111 = VARREF_OR(YgooSmathYK,YPfalse);
  T112 = fun_K_55;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YgooSmathYK,T110);
  lit_177 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T113 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_C_56 = YPfab_met_inlineable(FUNCODEREF(fun_C_56),T113,LITREF(lit_80),LITREF(lit_177),sloc(275),YPfalse);
  T115 = VARREF_OR(YgooSmathYC,YPfalse);
  T116 = fun_C_56;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSmathYC,T114);
  lit_178 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T117 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_B_57 = YPfab_met_inlineable(FUNCODEREF(fun_B_57),T117,LITREF(lit_82),LITREF(lit_178),sloc(278),YPfalse);
  T119 = VARREF_OR(YgooSmathYB,YPfalse);
  T120 = fun_B_57;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSmathYB,T118);
  lit_179 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_N_58 = YPfab_met_inlineable(FUNCODEREF(fun_N_58),T121,LITREF(lit_84),LITREF(lit_179),sloc(281),YPfalse);
  T123 = VARREF_OR(YgooSmathYN,YPfalse);
  T124 = fun_N_58;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSmathYN,T122);
  lit_180 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"x"));
  T125 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_bitQ_59 = YPfab_met_inlineable(FUNCODEREF(fun_bitQ_59),T125,LITREF(lit_86),LITREF(lit_180),sloc(284),YPfalse);
  T127 = VARREF_OR(YgooSmathYbitQ,YPfalse);
  T128 = fun_bitQ_59;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooSmathYbitQ,T126);
  lit_181 = YPPlist(1,YPPsym((P)"x"));
  T129 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_evenQ_60 = YPfab_met_inlineable(FUNCODEREF(fun_evenQ_60),T129,LITREF(lit_90),LITREF(lit_181),sloc(287),YPfalse);
  T131 = VARREF_OR(YgooSmathYevenQ,YPfalse);
  T132 = fun_evenQ_60;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YgooSmathYevenQ,T130);
  lit_182 = YPPlist(1,YPPsym((P)"x"));
  T133 = YPfab_sig(YPPlist(1,VARREF(YLfixnumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_oddQ_61 = YPfab_met_inlineable(FUNCODEREF(fun_oddQ_61),T133,LITREF(lit_92),LITREF(lit_182),sloc(290),YPfalse);
  T135 = VARREF_OR(YgooSmathYoddQ,YPfalse);
  T136 = fun_oddQ_61;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YgooSmathYoddQ,T134);
  lit_183 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T137 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GG_62 = YPfab_met_inlineable(FUNCODEREF(fun_GG_62),T137,LITREF(lit_88),LITREF(lit_183),sloc(293),YPfalse);
  T139 = VARREF_OR(YgooSmathYGG,YPfalse);
  T140 = fun_GG_62;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YgooSmathYGG,T138);
  lit_184 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T141 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_GGG_63 = YPfab_met_inlineable(FUNCODEREF(fun_GGG_63),T141,LITREF(lit_94),LITREF(lit_184),sloc(296),YPfalse);
  T143 = VARREF_OR(YgooSmathYGGG,YPfalse);
  T144 = fun_GGG_63;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YgooSmathYGGG,T142);
  lit_185 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"a"));
  T145 = YPfab_sig(YPPlist(2,VARREF(YLfixnumG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfixnumG),Ynil);
  fun_LL_64 = YPfab_met_inlineable(FUNCODEREF(fun_LL_64),T145,LITREF(lit_96),LITREF(lit_185),sloc(299),YPfalse);
  T147 = VARREF_OR(YgooSmathYLL,YPfalse);
  T148 = fun_LL_64;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YgooSmathYLL,T146);
  lit_186 = YPPlist(1,YPPsym((P)"x"));
  T149 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_power_of_two_ceil_65 = YPfab_met(FUNCODEREF(fun_power_of_two_ceil_65),T149,LITREF(lit_100),LITREF(lit_186),sloc(302),YPfalse);
  T151 = VARREF_OR(YgooSmathYpower_of_two_ceil,YPfalse);
  T152 = fun_power_of_two_ceil_65;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YgooSmathYpower_of_two_ceil,T150);
  T153 = YPfalse;
  return T153;
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
  P T128,T129,T130;
DEFCREGS();
  lit_187 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSmathYflo_bits = YPfab_met(FUNCODEREF(YgooSmathYflo_bits),T0,LITREF(lit_102),LITREF(lit_187),sloc(336),YPfalse);
  T1 = YgooSmathYflo_bits;
  VARSET(YgooSmathYflo_bits,T1);
  lit_188 = YPPsym((P)"as");
  lit_189 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"x"));
  T3 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLfloG));
  T2 = YPfab_sig(YPPlist(2,T3,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_as_67 = YPfab_met(FUNCODEREF(fun_as_67),T2,LITREF(lit_188),LITREF(lit_189),sloc(339),YPfalse);
  T5 = VARREF_OR(YgooStypesYas,YPfalse);
  T6 = fun_as_67;
  T4 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T5,T6);
  VARSET(YgooStypesYas,T4);
  lit_190 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T7 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_EE_68 = YPfab_met_inlineable(FUNCODEREF(fun_EE_68),T7,LITREF(lit_161),LITREF(lit_190),sloc(342),YPfalse);
  T9 = VARREF_OR(YgooSmacrosYEE,YPfalse);
  T10 = fun_EE_68;
  T8 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T9,T10);
  VARSET(YgooSmacrosYEE,T8);
  lit_191 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_69 = YPfab_met_inlineable(FUNCODEREF(fun_L_69),T11,LITREF(lit_107),LITREF(lit_191),sloc(345),YPfalse);
  T13 = VARREF_OR(YgooSmagYL,YPfalse);
  T14 = fun_L_69;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSmagYL,T12);
  lit_192 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_A_70 = YPfab_met_inlineable(FUNCODEREF(fun_A_70),T15,LITREF(lit_4),LITREF(lit_192),sloc(348),YPfalse);
  T17 = VARREF_OR(YgooSmathYA,YPfalse);
  T18 = fun_A_70;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSmathYA,T16);
  lit_193 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T19 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun___71 = YPfab_met_inlineable(FUNCODEREF(fun___71),T19,LITREF(lit_6),LITREF(lit_193),sloc(351),YPfalse);
  T21 = VARREF_OR(YgooSmathY_,YPfalse);
  T22 = fun___71;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSmathY_,T20);
  lit_194 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_T_72 = YPfab_met_inlineable(FUNCODEREF(fun_T_72),T23,LITREF(lit_8),LITREF(lit_194),sloc(354),YPfalse);
  T25 = VARREF_OR(YgooSmathYT,YPfalse);
  T26 = fun_T_72;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSmathYT,T24);
  lit_195 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T27 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_S_73 = YPfab_met_inlineable(FUNCODEREF(fun_S_73),T27,LITREF(lit_10),LITREF(lit_195),sloc(357),YPfalse);
  T29 = VARREF_OR(YgooSmathYS,YPfalse);
  T30 = fun_S_73;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSmathYS,T28);
  lit_196 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T32 = XCALL2(1,VARREF(YtT),VARREF(YLfixnumG),VARREF(YLfloG));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),T32,Ynil);
  fun_truncS_74 = YPfab_met(FUNCODEREF(fun_truncS_74),T31,LITREF(lit_54),LITREF(lit_196),sloc(360),YPfalse);
  T34 = VARREF_OR(YgooSmathYtruncS,YPfalse);
  T35 = fun_truncS_74;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYtruncS,T33);
  lit_197 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"n"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_pow_75 = YPfab_met(FUNCODEREF(fun_pow_75),T36,LITREF(lit_66),LITREF(lit_197),sloc(365),YPfalse);
  T38 = VARREF_OR(YgooSmathYpow,YPfalse);
  T39 = fun_pow_75;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYpow,T37);
  lit_198 = YPflo(FLOINT(3.1415928));
  VARSET(YgooSmathYDpi,LITREF(lit_198));
  lit_199 = YPflo(FLOINT(2.7182816));
  VARSET(YgooSmathYDe,LITREF(lit_199));
  lit_200 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_isqrt_76 = YPfab_met(FUNCODEREF(fun_isqrt_76),T40,LITREF(lit_98),LITREF(lit_200),sloc(372),YPfalse);
  T42 = VARREF_OR(YgooSmathYisqrt,YPfalse);
  T43 = fun_isqrt_76;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYisqrt,T41);
  lit_201 = YPPlist(1,YPPsym((P)"exp"));
  lit_202 = YPPlist(1,YPPsym((P)"return"));
  lit_203 = YPPsym((P)"x-1352");
  lit_204 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_205 = YPPsym((P)"def-unary-trans");
  lit_206 = YPsb((P)"%f");
  lit_207 = YPPsym((P)"seq");
  lit_208 = YPPsym((P)"dg");
  lit_209 = YPPsym((P)"<num>");
  lit_210 = YPPsym((P)"=>");
  lit_211 = YPPsym((P)"dm");
  lit_212 = YPPsym((P)"<int>");
  lit_213 = YPPsym((P)"<flo>");
  lit_214 = YPPsym((P)"%fb");
  lit_215 = YPPsym((P)"%fu");
  T46 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1352_77 = YPfab_met(FUNCODEREF(fun_x_1352_77),T46,LITREF(lit_203),LITREF(lit_204),YPfalse,YPfalse);
  T45 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPfab_met(FUNCODEREF(fun_78),T45,YPfalse,LITREF(lit_202),YPfalse,YPfalse);
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPfab_met(FUNCODEREF(fun_79),T44,YPfalse,LITREF(lit_201),YPfalse,YPfalse);
  T47 = fun_79;
  YPmacro(YPPsym((P)"goo/math"),YPPsym((P)"def-unary-trans"),T47);
  lit_216 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T48 = YPfab_gen(T49,LITREF(lit_32),LITREF(lit_216),YPfalse);
  VARSET(YgooSmathYsqrt,T48);
  lit_217 = YPPlist(1,YPPsym((P)"x"));
  lit_218 = YPsb((P)"SQRT would produce complex number");
  T50 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_80 = YPfab_met(FUNCODEREF(fun_sqrt_80),T50,LITREF(lit_32),LITREF(lit_217),sloc(385),YPfalse);
  T52 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T53 = fun_sqrt_80;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSmathYsqrt,T51);
  lit_219 = YPPlist(1,YPPsym((P)"x"));
  T54 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sqrt_81 = YPfab_met(FUNCODEREF(fun_sqrt_81),T54,LITREF(lit_32),LITREF(lit_219),sloc(385),YPfalse);
  T56 = VARREF_OR(YgooSmathYsqrt,YPfalse);
  T57 = fun_sqrt_81;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSmathYsqrt,T55);
  lit_220 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T58 = YPfab_gen(T59,LITREF(lit_34),LITREF(lit_220),YPfalse);
  VARSET(YgooSmathYlog,T58);
  lit_221 = YPPlist(1,YPPsym((P)"x"));
  T60 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_82 = YPfab_met(FUNCODEREF(fun_log_82),T60,LITREF(lit_34),LITREF(lit_221),sloc(388),YPfalse);
  T62 = VARREF_OR(YgooSmathYlog,YPfalse);
  T63 = fun_log_82;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSmathYlog,T61);
  lit_222 = YPPlist(1,YPPsym((P)"x"));
  T64 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_log_83 = YPfab_met(FUNCODEREF(fun_log_83),T64,LITREF(lit_34),LITREF(lit_222),sloc(388),YPfalse);
  T66 = VARREF_OR(YgooSmathYlog,YPfalse);
  T67 = fun_log_83;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSmathYlog,T65);
  lit_223 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T68 = YPfab_gen(T69,LITREF(lit_12),LITREF(lit_223),YPfalse);
  VARSET(YgooSmathYsin,T68);
  lit_224 = YPPlist(1,YPPsym((P)"x"));
  T70 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_84 = YPfab_met(FUNCODEREF(fun_sin_84),T70,LITREF(lit_12),LITREF(lit_224),sloc(389),YPfalse);
  T72 = VARREF_OR(YgooSmathYsin,YPfalse);
  T73 = fun_sin_84;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYsin,T71);
  lit_225 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sin_85 = YPfab_met(FUNCODEREF(fun_sin_85),T74,LITREF(lit_12),LITREF(lit_225),sloc(389),YPfalse);
  T76 = VARREF_OR(YgooSmathYsin,YPfalse);
  T77 = fun_sin_85;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmathYsin,T75);
  lit_226 = YPPlist(1,YPPsym((P)"x"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T78 = YPfab_gen(T79,LITREF(lit_14),LITREF(lit_226),YPfalse);
  VARSET(YgooSmathYcos,T78);
  lit_227 = YPPlist(1,YPPsym((P)"x"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_86 = YPfab_met(FUNCODEREF(fun_cos_86),T80,LITREF(lit_14),LITREF(lit_227),sloc(390),YPfalse);
  T82 = VARREF_OR(YgooSmathYcos,YPfalse);
  T83 = fun_cos_86;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSmathYcos,T81);
  lit_228 = YPPlist(1,YPPsym((P)"x"));
  T84 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cos_87 = YPfab_met(FUNCODEREF(fun_cos_87),T84,LITREF(lit_14),LITREF(lit_228),sloc(390),YPfalse);
  T86 = VARREF_OR(YgooSmathYcos,YPfalse);
  T87 = fun_cos_87;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSmathYcos,T85);
  lit_229 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T88 = YPfab_gen(T89,LITREF(lit_16),LITREF(lit_229),YPfalse);
  VARSET(YgooSmathYtan,T88);
  lit_230 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_88 = YPfab_met(FUNCODEREF(fun_tan_88),T90,LITREF(lit_16),LITREF(lit_230),sloc(391),YPfalse);
  T92 = VARREF_OR(YgooSmathYtan,YPfalse);
  T93 = fun_tan_88;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooSmathYtan,T91);
  lit_231 = YPPlist(1,YPPsym((P)"x"));
  T94 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tan_89 = YPfab_met(FUNCODEREF(fun_tan_89),T94,LITREF(lit_16),LITREF(lit_231),sloc(391),YPfalse);
  T96 = VARREF_OR(YgooSmathYtan,YPfalse);
  T97 = fun_tan_89;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSmathYtan,T95);
  lit_232 = YPPlist(1,YPPsym((P)"x"));
  T99 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T98 = YPfab_gen(T99,LITREF(lit_18),LITREF(lit_232),YPfalse);
  VARSET(YgooSmathYsinh,T98);
  lit_233 = YPPlist(1,YPPsym((P)"x"));
  T100 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_90 = YPfab_met(FUNCODEREF(fun_sinh_90),T100,LITREF(lit_18),LITREF(lit_233),sloc(392),YPfalse);
  T102 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T103 = fun_sinh_90;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYsinh,T101);
  lit_234 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_sinh_91 = YPfab_met(FUNCODEREF(fun_sinh_91),T104,LITREF(lit_18),LITREF(lit_234),sloc(392),YPfalse);
  T106 = VARREF_OR(YgooSmathYsinh,YPfalse);
  T107 = fun_sinh_91;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSmathYsinh,T105);
  lit_235 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T108 = YPfab_gen(T109,LITREF(lit_20),LITREF(lit_235),YPfalse);
  VARSET(YgooSmathYcosh,T108);
  lit_236 = YPPlist(1,YPPsym((P)"x"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_92 = YPfab_met(FUNCODEREF(fun_cosh_92),T110,LITREF(lit_20),LITREF(lit_236),sloc(393),YPfalse);
  T112 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T113 = fun_cosh_92;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooSmathYcosh,T111);
  lit_237 = YPPlist(1,YPPsym((P)"x"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_cosh_93 = YPfab_met(FUNCODEREF(fun_cosh_93),T114,LITREF(lit_20),LITREF(lit_237),sloc(393),YPfalse);
  T116 = VARREF_OR(YgooSmathYcosh,YPfalse);
  T117 = fun_cosh_93;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YgooSmathYcosh,T115);
  lit_238 = YPPlist(1,YPPsym((P)"x"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T118 = YPfab_gen(T119,LITREF(lit_22),LITREF(lit_238),YPfalse);
  VARSET(YgooSmathYtanh,T118);
  lit_239 = YPPlist(1,YPPsym((P)"x"));
  T120 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_tanh_94 = YPfab_met(FUNCODEREF(fun_tanh_94),T120,LITREF(lit_22),LITREF(lit_239),sloc(394),YPfalse);
  T122 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T123 = fun_tanh_94;
  T121 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T122,T123);
  VARSET(YgooSmathYtanh,T121);
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T126 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  T125 = fun_tanh_95 = YPfab_met(FUNCODEREF(fun_tanh_95),T126,LITREF(lit_22),LITREF(lit_240),sloc(394),YPfalse);
  T129 = VARREF_OR(YgooSmathYtanh,YPfalse);
  T130 = fun_tanh_95;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  T127 = VARSET(YgooSmathYtanh,T128);
  T124 = T127;
  return T124;
}

P YgooSmathY___main_5___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
DEFCREGS();
  lit_241 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_24),LITREF(lit_241),YPfalse);
  VARSET(YgooSmathYasin,T0);
  lit_242 = YPPlist(1,YPPsym((P)"x"));
  lit_243 = YPsb((P)"SQRT would produce complex number");
  T2 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_96 = YPfab_met(FUNCODEREF(fun_asin_96),T2,LITREF(lit_24),LITREF(lit_242),sloc(395),YPfalse);
  T4 = VARREF_OR(YgooSmathYasin,YPfalse);
  T5 = fun_asin_96;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSmathYasin,T3);
  lit_244 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_asin_97 = YPfab_met(FUNCODEREF(fun_asin_97),T6,LITREF(lit_24),LITREF(lit_244),sloc(395),YPfalse);
  T8 = VARREF_OR(YgooSmathYasin,YPfalse);
  T9 = fun_asin_97;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSmathYasin,T7);
  lit_245 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_26),LITREF(lit_245),YPfalse);
  VARSET(YgooSmathYacos,T10);
  lit_246 = YPPlist(1,YPPsym((P)"x"));
  lit_247 = YPsb((P)"SQRT would produce complex number");
  T12 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_98 = YPfab_met(FUNCODEREF(fun_acos_98),T12,LITREF(lit_26),LITREF(lit_246),sloc(397),YPfalse);
  T14 = VARREF_OR(YgooSmathYacos,YPfalse);
  T15 = fun_acos_98;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYacos,T13);
  lit_248 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_acos_99 = YPfab_met(FUNCODEREF(fun_acos_99),T16,LITREF(lit_26),LITREF(lit_248),sloc(397),YPfalse);
  T18 = VARREF_OR(YgooSmathYacos,YPfalse);
  T19 = fun_acos_99;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSmathYacos,T17);
  lit_249 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_28),LITREF(lit_249),YPfalse);
  VARSET(YgooSmathYatan,T20);
  lit_250 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_100 = YPfab_met(FUNCODEREF(fun_atan_100),T22,LITREF(lit_28),LITREF(lit_250),sloc(399),YPfalse);
  T24 = VARREF_OR(YgooSmathYatan,YPfalse);
  T25 = fun_atan_100;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmathYatan,T23);
  lit_251 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_atan_101 = YPfab_met(FUNCODEREF(fun_atan_101),T26,LITREF(lit_28),LITREF(lit_251),sloc(399),YPfalse);
  T28 = VARREF_OR(YgooSmathYatan,YPfalse);
  T29 = fun_atan_101;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmathYatan,T27);
  lit_252 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T31 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_30),LITREF(lit_252),YPfalse);
  VARSET(YgooSmathYatan2,T30);
  lit_253 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T32 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_102 = YPfab_met(FUNCODEREF(fun_atan2_102),T32,LITREF(lit_30),LITREF(lit_253),sloc(402),YPfalse);
  T34 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T35 = fun_atan2_102;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSmathYatan2,T33);
  lit_254 = YPPlist(2,YPPsym((P)"y"),YPPsym((P)"x"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLfloG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLfloG),Ynil);
  fun_atan2_103 = YPfab_met(FUNCODEREF(fun_atan2_103),T36,LITREF(lit_30),LITREF(lit_254),sloc(404),YPfalse);
  T38 = VARREF_OR(YgooSmathYatan2,YPfalse);
  T39 = fun_atan2_103;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSmathYatan2,T37);
  lit_255 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"b"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLnumG),Ynil);
  fun_logn_104 = YPfab_met(FUNCODEREF(fun_logn_104),T40,LITREF(lit_36),LITREF(lit_255),sloc(407),YPfalse);
  T42 = VARREF_OR(YgooSmathYlogn,YPfalse);
  T43 = fun_logn_104;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSmathYlogn,T41);
  if (YPfalse != YPfalse) {
  } else {
  }
  T44 = YPfalse;
  return T44;
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
  {"as-log", &module_info_gooSlog, NULL},
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
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
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
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
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
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
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
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
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
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
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
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
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
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
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
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"address-of", &module_info_gooSany, NULL},
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
  {"any?", &module_info_gooStypes, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%relt", &module_info_gooSboot, NULL},
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
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
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
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
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
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
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
  {"/", CVAR, &YgooSmathYS},
  {"~", CVAR, &YgooSmathYN},
  {"ceil", CVAR, &YgooSmathYceil},
  {"mod+", CVAR, &YgooSmathYmodA},
  {"%fcosh", PVAR, NULL},
  {"-", CVAR, &YgooSmathY_},
  {"floor", CVAR, &YgooSmathYfloor},
  {"num-to-str", CVAR, &YgooSmathYnum_to_str},
  {"*", CVAR, &YgooSmathYT},
  {"---main-4---", PVAR, NULL},
  {"&", CVAR, &YgooSmathYB},
  {"mod", CVAR, &YgooSmathYmod},
  {"%ftan", PVAR, NULL},
  {"1-", CVAR, &YgooSmathY1_},
  {"^", CVAR, &YgooSmathYC},
  {"%f/", PVAR, NULL},
  {"%fatan2", PVAR, NULL},
  {"div", CVAR, &YgooSmathYdiv},
  {"log", CVAR, &YgooSmathYlog},
  {"%flo-bits", PVAR, NULL},
  {"%fi2f", PVAR, NULL},
  {"%fsinh", PVAR, NULL},
  {"|", CVAR, &YgooSmathYK},
  {"sqrt", CVAR, &YgooSmathYsqrt},
  {"flo-bits", CVAR, &YgooSmathYflo_bits},
  {"trunc/", CVAR, &YgooSmathYtruncS},
  {"%f+", PVAR, NULL},
  {"contagious-call", CVAR, &YgooSmathYcontagious_call},
  {"abs", CVAR, &YgooSmathYabs},
  {"---main-5---", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"power-of-two-ceil", CVAR, &YgooSmathYpower_of_two_ceil},
  {"%fsin", PVAR, NULL},
  {"atan2", CVAR, &YgooSmathYatan2},
  {"---main-3---", PVAR, NULL},
  {"neg", CVAR, &YgooSmathYneg},
  {"%f<", PVAR, NULL},
  {"1+", CVAR, &YgooSmathY1A},
  {"isqrt", CVAR, &YgooSmathYisqrt},
  {"round/", CVAR, &YgooSmathYroundS},
  {"atan", CVAR, &YgooSmathYatan},
  {"contagious-type", CVAR, &YgooSmathYcontagious_type},
  {"%f*", PVAR, NULL},
  {"acos", CVAR, &YgooSmathYacos},
  {"%ft/", PVAR, NULL},
  {"neg?", CVAR, &YgooSmathYnegQ},
  {"moddecf", PVAR, NULL},
  {"asin", CVAR, &YgooSmathYasin},
  {"<<", CVAR, &YgooSmathYLL},
  {"zero?", CVAR, &YgooSmathYzeroQ},
  {"%fasin", PVAR, NULL},
  {"ceil/", CVAR, &YgooSmathYceilS},
  {"%ftanh", PVAR, NULL},
  {"%ft", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"tanh", CVAR, &YgooSmathYtanh},
  {"pos?", CVAR, &YgooSmathYposQ},
  {"---main-1---", PVAR, NULL},
  {"$pi", CVAR, &YgooSmathYDpi},
  {"def-unary-trans", PVAR, NULL},
  {">>>", CVAR, &YgooSmathYGGG},
  {"logn", CVAR, &YgooSmathYlogn},
  {"%fc", PVAR, NULL},
  {"cosh", CVAR, &YgooSmathYcosh},
  {"%flog", PVAR, NULL},
  {"odd?", CVAR, &YgooSmathYoddQ},
  {"pow", CVAR, &YgooSmathYpow},
  {"%fatan", PVAR, NULL},
  {"$e", CVAR, &YgooSmathYDe},
  {"%facos", PVAR, NULL},
  {"sinh", CVAR, &YgooSmathYsinh},
  {"%f-", PVAR, NULL},
  {"floor/", CVAR, &YgooSmathYfloorS},
  {"modincf", PVAR, NULL},
  {"even?", CVAR, &YgooSmathYevenQ},
  {"%fpow", PVAR, NULL},
  {"tan", CVAR, &YgooSmathYtan},
  {"rem", CVAR, &YgooSmathYrem},
  {"trunc", CVAR, &YgooSmathYtrunc},
  {"cos", CVAR, &YgooSmathYcos},
  {">>", CVAR, &YgooSmathYGG},
  {"round-to", CVAR, &YgooSmathYround_to},
  {"sin", CVAR, &YgooSmathYsin},
  {"mod-", CVAR, &YgooSmathYmod_},
  {"%ff", PVAR, NULL},
  {"%f=", PVAR, NULL},
  {"bit?", CVAR, &YgooSmathYbitQ},
  {"%fcos", PVAR, NULL},
  {"round", CVAR, &YgooSmathYround},
  {"+", CVAR, &YgooSmathYA},
  {"%fsqrt", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"/", NULL},
  {"~", NULL},
  {"ceil", NULL},
  {"mod+", NULL},
  {"-", NULL},
  {"floor", NULL},
  {"num-to-str", NULL},
  {"*", NULL},
  {"&", NULL},
  {"mod", NULL},
  {"logn", NULL},
  {"1-", NULL},
  {"^", NULL},
  {"div", NULL},
  {"log", NULL},
  {"|", NULL},
  {"sqrt", NULL},
  {"flo-bits", NULL},
  {"trunc/", NULL},
  {"contagious-call", NULL},
  {"abs", NULL},
  {"power-of-two-ceil", NULL},
  {"atan2", NULL},
  {"neg", NULL},
  {"+", NULL},
  {"1+", NULL},
  {"isqrt", NULL},
  {"round/", NULL},
  {"atan", NULL},
  {"contagious-type", NULL},
  {"acos", NULL},
  {"neg?", NULL},
  {"moddecf", NULL},
  {"asin", NULL},
  {"<<", NULL},
  {"zero?", NULL},
  {"ceil/", NULL},
  {"tanh", NULL},
  {"pos?", NULL},
  {"$pi", NULL},
  {">>>", NULL},
  {"cosh", NULL},
  {"odd?", NULL},
  {"pow", NULL},
  {"$e", NULL},
  {"sinh", NULL},
  {"floor/", NULL},
  {"modincf", NULL},
  {"even?", NULL},
  {"tan", NULL},
  {"rem", NULL},
  {"trunc", NULL},
  {"cos", NULL},
  {">>", NULL},
  {"round-to", NULL},
  {"sin", NULL},
  {"mod-", NULL},
  {"bit?", NULL},
  {"round", NULL},
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
