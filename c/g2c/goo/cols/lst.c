/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYtan,"goo/math","tan");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_23);
DEFLIT(lit_55);
DEFLIT(lit_17);
DEFLIT(lit_11);
DEFLIT(lit_22);
DEFLIT(lit_47);
DEFLIT(lit_7);
DEFLIT(lit_69);
DEFLIT(lit_82);
DEFLIT(lit_41);
DEFLIT(lit_9);
DEFLIT(lit_46);
DEFLIT(lit_13);
DEFLIT(lit_5);
DEFLIT(lit_52);
DEFLIT(lit_54);
DEFLIT(lit_12);
DEFLIT(lit_61);
DEFLIT(lit_45);
DEFLIT(lit_65);
DEFLIT(lit_16);
DEFLIT(lit_20);
DEFLIT(lit_30);
DEFLIT(lit_70);
DEFLIT(lit_39);
DEFLIT(lit_48);
DEFLIT(lit_19);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_63);
DEFLIT(lit_73);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_8);
DEFLIT(lit_79);
DEFLIT(lit_0);
DEFLIT(lit_74);
DEFLIT(lit_2);
DEFLIT(lit_6);
DEFLIT(lit_58);
DEFLIT(lit_72);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_71);
DEFLIT(lit_77);
DEFLIT(lit_40);
DEFLIT(lit_28);
DEFLIT(lit_75);
DEFLIT(lit_35);
DEFLIT(lit_15);
DEFLIT(lit_29);
DEFLIT(lit_80);
DEFLIT(lit_78);
DEFLIT(lit_84);
DEFLIT(lit_66);
DEFLIT(lit_76);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_81);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_68);
DEFLIT(lit_57);
DEFLIT(lit_51);
DEFLIT(lit_64);
DEFLIT(lit_4);
DEFLIT(lit_36);
DEFLIT(lit_10);
DEFLIT(lit_60);
DEFLIT(lit_27);
DEFLIT(lit_56);
DEFLIT(lit_44);
DEFLIT(lit_62);
DEFLIT(lit_59);
DEFLIT(lit_37);
DEFLIT(lit_18);
DEFLIT(lit_67);
DEFLIT(lit_43);
DEFLIT(lit_3);
DEFLIT(lit_50);
DEFLIT(lit_85);
DEFLIT(lit_83);
DEFLIT(lit_21);
DEFLIT(lit_24);

/* FUNCTIONS: */

LOCFOR(fun_sum_0);
LOCFOR(fun_len_1);
LOCFOR(fun_fnd_2);
LOCFOR(fun_elt_or_3);
LOCFOR(fun_fnd_4);
LOCFOR(fun_elt_setter_5);
LOCFOR(fun_emptyQ_6);
LOCFOR(fun_empty_7);
LOCFOR(fun_fab_8);
LOCFOR(fun_fab_9);
LOCFOR(fun_build_10);
LOCFOR(fun_fabs_11);
LOCFOR(fun_Pdat_12);
LOCFOR(fun_Pdat_setter_13);
LOCFOR(fun_Pkey_14);
LOCFOR(fun_Pkey_setter_15);
LOCFOR(fun_16);
LOCFOR(fun_enum_17);
LOCFOR(fun_finQ_18);
LOCFOR(fun_nxt_19);
LOCFOR(fun_now_20);
LOCFOR(fun_now_setter_21);
LOCFOR(fun_now_key_22);
LOCFOR(fun_add_23);
LOCFOR(fun_fnd_24);
LOCFOR(fun_last_25);
LOCFOR(fun_loop_26);
LOCFOR(fun_revX_27);
LOCFOR(fun_find_tail_28);
LOCFOR(fun_connect_29);
LOCFOR(fun_x_1304_30);
LOCFOR(fun_catX_31);
LOCFOR(fun_lst_32);
LOCFOR(fun_pair_33);
LOCFOR(fun_pushX_34);
LOCFOR(fun_popX_35);
LOCFOR(fun_bub_36);
LOCFOR(fun_loop_37);
LOCFOR(fun_sort_byX_38);
LOCFOR(fun_to_str_39);
LOCFOR(fun_assq_40);
LOCFOR(fun_assqn_41);
extern P YgooScolsSlstY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sum_0) {
  P count_,x_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = count_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T3;
    a2 = T4;
    count_ = a1;
    x_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_1) {
  P x_;
  P sumF1719;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_0,1);
  sumF1719 = T1;
  FUNINIT(sumF1719, 1,sumF1719);
  T2 = CALL2(1,sumF1719,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_2) {
  P count_,x_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(1));
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(Yhead),x_);
      T2 = T4;
    } else {
      T6 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T7 = CALL1(1,VARREF(Ytail),x_);
      a1 = T6;
      a2 = T7;
      count_ = a1;
      x_ = a2;
      goto loop;
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_3) {
  P x_,key_,default_;
  P fndF1720;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_2,3);
  fndF1720 = T1;
  FUNINIT(fndF1720, 3,default_,key_,fndF1720);
  T2 = CALL2(1,fndF1720,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fnd_4) {
  P count_,x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(count_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yrange_error),x_,FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),count_,FREEREF(0));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yhead_setter),FREEREF(1),x_);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
      T8 = CALL1(1,VARREF(Ytail),x_);
      a1 = T7;
      a2 = T8;
      count_ = a1;
      x_ = a2;
      goto loop;
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_5) {
  P z_,x_,key_;
  P fndF1721;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_4,3);
  fndF1721 = T1;
  FUNINIT(fndF1721, 3,key_,z_,fndF1721);
  T2 = CALL2(1,fndF1721,YPint((P)0),x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emptyQ_6) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(Yobject_class),c_);
  T1 = CALL1(1,VARREF(YgooScolsScolYempty),T2);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),c_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_empty_7) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(Ynil);
}

FUNCODEDEF(fun_fab_8) {
  P i_,res_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(res_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(Ynew),FREEREF(0),VARREF(Ytail),res_);
    a1 = T3;
    a2 = T4;
    i_ = a1;
    res_ = a2;
    goto loop;
    T0 = T2;
  } else {
    T0 = res_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_9) {
  P t_,s_;
  P fabF1722;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_8,2);
  fabF1722 = T1;
  FUNINIT(fabF1722, 2,t_,fabF1722);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  T2 = CALL2(1,fabF1722,s_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_10) {
  P index_,result_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(index_, 0);
  ARG(result_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),index_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = result_;
  } else {
    T3 = CALL2(1,VARREF(YgooSmathY_),index_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),index_);
    T4 = CALL5(1,VARREF(Ynew),FREEREF(0),VARREF(Yhead),T5,VARREF(Ytail),result_);
    a1 = T3;
    a2 = T4;
    index_ = a1;
    result_ = a2;
    goto loop;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fabs_11) {
  P c_,objects_;
  P buildF1723;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_10,3);
  buildF1723 = T1;
  FUNINIT(buildF1723, 3,c_,objects_,buildF1723);
  T4 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  T2 = CALL2(1,buildF1723,T3,T5);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSlstYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_enum_17) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_18) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_19) {
  P e_;
  P x_1302F1724;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1302F1724 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1302F1724);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1302F1724);
  T0 = x_1302F1724;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_20) {
  P e_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL1(1,VARREF(Yhead),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_setter_21) {
  P v_,e_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T0 = CALL2(1,VARREF(Yhead_setter),v_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_now_key_22) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_23) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_24) {
  P x_,px_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(px_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(Yhead),px_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Ytail),x_);
    a1 = T4;
    a2 = x_;
    x_ = a1;
    px_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_last_25) {
  P x_;
  P fndF1725;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_24,1);
  fndF1725 = T1;
  FUNINIT(fndF1725, 1,fndF1725);
  T2 = CALL2(0,fndF1725,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  P l_,r_;
  P tF1726;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = r_;
  } else {
    T3 = CALL1(1,VARREF(Ytail),l_);
    tF1726 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF1726;
    a2 = l_;
    l_ = a1;
    r_ = a2;
    goto loop;
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_revX_27) {
  P c_;
  P loopF1727;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_26,1);
  loopF1727 = T1;
  FUNINIT(loopF1727, 1,loopF1727);
  T4 = CALL1(1,VARREF(Yobject_class),c_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),T4);
  T2 = CALL2(0,loopF1727,c_,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_tail_28) {
  P p_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(p_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),p_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = p_;
  } else {
    T4 = CALL1(1,VARREF(Ytail),p_);
    a1 = T4;
    p_ = a1;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_connect_29) {
  P x_,y_;
  P find_tailF1728;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),y_);
  if (T1 != YPfalse) {
    T0 = x_;
  } else {
    CALL2(1,VARREF(Ytail_setter),y_,x_);
    T3 = FUNSHELL(1,fun_find_tail_28,1);
    find_tailF1728 = T3;
    FUNINIT(find_tailF1728, 1,find_tailF1728);
    T4 = CALL1(1,find_tailF1728,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1304_30) {
  P x_1303_;
  P xF1729;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1303_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1303_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1303_);
    xF1729 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1729);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    BOXVAL(FREEREF(0)) = T5;
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1303_);
    a1 = T9;
    x_1303_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_31) {
  P x_,more_;
  P x_1304F1733;
  P curF1732;
  P resultF1731;
  P connectF1730;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_29;
  connectF1730 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1731 = T3;
  curF1732 = resultF1731;
  curF1732 = BOXFAB(curF1732);
  T7 = BOXVAL(curF1732);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1730,T7,T8);
  BOXVAL(curF1732) = T6;
  T9 = FUNSHELL(1,fun_x_1304_30,3);
  x_1304F1733 = T9;
  FUNINIT(x_1304F1733, 3,curF1732,connectF1730,x_1304F1733);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T10 = CALL1(0,x_1304F1733,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF1731);
  T4 = T12;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lst_32) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YLlstG),objects_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pair_33) {
  P h_,t_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(h_, 0);
  ARG(t_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YLlstG),VARREF(Yhead),h_,VARREF(Ytail),t_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_34) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),x_,c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_35) {
  P c_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),c_);
  T2 = CALL1(1,VARREF(Yhead),c_);
  T0 = CALL2(1,VARREF(Ytup),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_bub_36) {
  P tmp_,prev_,next_;
  P tmpF1734;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(tmp_, 0);
  ARG(prev_, 1);
  ARG(next_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_);
  if (T1 != YPfalse) {
    T2 = CALL1(0,FREEREF(0),tmp_);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),next_);
    T7 = CALL1(1,VARREF(Yhead),prev_);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    if (T5 != YPfalse) {
      T9 = CALL1(1,VARREF(Yhead),prev_);
      tmpF1734 = T9;
      T10 = CALL1(1,VARREF(Yhead),next_);
      CALL2(1,VARREF(Yhead_setter),T10,prev_);
      T11 = CALL2(1,VARREF(Yhead_setter),tmpF1734,next_);
      T8 = T11;
      T4 = T8;
    } else {
      T4 = tmp_;
    }
    T12 = CALL1(1,VARREF(Ytail),prev_);
    T13 = CALL1(1,VARREF(Ytail),next_);
    a1 = T4;
    a2 = T12;
    a3 = T13;
    tmp_ = a1;
    prev_ = a2;
    next_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_37) {
  P tmp_;
  P bubF1735;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(tmp_, 0);
loop:
  T2 = CALL1(1,VARREF(Yhead),FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),tmp_,T2);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T4 = FUNSHELL(1,fun_bub_36,3);
    bubF1735 = T4;
    FUNINIT(bubF1735, 3,FREEREF(1),FREEREF(2),bubF1735);
    T6 = CALL1(1,VARREF(Yhead),FREEREF(0));
    T7 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T5 = CALL3(0,bubF1735,T6,FREEREF(0),T7);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sort_byX_38) {
  P items_,test_;
  P loopF1736;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_37,3);
  loopF1736 = T1;
  FUNINIT(loopF1736, 3,items_,loopF1736,test_);
  T2 = CALL1(0,loopF1736,YPfalse);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_39) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_82),T1,LITREF(lit_83));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assq_40) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
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

FUNCODEDEF(fun_assqn_41) {
  P x_,l_,pos_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  ARG(pos_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
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

P YgooScolsSlstY___main_0___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
DEFCREGS();
loop:
  VARSET(YgooScolsSlstYLlistG,VARREF(YLlstG));
  lit_0 = YPPsym((P)"lst");
  lit_1 = YPPlist(1,YPPsym((P)"elts"));
  T1 = YPsig(LITREF(lit_1),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T3 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_4 = YPPsym((P)"assqn");
  lit_5 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T5 = YPsig(LITREF(lit_5),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassqn,T4);
  lit_6 = YPPsym((P)"assq");
  lit_7 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T7 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassq,T6);
  lit_8 = YPPsym((P)"len");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  lit_10 = YPPsym((P)"sum");
  lit_11 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_0 = YPmet(FUNCODEREF(fun_sum_0),LITREF(lit_10),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_1 = YPmet(FUNCODEREF(fun_len_1),LITREF(lit_8),T8,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooStypesYlen);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooStypesYlen);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_len_1;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooStypesYlen,T10);
  lit_12 = YPPsym((P)"elt-or");
  lit_13 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"key"),YPPsym((P)"default"));
  lit_14 = YPPsym((P)"fnd");
  lit_15 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_2 = YPmet(FUNCODEREF(fun_fnd_2),LITREF(lit_14),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(LITREF(lit_13),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_3 = YPmet(FUNCODEREF(fun_elt_or_3),LITREF(lit_12),T14,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooScolsScolYelt_or);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooScolsScolYelt_or);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_elt_or_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooScolsScolYelt_or,T16);
  lit_16 = YPPsym((P)"elt-setter");
  lit_17 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"key"));
  lit_18 = YPPlist(2,YPPsym((P)"count"),YPPsym((P)"x"));
  T21 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_4 = YPmet(FUNCODEREF(fun_fnd_4),LITREF(lit_14),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(LITREF(lit_17),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_5 = YPmet(FUNCODEREF(fun_elt_setter_5),LITREF(lit_16),T20,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_elt_setter_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooScolsScolxYelt_setter,T22);
  lit_19 = YPPsym((P)"empty?");
  lit_20 = YPPlist(1,YPPsym((P)"c"));
  T26 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_6 = YPmet(FUNCODEREF(fun_emptyQ_6),LITREF(lit_19),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YgooSmacrosYemptyQ);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_emptyQ_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSmacrosYemptyQ,T27);
  lit_21 = YPPsym((P)"empty");
  lit_22 = YPPlist(1,YPPsym((P)"c"));
  T32 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T31 = YPsig(LITREF(lit_22),YPPlist(1,T32),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_7 = YPmet(FUNCODEREF(fun_empty_7),LITREF(lit_21),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YgooScolsScolYempty);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooScolsScolYempty);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_empty_7;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooScolsScolYempty,T33);
  lit_23 = YPPsym((P)"fab");
  lit_24 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"s"));
  lit_25 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"res"));
  T39 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_8 = YPmet(FUNCODEREF(fun_fab_8),LITREF(lit_23),T39,ENVNUL,PNUL,YPfalse);
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T37 = YPsig(LITREF(lit_24),YPPlist(2,T38,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_23),T37,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooScolsScolYfab);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsScolYfab);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_fab_9;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsScolYfab,T40);
  lit_26 = YPPsym((P)"fabs");
  lit_27 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"objects"));
  lit_28 = YPPsym((P)"build");
  lit_29 = YPPlist(2,YPPsym((P)"index"),YPPsym((P)"result"));
  T46 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_10 = YPmet(FUNCODEREF(fun_build_10),LITREF(lit_28),T46,ENVNUL,PNUL,YPfalse);
  T45 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T44 = YPsig(LITREF(lit_27),YPPlist(1,T45),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_fabs_11 = YPmet(FUNCODEREF(fun_fabs_11),LITREF(lit_26),T44,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YgooSmathYfabs);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSmathYfabs);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_fabs_11;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSmathYfabs,T47);
  lit_30 = YPPsym((P)"<lst-enum>");
  T52 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T51 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T52);
  VARSET(YgooScolsSlstYLlst_enumG,T51);
  lit_31 = YPPsym((P)"%dat");
  lit_32 = YPPlist(1,YPPsym((P)"_x"));
  T53 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_12 = YPmet(FUNCODEREF(fun_Pdat_12),LITREF(lit_31),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsSlstYPdat);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSlstYPdat);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_Pdat_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSlstYPdat,T54);
  lit_33 = YPPsym((P)"%dat-setter");
  lit_34 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T58 = YPsig(LITREF(lit_34),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_13 = YPmet(FUNCODEREF(fun_Pdat_setter_13),LITREF(lit_33),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsSlstYPdat_setter);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSlstYPdat_setter);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_Pdat_setter_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSlstYPdat_setter,T59);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPdat),VARREF(YgooScolsSlstYPdat_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_35 = YPPsym((P)"%key");
  lit_36 = YPPlist(1,YPPsym((P)"_x"));
  T63 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_14 = YPmet(FUNCODEREF(fun_Pkey_14),LITREF(lit_35),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsSlstYPkey);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsSlstYPkey);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_Pkey_14;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsSlstYPkey,T64);
  lit_37 = YPPsym((P)"%key-setter");
  lit_38 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T68 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_15 = YPmet(FUNCODEREF(fun_Pkey_setter_15),LITREF(lit_37),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooScolsSlstYPkey_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsSlstYPkey_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_Pkey_setter_15;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsSlstYPkey_setter,T69);
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T73 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_16;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T74);
  lit_40 = YPPsym((P)"enum");
  lit_41 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_17 = YPmet(FUNCODEREF(fun_enum_17),LITREF(lit_40),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsScolYenum);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsScolYenum);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_enum_17;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsScolYenum,T76);
  lit_42 = YPPsym((P)"fin?");
  lit_43 = YPPlist(1,YPPsym((P)"e"));
  T80 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_18 = YPmet(FUNCODEREF(fun_finQ_18),LITREF(lit_42),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsScolYfinQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolYfinQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_finQ_18;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolYfinQ,T81);
  lit_44 = YPPsym((P)"nxt");
  lit_45 = YPPlist(1,YPPsym((P)"e"));
  T85 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_19 = YPmet(FUNCODEREF(fun_nxt_19),LITREF(lit_44),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsScolYnxt);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsScolYnxt);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_nxt_19;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsScolYnxt,T86);
  lit_46 = YPPsym((P)"now");
  lit_47 = YPPlist(1,YPPsym((P)"e"));
  T90 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_20 = YPmet(FUNCODEREF(fun_now_20),LITREF(lit_46),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScolsScolYnow);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsScolYnow);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_now_20;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsScolYnow,T91);
  lit_48 = YPPsym((P)"now-setter");
  lit_49 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"e"));
  T95 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_21 = YPmet(FUNCODEREF(fun_now_setter_21),LITREF(lit_48),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScolsScolYnow_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_now_setter_21;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolYnow_setter,T96);
  lit_50 = YPPsym((P)"now-key");
  lit_51 = YPPlist(1,YPPsym((P)"e"));
  T100 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_22 = YPmet(FUNCODEREF(fun_now_key_22),LITREF(lit_50),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScolsScolYnow_key);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolYnow_key);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_now_key_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolYnow_key,T101);
  lit_52 = YPPsym((P)"add");
  lit_53 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_23 = YPmet(FUNCODEREF(fun_add_23),LITREF(lit_52),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScolsScolYadd);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYadd);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_add_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYadd,T106);
  lit_54 = YPPsym((P)"last");
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  lit_56 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"px"));
  T111 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_24 = YPmet(FUNCODEREF(fun_fnd_24),LITREF(lit_14),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_25 = YPmet(FUNCODEREF(fun_last_25),LITREF(lit_54),T110,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooSmacrosYlast);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSmacrosYlast);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_last_25;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSmacrosYlast,T112);
  lit_57 = YPPsym((P)"rev!");
  lit_58 = YPPlist(1,YPPsym((P)"c"));
  lit_59 = YPPsym((P)"loop");
  lit_60 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"r"));
  T117 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),LITREF(lit_59),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_27 = YPmet(FUNCODEREF(fun_revX_27),LITREF(lit_57),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooSmacrosYrevX);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSmacrosYrevX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_revX_27;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSmacrosYrevX,T118);
  lit_61 = YPPsym((P)"cat!");
  lit_62 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  lit_63 = YPPsym((P)"connect");
  lit_64 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_65 = YPPsym((P)"find-tail");
  lit_66 = YPPlist(1,YPPsym((P)"p"));
  lit_67 = YPPsym((P)"x-1304");
  lit_68 = YPPlist(1,YPPsym((P)"x-1303"));
  T125 = YPsig(LITREF(lit_66),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_28 = YPmet(FUNCODEREF(fun_find_tail_28),LITREF(lit_65),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_29 = YPmet(FUNCODEREF(fun_connect_29),LITREF(lit_63),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1304_30 = YPmet(FUNCODEREF(fun_x_1304_30),LITREF(lit_67),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_31 = YPmet(FUNCODEREF(fun_catX_31),LITREF(lit_61),T122,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YgooScolsSseqxYcatX);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_catX_31;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooScolsSseqxYcatX,T126);
  lit_69 = YPPlist(1,YPPsym((P)"objects"));
  T130 = YPsig(LITREF(lit_69),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  fun_lst_32 = YPmet(FUNCODEREF(fun_lst_32),LITREF(lit_0),T130,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(Ylst);
  if (T133 != YPfalse) {
    T132 = VARREF(Ylst);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_lst_32;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(Ylst,T131);
  lit_70 = YPPlist(2,YPPsym((P)"h"),YPPsym((P)"t"));
  T135 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pair_33 = YPmet(FUNCODEREF(fun_pair_33),LITREF(lit_2),T135,ENVNUL,PNUL,YPfalse);
  T138 = BOUNDP(YgooSmacrosYpair);
  if (T138 != YPfalse) {
    T137 = VARREF(YgooSmacrosYpair);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_pair_33;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YgooSmacrosYpair,T136);
  lit_71 = YPPsym((P)"push!");
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T140 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_34 = YPmet(FUNCODEREF(fun_pushX_34),LITREF(lit_71),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YgooScolsSseqxYpushX);
  if (T143 != YPfalse) {
    T142 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_pushX_34;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YgooScolsSseqxYpushX,T141);
  lit_73 = YPPsym((P)"pop!");
  lit_74 = YPPlist(1,YPPsym((P)"c"));
  T146 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T145 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T146,Ynil);
  fun_popX_35 = YPmet(FUNCODEREF(fun_popX_35),LITREF(lit_73),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsSseqxYpopX);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_popX_35;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsSseqxYpopX,T147);
  lit_75 = YPPsym((P)"sort-by!");
  lit_76 = YPPlist(2,YPPsym((P)"items"),YPPsym((P)"test"));
  lit_77 = YPPlist(1,YPPsym((P)"tmp"));
  lit_78 = YPPsym((P)"bub");
  lit_79 = YPPlist(3,YPPsym((P)"tmp"),YPPsym((P)"prev"),YPPsym((P)"next"));
  T153 = YPsig(LITREF(lit_79),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_bub_36 = YPmet(FUNCODEREF(fun_bub_36),LITREF(lit_78),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_37 = YPmet(FUNCODEREF(fun_loop_37),LITREF(lit_59),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_38 = YPmet(FUNCODEREF(fun_sort_byX_38),LITREF(lit_75),T151,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_sort_byX_38;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsSseqYsort_byX,T154);
  lit_80 = YPPsym((P)"to-str");
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPsb((P)"(");
  lit_83 = YPsb((P)")");
  T158 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_39 = YPmet(FUNCODEREF(fun_to_str_39),LITREF(lit_80),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmathYto_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYto_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_to_str_39;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYto_str,T159);
  lit_84 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T163 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_40 = YPmet(FUNCODEREF(fun_assq_40),LITREF(lit_6),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YgooScolsSlstYassq);
  if (T166 != YPfalse) {
    T165 = VARREF(YgooScolsSlstYassq);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_assq_40;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YgooScolsSlstYassq,T164);
  lit_85 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"l"),YPPsym((P)"pos"));
  T170 = YPsig(LITREF(lit_85),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T169 = fun_assqn_41 = YPmet(FUNCODEREF(fun_assqn_41),LITREF(lit_4),T170,ENVNUL,PNUL,YPfalse);
  T174 = BOUNDP(YgooScolsSlstYassqn);
  if (T174 != YPfalse) {
    T173 = VARREF(YgooScolsSlstYassqn);
  } else {
    T173 = YPfalse;
  }
  T175 = fun_assqn_41;
  T172 = XCALL2(1,VARREF(YPdefine_method),T173,T175);
  T171 = VARSET(YgooScolsSlstYassqn,T172);
  T168 = T171;
  return T168;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%str", &module_info_gooSboot, "%str"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"if", &module_info_gooSboot, "if"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"now", &module_info_gooScolsScol, "now"},
  {"ct", &module_info_gooSboot, "ct"},
  {"t<", &module_info_gooStypes, "t<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"t=", &module_info_gooStypes, "t="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"items", &module_info_gooScolsScol, "items"},
  {"max", &module_info_gooSmag, "max"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"~", &module_info_gooSmath, "~"},
  {"@len", &module_info_gooSboot, "@len"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"use", &module_info_gooSboot, "use"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%met", &module_info_gooSboot, "%met"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%time", &module_info_gooSboot, "%time"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"nul", &module_info_gooSboot, "nul"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"seq", &module_info_gooSboot, "seq"},
  {"map", &module_info_gooSmacros, "map"},
  {"do", &module_info_gooSmacros, "do"},
  {"dl", &module_info_gooSboot, "dl"},
  {"for", &module_info_gooSmacros, "for"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"error", &module_info_gooSboot, "error"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<", &module_info_gooSmag, "<"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">>", &module_info_gooSmath, ">>"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"%im", &module_info_gooSboot, "%im"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"df", &module_info_gooSboot, "df"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"=", &module_info_gooSmath, "="},
  {"dv", &module_info_gooSboot, "dv"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"@<", &module_info_gooSboot, "@<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"try", &module_info_gooSboot, "try"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%put", &module_info_gooSboot, "%put"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"esc", &module_info_gooSboot, "esc"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"/", &module_info_gooSmath, "/"},
  {"pow", &module_info_gooSmath, "pow"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"---main-0---", PVAR, NULL},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"head-setter", "head-setter"},
  {"head", "head"},
  {"<list>", "<list>"},
  {"lst", "lst"},
  {"nil", "nil"},
  {"assq", "assq"},
  {"list", "list"},
  {"tail-setter", "tail-setter"},
  {"tail", "tail"},
  {"assqn", "assqn"},
  {"pair", "pair"},
  {"<lst>", "<lst>"},
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
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
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
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();

  (P)YgooScolsSlstY___main_0___();

}

/* END OF GENERATED CODE. */
