/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/dependency */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YtT,"goo/boot","t*");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop,"goo/boot","%prop");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YLseqIG,"goo/boot","<seq.>");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_24);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_2);
DEFLIT(lit_22);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_20);
DEFLIT(lit_23);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_0);
DEFLIT(lit_15);
DEFLIT(lit_7);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_10);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_28);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_17);
DEFLIT(lit_14);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_29);
DEFLIT(lit_4);

/* FUNCTIONS: */

FUNFOR(YevalSdependencyYdependency_or);
FUNFOR(YevalSdependencyYdependency_and);
FUNFOR(YevalSdependencyYdependency_emptyQ);
FUNFOR(YevalSdependencyYdependency_includes_allQ);
FUNFOR(YevalSdependencyYdependency_includes_anyQ);
LOCFOR(fun_dependents_5);
LOCFOR(fun_dependents_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_depends_on_8);
LOCFOR(fun_depends_on_setter_9);
LOCFOR(fun_10);
FUNFOR(YevalSdependencyYlog_dependency);
FUNFOR(YevalSdependencyYfind_dependency);
LOCFOR(fun_13);
FUNFOR(YevalSdependencyYinvalidate_dependents);
LOCFOR(fun_15);
FUNFOR(YevalSdependencyYdetach_dependent);
extern P YevalSdependencyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YevalSdependencyYdependency_or) {
  P dep1_,dep2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYK),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_and) {
  P dep1_,dep2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYB),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_emptyQ) {
  P dep_;
  P T0;
  P a1;
LINK_STACK();
  ARG(dep_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),dep_,VARREF(YevalSdependencyYDempty_dependency));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_includes_allQ) {
  P main_,values_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),main_,values_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,values_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_includes_anyQ) {
  P main_,values_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSdependencyYdependency_and),main_,values_);
  T1 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dependents_5) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSdependencyYdependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_dependents_setter_6) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSdependencyYdependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)4));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_depends_on_8) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSdependencyYdepends_on));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_depends_on_setter_9) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSdependencyYdepends_on));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)20));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSdependencyYlog_dependency) {
  P dependable_,dependent_,dtype_;
  P entryF1640;
  P dep_tableF1639;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  ARG(dtype_, 2);
loop:
  T0 = CALL1(1,VARREF(YevalSdependencyYdepends_on),dependent_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T0,dependable_);
  T2 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  dep_tableF1639 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF1639,dependent_,YPfalse);
  entryF1640 = T4;
  if (entryF1640 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF1640,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF1639,dependent_);
  T3 = YPfalse;
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YevalSdependencyYfind_dependency) {
  P dependable_,dependent_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),T1,dependent_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P dependent_,dependendent_dtype_;
  P intersectionF1641;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF1641 = T1;
  T4 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF1641);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF1641);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSdependencyYinvalidate_dependents) {
  P dependable_,invalid_dtype_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(invalid_dtype_, 1);
loop:
  T1 = FUNFAB(fun_13,2,invalid_dtype_,dependable_);
  T2 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P dependable_,junk_;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(junk_, 1);
loop:
  T3 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T2 = CALL2(1,VARREF(YgooScolsScolxYdelX),T3,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_29),FREEREF(0),dependable_);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSdependencyYdetach_dependent) {
  P dependent_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(dependent_, 0);
loop:
  T0 = FUNFAB(fun_15,1,dependent_);
  T1 = CALL1(1,VARREF(YevalSdependencyYdepends_on),dependent_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T2 = CALL2(1,VARREF(YevalSdependencyYdepends_on_setter),T3,dependent_);
UNLINK_STACK();
  QRET(T2);
}

P YevalSdependencyY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52;
DEFCREGS();
loop:
  VARSET(YevalSdependencyYLdependency_typeG,VARREF(YLintG));
  lit_0 = YPPsym((P)"dependency-or");
  lit_1 = YPPsym((P)"dep1");
  lit_2 = YPPsym((P)"dep2");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YevalSdependencyYLdependency_typeG),Ynil);
  YevalSdependencyYdependency_or = YPmet(FUNCODEREF(YevalSdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSdependencyYdependency_or;
  VARSET(YevalSdependencyYdependency_or,T1);
  lit_3 = YPPsym((P)"dependency-and");
  T2 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YevalSdependencyYLdependency_typeG),Ynil);
  YevalSdependencyYdependency_and = YPmet(FUNCODEREF(YevalSdependencyYdependency_and),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSdependencyYdependency_and;
  VARSET(YevalSdependencyYdependency_and,T3);
  VARSET(YevalSdependencyYDempty_dependency,YPint((P)0));
  VARSET(YevalSdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPsym((P)"dep");
  T4 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_emptyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YevalSdependencyYdependency_emptyQ;
  VARSET(YevalSdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPsym((P)"main");
  lit_8 = YPPsym((P)"values");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = YevalSdependencyYdependency_includes_allQ;
  VARSET(YevalSdependencyYdependency_includes_allQ,T7);
  lit_9 = YPPsym((P)"dependency-includes-any?");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_anyQ),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
  T9 = YevalSdependencyYdependency_includes_anyQ;
  VARSET(YevalSdependencyYdependency_includes_anyQ,T9);
  VARSET(YevalSdependencyYDname_parse_dependency,YPint((P)1));
  VARSET(YevalSdependencyYDexpansion_parse_dependency,YPint((P)2));
  T10 = XCALL2(1,VARREF(YevalSdependencyYdependency_or),VARREF(YevalSdependencyYDname_parse_dependency),VARREF(YevalSdependencyYDexpansion_parse_dependency));
  VARSET(YevalSdependencyYDparse_dependencies,T10);
  VARSET(YevalSdependencyYDvalue_optimization_dependency,YPint((P)4));
  VARSET(YevalSdependencyYDoptimizaton_dependencies,VARREF(YevalSdependencyYDvalue_optimization_dependency));
  lit_10 = YPPsym((P)"<dependable>");
  T12 = (P)YPpair(VARREF(YLanyG),Ynil);
  T11 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_10),T12);
  VARSET(YevalSdependencyYLdependableG,T11);
  lit_11 = YPPsym((P)"dependents");
  lit_12 = YPPsym((P)"_x");
  T13 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YevalSdependencyYdependents);
  if (T16 != YPfalse) {
    T15 = VARREF(YevalSdependencyYdependents);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_dependents_5;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YevalSdependencyYdependents,T14);
  lit_13 = YPPsym((P)"dependents-setter");
  lit_14 = YPPsym((P)"_z");
  T18 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSdependencyYLdependableG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dependents_setter_6 = YPmet(FUNCODEREF(fun_dependents_setter_6),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YevalSdependencyYdependents_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YevalSdependencyYdependents_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_dependents_setter_6;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSdependencyYdependents_setter,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYdependents),VARREF(YevalSdependencyYdependents_setter),VARREF(YgooScolsScolYLtabG),T24);
  lit_15 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_15),T26);
  VARSET(YevalSdependencyYLdependentG,T25);
  lit_16 = YPPsym((P)"depends-on");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSdependencyYdepends_on);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSdependencyYdepends_on);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_depends_on_8;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSdependencyYdepends_on,T28);
  lit_17 = YPPsym((P)"depends-on-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_17),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSdependencyYdepends_on_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSdependencyYdepends_on_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_depends_on_setter_9;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSdependencyYdepends_on_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYdepends_on),VARREF(YevalSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T38);
  lit_18 = YPPsym((P)"log-dependency");
  lit_19 = YPPsym((P)"dependable");
  lit_20 = YPPsym((P)"dependent");
  lit_21 = YPPsym((P)"dtype");
  T39 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_20),LITREF(lit_21)),YPPlist(3,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSdependencyYlog_dependency = YPmet(FUNCODEREF(YevalSdependencyYlog_dependency),LITREF(lit_18),T39,ENVNUL,PNUL,YPfalse);
  T40 = YevalSdependencyYlog_dependency;
  VARSET(YevalSdependencyYlog_dependency,T40);
  lit_22 = YPPsym((P)"find-dependency");
  T42 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSdependencyYLdependency_typeG));
  T41 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_20)),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  YevalSdependencyYfind_dependency = YPmet(FUNCODEREF(YevalSdependencyYfind_dependency),LITREF(lit_22),T41,ENVNUL,PNUL,YPfalse);
  T43 = YevalSdependencyYfind_dependency;
  VARSET(YevalSdependencyYfind_dependency,T43);
  lit_23 = YPPsym((P)"invalidate-dependent");
  T45 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_19),LITREF(lit_21)),YPPlist(3,VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_23),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSdependencyYinvalidate_dependent,T44);
  lit_24 = YPPsym((P)"invalidate-dependents");
  lit_25 = YPPsym((P)"invalid-dtype");
  lit_26 = YPPsym((P)"dependendent-dtype");
  T47 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_26)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_25)),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YevalSdependencyYinvalidate_dependents),LITREF(lit_24),T46,ENVNUL,PNUL,YPfalse);
  T48 = YevalSdependencyYinvalidate_dependents;
  VARSET(YevalSdependencyYinvalidate_dependents,T48);
  lit_27 = YPPsym((P)"detach-dependent");
  lit_28 = YPPsym((P)"junk");
  lit_29 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSdependencyYdetach_dependent = YPmet(FUNCODEREF(YevalSdependencyYdetach_dependent),LITREF(lit_27),T49,ENVNUL,PNUL,YPfalse);
  T51 = YevalSdependencyYdetach_dependent;
  VARSET(YevalSdependencyYdetach_dependent,T51);
  T52 = YPfalse;
  return T52;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"del", &module_info_gooScolsScol, "del"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {">", &module_info_gooSmag, ">"},
  {"sin", &module_info_gooSmath, "sin"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"mod", &module_info_gooSmath, "mod"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"~==", &module_info_gooSmath, "~=="},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"nul", &module_info_gooSboot, "nul"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"min", &module_info_gooSmag, "min"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"for", &module_info_gooSmacros, "for"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"error", &module_info_gooSboot, "error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dp", &module_info_gooSboot, "dp"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"quote", &module_info_gooSboot, "quote"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"col", &module_info_gooScolsScol, "col"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"dm", &module_info_gooSboot, "dm"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"in", &module_info_gooSioSport, "in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"tan", &module_info_gooSmath, "tan"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"~", &module_info_gooSmath, "~"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"floor", &module_info_gooSmath, "floor"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"any?", &module_info_gooStypes, "any?"},
  {"t*", &module_info_gooSboot, "t*"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"get", &module_info_gooSioSport, "get"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"-", &module_info_gooSmath, "-"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"as", &module_info_gooStypes, "as"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"logn", &module_info_gooSmath, "logn"},
  {"op", &module_info_gooSmacros, "op"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"round/", &module_info_gooSmath, "round/"},
  {"close", &module_info_gooSioSport, "close"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"or", &module_info_gooSmacros, "or"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"^", &module_info_gooSmath, "^"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"1+", &module_info_gooSmath, "1+"},
  {"==", &module_info_gooSmacros, "=="},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"dependents-setter", CVAR, &YevalSdependencyYdependents_setter},
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"---main-0---", PVAR, NULL},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<dependency-type>", "<dependency-type>"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"find-dependency", "find-dependency"},
  {"dependency-and", "dependency-and"},
  {"detach-dependent", "detach-dependent"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"dependency-or", "dependency-or"},
  {"$empty-dependency", "$empty-dependency"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"log-dependency", "log-dependency"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"<dependent>", "<dependent>"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"dependency-empty?", "dependency-empty?"},
  {"<dependable>", "<dependable>"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSdependency;
MODULE_INFO module_info_evalSdependency = {
  "eval/dependency",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);

/* EXPRESSION: */

extern void load_module_evalSdependency (void);

void load_module_evalSdependency (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();

  (P)YevalSdependencyY___main_0___();

}

/* END OF GENERATED CODE. */
