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
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YDmin_int,"goo/boot","$min-int");
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
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
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
EXT(YgooSmathYDpi,"goo/math","$pi");
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
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ynot,"goo/boot","not");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
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
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooStypesYtE,"goo/types","t=");
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
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
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
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Ytype_error,"goo/boot","type-error");
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
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLclassG,"goo/boot","<class>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPtnul,"goo/boot","%tnul");
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
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_32);
DEFLIT(lit_0);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_34);
DEFLIT(lit_57);
DEFLIT(lit_5);
DEFLIT(lit_40);
DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_74);
DEFLIT(lit_10);
DEFLIT(lit_39);
DEFLIT(lit_73);
DEFLIT(lit_71);
DEFLIT(lit_20);
DEFLIT(lit_47);
DEFLIT(lit_60);
DEFLIT(lit_63);
DEFLIT(lit_33);
DEFLIT(lit_17);
DEFLIT(lit_56);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_8);
DEFLIT(lit_65);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_36);
DEFLIT(lit_79);
DEFLIT(lit_70);
DEFLIT(lit_52);
DEFLIT(lit_4);
DEFLIT(lit_59);
DEFLIT(lit_68);
DEFLIT(lit_37);
DEFLIT(lit_51);
DEFLIT(lit_43);
DEFLIT(lit_14);
DEFLIT(lit_46);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_48);
DEFLIT(lit_66);
DEFLIT(lit_69);
DEFLIT(lit_77);
DEFLIT(lit_41);
DEFLIT(lit_35);
DEFLIT(lit_55);
DEFLIT(lit_80);
DEFLIT(lit_44);
DEFLIT(lit_72);
DEFLIT(lit_38);
DEFLIT(lit_61);
DEFLIT(lit_9);
DEFLIT(lit_54);
DEFLIT(lit_24);
DEFLIT(lit_11);
DEFLIT(lit_58);
DEFLIT(lit_50);
DEFLIT(lit_13);
DEFLIT(lit_7);
DEFLIT(lit_25);
DEFLIT(lit_42);
DEFLIT(lit_1);
DEFLIT(lit_28);
DEFLIT(lit_16);
DEFLIT(lit_81);
DEFLIT(lit_75);
DEFLIT(lit_45);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_76);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_67);
DEFLIT(lit_78);
DEFLIT(lit_23);
DEFLIT(lit_49);
DEFLIT(lit_62);
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
  P xF2110;
  P xF2109;
  P xF2108;
  P xF2107;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  xF2107 = s_;
  xF2108 = xF2107;
  T1 = (P)YPiGG(xF2108,(P)2);
  xF2109 = YPchr((P)32);
  xF2110 = xF2109;
  T2 = (P)YPiGG(xF2110,(P)2);
  T0 = (P)YPstr(T1,T2);
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
  P tF2113;
  P xF2112;
  P xF2111;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPslen(x_);
  xF2111 = T2;
  xF2112 = xF2111;
  tF2113 = (P)1;
  T1 = (P)YPiLL(xF2112,(P)2);
  T0 = (P)YPiv(T1,tF2113);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF2118;
  P xF2117;
  P xF2116;
  P xF2115;
  P xF2114;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  xF2114 = i_;
  xF2115 = xF2114;
  T3 = (P)YPiGG(xF2115,(P)2);
  T2 = (P)YPselt(x_,T3);
  xF2116 = T2;
  xF2117 = xF2116;
  tF2118 = (P)2;
  T1 = (P)YPiLL(xF2117,(P)2);
  T0 = (P)YPiv(T1,tF2118);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF2122;
  P xF2121;
  P xF2120;
  P xF2119;
  P T0,T1,T2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  xF2119 = z_;
  xF2120 = xF2119;
  T1 = (P)YPiGG(xF2120,(P)2);
  xF2121 = i_;
  xF2122 = xF2121;
  T2 = (P)YPiGG(xF2122,(P)2);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF2127;
  P xF2126;
  P xF2125;
  P xF2124;
  P xF2123;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF2123 = i_;
    xF2124 = xF2123;
    T5 = (P)YPiGG(xF2124,(P)2);
    T4 = (P)YPselt(x_,T5);
    xF2125 = T4;
    xF2126 = xF2125;
    tF2127 = (P)2;
    T3 = (P)YPiLL(xF2126,(P)2);
    T2 = (P)YPiv(T3,tF2127);
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
  P jF2129;
  P iF2128;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
  iF2128 = i_;
  jF2129 = YPint((P)0);
  for (;;) {
    P a115_0,a115_1;
  loop115:
    T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T2 = CALL2(1,VARREF(YgooSmathYE),jF2129,T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),s_,jF2129);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,FREEREF(0),iF2128);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF2128,YPint((P)1));
      T7 = CALL2(1,VARREF(YgooSmathYA),jF2129,YPint((P)1));
      a115_0 = T6;
      a115_1 = T7;
      iF2128 = a115_0;
      jF2129 = a115_1;
      goto loop115;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_12) {
  P n_;
  P tmpF2130;
  P T0,T1,T2;
LINK_STACK();
  ARG(n_, 0);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF2130 = T2;
  if (tmpF2130 != YPfalse) {
    T0 = tmpF2130;
  } else {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_41),n_);
    T0 = T1;
  }
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
  P tmpF2131;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(char_, 0);
  T4 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T3 = CALL1(1,VARREF(Yhead),T4);
  T6 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T7 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,T5);
  tmpF2131 = T2;
  if (tmpF2131 != YPfalse) {
    T0 = tmpF2131;
  } else {
    T1 = CALL2(1,VARREF(Yerror),LITREF(lit_47),char_);
    T0 = T1;
  }
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
  P digF2132;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF2132 = T3;
  if (digF2132 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),digF2132,radix_);
    if (T2 != YPfalse) {
      T1 = digF2132;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_match_18) {
  P char_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(char_, 0);
  T3 = BOXVAL(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T6 = BOXVAL(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,char_);
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T8 = BOXVAL(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    BOXVAL(FREEREF(0)) = T7;
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
  P charF2134;
  P failXXF2133;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(1,fun_failXX_19,1);
  failXXF2133 = T32;
  FUNINIT(failXXF2133, 1,return_);
  T1 = BOXVAL(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,FREEREF(1));
  if (T0 != YPfalse) {
    T2 = CALL0(1,failXXF2133);
  } else {
  }
  T31 = BOXVAL(FREEREF(0));
  T30 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T31);
  charF2134 = T30;
  charF2134 = BOXFAB(charF2134);
  T5 = BOXVAL(charF2134);
  T4 = CALL2(1,VARREF(YgooSmathYE),T5,YPchr((P)46));
  if (T4 != YPfalse) {
    T7 = BOXVAL(FREEREF(3));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(Yerror),LITREF(lit_61),FREEREF(2));
      T6 = T8;
    } else {
      BOXVAL(FREEREF(3)) = YPtrue;
      T10 = BOXVAL(FREEREF(0));
      T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
      BOXVAL(FREEREF(0)) = T9;
      T12 = BOXVAL(FREEREF(0));
      T11 = CALL2(1,VARREF(YgooSmagYGE),T12,FREEREF(1));
      if (T11 != YPfalse) {
        T13 = CALL0(1,failXXF2133);
      } else {
      }
      T16 = BOXVAL(FREEREF(0));
      T15 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T16);
      T14 = BOXVAL(charF2134) = T15;
      T6 = T14;
    }
  } else {
  }
  T18 = BOXVAL(charF2134);
  T19 = BOXVAL(FREEREF(5));
  T17 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T18,T19);
  BOXVAL(FREEREF(4)) = T17;
  T21 = BOXVAL(FREEREF(4));
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T22 = CALL0(1,failXXF2133);
  } else {
  }
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL2(1,VARREF(YgooSmathYA),T24,YPint((P)1));
  BOXVAL(FREEREF(0)) = T23;
  T25 = BOXVAL(FREEREF(3));
  if (T25 != YPfalse) {
    T28 = BOXVAL(FREEREF(6));
    T29 = BOXVAL(FREEREF(5));
    T27 = CALL2(1,VARREF(YgooSmathYT),T28,T29);
    T26 = BOXVAL(FREEREF(6)) = T27;
  } else {
  }
UNLINK_STACK();
  QRET(YPtrue);
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
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T5);
    T3 = CALL1(1,VARREF(YgooSmathYalphaQ),T4);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_to_num_23) {
  P string_;
  P fF2151;
  P tmpF2150;
  P tmpF2149;
  P tmpF2148;
  P tmpF2147;
  P tmpF2146;
  P looking_at_alphaQF2145;
  P match_digitXF2144;
  P matchF2143;
  P radixF2142;
  P seen_decimal_pointQF2141;
  P lengthF2140;
  P scaleF2139;
  P iF2138;
  P nF2137;
  P dF2136;
  P sF2135;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
LINK_STACK();
  ARG(string_, 0);
  sF2135 = YPint((P)1);
  sF2135 = BOXFAB(sF2135);
  dF2136 = YPint((P)0);
  dF2136 = BOXFAB(dF2136);
  nF2137 = YPint((P)0);
  nF2137 = BOXFAB(nF2137);
  iF2138 = YPint((P)0);
  iF2138 = BOXFAB(iF2138);
  scaleF2139 = YPint((P)1);
  scaleF2139 = BOXFAB(scaleF2139);
  T66 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF2140 = T66;
  seen_decimal_pointQF2141 = YPfalse;
  seen_decimal_pointQF2141 = BOXFAB(seen_decimal_pointQF2141);
  radixF2142 = YPint((P)10);
  radixF2142 = BOXFAB(radixF2142);
  T63 = FUNSHELL(1,fun_match_18,3);
  matchF2143 = T63;
  T64 = FUNSHELL(1,fun_match_digitX_21,7);
  match_digitXF2144 = T64;
  T65 = FUNSHELL(1,fun_looking_at_alphaQ_22,3);
  looking_at_alphaQF2145 = T65;
  FUNINIT(matchF2143, 3,iF2138,lengthF2140,string_);
  FUNINIT(match_digitXF2144, 7,iF2138,lengthF2140,string_,seen_decimal_pointQF2141,dF2136,radixF2142,scaleF2139);
  FUNINIT(looking_at_alphaQF2145, 3,iF2138,lengthF2140,string_);
  T30 = CALL1(1,matchF2143,YPchr((P)43));
  tmpF2146 = T30;
  if (tmpF2146 != YPfalse) {
    T8 = tmpF2146;
  } else {
    T28 = CALL1(1,matchF2143,YPchr((P)45));
    if (T28 != YPfalse) {
      T29 = BOXVAL(sF2135) = YPint((P)-1);
      T27 = T29;
    } else {
      T27 = YPfalse;
    }
    tmpF2147 = T27;
    if (tmpF2147 != YPfalse) {
      T9 = tmpF2147;
    } else {
      T11 = CALL1(1,matchF2143,YPchr((P)35));
      if (T11 != YPfalse) {
        T25 = CALL1(1,matchF2143,YPchr((P)98));
        if (T25 != YPfalse) {
          T26 = BOXVAL(radixF2142) = YPint((P)2);
          T24 = T26;
        } else {
          T24 = YPfalse;
        }
        tmpF2148 = T24;
        if (tmpF2148 != YPfalse) {
          T12 = tmpF2148;
        } else {
          T22 = CALL1(1,matchF2143,YPchr((P)111));
          if (T22 != YPfalse) {
            T23 = BOXVAL(radixF2142) = YPint((P)8);
            T21 = T23;
          } else {
            T21 = YPfalse;
          }
          tmpF2149 = T21;
          if (tmpF2149 != YPfalse) {
            T13 = tmpF2149;
          } else {
            T19 = CALL1(1,matchF2143,YPchr((P)100));
            if (T19 != YPfalse) {
              T20 = BOXVAL(radixF2142) = YPint((P)10);
              T18 = T20;
            } else {
              T18 = YPfalse;
            }
            tmpF2150 = T18;
            if (tmpF2150 != YPfalse) {
              T14 = tmpF2150;
            } else {
              T16 = CALL1(1,matchF2143,YPchr((P)120));
              if (T16 != YPfalse) {
                T17 = BOXVAL(radixF2142) = YPint((P)16);
                T15 = T17;
              } else {
                T15 = YPfalse;
              }
              T14 = T15;
            }
            T13 = T14;
          }
          T12 = T13;
        }
        T10 = T12;
      } else {
        T10 = YPtrue;
      }
      T9 = T10;
    }
    T8 = T9;
  }
  if (T8 != YPfalse) {
    T34 = BOXVAL(dF2136);
    T33 = CALL1(1,match_digitXF2144,T34);
    if (T33 != YPfalse) {
      T36 = BOXVAL(dF2136);
      T35 = BOXVAL(nF2137) = T36;
      T32 = T35;
    } else {
      T32 = YPfalse;
    }
    if (T32 != YPfalse) {
      for (;;) {
      loop116:
        T41 = BOXVAL(dF2136);
        T40 = CALL1(1,match_digitXF2144,T41);
        if (T40 != YPfalse) {
          T45 = BOXVAL(nF2137);
          T46 = BOXVAL(radixF2142);
          T44 = CALL2(1,VARREF(YgooSmathYT),T45,T46);
          T47 = BOXVAL(dF2136);
          T43 = CALL2(1,VARREF(YgooSmathYA),T44,T47);
          T42 = BOXVAL(nF2137) = T43;
          T39 = T42;
        } else {
          T39 = YPfalse;
        }
        if (T39 != YPfalse) {
          goto loop116;
          T38 = T48;
        } else {
          T38 = YPtrue;
        }
        break;
      }
      if (T38 != YPfalse) {
        T51 = BOXVAL(iF2138);
        T50 = CALL2(1,VARREF(YgooSmathYE),T51,lengthF2140);
        if (T50 != YPfalse) {
          T57 = BOXVAL(sF2135);
          T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T57);
          T60 = BOXVAL(nF2137);
          T59 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T60);
          T62 = BOXVAL(scaleF2139);
          T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T62);
          T58 = CALL2(1,VARREF(YgooSmathYS),T59,T61);
          T55 = CALL2(1,VARREF(YgooSmathYT),T56,T58);
          fF2151 = T55;
          T53 = BOXVAL(seen_decimal_pointQF2141);
          if (T53 != YPfalse) {
            T52 = fF2151;
          } else {
            T54 = CALL1(1,VARREF(YgooSmathYtrunc),fF2151);
            T52 = T54;
          }
          T49 = T52;
        } else {
          T49 = YPfalse;
        }
        T37 = T49;
      } else {
        T37 = YPfalse;
      }
      T31 = T37;
    } else {
      T31 = YPfalse;
    }
    T7 = T31;
  } else {
    T7 = YPfalse;
  }
UNLINK_STACK();
  RET(T7);
}

FUNCODEDEF(fun_num_to_str_base_24) {
  P num_,radix_;
  P digit_listF2156;
  P digitF2155;
  P numF2154;
  P digit_listF2153;
  P sF2152;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T16 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T16 != YPfalse) {
    T15 = YPint((P)-1);
  } else {
    T15 = YPint((P)1);
  }
  sF2152 = T15;
  digit_listF2153 = Ynil;
  T14 = CALL2(1,VARREF(YgooSmathYT),num_,sF2152);
  numF2154 = T14;
  for (;;) {
    P a117_0,a117_1;
  loop117:
    T7 = CALL2(1,VARREF(YgooSmathYE),numF2154,YPint((P)0));
    if (T7 != YPfalse) {
      T6 = digit_listF2153;
    } else {
      T13 = CALL2(1,VARREF(YgooSmathYrem),numF2154,radix_);
      T12 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T13);
      digitF2155 = T12;
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),digitF2155,digit_listF2153);
      T11 = CALL2(1,VARREF(YgooSmathYtruncS),numF2154,radix_);
      T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
      a117_0 = T9;
      a117_1 = T10;
      digit_listF2153 = a117_0;
      numF2154 = a117_1;
      goto loop117;
      T6 = T8;
    }
    break;
  }
  digit_listF2156 = T6;
  T2 = CALL2(1,VARREF(YgooSmagYL),sF2152,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF2156);
    T1 = T3;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T5 != YPfalse) {
      T4 = LITREF(lit_66);
    } else {
      T4 = digit_listF2156;
    }
    T1 = T4;
  }
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
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
  P lengthF2164;
  P eF2163;
  P iF2162;
  P eF2161;
  P pF2160;
  P stringF2159;
  P pF2158;
  P sF2157;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
LINK_STACK();
  ARG(num_, 0);
  ARG(radix_, 1);
  T40 = CALL2(1,VARREF(YgooSmagYL),num_,YPint((P)0));
  if (T40 != YPfalse) {
    T39 = YPint((P)-1);
  } else {
    T39 = YPint((P)1);
  }
  sF2157 = T39;
  T38 = CALL2(1,VARREF(YgooSmathYT),num_,sF2157);
  pF2158 = T38;
  stringF2159 = LITREF(lit_69);
  stringF2159 = BOXFAB(stringF2159);
  pF2160 = pF2158;
  eF2161 = YPint((P)0);
  for (;;) {
    P a118_0,a118_1;
  loop118:
    T37 = CALL1(1,VARREF(YgooSmathYtrunc),pF2160);
    iF2162 = T37;
    T32 = CALL2(1,VARREF(YgooSmathY_),pF2160,iF2162);
    T31 = CALL2(1,VARREF(YgooSmagYL),T32,VARREF(YgooScolsSstrYepsilon));
    if (T31 != YPfalse) {
      T33 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF2162,radix_);
      BOXVAL(stringF2159) = T33;
      T30 = eF2161;
    } else {
      T35 = CALL2(1,VARREF(YgooSmathYT),pF2160,radix_);
      T36 = CALL2(1,VARREF(YgooSmathYA),eF2161,YPint((P)1));
      a118_0 = T35;
      a118_1 = T36;
      pF2160 = a118_0;
      eF2161 = a118_1;
      goto loop118;
      T30 = T34;
    }
    break;
  }
  eF2163 = T30;
  T29 = BOXVAL(stringF2159);
  T28 = CALL1(1,VARREF(YgooStypesYlen),T29);
  lengthF2164 = T28;
  T2 = CALL2(1,VARREF(YgooSmathYE),eF2163,YPint((P)0));
  if (T2 != YPfalse) {
    T4 = BOXVAL(stringF2159);
    T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_70));
    T1 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),eF2163,lengthF2164);
    if (T6 != YPfalse) {
      T8 = BOXVAL(stringF2159);
      T7 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_71),T8);
      T5 = T7;
    } else {
      T10 = CALL2(1,VARREF(YgooSmagYL),eF2163,lengthF2164);
      if (T10 != YPfalse) {
        T13 = BOXVAL(stringF2159);
        T14 = CALL2(1,VARREF(YgooSmathY_),lengthF2164,eF2163);
        T12 = CALL3(1,VARREF(YgooScolsSseqYsub),T13,YPint((P)0),T14);
        T16 = BOXVAL(stringF2159);
        T17 = CALL2(1,VARREF(YgooSmathY_),lengthF2164,eF2163);
        T15 = CALL3(1,VARREF(YgooScolsSseqYsub),T16,T17,lengthF2164);
        T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_72),T15);
        T9 = T11;
      } else {
        T21 = CALL2(1,VARREF(YgooSmathY_),eF2163,lengthF2164);
        T20 = CALL2(1,VARREF(YgooSmathYA),T21,YPint((P)2));
        T19 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_73),YPint((P)0),T20);
        T22 = BOXVAL(stringF2159);
        T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,T22);
        T9 = T18;
      }
      T5 = T9;
    }
    T1 = T5;
  }
  BOXVAL(stringF2159) = T1;
  T24 = CALL2(1,VARREF(YgooSmagYL),sF2157,YPint((P)0));
  if (T24 != YPfalse) {
    T26 = BOXVAL(stringF2159);
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_74),T26);
    T23 = T25;
  } else {
    T27 = BOXVAL(stringF2159);
    T23 = T27;
  }
UNLINK_STACK();
  RET(T23);
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
  P xF2182;
  P iF2181;
  P xF2180;
  P iF2179;
  P xF2178;
  P iF2177;
  P charsF2176;
  P nF2175;
  P cF2174;
  P cF2173;
  P iF2172;
  P vF2171;
  P greatestF2170;
  P leastF2169;
  P iF2168;
  P end259F2167;
  P initF2166;
  P ascii_charsF2165;
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
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
  ascii_charsF2165 = T59;
  T58 = FUNFAB(fun_11,1,ascii_charsF2165);
  initF2166 = T58;
  XCALL2(1,initF2166,YPint((P)9),LITREF(lit_32));
  XCALL2(1,initF2166,YPint((P)10),LITREF(lit_33));
  XCALL2(1,initF2166,YPint((P)12),LITREF(lit_34));
  XCALL2(1,initF2166,YPint((P)13),LITREF(lit_35));
  XCALL2(1,initF2166,YPint((P)32),LITREF(lit_36));
  XCALL2(1,initF2166,YPint((P)64),LITREF(lit_37));
  XCALL2(1,initF2166,YPint((P)96),LITREF(lit_38));
  VARSET(YgooScolsSstrYascii_chars,ascii_charsF2165);
  lit_39 = YPPsym((P)"ascii->char");
  lit_40 = YPPlist(1,YPPsym((P)"n"));
  lit_41 = YPsb((P)"not a standard character's ASCII code: %=");
  T61 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_12 = YPmet(FUNCODEREF(fun_ascii_Gchar_12),LITREF(lit_39),T61,ENVNUL,PNUL,sloc(85));
  T63 = VARREF_OR(YgooScolsSstrYascii_Gchar,YPfalse);
  T64 = fun_ascii_Gchar_12;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T64);
  VARSET(YgooScolsSstrYascii_Gchar,T62);
  lit_42 = YPPsym((P)"char->integer");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T65 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_13 = YPmet(FUNCODEREF(fun_char_Ginteger_13),LITREF(lit_42),T65,ENVNUL,PNUL,sloc(89));
  T67 = VARREF_OR(YgooScolsSstrYchar_Ginteger,YPfalse);
  T68 = fun_char_Ginteger_13;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T68);
  VARSET(YgooScolsSstrYchar_Ginteger,T66);
  lit_44 = YPPsym((P)"integer->char");
  lit_45 = YPPlist(1,YPPsym((P)"n"));
  T69 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_14 = YPmet(FUNCODEREF(fun_integer_Gchar_14),LITREF(lit_44),T69,ENVNUL,PNUL,sloc(92));
  T71 = VARREF_OR(YgooScolsSstrYinteger_Gchar,YPfalse);
  T72 = fun_integer_Gchar_14;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YgooScolsSstrYinteger_Gchar,T70);
  T99 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F2167 = T99;
  iF2168 = YPint((P)0);
  leastF2169 = YPfalse;
  greatestF2170 = YPfalse;
  for (;;) {
    P a119_0,a119_1,a119_2;
  loop119:
    T74 = XCALL2(1,VARREF(YgooSmathYE),iF2168,end259F2167);
    if (T74 != YPfalse) {
      T87 = XCALL2(1,VARREF(YgooSmathY_),greatestF2170,leastF2169);
      T86 = XCALL2(1,VARREF(YgooSmathYA),T87,YPint((P)1));
      T85 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T86);
      T84 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T85,YPfalse);
      vF2171 = T84;
      iF2172 = YPint((P)0);
      for (;;) {
        P a120_0;
      loop120:
        T76 = XCALL2(1,VARREF(YgooSmathYE),iF2172,end259F2167);
        if (T76 != YPfalse) {
          T77 = XCALL2(1,VARREF(Ylst),leastF2169,vF2171);
          T75 = T77;
        } else {
          T83 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF2172);
          cF2173 = T83;
          if (cF2173 != YPfalse) {
            T80 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2173);
            T79 = XCALL2(1,VARREF(YgooSmathY_),T80,leastF2169);
            T78 = XCALL3(1,VARREF(YgooScolsScolxYelt_setter),iF2172,vF2171,T79);
          } else {
          }
          T82 = XCALL2(1,VARREF(YgooSmathYA),iF2172,YPint((P)1));
          a120_0 = T82;
          iF2172 = a120_0;
          goto loop120;
          T75 = T81;
        }
        break;
      }
      T73 = T75;
    } else {
      T98 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF2168);
      cF2174 = T98;
      if (cF2174 != YPfalse) {
        T95 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF2174);
        nF2175 = T95;
        T90 = XCALL2(1,VARREF(YgooSmathYA),iF2168,YPint((P)1));
        if (leastF2169 != YPfalse) {
          T92 = XCALL2(1,VARREF(YgooSmagYmin),leastF2169,nF2175);
          T91 = T92;
        } else {
          T91 = nF2175;
        }
        if (greatestF2170 != YPfalse) {
          T94 = XCALL2(1,VARREF(YgooSmagYmax),greatestF2170,nF2175);
          T93 = T94;
        } else {
          T93 = nF2175;
        }
        a119_0 = T90;
        a119_1 = T91;
        a119_2 = T93;
        iF2168 = a119_0;
        leastF2169 = a119_1;
        greatestF2170 = a119_2;
        goto loop119;
        T88 = T89;
      } else {
        T97 = XCALL2(1,VARREF(YgooSmathYA),iF2168,YPint((P)1));
        a119_0 = T97;
        a119_1 = leastF2169;
        a119_2 = greatestF2170;
        iF2168 = a119_0;
        leastF2169 = a119_1;
        greatestF2170 = a119_2;
        goto loop119;
        T88 = T96;
      }
      T73 = T88;
    }
    break;
  }
  VARSET(YgooScolsSstrYnative_chars,T73);
  lit_46 = YPPlist(1,YPPsym((P)"char"));
  lit_47 = YPsb((P)"not a standard character: %=");
  T100 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_15 = YPmet(FUNCODEREF(fun_char_Gascii_15),LITREF(lit_2),T100,ENVNUL,PNUL,sloc(113));
  T102 = VARREF_OR(YgooSmathYchar_Gascii,YPfalse);
  T103 = fun_char_Gascii_15;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSmathYchar_Gascii,T101);
  lit_48 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_48));
  T126 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T125 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T126,YPfalse);
  charsF2176 = T125;
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  iF2177 = T110;
  xF2178 = YPint((P)0);
  for (;;) {
    P a121_0,a121_1;
  loop121:
    T106 = XCALL2(1,VARREF(YgooSmagYG),xF2178,YPint((P)9));
    T105 = XCALL1(1,VARREF(Ynot),T106);
    if (T105 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2178,charsF2176,iF2177);
      T108 = XCALL2(1,VARREF(YgooSmathYA),iF2177,YPint((P)1));
      T109 = XCALL2(1,VARREF(YgooSmathYA),xF2178,YPint((P)1));
      a121_0 = T108;
      a121_1 = T109;
      iF2177 = a121_0;
      xF2178 = a121_1;
      goto loop121;
      T104 = T107;
    } else {
      T104 = YPfalse;
    }
    break;
  }
  T117 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  iF2179 = T117;
  xF2180 = YPint((P)10);
  for (;;) {
    P a122_0,a122_1;
  loop122:
    T113 = XCALL2(1,VARREF(YgooSmagYG),xF2180,YPint((P)15));
    T112 = XCALL1(1,VARREF(Ynot),T113);
    if (T112 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2180,charsF2176,iF2179);
      T115 = XCALL2(1,VARREF(YgooSmathYA),iF2179,YPint((P)1));
      T116 = XCALL2(1,VARREF(YgooSmathYA),xF2180,YPint((P)1));
      a122_0 = T115;
      a122_1 = T116;
      iF2179 = a122_0;
      xF2180 = a122_1;
      goto loop122;
      T111 = T114;
    } else {
      T111 = YPfalse;
    }
    break;
  }
  T124 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  iF2181 = T124;
  xF2182 = YPint((P)10);
  for (;;) {
    P a123_0,a123_1;
  loop123:
    T120 = XCALL2(1,VARREF(YgooSmagYG),xF2182,YPint((P)15));
    T119 = XCALL1(1,VARREF(Ynot),T120);
    if (T119 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF2182,charsF2176,iF2181);
      T122 = XCALL2(1,VARREF(YgooSmathYA),iF2181,YPint((P)1));
      T123 = XCALL2(1,VARREF(YgooSmathYA),xF2182,YPint((P)1));
      a123_0 = T122;
      a123_1 = T123;
      iF2181 = a123_0;
      xF2182 = a123_1;
      goto loop123;
      T118 = T121;
    } else {
      T118 = YPfalse;
    }
    break;
  }
  VARSET(YgooScolsSstrYascii_digits,charsF2176);
  lit_49 = YPPsym((P)"to-digit-base");
  lit_50 = YPPlist(1,YPPsym((P)"digit"));
  T128 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T127 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T128,Ynil);
  fun_to_digit_base_16 = YPmet(FUNCODEREF(fun_to_digit_base_16),LITREF(lit_49),T127,ENVNUL,PNUL,sloc(130));
  T130 = VARREF_OR(YgooScolsSstrYto_digit_base,YPfalse);
  T131 = fun_to_digit_base_16;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YgooScolsSstrYto_digit_base,T129);
  lit_51 = YPPsym((P)"digit-base?");
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T133 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T132 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T133,Ynil);
  fun_digit_baseQ_17 = YPmet(FUNCODEREF(fun_digit_baseQ_17),LITREF(lit_51),T132,ENVNUL,PNUL,sloc(133));
  T135 = VARREF_OR(YgooScolsSstrYdigit_baseQ,YPfalse);
  T136 = fun_digit_baseQ_17;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YgooScolsSstrYdigit_baseQ,T134);
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
  T143 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_18 = YPmet(FUNCODEREF(fun_match_18),LITREF(lit_54),T143,ENVNUL,PNUL,sloc(146));
  T142 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_failXX_19 = YPmet(FUNCODEREF(fun_failXX_19),LITREF(lit_59),T142,ENVNUL,PNUL,sloc(152));
  T141 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T141,ENVNUL,PNUL,sloc(151));
  T140 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_match_digitX_21 = YPmet(FUNCODEREF(fun_match_digitX_21),LITREF(lit_56),T140,ENVNUL,PNUL,sloc(150));
  T139 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_looking_at_alphaQ_22 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_22),LITREF(lit_62),T139,ENVNUL,PNUL,sloc(170));
  T138 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T137 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T138,Ynil);
  fun_str_to_num_23 = YPmet(FUNCODEREF(fun_str_to_num_23),LITREF(lit_4),T137,ENVNUL,PNUL,sloc(137));
  T145 = VARREF_OR(YgooScolsSstrYstr_to_num,YPfalse);
  T146 = fun_str_to_num_23;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YgooScolsSstrYstr_to_num,T144);
  lit_63 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_63));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_64 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_64));
  lit_65 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_66 = YPsb((P)"0");
  T147 = YPsig(LITREF(lit_65),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_24 = YPmet(FUNCODEREF(fun_num_to_str_base_24),LITREF(lit_6),T147,ENVNUL,PNUL,sloc(195));
  T149 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T150 = fun_num_to_str_base_24;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YgooScolsSstrYnum_to_str_base,T148);
  lit_67 = YPPlist(1,YPPsym((P)"num"));
  T151 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_25 = YPmet(FUNCODEREF(fun_num_to_str_25),LITREF(lit_8),T151,ENVNUL,PNUL,sloc(209));
  T153 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T154 = fun_num_to_str_25;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T154);
  VARSET(YgooSmathYnum_to_str,T152);
  lit_68 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_69 = YPsb((P)"");
  lit_70 = YPsb((P)".0");
  lit_71 = YPsb((P)"0.");
  lit_72 = YPsb((P)".");
  lit_73 = YPsb((P)"0.0000000000000");
  lit_74 = YPsb((P)"-");
  T155 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_26 = YPmet(FUNCODEREF(fun_num_to_str_base_26),LITREF(lit_6),T155,ENVNUL,PNUL,sloc(212));
  T157 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T158 = fun_num_to_str_base_26;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T158);
  VARSET(YgooScolsSstrYnum_to_str_base,T156);
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T159 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_27 = YPmet(FUNCODEREF(fun_num_to_str_27),LITREF(lit_8),T159,ENVNUL,PNUL,sloc(234));
  T161 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T162 = fun_num_to_str_27;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T162);
  VARSET(YgooSmathYnum_to_str,T160);
  lit_76 = YPPsym((P)"as");
  lit_77 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T164 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T163 = YPsig(LITREF(lit_77),YPPlist(2,T164,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_28 = YPmet(FUNCODEREF(fun_as_28),LITREF(lit_76),T163,ENVNUL,PNUL,sloc(239));
  T166 = VARREF_OR(YgooStypesYas,YPfalse);
  T167 = fun_as_28;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T167);
  VARSET(YgooStypesYas,T165);
  lit_78 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T169 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T168 = YPsig(LITREF(lit_78),YPPlist(2,T169,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_29 = YPmet(FUNCODEREF(fun_as_29),LITREF(lit_76),T168,ENVNUL,PNUL,sloc(242));
  T171 = VARREF_OR(YgooStypesYas,YPfalse);
  T172 = fun_as_29;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YgooStypesYas,T170);
  lit_79 = YPPsym((P)"<");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T173 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_30 = YPmet(FUNCODEREF(fun_L_30),LITREF(lit_79),T173,ENVNUL,PNUL,sloc(250));
  T175 = VARREF_OR(YgooSmagYL,YPfalse);
  T176 = fun_L_30;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YgooSmagYL,T174);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T178 = fun_to_str_31 = YPmet(FUNCODEREF(fun_to_str_31),LITREF(lit_27),T179,ENVNUL,PNUL,sloc(253));
  T182 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T183 = fun_to_str_31;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  T180 = VARSET(YgooSmathYto_str,T181);
  T177 = T180;
  return T177;
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
  {"%vpc", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
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
  {"%puts", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"---main-0---", PVAR, NULL},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ascii-limit", NULL},
  {"num-to-str", NULL},
  {"num-to-str-base", NULL},
  {"str-to-num", NULL},
  {"*print-base*", NULL},
  {"char->ascii", NULL},
  {"str", NULL},
  {"ascii-whitespaces", NULL},
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
