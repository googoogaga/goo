/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/port");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOelt,"goo/boot","@elt");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPtrue,"goo/boot","%true");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ylst,"goo/boot","lst");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ytup,"goo/boot","tup");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYexp,"goo/math","exp");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YOallQ,"goo/boot","@all?");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YtT,"goo/boot","t*");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yopts_count,"goo/boot","opts-count");
DEF(YgooSioSportYput,"goo/io/port","put");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YOlit,"goo/boot","@lit");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YLbignumG,"goo/boot","<bignum>");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YLintG,"goo/boot","<int>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YOrev,"goo/boot","@rev");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Ysyntax_error,"goo/boot","syntax-error");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYA,"goo/math","+");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YOnew,"goo/boot","@new");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLboxG,"goo/boot","<box>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YOfold,"goo/boot","@fold");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSlogYE,"goo/log","=");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(Ynil,"goo/boot","nil");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_54);
DEFLIT(lit_67);
DEFLIT(lit_48);
DEFLIT(lit_70);
DEFLIT(lit_14);
DEFLIT(lit_89);
DEFLIT(lit_61);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_17);
DEFLIT(lit_69);
DEFLIT(lit_8);
DEFLIT(lit_74);
DEFLIT(lit_75);
DEFLIT(lit_51);
DEFLIT(lit_26);
DEFLIT(lit_29);
DEFLIT(lit_50);
DEFLIT(lit_37);
DEFLIT(lit_85);
DEFLIT(lit_87);
DEFLIT(lit_80);
DEFLIT(lit_43);
DEFLIT(lit_39);
DEFLIT(lit_81);
DEFLIT(lit_22);
DEFLIT(lit_77);
DEFLIT(lit_21);
DEFLIT(lit_44);
DEFLIT(lit_63);
DEFLIT(lit_55);
DEFLIT(lit_12);
DEFLIT(lit_90);
DEFLIT(lit_5);
DEFLIT(lit_58);
DEFLIT(lit_18);
DEFLIT(lit_53);
DEFLIT(lit_46);
DEFLIT(lit_52);
DEFLIT(lit_42);
DEFLIT(lit_71);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_86);
DEFLIT(lit_88);
DEFLIT(lit_57);
DEFLIT(lit_79);
DEFLIT(lit_35);
DEFLIT(lit_91);
DEFLIT(lit_83);
DEFLIT(lit_40);
DEFLIT(lit_10);
DEFLIT(lit_24);
DEFLIT(lit_32);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_84);
DEFLIT(lit_68);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_45);
DEFLIT(lit_4);
DEFLIT(lit_65);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_15);
DEFLIT(lit_6);
DEFLIT(lit_36);
DEFLIT(lit_56);
DEFLIT(lit_34);
DEFLIT(lit_72);
DEFLIT(lit_49);
DEFLIT(lit_38);
DEFLIT(lit_73);
DEFLIT(lit_31);
DEFLIT(lit_33);
DEFLIT(lit_62);
DEFLIT(lit_78);
DEFLIT(lit_20);
DEFLIT(lit_25);
DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_47);
DEFLIT(lit_76);
DEFLIT(lit_23);
DEFLIT(lit_3);
DEFLIT(lit_82);
DEFLIT(lit_30);

/* FUNCTIONS: */

LOCFOR(fun_port_line_0);
LOCFOR(fun_port_line_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_port_filename_3);
LOCFOR(fun_4);
LOCFOR(fun_port_handle_5);
LOCFOR(fun_close_6);
LOCFOR(fun_port_guts_7);
LOCFOR(fun_port_guts_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_port_index_10);
LOCFOR(fun_port_index_setter_11);
LOCFOR(fun_12);
LOCFOR(fun_gets_13);
LOCFOR(fun_open_14);
LOCFOR(fun_open_15);
LOCFOR(fun_close_16);
LOCFOR(fun_close_17);
LOCFOR(fun_x_1429_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_get_21);
LOCFOR(fun_peek_22);
LOCFOR(fun_readyQ_23);
LOCFOR(fun_newline_24);
LOCFOR(fun_force_out_25);
LOCFOR(fun_put_26);
LOCFOR(fun_puts_27);
LOCFOR(fun_port_contents_28);
LOCFOR(fun_open_29);
LOCFOR(fun_open_30);
LOCFOR(fun_peek_31);
LOCFOR(fun_get_32);
LOCFOR(fun_readyQ_33);
LOCFOR(fun_put_34);
LOCFOR(fun_puts_35);
LOCFOR(fun_x_1433_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();
extern P YgooSioSportY___main_2___ ();

/* C-FORMS: */


/* FUNCTION CODES: */

LOCCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_2) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPint((P)1));
}

LOCCODEDEF(fun_port_filename_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_filename));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_4) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_32));
}

LOCCODEDEF(fun_port_handle_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_close_6) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_port_guts_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_port_guts_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_32));
}

LOCCODEDEF(fun_port_index_10) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_port_index_setter_11) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
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

LOCCODEDEF(fun_gets_13) {
  P port_;
  P tmpF3630;
  P cF3629;
  P resF3628;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(port_, 0);
  resF3628 = Ynil;
  T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3629 = T9;
  LOOP_150: {
    P a150_0,a150_1;
    T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3629);
    tmpF3630 = T3;
    if (tmpF3630 != YPfalse) {
      T1 = tmpF3630;
    } else {
      T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3629,YPchr((P)10));
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3628);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T5);
      T0 = T4;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),cF3629,resF3628);
      T8 = CALL1(1,VARREF(YgooSioSportYget),port_);
      a150_0 = T7;
      a150_1 = T8;
      resF3628 = a150_0;
      cF3629 = a150_1;
      goto LOOP_150;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_open_14) {
  P t_,filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
  T2 = (P)YPsu(filename_);
  T1 = (P)YgooSioSportYPopen_in_file(T2);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_filename),filename_,VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_open_15) {
  P t_,filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
  T2 = (P)YPsu(filename_);
  T1 = (P)YgooSioSportYPopen_out_file(T2);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_filename),filename_,VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_close_16) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_close_17) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1429_18) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_62),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_19) {
  P return_;
  P x_1428F3643;
  P x_1428F3642;
  P x_1428F3641;
  P x_1428F3640;
  P x_1428F3639;
  P x_1428F3638;
  P x_1428F3637;
  P x_1428F3636;
  P bodyF3635;
  P portF3634;
  P nameF3633;
  P x_1428F3632;
  P x_1429F3631;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
LINK_STACK();
  ARG(return_, 0);
  T50 = FUNSHELL(0,fun_x_1429_18,2);
  x_1429F3631 = T50;
  FUNINIT(x_1429F3631, 2,FREEREF(0),return_);
  x_1428F3632 = FREEREF(0);
  nameF3633 = YPfalse;
  portF3634 = YPfalse;
  bodyF3635 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1428F3632,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1428F3632,LITREF(lit_62),x_1429F3631);
    x_1428F3636 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F3636,x_1429F3631);
    x_1428F3637 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F3637,x_1429F3631);
    nameF3633 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1428F3637);
    x_1428F3638 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F3638,x_1429F3631);
    portF3634 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1428F3638);
    x_1428F3639 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F3639,x_1429F3631);
    x_1428F3640 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3640,x_1429F3631);
    T8 = CALL1(1,VARREF(Ytail),x_1428F3639);
    x_1428F3641 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3641,x_1429F3631);
    T14 = CALL1(1,VARREF(Ytail),x_1428F3636);
    x_1428F3642 = T14;
    bodyF3635 = x_1428F3642;
    x_1428F3643 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3643,x_1429F3631);
  } else {
    T16 = CALL2(1,x_1429F3631,LITREF(lit_63),x_1428F3632);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T24 = nameF3633;
  T23 = CALL1(1,VARREF(Ylst),T24);
  T25 = CALL1(1,VARREF(Ylst),YPfalse);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T25,LITREF(lit_65));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_65));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T36 = nameF3633;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = portF3634;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T37,LITREF(lit_65));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = bodyF3635;
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T39,LITREF(lit_65));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T44 = nameF3633;
  T43 = CALL1(1,VARREF(Ylst),T44);
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T49 = nameF3633;
  T48 = CALL1(1,VARREF(Ylst),T49);
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T48,LITREF(lit_65));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,LITREF(lit_65));
  T40 = CALL1(1,VARREF(Ylst),T41);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T40,LITREF(lit_65));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T26,LITREF(lit_65));
UNLINK_STACK();
  QRET(T17);
}

LOCCODEDEF(fun_20) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_19,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_get_21) {
  P port_;
  P cF3647;
  P tF3646;
  P xF3645;
  P xF3644;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T6 = (P)YgooSioSportYPget(T7);
  xF3644 = T6;
  xF3645 = xF3644;
  tF3646 = (P)2;
  T5 = (P)YPiLL(xF3645,(P)2);
  T4 = (P)YPiv(T5,tF3646);
  cF3647 = T4;
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),cF3647,YPchr((P)10));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSportYport_line),port_);
    T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T2,port_);
  } else {
  }
UNLINK_STACK();
  RET(cF3647);
}

LOCCODEDEF(fun_peek_22) {
  P port_;
  P tF3650;
  P xF3649;
  P xF3648;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YgooSioSportYPpeek(T3);
  xF3648 = T2;
  xF3649 = xF3648;
  tF3650 = (P)2;
  T1 = (P)YPiLL(xF3649,(P)2);
  T0 = (P)YPiv(T1,tF3650);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_readyQ_23) {
  P port_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YgooSioSportYPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_newline_24) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_force_out_25) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YgooSioSportYPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_put_26) {
  P port_,c_;
  P xF3652;
  P xF3651;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF3651 = c_;
  xF3652 = xF3651;
  T2 = (P)YPiGG(xF3652,(P)2);
  T0 = (P)YgooSioSportYPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_puts_27) {
  P port_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YgooSioSportYPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_port_contents_28) {
  P port_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_open_29) {
  P t_,dat_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_open_30) {
  P t_,dat_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),dat_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_out_portG),VARREF(YgooSioSportYport_guts),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_peek_31) {
  P port_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSchrYeof_object));
    T0 = T5;
  } else {
    T7 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T8 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),T7,T8);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_get_32) {
  P port_;
  P resF3653;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSchrYeof_object));
    T0 = T5;
  } else {
    T9 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T10 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),T9,T10);
    resF3653 = T8;
    T7 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,YPint((P)1));
    CALL2(1,VARREF(YgooSioSportYport_index_setter),T6,port_);
    T0 = resF3653;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_readyQ_33) {
  P port_;
LINK_STACK();
  ARG(port_, 0);
UNLINK_STACK();
  RET(YPtrue);
}

LOCCODEDEF(fun_put_34) {
  P port_,c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYaddX),T2,c_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_puts_35) {
  P port_,s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T2,s_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_x_1433_36) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_91),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_37) {
  P return_;
  P x_1432F3660;
  P x_1432F3659;
  P x_1432F3658;
  P bodyF3657;
  P nameF3656;
  P x_1432F3655;
  P x_1433F3654;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(return_, 0);
  T27 = FUNSHELL(0,fun_x_1433_36,2);
  x_1433F3654 = T27;
  FUNINIT(x_1433F3654, 2,FREEREF(0),return_);
  x_1432F3655 = FREEREF(0);
  nameF3656 = YPfalse;
  bodyF3657 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1432F3655,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1432F3655,LITREF(lit_91),x_1433F3654);
    x_1432F3658 = T6;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1432F3658,x_1433F3654);
    nameF3656 = T4;
    T5 = CALL1(1,VARREF(Ytail),x_1432F3658);
    x_1432F3659 = T5;
    bodyF3657 = x_1432F3659;
    x_1432F3660 = Ynil;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1432F3660,x_1433F3654);
  } else {
    T7 = CALL2(1,x_1433F3654,LITREF(lit_63),x_1432F3655);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T15 = nameF3656;
  T14 = CALL1(1,VARREF(Ylst),T15);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_65));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T16,LITREF(lit_65));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_65));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T21 = bodyF3657;
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T26 = nameF3656;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_65));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T8 = CALL5(1,VARREF(YgooSmacrosYcat),T9,T10,T21,T22,LITREF(lit_65));
UNLINK_STACK();
  QRET(T8);
}

LOCCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
DEFCREGS();
  lit_0 = YPPsym((P)"<port>");
  T1 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"name"));
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
  T3 = YPfab_sig(YPPlist(2,T4,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLportG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_1),LITREF(lit_2),YPfalse);
  VARSET(YgooSioSportYopen,T2);
  lit_3 = YPPsym((P)"close");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = YPfab_gen(T6,LITREF(lit_3),LITREF(lit_4),YPfalse);
  VARSET(YgooSioSportYclose,T5);
  lit_5 = YPPsym((P)"<in-port>");
  T8 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLportG),Ynil);
  T7 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_6 = YPPsym((P)"port-line");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPfab_met(FUNCODEREF(fun_port_line_0),T9,LITREF(lit_6),LITREF(lit_7),sloc(35),YPfalse);
  T11 = VARREF_OR(YgooSioSportYport_line,YPfalse);
  T12 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooSioSportYport_line,T10);
  lit_8 = YPPsym((P)"port-line-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPfab_met(FUNCODEREF(fun_port_line_setter_1),T13,LITREF(lit_8),LITREF(lit_9),sloc(35),YPfalse);
  T15 = VARREF_OR(YgooSioSportYport_line_setter,YPfalse);
  T16 = fun_port_line_setter_1;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooSioSportYport_line_setter,T14);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPfab_met(FUNCODEREF(fun_2),T17,YPfalse,LITREF(lit_10),sloc(35),YPfalse);
  T18 = fun_2;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T18);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPlist(1,YPPsym((P)"port"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T19 = YPfab_gen(T20,LITREF(lit_11),LITREF(lit_12),YPfalse);
  VARSET(YgooSioSportYget,T19);
  lit_13 = YPPsym((P)"gets");
  lit_14 = YPPlist(1,YPPsym((P)"port"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T21 = YPfab_gen(T22,LITREF(lit_13),LITREF(lit_14),YPfalse);
  VARSET(YgooSioSportYgets,T21);
  lit_15 = YPPsym((P)"peek");
  lit_16 = YPPlist(1,YPPsym((P)"port"));
  T26 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T25 = YPfab_gen(T26,LITREF(lit_15),LITREF(lit_16),YPfalse);
  T24 = VARSET(YgooSioSportYpeek,T25);
  T23 = T24;
  return T23;
}

P YgooSioSportY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
DEFCREGS();
  lit_17 = YPPsym((P)"ready?");
  lit_18 = YPPlist(1,YPPsym((P)"port"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_17),LITREF(lit_18),YPfalse);
  VARSET(YgooSioSportYreadyQ,T0);
  lit_19 = YPPsym((P)"<out-port>");
  T3 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLportG),Ynil);
  T2 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_19),T3);
  VARSET(YgooSioSportYLout_portG,T2);
  lit_20 = YPPsym((P)"newline");
  lit_21 = YPPlist(1,YPPsym((P)"port"));
  T5 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooSioSportYnewline,T4);
  lit_22 = YPPsym((P)"force-out");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooSioSportYforce_out,T6);
  lit_24 = YPPsym((P)"put");
  lit_25 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_24),LITREF(lit_25),YPfalse);
  VARSET(YgooSioSportYput,T8);
  lit_26 = YPPsym((P)"puts");
  lit_27 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_26),LITREF(lit_27),YPfalse);
  VARSET(YgooSioSportYputs,T10);
  lit_28 = YPPsym((P)"<file-port>");
  T13 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLportG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_28),T13);
  VARSET(YgooSioSportYLfile_portG,T12);
  lit_29 = YPPsym((P)"port-filename");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_filename_3 = YPfab_met(FUNCODEREF(fun_port_filename_3),T14,LITREF(lit_29),LITREF(lit_30),sloc(35),YPfalse);
  T16 = VARREF_OR(YgooSioSportYport_filename,YPfalse);
  T17 = fun_port_filename_3;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSioSportYport_filename,T15);
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  lit_32 = YPsb((P)"");
  T18 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPfab_met(FUNCODEREF(fun_4),T18,YPfalse,LITREF(lit_31),sloc(35),YPfalse);
  T19 = fun_4;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLfile_portG),VARREF(YgooSioSportYport_filename),YPfalse,VARREF(YLstrG),T19);
  lit_33 = YPPsym((P)"port-handle");
  lit_34 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_5 = YPfab_met(FUNCODEREF(fun_port_handle_5),T20,LITREF(lit_33),LITREF(lit_34),sloc(35),YPfalse);
  T22 = VARREF_OR(YgooSioSportYport_handle,YPfalse);
  T23 = fun_port_handle_5;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSportYport_handle,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLfile_portG),VARREF(YgooSioSportYport_handle),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_35 = YPPlist(1,YPPsym((P)"port"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_6 = YPfab_met(FUNCODEREF(fun_close_6),T24,LITREF(lit_3),LITREF(lit_35),sloc(60),YPfalse);
  T26 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T27 = fun_close_6;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSioSportYclose,T25);
  lit_36 = YPPsym((P)"<file-in-port>");
  T30 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLin_portG),Ynil);
  T29 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLfile_portG),T30);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_36),T29);
  VARSET(YgooSioSportYLfile_in_portG,T28);
  lit_37 = YPPsym((P)"<file-out-port>");
  T33 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLout_portG),Ynil);
  T32 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLfile_portG),T33);
  T31 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_37),T32);
  VARSET(YgooSioSportYLfile_out_portG,T31);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_38 = YPPsym((P)"<str-port>");
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLportG),Ynil);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_38),T35);
  VARSET(YgooSioSportYLstr_portG,T34);
  lit_39 = YPPsym((P)"port-guts");
  lit_40 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_7 = YPfab_met(FUNCODEREF(fun_port_guts_7),T36,LITREF(lit_39),LITREF(lit_40),sloc(71),YPfalse);
  T38 = VARREF_OR(YgooSioSportYport_guts,YPfalse);
  T39 = fun_port_guts_7;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSportYport_guts,T37);
  lit_41 = YPPsym((P)"port-guts-setter");
  lit_42 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPfab_sig(YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_8 = YPfab_met(FUNCODEREF(fun_port_guts_setter_8),T40,LITREF(lit_41),LITREF(lit_42),sloc(71),YPfalse);
  T42 = VARREF_OR(YgooSioSportYport_guts_setter,YPfalse);
  T43 = fun_port_guts_setter_8;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSioSportYport_guts_setter,T41);
  lit_43 = YPPlist(1,YPPsym((P)"_x"));
  T44 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPfab_met(FUNCODEREF(fun_9),T44,YPfalse,LITREF(lit_43),sloc(71),YPfalse);
  T45 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T45);
  lit_44 = YPPsym((P)"port-contents");
  lit_45 = YPPlist(1,YPPsym((P)"port"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T46 = YPfab_gen(T47,LITREF(lit_44),LITREF(lit_45),YPfalse);
  VARSET(YgooSioSportYport_contents,T46);
  lit_46 = YPPsym((P)"<str-in-port>");
  T50 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLin_portG),Ynil);
  T49 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLstr_portG),T50);
  T48 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_46),T49);
  VARSET(YgooSioSportYLstr_in_portG,T48);
  lit_47 = YPPsym((P)"port-index");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_10 = YPfab_met(FUNCODEREF(fun_port_index_10),T51,LITREF(lit_47),LITREF(lit_48),sloc(73),YPfalse);
  T53 = VARREF_OR(YgooSioSportYport_index,YPfalse);
  T54 = fun_port_index_10;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSioSportYport_index,T52);
  lit_49 = YPPsym((P)"port-index-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_11 = YPfab_met(FUNCODEREF(fun_port_index_setter_11),T55,LITREF(lit_49),LITREF(lit_50),sloc(73),YPfalse);
  T57 = VARREF_OR(YgooSioSportYport_index_setter,YPfalse);
  T58 = fun_port_index_setter_11;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSioSportYport_index_setter,T56);
  lit_51 = YPPlist(1,YPPsym((P)"_x"));
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPfab_met(FUNCODEREF(fun_12),T59,YPfalse,LITREF(lit_51),sloc(73),YPfalse);
  T60 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T60);
  lit_52 = YPPsym((P)"<str-out-port>");
  T63 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLout_portG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSioSportYLstr_portG),T63);
  T61 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_52),T62);
  VARSET(YgooSioSportYLstr_out_portG,T61);
  T64 = YPfalse;
  return T64;
}

P YgooSioSportY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100;
DEFCREGS();
  lit_53 = YPPlist(1,YPPsym((P)"port"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPfab_met(FUNCODEREF(fun_gets_13),T0,LITREF(lit_13),LITREF(lit_53),sloc(80),YPfalse);
  T2 = VARREF_OR(YgooSioSportYgets,YPfalse);
  T3 = fun_gets_13;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSportYgets,T1);
  lit_54 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T5 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T4 = YPfab_sig(YPPlist(2,T5,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPfab_met(FUNCODEREF(fun_open_14),T4,LITREF(lit_1),LITREF(lit_54),sloc(86),YPfalse);
  T7 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T8 = fun_open_14;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooSioSportYopen,T6);
  lit_55 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T10 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T9 = YPfab_sig(YPPlist(2,T10,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_15 = YPfab_met(FUNCODEREF(fun_open_15),T9,LITREF(lit_1),LITREF(lit_55),sloc(91),YPfalse);
  T12 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T13 = fun_open_15;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSportYopen,T11);
  lit_56 = YPPlist(1,YPPsym((P)"port"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_16 = YPfab_met(FUNCODEREF(fun_close_16),T14,LITREF(lit_3),LITREF(lit_56),sloc(96),YPfalse);
  T16 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T17 = fun_close_16;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSioSportYclose,T15);
  lit_57 = YPPlist(1,YPPsym((P)"port"));
  T18 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPfab_met(FUNCODEREF(fun_close_17),T18,LITREF(lit_3),LITREF(lit_57),sloc(99),YPfalse);
  T20 = VARREF_OR(YgooSioSportYclose,YPfalse);
  T21 = fun_close_17;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooSioSportYclose,T19);
  lit_58 = YPPlist(1,YPPsym((P)"exp"));
  lit_59 = YPPlist(1,YPPsym((P)"return"));
  lit_60 = YPPsym((P)"x-1429");
  lit_61 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_62 = YPPsym((P)"with-port");
  lit_63 = YPsb((P)"Match Pattern Failure");
  lit_64 = YPPsym((P)"let");
  lit_65 = Ynil;
  lit_66 = YPPsym((P)"fin");
  lit_67 = YPPsym((P)"seq");
  lit_68 = YPPsym((P)"set");
  lit_69 = YPPsym((P)"and");
  T24 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1429_18 = YPfab_met(FUNCODEREF(fun_x_1429_18),T24,LITREF(lit_60),LITREF(lit_61),YPfalse,YPfalse);
  T23 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPfab_met(FUNCODEREF(fun_19),T23,YPfalse,LITREF(lit_59),YPfalse,YPfalse);
  T22 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPfab_met(FUNCODEREF(fun_20),T22,YPfalse,LITREF(lit_58),YPfalse,YPfalse);
  T25 = fun_20;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T25);
  lit_70 = YPsb((P)"in");
  T27 = (P)YgooSioSportYPcurrent_in_port();
  T26 = XCALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_filename),LITREF(lit_70),VARREF(YgooSioSportYport_handle),T27);
  VARSET(YgooSioSportYin,T26);
  lit_71 = YPsb((P)"out");
  T29 = (P)YgooSioSportYPcurrent_out_port();
  T28 = XCALL5(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_filename),LITREF(lit_71),VARREF(YgooSioSportYport_handle),T29);
  VARSET(YgooSioSportYout,T28);
  lit_72 = YPPlist(1,YPPsym((P)"port"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_21 = YPfab_met(FUNCODEREF(fun_get_21),T30,LITREF(lit_11),LITREF(lit_72),sloc(115),YPfalse);
  T32 = VARREF_OR(YgooSioSportYget,YPfalse);
  T33 = fun_get_21;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSioSportYget,T31);
  lit_73 = YPPlist(1,YPPsym((P)"port"));
  T34 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_22 = YPfab_met(FUNCODEREF(fun_peek_22),T34,LITREF(lit_15),LITREF(lit_73),sloc(120),YPfalse);
  T36 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T37 = fun_peek_22;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSioSportYpeek,T35);
  lit_74 = YPPlist(1,YPPsym((P)"port"));
  T38 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_23 = YPfab_met(FUNCODEREF(fun_readyQ_23),T38,LITREF(lit_17),LITREF(lit_74),sloc(123),YPfalse);
  T40 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T41 = fun_readyQ_23;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSioSportYreadyQ,T39);
  lit_75 = YPPlist(1,YPPsym((P)"port"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_24 = YPfab_met(FUNCODEREF(fun_newline_24),T42,LITREF(lit_20),LITREF(lit_75),sloc(126),YPfalse);
  T44 = VARREF_OR(YgooSioSportYnewline,YPfalse);
  T45 = fun_newline_24;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSioSportYnewline,T43);
  lit_76 = YPPlist(1,YPPsym((P)"port"));
  T46 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_25 = YPfab_met(FUNCODEREF(fun_force_out_25),T46,LITREF(lit_22),LITREF(lit_76),sloc(129),YPfalse);
  T48 = VARREF_OR(YgooSioSportYforce_out,YPfalse);
  T49 = fun_force_out_25;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooSioSportYforce_out,T47);
  lit_77 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T50 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_26 = YPfab_met(FUNCODEREF(fun_put_26),T50,LITREF(lit_24),LITREF(lit_77),sloc(132),YPfalse);
  T52 = VARREF_OR(YgooSioSportYput,YPfalse);
  T53 = fun_put_26;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSioSportYput,T51);
  lit_78 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T54 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_27 = YPfab_met(FUNCODEREF(fun_puts_27),T54,LITREF(lit_26),LITREF(lit_78),sloc(135),YPfalse);
  T56 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T57 = fun_puts_27;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooSioSportYputs,T55);
  lit_79 = YPPlist(1,YPPsym((P)"port"));
  T58 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_28 = YPfab_met(FUNCODEREF(fun_port_contents_28),T58,LITREF(lit_44),LITREF(lit_79),sloc(140),YPfalse);
  T60 = VARREF_OR(YgooSioSportYport_contents,YPfalse);
  T61 = fun_port_contents_28;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSioSportYport_contents,T59);
  lit_80 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T63 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T62 = YPfab_sig(YPPlist(2,T63,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_29 = YPfab_met(FUNCODEREF(fun_open_29),T62,LITREF(lit_1),LITREF(lit_80),sloc(143),YPfalse);
  T65 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T66 = fun_open_29;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooSioSportYopen,T64);
  lit_81 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T68 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T67 = YPfab_sig(YPPlist(2,T68,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_30 = YPfab_met(FUNCODEREF(fun_open_30),T67,LITREF(lit_1),LITREF(lit_81),sloc(148),YPfalse);
  T70 = VARREF_OR(YgooSioSportYopen,YPfalse);
  T71 = fun_open_30;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSportYopen,T69);
  lit_82 = YPPlist(1,YPPsym((P)"port"));
  T72 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_31 = YPfab_met(FUNCODEREF(fun_peek_31),T72,LITREF(lit_15),LITREF(lit_82),sloc(153),YPfalse);
  T74 = VARREF_OR(YgooSioSportYpeek,YPfalse);
  T75 = fun_peek_31;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSportYpeek,T73);
  lit_83 = YPPlist(1,YPPsym((P)"port"));
  T76 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_32 = YPfab_met(FUNCODEREF(fun_get_32),T76,LITREF(lit_11),LITREF(lit_83),sloc(158),YPfalse);
  T78 = VARREF_OR(YgooSioSportYget,YPfalse);
  T79 = fun_get_32;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSioSportYget,T77);
  lit_84 = YPPlist(1,YPPsym((P)"port"));
  T80 = YPfab_sig(YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_33 = YPfab_met(FUNCODEREF(fun_readyQ_33),T80,LITREF(lit_17),LITREF(lit_84),sloc(165),YPfalse);
  T82 = VARREF_OR(YgooSioSportYreadyQ,YPfalse);
  T83 = fun_readyQ_33;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSioSportYreadyQ,T81);
  lit_85 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T84 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_34 = YPfab_met(FUNCODEREF(fun_put_34),T84,LITREF(lit_24),LITREF(lit_85),sloc(168),YPfalse);
  T86 = VARREF_OR(YgooSioSportYput,YPfalse);
  T87 = fun_put_34;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSioSportYput,T85);
  lit_86 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T88 = YPfab_sig(YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_35 = YPfab_met(FUNCODEREF(fun_puts_35),T88,LITREF(lit_26),LITREF(lit_86),sloc(171),YPfalse);
  T90 = VARREF_OR(YgooSioSportYputs,YPfalse);
  T91 = fun_puts_35;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSioSportYputs,T89);
  lit_87 = YPPlist(1,YPPsym((P)"exp"));
  lit_88 = YPPlist(1,YPPsym((P)"return"));
  lit_89 = YPPsym((P)"x-1433");
  lit_90 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_91 = YPPsym((P)"port-to-str");
  T98 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T97 = fun_x_1433_36 = YPfab_met(FUNCODEREF(fun_x_1433_36),T98,LITREF(lit_89),LITREF(lit_90),YPfalse,YPfalse);
  T96 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T95 = fun_37 = YPfab_met(FUNCODEREF(fun_37),T96,YPfalse,LITREF(lit_88),YPfalse,YPfalse);
  T94 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T93 = fun_38 = YPfab_met(FUNCODEREF(fun_38),T94,YPfalse,LITREF(lit_87),YPfalse,YPfalse);
  T100 = fun_38;
  T99 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port-to-str"),T100);
  T92 = T99;
  return T92;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSvec;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmag},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSvec},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"fold+", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSlog, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"fun-src-loc", &module_info_gooSfun, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"c-expr", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"exp", &module_info_gooSmath, NULL},
  {"%bu", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"<bignum>", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"c-ment", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"%newline", PVAR, NULL},
  {"%put", PVAR, NULL},
  {"%puts", PVAR, NULL},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"%force-out", PVAR, NULL},
  {"puts", CVAR, &YgooSioSportYputs},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"%peek", PVAR, NULL},
  {"%get", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"%ready", PVAR, NULL},
  {"put", CVAR, &YgooSioSportYput},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"port-to-str", PVAR, NULL},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {"port-filename", CVAR, &YgooSioSportYport_filename},
  {"---main-1---", PVAR, NULL},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"%close-out-port", PVAR, NULL},
  {"close", CVAR, &YgooSioSportYclose},
  {"out", CVAR, &YgooSioSportYout},
  {"%open-in-file", PVAR, NULL},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"gets", CVAR, &YgooSioSportYgets},
  {"open", CVAR, &YgooSioSportYopen},
  {"---main-0---", PVAR, NULL},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"%open-out-file", PVAR, NULL},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"in", CVAR, &YgooSioSportYin},
  {"%current-out-port", PVAR, NULL},
  {"%current-in-port", PVAR, NULL},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"get", CVAR, &YgooSioSportYget},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"%ready?", PVAR, NULL},
  {"%close-in-port", PVAR, NULL},
  {"with-port", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<file-out-port>", NULL},
  {"<str-out-port>", NULL},
  {"<file-port>", NULL},
  {"port-index", NULL},
  {"<port>", NULL},
  {"puts", NULL},
  {"<out-port>", NULL},
  {"<str-in-port>", NULL},
  {"<file-in-port>", NULL},
  {"port-to-str", NULL},
  {"put", NULL},
  {"ready?", NULL},
  {"port-contents", NULL},
  {"<in-port>", NULL},
  {"port-filename", NULL},
  {"port-line-setter", NULL},
  {"force-out", NULL},
  {"peek", NULL},
  {"close", NULL},
  {"out", NULL},
  {"newline", NULL},
  {"gets", NULL},
  {"open", NULL},
  {"<str-port>", NULL},
  {"port-index-setter", NULL},
  {"port-line", NULL},
  {"in", NULL},
  {"get", NULL},
  {"port-handle", NULL},
  {"with-port", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSport;
MODULE_INFO module_info_gooSioSport = {
  "goo/io/port",
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
extern void load_module_gooSany (void);
extern void load_module_gooSlog (void);
extern void load_module_gooSchr (void);
extern void load_module_gooSmag (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooSioSport (void);

void load_module_gooSioSport (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSany();
  load_module_gooSlog();
  load_module_gooSchr();
  load_module_gooSmag();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSvec();

  (P)YgooSioSportY___main_0___();
  (P)YgooSioSportY___main_1___();
  (P)YgooSioSportY___main_2___();

}

/* END OF GENERATED CODE. */
