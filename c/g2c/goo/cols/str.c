/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
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
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
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
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
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
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
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
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
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
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
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
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYtan,"goo/math","tan");
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
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
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
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
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
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
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
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
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

DEFLIT(lit_38);
DEFLIT(lit_49);
DEFLIT(lit_33);
DEFLIT(lit_17);
DEFLIT(lit_62);
DEFLIT(lit_8);
DEFLIT(lit_43);
DEFLIT(lit_29);
DEFLIT(lit_47);
DEFLIT(lit_25);
DEFLIT(lit_67);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_44);
DEFLIT(lit_31);
DEFLIT(lit_23);
DEFLIT(lit_64);
DEFLIT(lit_51);
DEFLIT(lit_18);
DEFLIT(lit_55);
DEFLIT(lit_20);
DEFLIT(lit_12);
DEFLIT(lit_13);
DEFLIT(lit_42);
DEFLIT(lit_48);
DEFLIT(lit_7);
DEFLIT(lit_53);
DEFLIT(lit_37);
DEFLIT(lit_59);
DEFLIT(lit_52);
DEFLIT(lit_0);
DEFLIT(lit_39);
DEFLIT(lit_68);
DEFLIT(lit_56);
DEFLIT(lit_28);
DEFLIT(lit_22);
DEFLIT(lit_34);
DEFLIT(lit_57);
DEFLIT(lit_60);
DEFLIT(lit_26);
DEFLIT(lit_58);
DEFLIT(lit_35);
DEFLIT(lit_32);
DEFLIT(lit_41);
DEFLIT(lit_61);
DEFLIT(lit_30);
DEFLIT(lit_19);
DEFLIT(lit_3);
DEFLIT(lit_65);
DEFLIT(lit_46);
DEFLIT(lit_6);
DEFLIT(lit_54);
DEFLIT(lit_63);
DEFLIT(lit_5);
DEFLIT(lit_15);
DEFLIT(lit_45);
DEFLIT(lit_24);
DEFLIT(lit_21);
DEFLIT(lit_66);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_40);
DEFLIT(lit_50);
DEFLIT(lit_16);
DEFLIT(lit_1);
DEFLIT(lit_2);

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
  P loopF1147;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_11,3);
  loopF1147 = T1;
  FUNINIT(loopF1147, 3,s_,FREEREF(0),loopF1147);
  T2 = CALL2(0,loopF1147,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_13) {
  P n_;
  P tmpF1148;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF1148 = T1;
  if (tmpF1148 != YPfalse) {
    T2 = tmpF1148;
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
  P cF1149;
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
    cF1149 = T4;
    if (cF1149 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1149);
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
  P nF1153;
  P cF1152;
  P loopF1151;
  P vF1150;
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
    vF1150 = T3;
    T8 = FUNSHELL(1,fun_loop_16,4);
    loopF1151 = T8;
    FUNINIT(loopF1151, 4,FREEREF(0),least_,vF1150,loopF1151);
    T9 = CALL1(0,loopF1151,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF1152 = T11;
    if (cF1152 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1152);
      nF1153 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF1153);
        T17 = T18;
      } else {
        T17 = nF1153;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF1153);
        T19 = T20;
      } else {
        T19 = nF1153;
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
  P tmpF1154;
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
  tmpF1154 = T1;
  if (tmpF1154 != YPfalse) {
    T7 = tmpF1154;
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
  P tmpF1157;
  P tmpF1156;
  P digF1155;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF1155 = T1;
  tmpF1156 = digF1155;
  if (tmpF1156 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmagYL),digF1155,radix_);
    tmpF1157 = T5;
    if (tmpF1157 != YPfalse) {
      T6 = digF1155;
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
  P tmpF1158;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF1158 = T2;
  if (tmpF1158 != YPfalse) {
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
  P charF1160;
  P failXXF1159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_25,1);
  failXXF1159 = T1;
  FUNINIT(failXXF1159, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF1159);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF1160 = T6;
  charF1160 = BOXFAB(charF1160);
  T10 = BOXVAL(charF1160);
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
        T18 = CALL0(0,failXXF1159);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF1160) = T20;
      T11 = T19;
    }
  } else {
  }
  T23 = BOXVAL(charF1160);
  T24 = BOXVAL(FREEREF(5));
  T22 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T23,T24);
  BOXVAL(FREEREF(4)) = T22;
  T26 = BOXVAL(FREEREF(4));
  T25 = CALL1(1,VARREF(Ynot),T26);
  if (T25 != YPfalse) {
    T27 = CALL0(0,failXXF1159);
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
  P tmpF1161;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  tmpF1161 = T1;
  if (tmpF1161 != YPfalse) {
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
  P tmpF1162;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(0,FREEREF(1),T3);
  tmpF1162 = T2;
  if (tmpF1162 != YPfalse) {
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
  P fF1190;
  P tmpF1189;
  P tmpF1188;
  P loopF1187;
  P tmpF1186;
  P tmpF1185;
  P tmpF1184;
  P tmpF1183;
  P tmpF1182;
  P tmpF1181;
  P tmpF1180;
  P tmpF1179;
  P tmpF1178;
  P tmpF1177;
  P tmpF1176;
  P tmpF1175;
  P tmpF1174;
  P looking_at_alphaQF1173;
  P match_digitXF1172;
  P matchF1171;
  P radixF1170;
  P seen_decimal_pointQF1169;
  P lengthF1168;
  P scaleF1167;
  P iF1166;
  P nF1165;
  P dF1164;
  P sF1163;
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
  sF1163 = YPint((P)1);
  sF1163 = BOXFAB(sF1163);
  dF1164 = YPint((P)0);
  dF1164 = BOXFAB(dF1164);
  nF1165 = YPint((P)0);
  nF1165 = BOXFAB(nF1165);
  iF1166 = YPint((P)0);
  iF1166 = BOXFAB(iF1166);
  scaleF1167 = YPint((P)1);
  scaleF1167 = BOXFAB(scaleF1167);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF1168 = T11;
  seen_decimal_pointQF1169 = YPfalse;
  seen_decimal_pointQF1169 = BOXFAB(seen_decimal_pointQF1169);
  radixF1170 = YPint((P)10);
  radixF1170 = BOXFAB(radixF1170);
  T17 = FUNSHELL(1,fun_match_24,3);
  matchF1171 = T17;
  T18 = FUNSHELL(1,fun_match_digitX_27,7);
  match_digitXF1172 = T18;
  T19 = FUNSHELL(1,fun_looking_at_alphaQ_28,3);
  looking_at_alphaQF1173 = T19;
  FUNINIT(matchF1171, 3,iF1166,lengthF1168,string_);
  FUNINIT(match_digitXF1172, 7,iF1166,lengthF1168,string_,seen_decimal_pointQF1169,dF1164,radixF1170,scaleF1167);
  FUNINIT(looking_at_alphaQF1173, 3,iF1166,lengthF1168,string_);
  T22 = CALL1(0,matchF1171,YPchr((P)43));
  tmpF1174 = T22;
  if (tmpF1174 != YPfalse) {
    T23 = tmpF1174;
  } else {
    T26 = CALL1(0,matchF1171,YPchr((P)45));
    tmpF1175 = T26;
    if (tmpF1175 != YPfalse) {
      T28 = BOXVAL(sF1163) = YPint((P)-1);
      T27 = T28;
    } else {
      T27 = YPfalse;
    }
    T25 = T27;
    tmpF1176 = T25;
    if (tmpF1176 != YPfalse) {
      T29 = tmpF1176;
    } else {
      T31 = CALL1(0,matchF1171,YPchr((P)35));
      if (T31 != YPfalse) {
        T34 = CALL1(0,matchF1171,YPchr((P)98));
        tmpF1177 = T34;
        if (tmpF1177 != YPfalse) {
          T36 = BOXVAL(radixF1170) = YPint((P)2);
          T35 = T36;
        } else {
          T35 = YPfalse;
        }
        T33 = T35;
        tmpF1178 = T33;
        if (tmpF1178 != YPfalse) {
          T37 = tmpF1178;
        } else {
          T40 = CALL1(0,matchF1171,YPchr((P)111));
          tmpF1179 = T40;
          if (tmpF1179 != YPfalse) {
            T42 = BOXVAL(radixF1170) = YPint((P)8);
            T41 = T42;
          } else {
            T41 = YPfalse;
          }
          T39 = T41;
          tmpF1180 = T39;
          if (tmpF1180 != YPfalse) {
            T43 = tmpF1180;
          } else {
            T46 = CALL1(0,matchF1171,YPchr((P)100));
            tmpF1181 = T46;
            if (tmpF1181 != YPfalse) {
              T48 = BOXVAL(radixF1170) = YPint((P)10);
              T47 = T48;
            } else {
              T47 = YPfalse;
            }
            T45 = T47;
            tmpF1182 = T45;
            if (tmpF1182 != YPfalse) {
              T49 = tmpF1182;
            } else {
              T51 = CALL1(0,matchF1171,YPchr((P)120));
              tmpF1183 = T51;
              if (tmpF1183 != YPfalse) {
                T53 = BOXVAL(radixF1170) = YPint((P)16);
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
  tmpF1184 = T21;
  if (tmpF1184 != YPfalse) {
    T58 = BOXVAL(dF1164);
    T57 = CALL1(0,match_digitXF1172,T58);
    tmpF1185 = T57;
    if (tmpF1185 != YPfalse) {
      T61 = BOXVAL(dF1164);
      T60 = BOXVAL(nF1165) = T61;
      T59 = T60;
    } else {
      T59 = YPfalse;
    }
    T56 = T59;
    tmpF1186 = T56;
    if (tmpF1186 != YPfalse) {
      T65 = FUNSHELL(1,fun_loop_29,5);
      loopF1187 = T65;
      FUNINIT(loopF1187, 5,dF1164,match_digitXF1172,nF1165,radixF1170,loopF1187);
      T66 = CALL0(0,loopF1187);
      T64 = T66;
      tmpF1188 = T64;
      if (tmpF1188 != YPfalse) {
        T70 = BOXVAL(iF1166);
        T69 = CALL2(1,VARREF(YgooSmathYE),T70,lengthF1168);
        tmpF1189 = T69;
        if (tmpF1189 != YPfalse) {
          T75 = BOXVAL(sF1163);
          T74 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T75);
          T78 = BOXVAL(nF1165);
          T77 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T78);
          T80 = BOXVAL(scaleF1167);
          T79 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T80);
          T76 = CALL2(1,VARREF(YgooSmathYS),T77,T79);
          T73 = CALL2(1,VARREF(YgooSmathYT),T74,T76);
          fF1190 = T73;
          T82 = BOXVAL(seen_decimal_pointQF1169);
          if (T82 != YPfalse) {
            T81 = fF1190;
          } else {
            T83 = CALL1(1,VARREF(YgooSmathYtrunc),fF1190);
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
  P digitF1191;
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
    digitF1191 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF1191,digit_list_);
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
  P digit_listF1194;
  P loopF1193;
  P sF1192;
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
  sF1192 = T1;
  T5 = FUNSHELL(1,fun_loop_31,2);
  loopF1193 = T5;
  FUNINIT(loopF1193, 2,radix_,loopF1193);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF1192);
  T6 = CALL2(0,loopF1193,Ynil,T7);
  T4 = T6;
  digit_listF1194 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF1192,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF1194);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_57);
    } else {
      T12 = digit_listF1194;
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
  P iF1195;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF1195 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF1195);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF1195,FREEREF(1));
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
  P lengthF1201;
  P eF1200;
  P loopF1199;
  P stringF1198;
  P pF1197;
  P sF1196;
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
  sF1196 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF1196);
  pF1197 = T4;
  stringF1198 = LITREF(lit_58);
  stringF1198 = BOXFAB(stringF1198);
  T9 = FUNSHELL(1,fun_loop_34,3);
  loopF1199 = T9;
  FUNINIT(loopF1199, 3,stringF1198,radix_,loopF1199);
  T10 = CALL2(0,loopF1199,pF1197,YPint((P)0));
  T8 = T10;
  eF1200 = T8;
  T13 = BOXVAL(stringF1198);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF1201 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF1200,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF1198);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_61));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF1200,lengthF1201);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF1198);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_62),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF1200,lengthF1201);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF1198);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF1201,eF1200);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF1198);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF1201,eF1200);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF1201);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_63),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF1200,lengthF1201);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_64),YPint((P)0),T33);
        T35 = BOXVAL(stringF1198);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF1198) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF1196,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF1198);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_65),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF1198);
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
  P loopF1209;
  P loopF1208;
  P loopF1207;
  P charsF1206;
  P loopF1205;
  P end259F1204;
  P initF1203;
  P ascii_charsF1202;
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
  T27 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_16)),YPPlist(2,T28,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
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
  T38 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
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
  T43 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_19)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
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
  T48 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_13),LITREF(lit_19)),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  T53 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_19),LITREF(lit_23)),YPPlist(3,VARREF(YLstrG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
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
  ascii_charsF1202 = T71;
  T74 = FUNFAB(fun_12,1,ascii_charsF1202);
  initF1203 = T74;
  XCALL2(1,initF1203,YPint((P)9),LITREF(lit_28));
  XCALL2(1,initF1203,YPint((P)10),LITREF(lit_29));
  XCALL2(1,initF1203,YPint((P)12),LITREF(lit_30));
  XCALL2(1,initF1203,YPint((P)13),LITREF(lit_31));
  XCALL2(1,initF1203,YPint((P)32),LITREF(lit_32));
  XCALL2(1,initF1203,YPint((P)64),LITREF(lit_33));
  XCALL2(1,initF1203,YPint((P)96),LITREF(lit_34));
  T73 = ascii_charsF1202;
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
  end259F1204 = T93;
  T95 = FUNSHELL(1,fun_loop_17,2);
  loopF1205 = T95;
  FUNINIT(loopF1205, 2,end259F1204,loopF1205);
  T96 = XCALL3(0,loopF1205,YPint((P)0),YPfalse,YPfalse);
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
  charsF1206 = T106;
  T108 = FUNSHELL(1,fun_loop_19,2);
  loopF1207 = T108;
  FUNINIT(loopF1207, 2,charsF1206,loopF1207);
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T109 = XCALL2(0,loopF1207,T110,YPint((P)0));
  T111 = FUNSHELL(1,fun_loop_20,2);
  loopF1208 = T111;
  FUNINIT(loopF1208, 2,charsF1206,loopF1208);
  T113 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  T112 = XCALL2(0,loopF1208,T113,YPint((P)10));
  T114 = FUNSHELL(1,fun_loop_21,2);
  loopF1209 = T114;
  FUNINIT(loopF1209, 2,charsF1206,loopF1209);
  T116 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  T115 = XCALL2(0,loopF1209,T116,YPint((P)10));
  T105 = charsF1206;
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
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assq", &module_info_gooScolsSlst, "assq"},
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
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
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
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
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
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
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
  {"list", &module_info_gooScolsSlst, "list"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"vec", &module_info_gooScolsSvec, "vec"},
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
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
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
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"---main-0---", PVAR, NULL},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"num-to-str", "num-to-str"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"num-to-str-base", "num-to-str-base"},
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"ascii-limit", "ascii-limit"},
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
