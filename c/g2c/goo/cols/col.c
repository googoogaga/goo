/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/col");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/col */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
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
DEF(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooScolsScolYfind_or,"goo/cols/col","find-or");
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
EXT(YgooSclassYobject_class,"goo/class","object-class");
DEF(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
DEF(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YgooScolsScolYLelt_defaultG,"goo/cols/col","<elt-default>");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooScolsScolYfab,"goo/cols/col","fab");
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
DEF(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooScolsScolYDelt_default,"goo/cols/col","$elt-default");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
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
DEF(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
DEF(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
DEF(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
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
DEF(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YgooScolsScolYDeq_nul,"goo/cols/col","$eq-nul");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
DEF(YgooScolsScolYnow_key,"goo/cols/col","now-key");
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
DEF(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
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
DEF(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
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
DEF(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
DEF(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
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
DEF(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_109);
DEFLIT(lit_27);
DEFLIT(lit_83);
DEFLIT(lit_31);
DEFLIT(lit_35);
DEFLIT(lit_26);
DEFLIT(lit_30);
DEFLIT(lit_95);
DEFLIT(lit_67);
DEFLIT(lit_62);
DEFLIT(lit_100);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_107);
DEFLIT(lit_113);
DEFLIT(lit_90);
DEFLIT(lit_48);
DEFLIT(lit_58);
DEFLIT(lit_93);
DEFLIT(lit_54);
DEFLIT(lit_59);
DEFLIT(lit_11);
DEFLIT(lit_79);
DEFLIT(lit_53);
DEFLIT(lit_85);
DEFLIT(lit_119);
DEFLIT(lit_34);
DEFLIT(lit_20);
DEFLIT(lit_65);
DEFLIT(lit_120);
DEFLIT(lit_77);
DEFLIT(lit_8);
DEFLIT(lit_78);
DEFLIT(lit_37);
DEFLIT(lit_42);
DEFLIT(lit_47);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_122);
DEFLIT(lit_108);
DEFLIT(lit_13);
DEFLIT(lit_115);
DEFLIT(lit_57);
DEFLIT(lit_9);
DEFLIT(lit_87);
DEFLIT(lit_102);
DEFLIT(lit_88);
DEFLIT(lit_91);
DEFLIT(lit_98);
DEFLIT(lit_106);
DEFLIT(lit_21);
DEFLIT(lit_97);
DEFLIT(lit_103);
DEFLIT(lit_81);
DEFLIT(lit_114);
DEFLIT(lit_14);
DEFLIT(lit_7);
DEFLIT(lit_70);
DEFLIT(lit_3);
DEFLIT(lit_56);
DEFLIT(lit_123);
DEFLIT(lit_6);
DEFLIT(lit_105);
DEFLIT(lit_28);
DEFLIT(lit_39);
DEFLIT(lit_92);
DEFLIT(lit_71);
DEFLIT(lit_4);
DEFLIT(lit_49);
DEFLIT(lit_24);
DEFLIT(lit_63);
DEFLIT(lit_22);
DEFLIT(lit_41);
DEFLIT(lit_86);
DEFLIT(lit_66);
DEFLIT(lit_17);
DEFLIT(lit_38);
DEFLIT(lit_18);
DEFLIT(lit_72);
DEFLIT(lit_46);
DEFLIT(lit_55);
DEFLIT(lit_80);
DEFLIT(lit_89);
DEFLIT(lit_76);
DEFLIT(lit_60);
DEFLIT(lit_32);
DEFLIT(lit_118);
DEFLIT(lit_2);
DEFLIT(lit_1);
DEFLIT(lit_112);
DEFLIT(lit_75);
DEFLIT(lit_110);
DEFLIT(lit_104);
DEFLIT(lit_12);
DEFLIT(lit_117);
DEFLIT(lit_51);
DEFLIT(lit_50);
DEFLIT(lit_101);
DEFLIT(lit_15);
DEFLIT(lit_43);
DEFLIT(lit_116);
DEFLIT(lit_36);
DEFLIT(lit_82);
DEFLIT(lit_68);
DEFLIT(lit_40);
DEFLIT(lit_94);
DEFLIT(lit_29);
DEFLIT(lit_33);
DEFLIT(lit_44);
DEFLIT(lit_16);
DEFLIT(lit_84);
DEFLIT(lit_23);
DEFLIT(lit_45);
DEFLIT(lit_69);
DEFLIT(lit_111);
DEFLIT(lit_121);
DEFLIT(lit_19);
DEFLIT(lit_61);
DEFLIT(lit_0);
DEFLIT(lit_99);
DEFLIT(lit_64);
DEFLIT(lit_10);
DEFLIT(lit_74);
DEFLIT(lit_25);

/* FUNCTIONS: */

LOCFOR(fun_as_0);
LOCFOR(fun_dup_1);
LOCFOR(fun_dup_2);
LOCFOR(fun_len_3);
LOCFOR(fun_elt_type_4);
LOCFOR(fun_key_type_5);
LOCFOR(fun_key_test_6);
LOCFOR(fun_emptyQ_7);
LOCFOR(fun_empty_8);
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

FUNCODEDEF(fun_as_0) {
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

FUNCODEDEF(fun_dup_1) {
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

FUNCODEDEF(fun_dup_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_len_3) {
  P x_;
  P iF7937;
  P eF7936;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF7936 = T5;
  iF7937 = YPint((P)0);
  LOOP_303: {
    P a303_0,a303_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7936);
    if (T1 != YPfalse) {
      T0 = iF7937;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7936);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF7937,YPint((P)1));
      a303_0 = T3;
      a303_1 = T4;
      eF7936 = a303_0;
      iF7937 = a303_1;
      goto LOOP_303;
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_type_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_type_5) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLanyG));
}

FUNCODEDEF(fun_key_test_6) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YgooSmacrosYEE));
}

FUNCODEDEF(fun_emptyQ_7) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_8) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),c_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_default_9) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_fab_into_10) {
  P dst_,src_;
  P ssF7938;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),src_);
  ssF7938 = T6;
  LOOP_304: {
    P a304_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ssF7938);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow),ssF7938);
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),ssF7938);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,dst_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),ssF7938);
      a304_0 = T5;
      ssF7938 = a304_0;
      goto LOOP_304;
      T0 = T4;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fabs_11) {
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

FUNCODEDEF(fun_fab_fillX_12) {
  P dst_,src_;
  P dsF7939;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(dst_, 0);
  ARG(src_, 1);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),dst_);
  dsF7939 = T5;
  LOOP_305: {
    P a305_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),dsF7939);
    if (T1 != YPfalse) {
      T0 = dst_;
    } else {
      T2 = CALL1(1,VARREF(YgooScolsScolYnow_key),dsF7939);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),src_,dst_,T2);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),dsF7939);
      a305_0 = T4;
      dsF7939 = a305_0;
      goto LOOP_305;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fill_13) {
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

FUNCODEDEF(fun_anyQ_14) {
  P test_,c_;
  P tmpF7941;
  P eF7940;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7940 = T8;
  LOOP_306: {
    P a306_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7940);
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF7940);
      T6 = CALL1(0,test_,T7);
      T5 = CALL1(1,VARREF(YgooSmathYas_log),T6);
      tmpF7941 = T5;
      if (tmpF7941 != YPfalse) {
        T2 = tmpF7941;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7940);
        a306_0 = T4;
        eF7940 = a306_0;
        goto LOOP_306;
        T2 = T3;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_allQ_15) {
  P test_,c_;
  P tmpF7943;
  P eF7942;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(test_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7942 = T7;
  LOOP_307: {
    P a307_0;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7942);
    tmpF7943 = T6;
    if (tmpF7943 != YPfalse) {
      T0 = tmpF7943;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF7942);
      T2 = CALL1(0,test_,T3);
      if (T2 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7942);
        a307_0 = T5;
        eF7942 = a307_0;
        goto LOOP_307;
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

FUNCODEDEF(fun_fold_16) {
  P combine_,init_,c_;
  P eF7945;
  P resF7944;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(combine_, 0);
  ARG(init_, 1);
  ARG(c_, 2);
  resF7944 = init_;
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7945 = T6;
  LOOP_308: {
    P a308_0,a308_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7945);
    if (T1 != YPfalse) {
      T0 = resF7944;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7945);
      T3 = CALL2(0,combine_,resF7944,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7945);
      a308_0 = T3;
      a308_1 = T5;
      resF7944 = a308_0;
      eF7945 = a308_1;
      goto LOOP_308;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_foldA_17) {
  P combine_,c_;
  P eF7949;
  P resF7948;
  P initF7947;
  P eF7946;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(combine_, 0);
  ARG(c_, 1);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7946 = T8;
  T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF7946);
  initF7947 = T7;
  resF7948 = initF7947;
  T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7946);
  eF7949 = T6;
  LOOP_309: {
    P a309_0,a309_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7949);
    if (T1 != YPfalse) {
      T0 = resF7948;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7949);
      T3 = CALL2(0,combine_,resF7948,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7949);
      a309_0 = T3;
      a309_1 = T5;
      resF7948 = a309_0;
      eF7949 = a309_1;
      goto LOOP_309;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_or_18) {
  P f_,c_,default_;
  P eF7950;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7950 = T8;
  LOOP_310: {
    P a310_0;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7950);
    if (T1 != YPfalse) {
      T0 = default_;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7950);
      T3 = CALL1(0,f_,T4);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7950);
        T2 = T5;
      } else {
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7950);
        a310_0 = T7;
        eF7950 = a310_0;
        goto LOOP_310;
        T2 = T6;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_find_19) {
  P f_,c_;
  P valF7951;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYfind_or),f_,c_,VARREF(YgooScolsScolYDelt_default));
  valF7951 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF7951,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,f_);
    T0 = T2;
  } else {
    T0 = valF7951;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zap_20) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(YgooScolsScolYempty),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_21) {
  P f_,c_;
  P eF7952;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7952 = T6;
  LOOP_311: {
    P a311_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7952);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow),eF7952);
      CALL1(0,f_,T3);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7952);
      a311_0 = T5;
      eF7952 = a311_0;
      goto LOOP_311;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_22) {
  P f_,c_;
  P eF7954;
  P resF7953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF7953 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7954 = T9;
  LOOP_312: {
    P a312_0,a312_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7954);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF7953);
      T0 = T2;
    } else {
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7954);
      T3 = CALL1(1,f_,T4);
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7954);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF7953,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7954);
      a312_0 = resF7953;
      a312_1 = T7;
      resF7953 = a312_0;
      eF7954 = a312_1;
      goto LOOP_312;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_keyed_23) {
  P f_,c_;
  P eF7955;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7955 = T7;
  LOOP_313: {
    P a313_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7955);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7955);
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7955);
      CALL2(1,f_,T3,T4);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7955);
      a313_0 = T6;
      eF7955 = a313_0;
      goto LOOP_313;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_24) {
  P f_,c_;
  P keyF7958;
  P eF7957;
  P resF7956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  T8 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  resF7956 = T8;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7957 = T9;
  LOOP_314: {
    P a314_0,a314_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7957);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,resF7956);
      T0 = T2;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7957);
      keyF7958 = T7;
      T4 = CALL1(1,VARREF(YgooScolsScolYnow),eF7957);
      T3 = CALL2(0,f_,keyF7958,T4);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T3,resF7956,keyF7958);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7957);
      a314_0 = resF7956;
      a314_1 = T6;
      resF7956 = a314_0;
      eF7957 = a314_1;
      goto LOOP_314;
      T0 = T5;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_25) {
  P c_;
  P eF7960;
  P resF7959;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  resF7959 = Ynil;
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7960 = T7;
  LOOP_315: {
    P a315_0,a315_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7960);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF7959);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7960);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF7959,T5);
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7960);
      a315_0 = T4;
      a315_1 = T6;
      resF7959 = a315_0;
      eF7960 = a315_1;
      goto LOOP_315;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_items_26) {
  P c_;
  P eF7962;
  P resF7961;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  resF7961 = Ynil;
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF7962 = T9;
  LOOP_316: {
    P a316_0,a316_1;
    T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF7962);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF7961);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF7962);
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),eF7962);
      T5 = CALL2(1,VARREF(Ytup),T6,T7);
      T4 = CALL2(1,VARREF(YgooScolsScolYadd),resF7961,T5);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),eF7962);
      a316_0 = T4;
      a316_1 = T8;
      resF7961 = a316_0;
      eF7962 = a316_1;
      goto LOOP_316;
      T0 = T3;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_27) {
  P y_;
  P T0;
LINK_STACK();
  ARG(y_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),y_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_memQ_28) {
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

FUNCODEDEF(fun_col_res_type_29) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooSclassYclass_of),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_res_30) {
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

FUNCODEDEF(fun_E_31) {
  P c1_,c2_;
  P e1F7963;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),c1_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),c2_);
  T1 = CALL2(1,VARREF(YgooSmathYE),T2,T3);
  if (T1 != YPfalse) {
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
    e1F7963 = T13;
    LOOP_317: {
      P a317_0;
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F7963);
      if (T5 != YPfalse) {
        T4 = YPtrue;
      } else {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),e1F7963);
        T10 = CALL1(1,VARREF(YgooScolsScolYnow_key),e1F7963);
        T9 = CALL3(1,VARREF(YgooScolsScolYelt_or),c2_,T10,VARREF(YgooScolsScolYDeq_nul));
        T7 = CALL2(1,VARREF(YgooSmathYE),T8,T9);
        if (T7 != YPfalse) {
          T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F7963);
          a317_0 = T12;
          e1F7963 = a317_0;
          goto LOOP_317;
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

FUNCODEDEF(fun_elt_32) {
  P c_,key_;
  P valF7964;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(key_, 1);
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),c_,key_,VARREF(YgooScolsScolYDelt_default));
  valF7964 = T3;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),valF7964,VARREF(YgooScolsScolYDelt_default));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),c_,key_);
    T0 = T2;
  } else {
    T0 = valF7964;
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooScolsScolY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
DEFCREGS();
  lit_0 = YPPsym((P)"len");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T1 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYlen,T0);
  lit_2 = YPPsym((P)"elt");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T3 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYelt,T2);
  lit_4 = YPPsym((P)"elt-or");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"k"),YPPsym((P)"default"));
  T5 = YPsig(LITREF(lit_5),YPPlist(3,VARREF(YLcolG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_or,T4);
  lit_6 = YPPsym((P)"elt-type");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_type,T6);
  lit_8 = YPPsym((P)"elt-default");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelt_default,T8);
  lit_10 = YPPsym((P)"key-type");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T11 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_type,T10);
  lit_12 = YPPsym((P)"key-test");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T13 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkey_test,T12);
  lit_14 = YPPsym((P)"elts");
  lit_15 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYelts,T14);
  lit_16 = YPPsym((P)"empty?");
  lit_17 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYemptyQ,T16);
  lit_18 = YPPsym((P)"empty");
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T20 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T19 = YPsig(LITREF(lit_19),YPPlist(1,T20),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYempty,T18);
  lit_20 = YPPsym((P)"add");
  lit_21 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T22 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYadd,T21);
  lit_22 = YPPsym((P)"dup");
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdup,T23);
  lit_24 = YPPsym((P)"fab");
  lit_25 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  T27 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T26 = YPsig(LITREF(lit_25),YPPlist(2,T27,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab,T25);
  lit_26 = YPPsym((P)"col");
  lit_27 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  T30 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T29 = YPsig(LITREF(lit_27),YPPlist(1,T30),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol,T28);
  lit_28 = YPPsym((P)"fabs");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"elts"));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T32 = YPsig(LITREF(lit_29),YPPlist(1,T33),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYfabs,T31);
  lit_30 = YPPsym((P)"fill");
  lit_31 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"val"));
  T35 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_30),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfill,T34);
  lit_32 = YPPsym((P)"any?");
  lit_33 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYanyQ,T36);
  lit_34 = YPPsym((P)"all?");
  lit_35 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T39 = YPsig(LITREF(lit_35),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T38 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T39,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYallQ,T38);
  lit_36 = YPPsym((P)"fold");
  lit_37 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"x"));
  T41 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T40 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T41,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfold,T40);
  lit_38 = YPPsym((P)"fold+");
  lit_39 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfoldA,T42);
  T44 = YPfalse;
  return T44;
}

P YgooScolsScolY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59;
DEFCREGS();
  lit_40 = YPPsym((P)"find-or");
  lit_41 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"default"));
  T1 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind_or,T0);
  lit_42 = YPPsym((P)"find");
  lit_43 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T3 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfind,T2);
  lit_44 = YPPsym((P)"del");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T5 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdel,T4);
  lit_46 = YPPsym((P)"zap");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYzap,T6);
  lit_48 = YPPsym((P)"do");
  lit_49 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYdo,T8);
  lit_50 = YPPsym((P)"mem?");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T11 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmemQ,T10);
  lit_52 = YPPsym((P)"keys");
  lit_53 = YPPlist(1,YPPsym((P)"c"));
  T13 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T12 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T13,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYkeys,T12);
  lit_54 = YPPsym((P)"items");
  lit_55 = YPPlist(1,YPPsym((P)"c"));
  T15 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T14 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T15,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYitems,T14);
  lit_56 = YPPsym((P)"col-res-type");
  lit_57 = YPPlist(1,YPPsym((P)"c"));
  T17 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res_type,T16);
  lit_58 = YPPsym((P)"<enum>");
  T19 = (P)YPpair(VARREF(YLanyG),Ynil);
  T18 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_58),T19);
  VARSET(YgooScolsScolYLenumG,T18);
  lit_59 = YPPsym((P)"enum");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_59),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYenum,T20);
  lit_61 = YPPsym((P)"fin?");
  lit_62 = YPPlist(1,YPPsym((P)"e"));
  T23 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_61),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfinQ,T22);
  lit_63 = YPPsym((P)"nxt");
  lit_64 = YPPlist(1,YPPsym((P)"e"));
  T25 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YgooScolsScolYLenumG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_63),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnxt,T24);
  lit_65 = YPPsym((P)"now");
  lit_66 = YPPlist(1,YPPsym((P)"e"));
  T27 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_65),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow,T26);
  lit_67 = YPPsym((P)"now-setter");
  lit_68 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T29 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_67),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_setter,T28);
  lit_69 = YPPsym((P)"now-key");
  lit_70 = YPPlist(1,YPPsym((P)"e"));
  T31 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YgooScolsScolYLenumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_69),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYnow_key,T30);
  lit_71 = YPPsym((P)"do-keyed");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_71),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYdo_keyed,T32);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_73),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYmap_keyed,T34);
  lit_75 = YPPsym((P)"map");
  lit_76 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_75),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap,T36);
  lit_77 = YPPsym((P)"fab-into");
  lit_78 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T39 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T38 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_77),T39,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_into,T38);
  lit_79 = YPPsym((P)"fab-fill!");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T41 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T40 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_79),T41,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_fillX,T40);
  lit_81 = YPPsym((P)"low-elt");
  lit_82 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"k"));
  T43 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T42 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_81),T43,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYlow_elt,T42);
  lit_83 = YPPsym((P)"fab-elt-setter");
  lit_84 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"x"),YPPsym((P)"k"));
  T45 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_83),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYfab_elt_setter,T44);
  lit_85 = YPPsym((P)"col-res");
  lit_86 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T47 = YPsig(LITREF(lit_86),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  T46 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_85),T47,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsScolYcol_res,T46);
  lit_87 = YPPsym((P)"as");
  lit_88 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"x"));
  T49 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T48 = YPsig(LITREF(lit_88),YPPlist(2,T49,VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_0 = YPmet(FUNCODEREF(fun_as_0),LITREF(lit_87),T48,ENVNUL,PNUL,sloc(69));
  T51 = VARREF_OR(YgooStypesYas,YPfalse);
  T52 = fun_as_0;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooStypesYas,T50);
  lit_89 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  T54 = fun_dup_1 = YPmet(FUNCODEREF(fun_dup_1),LITREF(lit_22),T55,ENVNUL,PNUL,sloc(74));
  T58 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T59 = fun_dup_1;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  T56 = VARSET(YgooScolsScolYdup,T57);
  T53 = T56;
  return T53;
}

P YgooScolsScolY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126;
DEFCREGS();
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLcolIG)),YPfalse,YPint((P)1),VARREF(YLcolIG),Ynil);
  fun_dup_2 = YPmet(FUNCODEREF(fun_dup_2),LITREF(lit_22),T0,ENVNUL,PNUL,sloc(78));
  T2 = VARREF_OR(YgooScolsScolYdup,YPfalse);
  T3 = fun_dup_2;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsScolYdup,T1);
  lit_91 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_3 = YPmet(FUNCODEREF(fun_len_3),LITREF(lit_0),T4,ENVNUL,PNUL,sloc(83));
  T6 = VARREF_OR(YgooStypesYlen,YPfalse);
  T7 = fun_len_3;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooStypesYlen,T5);
  lit_92 = YPPlist(1,YPPsym((P)"x"));
  T8 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_4 = YPmet(FUNCODEREF(fun_elt_type_4),LITREF(lit_6),T8,ENVNUL,PNUL,sloc(87));
  T10 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T11 = fun_elt_type_4;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsScolYelt_type,T9);
  lit_93 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_5 = YPmet(FUNCODEREF(fun_key_type_5),LITREF(lit_10),T12,ENVNUL,PNUL,sloc(88));
  T14 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T15 = fun_key_type_5;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYkey_type,T13);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLfunG),Ynil);
  fun_key_test_6 = YPmet(FUNCODEREF(fun_key_test_6),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(89));
  T18 = VARREF_OR(YgooScolsScolYkey_test,YPfalse);
  T19 = fun_key_test_6;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolYkey_test,T17);
  lit_95 = YPPlist(1,YPPsym((P)"c"));
  T20 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_7 = YPmet(FUNCODEREF(fun_emptyQ_7),LITREF(lit_16),T20,ENVNUL,PNUL,sloc(95));
  T22 = VARREF_OR(YgooSmacrosYemptyQ,YPfalse);
  T23 = fun_emptyQ_7;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSmacrosYemptyQ,T21);
  lit_96 = YPPlist(1,YPPsym((P)"c"));
  T25 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T24 = YPsig(LITREF(lit_96),YPPlist(1,T25),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_empty_8 = YPmet(FUNCODEREF(fun_empty_8),LITREF(lit_18),T24,ENVNUL,PNUL,sloc(98));
  T27 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T28 = fun_empty_8;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYempty,T26);
  lit_97 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_9 = YPmet(FUNCODEREF(fun_elt_default_9),LITREF(lit_8),T29,ENVNUL,PNUL,sloc(101));
  T31 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T32 = fun_elt_default_9;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsScolYelt_default,T30);
  lit_98 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T33 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_into_10 = YPmet(FUNCODEREF(fun_fab_into_10),LITREF(lit_77),T33,ENVNUL,PNUL,sloc(106));
  T35 = VARREF_OR(YgooScolsScolYfab_into,YPfalse);
  T36 = fun_fab_into_10;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooScolsScolYfab_into,T34);
  lit_99 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T37 = YPsig(LITREF(lit_99),YPPlist(1,T38),YPtrue,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_fabs_11 = YPmet(FUNCODEREF(fun_fabs_11),LITREF(lit_28),T37,ENVNUL,PNUL,sloc(113));
  T40 = VARREF_OR(YgooSmathYfabs,YPfalse);
  T41 = fun_fabs_11;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YgooSmathYfabs,T39);
  lit_100 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"src"));
  T42 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fab_fillX_12 = YPmet(FUNCODEREF(fun_fab_fillX_12),LITREF(lit_79),T42,ENVNUL,PNUL,sloc(116));
  T44 = VARREF_OR(YgooScolsScolYfab_fillX,YPfalse);
  T45 = fun_fab_fillX_12;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooScolsScolYfab_fillX,T43);
  lit_101 = YPPlist(2,YPPsym((P)"dst"),YPPsym((P)"val"));
  T46 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_fill_13 = YPmet(FUNCODEREF(fun_fill_13),LITREF(lit_30),T46,ENVNUL,PNUL,sloc(123));
  T48 = VARREF_OR(YgooScolsScolYfill,YPfalse);
  T49 = fun_fill_13;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YgooScolsScolYfill,T47);
  lit_102 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T50 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_anyQ_14 = YPmet(FUNCODEREF(fun_anyQ_14),LITREF(lit_32),T50,ENVNUL,PNUL,sloc(126));
  T52 = VARREF_OR(YgooStypesYanyQ,YPfalse);
  T53 = fun_anyQ_14;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooStypesYanyQ,T51);
  lit_103 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"c"));
  T54 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_allQ_15 = YPmet(FUNCODEREF(fun_allQ_15),LITREF(lit_34),T54,ENVNUL,PNUL,sloc(132));
  T56 = VARREF_OR(YgooScolsScolYallQ,YPfalse);
  T57 = fun_allQ_15;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YgooScolsScolYallQ,T55);
  lit_104 = YPPlist(3,YPPsym((P)"combine"),YPPsym((P)"init"),YPPsym((P)"c"));
  T58 = YPsig(LITREF(lit_104),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fold_16 = YPmet(FUNCODEREF(fun_fold_16),LITREF(lit_36),T58,ENVNUL,PNUL,sloc(137));
  T60 = VARREF_OR(YgooScolsScolYfold,YPfalse);
  T61 = fun_fold_16;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YgooScolsScolYfold,T59);
  lit_105 = YPPlist(2,YPPsym((P)"combine"),YPPsym((P)"c"));
  T62 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_foldA_17 = YPmet(FUNCODEREF(fun_foldA_17),LITREF(lit_38),T62,ENVNUL,PNUL,sloc(143));
  T64 = VARREF_OR(YgooScolsScolYfoldA,YPfalse);
  T65 = fun_foldA_17;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YgooScolsScolYfoldA,T63);
  lit_106 = YPPsym((P)"<elt-default>");
  T67 = (P)YPpair(VARREF(YLanyG),Ynil);
  T66 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_106),T67);
  VARSET(YgooScolsScolYLelt_defaultG,T66);
  T68 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsScolYLelt_defaultG));
  VARSET(YgooScolsScolYDelt_default,T68);
  lit_107 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"c"),YPPsym((P)"default"));
  T69 = YPsig(LITREF(lit_107),YPPlist(3,VARREF(YLfunG),VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_find_or_18 = YPmet(FUNCODEREF(fun_find_or_18),LITREF(lit_40),T69,ENVNUL,PNUL,sloc(154));
  T71 = VARREF_OR(YgooScolsScolYfind_or,YPfalse);
  T72 = fun_find_or_18;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsScolYfind_or,T70);
  lit_108 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T73 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_find_19 = YPmet(FUNCODEREF(fun_find_19),LITREF(lit_42),T73,ENVNUL,PNUL,sloc(160));
  T75 = VARREF_OR(YgooScolsScolYfind,YPfalse);
  T76 = fun_find_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YgooScolsScolYfind,T74);
  lit_109 = YPPlist(1,YPPsym((P)"x"));
  T77 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLcolG),Ynil);
  fun_zap_20 = YPmet(FUNCODEREF(fun_zap_20),LITREF(lit_46),T77,ENVNUL,PNUL,sloc(166));
  T79 = VARREF_OR(YgooScolsScolYzap,YPfalse);
  T80 = fun_zap_20;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YgooScolsScolYzap,T78);
  lit_110 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T81 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_21 = YPmet(FUNCODEREF(fun_do_21),LITREF(lit_48),T81,ENVNUL,PNUL,sloc(169));
  T83 = VARREF_OR(YgooSmacrosYdo,YPfalse);
  T84 = fun_do_21;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSmacrosYdo,T82);
  lit_111 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T85 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_22 = YPmet(FUNCODEREF(fun_map_22),LITREF(lit_75),T85,ENVNUL,PNUL,sloc(174));
  T87 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T88 = fun_map_22;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSmacrosYmap,T86);
  lit_112 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T89 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_keyed_23 = YPmet(FUNCODEREF(fun_do_keyed_23),LITREF(lit_71),T89,ENVNUL,PNUL,sloc(181));
  T91 = VARREF_OR(YgooScolsScolYdo_keyed,YPfalse);
  T92 = fun_do_keyed_23;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooScolsScolYdo_keyed,T90);
  lit_113 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T93 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLfunG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_map_keyed_24 = YPmet(FUNCODEREF(fun_map_keyed_24),LITREF(lit_73),T93,ENVNUL,PNUL,sloc(186));
  T95 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T96 = fun_map_keyed_24;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YgooScolsScolYmap_keyed,T94);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  T97 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_25 = YPmet(FUNCODEREF(fun_keys_25),LITREF(lit_52),T97,ENVNUL,PNUL,sloc(194));
  T99 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T100 = fun_keys_25;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YgooScolsScolYkeys,T98);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  T101 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_items_26 = YPmet(FUNCODEREF(fun_items_26),LITREF(lit_54),T101,ENVNUL,PNUL,sloc(200));
  T103 = VARREF_OR(YgooScolsScolYitems,YPfalse);
  T104 = fun_items_26;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YgooScolsScolYitems,T102);
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  lit_117 = YPPlist(1,YPPsym((P)"y"));
  T106 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T106,ENVNUL,PNUL,sloc(207));
  T105 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_memQ_28 = YPmet(FUNCODEREF(fun_memQ_28),LITREF(lit_50),T105,ENVNUL,PNUL,sloc(206));
  T108 = VARREF_OR(YgooScolsScolYmemQ,YPfalse);
  T109 = fun_memQ_28;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YgooScolsScolYmemQ,T107);
  lit_118 = YPPlist(1,YPPsym((P)"c"));
  T110 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_29 = YPmet(FUNCODEREF(fun_col_res_type_29),LITREF(lit_56),T110,ENVNUL,PNUL,sloc(209));
  T112 = VARREF_OR(YgooScolsScolYcol_res_type,YPfalse);
  T113 = fun_col_res_type_29;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YgooScolsScolYcol_res_type,T111);
  lit_119 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T114 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_col_res_30 = YPmet(FUNCODEREF(fun_col_res_30),LITREF(lit_85),T114,ENVNUL,PNUL,sloc(214));
  T116 = VARREF_OR(YgooScolsScolYcol_res,YPfalse);
  T117 = fun_col_res_30;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YgooScolsScolYcol_res,T115);
  lit_120 = YPPlist(1,YPPsym((P)"eq-nul"));
  VARSET(YgooScolsScolYDeq_nul,LITREF(lit_120));
  lit_121 = YPPsym((P)"=");
  lit_122 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T118 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YLcolG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_31 = YPmet(FUNCODEREF(fun_E_31),LITREF(lit_121),T118,ENVNUL,PNUL,sloc(219));
  T120 = VARREF_OR(YgooSmathYE,YPfalse);
  T121 = fun_E_31;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YgooSmathYE,T119);
  lit_123 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"key"));
  T122 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_elt_32 = YPmet(FUNCODEREF(fun_elt_32),LITREF(lit_2),T122,ENVNUL,PNUL,sloc(227));
  T124 = VARREF_OR(YgooSmacrosYelt,YPfalse);
  T125 = fun_elt_32;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YgooSmacrosYelt,T123);
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T126 = YPfalse;
  return T126;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
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
  {"len", &module_info_gooStypes, NULL},
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
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
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
  {"to-str", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
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
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
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
  {"%loc-val", &module_info_gooSboot, NULL},
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
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
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
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
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
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
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
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
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
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
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
  {"%invoke-debugger", &module_info_gooSboot, NULL},
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
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
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
  {"find", CVAR, &YgooScolsScolYfind},
  {"dup", CVAR, &YgooScolsScolYdup},
  {"<tab>", CVAR, &YgooScolsScolYLtabG},
  {"add", CVAR, &YgooScolsScolYadd},
  {"find-or", CVAR, &YgooScolsScolYfind_or},
  {"col-res", CVAR, &YgooScolsScolYcol_res},
  {"empty", CVAR, &YgooScolsScolYempty},
  {"fold+", CVAR, &YgooScolsScolYfoldA},
  {"<elt-default>", CVAR, &YgooScolsScolYLelt_defaultG},
  {"elt-or", CVAR, &YgooScolsScolYelt_or},
  {"fab", CVAR, &YgooScolsScolYfab},
  {"fin?", CVAR, &YgooScolsScolYfinQ},
  {"fab-elt-setter", CVAR, &YgooScolsScolYfab_elt_setter},
  {"---main-0---", PVAR, NULL},
  {"fold", CVAR, &YgooScolsScolYfold},
  {"keys", CVAR, &YgooScolsScolYkeys},
  {"$elt-default", CVAR, &YgooScolsScolYDelt_default},
  {"elts", CVAR, &YgooScolsScolYelts},
  {"low-elt", CVAR, &YgooScolsScolYlow_elt},
  {"all?", CVAR, &YgooScolsScolYallQ},
  {"key-test", CVAR, &YgooScolsScolYkey_test},
  {"now-setter", CVAR, &YgooScolsScolYnow_setter},
  {"<enum>", CVAR, &YgooScolsScolYLenumG},
  {"fab-fill!", CVAR, &YgooScolsScolYfab_fillX},
  {"key-type", CVAR, &YgooScolsScolYkey_type},
  {"col-res-type", CVAR, &YgooScolsScolYcol_res_type},
  {"items", CVAR, &YgooScolsScolYitems},
  {"elt-default", CVAR, &YgooScolsScolYelt_default},
  {"nxt", CVAR, &YgooScolsScolYnxt},
  {"$eq-nul", CVAR, &YgooScolsScolYDeq_nul},
  {"fill", CVAR, &YgooScolsScolYfill},
  {"elt-type", CVAR, &YgooScolsScolYelt_type},
  {"mem?", CVAR, &YgooScolsScolYmemQ},
  {"now-key", CVAR, &YgooScolsScolYnow_key},
  {"into", CVAR, &YgooScolsScolYinto},
  {"---main-1---", PVAR, NULL},
  {"map-keyed", CVAR, &YgooScolsScolYmap_keyed},
  {"now", CVAR, &YgooScolsScolYnow},
  {"zap", CVAR, &YgooScolsScolYzap},
  {"---main-2---", PVAR, NULL},
  {"enum", CVAR, &YgooScolsScolYenum},
  {"col", CVAR, &YgooScolsScolYcol},
  {"fab-into", CVAR, &YgooScolsScolYfab_into},
  {"do-keyed", CVAR, &YgooScolsScolYdo_keyed},
  {"del", CVAR, &YgooScolsScolYdel},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"len", NULL},
  {"fab", NULL},
  {"now-setter", NULL},
  {"find", NULL},
  {"dup", NULL},
  {"<tab>", NULL},
  {"add", NULL},
  {"find-or", NULL},
  {"col-res", NULL},
  {"empty", NULL},
  {"fold+", NULL},
  {"empty?", NULL},
  {"fab-elt-setter", NULL},
  {"<col.>", NULL},
  {"fold", NULL},
  {"keys", NULL},
  {"<col>", NULL},
  {"elts", NULL},
  {"low-elt", NULL},
  {"all?", NULL},
  {"key-test", NULL},
  {"<enum>", NULL},
  {"fab-fill!", NULL},
  {"key-type", NULL},
  {"col-res-type", NULL},
  {"items", NULL},
  {"any?", NULL},
  {"into", NULL},
  {"elt-default", NULL},
  {"fab-into", NULL},
  {"nxt", NULL},
  {"fill", NULL},
  {"elt-type", NULL},
  {"mem?", NULL},
  {"map", NULL},
  {"now-key", NULL},
  {"fabs", NULL},
  {"do", NULL},
  {"map-keyed", NULL},
  {"now", NULL},
  {"fin?", NULL},
  {"elt-or", NULL},
  {"zap", NULL},
  {"enum", NULL},
  {"col", NULL},
  {"do-keyed", NULL},
  {"elt", NULL},
  {"del", NULL},
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
  load_module_gooSmath();

  (P)YgooScolsScolY___main_0___();
  (P)YgooScolsScolY___main_1___();
  (P)YgooScolsScolY___main_2___();

}

/* END OF GENERATED CODE. */
