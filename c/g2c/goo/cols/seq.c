/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seq");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seq */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
DEF(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_7);
DEFLIT(lit_54);
DEFLIT(lit_61);
DEFLIT(lit_58);
DEFLIT(lit_80);
DEFLIT(lit_15);
DEFLIT(lit_24);
DEFLIT(lit_39);
DEFLIT(lit_97);
DEFLIT(lit_88);
DEFLIT(lit_73);
DEFLIT(lit_4);
DEFLIT(lit_1);
DEFLIT(lit_34);
DEFLIT(lit_70);
DEFLIT(lit_101);
DEFLIT(lit_118);
DEFLIT(lit_74);
DEFLIT(lit_49);
DEFLIT(lit_40);
DEFLIT(lit_129);
DEFLIT(lit_10);
DEFLIT(lit_33);
DEFLIT(lit_76);
DEFLIT(lit_31);
DEFLIT(lit_83);
DEFLIT(lit_59);
DEFLIT(lit_87);
DEFLIT(lit_113);
DEFLIT(lit_11);
DEFLIT(lit_93);
DEFLIT(lit_109);
DEFLIT(lit_29);
DEFLIT(lit_36);
DEFLIT(lit_48);
DEFLIT(lit_107);
DEFLIT(lit_126);
DEFLIT(lit_130);
DEFLIT(lit_28);
DEFLIT(lit_92);
DEFLIT(lit_111);
DEFLIT(lit_44);
DEFLIT(lit_68);
DEFLIT(lit_116);
DEFLIT(lit_13);
DEFLIT(lit_95);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_123);
DEFLIT(lit_6);
DEFLIT(lit_103);
DEFLIT(lit_102);
DEFLIT(lit_27);
DEFLIT(lit_125);
DEFLIT(lit_16);
DEFLIT(lit_23);
DEFLIT(lit_20);
DEFLIT(lit_56);
DEFLIT(lit_119);
DEFLIT(lit_41);
DEFLIT(lit_19);
DEFLIT(lit_60);
DEFLIT(lit_79);
DEFLIT(lit_99);
DEFLIT(lit_32);
DEFLIT(lit_51);
DEFLIT(lit_127);
DEFLIT(lit_114);
DEFLIT(lit_45);
DEFLIT(lit_77);
DEFLIT(lit_8);
DEFLIT(lit_65);
DEFLIT(lit_100);
DEFLIT(lit_46);
DEFLIT(lit_122);
DEFLIT(lit_52);
DEFLIT(lit_98);
DEFLIT(lit_37);
DEFLIT(lit_9);
DEFLIT(lit_89);
DEFLIT(lit_84);
DEFLIT(lit_78);
DEFLIT(lit_124);
DEFLIT(lit_22);
DEFLIT(lit_75);
DEFLIT(lit_64);
DEFLIT(lit_108);
DEFLIT(lit_57);
DEFLIT(lit_82);
DEFLIT(lit_71);
DEFLIT(lit_67);
DEFLIT(lit_94);
DEFLIT(lit_5);
DEFLIT(lit_117);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_72);
DEFLIT(lit_106);
DEFLIT(lit_86);
DEFLIT(lit_43);
DEFLIT(lit_42);
DEFLIT(lit_90);
DEFLIT(lit_18);
DEFLIT(lit_128);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_105);
DEFLIT(lit_110);
DEFLIT(lit_81);
DEFLIT(lit_3);
DEFLIT(lit_112);
DEFLIT(lit_38);
DEFLIT(lit_96);
DEFLIT(lit_55);
DEFLIT(lit_0);
DEFLIT(lit_91);
DEFLIT(lit_30);
DEFLIT(lit_53);
DEFLIT(lit_115);
DEFLIT(lit_104);
DEFLIT(lit_35);
DEFLIT(lit_121);
DEFLIT(lit_62);
DEFLIT(lit_63);
DEFLIT(lit_120);
DEFLIT(lit_85);
DEFLIT(lit_47);
DEFLIT(lit_66);
DEFLIT(lit_50);
DEFLIT(lit_14);
DEFLIT(lit_69);

/* FUNCTIONS: */

FUNFOR(YgooScolsSseqYOtQ);
LOCFOR(fun_key_type_1);
LOCFOR(fun_1st_2);
LOCFOR(fun_2nd_3);
LOCFOR(fun_3rd_4);
LOCFOR(fun_map_5);
LOCFOR(fun_map_keyed_6);
LOCFOR(fun_do2_7);
LOCFOR(fun_do3_8);
LOCFOR(fun_map2_9);
LOCFOR(fun_any2Q_10);
LOCFOR(fun_all2Q_11);
LOCFOR(fun_E_12);
LOCFOR(fun_last_13);
LOCFOR(fun_14);
LOCFOR(fun_pos_15);
LOCFOR(fun_finds_16);
LOCFOR(fun_rev_17);
LOCFOR(fun_cat_18);
LOCFOR(fun_cat2_19);
LOCFOR(fun_sub_20);
LOCFOR(fun_subT_21);
LOCFOR(fun_push_22);
LOCFOR(fun_pop_23);
LOCFOR(fun_pick_24);
LOCFOR(fun_25);
LOCFOR(fun_reject_26);
LOCFOR(fun_del_27);
LOCFOR(fun_28);
LOCFOR(fun_del_vals_29);
LOCFOR(fun_30);
LOCFOR(fun_del_dups_31);
LOCFOR(fun_ins_32);
LOCFOR(fun_elts_33);
LOCFOR(fun_sort_34);
LOCFOR(fun_sort_by_35);
LOCFOR(fun_keys_36);
FUNFOR(YgooScolsSseqYrange_check);
FUNFOR(YgooScolsSseqYrange_checkQ);
LOCFOR(fun_add_39);
LOCFOR(fun_add_new_40);
LOCFOR(fun_41);
LOCFOR(fun_vals_to_str_42);
LOCFOR(fun_do_key_vals_43);
LOCFOR(fun_44);
LOCFOR(fun_col_45);
LOCFOR(fun_suffixQ_46);
LOCFOR(fun_prefixQ_47);
LOCFOR(fun_repeat_48);
LOCFOR(fun_split_49);
LOCFOR(fun_50);
LOCFOR(fun_join_51);
extern P YgooScolsSseqY___main_0___ ();
extern P YgooScolsSseqY___main_1___ ();
extern P YgooScolsSseqY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSseqYOtQ) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_type_1) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_1st_2) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_4) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_5) {
  P f_,c_;
  P eF8117;
  P resF8116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF8116 = Ynil;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF8117 = T9;
  LOOP_323: {
    P a323_0,a323_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8117);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF8116);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF8117);
      T6 = CALL1(1,f_,T7);
      T5 = CALL2(1,VARREF(YgooScolsScolYadd),resF8116,T6);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8117);
      a323_0 = T5;
      a323_1 = T8;
      resF8116 = a323_0;
      eF8117 = a323_1;
      goto LOOP_323;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_map_keyed_6) {
  P f_,c_;
  P eF8119;
  P resF8118;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF8118 = Ynil;
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF8119 = T10;
  LOOP_324: {
    P a324_0,a324_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8119);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),resF8118);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T3);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF8119);
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF8119);
      T6 = CALL2(0,f_,T7,T8);
      T5 = CALL2(1,VARREF(YgooScolsScolYadd),resF8118,T6);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8119);
      a324_0 = T5;
      a324_1 = T9;
      resF8118 = a324_0;
      eF8119 = a324_1;
      goto LOOP_324;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do2_7) {
  P f_,x_,y_;
  P tmpF8122;
  P eyF8121;
  P exF8120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8120 = T10;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF8121 = T11;
  LOOP_325: {
    P a325_0,a325_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8120);
    tmpF8122 = T4;
    if (tmpF8122 != YPfalse) {
      T2 = tmpF8122;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8121);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),exF8120);
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8121);
      CALL2(0,f_,T5,T6);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8120);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8121);
      a325_0 = T8;
      a325_1 = T9;
      exF8120 = a325_0;
      eyF8121 = a325_1;
      goto LOOP_325;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_8) {
  P f_,x_,y_,z_;
  P tmpF8127;
  P tmpF8126;
  P ezF8125;
  P eyF8124;
  P exF8123;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8123 = T14;
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF8124 = T15;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  ezF8125 = T16;
  LOOP_326: {
    P a326_0,a326_1,a326_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8123);
    tmpF8126 = T6;
    if (tmpF8126 != YPfalse) {
      T2 = tmpF8126;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8124);
      tmpF8127 = T5;
      if (tmpF8127 != YPfalse) {
        T3 = tmpF8127;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ezF8125);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),exF8123);
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8124);
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),ezF8125);
      CALL3(0,f_,T7,T8,T9);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8123);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8124);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ezF8125);
      a326_0 = T11;
      a326_1 = T12;
      a326_2 = T13;
      exF8123 = a326_0;
      eyF8124 = a326_1;
      ezF8125 = a326_2;
      goto LOOP_326;
      T0 = T10;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_9) {
  P f_,x_,y_;
  P tmpF8131;
  P eyF8130;
  P exF8129;
  P resF8128;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  resF8128 = Ynil;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8129 = T13;
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF8130 = T14;
  LOOP_327: {
    P a327_0,a327_1,a327_2;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8129);
    tmpF8131 = T3;
    if (tmpF8131 != YPfalse) {
      T1 = tmpF8131;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8130);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF8128);
      T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T5);
      T0 = T4;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),exF8129);
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8130);
      T8 = CALL2(1,f_,T9,T10);
      T7 = CALL2(1,VARREF(YgooScolsScolYadd),resF8128,T8);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8129);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8130);
      a327_0 = T7;
      a327_1 = T11;
      a327_2 = T12;
      resF8128 = a327_0;
      exF8129 = a327_1;
      eyF8130 = a327_2;
      goto LOOP_327;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_any2Q_10) {
  P test_,x_,y_;
  P tmpF8135;
  P tmpF8134;
  P eyF8133;
  P exF8132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8132 = T12;
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF8133 = T13;
  LOOP_328: {
    P a328_0,a328_1;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8132);
    tmpF8134 = T3;
    if (tmpF8134 != YPfalse) {
      T1 = tmpF8134;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8133);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),exF8132);
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8133);
      T9 = CALL2(0,test_,T10,T11);
      T8 = CALL1(1,VARREF(YgooSmathYas_log),T9);
      tmpF8135 = T8;
      if (tmpF8135 != YPfalse) {
        T4 = tmpF8135;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8132);
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8133);
        a328_0 = T6;
        a328_1 = T7;
        exF8132 = a328_0;
        eyF8133 = a328_1;
        goto LOOP_328;
        T4 = T5;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_all2Q_11) {
  P test_,x_,y_;
  P tmpF8139;
  P tmpF8138;
  P eyF8137;
  P exF8136;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8136 = T11;
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF8137 = T12;
  LOOP_329: {
    P a329_0,a329_1;
    T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8136);
    tmpF8138 = T10;
    if (tmpF8138 != YPfalse) {
      T0 = tmpF8138;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8137);
      tmpF8139 = T9;
      if (tmpF8139 != YPfalse) {
        T1 = tmpF8139;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYnow),exF8136);
        T5 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8137);
        T3 = CALL2(0,test_,T4,T5);
        if (T3 != YPfalse) {
          T7 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8136);
          T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8137);
          a329_0 = T7;
          a329_1 = T8;
          exF8136 = a329_0;
          eyF8137 = a329_1;
          goto LOOP_329;
          T2 = T6;
        } else {
          T2 = YPfalse;
        }
        T1 = T2;
      }
      T0 = T1;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_12) {
  P c1_,c2_;
  P e2F8141;
  P e1F8140;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  e1F8140 = T10;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  e2F8141 = T11;
  LOOP_330: {
    P a330_0,a330_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F8140);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e2F8141);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),e1F8140);
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),e2F8141);
      T4 = CALL2(1,VARREF(YgooSmathYE),T5,T6);
      if (T4 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F8140);
        T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e2F8141);
        a330_0 = T8;
        a330_1 = T9;
        e1F8140 = a330_0;
        e2F8141 = a330_1;
        goto LOOP_330;
        T3 = T7;
      } else {
        T3 = YPfalse;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_13) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P a_;
  P T0;
LINK_STACK();
  ARG(a_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pos_15) {
  P x_,v_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  T1 = FUNFAB(fun_14,1,v_);
  T0 = CALL3(1,VARREF(YgooScolsScolYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finds_16) {
  P x_,y_;
  P yiF8144;
  P xiF8143;
  P xsiF8142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xsiF8142 = YPint((P)0);
  LOOP_331: {
    P a331_0;
    T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T5 = CALL1(1,VARREF(YgooStypesYlen),y_);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,T5);
    T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYL),xsiF8142,T2);
    if (T1 != YPfalse) {
      xiF8143 = xsiF8142;
      yiF8144 = YPint((P)0);
      LOOP_332: {
        P a332_0,a332_1;
        T9 = CALL1(1,VARREF(YgooStypesYlen),x_);
        T8 = CALL2(1,VARREF(YgooSmagYL),xiF8143,T9);
        if (T8 != YPfalse) {
          T11 = CALL1(1,VARREF(YgooStypesYlen),y_);
          T10 = CALL2(1,VARREF(YgooSmagYL),yiF8144,T11);
          T7 = T10;
        } else {
          T7 = YPfalse;
        }
        if (T7 != YPfalse) {
          T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_,xiF8143);
          T15 = CALL2(1,VARREF(YgooSmacrosYelt),y_,yiF8144);
          T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
          if (T13 != YPfalse) {
            T17 = CALL2(1,VARREF(YgooSmathYA),xiF8143,YPint((P)1));
            T18 = CALL2(1,VARREF(YgooSmathYA),yiF8144,YPint((P)1));
            a332_0 = T17;
            a332_1 = T18;
            xiF8143 = a332_0;
            yiF8144 = a332_1;
            goto LOOP_332;
            T12 = T16;
          } else {
            T20 = CALL2(1,VARREF(YgooSmathYA),xsiF8142,YPint((P)1));
            a331_0 = T20;
            xsiF8142 = a331_0;
            goto LOOP_331;
            T12 = T19;
          }
          T6 = T12;
        } else {
          T6 = xsiF8142;
        }
      }
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rev_17) {
  P x_;
  P eF8146;
  P seqF8145;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  seqF8145 = Ynil;
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF8146 = T7;
  LOOP_333: {
    P a333_0,a333_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8146);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,seqF8145);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),eF8146);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),seqF8145,T5);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8146);
      a333_0 = T4;
      a333_1 = T6;
      seqF8145 = a333_0;
      eF8146 = a333_1;
      goto LOOP_333;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_18) {
  P x_,ss_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooScolsSseqYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat2_19) {
  P x_,y_;
  P eyF8150;
  P seqF8149;
  P exF8148;
  P seqF8147;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  seqF8147 = Ynil;
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF8148 = T15;
  LOOP_334: {
    P a334_0,a334_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF8148);
    if (T1 != YPfalse) {
      seqF8149 = seqF8147;
      T10 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
      eyF8150 = T10;
      LOOP_335: {
        P a335_0,a335_1;
        T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF8150);
        if (T3 != YPfalse) {
          T5 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF8149);
          T4 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T5);
          T2 = T4;
        } else {
          T8 = CALL1(1,VARREF(YgooScolsScolYnow),eyF8150);
          T7 = CALL2(1,VARREF(YgooScolsScolYadd),seqF8149,T8);
          T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF8150);
          a335_0 = T7;
          a335_1 = T9;
          seqF8149 = a335_0;
          eyF8150 = a335_1;
          goto LOOP_335;
          T2 = T6;
        }
      }
      T0 = T2;
    } else {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),exF8148);
      T12 = CALL2(1,VARREF(YgooScolsScolYadd),seqF8147,T13);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),exF8148);
      a334_0 = T12;
      a334_1 = T14;
      seqF8147 = a334_0;
      exF8148 = a334_1;
      goto LOOP_334;
      T0 = T11;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_20) {
  P x_,from_,below_;
  P eF8153;
  P iF8152;
  P seqF8151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
  seqF8151 = Ynil;
  check_type(YPint((P)0),VARREF(YLintG));
  iF8152 = YPint((P)0);
  T13 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF8153 = T13;
  LOOP_336: {
    P a336_0,a336_1,a336_2;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8153);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF8151);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T7 = CALL2(1,VARREF(YgooSmagYGE),iF8152,from_);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSmagYL),iF8152,below_);
        T6 = T8;
      } else {
        T6 = YPfalse;
      }
      if (T6 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooScolsScolYnow),eF8153);
        T9 = CALL2(1,VARREF(YgooScolsScolYadd),seqF8151,T10);
        T5 = T9;
      } else {
        T5 = seqF8151;
      }
      T11 = CALL2(1,VARREF(YgooSmathYA),iF8152,YPint((P)1));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8153);
      a336_0 = T5;
      a336_1 = T11;
      a336_2 = T12;
      seqF8151 = a336_0;
      iF8152 = a336_1;
      eF8153 = a336_2;
      goto LOOP_336;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subT_21) {
  P x_,from_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_22) {
  P l_,x_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),l_,x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_23) {
  P l_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(l_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),l_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),l_,YPint((P)1),T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),l_,YPint((P)0));
  T0 = CALL2(1,VARREF(Ytup),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pick_24) {
  P test_,x_;
  P vF8156;
  P eF8155;
  P seqF8154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  seqF8154 = Ynil;
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF8155 = T10;
  LOOP_337: {
    P a337_0,a337_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8155);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF8154);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF8155);
      vF8156 = T9;
      T6 = CALL1(1,test_,vF8156);
      if (T6 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooScolsScolYadd),seqF8154,vF8156);
        T5 = T7;
      } else {
        T5 = seqF8154;
      }
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8155);
      a337_0 = T5;
      a337_1 = T8;
      seqF8154 = a337_0;
      eF8155 = a337_1;
      goto LOOP_337;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_25) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(0,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reject_26) {
  P test_,x_;
  P T0,T1;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_25,1,test_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_27) {
  P x_,key_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,YPint((P)0),key_);
  T3 = CALL2(1,VARREF(YgooSmathYA),key_,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,T3,T4);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_28) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_vals_29) {
  P s_,x_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_28,1,x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_30) {
  P s_,e_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_31) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = fun_30;
  T2 = CALL3(1,VARREF(YgooScolsScolYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ins_32) {
  P x_,v_,before_;
  P eF8159;
  P iF8158;
  P rF8157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
  rF8157 = Ynil;
  iF8158 = YPint((P)0);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF8159 = T14;
  LOOP_338: {
    P a338_0,a338_1,a338_2;
    T1 = CALL2(1,VARREF(YgooSmathYE),iF8158,before_);
    if (T1 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSmacrosYpair),v_,rF8157);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF8158,YPint((P)1));
      a338_0 = T3;
      a338_1 = T4;
      a338_2 = eF8159;
      rF8157 = a338_0;
      iF8158 = a338_1;
      eF8159 = a338_2;
      goto LOOP_338;
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8159);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooSmacrosYrevX),rF8157);
        T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T8);
        T5 = T7;
      } else {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF8159);
        T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,rF8157);
        T12 = CALL2(1,VARREF(YgooSmathYA),iF8158,YPint((P)1));
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8159);
        a338_0 = T10;
        a338_1 = T12;
        a338_2 = T13;
        rF8157 = a338_0;
        iF8158 = a338_1;
        eF8159 = a338_2;
        goto LOOP_338;
        T5 = T9;
      }
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elts_33) {
  P x_,keys_;
  P keyF8164;
  P keysF8163;
  P iF8162;
  P eF8161;
  P rF8160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  rF8160 = Ynil;
  T24 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF8161 = T24;
  iF8162 = YPint((P)0);
  T26 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  keysF8163 = T25;
  LOOP_339: {
    P a339_0,a339_1,a339_2,a339_3;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),keysF8163);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rF8160);
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T3);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8161);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(Yrange_error),x_,iF8162);
        T4 = T6;
      } else {
        if (YPtrue != YPfalse) {
          T23 = CALL1(1,VARREF(YgooScolsScolYnow),keysF8163);
          keyF8164 = T23;
          T9 = CALL2(1,VARREF(YgooSmathYE),iF8162,keyF8164);
          if (T9 != YPfalse) {
            T12 = CALL1(1,VARREF(YgooScolsScolYnow),eF8161);
            T11 = CALL2(1,VARREF(YgooSmacrosYpair),T12,rF8160);
            T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8161);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF8162,YPint((P)1));
            T15 = CALL1(1,VARREF(YgooScolsScolYnxt),keysF8163);
            a339_0 = T11;
            a339_1 = T13;
            a339_2 = T14;
            a339_3 = T15;
            rF8160 = a339_0;
            eF8161 = a339_1;
            iF8162 = a339_2;
            keysF8163 = a339_3;
            goto LOOP_339;
            T8 = T10;
          } else {
            T17 = CALL2(1,VARREF(YisaQ),keyF8164,VARREF(YLintG));
            if (T17 != YPfalse) {
              T19 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8161);
              T20 = CALL2(1,VARREF(YgooSmathYA),iF8162,YPint((P)1));
              a339_0 = rF8160;
              a339_1 = T19;
              a339_2 = T20;
              a339_3 = keysF8163;
              rF8160 = a339_0;
              eF8161 = a339_1;
              iF8162 = a339_2;
              keysF8163 = a339_3;
              goto LOOP_339;
              T16 = T18;
            } else {
              if (YPtrue != YPfalse) {
                T22 = CALL2(1,VARREF(Yrange_error),x_,keyF8164);
                T21 = T22;
              } else {
                T21 = YPfalse;
              }
              T16 = T21;
            }
            T8 = T16;
          }
          T7 = T8;
        } else {
          T7 = YPfalse;
        }
        T4 = T7;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_by),x_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_by_35) {
  P a_,test_;
  P T0,T1;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),a_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T1,test_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_36) {
  P d_;
  P T0,T1;
LINK_STACK();
  ARG(d_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),d_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_check) {
  P x_,i_;
  P tmpF8165;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T4 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF8165 = T4;
  if (tmpF8165 != YPfalse) {
    T1 = tmpF8165;
  } else {
    T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T2 = CALL2(1,VARREF(YgooSmagYGE),i_,T3);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(Yrange_error),x_,i_);
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_checkQ) {
  P x_,i_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T2 = CALL2(1,VARREF(YgooSmagYL),i_,T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_39) {
  P x_,e_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(e_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,e_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_new_40) {
  P c_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_41) {
  P s_,e_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_119);
  } else {
    T1 = LITREF(lit_120);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_42) {
  P s_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  T1 = fun_41;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_119),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_key_vals_43) {
  P fn_,key_vals_;
  P valF8169;
  P nxtsF8168;
  P keyF8167;
  P eF8166;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  eF8166 = T11;
  LOOP_340: {
    P a340_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8166);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),eF8166);
      keyF8167 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8166);
      nxtsF8168 = T9;
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF8166);
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF8166);
        T5 = T8;
      } else {
        T5 = YPfalse;
      }
      valF8169 = T5;
      CALL2(1,fn_,keyF8167,valF8169);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),eF8166);
      a340_0 = T4;
      eF8166 = a340_0;
      goto LOOP_340;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P key_,val_;
  P T0;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_45) {
  P t_,key_vals_;
  P xF8170;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF8170 = T1;
  T0 = FUNFAB(fun_44,1,xF8170);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T0,key_vals_);
UNLINK_STACK();
  QRET(xF8170);
}

FUNCODEDEF(fun_suffixQ_46) {
  P s_,end_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(end_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),end_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,T4);
  T5 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T2,T5);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,end_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_prefixQ_47) {
  P s_,begin_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(begin_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),begin_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),T2);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,begin_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_repeat_48) {
  P s_,n_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(s_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYLE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSclassYclass_of),s_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),s_,T6);
    T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),s_,T5);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_split_49) {
  P s_,sep_;
  P matchF8171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF8171 = T9;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),matchF8171,YPfalse);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),s_);
    T0 = T2;
  } else {
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF8171);
    T7 = CALL2(1,VARREF(YgooSmathYA),matchF8171,YPint((P)1));
    T8 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T7,T8);
    T5 = CALL2(1,VARREF(YgooScolsSseqYsplit),T6,sep_);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,T5);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_50) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),x_,FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_join_51) {
  P ss_,sep_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ss_, 0);
  ARG(sep_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSclassYclass_of),sep_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_50,1,sep_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),ss_,YPint((P)0));
    T8 = CALL1(1,VARREF(YgooStypesYlen),ss_);
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),ss_,YPint((P)1),T8);
    T4 = CALL3(1,VARREF(YgooScolsScolYfold),T5,T6,T7);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43;
DEFCREGS();
  lit_0 = YPPsym((P)"@t?");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLunionG),Ynil);
  YgooScolsSseqYOtQ = YPmet(FUNCODEREF(YgooScolsSseqYOtQ),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(11));
  T1 = YgooScolsSseqYOtQ;
  VARSET(YgooScolsSseqYOtQ,T1);
  lit_2 = YPPsym((P)"1st");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY1st,T2);
  lit_4 = YPPsym((P)"2nd");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY2nd,T4);
  lit_6 = YPPsym((P)"3rd");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqY3rd,T6);
  lit_8 = YPPsym((P)"last");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYlast,T8);
  lit_10 = YPPsym((P)"pos");
  lit_11 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T12 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T11 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T12,Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpos,T10);
  lit_12 = YPPsym((P)"finds");
  lit_13 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T14 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T15,Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYfinds,T13);
  lit_14 = YPPsym((P)"do2");
  lit_15 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = YPsig(LITREF(lit_15),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo2,T16);
  lit_16 = YPPsym((P)"do3");
  lit_17 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T19 = YPsig(LITREF(lit_17),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo3,T18);
  lit_18 = YPPsym((P)"map2");
  lit_19 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T21 = YPsig(LITREF(lit_19),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap2,T20);
  lit_20 = YPPsym((P)"any2?");
  lit_21 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPsig(LITREF(lit_21),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYany2Q,T22);
  lit_22 = YPPsym((P)"all2?");
  lit_23 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T25 = YPsig(LITREF(lit_23),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYall2Q,T24);
  lit_24 = YPPsym((P)"rev");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrev,T26);
  lit_26 = YPPsym((P)"cat");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T29 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYcat,T28);
  lit_28 = YPPsym((P)"cat2");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T31 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYcat2,T30);
  lit_30 = YPPsym((P)"push");
  lit_31 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_30),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpush,T32);
  lit_32 = YPPsym((P)"pop");
  lit_33 = YPPlist(1,YPPsym((P)"l"));
  T36 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T35 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T36,Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpop,T34);
  lit_34 = YPPsym((P)"sub");
  lit_35 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T38 = YPsig(LITREF(lit_35),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsub,T37);
  lit_36 = YPPsym((P)"sub*");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T40 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T39 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T40,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsubT,T39);
  lit_38 = YPPsym((P)"ins");
  lit_39 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"e"),YPPsym((P)"before"));
  T42 = YPsig(LITREF(lit_39),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYins,T41);
  T43 = YPfalse;
  return T43;
}

P YgooScolsSseqY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
DEFCREGS();
  lit_40 = YPPsym((P)"pick");
  lit_41 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T1 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpick,T0);
  lit_42 = YPPsym((P)"reject");
  lit_43 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T3 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYreject,T2);
  lit_44 = YPPsym((P)"del-vals");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T5 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_vals,T4);
  lit_46 = YPPsym((P)"del-dups");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_dups,T6);
  lit_48 = YPPsym((P)"sort");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort,T8);
  lit_50 = YPPsym((P)"sort-by");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"test"));
  T11 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLseqG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort_by,T10);
  lit_52 = YPPsym((P)"suffix?");
  lit_53 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"suffix"));
  T13 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsuffixQ,T12);
  lit_54 = YPPsym((P)"prefix?");
  lit_55 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"prefix"));
  T15 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYprefixQ,T14);
  lit_56 = YPPsym((P)"repeat");
  lit_57 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T17 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrepeat,T16);
  lit_58 = YPPsym((P)"split");
  lit_59 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T19 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_58),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsplit,T18);
  lit_60 = YPPsym((P)"join");
  lit_61 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  T21 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_60),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYjoin,T20);
  lit_62 = YPPsym((P)"vals-to-str");
  lit_63 = YPPlist(1,YPPsym((P)"s"));
  T23 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_62),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYvals_to_str,T22);
  lit_64 = YPPsym((P)"do-key-vals");
  lit_65 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T25 = YPsig(LITREF(lit_65),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_64),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo_key_vals,T24);
  lit_66 = YPPsym((P)"key-type");
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T26 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_1 = YPmet(FUNCODEREF(fun_key_type_1),LITREF(lit_66),T26,ENVNUL,PNUL,sloc(107));
  T28 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T29 = fun_key_type_1;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooScolsScolYkey_type,T27);
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T30 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_2 = YPmet(FUNCODEREF(fun_1st_2),LITREF(lit_2),T30,ENVNUL,PNUL,sloc(111));
  T32 = VARREF_OR(YgooSmacrosY1st,YPfalse);
  T33 = fun_1st_2;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YgooSmacrosY1st,T31);
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPmet(FUNCODEREF(fun_2nd_3),LITREF(lit_4),T34,ENVNUL,PNUL,sloc(113));
  T36 = VARREF_OR(YgooSmacrosY2nd,YPfalse);
  T37 = fun_2nd_3;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YgooSmacrosY2nd,T35);
  lit_70 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_4 = YPmet(FUNCODEREF(fun_3rd_4),LITREF(lit_6),T38,ENVNUL,PNUL,sloc(115));
  T40 = VARREF_OR(YgooScolsSseqY3rd,YPfalse);
  T41 = fun_3rd_4;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooScolsSseqY3rd,T39);
  lit_71 = YPPsym((P)"map");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T42 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_5 = YPmet(FUNCODEREF(fun_map_5),LITREF(lit_71),T42,ENVNUL,PNUL,sloc(117));
  T44 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T45 = fun_map_5;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSmacrosYmap,T43);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T46 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_keyed_6 = YPmet(FUNCODEREF(fun_map_keyed_6),LITREF(lit_73),T46,ENVNUL,PNUL,sloc(123));
  T48 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T49 = fun_map_keyed_6;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsScolYmap_keyed,T47);
  lit_75 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T50 = YPsig(LITREF(lit_75),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_7 = YPmet(FUNCODEREF(fun_do2_7),LITREF(lit_14),T50,ENVNUL,PNUL,sloc(129));
  T52 = VARREF_OR(YgooScolsSseqYdo2,YPfalse);
  T53 = fun_do2_7;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooScolsSseqYdo2,T51);
  lit_76 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T54 = YPsig(LITREF(lit_76),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_8 = YPmet(FUNCODEREF(fun_do3_8),LITREF(lit_16),T54,ENVNUL,PNUL,sloc(135));
  T56 = VARREF_OR(YgooScolsSseqYdo3,YPfalse);
  T57 = fun_do3_8;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsSseqYdo3,T55);
  lit_77 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T58 = YPsig(LITREF(lit_77),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_map2_9 = YPmet(FUNCODEREF(fun_map2_9),LITREF(lit_18),T58,ENVNUL,PNUL,sloc(141));
  T60 = VARREF_OR(YgooSmacrosYmap2,YPfalse);
  T61 = fun_map2_9;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooSmacrosYmap2,T59);
  lit_78 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T62 = YPsig(LITREF(lit_78),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_10 = YPmet(FUNCODEREF(fun_any2Q_10),LITREF(lit_20),T62,ENVNUL,PNUL,sloc(148));
  T64 = VARREF_OR(YgooScolsSseqYany2Q,YPfalse);
  T65 = fun_any2Q_10;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsSseqYany2Q,T63);
  lit_79 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T66 = YPsig(LITREF(lit_79),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_11 = YPmet(FUNCODEREF(fun_all2Q_11),LITREF(lit_22),T66,ENVNUL,PNUL,sloc(155));
  T68 = VARREF_OR(YgooStypesYall2Q,YPfalse);
  T69 = fun_all2Q_11;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YgooStypesYall2Q,T67);
  lit_80 = YPPsym((P)"=");
  lit_81 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T70 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_12 = YPmet(FUNCODEREF(fun_E_12),LITREF(lit_80),T70,ENVNUL,PNUL,sloc(161));
  T72 = VARREF_OR(YgooSmathYE,YPfalse);
  T73 = fun_E_12;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSmathYE,T71);
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T74 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_13 = YPmet(FUNCODEREF(fun_last_13),LITREF(lit_8),T74,ENVNUL,PNUL,sloc(169));
  T76 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T77 = fun_last_13;
  T75 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T76,T77);
  VARSET(YgooSmacrosYlast,T75);
  lit_83 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  lit_84 = YPPlist(1,YPPsym((P)"a"));
  T80 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T80,ENVNUL,PNUL,sloc(172));
  T79 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T78 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T79,Ynil);
  fun_pos_15 = YPmet(FUNCODEREF(fun_pos_15),LITREF(lit_10),T78,ENVNUL,PNUL,sloc(171));
  T82 = VARREF_OR(YgooScolsSseqYpos,YPfalse);
  T83 = fun_pos_15;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooScolsSseqYpos,T81);
  lit_85 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T85 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T84 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T85,Ynil);
  fun_finds_16 = YPmet(FUNCODEREF(fun_finds_16),LITREF(lit_12),T84,ENVNUL,PNUL,sloc(174));
  T87 = VARREF_OR(YgooScolsSseqYfinds,YPfalse);
  T88 = fun_finds_16;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooScolsSseqYfinds,T86);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T89 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_rev_17 = YPmet(FUNCODEREF(fun_rev_17),LITREF(lit_24),T89,ENVNUL,PNUL,sloc(185));
  T91 = VARREF_OR(YgooScolsSseqYrev,YPfalse);
  T92 = fun_rev_17;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooScolsSseqYrev,T90);
  lit_87 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ss"));
  T93 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_18 = YPmet(FUNCODEREF(fun_cat_18),LITREF(lit_26),T93,ENVNUL,PNUL,sloc(193));
  T95 = VARREF_OR(YgooSmacrosYcat,YPfalse);
  T96 = fun_cat_18;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YgooSmacrosYcat,T94);
  lit_88 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T97 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_19 = YPmet(FUNCODEREF(fun_cat2_19),LITREF(lit_28),T97,ENVNUL,PNUL,sloc(196));
  T99 = VARREF_OR(YgooScolsSseqYcat2,YPfalse);
  T100 = fun_cat2_19;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YgooScolsSseqYcat2,T98);
  lit_89 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T101 = YPsig(LITREF(lit_89),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_20 = YPmet(FUNCODEREF(fun_sub_20),LITREF(lit_34),T101,ENVNUL,PNUL,sloc(205));
  T103 = VARREF_OR(YgooScolsSseqYsub,YPfalse);
  T104 = fun_sub_20;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YgooScolsSseqYsub,T102);
  lit_90 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T107 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T106 = fun_subT_21 = YPmet(FUNCODEREF(fun_subT_21),LITREF(lit_36),T107,ENVNUL,PNUL,sloc(212));
  T110 = VARREF_OR(YgooScolsSseqYsubT,YPfalse);
  T111 = fun_subT_21;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  T108 = VARSET(YgooScolsSseqYsubT,T109);
  T105 = T108;
  return T105;
}

P YgooScolsSseqY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100;
DEFCREGS();
  lit_91 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_push_22 = YPmet(FUNCODEREF(fun_push_22),LITREF(lit_30),T0,ENVNUL,PNUL,sloc(215));
  T2 = VARREF_OR(YgooScolsSseqYpush,YPfalse);
  T3 = fun_push_22;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsSseqYpush,T1);
  lit_92 = YPPlist(1,YPPsym((P)"l"));
  T5 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T4 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T5,Ynil);
  fun_pop_23 = YPmet(FUNCODEREF(fun_pop_23),LITREF(lit_32),T4,ENVNUL,PNUL,sloc(218));
  T7 = VARREF_OR(YgooScolsSseqYpop,YPfalse);
  T8 = fun_pop_23;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooScolsSseqYpop,T6);
  lit_93 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_24 = YPmet(FUNCODEREF(fun_pick_24),LITREF(lit_40),T9,ENVNUL,PNUL,sloc(221));
  T11 = VARREF_OR(YgooScolsSseqYpick,YPfalse);
  T12 = fun_pick_24;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooScolsSseqYpick,T10);
  lit_94 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T14,ENVNUL,PNUL,sloc(229));
  T13 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_26 = YPmet(FUNCODEREF(fun_reject_26),LITREF(lit_42),T13,ENVNUL,PNUL,sloc(228));
  T16 = VARREF_OR(YgooScolsSseqYreject,YPfalse);
  T17 = fun_reject_26;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooScolsSseqYreject,T15);
  lit_96 = YPPsym((P)"del");
  lit_97 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T18 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_27 = YPmet(FUNCODEREF(fun_del_27),LITREF(lit_96),T18,ENVNUL,PNUL,sloc(231));
  T20 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T21 = fun_del_27;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YgooScolsScolYdel,T19);
  lit_98 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"e"));
  T23 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T23,ENVNUL,PNUL,sloc(235));
  T22 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_29 = YPmet(FUNCODEREF(fun_del_vals_29),LITREF(lit_44),T22,ENVNUL,PNUL,sloc(234));
  T25 = VARREF_OR(YgooScolsSseqYdel_vals,YPfalse);
  T26 = fun_del_vals_29;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooScolsSseqYdel_vals,T24);
  lit_100 = YPPlist(1,YPPsym((P)"x"));
  lit_101 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T28 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T28,ENVNUL,PNUL,sloc(238));
  T27 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_31 = YPmet(FUNCODEREF(fun_del_dups_31),LITREF(lit_46),T27,ENVNUL,PNUL,sloc(237));
  T30 = VARREF_OR(YgooScolsSseqYdel_dups,YPfalse);
  T31 = fun_del_dups_31;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooScolsSseqYdel_dups,T29);
  lit_102 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T32 = YPsig(LITREF(lit_102),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_32 = YPmet(FUNCODEREF(fun_ins_32),LITREF(lit_38),T32,ENVNUL,PNUL,sloc(240));
  T34 = VARREF_OR(YgooScolsSseqYins,YPfalse);
  T35 = fun_ins_32;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooScolsSseqYins,T33);
  lit_103 = YPPsym((P)"elts");
  lit_104 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T36 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_elts_33 = YPmet(FUNCODEREF(fun_elts_33),LITREF(lit_103),T36,ENVNUL,PNUL,sloc(249));
  T38 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T39 = fun_elts_33;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooScolsScolYelts,T37);
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T40 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_sort_34 = YPmet(FUNCODEREF(fun_sort_34),LITREF(lit_48),T40,ENVNUL,PNUL,sloc(264));
  T42 = VARREF_OR(YgooScolsSseqYsort,YPfalse);
  T43 = fun_sort_34;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooScolsSseqYsort,T41);
  lit_106 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T44 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_by_35 = YPmet(FUNCODEREF(fun_sort_by_35),LITREF(lit_50),T44,ENVNUL,PNUL,sloc(267));
  T46 = VARREF_OR(YgooScolsSseqYsort_by,YPfalse);
  T47 = fun_sort_by_35;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooScolsSseqYsort_by,T45);
  lit_107 = YPPsym((P)"keys");
  lit_108 = YPPlist(1,YPPsym((P)"d"));
  T48 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_36 = YPmet(FUNCODEREF(fun_keys_36),LITREF(lit_107),T48,ENVNUL,PNUL,sloc(272));
  T50 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T51 = fun_keys_36;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooScolsScolYkeys,T49);
  lit_109 = YPPsym((P)"range-check");
  lit_110 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T52 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_check = YPmet(FUNCODEREF(YgooScolsSseqYrange_check),LITREF(lit_109),T52,ENVNUL,PNUL,sloc(275));
  T53 = YgooScolsSseqYrange_check;
  VARSET(YgooScolsSseqYrange_check,T53);
  lit_111 = YPPsym((P)"range-check?");
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T54 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_checkQ = YPmet(FUNCODEREF(YgooScolsSseqYrange_checkQ),LITREF(lit_111),T54,ENVNUL,PNUL,sloc(279));
  T55 = YgooScolsSseqYrange_checkQ;
  VARSET(YgooScolsSseqYrange_checkQ,T55);
  lit_113 = YPPsym((P)"add");
  lit_114 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"e"));
  T56 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_39 = YPmet(FUNCODEREF(fun_add_39),LITREF(lit_113),T56,ENVNUL,PNUL,sloc(282));
  T58 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T59 = fun_add_39;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooScolsScolYadd,T57);
  lit_115 = YPPsym((P)"add-new");
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T60 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_40 = YPmet(FUNCODEREF(fun_add_new_40),LITREF(lit_115),T60,ENVNUL,PNUL,sloc(285));
  T62 = VARREF_OR(YgooScolsSseqYadd_new,YPfalse);
  T63 = fun_add_new_40;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooScolsSseqYadd_new,T61);
  lit_117 = YPPlist(1,YPPsym((P)"s"));
  lit_118 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  lit_119 = YPsb((P)"");
  lit_120 = YPsb((P)" ");
  T65 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T65,ENVNUL,PNUL,sloc(290));
  T64 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_42 = YPmet(FUNCODEREF(fun_vals_to_str_42),LITREF(lit_62),T64,ENVNUL,PNUL,sloc(289));
  T67 = VARREF_OR(YgooScolsSseqYvals_to_str,YPfalse);
  T68 = fun_vals_to_str_42;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooScolsSseqYvals_to_str,T66);
  lit_121 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T69 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_43 = YPmet(FUNCODEREF(fun_do_key_vals_43),LITREF(lit_64),T69,ENVNUL,PNUL,sloc(292));
  T71 = VARREF_OR(YgooScolsSseqYdo_key_vals,YPfalse);
  T72 = fun_do_key_vals_43;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsSseqYdo_key_vals,T70);
  lit_122 = YPPsym((P)"col");
  lit_123 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  lit_124 = YPPlist(2,YPPsym((P)"key"),YPPsym((P)"val"));
  T75 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T75,ENVNUL,PNUL,sloc(302));
  T74 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T73 = YPsig(LITREF(lit_123),YPPlist(1,T74),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_45 = YPmet(FUNCODEREF(fun_col_45),LITREF(lit_122),T73,ENVNUL,PNUL,sloc(300));
  T77 = VARREF_OR(YgooScolsScolYcol,YPfalse);
  T78 = fun_col_45;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooScolsScolYcol,T76);
  lit_125 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"end"));
  T79 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_46 = YPmet(FUNCODEREF(fun_suffixQ_46),LITREF(lit_52),T79,ENVNUL,PNUL,sloc(305));
  T81 = VARREF_OR(YgooScolsSseqYsuffixQ,YPfalse);
  T82 = fun_suffixQ_46;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YgooScolsSseqYsuffixQ,T80);
  lit_126 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"begin"));
  T83 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_47 = YPmet(FUNCODEREF(fun_prefixQ_47),LITREF(lit_54),T83,ENVNUL,PNUL,sloc(308));
  T85 = VARREF_OR(YgooScolsSseqYprefixQ,YPfalse);
  T86 = fun_prefixQ_47;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YgooScolsSseqYprefixQ,T84);
  lit_127 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T87 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_48 = YPmet(FUNCODEREF(fun_repeat_48),LITREF(lit_56),T87,ENVNUL,PNUL,sloc(312));
  T89 = VARREF_OR(YgooScolsSseqYrepeat,YPfalse);
  T90 = fun_repeat_48;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YgooScolsSseqYrepeat,T88);
  lit_128 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T91 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_49 = YPmet(FUNCODEREF(fun_split_49),LITREF(lit_58),T91,ENVNUL,PNUL,sloc(319));
  T93 = VARREF_OR(YgooScolsSseqYsplit,YPfalse);
  T94 = fun_split_49;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooScolsSseqYsplit,T92);
  lit_129 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T96 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T96,ENVNUL,PNUL,sloc(330));
  T95 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_51 = YPmet(FUNCODEREF(fun_join_51),LITREF(lit_60),T95,ENVNUL,PNUL,sloc(327));
  T98 = VARREF_OR(YgooScolsSseqYjoin,YPfalse);
  T99 = fun_join_51;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooScolsSseqYjoin,T97);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T100 = YPfalse;
  return T100;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
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
  {"dlet", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
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
  {"fold+", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
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
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
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
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ins", CVAR, &YgooScolsSseqYins},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"sub*", CVAR, &YgooScolsSseqYsubT},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"---main-0---", PVAR, NULL},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {"---main-1---", PVAR, NULL},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"---main-2---", PVAR, NULL},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ins", NULL},
  {"split", NULL},
  {"sub*", NULL},
  {"map2", NULL},
  {"repeat", NULL},
  {"sort-by!", NULL},
  {"sub", NULL},
  {"below", NULL},
  {"prefix?", NULL},
  {"do3", NULL},
  {"range-check?", NULL},
  {"<seq.>", NULL},
  {"<seq>", NULL},
  {"pop", NULL},
  {"suffix?", NULL},
  {"do2", NULL},
  {"range-check", NULL},
  {"push", NULL},
  {"sort-by", NULL},
  {"pos", NULL},
  {"sort", NULL},
  {"finds", NULL},
  {"cat2", NULL},
  {"del-dups", NULL},
  {"del-vals", NULL},
  {"cat", NULL},
  {"do-key-vals", NULL},
  {"rev", NULL},
  {"last", NULL},
  {"reject", NULL},
  {"vals-to-str", NULL},
  {"3rd", NULL},
  {"pick", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"join", NULL},
  {"1st", NULL},
  {"any2?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseq;
MODULE_INFO module_info_gooScolsSseq = {
  "goo/cols/seq",
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
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);

/* EXPRESSION: */

extern void load_module_gooScolsSseq (void);

void load_module_gooScolsSseq (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();

  (P)YgooScolsSseqY___main_0___();
  (P)YgooScolsSseqY___main_1___();
  (P)YgooScolsSseqY___main_2___();

}

/* END OF GENERATED CODE. */
