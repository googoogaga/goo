/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YLoptsG,"goo/boot","<opts>");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(Yerror,"goo/boot","error");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolG,"goo/boot","<col>");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ynot,"goo/boot","not");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYupperQ,"goo/math","upper?");
DEF(YgooSioSportYput,"goo/io/port","put");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YOlst,"goo/boot","@lst");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ynew,"goo/boot","new");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_30);
DEFLIT(lit_37);
DEFLIT(lit_36);
DEFLIT(lit_0);
DEFLIT(lit_49);
DEFLIT(lit_54);
DEFLIT(lit_10);
DEFLIT(lit_8);
DEFLIT(lit_28);
DEFLIT(lit_45);
DEFLIT(lit_9);
DEFLIT(lit_24);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_47);
DEFLIT(lit_21);
DEFLIT(lit_42);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_40);
DEFLIT(lit_41);
DEFLIT(lit_26);
DEFLIT(lit_50);
DEFLIT(lit_38);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_20);
DEFLIT(lit_39);
DEFLIT(lit_4);
DEFLIT(lit_29);
DEFLIT(lit_32);
DEFLIT(lit_53);
DEFLIT(lit_25);
DEFLIT(lit_52);
DEFLIT(lit_7);
DEFLIT(lit_34);
DEFLIT(lit_55);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_43);
DEFLIT(lit_16);
DEFLIT(lit_44);
DEFLIT(lit_14);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_17);
DEFLIT(lit_23);
DEFLIT(lit_33);
DEFLIT(lit_13);
DEFLIT(lit_46);
DEFLIT(lit_48);
DEFLIT(lit_56);

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
LOCFOR(fun_file_opening_error_15);
LOCFOR(fun_open_16);
LOCFOR(fun_close_17);
LOCFOR(fun_close_18);
LOCFOR(fun_x_1368_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_get_22);
LOCFOR(fun_peek_23);
LOCFOR(fun_readyQ_24);
LOCFOR(fun_newline_25);
LOCFOR(fun_force_out_26);
LOCFOR(fun_put_27);
LOCFOR(fun_puts_28);
LOCFOR(fun_port_contents_29);
LOCFOR(fun_open_30);
LOCFOR(fun_open_31);
LOCFOR(fun_peek_32);
LOCFOR(fun_get_33);
LOCFOR(fun_readyQ_34);
LOCFOR(fun_put_35);
LOCFOR(fun_puts_36);
LOCFOR(fun_x_1374_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
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
  QRET(LITREF(lit_31));
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
  P tmpF1329;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),c_);
  tmpF1329 = T2;
  if (tmpF1329 != YPfalse) {
    T3 = tmpF1329;
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
  P loopF1330;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_12,2);
  loopF1330 = T1;
  FUNINIT(loopF1330, 2,port_,loopF1330);
  T3 = CALL1(1,VARREF(YgooSioSportYget),port_);
  T2 = CALL2(0,loopF1330,Ynil,T3);
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

FUNCODEDEF(fun_file_opening_error_15) {
  P filename_;
  P T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_41),filename_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_open_16) {
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

FUNCODEDEF(fun_close_17) {
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

FUNCODEDEF(fun_close_18) {
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

FUNCODEDEF(fun_x_1368_19) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1367F1341;
  P x_1367F1340;
  P x_1367F1339;
  P x_1367F1338;
  P x_1367F1337;
  P x_1367F1336;
  P bodyF1335;
  P portF1334;
  P nameF1333;
  P x_1367F1332;
  P x_1368F1331;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1368_19,1);
  x_1368F1331 = T1;
  FUNINIT(x_1368F1331, 1,return_);
  x_1367F1332 = FREEREF(0);
  nameF1333 = YPfalse;
  nameF1333 = BOXFAB(nameF1333);
  portF1334 = YPfalse;
  portF1334 = BOXFAB(portF1334);
  bodyF1335 = YPfalse;
  bodyF1335 = BOXFAB(bodyF1335);
  T9 = CALL2(1,VARREF(YisaQ),x_1367F1332,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1367F1332,LITREF(lit_47),x_1368F1331);
    x_1367F1336 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1367F1336,x_1368F1331);
    x_1367F1337 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1367F1337,x_1368F1331);
    BOXVAL(nameF1333) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1367F1337);
    x_1367F1338 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1367F1338,x_1368F1331);
    BOXVAL(portF1334) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1367F1338);
    x_1367F1339 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F1339,x_1368F1331);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1367F1336);
    x_1367F1340 = T21;
    BOXVAL(bodyF1335) = x_1367F1340;
    x_1367F1341 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1367F1341,x_1368F1331);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1368F1331,LITREF(lit_48),x_1367F1332);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_49));
  T32 = BOXVAL(nameF1333);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = BOXVAL(nameF1333);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(portF1334);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = BOXVAL(bodyF1335);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T52 = BOXVAL(nameF1333);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T57 = BOXVAL(nameF1333);
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

FUNCODEDEF(fun_get_22) {
  P port_;
  P x_1369F1343;
  P cF1342;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  T1 = (P)YPcb(T2);
  cF1342 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),cF1342,YPchr((P)10));
  if (T4 != YPfalse) {
    x_1369F1343 = port_;
    T8 = CALL1(1,VARREF(YgooSioSportYport_line),x_1369F1343);
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T7,x_1369F1343);
    T5 = T6;
  } else {
  }
  T0 = cF1342;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_23) {
  P port_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPpeek(T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_24) {
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

FUNCODEDEF(fun_newline_25) {
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

FUNCODEDEF(fun_force_out_26) {
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

FUNCODEDEF(fun_put_27) {
  P port_,c_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPcu(c_);
  T0 = (P)YPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_28) {
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

FUNCODEDEF(fun_port_contents_29) {
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

FUNCODEDEF(fun_open_30) {
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

FUNCODEDEF(fun_open_31) {
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

FUNCODEDEF(fun_peek_32) {
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

FUNCODEDEF(fun_get_33) {
  P port_;
  P x_1370F1345;
  P resF1344;
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
    resF1344 = T7;
    x_1370F1345 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_1370F1345);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_1370F1345);
    T6 = resF1344;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_34) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_35) {
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

FUNCODEDEF(fun_puts_36) {
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

FUNCODEDEF(fun_x_1374_37) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P x_1373F1352;
  P x_1373F1351;
  P x_1373F1350;
  P bodyF1349;
  P nameF1348;
  P x_1373F1347;
  P x_1374F1346;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1374_37,1);
  x_1374F1346 = T1;
  FUNINIT(x_1374F1346, 1,return_);
  x_1373F1347 = FREEREF(0);
  nameF1348 = YPfalse;
  nameF1348 = BOXFAB(nameF1348);
  bodyF1349 = YPfalse;
  bodyF1349 = BOXFAB(bodyF1349);
  T7 = CALL2(1,VARREF(YisaQ),x_1373F1347,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1373F1347,LITREF(lit_56),x_1374F1346);
    x_1373F1350 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1373F1350,x_1374F1346);
    BOXVAL(nameF1348) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1373F1350);
    x_1373F1351 = T12;
    BOXVAL(bodyF1349) = x_1373F1351;
    x_1373F1352 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1373F1352,x_1374F1346);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_1374F1346,LITREF(lit_48),x_1373F1347);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_49));
  T23 = BOXVAL(nameF1348);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_1));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_36));
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T28,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T21 = CALL3(1,VARREF(YgooSmacrosYcat),T22,T24,Ynil);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T19 = CALL2(1,VARREF(YgooSmacrosYcat),T20,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T29 = BOXVAL(bodyF1349);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T34 = BOXVAL(nameF1348);
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

P YgooSioSportY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPsym((P)"t");
  lit_3 = YPPsym((P)"name");
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
  T3 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_3)),YPPlist(2,T4,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLportG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYopen,T2);
  lit_4 = YPPsym((P)"close");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYclose,T5);
  lit_6 = YPPsym((P)"<in-port>");
  T8 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T7 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_6),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_7 = YPPsym((P)"port-line");
  lit_8 = YPPsym((P)"_x");
  T9 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPmet(FUNCODEREF(fun_port_line_0),LITREF(lit_7),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooSioSportYport_line);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSioSportYport_line);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_port_line_0;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSioSportYport_line,T10);
  lit_9 = YPPsym((P)"port-line-setter");
  lit_10 = YPPsym((P)"_z");
  T14 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_9),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooSioSportYport_line_setter);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSioSportYport_line_setter);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_port_line_setter_1;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSioSportYport_line_setter,T15);
  T19 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T20 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T20);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPsym((P)"port");
  T22 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYget,T21);
  lit_13 = YPPsym((P)"gets");
  T24 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYgets,T23);
  lit_14 = YPPsym((P)"peek");
  T26 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYpeek,T25);
  lit_15 = YPPsym((P)"ready?");
  T28 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T27 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T28,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYreadyQ,T27);
  lit_16 = YPPsym((P)"<out-port>");
  T30 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T29 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_16),T30);
  VARSET(YgooSioSportYLout_portG,T29);
  lit_17 = YPPsym((P)"newline");
  T32 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T31);
  lit_18 = YPPsym((P)"force-out");
  T34 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T33);
  lit_19 = YPPsym((P)"put");
  lit_20 = YPPsym((P)"c");
  T36 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T35);
  lit_21 = YPPsym((P)"puts");
  lit_22 = YPPsym((P)"s");
  T38 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_21),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T37);
  lit_23 = YPPsym((P)"<file-port>");
  T40 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T39 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_23),T40);
  VARSET(YgooSioSportYLfile_portG,T39);
  lit_24 = YPPsym((P)"port-handle");
  T41 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_3 = YPmet(FUNCODEREF(fun_port_handle_3),LITREF(lit_24),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooSioSportYport_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYport_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_port_handle_3;
  T42 = XCALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYport_handle,T42);
  lit_25 = YPPsym((P)"port-handle-setter");
  T46 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_handle_setter_4 = YPmet(FUNCODEREF(fun_port_handle_setter_4),LITREF(lit_25),T46,ENVNUL,PNUL,YPfalse);
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
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_4),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooSioSportYclose);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYclose);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_close_5;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYclose,T52);
  lit_26 = YPPsym((P)"<file-in-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T57 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T58);
  T56 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_26),T57);
  VARSET(YgooSioSportYLfile_in_portG,T56);
  lit_27 = YPPsym((P)"<file-out-port>");
  T61 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T61);
  T59 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_27),T60);
  VARSET(YgooSioSportYLfile_out_portG,T59);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_28 = YPPsym((P)"<str-port>");
  T63 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_28),T63);
  VARSET(YgooSioSportYLstr_portG,T62);
  lit_29 = YPPsym((P)"port-guts");
  T64 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_6 = YPmet(FUNCODEREF(fun_port_guts_6),LITREF(lit_29),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSportYport_guts);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYport_guts);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_port_guts_6;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYport_guts,T65);
  lit_30 = YPPsym((P)"port-guts-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_7 = YPmet(FUNCODEREF(fun_port_guts_setter_7),LITREF(lit_30),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSportYport_guts_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYport_guts_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_port_guts_setter_7;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYport_guts_setter,T70);
  lit_31 = YPsb((P)"");
  T74 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T75);
  lit_32 = YPPsym((P)"port-contents");
  T77 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T76 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T77,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYport_contents,T76);
  lit_33 = YPPsym((P)"<str-in-port>");
  T82 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T81 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T82);
  T80 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_33),T81);
  T79 = VARSET(YgooSioSportYLstr_in_portG,T80);
  T78 = T79;
  return T78;
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
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141;
DEFCREGS();
loop:
  lit_34 = YPPsym((P)"port-index");
  T0 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_index_9 = YPmet(FUNCODEREF(fun_port_index_9),LITREF(lit_34),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSportYport_index);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSportYport_index);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_port_index_9;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSportYport_index,T1);
  lit_35 = YPPsym((P)"port-index-setter");
  T5 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_10 = YPmet(FUNCODEREF(fun_port_index_setter_10),LITREF(lit_35),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSioSportYport_index_setter);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSioSportYport_index_setter);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_port_index_setter_10;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSportYport_index_setter,T6);
  T10 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T11 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T11);
  lit_36 = YPPsym((P)"<str-out-port>");
  T14 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T13 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T14);
  T12 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_36),T13);
  VARSET(YgooSioSportYLstr_out_portG,T12);
  lit_37 = YPPsym((P)"loop");
  lit_38 = YPPsym((P)"res");
  T16 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_12 = YPmet(FUNCODEREF(fun_loop_12),LITREF(lit_37),T16,ENVNUL,PNUL,YPfalse);
  T15 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPmet(FUNCODEREF(fun_gets_13),LITREF(lit_13),T15,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(YgooSioSportYgets);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSioSportYgets);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_gets_13;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSioSportYgets,T17);
  lit_39 = YPPsym((P)"filename");
  T22 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T21 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T22,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSioSportYopen);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSioSportYopen);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_open_14;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSioSportYopen,T23);
  lit_40 = YPPsym((P)"file-opening-error");
  lit_41 = YPsb((P)"Cannot open file named %=");
  T27 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_15 = YPmet(FUNCODEREF(fun_file_opening_error_15),LITREF(lit_40),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yfile_opening_error);
  if (T30 != YPfalse) {
    T29 = VARREF(Yfile_opening_error);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_file_opening_error_15;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yfile_opening_error,T28);
  T33 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T32 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T33,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_16 = YPmet(FUNCODEREF(fun_open_16),LITREF(lit_1),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooSioSportYopen);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooSioSportYopen);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_open_16;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooSioSportYopen,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPmet(FUNCODEREF(fun_close_17),LITREF(lit_4),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooSioSportYclose);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooSioSportYclose);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_close_17;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooSioSportYclose,T39);
  T43 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_18 = YPmet(FUNCODEREF(fun_close_18),LITREF(lit_4),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(YgooSioSportYclose);
  if (T46 != YPfalse) {
    T45 = VARREF(YgooSioSportYclose);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_close_18;
  T44 = XCALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSioSportYclose,T44);
  lit_42 = YPPsym((P)"exp");
  lit_43 = YPPsym((P)"return");
  lit_44 = YPPsym((P)"x-1368");
  lit_45 = YPPsym((P)"msg");
  lit_46 = YPPsym((P)"args");
  lit_47 = YPPsym((P)"with-port");
  lit_48 = YPsb((P)"Match Pattern Failure");
  lit_49 = YPPsym((P)"let");
  lit_50 = YPPsym((P)"fin");
  lit_51 = YPPsym((P)"seq");
  lit_52 = YPPsym((P)"set");
  lit_53 = YPPsym((P)"and");
  T50 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1368_19 = YPmet(FUNCODEREF(fun_x_1368_19),LITREF(lit_44),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_21;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T51);
  T53 = (P)YPcurrent_in_port();
  T52 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T53);
  VARSET(YgooSioSportYin,T52);
  T55 = (P)YPcurrent_out_port();
  T54 = XCALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T55);
  VARSET(YgooSioSportYout,T54);
  T56 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_22 = YPmet(FUNCODEREF(fun_get_22),LITREF(lit_11),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSioSportYget);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSioSportYget);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_get_22;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSioSportYget,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_23 = YPmet(FUNCODEREF(fun_peek_23),LITREF(lit_14),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooSioSportYpeek);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSioSportYpeek);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_peek_23;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSioSportYpeek,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_24 = YPmet(FUNCODEREF(fun_readyQ_24),LITREF(lit_15),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooSioSportYreadyQ);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooSioSportYreadyQ);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_readyQ_24;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooSioSportYreadyQ,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_25 = YPmet(FUNCODEREF(fun_newline_25),LITREF(lit_17),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSioSportYnewline);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSioSportYnewline);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_newline_25;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSioSportYnewline,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_26 = YPmet(FUNCODEREF(fun_force_out_26),LITREF(lit_18),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooSioSportYforce_out);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSioSportYforce_out);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_force_out_26;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSioSportYforce_out,T77);
  T81 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_27 = YPmet(FUNCODEREF(fun_put_27),LITREF(lit_19),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooSioSportYput);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooSioSportYput);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_put_27;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooSioSportYput,T82);
  T86 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_28 = YPmet(FUNCODEREF(fun_puts_28),LITREF(lit_21),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooSioSportYputs);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooSioSportYputs);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_puts_28;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooSioSportYputs,T87);
  T91 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_29 = YPmet(FUNCODEREF(fun_port_contents_29),LITREF(lit_32),T91,ENVNUL,PNUL,YPfalse);
  T94 = BOUNDP(YgooSioSportYport_contents);
  if (T94 != YPfalse) {
    T93 = VARREF(YgooSioSportYport_contents);
  } else {
    T93 = YPfalse;
  }
  T95 = fun_port_contents_29;
  T92 = XCALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooSioSportYport_contents,T92);
  lit_54 = YPPsym((P)"dat");
  T97 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T96 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T97,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooSioSportYopen);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSioSportYopen);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_open_30;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSioSportYopen,T98);
  T103 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T102 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T103,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_31 = YPmet(FUNCODEREF(fun_open_31),LITREF(lit_1),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooSioSportYopen);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSioSportYopen);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_open_31;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooSioSportYopen,T104);
  T108 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_32 = YPmet(FUNCODEREF(fun_peek_32),LITREF(lit_14),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooSioSportYpeek);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooSioSportYpeek);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_peek_32;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooSioSportYpeek,T109);
  T113 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_33 = YPmet(FUNCODEREF(fun_get_33),LITREF(lit_11),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooSioSportYget);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooSioSportYget);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_get_33;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooSioSportYget,T114);
  T118 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_34 = YPmet(FUNCODEREF(fun_readyQ_34),LITREF(lit_15),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooSioSportYreadyQ);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSioSportYreadyQ);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_readyQ_34;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSioSportYreadyQ,T119);
  T123 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_35 = YPmet(FUNCODEREF(fun_put_35),LITREF(lit_19),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooSioSportYput);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooSioSportYput);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_put_35;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooSioSportYput,T124);
  T128 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_36 = YPmet(FUNCODEREF(fun_puts_36),LITREF(lit_21),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YgooSioSportYputs);
  if (T131 != YPfalse) {
    T130 = VARREF(YgooSioSportYputs);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_puts_36;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YgooSioSportYputs,T129);
  lit_55 = YPPsym((P)"x-1374");
  lit_56 = YPPsym((P)"port2str");
  T139 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T138 = fun_x_1374_37 = YPmet(FUNCODEREF(fun_x_1374_37),LITREF(lit_55),T139,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T136 = fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T134 = fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T141 = fun_39;
  T140 = YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"port2str"),T141);
  T133 = T140;
  return T133;
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
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"until", &module_info_gooSmacros, "until"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%str", &module_info_gooSboot, "%str"},
  {"error", &module_info_gooSboot, "error"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"tail", &module_info_gooSboot, "tail"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"set", &module_info_gooSboot, "set"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"mif", &module_info_gooSboot, "mif"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%su", &module_info_gooSboot, "%su"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%im", &module_info_gooSboot, "%im"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<=", &module_info_gooSmag, "<="},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"op", &module_info_gooSmacros, "op"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"~", &module_info_gooSmath, "~"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"let", &module_info_gooSboot, "let"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"while", &module_info_gooSmacros, "while"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"|", &module_info_gooSmath, "|"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~=", &module_info_gooSmath, "~="},
  {"find", &module_info_gooScolsScol, "find"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"into", &module_info_gooScolsScol, "into"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"acos", &module_info_gooSmath, "acos"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"or", &module_info_gooSmacros, "or"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"head", &module_info_gooSboot, "head"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"dss", &module_info_gooSboot, "dss"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"+", &module_info_gooSmath, "+"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"export", &module_info_gooSboot, "export"},
  {"map", &module_info_gooSmacros, "map"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"@<", &module_info_gooSboot, "@<"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dl", &module_info_gooSboot, "dl"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"abs", &module_info_gooSmath, "abs"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"&", &module_info_gooSmath, "&"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {">", &module_info_gooSmag, ">"},
  {"==", &module_info_gooSmacros, "=="},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"any?", &module_info_gooStypes, "any?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"=", &module_info_gooSmath, "="},
  {"@len", &module_info_gooSboot, "@len"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@==", &module_info_gooSboot, "@=="},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"/", &module_info_gooSmath, "/"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"not", &module_info_gooSboot, "not"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%get", &module_info_gooSboot, "%get"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"log", &module_info_gooSmath, "log"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rem", &module_info_gooSmath, "rem"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"t+", &module_info_gooStypes, "t+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"~==", &module_info_gooSmath, "~=="},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"even?", &module_info_gooSmath, "even?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"tan", &module_info_gooSmath, "tan"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"del", &module_info_gooScolsScol, "del"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"new", &module_info_gooSboot, "new"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"@+", &module_info_gooSboot, "@+"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"nul", &module_info_gooSboot, "nul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"close", CVAR, &YgooSioSportYclose},
  {"out", CVAR, &YgooSioSportYout},
  {"---main-1---", PVAR, NULL},
  {"port-handle", CVAR, &YgooSioSportYport_handle},
  {"with-port", PVAR, NULL},
  {"port-index", CVAR, &YgooSioSportYport_index},
  {"port-guts", CVAR, &YgooSioSportYport_guts},
  {"open", CVAR, &YgooSioSportYopen},
  {"port-line-setter", CVAR, &YgooSioSportYport_line_setter},
  {"<str-in-port>", CVAR, &YgooSioSportYLstr_in_portG},
  {"port-contents", CVAR, &YgooSioSportYport_contents},
  {"<out-port>", CVAR, &YgooSioSportYLout_portG},
  {"port-line", CVAR, &YgooSioSportYport_line},
  {"ready?", CVAR, &YgooSioSportYreadyQ},
  {"---main-0---", PVAR, NULL},
  {"in", CVAR, &YgooSioSportYin},
  {"peek", CVAR, &YgooSioSportYpeek},
  {"<port>", CVAR, &YgooSioSportYLportG},
  {"<file-port>", CVAR, &YgooSioSportYLfile_portG},
  {"gets", CVAR, &YgooSioSportYgets},
  {"<str-port>", CVAR, &YgooSioSportYLstr_portG},
  {"<str-out-port>", CVAR, &YgooSioSportYLstr_out_portG},
  {"newline", CVAR, &YgooSioSportYnewline},
  {"puts", CVAR, &YgooSioSportYputs},
  {"<file-out-port>", CVAR, &YgooSioSportYLfile_out_portG},
  {"get", CVAR, &YgooSioSportYget},
  {"port2str", PVAR, NULL},
  {"put", CVAR, &YgooSioSportYput},
  {"<file-in-port>", CVAR, &YgooSioSportYLfile_in_portG},
  {"force-out", CVAR, &YgooSioSportYforce_out},
  {"port-handle-setter", CVAR, &YgooSioSportYport_handle_setter},
  {"port-index-setter", CVAR, &YgooSioSportYport_index_setter},
  {"port-guts-setter", CVAR, &YgooSioSportYport_guts_setter},
  {"<in-port>", CVAR, &YgooSioSportYLin_portG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"close", "close"},
  {"out", "out"},
  {"with-port", "with-port"},
  {"port-index", "port-index"},
  {"<str-out-port>", "<str-out-port>"},
  {"open", "open"},
  {"port-line-setter", "port-line-setter"},
  {"<str-in-port>", "<str-in-port>"},
  {"port-contents", "port-contents"},
  {"<out-port>", "<out-port>"},
  {"port-line", "port-line"},
  {"ready?", "ready?"},
  {"in", "in"},
  {"peek", "peek"},
  {"<port>", "<port>"},
  {"<file-port>", "<file-port>"},
  {"gets", "gets"},
  {"<str-port>", "<str-port>"},
  {"puts", "puts"},
  {"<file-out-port>", "<file-out-port>"},
  {"get", "get"},
  {"port2str", "port2str"},
  {"put", "put"},
  {"<file-in-port>", "<file-in-port>"},
  {"force-out", "force-out"},
  {"port-index-setter", "port-index-setter"},
  {"<in-port>", "<in-port>"},
  {"newline", "newline"},
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
