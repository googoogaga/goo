/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/port */

EXT(Yassert_error,"goo/boot","assert-error");
EXT(Ynot,"goo/boot","not");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
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
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
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
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
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
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
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
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooSioSportYput,"goo/io/port","put");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYcosh,"goo/math","cosh");
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
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Yas_error,"goo/boot","as-error");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
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
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYNE,"goo/math","~=");
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
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSioSportYopen,"goo/io/port","open");
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
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
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
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
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
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
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
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
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
EXT(YPprop,"goo/boot","%prop");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
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

DEFLIT(lit_65);
DEFLIT(lit_11);
DEFLIT(lit_83);
DEFLIT(lit_33);
DEFLIT(lit_15);
DEFLIT(lit_58);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_64);
DEFLIT(lit_5);
DEFLIT(lit_87);
DEFLIT(lit_12);
DEFLIT(lit_80);
DEFLIT(lit_43);
DEFLIT(lit_50);
DEFLIT(lit_36);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_26);
DEFLIT(lit_52);
DEFLIT(lit_20);
DEFLIT(lit_32);
DEFLIT(lit_79);
DEFLIT(lit_17);
DEFLIT(lit_48);
DEFLIT(lit_63);
DEFLIT(lit_54);
DEFLIT(lit_46);
DEFLIT(lit_85);
DEFLIT(lit_2);
DEFLIT(lit_70);
DEFLIT(lit_42);
DEFLIT(lit_38);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_40);
DEFLIT(lit_60);
DEFLIT(lit_28);
DEFLIT(lit_55);
DEFLIT(lit_89);
DEFLIT(lit_0);
DEFLIT(lit_69);
DEFLIT(lit_51);
DEFLIT(lit_44);
DEFLIT(lit_56);
DEFLIT(lit_10);
DEFLIT(lit_45);
DEFLIT(lit_82);
DEFLIT(lit_6);
DEFLIT(lit_27);
DEFLIT(lit_8);
DEFLIT(lit_77);
DEFLIT(lit_1);
DEFLIT(lit_21);
DEFLIT(lit_22);
DEFLIT(lit_61);
DEFLIT(lit_47);
DEFLIT(lit_4);
DEFLIT(lit_68);
DEFLIT(lit_84);
DEFLIT(lit_59);
DEFLIT(lit_62);
DEFLIT(lit_23);
DEFLIT(lit_49);
DEFLIT(lit_57);
DEFLIT(lit_81);
DEFLIT(lit_3);
DEFLIT(lit_74);
DEFLIT(lit_31);
DEFLIT(lit_19);
DEFLIT(lit_30);
DEFLIT(lit_72);
DEFLIT(lit_73);
DEFLIT(lit_34);
DEFLIT(lit_29);
DEFLIT(lit_71);
DEFLIT(lit_76);
DEFLIT(lit_86);
DEFLIT(lit_16);
DEFLIT(lit_53);
DEFLIT(lit_88);
DEFLIT(lit_37);
DEFLIT(lit_13);
DEFLIT(lit_75);
DEFLIT(lit_14);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_66);
DEFLIT(lit_35);
DEFLIT(lit_78);

/* FUNCTIONS: */

LOCFOR(fun_port_line_0);
LOCFOR(fun_port_line_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_port_handle_3);
LOCFOR(fun_port_handle_setter_4);
LOCFOR(fun_close_5);
LOCFOR(fun_port_guts_6);
LOCFOR(fun_port_guts_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_port_index_9);
LOCFOR(fun_port_index_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_loop_12);
LOCFOR(fun_gets_13);
LOCFOR(fun_open_14);
LOCFOR(fun_open_15);
LOCFOR(fun_close_16);
LOCFOR(fun_close_17);
LOCFOR(fun_x_1377_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_get_21);
LOCFOR(fun_peek_22);
LOCFOR(fun_readyQ_23);
LOCFOR(fun_newline_24);
LOCFOR(fun_force_out_25);
LOCFOR(fun_put_26);
LOCFOR(fun_puts_27);
LOCFOR(fun_port_contents_28);
LOCFOR(fun_open_29);
LOCFOR(fun_open_30);
LOCFOR(fun_peek_31);
LOCFOR(fun_get_32);
LOCFOR(fun_readyQ_33);
LOCFOR(fun_put_34);
LOCFOR(fun_puts_35);
LOCFOR(fun_x_1383_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_port_handle_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_5) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_port_guts_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_42));
}

FUNCODEDEF(fun_port_index_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_loop_12) {
  P res_,c_;
  P tmpF2082;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),c_);
  tmpF2082 = T2;
  if (tmpF2082 != YPfalse) {
    T3 = tmpF2082;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)10));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),c_,res_);
    T9 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(0));
    a1 = T8;
    a2 = T9;
    res_ = a1;
    c_ = a2;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gets_13) {
  P port_;
  P loopF2083;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_12,2);
  loopF2083 = T1;
  FUNINIT(loopF2083, 2,port_,loopF2083);
  T3 = CALL1(1,VARREF(YgooSioSportYget),port_);
  T2 = CALL2(0,loopF2083,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_14) {
  P t_,filename_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_in_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_15) {
  P t_,filename_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_out_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_16) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_17) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1377_18) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_63),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1376F2094;
  P x_1376F2093;
  P x_1376F2092;
  P x_1376F2091;
  P x_1376F2090;
  P x_1376F2089;
  P bodyF2088;
  P portF2087;
  P nameF2086;
  P x_1376F2085;
  P x_1377F2084;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1377_18,2);
  x_1377F2084 = T1;
  FUNINIT(x_1377F2084, 2,FREEREF(0),return_);
  x_1376F2085 = FREEREF(0);
  nameF2086 = YPfalse;
  nameF2086 = BOXFAB(nameF2086);
  portF2087 = YPfalse;
  portF2087 = BOXFAB(portF2087);
  bodyF2088 = YPfalse;
  bodyF2088 = BOXFAB(bodyF2088);
  T9 = CALL2(1,VARREF(YisaQ),x_1376F2085,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1376F2085,LITREF(lit_63),x_1377F2084);
    x_1376F2089 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1376F2089,x_1377F2084);
    x_1376F2090 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1376F2090,x_1377F2084);
    BOXVAL(nameF2086) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1376F2090);
    x_1376F2091 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1376F2091,x_1377F2084);
    BOXVAL(portF2087) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1376F2091);
    x_1376F2092 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2092,x_1377F2084);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1376F2089);
    x_1376F2093 = T21;
    BOXVAL(bodyF2088) = x_1376F2093;
    x_1376F2094 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1376F2094,x_1377F2084);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1377F2084,LITREF(lit_64),x_1376F2085);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T32 = BOXVAL(nameF2086);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T44 = BOXVAL(nameF2086);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(portF2087);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = BOXVAL(bodyF2088);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T52 = BOXVAL(nameF2086);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_3));
  T57 = BOXVAL(nameF2086);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T53,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T35 = CALL4(1,VARREF(YgooSmacrosYcat),T36,T37,T48,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T34,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_19,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_21) {
  P port_;
  P x_1378F2099;
  P cF2098;
  P tF2097;
  P xF2096;
  P xF2095;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  xF2095 = T2;
  xF2096 = xF2095;
  tF2097 = (P)2;
  T6 = (P)YPiLL(xF2096,(P)2);
  T5 = (P)YPiv(T6,tF2097);
  T4 = T5;
  T1 = T4;
  cF2098 = T1;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),cF2098,YPchr((P)10));
  if (T7 != YPfalse) {
    x_1378F2099 = port_;
    T11 = CALL1(1,VARREF(YgooSioSportYport_line),x_1378F2099);
    T10 = CALL2(1,VARREF(YgooSmathYA),T11,YPint((P)1));
    T9 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T10,x_1378F2099);
    T8 = T9;
  } else {
  }
  T0 = cF2098;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_22) {
  P port_;
  P tF2102;
  P xF2101;
  P xF2100;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPpeek(T2);
  xF2100 = T1;
  xF2101 = xF2100;
  tF2102 = (P)2;
  T5 = (P)YPiLL(xF2101,(P)2);
  T4 = (P)YPiv(T5,tF2102);
  T3 = T4;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_23) {
  P port_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_24) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_out_25) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_26) {
  P port_,c_;
  P xF2104;
  P xF2103;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  xF2103 = c_;
  xF2104 = xF2103;
  T4 = (P)YPiGG(xF2104,(P)2);
  T3 = T4;
  T2 = T3;
  T0 = (P)YPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_27) {
  P port_,s_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_contents_28) {
  P port_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_29) {
  P t_,dat_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_30) {
  P t_,dat_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),dat_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_out_portG),VARREF(YgooSioSportYport_guts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_31) {
  P port_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T7 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T8 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),T7,T8);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_get_32) {
  P port_;
  P x_1379F2106;
  P resF2105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T8 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T9 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,T9);
    resF2105 = T7;
    x_1379F2106 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_1379F2106);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_1379F2106);
    T6 = resF2105;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_33) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_34) {
  P port_,c_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsScolxYaddX),T2,c_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_35) {
  P port_,s_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T2,s_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1383_36) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_89),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P return_;
  P x_1382F2113;
  P x_1382F2112;
  P x_1382F2111;
  P bodyF2110;
  P nameF2109;
  P x_1382F2108;
  P x_1383F2107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1383_36,2);
  x_1383F2107 = T1;
  FUNINIT(x_1383F2107, 2,FREEREF(0),return_);
  x_1382F2108 = FREEREF(0);
  nameF2109 = YPfalse;
  nameF2109 = BOXFAB(nameF2109);
  bodyF2110 = YPfalse;
  bodyF2110 = BOXFAB(bodyF2110);
  T7 = CALL2(1,VARREF(YisaQ),x_1382F2108,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1382F2108,LITREF(lit_89),x_1383F2107);
    x_1382F2111 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1382F2111,x_1383F2107);
    BOXVAL(nameF2109) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1382F2111);
    x_1382F2112 = T12;
    BOXVAL(bodyF2110) = x_1382F2112;
    x_1382F2113 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1382F2113,x_1383F2107);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1383F2107,LITREF(lit_64),x_1382F2108);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T23 = BOXVAL(nameF2109);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_42));
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T24,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T29 = BOXVAL(bodyF2110);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T34 = BOXVAL(nameF2109);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T16 = CALL5(1,VARREF(YgooSmacrosYcat),T17,T18,T29,T30,Ynil);
  T5 = T16;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_37,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"name"));
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
  T3 = YPsig(LITREF(lit_2),YPPlist(2,T4,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLportG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYopen,T2);
  lit_3 = YPPsym((P)"close");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_3),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYclose,T5);
  lit_5 = YPPsym((P)"<in-port>");
  T8 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_5),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_6 = YPPsym((P)"port-line");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPmet(FUNCODEREF(fun_port_line_0),LITREF(lit_6),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooSioSportYport_line);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSioSportYport_line);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSioSportYport_line,T10);
  lit_8 = YPPsym((P)"port-line-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_8),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooSioSportYport_line_setter);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSioSportYport_line_setter);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_port_line_setter_1;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSioSportYport_line_setter,T15);
  lit_10 = YPPlist(1,YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T20 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T20);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPlist(1,YPPsym((P)"port"));
  T22 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYget,T21);
  lit_13 = YPPsym((P)"gets");
  lit_14 = YPPlist(1,YPPsym((P)"port"));
  T24 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYgets,T23);
  lit_15 = YPPsym((P)"peek");
  lit_16 = YPPlist(1,YPPsym((P)"port"));
  T26 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYpeek,T25);
  lit_17 = YPPsym((P)"ready?");
  lit_18 = YPPlist(1,YPPsym((P)"port"));
  T28 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T27 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T28,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYreadyQ,T27);
  lit_19 = YPPsym((P)"<out-port>");
  T30 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T29 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_19),T30);
  VARSET(YgooSioSportYLout_portG,T29);
  lit_20 = YPPsym((P)"newline");
  lit_21 = YPPlist(1,YPPsym((P)"port"));
  T32 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_20),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T31);
  lit_22 = YPPsym((P)"force-out");
  lit_23 = YPPlist(1,YPPsym((P)"port"));
  T34 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_22),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T33);
  lit_24 = YPPsym((P)"put");
  lit_25 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T36 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T35);
  lit_26 = YPPsym((P)"puts");
  lit_27 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T38 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T37);
  lit_28 = YPPsym((P)"<file-port>");
  T40 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T39 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_28),T40);
  VARSET(YgooSioSportYLfile_portG,T39);
  lit_29 = YPPsym((P)"port-handle");
  lit_30 = YPPlist(1,YPPsym((P)"_x"));
  T41 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_3 = YPmet(FUNCODEREF(fun_port_handle_3),LITREF(lit_29),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooSioSportYport_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYport_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_port_handle_3;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYport_handle,T42);
  lit_31 = YPPsym((P)"port-handle-setter");
  lit_32 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_handle_setter_4 = YPmet(FUNCODEREF(fun_port_handle_setter_4),LITREF(lit_31),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YgooSioSportYport_handle_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSioSportYport_handle_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_port_handle_setter_4;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSioSportYport_handle_setter,T47);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLportG),VARREF(YgooSioSportYport_handle),VARREF(YgooSioSportYport_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_33 = YPPlist(1,YPPsym((P)"port"));
  T51 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_3),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooSioSportYclose);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYclose);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_close_5;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYclose,T52);
  lit_34 = YPPsym((P)"<file-in-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T57 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T58);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_34),T57);
  VARSET(YgooSioSportYLfile_in_portG,T56);
  lit_35 = YPPsym((P)"<file-out-port>");
  T61 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T61);
  T59 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T60);
  VARSET(YgooSioSportYLfile_out_portG,T59);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_36 = YPPsym((P)"<str-port>");
  T63 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T63);
  VARSET(YgooSioSportYLstr_portG,T62);
  lit_37 = YPPsym((P)"port-guts");
  lit_38 = YPPlist(1,YPPsym((P)"_x"));
  T64 = YPsig(LITREF(lit_38),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_6 = YPmet(FUNCODEREF(fun_port_guts_6),LITREF(lit_37),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSportYport_guts);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYport_guts);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_port_guts_6;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYport_guts,T65);
  lit_39 = YPPsym((P)"port-guts-setter");
  lit_40 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T69 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_7 = YPmet(FUNCODEREF(fun_port_guts_setter_7),LITREF(lit_39),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSportYport_guts_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYport_guts_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_port_guts_setter_7;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYport_guts_setter,T70);
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  lit_42 = YPsb((P)"");
  T74 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T75);
  lit_43 = YPPsym((P)"port-contents");
  lit_44 = YPPlist(1,YPPsym((P)"port"));
  T79 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T78 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_43),T79,Ynil,YPfalse,YPfalse,YPfalse);
  T77 = VARSET(YgooSioSportYport_contents,T78);
  T76 = T77;
  return T76;
}

P YgooSioSportY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139;
DEFCREGS();
loop:
  lit_45 = YPPsym((P)"<str-in-port>");
  T2 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T1 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T2);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_45),T1);
  VARSET(YgooSioSportYLstr_in_portG,T0);
  lit_46 = YPPsym((P)"port-index");
  lit_47 = YPPlist(1,YPPsym((P)"_x"));
  T3 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_9 = YPmet(FUNCODEREF(fun_port_index_9),LITREF(lit_46),T3,ENVNUL,PNUL,YPfalse);
  T6 = BOUNDP(YgooSioSportYport_index);
  if (T6 != YPfalse) {
    T5 = VARREF(YgooSioSportYport_index);
  } else {
    T5 = YPfalse;
  }
  T7 = fun_port_index_9;
  T4 = XCALL2(1,VARREF(YPdefine_method),T5,T7);
  VARSET(YgooSioSportYport_index,T4);
  lit_48 = YPPsym((P)"port-index-setter");
  lit_49 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_10 = YPmet(FUNCODEREF(fun_port_index_setter_10),LITREF(lit_48),T8,ENVNUL,PNUL,YPfalse);
  T11 = BOUNDP(YgooSioSportYport_index_setter);
  if (T11 != YPfalse) {
    T10 = VARREF(YgooSioSportYport_index_setter);
  } else {
    T10 = YPfalse;
  }
  T12 = fun_port_index_setter_10;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T12);
  VARSET(YgooSioSportYport_index_setter,T9);
  lit_50 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T14 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T14);
  lit_51 = YPPsym((P)"<str-out-port>");
  T17 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T16 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T17);
  T15 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_51),T16);
  VARSET(YgooSioSportYLstr_out_portG,T15);
  lit_52 = YPPlist(1,YPPsym((P)"port"));
  lit_53 = YPPsym((P)"loop");
  lit_54 = YPPlist(2,YPPsym((P)"res"),YPPsym((P)"c"));
  T19 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_12 = YPmet(FUNCODEREF(fun_loop_12),LITREF(lit_53),T19,ENVNUL,PNUL,YPfalse);
  T18 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPmet(FUNCODEREF(fun_gets_13),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T22 = BOUNDP(YgooSioSportYgets);
  if (T22 != YPfalse) {
    T21 = VARREF(YgooSioSportYgets);
  } else {
    T21 = YPfalse;
  }
  T23 = fun_gets_13;
  T20 = XCALL2(1,VARREF(YPdefine_method),T21,T23);
  VARSET(YgooSioSportYgets,T20);
  lit_55 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T25 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T24 = YPsig(LITREF(lit_55),YPPlist(2,T25,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T24,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YgooSioSportYopen);
  if (T28 != YPfalse) {
    T27 = VARREF(YgooSioSportYopen);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_open_14;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YgooSioSportYopen,T26);
  lit_56 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"filename"));
  T31 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T30 = YPsig(LITREF(lit_56),YPPlist(2,T31,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_15 = YPmet(FUNCODEREF(fun_open_15),LITREF(lit_1),T30,ENVNUL,PNUL,YPfalse);
  T34 = BOUNDP(YgooSioSportYopen);
  if (T34 != YPfalse) {
    T33 = VARREF(YgooSioSportYopen);
  } else {
    T33 = YPfalse;
  }
  T35 = fun_open_15;
  T32 = XCALL2(1,VARREF(YPdefine_method),T33,T35);
  VARSET(YgooSioSportYopen,T32);
  lit_57 = YPPlist(1,YPPsym((P)"port"));
  T36 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_16 = YPmet(FUNCODEREF(fun_close_16),LITREF(lit_3),T36,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(YgooSioSportYclose);
  if (T39 != YPfalse) {
    T38 = VARREF(YgooSioSportYclose);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_close_16;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YgooSioSportYclose,T37);
  lit_58 = YPPlist(1,YPPsym((P)"port"));
  T41 = YPsig(LITREF(lit_58),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPmet(FUNCODEREF(fun_close_17),LITREF(lit_3),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooSioSportYclose);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYclose);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_close_17;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYclose,T42);
  lit_59 = YPPlist(1,YPPsym((P)"exp"));
  lit_60 = YPPlist(1,YPPsym((P)"return"));
  lit_61 = YPPsym((P)"x-1377");
  lit_62 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_63 = YPPsym((P)"with-port");
  lit_64 = YPsb((P)"Match Pattern Failure");
  lit_65 = YPPsym((P)"let");
  lit_66 = YPPsym((P)"fin");
  lit_67 = YPPsym((P)"seq");
  lit_68 = YPPsym((P)"set");
  lit_69 = YPPsym((P)"and");
  T48 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1377_18 = YPmet(FUNCODEREF(fun_x_1377_18),LITREF(lit_61),T48,ENVNUL,PNUL,YPfalse);
  T47 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T46,ENVNUL,PNUL,YPfalse);
  T49 = fun_20;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T49);
  T51 = (P)YPcurrent_in_port();
  T50 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T51);
  VARSET(YgooSioSportYin,T50);
  T53 = (P)YPcurrent_out_port();
  T52 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T53);
  VARSET(YgooSioSportYout,T52);
  lit_70 = YPPlist(1,YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_21 = YPmet(FUNCODEREF(fun_get_21),LITREF(lit_11),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSioSportYget);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSioSportYget);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_get_21;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSioSportYget,T55);
  lit_71 = YPPlist(1,YPPsym((P)"port"));
  T59 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_22 = YPmet(FUNCODEREF(fun_peek_22),LITREF(lit_15),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSioSportYpeek);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSioSportYpeek);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_peek_22;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSioSportYpeek,T60);
  lit_72 = YPPlist(1,YPPsym((P)"port"));
  T64 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_23 = YPmet(FUNCODEREF(fun_readyQ_23),LITREF(lit_17),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSportYreadyQ);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYreadyQ);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_readyQ_23;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYreadyQ,T65);
  lit_73 = YPPlist(1,YPPsym((P)"port"));
  T69 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_24 = YPmet(FUNCODEREF(fun_newline_24),LITREF(lit_20),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSportYnewline);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYnewline);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_newline_24;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYnewline,T70);
  lit_74 = YPPlist(1,YPPsym((P)"port"));
  T74 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_25 = YPmet(FUNCODEREF(fun_force_out_25),LITREF(lit_22),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSioSportYforce_out);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSioSportYforce_out);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_force_out_25;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSioSportYforce_out,T75);
  lit_75 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T79 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_26 = YPmet(FUNCODEREF(fun_put_26),LITREF(lit_24),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YgooSioSportYput);
  if (T82 != YPfalse) {
    T81 = VARREF(YgooSioSportYput);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_put_26;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YgooSioSportYput,T80);
  lit_76 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T84 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_27 = YPmet(FUNCODEREF(fun_puts_27),LITREF(lit_26),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSportYputs);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSportYputs);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_puts_27;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YgooSioSportYputs,T85);
  lit_77 = YPPlist(1,YPPsym((P)"port"));
  T89 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_28 = YPmet(FUNCODEREF(fun_port_contents_28),LITREF(lit_43),T89,ENVNUL,PNUL,YPfalse);
  T92 = BOUNDP(YgooSioSportYport_contents);
  if (T92 != YPfalse) {
    T91 = VARREF(YgooSioSportYport_contents);
  } else {
    T91 = YPfalse;
  }
  T93 = fun_port_contents_28;
  T90 = XCALL2(1,VARREF(YPdefine_method),T91,T93);
  VARSET(YgooSioSportYport_contents,T90);
  lit_78 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T95 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T94 = YPsig(LITREF(lit_78),YPPlist(2,T95,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_29 = YPmet(FUNCODEREF(fun_open_29),LITREF(lit_1),T94,ENVNUL,PNUL,YPfalse);
  T98 = BOUNDP(YgooSioSportYopen);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSioSportYopen);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_open_29;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSioSportYopen,T96);
  lit_79 = YPPlist(2,YPPsym((P)"t"),YPPsym((P)"dat"));
  T101 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T100 = YPsig(LITREF(lit_79),YPPlist(2,T101,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T100,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YgooSioSportYopen);
  if (T104 != YPfalse) {
    T103 = VARREF(YgooSioSportYopen);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_open_30;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YgooSioSportYopen,T102);
  lit_80 = YPPlist(1,YPPsym((P)"port"));
  T106 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_31 = YPmet(FUNCODEREF(fun_peek_31),LITREF(lit_15),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YgooSioSportYpeek);
  if (T109 != YPfalse) {
    T108 = VARREF(YgooSioSportYpeek);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_peek_31;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YgooSioSportYpeek,T107);
  lit_81 = YPPlist(1,YPPsym((P)"port"));
  T111 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_32 = YPmet(FUNCODEREF(fun_get_32),LITREF(lit_11),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YgooSioSportYget);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSioSportYget);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_get_32;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSioSportYget,T112);
  lit_82 = YPPlist(1,YPPsym((P)"port"));
  T116 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_33 = YPmet(FUNCODEREF(fun_readyQ_33),LITREF(lit_17),T116,ENVNUL,PNUL,YPfalse);
  T119 = BOUNDP(YgooSioSportYreadyQ);
  if (T119 != YPfalse) {
    T118 = VARREF(YgooSioSportYreadyQ);
  } else {
    T118 = YPfalse;
  }
  T120 = fun_readyQ_33;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T120);
  VARSET(YgooSioSportYreadyQ,T117);
  lit_83 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"c"));
  T121 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_34 = YPmet(FUNCODEREF(fun_put_34),LITREF(lit_24),T121,ENVNUL,PNUL,YPfalse);
  T124 = BOUNDP(YgooSioSportYput);
  if (T124 != YPfalse) {
    T123 = VARREF(YgooSioSportYput);
  } else {
    T123 = YPfalse;
  }
  T125 = fun_put_34;
  T122 = XCALL2(1,VARREF(YPdefine_method),T123,T125);
  VARSET(YgooSioSportYput,T122);
  lit_84 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"s"));
  T126 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_35 = YPmet(FUNCODEREF(fun_puts_35),LITREF(lit_26),T126,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSportYputs);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSportYputs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_puts_35;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YgooSioSportYputs,T127);
  lit_85 = YPPlist(1,YPPsym((P)"exp"));
  lit_86 = YPPlist(1,YPPsym((P)"return"));
  lit_87 = YPPsym((P)"x-1383");
  lit_88 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_89 = YPPsym((P)"port2str");
  T137 = YPsig(LITREF(lit_88),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = fun_x_1383_36 = YPmet(FUNCODEREF(fun_x_1383_36),LITREF(lit_87),T137,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(LITREF(lit_86),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T134 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T132 = fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T139 = fun_38;
  T138 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port2str"),T139);
  T131 = T138;
  return T131;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
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
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
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
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
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
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
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
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
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
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
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
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
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
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
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
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
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
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
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
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"---main-1---", PVAR, NULL},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"port2str", PVAR, NULL},
  {"puts", CVAR, &YgooSioSportYputs},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"port-handle-setter", CVAR, &YgooSioSportYport_handle_setter},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {"put", CVAR, &YgooSioSportYput},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"close", CVAR, &YgooSioSportYclose},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"out", CVAR, &YgooSioSportYout},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"open", CVAR, &YgooSioSportYopen},
  {"with-port", PVAR, NULL},
  {"gets", CVAR, &YgooSioSportYgets},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"in", CVAR, &YgooSioSportYin},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"---main-0---", PVAR, NULL},
  {"get", CVAR, &YgooSioSportYget},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<file-port>", "<file-port>"},
  {"<str-in-port>", "<str-in-port>"},
  {"<file-in-port>", "<file-in-port>"},
  {"port2str", "port2str"},
  {"puts", "puts"},
  {"port-contents", "port-contents"},
  {"port-handle-setter", "port-handle-setter"},
  {"<out-port>", "<out-port>"},
  {"<in-port>", "<in-port>"},
  {"put", "put"},
  {"ready?", "ready?"},
  {"close", "close"},
  {"port-line-setter", "port-line-setter"},
  {"port-handle", "port-handle"},
  {"out", "out"},
  {"force-out", "force-out"},
  {"peek", "peek"},
  {"port-index-setter", "port-index-setter"},
  {"open", "open"},
  {"with-port", "with-port"},
  {"newline", "newline"},
  {"port-line", "port-line"},
  {"gets", "gets"},
  {"<str-port>", "<str-port>"},
  {"<str-out-port>", "<str-out-port>"},
  {"port-index", "port-index"},
  {"<file-out-port>", "<file-out-port>"},
  {"get", "get"},
  {"in", "in"},
  {"<port>", "<port>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSport;
MODULE_INFO module_info_gooSioSport = {
  "goo/io/port",
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
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSvec (void);

/* EXPRESSION: */

extern void load_module_gooSioSport (void);

void load_module_gooSioSport (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSvec();

  (P)YgooSioSportY___main_0___();
  (P)YgooSioSportY___main_1___();

}

/* END OF GENERATED CODE. */
