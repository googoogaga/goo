/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/vec */

EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YgooScolsSvecYquicksortX,"goo/cols/vec","quicksort!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooScolsSvecYvec_dat_setter,"goo/cols/vec","vec-dat-setter");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooScolsSvecYvec_len_setter,"goo/cols/vec","vec-len-setter");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YgooScolsSvecYvec_len,"goo/cols/vec","vec-len");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooScolsSvecYpartitionX,"goo/cols/vec","partition!");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YgooScolsSvecYvec_dat,"goo/cols/vec","vec-dat");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
DEF(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_22);
DEFLIT(lit_36);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_33);
DEFLIT(lit_42);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_32);
DEFLIT(lit_40);
DEFLIT(lit_11);
DEFLIT(lit_23);
DEFLIT(lit_45);
DEFLIT(lit_18);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_43);
DEFLIT(lit_29);
DEFLIT(lit_4);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_20);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_37);
DEFLIT(lit_39);
DEFLIT(lit_35);
DEFLIT(lit_9);
DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_49);
DEFLIT(lit_1);
DEFLIT(lit_30);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_17);
DEFLIT(lit_31);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_12);
DEFLIT(lit_44);
DEFLIT(lit_38);

/* FUNCTIONS: */

LOCFOR(fun_vec_len_0);
LOCFOR(fun_vec_len_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_vec_dat_3);
LOCFOR(fun_vec_dat_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_len_6);
LOCFOR(fun_elt_or_7);
LOCFOR(fun_elt_setter_8);
LOCFOR(fun_empty_9);
LOCFOR(fun_fab_10);
LOCFOR(fun_x_1312_11);
LOCFOR(fun_x_1310_12);
LOCFOR(fun_catX_13);
LOCFOR(fun_vec_14);
LOCFOR(fun_pushX_15);
LOCFOR(fun_popX_16);
LOCFOR(fun_to_str_17);
LOCFOR(fun_addX_18);
LOCFOR(fun_fill_19);
LOCFOR(fun_lenSfill_setter_20);
LOCFOR(fun_len_setter_21);
LOCFOR(fun_zapX_22);
LOCFOR(fun_low_elt_23);
LOCFOR(fun_low_elt_setter_24);
LOCFOR(fun_sort_by_25);
LOCFOR(fun_sort_byX_26);
LOCFOR(fun_quicksortX_27);
LOCFOR(fun_j_loop_28);
LOCFOR(fun_i_loop_29);
LOCFOR(fun_loop_30);
LOCFOR(fun_partitionX_31);
extern P YgooScolsSvecY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_vec_len_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_len_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_len));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_vec_dat_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vec_dat_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSvecYvec_dat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL0(1,VARREF(YgooScolsSrepYrep_nul));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_6) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSvecYvec_len),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elt_or_7) {
  P c_,i_,default_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(c_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),c_,i_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,i_);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_setter_8) {
  P z_,c_,i_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(c_, 1);
  ARG(i_, 2);
loop:
  T0 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,i_);
  } else {
  }
  T2 = CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),z_,c_,i_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_empty_9) {
  P c_;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T0 = CALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_10) {
  P c_,s_;
  P datF1766;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),s_);
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T2,YPfalse);
  datF1766 = T1;
  T3 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),s_,VARREF(YgooScolsSvecYvec_dat),datF1766);
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1312_11) {
  P x_1311_;
  P eF1767;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1311_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1311_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1311_);
    eF1767 = T4;
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),eF1767);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1311_);
    a1 = T6;
    x_1311_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1310_12) {
  P x_1309_;
  P x_1312F1769;
  P sF1768;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1309_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1309_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1309_);
    sF1768 = T4;
    T5 = FUNSHELL(1,fun_x_1312_11,2);
    x_1312F1769 = T5;
    FUNINIT(x_1312F1769, 2,FREEREF(0),x_1312F1769);
    T7 = CALL1(1,VARREF(YgooScolsScolYenum),sF1768);
    T6 = CALL1(0,x_1312F1769,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1309_);
    a1 = T9;
    x_1309_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_catX_13) {
  P x_,more_;
  P x_1310F1770;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1310_12,2);
  x_1310F1770 = T0;
  FUNINIT(x_1310F1770, 2,x_,x_1310F1770);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T1 = CALL1(0,x_1310F1770,T2);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_vec_14) {
  P elts_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(elts_, 0);
loop:
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSmathYfabs),YPfalse,VARREF(YgooScolsSvecYLvecG),elts_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pushX_15) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYaddX),c_,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_popX_16) {
  P c_;
  P xF1772;
  P new_lenF1771;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),c_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  new_lenF1771 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYL),new_lenF1771,YPint((P)0));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,new_lenF1771);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooScolsScolYlow_elt),c_,new_lenF1771);
  xF1772 = T6;
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),new_lenF1771,c_);
  T7 = CALL2(1,VARREF(Ytup),c_,xF1772);
  T5 = T7;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_17) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYvals_to_str),x_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_29),T1,LITREF(lit_30));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_addX_18) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL1(1,VARREF(YgooStypesYlen),c_);
  CALL3(1,VARREF(YgooScolsScolxYlow_elt_setter),x_,c_,T0);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_fill_19) {
  P i_;
  P tmpF1774;
  P tmpF1773;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  tmpF1773 = T1;
  if (tmpF1773 != YPfalse) {
    T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),FREEREF(1),FREEREF(2),i_);
    tmpF1774 = T4;
    if (tmpF1774 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T7;
      i_ = a1;
      goto loop;
      T5 = T6;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lenSfill_setter_20) {
  P new_len_,c_,default_;
  P fillF1778;
  P old_lenF1777;
  P new_dataF1776;
  P datF1775;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2,a3;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),c_);
  datF1775 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrepYrep_len),datF1775);
  T3 = CALL2(1,VARREF(YgooSmagYG),new_len_,T4);
  if (T3 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooSmathYpower_of_two_ceil),new_len_);
    T6 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T7,default_);
    new_dataF1776 = T6;
    CALL2(1,VARREF(YgooScolsSrepYrep_intoX),new_dataF1776,datF1775);
    CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
    T8 = CALL2(1,VARREF(YgooScolsSvecYvec_dat_setter),new_dataF1776,c_);
    T5 = T8;
    T2 = T5;
  } else {
    T11 = CALL1(1,VARREF(YgooStypesYlen),c_);
    T10 = CALL2(1,VARREF(YgooSmagYL),new_len_,T11);
    if (T10 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooStypesYlen),c_);
      old_lenF1777 = T13;
      T14 = CALL2(1,VARREF(YgooSmagYL),new_len_,YPint((P)0));
      if (T14 != YPfalse) {
        T15 = CALL2(1,VARREF(YgooScolsScolYrange_error),c_,new_len_);
      } else {
      }
      CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T17 = FUNSHELL(1,fun_fill_19,4);
      fillF1778 = T17;
      FUNINIT(fillF1778, 4,old_lenF1777,default_,datF1775,fillF1778);
      T18 = CALL1(1,fillF1778,new_len_);
      T16 = T18;
      T12 = T16;
      T9 = T12;
    } else {
      T19 = CALL2(1,VARREF(YgooScolsSvecYvec_len_setter),new_len_,c_);
      T9 = T19;
    }
    T2 = T9;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_setter_21) {
  P new_len_,c_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(new_len_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYelt_default),c_);
  T0 = CALL3(1,VARREF(YgooScolsScolxYlenSfill_setter),new_len_,c_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_zapX_22) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),c_);
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_low_elt_23) {
  P x_,i_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T0 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T1,i_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_low_elt_setter_24) {
  P z_,x_,i_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL2(1,VARREF(YgooSmagYGE),i_,T1);
  if (T0 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T2 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),T3,x_);
  } else {
  }
  T5 = CALL1(1,VARREF(YgooScolsSvecYvec_dat),x_);
  T4 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),z_,T5,i_);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_sort_by_25) {
  P a_,test_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T2,test_);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),a_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_byX_26) {
  P a_,test_;
  P sortedF1779;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),a_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),a_);
  T3 = CALL1(1,VARREF(YgooSmathY1_),T4);
  T1 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),T2,YPint((P)0),T3,test_);
  sortedF1779 = T1;
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),a_,sortedF1779);
  if (T6 != YPfalse) {
    T5 = sortedF1779;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYinto),a_,sortedF1779);
    T5 = T7;
  }
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_quicksortX_27) {
  P a_,p_,r_,test_;
  P qF1780;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),p_,r_);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YgooScolsSvecYpartitionX),a_,p_,r_,test_);
    qF1780 = T3;
    CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,p_,qF1780,test_);
    T5 = CALL1(1,VARREF(YgooSmathY1A),qF1780);
    T4 = CALL4(1,VARREF(YgooScolsSvecYquicksortX),a_,T5,r_,test_);
    T2 = T4;
    T0 = T2;
  } else {
    T0 = a_;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_j_loop_28) {
  P tmpF1781;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathY_),T1,YPint((P)1));
  BOXVAL(FREEREF(0)) = T0;
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T7);
  T5 = CALL2(1,FREEREF(3),T6,FREEREF(2));
  tmpF1781 = T5;
  if (tmpF1781 != YPfalse) {
    T8 = tmpF1781;
  } else {
    T11 = BOXVAL(FREEREF(0));
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T11);
    T9 = CALL2(1,VARREF(YgooSmathYE),T10,FREEREF(2));
    T8 = T9;
  }
  T4 = T8;
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    goto loop;
    T2 = T12;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_i_loop_29) {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXVAL(FREEREF(0)) = T0;
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),T7);
  T5 = CALL2(1,FREEREF(3),T6,FREEREF(2));
  T4 = CALL1(1,VARREF(Ynot),T5);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    goto loop;
    T2 = T8;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_loop_30) {
  P x_1317F1788;
  P x_1315F1787;
  P x_1316F1786;
  P x_1313F1785;
  P x_1314F1784;
  P i_loopF1783;
  P j_loopF1782;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
loop:
  T0 = FUNSHELL(1,fun_j_loop_28,5);
  j_loopF1782 = T0;
  FUNINIT(j_loopF1782, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),j_loopF1782);
  T1 = CALL0(0,j_loopF1782);
  T2 = FUNSHELL(1,fun_i_loop_29,5);
  i_loopF1783 = T2;
  FUNINIT(i_loopF1783, 5,FREEREF(4),FREEREF(1),FREEREF(2),FREEREF(3),i_loopF1783);
  T3 = CALL0(0,i_loopF1783);
  T6 = BOXVAL(FREEREF(4));
  T7 = BOXVAL(FREEREF(0));
  T5 = CALL2(1,VARREF(YgooSmagYL),T6,T7);
  if (T5 != YPfalse) {
    x_1314F1784 = FREEREF(1);
    T9 = BOXVAL(FREEREF(4));
    x_1313F1785 = T9;
    x_1316F1786 = FREEREF(1);
    T12 = BOXVAL(FREEREF(0));
    x_1315F1787 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYelt),x_1314F1784,x_1313F1785);
    x_1317F1788 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYelt),x_1316F1786,x_1315F1787);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T15,x_1314F1784,x_1313F1785);
    T16 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_1317F1788,x_1316F1786,x_1315F1787);
    T13 = T16;
    T11 = T13;
    T10 = T11;
    T8 = T10;
    goto loop;
    T4 = T17;
  } else {
    T18 = BOXVAL(FREEREF(0));
    T4 = T18;
  }
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_partitionX_31) {
  P a_,p_,r_,test_;
  P loopF1792;
  P jF1791;
  P iF1790;
  P xF1789;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(a_, 0);
  ARG(p_, 1);
  ARG(r_, 2);
  ARG(test_, 3);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),a_,p_);
  xF1789 = T1;
  T3 = CALL1(1,VARREF(YgooSmathY1_),p_);
  iF1790 = T3;
  iF1790 = BOXFAB(iF1790);
  T6 = CALL1(1,VARREF(YgooSmathY1A),r_);
  jF1791 = T6;
  jF1791 = BOXFAB(jF1791);
  T9 = FUNSHELL(1,fun_loop_30,6);
  loopF1792 = T9;
  FUNINIT(loopF1792, 6,jF1791,a_,xF1789,test_,iF1790,loopF1792);
  T10 = CALL0(0,loopF1792);
  T8 = T10;
  T5 = T8;
  T2 = T5;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSvecY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<vec>");
  T2 = (P)YPpair(VARREF(YLseqXG),Ynil);
  T1 = (P)YPpair(VARREF(YLflatG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSvecYLvecG,T0);
  lit_1 = YPPsym((P)"vec");
  lit_2 = YPPsym((P)"elts");
  T4 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  T3 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T4,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSvecYvec,T3);
  lit_3 = YPPsym((P)"vec-len");
  lit_4 = YPPsym((P)"_x");
  T5 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_len_0 = YPmet(FUNCODEREF(fun_vec_len_0),LITREF(lit_3),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooScolsSvecYvec_len);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooScolsSvecYvec_len);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_vec_len_0;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooScolsSvecYvec_len,T6);
  lit_5 = YPPsym((P)"vec-len-setter");
  lit_6 = YPPsym((P)"_z");
  T10 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_len_setter_1 = YPmet(FUNCODEREF(fun_vec_len_setter_1),LITREF(lit_5),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsSvecYvec_len_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSvecYvec_len_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_vec_len_setter_1;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSvecYvec_len_setter,T11);
  T15 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T15,ENVNUL,PNUL,YPfalse);
  T16 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_len),VARREF(YgooScolsSvecYvec_len_setter),VARREF(YLintG),T16);
  lit_7 = YPPsym((P)"vec-dat");
  T17 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_vec_dat_3 = YPmet(FUNCODEREF(fun_vec_dat_3),LITREF(lit_7),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsSvecYvec_dat);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsSvecYvec_dat);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_vec_dat_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsSvecYvec_dat,T18);
  lit_8 = YPPsym((P)"vec-dat-setter");
  T22 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_4)),YPPlist(2,VARREF(YLrepG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_vec_dat_setter_4 = YPmet(FUNCODEREF(fun_vec_dat_setter_4),LITREF(lit_8),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsSvecYvec_dat_setter);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsSvecYvec_dat_setter);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_vec_dat_setter_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsSvecYvec_dat_setter,T23);
  T27 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T28 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSvecYvec_dat),VARREF(YgooScolsSvecYvec_dat_setter),VARREF(YLrepG),T28);
  lit_9 = YPPsym((P)"len");
  lit_10 = YPPsym((P)"c");
  T29 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_6 = YPmet(FUNCODEREF(fun_len_6),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YgooStypesYlen);
  if (T32 != YPfalse) {
    T31 = VARREF(YgooStypesYlen);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_len_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YgooStypesYlen,T30);
  lit_11 = YPPsym((P)"elt-or");
  lit_12 = YPPsym((P)"i");
  lit_13 = YPPsym((P)"default");
  T34 = YPsig(YPPlist(3,LITREF(lit_10),LITREF(lit_12),LITREF(lit_13)),YPPlist(3,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_7 = YPmet(FUNCODEREF(fun_elt_or_7),LITREF(lit_11),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScolsScolYelt_or);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsScolYelt_or);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_elt_or_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsScolYelt_or,T35);
  lit_14 = YPPsym((P)"elt-setter");
  lit_15 = YPPsym((P)"z");
  T39 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_10),LITREF(lit_12)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_setter_8 = YPmet(FUNCODEREF(fun_elt_setter_8),LITREF(lit_14),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YgooScolsScolxYelt_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YgooScolsScolxYelt_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_elt_setter_8;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YgooScolsScolxYelt_setter,T40);
  lit_16 = YPPsym((P)"empty");
  T45 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T44 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,T45),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_empty_9 = YPmet(FUNCODEREF(fun_empty_9),LITREF(lit_16),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooScolsScolYempty);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooScolsScolYempty);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_empty_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooScolsScolYempty,T46);
  lit_17 = YPPsym((P)"fab");
  lit_18 = YPPsym((P)"s");
  T51 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSvecYLvecG));
  T50 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_18)),YPPlist(2,T51,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_fab_10 = YPmet(FUNCODEREF(fun_fab_10),LITREF(lit_17),T50,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooScolsScolYfab);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooScolsScolYfab);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_fab_10;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooScolsScolYfab,T52);
  lit_19 = YPPsym((P)"cat!");
  lit_20 = YPPsym((P)"x");
  lit_21 = YPPsym((P)"more");
  lit_22 = YPPsym((P)"x-1310");
  lit_23 = YPPsym((P)"x-1309");
  lit_24 = YPPsym((P)"x-1312");
  lit_25 = YPPsym((P)"x-1311");
  T58 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1312_11 = YPmet(FUNCODEREF(fun_x_1312_11),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1310_12 = YPmet(FUNCODEREF(fun_x_1310_12),LITREF(lit_22),T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPtrue,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_catX_13 = YPmet(FUNCODEREF(fun_catX_13),LITREF(lit_19),T56,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooScolsSseqxYcatX);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_catX_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooScolsSseqxYcatX,T59);
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),Ynil,YPtrue,YPint((P)0),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_vec_14 = YPmet(FUNCODEREF(fun_vec_14),LITREF(lit_1),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsSvecYvec);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsSvecYvec);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_vec_14;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsSvecYvec,T64);
  lit_26 = YPPsym((P)"push!");
  T68 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_pushX_15 = YPmet(FUNCODEREF(fun_pushX_15),LITREF(lit_26),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(YgooScolsSseqxYpushX);
  if (T71 != YPfalse) {
    T70 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_pushX_15;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(YgooScolsSseqxYpushX,T69);
  lit_27 = YPPsym((P)"pop!");
  T74 = XCALL2(1,VARREF(YtT),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG));
  T73 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),T74,Ynil);
  fun_popX_16 = YPmet(FUNCODEREF(fun_popX_16),LITREF(lit_27),T73,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooScolsSseqxYpopX);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_popX_16;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooScolsSseqxYpopX,T75);
  lit_28 = YPPsym((P)"to-str");
  lit_29 = YPsb((P)"#[");
  lit_30 = YPsb((P)"]");
  T79 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_17 = YPmet(FUNCODEREF(fun_to_str_17),LITREF(lit_28),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSmathYto_str);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSmathYto_str);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_to_str_17;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSmathYto_str,T80);
  lit_31 = YPPsym((P)"add!");
  T84 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_addX_18 = YPmet(FUNCODEREF(fun_addX_18),LITREF(lit_31),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooScolsScolxYaddX);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooScolsScolxYaddX);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_addX_18;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooScolsScolxYaddX,T85);
  lit_32 = YPPsym((P)"len/fill-setter");
  lit_33 = YPPsym((P)"new-len");
  lit_34 = YPPsym((P)"fill");
  T90 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_fill_19 = YPmet(FUNCODEREF(fun_fill_19),LITREF(lit_34),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_10),LITREF(lit_13)),YPPlist(3,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lenSfill_setter_20 = YPmet(FUNCODEREF(fun_lenSfill_setter_20),LITREF(lit_32),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScolsScolxYlenSfill_setter);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsScolxYlenSfill_setter);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_lenSfill_setter_20;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsScolxYlenSfill_setter,T91);
  lit_35 = YPPsym((P)"len-setter");
  T95 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_10)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_len_setter_21 = YPmet(FUNCODEREF(fun_len_setter_21),LITREF(lit_35),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScolsScolxYlen_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolxYlen_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_len_setter_21;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolxYlen_setter,T96);
  lit_36 = YPPsym((P)"zap!");
  T100 = YPsig(YPPlist(1,LITREF(lit_10)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_zapX_22 = YPmet(FUNCODEREF(fun_zapX_22),LITREF(lit_36),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScolsScolxYzapX);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolxYzapX);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_zapX_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolxYzapX,T101);
  lit_37 = YPPsym((P)"low-elt");
  T105 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_low_elt_23 = YPmet(FUNCODEREF(fun_low_elt_23),LITREF(lit_37),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScolsScolYlow_elt);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_low_elt_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYlow_elt,T106);
  lit_38 = YPPsym((P)"low-elt-setter");
  T110 = YPsig(YPPlist(3,LITREF(lit_15),LITREF(lit_20),LITREF(lit_12)),YPPlist(3,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_low_elt_setter_24 = YPmet(FUNCODEREF(fun_low_elt_setter_24),LITREF(lit_38),T110,ENVNUL,PNUL,YPfalse);
  T113 = BOUNDP(YgooScolsScolxYlow_elt_setter);
  if (T113 != YPfalse) {
    T112 = VARREF(YgooScolsScolxYlow_elt_setter);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_low_elt_setter_24;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YgooScolsScolxYlow_elt_setter,T111);
  lit_39 = YPPsym((P)"sort-by");
  lit_40 = YPPsym((P)"a");
  lit_41 = YPPsym((P)"test");
  T115 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLseqIG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqIG),Ynil);
  fun_sort_by_25 = YPmet(FUNCODEREF(fun_sort_by_25),LITREF(lit_39),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScolsSseqYsort_by);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsSseqYsort_by);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sort_by_25;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScolsSseqYsort_by,T116);
  lit_42 = YPPsym((P)"sort-by!");
  T120 = YPsig(YPPlist(2,LITREF(lit_40),LITREF(lit_41)),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_byX_26 = YPmet(FUNCODEREF(fun_sort_byX_26),LITREF(lit_42),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sort_byX_26;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooScolsSseqYsort_byX,T121);
  lit_43 = YPPsym((P)"quicksort!");
  lit_44 = YPPsym((P)"p");
  lit_45 = YPPsym((P)"r");
  T125 = YPsig(YPPlist(4,LITREF(lit_40),LITREF(lit_44),LITREF(lit_45),LITREF(lit_41)),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSvecYLvecG),Ynil);
  fun_quicksortX_27 = YPmet(FUNCODEREF(fun_quicksortX_27),LITREF(lit_43),T125,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YgooScolsSvecYquicksortX);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooScolsSvecYquicksortX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_quicksortX_27;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooScolsSvecYquicksortX,T126);
  lit_46 = YPPsym((P)"partition!");
  lit_47 = YPPsym((P)"loop");
  lit_48 = YPPsym((P)"j-loop");
  lit_49 = YPPsym((P)"i-loop");
  T138 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T137 = fun_j_loop_28 = YPmet(FUNCODEREF(fun_j_loop_28),LITREF(lit_48),T138,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T135 = fun_i_loop_29 = YPmet(FUNCODEREF(fun_i_loop_29),LITREF(lit_49),T136,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T133 = fun_loop_30 = YPmet(FUNCODEREF(fun_loop_30),LITREF(lit_47),T134,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(4,LITREF(lit_40),LITREF(lit_44),LITREF(lit_45),LITREF(lit_41)),YPPlist(4,VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLintG),Ynil);
  T131 = fun_partitionX_31 = YPmet(FUNCODEREF(fun_partitionX_31),LITREF(lit_46),T132,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YgooScolsSvecYpartitionX);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooScolsSvecYpartitionX);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_partitionX_31;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  T139 = VARSET(YgooScolsSvecYpartitionX,T140);
  T130 = T139;
  return T130;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSflat;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSflat},
  {&module_info_gooScolsSrep},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"tail", &module_info_gooSboot, "tail"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"as", &module_info_gooStypes, "as"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"/", &module_info_gooSmath, "/"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pow", &module_info_gooSmath, "pow"},
  {"&", &module_info_gooSmath, "&"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"case", &module_info_gooSmacros, "case"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"quicksort!", CVAR, &YgooScolsSvecYquicksortX},
  {"vec-dat-setter", CVAR, &YgooScolsSvecYvec_dat_setter},
  {"vec-len-setter", CVAR, &YgooScolsSvecYvec_len_setter},
  {"vec-len", CVAR, &YgooScolsSvecYvec_len},
  {"vec", CVAR, &YgooScolsSvecYvec},
  {"partition!", CVAR, &YgooScolsSvecYpartitionX},
  {"vec-dat", CVAR, &YgooScolsSvecYvec_dat},
  {"---main-0---", PVAR, NULL},
  {"<vec>", CVAR, &YgooScolsSvecYLvecG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"vec", "vec"},
  {"<vec>", "<vec>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSvec;
MODULE_INFO module_info_gooScolsSvec = {
  "goo/cols/vec",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSflat (void);
extern void load_module_gooScolsSrep (void);

/* EXPRESSION: */

extern void load_module_gooScolsSvec (void);

void load_module_gooScolsSvec (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSlst();
  load_module_gooScolsSflat();
  load_module_gooScolsSrep();

  (P)YgooScolsSvecY___main_0___();

}

/* END OF GENERATED CODE. */
