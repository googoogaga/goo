/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/port");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YgooSlogYas_log,"goo/log","as-log");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooSioSportYput,"goo/io/port","put");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yorder_specs,"goo/boot","order-specs");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yerror,"goo/boot","error");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYmod,"goo/math","mod");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYC,"goo/math","^");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yfun_info_inlineableQ_setter,"goo/boot","fun-info-inlineable?-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_info_inlineableQ,"goo/boot","fun-info-inlineable?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yas_error,"goo/boot","as-error");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YOallQ,"goo/boot","@all?");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YtT,"goo/boot","t*");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLcolG,"goo/boot","<col>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOpick,"goo/boot","@pick");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YPfalse,"goo/boot","%false");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooStypesYDbot,"goo/types","$bot");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YOnew,"goo/boot","@new");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ynot,"goo/boot","not");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YOtup,"goo/boot","@tup");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
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
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YLlogG,"goo/boot","<log>");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSfunYfun_inlineableQ_setter,"goo/fun","fun-inlineable?-setter");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYLbotG,"goo/types","<bot>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yunexec,"goo/boot","unexec");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSfunYfun_inlineableQ,"goo/fun","fun-inlineable?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YPtrue,"goo/boot","%true");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYround_to,"goo/math","round-to");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(Yhead,"goo/boot","head");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_72);
DEFLIT(lit_28);
DEFLIT(lit_80);
DEFLIT(lit_25);
DEFLIT(lit_62);
DEFLIT(lit_76);
DEFLIT(lit_85);
DEFLIT(lit_48);
DEFLIT(lit_13);
DEFLIT(lit_45);
DEFLIT(lit_31);
DEFLIT(lit_86);
DEFLIT(lit_83);
DEFLIT(lit_44);
DEFLIT(lit_51);
DEFLIT(lit_74);
DEFLIT(lit_16);
DEFLIT(lit_33);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_11);
DEFLIT(lit_43);
DEFLIT(lit_77);
DEFLIT(lit_2);
DEFLIT(lit_63);
DEFLIT(lit_10);
DEFLIT(lit_84);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_89);
DEFLIT(lit_3);
DEFLIT(lit_30);
DEFLIT(lit_53);
DEFLIT(lit_64);
DEFLIT(lit_91);
DEFLIT(lit_81);
DEFLIT(lit_73);
DEFLIT(lit_50);
DEFLIT(lit_6);
DEFLIT(lit_58);
DEFLIT(lit_46);
DEFLIT(lit_39);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_4);
DEFLIT(lit_40);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_75);
DEFLIT(lit_56);
DEFLIT(lit_49);
DEFLIT(lit_29);
DEFLIT(lit_71);
DEFLIT(lit_34);
DEFLIT(lit_70);
DEFLIT(lit_14);
DEFLIT(lit_12);
DEFLIT(lit_36);
DEFLIT(lit_79);
DEFLIT(lit_68);
DEFLIT(lit_82);
DEFLIT(lit_67);
DEFLIT(lit_90);
DEFLIT(lit_32);
DEFLIT(lit_60);
DEFLIT(lit_69);
DEFLIT(lit_42);
DEFLIT(lit_47);
DEFLIT(lit_9);
DEFLIT(lit_55);
DEFLIT(lit_15);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_78);
DEFLIT(lit_35);
DEFLIT(lit_65);
DEFLIT(lit_57);
DEFLIT(lit_26);
DEFLIT(lit_37);
DEFLIT(lit_87);
DEFLIT(lit_54);
DEFLIT(lit_88);
DEFLIT(lit_59);
DEFLIT(lit_17);
DEFLIT(lit_38);
DEFLIT(lit_61);
DEFLIT(lit_66);
DEFLIT(lit_23);

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
  P tmpF3718;
  P cF3717;
  P resF3716;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(port_, 0);
  resF3716 = Ynil;
  T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF3717 = T9;
  LOOP_149: {
    P a149_0,a149_1;
    T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3717);
    tmpF3718 = T3;
    if (tmpF3718 != YPfalse) {
      T1 = tmpF3718;
    } else {
      T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF3717,YPchr((P)10));
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF3716);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T5);
      T0 = T4;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),cF3717,resF3716);
      T8 = CALL1(1,VARREF(YgooSioSportYget),port_);
      a149_0 = T7;
      a149_1 = T8;
      resF3716 = a149_0;
      cF3717 = a149_1;
      goto LOOP_149;
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
  P x_1428F3733;
  P x_1428F3732;
  P x_1428F3731;
  P x_1428F3730;
  P x_1428F3729;
  P x_1428F3728;
  P x_1428F3727;
  P x_1428F3726;
  P x_1428F3725;
  P x_1428F3724;
  P bodyF3723;
  P portF3722;
  P nameF3721;
  P x_1428F3720;
  P x_1429F3719;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53;
LINK_STACK();
  ARG(return_, 0);
  T53 = FUNSHELL(0,fun_x_1429_18,2);
  x_1429F3719 = T53;
  FUNINIT(x_1429F3719, 2,FREEREF(0),return_);
  x_1428F3720 = FREEREF(0);
  nameF3721 = YPfalse;
  portF3722 = YPfalse;
  bodyF3723 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_1428F3720,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1428F3720,LITREF(lit_62),x_1429F3719);
    x_1428F3724 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F3724,x_1429F3719);
    x_1428F3725 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F3725,x_1429F3719);
    nameF3721 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1428F3725);
    x_1428F3726 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F3726,x_1429F3719);
    portF3722 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_1428F3726);
    x_1428F3727 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F3727,x_1429F3719);
    x_1428F3728 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3728,x_1429F3719);
    T11 = CALL1(1,VARREF(Ytail),x_1428F3727);
    x_1428F3729 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3729,x_1429F3719);
    T17 = CALL1(1,VARREF(Ytail),x_1428F3724);
    x_1428F3730 = T17;
    bodyF3723 = x_1428F3730;
    x_1428F3731 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F3731,x_1429F3719);
    x_1428F3732 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3732,x_1429F3719);
    T7 = CALL1(1,VARREF(Ytail),x_1428F3731);
    x_1428F3733 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1428F3733,x_1429F3719);
  } else {
    T19 = CALL2(1,x_1429F3719,LITREF(lit_63),x_1428F3720);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T27 = nameF3721;
  T26 = CALL1(1,VARREF(Ylst),T27);
  T28 = CALL1(1,VARREF(Ylst),YPfalse);
  T25 = CALL3(1,VARREF(YgooSmacrosYcat),T26,T28,LITREF(lit_65));
  T24 = CALL1(1,VARREF(Ylst),T25);
  T23 = CALL2(1,VARREF(YgooSmacrosYcat),T24,LITREF(lit_65));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T39 = nameF3721;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T41 = portF3722;
  T40 = CALL1(1,VARREF(Ylst),T41);
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,LITREF(lit_65));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T42 = bodyF3723;
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T42,LITREF(lit_65));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T47 = nameF3721;
  T46 = CALL1(1,VARREF(Ylst),T47);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T52 = nameF3721;
  T51 = CALL1(1,VARREF(Ylst),T52);
  T49 = CALL3(1,VARREF(YgooSmacrosYcat),T50,T51,LITREF(lit_65));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T48,LITREF(lit_65));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T43,LITREF(lit_65));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T29,LITREF(lit_65));
UNLINK_STACK();
  QRET(T20);
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
  P cF3737;
  P tF3736;
  P xF3735;
  P xF3734;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T6 = (P)YgooSioSportYPget(T7);
  xF3734 = T6;
  xF3735 = xF3734;
  tF3736 = (P)2;
  T5 = (P)YPiLL(xF3735,(P)2);
  T4 = (P)YPiv(T5,tF3736);
  cF3737 = T4;
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),cF3737,YPchr((P)10));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSportYport_line),port_);
    T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T2,port_);
  } else {
  }
UNLINK_STACK();
  RET(cF3737);
}

LOCCODEDEF(fun_peek_22) {
  P port_;
  P tF3740;
  P xF3739;
  P xF3738;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YgooSioSportYPpeek(T3);
  xF3738 = T2;
  xF3739 = xF3738;
  tF3740 = (P)2;
  T1 = (P)YPiLL(xF3739,(P)2);
  T0 = (P)YPiv(T1,tF3740);
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
  P xF3742;
  P xF3741;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF3741 = c_;
  xF3742 = xF3741;
  T2 = (P)YPiGG(xF3742,(P)2);
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
  P resF3743;
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
    resF3743 = T8;
    T7 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,YPint((P)1));
    CALL2(1,VARREF(YgooSioSportYport_index_setter),T6,port_);
    T0 = resF3743;
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
  P x_1432F3752;
  P x_1432F3751;
  P x_1432F3750;
  P x_1432F3749;
  P x_1432F3748;
  P bodyF3747;
  P nameF3746;
  P x_1432F3745;
  P x_1433F3744;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T30 = FUNSHELL(0,fun_x_1433_36,2);
  x_1433F3744 = T30;
  FUNINIT(x_1433F3744, 2,FREEREF(0),return_);
  x_1432F3745 = FREEREF(0);
  nameF3746 = YPfalse;
  bodyF3747 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_1432F3745,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1432F3745,LITREF(lit_91),x_1433F3744);
    x_1432F3748 = T9;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1432F3748,x_1433F3744);
    nameF3746 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1432F3748);
    x_1432F3749 = T8;
    bodyF3747 = x_1432F3749;
    x_1432F3750 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1432F3750,x_1433F3744);
    x_1432F3751 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1432F3751,x_1433F3744);
    T6 = CALL1(1,VARREF(Ytail),x_1432F3750);
    x_1432F3752 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_nul_list),x_1432F3752,x_1433F3744);
  } else {
    T10 = CALL2(1,x_1433F3744,LITREF(lit_63),x_1432F3745);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T18 = nameF3746;
  T17 = CALL1(1,VARREF(Ylst),T18);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,LITREF(lit_65));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T19,LITREF(lit_65));
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,LITREF(lit_65));
  T13 = CALL1(1,VARREF(Ylst),T14);
  T24 = bodyF3747;
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T29 = nameF3746;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_65));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T11 = CALL5(1,VARREF(YgooSmacrosYcat),T12,T13,T24,T25,LITREF(lit_65));
UNLINK_STACK();
  QRET(T11);
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
  {"/", &module_info_gooSmath, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fun-count", &module_info_gooSfun, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
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
  {"empty", &module_info_gooScolsScol, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
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
  {"*", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
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
  {"reject", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%fab-met-inlineable", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"fun-count-setter", &module_info_gooSfun, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"1-", &module_info_gooSmath, NULL},
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
  {"^", &module_info_gooSmath, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
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
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"fun-info-inlineable?", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSchr, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
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
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
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
  {"now", &module_info_gooScolsScol, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
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
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
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
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"fun-inlineable?-setter", &module_info_gooSfun, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
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
  {"tan", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooStypes, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"fun-inlineable?", &module_info_gooSfun, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"%fun-info-inlineable?-setter", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
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
  {"sort", &module_info_gooScolsSseq, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
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
  {"with-port", PVAR, NULL},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"%current-out-port", PVAR, NULL},
  {"put", CVAR, &YgooSioSportYput},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"port-filename", CVAR, &YgooSioSportYport_filename},
  {"open", CVAR, &YgooSioSportYopen},
  {"%ready?", PVAR, NULL},
  {"%puts", PVAR, NULL},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"%put", PVAR, NULL},
  {"%open-in-file", PVAR, NULL},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"%current-in-port", PVAR, NULL},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"gets", CVAR, &YgooSioSportYgets},
  {"%close-out-port", PVAR, NULL},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"%get", PVAR, NULL},
  {"%force-out", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"puts", CVAR, &YgooSioSportYputs},
  {"%close-in-port", PVAR, NULL},
  {"get", CVAR, &YgooSioSportYget},
  {"%ready", PVAR, NULL},
  {"%newline", PVAR, NULL},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {"%open-out-file", PVAR, NULL},
  {"in", CVAR, &YgooSioSportYin},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"port-to-str", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"out", CVAR, &YgooSioSportYout},
  {"%peek", PVAR, NULL},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"close", CVAR, &YgooSioSportYclose},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"force-out", NULL},
  {"<str-in-port>", NULL},
  {"port-line", NULL},
  {"<file-out-port>", NULL},
  {"port-index-setter", NULL},
  {"open", NULL},
  {"port-contents", NULL},
  {"newline", NULL},
  {"peek", NULL},
  {"<str-port>", NULL},
  {"<str-out-port>", NULL},
  {"port-index", NULL},
  {"gets", NULL},
  {"<file-port>", NULL},
  {"port-line-setter", NULL},
  {"port-filename", NULL},
  {"<port>", NULL},
  {"puts", NULL},
  {"with-port", NULL},
  {"get", NULL},
  {"port-handle", NULL},
  {"<in-port>", NULL},
  {"in", NULL},
  {"<out-port>", NULL},
  {"port-to-str", NULL},
  {"put", NULL},
  {"out", NULL},
  {"<file-in-port>", NULL},
  {"ready?", NULL},
  {"close", NULL},
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
