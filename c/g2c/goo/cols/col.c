/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/col");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(YgooSmathYlog,"goo/math","log");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yclass_gens,"goo/boot","class-gens");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YgooScolsScolYnul,"goo/cols/col","nul");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprops_of,"goo/boot","props-of");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSfunYfun_count_setter,"goo/fun","fun-count-setter");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
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
EXT(YgooSchrYeof_object,"goo/chr","eof-object");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSfunYfun_count,"goo/fun","fun-count");
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(Yerror,"goo/boot","error");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(YgooSfunYfun_src_loc,"goo/fun","fun-src-loc");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooSmathYrem,"goo/math","rem");
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
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmathYround_to,"goo/math","round-to");
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSfunYfun_src,"goo/fun","fun-src");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(YOrevX,"goo/boot","@rev!");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooStypesYDbot,"goo/types","$bot");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
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
EXT(YgooSmathYN,"goo/math","~");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSlogYNEE,"goo/log","~==");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
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

DEFLIT(lit_49);
DEFLIT(lit_122);
DEFLIT(lit_69);
DEFLIT(lit_108);
DEFLIT(lit_32);
DEFLIT(lit_109);
DEFLIT(lit_123);
DEFLIT(lit_60);
DEFLIT(lit_77);
DEFLIT(lit_62);
DEFLIT(lit_66);
DEFLIT(lit_84);
DEFLIT(lit_113);
DEFLIT(lit_70);
DEFLIT(lit_50);
DEFLIT(lit_63);
DEFLIT(lit_112);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_55);
DEFLIT(lit_89);
DEFLIT(lit_23);
DEFLIT(lit_57);
DEFLIT(lit_46);
DEFLIT(lit_87);
DEFLIT(lit_36);
DEFLIT(lit_103);
DEFLIT(lit_94);
DEFLIT(lit_80);
DEFLIT(lit_85);
DEFLIT(lit_40);
DEFLIT(lit_119);
DEFLIT(lit_100);
DEFLIT(lit_44);
DEFLIT(lit_83);
DEFLIT(lit_81);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_74);
DEFLIT(lit_56);
DEFLIT(lit_105);
DEFLIT(lit_18);
DEFLIT(lit_98);
DEFLIT(lit_110);
DEFLIT(lit_90);
DEFLIT(lit_71);
DEFLIT(lit_118);
DEFLIT(lit_78);
DEFLIT(lit_96);
DEFLIT(lit_17);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_107);
DEFLIT(lit_97);
DEFLIT(lit_65);
DEFLIT(lit_106);
DEFLIT(lit_12);
DEFLIT(lit_88);
DEFLIT(lit_59);
DEFLIT(lit_21);
DEFLIT(lit_30);
DEFLIT(lit_104);
DEFLIT(lit_48);
DEFLIT(lit_9);
DEFLIT(lit_116);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_75);
DEFLIT(lit_51);
DEFLIT(lit_117);
DEFLIT(lit_13);
DEFLIT(lit_120);
DEFLIT(lit_45);
DEFLIT(lit_114);
DEFLIT(lit_64);
DEFLIT(lit_54);
DEFLIT(lit_92);
DEFLIT(lit_53);
DEFLIT(lit_16);
DEFLIT(lit_95);
DEFLIT(lit_101);
DEFLIT(lit_22);
DEFLIT(lit_34);
DEFLIT(lit_93);
DEFLIT(lit_38);
DEFLIT(lit_7);
DEFLIT(lit_68);
DEFLIT(lit_42);
DEFLIT(lit_0);
DEFLIT(lit_11);
DEFLIT(lit_79);
DEFLIT(lit_47);
DEFLIT(lit_115);
DEFLIT(lit_25);
DEFLIT(lit_121);
DEFLIT(lit_10);
DEFLIT(lit_86);
DEFLIT(lit_19);
DEFLIT(lit_31);
DEFLIT(lit_99);
DEFLIT(lit_1);
DEFLIT(lit_91);
DEFLIT(lit_26);
DEFLIT(lit_29);
DEFLIT(lit_37);
DEFLIT(lit_41);
DEFLIT(lit_43);
DEFLIT(lit_82);
DEFLIT(lit_39);
DEFLIT(lit_3);
DEFLIT(lit_102);
DEFLIT(lit_28);
DEFLIT(lit_61);
DEFLIT(lit_67);
DEFLIT(lit_72);
DEFLIT(lit_73);
DEFLIT(lit_76);
DEFLIT(lit_20);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_111);
DEFLIT(lit_15);
DEFLIT(lit_58);
DEFLIT(lit_52);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_dup_1);
LOCFOR(fun_dup_2);
LOCFOR(fun_len_3);
LOCFOR(fun_elt_type_4);
LOCFOR(fun_key_type_5);
LOCFOR(fun_key_test_6);
LOCFOR(fun_nulQ_7);
LOCFOR(fun_nul_8);
LOCFOR(fun_elt_default_9);
LOCFOR(fun_fab_into_10);
LOCFOR(fun_fabs_11);
LOCFOR(fun_fab_fillX_12);
LOCFOR(fun_fill_13);
LOCFOR(fun_anyQ_14);
LOCFOR(fun_allQ_15);
LOCFOR(fun_fold_16);
LOCFOR(fun_foldA_17);
LOCFOR(fun_find_or_18);
LOCFOR(fun_find_19);
LOCFOR(fun_zap_20);
LOCFOR(fun_do_21);
LOCFOR(fun_map_22);
LOCFOR(fun_do_keyed_23);
LOCFOR(fun_map_keyed_24);
LOCFOR(fun_keys_25);
LOCFOR(fun_items_26);
LOCFOR(fun_27);
LOCFOR(fun_memQ_28);
LOCFOR(fun_col_res_type_29);
LOCFOR(fun_col_res_30);
LOCFOR(fun_E_31);
LOCFOR(fun_elt_32);
extern P YgooScolsScolY___main_0___ ();
extern P YgooScolsScolY___main_1___ ();
extern P YgooScolsScolY___main_2___ ();

/* FUNCTION CODES: */

LOCCODEDEF(fun_as_0) {
  P t_,x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  ARG(x_, 1);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,t_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T5);
    T3 = CALL2(1,VARREF(YgooScolsScolYfab_into),T4,x_);
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_dup_1) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),T2,T3);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_dup_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

LOCCODEDEF(fun_len_3) {
  P x_;
  P iF2931;
  P eF2930;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF2930 = T5;
  iF2931 = YPint((P)0);
  LOOP_53: {
    P a53_0,a53_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2930);
    if (T1 != YPfalse) {
      T0 = iF2931;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2930);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF2931,YPint((P)1));
      a53_0 = T3;
      a53_1 = T4;
      eF2930 = a53_0;
      iF2931 = a53_1;
      goto LOOP_53;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_type_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_key_type_5) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

LOCCODEDEF(fun_key_test_6) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

LOCCODEDEF(fun_nulQ_7) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSlogYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_nul_8) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_default_9) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

LOCCODEDEF(fun_fab_into_10) {
  P dst_,src_;
  P ssF2932;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  ssF2932 = T6;
  LOOP_54: {
    P a54_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ssF2932);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow),ssF2932);
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ssF2932);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,dst_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ssF2932);
      a54_0 = T5;
      ssF2932 = a54_0;
      goto LOOP_54;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fabs_11) {
  P c_,objects_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),c_,T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_into),T1,objects_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_fillX_12) {
  P dst_,src_;
  P dsF2933;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dsF2933 = T5;
  LOOP_55: {
    P a55_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),dsF2933);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow_key),dsF2933);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),src_,dst_,T2);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),dsF2933);
      a55_0 = T4;
      dsF2933 = a55_0;
      goto LOOP_55;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fill_13) {
  P dst_,val_;
  P T0,T1;
LINK_STACK();
  ARG(dst_, 0);
  ARG(val_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),dst_);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab_fillX),T1,val_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_anyQ_14) {
  P test_,c_;
  P tmpF2935;
  P eF2934;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2934 = T8;
  LOOP_56: {
    P a56_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2934);
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2934);
      T6 = CALL1(0,test_,T7);
      T5 = CALL1(1,VARREF(YgooSlogYas_log),T6);
      tmpF2935 = T5;
      if (tmpF2935 != YPfalse) {
        T2 = tmpF2935;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2934);
        a56_0 = T4;
        eF2934 = a56_0;
        goto LOOP_56;
        T2 = T3;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_allQ_15) {
  P test_,c_;
  P tmpF2937;
  P eF2936;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2936 = T7;
  LOOP_57: {
    P a57_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2936);
    tmpF2937 = T6;
    if (tmpF2937 != YPfalse) {
      T0 = tmpF2937;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF2936);
      T2 = CALL1(0,test_,T3);
      if (T2 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2936);
        a57_0 = T5;
        eF2936 = a57_0;
        goto LOOP_57;
        T1 = T4;
      } else {
        T1 = YPfalse;
      }
      T0 = T1;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fold_16) {
  P combine_,init_,c_;
  P eF2939;
  P resF2938;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF2938 = init_;
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2939 = T6;
  LOOP_58: {
    P a58_0,a58_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2939);
    if (T1 != YPfalse) {
      T0 = resF2938;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2939);
      T3 = CALL2(0,combine_,resF2938,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2939);
      a58_0 = T3;
      a58_1 = T5;
      resF2938 = a58_0;
      eF2939 = a58_1;
      goto LOOP_58;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_foldA_17) {
  P combine_,c_;
  P eF2943;
  P resF2942;
  P initF2941;
  P eF2940;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2940 = T8;
  T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2940);
  initF2941 = T7;
  resF2942 = initF2941;
  T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2940);
  eF2943 = T6;
  LOOP_59: {
    P a59_0,a59_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2943);
    if (T1 != YPfalse) {
      T0 = resF2942;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2943);
      T3 = CALL2(0,combine_,resF2942,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2943);
      a59_0 = T3;
      a59_1 = T5;
      resF2942 = a59_0;
      eF2943 = a59_1;
      goto LOOP_59;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_or_18) {
  P f_,c_,default_;
  P eF2944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2944 = T8;
  LOOP_60: {
    P a60_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2944);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2944);
      T3 = CALL1(0,f_,T4);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2944);
        T2 = T5;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2944);
        a60_0 = T7;
        eF2944 = a60_0;
        goto LOOP_60;
        T2 = T6;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_find_19) {
  P f_,c_;
  P valF2945;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF2945 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF2945,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T0 = T2;
  } else {
    T0 = valF2945;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_zap_20) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(YgooScolsScolYnul),T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_21) {
  P f_,c_;
  P eF2946;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2946 = T6;
  LOOP_61: {
    P a61_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2946);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF2946);
      CALL1(0,f_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2946);
      a61_0 = T5;
      eF2946 = a61_0;
      goto LOOP_61;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_22) {
  P f_,c_;
  P eF2948;
  P resF2947;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF2947 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2948 = T9;
  LOOP_62: {
    P a62_0,a62_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2948);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF2947);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2948);
      T3 = CALL1(1,f_,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2948);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF2947,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2948);
      a62_0 = resF2947;
      a62_1 = T7;
      resF2947 = a62_0;
      eF2948 = a62_1;
      goto LOOP_62;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_do_keyed_23) {
  P f_,c_;
  P eF2949;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2949 = T7;
  LOOP_63: {
    P a63_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2949);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2949);
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2949);
      CALL2(1,f_,T3,T4);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2949);
      a63_0 = T6;
      eF2949 = a63_0;
      goto LOOP_63;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_map_keyed_24) {
  P f_,c_;
  P keyF2952;
  P eF2951;
  P resF2950;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF2950 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2951 = T9;
  LOOP_64: {
    P a64_0,a64_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2951);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF2950);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2951);
      keyF2952 = T7;
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF2951);
      T3 = CALL2(0,f_,keyF2952,T4);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF2950,keyF2952);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2951);
      a64_0 = resF2950;
      a64_1 = T6;
      resF2950 = a64_0;
      eF2951 = a64_1;
      goto LOOP_64;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_keys_25) {
  P c_;
  P eF2954;
  P resF2953;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  resF2953 = Ynil;
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2954 = T7;
  LOOP_65: {
    P a65_0,a65_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2954);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2953);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2954);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF2953,T5);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2954);
      a65_0 = T4;
      a65_1 = T6;
      resF2953 = a65_0;
      eF2954 = a65_1;
      goto LOOP_65;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_items_26) {
  P c_;
  P eF2956;
  P resF2955;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  resF2955 = Ynil;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF2956 = T9;
  LOOP_66: {
    P a66_0,a66_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF2956);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF2955);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF2956);
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF2956);
      T5 = CALL2(1,VARREF(Ytup),T6,T7);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF2955,T5);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF2956);
      a66_0 = T4;
      a66_1 = T8;
      resF2955 = a66_0;
      eF2956 = a66_1;
      goto LOOP_66;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_27) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_memQ_28) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_27,1,x_);
  T0 = CALL2(1,VARREF(YgooStypesYanyQ),T1,c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_res_type_29) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_col_res_30) {
  P c_,x_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYcol_res_type),c_);
  T0 = CALL2(1,VARREF(YgooStypesYas),T1,x_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_E_31) {
  P c1_,c2_;
  P e1F2957;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSlogYE),T2,T3);
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    e1F2957 = T13;
    LOOP_67: {
      P a67_0;
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F2957);
      if (T5 != YPfalse) {
        T4 = YPtrue;
      } else {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),e1F2957);
        T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),e1F2957);
        T9 = CALL3(1,VARREF(YgooScolsScolYelt_or),c2_,T10,VARREF(YgooScolsScolYDeq_nul));
        T7 = CALL2(1,VARREF(YgooSlogYE),T8,T9);
        if (T7 != YPfalse) {
          T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F2957);
          a67_0 = T12;
          e1F2957 = a67_0;
          goto LOOP_67;
          T6 = T11;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
    }
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_elt_32) {
  P c_,key_;
  P valF2958;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF2958 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF2958,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T0 = T2;
  } else {
    T0 = valF2958;
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsScolY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
DEFCREGS();
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_0),LITREF(lit_1),YPfalse);
  VARSET(YgooStypesYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_2),LITREF(lit_3),YPfalse);
  VARSET(YgooSmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-or");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"k"),YPPsym((P)"default"));
  T5 = YPfab_sig(YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_4),LITREF(lit_5),YPfalse);
  VARSET(YgooScolsScolYelt_or,T4);
  lit_6 = YPPsym((P)"elt-type");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_6),LITREF(lit_7),YPfalse);
  VARSET(YgooScolsScolYelt_type,T6);
  lit_8 = YPPsym((P)"elt-default");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_8),LITREF(lit_9),YPfalse);
  VARSET(YgooScolsScolYelt_default,T8);
  lit_10 = YPPsym((P)"key-type");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_10),LITREF(lit_11),YPfalse);
  VARSET(YgooScolsScolYkey_type,T10);
  lit_12 = YPPsym((P)"key-test");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_12),LITREF(lit_13),YPfalse);
  VARSET(YgooScolsScolYkey_test,T12);
  lit_14 = YPPsym((P)"elts");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_14),LITREF(lit_15),YPfalse);
  VARSET(YgooScolsScolYelts,T14);
  lit_16 = YPPsym((P)"nul?");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_16),LITREF(lit_17),YPfalse);
  VARSET(YgooSmacrosYnulQ,T16);
  lit_18 = YPPsym((P)"nul");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPfab_sig(YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_18),LITREF(lit_19),YPfalse);
  VARSET(YgooScolsScolYnul,T18);
  VARSET(YgooScolsScolYemptyQ,VARREF(YgooSmacrosYnulQ));
  VARSET(YgooScolsScolYempty,VARREF(YgooScolsScolYnul));
  lit_20 = YPPsym((P)"add");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPfab_gen(T22,LITREF(lit_20),LITREF(lit_21),YPfalse);
  VARSET(YgooScolsScolYadd,T21);
  lit_22 = YPPsym((P)"dup");
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T23 = YPfab_gen(T24,LITREF(lit_22),LITREF(lit_23),YPfalse);
  VARSET(YgooScolsScolYdup,T23);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T26 = YPfab_sig(YPPlist(2,T27,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T25 = YPfab_gen(T26,LITREF(lit_24),LITREF(lit_25),YPfalse);
  VARSET(YgooScolsScolYfab,T25);
  lit_26 = YPPsym((P)"col");
  lit_27 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T29 = YPfab_sig(YPPlist(1,T30),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_26),LITREF(lit_27),YPfalse);
  VARSET(YgooScolsScolYcol,T28);
  lit_28 = YPPsym((P)"fabs");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"elts"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPfab_sig(YPPlist(1,T33),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T31 = YPfab_gen(T32,LITREF(lit_28),LITREF(lit_29),YPfalse);
  VARSET(YgooSchrYfabs,T31);
  lit_30 = YPPsym((P)"fill");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"val"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_30),LITREF(lit_31),YPfalse);
  VARSET(YgooScolsScolYfill,T34);
  lit_32 = YPPsym((P)"any?");
  lit_33 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_32),LITREF(lit_33),YPfalse);
  T37 = VARSET(YgooStypesYanyQ,T38);
  T36 = T37;
  return T36;
}

P YgooScolsScolY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
DEFCREGS();
  lit_34 = YPPsym((P)"all?");
  lit_35 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T1 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_34),LITREF(lit_35),YPfalse);
  VARSET(YgooScolsScolYallQ,T0);
  lit_36 = YPPsym((P)"fold");
  lit_37 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"x"));
  T3 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_36),LITREF(lit_37),YPfalse);
  VARSET(YgooScolsScolYfold,T2);
  lit_38 = YPPsym((P)"fold+");
  lit_39 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"x"));
  T5 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T4 = YPfab_gen(T5,LITREF(lit_38),LITREF(lit_39),YPfalse);
  VARSET(YgooScolsScolYfoldA,T4);
  lit_40 = YPPsym((P)"find-or");
  lit_41 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"default"));
  T7 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T6 = YPfab_gen(T7,LITREF(lit_40),LITREF(lit_41),YPfalse);
  VARSET(YgooScolsScolYfind_or,T6);
  lit_42 = YPPsym((P)"find");
  lit_43 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPfab_gen(T9,LITREF(lit_42),LITREF(lit_43),YPfalse);
  VARSET(YgooScolsScolYfind,T8);
  lit_44 = YPPsym((P)"del");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T11 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T10 = YPfab_gen(T11,LITREF(lit_44),LITREF(lit_45),YPfalse);
  VARSET(YgooScolsScolYdel,T10);
  lit_46 = YPPsym((P)"zap");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T12 = YPfab_gen(T13,LITREF(lit_46),LITREF(lit_47),YPfalse);
  VARSET(YgooScolsScolYzap,T12);
  lit_48 = YPPsym((P)"do");
  lit_49 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T15 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T14 = YPfab_gen(T15,LITREF(lit_48),LITREF(lit_49),YPfalse);
  VARSET(YgooSmacrosYdo,T14);
  lit_50 = YPPsym((P)"mem?");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T16 = YPfab_gen(T17,LITREF(lit_50),LITREF(lit_51),YPfalse);
  VARSET(YgooScolsScolYmemQ,T16);
  lit_52 = YPPsym((P)"keys");
  lit_53 = YPPlist(1,YPPsym((P)"c"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T18 = YPfab_gen(T19,LITREF(lit_52),LITREF(lit_53),YPfalse);
  VARSET(YgooScolsScolYkeys,T18);
  lit_54 = YPPsym((P)"items");
  lit_55 = YPPlist(1,YPPsym((P)"c"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T20 = YPfab_gen(T21,LITREF(lit_54),LITREF(lit_55),YPfalse);
  VARSET(YgooScolsScolYitems,T20);
  lit_56 = YPPsym((P)"col-res-type");
  lit_57 = YPPlist(1,YPPsym((P)"c"));
  T23 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T22 = YPfab_gen(T23,LITREF(lit_56),LITREF(lit_57),YPfalse);
  VARSET(YgooScolsScolYcol_res_type,T22);
  lit_58 = YPPsym((P)"<enum>");
  T25 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T24 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_58),T25);
  VARSET(YgooScolsScolYLenumG,T24);
  lit_59 = YPPsym((P)"enum");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T26 = YPfab_gen(T27,LITREF(lit_59),LITREF(lit_60),YPfalse);
  VARSET(YgooScolsScolYenum,T26);
  lit_61 = YPPsym((P)"fin?");
  lit_62 = YPPlist(1,YPPsym((P)"e"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T28 = YPfab_gen(T29,LITREF(lit_61),LITREF(lit_62),YPfalse);
  VARSET(YgooScolsScolYfinQ,T28);
  lit_63 = YPPsym((P)"nxt");
  lit_64 = YPPlist(1,YPPsym((P)"e"));
  T31 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T30 = YPfab_gen(T31,LITREF(lit_63),LITREF(lit_64),YPfalse);
  VARSET(YgooScolsScolYnxt,T30);
  lit_65 = YPPsym((P)"now");
  lit_66 = YPPlist(1,YPPsym((P)"e"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T32 = YPfab_gen(T33,LITREF(lit_65),LITREF(lit_66),YPfalse);
  VARSET(YgooScolsScolYnow,T32);
  lit_67 = YPPsym((P)"now-setter");
  lit_68 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T35 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T34 = YPfab_gen(T35,LITREF(lit_67),LITREF(lit_68),YPfalse);
  VARSET(YgooScolsScolYnow_setter,T34);
  lit_69 = YPPsym((P)"now-key");
  lit_70 = YPPlist(1,YPPsym((P)"e"));
  T37 = YPfab_sig(YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T36 = YPfab_gen(T37,LITREF(lit_69),LITREF(lit_70),YPfalse);
  VARSET(YgooScolsScolYnow_key,T36);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T38 = YPfab_gen(T39,LITREF(lit_71),LITREF(lit_72),YPfalse);
  VARSET(YgooScolsScolYdo_keyed,T38);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T41 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T40 = YPfab_gen(T41,LITREF(lit_73),LITREF(lit_74),YPfalse);
  VARSET(YgooScolsScolYmap_keyed,T40);
  lit_75 = YPPsym((P)"map");
  lit_76 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T43 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T42 = YPfab_gen(T43,LITREF(lit_75),LITREF(lit_76),YPfalse);
  VARSET(YgooSmacrosYmap,T42);
  lit_77 = YPPsym((P)"fab-into");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T44 = YPfab_gen(T45,LITREF(lit_77),LITREF(lit_78),YPfalse);
  VARSET(YgooScolsScolYfab_into,T44);
  lit_79 = YPPsym((P)"fab-fill!");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T47 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T46 = YPfab_gen(T47,LITREF(lit_79),LITREF(lit_80),YPfalse);
  VARSET(YgooScolsScolYfab_fillX,T46);
  lit_81 = YPPsym((P)"low-elt");
  lit_82 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T51 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T50 = YPfab_gen(T51,LITREF(lit_81),LITREF(lit_82),YPfalse);
  T49 = VARSET(YgooScolsScolYlow_elt,T50);
  T48 = T49;
  return T48;
}

P YgooScolsScolY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139;
DEFCREGS();
  lit_83 = YPPsym((P)"fab-elt-setter");
  lit_84 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T1 = YPfab_sig(YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T0 = YPfab_gen(T1,LITREF(lit_83),LITREF(lit_84),YPfalse);
  VARSET(YgooScolsScolYfab_elt_setter,T0);
  lit_85 = YPPsym((P)"col-res");
  lit_86 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T3 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T2 = YPfab_gen(T3,LITREF(lit_85),LITREF(lit_86),YPfalse);
  VARSET(YgooScolsScolYcol_res,T2);
  lit_87 = YPPsym((P)"as");
  lit_88 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T5 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T4 = YPfab_sig(YPPlist(2,T5,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPfab_met(FUNCODEREF(fun_as_0),T4,LITREF(lit_87),LITREF(lit_88),sloc(74),YPsb((P)"(fun ((t (t< <col>)) (x <col>) => <col>) (if (== (class-of x) t) x (fab-into (fab t (len x)) x)))"));
  T7 = VARREF_OR(YgooStypesYas,YPfalse);
  T8 = fun_as_0;
  T6 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T7,T8);
  VARSET(YgooStypesYas,T6);
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_dup_1 = YPfab_met(FUNCODEREF(fun_dup_1),T9,LITREF(lit_22),LITREF(lit_89),sloc(79),YPsb((P)"(fun ((x <col>) => <col>) (fab-into (fab (class-of x) (len x)) x))"));
  T11 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T12 = fun_dup_1;
  T10 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T11,T12);
  VARSET(YgooScolsScolYdup,T10);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPfab_sig(YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_2 = YPfab_met(FUNCODEREF(fun_dup_2),T13,LITREF(lit_22),LITREF(lit_90),sloc(83),YPsb((P)"(fun ((x <col.>) => <col.>) x)"));
  T15 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T16 = fun_dup_2;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YgooScolsScolYdup,T14);
  lit_91 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_3 = YPfab_met(FUNCODEREF(fun_len_3),T17,LITREF(lit_0),LITREF(lit_91),sloc(88),YPsb((P)"(fun ((x <col>) => <int>) (rep count ((e (enum x)) (i 0)) (if (fin? e) i (count (nxt e) (+ i 1)))))"));
  T19 = VARREF_OR(YgooStypesYlen,YPfalse);
  T20 = fun_len_3;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooStypesYlen,T18);
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_4 = YPfab_met(FUNCODEREF(fun_elt_type_4),T21,LITREF(lit_6),LITREF(lit_92),sloc(92),YPsb((P)"(fun ((x <col>) => <type>) <any>)"));
  T23 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T24 = fun_elt_type_4;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooScolsScolYelt_type,T22);
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_5 = YPfab_met(FUNCODEREF(fun_key_type_5),T25,LITREF(lit_10),LITREF(lit_93),sloc(93),YPsb((P)"(fun ((x <col>) => <type>) <any>)"));
  T27 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T28 = fun_key_type_5;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYkey_type,T26);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_6 = YPfab_met(FUNCODEREF(fun_key_test_6),T29,LITREF(lit_12),LITREF(lit_94),sloc(94),YPsb((P)"(fun ((x <col>) => <fun>) ==)"));
  T31 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T32 = fun_key_test_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsScolYkey_test,T30);
  lit_95 = YPPlist(1,YPPsym((P)"c"));
  T33 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_nulQ_7 = YPfab_met(FUNCODEREF(fun_nulQ_7),T33,LITREF(lit_16),LITREF(lit_95),sloc(100),YPsb((P)"(fun ((c <col>) => <log>) (= (len c) 0))"));
  T35 = VARREF_OR(YgooSmacrosYnulQ,YPfalse);
  T36 = fun_nulQ_7;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooSmacrosYnulQ,T34);
  lit_96 = YPPlist(1,YPPsym((P)"c"));
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T37 = YPfab_sig(YPPlist(1,T38),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_nul_8 = YPfab_met(FUNCODEREF(fun_nul_8),T37,LITREF(lit_18),LITREF(lit_96),sloc(103),YPsb((P)"(fun ((c (t< <col>)) => <col>) (fab c 0))"));
  T40 = VARREF_OR(YgooScolsScolYnul,YPfalse);
  T41 = fun_nul_8;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooScolsScolYnul,T39);
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_9 = YPfab_met(FUNCODEREF(fun_elt_default_9),T42,LITREF(lit_8),LITREF(lit_97),sloc(106),YPsb((P)"(fun ((x <col>) => <any>) #f)"));
  T44 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T45 = fun_elt_default_9;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsScolYelt_default,T43);
  lit_98 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T46 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_10 = YPfab_met(FUNCODEREF(fun_fab_into_10),T46,LITREF(lit_77),LITREF(lit_98),sloc(111),YPsb((P)"(fun ((dst <col>) (src <col>) => <col>) (rep in ((ss (enum src))) (if (fin? ss) dst (seq (set (fab-elt dst (now-key ss)) (now ss)) (in (nxt ss))))))"));
  T48 = VARREF_OR(YgooScolsScolYfab_into,YPfalse);
  T49 = fun_fab_into_10;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsScolYfab_into,T47);
  lit_99 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T51 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T50 = YPfab_sig(YPPlist(1,T51),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_11 = YPfab_met(FUNCODEREF(fun_fabs_11),T50,LITREF(lit_28),LITREF(lit_99),sloc(118),YPsb((P)"(fun ((c (t< <col>)) (objects ...) => <col>) (fab-into (fab c (len objects)) objects))"));
  T53 = VARREF_OR(YgooSchrYfabs,YPfalse);
  T54 = fun_fabs_11;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSchrYfabs,T52);
  lit_100 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T55 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_12 = YPfab_met(FUNCODEREF(fun_fab_fillX_12),T55,LITREF(lit_79),LITREF(lit_100),sloc(121),YPsb((P)"(fun ((dst <col>) src => <col>) (rep in ((ds (enum dst))) (if (fin? ds) dst (seq (set (fab-elt dst (now-key ds)) src) (in (nxt ds))))))"));
  T57 = VARREF_OR(YgooScolsScolYfab_fillX,YPfalse);
  T58 = fun_fab_fillX_12;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooScolsScolYfab_fillX,T56);
  lit_101 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T59 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_13 = YPfab_met(FUNCODEREF(fun_fill_13),T59,LITREF(lit_30),LITREF(lit_101),sloc(128),YPsb((P)"(fun ((dst <col>) val => <col>) (fab-fill! (dup dst) val))"));
  T61 = VARREF_OR(YgooScolsScolYfill,YPfalse);
  T62 = fun_fill_13;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooScolsScolYfill,T60);
  lit_102 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T63 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_14 = YPfab_met(FUNCODEREF(fun_anyQ_14),T63,LITREF(lit_32),LITREF(lit_102),sloc(131),YPsb((P)"(fun ((test <fun>) (c <col>) => <log>) (rep fnd ((e (enum c))) (if (fin? e) #f (or (as-log (test (now e))) (fnd (nxt e))))))"));
  T65 = VARREF_OR(YgooStypesYanyQ,YPfalse);
  T66 = fun_anyQ_14;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooStypesYanyQ,T64);
  lit_103 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T67 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_15 = YPfab_met(FUNCODEREF(fun_allQ_15),T67,LITREF(lit_34),LITREF(lit_103),sloc(137),YPsb((P)"(fun ((test <fun>) (c <col>) => <log>) (rep fnd ((e (enum c))) (or (fin? e) (and (test (now e)) (fnd (nxt e))))))"));
  T69 = VARREF_OR(YgooScolsScolYallQ,YPfalse);
  T70 = fun_allQ_15;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YgooScolsScolYallQ,T68);
  lit_104 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T71 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_16 = YPfab_met(FUNCODEREF(fun_fold_16),T71,LITREF(lit_36),LITREF(lit_104),sloc(142),YPsb((P)"(fun ((combine <fun>) init (c <col>) => <any>) (rep red ((res init) (e (enum c))) (if (fin? e) res (red (combine res (now e)) (nxt e)))))"));
  T73 = VARREF_OR(YgooScolsScolYfold,YPfalse);
  T74 = fun_fold_16;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooScolsScolYfold,T72);
  lit_105 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  T75 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_17 = YPfab_met(FUNCODEREF(fun_foldA_17),T75,LITREF(lit_38),LITREF(lit_105),sloc(148),YPsb((P)"(fun ((combine <fun>) (c <col>) => <any>) (def e (enum c)) (def init (now e)) (rep red ((res init) (e (nxt e))) (if (fin? e) res (red (combine res (now e)) (nxt e)))))"));
  T77 = VARREF_OR(YgooScolsScolYfoldA,YPfalse);
  T78 = fun_foldA_17;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooScolsScolYfoldA,T76);
  lit_106 = YPPsym((P)"<elt-default>");
  T80 = XCALL2(1,VARREF(Yfab_pair),VARREF(YLanyG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_106),T80);
  VARSET(YgooScolsScolYLelt_defaultG,T79);
  T81 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T81);
  lit_107 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  T82 = YPfab_sig(YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_18 = YPfab_met(FUNCODEREF(fun_find_or_18),T82,LITREF(lit_40),LITREF(lit_107),sloc(159),YPsb((P)"(fun ((f <fun>) (c <col>) default => <any>) (rep fnd ((e (enum c))) (if (fin? e) default (if (f (now e)) (now-key e) (fnd (nxt e))))))"));
  T84 = VARREF_OR(YgooScolsScolYfind_or,YPfalse);
  T85 = fun_find_or_18;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooScolsScolYfind_or,T83);
  lit_108 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T86 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_19 = YPfab_met(FUNCODEREF(fun_find_19),T86,LITREF(lit_42),LITREF(lit_108),sloc(165),YPsb((P)"(fun ((f <fun>) (c <col>) => <any>) (def val (find-or f c $elt-default)) (if (== val $elt-default) (range-error c f) val))"));
  T88 = VARREF_OR(YgooScolsScolYfind,YPfalse);
  T89 = fun_find_19;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooScolsScolYfind,T87);
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  T90 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_20 = YPfab_met(FUNCODEREF(fun_zap_20),T90,LITREF(lit_46),LITREF(lit_109),sloc(171),YPsb((P)"(fun ((x <col>) => <col>) (nul (class-of x)))"));
  T92 = VARREF_OR(YgooScolsScolYzap,YPfalse);
  T93 = fun_zap_20;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YgooScolsScolYzap,T91);
  lit_110 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T94 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_21 = YPfab_met(FUNCODEREF(fun_do_21),T94,LITREF(lit_48),LITREF(lit_110),sloc(174),YPsb((P)"(fun ((f <fun>) (c <col>)) (rep lop ((e (enum c))) (unless (fin? e) (f (now e)) (lop (nxt e)))))"));
  T96 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T97 = fun_do_21;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSmacrosYdo,T95);
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T98 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_22 = YPfab_met(FUNCODEREF(fun_map_22),T98,LITREF(lit_75),LITREF(lit_111),sloc(179),YPsb((P)"(fun ((f <fun>) (c <col>) => <col>) (rep con ((res (fab <tab> 0)) (e (enum c))) (if (fin? e) (col-res c res) (seq (set (fab-elt res (now-key e)) (f (now e))) (con res (nxt e))))))"));
  T100 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T101 = fun_map_22;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YgooSmacrosYmap,T99);
  lit_112 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T102 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_23 = YPfab_met(FUNCODEREF(fun_do_keyed_23),T102,LITREF(lit_71),LITREF(lit_112),sloc(186),YPsb((P)"(fun ((f <fun>) (c <col>)) (rep lop ((e (enum c))) (unless (fin? e) (f (now-key e) (now e)) (lop (nxt e)))))"));
  T104 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T105 = fun_do_keyed_23;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YgooScolsScolYdo_keyed,T103);
  lit_113 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T106 = YPfab_sig(YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_24 = YPfab_met(FUNCODEREF(fun_map_keyed_24),T106,LITREF(lit_73),LITREF(lit_113),sloc(191),YPsb((P)"(fun ((f <fun>) (c <col>) => <col>) (rep con ((res (fab <tab> 0)) (e (enum c))) (if (fin? e) (col-res c res) (let ((key (now-key e))) (set (fab-elt res key) (f key (now e))) (con res (nxt e))))))"));
  T108 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T109 = fun_map_keyed_24;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooScolsScolYmap_keyed,T107);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  T110 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_25 = YPfab_met(FUNCODEREF(fun_keys_25),T110,LITREF(lit_52),LITREF(lit_114),sloc(199),YPsb((P)"(fun ((c <col>) => <seq>) (rep con ((res '()) (e (enum c))) (if (fin? e) (rev! res) (con (add res (now-key e)) (nxt e)))))"));
  T112 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T113 = fun_keys_25;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooScolsScolYkeys,T111);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  T114 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_26 = YPfab_met(FUNCODEREF(fun_items_26),T114,LITREF(lit_54),LITREF(lit_115),sloc(205),YPsb((P)"(fun ((c <col>) => <seq>) (rep con ((res '()) (e (enum c))) (if (fin? e) (rev! res) (con (add res (tup (now-key e) (now e))) (nxt e)))))"));
  T116 = VARREF_OR(YgooScolsScolYitems,YPfalse);
  T117 = fun_items_26;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YgooScolsScolYitems,T115);
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"y"));
  T119 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPfab_met(FUNCODEREF(fun_27),T119,YPfalse,LITREF(lit_117),sloc(212),YPsb((P)"(fun (y) (== y x))"));
  T118 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_28 = YPfab_met(FUNCODEREF(fun_memQ_28),T118,LITREF(lit_50),LITREF(lit_116),sloc(211),YPsb((P)"(fun ((c <col>) x => <log>) (any? (fun (y) (== y x)) c))"));
  T121 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T122 = fun_memQ_28;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YgooScolsScolYmemQ,T120);
  lit_118 = YPPlist(1,YPPsym((P)"c"));
  T123 = YPfab_sig(YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_29 = YPfab_met(FUNCODEREF(fun_col_res_type_29),T123,LITREF(lit_56),LITREF(lit_118),sloc(214),YPsb((P)"(fun ((c <col>) => <type>) (class-of c))"));
  T125 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T126 = fun_col_res_type_29;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YgooScolsScolYcol_res_type,T124);
  lit_119 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T127 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_col_res_30 = YPfab_met(FUNCODEREF(fun_col_res_30),T127,LITREF(lit_85),LITREF(lit_119),sloc(219),YPsb((P)"(fun ((c <col>) (x <col>) => <col>) (as (col-res-type c) x))"));
  T129 = VARREF_OR(YgooScolsScolYcol_res,YPfalse);
  T130 = fun_col_res_30;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YgooScolsScolYcol_res,T128);
  lit_120 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_120));
  lit_121 = YPPsym((P)"=");
  lit_122 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T131 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_31 = YPfab_met(FUNCODEREF(fun_E_31),T131,LITREF(lit_121),LITREF(lit_122),sloc(224),YPsb((P)"(fun ((c1 <col>) (c2 <col>) => <log>) (and (= (len c1) (len c2)) (rep eq ((e1 (enum c1))) (if (fin? e1) #t (and (= (now e1) (elt-or c2 (now-key e1) $eq-nul)) (eq (nxt e1)))))))"));
  T133 = VARREF_OR(YgooSlogYE,YPfalse);
  T134 = fun_E_31;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YgooSlogYE,T132);
  lit_123 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T135 = YPfab_sig(YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_32 = YPfab_met(FUNCODEREF(fun_elt_32),T135,LITREF(lit_2),LITREF(lit_123),sloc(232),YPsb((P)"(fun ((c <col>) (key <any>) => <any>) (def val (elt-or c key $elt-default)) (if (== val $elt-default) (range-error c key) val))"));
  T137 = VARREF_OR(YgooSmacrosYelt,YPfalse);
  T138 = fun_elt_32;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YgooSmacrosYelt,T136);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T139 = YPfalse;
  return T139;
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
extern MODULE_INFO module_info_gooSmath;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSany},
  {&module_info_gooSlog},
  {&module_info_gooSchr},
  {&module_info_gooSmath},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
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
  {"div", &module_info_gooSmath, NULL},
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
  {"sqrt", &module_info_gooSmath, NULL},
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
  {"asin", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
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
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
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
  {"atan", &module_info_gooSmath, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
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
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"$pi", &module_info_gooSmath, NULL},
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
  {"neg?", &module_info_gooSmath, NULL},
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
  {"eof-object", &module_info_gooSchr, NULL},
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
  {"<<", &module_info_gooSmath, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
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
  {"ceil/", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
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
  {"tanh", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
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
  {">>>", &module_info_gooSmath, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
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
  {"char->ascii", &module_info_gooSchr, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
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
  {"to-upper", &module_info_gooSchr, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"round-to", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSfun, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"$bot", &module_info_gooStypes, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
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
  {"~", &module_info_gooSmath, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
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
  {"mod+", &module_info_gooSmath, NULL},
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
  {"-", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
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
  {"logn", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
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
  {"add", CVAR, &YgooScolsScolYadd},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"empty?", CVAR, &YgooScolsScolYemptyQ},
  {"nul", CVAR, &YgooScolsScolYnul},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"---main-0---", PVAR, NULL},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"now", CVAR, &YgooScolsScolYnow},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"---main-1---", PVAR, NULL},
  {"---main-2---", PVAR, NULL},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"items", CVAR, &YgooScolsScolYitems},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"col", CVAR, &YgooScolsScolYcol},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"into", CVAR, &YgooScolsScolYinto},
  {"del", CVAR, &YgooScolsScolYdel},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"find", CVAR, &YgooScolsScolYfind},
  {"empty", CVAR, &YgooScolsScolYempty},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add", NULL},
  {"col-res", NULL},
  {"find-or", NULL},
  {"empty?", NULL},
  {"nul", NULL},
  {"<tab>", NULL},
  {"nul?", NULL},
  {"fold+", NULL},
  {"fab-elt-setter", NULL},
  {"nxt", NULL},
  {"now-key", NULL},
  {"keys", NULL},
  {"now", NULL},
  {"low-elt", NULL},
  {"elts", NULL},
  {"fold", NULL},
  {"<enum>", NULL},
  {"key-test", NULL},
  {"fin?", NULL},
  {"fab-fill!", NULL},
  {"all?", NULL},
  {"enum", NULL},
  {"col-res-type", NULL},
  {"key-type", NULL},
  {"fab-into", NULL},
  {"items", NULL},
  {"elt-default", NULL},
  {"any?", NULL},
  {"elt-type", NULL},
  {"map", NULL},
  {"fill", NULL},
  {"mem?", NULL},
  {"<col.>", NULL},
  {"map-keyed", NULL},
  {"fabs", NULL},
  {"<col>", NULL},
  {"do", NULL},
  {"elt-or", NULL},
  {"do-keyed", NULL},
  {"col", NULL},
  {"zap", NULL},
  {"elt", NULL},
  {"into", NULL},
  {"del", NULL},
  {"len", NULL},
  {"fab", NULL},
  {"now-setter", NULL},
  {"dup", NULL},
  {"find", NULL},
  {"empty", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsScol;
MODULE_INFO module_info_gooScolsScol = {
  "goo/cols/col",
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
extern void load_module_gooSmath (void);

/* EXPRESSION: */

extern void load_module_gooScolsScol (void);

void load_module_gooScolsScol (void) {
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
  load_module_gooSmath();

  (P)YgooScolsScolY___main_0___();
  (P)YgooScolsScolY___main_1___();
  (P)YgooScolsScolY___main_2___();

}

/* END OF GENERATED CODE. */
