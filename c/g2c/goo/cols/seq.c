/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/cols/seq");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/cols/seq */

EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YgooScolsSseqYadd_new,"goo/cols/seq","add-new");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
DEF(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYDe,"goo/math","$e");
DEF(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YtT,"goo/boot","t*");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooScolsSseqYOtQ,"goo/cols/seq","@t?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
DEF(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ynil,"goo/boot","nil");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
DEF(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_23);
DEFLIT(lit_56);
DEFLIT(lit_89);
DEFLIT(lit_21);
DEFLIT(lit_142);
DEFLIT(lit_60);
DEFLIT(lit_9);
DEFLIT(lit_5);
DEFLIT(lit_96);
DEFLIT(lit_38);
DEFLIT(lit_68);
DEFLIT(lit_121);
DEFLIT(lit_158);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_134);
DEFLIT(lit_138);
DEFLIT(lit_79);
DEFLIT(lit_98);
DEFLIT(lit_52);
DEFLIT(lit_12);
DEFLIT(lit_7);
DEFLIT(lit_78);
DEFLIT(lit_83);
DEFLIT(lit_131);
DEFLIT(lit_11);
DEFLIT(lit_66);
DEFLIT(lit_150);
DEFLIT(lit_37);
DEFLIT(lit_143);
DEFLIT(lit_33);
DEFLIT(lit_39);
DEFLIT(lit_29);
DEFLIT(lit_157);
DEFLIT(lit_75);
DEFLIT(lit_67);
DEFLIT(lit_129);
DEFLIT(lit_144);
DEFLIT(lit_6);
DEFLIT(lit_25);
DEFLIT(lit_108);
DEFLIT(lit_24);
DEFLIT(lit_101);
DEFLIT(lit_10);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_107);
DEFLIT(lit_120);
DEFLIT(lit_34);
DEFLIT(lit_17);
DEFLIT(lit_90);
DEFLIT(lit_64);
DEFLIT(lit_149);
DEFLIT(lit_141);
DEFLIT(lit_86);
DEFLIT(lit_65);
DEFLIT(lit_40);
DEFLIT(lit_137);
DEFLIT(lit_53);
DEFLIT(lit_111);
DEFLIT(lit_44);
DEFLIT(lit_14);
DEFLIT(lit_119);
DEFLIT(lit_105);
DEFLIT(lit_20);
DEFLIT(lit_43);
DEFLIT(lit_135);
DEFLIT(lit_85);
DEFLIT(lit_133);
DEFLIT(lit_82);
DEFLIT(lit_139);
DEFLIT(lit_145);
DEFLIT(lit_31);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_112);
DEFLIT(lit_36);
DEFLIT(lit_61);
DEFLIT(lit_132);
DEFLIT(lit_148);
DEFLIT(lit_127);
DEFLIT(lit_110);
DEFLIT(lit_28);
DEFLIT(lit_51);
DEFLIT(lit_19);
DEFLIT(lit_140);
DEFLIT(lit_55);
DEFLIT(lit_4);
DEFLIT(lit_13);
DEFLIT(lit_50);
DEFLIT(lit_136);
DEFLIT(lit_91);
DEFLIT(lit_54);
DEFLIT(lit_72);
DEFLIT(lit_58);
DEFLIT(lit_94);
DEFLIT(lit_62);
DEFLIT(lit_92);
DEFLIT(lit_103);
DEFLIT(lit_84);
DEFLIT(lit_57);
DEFLIT(lit_88);
DEFLIT(lit_16);
DEFLIT(lit_102);
DEFLIT(lit_32);
DEFLIT(lit_73);
DEFLIT(lit_99);
DEFLIT(lit_2);
DEFLIT(lit_8);
DEFLIT(lit_147);
DEFLIT(lit_41);
DEFLIT(lit_106);
DEFLIT(lit_69);
DEFLIT(lit_128);
DEFLIT(lit_153);
DEFLIT(lit_115);
DEFLIT(lit_27);
DEFLIT(lit_114);
DEFLIT(lit_113);
DEFLIT(lit_100);
DEFLIT(lit_156);
DEFLIT(lit_80);
DEFLIT(lit_1);
DEFLIT(lit_117);
DEFLIT(lit_104);
DEFLIT(lit_71);
DEFLIT(lit_48);
DEFLIT(lit_63);
DEFLIT(lit_22);
DEFLIT(lit_154);
DEFLIT(lit_155);
DEFLIT(lit_59);
DEFLIT(lit_97);
DEFLIT(lit_118);
DEFLIT(lit_109);
DEFLIT(lit_130);
DEFLIT(lit_152);
DEFLIT(lit_76);
DEFLIT(lit_47);
DEFLIT(lit_93);
DEFLIT(lit_87);
DEFLIT(lit_77);
DEFLIT(lit_123);
DEFLIT(lit_125);
DEFLIT(lit_126);
DEFLIT(lit_124);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_18);
DEFLIT(lit_116);
DEFLIT(lit_151);
DEFLIT(lit_146);
DEFLIT(lit_70);
DEFLIT(lit_15);
DEFLIT(lit_122);
DEFLIT(lit_74);
DEFLIT(lit_81);
DEFLIT(lit_95);

/* FUNCTIONS: */

FUNFOR(YgooScolsSseqYOtQ);
LOCFOR(fun_key_type_1);
LOCFOR(fun_1st_2);
LOCFOR(fun_2nd_3);
LOCFOR(fun_3rd_4);
LOCFOR(fun_con_5);
LOCFOR(fun_map_6);
LOCFOR(fun_con_7);
LOCFOR(fun_map_keyed_8);
LOCFOR(fun_lop_9);
LOCFOR(fun_do2_10);
LOCFOR(fun_lop_11);
LOCFOR(fun_do3_12);
LOCFOR(fun_con_13);
LOCFOR(fun_map2_14);
LOCFOR(fun_fnd_15);
LOCFOR(fun_any2Q_16);
LOCFOR(fun_fnd_17);
LOCFOR(fun_all2Q_18);
LOCFOR(fun_eq_19);
LOCFOR(fun_E_20);
LOCFOR(fun_last_21);
LOCFOR(fun_22);
LOCFOR(fun_pos_23);
LOCFOR(fun_inner_24);
LOCFOR(fun_outer_25);
LOCFOR(fun_finds_26);
LOCFOR(fun_con_27);
LOCFOR(fun_rev_28);
LOCFOR(fun_cat_29);
LOCFOR(fun_con_y_30);
LOCFOR(fun_con_x_31);
LOCFOR(fun_cat2_32);
LOCFOR(fun_con_x_33);
LOCFOR(fun_sub_34);
LOCFOR(fun_subT_35);
LOCFOR(fun_push_36);
LOCFOR(fun_pop_37);
LOCFOR(fun_con_38);
LOCFOR(fun_pick_39);
LOCFOR(fun_40);
LOCFOR(fun_reject_41);
LOCFOR(fun_del_42);
LOCFOR(fun_43);
LOCFOR(fun_del_vals_44);
LOCFOR(fun_45);
LOCFOR(fun_del_dups_46);
LOCFOR(fun_copy_47);
LOCFOR(fun_ins_48);
LOCFOR(fun_copy_49);
LOCFOR(fun_elts_50);
LOCFOR(fun_sort_51);
LOCFOR(fun_sort_by_52);
LOCFOR(fun_keys_53);
FUNFOR(YgooScolsSseqYrange_check);
FUNFOR(YgooScolsSseqYrange_checkQ);
LOCFOR(fun_add_56);
LOCFOR(fun_add_new_57);
LOCFOR(fun_58);
LOCFOR(fun_vals_to_str_59);
LOCFOR(fun_rep_60);
LOCFOR(fun_do_key_vals_61);
LOCFOR(fun_62);
LOCFOR(fun_col_63);
LOCFOR(fun_suffixQ_64);
LOCFOR(fun_prefixQ_65);
LOCFOR(fun_repeat_66);
LOCFOR(fun_split_67);
LOCFOR(fun_68);
LOCFOR(fun_join_69);
extern P YgooScolsSseqY___main_0___ ();
extern P YgooScolsSseqY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooScolsSseqYOtQ) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL3(1,VARREF(Ynew),VARREF(YLsingletonG),VARREF(Ytype_object),YPfalse);
  T1 = CALL2(1,VARREF(YOlst),x_,T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YLunionG),VARREF(Yunion_elts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_key_type_1) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLintG));
}

FUNCODEDEF(fun_1st_2) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2nd_3) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3rd_4) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_5) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T6 = CALL1(1,FREEREF(1),T7);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T6);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T8;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_6) {
  P f_,c_;
  P conF1753;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_5,3);
  conF1753 = T1;
  FUNINIT(conF1753, 3,c_,f_,conF1753);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1753,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_7) {
  P res_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow_key),e_);
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T6 = CALL2(1,FREEREF(1),T7,T8);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T9;
    res_ = a1;
    e_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_keyed_8) {
  P f_,c_;
  P conF1754;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(c_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_7,3);
  conF1754 = T1;
  FUNINIT(conF1754, 3,c_,f_,conF1754);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c_);
  T2 = CALL2(0,conF1754,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lop_9) {
  P ex_,ey_;
  P tmpF1755;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1755 = T3;
  if (tmpF1755 != YPfalse) {
    T4 = tmpF1755;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    CALL2(1,FREEREF(0),T6,T7);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T10 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T9;
    a2 = T10;
    ex_ = a1;
    ey_ = a2;
    goto loop;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do2_10) {
  P f_,x_,y_;
  P lopF1756;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_lop_9,2);
  lopF1756 = T1;
  FUNINIT(lopF1756, 2,f_,lopF1756);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,lopF1756,T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lop_11) {
  P ex_,ey_,ez_;
  P tmpF1758;
  P tmpF1757;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2,a3;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
  ARG(ez_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1757 = T3;
  if (tmpF1757 != YPfalse) {
    T4 = tmpF1757;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF1758 = T6;
    if (tmpF1758 != YPfalse) {
      T7 = tmpF1758;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),ez_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),ez_);
    CALL3(1,FREEREF(0),T9,T10,T11);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    T15 = CALL1(1,VARREF(YgooScolsScolYnxt),ez_);
    a1 = T13;
    a2 = T14;
    a3 = T15;
    ex_ = a1;
    ey_ = a2;
    ez_ = a3;
    goto loop;
    T0 = T12;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do3_12) {
  P f_,x_,y_,z_;
  P lopF1759;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
  ARG(z_, 3);
loop:
  T1 = FUNSHELL(1,fun_lop_11,2);
  lopF1759 = T1;
  FUNINIT(lopF1759, 2,f_,lopF1759);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),z_);
  T2 = CALL3(0,lopF1759,T3,T4,T5);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_13) {
  P res_,ex_,ey_;
  P tmpF1760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(ex_, 1);
  ARG(ey_, 2);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1760 = T2;
  if (tmpF1760 != YPfalse) {
    T3 = tmpF1760;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T6);
    T0 = T5;
  } else {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T11 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T9 = CALL2(1,FREEREF(1),T10,T11);
    T8 = CALL2(1,VARREF(YgooScolsScolYadd),res_,T9);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T8;
    a2 = T12;
    a3 = T13;
    res_ = a1;
    ex_ = a2;
    ey_ = a3;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map2_14) {
  P f_,x_,y_;
  P conF1761;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_13,3);
  conF1761 = T1;
  FUNINIT(conF1761, 3,x_,f_,conF1761);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL3(0,conF1761,Ynil,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_15) {
  P ex_,ey_;
  P tmpF1763;
  P tmpF1762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1762 = T2;
  if (tmpF1762 != YPfalse) {
    T3 = tmpF1762;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T7 = CALL2(1,FREEREF(0),T8,T9);
    T6 = CALL1(1,VARREF(YgooSmathYas_log),T7);
    tmpF1763 = T6;
    if (tmpF1763 != YPfalse) {
      T10 = tmpF1763;
    } else {
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
      a1 = T12;
      a2 = T13;
      ex_ = a1;
      ey_ = a2;
      goto loop;
      T10 = T11;
    }
    T5 = T10;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_any2Q_16) {
  P test_,x_,y_;
  P fndF1764;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_15,2);
  fndF1764 = T1;
  FUNINIT(fndF1764, 2,test_,fndF1764);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF1764,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fnd_17) {
  P ex_,ey_;
  P tmpF1767;
  P tmpF1766;
  P tmpF1765;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(ex_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  tmpF1765 = T1;
  if (tmpF1765 != YPfalse) {
    T2 = tmpF1765;
  } else {
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
    tmpF1766 = T4;
    if (tmpF1766 != YPfalse) {
      T5 = tmpF1766;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
      T7 = CALL2(1,FREEREF(0),T8,T9);
      tmpF1767 = T7;
      if (tmpF1767 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
        a1 = T12;
        a2 = T13;
        ex_ = a1;
        ey_ = a2;
        goto loop;
        T10 = T11;
      } else {
        T10 = YPfalse;
      }
      T6 = T10;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_all2Q_18) {
  P test_,x_,y_;
  P fndF1768;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
  ARG(y_, 2);
loop:
  T1 = FUNSHELL(1,fun_fnd_17,2);
  fndF1768 = T1;
  FUNINIT(fndF1768, 2,test_,fndF1768);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),y_);
  T2 = CALL2(0,fndF1768,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_eq_19) {
  P e1_,e2_;
  P tmpF1769;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(e1_, 0);
  ARG(e2_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e1_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e2_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e1_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),e2_);
    T4 = CALL2(1,VARREF(YgooSmathYE),T5,T6);
    tmpF1769 = T4;
    if (tmpF1769 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),e1_);
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),e2_);
      a1 = T9;
      a2 = T10;
      e1_ = a1;
      e2_ = a2;
      goto loop;
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_E_20) {
  P c1_,c2_;
  P eqF1770;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(c1_, 0);
  ARG(c2_, 1);
loop:
  T1 = FUNSHELL(1,fun_eq_19,1);
  eqF1770 = T1;
  FUNINIT(eqF1770, 1,eqF1770);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),c1_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),c2_);
  T2 = CALL2(0,eqF1770,T3,T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_last_21) {
  P x_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSmathY_),T2,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P a_;
  P T0;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),a_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pos_23) {
  P x_,v_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
loop:
  T1 = FUNFAB(fun_22,1,v_);
  T0 = CALL3(1,VARREF(YgooScolsScolYfind_or),T1,x_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_inner_24) {
  P xi_,yi_;
  P tmpF1771;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(xi_, 0);
  ARG(yi_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T2 = CALL2(1,VARREF(YgooSmagYL),xi_,T3);
  tmpF1771 = T2;
  if (tmpF1771 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(1));
    T5 = CALL2(1,VARREF(YgooSmagYL),yi_,T6);
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),xi_);
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),yi_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,T10);
    if (T8 != YPfalse) {
      T12 = CALL2(1,VARREF(YgooSmathYA),xi_,YPint((P)1));
      T13 = CALL2(1,VARREF(YgooSmathYA),yi_,YPint((P)1));
      a1 = T12;
      a2 = T13;
      xi_ = a1;
      yi_ = a2;
      goto loop;
      T7 = T11;
    } else {
      T15 = CALL2(1,VARREF(YgooSmathYA),FREEREF(3),YPint((P)1));
      T14 = CALL1(0,FREEREF(4),T15);
      T7 = T14;
    }
    T0 = T7;
  } else {
    T0 = FREEREF(3);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_outer_25) {
  P xsi_;
  P innerF1772;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(xsi_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T5 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,T5);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYL),xsi_,T2);
  if (T1 != YPfalse) {
    T7 = FUNSHELL(1,fun_inner_24,5);
    innerF1772 = T7;
    FUNINIT(innerF1772, 5,FREEREF(0),FREEREF(1),innerF1772,xsi_,FREEREF(2));
    T8 = CALL2(0,innerF1772,xsi_,YPint((P)0));
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_finds_26) {
  P x_,y_;
  P outerF1773;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_outer_25,3);
  outerF1773 = T1;
  FUNINIT(outerF1773, 3,x_,y_,outerF1773);
  T2 = CALL1(0,outerF1773,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_27) {
  P seq_,e_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),seq_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T5);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T4;
    a2 = T6;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_rev_28) {
  P x_;
  P conF1774;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNSHELL(1,fun_con_27,2);
  conF1774 = T1;
  FUNINIT(conF1774, 2,x_,conF1774);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF1774,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_cat_29) {
  P x_,ss_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  NARGS(ss_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),VARREF(YgooScolsSseqYcat2),x_,ss_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_y_30) {
  P seq_,ey_;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ey_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ey_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),ey_);
    T5 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T6);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),ey_);
    a1 = T5;
    a2 = T7;
    seq_ = a1;
    ey_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_con_x_31) {
  P seq_,ex_;
  P con_yF1775;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(ex_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),ex_);
  if (T1 != YPfalse) {
    T3 = FUNSHELL(1,fun_con_y_30,2);
    con_yF1775 = T3;
    FUNINIT(con_yF1775, 2,FREEREF(0),con_yF1775);
    T5 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
    T4 = CALL2(0,con_yF1775,seq_,T5);
    T2 = T4;
    T0 = T2;
  } else {
    T8 = CALL1(1,VARREF(YgooScolsScolYnow),ex_);
    T7 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T8);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),ex_);
    a1 = T7;
    a2 = T9;
    seq_ = a1;
    ex_ = a2;
    goto loop;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_cat2_32) {
  P x_,y_;
  P con_xF1776;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_x_31,3);
  con_xF1776 = T1;
  FUNINIT(con_xF1776, 3,x_,y_,con_xF1776);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,con_xF1776,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_x_33) {
  P seq_,i_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(seq_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmagYGE),i_,FREEREF(1));
    if (T7 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(2));
      T6 = T8;
    } else {
      T6 = YPfalse;
    }
    if (T6 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,T10);
      T5 = T9;
    } else {
      T5 = seq_;
    }
    T11 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T5;
    a2 = T11;
    a3 = T12;
    seq_ = a1;
    i_ = a2;
    e_ = a3;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_34) {
  P x_,from_,below_;
  P con_xF1777;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
  ARG(below_, 2);
loop:
  T1 = FUNSHELL(1,fun_con_x_33,4);
  con_xF1777 = T1;
  FUNINIT(con_xF1777, 4,x_,from_,below_,con_xF1777);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(1,con_xF1777,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_subT_35) {
  P x_,from_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(from_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T0 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,from_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_push_36) {
  P l_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(l_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),l_,x_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_pop_37) {
  P l_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),l_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),l_,YPint((P)1),T2);
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),l_,YPint((P)0));
  T0 = CALL2(1,VARREF(Ytup),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_con_38) {
  P seq_,e_;
  P vF1778;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(seq_, 0);
  ARG(e_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),seq_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    vF1778 = T5;
    T8 = CALL1(1,FREEREF(1),vF1778);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolYadd),seq_,vF1778);
      T7 = T9;
    } else {
      T7 = seq_;
    }
    T10 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T7;
    a2 = T10;
    seq_ = a1;
    e_ = a2;
    goto loop;
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pick_39) {
  P test_,x_;
  P conF1779;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNSHELL(1,fun_con_38,3);
  conF1779 = T1;
  FUNINIT(conF1779, 3,x_,test_,conF1779);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL2(0,conF1779,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_40) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,FREEREF(0),x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reject_41) {
  P test_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(test_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_40,1,test_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYpick),T1,x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_del_42) {
  P x_,key_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(key_, 1);
loop:
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,YPint((P)0),key_);
  T3 = CALL2(1,VARREF(YgooSmathYA),key_,YPint((P)1));
  T4 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),x_,T3,T4);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_43) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),e_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_del_vals_44) {
  P s_,x_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(x_, 1);
loop:
  T1 = FUNFAB(fun_43,1,x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYreject),T1,s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_45) {
  P s_,e_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
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

FUNCODEDEF(fun_del_dups_46) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = fun_45;
  T2 = CALL3(1,VARREF(YgooScolsScolYfold),T3,Ynil,x_);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),T2);
  T0 = CALL2(1,VARREF(YgooScolsScolYcol_res),x_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_47) {
  P r_,i_,e_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(r_, 0);
  ARG(i_, 1);
  ARG(e_, 2);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(1),r_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T3;
    a2 = T4;
    a3 = e_;
    r_ = a1;
    i_ = a2;
    e_ = a3;
    goto loop;
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    if (T6 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
      T7 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(3),T8);
      T5 = T7;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,r_);
      T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
      a1 = T10;
      a2 = T12;
      a3 = T13;
      r_ = a1;
      i_ = a2;
      e_ = a3;
      goto loop;
      T5 = T9;
    }
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ins_48) {
  P x_,v_,before_;
  P copyF1780;
  P T0,T1,T2,T3;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_, 0);
  ARG(v_, 1);
  ARG(before_, 2);
loop:
  T1 = FUNSHELL(1,fun_copy_47,4);
  copyF1780 = T1;
  FUNINIT(copyF1780, 4,before_,v_,copyF1780,x_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T2 = CALL3(0,copyF1780,Ynil,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_copy_49) {
  P r_,e_,i_,keys_;
  P keyF1781;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(r_, 0);
  ARG(e_, 1);
  ARG(i_, 2);
  ARG(keys_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYfinQ),keys_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T2 = CALL2(1,VARREF(YgooScolsScolYcol_res),FREEREF(0),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(Yrange_error),FREEREF(0),i_);
      T4 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL1(1,VARREF(YgooScolsScolYnow),keys_);
        keyF1781 = T9;
        T11 = CALL2(1,VARREF(YgooSmathYE),i_,keyF1781);
        if (T11 != YPfalse) {
          T14 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
          T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,r_);
          T15 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
          T16 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
          T17 = CALL1(1,VARREF(YgooScolsScolYnxt),keys_);
          a1 = T13;
          a2 = T15;
          a3 = T16;
          a4 = T17;
          r_ = a1;
          e_ = a2;
          i_ = a3;
          keys_ = a4;
          goto loop;
          T10 = T12;
        } else {
          T19 = CALL2(1,VARREF(YisaQ),keyF1781,VARREF(YLintG));
          if (T19 != YPfalse) {
            T21 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
            T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
            a1 = r_;
            a2 = T21;
            a3 = T22;
            a4 = keys_;
            r_ = a1;
            e_ = a2;
            i_ = a3;
            keys_ = a4;
            goto loop;
            T18 = T20;
          } else {
            if (YPtrue != YPfalse) {
              T24 = CALL2(1,VARREF(Yrange_error),FREEREF(0),keyF1781);
              T23 = T24;
            } else {
              T23 = YPfalse;
            }
            T18 = T23;
          }
          T10 = T18;
        }
        T8 = T10;
        T7 = T8;
      } else {
        T7 = YPfalse;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_elts_50) {
  P x_,keys_;
  P copyF1782;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(keys_, 1);
loop:
  T1 = FUNSHELL(1,fun_copy_49,2);
  copyF1782 = T1;
  FUNINIT(copyF1782, 2,x_,copyF1782);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T5 = CALL1(1,VARREF(YgooScolsSseqYsort),keys_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T2 = CALL4(0,copyF1782,Ynil,T3,YPint((P)0),T4);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_51) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_by),x_,VARREF(YgooSmagYL));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sort_by_52) {
  P a_,test_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(test_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsScolYdup),a_);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsort_byX),T1,test_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_keys_53) {
  P d_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(d_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),d_);
  T0 = CALL1(1,VARREF(YgooScolsSseqYbelow),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooScolsSseqYrange_check) {
  P x_,i_;
  P tmpF1783;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  tmpF1783 = T2;
  if (tmpF1783 != YPfalse) {
    T3 = tmpF1783;
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
  P tmpF1784;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(i_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYGE),i_,YPint((P)0));
  tmpF1784 = T1;
  if (tmpF1784 != YPfalse) {
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

FUNCODEDEF(fun_add_56) {
  P x_,e_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(e_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsSseqYins),x_,e_,YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_new_57) {
  P c_,x_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),c_,x_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYadd),c_,x_);
  } else {
  }
UNLINK_STACK();
  RET(c_);
}

FUNCODEDEF(fun_58) {
  P s_,e_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(e_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_145);
  } else {
    T1 = LITREF(lit_146);
  }
  T3 = CALL1(1,VARREF(YgooSmathYto_str),e_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),s_,T1,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_vals_to_str_59) {
  P s_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T1 = fun_58;
  T0 = CALL3(1,VARREF(YgooScolsScolYfold),T1,LITREF(lit_145),s_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_rep_60) {
  P e_;
  P valF1788;
  P tmpF1787;
  P nxtsF1786;
  P keyF1785;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
    keyF1785 = T4;
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    nxtsF1786 = T6;
    T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),e_);
    T9 = CALL1(1,VARREF(Ynot),T10);
    tmpF1787 = T9;
    if (tmpF1787 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYnow),e_);
      T11 = T12;
    } else {
      T11 = YPfalse;
    }
    T8 = T11;
    valF1788 = T8;
    CALL2(1,FREEREF(0),keyF1785,valF1788);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),e_);
    a1 = T14;
    e_ = a1;
    goto loop;
    T7 = T13;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_key_vals_61) {
  P fn_,key_vals_;
  P repF1789;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(key_vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_rep_60,2);
  repF1789 = T1;
  FUNINIT(repF1789, 2,fn_,repF1789);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),key_vals_);
  T2 = CALL1(0,repF1789,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P key_,val_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(key_, 0);
  ARG(val_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),val_,FREEREF(0),key_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_63) {
  P t_,key_vals_;
  P xF1790;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  NARGS(key_vals_, 1);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),key_vals_);
  T3 = CALL2(1,VARREF(YgooSmathYtruncS),T4,YPint((P)2));
  T2 = CALL1(1,VARREF(YgooSmacrosY1st),T3);
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),t_,T2);
  xF1790 = T1;
  T5 = FUNFAB(fun_62,1,xF1790);
  CALL2(1,VARREF(YgooScolsSseqYdo_key_vals),T5,key_vals_);
  T0 = xF1790;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_suffixQ_64) {
  P s_,end_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(end_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),end_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,T4);
  T5 = CALL1(1,VARREF(YgooStypesYlen),s_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,T2,T5);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,end_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_prefixQ_65) {
  P s_,begin_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(begin_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooStypesYlen),begin_);
  T1 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),T2);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,begin_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_repeat_66) {
  P s_,n_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(n_, 1);
loop:
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

FUNCODEDEF(fun_split_67) {
  P s_,sep_;
  P matchF1791;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),s_,sep_);
  matchF1791 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYEE),matchF1791,YPfalse);
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ylst),s_);
    T2 = T4;
  } else {
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),s_,YPint((P)0),matchF1791);
    T9 = CALL2(1,VARREF(YgooSmathYA),matchF1791,YPint((P)1));
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

FUNCODEDEF(fun_68) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),x_,FREEREF(0),y_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_join_69) {
  P ss_,sep_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(sep_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yclass_of),sep_);
    T2 = CALL1(1,VARREF(YgooScolsScolYempty),T3);
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_68,1,sep_);
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
loop:
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
  P tmpF1793;
  P tmpF1792;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
DEFCREGS();
loop:
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
  T13 = BOUNDP(YgooScolsScolYkey_type);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsScolYkey_type);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_key_type_1;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsScolYkey_type,T11);
  lit_68 = YPPlist(1,YPPsym((P)"x"));
  T15 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_1st_2 = YPmet(FUNCODEREF(fun_1st_2),LITREF(lit_2),T15,ENVNUL,PNUL,sloc(109));
  T18 = BOUNDP(YgooSmacrosY1st);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSmacrosY1st);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_1st_2;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSmacrosY1st,T16);
  lit_69 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2nd_3 = YPmet(FUNCODEREF(fun_2nd_3),LITREF(lit_4),T20,ENVNUL,PNUL,sloc(111));
  T23 = BOUNDP(YgooSmacrosY2nd);
  if (T23 != YPfalse) {
    T22 = VARREF(YgooSmacrosY2nd);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_2nd_3;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YgooSmacrosY2nd,T21);
  lit_70 = YPPlist(1,YPPsym((P)"x"));
  T25 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3rd_4 = YPmet(FUNCODEREF(fun_3rd_4),LITREF(lit_6),T25,ENVNUL,PNUL,sloc(113));
  T28 = BOUNDP(YgooScolsSseqY3rd);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooScolsSseqY3rd);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_3rd_4;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooScolsSseqY3rd,T26);
  lit_71 = YPPsym((P)"map");
  lit_72 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_73 = YPPsym((P)"con");
  lit_74 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T31 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_5 = YPmet(FUNCODEREF(fun_con_5),LITREF(lit_73),T31,ENVNUL,PNUL,sloc(116));
  T30 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_6 = YPmet(FUNCODEREF(fun_map_6),LITREF(lit_71),T30,ENVNUL,PNUL,sloc(115));
  T34 = BOUNDP(YgooSmacrosYmap);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSmacrosYmap);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_map_6;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSmacrosYmap,T32);
  lit_75 = YPPsym((P)"map-keyed");
  lit_76 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"c"));
  lit_77 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"e"));
  T37 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_7 = YPmet(FUNCODEREF(fun_con_7),LITREF(lit_73),T37,ENVNUL,PNUL,sloc(122));
  T36 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_map_keyed_8 = YPmet(FUNCODEREF(fun_map_keyed_8),LITREF(lit_75),T36,ENVNUL,PNUL,sloc(121));
  T40 = BOUNDP(YgooScolsScolYmap_keyed);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooScolsScolYmap_keyed);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_map_keyed_8;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooScolsScolYmap_keyed,T38);
  lit_78 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  lit_79 = YPPsym((P)"lop");
  lit_80 = YPPlist(2,YPPsym((P)"ex"),YPPsym((P)"ey"));
  T43 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_lop_9 = YPmet(FUNCODEREF(fun_lop_9),LITREF(lit_79),T43,ENVNUL,PNUL,sloc(128));
  T42 = YPsig(LITREF(lit_78),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_do2_10 = YPmet(FUNCODEREF(fun_do2_10),LITREF(lit_14),T42,ENVNUL,PNUL,sloc(127));
  T46 = BOUNDP(YgooScolsSseqYdo2);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooScolsSseqYdo2);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_do2_10;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooScolsSseqYdo2,T44);
  lit_81 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"z"));
  lit_82 = YPPlist(3,YPPsym((P)"ex"),YPPsym((P)"ey"),YPPsym((P)"ez"));
  T49 = YPsig(LITREF(lit_82),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lop_11 = YPmet(FUNCODEREF(fun_lop_11),LITREF(lit_79),T49,ENVNUL,PNUL,sloc(134));
  T48 = YPsig(LITREF(lit_81),YPPlist(4,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do3_12 = YPmet(FUNCODEREF(fun_do3_12),LITREF(lit_16),T48,ENVNUL,PNUL,sloc(133));
  T52 = BOUNDP(YgooScolsSseqYdo3);
  if (T52 != YPfalse) {
    T51 = VARREF(YgooScolsSseqYdo3);
  } else {
    T51 = YPfalse;
  }
  T53 = fun_do3_12;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T53);
  VARSET(YgooScolsSseqYdo3,T50);
  lit_83 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"x"),YPPsym((P)"y"));
  lit_84 = YPPlist(3,YPPsym((P)"res"),YPPsym((P)"ex"),YPPsym((P)"ey"));
  T55 = YPsig(LITREF(lit_84),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_13 = YPmet(FUNCODEREF(fun_con_13),LITREF(lit_73),T55,ENVNUL,PNUL,sloc(140));
  T54 = YPsig(LITREF(lit_83),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_map2_14 = YPmet(FUNCODEREF(fun_map2_14),LITREF(lit_18),T54,ENVNUL,PNUL,sloc(139));
  T58 = BOUNDP(YgooSmacrosYmap2);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSmacrosYmap2);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_map2_14;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSmacrosYmap2,T56);
  lit_85 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  lit_86 = YPPsym((P)"fnd");
  lit_87 = YPPlist(2,YPPsym((P)"ex"),YPPsym((P)"ey"));
  T61 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_15 = YPmet(FUNCODEREF(fun_fnd_15),LITREF(lit_86),T61,ENVNUL,PNUL,sloc(147));
  T60 = YPsig(LITREF(lit_85),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_any2Q_16 = YPmet(FUNCODEREF(fun_any2Q_16),LITREF(lit_20),T60,ENVNUL,PNUL,sloc(146));
  T64 = BOUNDP(YgooScolsSseqYany2Q);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScolsSseqYany2Q);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_any2Q_16;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScolsSseqYany2Q,T62);
  lit_88 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"x"),YPPsym((P)"y"));
  lit_89 = YPPlist(2,YPPsym((P)"ex"),YPPsym((P)"ey"));
  T67 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_fnd_17 = YPmet(FUNCODEREF(fun_fnd_17),LITREF(lit_86),T67,ENVNUL,PNUL,sloc(154));
  T66 = YPsig(LITREF(lit_88),YPPlist(3,VARREF(YLfunG),VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_all2Q_18 = YPmet(FUNCODEREF(fun_all2Q_18),LITREF(lit_22),T66,ENVNUL,PNUL,sloc(153));
  T70 = BOUNDP(YgooStypesYall2Q);
  if (T70 != YPfalse) {
    T69 = VARREF(YgooStypesYall2Q);
  } else {
    T69 = YPfalse;
  }
  T71 = fun_all2Q_18;
  T68 = XCALL2(1,VARREF(YPdefine_method),T69,T71);
  VARSET(YgooStypesYall2Q,T68);
  lit_90 = YPPsym((P)"=");
  lit_91 = YPPlist(2,YPPsym((P)"c1"),YPPsym((P)"c2"));
  lit_92 = YPPsym((P)"eq");
  lit_93 = YPPlist(2,YPPsym((P)"e1"),YPPsym((P)"e2"));
  T73 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eq_19 = YPmet(FUNCODEREF(fun_eq_19),LITREF(lit_92),T73,ENVNUL,PNUL,sloc(160));
  T72 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_E_20 = YPmet(FUNCODEREF(fun_E_20),LITREF(lit_90),T72,ENVNUL,PNUL,sloc(159));
  T76 = BOUNDP(YgooSmathYE);
  if (T76 != YPfalse) {
    T75 = VARREF(YgooSmathYE);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_E_20;
  T74 = XCALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(YgooSmathYE,T74);
  lit_94 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_last_21 = YPmet(FUNCODEREF(fun_last_21),LITREF(lit_8),T78,ENVNUL,PNUL,sloc(167));
  T81 = BOUNDP(YgooSmacrosYlast);
  if (T81 != YPfalse) {
    T80 = VARREF(YgooSmacrosYlast);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_last_21;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(YgooSmacrosYlast,T79);
  lit_95 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"v"));
  lit_96 = YPPlist(1,YPPsym((P)"a"));
  T85 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T85,ENVNUL,PNUL,sloc(170));
  T84 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T83 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),T84,Ynil);
  fun_pos_23 = YPmet(FUNCODEREF(fun_pos_23),LITREF(lit_10),T83,ENVNUL,PNUL,sloc(169));
  T88 = BOUNDP(YgooScolsSseqYpos);
  if (T88 != YPfalse) {
    T87 = VARREF(YgooScolsSseqYpos);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_pos_23;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YgooScolsSseqYpos,T86);
  lit_97 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_98 = YPPsym((P)"outer");
  lit_99 = YPPlist(1,YPPsym((P)"xsi"));
  lit_100 = YPPsym((P)"inner");
  lit_101 = YPPlist(2,YPPsym((P)"xi"),YPPsym((P)"yi"));
  T93 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_24 = YPmet(FUNCODEREF(fun_inner_24),LITREF(lit_100),T93,ENVNUL,PNUL,sloc(175));
  T92 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_outer_25 = YPmet(FUNCODEREF(fun_outer_25),LITREF(lit_98),T92,ENVNUL,PNUL,sloc(173));
  T91 = XCALL1(1,VARREF(YgooScolsSseqYOtQ),VARREF(YLintG));
  T90 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),T91,Ynil);
  fun_finds_26 = YPmet(FUNCODEREF(fun_finds_26),LITREF(lit_12),T90,ENVNUL,PNUL,sloc(172));
  T96 = BOUNDP(YgooScolsSseqYfinds);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooScolsSseqYfinds);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_finds_26;
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooScolsSseqYfinds,T94);
  lit_102 = YPPlist(1,YPPsym((P)"x"));
  lit_103 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"e"));
  T99 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_27 = YPmet(FUNCODEREF(fun_con_27),LITREF(lit_73),T99,ENVNUL,PNUL,sloc(184));
  T98 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_rev_28 = YPmet(FUNCODEREF(fun_rev_28),LITREF(lit_24),T98,ENVNUL,PNUL,sloc(183));
  T102 = BOUNDP(YgooScolsSseqYrev);
  if (T102 != YPfalse) {
    T101 = VARREF(YgooScolsSseqYrev);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_rev_28;
  T100 = XCALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(YgooScolsSseqYrev,T100);
  lit_104 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"ss"));
  T104 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLseqG)),YPtrue,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_cat_29 = YPmet(FUNCODEREF(fun_cat_29),LITREF(lit_26),T104,ENVNUL,PNUL,sloc(191));
  T107 = BOUNDP(YgooSmacrosYcat);
  if (T107 != YPfalse) {
    T106 = VARREF(YgooSmacrosYcat);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_cat_29;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(YgooSmacrosYcat,T105);
  lit_105 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  lit_106 = YPPsym((P)"con-x");
  lit_107 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"ex"));
  lit_108 = YPPsym((P)"con-y");
  lit_109 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"ey"));
  T111 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_y_30 = YPmet(FUNCODEREF(fun_con_y_30),LITREF(lit_108),T111,ENVNUL,PNUL,sloc(197));
  T110 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_x_31 = YPmet(FUNCODEREF(fun_con_x_31),LITREF(lit_106),T110,ENVNUL,PNUL,sloc(195));
  T109 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_cat2_32 = YPmet(FUNCODEREF(fun_cat2_32),LITREF(lit_28),T109,ENVNUL,PNUL,sloc(194));
  T114 = BOUNDP(YgooScolsSseqYcat2);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooScolsSseqYcat2);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_cat2_32;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooScolsSseqYcat2,T112);
  lit_110 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"from"),YPPsym((P)"below"));
  lit_111 = YPPlist(3,YPPsym((P)"seq"),YPPsym((P)"i"),YPPsym((P)"e"));
  T117 = YPsig(LITREF(lit_111),YPPlist(3,VARREF(YLanyG),VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_con_x_33 = YPmet(FUNCODEREF(fun_con_x_33),LITREF(lit_106),T117,ENVNUL,PNUL,sloc(204));
  T116 = YPsig(LITREF(lit_110),YPPlist(3,VARREF(YLseqG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_sub_34 = YPmet(FUNCODEREF(fun_sub_34),LITREF(lit_34),T116,ENVNUL,PNUL,sloc(203));
  T120 = BOUNDP(YgooScolsSseqYsub);
  if (T120 != YPfalse) {
    T119 = VARREF(YgooScolsSseqYsub);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_sub_34;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YgooScolsSseqYsub,T118);
  lit_112 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"from"));
  T122 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_subT_35 = YPmet(FUNCODEREF(fun_subT_35),LITREF(lit_36),T122,ENVNUL,PNUL,sloc(210));
  T125 = BOUNDP(YgooScolsSseqYsubT);
  if (T125 != YPfalse) {
    T124 = VARREF(YgooScolsSseqYsubT);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_subT_35;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YgooScolsSseqYsubT,T123);
  lit_113 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"x"));
  T127 = YPsig(LITREF(lit_113),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_push_36 = YPmet(FUNCODEREF(fun_push_36),LITREF(lit_30),T127,ENVNUL,PNUL,sloc(213));
  T130 = BOUNDP(YgooScolsSseqYpush);
  if (T130 != YPfalse) {
    T129 = VARREF(YgooScolsSseqYpush);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_push_36;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YgooScolsSseqYpush,T128);
  lit_114 = YPPlist(1,YPPsym((P)"l"));
  T133 = XCALL2(1,VARREF(YtT),VARREF(YLseqG),VARREF(YLanyG));
  T132 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),T133,Ynil);
  fun_pop_37 = YPmet(FUNCODEREF(fun_pop_37),LITREF(lit_32),T132,ENVNUL,PNUL,sloc(216));
  T136 = BOUNDP(YgooScolsSseqYpop);
  if (T136 != YPfalse) {
    T135 = VARREF(YgooScolsSseqYpop);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_pop_37;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YgooScolsSseqYpop,T134);
  lit_115 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  lit_116 = YPPlist(2,YPPsym((P)"seq"),YPPsym((P)"e"));
  T139 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_con_38 = YPmet(FUNCODEREF(fun_con_38),LITREF(lit_73),T139,ENVNUL,PNUL,sloc(220));
  T138 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_pick_39 = YPmet(FUNCODEREF(fun_pick_39),LITREF(lit_40),T138,ENVNUL,PNUL,sloc(219));
  T142 = BOUNDP(YgooScolsSseqYpick);
  if (T142 != YPfalse) {
    T141 = VARREF(YgooScolsSseqYpick);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_pick_39;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YgooScolsSseqYpick,T140);
  lit_117 = YPPlist(2,YPPsym((P)"test"),YPPsym((P)"x"));
  lit_118 = YPPlist(1,YPPsym((P)"x"));
  T145 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T145,ENVNUL,PNUL,sloc(227));
  T144 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_reject_41 = YPmet(FUNCODEREF(fun_reject_41),LITREF(lit_42),T144,ENVNUL,PNUL,sloc(226));
  T148 = BOUNDP(YgooScolsSseqYreject);
  if (T148 != YPfalse) {
    T147 = VARREF(YgooScolsSseqYreject);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_reject_41;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YgooScolsSseqYreject,T146);
  lit_119 = YPPsym((P)"del");
  lit_120 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"key"));
  T150 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_42 = YPmet(FUNCODEREF(fun_del_42),LITREF(lit_119),T150,ENVNUL,PNUL,sloc(229));
  T153 = BOUNDP(YgooScolsScolYdel);
  if (T153 != YPfalse) {
    T152 = VARREF(YgooScolsScolYdel);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_del_42;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YgooScolsScolYdel,T151);
  lit_121 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"x"));
  lit_122 = YPPlist(1,YPPsym((P)"e"));
  T156 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T156,ENVNUL,PNUL,sloc(233));
  T155 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_del_vals_44 = YPmet(FUNCODEREF(fun_del_vals_44),LITREF(lit_44),T155,ENVNUL,PNUL,sloc(232));
  T159 = BOUNDP(YgooScolsSseqYdel_vals);
  if (T159 != YPfalse) {
    T158 = VARREF(YgooScolsSseqYdel_vals);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_del_vals_44;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YgooScolsSseqYdel_vals,T157);
  lit_123 = YPPlist(1,YPPsym((P)"x"));
  lit_124 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  T162 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T162,ENVNUL,PNUL,sloc(236));
  T161 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_del_dups_46 = YPmet(FUNCODEREF(fun_del_dups_46),LITREF(lit_46),T161,ENVNUL,PNUL,sloc(235));
  T165 = BOUNDP(YgooScolsSseqYdel_dups);
  if (T165 != YPfalse) {
    T164 = VARREF(YgooScolsSseqYdel_dups);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_del_dups_46;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YgooScolsSseqYdel_dups,T163);
  lit_125 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"v"),YPPsym((P)"before"));
  lit_126 = YPPsym((P)"copy");
  lit_127 = YPPlist(3,YPPsym((P)"r"),YPPsym((P)"i"),YPPsym((P)"e"));
  T168 = YPsig(LITREF(lit_127),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_copy_47 = YPmet(FUNCODEREF(fun_copy_47),LITREF(lit_126),T168,ENVNUL,PNUL,sloc(239));
  T167 = YPsig(LITREF(lit_125),YPPlist(3,VARREF(YLseqG),VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLseqG),Ynil);
  fun_ins_48 = YPmet(FUNCODEREF(fun_ins_48),LITREF(lit_38),T167,ENVNUL,PNUL,sloc(238));
  T171 = BOUNDP(YgooScolsSseqYins);
  if (T171 != YPfalse) {
    T170 = VARREF(YgooScolsSseqYins);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_ins_48;
  T169 = XCALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(YgooScolsSseqYins,T169);
  lit_128 = YPPsym((P)"elts");
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"keys"));
  lit_130 = YPPlist(4,YPPsym((P)"r"),YPPsym((P)"e"),YPPsym((P)"i"),YPPsym((P)"keys"));
  T174 = YPsig(LITREF(lit_130),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_copy_49 = YPmet(FUNCODEREF(fun_copy_49),LITREF(lit_126),T174,ENVNUL,PNUL,sloc(248));
  T173 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_elts_50 = YPmet(FUNCODEREF(fun_elts_50),LITREF(lit_128),T173,ENVNUL,PNUL,sloc(247));
  T177 = BOUNDP(YgooScolsScolYelts);
  if (T177 != YPfalse) {
    T176 = VARREF(YgooScolsScolYelts);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_elts_50;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(YgooScolsScolYelts,T175);
  lit_131 = YPPlist(1,YPPsym((P)"x"));
  T179 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_sort_51 = YPmet(FUNCODEREF(fun_sort_51),LITREF(lit_48),T179,ENVNUL,PNUL,sloc(262));
  T182 = BOUNDP(YgooScolsSseqYsort);
  if (T182 != YPfalse) {
    T181 = VARREF(YgooScolsSseqYsort);
  } else {
    T181 = YPfalse;
  }
  T183 = fun_sort_51;
  T180 = XCALL2(1,VARREF(YPdefine_method),T181,T183);
  VARSET(YgooScolsSseqYsort,T180);
  lit_132 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"test"));
  T184 = YPsig(LITREF(lit_132),YPPlist(2,VARREF(YLseqXG),VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLseqXG),Ynil);
  fun_sort_by_52 = YPmet(FUNCODEREF(fun_sort_by_52),LITREF(lit_50),T184,ENVNUL,PNUL,sloc(265));
  T187 = BOUNDP(YgooScolsSseqYsort_by);
  if (T187 != YPfalse) {
    T186 = VARREF(YgooScolsSseqYsort_by);
  } else {
    T186 = YPfalse;
  }
  T188 = fun_sort_by_52;
  T185 = XCALL2(1,VARREF(YPdefine_method),T186,T188);
  VARSET(YgooScolsSseqYsort_by,T185);
  lit_133 = YPPsym((P)"keys");
  lit_134 = YPPlist(1,YPPsym((P)"d"));
  T189 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLseqG),Ynil);
  fun_keys_53 = YPmet(FUNCODEREF(fun_keys_53),LITREF(lit_133),T189,ENVNUL,PNUL,sloc(270));
  T192 = BOUNDP(YgooScolsScolYkeys);
  if (T192 != YPfalse) {
    T191 = VARREF(YgooScolsScolYkeys);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_keys_53;
  T190 = XCALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(YgooScolsScolYkeys,T190);
  lit_135 = YPPsym((P)"range-check");
  lit_136 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T194 = YPsig(LITREF(lit_136),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_check = YPmet(FUNCODEREF(YgooScolsSseqYrange_check),LITREF(lit_135),T194,ENVNUL,PNUL,sloc(273));
  T195 = YgooScolsSseqYrange_check;
  VARSET(YgooScolsSseqYrange_check,T195);
  lit_137 = YPPsym((P)"range-check?");
  lit_138 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"i"));
  T196 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooScolsSseqYrange_checkQ = YPmet(FUNCODEREF(YgooScolsSseqYrange_checkQ),LITREF(lit_137),T196,ENVNUL,PNUL,sloc(277));
  T197 = YgooScolsSseqYrange_checkQ;
  VARSET(YgooScolsSseqYrange_checkQ,T197);
  lit_139 = YPPsym((P)"add");
  lit_140 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"e"));
  T198 = YPsig(LITREF(lit_140),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_56 = YPmet(FUNCODEREF(fun_add_56),LITREF(lit_139),T198,ENVNUL,PNUL,sloc(280));
  T201 = BOUNDP(YgooScolsScolYadd);
  if (T201 != YPfalse) {
    T200 = VARREF(YgooScolsScolYadd);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_add_56;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YgooScolsScolYadd,T199);
  lit_141 = YPPsym((P)"add-new");
  lit_142 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"x"));
  T203 = YPsig(LITREF(lit_142),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_add_new_57 = YPmet(FUNCODEREF(fun_add_new_57),LITREF(lit_141),T203,ENVNUL,PNUL,sloc(283));
  T206 = BOUNDP(YgooScolsSseqYadd_new);
  if (T206 != YPfalse) {
    T205 = VARREF(YgooScolsSseqYadd_new);
  } else {
    T205 = YPfalse;
  }
  T207 = fun_add_new_57;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T207);
  VARSET(YgooScolsSseqYadd_new,T204);
  lit_143 = YPPlist(1,YPPsym((P)"s"));
  lit_144 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"e"));
  lit_145 = YPsb((P)"");
  lit_146 = YPsb((P)" ");
  T209 = YPsig(LITREF(lit_144),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T209,ENVNUL,PNUL,sloc(288));
  T208 = YPsig(LITREF(lit_143),YPPlist(1,VARREF(YLseqG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_vals_to_str_59 = YPmet(FUNCODEREF(fun_vals_to_str_59),LITREF(lit_62),T208,ENVNUL,PNUL,sloc(287));
  T212 = BOUNDP(YgooScolsSseqYvals_to_str);
  if (T212 != YPfalse) {
    T211 = VARREF(YgooScolsSseqYvals_to_str);
  } else {
    T211 = YPfalse;
  }
  T213 = fun_vals_to_str_59;
  T210 = XCALL2(1,VARREF(YPdefine_method),T211,T213);
  VARSET(YgooScolsSseqYvals_to_str,T210);
  lit_147 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"key-vals"));
  lit_148 = YPPsym((P)"rep");
  lit_149 = YPPlist(1,YPPsym((P)"e"));
  T215 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_rep_60 = YPmet(FUNCODEREF(fun_rep_60),LITREF(lit_148),T215,ENVNUL,PNUL,sloc(291));
  T214 = YPsig(LITREF(lit_147),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_do_key_vals_61 = YPmet(FUNCODEREF(fun_do_key_vals_61),LITREF(lit_64),T214,ENVNUL,PNUL,sloc(290));
  T218 = BOUNDP(YgooScolsSseqYdo_key_vals);
  if (T218 != YPfalse) {
    T217 = VARREF(YgooScolsSseqYdo_key_vals);
  } else {
    T217 = YPfalse;
  }
  T219 = fun_do_key_vals_61;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T219);
  VARSET(YgooScolsSseqYdo_key_vals,T216);
  lit_150 = YPPsym((P)"col");
  lit_151 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"key-vals"));
  lit_152 = YPPlist(2,YPPsym((P)"key"),YPPsym((P)"val"));
  T222 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T222,ENVNUL,PNUL,sloc(300));
  T221 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLcolG));
  T220 = YPsig(LITREF(lit_151),YPPlist(1,T221),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_63 = YPmet(FUNCODEREF(fun_col_63),LITREF(lit_150),T220,ENVNUL,PNUL,sloc(298));
  T225 = BOUNDP(YgooScolsScolYcol);
  if (T225 != YPfalse) {
    T224 = VARREF(YgooScolsScolYcol);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_col_63;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YgooScolsScolYcol,T223);
  lit_153 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"end"));
  T227 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_suffixQ_64 = YPmet(FUNCODEREF(fun_suffixQ_64),LITREF(lit_52),T227,ENVNUL,PNUL,sloc(303));
  T230 = BOUNDP(YgooScolsSseqYsuffixQ);
  if (T230 != YPfalse) {
    T229 = VARREF(YgooScolsSseqYsuffixQ);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_suffixQ_64;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YgooScolsSseqYsuffixQ,T228);
  lit_154 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"begin"));
  T232 = YPsig(LITREF(lit_154),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_prefixQ_65 = YPmet(FUNCODEREF(fun_prefixQ_65),LITREF(lit_54),T232,ENVNUL,PNUL,sloc(306));
  T235 = BOUNDP(YgooScolsSseqYprefixQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YgooScolsSseqYprefixQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_prefixQ_65;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YgooScolsSseqYprefixQ,T233);
  lit_155 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"n"));
  T237 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLseqG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_repeat_66 = YPmet(FUNCODEREF(fun_repeat_66),LITREF(lit_56),T237,ENVNUL,PNUL,sloc(310));
  T240 = BOUNDP(YgooScolsSseqYrepeat);
  if (T240 != YPfalse) {
    T239 = VARREF(YgooScolsSseqYrepeat);
  } else {
    T239 = YPfalse;
  }
  T241 = fun_repeat_66;
  T238 = XCALL2(1,VARREF(YPdefine_method),T239,T241);
  VARSET(YgooScolsSseqYrepeat,T238);
  lit_156 = YPPlist(2,YPPsym((P)"s"),YPPsym((P)"sep"));
  T242 = YPsig(LITREF(lit_156),YPPlist(2,VARREF(YLseqG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_split_67 = YPmet(FUNCODEREF(fun_split_67),LITREF(lit_58),T242,ENVNUL,PNUL,sloc(317));
  T245 = BOUNDP(YgooScolsSseqYsplit);
  if (T245 != YPfalse) {
    T244 = VARREF(YgooScolsSseqYsplit);
  } else {
    T244 = YPfalse;
  }
  T246 = fun_split_67;
  T243 = XCALL2(1,VARREF(YPdefine_method),T244,T246);
  VARSET(YgooScolsSseqYsplit,T243);
  lit_157 = YPPlist(2,YPPsym((P)"ss"),YPPsym((P)"sep"));
  lit_158 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T248 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_68 = YPmet(FUNCODEREF(fun_68),YPfalse,T248,ENVNUL,PNUL,sloc(328));
  T247 = YPsig(LITREF(lit_157),YPPlist(2,VARREF(YLseqG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLseqG),Ynil);
  fun_join_69 = YPmet(FUNCODEREF(fun_join_69),LITREF(lit_60),T247,ENVNUL,PNUL,sloc(325));
  T251 = BOUNDP(YgooScolsSseqYjoin);
  if (T251 != YPfalse) {
    T250 = VARREF(YgooScolsSseqYjoin);
  } else {
    T250 = YPfalse;
  }
  T252 = fun_join_69;
  T249 = XCALL2(1,VARREF(YPdefine_method),T250,T252);
  VARSET(YgooScolsSseqYjoin,T249);
  tmpF1792 = YPfalse;
  if (tmpF1792 != YPfalse) {
    T253 = VARREF(YgooScolsSseqYbelow);
  } else {
    T253 = YPfalse;
  }
  tmpF1793 = YPfalse;
  if (tmpF1793 != YPfalse) {
    T254 = VARREF(YgooScolsSseqYsort_byX);
  } else {
    T254 = YPfalse;
  }
  T255 = YPfalse;
  return T255;
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
  {"$max-int", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sort-by", CVAR, &YgooScolsSseqYsort_by},
  {"add-new", CVAR, &YgooScolsSseqYadd_new},
  {"range-check?", CVAR, &YgooScolsSseqYrange_checkQ},
  {"sort-by!", CVAR, &YgooScolsSseqYsort_byX},
  {"push", CVAR, &YgooScolsSseqYpush},
  {"do2", CVAR, &YgooScolsSseqYdo2},
  {"sort", CVAR, &YgooScolsSseqYsort},
  {"finds", CVAR, &YgooScolsSseqYfinds},
  {"cat2", CVAR, &YgooScolsSseqYcat2},
  {"range-check", CVAR, &YgooScolsSseqYrange_check},
  {"del-dups", CVAR, &YgooScolsSseqYdel_dups},
  {"---main-1---", PVAR, NULL},
  {"del-vals", CVAR, &YgooScolsSseqYdel_vals},
  {"do-key-vals", CVAR, &YgooScolsSseqYdo_key_vals},
  {"rev", CVAR, &YgooScolsSseqYrev},
  {"---main-0---", PVAR, NULL},
  {"reject", CVAR, &YgooScolsSseqYreject},
  {"3rd", CVAR, &YgooScolsSseqY3rd},
  {"vals-to-str", CVAR, &YgooScolsSseqYvals_to_str},
  {"pick", CVAR, &YgooScolsSseqYpick},
  {"join", CVAR, &YgooScolsSseqYjoin},
  {"any2?", CVAR, &YgooScolsSseqYany2Q},
  {"split", CVAR, &YgooScolsSseqYsplit},
  {"@t?", CVAR, &YgooScolsSseqYOtQ},
  {"ins", CVAR, &YgooScolsSseqYins},
  {"repeat", CVAR, &YgooScolsSseqYrepeat},
  {"sub*", CVAR, &YgooScolsSseqYsubT},
  {"prefix?", CVAR, &YgooScolsSseqYprefixQ},
  {"below", CVAR, &YgooScolsSseqYbelow},
  {"do3", CVAR, &YgooScolsSseqYdo3},
  {"pos", CVAR, &YgooScolsSseqYpos},
  {"sub", CVAR, &YgooScolsSseqYsub},
  {"suffix?", CVAR, &YgooScolsSseqYsuffixQ},
  {"pop", CVAR, &YgooScolsSseqYpop},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sort-by", NULL},
  {"range-check?", NULL},
  {"push", NULL},
  {"sort", NULL},
  {"finds", NULL},
  {"cat2", NULL},
  {"range-check", NULL},
  {"del-dups", NULL},
  {"del-vals", NULL},
  {"cat", NULL},
  {"last", NULL},
  {"do-key-vals", NULL},
  {"rev", NULL},
  {"reject", NULL},
  {"3rd", NULL},
  {"vals-to-str", NULL},
  {"2nd", NULL},
  {"pick", NULL},
  {"all2?", NULL},
  {"join", NULL},
  {"1st", NULL},
  {"any2?", NULL},
  {"split", NULL},
  {"ins", NULL},
  {"repeat", NULL},
  {"sub*", NULL},
  {"map2", NULL},
  {"<seq.>", NULL},
  {"<seq>", NULL},
  {"prefix?", NULL},
  {"below", NULL},
  {"do3", NULL},
  {"pos", NULL},
  {"sub", NULL},
  {"suffix?", NULL},
  {"pop", NULL},
  {"do2", NULL},
  {"sort-by!", NULL},
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
