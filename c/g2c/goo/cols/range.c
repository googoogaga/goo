/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/range");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/range */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
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
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
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
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooScolsSrangeYPval,"goo/cols/range","%val");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooScolsSrangeYrange_inQ,"goo/cols/range","range-in?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
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
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
DEF(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSrangeYPkey,"goo/cols/range","%key");
DEF(YgooScolsSrangeYPkey_setter,"goo/cols/range","%key-setter");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
DEF(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YOmap,"goo/boot","@map");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YgooScolsSrangeYPdat,"goo/cols/range","%dat");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
DEF(YgooScolsSrangeYLrange_enumG,"goo/cols/range","<range-enum>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
DEF(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooScolsSrangeYrange_lim,"goo/cols/range","range-lim");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
DEF(YgooScolsSrangeYPval_setter,"goo/cols/range","%val-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Ylst,"goo/boot","lst");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
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
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPtrue,"goo/boot","%true");
EXT(Ybox_value,"goo/boot","box-value");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSfunctionalYzipped,"goo/functional","zipped");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSlogYE,"goo/log","=");
DEF(YgooScolsSrangeYrange_nxt,"goo/cols/range","range-nxt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
DEF(YgooScolsSrangeYrange_from,"goo/cols/range","range-from");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
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
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
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
EXT(YgooScolsScolYadd,"goo/cols/col","add");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_47);
DEFLIT(lit_37);
DEFLIT(lit_12);
DEFLIT(lit_49);
DEFLIT(lit_35);
DEFLIT(lit_42);
DEFLIT(lit_14);
DEFLIT(lit_41);
DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_39);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_25);
DEFLIT(lit_43);
DEFLIT(lit_11);
DEFLIT(lit_13);
DEFLIT(lit_36);
DEFLIT(lit_21);
DEFLIT(lit_34);
DEFLIT(lit_16);
DEFLIT(lit_3);
DEFLIT(lit_31);
DEFLIT(lit_9);
DEFLIT(lit_48);
DEFLIT(lit_30);
DEFLIT(lit_40);
DEFLIT(lit_24);
DEFLIT(lit_45);
DEFLIT(lit_10);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_33);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_4);
DEFLIT(lit_19);
DEFLIT(lit_27);
DEFLIT(lit_38);
DEFLIT(lit_17);
DEFLIT(lit_2);
DEFLIT(lit_32);
DEFLIT(lit_44);
DEFLIT(lit_8);

/* FUNCTIONS: */

LOCFOR(fun_range_from_0);
LOCFOR(fun_1);
LOCFOR(fun_range_inQ_2);
LOCFOR(fun_3);
LOCFOR(fun_range_lim_4);
LOCFOR(fun_5);
LOCFOR(fun_range_nxt_6);
LOCFOR(fun_7);
LOCFOR(fun_fab_8);
LOCFOR(fun_range_9);
LOCFOR(fun_range_by_10);
LOCFOR(fun_from_11);
LOCFOR(fun_below_12);
LOCFOR(fun_col_res_type_13);
LOCFOR(fun_Pdat_14);
LOCFOR(fun_Pval_15);
LOCFOR(fun_Pval_setter_16);
LOCFOR(fun_Pkey_17);
LOCFOR(fun_Pkey_setter_18);
LOCFOR(fun_enum_19);
LOCFOR(fun_finQ_20);
LOCFOR(fun_nxt_21);
LOCFOR(fun_now_22);
LOCFOR(fun_now_key_23);
extern P YgooScolsSrangeY___main_0___ ();
extern P YgooScolsSrangeY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_range_from_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_1) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_range_inQ_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYrange_inQ));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_3) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YgooSmagYL));
}

LOCCODEDEF(fun_range_lim_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYrange_lim));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_5) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_range_nxt_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYrange_nxt));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_7) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(VARREF(YgooSmathY1A));
}

LOCCODEDEF(fun_fab_8) {
  P c_,s_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
  T0 = CALL4(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYL),s_,VARREF(YgooSmathY1A));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_range_9) {
  P from_,inQ_,lim_;
  P T0;
LINK_STACK();
  ARG(from_, 0);
  ARG(inQ_, 1);
  ARG(lim_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),inQ_,VARREF(YgooScolsSrangeYrange_lim),lim_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_range_by_10) {
  P from_,inQ_,lim_,nxt_;
  P T0;
LINK_STACK();
  ARG(from_, 0);
  ARG(inQ_, 1);
  ARG(lim_, 2);
  ARG(nxt_, 3);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),inQ_,VARREF(YgooScolsSrangeYrange_lim),lim_,VARREF(YgooScolsSrangeYrange_nxt),nxt_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_from_11) {
  P from_;
  P T0,T1;
LINK_STACK();
  ARG(from_, 0);
  T1 = CALL1(1,VARREF(YgooSfunctionalYalways),YPtrue);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_below_12) {
  P lim_;
  P T0;
LINK_STACK();
  ARG(lim_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_lim),lim_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_res_type_13) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLlstG));
}

LOCCODEDEF(fun_Pdat_14) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pval_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYPval));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pval_setter_16) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYPval));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_17) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSrangeYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_setter_18) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_enum_19) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSrangeYrange_from),x_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),x_,VARREF(YgooScolsSrangeYPval),T1,VARREF(YgooScolsSrangeYPkey),YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_20) {
  P e_;
  P cF3682;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  T5 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  cF3682 = T5;
  T4 = CALL1(1,VARREF(YgooScolsSrangeYrange_inQ),cF3682);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T3 = CALL1(1,VARREF(YgooScolsSrangeYrange_lim),cF3682);
  T1 = CALL2(1,T4,T2,T3);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_21) {
  P e_;
  P x_1434F3683;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  x_1434F3683 = e_;
  T3 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYrange_nxt),T3);
  T1 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T0 = CALL1(1,T2,T1);
  CALL2(1,VARREF(YgooScolsSrangeYPval_setter),T0,x_1434F3683);
  T5 = CALL1(1,VARREF(YgooScolsSrangeYPkey),e_);
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSrangeYPkey_setter),T4,x_1434F3683);
UNLINK_STACK();
  RET(x_1434F3683);
}

LOCCODEDEF(fun_now_22) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_now_key_23) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSrangeYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSrangeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84;
DEFCREGS();
  lit_0 = YPPsym((P)"<range>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSrangeYLrangeG,T0);
  lit_1 = YPPsym((P)"range");
  lit_2 = YPPlist(3,YPPsym((P)"from"),YPPsym((P)"done?"),YPPsym((P)"lim"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooScolsSrangeYrange,T2);
  lit_3 = YPPsym((P)"range-by");
  lit_4 = YPPlist(4,YPPsym((P)"from"),YPPsym((P)"done?"),YPPsym((P)"lim"),YPPsym((P)"nxt"));
  T5 = YPfab_sig(YPPlist(4,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_3),LITREF(lit_4),YPfalse);
  VARSET(YgooScolsSrangeYrange_by,T4);
  lit_5 = YPPsym((P)"from");
  lit_6 = YPPlist(1,YPPsym((P)"from"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_5),LITREF(lit_6),YPfalse);
  VARSET(YgooScolsSrangeYfrom,T6);
  lit_7 = YPPsym((P)"below");
  lit_8 = YPPlist(1,YPPsym((P)"from"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_7),LITREF(lit_8),YPfalse);
  VARSET(YgooScolsSseqYbelow,T8);
  lit_9 = YPPsym((P)"range-from");
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_from_0 = YPfab_met(FUNCODEREF(fun_range_from_0),T10,LITREF(lit_9),LITREF(lit_10),sloc(30),YPfalse);
  T12 = VARREF_OR(YgooScolsSrangeYrange_from,YPfalse);
  T13 = fun_range_from_0;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooScolsSrangeYrange_from,T11);
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1 = YPfab_met(FUNCODEREF(fun_1),T14,YPfalse,LITREF(lit_11),sloc(30),YPfalse);
  T15 = fun_1;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),YPfalse,VARREF(YLnumG),T15);
  lit_12 = YPPsym((P)"range-in?");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_inQ_2 = YPfab_met(FUNCODEREF(fun_range_inQ_2),T16,LITREF(lit_12),LITREF(lit_13),sloc(31),YPfalse);
  T18 = VARREF_OR(YgooScolsSrangeYrange_inQ,YPfalse);
  T19 = fun_range_inQ_2;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsSrangeYrange_inQ,T17);
  lit_14 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPfab_met(FUNCODEREF(fun_3),T20,YPfalse,LITREF(lit_14),sloc(31),YPfalse);
  T21 = fun_3;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_inQ),YPfalse,VARREF(YLfunG),T21);
  lit_15 = YPPsym((P)"range-lim");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_lim_4 = YPfab_met(FUNCODEREF(fun_range_lim_4),T22,LITREF(lit_15),LITREF(lit_16),sloc(32),YPfalse);
  T24 = VARREF_OR(YgooScolsSrangeYrange_lim,YPfalse);
  T25 = fun_range_lim_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooScolsSrangeYrange_lim,T23);
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPfab_met(FUNCODEREF(fun_5),T26,YPfalse,LITREF(lit_17),sloc(32),YPfalse);
  T27 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T28 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_lim),YPfalse,T27,T28);
  lit_18 = YPPsym((P)"range-nxt");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_nxt_6 = YPfab_met(FUNCODEREF(fun_range_nxt_6),T29,LITREF(lit_18),LITREF(lit_19),sloc(33),YPfalse);
  T31 = VARREF_OR(YgooScolsSrangeYrange_nxt,YPfalse);
  T32 = fun_range_nxt_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSrangeYrange_nxt,T30);
  lit_20 = YPPlist(1,YPPsym((P)"_x"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPfab_met(FUNCODEREF(fun_7),T33,YPfalse,LITREF(lit_20),sloc(33),YPfalse);
  T34 = fun_7;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_nxt),YPfalse,VARREF(YLfunG),T34);
  lit_21 = YPPsym((P)"fab");
  lit_22 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"s"));
  T36 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSrangeYLrangeG));
  T35 = YPfab_sig(YPPlist(2,T36,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_fab_8 = YPfab_met(FUNCODEREF(fun_fab_8),T35,LITREF(lit_21),LITREF(lit_22),sloc(35),YPfalse);
  T38 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T39 = fun_fab_8;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYfab,T37);
  lit_23 = YPPlist(3,YPPsym((P)"from"),YPPsym((P)"in?"),YPPsym((P)"lim"));
  T40 = YPfab_sig(YPPlist(3,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_9 = YPfab_met(FUNCODEREF(fun_range_9),T40,LITREF(lit_1),LITREF(lit_23),sloc(38),YPfalse);
  T42 = VARREF_OR(YgooScolsSrangeYrange,YPfalse);
  T43 = fun_range_9;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsSrangeYrange,T41);
  lit_24 = YPPlist(4,YPPsym((P)"from"),YPPsym((P)"in?"),YPPsym((P)"lim"),YPPsym((P)"nxt"));
  T44 = YPfab_sig(YPPlist(4,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_by_10 = YPfab_met(FUNCODEREF(fun_range_by_10),T44,LITREF(lit_3),LITREF(lit_24),sloc(41),YPfalse);
  T46 = VARREF_OR(YgooScolsSrangeYrange_by,YPfalse);
  T47 = fun_range_by_10;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsSrangeYrange_by,T45);
  lit_25 = YPPlist(1,YPPsym((P)"from"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_from_11 = YPfab_met(FUNCODEREF(fun_from_11),T48,LITREF(lit_5),LITREF(lit_25),sloc(44),YPfalse);
  T50 = VARREF_OR(YgooScolsSrangeYfrom,YPfalse);
  T51 = fun_from_11;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooScolsSrangeYfrom,T49);
  lit_26 = YPPlist(1,YPPsym((P)"lim"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_below_12 = YPfab_met(FUNCODEREF(fun_below_12),T52,LITREF(lit_7),LITREF(lit_26),sloc(47),YPfalse);
  T54 = VARREF_OR(YgooScolsSseqYbelow,YPfalse);
  T55 = fun_below_12;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooScolsSseqYbelow,T53);
  lit_27 = YPPsym((P)"col-res-type");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T56 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_13 = YPfab_met(FUNCODEREF(fun_col_res_type_13),T56,LITREF(lit_27),LITREF(lit_28),sloc(50),YPfalse);
  T58 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T59 = fun_col_res_type_13;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooScolsScolYcol_res_type,T57);
  lit_29 = YPPsym((P)"<range-enum>");
  T61 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T60 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_29),T61);
  VARSET(YgooScolsSrangeYLrange_enumG,T60);
  lit_30 = YPPsym((P)"%dat");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_14 = YPfab_met(FUNCODEREF(fun_Pdat_14),T62,LITREF(lit_30),LITREF(lit_31),sloc(54),YPfalse);
  T64 = VARREF_OR(YgooScolsSrangeYPdat,YPfalse);
  T65 = fun_Pdat_14;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsSrangeYPdat,T63);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),YPfalse,VARREF(YgooScolsSrangeYLrangeG),VARREF(YPprop_unbound_error));
  lit_32 = YPPsym((P)"%val");
  lit_33 = YPPlist(1,YPPsym((P)"_x"));
  T66 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pval_15 = YPfab_met(FUNCODEREF(fun_Pval_15),T66,LITREF(lit_32),LITREF(lit_33),sloc(55),YPfalse);
  T68 = VARREF_OR(YgooScolsSrangeYPval,YPfalse);
  T69 = fun_Pval_15;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooScolsSrangeYPval,T67);
  lit_34 = YPPsym((P)"%val-setter");
  lit_35 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T70 = YPfab_sig(YPPlist(2,VARREF(YLnumG),VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pval_setter_16 = YPfab_met(FUNCODEREF(fun_Pval_setter_16),T70,LITREF(lit_34),LITREF(lit_35),sloc(55),YPfalse);
  T72 = VARREF_OR(YgooScolsSrangeYPval_setter,YPfalse);
  T73 = fun_Pval_setter_16;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooScolsSrangeYPval_setter,T71);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPval),VARREF(YgooScolsSrangeYPval_setter),VARREF(YLnumG),VARREF(YPprop_unbound_error));
  lit_36 = YPPsym((P)"%key");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T74 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_17 = YPfab_met(FUNCODEREF(fun_Pkey_17),T74,LITREF(lit_36),LITREF(lit_37),sloc(56),YPfalse);
  T76 = VARREF_OR(YgooScolsSrangeYPkey,YPfalse);
  T77 = fun_Pkey_17;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsSrangeYPkey,T75);
  lit_38 = YPPsym((P)"%key-setter");
  lit_39 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T79 = fun_Pkey_setter_18 = YPfab_met(FUNCODEREF(fun_Pkey_setter_18),T80,LITREF(lit_38),LITREF(lit_39),sloc(56),YPfalse);
  T83 = VARREF_OR(YgooScolsSrangeYPkey_setter,YPfalse);
  T84 = fun_Pkey_setter_18;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  T81 = VARSET(YgooScolsSrangeYPkey_setter,T82);
  T78 = T81;
  return T78;
}

P YgooScolsSrangeY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
DEFCREGS();
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPkey),VARREF(YgooScolsSrangeYPkey_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_40 = YPPsym((P)"enum");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_enum_19 = YPfab_met(FUNCODEREF(fun_enum_19),T0,LITREF(lit_40),LITREF(lit_41),sloc(58),YPfalse);
  T2 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T3 = fun_enum_19;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsScolYenum,T1);
  lit_42 = YPPsym((P)"fin?");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T4 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_20 = YPfab_met(FUNCODEREF(fun_finQ_20),T4,LITREF(lit_42),LITREF(lit_43),sloc(61),YPfalse);
  T6 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T7 = fun_finQ_20;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooScolsScolYfinQ,T5);
  lit_44 = YPPsym((P)"nxt");
  lit_45 = YPPlist(1,YPPsym((P)"e"));
  T8 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_nxt_21 = YPfab_met(FUNCODEREF(fun_nxt_21),T8,LITREF(lit_44),LITREF(lit_45),sloc(65),YPfalse);
  T10 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T11 = fun_nxt_21;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsScolYnxt,T9);
  lit_46 = YPPsym((P)"now");
  lit_47 = YPPlist(1,YPPsym((P)"e"));
  T12 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_now_22 = YPfab_met(FUNCODEREF(fun_now_22),T12,LITREF(lit_46),LITREF(lit_47),sloc(68),YPfalse);
  T14 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T15 = fun_now_22;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYnow,T13);
  lit_48 = YPPsym((P)"now-key");
  lit_49 = YPPlist(1,YPPsym((P)"e"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T17 = fun_now_key_23 = YPfab_met(FUNCODEREF(fun_now_key_23),T18,LITREF(lit_48),LITREF(lit_49),sloc(71),YPfalse);
  T21 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T22 = fun_now_key_23;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  T19 = VARSET(YgooScolsScolYnow_key,T20);
  T16 = T19;
  return T16;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSfunctional},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
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
  {"rev", &module_info_gooScolsSseq, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
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
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
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
  {"nul", &module_info_gooScolsScol, NULL},
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
  {"empty?", &module_info_gooScolsScol, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
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
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
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
  {"contagious-call", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
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
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
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
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
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
  {"col-res-type", &module_info_gooScolsScol, NULL},
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
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
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
  {"alpha?", &module_info_gooSchr, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
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
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
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
  {"below", &module_info_gooScolsSseq, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
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
  {"into", &module_info_gooScolsScol, NULL},
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
  {"fabs", &module_info_gooSchr, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
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
  {"now-key", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
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
  {"lower?", &module_info_gooSchr, NULL},
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
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
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
  {"finds", &module_info_gooScolsSseq, NULL},
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
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
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
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
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
  {"find", &module_info_gooScolsScol, NULL},
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
  {"zipped", &module_info_gooSfunctional, NULL},
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
  {"del-vals", &module_info_gooScolsSseq, NULL},
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
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
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
  {"add", &module_info_gooScolsScol, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"range-by", CVAR, &YgooScolsSrangeYrange_by},
  {"%val", CVAR, &YgooScolsSrangeYPval},
  {"range-in?", CVAR, &YgooScolsSrangeYrange_inQ},
  {"<range>", CVAR, &YgooScolsSrangeYLrangeG},
  {"---main-1---", PVAR, NULL},
  {"%key", CVAR, &YgooScolsSrangeYPkey},
  {"%key-setter", CVAR, &YgooScolsSrangeYPkey_setter},
  {"from", CVAR, &YgooScolsSrangeYfrom},
  {"%dat", CVAR, &YgooScolsSrangeYPdat},
  {"<range-enum>", CVAR, &YgooScolsSrangeYLrange_enumG},
  {"range", CVAR, &YgooScolsSrangeYrange},
  {"range-lim", CVAR, &YgooScolsSrangeYrange_lim},
  {"%val-setter", CVAR, &YgooScolsSrangeYPval_setter},
  {"range-nxt", CVAR, &YgooScolsSrangeYrange_nxt},
  {"range-from", CVAR, &YgooScolsSrangeYrange_from},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"range-by", NULL},
  {"<range>", NULL},
  {"from", NULL},
  {"below", NULL},
  {"range", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSrange;
MODULE_INFO module_info_gooScolsSrange = {
  "goo/cols/range",
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
extern void load_module_gooSfunctional (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSrange (void);

void load_module_gooScolsSrange (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSfunctional();
  load_module_gooStypes();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsSrangeY___main_0___();
  (P)YgooScolsSrangeY___main_1___();

}

/* END OF GENERATED CODE. */
