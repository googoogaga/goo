/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/lst");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOlst,"goo/boot","@lst");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
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
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
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
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
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
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
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
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
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
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
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
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
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
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
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
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
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
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
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
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
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
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
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
DEF(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
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
DEF(YgooScolsSlstYLline_pahG,"goo/cols/lst","<line-pah>");
DEF(YgooScolsSlstYline_pah,"goo/cols/lst","line-pah");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooScolsSlstYlstT,"goo/cols/lst","lst*");
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
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
DEF(YgooScolsSlstYDline_pah_nul,"goo/cols/lst","$line-pah-nul");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
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
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
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
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLboxG,"goo/boot","<box>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
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
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSlogYE,"goo/log","=");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOtanyQ,"goo/boot","@tany?");
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
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
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

DEFLIT(lit_24);
DEFLIT(lit_81);
DEFLIT(lit_36);
DEFLIT(lit_66);
DEFLIT(lit_58);
DEFLIT(lit_73);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_7);
DEFLIT(lit_104);
DEFLIT(lit_75);
DEFLIT(lit_78);
DEFLIT(lit_12);
DEFLIT(lit_95);
DEFLIT(lit_31);
DEFLIT(lit_17);
DEFLIT(lit_53);
DEFLIT(lit_92);
DEFLIT(lit_60);
DEFLIT(lit_100);
DEFLIT(lit_90);
DEFLIT(lit_0);
DEFLIT(lit_35);
DEFLIT(lit_59);
DEFLIT(lit_40);
DEFLIT(lit_13);
DEFLIT(lit_72);
DEFLIT(lit_93);
DEFLIT(lit_105);
DEFLIT(lit_94);
DEFLIT(lit_54);
DEFLIT(lit_103);
DEFLIT(lit_91);
DEFLIT(lit_46);
DEFLIT(lit_16);
DEFLIT(lit_39);
DEFLIT(lit_34);
DEFLIT(lit_9);
DEFLIT(lit_33);
DEFLIT(lit_71);
DEFLIT(lit_76);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_48);
DEFLIT(lit_82);
DEFLIT(lit_86);
DEFLIT(lit_51);
DEFLIT(lit_52);
DEFLIT(lit_45);
DEFLIT(lit_84);
DEFLIT(lit_55);
DEFLIT(lit_109);
DEFLIT(lit_64);
DEFLIT(lit_69);
DEFLIT(lit_102);
DEFLIT(lit_113);
DEFLIT(lit_63);
DEFLIT(lit_29);
DEFLIT(lit_61);
DEFLIT(lit_112);
DEFLIT(lit_74);
DEFLIT(lit_96);
DEFLIT(lit_99);
DEFLIT(lit_23);
DEFLIT(lit_11);
DEFLIT(lit_41);
DEFLIT(lit_68);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_79);
DEFLIT(lit_15);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_38);
DEFLIT(lit_47);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_65);
DEFLIT(lit_101);
DEFLIT(lit_111);
DEFLIT(lit_50);
DEFLIT(lit_88);
DEFLIT(lit_106);
DEFLIT(lit_97);
DEFLIT(lit_62);
DEFLIT(lit_4);
DEFLIT(lit_85);
DEFLIT(lit_70);
DEFLIT(lit_57);
DEFLIT(lit_44);
DEFLIT(lit_8);
DEFLIT(lit_77);
DEFLIT(lit_10);
DEFLIT(lit_110);
DEFLIT(lit_21);
DEFLIT(lit_56);
DEFLIT(lit_80);
DEFLIT(lit_89);
DEFLIT(lit_107);
DEFLIT(lit_83);
DEFLIT(lit_87);
DEFLIT(lit_22);
DEFLIT(lit_49);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_67);
DEFLIT(lit_28);
DEFLIT(lit_43);
DEFLIT(lit_20);
DEFLIT(lit_108);
DEFLIT(lit_42);
DEFLIT(lit_2);
DEFLIT(lit_18);

/* FUNCTIONS: */

LOCFOR(fun_len_0);
LOCFOR(fun_elt_or_1);
LOCFOR(fun_elt_setter_2);
LOCFOR(fun_nulQ_3);
LOCFOR(fun_nul_4);
LOCFOR(fun_fab_5);
LOCFOR(fun_fabs_6);
LOCFOR(fun_lstT_7);
LOCFOR(fun_Pdat_8);
LOCFOR(fun_Pdat_setter_9);
LOCFOR(fun_Pkey_10);
LOCFOR(fun_Pkey_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_enum_13);
LOCFOR(fun_finQ_14);
LOCFOR(fun_nxt_15);
LOCFOR(fun_now_16);
LOCFOR(fun_now_setter_17);
LOCFOR(fun_now_key_18);
LOCFOR(fun_add_19);
LOCFOR(fun_last_20);
LOCFOR(fun_revX_21);
LOCFOR(fun_connect_22);
LOCFOR(fun_catX_23);
LOCFOR(fun_lst_24);
LOCFOR(fun_pair_25);
LOCFOR(fun_pushX_26);
LOCFOR(fun_popX_27);
LOCFOR(fun_sort_byX_28);
LOCFOR(fun_to_str_29);
LOCFOR(fun_assq_30);
LOCFOR(fun_assqn_31);
LOCFOR(fun_x_1360_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_line_of_35);
LOCFOR(fun_line_of_36);
LOCFOR(fun_37);
FUNFOR(YgooScolsSlstYline_pah);
LOCFOR(fun_nul_39);
FUNFOR(YgooScolsSlstYline_pair);
FUNFOR(YgooScolsSlstYline_list);
LOCFOR(fun_copy_42);
LOCFOR(fun_line_list_of_43);
LOCFOR(fun_line_list_of_44);
extern P YgooScolsSlstY___main_0___ ();
extern P YgooScolsSlstY___main_1___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_len_0) {
  P x_;
  P xF3228;
  P countF3227;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3227 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3228 = x_;
  LOOP_99: {
    P a99_0,a99_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3228);
    if (T1 != YPfalse) {
      T0 = countF3227;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYA),countF3227,YPint((P)1));
      T4 = CALL1(1,VARREF(Ytail),xF3228);
      a99_0 = T3;
      a99_1 = T4;
      countF3227 = a99_0;
      xF3228 = a99_1;
      goto LOOP_99;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_or_1) {
  P x_,key_,default_;
  P xF3230;
  P countF3229;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3229 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3230 = x_;
  LOOP_100: {
    P a100_0,a100_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3230);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),countF3229,key_);
      if (T3 != YPfalse) {
        T4 = CALL1(1,VARREF(Yhead),xF3230);
        T2 = T4;
      } else {
        T6 = CALL2(1,VARREF(YgooSmathYA),countF3229,YPint((P)1));
        T7 = CALL1(1,VARREF(Ytail),xF3230);
        a100_0 = T6;
        a100_1 = T7;
        countF3229 = a100_0;
        xF3230 = a100_1;
        goto LOOP_100;
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_elt_setter_2) {
  P z_,x_,key_;
  P xF3232;
  P countF3231;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
  check_type(YPint((P)0),VARREF(YLintG));
  countF3231 = YPint((P)0);
  check_type(x_,VARREF(YLlstG));
  xF3232 = x_;
  LOOP_101: {
    P a101_0,a101_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3232);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(Yrange_error),xF3232,key_);
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF3231,key_);
      if (T4 != YPfalse) {
        T5 = CALL2(1,VARREF(Yhead_setter),z_,xF3232);
        T3 = T5;
      } else {
        T7 = CALL2(1,VARREF(YgooSmathYA),countF3231,YPint((P)1));
        T8 = CALL1(1,VARREF(Ytail),xF3232);
        a101_0 = T7;
        a101_1 = T8;
        countF3231 = a101_0;
        xF3232 = a101_1;
        goto LOOP_101;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nulQ_3) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYnul),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nul_4) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(Ynil);
}

LOCCODEDEF(fun_fab_5) {
  P t_,s_;
  P resF3234;
  P iF3233;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
  check_type(s_,VARREF(YLintG));
  iF3233 = s_;
  T5 = CALL1(1,VARREF(YgooScolsScolYnul),t_);
  check_type(T5,VARREF(YLlstG));
  resF3234 = T5;
  LOOP_102: {
    P a102_0,a102_1;
    T1 = CALL2(1,VARREF(YgooSmagYG),iF3233,YPint((P)0));
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmathY_),iF3233,YPint((P)1));
      T4 = CALL3(1,VARREF(Ynew),t_,VARREF(Ytail),resF3234);
      a102_0 = T3;
      a102_1 = T4;
      iF3233 = a102_0;
      resF3234 = a102_1;
      goto LOOP_102;
      T0 = T2;
    } else {
      T0 = resF3234;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fabs_6) {
  P c_,objects_;
  P resultF3236;
  P indexF3235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T6 = CALL2(1,VARREF(YgooSmathY_),T7,YPint((P)1));
  check_type(T6,VARREF(YLintG));
  indexF3235 = T6;
  T8 = CALL1(1,VARREF(YgooScolsScolYnul),c_);
  check_type(T8,VARREF(YLlstG));
  resultF3236 = T8;
  LOOP_103: {
    P a103_0,a103_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),indexF3235,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = resultF3236;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathY_),indexF3235,YPint((P)1));
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),objects_,indexF3235);
      T4 = CALL5(1,VARREF(Ynew),c_,VARREF(Yhead),T5,VARREF(Ytail),resultF3236);
      a103_0 = T3;
      a103_1 = T4;
      indexF3235 = a103_0;
      resultF3236 = a103_1;
      goto LOOP_103;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_lstT_7) {
  P args_;
  P rF3239;
  P iF3238;
  P mF3237;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  NARGS(args_, 0);
  T9 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T8 = CALL1(1,VARREF(YgooSmathY1_),T9);
  mF3237 = T8;
  T6 = CALL1(1,VARREF(YgooSmathY1_),mF3237);
  check_type(T6,VARREF(YLintG));
  iF3238 = T6;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),args_,mF3237);
  check_type(T7,VARREF(YLlstG));
  rF3239 = T7;
  LOOP_104: {
    P a104_0,a104_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3238,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF3239;
    } else {
      T3 = CALL1(1,VARREF(YgooSmathY1_),iF3238);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),args_,iF3238);
      T4 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),T5,VARREF(Ytail),rF3239);
      a104_0 = T3;
      a104_1 = T4;
      iF3238 = a104_0;
      rF3239 = a104_1;
      goto LOOP_104;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_Pdat_8) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pdat_setter_9) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_Pkey_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)0));
}

LOCCODEDEF(fun_enum_13) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_finQ_14) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nxt_15) {
  P e_;
  P x_1354F3240;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  x_1354F3240 = e_;
  T1 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T0,x_1354F3240);
  T3 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T2 = CALL1(1,VARREF(Ytail),T3);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T2,x_1354F3240);
UNLINK_STACK();
  RET(x_1354F3240);
}

LOCCODEDEF(fun_now_16) {
  P e_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_setter_17) {
  P v_,e_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_now_key_18) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_19) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_last_20) {
  P x_;
  P pxF3242;
  P xF3241;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  xF3241 = x_;
  pxF3242 = x_;
  LOOP_105: {
    P a105_0,a105_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),xF3241);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(Yhead),pxF3242);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(Ytail),xF3241);
      a105_0 = T4;
      a105_1 = xF3241;
      xF3241 = a105_0;
      pxF3242 = a105_1;
      goto LOOP_105;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_revX_21) {
  P c_;
  P tF3245;
  P rF3244;
  P lF3243;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(c_, 0);
  lF3243 = c_;
  T5 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
  T4 = CALL1(1,VARREF(YgooScolsScolYnul),T5);
  rF3244 = T4;
  LOOP_106: {
    P a106_0,a106_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),lF3243);
    if (T1 != YPfalse) {
      T0 = rF3244;
    } else {
      T3 = CALL1(1,VARREF(Ytail),lF3243);
      tF3245 = T3;
      CALL2(1,VARREF(Ytail_setter),rF3244,lF3243);
      a106_0 = tF3245;
      a106_1 = lF3243;
      lF3243 = a106_0;
      rF3244 = a106_1;
      goto LOOP_106;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_connect_22) {
  P x_,y_;
  P pF3246;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    check_type(y_,VARREF(YLlstG));
    pF3246 = y_;
    LOOP_107: {
      P a107_0;
      T4 = CALL1(1,VARREF(Ytail),pF3246);
      T3 = CALL1(1,VARREF(YgooSmacrosYnulQ),T4);
      if (T3 != YPfalse) {
        T2 = pF3246;
      } else {
        T6 = CALL1(1,VARREF(Ytail),pF3246);
        a107_0 = T6;
        pF3246 = a107_0;
        goto LOOP_107;
        T2 = T5;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_catX_23) {
  P x_,more_;
  P xF3251;
  P x_1355F3250;
  P curF3249;
  P resultF3248;
  P connectF3247;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
  T16 = fun_connect_22;
  connectF3247 = T16;
  T15 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF3248 = T15;
  curF3249 = resultF3248;
  T2 = curF3249;
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T1 = CALL2(1,connectF3247,T2,T3);
  curF3249 = T1;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  x_1355F3250 = T13;
  LOOP_108: {
    P a108_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1355F3250);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1355F3250);
      xF3251 = T12;
      T8 = curF3249;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF3251);
      T7 = CALL2(1,connectF3247,T8,T9);
      curF3249 = T7;
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1355F3250);
      a108_0 = T11;
      x_1355F3250 = a108_0;
      goto LOOP_108;
      T4 = T10;
    } else {
      T4 = YPfalse;
    }
  }
  T14 = CALL1(1,VARREF(Ytail),resultF3248);
UNLINK_STACK();
  RET(T14);
}

LOCCODEDEF(fun_lst_24) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSchrYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pair_25) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_pushX_26) {
  P c_,x_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_popX_27) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_sort_byX_28) {
  P items_,test_;
  P tmpF3256;
  P nextF3255;
  P prevF3254;
  P tmpF3253;
  P tmpF3252;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
  tmpF3252 = YPfalse;
  LOOP_109: {
    P a109_0;
    T2 = CALL1(1,VARREF(Yhead),items_);
    T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmpF3252,T2);
    if (T1 != YPfalse) {
      T0 = items_;
    } else {
      T16 = CALL1(1,VARREF(Yhead),items_);
      tmpF3253 = T16;
      prevF3254 = items_;
      T17 = CALL1(1,VARREF(Ytail),items_);
      nextF3255 = T17;
      LOOP_110: {
        P a110_0,a110_1,a110_2;
        T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),nextF3255);
        if (T4 != YPfalse) {
          a109_0 = tmpF3253;
          tmpF3252 = a109_0;
          goto LOOP_109;
          T3 = T5;
        } else {
          T9 = CALL1(1,VARREF(Yhead),nextF3255);
          T10 = CALL1(1,VARREF(Yhead),prevF3254);
          T8 = CALL2(1,test_,T9,T10);
          if (T8 != YPfalse) {
            T13 = CALL1(1,VARREF(Yhead),prevF3254);
            tmpF3256 = T13;
            T11 = CALL1(1,VARREF(Yhead),nextF3255);
            CALL2(1,VARREF(Yhead_setter),T11,prevF3254);
            T12 = CALL2(1,VARREF(Yhead_setter),tmpF3256,nextF3255);
            T7 = T12;
          } else {
            T7 = tmpF3253;
          }
          T14 = CALL1(1,VARREF(Ytail),prevF3254);
          T15 = CALL1(1,VARREF(Ytail),nextF3255);
          a110_0 = T7;
          a110_1 = T14;
          a110_2 = T15;
          tmpF3253 = a110_0;
          prevF3254 = a110_1;
          nextF3255 = a110_2;
          goto LOOP_110;
          T3 = T6;
        }
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_to_str_29) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_67),T1,LITREF(lit_68));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_assq_30) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YgooScolsSlstYassq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_assqn_31) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),T5,pos_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL3(1,VARREF(YgooScolsSlstYassqn),x_,T8,pos_);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1360_32) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_75),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_33) {
  P return_;
  P DnulF3269;
  P classF3268;
  P x_1359F3267;
  P x_1359F3266;
  P x_1359F3265;
  P x_1359F3264;
  P x_1359F3263;
  P x_1359F3262;
  P x_1359F3261;
  P supersF3260;
  P nameF3259;
  P x_1359F3258;
  P x_1360F3257;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69;
LINK_STACK();
  ARG(return_, 0);
  T69 = FUNSHELL(0,fun_x_1360_32,2);
  x_1360F3257 = T69;
  FUNINIT(x_1360F3257, 2,FREEREF(0),return_);
  x_1359F3258 = FREEREF(0);
  nameF3259 = YPfalse;
  supersF3260 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1359F3258,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F3258,LITREF(lit_75),x_1360F3257);
    x_1359F3261 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F3261,x_1360F3257);
    nameF3259 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_1359F3261);
    x_1359F3262 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3262,x_1360F3257);
    x_1359F3263 = T8;
    supersF3260 = x_1359F3263;
    x_1359F3264 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F3264,x_1360F3257);
    x_1359F3265 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3265,x_1360F3257);
    T7 = CALL1(1,VARREF(Ytail),x_1359F3264);
    x_1359F3266 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3266,x_1360F3257);
    T9 = CALL1(1,VARREF(Ytail),x_1359F3262);
    x_1359F3267 = T9;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1359F3267,x_1360F3257);
  } else {
    T13 = CALL2(1,x_1360F3257,LITREF(lit_76),x_1359F3258);
  }
  T68 = nameF3259;
  T67 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_77),T68,LITREF(lit_78));
  classF3268 = T67;
  T66 = nameF3259;
  T65 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_79),T66,LITREF(lit_80));
  DnulF3269 = T65;
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T19 = CALL1(1,VARREF(Ylst),classF3268);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T23 = supersF3260;
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_84));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_84));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T27 = CALL1(1,VARREF(Ylst),DnulF3269);
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T31 = CALL1(1,VARREF(Ylst),classF3268);
  T29 = CALL3(1,VARREF(YgooSmacrosYcat),T30,T31,LITREF(lit_84));
  T28 = CALL1(1,VARREF(Ylst),T29);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,LITREF(lit_84));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T36 = nameF3259;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,LITREF(lit_84));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T44 = CALL1(1,VARREF(Ylst),classF3268);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_90));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_88));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_91));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_89));
  T42 = CALLN(1,VARREF(YgooSmacrosYcat),7,T43,T44,T45,T46,T47,T48,LITREF(lit_84));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T33 = CALL5(1,VARREF(YgooSmacrosYcat),T34,T35,T37,T41,LITREF(lit_84));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_92));
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_18));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_93));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_94));
  T61 = CALL1(1,VARREF(Ylst),classF3268);
  T59 = CALL3(1,VARREF(YgooSmacrosYcat),T60,T61,LITREF(lit_84));
  T58 = CALL1(1,VARREF(Ylst),T59);
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,LITREF(lit_84));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_95));
  T63 = CALL1(1,VARREF(Ylst),classF3268);
  T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T62,T63,LITREF(lit_84));
  T53 = CALL1(1,VARREF(Ylst),T54);
  T64 = CALL1(1,VARREF(Ylst),DnulF3269);
  T50 = CALL5(1,VARREF(YgooSmacrosYcat),T51,T52,T53,T64,LITREF(lit_84));
  T49 = CALL1(1,VARREF(Ylst),T50);
  T14 = CALLN(1,VARREF(YgooSmacrosYcat),6,T15,T16,T24,T32,T49,LITREF(lit_84));
UNLINK_STACK();
  QRET(T14);
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

LOCCODEDEF(fun_line_of_35) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_line_of_36) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooScolsSlstYline_of));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooScolsSlstYline_pah) {
  P h_,t_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_nul_39) {
  P e_;
LINK_STACK();
  ARG(e_, 0);
UNLINK_STACK();
  RET(VARREF(YgooScolsSlstYDline_pah_nul));
}

FUNCODEDEF(YgooScolsSlstYline_pair) {
  P h_,t_,l_;
  P T0;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
  ARG(l_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSlstYLline_listG),VARREF(Yhead),h_,VARREF(Ytail),t_,VARREF(YgooScolsSlstYline_of),l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSlstYline_list) {
  P l_,elts_;
  P iF3271;
  P rF3270;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(l_, 0);
  NARGS(elts_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYnul),VARREF(YgooScolsSlstYLline_listG));
  rF3270 = T6;
  T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  iF3271 = T7;
  LOOP_111: {
    P a111_0,a111_1;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3271,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = rF3270;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),elts_,iF3271);
      T3 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T4,rF3270,l_);
      T5 = CALL2(1,VARREF(YgooSmathY_),iF3271,YPint((P)1));
      a111_0 = T3;
      a111_1 = T5;
      rF3270 = a111_0;
      iF3271 = a111_1;
      goto LOOP_111;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_copy_42) {
  P l_,src_;
  P tmpF3275;
  P tmpF3274;
  P tF3273;
  P hF3272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(l_, 0);
  ARG(src_, 1);
  T2 = CALL2(1,VARREF(YisaQ),src_,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYnulQ),src_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(Yhead),src_);
    hF3272 = T13;
    T12 = CALL1(1,VARREF(Ytail),src_);
    tF3273 = T12;
    T8 = CALL1(1,VARREF(YgooScolsSlstYline_of),hF3272);
    tmpF3274 = T8;
    if (tmpF3274 != YPfalse) {
      T7 = tmpF3274;
    } else {
      T7 = l_;
    }
    T6 = CALL2(0,FREEREF(0),T7,hF3272);
    T11 = CALL1(1,VARREF(YgooScolsSlstYline_of),tF3273);
    tmpF3275 = T11;
    if (tmpF3275 != YPfalse) {
      T10 = tmpF3275;
    } else {
      T10 = l_;
    }
    T9 = CALL2(0,FREEREF(0),T10,tF3273);
    T5 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T6,T9,l_);
    T0 = T5;
  } else {
    T0 = src_;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_line_list_of_43) {
  P ctx_,src_;
  P copyF3276;
  P T0,T1,T2;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
  T2 = FUNSHELL(1,fun_copy_42,1);
  copyF3276 = T2;
  FUNINIT(copyF3276, 1,copyF3276);
  T1 = CALL1(1,VARREF(YgooScolsSlstYline_of),ctx_);
  T0 = CALL2(1,copyF3276,T1,src_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_line_list_of_44) {
  P ctx_,src_;
LINK_STACK();
  ARG(ctx_, 0);
  ARG(src_, 1);
UNLINK_STACK();
  QRET(src_);
}

P YgooScolsSlstY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
DEFCREGS();
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPlist(1,YPPsym((P)"elts"));
  T1 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(Ylst,T0);
  lit_2 = YPPsym((P)"lst*");
  lit_3 = YPPlist(1,YPPsym((P)"elts"));
  T3 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooScolsSlstYlstT,T2);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_4 = YPPsym((P)"pair");
  lit_5 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooSmacrosYpair,T4);
  lit_6 = YPPsym((P)"assqn");
  lit_7 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T7 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsSlstYassqn,T6);
  lit_8 = YPPsym((P)"assq");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsSlstYassq,T8);
  lit_10 = YPPsym((P)"len");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_0 = YPfab_met(FUNCODEREF(fun_len_0),T10,LITREF(lit_10),LITREF(lit_11),sloc(44),YPfalse);
  T12 = VARREF_OR(YgooStypesYlen,YPfalse);
  T13 = fun_len_0;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooStypesYlen,T11);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  T14 = YPfab_sig(YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_1 = YPfab_met(FUNCODEREF(fun_elt_or_1),T14,LITREF(lit_12),LITREF(lit_13),sloc(48),YPfalse);
  T16 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T17 = fun_elt_or_1;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsScolYelt_or,T15);
  lit_14 = YPPsym((P)"elt-setter");
  lit_15 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  T18 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_2 = YPfab_met(FUNCODEREF(fun_elt_setter_2),T18,LITREF(lit_14),LITREF(lit_15),sloc(56),YPfalse);
  T20 = VARREF_OR(YgooScolsScolxYelt_setter,YPfalse);
  T21 = fun_elt_setter_2;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsScolxYelt_setter,T19);
  lit_16 = YPPsym((P)"nul?");
  lit_17 = YPPlist(1,YPPsym((P)"c"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_nulQ_3 = YPfab_met_inlineable(FUNCODEREF(fun_nulQ_3),T22,LITREF(lit_16),LITREF(lit_17),sloc(64),YPfalse);
  T24 = VARREF_OR(YgooSmacrosYnulQ,YPfalse);
  T25 = fun_nulQ_3;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSmacrosYnulQ,T23);
  lit_18 = YPPsym((P)"nul");
  lit_19 = YPPlist(1,YPPsym((P)"c"));
  T27 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T26 = YPfab_sig(YPPlist(1,T27),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_nul_4 = YPfab_met_inlineable(FUNCODEREF(fun_nul_4),T26,LITREF(lit_18),LITREF(lit_19),sloc(66),YPfalse);
  T29 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T30 = fun_nul_4;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooScolsScolYnul,T28);
  lit_20 = YPPsym((P)"fab");
  lit_21 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T32 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T31 = YPfab_sig(YPPlist(2,T32,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_5 = YPfab_met(FUNCODEREF(fun_fab_5),T31,LITREF(lit_20),LITREF(lit_21),sloc(68),YPfalse);
  T34 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T35 = fun_fab_5;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolYfab,T33);
  lit_22 = YPPsym((P)"fabs");
  lit_23 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T37 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T36 = YPfab_sig(YPPlist(1,T37),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_6 = YPfab_met(FUNCODEREF(fun_fabs_6),T36,LITREF(lit_22),LITREF(lit_23),sloc(74),YPfalse);
  T39 = VARREF_OR(YgooSchrYfabs,YPfalse);
  T40 = fun_fabs_6;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSchrYfabs,T38);
  lit_24 = YPPlist(1,YPPsym((P)"args"));
  T43 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T42 = fun_lstT_7 = YPfab_met(FUNCODEREF(fun_lstT_7),T43,LITREF(lit_2),LITREF(lit_24),sloc(81),YPfalse);
  T46 = VARREF_OR(YgooScolsSlstYlstT,YPfalse);
  T47 = fun_lstT_7;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  T44 = VARSET(YgooScolsSlstYlstT,T45);
  T41 = T44;
  return T41;
}

P YgooScolsSlstY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135;
DEFCREGS();
  lit_25 = YPPsym((P)"<lst-enum>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsScolYLenumG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_25),T1);
  VARSET(YgooScolsSlstYLlst_enumG,T0);
  lit_26 = YPPsym((P)"%dat");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_8 = YPfab_met(FUNCODEREF(fun_Pdat_8),T2,LITREF(lit_26),LITREF(lit_27),sloc(90),YPfalse);
  T4 = VARREF_OR(YgooScolsSlstYPdat,YPfalse);
  T5 = fun_Pdat_8;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooScolsSlstYPdat,T3);
  lit_28 = YPPsym((P)"%dat-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_9 = YPfab_met(FUNCODEREF(fun_Pdat_setter_9),T6,LITREF(lit_28),LITREF(lit_29),sloc(90),YPfalse);
  T8 = VARREF_OR(YgooScolsSlstYPdat_setter,YPfalse);
  T9 = fun_Pdat_setter_9;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooScolsSlstYPdat_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"%key");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_10 = YPfab_met(FUNCODEREF(fun_Pkey_10),T10,LITREF(lit_30),LITREF(lit_31),sloc(91),YPfalse);
  T12 = VARREF_OR(YgooScolsSlstYPkey,YPfalse);
  T13 = fun_Pkey_10;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooScolsSlstYPkey,T11);
  lit_32 = YPPsym((P)"%key-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_11 = YPfab_met(FUNCODEREF(fun_Pkey_setter_11),T14,LITREF(lit_32),LITREF(lit_33),sloc(91),YPfalse);
  T16 = VARREF_OR(YgooScolsSlstYPkey_setter,YPfalse);
  T17 = fun_Pkey_setter_11;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsSlstYPkey_setter,T15);
  lit_34 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T18,YPfalse,LITREF(lit_34),sloc(91),YPfalse);
  T19 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T19);
  lit_35 = YPPsym((P)"enum");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_13 = YPfab_met(FUNCODEREF(fun_enum_13),T20,LITREF(lit_35),LITREF(lit_36),sloc(92),YPfalse);
  T22 = VARREF_OR(YgooScolsScolYenum,YPfalse);
  T23 = fun_enum_13;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYenum,T21);
  lit_37 = YPPsym((P)"fin?");
  lit_38 = YPPlist(1,YPPsym((P)"e"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_14 = YPfab_met(FUNCODEREF(fun_finQ_14),T24,LITREF(lit_37),LITREF(lit_38),sloc(94),YPfalse);
  T26 = VARREF_OR(YgooScolsScolYfinQ,YPfalse);
  T27 = fun_finQ_14;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooScolsScolYfinQ,T25);
  lit_39 = YPPsym((P)"nxt");
  lit_40 = YPPlist(1,YPPsym((P)"e"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_15 = YPfab_met(FUNCODEREF(fun_nxt_15),T28,LITREF(lit_39),LITREF(lit_40),sloc(96),YPfalse);
  T30 = VARREF_OR(YgooScolsScolYnxt,YPfalse);
  T31 = fun_nxt_15;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsScolYnxt,T29);
  lit_41 = YPPsym((P)"now");
  lit_42 = YPPlist(1,YPPsym((P)"e"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_16 = YPfab_met(FUNCODEREF(fun_now_16),T32,LITREF(lit_41),LITREF(lit_42),sloc(98),YPfalse);
  T34 = VARREF_OR(YgooScolsScolYnow,YPfalse);
  T35 = fun_now_16;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsScolYnow,T33);
  lit_43 = YPPsym((P)"now-setter");
  lit_44 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T36 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_17 = YPfab_met(FUNCODEREF(fun_now_setter_17),T36,LITREF(lit_43),LITREF(lit_44),sloc(100),YPfalse);
  T38 = VARREF_OR(YgooScolsScolYnow_setter,YPfalse);
  T39 = fun_now_setter_17;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYnow_setter,T37);
  lit_45 = YPPsym((P)"now-key");
  lit_46 = YPPlist(1,YPPsym((P)"e"));
  T40 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_18 = YPfab_met(FUNCODEREF(fun_now_key_18),T40,LITREF(lit_45),LITREF(lit_46),sloc(102),YPfalse);
  T42 = VARREF_OR(YgooScolsScolYnow_key,YPfalse);
  T43 = fun_now_key_18;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsScolYnow_key,T41);
  lit_47 = YPPsym((P)"add");
  lit_48 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T44 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_19 = YPfab_met(FUNCODEREF(fun_add_19),T44,LITREF(lit_47),LITREF(lit_48),sloc(106),YPfalse);
  T46 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T47 = fun_add_19;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsScolYadd,T45);
  lit_49 = YPPsym((P)"last");
  lit_50 = YPPlist(1,YPPsym((P)"x"));
  T48 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_20 = YPfab_met(FUNCODEREF(fun_last_20),T48,LITREF(lit_49),LITREF(lit_50),sloc(109),YPfalse);
  T50 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T51 = fun_last_20;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSmacrosYlast,T49);
  lit_51 = YPPsym((P)"rev!");
  lit_52 = YPPlist(1,YPPsym((P)"c"));
  T52 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_21 = YPfab_met(FUNCODEREF(fun_revX_21),T52,LITREF(lit_51),LITREF(lit_52),sloc(113),YPfalse);
  T54 = VARREF_OR(YgooSmacrosYrevX,YPfalse);
  T55 = fun_revX_21;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSmacrosYrevX,T53);
  lit_53 = YPPsym((P)"cat!");
  lit_54 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_55 = YPPsym((P)"connect");
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T57 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_22 = YPfab_met(FUNCODEREF(fun_connect_22),T57,LITREF(lit_55),LITREF(lit_56),sloc(122),YPfalse);
  T56 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_23 = YPfab_met(FUNCODEREF(fun_catX_23),T56,LITREF(lit_53),LITREF(lit_54),sloc(121),YPfalse);
  T59 = VARREF_OR(YgooScolsSseqxYcatX,YPfalse);
  T60 = fun_catX_23;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YgooScolsSseqxYcatX,T58);
  lit_57 = YPPlist(1,YPPsym((P)"objects"));
  T61 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_24 = YPfab_met(FUNCODEREF(fun_lst_24),T61,LITREF(lit_0),LITREF(lit_57),sloc(139),YPfalse);
  T63 = VARREF_OR(Ylst,YPfalse);
  T64 = fun_lst_24;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(Ylst,T62);
  lit_58 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T65 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_25 = YPfab_met(FUNCODEREF(fun_pair_25),T65,LITREF(lit_4),LITREF(lit_58),sloc(142),YPfalse);
  T67 = VARREF_OR(YgooSmacrosYpair,YPfalse);
  T68 = fun_pair_25;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSmacrosYpair,T66);
  lit_59 = YPPsym((P)"push!");
  lit_60 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T69 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_26 = YPfab_met(FUNCODEREF(fun_pushX_26),T69,LITREF(lit_59),LITREF(lit_60),sloc(145),YPfalse);
  T71 = VARREF_OR(YgooScolsSseqxYpushX,YPfalse);
  T72 = fun_pushX_26;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsSseqxYpushX,T70);
  lit_61 = YPPsym((P)"pop!");
  lit_62 = YPPlist(1,YPPsym((P)"c"));
  T74 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T74,Ynil);
  fun_popX_27 = YPfab_met(FUNCODEREF(fun_popX_27),T73,LITREF(lit_61),LITREF(lit_62),sloc(148),YPfalse);
  T76 = VARREF_OR(YgooScolsSseqxYpopX,YPfalse);
  T77 = fun_popX_27;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooScolsSseqxYpopX,T75);
  lit_63 = YPPsym((P)"sort-by!");
  lit_64 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  T78 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_28 = YPfab_met(FUNCODEREF(fun_sort_byX_28),T78,LITREF(lit_63),LITREF(lit_64),sloc(152),YPfalse);
  T80 = VARREF_OR(YgooScolsSseqYsort_byX,YPfalse);
  T81 = fun_sort_byX_28;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooScolsSseqYsort_byX,T79);
  lit_65 = YPPsym((P)"to-str");
  lit_66 = YPPlist(1,YPPsym((P)"x"));
  lit_67 = YPsb((P)"(");
  lit_68 = YPsb((P)")");
  T82 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_29 = YPfab_met(FUNCODEREF(fun_to_str_29),T82,LITREF(lit_65),LITREF(lit_66),sloc(167),YPfalse);
  T84 = VARREF_OR(YgooSanyYto_str,YPfalse);
  T85 = fun_to_str_29;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSanyYto_str,T83);
  lit_69 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_30 = YPfab_met(FUNCODEREF(fun_assq_30),T86,LITREF(lit_8),LITREF(lit_69),sloc(174),YPfalse);
  T88 = VARREF_OR(YgooScolsSlstYassq,YPfalse);
  T89 = fun_assq_30;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooScolsSlstYassq,T87);
  lit_70 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T90 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_assqn_31 = YPfab_met(FUNCODEREF(fun_assqn_31),T90,LITREF(lit_6),LITREF(lit_70),sloc(181),YPfalse);
  T92 = VARREF_OR(YgooScolsSlstYassqn,YPfalse);
  T93 = fun_assqn_31;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooScolsSlstYassqn,T91);
  lit_71 = YPPlist(1,YPPsym((P)"exp"));
  lit_72 = YPPlist(1,YPPsym((P)"return"));
  lit_73 = YPPsym((P)"x-1360");
  lit_74 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_75 = YPPsym((P)"def-list");
  lit_76 = YPsb((P)"Match Pattern Failure");
  lit_77 = YPsb((P)"<");
  lit_78 = YPsb((P)">");
  lit_79 = YPsb((P)"$");
  lit_80 = YPsb((P)"-nul");
  lit_81 = YPPsym((P)"seq");
  lit_82 = YPPsym((P)"dc");
  lit_83 = YPPsym((P)"<lst>");
  lit_84 = Ynil;
  lit_85 = YPPsym((P)"dv");
  lit_86 = YPPsym((P)"new");
  lit_87 = YPPsym((P)"df");
  lit_88 = YPPsym((P)"h");
  lit_89 = YPPsym((P)"t");
  lit_90 = YPPsym((P)"head");
  lit_91 = YPPsym((P)"tail");
  lit_92 = YPPsym((P)"dm");
  lit_93 = YPPsym((P)"e");
  lit_94 = YPPsym((P)"t=");
  lit_95 = YPPsym((P)"=>");
  T96 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_32 = YPfab_met(FUNCODEREF(fun_x_1360_32),T96,LITREF(lit_73),LITREF(lit_74),YPfalse,YPfalse);
  T95 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPfab_met(FUNCODEREF(fun_33),T95,YPfalse,LITREF(lit_72),YPfalse,YPfalse);
  T94 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPfab_met(FUNCODEREF(fun_34),T94,YPfalse,LITREF(lit_71),YPfalse,YPfalse);
  T97 = fun_34;
  YPmacro(YPPsym((P)"goo/cols/lst"),YPPsym((P)"def-list"),T97);
  lit_96 = YPPsym((P)"line-of");
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T98 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_35 = YPfab_met(FUNCODEREF(fun_line_of_35),T98,LITREF(lit_96),LITREF(lit_97),sloc(197),YPfalse);
  T100 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T101 = fun_line_of_35;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooScolsSlstYline_of,T99);
  lit_98 = YPPsym((P)"<line>");
  T103 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLmagG),Ynil);
  T102 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T103);
  VARSET(YgooScolsSlstYLlineG,T102);
  lit_99 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPfab_sig(YPPlist(1,VARREF(YgooScolsSlstYLlineG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_line_of_36 = YPfab_met(FUNCODEREF(fun_line_of_36),T104,LITREF(lit_96),LITREF(lit_99),sloc(200),YPfalse);
  T106 = VARREF_OR(YgooScolsSlstYline_of,YPfalse);
  T107 = fun_line_of_36;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooScolsSlstYline_of,T105);
  lit_100 = YPPlist(1,YPPsym((P)"_x"));
  T108 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPfab_met(FUNCODEREF(fun_37),T108,YPfalse,LITREF(lit_100),sloc(200),YPfalse);
  T109 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T110 = fun_37;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooScolsSlstYLlineG),VARREF(YgooScolsSlstYline_of),YPfalse,T109,T110);
  lit_101 = YPPsym((P)"<line-pah>");
  T113 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooScolsSlstYLlineG),Ynil);
  T112 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLlstG),T113);
  T111 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_101),T112);
  VARSET(YgooScolsSlstYLline_pahG,T111);
  T114 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSlstYLline_pahG));
  VARSET(YgooScolsSlstYDline_pah_nul,T114);
  lit_102 = YPPsym((P)"line-pah");
  lit_103 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T115 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pah = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pah),T115,LITREF(lit_102),LITREF(lit_103),sloc(202),YPfalse);
  T116 = YgooScolsSlstYline_pah;
  VARSET(YgooScolsSlstYline_pah,T116);
  lit_104 = YPPlist(1,YPPsym((P)"e"));
  T118 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSlstYLline_pahG));
  T117 = YPfab_sig(YPPlist(1,T118),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLline_pahG),Ynil);
  fun_nul_39 = YPfab_met(FUNCODEREF(fun_nul_39),T117,LITREF(lit_18),LITREF(lit_104),sloc(202),YPfalse);
  T120 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T121 = fun_nul_39;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YgooScolsScolYnul,T119);
  VARSET(YgooScolsSlstYLline_listG,VARREF(YgooScolsSlstYLline_pahG));
  lit_105 = YPPsym((P)"line-pair");
  lit_106 = YPPlist(3,YPPsym((P)"h"),YPPsym((P)"t"),YPPsym((P)"l"));
  T122 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_pair = YPfab_met(FUNCODEREF(YgooScolsSlstYline_pair),T122,LITREF(lit_105),LITREF(lit_106),sloc(206),YPfalse);
  T123 = YgooScolsSlstYline_pair;
  VARSET(YgooScolsSlstYline_pair,T123);
  lit_107 = YPPsym((P)"line-list");
  lit_108 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"elts"));
  T124 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooScolsSlstYline_list = YPfab_met(FUNCODEREF(YgooScolsSlstYline_list),T124,LITREF(lit_107),LITREF(lit_108),sloc(208),YPfalse);
  T125 = YgooScolsSlstYline_list;
  VARSET(YgooScolsSlstYline_list,T125);
  lit_109 = YPPsym((P)"line-list-of");
  lit_110 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  lit_111 = YPPsym((P)"copy");
  lit_112 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"src"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_copy_42 = YPfab_met(FUNCODEREF(fun_copy_42),T127,LITREF(lit_111),LITREF(lit_112),sloc(215),YPfalse);
  T126 = YPfab_sig(YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_line_list_of_43 = YPfab_met(FUNCODEREF(fun_line_list_of_43),T126,LITREF(lit_109),LITREF(lit_110),sloc(214),YPfalse);
  T129 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T130 = fun_line_list_of_43;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YgooScolsSlstYline_list_of,T128);
  lit_113 = YPPlist(2,YPPsym((P)"ctx"),YPPsym((P)"src"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_line_list_of_44 = YPfab_met(FUNCODEREF(fun_line_list_of_44),T131,LITREF(lit_109),LITREF(lit_113),sloc(221),YPfalse);
  T133 = VARREF_OR(YgooScolsSlstYline_list_of,YPfalse);
  T134 = fun_line_list_of_44;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YgooScolsSlstYline_list_of,T132);
  T135 = YPfalse;
  return T135;
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
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
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
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
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
  {"len-setter", &module_info_gooScolsScolx, NULL},
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
  {"zap!", &module_info_gooScolsScolx, NULL},
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
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
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
  {"del!", &module_info_gooScolsScolx, NULL},
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
  {"pop!", &module_info_gooScolsSseqx, NULL},
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
  {"elt!", &module_info_gooScolsScolx, NULL},
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
  {"cat!", &module_info_gooScolsSseqx, NULL},
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
  {"add!", &module_info_gooScolsScolx, NULL},
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
  {"alter", &module_info_gooScolsSseqx, NULL},
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
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
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
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
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
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
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
  {"fill!", &module_info_gooScolsScolx, NULL},
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
  {"ins!", &module_info_gooScolsSseqx, NULL},
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
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
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
  {"push!", &module_info_gooScolsSseqx, NULL},
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
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"<line-list>", CVAR, &YgooScolsSlstYLline_listG},
  {"---main-0---", PVAR, NULL},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"line-list-of", CVAR, &YgooScolsSlstYline_list_of},
  {"line-list", CVAR, &YgooScolsSlstYline_list},
  {"---main-1---", PVAR, NULL},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"line-pair", CVAR, &YgooScolsSlstYline_pair},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"<line>", CVAR, &YgooScolsSlstYLlineG},
  {"<line-pah>", CVAR, &YgooScolsSlstYLline_pahG},
  {"line-pah", CVAR, &YgooScolsSlstYline_pah},
  {"lst*", CVAR, &YgooScolsSlstYlstT},
  {"$line-pah-nul", CVAR, &YgooScolsSlstYDline_pah_nul},
  {"line-of", CVAR, &YgooScolsSlstYline_of},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"def-list", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"nil", NULL},
  {"head-setter", NULL},
  {"head", NULL},
  {"<line-list>", NULL},
  {"line-list-of", NULL},
  {"<lst>", NULL},
  {"line-list", NULL},
  {"assq", NULL},
  {"line-pair", NULL},
  {"<list>", NULL},
  {"assqn", NULL},
  {"pair", NULL},
  {"<line>", NULL},
  {"lst*", NULL},
  {"tail-setter", NULL},
  {"lst", NULL},
  {"line-of", NULL},
  {"tail", NULL},
  {"list", NULL},
  {"def-list", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSlst;
MODULE_INFO module_info_gooScolsSlst = {
  "goo/cols/lst",
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
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);

/* EXPRESSION: */

extern void load_module_gooScolsSlst (void);

void load_module_gooScolsSlst (void) {
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
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();
  (P)YgooScolsSlstY___main_1___();

}

/* END OF GENERATED CODE. */
