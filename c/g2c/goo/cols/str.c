/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_23);
DEFLIT(lit_31);
DEFLIT(lit_33);
DEFLIT(lit_16);
DEFLIT(lit_56);
DEFLIT(lit_15);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_58);
DEFLIT(lit_48);
DEFLIT(lit_63);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_44);
DEFLIT(lit_1);
DEFLIT(lit_65);
DEFLIT(lit_57);
DEFLIT(lit_47);
DEFLIT(lit_9);
DEFLIT(lit_20);
DEFLIT(lit_61);
DEFLIT(lit_17);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_53);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_38);
DEFLIT(lit_41);
DEFLIT(lit_60);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_36);
DEFLIT(lit_32);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_10);
DEFLIT(lit_64);
DEFLIT(lit_34);
DEFLIT(lit_6);
DEFLIT(lit_11);
DEFLIT(lit_14);
DEFLIT(lit_0);
DEFLIT(lit_62);
DEFLIT(lit_18);
DEFLIT(lit_19);
DEFLIT(lit_12);
DEFLIT(lit_51);
DEFLIT(lit_28);
DEFLIT(lit_54);
DEFLIT(lit_42);
DEFLIT(lit_24);
DEFLIT(lit_55);
DEFLIT(lit_37);
DEFLIT(lit_39);
DEFLIT(lit_40);
DEFLIT(lit_5);
DEFLIT(lit_30);
DEFLIT(lit_59);
DEFLIT(lit_49);
DEFLIT(lit_52);
DEFLIT(lit_26);
DEFLIT(lit_50);
DEFLIT(lit_3);

/* FUNCTIONS: */

LOCFOR(fun_empty_0);
LOCFOR(fun_elt_default_1);
LOCFOR(fun_elt_type_2);
LOCFOR(fun_fab_3);
LOCFOR(fun_str_4);
LOCFOR(fun_len_5);
LOCFOR(fun_low_elt_6);
LOCFOR(fun_fab_elt_setter_7);
LOCFOR(fun_elt_or_8);
LOCFOR(fun_to_str_9);
LOCFOR(fun_add_10);
LOCFOR(fun_loop_11);
LOCFOR(fun_12);
LOCFOR(fun_ascii_Gchar_13);
LOCFOR(fun_char_Ginteger_14);
LOCFOR(fun_integer_Gchar_15);
LOCFOR(fun_loop_16);
LOCFOR(fun_loop_17);
LOCFOR(fun_char_Gascii_18);
LOCFOR(fun_match_19);
LOCFOR(fun_failXX_20);
LOCFOR(fun_21);
LOCFOR(fun_match_digitX_22);
LOCFOR(fun_looking_at_alphaQ_23);
LOCFOR(fun_loop_24);
LOCFOR(fun_str_to_num_25);
LOCFOR(fun_loop_26);
LOCFOR(fun_num_to_str_base_27);
LOCFOR(fun_num_to_str_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_num_to_str_base_30);
LOCFOR(fun_num_to_str_31);
LOCFOR(fun_as_32);
LOCFOR(fun_as_33);
LOCFOR(fun_L_34);
LOCFOR(fun_to_str_35);
extern P YgooScolsSstrY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_empty_0) {
  P c_;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YPsnul));
}

FUNCODEDEF(fun_elt_default_1) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_elt_type_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLchrG));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  T1 = (P)YPiu(s_);
  T2 = (P)YPcu(YPchr((P)32));
  T0 = (P)YPstr(T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_str_4) {
  P objects_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(objects_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_5) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPslen(x_);
  T0 = (P)YPib(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = (P)YPiu(i_);
  T1 = (P)YPselt(x_,T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P T0,T1,T2;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  T1 = (P)YPcu(z_);
  T2 = (P)YPiu(i_);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    T4 = (P)YPiu(i_);
    T3 = (P)YPselt(x_,T4);
    T2 = (P)YPcb(T3);
    T0 = T2;
  } else {
    T0 = default_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_str_9) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_add_10) {
  P s_,c_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYto_str),c_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),s_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_11) {
  P i_,j_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(j_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmathYE),j_,T3);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),j_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,FREEREF(1),i_);
    T6 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T6;
    a2 = T7;
    i_ = a1;
    j_ = a2;
    goto loop;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P i_,s_;
  P loopF7000;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_11,3);
  loopF7000 = T1;
  FUNINIT(loopF7000, 3,s_,FREEREF(0),loopF7000);
  T2 = CALL2(0,loopF7000,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_13) {
  P n_;
  P tmpF7001;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF7001 = T1;
  if (tmpF7001 != YPfalse) {
    T2 = tmpF7001;
  } else {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_37),n_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_14) {
  P char_;
  P T0;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_15) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P i_;
  P cF7002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),FREEREF(1),FREEREF(2));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF7002 = T4;
    if (cF7002 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF7002);
      T6 = CALL2(1,VARREF(YgooSmathY_),T7,FREEREF(1));
      T5 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),i_,FREEREF(2),T6);
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T9;
    i_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P i_,least_,greatest_;
  P nF7006;
  P cF7005;
  P loopF7004;
  P vF7003;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(i_, 0);
  ARG(least_, 1);
  ARG(greatest_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathY_),greatest_,least_);
    T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
    T4 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T5);
    T3 = CALL2(1,VARREF(YgooScolsScolxYfillX),T4,YPfalse);
    vF7003 = T3;
    T8 = FUNSHELL(1,fun_loop_16,4);
    loopF7004 = T8;
    FUNINIT(loopF7004, 4,FREEREF(0),least_,vF7003,loopF7004);
    T9 = CALL1(0,loopF7004,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF7005 = T11;
    if (cF7005 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF7005);
      nF7006 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF7006);
        T17 = T18;
      } else {
        T17 = nF7006;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF7006);
        T19 = T20;
      } else {
        T19 = nF7006;
      }
      a1 = T16;
      a2 = T17;
      a3 = T19;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T13 = T15;
      T12 = T13;
    } else {
      T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      a1 = T22;
      a2 = least_;
      a3 = greatest_;
      i_ = a1;
      least_ = a2;
      greatest_ = a3;
      goto loop;
      T12 = T21;
    }
    T10 = T12;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_char_Gascii_18) {
  P char_;
  P tmpF7007;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T5 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T6 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,T6);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,T4);
  tmpF7007 = T1;
  if (tmpF7007 != YPfalse) {
    T7 = tmpF7007;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_42),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_19) {
  P char_;
  P tmpF7008;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF7008 = T2;
  if (tmpF7008 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
    T5 = CALL2(1,VARREF(YgooSmathYE),T6,char_);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = BOXVAL(FREEREF(0));
    T8 = CALL2(1,VARREF(YgooSmathYA),T9,YPint((P)1));
    BOXVAL(FREEREF(0)) = T8;
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_failXX_20) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P return_;
  P charF7010;
  P failXXF7009;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_20,1);
  failXXF7009 = T1;
  FUNINIT(failXXF7009, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF7009);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF7010 = T6;
  charF7010 = BOXFAB(charF7010);
  T10 = BOXVAL(charF7010);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_49),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF7009);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF7010) = T20;
      T11 = T19;
    }
  } else {
  }
  T24 = BOXVAL(charF7010);
  T23 = CALL1(1,VARREF(YgooSmathYdigitQ),T24);
  T22 = CALL1(1,VARREF(Ynot),T23);
  if (T22 != YPfalse) {
    T25 = CALL0(0,failXXF7009);
  } else {
  }
  T28 = BOXVAL(FREEREF(0));
  T27 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T28);
  T26 = CALL1(1,VARREF(YgooSmathYto_digit),T27);
  BOXVAL(FREEREF(4)) = T26;
  T30 = BOXVAL(FREEREF(0));
  T29 = CALL2(1,VARREF(YgooSmathYA),T30,YPint((P)1));
  BOXVAL(FREEREF(0)) = T29;
  T31 = BOXVAL(FREEREF(3));
  if (T31 != YPfalse) {
    T34 = BOXVAL(FREEREF(5));
    T33 = CALL2(1,VARREF(YgooSmathYT),T34,FREEREF(6));
    T32 = BOXVAL(FREEREF(5)) = T33;
  } else {
  }
  T5 = YPtrue;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_22) {
  P U_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T1 = FUNFAB(fun_21,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphaQ_23) {
  P tmpF7011;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF7011 = T2;
  if (tmpF7011 != YPfalse) {
    T7 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
    T5 = CALL1(1,VARREF(YgooSmathYalphaQ),T6);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_24) {
  P tmpF7012;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(0,FREEREF(1),T3);
  tmpF7012 = T2;
  if (tmpF7012 != YPfalse) {
    T8 = BOXVAL(FREEREF(2));
    T7 = CALL2(1,VARREF(YgooSmathYT),T8,FREEREF(3));
    T9 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T9);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    goto loop;
    T0 = T10;
  } else {
    T0 = YPtrue;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_25) {
  P string_;
  P fF7033;
  P tmpF7032;
  P tmpF7031;
  P loopF7030;
  P tmpF7029;
  P tmpF7028;
  P tmpF7027;
  P tmpF7026;
  P tmpF7025;
  P tmpF7024;
  P looking_at_alphaQF7023;
  P match_digitXF7022;
  P matchF7021;
  P radixF7020;
  P seen_decimal_pointQF7019;
  P lengthF7018;
  P scaleF7017;
  P iF7016;
  P nF7015;
  P dF7014;
  P sF7013;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF7013 = YPint((P)1);
  sF7013 = BOXFAB(sF7013);
  dF7014 = YPint((P)0);
  dF7014 = BOXFAB(dF7014);
  nF7015 = YPint((P)0);
  nF7015 = BOXFAB(nF7015);
  iF7016 = YPint((P)0);
  iF7016 = BOXFAB(iF7016);
  scaleF7017 = YPint((P)1);
  scaleF7017 = BOXFAB(scaleF7017);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF7018 = T11;
  seen_decimal_pointQF7019 = YPfalse;
  seen_decimal_pointQF7019 = BOXFAB(seen_decimal_pointQF7019);
  radixF7020 = YPint((P)10);
  T16 = FUNSHELL(1,fun_match_19,3);
  matchF7021 = T16;
  T17 = FUNSHELL(1,fun_match_digitX_22,7);
  match_digitXF7022 = T17;
  T18 = FUNSHELL(1,fun_looking_at_alphaQ_23,3);
  looking_at_alphaQF7023 = T18;
  FUNINIT(matchF7021, 3,iF7016,lengthF7018,string_);
  FUNINIT(match_digitXF7022, 7,iF7016,lengthF7018,string_,seen_decimal_pointQF7019,dF7014,scaleF7017,radixF7020);
  FUNINIT(looking_at_alphaQF7023, 3,iF7016,lengthF7018,string_);
  T21 = CALL1(0,matchF7021,YPchr((P)43));
  tmpF7024 = T21;
  if (tmpF7024 != YPfalse) {
    T22 = tmpF7024;
  } else {
    T25 = CALL1(0,matchF7021,YPchr((P)45));
    tmpF7025 = T25;
    if (tmpF7025 != YPfalse) {
      T27 = BOXVAL(sF7013) = YPint((P)-1);
      T26 = T27;
    } else {
      T26 = YPfalse;
    }
    T24 = T26;
    tmpF7026 = T24;
    if (tmpF7026 != YPfalse) {
      T28 = tmpF7026;
    } else {
      T28 = YPtrue;
    }
    T23 = T28;
    T22 = T23;
  }
  T20 = T22;
  tmpF7027 = T20;
  if (tmpF7027 != YPfalse) {
    T33 = BOXVAL(dF7014);
    T32 = CALL1(0,match_digitXF7022,T33);
    tmpF7028 = T32;
    if (tmpF7028 != YPfalse) {
      T36 = BOXVAL(dF7014);
      T35 = BOXVAL(nF7015) = T36;
      T34 = T35;
    } else {
      T34 = YPfalse;
    }
    T31 = T34;
    tmpF7029 = T31;
    if (tmpF7029 != YPfalse) {
      T40 = FUNSHELL(1,fun_loop_24,5);
      loopF7030 = T40;
      FUNINIT(loopF7030, 5,dF7014,match_digitXF7022,nF7015,radixF7020,loopF7030);
      T41 = CALL0(0,loopF7030);
      T39 = T41;
      tmpF7031 = T39;
      if (tmpF7031 != YPfalse) {
        T45 = BOXVAL(iF7016);
        T44 = CALL2(1,VARREF(YgooSmathYE),T45,lengthF7018);
        tmpF7032 = T44;
        if (tmpF7032 != YPfalse) {
          T50 = BOXVAL(sF7013);
          T49 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T50);
          T53 = BOXVAL(nF7015);
          T52 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T53);
          T55 = BOXVAL(scaleF7017);
          T54 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T55);
          T51 = CALL2(1,VARREF(YgooSmathYS),T52,T54);
          T48 = CALL2(1,VARREF(YgooSmathYT),T49,T51);
          fF7033 = T48;
          T57 = BOXVAL(seen_decimal_pointQF7019);
          if (T57 != YPfalse) {
            T56 = fF7033;
          } else {
            T58 = CALL1(1,VARREF(YgooSmathYtrunc),fF7033);
            T56 = T58;
          }
          T47 = T56;
          T46 = T47;
        } else {
          T46 = YPfalse;
        }
        T43 = T46;
        T42 = T43;
      } else {
        T42 = YPfalse;
      }
      T38 = T42;
      T37 = T38;
    } else {
      T37 = YPfalse;
    }
    T30 = T37;
    T29 = T30;
  } else {
    T29 = YPfalse;
  }
  T19 = T29;
  T15 = T19;
  T14 = T15;
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_26) {
  P digit_list_,num_;
  P digitF7034;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(digit_list_, 0);
  ARG(num_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = digit_list_;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYrem),num_,FREEREF(0));
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T4);
    digitF7034 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF7034,digit_list_);
    T8 = CALL2(1,VARREF(YgooSmathYtruncS),num_,FREEREF(0));
    T7 = CALL1(1,VARREF(YgooScolsSseqY1st),T8);
    a1 = T6;
    a2 = T7;
    digit_list_ = a1;
    num_ = a2;
    goto loop;
    T2 = T5;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_27) {
  P num_,radix_;
  P digit_listF7037;
  P loopF7036;
  P sF7035;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF7035 = T1;
  T5 = FUNSHELL(1,fun_loop_26,2);
  loopF7036 = T5;
  FUNINIT(loopF7036, 2,radix_,loopF7036);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF7035);
  T6 = CALL2(0,loopF7036,Ynil,T7);
  T4 = T6;
  digit_listF7037 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF7035,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF7037);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_54);
    } else {
      T12 = digit_listF7037;
    }
    T9 = T12;
  }
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
  T3 = T8;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_28) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,VARREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P p_,e_;
  P iF7038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF7038 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF7038);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF7038,FREEREF(1));
    BOXVAL(FREEREF(0)) = T5;
    T2 = e_;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYT),p_,FREEREF(1));
    T8 = CALL2(1,VARREF(YgooSmathYA),e_,YPint((P)1));
    a1 = T7;
    a2 = T8;
    p_ = a1;
    e_ = a2;
    goto loop;
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_num_to_str_base_30) {
  P num_,radix_;
  P lengthF7044;
  P eF7043;
  P loopF7042;
  P stringF7041;
  P pF7040;
  P sF7039;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1,a2;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF7039 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF7039);
  pF7040 = T4;
  stringF7041 = LITREF(lit_55);
  stringF7041 = BOXFAB(stringF7041);
  T9 = FUNSHELL(1,fun_loop_29,3);
  loopF7042 = T9;
  FUNINIT(loopF7042, 3,stringF7041,radix_,loopF7042);
  T10 = CALL2(0,loopF7042,pF7040,YPint((P)0));
  T8 = T10;
  eF7043 = T8;
  T13 = BOXVAL(stringF7041);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF7044 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF7043,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF7041);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_58));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF7043,lengthF7044);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF7041);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_59),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF7043,lengthF7044);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF7041);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF7044,eF7043);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF7041);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF7044,eF7043);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF7044);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_60),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF7043,lengthF7044);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_61),YPint((P)0),T33);
        T35 = BOXVAL(stringF7041);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF7041) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF7039,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF7041);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_62),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF7041);
    T36 = T40;
  }
  T11 = T36;
  T7 = T11;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_31) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,VARREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_32) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_33) {
  P U_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
loop:
  T0 = CALL1(1,VARREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_34) {
  P x_,y_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),x_);
  T2 = CALL1(1,VARREF(Ysym_name),y_);
  T0 = CALL2(1,VARREF(YgooSmagYL),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_35) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSstrY___main_0___() {
  P loopF7048;
  P end259F7047;
  P initF7046;
  P ascii_charsF7045;
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
  P T160;
loop:
  lit_0 = YPPsym((P)"str");
  lit_1 = YPPsym((P)"objects");
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPsym((P)"char");
  T3 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYchar_Gascii,T2);
  VARSET(YgooScolsSstrYascii_whitespaces,YPfalse);
  VARSET(YgooScolsSstrYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPsym((P)"string");
  T6 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPsym((P)"num");
  lit_8 = YPPsym((P)"radix");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYnum_to_str_base,T7);
  lit_9 = YPPsym((P)"num-to-str");
  T10 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_9),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  VARSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPsym((P)"c");
  T12 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScolsScolYempty);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScolsScolYempty);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_empty_0;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooScolsScolYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPsym((P)"x");
  T17 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooScolsScolYelt_default);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooScolsScolYelt_default);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_elt_default_1;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooScolsScolYelt_default,T18);
  lit_14 = YPPsym((P)"elt-type");
  T22 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsScolYelt_type);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsScolYelt_type);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_elt_type_2;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsScolYelt_type,T23);
  lit_15 = YPPsym((P)"fab");
  lit_16 = YPPsym((P)"s");
  T28 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_16)),YPPlist(2,T28,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_15),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolYfab,T29);
  T33 = YPsig(YPPlist(1,LITREF(lit_1)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooScolsSstrYstr);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooScolsSstrYstr);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_str_4;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsSstrYstr,T34);
  lit_17 = YPPsym((P)"len");
  T38 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_17),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooStypesYlen);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooStypesYlen);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_len_5;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooStypesYlen,T39);
  lit_18 = YPPsym((P)"low-elt");
  lit_19 = YPPsym((P)"i");
  T43 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_19)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_18),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScolYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYlow_elt,T44);
  lit_20 = YPPsym((P)"fab-elt-setter");
  lit_21 = YPPsym((P)"z");
  T48 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_20),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fab_elt_setter_7;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScolYfab_elt_setter,T49);
  lit_22 = YPPsym((P)"elt-or");
  lit_23 = YPPsym((P)"default");
  T53 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_19),LITREF(lit_23)),YPPlist(3,VARREF(YLstrG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYelt_or,T54);
  lit_24 = YPPsym((P)"to-str");
  T58 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPmet(FUNCODEREF(fun_to_str_9),LITREF(lit_24),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooSmathYto_str);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooSmathYto_str);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_to_str_9;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooSmathYto_str,T59);
  lit_25 = YPPsym((P)"add");
  T63 = YPsig(YPPlist(2,LITREF(lit_16),LITREF(lit_11)),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPmet(FUNCODEREF(fun_add_10),LITREF(lit_25),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooScolsScolYadd);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooScolsScolYadd);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_add_10;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooScolsScolYadd,T64);
  VARSET(YgooScolsSstrYascii_limit,YPint((P)128));
  lit_26 = YPPsym((P)"loop");
  lit_27 = YPPsym((P)"j");
  lit_28 = YPsb((P)"\t");
  lit_29 = YPsb((P)"\n");
  lit_30 = YPsb((P)"\f");
  lit_31 = YPsb((P)"\r");
  lit_32 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_33 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_34 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T69 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_26),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_16)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T72 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T71 = CALL2(1,VARREF(YgooScolsScolxYfillX),T72,YPfalse);
  ascii_charsF7045 = T71;
  T74 = FUNFAB(fun_12,1,ascii_charsF7045);
  initF7046 = T74;
  CALL2(1,initF7046,YPint((P)9),LITREF(lit_28));
  CALL2(1,initF7046,YPint((P)10),LITREF(lit_29));
  CALL2(1,initF7046,YPint((P)12),LITREF(lit_30));
  CALL2(1,initF7046,YPint((P)13),LITREF(lit_31));
  CALL2(1,initF7046,YPint((P)32),LITREF(lit_32));
  CALL2(1,initF7046,YPint((P)64),LITREF(lit_33));
  CALL2(1,initF7046,YPint((P)96),LITREF(lit_34));
  T73 = ascii_charsF7045;
  T70 = T73;
  VARSET(YgooScolsSstrYascii_chars,T70);
  lit_35 = YPPsym((P)"ascii->char");
  lit_36 = YPPsym((P)"n");
  lit_37 = YPsb((P)"not a standard character's ASCII code: %=");
  T75 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_13 = YPmet(FUNCODEREF(fun_ascii_Gchar_13),LITREF(lit_35),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsSstrYascii_Gchar);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsSstrYascii_Gchar);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_ascii_Gchar_13;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsSstrYascii_Gchar,T76);
  lit_38 = YPPsym((P)"char->integer");
  T80 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_14 = YPmet(FUNCODEREF(fun_char_Ginteger_14),LITREF(lit_38),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsSstrYchar_Ginteger);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsSstrYchar_Ginteger);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_char_Ginteger_14;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsSstrYchar_Ginteger,T81);
  lit_39 = YPPsym((P)"integer->char");
  T85 = YPsig(YPPlist(1,LITREF(lit_36)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_15 = YPmet(FUNCODEREF(fun_integer_Gchar_15),LITREF(lit_39),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsSstrYinteger_Gchar);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsSstrYinteger_Gchar);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_integer_Gchar_15;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSstrYinteger_Gchar,T86);
  lit_40 = YPPsym((P)"least");
  lit_41 = YPPsym((P)"greatest");
  T91 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_26),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_40),LITREF(lit_41)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_26),T90,ENVNUL,PNUL,YPfalse);
  T93 = CALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F7047 = T93;
  T95 = FUNSHELL(1,fun_loop_17,2);
  loopF7048 = T95;
  FUNINIT(loopF7048, 2,end259F7047,loopF7048);
  T96 = CALL3(0,loopF7048,YPint((P)0),YPfalse,YPfalse);
  T94 = T96;
  T92 = T94;
  VARSET(YgooScolsSstrYnative_chars,T92);
  lit_42 = YPsb((P)"not a standard character: %=");
  T97 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_18 = YPmet(FUNCODEREF(fun_char_Gascii_18),LITREF(lit_2),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooSmathYchar_Gascii);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSmathYchar_Gascii);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_char_Gascii_18;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSmathYchar_Gascii,T98);
  lit_43 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_43));
  lit_44 = YPPsym((P)"match");
  lit_45 = YPPsym((P)"match-digit!");
  lit_46 = YPPsym((P)"_");
  lit_47 = YPPsym((P)"return");
  lit_48 = YPPsym((P)"fail!!");
  lit_49 = YPsb((P)"string->number: Two decimal points: %=");
  lit_50 = YPPsym((P)"looking-at-alpha?");
  T109 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_19 = YPmet(FUNCODEREF(fun_match_19),LITREF(lit_44),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_20 = YPmet(FUNCODEREF(fun_failXX_20),LITREF(lit_48),T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_47)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_46)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_22 = YPmet(FUNCODEREF(fun_match_digitX_22),LITREF(lit_45),T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_23 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_23),LITREF(lit_50),T105,ENVNUL,PNUL,YPfalse);
  T104 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_26),T104,ENVNUL,PNUL,YPfalse);
  T103 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T102 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T103,Ynil);
  fun_str_to_num_25 = YPmet(FUNCODEREF(fun_str_to_num_25),LITREF(lit_4),T102,ENVNUL,PNUL,YPfalse);
  T112 = BOUNDP(YgooScolsSstrYstr_to_num);
  if (T112 != YPfalse) {
    T111 = VARREF(YgooScolsSstrYstr_to_num);
  } else {
    T111 = YPfalse;
  }
  T113 = fun_str_to_num_25;
  T110 = CALL2(1,VARREF(YPdefine_method),T111,T113);
  VARSET(YgooScolsSstrYstr_to_num,T110);
  lit_51 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_51));
  VARSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_52 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_52));
  lit_53 = YPPsym((P)"digit-list");
  lit_54 = YPsb((P)"0");
  T115 = YPsig(YPPlist(2,LITREF(lit_53),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_26 = YPmet(FUNCODEREF(fun_loop_26),LITREF(lit_26),T115,ENVNUL,PNUL,YPfalse);
  T114 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_27 = YPmet(FUNCODEREF(fun_num_to_str_base_27),LITREF(lit_6),T114,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T118 != YPfalse) {
    T117 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_num_to_str_base_27;
  T116 = CALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YgooScolsSstrYnum_to_str_base,T116);
  T120 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_28 = YPmet(FUNCODEREF(fun_num_to_str_28),LITREF(lit_9),T120,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YgooSmathYnum_to_str);
  if (T123 != YPfalse) {
    T122 = VARREF(YgooSmathYnum_to_str);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_num_to_str_28;
  T121 = CALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YgooSmathYnum_to_str,T121);
  lit_55 = YPsb((P)"");
  lit_56 = YPPsym((P)"p");
  lit_57 = YPPsym((P)"e");
  lit_58 = YPsb((P)".0");
  lit_59 = YPsb((P)"0.");
  lit_60 = YPsb((P)".");
  lit_61 = YPsb((P)"0.0000000000000");
  lit_62 = YPsb((P)"-");
  T126 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_57)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_26),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_30 = YPmet(FUNCODEREF(fun_num_to_str_base_30),LITREF(lit_6),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_num_to_str_base_30;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooScolsSstrYnum_to_str_base,T127);
  T131 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_31 = YPmet(FUNCODEREF(fun_num_to_str_31),LITREF(lit_9),T131,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooSmathYnum_to_str);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooSmathYnum_to_str);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_num_to_str_31;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  VARSET(YgooSmathYnum_to_str,T132);
  lit_63 = YPPsym((P)"as");
  T137 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T136 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_16)),YPPlist(2,T137,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_32 = YPmet(FUNCODEREF(fun_as_32),LITREF(lit_63),T136,ENVNUL,PNUL,YPfalse);
  T140 = BOUNDP(YgooStypesYas);
  if (T140 != YPfalse) {
    T139 = VARREF(YgooStypesYas);
  } else {
    T139 = YPfalse;
  }
  T141 = fun_as_32;
  T138 = CALL2(1,VARREF(YPdefine_method),T139,T141);
  VARSET(YgooStypesYas,T138);
  T143 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T142 = YPsig(YPPlist(2,LITREF(lit_46),LITREF(lit_16)),YPPlist(2,T143,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_33 = YPmet(FUNCODEREF(fun_as_33),LITREF(lit_63),T142,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(YgooStypesYas);
  if (T146 != YPfalse) {
    T145 = VARREF(YgooStypesYas);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_as_33;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(YgooStypesYas,T144);
  lit_64 = YPPsym((P)"<");
  lit_65 = YPPsym((P)"y");
  T148 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_65)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_34 = YPmet(FUNCODEREF(fun_L_34),LITREF(lit_64),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(YgooSmagYL);
  if (T151 != YPfalse) {
    T150 = VARREF(YgooSmagYL);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_L_34;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(YgooSmagYL,T149);
  T155 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T154 = fun_to_str_35 = YPmet(FUNCODEREF(fun_to_str_35),LITREF(lit_24),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YgooSmathYto_str);
  if (T159 != YPfalse) {
    T158 = VARREF(YgooSmathYto_str);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_to_str_35;
  T157 = CALL2(1,VARREF(YPdefine_method),T158,T160);
  T156 = VARSET(YgooSmathYto_str,T157);
  T153 = T156;
  return T153;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsSvec},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"+", &module_info_gooSmath, "+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"~", &module_info_gooSmath, "~"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"~=", &module_info_gooSmath, "~="},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"round", &module_info_gooSmath, "round"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"log", &module_info_gooSmath, "log"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"for", &module_info_gooSmacros, "for"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"df", &module_info_gooSboot, "df"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"do", &module_info_gooSmacros, "do"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ascii-limit", &YgooScolsSstrYascii_limit},
  {"char->integer", &YgooScolsSstrYchar_Ginteger},
  {"num-to-str-base", &YgooScolsSstrYnum_to_str_base},
  {"ascii-whitespaces", &YgooScolsSstrYascii_whitespaces},
  {"str-to-num", &YgooScolsSstrYstr_to_num},
  {"$digit-to-char", &YgooScolsSstrYDdigit_to_char},
  {"epsilon", &YgooScolsSstrYepsilon},
  {"ascii-chars", &YgooScolsSstrYascii_chars},
  {"str", &YgooScolsSstrYstr},
  {"---main-0---", NULL},
  {"ascii->char", &YgooScolsSstrYascii_Gchar},
  {"*print-base*", &YgooScolsSstrYTprint_baseT},
  {"native-chars", &YgooScolsSstrYnative_chars},
  {"integer->char", &YgooScolsSstrYinteger_Gchar},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"num-to-str", "num-to-str"},
  {"ascii-limit", "ascii-limit"},
  {"num-to-str-base", "num-to-str-base"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"str", "str"},
  {"*print-base*", "*print-base*"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSstr;
MODULE_INFO module_info_gooScolsSstr = {
  "goo/cols/str",
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
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooScolsSstr (void);

void load_module_gooScolsSstr (void) {
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
  load_module_gooScolsSlst();
  load_module_gooScolsSvec();

  (P)YgooScolsSstrY___main_0___();

}

/* END OF GENERATED CODE. */
