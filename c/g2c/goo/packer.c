/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/packer");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/packer */

EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLnumG,"goo/boot","<num>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
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
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSpackerYpacker_reser_setter,"goo/packer","packer-reser-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yhead,"goo/boot","head");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSpackerYpacker,"goo/packer","packer");
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
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
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
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ylst,"goo/boot","lst");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
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
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
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
EXT(YPsnul,"goo/boot","%snul");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooStypesYas,"goo/types","as");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yunexec,"goo/boot","unexec");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSpackerYpacker_adder_setter,"goo/packer","packer-adder-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLpropG,"goo/boot","<prop>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_66);
DEFLIT(lit_73);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_42);
DEFLIT(lit_59);
DEFLIT(lit_14);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_60);
DEFLIT(lit_5);
DEFLIT(lit_7);
DEFLIT(lit_36);
DEFLIT(lit_31);
DEFLIT(lit_37);
DEFLIT(lit_81);
DEFLIT(lit_38);
DEFLIT(lit_4);
DEFLIT(lit_52);
DEFLIT(lit_54);
DEFLIT(lit_20);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_69);
DEFLIT(lit_34);
DEFLIT(lit_32);
DEFLIT(lit_80);
DEFLIT(lit_22);
DEFLIT(lit_82);
DEFLIT(lit_63);
DEFLIT(lit_43);
DEFLIT(lit_0);
DEFLIT(lit_35);
DEFLIT(lit_67);
DEFLIT(lit_6);
DEFLIT(lit_56);
DEFLIT(lit_46);
DEFLIT(lit_9);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_16);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_79);
DEFLIT(lit_47);
DEFLIT(lit_71);
DEFLIT(lit_27);
DEFLIT(lit_78);
DEFLIT(lit_25);
DEFLIT(lit_10);
DEFLIT(lit_83);
DEFLIT(lit_72);
DEFLIT(lit_58);
DEFLIT(lit_45);
DEFLIT(lit_23);
DEFLIT(lit_55);
DEFLIT(lit_33);
DEFLIT(lit_12);
DEFLIT(lit_13);
DEFLIT(lit_49);
DEFLIT(lit_15);
DEFLIT(lit_65);
DEFLIT(lit_11);
DEFLIT(lit_53);
DEFLIT(lit_24);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_75);
DEFLIT(lit_64);
DEFLIT(lit_1);
DEFLIT(lit_41);
DEFLIT(lit_19);
DEFLIT(lit_17);
DEFLIT(lit_77);
DEFLIT(lit_76);
DEFLIT(lit_40);
DEFLIT(lit_44);
DEFLIT(lit_74);
DEFLIT(lit_57);
DEFLIT(lit_50);
DEFLIT(lit_48);
DEFLIT(lit_51);
DEFLIT(lit_70);
DEFLIT(lit_84);
DEFLIT(lit_18);

/* FUNCTIONS: */

LOCFOR(fun_packer_value_0);
LOCFOR(fun_packer_value_setter_1);
LOCFOR(fun_packer_adder_2);
LOCFOR(fun_packer_adder_setter_3);
LOCFOR(fun_packer_reser_4);
LOCFOR(fun_packer_reser_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_packer_8);
LOCFOR(fun_packer_add_9);
LOCFOR(fun_packer_res_10);
LOCFOR(fun_11);
LOCFOR(fun_packer_fab_12);
LOCFOR(fun_13);
LOCFOR(fun_packer_fab_14);
LOCFOR(fun_x_1324_15);
LOCFOR(fun_x_1330_16);
LOCFOR(fun_17);
LOCFOR(fun_x_1327_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1343_22);
LOCFOR(fun_x_1352_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1349_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1346_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1356_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1360_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1364_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1368_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
extern P YgooSpackerY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = fun_6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_8) {
  P init_,add_,res_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
loop:
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_add_9) {
  P a_,x_;
  P x_1314F1912;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
loop:
  x_1314F1912 = a_;
  T3 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T1 = CALL2(1,T3,x_,T2);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T1,x_1314F1912);
  T0 = x_1314F1912;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_res_10) {
  P a_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = FUNFAB(fun_11,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_packer_fab_14) {
  P t_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = fun_13;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1324_15) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_35),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1330_16) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_43));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_1329F1926;
  P x_1329F1925;
  P x_1329F1924;
  P x_1329F1923;
  P x_1329F1922;
  P x_1329F1921;
  P x_1329F1920;
  P x_1329F1919;
  P x_1329F1918;
  P restF1917;
  P packF1916;
  P varF1915;
  P x_1329F1914;
  P x_1330F1913;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1330_16,1);
  x_1330F1913 = T1;
  FUNINIT(x_1330F1913, 1,return_);
  x_1329F1914 = FREEREF(0);
  varF1915 = YPfalse;
  varF1915 = BOXFAB(varF1915);
  packF1916 = YPfalse;
  packF1916 = BOXFAB(packF1916);
  restF1917 = YPfalse;
  restF1917 = BOXFAB(restF1917);
  T9 = CALL2(1,VARREF(YisaQ),x_1329F1914,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F1914,x_1330F1913);
    x_1329F1918 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1329F1918,x_1330F1913);
    BOXVAL(varF1915) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1329F1918);
    x_1329F1919 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1329F1919,x_1330F1913);
    BOXVAL(packF1916) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1329F1919);
    x_1329F1920 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F1920,x_1330F1913);
    x_1329F1921 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1329F1921,x_1330F1913);
    T21 = CALL1(1,VARREF(Ytail),x_1329F1920);
    x_1329F1922 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1329F1922,x_1330F1913);
    T18 = T22;
    T15 = T18;
    T12 = T15;
    T23 = CALL1(1,VARREF(Ytail),x_1329F1914);
    x_1329F1923 = T23;
    BOXVAL(restF1917) = x_1329F1923;
    x_1329F1924 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1329F1924,x_1330F1913);
    x_1329F1925 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1329F1925,x_1330F1913);
    T28 = CALL1(1,VARREF(Ytail),x_1329F1924);
    x_1329F1926 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1329F1926,x_1330F1913);
    T25 = T29;
    T24 = T25;
    T10 = T24;
  } else {
    T30 = CALL2(1,x_1330F1913,LITREF(lit_36),x_1329F1914);
  }
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T38 = BOXVAL(varF1915);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = BOXVAL(packF1916);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_45));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat),T35,LITREF(lit_45));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T46 = BOXVAL(restF1917);
  T45 = CALL2(1,VARREF(YgooSmacrosYcat),T46,LITREF(lit_45));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(FREEREF(1));
  T42 = CALL4(1,VARREF(YgooSmacrosYcat),T43,T44,T47,LITREF(lit_45));
  T41 = CALL1(1,VARREF(Ylst),T42);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T41,LITREF(lit_45));
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1327_18) {
  P msg_,args_;
  P x_1328F1927;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1328F1927 = FREEREF(0);
  T3 = FUNFAB(fun_17,2,x_1328F1927,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1326F1929;
  P x_1327F1928;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1327_18,3);
  x_1327F1928 = T1;
  FUNINIT(x_1327F1928, 3,FREEREF(0),FREEREF(1),return_);
  x_1326F1929 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1326F1929,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1326F1929,x_1327F1928);
  } else {
    T5 = CALL2(1,x_1327F1928,LITREF(lit_36),x_1326F1929);
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T8 = BOXVAL(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_45));
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1325F1943;
  P x_1323F1942;
  P x_1323F1941;
  P x_1323F1940;
  P x_1323F1939;
  P x_1323F1938;
  P x_1323F1937;
  P x_1323F1936;
  P x_1323F1935;
  P x_1323F1934;
  P bodyF1933;
  P declsF1932;
  P x_1323F1931;
  P x_1324F1930;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1324_15,2);
  x_1324F1930 = T1;
  FUNINIT(x_1324F1930, 2,FREEREF(0),return_);
  x_1323F1931 = FREEREF(0);
  declsF1932 = YPfalse;
  declsF1932 = BOXFAB(declsF1932);
  bodyF1933 = YPfalse;
  bodyF1933 = BOXFAB(bodyF1933);
  T7 = CALL2(1,VARREF(YisaQ),x_1323F1931,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1323F1931,LITREF(lit_35),x_1324F1930);
    x_1323F1934 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F1934,x_1324F1930);
    x_1323F1935 = T11;
    BOXVAL(declsF1932) = x_1323F1935;
    x_1323F1936 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F1936,x_1324F1930);
    x_1323F1937 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1323F1937,x_1324F1930);
    T16 = CALL1(1,VARREF(Ytail),x_1323F1936);
    x_1323F1938 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1323F1938,x_1324F1930);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1323F1934);
    x_1323F1939 = T18;
    BOXVAL(bodyF1933) = x_1323F1939;
    x_1323F1940 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1323F1940,x_1324F1930);
    x_1323F1941 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1323F1941,x_1324F1930);
    T23 = CALL1(1,VARREF(Ytail),x_1323F1940);
    x_1323F1942 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1323F1942,x_1324F1930);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1324F1930,LITREF(lit_36),x_1323F1931);
  }
  T27 = BOXVAL(declsF1932);
  x_1325F1943 = T27;
  T29 = FUNFAB(fun_19,2,x_1325F1943,bodyF1933);
  T28 = with_exit(T29);
  T26 = T28;
  T5 = T26;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1343_22) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_51),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1352_23) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_43));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P return_;
  P x_1351F1951;
  P x_1351F1950;
  P x_1351F1949;
  P x_1351F1948;
  P restF1947;
  P nameF1946;
  P x_1351F1945;
  P x_1352F1944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1352_23,1);
  x_1352F1944 = T1;
  FUNINIT(x_1352F1944, 1,return_);
  x_1351F1945 = FREEREF(0);
  nameF1946 = YPfalse;
  nameF1946 = BOXFAB(nameF1946);
  restF1947 = YPfalse;
  restF1947 = BOXFAB(restF1947);
  T7 = CALL2(1,VARREF(YisaQ),x_1351F1945,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1351F1945,x_1352F1944);
    BOXVAL(nameF1946) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1351F1945);
    x_1351F1948 = T10;
    BOXVAL(restF1947) = x_1351F1948;
    x_1351F1949 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1351F1949,x_1352F1944);
    x_1351F1950 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1351F1950,x_1352F1944);
    T15 = CALL1(1,VARREF(Ytail),x_1351F1949);
    x_1351F1951 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1351F1951,x_1352F1944);
    T12 = T16;
    T11 = T12;
    T8 = T11;
  } else {
    T17 = CALL2(1,x_1352F1944,LITREF(lit_36),x_1351F1945);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T25 = BOXVAL(nameF1946);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T26,LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T27 = BOXVAL(restF1947);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T27,LITREF(lit_45));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T28 = BOXVAL(FREEREF(1));
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T28,LITREF(lit_45));
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1349_25) {
  P msg_,args_;
  P x_1350F1952;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1350F1952 = FREEREF(0);
  T3 = FUNFAB(fun_24,2,x_1350F1952,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_1348F1966;
  P x_1348F1965;
  P x_1348F1964;
  P x_1348F1963;
  P x_1348F1962;
  P x_1348F1961;
  P x_1348F1960;
  P x_1348F1959;
  P x_1348F1958;
  P restF1957;
  P typeF1956;
  P nameF1955;
  P x_1348F1954;
  P x_1349F1953;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1349_25,3);
  x_1349F1953 = T1;
  FUNINIT(x_1349F1953, 3,FREEREF(0),FREEREF(1),return_);
  x_1348F1954 = FREEREF(0);
  nameF1955 = YPfalse;
  nameF1955 = BOXFAB(nameF1955);
  typeF1956 = YPfalse;
  typeF1956 = BOXFAB(typeF1956);
  restF1957 = YPfalse;
  restF1957 = BOXFAB(restF1957);
  T9 = CALL2(1,VARREF(YisaQ),x_1348F1954,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1348F1954,x_1349F1953);
    x_1348F1958 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1348F1958,x_1349F1953);
    BOXVAL(nameF1955) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1348F1958);
    x_1348F1959 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1348F1959,x_1349F1953);
    BOXVAL(typeF1956) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1348F1959);
    x_1348F1960 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1348F1960,x_1349F1953);
    x_1348F1961 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1348F1961,x_1349F1953);
    T21 = CALL1(1,VARREF(Ytail),x_1348F1960);
    x_1348F1962 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1348F1962,x_1349F1953);
    T18 = T22;
    T15 = T18;
    T12 = T15;
    T23 = CALL1(1,VARREF(Ytail),x_1348F1954);
    x_1348F1963 = T23;
    BOXVAL(restF1957) = x_1348F1963;
    x_1348F1964 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1348F1964,x_1349F1953);
    x_1348F1965 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1348F1965,x_1349F1953);
    T28 = CALL1(1,VARREF(Ytail),x_1348F1964);
    x_1348F1966 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1348F1966,x_1349F1953);
    T25 = T29;
    T24 = T25;
    T10 = T24;
  } else {
    T30 = CALL2(1,x_1349F1953,LITREF(lit_36),x_1348F1954);
  }
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T38 = BOXVAL(nameF1955);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T43 = BOXVAL(typeF1956);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_45));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_45));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat),T35,LITREF(lit_45));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T49 = BOXVAL(restF1957);
  T48 = CALL2(1,VARREF(YgooSmacrosYcat),T49,LITREF(lit_45));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T50 = BOXVAL(FREEREF(1));
  T45 = CALL4(1,VARREF(YgooSmacrosYcat),T46,T47,T50,LITREF(lit_45));
  T44 = CALL1(1,VARREF(Ylst),T45);
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T44,LITREF(lit_45));
  T7 = T31;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1346_27) {
  P msg_,args_;
  P x_1347F1967;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1347F1967 = FREEREF(0);
  T3 = FUNFAB(fun_26,2,x_1347F1967,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1345F1969;
  P x_1346F1968;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1346_27,3);
  x_1346F1968 = T1;
  FUNINIT(x_1346F1968, 3,FREEREF(0),FREEREF(1),return_);
  x_1345F1969 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1345F1969,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1345F1969,x_1346F1968);
  } else {
    T5 = CALL2(1,x_1346F1968,LITREF(lit_36),x_1345F1969);
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T8 = BOXVAL(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,LITREF(lit_45));
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P x_1344F1983;
  P x_1342F1982;
  P x_1342F1981;
  P x_1342F1980;
  P x_1342F1979;
  P x_1342F1978;
  P x_1342F1977;
  P x_1342F1976;
  P x_1342F1975;
  P x_1342F1974;
  P bodyF1973;
  P varsF1972;
  P x_1342F1971;
  P x_1343F1970;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1343_22,2);
  x_1343F1970 = T1;
  FUNINIT(x_1343F1970, 2,FREEREF(0),return_);
  x_1342F1971 = FREEREF(0);
  varsF1972 = YPfalse;
  varsF1972 = BOXFAB(varsF1972);
  bodyF1973 = YPfalse;
  bodyF1973 = BOXFAB(bodyF1973);
  T7 = CALL2(1,VARREF(YisaQ),x_1342F1971,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1342F1971,LITREF(lit_51),x_1343F1970);
    x_1342F1974 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1342F1974,x_1343F1970);
    x_1342F1975 = T11;
    BOXVAL(varsF1972) = x_1342F1975;
    x_1342F1976 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1342F1976,x_1343F1970);
    x_1342F1977 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1342F1977,x_1343F1970);
    T16 = CALL1(1,VARREF(Ytail),x_1342F1976);
    x_1342F1978 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1342F1978,x_1343F1970);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1342F1974);
    x_1342F1979 = T18;
    BOXVAL(bodyF1973) = x_1342F1979;
    x_1342F1980 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1342F1980,x_1343F1970);
    x_1342F1981 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1342F1981,x_1343F1970);
    T23 = CALL1(1,VARREF(Ytail),x_1342F1980);
    x_1342F1982 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1342F1982,x_1343F1970);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1343F1970,LITREF(lit_36),x_1342F1971);
  }
  T27 = BOXVAL(varsF1972);
  x_1344F1983 = T27;
  T29 = FUNFAB(fun_28,2,x_1344F1983,bodyF1973);
  T28 = with_exit(T29);
  T26 = T28;
  T5 = T26;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1356_31) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_66),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P x_1355F1990;
  P x_1355F1989;
  P x_1355F1988;
  P x_1355F1987;
  P bodyF1986;
  P x_1355F1985;
  P x_1356F1984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1356_31,2);
  x_1356F1984 = T1;
  FUNINIT(x_1356F1984, 2,FREEREF(0),return_);
  x_1355F1985 = FREEREF(0);
  bodyF1986 = YPfalse;
  bodyF1986 = BOXFAB(bodyF1986);
  T5 = CALL2(1,VARREF(YisaQ),x_1355F1985,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1355F1985,LITREF(lit_66),x_1356F1984);
    x_1355F1987 = T7;
    BOXVAL(bodyF1986) = x_1355F1987;
    x_1355F1988 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1355F1988,x_1356F1984);
    x_1355F1989 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1355F1989,x_1356F1984);
    T12 = CALL1(1,VARREF(Ytail),x_1355F1988);
    x_1355F1990 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1355F1990,x_1356F1984);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1356F1984,LITREF(lit_36),x_1355F1985);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_45));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_45));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T26 = BOXVAL(bodyF1986);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T30 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T30,LITREF(lit_45));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T24 = CALL4(1,VARREF(YgooSmacrosYcat),T25,T26,T27,LITREF(lit_45));
  T23 = CALL1(1,VARREF(Ylst),T24);
  T15 = CALL4(1,VARREF(YgooSmacrosYcat),T16,T17,T23,LITREF(lit_45));
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1360_34) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_73),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P x_1359F1999;
  P x_1359F1998;
  P x_1359F1997;
  P x_1359F1996;
  P x_1359F1995;
  P valueF1994;
  P packF1993;
  P x_1359F1992;
  P x_1360F1991;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1360_34,2);
  x_1360F1991 = T1;
  FUNINIT(x_1360F1991, 2,FREEREF(0),return_);
  x_1359F1992 = FREEREF(0);
  packF1993 = YPfalse;
  packF1993 = BOXFAB(packF1993);
  valueF1994 = YPfalse;
  valueF1994 = BOXFAB(valueF1994);
  T7 = CALL2(1,VARREF(YisaQ),x_1359F1992,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F1992,LITREF(lit_73),x_1360F1991);
    x_1359F1995 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F1995,x_1360F1991);
    BOXVAL(packF1993) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1359F1995);
    x_1359F1996 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F1996,x_1360F1991);
    BOXVAL(valueF1994) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1359F1996);
    x_1359F1997 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F1997,x_1360F1991);
    x_1359F1998 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1359F1998,x_1360F1991);
    T19 = CALL1(1,VARREF(Ytail),x_1359F1997);
    x_1359F1999 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1359F1999,x_1360F1991);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1360F1991,LITREF(lit_36),x_1359F1992);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T25 = BOXVAL(packF1993);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T31 = BOXVAL(valueF1994);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_45));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T22 = CALL4(1,VARREF(YgooSmacrosYcat),T23,T24,T26,LITREF(lit_45));
  T5 = T22;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1364_37) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_80),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P x_1363F2006;
  P x_1363F2005;
  P x_1363F2004;
  P x_1363F2003;
  P valueF2002;
  P x_1363F2001;
  P x_1364F2000;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1364_37,2);
  x_1364F2000 = T1;
  FUNINIT(x_1364F2000, 2,FREEREF(0),return_);
  x_1363F2001 = FREEREF(0);
  valueF2002 = YPfalse;
  valueF2002 = BOXFAB(valueF2002);
  T5 = CALL2(1,VARREF(YisaQ),x_1363F2001,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1363F2001,LITREF(lit_80),x_1364F2000);
    x_1363F2003 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1363F2003,x_1364F2000);
    BOXVAL(valueF2002) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1363F2003);
    x_1363F2004 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1363F2004,x_1364F2000);
    x_1363F2005 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1363F2005,x_1364F2000);
    T14 = CALL1(1,VARREF(Ytail),x_1363F2004);
    x_1363F2006 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1363F2006,x_1364F2000);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1364F2000,LITREF(lit_36),x_1363F2001);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T21 = BOXVAL(valueF2002);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T17 = CALL4(1,VARREF(YgooSmacrosYcat),T18,T19,T20,LITREF(lit_45));
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1368_40) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_68),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P x_1367F2013;
  P x_1367F2012;
  P x_1367F2011;
  P x_1367F2010;
  P nameF2009;
  P x_1367F2008;
  P x_1368F2007;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1368_40,2);
  x_1368F2007 = T1;
  FUNINIT(x_1368F2007, 2,FREEREF(0),return_);
  x_1367F2008 = FREEREF(0);
  nameF2009 = YPfalse;
  nameF2009 = BOXFAB(nameF2009);
  T5 = CALL2(1,VARREF(YisaQ),x_1367F2008,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1367F2008,LITREF(lit_68),x_1368F2007);
    x_1367F2010 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1367F2010,x_1368F2007);
    BOXVAL(nameF2009) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1367F2010);
    x_1367F2011 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1367F2011,x_1368F2007);
    x_1367F2012 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F2012,x_1368F2007);
    T14 = CALL1(1,VARREF(Ytail),x_1367F2011);
    x_1367F2013 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F2013,x_1368F2007);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1368F2007,LITREF(lit_36),x_1367F2008);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T20 = BOXVAL(nameF2009);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T19,LITREF(lit_45));
  T3 = T17;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSpackerY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<packer>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSpackerYLpackerG,T0);
  lit_1 = YPPsym((P)"packer");
  lit_2 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T3 = YPsig(LITREF(lit_2),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLpackerG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker,T2);
  lit_3 = YPPsym((P)"packer-fab");
  lit_4 = YPPlist(1,YPPsym((P)"t"));
  T5 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_fab,T4);
  lit_5 = YPPsym((P)"packer-add");
  lit_6 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T7 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YgooSpackerYLpackerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLpackerG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_add,T6);
  lit_7 = YPPsym((P)"packer-res");
  lit_8 = YPPlist(1,YPPsym((P)"a"));
  T9 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YgooSpackerYLpackerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_res,T8);
  lit_9 = YPPsym((P)"<sim-packer>");
  T11 = (P)YPpair(VARREF(YgooSpackerYLpackerG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_9),T11);
  VARSET(YgooSpackerYLsim_packerG,T10);
  lit_10 = YPPsym((P)"packer-value");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_value_0 = YPmet(FUNCODEREF(fun_packer_value_0),LITREF(lit_10),T12,ENVNUL,PNUL,sloc(19));
  T15 = BOUNDP(YgooSpackerYpacker_value);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSpackerYpacker_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_12 = YPPsym((P)"packer-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPmet(FUNCODEREF(fun_packer_value_setter_1),LITREF(lit_12),T17,ENVNUL,PNUL,sloc(19));
  T20 = BOUNDP(YgooSpackerYpacker_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSpackerYpacker_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_packer_value_setter_1;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSpackerYpacker_value_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"packer-adder");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPmet(FUNCODEREF(fun_packer_adder_2),LITREF(lit_14),T22,ENVNUL,PNUL,sloc(20));
  T25 = BOUNDP(YgooSpackerYpacker_adder);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSpackerYpacker_adder);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_packer_adder_2;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSpackerYpacker_adder,T23);
  lit_16 = YPPsym((P)"packer-adder-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_adder_setter_3 = YPmet(FUNCODEREF(fun_packer_adder_setter_3),LITREF(lit_16),T27,ENVNUL,PNUL,sloc(20));
  T30 = BOUNDP(YgooSpackerYpacker_adder_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSpackerYpacker_adder_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_packer_adder_setter_3;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSpackerYpacker_adder_setter,T28);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),VARREF(YgooSpackerYpacker_adder_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"packer-reser");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_4 = YPmet(FUNCODEREF(fun_packer_reser_4),LITREF(lit_18),T32,ENVNUL,PNUL,sloc(21));
  T35 = BOUNDP(YgooSpackerYpacker_reser);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSpackerYpacker_reser);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_packer_reser_4;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSpackerYpacker_reser,T33);
  lit_20 = YPPsym((P)"packer-reser-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_reser_setter_5 = YPmet(FUNCODEREF(fun_packer_reser_setter_5),LITREF(lit_20),T37,ENVNUL,PNUL,sloc(21));
  T40 = BOUNDP(YgooSpackerYpacker_reser_setter);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSpackerYpacker_reser_setter);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_packer_reser_setter_5;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSpackerYpacker_reser_setter,T38);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T43,ENVNUL,PNUL,sloc(21));
  T42 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T42,ENVNUL,PNUL,sloc(21));
  T44 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),VARREF(YgooSpackerYpacker_reser_setter),VARREF(YLfunG),T44);
  lit_24 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T45 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_8 = YPmet(FUNCODEREF(fun_packer_8),LITREF(lit_1),T45,ENVNUL,PNUL,sloc(23));
  T48 = BOUNDP(YgooSpackerYpacker);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooSpackerYpacker);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_packer_8;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooSpackerYpacker,T46);
  lit_25 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T50 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_9 = YPmet(FUNCODEREF(fun_packer_add_9),LITREF(lit_5),T50,ENVNUL,PNUL,sloc(26));
  T53 = BOUNDP(YgooSpackerYpacker_add);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSpackerYpacker_add);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_packer_add_9;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSpackerYpacker_add,T51);
  lit_26 = YPPlist(1,YPPsym((P)"a"));
  T55 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_10 = YPmet(FUNCODEREF(fun_packer_res_10),LITREF(lit_7),T55,ENVNUL,PNUL,sloc(28));
  T58 = BOUNDP(YgooSpackerYpacker_res);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSpackerYpacker_res);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_packer_res_10;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSpackerYpacker_res,T56);
  lit_27 = YPPlist(1,YPPsym((P)"t"));
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T62 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T62,ENVNUL,PNUL,sloc(32));
  T61 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T60 = YPsig(LITREF(lit_27),YPPlist(1,T61),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPmet(FUNCODEREF(fun_packer_fab_12),LITREF(lit_3),T60,ENVNUL,PNUL,sloc(31));
  T65 = BOUNDP(YgooSpackerYpacker_fab);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSpackerYpacker_fab);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_packer_fab_12;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSpackerYpacker_fab,T63);
  lit_29 = YPPlist(1,YPPsym((P)"t"));
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T69 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T67 = YPsig(LITREF(lit_29),YPPlist(1,T68),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_14 = YPmet(FUNCODEREF(fun_packer_fab_14),LITREF(lit_3),T67,ENVNUL,PNUL,sloc(34));
  T72 = BOUNDP(YgooSpackerYpacker_fab);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSpackerYpacker_fab);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_packer_fab_14;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSpackerYpacker_fab,T70);
  lit_31 = YPPlist(1,YPPsym((P)"exp"));
  lit_32 = YPPlist(1,YPPsym((P)"return"));
  lit_33 = YPPsym((P)"x-1324");
  lit_34 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_35 = YPPsym((P)"packing-with");
  lit_36 = YPsb((P)"Match Pattern Failure");
  lit_37 = YPPlist(1,YPPsym((P)"return"));
  lit_38 = YPPsym((P)"x-1327");
  lit_39 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_40 = YPPlist(1,YPPsym((P)"return"));
  lit_41 = YPPsym((P)"x-1330");
  lit_42 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_43 = YPsb((P)"failed to match.");
  lit_44 = YPPsym((P)"let");
  lit_45 = Ynil;
  lit_46 = YPPsym((P)"seq");
  T80 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1324_15 = YPmet(FUNCODEREF(fun_x_1324_15),LITREF(lit_33),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1330_16 = YPmet(FUNCODEREF(fun_x_1330_16),LITREF(lit_41),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1327_18 = YPmet(FUNCODEREF(fun_x_1327_18),LITREF(lit_38),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T81 = fun_21;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T81);
  lit_47 = YPPlist(1,YPPsym((P)"exp"));
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1343");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPsym((P)"packing-in");
  lit_52 = YPPlist(1,YPPsym((P)"return"));
  lit_53 = YPPsym((P)"x-1346");
  lit_54 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_55 = YPPlist(1,YPPsym((P)"return"));
  lit_56 = YPPsym((P)"x-1349");
  lit_57 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"x-1352");
  lit_60 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_61 = YPPsym((P)"<lst>");
  T90 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1343_22 = YPmet(FUNCODEREF(fun_x_1343_22),LITREF(lit_49),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1352_23 = YPmet(FUNCODEREF(fun_x_1352_23),LITREF(lit_59),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1349_25 = YPmet(FUNCODEREF(fun_x_1349_25),LITREF(lit_56),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1346_27 = YPmet(FUNCODEREF(fun_x_1346_27),LITREF(lit_53),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T91 = fun_30;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T91);
  lit_62 = YPPlist(1,YPPsym((P)"exp"));
  lit_63 = YPPlist(1,YPPsym((P)"return"));
  lit_64 = YPPsym((P)"x-1356");
  lit_65 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_66 = YPPsym((P)"packing");
  lit_67 = YPPsym((P)"packer-");
  lit_68 = YPPsym((P)"packed");
  T94 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1356_31 = YPmet(FUNCODEREF(fun_x_1356_31),LITREF(lit_64),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T95 = fun_33;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T95);
  lit_69 = YPPlist(1,YPPsym((P)"exp"));
  lit_70 = YPPlist(1,YPPsym((P)"return"));
  lit_71 = YPPsym((P)"x-1360");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_73 = YPPsym((P)"pack-in");
  lit_74 = YPPsym((P)"opf");
  lit_75 = YPPsym((P)"_");
  T98 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_34 = YPmet(FUNCODEREF(fun_x_1360_34),LITREF(lit_71),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T99 = fun_36;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T99);
  lit_76 = YPPlist(1,YPPsym((P)"exp"));
  lit_77 = YPPlist(1,YPPsym((P)"return"));
  lit_78 = YPPsym((P)"x-1364");
  lit_79 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_80 = YPPsym((P)"pack");
  T102 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1364_37 = YPmet(FUNCODEREF(fun_x_1364_37),LITREF(lit_78),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T103 = fun_39;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T103);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-1368");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T110 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_x_1368_40 = YPmet(FUNCODEREF(fun_x_1368_40),LITREF(lit_83),T110,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T105 = fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T112 = fun_42;
  T111 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T112);
  T104 = T111;
  return T104;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packer-reser-setter", CVAR, &YgooSpackerYpacker_reser_setter},
  {"pack", PVAR, NULL},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packing-in", PVAR, NULL},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"packer", CVAR, &YgooSpackerYpacker},
  {"pack-in", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"packed", PVAR, NULL},
  {"packing-with", PVAR, NULL},
  {"packing", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"packer-adder-setter", CVAR, &YgooSpackerYpacker_adder_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packer-res", NULL},
  {"pack", NULL},
  {"packer-add", NULL},
  {"packing-in", NULL},
  {"packer-fab", NULL},
  {"packer", NULL},
  {"pack-in", NULL},
  {"packed", NULL},
  {"packing-with", NULL},
  {"packing", NULL},
  {"<packer>", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSpacker;
MODULE_INFO module_info_gooSpacker = {
  "goo/packer",
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
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooSpacker (void);

void load_module_gooSpacker (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooSpackerY___main_0___();

}

/* END OF GENERATED CODE. */
