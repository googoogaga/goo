/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/lst */

EXT(Yprop_type,"goo/boot","prop-type");
DEF(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooScolsSlstYPkey_setter,"goo/cols/lst","%key-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooScolsSlstYLlst_enumG,"goo/cols/lst","<lst-enum>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YgooScolsSlstYPkey,"goo/cols/lst","%key");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScolsSlstYPdat_setter,"goo/cols/lst","%dat-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOlst,"goo/boot","@lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSlstYPdat,"goo/cols/lst","%dat");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_61);
DEFLIT(lit_28);
DEFLIT(lit_34);
DEFLIT(lit_22);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_51);
DEFLIT(lit_42);
DEFLIT(lit_57);
DEFLIT(lit_68);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_21);
DEFLIT(lit_71);
DEFLIT(lit_0);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_70);
DEFLIT(lit_6);
DEFLIT(lit_16);
DEFLIT(lit_29);
DEFLIT(lit_62);
DEFLIT(lit_64);
DEFLIT(lit_41);
DEFLIT(lit_7);
DEFLIT(lit_49);
DEFLIT(lit_3);
DEFLIT(lit_15);
DEFLIT(lit_67);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_59);
DEFLIT(lit_65);
DEFLIT(lit_54);
DEFLIT(lit_12);
DEFLIT(lit_44);
DEFLIT(lit_1);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_69);
DEFLIT(lit_26);
DEFLIT(lit_39);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_31);
DEFLIT(lit_45);
DEFLIT(lit_47);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_63);
DEFLIT(lit_48);
DEFLIT(lit_35);
DEFLIT(lit_66);
DEFLIT(lit_10);
DEFLIT(lit_58);
DEFLIT(lit_60);
DEFLIT(lit_43);
DEFLIT(lit_38);
DEFLIT(lit_37);
DEFLIT(lit_53);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_52);
DEFLIT(lit_32);
DEFLIT(lit_11);
DEFLIT(lit_20);
DEFLIT(lit_5);
DEFLIT(lit_25);
DEFLIT(lit_30);
DEFLIT(lit_40);
DEFLIT(lit_55);
DEFLIT(lit_27);

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
LOCFOR(fun_x_1300_30);
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
  P sumF1034;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_sum_0,1);
  sumF1034 = T1;
  FUNINIT(sumF1034, 1,sumF1034);
  T2 = CALL2(1,sumF1034,YPint((P)0),x_);
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
  P fndF1035;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  ARG(default_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_2,3);
  fndF1035 = T1;
  FUNINIT(fndF1035, 3,default_,key_,fndF1035);
  T2 = CALL2(1,fndF1035,YPint((P)0),x_);
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
    T2 = CALL2(1,VARREF(YgooScolsScolYrange_error),x_,FREEREF(0));
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
  P fndF1036;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(key_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_4,3);
  fndF1036 = T1;
  FUNINIT(fndF1036, 3,key_,z_,fndF1036);
  T2 = CALL2(1,fndF1036,YPint((P)0),x_);
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
  P fabF1037;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_fab_8,2);
  fabF1037 = T1;
  FUNINIT(fabF1037, 2,t_,fabF1037);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),t_);
  T2 = CALL2(1,fabF1037,s_,T3);
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
  P buildF1038;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(objects_, 1);
loop:
  T1 = FUNSHELL(1,fun_build_10,3);
  buildF1038 = T1;
  FUNINIT(buildF1038, 3,c_,objects_,buildF1038);
  T4 = CALL1(1,VARREF(YgooStypesYlen),objects_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T5 = CALL1(1,VARREF(YgooScolsScolYempty),c_);
  T2 = CALL2(1,buildF1038,T3,T5);
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
  P x_1298F1039;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1298F1039 = e_;
  T2 = CALL1(1,VARREF(YgooScolsSlstYPkey),e_);
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSlstYPkey_setter),T1,x_1298F1039);
  T4 = CALL1(1,VARREF(YgooScolsSlstYPdat),e_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  CALL2(1,VARREF(YgooScolsSlstYPdat_setter),T3,x_1298F1039);
  T0 = x_1298F1039;
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
  P fndF1040;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_fnd_24,1);
  fndF1040 = T1;
  FUNINIT(fndF1040, 1,fndF1040);
  T2 = CALL2(0,fndF1040,x_,x_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_26) {
  P l_,r_;
  P tF1041;
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
    tF1041 = T3;
    CALL2(1,VARREF(Ytail_setter),r_,l_);
    a1 = tF1041;
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
  P loopF1042;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_26,1);
  loopF1042 = T1;
  FUNINIT(loopF1042, 1,loopF1042);
  T4 = CALL1(1,VARREF(Yobject_class),c_);
  T3 = CALL1(1,VARREF(YgooScolsScolYempty),T4);
  T2 = CALL2(0,loopF1042,c_,T3);
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
  P find_tailF1043;
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
    find_tailF1043 = T3;
    FUNINIT(find_tailF1043, 1,find_tailF1043);
    T4 = CALL1(1,find_tailF1043,y_);
    T2 = T4;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1300_30) {
  P x_1299_;
  P xF1044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1299_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1299_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1299_);
    xF1044 = T4;
    T6 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),xF1044);
    T5 = CALL2(1,FREEREF(1),T6,T7);
    BOXVAL(FREEREF(0)) = T5;
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1299_);
    a1 = T9;
    x_1299_ = a1;
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
  P x_1300F1048;
  P curF1047;
  P resultF1046;
  P connectF1045;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(more_, 1);
loop:
  T1 = fun_connect_29;
  connectF1045 = T1;
  T3 = CALL1(1,VARREF(Ylst),YPfalse);
  resultF1046 = T3;
  curF1047 = resultF1046;
  curF1047 = BOXFAB(curF1047);
  T7 = BOXVAL(curF1047);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
  T6 = CALL2(1,connectF1045,T7,T8);
  BOXVAL(curF1047) = T6;
  T9 = FUNSHELL(1,fun_x_1300_30,3);
  x_1300F1048 = T9;
  FUNINIT(x_1300F1048, 3,curF1047,connectF1045,x_1300F1048);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),more_);
  T10 = CALL1(0,x_1300F1048,T11);
  T12 = CALL1(1,VARREF(Ytail),resultF1046);
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
  P tmpF1049;
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
      tmpF1049 = T9;
      T10 = CALL1(1,VARREF(Yhead),next_);
      CALL2(1,VARREF(Yhead_setter),T10,prev_);
      T11 = CALL2(1,VARREF(Yhead_setter),tmpF1049,next_);
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
  P bubF1050;
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
    bubF1050 = T4;
    FUNINIT(bubF1050, 3,FREEREF(1),FREEREF(2),bubF1050);
    T6 = CALL1(1,VARREF(Yhead),FREEREF(0));
    T7 = CALL1(1,VARREF(Ytail),FREEREF(0));
    T5 = CALL3(0,bubF1050,T6,FREEREF(0),T7);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sort_byX_38) {
  P items_,test_;
  P loopF1051;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(items_, 0);
  ARG(test_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_37,3);
  loopF1051 = T1;
  FUNINIT(loopF1051, 3,items_,loopF1051,test_);
  T2 = CALL1(0,loopF1051,YPfalse);
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
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_70),T1,LITREF(lit_71));
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
  lit_1 = YPPsym((P)"elts");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Ylst,T0);
  VARSET(YgooScolsSlstYlist,VARREF(Ylst));
  lit_2 = YPPsym((P)"pair");
  lit_3 = YPPsym((P)"x");
  lit_4 = YPPsym((P)"y");
  T3 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYpair,T2);
  lit_5 = YPPsym((P)"assqn");
  lit_6 = YPPsym((P)"l");
  lit_7 = YPPsym((P)"pos");
  T5 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassqn,T4);
  lit_8 = YPPsym((P)"assq");
  T7 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSlstYassq,T6);
  lit_9 = YPPsym((P)"len");
  lit_10 = YPPsym((P)"sum");
  lit_11 = YPPsym((P)"count");
  T9 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sum_0 = YPmet(FUNCODEREF(fun_sum_0),LITREF(lit_10),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_1 = YPmet(FUNCODEREF(fun_len_1),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
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
  lit_13 = YPPsym((P)"key");
  lit_14 = YPPsym((P)"default");
  lit_15 = YPPsym((P)"fnd");
  T15 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_2 = YPmet(FUNCODEREF(fun_fnd_2),LITREF(lit_15),T15,ENVNUL,PNUL,YPfalse);
  T14 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_13),LITREF(lit_14)),YPPlist(3,VARREF(YLlstG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  lit_17 = YPPsym((P)"z");
  T21 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_3)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_4 = YPmet(FUNCODEREF(fun_fnd_4),LITREF(lit_15),T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(YPPlist(3,LITREF(lit_17),LITREF(lit_3),LITREF(lit_13)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  lit_18 = YPPsym((P)"empty?");
  lit_19 = YPPsym((P)"c");
  T26 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_emptyQ_6 = YPmet(FUNCODEREF(fun_emptyQ_6),LITREF(lit_18),T26,ENVNUL,PNUL,YPfalse);
  T29 = BOUNDP(YgooSmacrosYemptyQ);
  if (T29 != YPfalse) {
    T28 = VARREF(YgooSmacrosYemptyQ);
  } else {
    T28 = YPfalse;
  }
  T30 = fun_emptyQ_6;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T30);
  VARSET(YgooSmacrosYemptyQ,T27);
  lit_20 = YPPsym((P)"empty");
  T32 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLlstG));
  T31 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,T32),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_empty_7 = YPmet(FUNCODEREF(fun_empty_7),LITREF(lit_20),T31,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YgooScolsScolYempty);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooScolsScolYempty);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_empty_7;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooScolsScolYempty,T33);
  lit_21 = YPPsym((P)"fab");
  lit_22 = YPPsym((P)"t");
  lit_23 = YPPsym((P)"s");
  lit_24 = YPPsym((P)"i");
  lit_25 = YPPsym((P)"res");
  T39 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fab_8 = YPmet(FUNCODEREF(fun_fab_8),LITREF(lit_21),T39,ENVNUL,PNUL,YPfalse);
  T38 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T37 = YPsig(YPPlist(2,LITREF(lit_22),LITREF(lit_23)),YPPlist(2,T38,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_fab_9 = YPmet(FUNCODEREF(fun_fab_9),LITREF(lit_21),T37,ENVNUL,PNUL,YPfalse);
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
  lit_27 = YPPsym((P)"objects");
  lit_28 = YPPsym((P)"build");
  lit_29 = YPPsym((P)"index");
  lit_30 = YPPsym((P)"result");
  T46 = YPsig(YPPlist(2,LITREF(lit_29),LITREF(lit_30)),YPPlist(2,VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_build_10 = YPmet(FUNCODEREF(fun_build_10),LITREF(lit_28),T46,ENVNUL,PNUL,YPfalse);
  T45 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLlstG));
  T44 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_27)),YPPlist(1,T45),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
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
  lit_31 = YPPsym((P)"<lst-enum>");
  T52 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T51 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_31),T52);
  VARSET(YgooScolsSlstYLlst_enumG,T51);
  lit_32 = YPPsym((P)"%dat");
  lit_33 = YPPsym((P)"_x");
  T53 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_12 = YPmet(FUNCODEREF(fun_Pdat_12),LITREF(lit_32),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsSlstYPdat);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSlstYPdat);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_Pdat_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSlstYPdat,T54);
  lit_34 = YPPsym((P)"%dat-setter");
  lit_35 = YPPsym((P)"_z");
  T58 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_33)),YPPlist(2,VARREF(YLlstG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_13 = YPmet(FUNCODEREF(fun_Pdat_setter_13),LITREF(lit_34),T58,ENVNUL,PNUL,YPfalse);
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
  lit_36 = YPPsym((P)"%key");
  T63 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_14 = YPmet(FUNCODEREF(fun_Pkey_14),LITREF(lit_36),T63,ENVNUL,PNUL,YPfalse);
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
  T68 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_33)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  T73 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_16;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSlstYLlst_enumG),VARREF(YgooScolsSlstYPkey),VARREF(YgooScolsSlstYPkey_setter),VARREF(YLintG),T74);
  lit_38 = YPPsym((P)"enum");
  T75 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_enum_17 = YPmet(FUNCODEREF(fun_enum_17),LITREF(lit_38),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsScolYenum);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsScolYenum);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_enum_17;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsScolYenum,T76);
  lit_39 = YPPsym((P)"fin?");
  lit_40 = YPPsym((P)"e");
  T80 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_18 = YPmet(FUNCODEREF(fun_finQ_18),LITREF(lit_39),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsScolYfinQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsScolYfinQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_finQ_18;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsScolYfinQ,T81);
  lit_41 = YPPsym((P)"nxt");
  T85 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSlstYLlst_enumG),Ynil);
  fun_nxt_19 = YPmet(FUNCODEREF(fun_nxt_19),LITREF(lit_41),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsScolYnxt);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsScolYnxt);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_nxt_19;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsScolYnxt,T86);
  lit_42 = YPPsym((P)"now");
  T90 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_now_20 = YPmet(FUNCODEREF(fun_now_20),LITREF(lit_42),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YgooScolsScolYnow);
  if (T93 != YPfalse) {
    T92 = VARREF(YgooScolsScolYnow);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_now_20;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YgooScolsScolYnow,T91);
  lit_43 = YPPsym((P)"now-setter");
  lit_44 = YPPsym((P)"v");
  T95 = YPsig(YPPlist(2,LITREF(lit_44),LITREF(lit_40)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_now_setter_21 = YPmet(FUNCODEREF(fun_now_setter_21),LITREF(lit_43),T95,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooScolsScolYnow_setter);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooScolsScolYnow_setter);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_now_setter_21;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooScolsScolYnow_setter,T96);
  lit_45 = YPPsym((P)"now-key");
  T100 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YgooScolsSlstYLlst_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_now_key_22 = YPmet(FUNCODEREF(fun_now_key_22),LITREF(lit_45),T100,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YgooScolsScolYnow_key);
  if (T103 != YPfalse) {
    T102 = VARREF(YgooScolsScolYnow_key);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_now_key_22;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YgooScolsScolYnow_key,T101);
  lit_46 = YPPsym((P)"add");
  T105 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_add_23 = YPmet(FUNCODEREF(fun_add_23),LITREF(lit_46),T105,ENVNUL,PNUL,YPfalse);
  T108 = BOUNDP(YgooScolsScolYadd);
  if (T108 != YPfalse) {
    T107 = VARREF(YgooScolsScolYadd);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_add_23;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YgooScolsScolYadd,T106);
  lit_47 = YPPsym((P)"last");
  lit_48 = YPPsym((P)"px");
  T111 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_24 = YPmet(FUNCODEREF(fun_fnd_24),LITREF(lit_15),T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_25 = YPmet(FUNCODEREF(fun_last_25),LITREF(lit_47),T110,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooScolsSseqYlast);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooScolsSseqYlast);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_last_25;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooScolsSseqYlast,T112);
  lit_49 = YPPsym((P)"rev!");
  lit_50 = YPPsym((P)"loop");
  lit_51 = YPPsym((P)"r");
  T117 = YPsig(YPPlist(2,LITREF(lit_6),LITREF(lit_51)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),LITREF(lit_50),T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_revX_27 = YPmet(FUNCODEREF(fun_revX_27),LITREF(lit_49),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YgooSmacrosYrevX);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooSmacrosYrevX);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_revX_27;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooSmacrosYrevX,T118);
  lit_52 = YPPsym((P)"cat!");
  lit_53 = YPPsym((P)"more");
  lit_54 = YPPsym((P)"connect");
  lit_55 = YPPsym((P)"find-tail");
  lit_56 = YPPsym((P)"p");
  lit_57 = YPPsym((P)"x-1300");
  lit_58 = YPPsym((P)"x-1299");
  T125 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_find_tail_28 = YPmet(FUNCODEREF(fun_find_tail_28),LITREF(lit_55),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_4)),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_connect_29 = YPmet(FUNCODEREF(fun_connect_29),LITREF(lit_54),T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_58)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1300_30 = YPmet(FUNCODEREF(fun_x_1300_30),LITREF(lit_57),T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_53)),YPPlist(1,VARREF(YLlstG)),YPtrue,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_catX_31 = YPmet(FUNCODEREF(fun_catX_31),LITREF(lit_52),T122,ENVNUL,PNUL,YPfalse);
  T128 = BOUNDP(YgooScolsSseqxYcatX);
  if (T128 != YPfalse) {
    T127 = VARREF(YgooScolsSseqxYcatX);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_catX_31;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YgooScolsSseqxYcatX,T126);
  T130 = YPsig(YPPlist(1,LITREF(lit_27)),Ynil,YPtrue,YPint((P)0),VARREF(YLlstG),Ynil);
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
  lit_59 = YPPsym((P)"h");
  T135 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_22)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
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
  lit_60 = YPPsym((P)"push!");
  T140 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_3)),YPPlist(2,VARREF(YLlstG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_pushX_34 = YPmet(FUNCODEREF(fun_pushX_34),LITREF(lit_60),T140,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(YgooScolsSseqxYpushX);
  if (T143 != YPfalse) {
    T142 = VARREF(YgooScolsSseqxYpushX);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_pushX_34;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YgooScolsSseqxYpushX,T141);
  lit_61 = YPPsym((P)"pop!");
  T146 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLanyG));
  T145 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),T146,Ynil);
  fun_popX_35 = YPmet(FUNCODEREF(fun_popX_35),LITREF(lit_61),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsSseqxYpopX);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsSseqxYpopX);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_popX_35;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(YgooScolsSseqxYpopX,T147);
  lit_62 = YPPsym((P)"sort-by!");
  lit_63 = YPPsym((P)"items");
  lit_64 = YPPsym((P)"test");
  lit_65 = YPPsym((P)"tmp");
  lit_66 = YPPsym((P)"bub");
  lit_67 = YPPsym((P)"prev");
  lit_68 = YPPsym((P)"next");
  T153 = YPsig(YPPlist(3,LITREF(lit_65),LITREF(lit_67),LITREF(lit_68)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_bub_36 = YPmet(FUNCODEREF(fun_bub_36),LITREF(lit_66),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_37 = YPmet(FUNCODEREF(fun_loop_37),LITREF(lit_50),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(2,LITREF(lit_63),LITREF(lit_64)),YPPlist(2,VARREF(YLlstG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sort_byX_38 = YPmet(FUNCODEREF(fun_sort_byX_38),LITREF(lit_62),T151,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooScolsSseqYsort_byX);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_sort_byX_38;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsSseqYsort_byX,T154);
  lit_69 = YPPsym((P)"to-str");
  lit_70 = YPsb((P)"(");
  lit_71 = YPsb((P)")");
  T158 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_39 = YPmet(FUNCODEREF(fun_to_str_39),LITREF(lit_69),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmathYto_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYto_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_to_str_39;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYto_str,T159);
  T163 = YPsig(YPPlist(2,LITREF(lit_3),LITREF(lit_6)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assq_40 = YPmet(FUNCODEREF(fun_assq_40),LITREF(lit_8),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(YgooScolsSlstYassq);
  if (T166 != YPfalse) {
    T165 = VARREF(YgooScolsSlstYassq);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_assq_40;
  T164 = XCALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(YgooScolsSlstYassq,T164);
  T170 = YPsig(YPPlist(3,LITREF(lit_3),LITREF(lit_6),LITREF(lit_7)),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T169 = fun_assqn_41 = YPmet(FUNCODEREF(fun_assqn_41),LITREF(lit_5),T170,ENVNUL,PNUL,YPfalse);
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
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"into", &module_info_gooScolsScol, "into"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"assq", CVAR, &YgooScolsSlstYassq},
  {"assqn", CVAR, &YgooScolsSlstYassqn},
  {"%key-setter", CVAR, &YgooScolsSlstYPkey_setter},
  {"<lst-enum>", CVAR, &YgooScolsSlstYLlst_enumG},
  {"%key", CVAR, &YgooScolsSlstYPkey},
  {"---main-0---", PVAR, NULL},
  {"list", CVAR, &YgooScolsSlstYlist},
  {"<list>", CVAR, &YgooScolsSlstYLlistG},
  {"%dat-setter", CVAR, &YgooScolsSlstYPdat_setter},
  {"%dat", CVAR, &YgooScolsSlstYPdat},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"assq", "assq"},
  {"nil", "nil"},
  {"tail-setter", "tail-setter"},
  {"assqn", "assqn"},
  {"tail", "tail"},
  {"pair", "pair"},
  {"list", "list"},
  {"head-setter", "head-setter"},
  {"head", "head"},
  {"lst", "lst"},
  {"<list>", "<list>"},
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
