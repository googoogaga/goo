/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/dependency */

EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathYlog,"goo/math","log");
DEF(Yx8rSdependencyYlog_dependency,"x8r/dependency","log-dependency");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(Yx8rSdependencyYdependency_includes_allQ,"x8r/dependency","dependency-includes-all?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLlstG,"goo/boot","<lst>");
DEF(Yx8rSdependencyYdepends_on,"x8r/dependency","depends-on");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(Yx8rSdependencyYdependency_includes_anyQ,"x8r/dependency","dependency-includes-any?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(Yx8rSdependencyYDempty_dependency,"x8r/dependency","$empty-dependency");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(Yx8rSdependencyYdependents_setter,"x8r/dependency","dependents-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
DEF(Yx8rSdependencyYDexpansion_parse_dependency,"x8r/dependency","$expansion-parse-dependency");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(Yx8rSdependencyYLdependentG,"x8r/dependency","<dependent>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(Yx8rSdependencyYLdependency_typeG,"x8r/dependency","<dependency-type>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynot,"goo/boot","not");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yhead,"goo/boot","head");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(Yx8rSdependencyYinvalidate_dependents,"x8r/dependency","invalidate-dependents");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(Yx8rSdependencyYdependency_emptyQ,"x8r/dependency","dependency-empty?");
DEF(Yx8rSdependencyYdependency_or,"x8r/dependency","dependency-or");
DEF(Yx8rSdependencyYDname_parse_dependency,"x8r/dependency","$name-parse-dependency");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(Yx8rSdependencyYDoptimizaton_dependencies,"x8r/dependency","$optimizaton-dependencies");
DEF(Yx8rSdependencyYDparse_dependencies,"x8r/dependency","$parse-dependencies");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(Yx8rSdependencyYLdependableG,"x8r/dependency","<dependable>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(Yx8rSdependencyYDall_dependency_types,"x8r/dependency","$all-dependency-types");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(Yx8rSdependencyYdependents,"x8r/dependency","dependents");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYB,"goo/math","&");
DEF(Yx8rSdependencyYinvalidate_dependent,"x8r/dependency","invalidate-dependent");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(Yx8rSdependencyYdetach_dependent,"x8r/dependency","detach-dependent");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Ynil,"goo/boot","nil");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(Yx8rSdependencyYdepends_on_setter,"x8r/dependency","depends-on-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(Yx8rSdependencyYdependency_and,"x8r/dependency","dependency-and");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
DEF(Yx8rSdependencyYDvalue_optimization_dependency,"x8r/dependency","$value-optimization-dependency");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(Yx8rSdependencyYfind_dependency,"x8r/dependency","find-dependency");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYdigitQ,"goo/math","digit?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_22);
DEFLIT(lit_12);
DEFLIT(lit_13);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_25);
DEFLIT(lit_1);
DEFLIT(lit_9);
DEFLIT(lit_28);
DEFLIT(lit_8);
DEFLIT(lit_29);
DEFLIT(lit_19);
DEFLIT(lit_2);
DEFLIT(lit_5);
DEFLIT(lit_21);
DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_0);
DEFLIT(lit_18);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_7);
DEFLIT(lit_27);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_30);
DEFLIT(lit_20);
DEFLIT(lit_26);

/* FUNCTIONS: */

FUNFOR(Yx8rSdependencyYdependency_or);
FUNFOR(Yx8rSdependencyYdependency_and);
FUNFOR(Yx8rSdependencyYdependency_emptyQ);
FUNFOR(Yx8rSdependencyYdependency_includes_allQ);
FUNFOR(Yx8rSdependencyYdependency_includes_anyQ);
LOCFOR(fun_dependents_5);
LOCFOR(fun_dependents_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_depends_on_8);
LOCFOR(fun_depends_on_setter_9);
LOCFOR(fun_10);
FUNFOR(Yx8rSdependencyYlog_dependency);
FUNFOR(Yx8rSdependencyYfind_dependency);
LOCFOR(fun_13);
FUNFOR(Yx8rSdependencyYinvalidate_dependents);
LOCFOR(fun_15);
FUNFOR(Yx8rSdependencyYdetach_dependent);
extern P Yx8rSdependencyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(Yx8rSdependencyYdependency_or) {
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

FUNCODEDEF(Yx8rSdependencyYdependency_and) {
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

FUNCODEDEF(Yx8rSdependencyYdependency_emptyQ) {
  P dep_;
  P T0;
  P a1;
LINK_STACK();
  ARG(dep_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),dep_,VARREF(Yx8rSdependencyYDempty_dependency));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSdependencyYdependency_includes_allQ) {
  P main_,values_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSdependencyYdependency_and),main_,values_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,values_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yx8rSdependencyYdependency_includes_anyQ) {
  P main_,values_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T2 = CALL2(1,VARREF(Yx8rSdependencyYdependency_and),main_,values_);
  T1 = CALL1(1,VARREF(Yx8rSdependencyYdependency_emptyQ),T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSdependencyYdependents));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSdependencyYdependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_7) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSdependencyYdepends_on));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSdependencyYdepends_on));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)20));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSdependencyYlog_dependency) {
  P dependable_,dependent_,dtype_;
  P entryF1594;
  P dep_tableF1593;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  ARG(dtype_, 2);
loop:
  T0 = CALL1(1,VARREF(Yx8rSdependencyYdepends_on),dependent_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T0,dependable_);
  T2 = CALL1(1,VARREF(Yx8rSdependencyYdependents),dependable_);
  dep_tableF1593 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF1593,dependent_,YPfalse);
  entryF1594 = T4;
  if (entryF1594 != YPfalse) {
    T6 = CALL2(1,VARREF(Yx8rSdependencyYdependency_or),entryF1594,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF1593,dependent_);
  T3 = YPfalse;
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(Yx8rSdependencyYfind_dependency) {
  P dependable_,dependent_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSdependencyYdependents),dependable_);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),T1,dependent_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P dependent_,dependendent_dtype_;
  P intersectionF1595;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF1595 = T1;
  T4 = CALL1(1,VARREF(Yx8rSdependencyYdependency_emptyQ),intersectionF1595);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(Yx8rSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF1595);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSdependencyYinvalidate_dependents) {
  P dependable_,invalid_dtype_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(invalid_dtype_, 1);
loop:
  T1 = FUNFAB(fun_13,2,invalid_dtype_,dependable_);
  T2 = CALL1(1,VARREF(Yx8rSdependencyYdependents),dependable_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P dependable_,junk_;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(junk_, 1);
loop:
  T3 = CALL1(1,VARREF(Yx8rSdependencyYdependents),dependable_);
  T2 = CALL2(1,VARREF(YgooScolsScolxYdelX),T3,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL3(1,VARREF(Yerror),LITREF(lit_30),FREEREF(0),dependable_);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSdependencyYdetach_dependent) {
  P dependent_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(dependent_, 0);
loop:
  T0 = FUNFAB(fun_15,1,dependent_);
  T1 = CALL1(1,VARREF(Yx8rSdependencyYdepends_on),dependent_);
  CALL2(1,VARREF(YgooScolsScolYdo_keyed),T0,T1);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)0));
  T2 = CALL2(1,VARREF(Yx8rSdependencyYdepends_on_setter),T3,dependent_);
UNLINK_STACK();
  QRET(T2);
}

P Yx8rSdependencyY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  VARSET(Yx8rSdependencyYLdependency_typeG,VARREF(YLintG));
  lit_0 = YPPsym((P)"dependency-or");
  lit_1 = YPPsym((P)"dep1");
  lit_2 = YPPsym((P)"dep2");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(Yx8rSdependencyYLdependency_typeG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(Yx8rSdependencyYLdependency_typeG),Ynil);
  Yx8rSdependencyYdependency_or = YPmet(FUNCODEREF(Yx8rSdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = Yx8rSdependencyYdependency_or;
  VARSET(Yx8rSdependencyYdependency_or,T1);
  lit_3 = YPPsym((P)"dependency-and");
  T2 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(Yx8rSdependencyYLdependency_typeG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(Yx8rSdependencyYLdependency_typeG),Ynil);
  Yx8rSdependencyYdependency_and = YPmet(FUNCODEREF(Yx8rSdependencyYdependency_and),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = Yx8rSdependencyYdependency_and;
  VARSET(Yx8rSdependencyYdependency_and,T3);
  VARSET(Yx8rSdependencyYDempty_dependency,YPint((P)0));
  VARSET(Yx8rSdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPsym((P)"dep");
  T4 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  Yx8rSdependencyYdependency_emptyQ = YPmet(FUNCODEREF(Yx8rSdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = Yx8rSdependencyYdependency_emptyQ;
  VARSET(Yx8rSdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPsym((P)"main");
  lit_8 = YPPsym((P)"values");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(Yx8rSdependencyYLdependency_typeG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yx8rSdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(Yx8rSdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = Yx8rSdependencyYdependency_includes_allQ;
  VARSET(Yx8rSdependencyYdependency_includes_allQ,T7);
  lit_9 = YPPsym((P)"dependency-includes-any?");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(Yx8rSdependencyYLdependency_typeG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  Yx8rSdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(Yx8rSdependencyYdependency_includes_anyQ),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
  T9 = Yx8rSdependencyYdependency_includes_anyQ;
  VARSET(Yx8rSdependencyYdependency_includes_anyQ,T9);
  VARSET(Yx8rSdependencyYDname_parse_dependency,YPint((P)1));
  VARSET(Yx8rSdependencyYDexpansion_parse_dependency,YPint((P)2));
  T10 = CALL2(1,VARREF(Yx8rSdependencyYdependency_or),VARREF(Yx8rSdependencyYDname_parse_dependency),VARREF(Yx8rSdependencyYDexpansion_parse_dependency));
  VARSET(Yx8rSdependencyYDparse_dependencies,T10);
  VARSET(Yx8rSdependencyYDvalue_optimization_dependency,YPint((P)4));
  VARSET(Yx8rSdependencyYDoptimizaton_dependencies,VARREF(Yx8rSdependencyYDvalue_optimization_dependency));
  lit_10 = YPPsym((P)"<dependable>");
  T12 = (P)YPpair(VARREF(YLanyG),Ynil);
  T11 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T12);
  VARSET(Yx8rSdependencyYLdependableG,T11);
  lit_11 = YPPsym((P)"dependents");
  lit_12 = YPPsym((P)"_x");
  T13 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(Yx8rSdependencyYdependents);
  if (T16 != YPfalse) {
    T15 = VARREF(Yx8rSdependencyYdependents);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_dependents_5;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(Yx8rSdependencyYdependents,T14);
  lit_13 = YPPsym((P)"dependents-setter");
  lit_14 = YPPsym((P)"_z");
  T18 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSdependencyYLdependableG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dependents_setter_6 = YPmet(FUNCODEREF(fun_dependents_setter_6),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(Yx8rSdependencyYdependents_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(Yx8rSdependencyYdependents_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_dependents_setter_6;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(Yx8rSdependencyYdependents_setter,T19);
  lit_15 = YPPsym((P)"x");
  T23 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYdependents),VARREF(Yx8rSdependencyYdependents_setter),VARREF(YgooScolsScolYLtabG),T24);
  lit_16 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_16),T26);
  VARSET(Yx8rSdependencyYLdependentG,T25);
  lit_17 = YPPsym((P)"depends-on");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(Yx8rSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSdependencyYdepends_on);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSdependencyYdepends_on);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_depends_on_8;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSdependencyYdepends_on,T28);
  lit_18 = YPPsym((P)"depends-on-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(Yx8rSdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_18),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSdependencyYdepends_on_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSdependencyYdepends_on_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_depends_on_setter_9;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSdependencyYdepends_on_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSdependencyYLdependentG),VARREF(Yx8rSdependencyYdepends_on),VARREF(Yx8rSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T38);
  lit_19 = YPPsym((P)"log-dependency");
  lit_20 = YPPsym((P)"dependable");
  lit_21 = YPPsym((P)"dependent");
  lit_22 = YPPsym((P)"dtype");
  T39 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_21),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependentG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yx8rSdependencyYlog_dependency = YPmet(FUNCODEREF(Yx8rSdependencyYlog_dependency),LITREF(lit_19),T39,ENVNUL,PNUL,YPfalse);
  T40 = Yx8rSdependencyYlog_dependency;
  VARSET(Yx8rSdependencyYlog_dependency,T40);
  lit_23 = YPPsym((P)"find-dependency");
  T42 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(Yx8rSdependencyYLdependency_typeG));
  T41 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  Yx8rSdependencyYfind_dependency = YPmet(FUNCODEREF(Yx8rSdependencyYfind_dependency),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T43 = Yx8rSdependencyYfind_dependency;
  VARSET(Yx8rSdependencyYfind_dependency,T43);
  lit_24 = YPPsym((P)"invalidate-dependent");
  T45 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_20),LITREF(lit_22)),YPPlist(3,VARREF(Yx8rSdependencyYLdependentG),VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rSdependencyYinvalidate_dependent,T44);
  lit_25 = YPPsym((P)"invalidate-dependents");
  lit_26 = YPPsym((P)"invalid-dtype");
  lit_27 = YPPsym((P)"dependendent-dtype");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_26)),YPPlist(2,VARREF(Yx8rSdependencyYLdependableG),VARREF(Yx8rSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(Yx8rSdependencyYinvalidate_dependents),LITREF(lit_25),T46,ENVNUL,PNUL,YPfalse);
  T48 = Yx8rSdependencyYinvalidate_dependents;
  VARSET(Yx8rSdependencyYinvalidate_dependents,T48);
  lit_28 = YPPsym((P)"detach-dependent");
  lit_29 = YPPsym((P)"junk");
  lit_30 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(Yx8rSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rSdependencyYdetach_dependent = YPmet(FUNCODEREF(Yx8rSdependencyYdetach_dependent),LITREF(lit_28),T49,ENVNUL,PNUL,YPfalse);
  T51 = Yx8rSdependencyYdetach_dependent;
  VARSET(Yx8rSdependencyYdetach_dependent,T51);
  T52 = YPfalse;
  return T52;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_x8rSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"read", &module_info_gooSruntime, "read"},
  {"while", &module_info_gooSmacros, "while"},
  {"~=", &module_info_gooSmath, "~="},
  {"mif", &module_info_gooSboot, "mif"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t+", &module_info_gooStypes, "t+"},
  {"$e", &module_info_gooSmath, "$e"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"log", &module_info_gooSmath, "log"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format", &module_info_gooSruntime, "format"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"/", &module_info_gooSmath, "/"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"ct", &module_info_gooSboot, "ct"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"mod", &module_info_gooSmath, "mod"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"app", &module_info_gooSmacros, "app"},
  {"pow", &module_info_gooSmath, "pow"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"t?", &module_info_gooStypes, "t?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"~==", &module_info_gooSmath, "~=="},
  {"and", &module_info_gooSmacros, "and"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"match", &module_info_gooSmacros, "match"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"-", &module_info_gooSmath, "-"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"use", &module_info_gooSboot, "use"},
  {"cos", &module_info_gooSmath, "cos"},
  {"when", &module_info_gooSmacros, "when"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"*", &module_info_gooSmath, "*"},
  {"always", &module_info_gooSruntime, "always"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"seq", &module_info_gooSboot, "seq"},
  {"rep", &module_info_gooSboot, "rep"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"quote", &module_info_gooSboot, "quote"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"until", &module_info_gooSmacros, "until"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"any?", &module_info_gooStypes, "any?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"t=", &module_info_gooStypes, "t="},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"items", &module_info_gooScolsScol, "items"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"nul", &module_info_gooSboot, "nul"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"find", &module_info_gooScolsScol, "find"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"not", &module_info_gooSboot, "not"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"round/", &module_info_gooSmath, "round/"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"case", &module_info_gooSmacros, "case"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"max", &module_info_gooSmag, "max"},
  {"head", &module_info_gooSboot, "head"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"def", &module_info_gooSboot, "def"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {">", &module_info_gooSmag, ">"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"len", &module_info_gooStypes, "len"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"if", &module_info_gooSboot, "if"},
  {"==", &module_info_gooSmacros, "=="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"round", &module_info_gooSmath, "round"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<", &module_info_gooSmag, "<"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"min", &module_info_gooSmag, "min"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"as", &module_info_gooStypes, "as"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"try", &module_info_gooSboot, "try"},
  {"dp", &module_info_gooSboot, "dp"},
  {"get", &module_info_gooSioSport, "get"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"abs", &module_info_gooSmath, "abs"},
  {"=", &module_info_gooSmath, "="},
  {"puts", &module_info_gooSioSport, "puts"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"close", &module_info_gooSioSport, "close"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"do", &module_info_gooSmacros, "do"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<<", &module_info_gooSmath, "<<"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"+", &module_info_gooSmath, "+"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"~", &module_info_gooSmath, "~"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"df", &module_info_gooSboot, "df"},
  {"let", &module_info_gooSboot, "let"},
  {"even?", &module_info_gooSmath, "even?"},
  {"for", &module_info_gooSmacros, "for"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"isa", &module_info_gooSboot, "isa"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"dv", &module_info_gooSboot, "dv"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {">=", &module_info_gooSmag, ">="},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"dg", &module_info_gooSboot, "dg"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"floor", &module_info_gooSmath, "floor"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"map", &module_info_gooSmacros, "map"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"&", &module_info_gooSmath, "&"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"nil", &module_info_gooSboot, "nil"},
  {"ds", &module_info_gooSboot, "ds"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"put", &module_info_gooSioSport, "put"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"op", &module_info_gooSmacros, "op"},
  {"dc", &module_info_gooSboot, "dc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"export", &module_info_gooSboot, "export"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"new", &module_info_gooSboot, "new"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<=", &module_info_gooSmag, "<="},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"in", &module_info_gooSioSport, "in"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"opf", &module_info_gooSmacros, "opf"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"open", &module_info_gooSioSport, "open"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"del", &module_info_gooScolsScol, "del"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"fin", &module_info_gooSboot, "fin"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"t*", &module_info_gooStypes, "t*"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"log-dependency", &Yx8rSdependencyYlog_dependency},
  {"dependency-includes-all?", &Yx8rSdependencyYdependency_includes_allQ},
  {"depends-on", &Yx8rSdependencyYdepends_on},
  {"dependency-includes-any?", &Yx8rSdependencyYdependency_includes_anyQ},
  {"$empty-dependency", &Yx8rSdependencyYDempty_dependency},
  {"dependents-setter", &Yx8rSdependencyYdependents_setter},
  {"$expansion-parse-dependency", &Yx8rSdependencyYDexpansion_parse_dependency},
  {"<dependent>", &Yx8rSdependencyYLdependentG},
  {"<dependency-type>", &Yx8rSdependencyYLdependency_typeG},
  {"invalidate-dependents", &Yx8rSdependencyYinvalidate_dependents},
  {"---main-0---", NULL},
  {"dependency-empty?", &Yx8rSdependencyYdependency_emptyQ},
  {"dependency-or", &Yx8rSdependencyYdependency_or},
  {"$name-parse-dependency", &Yx8rSdependencyYDname_parse_dependency},
  {"$optimizaton-dependencies", &Yx8rSdependencyYDoptimizaton_dependencies},
  {"$parse-dependencies", &Yx8rSdependencyYDparse_dependencies},
  {"<dependable>", &Yx8rSdependencyYLdependableG},
  {"$all-dependency-types", &Yx8rSdependencyYDall_dependency_types},
  {"dependents", &Yx8rSdependencyYdependents},
  {"invalidate-dependent", &Yx8rSdependencyYinvalidate_dependent},
  {"detach-dependent", &Yx8rSdependencyYdetach_dependent},
  {"depends-on-setter", &Yx8rSdependencyYdepends_on_setter},
  {"dependency-and", &Yx8rSdependencyYdependency_and},
  {"$value-optimization-dependency", &Yx8rSdependencyYDvalue_optimization_dependency},
  {"find-dependency", &Yx8rSdependencyYfind_dependency},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"log-dependency", "log-dependency"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"$empty-dependency", "$empty-dependency"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"<dependent>", "<dependent>"},
  {"<dependency-type>", "<dependency-type>"},
  {"dependency-empty?", "dependency-empty?"},
  {"dependency-or", "dependency-or"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"<dependable>", "<dependable>"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"detach-dependent", "detach-dependent"},
  {"dependency-and", "dependency-and"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"find-dependency", "find-dependency"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSdependency;
MODULE_INFO module_info_x8rSdependency = {
  "x8r/dependency",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);

/* EXPRESSION: */

extern void load_module_x8rSdependency (void);

void load_module_x8rSdependency (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();

  (P)Yx8rSdependencyY___main_0___();

}

/* END OF GENERATED CODE. */
