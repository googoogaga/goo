/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ynew,"goo/boot","new");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_66);
DEFLIT(lit_39);
DEFLIT(lit_28);
DEFLIT(lit_53);
DEFLIT(lit_3);
DEFLIT(lit_48);
DEFLIT(lit_56);
DEFLIT(lit_30);
DEFLIT(lit_46);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_47);
DEFLIT(lit_32);
DEFLIT(lit_55);
DEFLIT(lit_16);
DEFLIT(lit_36);
DEFLIT(lit_34);
DEFLIT(lit_11);
DEFLIT(lit_63);
DEFLIT(lit_7);
DEFLIT(lit_8);
DEFLIT(lit_54);
DEFLIT(lit_64);
DEFLIT(lit_51);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_9);
DEFLIT(lit_43);
DEFLIT(lit_4);
DEFLIT(lit_20);
DEFLIT(lit_31);
DEFLIT(lit_1);
DEFLIT(lit_57);
DEFLIT(lit_12);
DEFLIT(lit_23);
DEFLIT(lit_18);
DEFLIT(lit_29);
DEFLIT(lit_68);
DEFLIT(lit_45);
DEFLIT(lit_44);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_50);
DEFLIT(lit_17);
DEFLIT(lit_67);
DEFLIT(lit_26);
DEFLIT(lit_27);
DEFLIT(lit_37);
DEFLIT(lit_33);
DEFLIT(lit_19);
DEFLIT(lit_61);
DEFLIT(lit_59);
DEFLIT(lit_35);
DEFLIT(lit_62);
DEFLIT(lit_52);
DEFLIT(lit_24);
DEFLIT(lit_38);
DEFLIT(lit_60);
DEFLIT(lit_41);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_10);
DEFLIT(lit_40);
DEFLIT(lit_65);
DEFLIT(lit_49);
DEFLIT(lit_25);
DEFLIT(lit_6);
DEFLIT(lit_42);
DEFLIT(lit_58);

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
LOCFOR(fun_loop_19);
LOCFOR(fun_loop_20);
LOCFOR(fun_loop_21);
LOCFOR(fun_to_digit_base_22);
LOCFOR(fun_digit_baseQ_23);
LOCFOR(fun_match_24);
LOCFOR(fun_failXX_25);
LOCFOR(fun_26);
LOCFOR(fun_match_digitX_27);
LOCFOR(fun_looking_at_alphaQ_28);
LOCFOR(fun_loop_29);
LOCFOR(fun_str_to_num_30);
LOCFOR(fun_loop_31);
LOCFOR(fun_num_to_str_base_32);
LOCFOR(fun_num_to_str_33);
LOCFOR(fun_loop_34);
LOCFOR(fun_num_to_str_base_35);
LOCFOR(fun_num_to_str_36);
LOCFOR(fun_as_37);
LOCFOR(fun_as_38);
LOCFOR(fun_L_39);
LOCFOR(fun_to_str_40);
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
  P loopF1161;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_11,3);
  loopF1161 = T1;
  FUNINIT(loopF1161, 3,s_,FREEREF(0),loopF1161);
  T2 = CALL2(0,loopF1161,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_13) {
  P n_;
  P tmpF1162;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF1162 = T1;
  if (tmpF1162 != YPfalse) {
    T2 = tmpF1162;
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
  P cF1163;
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
    cF1163 = T4;
    if (cF1163 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1163);
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
  P nF1167;
  P cF1166;
  P loopF1165;
  P vF1164;
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
    vF1164 = T3;
    T8 = FUNSHELL(1,fun_loop_16,4);
    loopF1165 = T8;
    FUNINIT(loopF1165, 4,FREEREF(0),least_,vF1164,loopF1165);
    T9 = CALL1(0,loopF1165,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF1166 = T11;
    if (cF1166 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1166);
      nF1167 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF1167);
        T17 = T18;
      } else {
        T17 = nF1167;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF1167);
        T19 = T20;
      } else {
        T19 = nF1167;
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
  P tmpF1168;
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
  tmpF1168 = T1;
  if (tmpF1168 != YPfalse) {
    T7 = tmpF1168;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_42),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_19) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)9));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_20) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)15));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_21) {
  P i_,x_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(x_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYG),x_,YPint((P)15));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),x_,FREEREF(0),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYA),x_,YPint((P)1));
    a1 = T4;
    a2 = T5;
    i_ = a1;
    x_ = a2;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_digit_base_22) {
  P digit_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(digit_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_digits),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digit_baseQ_23) {
  P x_,radix_;
  P tmpF1171;
  P tmpF1170;
  P digF1169;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF1169 = T1;
  tmpF1170 = digF1169;
  if (tmpF1170 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmagYL),digF1169,radix_);
    tmpF1171 = T5;
    if (tmpF1171 != YPfalse) {
      T6 = digF1169;
    } else {
      T6 = YPfalse;
    }
    T4 = T6;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_24) {
  P char_;
  P tmpF1172;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF1172 = T2;
  if (tmpF1172 != YPfalse) {
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

FUNCODEDEF(fun_failXX_25) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P charF1174;
  P failXXF1173;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_25,1);
  failXXF1173 = T1;
  FUNINIT(failXXF1173, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF1173);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF1174 = T6;
  charF1174 = BOXFAB(charF1174);
  T10 = BOXVAL(charF1174);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_52),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF1173);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF1174) = T20;
      T11 = T19;
    }
  } else {
  }
  T23 = BOXVAL(charF1174);
  T24 = BOXVAL(FREEREF(5));
  T22 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T23,T24);
  BOXVAL(FREEREF(4)) = T22;
  T26 = BOXVAL(FREEREF(4));
  T25 = CALL1(1,VARREF(Ynot),T26);
  if (T25 != YPfalse) {
    T27 = CALL0(0,failXXF1173);
  } else {
  }
  T29 = BOXVAL(FREEREF(0));
  T28 = CALL2(1,VARREF(YgooSmathYA),T29,YPint((P)1));
  BOXVAL(FREEREF(0)) = T28;
  T30 = BOXVAL(FREEREF(3));
  if (T30 != YPfalse) {
    T33 = BOXVAL(FREEREF(6));
    T34 = BOXVAL(FREEREF(5));
    T32 = CALL2(1,VARREF(YgooSmathYT),T33,T34);
    T31 = BOXVAL(FREEREF(6)) = T32;
  } else {
  }
  T5 = YPtrue;
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_match_digitX_27) {
  P U_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(U_, 0);
loop:
  T1 = FUNFAB(fun_26,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphaQ_28) {
  P tmpF1175;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  tmpF1175 = T1;
  if (tmpF1175 != YPfalse) {
    T6 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T6);
    T4 = CALL1(1,VARREF(YgooSmathYalphaQ),T5);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_29) {
  P tmpF1176;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(0,FREEREF(1),T3);
  tmpF1176 = T2;
  if (tmpF1176 != YPfalse) {
    T8 = BOXVAL(FREEREF(2));
    T9 = BOXVAL(FREEREF(3));
    T7 = CALL2(1,VARREF(YgooSmathYT),T8,T9);
    T10 = BOXVAL(FREEREF(0));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T10);
    T5 = BOXVAL(FREEREF(2)) = T6;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    goto loop;
    T0 = T11;
  } else {
    T0 = YPtrue;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_30) {
  P string_;
  P fF1204;
  P tmpF1203;
  P tmpF1202;
  P loopF1201;
  P tmpF1200;
  P tmpF1199;
  P tmpF1198;
  P tmpF1197;
  P tmpF1196;
  P tmpF1195;
  P tmpF1194;
  P tmpF1193;
  P tmpF1192;
  P tmpF1191;
  P tmpF1190;
  P tmpF1189;
  P tmpF1188;
  P looking_at_alphaQF1187;
  P match_digitXF1186;
  P matchF1185;
  P radixF1184;
  P seen_decimal_pointQF1183;
  P lengthF1182;
  P scaleF1181;
  P iF1180;
  P nF1179;
  P dF1178;
  P sF1177;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83;
  P a1;
LINK_STACK();
  ARG(string_, 0);
loop:
  sF1177 = YPint((P)1);
  sF1177 = BOXFAB(sF1177);
  dF1178 = YPint((P)0);
  dF1178 = BOXFAB(dF1178);
  nF1179 = YPint((P)0);
  nF1179 = BOXFAB(nF1179);
  iF1180 = YPint((P)0);
  iF1180 = BOXFAB(iF1180);
  scaleF1181 = YPint((P)1);
  scaleF1181 = BOXFAB(scaleF1181);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF1182 = T11;
  seen_decimal_pointQF1183 = YPfalse;
  seen_decimal_pointQF1183 = BOXFAB(seen_decimal_pointQF1183);
  radixF1184 = YPint((P)10);
  radixF1184 = BOXFAB(radixF1184);
  T17 = FUNSHELL(1,fun_match_24,3);
  matchF1185 = T17;
  T18 = FUNSHELL(1,fun_match_digitX_27,7);
  match_digitXF1186 = T18;
  T19 = FUNSHELL(1,fun_looking_at_alphaQ_28,3);
  looking_at_alphaQF1187 = T19;
  FUNINIT(matchF1185, 3,iF1180,lengthF1182,string_);
  FUNINIT(match_digitXF1186, 7,iF1180,lengthF1182,string_,seen_decimal_pointQF1183,dF1178,radixF1184,scaleF1181);
  FUNINIT(looking_at_alphaQF1187, 3,iF1180,lengthF1182,string_);
  T22 = CALL1(0,matchF1185,YPchr((P)43));
  tmpF1188 = T22;
  if (tmpF1188 != YPfalse) {
    T23 = tmpF1188;
  } else {
    T26 = CALL1(0,matchF1185,YPchr((P)45));
    tmpF1189 = T26;
    if (tmpF1189 != YPfalse) {
      T28 = BOXVAL(sF1177) = YPint((P)-1);
      T27 = T28;
    } else {
      T27 = YPfalse;
    }
    T25 = T27;
    tmpF1190 = T25;
    if (tmpF1190 != YPfalse) {
      T29 = tmpF1190;
    } else {
      T31 = CALL1(0,matchF1185,YPchr((P)35));
      if (T31 != YPfalse) {
        T34 = CALL1(0,matchF1185,YPchr((P)98));
        tmpF1191 = T34;
        if (tmpF1191 != YPfalse) {
          T36 = BOXVAL(radixF1184) = YPint((P)2);
          T35 = T36;
        } else {
          T35 = YPfalse;
        }
        T33 = T35;
        tmpF1192 = T33;
        if (tmpF1192 != YPfalse) {
          T37 = tmpF1192;
        } else {
          T40 = CALL1(0,matchF1185,YPchr((P)111));
          tmpF1193 = T40;
          if (tmpF1193 != YPfalse) {
            T42 = BOXVAL(radixF1184) = YPint((P)8);
            T41 = T42;
          } else {
            T41 = YPfalse;
          }
          T39 = T41;
          tmpF1194 = T39;
          if (tmpF1194 != YPfalse) {
            T43 = tmpF1194;
          } else {
            T46 = CALL1(0,matchF1185,YPchr((P)100));
            tmpF1195 = T46;
            if (tmpF1195 != YPfalse) {
              T48 = BOXVAL(radixF1184) = YPint((P)10);
              T47 = T48;
            } else {
              T47 = YPfalse;
            }
            T45 = T47;
            tmpF1196 = T45;
            if (tmpF1196 != YPfalse) {
              T49 = tmpF1196;
            } else {
              T51 = CALL1(0,matchF1185,YPchr((P)120));
              tmpF1197 = T51;
              if (tmpF1197 != YPfalse) {
                T53 = BOXVAL(radixF1184) = YPint((P)16);
                T52 = T53;
              } else {
                T52 = YPfalse;
              }
              T50 = T52;
              T49 = T50;
            }
            T44 = T49;
            T43 = T44;
          }
          T38 = T43;
          T37 = T38;
        }
        T32 = T37;
        T30 = T32;
      } else {
        T30 = YPtrue;
      }
      T29 = T30;
    }
    T24 = T29;
    T23 = T24;
  }
  T21 = T23;
  tmpF1198 = T21;
  if (tmpF1198 != YPfalse) {
    T58 = BOXVAL(dF1178);
    T57 = CALL1(0,match_digitXF1186,T58);
    tmpF1199 = T57;
    if (tmpF1199 != YPfalse) {
      T61 = BOXVAL(dF1178);
      T60 = BOXVAL(nF1179) = T61;
      T59 = T60;
    } else {
      T59 = YPfalse;
    }
    T56 = T59;
    tmpF1200 = T56;
    if (tmpF1200 != YPfalse) {
      T65 = FUNSHELL(1,fun_loop_29,5);
      loopF1201 = T65;
      FUNINIT(loopF1201, 5,dF1178,match_digitXF1186,nF1179,radixF1184,loopF1201);
      T66 = CALL0(0,loopF1201);
      T64 = T66;
      tmpF1202 = T64;
      if (tmpF1202 != YPfalse) {
        T70 = BOXVAL(iF1180);
        T69 = CALL2(1,VARREF(YgooSmathYE),T70,lengthF1182);
        tmpF1203 = T69;
        if (tmpF1203 != YPfalse) {
          T75 = BOXVAL(sF1177);
          T74 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T75);
          T78 = BOXVAL(nF1179);
          T77 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T78);
          T80 = BOXVAL(scaleF1181);
          T79 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T80);
          T76 = CALL2(1,VARREF(YgooSmathYS),T77,T79);
          T73 = CALL2(1,VARREF(YgooSmathYT),T74,T76);
          fF1204 = T73;
          T82 = BOXVAL(seen_decimal_pointQF1183);
          if (T82 != YPfalse) {
            T81 = fF1204;
          } else {
            T83 = CALL1(1,VARREF(YgooSmathYtrunc),fF1204);
            T81 = T83;
          }
          T72 = T81;
          T71 = T72;
        } else {
          T71 = YPfalse;
        }
        T68 = T71;
        T67 = T68;
      } else {
        T67 = YPfalse;
      }
      T63 = T67;
      T62 = T63;
    } else {
      T62 = YPfalse;
    }
    T55 = T62;
    T54 = T55;
  } else {
    T54 = YPfalse;
  }
  T20 = T54;
  T16 = T20;
  T14 = T16;
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

FUNCODEDEF(fun_loop_31) {
  P digit_list_,num_;
  P digitF1205;
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
    digitF1205 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF1205,digit_list_);
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

FUNCODEDEF(fun_num_to_str_base_32) {
  P num_,radix_;
  P digit_listF1208;
  P loopF1207;
  P sF1206;
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
  sF1206 = T1;
  T5 = FUNSHELL(1,fun_loop_31,2);
  loopF1207 = T5;
  FUNINIT(loopF1207, 2,radix_,loopF1207);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF1206);
  T6 = CALL2(0,loopF1207,Ynil,T7);
  T4 = T6;
  digit_listF1208 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF1206,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF1208);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_57);
    } else {
      T12 = digit_listF1208;
    }
    T9 = T12;
  }
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
  T3 = T8;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_33) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_34) {
  P p_,e_;
  P iF1209;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF1209 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF1209);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF1209,FREEREF(1));
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

FUNCODEDEF(fun_num_to_str_base_35) {
  P num_,radix_;
  P lengthF1215;
  P eF1214;
  P loopF1213;
  P stringF1212;
  P pF1211;
  P sF1210;
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
  sF1210 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF1210);
  pF1211 = T4;
  stringF1212 = LITREF(lit_58);
  stringF1212 = BOXFAB(stringF1212);
  T9 = FUNSHELL(1,fun_loop_34,3);
  loopF1213 = T9;
  FUNINIT(loopF1213, 3,stringF1212,radix_,loopF1213);
  T10 = CALL2(0,loopF1213,pF1211,YPint((P)0));
  T8 = T10;
  eF1214 = T8;
  T13 = BOXVAL(stringF1212);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF1215 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF1214,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF1212);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_61));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF1214,lengthF1215);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF1212);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_62),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF1214,lengthF1215);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF1212);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF1215,eF1214);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF1212);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF1215,eF1214);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF1215);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_63),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF1214,lengthF1215);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_64),YPint((P)0),T33);
        T35 = BOXVAL(stringF1212);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF1212) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF1210,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF1212);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_65),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF1212);
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

FUNCODEDEF(fun_num_to_str_36) {
  P num_;
  P T0;
  P a1;
LINK_STACK();
  ARG(num_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_37) {
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

FUNCODEDEF(fun_as_38) {
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

FUNCODEDEF(fun_L_39) {
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

FUNCODEDEF(fun_to_str_40) {
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
  P loopF1223;
  P loopF1222;
  P loopF1221;
  P charsF1220;
  P loopF1219;
  P end259F1218;
  P initF1217;
  P ascii_charsF1216;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187;
DEFCREGS();
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
  T6 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
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
  DYNSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPsym((P)"c");
  T12 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(YPPlist(1,LITREF(lit_11)),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooScolsScolYempty);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooScolsScolYempty);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_empty_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
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
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsScolYelt_type,T23);
  lit_15 = YPPsym((P)"fab");
  lit_16 = YPPsym((P)"s");
  T28 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_16)),YPPlist(2,T28,VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_15),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
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
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooScolsSstrYstr,T34);
  lit_17 = YPPsym((P)"len");
  T38 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLprim_intG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_17),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooStypesYlen);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooStypesYlen);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_len_5;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooStypesYlen,T39);
  lit_18 = YPPsym((P)"low-elt");
  lit_19 = YPPsym((P)"i");
  T43 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_19)),YPPlist(2,VARREF(YLstrG),VARREF(YLprim_intG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_18),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScolYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYlow_elt,T44);
  lit_20 = YPPsym((P)"fab-elt-setter");
  lit_21 = YPPsym((P)"z");
  T48 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLprim_intG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_20),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fab_elt_setter_7;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScolYfab_elt_setter,T49);
  lit_22 = YPPsym((P)"elt-or");
  lit_23 = YPPsym((P)"default");
  T53 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_19),LITREF(lit_23)),YPPlist(3,VARREF(YLstrG),VARREF(YLprim_intG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_22),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
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
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
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
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T67);
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
  T72 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T71 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T72,YPfalse);
  ascii_charsF1216 = T71;
  T74 = FUNFAB(fun_12,1,ascii_charsF1216);
  initF1217 = T74;
  XCALL2(1,initF1217,YPint((P)9),LITREF(lit_28));
  XCALL2(1,initF1217,YPint((P)10),LITREF(lit_29));
  XCALL2(1,initF1217,YPint((P)12),LITREF(lit_30));
  XCALL2(1,initF1217,YPint((P)13),LITREF(lit_31));
  XCALL2(1,initF1217,YPint((P)32),LITREF(lit_32));
  XCALL2(1,initF1217,YPint((P)64),LITREF(lit_33));
  XCALL2(1,initF1217,YPint((P)96),LITREF(lit_34));
  T73 = ascii_charsF1216;
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
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
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
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
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
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSstrYinteger_Gchar,T86);
  lit_40 = YPPsym((P)"least");
  lit_41 = YPPsym((P)"greatest");
  T91 = YPsig(YPPlist(1,LITREF(lit_19)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_26),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_40),LITREF(lit_41)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_26),T90,ENVNUL,PNUL,YPfalse);
  T93 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F1218 = T93;
  T95 = FUNSHELL(1,fun_loop_17,2);
  loopF1219 = T95;
  FUNINIT(loopF1219, 2,end259F1218,loopF1219);
  T96 = XCALL3(0,loopF1219,YPint((P)0),YPfalse,YPfalse);
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
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSmathYchar_Gascii,T98);
  lit_43 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_43));
  T104 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_26),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_26),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_26),T102,ENVNUL,PNUL,YPfalse);
  T107 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T106 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T107,YPfalse);
  charsF1220 = T106;
  T108 = FUNSHELL(1,fun_loop_19,2);
  loopF1221 = T108;
  FUNINIT(loopF1221, 2,charsF1220,loopF1221);
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T109 = XCALL2(0,loopF1221,T110,YPint((P)0));
  T111 = FUNSHELL(1,fun_loop_20,2);
  loopF1222 = T111;
  FUNINIT(loopF1222, 2,charsF1220,loopF1222);
  T113 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  T112 = XCALL2(0,loopF1222,T113,YPint((P)10));
  T114 = FUNSHELL(1,fun_loop_21,2);
  loopF1223 = T114;
  FUNINIT(loopF1223, 2,charsF1220,loopF1223);
  T116 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  T115 = XCALL2(0,loopF1223,T116,YPint((P)10));
  T105 = charsF1220;
  VARSET(YgooScolsSstrYascii_digits,T105);
  lit_44 = YPPsym((P)"to-digit-base");
  lit_45 = YPPsym((P)"digit");
  T118 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T117 = YPsig(YPPlist(1,LITREF(lit_45)),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T118,Ynil);
  fun_to_digit_base_22 = YPmet(FUNCODEREF(fun_to_digit_base_22),LITREF(lit_44),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooScolsSstrYto_digit_base);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsSstrYto_digit_base);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_to_digit_base_22;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsSstrYto_digit_base,T119);
  lit_46 = YPPsym((P)"digit-base?");
  T124 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T123 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_8)),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T124,Ynil);
  fun_digit_baseQ_23 = YPmet(FUNCODEREF(fun_digit_baseQ_23),LITREF(lit_46),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YgooScolsSstrYdigit_baseQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YgooScolsSstrYdigit_baseQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_digit_baseQ_23;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YgooScolsSstrYdigit_baseQ,T125);
  lit_47 = YPPsym((P)"match");
  lit_48 = YPPsym((P)"match-digit!");
  lit_49 = YPPsym((P)"_");
  lit_50 = YPPsym((P)"return");
  lit_51 = YPPsym((P)"fail!!");
  lit_52 = YPsb((P)"string->number: Two decimal points: %=");
  lit_53 = YPPsym((P)"looking-at-alpha?");
  T136 = YPsig(YPPlist(1,LITREF(lit_3)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_24 = YPmet(FUNCODEREF(fun_match_24),LITREF(lit_47),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_25 = YPmet(FUNCODEREF(fun_failXX_25),LITREF(lit_51),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_50)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_27 = YPmet(FUNCODEREF(fun_match_digitX_27),LITREF(lit_48),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_28 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_28),LITREF(lit_53),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_26),T131,ENVNUL,PNUL,YPfalse);
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T129 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T130,Ynil);
  fun_str_to_num_30 = YPmet(FUNCODEREF(fun_str_to_num_30),LITREF(lit_4),T129,ENVNUL,PNUL,YPfalse);
  T139 = BOUNDP(YgooScolsSstrYstr_to_num);
  if (T139 != YPfalse) {
    T138 = VARREF(YgooScolsSstrYstr_to_num);
  } else {
    T138 = YPfalse;
  }
  T140 = fun_str_to_num_30;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T140);
  VARSET(YgooScolsSstrYstr_to_num,T137);
  lit_54 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_54));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_55 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_55));
  lit_56 = YPPsym((P)"digit-list");
  lit_57 = YPsb((P)"0");
  T142 = YPsig(YPPlist(2,LITREF(lit_56),LITREF(lit_7)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_31 = YPmet(FUNCODEREF(fun_loop_31),LITREF(lit_26),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_32 = YPmet(FUNCODEREF(fun_num_to_str_base_32),LITREF(lit_6),T141,ENVNUL,PNUL,YPfalse);
  T145 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T145 != YPfalse) {
    T144 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T144 = YPfalse;
  }
  T146 = fun_num_to_str_base_32;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T146);
  VARSET(YgooScolsSstrYnum_to_str_base,T143);
  T147 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_33 = YPmet(FUNCODEREF(fun_num_to_str_33),LITREF(lit_9),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YgooSmathYnum_to_str);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSmathYnum_to_str);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_num_to_str_33;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSmathYnum_to_str,T148);
  lit_58 = YPsb((P)"");
  lit_59 = YPPsym((P)"p");
  lit_60 = YPPsym((P)"e");
  lit_61 = YPsb((P)".0");
  lit_62 = YPsb((P)"0.");
  lit_63 = YPsb((P)".");
  lit_64 = YPsb((P)"0.0000000000000");
  lit_65 = YPsb((P)"-");
  T153 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_34 = YPmet(FUNCODEREF(fun_loop_34),LITREF(lit_26),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_35 = YPmet(FUNCODEREF(fun_num_to_str_base_35),LITREF(lit_6),T152,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(YgooScolsSstrYnum_to_str_base);
  if (T156 != YPfalse) {
    T155 = VARREF(YgooScolsSstrYnum_to_str_base);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_num_to_str_base_35;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(YgooScolsSstrYnum_to_str_base,T154);
  T158 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_36 = YPmet(FUNCODEREF(fun_num_to_str_36),LITREF(lit_9),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmathYnum_to_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYnum_to_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_num_to_str_36;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYnum_to_str,T159);
  lit_66 = YPPsym((P)"as");
  T164 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T163 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_16)),YPPlist(2,T164,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_37 = YPmet(FUNCODEREF(fun_as_37),LITREF(lit_66),T163,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YgooStypesYas);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooStypesYas);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_as_37;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooStypesYas,T165);
  T170 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T169 = YPsig(YPPlist(2,LITREF(lit_49),LITREF(lit_16)),YPPlist(2,T170,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_38 = YPmet(FUNCODEREF(fun_as_38),LITREF(lit_66),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooStypesYas);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooStypesYas);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_as_38;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooStypesYas,T171);
  lit_67 = YPPsym((P)"<");
  lit_68 = YPPsym((P)"y");
  T175 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_68)),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_39 = YPmet(FUNCODEREF(fun_L_39),LITREF(lit_67),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YgooSmagYL);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSmagYL);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_L_39;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSmagYL,T176);
  T182 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T181 = fun_to_str_40 = YPmet(FUNCODEREF(fun_to_str_40),LITREF(lit_24),T182,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YgooSmathYto_str);
  if (T186 != YPfalse) {
    T185 = VARREF(YgooSmathYto_str);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_to_str_40;
  T184 = XCALL2(1,VARREF(YPdefine_method),T185,T187);
  T183 = VARSET(YgooSmathYto_str,T184);
  T180 = T183;
  return T180;
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
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"export", &module_info_gooSboot, "export"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"new", &module_info_gooSboot, "new"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%str", &module_info_gooSboot, "%str"},
  {"items", &module_info_gooScolsScol, "items"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"^", &module_info_gooSmath, "^"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"+", &module_info_gooSmath, "+"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"~=", &module_info_gooSmath, "~="},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"try", &module_info_gooSboot, "try"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<=", &module_info_gooSmag, "<="},
  {"col", &module_info_gooScolsScol, "col"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"|", &module_info_gooSmath, "|"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"head", &module_info_gooSboot, "head"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"div", &module_info_gooSmath, "div"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"while", &module_info_gooSmacros, "while"},
  {"dl", &module_info_gooSboot, "dl"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"t=", &module_info_gooStypes, "t="},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"round", &module_info_gooSmath, "round"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"find", &module_info_gooScolsScol, "find"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"len", &module_info_gooStypes, "len"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"even?", &module_info_gooSmath, "even?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"rem", &module_info_gooSmath, "rem"},
  {"logn", &module_info_gooSmath, "logn"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"pow", &module_info_gooSmath, "pow"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"-", &module_info_gooSmath, "-"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"log", &module_info_gooSmath, "log"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%im", &module_info_gooSboot, "%im"},
  {">>", &module_info_gooSmath, ">>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"as", &module_info_gooStypes, "as"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"def", &module_info_gooSboot, "def"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"op", &module_info_gooSmacros, "op"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<", &module_info_gooSmag, "<"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"/", &module_info_gooSmath, "/"},
  {"=", &module_info_gooSmath, "="},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"max", &module_info_gooSmag, "max"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"---main-0---", PVAR, NULL},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"str", "str"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"*print-base*", "*print-base*"},
  {"num-to-str", "num-to-str"},
  {"num-to-str-base", "num-to-str-base"},
  {"ascii-limit", "ascii-limit"},
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
