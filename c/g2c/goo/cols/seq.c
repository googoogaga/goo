/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seq");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seq */

EXT(Yclone,"goo/boot","clone");
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
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
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
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
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
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
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
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
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
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
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
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_41);
DEFLIT(lit_92);
DEFLIT(lit_65);
DEFLIT(lit_83);
DEFLIT(lit_12);
DEFLIT(lit_108);
DEFLIT(lit_121);
DEFLIT(lit_2);
DEFLIT(lit_118);
DEFLIT(lit_42);
DEFLIT(lit_18);
DEFLIT(lit_61);
DEFLIT(lit_25);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_26);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_79);
DEFLIT(lit_6);
DEFLIT(lit_60);
DEFLIT(lit_85);
DEFLIT(lit_110);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_96);
DEFLIT(lit_30);
DEFLIT(lit_46);
DEFLIT(lit_59);
DEFLIT(lit_31);
DEFLIT(lit_97);
DEFLIT(lit_74);
DEFLIT(lit_95);
DEFLIT(lit_67);
DEFLIT(lit_70);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_55);
DEFLIT(lit_66);
DEFLIT(lit_128);
DEFLIT(lit_105);
DEFLIT(lit_14);
DEFLIT(lit_116);
DEFLIT(lit_37);
DEFLIT(lit_94);
DEFLIT(lit_122);
DEFLIT(lit_125);
DEFLIT(lit_119);
DEFLIT(lit_24);
DEFLIT(lit_90);
DEFLIT(lit_33);
DEFLIT(lit_93);
DEFLIT(lit_112);
DEFLIT(lit_4);
DEFLIT(lit_39);
DEFLIT(lit_123);
DEFLIT(lit_71);
DEFLIT(lit_127);
DEFLIT(lit_109);
DEFLIT(lit_53);
DEFLIT(lit_27);
DEFLIT(lit_11);
DEFLIT(lit_72);
DEFLIT(lit_68);
DEFLIT(lit_20);
DEFLIT(lit_75);
DEFLIT(lit_0);
DEFLIT(lit_19);
DEFLIT(lit_47);
DEFLIT(lit_63);
DEFLIT(lit_113);
DEFLIT(lit_9);
DEFLIT(lit_99);
DEFLIT(lit_62);
DEFLIT(lit_36);
DEFLIT(lit_124);
DEFLIT(lit_82);
DEFLIT(lit_107);
DEFLIT(lit_98);
DEFLIT(lit_28);
DEFLIT(lit_29);
DEFLIT(lit_44);
DEFLIT(lit_45);
DEFLIT(lit_80);
DEFLIT(lit_50);
DEFLIT(lit_21);
DEFLIT(lit_126);
DEFLIT(lit_86);
DEFLIT(lit_54);
DEFLIT(lit_32);
DEFLIT(lit_3);
DEFLIT(lit_34);
DEFLIT(lit_58);
DEFLIT(lit_100);
DEFLIT(lit_40);
DEFLIT(lit_129);
DEFLIT(lit_78);
DEFLIT(lit_52);
DEFLIT(lit_117);
DEFLIT(lit_101);
DEFLIT(lit_49);
DEFLIT(lit_103);
DEFLIT(lit_1);
DEFLIT(lit_64);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_51);
DEFLIT(lit_115);
DEFLIT(lit_35);
DEFLIT(lit_89);
DEFLIT(lit_43);
DEFLIT(lit_7);
DEFLIT(lit_88);
DEFLIT(lit_130);
DEFLIT(lit_87);
DEFLIT(lit_8);
DEFLIT(lit_13);
DEFLIT(lit_73);
DEFLIT(lit_76);
DEFLIT(lit_77);
DEFLIT(lit_120);
DEFLIT(lit_10);
DEFLIT(lit_91);
DEFLIT(lit_104);
DEFLIT(lit_84);
DEFLIT(lit_48);
DEFLIT(lit_114);
DEFLIT(lit_22);
DEFLIT(lit_81);
DEFLIT(lit_111);
DEFLIT(lit_102);

/* FUNCTIONS: */

FUNFOR(YgooScolsSseqYOtQ);
LOCFOR(fun_key_type_1);
LOCFOR(fun_1st_2);
LOCFOR(fun_2nd_3);
LOCFOR(fun_3rd_4);
LOCFOR(fun_map_5);
LOCFOR(fun_map_keyed_6);
LOCFOR(fun_do2_7);
LOCFOR(fun_do3_8);
LOCFOR(fun_map2_9);
LOCFOR(fun_any2Q_10);
LOCFOR(fun_all2Q_11);
LOCFOR(fun_E_12);
LOCFOR(fun_last_13);
LOCFOR(fun_14);
LOCFOR(fun_pos_15);
LOCFOR(fun_finds_16);
LOCFOR(fun_rev_17);
LOCFOR(fun_cat_18);
LOCFOR(fun_cat2_19);
LOCFOR(fun_sub_20);
LOCFOR(fun_subT_21);
LOCFOR(fun_push_22);
LOCFOR(fun_pop_23);
LOCFOR(fun_pick_24);
LOCFOR(fun_25);
LOCFOR(fun_reject_26);
LOCFOR(fun_del_27);
LOCFOR(fun_28);
LOCFOR(fun_del_vals_29);
LOCFOR(fun_30);
LOCFOR(fun_del_dups_31);
LOCFOR(fun_ins_32);
LOCFOR(fun_elts_33);
LOCFOR(fun_sort_34);
LOCFOR(fun_sort_by_35);
LOCFOR(fun_keys_36);
FUNFOR(YgooScolsSseqYrange_check);
FUNFOR(YgooScolsSseqYrange_checkQ);
LOCFOR(fun_add_39);
LOCFOR(fun_add_new_40);
LOCFOR(fun_41);
LOCFOR(fun_vals_to_str_42);
LOCFOR(fun_do_key_vals_43);
LOCFOR(fun_44);
LOCFOR(fun_col_45);
LOCFOR(fun_suffixQ_46);
LOCFOR(fun_prefixQ_47);
LOCFOR(fun_repeat_48);
LOCFOR(fun_split_49);
LOCFOR(fun_50);
LOCFOR(fun_join_51);
extern P YgooScolsSseqY___main_0___ ();
extern P YgooScolsSseqY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSseqYOtQ) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_type_1) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_1st_2) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_4) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_5) {
  P f_,c_;
  P eF1827;
  P resF1826;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF1826 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1827 = T2;
  for (;;) {
    P a68_0,a68_1;
  loop68:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1827);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYrevX),resF1826);
      T6 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T7);
      T4 = T6;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),eF1827);
      T10 = CALL1(1,f_,T11);
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),resF1826,T10);
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1827);
      a68_0 = T9;
      a68_1 = T12;
      resF1826 = a68_0;
      eF1827 = a68_1;
      goto loop68;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_map_keyed_6) {
  P f_,c_;
  P eF1829;
  P resF1828;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
  resF1828 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  eF1829 = T2;
  for (;;) {
    P a69_0,a69_1;
  loop69:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1829);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYrevX),resF1828);
      T6 = CALL2(1,VARREF(YgooScolsScolYcol_res),c_,T7);
      T4 = T6;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow_key),eF1829);
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),eF1829);
      T10 = CALL2(0,f_,T11,T12);
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),resF1828,T10);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1829);
      a69_0 = T9;
      a69_1 = T13;
      resF1828 = a69_0;
      eF1829 = a69_1;
      goto loop69;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do2_7) {
  P f_,x_,y_;
  P tmpF1832;
  P eyF1831;
  P exF1830;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1830 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF1831 = T3;
  for (;;) {
    P a70_0,a70_1;
  loop70:
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1830);
    tmpF1832 = T8;
    if (tmpF1832 != YPfalse) {
      T9 = tmpF1832;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1831);
      T9 = T10;
    }
    T7 = T9;
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),exF1830);
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1831);
      CALL2(0,f_,T11,T12);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1830);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1831);
      a70_0 = T14;
      a70_1 = T15;
      exF1830 = a70_0;
      eyF1831 = a70_1;
      goto loop70;
      T5 = T13;
    } else {
      T5 = YPfalse;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_8) {
  P f_,x_,y_,z_;
  P tmpF1837;
  P tmpF1836;
  P ezF1835;
  P eyF1834;
  P exF1833;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1833 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF1834 = T3;
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  ezF1835 = T4;
  for (;;) {
    P a71_0,a71_1,a71_2;
  loop71:
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1833);
    tmpF1836 = T9;
    if (tmpF1836 != YPfalse) {
      T10 = tmpF1836;
    } else {
      T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1834);
      tmpF1837 = T12;
      if (tmpF1837 != YPfalse) {
        T13 = tmpF1837;
      } else {
        T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),ezF1835);
        T13 = T14;
      }
      T11 = T13;
      T10 = T11;
    }
    T8 = T10;
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),exF1833);
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1834);
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),ezF1835);
      CALL3(0,f_,T15,T16,T17);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1833);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1834);
      T21 = CALL1(1,VARREF(YgooScolsScolYnxt),ezF1835);
      a71_0 = T19;
      a71_1 = T20;
      a71_2 = T21;
      exF1833 = a71_0;
      eyF1834 = a71_1;
      ezF1835 = a71_2;
      goto loop71;
      T6 = T18;
    } else {
      T6 = YPfalse;
    }
    break;
  }
  T5 = T6;
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_9) {
  P f_,x_,y_;
  P tmpF1841;
  P eyF1840;
  P exF1839;
  P resF1838;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  resF1838 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1839 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF1840 = T3;
  for (;;) {
    P a72_0,a72_1,a72_2;
  loop72:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1839);
    tmpF1841 = T7;
    if (tmpF1841 != YPfalse) {
      T8 = tmpF1841;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1840);
      T8 = T9;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),resF1838);
      T10 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T11);
      T5 = T10;
    } else {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),exF1839);
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1840);
      T14 = CALL2(1,f_,T15,T16);
      T13 = CALL2(1,VARREF(YgooScolsScolYadd),resF1838,T14);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1839);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1840);
      a72_0 = T13;
      a72_1 = T17;
      a72_2 = T18;
      resF1838 = a72_0;
      exF1839 = a72_1;
      eyF1840 = a72_2;
      goto loop72;
      T5 = T12;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_any2Q_10) {
  P test_,x_,y_;
  P tmpF1845;
  P tmpF1844;
  P eyF1843;
  P exF1842;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1842 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF1843 = T3;
  for (;;) {
    P a73_0,a73_1;
  loop73:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1842);
    tmpF1844 = T7;
    if (tmpF1844 != YPfalse) {
      T8 = tmpF1844;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1843);
      T8 = T9;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T5 = YPfalse;
    } else {
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),exF1842);
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1843);
      T12 = CALL2(0,test_,T13,T14);
      T11 = CALL1(1,VARREF(YgooSmathYas_log),T12);
      tmpF1845 = T11;
      if (tmpF1845 != YPfalse) {
        T15 = tmpF1845;
      } else {
        T17 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1842);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1843);
        a73_0 = T17;
        a73_1 = T18;
        exF1842 = a73_0;
        eyF1843 = a73_1;
        goto loop73;
        T15 = T16;
      }
      T10 = T15;
      T5 = T10;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_all2Q_11) {
  P test_,x_,y_;
  P tmpF1850;
  P tmpF1849;
  P tmpF1848;
  P eyF1847;
  P exF1846;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1846 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  eyF1847 = T3;
  for (;;) {
    P a74_0,a74_1;
  loop74:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1846);
    tmpF1848 = T6;
    if (tmpF1848 != YPfalse) {
      T7 = tmpF1848;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1847);
      tmpF1849 = T9;
      if (tmpF1849 != YPfalse) {
        T10 = tmpF1849;
      } else {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),exF1846);
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1847);
        T12 = CALL2(0,test_,T13,T14);
        tmpF1850 = T12;
        if (tmpF1850 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1846);
          T18 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1847);
          a74_0 = T17;
          a74_1 = T18;
          exF1846 = a74_0;
          eyF1847 = a74_1;
          goto loop74;
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T11 = T15;
        T10 = T11;
      }
      T8 = T10;
      T7 = T8;
    }
    T5 = T7;
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_E_12) {
  P c1_,c2_;
  P tmpF1853;
  P e2F1852;
  P e1F1851;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  e1F1851 = T2;
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  e2F1852 = T3;
  for (;;) {
    P a75_0,a75_1;
  loop75:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1F1851);
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),e2F1852);
      T5 = T7;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),e1F1851);
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),e2F1852);
      T9 = CALL2(1,VARREF(YgooSmathYE),T10,T11);
      tmpF1853 = T9;
      if (tmpF1853 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnxt),e1F1851);
        T15 = CALL1(1,VARREF(YgooScolsScolYnxt),e2F1852);
        a75_0 = T14;
        a75_1 = T15;
        e1F1851 = a75_0;
        e2F1852 = a75_1;
        goto loop75;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T8 = T12;
      T5 = T8;
    }
    break;
  }
  T4 = T5;
  T1 = T4;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_13) {
  P x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(x_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P a_;
  P T0;
LINK_STACK();
  ARG(a_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pos_15) {
  P x_,v_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  T1 = FUNFAB(fun_14,1,v_);
  T0 = CALL3(1,VARREF(YgooScolsScolYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finds_16) {
  P x_,y_;
  P tmpF1857;
  P yiF1856;
  P xiF1855;
  P xsiF1854;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  xsiF1854 = YPint((P)0);
  for (;;) {
    P a76_0;
  loop76:
    T7 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T8 = CALL1(1,VARREF(YgooStypesYlen),y_);
    T6 = CALL2(1,VARREF(YgooSmathY_),T7,T8);
    T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
    T4 = CALL2(1,VARREF(YgooSmagYL),xsiF1854,T5);
    if (T4 != YPfalse) {
      xiF1855 = xsiF1854;
      yiF1856 = YPint((P)0);
      for (;;) {
        P a77_0,a77_1;
      loop77:
        T14 = CALL1(1,VARREF(YgooStypesYlen),x_);
        T13 = CALL2(1,VARREF(YgooSmagYL),xiF1855,T14);
        tmpF1857 = T13;
        if (tmpF1857 != YPfalse) {
          T17 = CALL1(1,VARREF(YgooStypesYlen),y_);
          T16 = CALL2(1,VARREF(YgooSmagYL),yiF1856,T17);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T12 = T15;
        if (T12 != YPfalse) {
          T20 = CALL2(1,VARREF(YgooSmacrosYelt),x_,xiF1855);
          T21 = CALL2(1,VARREF(YgooSmacrosYelt),y_,yiF1856);
          T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,T21);
          if (T19 != YPfalse) {
            T23 = CALL2(1,VARREF(YgooSmathYA),xiF1855,YPint((P)1));
            T24 = CALL2(1,VARREF(YgooSmathYA),yiF1856,YPint((P)1));
            a77_0 = T23;
            a77_1 = T24;
            xiF1855 = a77_0;
            yiF1856 = a77_1;
            goto loop77;
            T18 = T22;
          } else {
            T26 = CALL2(1,VARREF(YgooSmathYA),xsiF1854,YPint((P)1));
            a76_0 = T26;
            xsiF1854 = a76_0;
            goto loop76;
            T18 = T25;
          }
          T11 = T18;
        } else {
          T11 = xsiF1854;
        }
        break;
      }
      T10 = T11;
      T9 = T10;
      T3 = T9;
    } else {
      T3 = YPfalse;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rev_17) {
  P x_;
  P eF1859;
  P seqF1858;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  seqF1858 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1859 = T2;
  for (;;) {
    P a78_0,a78_1;
  loop78:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1859);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,seqF1858);
      T4 = T6;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF1859);
      T8 = CALL2(1,VARREF(YgooScolsScolYadd),seqF1858,T9);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1859);
      a78_0 = T8;
      a78_1 = T10;
      seqF1858 = a78_0;
      eF1859 = a78_1;
      goto loop78;
      T4 = T7;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_18) {
  P x_,ss_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooScolsSseqYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat2_19) {
  P x_,y_;
  P eyF1863;
  P seqF1862;
  P exF1861;
  P seqF1860;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  seqF1860 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  exF1861 = T2;
  for (;;) {
    P a79_0,a79_1;
  loop79:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),exF1861);
    if (T5 != YPfalse) {
      seqF1862 = seqF1860;
      T7 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
      eyF1863 = T7;
      for (;;) {
        P a80_0,a80_1;
      loop80:
        T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),eyF1863);
        if (T10 != YPfalse) {
          T12 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF1862);
          T11 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T12);
          T9 = T11;
        } else {
          T15 = CALL1(1,VARREF(YgooScolsScolYnow),eyF1863);
          T14 = CALL2(1,VARREF(YgooScolsScolYadd),seqF1862,T15);
          T16 = CALL1(1,VARREF(YgooScolsScolYnxt),eyF1863);
          a80_0 = T14;
          a80_1 = T16;
          seqF1862 = a80_0;
          eyF1863 = a80_1;
          goto loop80;
          T9 = T13;
        }
        break;
      }
      T8 = T9;
      T6 = T8;
      T4 = T6;
    } else {
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),exF1861);
      T18 = CALL2(1,VARREF(YgooScolsScolYadd),seqF1860,T19);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),exF1861);
      a79_0 = T18;
      a79_1 = T20;
      seqF1860 = a79_0;
      exF1861 = a79_1;
      goto loop79;
      T4 = T17;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_20) {
  P x_,from_,below_;
  P eF1866;
  P iF1865;
  P seqF1864;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
  seqF1864 = Ynil;
  check_type(YPint((P)0),VARREF(YLintG));
  iF1865 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1866 = T2;
  for (;;) {
    P a81_0,a81_1,a81_2;
  loop81:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1866);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF1864);
      T6 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T7);
      T4 = T6;
    } else {
      T11 = CALL2(1,VARREF(YgooSmagYGE),iF1865,from_);
      if (T11 != YPfalse) {
        T12 = CALL2(1,VARREF(YgooSmagYL),iF1865,below_);
        T10 = T12;
      } else {
        T10 = YPfalse;
      }
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),eF1866);
        T13 = CALL2(1,VARREF(YgooScolsScolYadd),seqF1864,T14);
        T9 = T13;
      } else {
        T9 = seqF1864;
      }
      T15 = CALL2(1,VARREF(YgooSmathYA),iF1865,YPint((P)1));
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1866);
      a81_0 = T9;
      a81_1 = T15;
      a81_2 = T16;
      seqF1864 = a81_0;
      iF1865 = a81_1;
      eF1866 = a81_2;
      goto loop81;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subT_21) {
  P x_,from_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_22) {
  P l_,x_;
  P T0;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),l_,x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_23) {
  P l_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(l_, 0);
  T2 = CALL1(1,VARREF(YgooStypesYlen),l_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),l_,YPint((P)1),T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),l_,YPint((P)0));
  T0 = CALL2(1,VARREF(Ytup),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pick_24) {
  P test_,x_;
  P vF1869;
  P eF1868;
  P seqF1867;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  seqF1867 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1868 = T2;
  for (;;) {
    P a82_0,a82_1;
  loop82:
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1868);
    if (T5 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYrevX),seqF1867);
      T6 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T7);
      T4 = T6;
    } else {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),eF1868);
      vF1869 = T9;
      T12 = CALL1(1,test_,vF1869);
      if (T12 != YPfalse) {
        T13 = CALL2(1,VARREF(YgooScolsScolYadd),seqF1867,vF1869);
        T11 = T13;
      } else {
        T11 = seqF1867;
      }
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1868);
      a82_0 = T11;
      a82_1 = T14;
      seqF1867 = a82_0;
      eF1868 = a82_1;
      goto loop82;
      T8 = T10;
      T4 = T8;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_25) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(0,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reject_26) {
  P test_,x_;
  P T0,T1;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_25,1,test_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_27) {
  P x_,key_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,YPint((P)0),key_);
  T3 = CALL2(1,VARREF(YgooSmathYA),key_,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,T3,T4);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_28) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_vals_29) {
  P s_,x_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
  T1 = FUNFAB(fun_28,1,x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_30) {
  P s_,e_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),s_,e_);
  if (T1 != YPfalse) {
    T0 = s_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),e_,s_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_dups_31) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = fun_30;
  T2 = CALL3(1,VARREF(YgooScolsScolYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ins_32) {
  P x_,v_,before_;
  P eF1872;
  P iF1871;
  P rF1870;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
  rF1870 = Ynil;
  iF1871 = YPint((P)0);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1872 = T2;
  for (;;) {
    P a83_0,a83_1,a83_2;
  loop83:
    T5 = CALL2(1,VARREF(YgooSmathYE),iF1871,before_);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),v_,rF1870);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF1871,YPint((P)1));
      a83_0 = T7;
      a83_1 = T8;
      a83_2 = eF1872;
      rF1870 = a83_0;
      iF1871 = a83_1;
      eF1872 = a83_2;
      goto loop83;
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1872);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSmacrosYrevX),rF1870);
        T11 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T12);
        T9 = T11;
      } else {
        T15 = CALL1(1,VARREF(YgooScolsScolYnow),eF1872);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,rF1870);
        T16 = CALL2(1,VARREF(YgooSmathYA),iF1871,YPint((P)1));
        T17 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1872);
        a83_0 = T14;
        a83_1 = T16;
        a83_2 = T17;
        rF1870 = a83_0;
        iF1871 = a83_1;
        eF1872 = a83_2;
        goto loop83;
        T9 = T13;
      }
      T4 = T9;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_elts_33) {
  P x_,keys_;
  P keyF1877;
  P keysF1876;
  P iF1875;
  P eF1874;
  P rF1873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
  rF1873 = Ynil;
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  eF1874 = T2;
  iF1875 = YPint((P)0);
  T4 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  keysF1876 = T3;
  for (;;) {
    P a84_0,a84_1,a84_2,a84_3;
  loop84:
    T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),keysF1876);
    if (T7 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooSmacrosYrevX),rF1873);
      T8 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T9);
      T6 = T8;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1874);
      if (T11 != YPfalse) {
        T12 = CALL2(1,VARREF(Yrange_error),x_,iF1875);
        T10 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T15 = CALL1(1,VARREF(YgooScolsScolYnow),keysF1876);
          keyF1877 = T15;
          T17 = CALL2(1,VARREF(YgooSmathYE),iF1875,keyF1877);
          if (T17 != YPfalse) {
            T20 = CALL1(1,VARREF(YgooScolsScolYnow),eF1874);
            T19 = CALL2(1,VARREF(YgooSmacrosYpair),T20,rF1873);
            T21 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1874);
            T22 = CALL2(1,VARREF(YgooSmathYA),iF1875,YPint((P)1));
            T23 = CALL1(1,VARREF(YgooScolsScolYnxt),keysF1876);
            a84_0 = T19;
            a84_1 = T21;
            a84_2 = T22;
            a84_3 = T23;
            rF1873 = a84_0;
            eF1874 = a84_1;
            iF1875 = a84_2;
            keysF1876 = a84_3;
            goto loop84;
            T16 = T18;
          } else {
            T25 = CALL2(1,VARREF(YisaQ),keyF1877,VARREF(YLintG));
            if (T25 != YPfalse) {
              T27 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1874);
              T28 = CALL2(1,VARREF(YgooSmathYA),iF1875,YPint((P)1));
              a84_0 = rF1873;
              a84_1 = T27;
              a84_2 = T28;
              a84_3 = keysF1876;
              rF1873 = a84_0;
              eF1874 = a84_1;
              iF1875 = a84_2;
              keysF1876 = a84_3;
              goto loop84;
              T24 = T26;
            } else {
              if (YPtrue != YPfalse) {
                T30 = CALL2(1,VARREF(Yrange_error),x_,keyF1877);
                T29 = T30;
              } else {
                T29 = YPfalse;
              }
              T24 = T29;
            }
            T16 = T24;
          }
          T14 = T16;
          T13 = T14;
        } else {
          T13 = YPfalse;
        }
        T10 = T13;
      }
      T6 = T10;
    }
    break;
  }
  T5 = T6;
  T1 = T5;
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_34) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_by),x_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_by_35) {
  P a_,test_;
  P T0,T1;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),a_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T1,test_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_36) {
  P d_;
  P T0,T1;
LINK_STACK();
  ARG(d_, 0);
  T1 = CALL1(1,VARREF(YgooStypesYlen),d_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_check) {
  P x_,i_;
  P tmpF1878;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T2 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF1878 = T2;
  if (tmpF1878 != YPfalse) {
    T3 = tmpF1878;
  } else {
    T5 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T4 = CALL2(1,VARREF(YgooSmagYGE),i_,T5);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Yrange_error),x_,i_);
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_checkQ) {
  P x_,i_;
  P tmpF1879;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  tmpF1879 = T1;
  if (tmpF1879 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
    T3 = CALL2(1,VARREF(YgooSmagYL),i_,T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_39) {
  P x_,e_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(e_, 1);
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,e_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_new_40) {
  P c_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_41) {
  P s_,e_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_119);
  } else {
    T1 = LITREF(lit_120);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_42) {
  P s_;
  P T0,T1;
LINK_STACK();
  ARG(s_, 0);
  T1 = fun_41;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_119),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_do_key_vals_43) {
  P fn_,key_vals_;
  P valF1884;
  P tmpF1883;
  P nxtsF1882;
  P keyF1881;
  P eF1880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  eF1880 = T2;
  for (;;) {
    P a85_0;
  loop85:
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1880);
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),eF1880);
      keyF1881 = T8;
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1880);
      nxtsF1882 = T10;
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),eF1880);
      T13 = CALL1(1,VARREF(Ynot),T14);
      tmpF1883 = T13;
      if (tmpF1883 != YPfalse) {
        T16 = CALL1(1,VARREF(YgooScolsScolYnow),eF1880);
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T12 = T15;
      valF1884 = T12;
      CALL2(1,fn_,keyF1881,valF1884);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),eF1880);
      a85_0 = T18;
      eF1880 = a85_0;
      goto loop85;
      T11 = T17;
      T9 = T11;
      T7 = T9;
      T4 = T7;
    } else {
      T4 = YPfalse;
    }
    break;
  }
  T3 = T4;
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P key_,val_;
  P T0;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
  T0 = CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_45) {
  P t_,key_vals_;
  P xF1885;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF1885 = T1;
  T5 = FUNFAB(fun_44,1,xF1885);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T5,key_vals_);
  T0 = xF1885;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_suffixQ_46) {
  P s_,end_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(s_, 0);
  ARG(end_, 1);
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),end_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,T4);
  T5 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T2,T5);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,end_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_prefixQ_47) {
  P s_,begin_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  ARG(begin_, 1);
  T2 = CALL1(1,VARREF(YgooStypesYlen),begin_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),T2);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,begin_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_repeat_48) {
  P s_,n_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(s_, 0);
  ARG(n_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYLE),n_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yclass_of),s_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYrepeat),s_,T6);
    T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),s_,T5);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_split_49) {
  P s_,sep_;
  P matchF1886;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF1886 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),matchF1886,YPfalse);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),s_);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF1886);
    T9 = CALL2(1,VARREF(YgooSmathYA),matchF1886,YPint((P)1));
    T10 = CALL1(1,VARREF(YgooStypesYlen),s_);
    T8 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T9,T10);
    T7 = CALL2(1,VARREF(YgooScolsSseqYsplit),T8,sep_);
    T5 = CALL2(1,VARREF(YgooSmacrosYpair),T6,T7);
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_50) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),x_,FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_join_51) {
  P ss_,sep_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(ss_, 0);
  ARG(sep_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yclass_of),sep_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_50,1,sep_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),ss_,YPint((P)0));
    T8 = CALL1(1,VARREF(YgooStypesYlen),ss_);
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),ss_,YPint((P)1),T8);
    T4 = CALL3(1,VARREF(YgooScolsScolYfold),T5,T6,T7);
    T0 = T4;
  }
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSseqY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59;
DEFCREGS();
  lit_0 = YPPsym((P)"@t?");
  lit_1 = YPPlist(1,YPPsym((P)"x"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YLunionG),Ynil);
  YgooScolsSseqYOtQ = YPmet(FUNCODEREF(YgooScolsSseqYOtQ),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(9));
  T1 = YgooScolsSseqYOtQ;
  VARSET(YgooScolsSseqYOtQ,T1);
  lit_2 = YPPsym((P)"1st");
  lit_3 = YPPlist(1,YPPsym((P)"x"));
  T3 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY1st,T2);
  lit_4 = YPPsym((P)"2nd");
  lit_5 = YPPlist(1,YPPsym((P)"x"));
  T5 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosY2nd,T4);
  lit_6 = YPPsym((P)"3rd");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqY3rd,T6);
  lit_8 = YPPsym((P)"last");
  lit_9 = YPPlist(1,YPPsym((P)"x"));
  T9 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_8),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYlast,T8);
  lit_10 = YPPsym((P)"pos");
  lit_11 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T12 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T11 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T12,Ynil);
  T10 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T11,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpos,T10);
  lit_12 = YPPsym((P)"finds");
  lit_13 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T15 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T14 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T15,Ynil);
  T13 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_12),T14,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYfinds,T13);
  lit_14 = YPPsym((P)"do2");
  lit_15 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T17 = YPsig(LITREF(lit_15),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T16 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T17,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo2,T16);
  lit_16 = YPPsym((P)"do3");
  lit_17 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T19 = YPsig(LITREF(lit_17),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T18 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_16),T19,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo3,T18);
  lit_18 = YPPsym((P)"map2");
  lit_19 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T21 = YPsig(LITREF(lit_19),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T20 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T21,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYmap2,T20);
  lit_20 = YPPsym((P)"any2?");
  lit_21 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T23 = YPsig(LITREF(lit_21),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T22 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T23,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYany2Q,T22);
  lit_22 = YPPsym((P)"all2?");
  lit_23 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T25 = YPsig(LITREF(lit_23),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  T24 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T25,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooStypesYall2Q,T24);
  lit_24 = YPPsym((P)"rev");
  lit_25 = YPPlist(1,YPPsym((P)"x"));
  T27 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T26 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T27,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrev,T26);
  lit_26 = YPPsym((P)"cat");
  lit_27 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"more"));
  T29 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  T28 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T29,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSmacrosYcat,T28);
  lit_28 = YPPsym((P)"cat2");
  lit_29 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T31 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T30 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_28),T31,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYcat2,T30);
  lit_30 = YPPsym((P)"push");
  lit_31 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T33 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T32 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_30),T33,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpush,T32);
  lit_32 = YPPsym((P)"pop");
  lit_33 = YPPlist(1,YPPsym((P)"l"));
  T36 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T35 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T36,Ynil);
  T34 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T35,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpop,T34);
  lit_34 = YPPsym((P)"sub");
  lit_35 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T38 = YPsig(LITREF(lit_35),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_34),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsub,T37);
  lit_36 = YPPsym((P)"sub*");
  lit_37 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T40 = YPsig(LITREF(lit_37),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T39 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_36),T40,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsubT,T39);
  lit_38 = YPPsym((P)"ins");
  lit_39 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"e"),YPPsym((P)"before"));
  T42 = YPsig(LITREF(lit_39),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  T41 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T42,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYins,T41);
  lit_40 = YPPsym((P)"pick");
  lit_41 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T43 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_40),T44,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYpick,T43);
  lit_42 = YPPsym((P)"reject");
  lit_43 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T46 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T45 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_42),T46,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYreject,T45);
  lit_44 = YPPsym((P)"del-vals");
  lit_45 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  T48 = YPsig(LITREF(lit_45),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T47 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_44),T48,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_vals,T47);
  lit_46 = YPPsym((P)"del-dups");
  lit_47 = YPPlist(1,YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T49 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_46),T50,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdel_dups,T49);
  lit_48 = YPPsym((P)"sort");
  lit_49 = YPPlist(1,YPPsym((P)"x"));
  T52 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  T51 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_48),T52,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort,T51);
  lit_50 = YPPsym((P)"sort-by");
  lit_51 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"test"));
  T54 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YLseqG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T53 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_50),T54,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsort_by,T53);
  lit_52 = YPPsym((P)"suffix?");
  lit_53 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"suffix"));
  T56 = YPsig(LITREF(lit_53),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T55 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_52),T56,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsuffixQ,T55);
  lit_54 = YPPsym((P)"prefix?");
  lit_55 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"prefix"));
  T58 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  T57 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_54),T58,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYprefixQ,T57);
  T59 = YPfalse;
  return T59;
}

P YgooScolsSseqY___main_1___() {
  P tmpF1888;
  P tmpF1887;
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
  P T192,T193,T194,T195;
DEFCREGS();
  lit_56 = YPPsym((P)"repeat");
  lit_57 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T1 = YPsig(LITREF(lit_57),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T0 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_56),T1,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYrepeat,T0);
  lit_58 = YPPsym((P)"split");
  lit_59 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T3 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_58),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYsplit,T2);
  lit_60 = YPPsym((P)"join");
  lit_61 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  T5 = YPsig(LITREF(lit_61),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_60),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYjoin,T4);
  lit_62 = YPPsym((P)"vals-to-str");
  lit_63 = YPPlist(1,YPPsym((P)"s"));
  T7 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_62),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYvals_to_str,T6);
  lit_64 = YPPsym((P)"do-key-vals");
  lit_65 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T9 = YPsig(LITREF(lit_65),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_64),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYdo_key_vals,T8);
  lit_66 = YPPsym((P)"key-type");
  lit_67 = YPPlist(1,YPPsym((P)"x"));
  T10 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLcolG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_key_type_1 = YPmet(FUNCODEREF(fun_key_type_1),LITREF(lit_66),T10,ENVNUL,PNUL,sloc(105));
  T12 = VARREF_OR(YgooScolsScolYkey_type,YPfalse);
  T13 = fun_key_type_1;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YgooScolsScolYkey_type,T11);
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_2 = YPmet(FUNCODEREF(fun_1st_2),LITREF(lit_2),T14,ENVNUL,PNUL,sloc(109));
  T16 = VARREF_OR(YgooSmacrosY1st,YPfalse);
  T17 = fun_1st_2;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooSmacrosY1st,T15);
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T18 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPmet(FUNCODEREF(fun_2nd_3),LITREF(lit_4),T18,ENVNUL,PNUL,sloc(111));
  T20 = VARREF_OR(YgooSmacrosY2nd,YPfalse);
  T21 = fun_2nd_3;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YgooSmacrosY2nd,T19);
  lit_70 = YPPlist(1,YPPsym((P)"x"));
  T22 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_4 = YPmet(FUNCODEREF(fun_3rd_4),LITREF(lit_6),T22,ENVNUL,PNUL,sloc(113));
  T24 = VARREF_OR(YgooScolsSseqY3rd,YPfalse);
  T25 = fun_3rd_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YgooScolsSseqY3rd,T23);
  lit_71 = YPPsym((P)"map");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T26 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_5 = YPmet(FUNCODEREF(fun_map_5),LITREF(lit_71),T26,ENVNUL,PNUL,sloc(115));
  T28 = VARREF_OR(YgooSmacrosYmap,YPfalse);
  T29 = fun_map_5;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSmacrosYmap,T27);
  lit_73 = YPPsym((P)"map-keyed");
  lit_74 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  T30 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_keyed_6 = YPmet(FUNCODEREF(fun_map_keyed_6),LITREF(lit_73),T30,ENVNUL,PNUL,sloc(121));
  T32 = VARREF_OR(YgooScolsScolYmap_keyed,YPfalse);
  T33 = fun_map_keyed_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooScolsScolYmap_keyed,T31);
  lit_75 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T34 = YPsig(LITREF(lit_75),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_7 = YPmet(FUNCODEREF(fun_do2_7),LITREF(lit_14),T34,ENVNUL,PNUL,sloc(127));
  T36 = VARREF_OR(YgooScolsSseqYdo2,YPfalse);
  T37 = fun_do2_7;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T37);
  VARSET(YgooScolsSseqYdo2,T35);
  lit_76 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  T38 = YPsig(LITREF(lit_76),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_8 = YPmet(FUNCODEREF(fun_do3_8),LITREF(lit_16),T38,ENVNUL,PNUL,sloc(133));
  T40 = VARREF_OR(YgooScolsSseqYdo3,YPfalse);
  T41 = fun_do3_8;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YgooScolsSseqYdo3,T39);
  lit_77 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  T42 = YPsig(LITREF(lit_77),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_map2_9 = YPmet(FUNCODEREF(fun_map2_9),LITREF(lit_18),T42,ENVNUL,PNUL,sloc(139));
  T44 = VARREF_OR(YgooSmacrosYmap2,YPfalse);
  T45 = fun_map2_9;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YgooSmacrosYmap2,T43);
  lit_78 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T46 = YPsig(LITREF(lit_78),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_10 = YPmet(FUNCODEREF(fun_any2Q_10),LITREF(lit_20),T46,ENVNUL,PNUL,sloc(146));
  T48 = VARREF_OR(YgooScolsSseqYany2Q,YPfalse);
  T49 = fun_any2Q_10;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooScolsSseqYany2Q,T47);
  lit_79 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  T50 = YPsig(LITREF(lit_79),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_11 = YPmet(FUNCODEREF(fun_all2Q_11),LITREF(lit_22),T50,ENVNUL,PNUL,sloc(153));
  T52 = VARREF_OR(YgooStypesYall2Q,YPfalse);
  T53 = fun_all2Q_11;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YgooStypesYall2Q,T51);
  lit_80 = YPPsym((P)"=");
  lit_81 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  T54 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_12 = YPmet(FUNCODEREF(fun_E_12),LITREF(lit_80),T54,ENVNUL,PNUL,sloc(159));
  T56 = VARREF_OR(YgooSmathYE,YPfalse);
  T57 = fun_E_12;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YgooSmathYE,T55);
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  T58 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_13 = YPmet(FUNCODEREF(fun_last_13),LITREF(lit_8),T58,ENVNUL,PNUL,sloc(167));
  T60 = VARREF_OR(YgooSmacrosYlast,YPfalse);
  T61 = fun_last_13;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YgooSmacrosYlast,T59);
  lit_83 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  lit_84 = YPPlist(1,YPPsym((P)"a"));
  T64 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T64,ENVNUL,PNUL,sloc(170));
  T63 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T62 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T63,Ynil);
  fun_pos_15 = YPmet(FUNCODEREF(fun_pos_15),LITREF(lit_10),T62,ENVNUL,PNUL,sloc(169));
  T66 = VARREF_OR(YgooScolsSseqYpos,YPfalse);
  T67 = fun_pos_15;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YgooScolsSseqYpos,T65);
  lit_85 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T69 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T68 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T69,Ynil);
  fun_finds_16 = YPmet(FUNCODEREF(fun_finds_16),LITREF(lit_12),T68,ENVNUL,PNUL,sloc(172));
  T71 = VARREF_OR(YgooScolsSseqYfinds,YPfalse);
  T72 = fun_finds_16;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T72);
  VARSET(YgooScolsSseqYfinds,T70);
  lit_86 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_rev_17 = YPmet(FUNCODEREF(fun_rev_17),LITREF(lit_24),T73,ENVNUL,PNUL,sloc(183));
  T75 = VARREF_OR(YgooScolsSseqYrev,YPfalse);
  T76 = fun_rev_17;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T76);
  VARSET(YgooScolsSseqYrev,T74);
  lit_87 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ss"));
  T77 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_18 = YPmet(FUNCODEREF(fun_cat_18),LITREF(lit_26),T77,ENVNUL,PNUL,sloc(191));
  T79 = VARREF_OR(YgooSmacrosYcat,YPfalse);
  T80 = fun_cat_18;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T80);
  VARSET(YgooSmacrosYcat,T78);
  lit_88 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T81 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_19 = YPmet(FUNCODEREF(fun_cat2_19),LITREF(lit_28),T81,ENVNUL,PNUL,sloc(194));
  T83 = VARREF_OR(YgooScolsSseqYcat2,YPfalse);
  T84 = fun_cat2_19;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YgooScolsSseqYcat2,T82);
  lit_89 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  T85 = YPsig(LITREF(lit_89),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_20 = YPmet(FUNCODEREF(fun_sub_20),LITREF(lit_34),T85,ENVNUL,PNUL,sloc(203));
  T87 = VARREF_OR(YgooScolsSseqYsub,YPfalse);
  T88 = fun_sub_20;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T88);
  VARSET(YgooScolsSseqYsub,T86);
  lit_90 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T89 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_subT_21 = YPmet(FUNCODEREF(fun_subT_21),LITREF(lit_36),T89,ENVNUL,PNUL,sloc(210));
  T91 = VARREF_OR(YgooScolsSseqYsubT,YPfalse);
  T92 = fun_subT_21;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T92);
  VARSET(YgooScolsSseqYsubT,T90);
  lit_91 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T93 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_push_22 = YPmet(FUNCODEREF(fun_push_22),LITREF(lit_30),T93,ENVNUL,PNUL,sloc(213));
  T95 = VARREF_OR(YgooScolsSseqYpush,YPfalse);
  T96 = fun_push_22;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T96);
  VARSET(YgooScolsSseqYpush,T94);
  lit_92 = YPPlist(1,YPPsym((P)"l"));
  T98 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T97 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T98,Ynil);
  fun_pop_23 = YPmet(FUNCODEREF(fun_pop_23),LITREF(lit_32),T97,ENVNUL,PNUL,sloc(216));
  T100 = VARREF_OR(YgooScolsSseqYpop,YPfalse);
  T101 = fun_pop_23;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YgooScolsSseqYpop,T99);
  lit_93 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  T102 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_24 = YPmet(FUNCODEREF(fun_pick_24),LITREF(lit_40),T102,ENVNUL,PNUL,sloc(219));
  T104 = VARREF_OR(YgooScolsSseqYpick,YPfalse);
  T105 = fun_pick_24;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YgooScolsSseqYpick,T103);
  lit_94 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T107 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T107,ENVNUL,PNUL,sloc(227));
  T106 = YPsig(LITREF(lit_94),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_26 = YPmet(FUNCODEREF(fun_reject_26),LITREF(lit_42),T106,ENVNUL,PNUL,sloc(226));
  T109 = VARREF_OR(YgooScolsSseqYreject,YPfalse);
  T110 = fun_reject_26;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T110);
  VARSET(YgooScolsSseqYreject,T108);
  lit_96 = YPPsym((P)"del");
  lit_97 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T111 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_27 = YPmet(FUNCODEREF(fun_del_27),LITREF(lit_96),T111,ENVNUL,PNUL,sloc(229));
  T113 = VARREF_OR(YgooScolsScolYdel,YPfalse);
  T114 = fun_del_27;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(YgooScolsScolYdel,T112);
  lit_98 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"x"));
  lit_99 = YPPlist(1,YPPsym((P)"e"));
  T116 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T116,ENVNUL,PNUL,sloc(233));
  T115 = YPsig(LITREF(lit_98),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_29 = YPmet(FUNCODEREF(fun_del_vals_29),LITREF(lit_44),T115,ENVNUL,PNUL,sloc(232));
  T118 = VARREF_OR(YgooScolsSseqYdel_vals,YPfalse);
  T119 = fun_del_vals_29;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YgooScolsSseqYdel_vals,T117);
  lit_100 = YPPlist(1,YPPsym((P)"x"));
  lit_101 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T121 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T121,ENVNUL,PNUL,sloc(236));
  T120 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_31 = YPmet(FUNCODEREF(fun_del_dups_31),LITREF(lit_46),T120,ENVNUL,PNUL,sloc(235));
  T123 = VARREF_OR(YgooScolsSseqYdel_dups,YPfalse);
  T124 = fun_del_dups_31;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T124);
  VARSET(YgooScolsSseqYdel_dups,T122);
  lit_102 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  T125 = YPsig(LITREF(lit_102),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_32 = YPmet(FUNCODEREF(fun_ins_32),LITREF(lit_38),T125,ENVNUL,PNUL,sloc(238));
  T127 = VARREF_OR(YgooScolsSseqYins,YPfalse);
  T128 = fun_ins_32;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T128);
  VARSET(YgooScolsSseqYins,T126);
  lit_103 = YPPsym((P)"elts");
  lit_104 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  T129 = YPsig(LITREF(lit_104),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_elts_33 = YPmet(FUNCODEREF(fun_elts_33),LITREF(lit_103),T129,ENVNUL,PNUL,sloc(247));
  T131 = VARREF_OR(YgooScolsScolYelts,YPfalse);
  T132 = fun_elts_33;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YgooScolsScolYelts,T130);
  lit_105 = YPPlist(1,YPPsym((P)"x"));
  T133 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_sort_34 = YPmet(FUNCODEREF(fun_sort_34),LITREF(lit_48),T133,ENVNUL,PNUL,sloc(262));
  T135 = VARREF_OR(YgooScolsSseqYsort,YPfalse);
  T136 = fun_sort_34;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T136);
  VARSET(YgooScolsSseqYsort,T134);
  lit_106 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T137 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_by_35 = YPmet(FUNCODEREF(fun_sort_by_35),LITREF(lit_50),T137,ENVNUL,PNUL,sloc(265));
  T139 = VARREF_OR(YgooScolsSseqYsort_by,YPfalse);
  T140 = fun_sort_by_35;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YgooScolsSseqYsort_by,T138);
  lit_107 = YPPsym((P)"keys");
  lit_108 = YPPlist(1,YPPsym((P)"d"));
  T141 = YPsig(LITREF(lit_108),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_36 = YPmet(FUNCODEREF(fun_keys_36),LITREF(lit_107),T141,ENVNUL,PNUL,sloc(270));
  T143 = VARREF_OR(YgooScolsScolYkeys,YPfalse);
  T144 = fun_keys_36;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YgooScolsScolYkeys,T142);
  lit_109 = YPPsym((P)"range-check");
  lit_110 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T145 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_check = YPmet(FUNCODEREF(YgooScolsSseqYrange_check),LITREF(lit_109),T145,ENVNUL,PNUL,sloc(273));
  T146 = YgooScolsSseqYrange_check;
  VARSET(YgooScolsSseqYrange_check,T146);
  lit_111 = YPPsym((P)"range-check?");
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T147 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_checkQ = YPmet(FUNCODEREF(YgooScolsSseqYrange_checkQ),LITREF(lit_111),T147,ENVNUL,PNUL,sloc(277));
  T148 = YgooScolsSseqYrange_checkQ;
  VARSET(YgooScolsSseqYrange_checkQ,T148);
  lit_113 = YPPsym((P)"add");
  lit_114 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"e"));
  T149 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_39 = YPmet(FUNCODEREF(fun_add_39),LITREF(lit_113),T149,ENVNUL,PNUL,sloc(280));
  T151 = VARREF_OR(YgooScolsScolYadd,YPfalse);
  T152 = fun_add_39;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T152);
  VARSET(YgooScolsScolYadd,T150);
  lit_115 = YPPsym((P)"add-new");
  lit_116 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T153 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_40 = YPmet(FUNCODEREF(fun_add_new_40),LITREF(lit_115),T153,ENVNUL,PNUL,sloc(283));
  T155 = VARREF_OR(YgooScolsSseqYadd_new,YPfalse);
  T156 = fun_add_new_40;
  T154 = XCALL2(1,VARREF(YPdefine_method),T155,T156);
  VARSET(YgooScolsSseqYadd_new,T154);
  lit_117 = YPPlist(1,YPPsym((P)"s"));
  lit_118 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  lit_119 = YPsb((P)"");
  lit_120 = YPsb((P)" ");
  T158 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T158,ENVNUL,PNUL,sloc(288));
  T157 = YPsig(LITREF(lit_117),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_42 = YPmet(FUNCODEREF(fun_vals_to_str_42),LITREF(lit_62),T157,ENVNUL,PNUL,sloc(287));
  T160 = VARREF_OR(YgooScolsSseqYvals_to_str,YPfalse);
  T161 = fun_vals_to_str_42;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YgooScolsSseqYvals_to_str,T159);
  lit_121 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  T162 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_43 = YPmet(FUNCODEREF(fun_do_key_vals_43),LITREF(lit_64),T162,ENVNUL,PNUL,sloc(290));
  T164 = VARREF_OR(YgooScolsSseqYdo_key_vals,YPfalse);
  T165 = fun_do_key_vals_43;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YgooScolsSseqYdo_key_vals,T163);
  lit_122 = YPPsym((P)"col");
  lit_123 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  lit_124 = YPPlist(2,YPPsym((P)"key"),YPPsym((P)"val"));
  T168 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T168,ENVNUL,PNUL,sloc(300));
  T167 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T166 = YPsig(LITREF(lit_123),YPPlist(1,T167),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_45 = YPmet(FUNCODEREF(fun_col_45),LITREF(lit_122),T166,ENVNUL,PNUL,sloc(298));
  T170 = VARREF_OR(YgooScolsScolYcol,YPfalse);
  T171 = fun_col_45;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T171);
  VARSET(YgooScolsScolYcol,T169);
  lit_125 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"end"));
  T172 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_46 = YPmet(FUNCODEREF(fun_suffixQ_46),LITREF(lit_52),T172,ENVNUL,PNUL,sloc(303));
  T174 = VARREF_OR(YgooScolsSseqYsuffixQ,YPfalse);
  T175 = fun_suffixQ_46;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T175);
  VARSET(YgooScolsSseqYsuffixQ,T173);
  lit_126 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"begin"));
  T176 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_47 = YPmet(FUNCODEREF(fun_prefixQ_47),LITREF(lit_54),T176,ENVNUL,PNUL,sloc(306));
  T178 = VARREF_OR(YgooScolsSseqYprefixQ,YPfalse);
  T179 = fun_prefixQ_47;
  T177 = XCALL2(1,VARREF(YPdefine_method),T178,T179);
  VARSET(YgooScolsSseqYprefixQ,T177);
  lit_127 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T180 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_48 = YPmet(FUNCODEREF(fun_repeat_48),LITREF(lit_56),T180,ENVNUL,PNUL,sloc(310));
  T182 = VARREF_OR(YgooScolsSseqYrepeat,YPfalse);
  T183 = fun_repeat_48;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T183);
  VARSET(YgooScolsSseqYrepeat,T181);
  lit_128 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T184 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_49 = YPmet(FUNCODEREF(fun_split_49),LITREF(lit_58),T184,ENVNUL,PNUL,sloc(317));
  T186 = VARREF_OR(YgooScolsSseqYsplit,YPfalse);
  T187 = fun_split_49;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T187);
  VARSET(YgooScolsSseqYsplit,T185);
  lit_129 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  lit_130 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T189 = YPsig(LITREF(lit_130),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T189,ENVNUL,PNUL,sloc(328));
  T188 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_51 = YPmet(FUNCODEREF(fun_join_51),LITREF(lit_60),T188,ENVNUL,PNUL,sloc(325));
  T191 = VARREF_OR(YgooScolsSseqYjoin,YPfalse);
  T192 = fun_join_51;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T192);
  VARSET(YgooScolsSseqYjoin,T190);
  tmpF1887 = YPfalse;
  if (tmpF1887 != YPfalse) {
    T193 = VARREF(YgooScolsSseqYbelow);
  } else {
    T193 = YPfalse;
  }
  tmpF1888 = YPfalse;
  if (tmpF1888 != YPfalse) {
    T194 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T194 = YPfalse;
  }
  T195 = YPfalse;
  return T195;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
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
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
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
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
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
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
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
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
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
  {"num-to-str", &module_info_gooSmath, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
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
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
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
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
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
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
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
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
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
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {"---main-0---", PVAR, NULL},
  {"---main-1---", PVAR, NULL},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"ins", CVAR, &YgooScolsSseqYins},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"sub*", CVAR, &YgooScolsSseqYsubT},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"push", NULL},
  {"sort", NULL},
  {"<seq.>", NULL},
  {"<seq>", NULL},
  {"finds", NULL},
  {"cat2", NULL},
  {"del-dups", NULL},
  {"del-vals", NULL},
  {"cat", NULL},
  {"do-key-vals", NULL},
  {"rev", NULL},
  {"last", NULL},
  {"vals-to-str", NULL},
  {"reject", NULL},
  {"pos", NULL},
  {"3rd", NULL},
  {"pick", NULL},
  {"all2?", NULL},
  {"2nd", NULL},
  {"join", NULL},
  {"1st", NULL},
  {"any2?", NULL},
  {"split", NULL},
  {"ins", NULL},
  {"repeat", NULL},
  {"sub*", NULL},
  {"map2", NULL},
  {"prefix?", NULL},
  {"sort-by!", NULL},
  {"range-check?", NULL},
  {"below", NULL},
  {"do3", NULL},
  {"sub", NULL},
  {"suffix?", NULL},
  {"range-check", NULL},
  {"pop", NULL},
  {"do2", NULL},
  {"sort-by", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSseq;
MODULE_INFO module_info_gooScolsSseq = {
  "goo/cols/seq",
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

/* EXPRESSION: */

extern void load_module_gooScolsSseq (void);

void load_module_gooScolsSseq (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();

  (P)YgooScolsSseqY___main_0___();
  (P)YgooScolsSseqY___main_1___();

}

/* END OF GENERATED CODE. */
