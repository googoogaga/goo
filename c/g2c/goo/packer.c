/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/packer");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/packer */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
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
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
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
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
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
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
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
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
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
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
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
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOOemptyQ,"goo/boot","@@empty?");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
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
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
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
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
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
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
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
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
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
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
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
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
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
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_19);
DEFLIT(lit_36);
DEFLIT(lit_66);
DEFLIT(lit_0);
DEFLIT(lit_46);
DEFLIT(lit_3);
DEFLIT(lit_60);
DEFLIT(lit_45);
DEFLIT(lit_33);
DEFLIT(lit_8);
DEFLIT(lit_21);
DEFLIT(lit_53);
DEFLIT(lit_42);
DEFLIT(lit_34);
DEFLIT(lit_14);
DEFLIT(lit_18);
DEFLIT(lit_68);
DEFLIT(lit_61);
DEFLIT(lit_48);
DEFLIT(lit_63);
DEFLIT(lit_65);
DEFLIT(lit_44);
DEFLIT(lit_67);
DEFLIT(lit_27);
DEFLIT(lit_80);
DEFLIT(lit_37);
DEFLIT(lit_58);
DEFLIT(lit_25);
DEFLIT(lit_4);
DEFLIT(lit_50);
DEFLIT(lit_17);
DEFLIT(lit_73);
DEFLIT(lit_24);
DEFLIT(lit_77);
DEFLIT(lit_2);
DEFLIT(lit_74);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_75);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_52);
DEFLIT(lit_7);
DEFLIT(lit_64);
DEFLIT(lit_43);
DEFLIT(lit_30);
DEFLIT(lit_79);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_78);
DEFLIT(lit_41);
DEFLIT(lit_38);
DEFLIT(lit_16);
DEFLIT(lit_47);
DEFLIT(lit_62);
DEFLIT(lit_39);
DEFLIT(lit_54);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_35);
DEFLIT(lit_32);
DEFLIT(lit_76);
DEFLIT(lit_69);
DEFLIT(lit_70);
DEFLIT(lit_59);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_49);
DEFLIT(lit_29);
DEFLIT(lit_22);
DEFLIT(lit_71);
DEFLIT(lit_72);
DEFLIT(lit_55);
DEFLIT(lit_9);
DEFLIT(lit_12);
DEFLIT(lit_28);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_40);
DEFLIT(lit_26);

/* FUNCTIONS: */

LOCFOR(fun_packer_value_0);
LOCFOR(fun_packer_value_setter_1);
LOCFOR(fun_packer_adder_2);
LOCFOR(fun_packer_reser_3);
LOCFOR(fun_4);
LOCFOR(fun_5);
LOCFOR(fun_packer_6);
LOCFOR(fun_packer_add_7);
LOCFOR(fun_packer_res_8);
LOCFOR(fun_9);
LOCFOR(fun_packer_fab_10);
LOCFOR(fun_11);
LOCFOR(fun_packer_fab_12);
LOCFOR(fun_x_2221_13);
LOCFOR(fun_x_2227_14);
LOCFOR(fun_15);
LOCFOR(fun_x_2224_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_x_2240_20);
LOCFOR(fun_x_2249_21);
LOCFOR(fun_22);
LOCFOR(fun_x_2246_23);
LOCFOR(fun_24);
LOCFOR(fun_x_2243_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_x_2253_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_x_2257_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_x_2261_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_x_2265_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
extern P YgooSpackerY___main_0___ ();
extern P YgooSpackerY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_3) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_4) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = fun_4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_6) {
  P init_,add_,res_;
  P T0;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_add_7) {
  P a_,x_;
  P x_2211F8308;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
  x_2211F8308 = a_;
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL2(1,T2,x_,T1);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T0,x_2211F8308);
UNLINK_STACK();
  RET(x_2211F8308);
}

FUNCODEDEF(fun_packer_res_8) {
  P a_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_fab_10) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = FUNFAB(fun_9,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = fun_11;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2221_13) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_31),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2227_14) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P return_;
  P x_2226F8322;
  P x_2226F8321;
  P x_2226F8320;
  P x_2226F8319;
  P x_2226F8318;
  P x_2226F8317;
  P x_2226F8316;
  P x_2226F8315;
  P x_2226F8314;
  P restF8313;
  P packF8312;
  P varF8311;
  P x_2226F8310;
  P x_2227F8309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_2227_14,1);
  x_2227F8309 = T36;
  FUNINIT(x_2227F8309, 1,return_);
  x_2226F8310 = FREEREF(0);
  varF8311 = YPfalse;
  packF8312 = YPfalse;
  restF8313 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2226F8310,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2226F8310,x_2227F8309);
    x_2226F8314 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2226F8314,x_2227F8309);
    varF8311 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2226F8314);
    x_2226F8315 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2226F8315,x_2227F8309);
    packF8312 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2226F8315);
    x_2226F8316 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2226F8316,x_2227F8309);
    x_2226F8317 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2226F8317,x_2227F8309);
    T11 = CALL1(1,VARREF(Ytail),x_2226F8316);
    x_2226F8318 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2226F8318,x_2227F8309);
    T17 = CALL1(1,VARREF(Ytail),x_2226F8310);
    x_2226F8319 = T17;
    restF8313 = x_2226F8319;
    x_2226F8320 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2226F8320,x_2227F8309);
    x_2226F8321 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2226F8321,x_2227F8309);
    T7 = CALL1(1,VARREF(Ytail),x_2226F8320);
    x_2226F8322 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2226F8322,x_2227F8309);
  } else {
    T18 = CALL2(1,x_2227F8309,LITREF(lit_32),x_2226F8310);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T26 = varF8311;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = packF8312;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T34 = restF8313;
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T35 = BOXGET(FREEREF(1));
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T35,LITREF(lit_41));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T29,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_x_2224_16) {
  P msg_,args_;
  P x_2225F8323;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2225F8323 = FREEREF(0);
  T2 = FUNFAB(fun_15,2,x_2225F8323,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_2223F8325;
  P x_2224F8324;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_2224_16,3);
  x_2224F8324 = T6;
  FUNINIT(x_2224F8324, 3,FREEREF(0),FREEREF(1),return_);
  x_2223F8325 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2223F8325,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2223F8325,x_2224F8324);
  } else {
    T2 = CALL2(1,x_2224F8324,LITREF(lit_32),x_2223F8325);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_18) {
  P return_;
  P x_2222F8339;
  P x_2220F8338;
  P x_2220F8337;
  P x_2220F8336;
  P x_2220F8335;
  P x_2220F8334;
  P x_2220F8333;
  P x_2220F8332;
  P x_2220F8331;
  P x_2220F8330;
  P bodyF8329;
  P declsF8328;
  P x_2220F8327;
  P x_2221F8326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_2221_13,2);
  x_2221F8326 = T18;
  FUNINIT(x_2221F8326, 2,FREEREF(0),return_);
  x_2220F8327 = FREEREF(0);
  declsF8328 = YPfalse;
  bodyF8329 = YPfalse;
  bodyF8329 = BOXFAB(bodyF8329);
  T2 = CALL2(1,VARREF(YisaQ),x_2220F8327,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2220F8327,LITREF(lit_31),x_2221F8326);
    x_2220F8330 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2220F8330,x_2221F8326);
    x_2220F8331 = T11;
    declsF8328 = x_2220F8331;
    x_2220F8332 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2220F8332,x_2221F8326);
    x_2220F8333 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2220F8333,x_2221F8326);
    T10 = CALL1(1,VARREF(Ytail),x_2220F8332);
    x_2220F8334 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2220F8334,x_2221F8326);
    T12 = CALL1(1,VARREF(Ytail),x_2220F8330);
    x_2220F8335 = T12;
    BOXPUT(x_2220F8335,bodyF8329);
    x_2220F8336 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2220F8336,x_2221F8326);
    x_2220F8337 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2220F8337,x_2221F8326);
    T6 = CALL1(1,VARREF(Ytail),x_2220F8336);
    x_2220F8338 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2220F8338,x_2221F8326);
  } else {
    T14 = CALL2(1,x_2221F8326,LITREF(lit_32),x_2220F8327);
  }
  T17 = declsF8328;
  x_2222F8339 = T17;
  T16 = FUNFAB(fun_17,2,x_2222F8339,bodyF8329);
  T15 = with_exit(T16);
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_19) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_18,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2240_20) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_47),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2249_21) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_39));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P return_;
  P x_2248F8347;
  P x_2248F8346;
  P x_2248F8345;
  P x_2248F8344;
  P restF8343;
  P nameF8342;
  P x_2248F8341;
  P x_2249F8340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T21 = FUNSHELL(0,fun_x_2249_21,1);
  x_2249F8340 = T21;
  FUNINIT(x_2249F8340, 1,return_);
  x_2248F8341 = FREEREF(0);
  nameF8342 = YPfalse;
  restF8343 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2248F8341,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2248F8341,x_2249F8340);
    nameF8342 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2248F8341);
    x_2248F8344 = T8;
    restF8343 = x_2248F8344;
    x_2248F8345 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2248F8345,x_2249F8340);
    x_2248F8346 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2248F8346,x_2249F8340);
    T6 = CALL1(1,VARREF(Ytail),x_2248F8345);
    x_2248F8347 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2248F8347,x_2249F8340);
  } else {
    T9 = CALL2(1,x_2249F8340,LITREF(lit_32),x_2248F8341);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T17 = nameF8342;
  T16 = CALL1(1,VARREF(Ylst),T17);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T15 = CALL3(1,VARREF(YgooSmacrosYcat),T16,T18,LITREF(lit_41));
  T14 = CALL1(1,VARREF(Ylst),T15);
  T19 = restF8343;
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T19,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T20 = BOXGET(FREEREF(1));
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T20,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_x_2246_23) {
  P msg_,args_;
  P x_2247F8348;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2247F8348 = FREEREF(0);
  T2 = FUNFAB(fun_22,2,x_2247F8348,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P return_;
  P x_2245F8362;
  P x_2245F8361;
  P x_2245F8360;
  P x_2245F8359;
  P x_2245F8358;
  P x_2245F8357;
  P x_2245F8356;
  P x_2245F8355;
  P x_2245F8354;
  P restF8353;
  P typeF8352;
  P nameF8351;
  P x_2245F8350;
  P x_2246F8349;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
LINK_STACK();
  ARG(return_, 0);
  T39 = FUNSHELL(0,fun_x_2246_23,3);
  x_2246F8349 = T39;
  FUNINIT(x_2246F8349, 3,FREEREF(0),FREEREF(1),return_);
  x_2245F8350 = FREEREF(0);
  nameF8351 = YPfalse;
  typeF8352 = YPfalse;
  restF8353 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2245F8350,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2245F8350,x_2246F8349);
    x_2245F8354 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2245F8354,x_2246F8349);
    nameF8351 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2245F8354);
    x_2245F8355 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2245F8355,x_2246F8349);
    typeF8352 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2245F8355);
    x_2245F8356 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2245F8356,x_2246F8349);
    x_2245F8357 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2245F8357,x_2246F8349);
    T11 = CALL1(1,VARREF(Ytail),x_2245F8356);
    x_2245F8358 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2245F8358,x_2246F8349);
    T17 = CALL1(1,VARREF(Ytail),x_2245F8350);
    x_2245F8359 = T17;
    restF8353 = x_2245F8359;
    x_2245F8360 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2245F8360,x_2246F8349);
    x_2245F8361 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2245F8361,x_2246F8349);
    T7 = CALL1(1,VARREF(Ytail),x_2245F8360);
    x_2245F8362 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2245F8362,x_2246F8349);
  } else {
    T18 = CALL2(1,x_2246F8349,LITREF(lit_32),x_2245F8350);
  }
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T26 = nameF8351;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T31 = typeF8352;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_41));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T27,LITREF(lit_41));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T22 = CALL2(1,VARREF(YgooSmacrosYcat),T23,LITREF(lit_41));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T37 = restF8353;
  T36 = CALL2(1,VARREF(YgooSmacrosYcat),T37,LITREF(lit_41));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = BOXGET(FREEREF(1));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T38,LITREF(lit_41));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T32,LITREF(lit_41));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_x_2243_25) {
  P msg_,args_;
  P x_2244F8363;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_2244F8363 = FREEREF(0);
  T2 = FUNFAB(fun_24,2,x_2244F8363,FREEREF(1));
  T1 = with_exit(T2);
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_2242F8365;
  P x_2243F8364;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNSHELL(0,fun_x_2243_25,3);
  x_2243F8364 = T6;
  FUNINIT(x_2243F8364, 3,FREEREF(0),FREEREF(1),return_);
  x_2242F8365 = FREEREF(0);
  T0 = CALL2(1,VARREF(YisaQ),x_2242F8365,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2242F8365,x_2243F8364);
  } else {
    T2 = CALL2(1,x_2243F8364,LITREF(lit_32),x_2242F8365);
  }
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T5 = BOXGET(FREEREF(1));
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,LITREF(lit_41));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_27) {
  P return_;
  P x_2241F8379;
  P x_2239F8378;
  P x_2239F8377;
  P x_2239F8376;
  P x_2239F8375;
  P x_2239F8374;
  P x_2239F8373;
  P x_2239F8372;
  P x_2239F8371;
  P x_2239F8370;
  P bodyF8369;
  P varsF8368;
  P x_2239F8367;
  P x_2240F8366;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(return_, 0);
  T18 = FUNSHELL(0,fun_x_2240_20,2);
  x_2240F8366 = T18;
  FUNINIT(x_2240F8366, 2,FREEREF(0),return_);
  x_2239F8367 = FREEREF(0);
  varsF8368 = YPfalse;
  bodyF8369 = YPfalse;
  bodyF8369 = BOXFAB(bodyF8369);
  T2 = CALL2(1,VARREF(YisaQ),x_2239F8367,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2239F8367,LITREF(lit_47),x_2240F8366);
    x_2239F8370 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2239F8370,x_2240F8366);
    x_2239F8371 = T11;
    varsF8368 = x_2239F8371;
    x_2239F8372 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2239F8372,x_2240F8366);
    x_2239F8373 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2239F8373,x_2240F8366);
    T10 = CALL1(1,VARREF(Ytail),x_2239F8372);
    x_2239F8374 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2239F8374,x_2240F8366);
    T12 = CALL1(1,VARREF(Ytail),x_2239F8370);
    x_2239F8375 = T12;
    BOXPUT(x_2239F8375,bodyF8369);
    x_2239F8376 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2239F8376,x_2240F8366);
    x_2239F8377 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2239F8377,x_2240F8366);
    T6 = CALL1(1,VARREF(Ytail),x_2239F8376);
    x_2239F8378 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2239F8378,x_2240F8366);
  } else {
    T14 = CALL2(1,x_2240F8366,LITREF(lit_32),x_2239F8367);
  }
  T17 = varsF8368;
  x_2241F8379 = T17;
  T16 = FUNFAB(fun_26,2,x_2241F8379,bodyF8369);
  T15 = with_exit(T16);
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_28) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2253_29) {
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

FUNCODEDEF(fun_30) {
  P return_;
  P x_2252F8386;
  P x_2252F8385;
  P x_2252F8384;
  P x_2252F8383;
  P bodyF8382;
  P x_2252F8381;
  P x_2253F8380;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(return_, 0);
  T24 = FUNSHELL(0,fun_x_2253_29,2);
  x_2253F8380 = T24;
  FUNINIT(x_2253F8380, 2,FREEREF(0),return_);
  x_2252F8381 = FREEREF(0);
  bodyF8382 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2252F8381,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T6 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2252F8381,LITREF(lit_62),x_2253F8380);
    x_2252F8383 = T6;
    bodyF8382 = x_2252F8383;
    x_2252F8384 = Ynil;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2252F8384,x_2253F8380);
    x_2252F8385 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2252F8385,x_2253F8380);
    T5 = CALL1(1,VARREF(Ytail),x_2252F8384);
    x_2252F8386 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2252F8386,x_2253F8380);
  } else {
    T7 = CALL2(1,x_2253F8380,LITREF(lit_32),x_2252F8381);
  }
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,LITREF(lit_41));
  T12 = CALL1(1,VARREF(Ylst),T13);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_41));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T19 = bodyF8382;
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T23,LITREF(lit_41));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_41));
  T16 = CALL1(1,VARREF(Ylst),T17);
  T8 = CALL4(1,VARREF(YgooSmacrosYcat),T9,T10,T16,LITREF(lit_41));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_31) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_30,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2257_32) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P return_;
  P x_2256F8395;
  P x_2256F8394;
  P x_2256F8393;
  P x_2256F8392;
  P x_2256F8391;
  P valueF8390;
  P packF8389;
  P x_2256F8388;
  P x_2257F8387;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
  ARG(return_, 0);
  T23 = FUNSHELL(0,fun_x_2257_32,2);
  x_2257F8387 = T23;
  FUNINIT(x_2257F8387, 2,FREEREF(0),return_);
  x_2256F8388 = FREEREF(0);
  packF8389 = YPfalse;
  valueF8390 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2256F8388,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2256F8388,LITREF(lit_69),x_2257F8387);
    x_2256F8391 = T11;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2256F8391,x_2257F8387);
    packF8389 = T9;
    T10 = CALL1(1,VARREF(Ytail),x_2256F8391);
    x_2256F8392 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2256F8392,x_2257F8387);
    valueF8390 = T7;
    T8 = CALL1(1,VARREF(Ytail),x_2256F8392);
    x_2256F8393 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2256F8393,x_2257F8387);
    x_2256F8394 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2256F8394,x_2257F8387);
    T6 = CALL1(1,VARREF(Ytail),x_2256F8393);
    x_2256F8395 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2256F8395,x_2257F8387);
  } else {
    T12 = CALL2(1,x_2257F8387,LITREF(lit_32),x_2256F8388);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T16 = packF8389;
  T15 = CALL1(1,VARREF(Ylst),T16);
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T22 = valueF8390;
  T21 = CALL1(1,VARREF(Ylst),T22);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T21,LITREF(lit_41));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_41));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_34) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_33,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2261_35) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_76),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P return_;
  P x_2260F8402;
  P x_2260F8401;
  P x_2260F8400;
  P x_2260F8399;
  P valueF8398;
  P x_2260F8397;
  P x_2261F8396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(return_, 0);
  T15 = FUNSHELL(0,fun_x_2261_35,2);
  x_2261F8396 = T15;
  FUNINIT(x_2261F8396, 2,FREEREF(0),return_);
  x_2260F8397 = FREEREF(0);
  valueF8398 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2260F8397,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2260F8397,LITREF(lit_76),x_2261F8396);
    x_2260F8399 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2260F8399,x_2261F8396);
    valueF8398 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2260F8399);
    x_2260F8400 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2260F8400,x_2261F8396);
    x_2260F8401 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2260F8401,x_2261F8396);
    T5 = CALL1(1,VARREF(Ytail),x_2260F8400);
    x_2260F8402 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2260F8402,x_2261F8396);
  } else {
    T9 = CALL2(1,x_2261F8396,LITREF(lit_32),x_2260F8397);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T14 = valueF8398;
  T13 = CALL1(1,VARREF(Ylst),T14);
  T10 = CALL4(1,VARREF(YgooSmacrosYcat),T11,T12,T13,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_37) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_36,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2265_38) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_64),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P return_;
  P x_2264F8409;
  P x_2264F8408;
  P x_2264F8407;
  P x_2264F8406;
  P nameF8405;
  P x_2264F8404;
  P x_2265F8403;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(return_, 0);
  T14 = FUNSHELL(0,fun_x_2265_38,2);
  x_2265F8403 = T14;
  FUNINIT(x_2265F8403, 2,FREEREF(0),return_);
  x_2264F8404 = FREEREF(0);
  nameF8405 = YPfalse;
  T1 = CALL2(1,VARREF(YisaQ),x_2264F8404,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T8 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2264F8404,LITREF(lit_64),x_2265F8403);
    x_2264F8406 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2264F8406,x_2265F8403);
    nameF8405 = T6;
    T7 = CALL1(1,VARREF(Ytail),x_2264F8406);
    x_2264F8407 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2264F8407,x_2265F8403);
    x_2264F8408 = T4;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2264F8408,x_2265F8403);
    T5 = CALL1(1,VARREF(Ytail),x_2264F8407);
    x_2264F8409 = T5;
    T2 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2264F8409,x_2265F8403);
  } else {
    T9 = CALL2(1,x_2265F8403,LITREF(lit_32),x_2264F8404);
  }
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T13 = nameF8405;
  T12 = CALL1(1,VARREF(Ylst),T13);
  T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_41));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_40) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_39,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSpackerY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89;
DEFCREGS();
  lit_0 = YPPsym((P)"<packer>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSpackerYLpackerG,T0);
  lit_1 = YPPsym((P)"packer");
  lit_2 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T3 = YPsig(LITREF(lit_2),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLpackerG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker,T2);
  lit_3 = YPPsym((P)"packer-fab");
  lit_4 = YPPlist(1,YPPsym((P)"t"));
  T5 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_fab,T4);
  lit_5 = YPPsym((P)"packer-add");
  lit_6 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YgooSpackerYLpackerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLpackerG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_add,T6);
  lit_7 = YPPsym((P)"packer-res");
  lit_8 = YPPlist(1,YPPsym((P)"a"));
  T9 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YgooSpackerYLpackerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_res,T8);
  lit_9 = YPPsym((P)"<sim-packer>");
  T11 = (P)YPpair(VARREF(YgooSpackerYLpackerG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T11);
  VARSET(YgooSpackerYLsim_packerG,T10);
  lit_10 = YPPsym((P)"packer-value");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_value_0 = YPmet(FUNCODEREF(fun_packer_value_0),LITREF(lit_10),T12,ENVNUL,PNUL,sloc(21));
  T14 = VARREF_OR(YgooSpackerYpacker_value,YPfalse);
  T15 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_12 = YPPsym((P)"packer-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPmet(FUNCODEREF(fun_packer_value_setter_1),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(21));
  T18 = VARREF_OR(YgooSpackerYpacker_value_setter,YPfalse);
  T19 = fun_packer_value_setter_1;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSpackerYpacker_value_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"packer-adder");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPmet(FUNCODEREF(fun_packer_adder_2),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(22));
  T22 = VARREF_OR(YgooSpackerYpacker_adder,YPfalse);
  T23 = fun_packer_adder_2;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSpackerYpacker_adder,T21);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"packer-reser");
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_3 = YPmet(FUNCODEREF(fun_packer_reser_3),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(23));
  T26 = VARREF_OR(YgooSpackerYpacker_reser,YPfalse);
  T27 = fun_packer_reser_3;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSpackerYpacker_reser,T25);
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  lit_19 = YPPlist(1,YPPsym((P)"x"));
  T29 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_4 = YPmet(FUNCODEREF(fun_4),YPfalse,T29,ENVNUL,PNUL,sloc(23));
  T28 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T28,ENVNUL,PNUL,sloc(23));
  T30 = fun_5;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),YPfalse,VARREF(YLfunG),T30);
  lit_20 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T31 = YPsig(LITREF(lit_20),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_6 = YPmet(FUNCODEREF(fun_packer_6),LITREF(lit_1),T31,ENVNUL,PNUL,sloc(25));
  T33 = VARREF_OR(YgooSpackerYpacker,YPfalse);
  T34 = fun_packer_6;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSpackerYpacker,T32);
  lit_21 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_7 = YPmet(FUNCODEREF(fun_packer_add_7),LITREF(lit_5),T35,ENVNUL,PNUL,sloc(28));
  T37 = VARREF_OR(YgooSpackerYpacker_add,YPfalse);
  T38 = fun_packer_add_7;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSpackerYpacker_add,T36);
  lit_22 = YPPlist(1,YPPsym((P)"a"));
  T39 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_8 = YPmet(FUNCODEREF(fun_packer_res_8),LITREF(lit_7),T39,ENVNUL,PNUL,sloc(30));
  T41 = VARREF_OR(YgooSpackerYpacker_res,YPfalse);
  T42 = fun_packer_res_8;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSpackerYpacker_res,T40);
  lit_23 = YPPlist(1,YPPsym((P)"t"));
  lit_24 = YPPlist(1,YPPsym((P)"x"));
  T45 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T45,ENVNUL,PNUL,sloc(34));
  T44 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T43 = YPsig(LITREF(lit_23),YPPlist(1,T44),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_10 = YPmet(FUNCODEREF(fun_packer_fab_10),LITREF(lit_3),T43,ENVNUL,PNUL,sloc(33));
  T47 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T48 = fun_packer_fab_10;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSpackerYpacker_fab,T46);
  lit_25 = YPPlist(1,YPPsym((P)"t"));
  lit_26 = YPPlist(1,YPPsym((P)"x"));
  T51 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T51,ENVNUL,PNUL,sloc(37));
  T50 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T49 = YPsig(LITREF(lit_25),YPPlist(1,T50),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPmet(FUNCODEREF(fun_packer_fab_12),LITREF(lit_3),T49,ENVNUL,PNUL,sloc(36));
  T53 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T54 = fun_packer_fab_12;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSpackerYpacker_fab,T52);
  lit_27 = YPPlist(1,YPPsym((P)"exp"));
  lit_28 = YPPlist(1,YPPsym((P)"return"));
  lit_29 = YPPsym((P)"x-2221");
  lit_30 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_31 = YPPsym((P)"packing-with");
  lit_32 = YPsb((P)"Match Pattern Failure");
  lit_33 = YPPlist(1,YPPsym((P)"return"));
  lit_34 = YPPsym((P)"x-2224");
  lit_35 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_36 = YPPlist(1,YPPsym((P)"return"));
  lit_37 = YPPsym((P)"x-2227");
  lit_38 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_39 = YPsb((P)"failed to match.");
  lit_40 = YPPsym((P)"let");
  lit_41 = Ynil;
  lit_42 = YPPsym((P)"seq");
  T61 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2221_13 = YPmet(FUNCODEREF(fun_x_2221_13),LITREF(lit_29),T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2227_14 = YPmet(FUNCODEREF(fun_x_2227_14),LITREF(lit_37),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2224_16 = YPmet(FUNCODEREF(fun_x_2224_16),LITREF(lit_34),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T55,ENVNUL,PNUL,YPfalse);
  T62 = fun_19;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T62);
  lit_43 = YPPlist(1,YPPsym((P)"exp"));
  lit_44 = YPPlist(1,YPPsym((P)"return"));
  lit_45 = YPPsym((P)"x-2240");
  lit_46 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_47 = YPPsym((P)"packing-in");
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-2243");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPlist(1,YPPsym((P)"return"));
  lit_52 = YPPsym((P)"x-2246");
  lit_53 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_54 = YPPlist(1,YPPsym((P)"return"));
  lit_55 = YPPsym((P)"x-2249");
  lit_56 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_57 = YPPsym((P)"<lst>");
  T71 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2240_20 = YPmet(FUNCODEREF(fun_x_2240_20),LITREF(lit_45),T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2249_21 = YPmet(FUNCODEREF(fun_x_2249_21),LITREF(lit_55),T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2246_23 = YPmet(FUNCODEREF(fun_x_2246_23),LITREF(lit_52),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2243_25 = YPmet(FUNCODEREF(fun_x_2243_25),LITREF(lit_49),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T72 = fun_28;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T72);
  lit_58 = YPPlist(1,YPPsym((P)"exp"));
  lit_59 = YPPlist(1,YPPsym((P)"return"));
  lit_60 = YPPsym((P)"x-2253");
  lit_61 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_62 = YPPsym((P)"packing");
  lit_63 = YPPsym((P)"packer-");
  lit_64 = YPPsym((P)"packed");
  T75 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2253_29 = YPmet(FUNCODEREF(fun_x_2253_29),LITREF(lit_60),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T76 = fun_31;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T76);
  lit_65 = YPPlist(1,YPPsym((P)"exp"));
  lit_66 = YPPlist(1,YPPsym((P)"return"));
  lit_67 = YPPsym((P)"x-2257");
  lit_68 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_69 = YPPsym((P)"pack-in");
  lit_70 = YPPsym((P)"opf");
  lit_71 = YPPsym((P)"_");
  T79 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2257_32 = YPmet(FUNCODEREF(fun_x_2257_32),LITREF(lit_67),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T80 = fun_34;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T80);
  lit_72 = YPPlist(1,YPPsym((P)"exp"));
  lit_73 = YPPlist(1,YPPsym((P)"return"));
  lit_74 = YPPsym((P)"x-2261");
  lit_75 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_76 = YPPsym((P)"pack");
  T87 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T86 = fun_x_2261_35 = YPmet(FUNCODEREF(fun_x_2261_35),LITREF(lit_74),T87,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T84 = fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T82 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T89 = fun_37;
  T88 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T89);
  T81 = T88;
  return T81;
}

P YgooSpackerY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  lit_77 = YPPlist(1,YPPsym((P)"exp"));
  lit_78 = YPPlist(1,YPPsym((P)"return"));
  lit_79 = YPPsym((P)"x-2265");
  lit_80 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T6 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = fun_x_2265_38 = YPmet(FUNCODEREF(fun_x_2265_38),LITREF(lit_79),T6,ENVNUL,PNUL,YPfalse);
  T4 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T3 = fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T4,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T1 = fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T8 = fun_40;
  T7 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T8);
  T0 = T7;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
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
  {"ins", &module_info_gooScolsSseq, NULL},
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
  {"split", &module_info_gooScolsSseq, NULL},
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
  {"sub*", &module_info_gooScolsSseq, NULL},
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
  {"repeat", &module_info_gooScolsSseq, NULL},
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
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
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
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
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
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
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
  {"pop", &module_info_gooScolsSseq, NULL},
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
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
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
  {"push", &module_info_gooScolsSseq, NULL},
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
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
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
  {"cat2", &module_info_gooScolsSseq, NULL},
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
  {"del-dups", &module_info_gooScolsSseq, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
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
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
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
  {"reject", &module_info_gooScolsSseq, NULL},
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
  {"3rd", &module_info_gooScolsSseq, NULL},
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
  {"pick", &module_info_gooScolsSseq, NULL},
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
  {"join", &module_info_gooScolsSseq, NULL},
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
  {"any2?", &module_info_gooScolsSseq, NULL},
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
  {"packer", CVAR, &YgooSpackerYpacker},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"pack", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"---main-0---", PVAR, NULL},
  {"packing-in", PVAR, NULL},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packed", PVAR, NULL},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packing-with", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"packing", PVAR, NULL},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"pack-in", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packer", NULL},
  {"pack", NULL},
  {"<packer>", NULL},
  {"packing-in", NULL},
  {"pack-in", NULL},
  {"packer-res", NULL},
  {"packed", NULL},
  {"packer-add", NULL},
  {"packing-with", NULL},
  {"packing", NULL},
  {"packer-fab", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSpacker;
MODULE_INFO module_info_gooSpacker = {
  "goo/packer",
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
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooSpacker (void);

void load_module_gooSpacker (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooSpackerY___main_0___();
  (P)YgooSpackerY___main_1___();

}

/* END OF GENERATED CODE. */
