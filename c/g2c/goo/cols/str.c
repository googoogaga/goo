/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/str");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/str */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
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
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
DEF(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
DEF(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
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
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooScolsSstrYDdigit_to_char,"goo/cols/str","$digit-to-char");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
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
DEF(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
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
DYNDEF(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
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
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
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
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScolsSstrYinteger_Gchar,"goo/cols/str","integer->char");
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
DEF(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
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
DEF(YgooScolsSstrYascii_digits,"goo/cols/str","ascii-digits");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooScolsSstrYnative_chars,"goo/cols/str","native-chars");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
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
DEF(YgooScolsSstrYchar_Ginteger,"goo/cols/str","char->integer");
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooScolsSstrYepsilon,"goo/cols/str","epsilon");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
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
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
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
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
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
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
DEF(YgooScolsSstrYto_digit_base,"goo/cols/str","to-digit-base");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YgooScolsSstrYdigit_baseQ,"goo/cols/str","digit-base?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
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
DEF(YgooScolsSstrYascii_Gchar,"goo/cols/str","ascii->char");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsSstrYascii_chars,"goo/cols/str","ascii-chars");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
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

DEFLIT(lit_44);
DEFLIT(lit_24);
DEFLIT(lit_19);
DEFLIT(lit_50);
DEFLIT(lit_11);
DEFLIT(lit_37);
DEFLIT(lit_51);
DEFLIT(lit_5);
DEFLIT(lit_39);
DEFLIT(lit_22);
DEFLIT(lit_75);
DEFLIT(lit_1);
DEFLIT(lit_67);
DEFLIT(lit_58);
DEFLIT(lit_18);
DEFLIT(lit_8);
DEFLIT(lit_81);
DEFLIT(lit_13);
DEFLIT(lit_74);
DEFLIT(lit_2);
DEFLIT(lit_47);
DEFLIT(lit_61);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_32);
DEFLIT(lit_57);
DEFLIT(lit_4);
DEFLIT(lit_66);
DEFLIT(lit_17);
DEFLIT(lit_64);
DEFLIT(lit_46);
DEFLIT(lit_31);
DEFLIT(lit_56);
DEFLIT(lit_21);
DEFLIT(lit_42);
DEFLIT(lit_73);
DEFLIT(lit_69);
DEFLIT(lit_23);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_36);
DEFLIT(lit_35);
DEFLIT(lit_53);
DEFLIT(lit_43);
DEFLIT(lit_30);
DEFLIT(lit_72);
DEFLIT(lit_38);
DEFLIT(lit_71);
DEFLIT(lit_26);
DEFLIT(lit_55);
DEFLIT(lit_62);
DEFLIT(lit_45);
DEFLIT(lit_78);
DEFLIT(lit_63);
DEFLIT(lit_0);
DEFLIT(lit_54);
DEFLIT(lit_48);
DEFLIT(lit_68);
DEFLIT(lit_6);
DEFLIT(lit_27);
DEFLIT(lit_52);
DEFLIT(lit_7);
DEFLIT(lit_41);
DEFLIT(lit_29);
DEFLIT(lit_70);
DEFLIT(lit_59);
DEFLIT(lit_79);
DEFLIT(lit_20);
DEFLIT(lit_80);
DEFLIT(lit_9);
DEFLIT(lit_65);
DEFLIT(lit_40);
DEFLIT(lit_77);
DEFLIT(lit_49);
DEFLIT(lit_25);
DEFLIT(lit_14);
DEFLIT(lit_76);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_60);

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
extern P YgooScolsSstrY___main_1___ ();

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
  P xF8413;
  P xF8412;
  P xF8411;
  P xF8410;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  ARG(s_, 1);
  xF8410 = s_;
  xF8411 = xF8410;
  T1 = (P)YPiGG(xF8411,(P)2);
  xF8412 = YPchr((P)32);
  xF8413 = xF8412;
  T2 = (P)YPiGG(xF8413,(P)2);
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
  P tF8416;
  P xF8415;
  P xF8414;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = (P)YPslen(x_);
  xF8414 = T2;
  xF8415 = xF8414;
  tF8416 = (P)1;
  T1 = (P)YPiLL(xF8415,(P)2);
  T0 = (P)YPiv(T1,tF8416);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_low_elt_6) {
  P x_,i_;
  P tF8421;
  P xF8420;
  P xF8419;
  P xF8418;
  P xF8417;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  xF8417 = i_;
  xF8418 = xF8417;
  T3 = (P)YPiGG(xF8418,(P)2);
  T2 = (P)YPselt(x_,T3);
  xF8419 = T2;
  xF8420 = xF8419;
  tF8421 = (P)2;
  T1 = (P)YPiLL(xF8420,(P)2);
  T0 = (P)YPiv(T1,tF8421);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_elt_setter_7) {
  P z_,x_,i_;
  P xF8425;
  P xF8424;
  P xF8423;
  P xF8422;
  P T0,T1,T2;
LINK_STACK();
  ARG(z_, 0);
  ARG(x_, 1);
  ARG(i_, 2);
  xF8422 = z_;
  xF8423 = xF8422;
  T1 = (P)YPiGG(xF8423,(P)2);
  xF8424 = i_;
  xF8425 = xF8424;
  T2 = (P)YPiGG(xF8425,(P)2);
  T0 = (P)YPselt_setter(T1,x_,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elt_or_8) {
  P x_,i_,default_;
  P tF8430;
  P xF8429;
  P xF8428;
  P xF8427;
  P xF8426;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  ARG(default_, 2);
  T1 = CALL2(1,VARREF(YgooScolsSseqYrange_checkQ),x_,i_);
  if (T1 != YPfalse) {
    xF8426 = i_;
    xF8427 = xF8426;
    T5 = (P)YPiGG(xF8427,(P)2);
    T4 = (P)YPselt(x_,T5);
    xF8428 = T4;
    xF8429 = xF8428;
    tF8430 = (P)2;
    T3 = (P)YPiLL(xF8429,(P)2);
    T2 = (P)YPiv(T3,tF8430);
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
  P jF8432;
  P iF8431;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(i_, 0);
  ARG(s_, 1);
  iF8431 = i_;
  jF8432 = YPint((P)0);
  LOOP_370: {
    P a370_0,a370_1;
    T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T2 = CALL2(1,VARREF(YgooSmathYE),jF8432,T3);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),s_,jF8432);
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),T4,FREEREF(0),iF8431);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF8431,YPint((P)1));
      T7 = CALL2(1,VARREF(YgooSmathYA),jF8432,YPint((P)1));
      a370_0 = T6;
      a370_1 = T7;
      iF8431 = a370_0;
      jF8432 = a370_1;
      goto LOOP_370;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ascii_Gchar_12) {
  P n_;
  P tmpF8433;
  P T0,T1,T2;
LINK_STACK();
  ARG(n_, 0);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),n_);
  tmpF8433 = T2;
  if (tmpF8433 != YPfalse) {
    T0 = tmpF8433;
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
  P tmpF8434;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(char_, 0);
  T4 = CALL1(1,VARREF(Ytail),VARREF(YgooScolsSstrYnative_chars));
  T3 = CALL1(1,VARREF(Yhead),T4);
  T6 = CALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),char_);
  T7 = CALL1(1,VARREF(Yhead),VARREF(YgooScolsSstrYnative_chars));
  T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),T3,T5);
  tmpF8434 = T2;
  if (tmpF8434 != YPfalse) {
    T0 = tmpF8434;
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
  P digF8435;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  ARG(radix_, 1);
  T3 = CALL1(1,VARREF(YgooScolsSstrYto_digit_base),x_);
  digF8435 = T3;
  if (digF8435 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),digF8435,radix_);
    if (T2 != YPfalse) {
      T1 = digF8435;
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
  T3 = BOXGET(FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),T3,FREEREF(1));
  if (T2 != YPfalse) {
    T6 = BOXGET(FREEREF(0));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T6);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,char_);
    T1 = T4;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T8 = BOXGET(FREEREF(0));
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    BOXPUT(T7,FREEREF(0));
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
  P charF8437;
  P failXXF8436;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(1,fun_failXX_19,1);
  failXXF8436 = T32;
  FUNINIT(failXXF8436, 1,return_);
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,FREEREF(1));
  if (T0 != YPfalse) {
    T2 = CALL0(1,failXXF8436);
  } else {
  }
  T31 = BOXGET(FREEREF(0));
  T30 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T31);
  charF8437 = T30;
  T5 = charF8437;
  T4 = CALL2(1,VARREF(YgooSmathYE),T5,YPchr((P)46));
  if (T4 != YPfalse) {
    T7 = BOXGET(FREEREF(3));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(Yerror),LITREF(lit_61),FREEREF(2));
      T6 = T8;
    } else {
      BOXPUT(YPtrue,FREEREF(3));
      T10 = BOXGET(FREEREF(0));
      T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
      BOXPUT(T9,FREEREF(0));
      T12 = BOXGET(FREEREF(0));
      T11 = CALL2(1,VARREF(YgooSmagYGE),T12,FREEREF(1));
      if (T11 != YPfalse) {
        T13 = CALL0(1,failXXF8436);
      } else {
      }
      T16 = BOXGET(FREEREF(0));
      T15 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(2),T16);
      T14 = charF8437 = T15;
      T6 = T14;
    }
  } else {
  }
  T18 = charF8437;
  T19 = BOXGET(FREEREF(5));
  T17 = CALL2(1,VARREF(YgooScolsSstrYdigit_baseQ),T18,T19);
  BOXPUT(T17,FREEREF(4));
  T21 = BOXGET(FREEREF(4));
  T20 = CALL1(1,VARREF(Ynot),T21);
  if (T20 != YPfalse) {
    T22 = CALL0(1,failXXF8436);
  } else {
  }
  T24 = BOXGET(FREEREF(0));
  T23 = CALL2(1,VARREF(YgooSmathYA),T24,YPint((P)1));
  BOXPUT(T23,FREEREF(0));
  T25 = BOXGET(FREEREF(3));
  if (T25 != YPfalse) {
    T28 = BOXGET(FREEREF(6));
    T29 = BOXGET(FREEREF(5));
    T27 = CALL2(1,VARREF(YgooSmathYT),T28,T29);
    T26 = BOXPUT(T27,FREEREF(6));
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
  T2 = BOXGET(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSmagYL),T2,FREEREF(1));
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
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
  P fF8454;
  P tmpF8453;
  P tmpF8452;
  P tmpF8451;
  P tmpF8450;
  P tmpF8449;
  P looking_at_alphaQF8448;
  P match_digitXF8447;
  P matchF8446;
  P radixF8445;
  P seen_decimal_pointQF8444;
  P lengthF8443;
  P scaleF8442;
  P iF8441;
  P nF8440;
  P dF8439;
  P sF8438;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66;
LINK_STACK();
  ARG(string_, 0);
  sF8438 = YPint((P)1);
  dF8439 = YPint((P)0);
  dF8439 = BOXFAB(dF8439);
  nF8440 = YPint((P)0);
  iF8441 = YPint((P)0);
  iF8441 = BOXFAB(iF8441);
  scaleF8442 = YPint((P)1);
  scaleF8442 = BOXFAB(scaleF8442);
  T66 = CALL1(1,VARREF(YgooStypesYlen),string_);
  lengthF8443 = T66;
  seen_decimal_pointQF8444 = YPfalse;
  seen_decimal_pointQF8444 = BOXFAB(seen_decimal_pointQF8444);
  radixF8445 = YPint((P)10);
  radixF8445 = BOXFAB(radixF8445);
  T63 = FUNSHELL(1,fun_match_18,3);
  matchF8446 = T63;
  T64 = FUNSHELL(1,fun_match_digitX_21,7);
  match_digitXF8447 = T64;
  T65 = FUNSHELL(1,fun_looking_at_alphaQ_22,3);
  looking_at_alphaQF8448 = T65;
  FUNINIT(matchF8446, 3,iF8441,lengthF8443,string_);
  FUNINIT(match_digitXF8447, 7,iF8441,lengthF8443,string_,seen_decimal_pointQF8444,dF8439,radixF8445,scaleF8442);
  FUNINIT(looking_at_alphaQF8448, 3,iF8441,lengthF8443,string_);
  T30 = CALL1(1,matchF8446,YPchr((P)43));
  tmpF8449 = T30;
  if (tmpF8449 != YPfalse) {
    T8 = tmpF8449;
  } else {
    T28 = CALL1(1,matchF8446,YPchr((P)45));
    if (T28 != YPfalse) {
      T29 = sF8438 = YPint((P)-1);
      T27 = T29;
    } else {
      T27 = YPfalse;
    }
    tmpF8450 = T27;
    if (tmpF8450 != YPfalse) {
      T9 = tmpF8450;
    } else {
      T11 = CALL1(1,matchF8446,YPchr((P)35));
      if (T11 != YPfalse) {
        T25 = CALL1(1,matchF8446,YPchr((P)98));
        if (T25 != YPfalse) {
          T26 = BOXPUT(YPint((P)2),radixF8445);
          T24 = T26;
        } else {
          T24 = YPfalse;
        }
        tmpF8451 = T24;
        if (tmpF8451 != YPfalse) {
          T12 = tmpF8451;
        } else {
          T22 = CALL1(1,matchF8446,YPchr((P)111));
          if (T22 != YPfalse) {
            T23 = BOXPUT(YPint((P)8),radixF8445);
            T21 = T23;
          } else {
            T21 = YPfalse;
          }
          tmpF8452 = T21;
          if (tmpF8452 != YPfalse) {
            T13 = tmpF8452;
          } else {
            T19 = CALL1(1,matchF8446,YPchr((P)100));
            if (T19 != YPfalse) {
              T20 = BOXPUT(YPint((P)10),radixF8445);
              T18 = T20;
            } else {
              T18 = YPfalse;
            }
            tmpF8453 = T18;
            if (tmpF8453 != YPfalse) {
              T14 = tmpF8453;
            } else {
              T16 = CALL1(1,matchF8446,YPchr((P)120));
              if (T16 != YPfalse) {
                T17 = BOXPUT(YPint((P)16),radixF8445);
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
    T34 = BOXGET(dF8439);
    T33 = CALL1(1,match_digitXF8447,T34);
    if (T33 != YPfalse) {
      T36 = BOXGET(dF8439);
      T35 = nF8440 = T36;
      T32 = T35;
    } else {
      T32 = YPfalse;
    }
    if (T32 != YPfalse) {
      LOOP_371: {
        T41 = BOXGET(dF8439);
        T40 = CALL1(1,match_digitXF8447,T41);
        if (T40 != YPfalse) {
          T45 = nF8440;
          T46 = BOXGET(radixF8445);
          T44 = CALL2(1,VARREF(YgooSmathYT),T45,T46);
          T47 = BOXGET(dF8439);
          T43 = CALL2(1,VARREF(YgooSmathYA),T44,T47);
          T42 = nF8440 = T43;
          T39 = T42;
        } else {
          T39 = YPfalse;
        }
        if (T39 != YPfalse) {
          goto LOOP_371;
          T38 = T48;
        } else {
          T38 = YPtrue;
        }
      }
      if (T38 != YPfalse) {
        T51 = BOXGET(iF8441);
        T50 = CALL2(1,VARREF(YgooSmathYE),T51,lengthF8443);
        if (T50 != YPfalse) {
          T57 = sF8438;
          T56 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T57);
          T60 = nF8440;
          T59 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T60);
          T62 = BOXGET(scaleF8442);
          T61 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T62);
          T58 = CALL2(1,VARREF(YgooSmathYS),T59,T61);
          T55 = CALL2(1,VARREF(YgooSmathYT),T56,T58);
          fF8454 = T55;
          T53 = BOXGET(seen_decimal_pointQF8444);
          if (T53 != YPfalse) {
            T52 = fF8454;
          } else {
            T54 = CALL1(1,VARREF(YgooSmathYtrunc),fF8454);
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
  P digit_listF8459;
  P digitF8458;
  P numF8457;
  P digit_listF8456;
  P sF8455;
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
  sF8455 = T15;
  digit_listF8456 = Ynil;
  T14 = CALL2(1,VARREF(YgooSmathYT),num_,sF8455);
  numF8457 = T14;
  LOOP_372: {
    P a372_0,a372_1;
    T7 = CALL2(1,VARREF(YgooSmathYE),numF8457,YPint((P)0));
    if (T7 != YPfalse) {
      T6 = digit_listF8456;
    } else {
      T13 = CALL2(1,VARREF(YgooSmathYrem),numF8457,radix_);
      T12 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYDdigit_to_char),T13);
      digitF8458 = T12;
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),digitF8458,digit_listF8456);
      T11 = CALL2(1,VARREF(YgooSmathYtruncS),numF8457,radix_);
      T10 = CALL1(1,VARREF(YgooSmacrosY1st),T11);
      a372_0 = T9;
      a372_1 = T10;
      digit_listF8456 = a372_0;
      numF8457 = a372_1;
      goto LOOP_372;
      T6 = T8;
    }
  }
  digit_listF8459 = T6;
  T2 = CALL2(1,VARREF(YgooSmagYL),sF8455,YPint((P)0));
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),YPchr((P)45),digit_listF8459);
    T1 = T3;
  } else {
    T5 = CALL2(1,VARREF(YgooSmathYE),num_,YPint((P)0));
    if (T5 != YPfalse) {
      T4 = LITREF(lit_66);
    } else {
      T4 = digit_listF8459;
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
  P lengthF8467;
  P eF8466;
  P iF8465;
  P eF8464;
  P pF8463;
  P stringF8462;
  P pF8461;
  P sF8460;
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
  sF8460 = T39;
  T38 = CALL2(1,VARREF(YgooSmathYT),num_,sF8460);
  pF8461 = T38;
  stringF8462 = LITREF(lit_69);
  pF8463 = pF8461;
  eF8464 = YPint((P)0);
  LOOP_373: {
    P a373_0,a373_1;
    T37 = CALL1(1,VARREF(YgooSmathYtrunc),pF8463);
    iF8465 = T37;
    T32 = CALL2(1,VARREF(YgooSmathY_),pF8463,iF8465);
    T31 = CALL2(1,VARREF(YgooSmagYL),T32,VARREF(YgooScolsSstrYepsilon));
    if (T31 != YPfalse) {
      T33 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),iF8465,radix_);
      stringF8462 = T33;
      T30 = eF8464;
    } else {
      T35 = CALL2(1,VARREF(YgooSmathYT),pF8463,radix_);
      T36 = CALL2(1,VARREF(YgooSmathYA),eF8464,YPint((P)1));
      a373_0 = T35;
      a373_1 = T36;
      pF8463 = a373_0;
      eF8464 = a373_1;
      goto LOOP_373;
      T30 = T34;
    }
  }
  eF8466 = T30;
  T29 = stringF8462;
  T28 = CALL1(1,VARREF(YgooStypesYlen),T29);
  lengthF8467 = T28;
  T2 = CALL2(1,VARREF(YgooSmathYE),eF8466,YPint((P)0));
  if (T2 != YPfalse) {
    T4 = stringF8462;
    T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,LITREF(lit_70));
    T1 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),eF8466,lengthF8467);
    if (T6 != YPfalse) {
      T8 = stringF8462;
      T7 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_71),T8);
      T5 = T7;
    } else {
      T10 = CALL2(1,VARREF(YgooSmagYL),eF8466,lengthF8467);
      if (T10 != YPfalse) {
        T13 = stringF8462;
        T14 = CALL2(1,VARREF(YgooSmathY_),lengthF8467,eF8466);
        T12 = CALL3(1,VARREF(YgooScolsSseqYsub),T13,YPint((P)0),T14);
        T16 = stringF8462;
        T17 = CALL2(1,VARREF(YgooSmathY_),lengthF8467,eF8466);
        T15 = CALL3(1,VARREF(YgooScolsSseqYsub),T16,T17,lengthF8467);
        T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,LITREF(lit_72),T15);
        T9 = T11;
      } else {
        T21 = CALL2(1,VARREF(YgooSmathY_),eF8466,lengthF8467);
        T20 = CALL2(1,VARREF(YgooSmathYA),T21,YPint((P)2));
        T19 = CALL3(1,VARREF(YgooScolsSseqYsub),LITREF(lit_73),YPint((P)0),T20);
        T22 = stringF8462;
        T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,T22);
        T9 = T18;
      }
      T5 = T9;
    }
    T1 = T5;
  }
  stringF8462 = T1;
  T24 = CALL2(1,VARREF(YgooSmagYL),sF8460,YPint((P)0));
  if (T24 != YPfalse) {
    T26 = stringF8462;
    T25 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_74),T26);
    T23 = T25;
  } else {
    T27 = stringF8462;
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
  P xF8485;
  P iF8484;
  P xF8483;
  P iF8482;
  P xF8481;
  P iF8480;
  P charsF8479;
  P nF8478;
  P cF8477;
  P cF8476;
  P iF8475;
  P vF8474;
  P greatestF8473;
  P leastF8472;
  P iF8471;
  P end259F8470;
  P initF8469;
  P ascii_charsF8468;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154;
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
  fun_empty_0 = YPmet(FUNCODEREF(fun_empty_0),LITREF(lit_10),T11,ENVNUL,PNUL,sloc(27));
  T14 = VARREF_OR(YgooScolsScolYempty,YPfalse);
  T15 = fun_empty_0;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooScolsScolYempty,T13);
  lit_12 = YPPsym((P)"elt-default");
  lit_13 = YPPlist(1,YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_elt_default_1 = YPmet(FUNCODEREF(fun_elt_default_1),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(30));
  T18 = VARREF_OR(YgooScolsScolYelt_default,YPfalse);
  T19 = fun_elt_default_1;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooScolsScolYelt_default,T17);
  lit_14 = YPPsym((P)"elt-type");
  lit_15 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_elt_type_2 = YPmet(FUNCODEREF(fun_elt_type_2),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(33));
  T22 = VARREF_OR(YgooScolsScolYelt_type,YPfalse);
  T23 = fun_elt_type_2;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooScolsScolYelt_type,T21);
  lit_16 = YPPsym((P)"fab");
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"s"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T24 = YPsig(LITREF(lit_17),YPPlist(2,T25,VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_fab_3 = YPmet(FUNCODEREF(fun_fab_3),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(35));
  T27 = VARREF_OR(YgooScolsScolYfab,YPfalse);
  T28 = fun_fab_3;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooScolsScolYfab,T26);
  lit_18 = YPPlist(1,YPPsym((P)"objects"));
  T29 = YPsig(LITREF(lit_18),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_str_4 = YPmet(FUNCODEREF(fun_str_4),LITREF(lit_0),T29,ENVNUL,PNUL,sloc(38));
  T31 = VARREF_OR(YgooScolsSstrYstr,YPfalse);
  T32 = fun_str_4;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooScolsSstrYstr,T30);
  lit_19 = YPPsym((P)"len");
  lit_20 = YPPlist(1,YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfixnumG),Ynil);
  fun_len_5 = YPmet(FUNCODEREF(fun_len_5),LITREF(lit_19),T33,ENVNUL,PNUL,sloc(41));
  T35 = VARREF_OR(YgooStypesYlen,YPfalse);
  T36 = fun_len_5;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YgooStypesYlen,T34);
  lit_21 = YPPsym((P)"low-elt");
  lit_22 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T37 = YPsig(LITREF(lit_22),YPPlist(2,VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)2),VARREF(YLchrG),Ynil);
  fun_low_elt_6 = YPmet(FUNCODEREF(fun_low_elt_6),LITREF(lit_21),T37,ENVNUL,PNUL,sloc(44));
  T39 = VARREF_OR(YgooScolsScolYlow_elt,YPfalse);
  T40 = fun_low_elt_6;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooScolsScolYlow_elt,T38);
  lit_23 = YPPsym((P)"fab-elt-setter");
  lit_24 = YPPlist(3,YPPsym((P)"z"),YPPsym((P)"x"),YPPsym((P)"i"));
  T41 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLchrG),VARREF(YLstrG),VARREF(YLfixnumG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_fab_elt_setter_7 = YPmet(FUNCODEREF(fun_fab_elt_setter_7),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(47));
  T43 = VARREF_OR(YgooScolsScolYfab_elt_setter,YPfalse);
  T44 = fun_fab_elt_setter_7;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooScolsScolYfab_elt_setter,T42);
  lit_25 = YPPsym((P)"elt-or");
  lit_26 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"i"),YPPsym((P)"default"));
  T45 = YPsig(LITREF(lit_26),YPPlist(3,VARREF(YLstrG),VARREF(YLfixnumG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_elt_or_8 = YPmet(FUNCODEREF(fun_elt_or_8),LITREF(lit_25),T45,ENVNUL,PNUL,sloc(50));
  T47 = VARREF_OR(YgooScolsScolYelt_or,YPfalse);
  T48 = fun_elt_or_8;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooScolsScolYelt_or,T46);
  lit_27 = YPPsym((P)"to-str");
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T49 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_to_str_9 = YPmet(FUNCODEREF(fun_to_str_9),LITREF(lit_27),T49,ENVNUL,PNUL,sloc(59));
  T51 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T52 = fun_to_str_9;
  T50 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T51,T52);
  VARSET(YgooSmathYto_str,T50);
  lit_29 = YPPsym((P)"add");
  lit_30 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"c"));
  T53 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLstrG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_10 = YPmet(FUNCODEREF(fun_add_10),LITREF(lit_29),T53,ENVNUL,PNUL,sloc(62));
  T55 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T56 = fun_add_10;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
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
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T57,ENVNUL,PNUL,sloc(73));
  T60 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T59 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T60,YPfalse);
  ascii_charsF8468 = T59;
  T58 = FUNFAB(fun_11,1,ascii_charsF8468);
  initF8469 = T58;
  XCALL2(1,initF8469,YPint((P)9),LITREF(lit_32));
  XCALL2(1,initF8469,YPint((P)10),LITREF(lit_33));
  XCALL2(1,initF8469,YPint((P)12),LITREF(lit_34));
  XCALL2(1,initF8469,YPint((P)13),LITREF(lit_35));
  XCALL2(1,initF8469,YPint((P)32),LITREF(lit_36));
  XCALL2(1,initF8469,YPint((P)64),LITREF(lit_37));
  XCALL2(1,initF8469,YPint((P)96),LITREF(lit_38));
  VARSET(YgooScolsSstrYascii_chars,ascii_charsF8468);
  lit_39 = YPPsym((P)"ascii->char");
  lit_40 = YPPlist(1,YPPsym((P)"n"));
  lit_41 = YPsb((P)"not a standard character's ASCII code: %=");
  T61 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_ascii_Gchar_12 = YPmet(FUNCODEREF(fun_ascii_Gchar_12),LITREF(lit_39),T61,ENVNUL,PNUL,sloc(87));
  T63 = VARREF_OR(YgooScolsSstrYascii_Gchar,YPfalse);
  T64 = fun_ascii_Gchar_12;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooScolsSstrYascii_Gchar,T62);
  lit_42 = YPPsym((P)"char->integer");
  lit_43 = YPPlist(1,YPPsym((P)"char"));
  T65 = YPsig(LITREF(lit_43),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Ginteger_13 = YPmet(FUNCODEREF(fun_char_Ginteger_13),LITREF(lit_42),T65,ENVNUL,PNUL,sloc(91));
  T67 = VARREF_OR(YgooScolsSstrYchar_Ginteger,YPfalse);
  T68 = fun_char_Ginteger_13;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooScolsSstrYchar_Ginteger,T66);
  lit_44 = YPPsym((P)"integer->char");
  lit_45 = YPPlist(1,YPPsym((P)"n"));
  T69 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_integer_Gchar_14 = YPmet(FUNCODEREF(fun_integer_Gchar_14),LITREF(lit_44),T69,ENVNUL,PNUL,sloc(94));
  T71 = VARREF_OR(YgooScolsSstrYinteger_Gchar,YPfalse);
  T72 = fun_integer_Gchar_14;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YgooScolsSstrYinteger_Gchar,T70);
  T99 = XCALL1(1,VARREF(YgooStypesYlen),VARREF(YgooScolsSstrYascii_chars));
  end259F8470 = T99;
  iF8471 = YPint((P)0);
  leastF8472 = YPfalse;
  greatestF8473 = YPfalse;
  LOOP_374: {
    P a374_0,a374_1,a374_2;
    T74 = XCALL2(1,VARREF(YgooSmathYE),iF8471,end259F8470);
    if (T74 != YPfalse) {
      T87 = XCALL2(1,VARREF(YgooSmathY_),greatestF8473,leastF8472);
      T86 = XCALL2(1,VARREF(YgooSmathYA),T87,YPint((P)1));
      T85 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T86);
      T84 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T85,YPfalse);
      vF8474 = T84;
      iF8475 = YPint((P)0);
      LOOP_375: {
        P a375_0;
        T76 = XCALL2(1,VARREF(YgooSmathYE),iF8475,end259F8470);
        if (T76 != YPfalse) {
          T77 = XCALL2(1,VARREF(Ylst),leastF8472,vF8474);
          T75 = T77;
        } else {
          T83 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF8475);
          cF8476 = T83;
          if (cF8476 != YPfalse) {
            T80 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF8476);
            T79 = XCALL2(1,VARREF(YgooSmathY_),T80,leastF8472);
            T78 = XCALL3(1,VARREF(YgooScolsScolxYelt_setter),iF8475,vF8474,T79);
          } else {
          }
          T82 = XCALL2(1,VARREF(YgooSmathYA),iF8475,YPint((P)1));
          a375_0 = T82;
          iF8475 = a375_0;
          goto LOOP_375;
          T75 = T81;
        }
      }
      T73 = T75;
    } else {
      T98 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooScolsSstrYascii_chars),iF8471);
      cF8477 = T98;
      if (cF8477 != YPfalse) {
        T95 = XCALL1(1,VARREF(YgooScolsSstrYchar_Ginteger),cF8477);
        nF8478 = T95;
        T90 = XCALL2(1,VARREF(YgooSmathYA),iF8471,YPint((P)1));
        if (leastF8472 != YPfalse) {
          T92 = XCALL2(1,VARREF(YgooSmagYmin),leastF8472,nF8478);
          T91 = T92;
        } else {
          T91 = nF8478;
        }
        if (greatestF8473 != YPfalse) {
          T94 = XCALL2(1,VARREF(YgooSmagYmax),greatestF8473,nF8478);
          T93 = T94;
        } else {
          T93 = nF8478;
        }
        a374_0 = T90;
        a374_1 = T91;
        a374_2 = T93;
        iF8471 = a374_0;
        leastF8472 = a374_1;
        greatestF8473 = a374_2;
        goto LOOP_374;
        T88 = T89;
      } else {
        T97 = XCALL2(1,VARREF(YgooSmathYA),iF8471,YPint((P)1));
        a374_0 = T97;
        a374_1 = leastF8472;
        a374_2 = greatestF8473;
        iF8471 = a374_0;
        leastF8472 = a374_1;
        greatestF8473 = a374_2;
        goto LOOP_374;
        T88 = T96;
      }
      T73 = T88;
    }
  }
  VARSET(YgooScolsSstrYnative_chars,T73);
  lit_46 = YPPlist(1,YPPsym((P)"char"));
  lit_47 = YPsb((P)"not a standard character: %=");
  T100 = YPsig(LITREF(lit_46),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_char_Gascii_15 = YPmet(FUNCODEREF(fun_char_Gascii_15),LITREF(lit_2),T100,ENVNUL,PNUL,sloc(115));
  T102 = VARREF_OR(YgooSmathYchar_Gascii,YPfalse);
  T103 = fun_char_Gascii_15;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSmathYchar_Gascii,T101);
  lit_48 = YPPlist(5,YPint((P)32),YPint((P)10),YPint((P)9),YPint((P)12),YPint((P)13));
  VARSET(YgooScolsSstrYascii_whitespaces,LITREF(lit_48));
  T126 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T125 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T126,YPfalse);
  charsF8479 = T125;
  T110 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)48));
  iF8480 = T110;
  xF8481 = YPint((P)0);
  LOOP_376: {
    P a376_0,a376_1;
    T106 = XCALL2(1,VARREF(YgooSmagYG),xF8481,YPint((P)9));
    T105 = XCALL1(1,VARREF(Ynot),T106);
    if (T105 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF8481,charsF8479,iF8480);
      T108 = XCALL2(1,VARREF(YgooSmathYA),iF8480,YPint((P)1));
      T109 = XCALL2(1,VARREF(YgooSmathYA),xF8481,YPint((P)1));
      a376_0 = T108;
      a376_1 = T109;
      iF8480 = a376_0;
      xF8481 = a376_1;
      goto LOOP_376;
      T104 = T107;
    } else {
      T104 = YPfalse;
    }
  }
  T117 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)97));
  iF8482 = T117;
  xF8483 = YPint((P)10);
  LOOP_377: {
    P a377_0,a377_1;
    T113 = XCALL2(1,VARREF(YgooSmagYG),xF8483,YPint((P)15));
    T112 = XCALL1(1,VARREF(Ynot),T113);
    if (T112 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF8483,charsF8479,iF8482);
      T115 = XCALL2(1,VARREF(YgooSmathYA),iF8482,YPint((P)1));
      T116 = XCALL2(1,VARREF(YgooSmathYA),xF8483,YPint((P)1));
      a377_0 = T115;
      a377_1 = T116;
      iF8482 = a377_0;
      xF8483 = a377_1;
      goto LOOP_377;
      T111 = T114;
    } else {
      T111 = YPfalse;
    }
  }
  T124 = XCALL1(1,VARREF(YgooSmathYchar_Gascii),YPchr((P)65));
  iF8484 = T124;
  xF8485 = YPint((P)10);
  LOOP_378: {
    P a378_0,a378_1;
    T120 = XCALL2(1,VARREF(YgooSmagYG),xF8485,YPint((P)15));
    T119 = XCALL1(1,VARREF(Ynot),T120);
    if (T119 != YPfalse) {
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),xF8485,charsF8479,iF8484);
      T122 = XCALL2(1,VARREF(YgooSmathYA),iF8484,YPint((P)1));
      T123 = XCALL2(1,VARREF(YgooSmathYA),xF8485,YPint((P)1));
      a378_0 = T122;
      a378_1 = T123;
      iF8484 = a378_0;
      xF8485 = a378_1;
      goto LOOP_378;
      T118 = T121;
    } else {
      T118 = YPfalse;
    }
  }
  VARSET(YgooScolsSstrYascii_digits,charsF8479);
  lit_49 = YPPsym((P)"to-digit-base");
  lit_50 = YPPlist(1,YPPsym((P)"digit"));
  T128 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T127 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),T128,Ynil);
  fun_to_digit_base_16 = YPmet(FUNCODEREF(fun_to_digit_base_16),LITREF(lit_49),T127,ENVNUL,PNUL,sloc(132));
  T130 = VARREF_OR(YgooScolsSstrYto_digit_base,YPfalse);
  T131 = fun_to_digit_base_16;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YgooScolsSstrYto_digit_base,T129);
  lit_51 = YPPsym((P)"digit-base?");
  lit_52 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"radix"));
  T133 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T132 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLchrG),VARREF(YLintG)),YPfalse,YPint((P)2),T133,Ynil);
  fun_digit_baseQ_17 = YPmet(FUNCODEREF(fun_digit_baseQ_17),LITREF(lit_51),T132,ENVNUL,PNUL,sloc(135));
  T135 = VARREF_OR(YgooScolsSstrYdigit_baseQ,YPfalse);
  T136 = fun_digit_baseQ_17;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
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
  T150 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T149 = fun_match_18 = YPmet(FUNCODEREF(fun_match_18),LITREF(lit_54),T150,ENVNUL,PNUL,sloc(148));
  T148 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T147 = fun_failXX_19 = YPmet(FUNCODEREF(fun_failXX_19),LITREF(lit_59),T148,ENVNUL,PNUL,sloc(154));
  T146 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T145 = fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T146,ENVNUL,PNUL,sloc(153));
  T144 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T143 = fun_match_digitX_21 = YPmet(FUNCODEREF(fun_match_digitX_21),LITREF(lit_56),T144,ENVNUL,PNUL,sloc(152));
  T142 = YPsig(LITREF(lit_60),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T141 = fun_looking_at_alphaQ_22 = YPmet(FUNCODEREF(fun_looking_at_alphaQ_22),LITREF(lit_62),T142,ENVNUL,PNUL,sloc(172));
  T140 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T139 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),T140,Ynil);
  T138 = fun_str_to_num_23 = YPmet(FUNCODEREF(fun_str_to_num_23),LITREF(lit_4),T139,ENVNUL,PNUL,sloc(139));
  T153 = VARREF_OR(YgooScolsSstrYstr_to_num,YPfalse);
  T154 = fun_str_to_num_23;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  T151 = VARSET(YgooScolsSstrYstr_to_num,T152);
  T137 = T151;
  return T137;
}

P YgooScolsSstrY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
DEFCREGS();
  lit_63 = YPsb((P)"0123456789abcdefghijklmnopqrstuvwxyz");
  VARSET(YgooScolsSstrYDdigit_to_char,LITREF(lit_63));
  DYNDEFSET(YgooScolsSstrYTprint_baseT,YPint((P)10));
  lit_64 = YPflo(FLOINT(0.0000009999999));
  VARSET(YgooScolsSstrYepsilon,LITREF(lit_64));
  lit_65 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_66 = YPsb((P)"0");
  T0 = YPsig(LITREF(lit_65),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_24 = YPmet(FUNCODEREF(fun_num_to_str_base_24),LITREF(lit_6),T0,ENVNUL,PNUL,sloc(197));
  T2 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T3 = fun_num_to_str_base_24;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooScolsSstrYnum_to_str_base,T1);
  lit_67 = YPPlist(1,YPPsym((P)"num"));
  T4 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_25 = YPmet(FUNCODEREF(fun_num_to_str_25),LITREF(lit_8),T4,ENVNUL,PNUL,sloc(211));
  T6 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T7 = fun_num_to_str_25;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSmathYnum_to_str,T5);
  lit_68 = YPPlist(2,YPPsym((P)"num"),YPPsym((P)"radix"));
  lit_69 = YPsb((P)"");
  lit_70 = YPsb((P)".0");
  lit_71 = YPsb((P)"0.");
  lit_72 = YPsb((P)".");
  lit_73 = YPsb((P)"0.0000000000000");
  lit_74 = YPsb((P)"-");
  T8 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLfloG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_num_to_str_base_26 = YPmet(FUNCODEREF(fun_num_to_str_base_26),LITREF(lit_6),T8,ENVNUL,PNUL,sloc(214));
  T10 = VARREF_OR(YgooScolsSstrYnum_to_str_base,YPfalse);
  T11 = fun_num_to_str_base_26;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooScolsSstrYnum_to_str_base,T9);
  lit_75 = YPPlist(1,YPPsym((P)"num"));
  T12 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_num_to_str_27 = YPmet(FUNCODEREF(fun_num_to_str_27),LITREF(lit_8),T12,ENVNUL,PNUL,sloc(236));
  T14 = VARREF_OR(YgooSmathYnum_to_str,YPfalse);
  T15 = fun_num_to_str_27;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSmathYnum_to_str,T13);
  lit_76 = YPPsym((P)"as");
  lit_77 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T17 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLstrG));
  T16 = YPsig(LITREF(lit_77),YPPlist(2,T17,VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_as_28 = YPmet(FUNCODEREF(fun_as_28),LITREF(lit_76),T16,ENVNUL,PNUL,sloc(241));
  T19 = VARREF_OR(YgooStypesYas,YPfalse);
  T20 = fun_as_28;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooStypesYas,T18);
  lit_78 = YPPlist(2,YPPsym((P)"_"),YPPsym((P)"s"));
  T22 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLsymG));
  T21 = YPsig(LITREF(lit_78),YPPlist(2,T22,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLsymG),Ynil);
  fun_as_29 = YPmet(FUNCODEREF(fun_as_29),LITREF(lit_76),T21,ENVNUL,PNUL,sloc(244));
  T24 = VARREF_OR(YgooStypesYas,YPfalse);
  T25 = fun_as_29;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooStypesYas,T23);
  lit_79 = YPPsym((P)"<");
  lit_80 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T26 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLsymG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_L_30 = YPmet(FUNCODEREF(fun_L_30),LITREF(lit_79),T26,ENVNUL,PNUL,sloc(252));
  T28 = VARREF_OR(YgooSmagYL,YPfalse);
  T29 = fun_L_30;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSmagYL,T27);
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T31 = fun_to_str_31 = YPmet(FUNCODEREF(fun_to_str_31),LITREF(lit_27),T32,ENVNUL,PNUL,sloc(255));
  T35 = VARREF_OR(YgooSmathYto_str,YPfalse);
  T36 = fun_to_str_31;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  T33 = VARSET(YgooSmathYto_str,T34);
  T30 = T33;
  return T30;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
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
  {&module_info_gooSfun},
  {&module_info_gooSclass},
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
  {"elt!", &module_info_gooScolsScolx, NULL},
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
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
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
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
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
  {"assq", &module_info_gooScolsSlst, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
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
  {"line-pair", &module_info_gooScolsSlst, NULL},
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
  {"<vec>", &module_info_gooScolsSvec, NULL},
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
  {"elt-setter", &module_info_gooScolsScolx, NULL},
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
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
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
  {"line-of", &module_info_gooScolsSlst, NULL},
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
  {"fill!", &module_info_gooScolsScolx, NULL},
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
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
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
  {"len-setter", &module_info_gooScolsScolx, NULL},
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
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
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
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
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
  {"del!", &module_info_gooScolsScolx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
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
  {"ascii-whitespaces", CVAR, &YgooScolsSstrYascii_whitespaces},
  {"ascii-limit", CVAR, &YgooScolsSstrYascii_limit},
  {"$digit-to-char", CVAR, &YgooScolsSstrYDdigit_to_char},
  {"num-to-str-base", CVAR, &YgooScolsSstrYnum_to_str_base},
  {"*print-base*", DVAR, &YgooScolsSstrYTprint_baseT},
  {"integer->char", CVAR, &YgooScolsSstrYinteger_Gchar},
  {"---main-0---", PVAR, NULL},
  {"str-to-num", CVAR, &YgooScolsSstrYstr_to_num},
  {"ascii-digits", CVAR, &YgooScolsSstrYascii_digits},
  {"native-chars", CVAR, &YgooScolsSstrYnative_chars},
  {"char->integer", CVAR, &YgooScolsSstrYchar_Ginteger},
  {"str", CVAR, &YgooScolsSstrYstr},
  {"epsilon", CVAR, &YgooScolsSstrYepsilon},
  {"---main-1---", PVAR, NULL},
  {"to-digit-base", CVAR, &YgooScolsSstrYto_digit_base},
  {"digit-base?", CVAR, &YgooScolsSstrYdigit_baseQ},
  {"ascii->char", CVAR, &YgooScolsSstrYascii_Gchar},
  {"ascii-chars", CVAR, &YgooScolsSstrYascii_chars},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"ascii-whitespaces", NULL},
  {"num-to-str", NULL},
  {"ascii-limit", NULL},
  {"num-to-str-base", NULL},
  {"*print-base*", NULL},
  {"str-to-num", NULL},
  {"char->ascii", NULL},
  {"str", NULL},
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
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
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
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSlst();
  load_module_gooScolsSvec();

  (P)YgooScolsSstrY___main_0___();
  (P)YgooScolsSstrY___main_1___();

}

/* END OF GENERATED CODE. */
