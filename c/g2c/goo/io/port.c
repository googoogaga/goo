/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/port */

EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
DEF(YgooSioSportYputs,"goo/io/port","puts");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_16);
DEFLIT(lit_49);
DEFLIT(lit_22);
DEFLIT(lit_35);
DEFLIT(lit_5);
DEFLIT(lit_42);
DEFLIT(lit_37);
DEFLIT(lit_33);
DEFLIT(lit_43);
DEFLIT(lit_8);
DEFLIT(lit_40);
DEFLIT(lit_52);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_38);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_27);
DEFLIT(lit_19);
DEFLIT(lit_32);
DEFLIT(lit_56);
DEFLIT(lit_21);
DEFLIT(lit_31);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_47);
DEFLIT(lit_17);
DEFLIT(lit_50);
DEFLIT(lit_54);
DEFLIT(lit_26);
DEFLIT(lit_45);
DEFLIT(lit_20);
DEFLIT(lit_36);
DEFLIT(lit_6);
DEFLIT(lit_14);
DEFLIT(lit_34);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_28);
DEFLIT(lit_39);
DEFLIT(lit_46);
DEFLIT(lit_41);
DEFLIT(lit_23);
DEFLIT(lit_3);
DEFLIT(lit_53);
DEFLIT(lit_25);
DEFLIT(lit_44);
DEFLIT(lit_10);
DEFLIT(lit_30);
DEFLIT(lit_55);
DEFLIT(lit_2);
DEFLIT(lit_4);
DEFLIT(lit_12);
DEFLIT(lit_48);

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
LOCFOR(fun_x_3099_19);
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
LOCFOR(fun_x_3105_37);
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
  P tmpF7169;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),c_);
  tmpF7169 = T2;
  if (tmpF7169 != YPfalse) {
    T3 = tmpF7169;
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
  P loopF7170;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_12,2);
  loopF7170 = T1;
  FUNINIT(loopF7170, 2,port_,loopF7170);
  T3 = CALL1(1,VARREF(YgooSioSportYget),port_);
  T2 = CALL2(0,loopF7170,Ynil,T3);
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

FUNCODEDEF(fun_x_3099_19) {
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
  P x_3098F7181;
  P x_3098F7180;
  P x_3098F7179;
  P x_3098F7178;
  P x_3098F7177;
  P x_3098F7176;
  P bodyF7175;
  P portF7174;
  P nameF7173;
  P x_3098F7172;
  P x_3099F7171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3099_19,1);
  x_3099F7171 = T1;
  FUNINIT(x_3099F7171, 1,return_);
  x_3098F7172 = FREEREF(0);
  nameF7173 = YPfalse;
  nameF7173 = BOXFAB(nameF7173);
  portF7174 = YPfalse;
  portF7174 = BOXFAB(portF7174);
  bodyF7175 = YPfalse;
  bodyF7175 = BOXFAB(bodyF7175);
  T9 = CALL2(1,VARREF(YisaQ),x_3098F7172,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3098F7172,LITREF(lit_47),x_3099F7171);
    x_3098F7176 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_3098F7176,x_3099F7171);
    x_3098F7177 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3098F7177,x_3099F7171);
    BOXVAL(nameF7173) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_3098F7177);
    x_3098F7178 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3098F7178,x_3099F7171);
    BOXVAL(portF7174) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_3098F7178);
    x_3098F7179 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3098F7179,x_3099F7171);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_3098F7176);
    x_3098F7180 = T21;
    BOXVAL(bodyF7175) = x_3098F7180;
    x_3098F7181 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3098F7181,x_3099F7171);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_3099F7171,LITREF(lit_48),x_3098F7172);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_49));
  T32 = BOXVAL(nameF7173);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = BOXVAL(nameF7173);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(portF7174);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T45,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = BOXVAL(bodyF7175);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T47,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T52 = BOXVAL(nameF7173);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T57 = BOXVAL(nameF7173);
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
  P x_3100F7183;
  P cF7182;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  T1 = (P)YPcb(T2);
  cF7182 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),cF7182,YPchr((P)10));
  if (T4 != YPfalse) {
    x_3100F7183 = port_;
    T8 = CALL1(1,VARREF(YgooSioSportYport_line),x_3100F7183);
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T7,x_3100F7183);
    T5 = T6;
  } else {
  }
  T0 = cF7182;
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
  P x_3101F7185;
  P resF7184;
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
    resF7184 = T7;
    x_3101F7185 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_3101F7185);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_3101F7185);
    T6 = resF7184;
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

FUNCODEDEF(fun_x_3105_37) {
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
  P x_3104F7192;
  P x_3104F7191;
  P x_3104F7190;
  P bodyF7189;
  P nameF7188;
  P x_3104F7187;
  P x_3105F7186;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_3105_37,1);
  x_3105F7186 = T1;
  FUNINIT(x_3105F7186, 1,return_);
  x_3104F7187 = FREEREF(0);
  nameF7188 = YPfalse;
  nameF7188 = BOXFAB(nameF7188);
  bodyF7189 = YPfalse;
  bodyF7189 = BOXFAB(bodyF7189);
  T7 = CALL2(1,VARREF(YisaQ),x_3104F7187,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_3104F7187,LITREF(lit_56),x_3105F7186);
    x_3104F7190 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_3104F7190,x_3105F7186);
    BOXVAL(nameF7188) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_3104F7190);
    x_3104F7191 = T12;
    BOXVAL(bodyF7189) = x_3104F7191;
    x_3104F7192 = Ynil;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_3104F7192,x_3105F7186);
    T13 = T14;
    T10 = T13;
    T8 = T10;
  } else {
    T15 = CALL2(1,x_3105F7186,LITREF(lit_48),x_3104F7187);
  }
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_49));
  T23 = BOXVAL(nameF7188);
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
  T29 = BOXVAL(bodyF7189);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_32));
  T34 = BOXVAL(nameF7188);
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
loop:
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPsym((P)"t");
  lit_3 = YPPsym((P)"name");
  T4 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
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
  T7 = CALL2(1,VARREF(Yfab_class),LITREF(lit_6),T8);
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
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
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
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSioSportYport_line_setter,T15);
  T19 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T20 = fun_2;
  CALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T20);
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
  T29 = CALL2(1,VARREF(Yfab_class),LITREF(lit_16),T30);
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
  T39 = CALL2(1,VARREF(Yfab_class),LITREF(lit_23),T40);
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
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
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
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSioSportYport_handle_setter,T47);
  CALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLportG),VARREF(YgooSioSportYport_handle),VARREF(YgooSioSportYport_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_4),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooSioSportYclose);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYclose);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_close_5;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYclose,T52);
  lit_26 = YPPsym((P)"<file-in-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T57 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T58);
  T56 = CALL2(1,VARREF(Yfab_class),LITREF(lit_26),T57);
  VARSET(YgooSioSportYLfile_in_portG,T56);
  lit_27 = YPPsym((P)"<file-out-port>");
  T61 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T61);
  T59 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T60);
  VARSET(YgooSioSportYLfile_out_portG,T59);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_28 = YPPsym((P)"<str-port>");
  T63 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T62 = CALL2(1,VARREF(Yfab_class),LITREF(lit_28),T63);
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
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
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
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYport_guts_setter,T70);
  lit_31 = YPsb((P)"");
  T74 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_8;
  CALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T75);
  lit_32 = YPPsym((P)"port-contents");
  T77 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T76 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T77,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYport_contents,T76);
  lit_33 = YPPsym((P)"<str-in-port>");
  T82 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T81 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T82);
  T80 = CALL2(1,VARREF(Yfab_class),LITREF(lit_33),T81);
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
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
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
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSioSportYport_index_setter,T6);
  T10 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T10,ENVNUL,PNUL,YPfalse);
  T11 = fun_11;
  CALL5(1,VARREF(YPprop),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T11);
  lit_36 = YPPsym((P)"<str-out-port>");
  T14 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T13 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T14);
  T12 = CALL2(1,VARREF(Yfab_class),LITREF(lit_36),T13);
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
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSioSportYgets,T17);
  lit_39 = YPPsym((P)"filename");
  T22 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T21 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T22,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSioSportYopen);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSioSportYopen);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_open_14;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
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
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yfile_opening_error,T28);
  T33 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T32 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T33,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_16 = YPmet(FUNCODEREF(fun_open_16),LITREF(lit_1),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooSioSportYopen);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooSioSportYopen);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_open_16;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
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
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
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
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(YgooSioSportYclose,T44);
  lit_42 = YPPsym((P)"exp");
  lit_43 = YPPsym((P)"return");
  lit_44 = YPPsym((P)"x-3099");
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
  fun_x_3099_19 = YPmet(FUNCODEREF(fun_x_3099_19),LITREF(lit_44),T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T49,ENVNUL,PNUL,YPfalse);
  T48 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T48,ENVNUL,PNUL,YPfalse);
  T51 = fun_21;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T51);
  T53 = (P)YPcurrent_in_port();
  T52 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T53);
  VARSET(YgooSioSportYin,T52);
  T55 = (P)YPcurrent_out_port();
  T54 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T55);
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
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
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
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
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
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
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
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
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
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
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
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
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
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
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
  T92 = CALL2(1,VARREF(YPdefine_method),T93,T95);
  VARSET(YgooSioSportYport_contents,T92);
  lit_54 = YPPsym((P)"dat");
  T97 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T96 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T97,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T96,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YgooSioSportYopen);
  if (T100 != YPfalse) {
    T99 = VARREF(YgooSioSportYopen);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_open_30;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YgooSioSportYopen,T98);
  T103 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T102 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T103,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_31 = YPmet(FUNCODEREF(fun_open_31),LITREF(lit_1),T102,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooSioSportYopen);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSioSportYopen);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_open_31;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
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
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
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
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
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
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
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
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
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
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YgooSioSportYputs,T129);
  lit_55 = YPPsym((P)"x-3105");
  lit_56 = YPPsym((P)"port2str");
  T139 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T138 = fun_x_3105_37 = YPmet(FUNCODEREF(fun_x_3105_37),LITREF(lit_55),T139,ENVNUL,PNUL,YPfalse);
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
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"+", &module_info_gooSmath, "+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"~", &module_info_gooSmath, "~"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"~=", &module_info_gooSmath, "~="},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"t=", &module_info_gooStypes, "t="},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"round", &module_info_gooSmath, "round"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"lst", &module_info_gooSboot, "lst"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"log", &module_info_gooSmath, "log"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"for", &module_info_gooSmacros, "for"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"df", &module_info_gooSboot, "df"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"del", &module_info_gooScolsScol, "del"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"do", &module_info_gooSmacros, "do"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@+", &module_info_gooSboot, "@+"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"port-handle", &YgooSioSportYport_handle},
  {"<str-out-port>", &YgooSioSportYLstr_out_portG},
  {"in", &YgooSioSportYin},
  {"put", &YgooSioSportYput},
  {"port-guts-setter", &YgooSioSportYport_guts_setter},
  {"<in-port>", &YgooSioSportYLin_portG},
  {"port2str", NULL},
  {"port-line", &YgooSioSportYport_line},
  {"close", &YgooSioSportYclose},
  {"<str-in-port>", &YgooSioSportYLstr_in_portG},
  {"force-out", &YgooSioSportYforce_out},
  {"ready?", &YgooSioSportYreadyQ},
  {"port-index-setter", &YgooSioSportYport_index_setter},
  {"---main-1---", NULL},
  {"port-contents", &YgooSioSportYport_contents},
  {"newline", &YgooSioSportYnewline},
  {"port-guts", &YgooSioSportYport_guts},
  {"port-line-setter", &YgooSioSportYport_line_setter},
  {"<str-port>", &YgooSioSportYLstr_portG},
  {"gets", &YgooSioSportYgets},
  {"<file-out-port>", &YgooSioSportYLfile_out_portG},
  {"puts", &YgooSioSportYputs},
  {"<file-port>", &YgooSioSportYLfile_portG},
  {"<file-in-port>", &YgooSioSportYLfile_in_portG},
  {"peek", &YgooSioSportYpeek},
  {"<out-port>", &YgooSioSportYLout_portG},
  {"open", &YgooSioSportYopen},
  {"<port>", &YgooSioSportYLportG},
  {"port-handle-setter", &YgooSioSportYport_handle_setter},
  {"out", &YgooSioSportYout},
  {"with-port", NULL},
  {"get", &YgooSioSportYget},
  {"---main-0---", NULL},
  {"port-index", &YgooSioSportYport_index},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<str-out-port>", "<str-out-port>"},
  {"in", "in"},
  {"put", "put"},
  {"<in-port>", "<in-port>"},
  {"port2str", "port2str"},
  {"<out-port>", "<out-port>"},
  {"port-line", "port-line"},
  {"close", "close"},
  {"<str-port>", "<str-port>"},
  {"<str-in-port>", "<str-in-port>"},
  {"force-out", "force-out"},
  {"ready?", "ready?"},
  {"port-index-setter", "port-index-setter"},
  {"peek", "peek"},
  {"port-contents", "port-contents"},
  {"newline", "newline"},
  {"port-line-setter", "port-line-setter"},
  {"gets", "gets"},
  {"<file-port>", "<file-port>"},
  {"<file-out-port>", "<file-out-port>"},
  {"open", "open"},
  {"<port>", "<port>"},
  {"out", "out"},
  {"<file-in-port>", "<file-in-port>"},
  {"puts", "puts"},
  {"with-port", "with-port"},
  {"get", "get"},
  {"port-index", "port-index"},
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
