/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
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
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
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
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
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
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
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
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
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
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
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
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
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
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
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
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
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
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmagYLE,"goo/mag","<=");
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
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
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
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
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

DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_61);
DEFLIT(lit_59);
DEFLIT(lit_83);
DEFLIT(lit_79);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_62);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_21);
DEFLIT(lit_50);
DEFLIT(lit_56);
DEFLIT(lit_66);
DEFLIT(lit_58);
DEFLIT(lit_42);
DEFLIT(lit_25);
DEFLIT(lit_38);
DEFLIT(lit_41);
DEFLIT(lit_52);
DEFLIT(lit_5);
DEFLIT(lit_77);
DEFLIT(lit_76);
DEFLIT(lit_31);
DEFLIT(lit_87);
DEFLIT(lit_6);
DEFLIT(lit_54);
DEFLIT(lit_36);
DEFLIT(lit_86);
DEFLIT(lit_85);
DEFLIT(lit_70);
DEFLIT(lit_28);
DEFLIT(lit_9);
DEFLIT(lit_53);
DEFLIT(lit_18);
DEFLIT(lit_23);
DEFLIT(lit_74);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_64);
DEFLIT(lit_67);
DEFLIT(lit_69);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_82);
DEFLIT(lit_40);
DEFLIT(lit_26);
DEFLIT(lit_73);
DEFLIT(lit_72);
DEFLIT(lit_35);
DEFLIT(lit_90);
DEFLIT(lit_29);
DEFLIT(lit_68);
DEFLIT(lit_22);
DEFLIT(lit_8);
DEFLIT(lit_44);
DEFLIT(lit_27);
DEFLIT(lit_80);
DEFLIT(lit_0);
DEFLIT(lit_81);
DEFLIT(lit_51);
DEFLIT(lit_84);
DEFLIT(lit_33);
DEFLIT(lit_89);
DEFLIT(lit_37);
DEFLIT(lit_12);
DEFLIT(lit_24);
DEFLIT(lit_34);
DEFLIT(lit_75);
DEFLIT(lit_63);
DEFLIT(lit_60);
DEFLIT(lit_49);
DEFLIT(lit_71);
DEFLIT(lit_57);
DEFLIT(lit_17);
DEFLIT(lit_32);
DEFLIT(lit_43);
DEFLIT(lit_48);
DEFLIT(lit_78);
DEFLIT(lit_55);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_65);
DEFLIT(lit_88);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_39);
DEFLIT(lit_47);
DEFLIT(lit_20);

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
  P xF1869;
  P xF1868;
  P xF1867;
  P xF1866;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
loop:
  xF1866 = s_;
  xF1867 = xF1866;
  T3 = (P)YPiGG(xF1867,(P)2);
  T2 = T3;
  T1 = T2;
  xF1868 = YPchr((P)32);
  xF1869 = xF1868;
  T6 = (P)YPiGG(xF1869,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPstr(T1,T4);
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
  P tF1872;
  P xF1871;
  P xF1870;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = (P)YPslen(x_);
  xF1870 = T1;
  xF1871 = xF1870;
  tF1872 = (P)1;
  T4 = (P)YPiLL(xF1871,(P)2);
  T3 = (P)YPiv(T4,tF1872);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF1877;
  P xF1876;
  P xF1875;
  P xF1874;
  P xF1873;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  xF1873 = i_;
  xF1874 = xF1873;
  T4 = (P)YPiGG(xF1874,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPselt(x_,T2);
  xF1875 = T1;
  xF1876 = xF1875;
  tF1877 = (P)2;
  T7 = (P)YPiLL(xF1876,(P)2);
  T6 = (P)YPiv(T7,tF1877);
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF1881;
  P xF1880;
  P xF1879;
  P xF1878;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
loop:
  xF1878 = z_;
  xF1879 = xF1878;
  T3 = (P)YPiGG(xF1879,(P)2);
  T2 = T3;
  T1 = T2;
  xF1880 = i_;
  xF1881 = xF1880;
  T6 = (P)YPiGG(xF1881,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPselt_setter(T1,x_,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF1886;
  P xF1885;
  P xF1884;
  P xF1883;
  P xF1882;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF1882 = i_;
    xF1883 = xF1882;
    T6 = (P)YPiGG(xF1883,(P)2);
    T5 = T6;
    T4 = T5;
    T3 = (P)YPselt(x_,T4);
    xF1884 = T3;
    xF1885 = xF1884;
    tF1886 = (P)2;
    T9 = (P)YPiLL(xF1885,(P)2);
    T8 = (P)YPiv(T9,tF1886);
    T7 = T8;
    T2 = T7;
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
  P loopF1887;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_11,3);
  loopF1887 = T1;
  FUNINIT(loopF1887, 3,s_,FREEREF(0),loopF1887);
  T2 = CALL2(0,loopF1887,i_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_13) {
  P n_;
  P tmpF1888;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF1888 = T1;
  if (tmpF1888 != YPfalse) {
    T2 = tmpF1888;
  } else {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_43),n_);
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
  P cF1889;
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
    cF1889 = T4;
    if (cF1889 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1889);
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
  P nF1893;
  P cF1892;
  P loopF1891;
  P vF1890;
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
    vF1890 = T3;
    T8 = FUNSHELL(1,fun_loop_16,4);
    loopF1891 = T8;
    FUNINIT(loopF1891, 4,FREEREF(0),least_,vF1890,loopF1891);
    T9 = CALL1(0,loopF1891,YPint((P)0));
    T7 = T9;
    T2 = T7;
    T0 = T2;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),i_);
    cF1892 = T11;
    if (cF1892 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF1892);
      nF1893 = T14;
      T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      if (least_ != YPfalse) {
        T18 = CALL2(1,VARREF(YgooSmagYmin),least_,nF1893);
        T17 = T18;
      } else {
        T17 = nF1893;
      }
      if (greatest_ != YPfalse) {
        T20 = CALL2(1,VARREF(YgooSmagYmax),greatest_,nF1893);
        T19 = T20;
      } else {
        T19 = nF1893;
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
  P tmpF1894;
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
  tmpF1894 = T1;
  if (tmpF1894 != YPfalse) {
    T7 = tmpF1894;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_51),char_);
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
  P tmpF1897;
  P tmpF1896;
  P digF1895;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF1895 = T1;
  tmpF1896 = digF1895;
  if (tmpF1896 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmagYL),digF1895,radix_);
    tmpF1897 = T5;
    if (tmpF1897 != YPfalse) {
      T6 = digF1895;
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
  P tmpF1898;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(char_, 0);
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF1898 = T2;
  if (tmpF1898 != YPfalse) {
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
  P charF1900;
  P failXXF1899;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_failXX_25,1);
  failXXF1899 = T1;
  FUNINIT(failXXF1899, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(0,failXXF1899);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF1900 = T6;
  charF1900 = BOXFAB(charF1900);
  T10 = BOXVAL(charF1900);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_68),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(0,failXXF1899);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF1900) = T20;
      T11 = T19;
    }
  } else {
  }
  T23 = BOXVAL(charF1900);
  T24 = BOXVAL(FREEREF(5));
  T22 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T23,T24);
  BOXVAL(FREEREF(4)) = T22;
  T26 = BOXVAL(FREEREF(4));
  T25 = CALL1(1,VARREF(Ynot),T26);
  if (T25 != YPfalse) {
    T27 = CALL0(0,failXXF1899);
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
  P tmpF1901;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  tmpF1901 = T1;
  if (tmpF1901 != YPfalse) {
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
  P tmpF1902;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
loop:
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL1(0,FREEREF(1),T3);
  tmpF1902 = T2;
  if (tmpF1902 != YPfalse) {
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
  P fF1930;
  P tmpF1929;
  P tmpF1928;
  P loopF1927;
  P tmpF1926;
  P tmpF1925;
  P tmpF1924;
  P tmpF1923;
  P tmpF1922;
  P tmpF1921;
  P tmpF1920;
  P tmpF1919;
  P tmpF1918;
  P tmpF1917;
  P tmpF1916;
  P tmpF1915;
  P tmpF1914;
  P looking_at_alphaQF1913;
  P match_digitXF1912;
  P matchF1911;
  P radixF1910;
  P seen_decimal_pointQF1909;
  P lengthF1908;
  P scaleF1907;
  P iF1906;
  P nF1905;
  P dF1904;
  P sF1903;
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
  sF1903 = YPint((P)1);
  sF1903 = BOXFAB(sF1903);
  dF1904 = YPint((P)0);
  dF1904 = BOXFAB(dF1904);
  nF1905 = YPint((P)0);
  nF1905 = BOXFAB(nF1905);
  iF1906 = YPint((P)0);
  iF1906 = BOXFAB(iF1906);
  scaleF1907 = YPint((P)1);
  scaleF1907 = BOXFAB(scaleF1907);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF1908 = T11;
  seen_decimal_pointQF1909 = YPfalse;
  seen_decimal_pointQF1909 = BOXFAB(seen_decimal_pointQF1909);
  radixF1910 = YPint((P)10);
  radixF1910 = BOXFAB(radixF1910);
  T17 = FUNSHELL(1,fun_match_24,3);
  matchF1911 = T17;
  T18 = FUNSHELL(1,fun_match_digitX_27,7);
  match_digitXF1912 = T18;
  T19 = FUNSHELL(1,fun_looking_at_alphaQ_28,3);
  looking_at_alphaQF1913 = T19;
  FUNINIT(matchF1911, 3,iF1906,lengthF1908,string_);
  FUNINIT(match_digitXF1912, 7,iF1906,lengthF1908,string_,seen_decimal_pointQF1909,dF1904,radixF1910,scaleF1907);
  FUNINIT(looking_at_alphaQF1913, 3,iF1906,lengthF1908,string_);
  T22 = CALL1(0,matchF1911,YPchr((P)43));
  tmpF1914 = T22;
  if (tmpF1914 != YPfalse) {
    T23 = tmpF1914;
  } else {
    T26 = CALL1(0,matchF1911,YPchr((P)45));
    tmpF1915 = T26;
    if (tmpF1915 != YPfalse) {
      T28 = BOXVAL(sF1903) = YPint((P)-1);
      T27 = T28;
    } else {
      T27 = YPfalse;
    }
    T25 = T27;
    tmpF1916 = T25;
    if (tmpF1916 != YPfalse) {
      T29 = tmpF1916;
    } else {
      T31 = CALL1(0,matchF1911,YPchr((P)35));
      if (T31 != YPfalse) {
        T34 = CALL1(0,matchF1911,YPchr((P)98));
        tmpF1917 = T34;
        if (tmpF1917 != YPfalse) {
          T36 = BOXVAL(radixF1910) = YPint((P)2);
          T35 = T36;
        } else {
          T35 = YPfalse;
        }
        T33 = T35;
        tmpF1918 = T33;
        if (tmpF1918 != YPfalse) {
          T37 = tmpF1918;
        } else {
          T40 = CALL1(0,matchF1911,YPchr((P)111));
          tmpF1919 = T40;
          if (tmpF1919 != YPfalse) {
            T42 = BOXVAL(radixF1910) = YPint((P)8);
            T41 = T42;
          } else {
            T41 = YPfalse;
          }
          T39 = T41;
          tmpF1920 = T39;
          if (tmpF1920 != YPfalse) {
            T43 = tmpF1920;
          } else {
            T46 = CALL1(0,matchF1911,YPchr((P)100));
            tmpF1921 = T46;
            if (tmpF1921 != YPfalse) {
              T48 = BOXVAL(radixF1910) = YPint((P)10);
              T47 = T48;
            } else {
              T47 = YPfalse;
            }
            T45 = T47;
            tmpF1922 = T45;
            if (tmpF1922 != YPfalse) {
              T49 = tmpF1922;
            } else {
              T51 = CALL1(0,matchF1911,YPchr((P)120));
              tmpF1923 = T51;
              if (tmpF1923 != YPfalse) {
                T53 = BOXVAL(radixF1910) = YPint((P)16);
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
  tmpF1924 = T21;
  if (tmpF1924 != YPfalse) {
    T58 = BOXVAL(dF1904);
    T57 = CALL1(0,match_digitXF1912,T58);
    tmpF1925 = T57;
    if (tmpF1925 != YPfalse) {
      T61 = BOXVAL(dF1904);
      T60 = BOXVAL(nF1905) = T61;
      T59 = T60;
    } else {
      T59 = YPfalse;
    }
    T56 = T59;
    tmpF1926 = T56;
    if (tmpF1926 != YPfalse) {
      T65 = FUNSHELL(1,fun_loop_29,5);
      loopF1927 = T65;
      FUNINIT(loopF1927, 5,dF1904,match_digitXF1912,nF1905,radixF1910,loopF1927);
      T66 = CALL0(0,loopF1927);
      T64 = T66;
      tmpF1928 = T64;
      if (tmpF1928 != YPfalse) {
        T70 = BOXVAL(iF1906);
        T69 = CALL2(1,VARREF(YgooSmathYE),T70,lengthF1908);
        tmpF1929 = T69;
        if (tmpF1929 != YPfalse) {
          T75 = BOXVAL(sF1903);
          T74 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T75);
          T78 = BOXVAL(nF1905);
          T77 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T78);
          T80 = BOXVAL(scaleF1907);
          T79 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T80);
          T76 = CALL2(1,VARREF(YgooSmathYS),T77,T79);
          T73 = CALL2(1,VARREF(YgooSmathYT),T74,T76);
          fF1930 = T73;
          T82 = BOXVAL(seen_decimal_pointQF1909);
          if (T82 != YPfalse) {
            T81 = fF1930;
          } else {
            T83 = CALL1(1,VARREF(YgooSmathYtrunc),fF1930);
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
  P digitF1931;
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
    digitF1931 = T3;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),digitF1931,digit_list_);
    T8 = CALL2(1,VARREF(YgooSmathYtruncS),num_,FREEREF(0));
    T7 = CALL1(1,VARREF(YgooSmacrosY1st),T8);
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
  P digit_listF1934;
  P loopF1933;
  P sF1932;
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
  sF1932 = T1;
  T5 = FUNSHELL(1,fun_loop_31,2);
  loopF1933 = T5;
  FUNINIT(loopF1933, 2,radix_,loopF1933);
  T7 = CALL2(1,VARREF(YgooSmathYT),num_,sF1932);
  T6 = CALL2(0,loopF1933,Ynil,T7);
  T4 = T6;
  digit_listF1934 = T4;
  T10 = CALL2(1,VARREF(YgooSmagYL),sF1932,YPint((P)0));
  if (T10 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF1934);
    T9 = T11;
  } else {
    T13 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T13 != YPfalse) {
      T12 = LITREF(lit_74);
    } else {
      T12 = digit_listF1934;
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
  P iF1935;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYtrunc),p_);
  iF1935 = T1;
  T4 = CALL2(1,VARREF(YgooSmathY_),p_,iF1935);
  T3 = CALL2(1,VARREF(YgooSmagYL),T4,VARREF(YgooScolsSstrYepsilon));
  if (T3 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF1935,FREEREF(1));
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
  P lengthF1941;
  P eF1940;
  P loopF1939;
  P stringF1938;
  P pF1937;
  P sF1936;
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
  sF1936 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF1936);
  pF1937 = T4;
  stringF1938 = LITREF(lit_77);
  stringF1938 = BOXFAB(stringF1938);
  T9 = FUNSHELL(1,fun_loop_34,3);
  loopF1939 = T9;
  FUNINIT(loopF1939, 3,stringF1938,radix_,loopF1939);
  T10 = CALL2(0,loopF1939,pF1937,YPint((P)0));
  T8 = T10;
  eF1940 = T8;
  T13 = BOXVAL(stringF1938);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  lengthF1941 = T12;
  T15 = CALL2(1,VARREF(YgooSmathYE),eF1940,YPint((P)0));
  if (T15 != YPfalse) {
    T17 = BOXVAL(stringF1938);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat),T17,LITREF(lit_79));
    T14 = T16;
  } else {
    T19 = CALL2(1,VARREF(YgooSmathYE),eF1940,lengthF1941);
    if (T19 != YPfalse) {
      T21 = BOXVAL(stringF1938);
      T20 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_80),T21);
      T18 = T20;
    } else {
      T23 = CALL2(1,VARREF(YgooSmagYL),eF1940,lengthF1941);
      if (T23 != YPfalse) {
        T26 = BOXVAL(stringF1938);
        T27 = CALL2(1,VARREF(YgooSmathY_),lengthF1941,eF1940);
        T25 = CALL3(1,VARREF(YgooScolsSseqYsub),T26,YPint((P)0),T27);
        T29 = BOXVAL(stringF1938);
        T30 = CALL2(1,VARREF(YgooSmathY_),lengthF1941,eF1940);
        T28 = CALL3(1,VARREF(YgooScolsSseqYsub),T29,T30,lengthF1941);
        T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_81),T28);
        T22 = T24;
      } else {
        T34 = CALL2(1,VARREF(YgooSmathY_),eF1940,lengthF1941);
        T33 = CALL2(1,VARREF(YgooSmathYA),T34,YPint((P)2));
        T32 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_82),YPint((P)0),T33);
        T35 = BOXVAL(stringF1938);
        T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,T35);
        T22 = T31;
      }
      T18 = T22;
    }
    T14 = T18;
  }
  BOXVAL(stringF1938) = T14;
  T37 = CALL2(1,VARREF(YgooSmagYL),sF1936,YPint((P)0));
  if (T37 != YPfalse) {
    T39 = BOXVAL(stringF1938);
    T38 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_83),T39);
    T36 = T38;
  } else {
    T40 = BOXVAL(stringF1938);
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
  P loopF1949;
  P loopF1948;
  P loopF1947;
  P charsF1946;
  P loopF1945;
  P end259F1944;
  P initF1943;
  P ascii_charsF1942;
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
  lit_1 = YPPlist(1,YPPsym((P)"objects"));
  T1 = YPsig(LITREF(lit_1),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_0),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr,T0);
  lit_2 = YPPsym((P)"char->ascii");
  lit_3 = YPPlist(1,YPPsym((P)"char"));
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYchar_Gascii,T2);
  VARSET(YgooScolsSstrYascii_whitespaces,YPfalse);
  VARSET(YgooScolsSstrYascii_limit,YPfalse);
  lit_4 = YPPsym((P)"str-to-num");
  lit_5 = YPPlist(1,YPPsym((P)"string"));
  T6 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T5 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T6,Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYstr_to_num,T4);
  lit_6 = YPPsym((P)"num-to-str-base");
  lit_7 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  T8 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLnumG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  T7 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T8,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSstrYnum_to_str_base,T7);
  lit_8 = YPPsym((P)"num-to-str");
  lit_9 = YPPlist(1,YPPsym((P)"num"));
  T10 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T9 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T10,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmathYnum_to_str,T9);
  DYNSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_10 = YPPsym((P)"empty");
  lit_11 = YPPlist(1,YPPsym((P)"c"));
  T12 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T11 = YPsig(LITREF(lit_11),YPPlist(1,T12),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
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
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T17 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
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
  lit_16 = YPPsym((P)"fab");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T28 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T27 = YPsig(LITREF(lit_17),YPPlist(2,T28,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooScolsScolYfab);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooScolsScolYfab);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_fab_3;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooScolsScolYfab,T29);
  lit_18 = YPPlist(1,YPPsym((P)"objects"));
  T33 = YPsig(LITREF(lit_18),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
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
  lit_19 = YPPsym((P)"len");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T38 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_19),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooStypesYlen);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooStypesYlen);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_len_5;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooStypesYlen,T39);
  lit_21 = YPPsym((P)"low-elt");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T43 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_21),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooScolsScolYlow_elt);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsScolYlow_elt);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_low_elt_6;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsScolYlow_elt,T44);
  lit_23 = YPPsym((P)"fab-elt-setter");
  lit_24 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T48 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsScolYfab_elt_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsScolYfab_elt_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_fab_elt_setter_7;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsScolYfab_elt_setter,T49);
  lit_25 = YPPsym((P)"elt-or");
  lit_26 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T53 = YPsig(LITREF(lit_26),YPPlist(3,VARREF(YLstrG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_25),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsScolYelt_or);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsScolYelt_or);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_elt_or_8;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsScolYelt_or,T54);
  lit_27 = YPPsym((P)"to-str");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPmet(FUNCODEREF(fun_to_str_9),LITREF(lit_27),T58,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(YgooSmathYto_str);
  if (T61 != YPfalse) {
    T60 = VARREF(YgooSmathYto_str);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_to_str_9;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(YgooSmathYto_str,T59);
  lit_29 = YPPsym((P)"add");
  lit_30 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"c"));
  T63 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPmet(FUNCODEREF(fun_add_10),LITREF(lit_29),T63,ENVNUL,PNUL,YPfalse);
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
  lit_31 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"s"));
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"j"));
  lit_34 = YPsb((P)"\t");
  lit_35 = YPsb((P)"\n");
  lit_36 = YPsb((P)"\f");
  lit_37 = YPsb((P)"\r");
  lit_38 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_39 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_40 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T69 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_11 = YPmet(FUNCODEREF(fun_loop_11),LITREF(lit_32),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T68,ENVNUL,PNUL,YPfalse);
  T72 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T71 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T72,YPfalse);
  ascii_charsF1942 = T71;
  T74 = FUNFAB(fun_12,1,ascii_charsF1942);
  initF1943 = T74;
  XCALL2(1,initF1943,YPint((P)9),LITREF(lit_34));
  XCALL2(1,initF1943,YPint((P)10),LITREF(lit_35));
  XCALL2(1,initF1943,YPint((P)12),LITREF(lit_36));
  XCALL2(1,initF1943,YPint((P)13),LITREF(lit_37));
  XCALL2(1,initF1943,YPint((P)32),LITREF(lit_38));
  XCALL2(1,initF1943,YPint((P)64),LITREF(lit_39));
  XCALL2(1,initF1943,YPint((P)96),LITREF(lit_40));
  T73 = ascii_charsF1942;
  T70 = T73;
  VARSET(YgooScolsSstrYascii_chars,T70);
  lit_41 = YPPsym((P)"ascii->char");
  lit_42 = YPPlist(1,YPPsym((P)"n"));
  lit_43 = YPsb((P)"not a standard character's ASCII code: %=");
  T75 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_13 = YPmet(FUNCODEREF(fun_ascii_Gchar_13),LITREF(lit_41),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YgooScolsSstrYascii_Gchar);
  if (T78 != YPfalse) {
    T77 = VARREF(YgooScolsSstrYascii_Gchar);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_ascii_Gchar_13;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YgooScolsSstrYascii_Gchar,T76);
  lit_44 = YPPsym((P)"char->integer");
  lit_45 = YPPlist(1,YPPsym((P)"char"));
  T80 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_14 = YPmet(FUNCODEREF(fun_char_Ginteger_14),LITREF(lit_44),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YgooScolsSstrYchar_Ginteger);
  if (T83 != YPfalse) {
    T82 = VARREF(YgooScolsSstrYchar_Ginteger);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_char_Ginteger_14;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YgooScolsSstrYchar_Ginteger,T81);
  lit_46 = YPPsym((P)"integer->char");
  lit_47 = YPPlist(1,YPPsym((P)"n"));
  T85 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_15 = YPmet(FUNCODEREF(fun_integer_Gchar_15),LITREF(lit_46),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YgooScolsSstrYinteger_Gchar);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsSstrYinteger_Gchar);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_integer_Gchar_15;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSstrYinteger_Gchar,T86);
  lit_48 = YPPlist(3,YPPsym((P)"i"),YPPsym((P)"least"),YPPsym((P)"greatest"));
  lit_49 = YPPlist(1,YPPsym((P)"i"));
  T91 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_32),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_48),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T93 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F1944 = T93;
  T95 = FUNSHELL(1,fun_loop_17,2);
  loopF1945 = T95;
  FUNINIT(loopF1945, 2,end259F1944,loopF1945);
  T96 = XCALL3(0,loopF1945,YPint((P)0),YPfalse,YPfalse);
  T94 = T96;
  T92 = T94;
  VARSET(YgooScolsSstrYnative_chars,T92);
  lit_50 = YPPlist(1,YPPsym((P)"char"));
  lit_51 = YPsb((P)"not a standard character: %=");
  T97 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
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
  lit_52 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_52));
  lit_53 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  lit_54 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  lit_55 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_19 = YPmet(FUNCODEREF(fun_loop_19),LITREF(lit_32),T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_20 = YPmet(FUNCODEREF(fun_loop_20),LITREF(lit_32),T103,ENVNUL,PNUL,YPfalse);
  T102 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_21 = YPmet(FUNCODEREF(fun_loop_21),LITREF(lit_32),T102,ENVNUL,PNUL,YPfalse);
  T107 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T106 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T107,YPfalse);
  charsF1946 = T106;
  T108 = FUNSHELL(1,fun_loop_19,2);
  loopF1947 = T108;
  FUNINIT(loopF1947, 2,charsF1946,loopF1947);
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  T109 = XCALL2(0,loopF1947,T110,YPint((P)0));
  T111 = FUNSHELL(1,fun_loop_20,2);
  loopF1948 = T111;
  FUNINIT(loopF1948, 2,charsF1946,loopF1948);
  T113 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  T112 = XCALL2(0,loopF1948,T113,YPint((P)10));
  T114 = FUNSHELL(1,fun_loop_21,2);
  loopF1949 = T114;
  FUNINIT(loopF1949, 2,charsF1946,loopF1949);
  T116 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  T115 = XCALL2(0,loopF1949,T116,YPint((P)10));
  T105 = charsF1946;
  VARSET(YgooScolsSstrYascii_digits,T105);
  lit_56 = YPPsym((P)"to-digit-base");
  lit_57 = YPPlist(1,YPPsym((P)"digit"));
  T118 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T117 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T118,Ynil);
  fun_to_digit_base_22 = YPmet(FUNCODEREF(fun_to_digit_base_22),LITREF(lit_56),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooScolsSstrYto_digit_base);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsSstrYto_digit_base);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_to_digit_base_22;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsSstrYto_digit_base,T119);
  lit_58 = YPPsym((P)"digit-base?");
  lit_59 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T124 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T123 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T124,Ynil);
  fun_digit_baseQ_23 = YPmet(FUNCODEREF(fun_digit_baseQ_23),LITREF(lit_58),T123,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YgooScolsSstrYdigit_baseQ);
  if (T127 != YPfalse) {
    T126 = VARREF(YgooScolsSstrYdigit_baseQ);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_digit_baseQ_23;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YgooScolsSstrYdigit_baseQ,T125);
  lit_60 = YPPlist(1,YPPsym((P)"string"));
  lit_61 = YPPsym((P)"match");
  lit_62 = YPPlist(1,YPPsym((P)"char"));
  lit_63 = YPPsym((P)"match-digit!");
  lit_64 = YPPlist(1,YPPsym((P)"_"));
  lit_65 = YPPlist(1,YPPsym((P)"return"));
  lit_66 = YPPsym((P)"fail!!");
  lit_67 = Ynil;
  lit_68 = YPsb((P)"str-to-num: Two decimal points: %=");
  lit_69 = YPPsym((P)"looking-at-alpha?");
  T136 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_24 = YPmet(FUNCODEREF(fun_match_24),LITREF(lit_61),T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_25 = YPmet(FUNCODEREF(fun_failXX_25),LITREF(lit_66),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_64),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_27 = YPmet(FUNCODEREF(fun_match_digitX_27),LITREF(lit_63),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_28 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_28),LITREF(lit_69),T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(LITREF(lit_67),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_29 = YPmet(FUNCODEREF(fun_loop_29),LITREF(lit_32),T131,ENVNUL,PNUL,YPfalse);
  T130 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T129 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T130,Ynil);
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
  lit_70 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_70));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_71 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_71));
  lit_72 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_73 = YPPlist(2,YPPsym((P)"digit-list"),YPPsym((P)"num"));
  lit_74 = YPsb((P)"0");
  T142 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_31 = YPmet(FUNCODEREF(fun_loop_31),LITREF(lit_32),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
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
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T147 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_33 = YPmet(FUNCODEREF(fun_num_to_str_33),LITREF(lit_8),T147,ENVNUL,PNUL,YPfalse);
  T150 = BOUNDP(YgooSmathYnum_to_str);
  if (T150 != YPfalse) {
    T149 = VARREF(YgooSmathYnum_to_str);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_num_to_str_33;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YgooSmathYnum_to_str,T148);
  lit_76 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_77 = YPsb((P)"");
  lit_78 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"e"));
  lit_79 = YPsb((P)".0");
  lit_80 = YPsb((P)"0.");
  lit_81 = YPsb((P)".");
  lit_82 = YPsb((P)"0.0000000000000");
  lit_83 = YPsb((P)"-");
  T153 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_34 = YPmet(FUNCODEREF(fun_loop_34),LITREF(lit_32),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
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
  lit_84 = YPPlist(1,YPPsym((P)"num"));
  T158 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_36 = YPmet(FUNCODEREF(fun_num_to_str_36),LITREF(lit_8),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(YgooSmathYnum_to_str);
  if (T161 != YPfalse) {
    T160 = VARREF(YgooSmathYnum_to_str);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_num_to_str_36;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(YgooSmathYnum_to_str,T159);
  lit_85 = YPPsym((P)"as");
  lit_86 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T164 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T163 = YPsig(LITREF(lit_86),YPPlist(2,T164,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_37 = YPmet(FUNCODEREF(fun_as_37),LITREF(lit_85),T163,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YgooStypesYas);
  if (T167 != YPfalse) {
    T166 = VARREF(YgooStypesYas);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_as_37;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YgooStypesYas,T165);
  lit_87 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T170 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T169 = YPsig(LITREF(lit_87),YPPlist(2,T170,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_38 = YPmet(FUNCODEREF(fun_as_38),LITREF(lit_85),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YgooStypesYas);
  if (T173 != YPfalse) {
    T172 = VARREF(YgooStypesYas);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_as_38;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YgooStypesYas,T171);
  lit_88 = YPPsym((P)"<");
  lit_89 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T175 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_39 = YPmet(FUNCODEREF(fun_L_39),LITREF(lit_88),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YgooSmagYL);
  if (T178 != YPfalse) {
    T177 = VARREF(YgooSmagYL);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_L_39;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YgooSmagYL,T176);
  lit_90 = YPPlist(1,YPPsym((P)"x"));
  T182 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T181 = fun_to_str_40 = YPmet(FUNCODEREF(fun_to_str_40),LITREF(lit_27),T182,ENVNUL,PNUL,YPfalse);
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
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"not", &module_info_gooSboot, "not"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
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
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
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
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
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
  {"vec", &module_info_gooScolsSvec, "vec"},
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
  {"assq", &module_info_gooScolsSlst, "assq"},
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
  {"list", &module_info_gooScolsSlst, "list"},
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
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
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
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
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
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"---main-0---", PVAR, NULL},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ascii-limit", "ascii-limit"},
  {"num-to-str", "num-to-str"},
  {"*print-base*", "*print-base*"},
  {"num-to-str-base", "num-to-str-base"},
  {"str-to-num", "str-to-num"},
  {"char->ascii", "char->ascii"},
  {"ascii-whitespaces", "ascii-whitespaces"},
  {"str", "str"},
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
