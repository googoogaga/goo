/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/dependency */

EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yerror,"goo/boot","error");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSruntimeYread,"goo/runtime","read");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YsubtypeQ,"goo/boot","subtype?");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathY_,"goo/math","-");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_9);
DEFLIT(lit_25);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_6);
DEFLIT(lit_27);
DEFLIT(lit_5);
DEFLIT(lit_19);
DEFLIT(lit_17);
DEFLIT(lit_12);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_28);
DEFLIT(lit_14);
DEFLIT(lit_20);
DEFLIT(lit_1);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_23);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_21);

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
  P entryF7469;
  P dep_tableF7468;
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
  dep_tableF7468 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF7468,dependent_,YPfalse);
  entryF7469 = T4;
  if (entryF7469 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF7469,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF7468,dependent_);
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
  P intersectionF7470;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF7470 = T1;
  T4 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF7470);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF7470);
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
  T10 = CALL2(1,VARREF(YevalSdependencyYdependency_or),VARREF(YevalSdependencyYDname_parse_dependency),VARREF(YevalSdependencyYDexpansion_parse_dependency));
  VARSET(YevalSdependencyYDparse_dependencies,T10);
  VARSET(YevalSdependencyYDvalue_optimization_dependency,YPint((P)4));
  VARSET(YevalSdependencyYDoptimizaton_dependencies,VARREF(YevalSdependencyYDvalue_optimization_dependency));
  lit_10 = YPPsym((P)"<dependable>");
  T12 = (P)YPpair(VARREF(YLanyG),Ynil);
  T11 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T12);
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
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
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
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YevalSdependencyYdependents_setter,T19);
  T23 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  CALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYdependents),VARREF(YevalSdependencyYdependents_setter),VARREF(YgooScolsScolYLtabG),T24);
  lit_15 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_15),T26);
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
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
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
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSdependencyYdepends_on_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  CALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYdepends_on),VARREF(YevalSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T38);
  lit_18 = YPPsym((P)"log-dependency");
  lit_19 = YPPsym((P)"dependable");
  lit_20 = YPPsym((P)"dependent");
  lit_21 = YPPsym((P)"dtype");
  T39 = YPsig(YPPlist(3,LITREF(lit_19),LITREF(lit_20),LITREF(lit_21)),YPPlist(3,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSdependencyYlog_dependency = YPmet(FUNCODEREF(YevalSdependencyYlog_dependency),LITREF(lit_18),T39,ENVNUL,PNUL,YPfalse);
  T40 = YevalSdependencyYlog_dependency;
  VARSET(YevalSdependencyYlog_dependency,T40);
  lit_22 = YPPsym((P)"find-dependency");
  T42 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSdependencyYLdependency_typeG));
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"opf", &module_info_gooSmacros, "opf"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"~", &module_info_gooSmath, "~"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"app", &module_info_gooSmacros, "app"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"find", &module_info_gooScolsScol, "find"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"tan", &module_info_gooSmath, "tan"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"error", &module_info_gooSboot, "error"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"+", &module_info_gooSmath, "+"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"=", &module_info_gooSmath, "="},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"and", &module_info_gooSmacros, "and"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"when", &module_info_gooSmacros, "when"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"items", &module_info_gooScolsScol, "items"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"^", &module_info_gooSmath, "^"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"|", &module_info_gooSmath, "|"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"dv", &module_info_gooSboot, "dv"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"~=", &module_info_gooSmath, "~="},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"esc", &module_info_gooSboot, "esc"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"t=", &module_info_gooStypes, "t="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"close", &module_info_gooSioSport, "close"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"do", &module_info_gooSmacros, "do"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"max", &module_info_gooSmag, "max"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"def", &module_info_gooSboot, "def"},
  {"logn", &module_info_gooSmath, "logn"},
  {"let", &module_info_gooSboot, "let"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"t+", &module_info_gooStypes, "t+"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"always", &module_info_gooSruntime, "always"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"for", &module_info_gooSmacros, "for"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"dp", &module_info_gooSboot, "dp"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"min", &module_info_gooSmag, "min"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"-", &module_info_gooSmath, "-"},
  {"as", &module_info_gooStypes, "as"},
  {"not", &module_info_gooSboot, "not"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"df", &module_info_gooSboot, "df"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"mod", &module_info_gooSmath, "mod"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"dg", &module_info_gooSboot, "dg"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"acos", &module_info_gooSmath, "acos"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"open", &module_info_gooSioSport, "open"},
  {"dc", &module_info_gooSboot, "dc"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"len", &module_info_gooStypes, "len"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"t*", &module_info_gooSboot, "t*"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<=", &module_info_gooSmag, "<="},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"op", &module_info_gooSmacros, "op"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<<", &module_info_gooSmath, "<<"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"pow", &module_info_gooSmath, "pow"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"get", &module_info_gooSioSport, "get"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"set", &module_info_gooSboot, "set"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sin", &module_info_gooSmath, "sin"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"dependents", &YevalSdependencyYdependents},
  {"dependents-setter", &YevalSdependencyYdependents_setter},
  {"log-dependency", &YevalSdependencyYlog_dependency},
  {"$name-parse-dependency", &YevalSdependencyYDname_parse_dependency},
  {"$parse-dependencies", &YevalSdependencyYDparse_dependencies},
  {"dependency-includes-all?", &YevalSdependencyYdependency_includes_allQ},
  {"$all-dependency-types", &YevalSdependencyYDall_dependency_types},
  {"<dependent>", &YevalSdependencyYLdependentG},
  {"detach-dependent", &YevalSdependencyYdetach_dependent},
  {"<dependable>", &YevalSdependencyYLdependableG},
  {"$expansion-parse-dependency", &YevalSdependencyYDexpansion_parse_dependency},
  {"invalidate-dependents", &YevalSdependencyYinvalidate_dependents},
  {"find-dependency", &YevalSdependencyYfind_dependency},
  {"<dependency-type>", &YevalSdependencyYLdependency_typeG},
  {"$optimizaton-dependencies", &YevalSdependencyYDoptimizaton_dependencies},
  {"depends-on", &YevalSdependencyYdepends_on},
  {"$value-optimization-dependency", &YevalSdependencyYDvalue_optimization_dependency},
  {"dependency-includes-any?", &YevalSdependencyYdependency_includes_anyQ},
  {"dependency-empty?", &YevalSdependencyYdependency_emptyQ},
  {"invalidate-dependent", &YevalSdependencyYinvalidate_dependent},
  {"depends-on-setter", &YevalSdependencyYdepends_on_setter},
  {"dependency-or", &YevalSdependencyYdependency_or},
  {"---main-0---", NULL},
  {"$empty-dependency", &YevalSdependencyYDempty_dependency},
  {"dependency-and", &YevalSdependencyYdependency_and},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"log-dependency", "log-dependency"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"<dependent>", "<dependent>"},
  {"detach-dependent", "detach-dependent"},
  {"<dependable>", "<dependable>"},
  {"<dependency-type>", "<dependency-type>"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"find-dependency", "find-dependency"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"dependency-or", "dependency-or"},
  {"dependency-empty?", "dependency-empty?"},
  {"$empty-dependency", "$empty-dependency"},
  {"dependency-and", "dependency-and"},
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
