/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/str");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(Yclone,"goo/boot","clone");
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Ynil,"goo/boot","nil");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_32);
DEFLIT(lit_1);
DEFLIT(lit_22);
DEFLIT(lit_34);
DEFLIT(lit_44);
DEFLIT(lit_58);
DEFLIT(lit_47);
DEFLIT(lit_75);
DEFLIT(lit_12);
DEFLIT(lit_41);
DEFLIT(lit_10);
DEFLIT(lit_31);
DEFLIT(lit_39);
DEFLIT(lit_81);
DEFLIT(lit_37);
DEFLIT(lit_11);
DEFLIT(lit_66);
DEFLIT(lit_30);
DEFLIT(lit_60);
DEFLIT(lit_61);
DEFLIT(lit_48);
DEFLIT(lit_59);
DEFLIT(lit_13);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_8);
DEFLIT(lit_57);
DEFLIT(lit_27);
DEFLIT(lit_29);
DEFLIT(lit_77);
DEFLIT(lit_79);
DEFLIT(lit_40);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_55);
DEFLIT(lit_43);
DEFLIT(lit_51);
DEFLIT(lit_73);
DEFLIT(lit_14);
DEFLIT(lit_70);
DEFLIT(lit_54);
DEFLIT(lit_33);
DEFLIT(lit_69);
DEFLIT(lit_35);
DEFLIT(lit_72);
DEFLIT(lit_67);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_28);
DEFLIT(lit_68);
DEFLIT(lit_26);
DEFLIT(lit_20);
DEFLIT(lit_50);
DEFLIT(lit_80);
DEFLIT(lit_36);
DEFLIT(lit_46);
DEFLIT(lit_63);
DEFLIT(lit_38);
DEFLIT(lit_45);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_65);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_16);
DEFLIT(lit_71);
DEFLIT(lit_78);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_76);
DEFLIT(lit_56);
DEFLIT(lit_2);
DEFLIT(lit_53);
DEFLIT(lit_4);
DEFLIT(lit_23);
DEFLIT(lit_49);
DEFLIT(lit_62);
DEFLIT(lit_52);

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
LOCFOR(fun_11);
LOCFOR(fun_ascii_Gchar_12);
LOCFOR(fun_char_Ginteger_13);
LOCFOR(fun_integer_Gchar_14);
LOCFOR(fun_char_Gascii_15);
LOCFOR(fun_to_digit_base_16);
LOCFOR(fun_digit_baseQ_17);
LOCFOR(fun_match_18);
LOCFOR(fun_failXX_19);
LOCFOR(fun_20);
LOCFOR(fun_match_digitX_21);
LOCFOR(fun_looking_at_alphaQ_22);
LOCFOR(fun_str_to_num_23);
LOCFOR(fun_num_to_str_base_24);
LOCFOR(fun_num_to_str_25);
LOCFOR(fun_num_to_str_base_26);
LOCFOR(fun_num_to_str_27);
LOCFOR(fun_as_28);
LOCFOR(fun_as_29);
LOCFOR(fun_L_30);
LOCFOR(fun_to_str_31);
extern P YgooScolsSstrY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_empty_0) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(VARREF(YPsnul));
}

FUNCODEDEF(fun_elt_default_1) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPchr((P)32));
}

FUNCODEDEF(fun_elt_type_2) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLchrG));
}

FUNCODEDEF(fun_fab_3) {
  P x_,s_;
  P xF2130;
  P xF2129;
  P xF2128;
  P xF2127;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  xF2127 = s_;
  xF2128 = xF2127;
  T3 = (P)YPiGG(xF2128,(P)2);
  T2 = T3;
  T1 = T2;
  xF2129 = YPchr((P)32);
  xF2130 = xF2129;
  T6 = (P)YPiGG(xF2130,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPstr(T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_str_4) {
  P objects_;
  P T0;
LINK_STACK();
  NARGS(objects_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYfabs),VARREF(YLstrG),objects_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_len_5) {
  P x_;
  P tF2133;
  P xF2132;
  P xF2131;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  T1 = (P)YPslen(x_);
  xF2131 = T1;
  xF2132 = xF2131;
  tF2133 = (P)1;
  T4 = (P)YPiLL(xF2132,(P)2);
  T3 = (P)YPiv(T4,tF2133);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF2138;
  P xF2137;
  P xF2136;
  P xF2135;
  P xF2134;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  xF2134 = i_;
  xF2135 = xF2134;
  T4 = (P)YPiGG(xF2135,(P)2);
  T3 = T4;
  T2 = T3;
  T1 = (P)YPselt(x_,T2);
  xF2136 = T1;
  xF2137 = xF2136;
  tF2138 = (P)2;
  T7 = (P)YPiLL(xF2137,(P)2);
  T6 = (P)YPiv(T7,tF2138);
  T5 = T6;
  T0 = T5;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF2142;
  P xF2141;
  P xF2140;
  P xF2139;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  xF2139 = z_;
  xF2140 = xF2139;
  T3 = (P)YPiGG(xF2140,(P)2);
  T2 = T3;
  T1 = T2;
  xF2141 = i_;
  xF2142 = xF2141;
  T6 = (P)YPiGG(xF2142,(P)2);
  T5 = T6;
  T4 = T5;
  T0 = (P)YPselt_setter(T1,x_,T4);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF2147;
  P xF2146;
  P xF2145;
  P xF2144;
  P xF2143;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF2143 = i_;
    xF2144 = xF2143;
    T6 = (P)YPiGG(xF2144,(P)2);
    T5 = T6;
    T4 = T5;
    T3 = (P)YPselt(x_,T4);
    xF2145 = T3;
    xF2146 = xF2145;
    tF2147 = (P)2;
    T9 = (P)YPiLL(xF2146,(P)2);
    T8 = (P)YPiv(T9,tF2147);
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
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_add_10) {
  P s_,c_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(c_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYto_str),c_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_11) {
  P i_,s_;
  P jF2149;
  P iF2148;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
  iF2148 = i_;
  jF2149 = YPint((P)0);
  for (;;) {
    P a115_0,a115_1;
  loop115:
    T6 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T5 = CALL2(1,VARREF(YgooSmathYE),jF2149,T6);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmacrosYelt),s_,jF2149);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T7,FREEREF(0),iF2148);
      T9 = CALL2(1,VARREF(YgooSmathYA),iF2148,YPint((P)1));
      T10 = CALL2(1,VARREF(YgooSmathYA),jF2149,YPint((P)1));
      a115_0 = T9;
      a115_1 = T10;
      iF2148 = a115_0;
      jF2149 = a115_1;
      goto loop115;
      T3 = T8;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_12) {
  P n_;
  P tmpF2150;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(n_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF2150 = T1;
  if (tmpF2150 != YPfalse) {
    T2 = tmpF2150;
  } else {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_41),n_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Ginteger_13) {
  P char_;
  P T0;
LINK_STACK();
  ARG(char_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),char_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_integer_Gchar_14) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),n_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_char_Gascii_15) {
  P char_;
  P tmpF2151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(char_, 0);
  T3 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T2 = CALL1(1,VARREF(Yhead),T3);
  T5 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T6 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T4 = CALL2(1,VARREF(YgooSmathY_),T5,T6);
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),T2,T4);
  tmpF2151 = T1;
  if (tmpF2151 != YPfalse) {
    T7 = tmpF2151;
  } else {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_47),char_);
    T7 = T8;
  }
  T0 = T7;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_digit_base_16) {
  P digit_;
  P T0,T1;
LINK_STACK();
  ARG(digit_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),digit_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_digits),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_digit_baseQ_17) {
  P x_,radix_;
  P tmpF2154;
  P tmpF2153;
  P digF2152;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
  T1 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF2152 = T1;
  tmpF2153 = digF2152;
  if (tmpF2153 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmagYL),digF2152,radix_);
    tmpF2154 = T5;
    if (tmpF2154 != YPfalse) {
      T6 = digF2152;
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

FUNCODEDEF(fun_match_18) {
  P char_;
  P tmpF2155;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(char_, 0);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  tmpF2155 = T2;
  if (tmpF2155 != YPfalse) {
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

FUNCODEDEF(fun_failXX_19) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P charF2157;
  P failXXF2156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(1,fun_failXX_19,1);
  failXXF2156 = T1;
  FUNINIT(failXXF2156, 1,return_);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYGE),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T4 = CALL0(1,failXXF2156);
  } else {
  }
  T7 = BOXVAL(FREEREF(0));
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T7);
  charF2157 = T6;
  charF2157 = BOXFAB(charF2157);
  T10 = BOXVAL(charF2157);
  T9 = CALL2(1,VARREF(YgooSmathYE),T10,YPchr((P)46));
  if (T9 != YPfalse) {
    T12 = BOXVAL(FREEREF(3));
    if (T12 != YPfalse) {
      T13 = CALL2(1,VARREF(Yerror),LITREF(lit_61),FREEREF(2));
      T11 = T13;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T15 = BOXVAL(FREEREF(0));
      T14 = CALL2(1,VARREF(YgooSmathYA),T15,YPint((P)1));
      BOXVAL(FREEREF(0)) = T14;
      T17 = BOXVAL(FREEREF(0));
      T16 = CALL2(1,VARREF(YgooSmagYGE),T17,FREEREF(1));
      if (T16 != YPfalse) {
        T18 = CALL0(1,failXXF2156);
      } else {
      }
      T21 = BOXVAL(FREEREF(0));
      T20 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T21);
      T19 = BOXVAL(charF2157) = T20;
      T11 = T19;
    }
  } else {
  }
  T23 = BOXVAL(charF2157);
  T24 = BOXVAL(FREEREF(5));
  T22 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T23,T24);
  BOXVAL(FREEREF(4)) = T22;
  T26 = BOXVAL(FREEREF(4));
  T25 = CALL1(1,VARREF(Ynot),T26);
  if (T25 != YPfalse) {
    T27 = CALL0(1,failXXF2156);
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

FUNCODEDEF(fun_match_digitX_21) {
  P U_;
  P T0,T1;
LINK_STACK();
  ARG(U_, 0);
  T1 = FUNFAB(fun_20,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_looking_at_alphaQ_22) {
  P tmpF2158;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  tmpF2158 = T1;
  if (tmpF2158 != YPfalse) {
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

FUNCODEDEF(fun_str_to_num_23) {
  P string_;
  P fF2186;
  P tmpF2185;
  P tmpF2184;
  P tmpF2183;
  P tmpF2182;
  P tmpF2181;
  P tmpF2180;
  P tmpF2179;
  P tmpF2178;
  P tmpF2177;
  P tmpF2176;
  P tmpF2175;
  P tmpF2174;
  P tmpF2173;
  P tmpF2172;
  P tmpF2171;
  P tmpF2170;
  P looking_at_alphaQF2169;
  P match_digitXF2168;
  P matchF2167;
  P radixF2166;
  P seen_decimal_pointQF2165;
  P lengthF2164;
  P scaleF2163;
  P iF2162;
  P nF2161;
  P dF2160;
  P sF2159;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94;
LINK_STACK();
  ARG(string_, 0);
  sF2159 = YPint((P)1);
  sF2159 = BOXFAB(sF2159);
  dF2160 = YPint((P)0);
  dF2160 = BOXFAB(dF2160);
  nF2161 = YPint((P)0);
  nF2161 = BOXFAB(nF2161);
  iF2162 = YPint((P)0);
  iF2162 = BOXFAB(iF2162);
  scaleF2163 = YPint((P)1);
  scaleF2163 = BOXFAB(scaleF2163);
  T11 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF2164 = T11;
  seen_decimal_pointQF2165 = YPfalse;
  seen_decimal_pointQF2165 = BOXFAB(seen_decimal_pointQF2165);
  radixF2166 = YPint((P)10);
  radixF2166 = BOXFAB(radixF2166);
  T17 = FUNSHELL(1,fun_match_18,3);
  matchF2167 = T17;
  T18 = FUNSHELL(1,fun_match_digitX_21,7);
  match_digitXF2168 = T18;
  T19 = FUNSHELL(1,fun_looking_at_alphaQ_22,3);
  looking_at_alphaQF2169 = T19;
  FUNINIT(matchF2167, 3,iF2162,lengthF2164,string_);
  FUNINIT(match_digitXF2168, 7,iF2162,lengthF2164,string_,seen_decimal_pointQF2165,dF2160,radixF2166,scaleF2163);
  FUNINIT(looking_at_alphaQF2169, 3,iF2162,lengthF2164,string_);
  T22 = CALL1(1,matchF2167,YPchr((P)43));
  tmpF2170 = T22;
  if (tmpF2170 != YPfalse) {
    T23 = tmpF2170;
  } else {
    T26 = CALL1(1,matchF2167,YPchr((P)45));
    tmpF2171 = T26;
    if (tmpF2171 != YPfalse) {
      T28 = BOXVAL(sF2159) = YPint((P)-1);
      T27 = T28;
    } else {
      T27 = YPfalse;
    }
    T25 = T27;
    tmpF2172 = T25;
    if (tmpF2172 != YPfalse) {
      T29 = tmpF2172;
    } else {
      T31 = CALL1(1,matchF2167,YPchr((P)35));
      if (T31 != YPfalse) {
        T34 = CALL1(1,matchF2167,YPchr((P)98));
        tmpF2173 = T34;
        if (tmpF2173 != YPfalse) {
          T36 = BOXVAL(radixF2166) = YPint((P)2);
          T35 = T36;
        } else {
          T35 = YPfalse;
        }
        T33 = T35;
        tmpF2174 = T33;
        if (tmpF2174 != YPfalse) {
          T37 = tmpF2174;
        } else {
          T40 = CALL1(1,matchF2167,YPchr((P)111));
          tmpF2175 = T40;
          if (tmpF2175 != YPfalse) {
            T42 = BOXVAL(radixF2166) = YPint((P)8);
            T41 = T42;
          } else {
            T41 = YPfalse;
          }
          T39 = T41;
          tmpF2176 = T39;
          if (tmpF2176 != YPfalse) {
            T43 = tmpF2176;
          } else {
            T46 = CALL1(1,matchF2167,YPchr((P)100));
            tmpF2177 = T46;
            if (tmpF2177 != YPfalse) {
              T48 = BOXVAL(radixF2166) = YPint((P)10);
              T47 = T48;
            } else {
              T47 = YPfalse;
            }
            T45 = T47;
            tmpF2178 = T45;
            if (tmpF2178 != YPfalse) {
              T49 = tmpF2178;
            } else {
              T51 = CALL1(1,matchF2167,YPchr((P)120));
              tmpF2179 = T51;
              if (tmpF2179 != YPfalse) {
                T53 = BOXVAL(radixF2166) = YPint((P)16);
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
  tmpF2180 = T21;
  if (tmpF2180 != YPfalse) {
    T58 = BOXVAL(dF2160);
    T57 = CALL1(1,match_digitXF2168,T58);
    tmpF2181 = T57;
    if (tmpF2181 != YPfalse) {
      T61 = BOXVAL(dF2160);
      T60 = BOXVAL(nF2161) = T61;
      T59 = T60;
    } else {
      T59 = YPfalse;
    }
    T56 = T59;
    tmpF2182 = T56;
    if (tmpF2182 != YPfalse) {
      for (;;) {
      loop116:
        T69 = BOXVAL(dF2160);
        T68 = CALL1(1,match_digitXF2168,T69);
        tmpF2183 = T68;
        if (tmpF2183 != YPfalse) {
          T74 = BOXVAL(nF2161);
          T75 = BOXVAL(radixF2166);
          T73 = CALL2(1,VARREF(YgooSmathYT),T74,T75);
          T76 = BOXVAL(dF2160);
          T72 = CALL2(1,VARREF(YgooSmathYA),T73,T76);
          T71 = BOXVAL(nF2161) = T72;
          T70 = T71;
        } else {
          T70 = YPfalse;
        }
        T67 = T70;
        if (T67 != YPfalse) {
          goto loop116;
          T66 = T77;
        } else {
          T66 = YPtrue;
        }
        break;
      }
      T65 = T66;
      T64 = T65;
      tmpF2184 = T64;
      if (tmpF2184 != YPfalse) {
        T81 = BOXVAL(iF2162);
        T80 = CALL2(1,VARREF(YgooSmathYE),T81,lengthF2164);
        tmpF2185 = T80;
        if (tmpF2185 != YPfalse) {
          T86 = BOXVAL(sF2159);
          T85 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T86);
          T89 = BOXVAL(nF2161);
          T88 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T89);
          T91 = BOXVAL(scaleF2163);
          T90 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T91);
          T87 = CALL2(1,VARREF(YgooSmathYS),T88,T90);
          T84 = CALL2(1,VARREF(YgooSmathYT),T85,T87);
          fF2186 = T84;
          T93 = BOXVAL(seen_decimal_pointQF2165);
          if (T93 != YPfalse) {
            T92 = fF2186;
          } else {
            T94 = CALL1(1,VARREF(YgooSmathYtrunc),fF2186);
            T92 = T94;
          }
          T83 = T92;
          T82 = T83;
        } else {
          T82 = YPfalse;
        }
        T79 = T82;
        T78 = T79;
      } else {
        T78 = YPfalse;
      }
      T63 = T78;
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

FUNCODEDEF(fun_num_to_str_base_24) {
  P num_,radix_;
  P digit_listF2191;
  P digitF2190;
  P numF2189;
  P digit_listF2188;
  P sF2187;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF2187 = T1;
  digit_listF2188 = Ynil;
  T5 = CALL2(1,VARREF(YgooSmathYT),num_,sF2187);
  numF2189 = T5;
  for (;;) {
    P a117_0,a117_1;
  loop117:
    T8 = CALL2(1,VARREF(YgooSmathYE),numF2189,YPint((P)0));
    if (T8 != YPfalse) {
      T7 = digit_listF2188;
    } else {
      T11 = CALL2(1,VARREF(YgooSmathYrem),numF2189,radix_);
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T11);
      digitF2190 = T10;
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),digitF2190,digit_listF2188);
      T15 = CALL2(1,VARREF(YgooSmathYtruncS),numF2189,radix_);
      T14 = CALL1(1,VARREF(YgooSmacrosY1st),T15);
      a117_0 = T13;
      a117_1 = T14;
      digit_listF2188 = a117_0;
      numF2189 = a117_1;
      goto loop117;
      T9 = T12;
      T7 = T9;
    }
    break;
  }
  T6 = T7;
  T4 = T6;
  digit_listF2191 = T4;
  T18 = CALL2(1,VARREF(YgooSmagYL),sF2187,YPint((P)0));
  if (T18 != YPfalse) {
    T19 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF2191);
    T17 = T19;
  } else {
    T21 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T21 != YPfalse) {
      T20 = LITREF(lit_66);
    } else {
      T20 = digit_listF2191;
    }
    T17 = T20;
  }
  T16 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T17);
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_25) {
  P num_;
  P T0;
LINK_STACK();
  ARG(num_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_base_26) {
  P num_,radix_;
  P lengthF2199;
  P eF2198;
  P iF2197;
  P eF2196;
  P pF2195;
  P stringF2194;
  P pF2193;
  P sF2192;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T2 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T2 != YPfalse) {
    T1 = YPint((P)-1);
  } else {
    T1 = YPint((P)1);
  }
  sF2192 = T1;
  T4 = CALL2(1,VARREF(YgooSmathYT),num_,sF2192);
  pF2193 = T4;
  stringF2194 = LITREF(lit_69);
  stringF2194 = BOXFAB(stringF2194);
  pF2195 = pF2193;
  eF2196 = YPint((P)0);
  for (;;) {
    P a118_0,a118_1;
  loop118:
    T11 = CALL1(1,VARREF(YgooSmathYtrunc),pF2195);
    iF2197 = T11;
    T14 = CALL2(1,VARREF(YgooSmathY_),pF2195,iF2197);
    T13 = CALL2(1,VARREF(YgooSmagYL),T14,VARREF(YgooScolsSstrYepsilon));
    if (T13 != YPfalse) {
      T15 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF2197,radix_);
      BOXVAL(stringF2194) = T15;
      T12 = eF2196;
    } else {
      T17 = CALL2(1,VARREF(YgooSmathYT),pF2195,radix_);
      T18 = CALL2(1,VARREF(YgooSmathYA),eF2196,YPint((P)1));
      a118_0 = T17;
      a118_1 = T18;
      pF2195 = a118_0;
      eF2196 = a118_1;
      goto loop118;
      T12 = T16;
    }
    T10 = T12;
    break;
  }
  T9 = T10;
  T8 = T9;
  eF2198 = T8;
  T21 = BOXVAL(stringF2194);
  T20 = CALL1(1,VARREF(YgooStypesYlen),T21);
  lengthF2199 = T20;
  T23 = CALL2(1,VARREF(YgooSmathYE),eF2198,YPint((P)0));
  if (T23 != YPfalse) {
    T25 = BOXVAL(stringF2194);
    T24 = CALL2(1,VARREF(YgooSmacrosYcat),T25,LITREF(lit_70));
    T22 = T24;
  } else {
    T27 = CALL2(1,VARREF(YgooSmathYE),eF2198,lengthF2199);
    if (T27 != YPfalse) {
      T29 = BOXVAL(stringF2194);
      T28 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_71),T29);
      T26 = T28;
    } else {
      T31 = CALL2(1,VARREF(YgooSmagYL),eF2198,lengthF2199);
      if (T31 != YPfalse) {
        T34 = BOXVAL(stringF2194);
        T35 = CALL2(1,VARREF(YgooSmathY_),lengthF2199,eF2198);
        T33 = CALL3(1,VARREF(YgooScolsSseqYsub),T34,YPint((P)0),T35);
        T37 = BOXVAL(stringF2194);
        T38 = CALL2(1,VARREF(YgooSmathY_),lengthF2199,eF2198);
        T36 = CALL3(1,VARREF(YgooScolsSseqYsub),T37,T38,lengthF2199);
        T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,LITREF(lit_72),T36);
        T30 = T32;
      } else {
        T42 = CALL2(1,VARREF(YgooSmathY_),eF2198,lengthF2199);
        T41 = CALL2(1,VARREF(YgooSmathYA),T42,YPint((P)2));
        T40 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_73),YPint((P)0),T41);
        T43 = BOXVAL(stringF2194);
        T39 = CALL2(1,VARREF(YgooSmacrosYcat),T40,T43);
        T30 = T39;
      }
      T26 = T30;
    }
    T22 = T26;
  }
  BOXVAL(stringF2194) = T22;
  T45 = CALL2(1,VARREF(YgooSmagYL),sF2192,YPint((P)0));
  if (T45 != YPfalse) {
    T47 = BOXVAL(stringF2194);
    T46 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_74),T47);
    T44 = T46;
  } else {
    T48 = BOXVAL(stringF2194);
    T44 = T48;
  }
  T19 = T44;
  T7 = T19;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_num_to_str_27) {
  P num_;
  P T0;
LINK_STACK();
  ARG(num_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),num_,DYNREF(YgooScolsSstrYTprint_baseT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_28) {
  P U_,s_;
  P T0;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
  T0 = CALL1(1,VARREF(Ysym_name),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_29) {
  P U_,s_;
  P T0;
LINK_STACK();
  ARG(U_, 0);
  ARG(s_, 1);
  T0 = CALL1(1,VARREF(Yfab_sym),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_L_30) {
  P x_,y_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T1 = CALL1(1,VARREF(Ysym_name),x_);
  T2 = CALL1(1,VARREF(Ysym_name),y_);
  T0 = CALL2(1,VARREF(YgooSmagYL),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_to_str_31) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(Ysym_name),x_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSstrY___main_0___() {
  P xF2217;
  P iF2216;
  P xF2215;
  P iF2214;
  P xF2213;
  P iF2212;
  P charsF2211;
  P nF2210;
  P cF2209;
  P cF2208;
  P iF2207;
  P vF2206;
  P greatestF2205;
  P leastF2204;
  P iF2203;
  P end259F2202;
  P initF2201;
  P ascii_charsF2200;
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198;
DEFCREGS();
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
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,sloc(25));
  T14 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T15 = fun_empty_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooScolsScolYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(28));
  T18 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T19 = fun_elt_default_1;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooScolsScolYelt_default,T17);
  lit_14 = YPPsym((P)"elt-type");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(31));
  T22 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T23 = fun_elt_type_2;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooScolsScolYelt_type,T21);
  lit_16 = YPPsym((P)"fab");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T24 = YPsig(LITREF(lit_17),YPPlist(2,T25,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(33));
  T27 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T28 = fun_fab_3;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooScolsScolYfab,T26);
  lit_18 = YPPlist(1,YPPsym((P)"objects"));
  T29 = YPsig(LITREF(lit_18),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T29,ENVNUL,PNUL,sloc(36));
  T31 = VARREF_OR(YgooScolsSstrYstr,YPfalse);
  T32 = fun_str_4;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooScolsSstrYstr,T30);
  lit_19 = YPPsym((P)"len");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_19),T33,ENVNUL,PNUL,sloc(39));
  T35 = VARREF_OR(YgooStypesYlen,YPfalse);
  T36 = fun_len_5;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T36);
  VARSET(YgooStypesYlen,T34);
  lit_21 = YPPsym((P)"low-elt");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T37 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_21),T37,ENVNUL,PNUL,sloc(42));
  T39 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T40 = fun_low_elt_6;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T40);
  VARSET(YgooScolsScolYlow_elt,T38);
  lit_23 = YPPsym((P)"fab-elt-setter");
  lit_24 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T41 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(45));
  T43 = VARREF_OR(YgooScolsScolYfab_elt_setter,YPfalse);
  T44 = fun_fab_elt_setter_7;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T44);
  VARSET(YgooScolsScolYfab_elt_setter,T42);
  lit_25 = YPPsym((P)"elt-or");
  lit_26 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T45 = YPsig(LITREF(lit_26),YPPlist(3,VARREF(YLstrG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_25),T45,ENVNUL,PNUL,sloc(48));
  T47 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T48 = fun_elt_or_8;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YgooScolsScolYelt_or,T46);
  lit_27 = YPPsym((P)"to-str");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPmet(FUNCODEREF(fun_to_str_9),LITREF(lit_27),T49,ENVNUL,PNUL,sloc(57));
  T51 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T52 = fun_to_str_9;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YgooSmathYto_str,T50);
  lit_29 = YPPsym((P)"add");
  lit_30 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"c"));
  T53 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPmet(FUNCODEREF(fun_add_10),LITREF(lit_29),T53,ENVNUL,PNUL,sloc(60));
  T55 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T56 = fun_add_10;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooScolsScolYadd,T54);
  VARSET(YgooScolsSstrYascii_limit,YPint((P)128));
  lit_31 = YPPlist(2,YPPsym((P)"i"),YPPsym((P)"s"));
  lit_32 = YPsb((P)"\t");
  lit_33 = YPsb((P)"\n");
  lit_34 = YPsb((P)"\f");
  lit_35 = YPsb((P)"\r");
  lit_36 = YPsb((P)" !\"#$%&'()*+,-./0123456789:;<=>?");
  lit_37 = YPsb((P)"@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_");
  lit_38 = YPsb((P)"`abcdefghijklmnopqrstuvwxyz{|}~");
  T57 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T57,ENVNUL,PNUL,sloc(71));
  T60 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T59 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T60,YPfalse);
  ascii_charsF2200 = T59;
  T62 = FUNFAB(fun_11,1,ascii_charsF2200);
  initF2201 = T62;
  XCALL2(1,initF2201,YPint((P)9),LITREF(lit_32));
  XCALL2(1,initF2201,YPint((P)10),LITREF(lit_33));
  XCALL2(1,initF2201,YPint((P)12),LITREF(lit_34));
  XCALL2(1,initF2201,YPint((P)13),LITREF(lit_35));
  XCALL2(1,initF2201,YPint((P)32),LITREF(lit_36));
  XCALL2(1,initF2201,YPint((P)64),LITREF(lit_37));
  XCALL2(1,initF2201,YPint((P)96),LITREF(lit_38));
  T61 = ascii_charsF2200;
  T58 = T61;
  VARSET(YgooScolsSstrYascii_chars,T58);
  lit_39 = YPPsym((P)"ascii->char");
  lit_40 = YPPlist(1,YPPsym((P)"n"));
  lit_41 = YPsb((P)"not a standard character's ASCII code: %=");
  T63 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_12 = YPmet(FUNCODEREF(fun_ascii_Gchar_12),LITREF(lit_39),T63,ENVNUL,PNUL,sloc(85));
  T65 = VARREF_OR(YgooScolsSstrYascii_Gchar,YPfalse);
  T66 = fun_ascii_Gchar_12;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
  VARSET(YgooScolsSstrYascii_Gchar,T64);
  lit_42 = YPPsym((P)"char->integer");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T67 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_13 = YPmet(FUNCODEREF(fun_char_Ginteger_13),LITREF(lit_42),T67,ENVNUL,PNUL,sloc(89));
  T69 = VARREF_OR(YgooScolsSstrYchar_Ginteger,YPfalse);
  T70 = fun_char_Ginteger_13;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T70);
  VARSET(YgooScolsSstrYchar_Ginteger,T68);
  lit_44 = YPPsym((P)"integer->char");
  lit_45 = YPPlist(1,YPPsym((P)"n"));
  T71 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_14 = YPmet(FUNCODEREF(fun_integer_Gchar_14),LITREF(lit_44),T71,ENVNUL,PNUL,sloc(92));
  T73 = VARREF_OR(YgooScolsSstrYinteger_Gchar,YPfalse);
  T74 = fun_integer_Gchar_14;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YgooScolsSstrYinteger_Gchar,T72);
  T76 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F2202 = T76;
  iF2203 = YPint((P)0);
  leastF2204 = YPfalse;
  greatestF2205 = YPfalse;
  for (;;) {
    P a119_0,a119_1,a119_2;
  loop119:
    T80 = XCALL2(1,VARREF(YgooSmathYE),iF2203,end259F2202);
    if (T80 != YPfalse) {
      T85 = XCALL2(1,VARREF(YgooSmathY_),greatestF2205,leastF2204);
      T84 = XCALL2(1,VARREF(YgooSmathYA),T85,YPint((P)1));
      T83 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T84);
      T82 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T83,YPfalse);
      vF2206 = T82;
      iF2207 = YPint((P)0);
      for (;;) {
        P a120_0;
      loop120:
        T89 = XCALL2(1,VARREF(YgooSmathYE),iF2207,end259F2202);
        if (T89 != YPfalse) {
          T90 = XCALL2(1,VARREF(Ylst),leastF2204,vF2206);
          T88 = T90;
        } else {
          T92 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF2207);
          cF2208 = T92;
          if (cF2208 != YPfalse) {
            T95 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2208);
            T94 = XCALL2(1,VARREF(YgooSmathY_),T95,leastF2204);
            T93 = XCALL3(1,VARREF(YgooScolsScolxYelt_setter),iF2207,vF2206,T94);
          } else {
          }
          T97 = XCALL2(1,VARREF(YgooSmathYA),iF2207,YPint((P)1));
          a120_0 = T97;
          iF2207 = a120_0;
          goto loop120;
          T91 = T96;
          T88 = T91;
        }
        break;
      }
      T87 = T88;
      T86 = T87;
      T81 = T86;
      T79 = T81;
    } else {
      T99 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF2203);
      cF2209 = T99;
      if (cF2209 != YPfalse) {
        T102 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2209);
        nF2210 = T102;
        T104 = XCALL2(1,VARREF(YgooSmathYA),iF2203,YPint((P)1));
        if (leastF2204 != YPfalse) {
          T106 = XCALL2(1,VARREF(YgooSmagYmin),leastF2204,nF2210);
          T105 = T106;
        } else {
          T105 = nF2210;
        }
        if (greatestF2205 != YPfalse) {
          T108 = XCALL2(1,VARREF(YgooSmagYmax),greatestF2205,nF2210);
          T107 = T108;
        } else {
          T107 = nF2210;
        }
        a119_0 = T104;
        a119_1 = T105;
        a119_2 = T107;
        iF2203 = a119_0;
        leastF2204 = a119_1;
        greatestF2205 = a119_2;
        goto loop119;
        T101 = T103;
        T100 = T101;
      } else {
        T110 = XCALL2(1,VARREF(YgooSmathYA),iF2203,YPint((P)1));
        a119_0 = T110;
        a119_1 = leastF2204;
        a119_2 = greatestF2205;
        iF2203 = a119_0;
        leastF2204 = a119_1;
        greatestF2205 = a119_2;
        goto loop119;
        T100 = T109;
      }
      T98 = T100;
      T79 = T98;
    }
    break;
  }
  T78 = T79;
  T77 = T78;
  T75 = T77;
  VARSET(YgooScolsSstrYnative_chars,T75);
  lit_46 = YPPlist(1,YPPsym((P)"char"));
  lit_47 = YPsb((P)"not a standard character: %=");
  T111 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_15 = YPmet(FUNCODEREF(fun_char_Gascii_15),LITREF(lit_2),T111,ENVNUL,PNUL,sloc(113));
  T113 = VARREF_OR(YgooSmathYchar_Gascii,YPfalse);
  T114 = fun_char_Gascii_15;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YgooSmathYchar_Gascii,T112);
  lit_48 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_48));
  T117 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T116 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T117,YPfalse);
  charsF2211 = T116;
  T118 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  iF2212 = T118;
  xF2213 = YPint((P)0);
  for (;;) {
    P a121_0,a121_1;
  loop121:
    T122 = XCALL2(1,VARREF(YgooSmagYG),xF2213,YPint((P)9));
    T121 = XCALL1(1,VARREF(Ynot),T122);
    if (T121 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2213,charsF2211,iF2212);
      T124 = XCALL2(1,VARREF(YgooSmathYA),iF2212,YPint((P)1));
      T125 = XCALL2(1,VARREF(YgooSmathYA),xF2213,YPint((P)1));
      a121_0 = T124;
      a121_1 = T125;
      iF2212 = a121_0;
      xF2213 = a121_1;
      goto loop121;
      T120 = T123;
    } else {
      T120 = YPfalse;
    }
    break;
  }
  T119 = T120;
  T126 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  iF2214 = T126;
  xF2215 = YPint((P)10);
  for (;;) {
    P a122_0,a122_1;
  loop122:
    T130 = XCALL2(1,VARREF(YgooSmagYG),xF2215,YPint((P)15));
    T129 = XCALL1(1,VARREF(Ynot),T130);
    if (T129 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2215,charsF2211,iF2214);
      T132 = XCALL2(1,VARREF(YgooSmathYA),iF2214,YPint((P)1));
      T133 = XCALL2(1,VARREF(YgooSmathYA),xF2215,YPint((P)1));
      a122_0 = T132;
      a122_1 = T133;
      iF2214 = a122_0;
      xF2215 = a122_1;
      goto loop122;
      T128 = T131;
    } else {
      T128 = YPfalse;
    }
    break;
  }
  T127 = T128;
  T134 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  iF2216 = T134;
  xF2217 = YPint((P)10);
  for (;;) {
    P a123_0,a123_1;
  loop123:
    T138 = XCALL2(1,VARREF(YgooSmagYG),xF2217,YPint((P)15));
    T137 = XCALL1(1,VARREF(Ynot),T138);
    if (T137 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2217,charsF2211,iF2216);
      T140 = XCALL2(1,VARREF(YgooSmathYA),iF2216,YPint((P)1));
      T141 = XCALL2(1,VARREF(YgooSmathYA),xF2217,YPint((P)1));
      a123_0 = T140;
      a123_1 = T141;
      iF2216 = a123_0;
      xF2217 = a123_1;
      goto loop123;
      T136 = T139;
    } else {
      T136 = YPfalse;
    }
    break;
  }
  T135 = T136;
  T115 = charsF2211;
  VARSET(YgooScolsSstrYascii_digits,T115);
  lit_49 = YPPsym((P)"to-digit-base");
  lit_50 = YPPlist(1,YPPsym((P)"digit"));
  T143 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T142 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T143,Ynil);
  fun_to_digit_base_16 = YPmet(FUNCODEREF(fun_to_digit_base_16),LITREF(lit_49),T142,ENVNUL,PNUL,sloc(130));
  T145 = VARREF_OR(YgooScolsSstrYto_digit_base,YPfalse);
  T146 = fun_to_digit_base_16;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YgooScolsSstrYto_digit_base,T144);
  lit_51 = YPPsym((P)"digit-base?");
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T148 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T147 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T148,Ynil);
  fun_digit_baseQ_17 = YPmet(FUNCODEREF(fun_digit_baseQ_17),LITREF(lit_51),T147,ENVNUL,PNUL,sloc(133));
  T150 = VARREF_OR(YgooScolsSstrYdigit_baseQ,YPfalse);
  T151 = fun_digit_baseQ_17;
  T149 = XCALL2(1,VARREF(YPdefine_method),T150,T151);
  VARSET(YgooScolsSstrYdigit_baseQ,T149);
  lit_53 = YPPlist(1,YPPsym((P)"string"));
  lit_54 = YPPsym((P)"match");
  lit_55 = YPPlist(1,YPPsym((P)"char"));
  lit_56 = YPPsym((P)"match-digit!");
  lit_57 = YPPlist(1,YPPsym((P)"_"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"fail!!");
  lit_60 = Ynil;
  lit_61 = YPsb((P)"str-to-num: Two decimal points: %=");
  lit_62 = YPPsym((P)"looking-at-alpha?");
  T158 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_18 = YPmet(FUNCODEREF(fun_match_18),LITREF(lit_54),T158,ENVNUL,PNUL,sloc(146));
  T157 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_19 = YPmet(FUNCODEREF(fun_failXX_19),LITREF(lit_59),T157,ENVNUL,PNUL,sloc(152));
  T156 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T156,ENVNUL,PNUL,sloc(151));
  T155 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_21 = YPmet(FUNCODEREF(fun_match_digitX_21),LITREF(lit_56),T155,ENVNUL,PNUL,sloc(150));
  T154 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_22 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_22),LITREF(lit_62),T154,ENVNUL,PNUL,sloc(170));
  T153 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T152 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T153,Ynil);
  fun_str_to_num_23 = YPmet(FUNCODEREF(fun_str_to_num_23),LITREF(lit_4),T152,ENVNUL,PNUL,sloc(137));
  T160 = VARREF_OR(YgooScolsSstrYstr_to_num,YPfalse);
  T161 = fun_str_to_num_23;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YgooScolsSstrYstr_to_num,T159);
  lit_63 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_63));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_64 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_64));
  lit_65 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_66 = YPsb((P)"0");
  T162 = YPsig(LITREF(lit_65),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_24 = YPmet(FUNCODEREF(fun_num_to_str_base_24),LITREF(lit_6),T162,ENVNUL,PNUL,sloc(195));
  T164 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T165 = fun_num_to_str_base_24;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YgooScolsSstrYnum_to_str_base,T163);
  lit_67 = YPPlist(1,YPPsym((P)"num"));
  T166 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_25 = YPmet(FUNCODEREF(fun_num_to_str_25),LITREF(lit_8),T166,ENVNUL,PNUL,sloc(209));
  T168 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T169 = fun_num_to_str_25;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YgooSmathYnum_to_str,T167);
  lit_68 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_69 = YPsb((P)"");
  lit_70 = YPsb((P)".0");
  lit_71 = YPsb((P)"0.");
  lit_72 = YPsb((P)".");
  lit_73 = YPsb((P)"0.0000000000000");
  lit_74 = YPsb((P)"-");
  T170 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_26 = YPmet(FUNCODEREF(fun_num_to_str_base_26),LITREF(lit_6),T170,ENVNUL,PNUL,sloc(212));
  T172 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T173 = fun_num_to_str_base_26;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YgooScolsSstrYnum_to_str_base,T171);
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T174 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_27 = YPmet(FUNCODEREF(fun_num_to_str_27),LITREF(lit_8),T174,ENVNUL,PNUL,sloc(234));
  T176 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T177 = fun_num_to_str_27;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YgooSmathYnum_to_str,T175);
  lit_76 = YPPsym((P)"as");
  lit_77 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T179 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T178 = YPsig(LITREF(lit_77),YPPlist(2,T179,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_28 = YPmet(FUNCODEREF(fun_as_28),LITREF(lit_76),T178,ENVNUL,PNUL,sloc(239));
  T181 = VARREF_OR(YgooStypesYas,YPfalse);
  T182 = fun_as_28;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T182);
  VARSET(YgooStypesYas,T180);
  lit_78 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T184 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T183 = YPsig(LITREF(lit_78),YPPlist(2,T184,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_29 = YPmet(FUNCODEREF(fun_as_29),LITREF(lit_76),T183,ENVNUL,PNUL,sloc(242));
  T186 = VARREF_OR(YgooStypesYas,YPfalse);
  T187 = fun_as_29;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YgooStypesYas,T185);
  lit_79 = YPPsym((P)"<");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T188 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_30 = YPmet(FUNCODEREF(fun_L_30),LITREF(lit_79),T188,ENVNUL,PNUL,sloc(250));
  T190 = VARREF_OR(YgooSmagYL,YPfalse);
  T191 = fun_L_30;
  T189 = XCALL2(1,VARREF(YPdefine_method),T190,T191);
  VARSET(YgooSmagYL,T189);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T194 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T193 = fun_to_str_31 = YPmet(FUNCODEREF(fun_to_str_31),LITREF(lit_27),T194,ENVNUL,PNUL,sloc(253));
  T197 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T198 = fun_to_str_31;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  T195 = VARSET(YgooSmathYto_str,T196);
  T192 = T195;
  return T192;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"---main-0---", PVAR, NULL},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ascii-limit", NULL},
  {"ascii-whitespaces", NULL},
  {"num-to-str", NULL},
  {"num-to-str-base", NULL},
  {"str-to-num", NULL},
  {"char->ascii", NULL},
  {"str", NULL},
  {"*print-base*", NULL},
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
