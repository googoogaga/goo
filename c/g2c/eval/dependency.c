/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/dependency */

EXT(YisaQ,"goo/boot","isa?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yerror,"goo/boot","error");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ytail,"goo/boot","tail");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ynew,"goo/boot","new");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_19);
DEFLIT(lit_28);
DEFLIT(lit_20);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_13);
DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_6);
DEFLIT(lit_7);
DEFLIT(lit_21);
DEFLIT(lit_16);
DEFLIT(lit_26);
DEFLIT(lit_14);
DEFLIT(lit_29);
DEFLIT(lit_22);
DEFLIT(lit_18);
DEFLIT(lit_23);
DEFLIT(lit_15);
DEFLIT(lit_4);
DEFLIT(lit_5);
DEFLIT(lit_17);
DEFLIT(lit_3);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_2);

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
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"$e", &module_info_gooSmath, "$e"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"until", &module_info_gooSmacros, "until"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<<", &module_info_gooSmath, "<<"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"close", &module_info_gooSioSport, "close"},
  {"error", &module_info_gooSboot, "error"},
  {"out", &module_info_gooSioSport, "out"},
  {"lst", &module_info_gooSboot, "lst"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"tup", &module_info_gooSboot, "tup"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fun", &module_info_gooSboot, "fun"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"|", &module_info_gooSmath, "|"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"dm", &module_info_gooSboot, "dm"},
  {"quote", &module_info_gooSboot, "quote"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"when", &module_info_gooSmacros, "when"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tail", &module_info_gooSboot, "tail"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"dv", &module_info_gooSboot, "dv"},
  {"atan", &module_info_gooSmath, "atan"},
  {"set", &module_info_gooSboot, "set"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"col", &module_info_gooScolsScol, "col"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"as", &module_info_gooStypes, "as"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"t*", &module_info_gooSboot, "t*"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {">=", &module_info_gooSmag, ">="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"def", &module_info_gooSboot, "def"},
  {"len", &module_info_gooStypes, "len"},
  {"if", &module_info_gooSboot, "if"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"logn", &module_info_gooSmath, "logn"},
  {"open", &module_info_gooSioSport, "open"},
  {"always", &module_info_gooSruntime, "always"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"do", &module_info_gooSmacros, "do"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"range", &module_info_gooScolsSrange, "range"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"match", &module_info_gooSmacros, "match"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"and", &module_info_gooSmacros, "and"},
  {"<=", &module_info_gooSmag, "<="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"op", &module_info_gooSmacros, "op"},
  {"~", &module_info_gooSmath, "~"},
  {"tan", &module_info_gooSmath, "tan"},
  {"let", &module_info_gooSboot, "let"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"while", &module_info_gooSmacros, "while"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"use", &module_info_gooSboot, "use"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"find", &module_info_gooScolsScol, "find"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"read", &module_info_gooSruntime, "read"},
  {"acos", &module_info_gooSmath, "acos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"-", &module_info_gooSmath, "-"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"head", &module_info_gooSboot, "head"},
  {"for", &module_info_gooSmacros, "for"},
  {"+", &module_info_gooSmath, "+"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"map", &module_info_gooSmacros, "map"},
  {"export", &module_info_gooSboot, "export"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"try", &module_info_gooSboot, "try"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"app", &module_info_gooSmacros, "app"},
  {"1+", &module_info_gooSmath, "1+"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"items", &module_info_gooScolsScol, "items"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sin", &module_info_gooSmath, "sin"},
  {"div", &module_info_gooSmath, "div"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"loc", &module_info_gooSboot, "loc"},
  {"ds", &module_info_gooSboot, "ds"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {">>", &module_info_gooSmath, ">>"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"&", &module_info_gooSmath, "&"},
  {"t?", &module_info_gooStypes, "t?"},
  {"in", &module_info_gooSioSport, "in"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"==", &module_info_gooSmacros, "=="},
  {"peek", &module_info_gooSioSport, "peek"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"round", &module_info_gooSmath, "round"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fin", &module_info_gooSboot, "fin"},
  {"any?", &module_info_gooStypes, "any?"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<", &module_info_gooSmag, "<"},
  {"case", &module_info_gooSmacros, "case"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {">", &module_info_gooSmag, ">"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"t<", &module_info_gooStypes, "t<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"=", &module_info_gooSmath, "="},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"esc", &module_info_gooSboot, "esc"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"/", &module_info_gooSmath, "/"},
  {"asin", &module_info_gooSmath, "asin"},
  {"neg", &module_info_gooSmath, "neg"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"not", &module_info_gooSboot, "not"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"t=", &module_info_gooStypes, "t="},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"get", &module_info_gooSioSport, "get"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"df", &module_info_gooSboot, "df"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"~==", &module_info_gooSmath, "~=="},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"put", &module_info_gooSioSport, "put"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"even?", &module_info_gooSmath, "even?"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"floor", &module_info_gooSmath, "floor"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"new", &module_info_gooSboot, "new"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"max", &module_info_gooSmag, "max"},
  {"*", &module_info_gooSmath, "*"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"~=", &module_info_gooSmath, "~="},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"now", &module_info_gooScolsScol, "now"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"dependents-setter", CVAR, &YevalSdependencyYdependents_setter},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"---main-0---", PVAR, NULL},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"dependency-and", "dependency-and"},
  {"detach-dependent", "detach-dependent"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"dependency-or", "dependency-or"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"log-dependency", "log-dependency"},
  {"$empty-dependency", "$empty-dependency"},
  {"<dependency-type>", "<dependency-type>"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"<dependent>", "<dependent>"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"<dependable>", "<dependable>"},
  {"dependency-empty?", "dependency-empty?"},
  {"find-dependency", "find-dependency"},
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
