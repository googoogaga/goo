/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/packer");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/packer */

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
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
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
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
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
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSpackerYpacker_adder_setter,"goo/packer","packer-adder-setter");
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
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
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
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
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
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
DEF(YgooSpackerYpacker_reser_setter,"goo/packer","packer-reser-setter");
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
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLclassG,"goo/boot","<class>");
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
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
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
DEF(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
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
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_82);
DEFLIT(lit_49);
DEFLIT(lit_53);
DEFLIT(lit_22);
DEFLIT(lit_67);
DEFLIT(lit_59);
DEFLIT(lit_1);
DEFLIT(lit_26);
DEFLIT(lit_72);
DEFLIT(lit_18);
DEFLIT(lit_11);
DEFLIT(lit_36);
DEFLIT(lit_77);
DEFLIT(lit_79);
DEFLIT(lit_19);
DEFLIT(lit_58);
DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_81);
DEFLIT(lit_76);
DEFLIT(lit_60);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_73);
DEFLIT(lit_31);
DEFLIT(lit_38);
DEFLIT(lit_80);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_4);
DEFLIT(lit_55);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_44);
DEFLIT(lit_56);
DEFLIT(lit_57);
DEFLIT(lit_75);
DEFLIT(lit_35);
DEFLIT(lit_34);
DEFLIT(lit_63);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_66);
DEFLIT(lit_48);
DEFLIT(lit_71);
DEFLIT(lit_65);
DEFLIT(lit_42);
DEFLIT(lit_29);
DEFLIT(lit_78);
DEFLIT(lit_43);
DEFLIT(lit_50);
DEFLIT(lit_83);
DEFLIT(lit_32);
DEFLIT(lit_0);
DEFLIT(lit_74);
DEFLIT(lit_37);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_52);
DEFLIT(lit_16);
DEFLIT(lit_54);
DEFLIT(lit_47);
DEFLIT(lit_84);
DEFLIT(lit_33);
DEFLIT(lit_12);
DEFLIT(lit_64);
DEFLIT(lit_61);
DEFLIT(lit_69);
DEFLIT(lit_70);
DEFLIT(lit_62);
DEFLIT(lit_17);
DEFLIT(lit_3);
DEFLIT(lit_23);
DEFLIT(lit_30);
DEFLIT(lit_41);
DEFLIT(lit_46);
DEFLIT(lit_45);
DEFLIT(lit_51);

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
LOCFOR(fun_x_1328_15);
LOCFOR(fun_x_1334_16);
LOCFOR(fun_17);
LOCFOR(fun_x_1331_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1347_22);
LOCFOR(fun_x_1356_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1353_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1350_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1360_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1364_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1368_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1372_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
extern P YgooSpackerY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = fun_6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_8) {
  P init_,add_,res_;
  P T0;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_add_9) {
  P a_,x_;
  P x_1318F2025;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
  x_1318F2025 = a_;
  T3 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T1 = CALL2(1,T3,x_,T2);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T1,x_1318F2025);
  T0 = x_1318F2025;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_res_10) {
  P a_;
  P T0,T1,T2;
LINK_STACK();
  ARG(a_, 0);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = FUNFAB(fun_11,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_packer_fab_14) {
  P t_;
  P T0,T1;
LINK_STACK();
  ARG(t_, 0);
  T1 = fun_13;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1328_15) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_35),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1334_16) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_43));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_1333F2039;
  P x_1333F2038;
  P x_1333F2037;
  P x_1333F2036;
  P x_1333F2035;
  P x_1333F2034;
  P x_1333F2033;
  P x_1333F2032;
  P x_1333F2031;
  P restF2030;
  P packF2029;
  P varF2028;
  P x_1333F2027;
  P x_1334F2026;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1334_16,1);
  x_1334F2026 = T1;
  FUNINIT(x_1334F2026, 1,return_);
  x_1333F2027 = FREEREF(0);
  varF2028 = YPfalse;
  varF2028 = BOXFAB(varF2028);
  packF2029 = YPfalse;
  packF2029 = BOXFAB(packF2029);
  restF2030 = YPfalse;
  restF2030 = BOXFAB(restF2030);
  T9 = CALL2(1,VARREF(YisaQ),x_1333F2027,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1333F2027,x_1334F2026);
    x_1333F2031 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1333F2031,x_1334F2026);
    BOXVAL(varF2028) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1333F2031);
    x_1333F2032 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1333F2032,x_1334F2026);
    BOXVAL(packF2029) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1333F2032);
    x_1333F2033 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1333F2033,x_1334F2026);
    x_1333F2034 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F2034,x_1334F2026);
    T21 = CALL1(1,VARREF(Ytail),x_1333F2033);
    x_1333F2035 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F2035,x_1334F2026);
    T18 = T22;
    T15 = T18;
    T12 = T15;
    T23 = CALL1(1,VARREF(Ytail),x_1333F2027);
    x_1333F2036 = T23;
    BOXVAL(restF2030) = x_1333F2036;
    x_1333F2037 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1333F2037,x_1334F2026);
    x_1333F2038 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F2038,x_1334F2026);
    T28 = CALL1(1,VARREF(Ytail),x_1333F2037);
    x_1333F2039 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F2039,x_1334F2026);
    T25 = T29;
    T24 = T25;
    T10 = T24;
  } else {
    T30 = CALL2(1,x_1334F2026,LITREF(lit_36),x_1333F2027);
  }
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T38 = BOXVAL(varF2028);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = BOXVAL(packF2029);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_45));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat),T35,LITREF(lit_45));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T43 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T46 = BOXVAL(restF2030);
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

FUNCODEDEF(fun_x_1331_18) {
  P msg_,args_;
  P x_1332F2040;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1332F2040 = FREEREF(0);
  T3 = FUNFAB(fun_17,2,x_1332F2040,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1330F2042;
  P x_1331F2041;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1331_18,3);
  x_1331F2041 = T1;
  FUNINIT(x_1331F2041, 3,FREEREF(0),FREEREF(1),return_);
  x_1330F2042 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1330F2042,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1330F2042,x_1331F2041);
  } else {
    T5 = CALL2(1,x_1331F2041,LITREF(lit_36),x_1330F2042);
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
  P x_1329F2056;
  P x_1327F2055;
  P x_1327F2054;
  P x_1327F2053;
  P x_1327F2052;
  P x_1327F2051;
  P x_1327F2050;
  P x_1327F2049;
  P x_1327F2048;
  P x_1327F2047;
  P bodyF2046;
  P declsF2045;
  P x_1327F2044;
  P x_1328F2043;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1328_15,2);
  x_1328F2043 = T1;
  FUNINIT(x_1328F2043, 2,FREEREF(0),return_);
  x_1327F2044 = FREEREF(0);
  declsF2045 = YPfalse;
  declsF2045 = BOXFAB(declsF2045);
  bodyF2046 = YPfalse;
  bodyF2046 = BOXFAB(bodyF2046);
  T7 = CALL2(1,VARREF(YisaQ),x_1327F2044,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1327F2044,LITREF(lit_35),x_1328F2043);
    x_1327F2047 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1327F2047,x_1328F2043);
    x_1327F2048 = T11;
    BOXVAL(declsF2045) = x_1327F2048;
    x_1327F2049 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1327F2049,x_1328F2043);
    x_1327F2050 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1327F2050,x_1328F2043);
    T16 = CALL1(1,VARREF(Ytail),x_1327F2049);
    x_1327F2051 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1327F2051,x_1328F2043);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1327F2047);
    x_1327F2052 = T18;
    BOXVAL(bodyF2046) = x_1327F2052;
    x_1327F2053 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1327F2053,x_1328F2043);
    x_1327F2054 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1327F2054,x_1328F2043);
    T23 = CALL1(1,VARREF(Ytail),x_1327F2053);
    x_1327F2055 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1327F2055,x_1328F2043);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1328F2043,LITREF(lit_36),x_1327F2044);
  }
  T27 = BOXVAL(declsF2045);
  x_1329F2056 = T27;
  T29 = FUNFAB(fun_19,2,x_1329F2056,bodyF2046);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1347_22) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_51),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1356_23) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL1(1,VARREF(Ysyntax_error),LITREF(lit_43));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P return_;
  P x_1355F2064;
  P x_1355F2063;
  P x_1355F2062;
  P x_1355F2061;
  P restF2060;
  P nameF2059;
  P x_1355F2058;
  P x_1356F2057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1356_23,1);
  x_1356F2057 = T1;
  FUNINIT(x_1356F2057, 1,return_);
  x_1355F2058 = FREEREF(0);
  nameF2059 = YPfalse;
  nameF2059 = BOXFAB(nameF2059);
  restF2060 = YPfalse;
  restF2060 = BOXFAB(restF2060);
  T7 = CALL2(1,VARREF(YisaQ),x_1355F2058,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1355F2058,x_1356F2057);
    BOXVAL(nameF2059) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1355F2058);
    x_1355F2061 = T10;
    BOXVAL(restF2060) = x_1355F2061;
    x_1355F2062 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1355F2062,x_1356F2057);
    x_1355F2063 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1355F2063,x_1356F2057);
    T15 = CALL1(1,VARREF(Ytail),x_1355F2062);
    x_1355F2064 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1355F2064,x_1356F2057);
    T12 = T16;
    T11 = T12;
    T8 = T11;
  } else {
    T17 = CALL2(1,x_1356F2057,LITREF(lit_36),x_1355F2058);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T25 = BOXVAL(nameF2059);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T26,LITREF(lit_45));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T27 = BOXVAL(restF2060);
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

FUNCODEDEF(fun_x_1353_25) {
  P msg_,args_;
  P x_1354F2065;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1354F2065 = FREEREF(0);
  T3 = FUNFAB(fun_24,2,x_1354F2065,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_1352F2079;
  P x_1352F2078;
  P x_1352F2077;
  P x_1352F2076;
  P x_1352F2075;
  P x_1352F2074;
  P x_1352F2073;
  P x_1352F2072;
  P x_1352F2071;
  P restF2070;
  P typeF2069;
  P nameF2068;
  P x_1352F2067;
  P x_1353F2066;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1353_25,3);
  x_1353F2066 = T1;
  FUNINIT(x_1353F2066, 3,FREEREF(0),FREEREF(1),return_);
  x_1352F2067 = FREEREF(0);
  nameF2068 = YPfalse;
  nameF2068 = BOXFAB(nameF2068);
  typeF2069 = YPfalse;
  typeF2069 = BOXFAB(typeF2069);
  restF2070 = YPfalse;
  restF2070 = BOXFAB(restF2070);
  T9 = CALL2(1,VARREF(YisaQ),x_1352F2067,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1352F2067,x_1353F2066);
    x_1352F2071 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1352F2071,x_1353F2066);
    BOXVAL(nameF2068) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1352F2071);
    x_1352F2072 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1352F2072,x_1353F2066);
    BOXVAL(typeF2069) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1352F2072);
    x_1352F2073 = T17;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1352F2073,x_1353F2066);
    x_1352F2074 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1352F2074,x_1353F2066);
    T21 = CALL1(1,VARREF(Ytail),x_1352F2073);
    x_1352F2075 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1352F2075,x_1353F2066);
    T18 = T22;
    T15 = T18;
    T12 = T15;
    T23 = CALL1(1,VARREF(Ytail),x_1352F2067);
    x_1352F2076 = T23;
    BOXVAL(restF2070) = x_1352F2076;
    x_1352F2077 = Ynil;
    T26 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1352F2077,x_1353F2066);
    x_1352F2078 = T26;
    T27 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1352F2078,x_1353F2066);
    T28 = CALL1(1,VARREF(Ytail),x_1352F2077);
    x_1352F2079 = T28;
    T29 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1352F2079,x_1353F2066);
    T25 = T29;
    T24 = T25;
    T10 = T24;
  } else {
    T30 = CALL2(1,x_1353F2066,LITREF(lit_36),x_1352F2067);
  }
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_35));
  T38 = BOXVAL(nameF2068);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T43 = BOXVAL(typeF2069);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_45));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T36 = CALL3(1,VARREF(YgooSmacrosYcat),T37,T39,LITREF(lit_45));
  T35 = CALL1(1,VARREF(Ylst),T36);
  T34 = CALL2(1,VARREF(YgooSmacrosYcat),T35,LITREF(lit_45));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T49 = BOXVAL(restF2070);
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

FUNCODEDEF(fun_x_1350_27) {
  P msg_,args_;
  P x_1351F2080;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  x_1351F2080 = FREEREF(0);
  T3 = FUNFAB(fun_26,2,x_1351F2080,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1349F2082;
  P x_1350F2081;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1350_27,3);
  x_1350F2081 = T1;
  FUNINIT(x_1350F2081, 3,FREEREF(0),FREEREF(1),return_);
  x_1349F2082 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1349F2082,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1349F2082,x_1350F2081);
  } else {
    T5 = CALL2(1,x_1350F2081,LITREF(lit_36),x_1349F2082);
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
  P x_1348F2096;
  P x_1346F2095;
  P x_1346F2094;
  P x_1346F2093;
  P x_1346F2092;
  P x_1346F2091;
  P x_1346F2090;
  P x_1346F2089;
  P x_1346F2088;
  P x_1346F2087;
  P bodyF2086;
  P varsF2085;
  P x_1346F2084;
  P x_1347F2083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1347_22,2);
  x_1347F2083 = T1;
  FUNINIT(x_1347F2083, 2,FREEREF(0),return_);
  x_1346F2084 = FREEREF(0);
  varsF2085 = YPfalse;
  varsF2085 = BOXFAB(varsF2085);
  bodyF2086 = YPfalse;
  bodyF2086 = BOXFAB(bodyF2086);
  T7 = CALL2(1,VARREF(YisaQ),x_1346F2084,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1346F2084,LITREF(lit_51),x_1347F2083);
    x_1346F2087 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1346F2087,x_1347F2083);
    x_1346F2088 = T11;
    BOXVAL(varsF2085) = x_1346F2088;
    x_1346F2089 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1346F2089,x_1347F2083);
    x_1346F2090 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1346F2090,x_1347F2083);
    T16 = CALL1(1,VARREF(Ytail),x_1346F2089);
    x_1346F2091 = T16;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1346F2091,x_1347F2083);
    T13 = T17;
    T12 = T13;
    T18 = CALL1(1,VARREF(Ytail),x_1346F2087);
    x_1346F2092 = T18;
    BOXVAL(bodyF2086) = x_1346F2092;
    x_1346F2093 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1346F2093,x_1347F2083);
    x_1346F2094 = T21;
    T22 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1346F2094,x_1347F2083);
    T23 = CALL1(1,VARREF(Ytail),x_1346F2093);
    x_1346F2095 = T23;
    T24 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1346F2095,x_1347F2083);
    T20 = T24;
    T19 = T20;
    T10 = T19;
    T8 = T10;
  } else {
    T25 = CALL2(1,x_1347F2083,LITREF(lit_36),x_1346F2084);
  }
  T27 = BOXVAL(varsF2085);
  x_1348F2096 = T27;
  T29 = FUNFAB(fun_28,2,x_1348F2096,bodyF2086);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1360_31) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_66),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P x_1359F2103;
  P x_1359F2102;
  P x_1359F2101;
  P x_1359F2100;
  P bodyF2099;
  P x_1359F2098;
  P x_1360F2097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1360_31,2);
  x_1360F2097 = T1;
  FUNINIT(x_1360F2097, 2,FREEREF(0),return_);
  x_1359F2098 = FREEREF(0);
  bodyF2099 = YPfalse;
  bodyF2099 = BOXFAB(bodyF2099);
  T5 = CALL2(1,VARREF(YisaQ),x_1359F2098,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F2098,LITREF(lit_66),x_1360F2097);
    x_1359F2100 = T7;
    BOXVAL(bodyF2099) = x_1359F2100;
    x_1359F2101 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1359F2101,x_1360F2097);
    x_1359F2102 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1359F2102,x_1360F2097);
    T12 = CALL1(1,VARREF(Ytail),x_1359F2101);
    x_1359F2103 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1359F2103,x_1360F2097);
    T9 = T13;
    T8 = T9;
    T6 = T8;
  } else {
    T14 = CALL2(1,x_1360F2097,LITREF(lit_36),x_1359F2098);
  }
  T16 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T20 = CALL3(1,VARREF(YgooSmacrosYcat),T21,T22,LITREF(lit_45));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T18 = CALL2(1,VARREF(YgooSmacrosYcat),T19,LITREF(lit_45));
  T17 = CALL1(1,VARREF(Ylst),T18);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_46));
  T26 = BOXVAL(bodyF2099);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1364_34) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_73),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P x_1363F2112;
  P x_1363F2111;
  P x_1363F2110;
  P x_1363F2109;
  P x_1363F2108;
  P valueF2107;
  P packF2106;
  P x_1363F2105;
  P x_1364F2104;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1364_34,2);
  x_1364F2104 = T1;
  FUNINIT(x_1364F2104, 2,FREEREF(0),return_);
  x_1363F2105 = FREEREF(0);
  packF2106 = YPfalse;
  packF2106 = BOXFAB(packF2106);
  valueF2107 = YPfalse;
  valueF2107 = BOXFAB(valueF2107);
  T7 = CALL2(1,VARREF(YisaQ),x_1363F2105,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1363F2105,LITREF(lit_73),x_1364F2104);
    x_1363F2108 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1363F2108,x_1364F2104);
    BOXVAL(packF2106) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1363F2108);
    x_1363F2109 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1363F2109,x_1364F2104);
    BOXVAL(valueF2107) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1363F2109);
    x_1363F2110 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1363F2110,x_1364F2104);
    x_1363F2111 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1363F2111,x_1364F2104);
    T19 = CALL1(1,VARREF(Ytail),x_1363F2110);
    x_1363F2112 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1363F2112,x_1364F2104);
    T16 = T20;
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T21 = CALL2(1,x_1364F2104,LITREF(lit_36),x_1363F2105);
  }
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T25 = BOXVAL(packF2106);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T31 = BOXVAL(valueF2107);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1368_37) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_80),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P x_1367F2119;
  P x_1367F2118;
  P x_1367F2117;
  P x_1367F2116;
  P valueF2115;
  P x_1367F2114;
  P x_1368F2113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1368_37,2);
  x_1368F2113 = T1;
  FUNINIT(x_1368F2113, 2,FREEREF(0),return_);
  x_1367F2114 = FREEREF(0);
  valueF2115 = YPfalse;
  valueF2115 = BOXFAB(valueF2115);
  T5 = CALL2(1,VARREF(YisaQ),x_1367F2114,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1367F2114,LITREF(lit_80),x_1368F2113);
    x_1367F2116 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1367F2116,x_1368F2113);
    BOXVAL(valueF2115) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1367F2116);
    x_1367F2117 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1367F2117,x_1368F2113);
    x_1367F2118 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F2118,x_1368F2113);
    T14 = CALL1(1,VARREF(Ytail),x_1367F2117);
    x_1367F2119 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F2119,x_1368F2113);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1368F2113,LITREF(lit_36),x_1367F2114);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T21 = BOXVAL(valueF2115);
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
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1372_40) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_68),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P x_1371F2126;
  P x_1371F2125;
  P x_1371F2124;
  P x_1371F2123;
  P nameF2122;
  P x_1371F2121;
  P x_1372F2120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(return_, 0);
  T1 = FUNSHELL(0,fun_x_1372_40,2);
  x_1372F2120 = T1;
  FUNINIT(x_1372F2120, 2,FREEREF(0),return_);
  x_1371F2121 = FREEREF(0);
  nameF2122 = YPfalse;
  nameF2122 = BOXFAB(nameF2122);
  T5 = CALL2(1,VARREF(YisaQ),x_1371F2121,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1371F2121,LITREF(lit_68),x_1372F2120);
    x_1371F2123 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1371F2123,x_1372F2120);
    BOXVAL(nameF2122) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1371F2123);
    x_1371F2124 = T10;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1371F2124,x_1372F2120);
    x_1371F2125 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1371F2125,x_1372F2120);
    T14 = CALL1(1,VARREF(Ytail),x_1371F2124);
    x_1371F2126 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1371F2126,x_1372F2120);
    T11 = T15;
    T8 = T11;
    T6 = T8;
  } else {
    T16 = CALL2(1,x_1372F2120,LITREF(lit_36),x_1371F2121);
  }
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T20 = BOXVAL(nameF2122);
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
LINK_STACK();
  ARG(exp_, 0);
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
  P T96,T97,T98,T99,T100,T101;
DEFCREGS();
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
  T14 = VARREF_OR(YgooSpackerYpacker_value,YPfalse);
  T15 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_12 = YPPsym((P)"packer-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPmet(FUNCODEREF(fun_packer_value_setter_1),LITREF(lit_12),T16,ENVNUL,PNUL,sloc(19));
  T18 = VARREF_OR(YgooSpackerYpacker_value_setter,YPfalse);
  T19 = fun_packer_value_setter_1;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSpackerYpacker_value_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"packer-adder");
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPmet(FUNCODEREF(fun_packer_adder_2),LITREF(lit_14),T20,ENVNUL,PNUL,sloc(20));
  T22 = VARREF_OR(YgooSpackerYpacker_adder,YPfalse);
  T23 = fun_packer_adder_2;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YgooSpackerYpacker_adder,T21);
  lit_16 = YPPsym((P)"packer-adder-setter");
  lit_17 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_adder_setter_3 = YPmet(FUNCODEREF(fun_packer_adder_setter_3),LITREF(lit_16),T24,ENVNUL,PNUL,sloc(20));
  T26 = VARREF_OR(YgooSpackerYpacker_adder_setter,YPfalse);
  T27 = fun_packer_adder_setter_3;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YgooSpackerYpacker_adder_setter,T25);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),VARREF(YgooSpackerYpacker_adder_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"packer-reser");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T28 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_4 = YPmet(FUNCODEREF(fun_packer_reser_4),LITREF(lit_18),T28,ENVNUL,PNUL,sloc(21));
  T30 = VARREF_OR(YgooSpackerYpacker_reser,YPfalse);
  T31 = fun_packer_reser_4;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSpackerYpacker_reser,T29);
  lit_20 = YPPsym((P)"packer-reser-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_reser_setter_5 = YPmet(FUNCODEREF(fun_packer_reser_setter_5),LITREF(lit_20),T32,ENVNUL,PNUL,sloc(21));
  T34 = VARREF_OR(YgooSpackerYpacker_reser_setter,YPfalse);
  T35 = fun_packer_reser_setter_5;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSpackerYpacker_reser_setter,T33);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  lit_23 = YPPlist(1,YPPsym((P)"x"));
  T37 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T37,ENVNUL,PNUL,sloc(21));
  T36 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T36,ENVNUL,PNUL,sloc(21));
  T38 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),VARREF(YgooSpackerYpacker_reser_setter),VARREF(YLfunG),T38);
  lit_24 = YPPlist(3,YPPsym((P)"init"),YPPsym((P)"add"),YPPsym((P)"res"));
  T39 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_8 = YPmet(FUNCODEREF(fun_packer_8),LITREF(lit_1),T39,ENVNUL,PNUL,sloc(23));
  T41 = VARREF_OR(YgooSpackerYpacker,YPfalse);
  T42 = fun_packer_8;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T42);
  VARSET(YgooSpackerYpacker,T40);
  lit_25 = YPPlist(2,YPPsym((P)"a"),YPPsym((P)"x"));
  T43 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_9 = YPmet(FUNCODEREF(fun_packer_add_9),LITREF(lit_5),T43,ENVNUL,PNUL,sloc(26));
  T45 = VARREF_OR(YgooSpackerYpacker_add,YPfalse);
  T46 = fun_packer_add_9;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T46);
  VARSET(YgooSpackerYpacker_add,T44);
  lit_26 = YPPlist(1,YPPsym((P)"a"));
  T47 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_10 = YPmet(FUNCODEREF(fun_packer_res_10),LITREF(lit_7),T47,ENVNUL,PNUL,sloc(28));
  T49 = VARREF_OR(YgooSpackerYpacker_res,YPfalse);
  T50 = fun_packer_res_10;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooSpackerYpacker_res,T48);
  lit_27 = YPPlist(1,YPPsym((P)"t"));
  lit_28 = YPPlist(1,YPPsym((P)"x"));
  T53 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T53,ENVNUL,PNUL,sloc(32));
  T52 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T51 = YPsig(LITREF(lit_27),YPPlist(1,T52),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPmet(FUNCODEREF(fun_packer_fab_12),LITREF(lit_3),T51,ENVNUL,PNUL,sloc(31));
  T55 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T56 = fun_packer_fab_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooSpackerYpacker_fab,T54);
  lit_29 = YPPlist(1,YPPsym((P)"t"));
  lit_30 = YPPlist(1,YPPsym((P)"x"));
  T59 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
  T57 = YPsig(LITREF(lit_29),YPPlist(1,T58),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_14 = YPmet(FUNCODEREF(fun_packer_fab_14),LITREF(lit_3),T57,ENVNUL,PNUL,sloc(34));
  T61 = VARREF_OR(YgooSpackerYpacker_fab,YPfalse);
  T62 = fun_packer_fab_14;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooSpackerYpacker_fab,T60);
  lit_31 = YPPlist(1,YPPsym((P)"exp"));
  lit_32 = YPPlist(1,YPPsym((P)"return"));
  lit_33 = YPPsym((P)"x-1328");
  lit_34 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_35 = YPPsym((P)"packing-with");
  lit_36 = YPsb((P)"Match Pattern Failure");
  lit_37 = YPPlist(1,YPPsym((P)"return"));
  lit_38 = YPPsym((P)"x-1331");
  lit_39 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_40 = YPPlist(1,YPPsym((P)"return"));
  lit_41 = YPPsym((P)"x-1334");
  lit_42 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_43 = YPsb((P)"failed to match.");
  lit_44 = YPPsym((P)"let");
  lit_45 = Ynil;
  lit_46 = YPPsym((P)"seq");
  T69 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1328_15 = YPmet(FUNCODEREF(fun_x_1328_15),LITREF(lit_33),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1334_16 = YPmet(FUNCODEREF(fun_x_1334_16),LITREF(lit_41),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1331_18 = YPmet(FUNCODEREF(fun_x_1331_18),LITREF(lit_38),T66,ENVNUL,PNUL,YPfalse);
  T65 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T65,ENVNUL,PNUL,YPfalse);
  T64 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T64,ENVNUL,PNUL,YPfalse);
  T63 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T70 = fun_21;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T70);
  lit_47 = YPPlist(1,YPPsym((P)"exp"));
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-1347");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPsym((P)"packing-in");
  lit_52 = YPPlist(1,YPPsym((P)"return"));
  lit_53 = YPPsym((P)"x-1350");
  lit_54 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_55 = YPPlist(1,YPPsym((P)"return"));
  lit_56 = YPPsym((P)"x-1353");
  lit_57 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_58 = YPPlist(1,YPPsym((P)"return"));
  lit_59 = YPPsym((P)"x-1356");
  lit_60 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_61 = YPPsym((P)"<lst>");
  T79 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1347_22 = YPmet(FUNCODEREF(fun_x_1347_22),LITREF(lit_49),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1356_23 = YPmet(FUNCODEREF(fun_x_1356_23),LITREF(lit_59),T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1353_25 = YPmet(FUNCODEREF(fun_x_1353_25),LITREF(lit_56),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1350_27 = YPmet(FUNCODEREF(fun_x_1350_27),LITREF(lit_53),T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T80 = fun_30;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T80);
  lit_62 = YPPlist(1,YPPsym((P)"exp"));
  lit_63 = YPPlist(1,YPPsym((P)"return"));
  lit_64 = YPPsym((P)"x-1360");
  lit_65 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_66 = YPPsym((P)"packing");
  lit_67 = YPPsym((P)"packer-");
  lit_68 = YPPsym((P)"packed");
  T83 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_31 = YPmet(FUNCODEREF(fun_x_1360_31),LITREF(lit_64),T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T81,ENVNUL,PNUL,YPfalse);
  T84 = fun_33;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T84);
  lit_69 = YPPlist(1,YPPsym((P)"exp"));
  lit_70 = YPPlist(1,YPPsym((P)"return"));
  lit_71 = YPPsym((P)"x-1364");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_73 = YPPsym((P)"pack-in");
  lit_74 = YPPsym((P)"opf");
  lit_75 = YPPsym((P)"_");
  T87 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1364_34 = YPmet(FUNCODEREF(fun_x_1364_34),LITREF(lit_71),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T85,ENVNUL,PNUL,YPfalse);
  T88 = fun_36;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T88);
  lit_76 = YPPlist(1,YPPsym((P)"exp"));
  lit_77 = YPPlist(1,YPPsym((P)"return"));
  lit_78 = YPPsym((P)"x-1368");
  lit_79 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_80 = YPPsym((P)"pack");
  T91 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1368_37 = YPmet(FUNCODEREF(fun_x_1368_37),LITREF(lit_78),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_39;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T92);
  lit_81 = YPPlist(1,YPPsym((P)"exp"));
  lit_82 = YPPlist(1,YPPsym((P)"return"));
  lit_83 = YPPsym((P)"x-1372");
  lit_84 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T98 = fun_x_1372_40 = YPmet(FUNCODEREF(fun_x_1372_40),LITREF(lit_83),T99,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T96 = fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T94 = fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T101 = fun_42;
  T100 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T101);
  T93 = T100;
  return T93;
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
  {"sort", &module_info_gooScolsSseq, NULL},
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
  {"finds", &module_info_gooScolsSseq, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
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
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
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
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packing-with", PVAR, NULL},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packed", PVAR, NULL},
  {"packing", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"---main-0---", PVAR, NULL},
  {"packer-adder-setter", CVAR, &YgooSpackerYpacker_adder_setter},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packer-reser-setter", CVAR, &YgooSpackerYpacker_reser_setter},
  {"pack", PVAR, NULL},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packing-in", PVAR, NULL},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"pack-in", PVAR, NULL},
  {"packer", CVAR, &YgooSpackerYpacker},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packing-in", NULL},
  {"packing-with", NULL},
  {"packed", NULL},
  {"packing", NULL},
  {"<packer>", NULL},
  {"packer-res", NULL},
  {"pack", NULL},
  {"packer-add", NULL},
  {"packer-fab", NULL},
  {"pack-in", NULL},
  {"packer", NULL},
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
