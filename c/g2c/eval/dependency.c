/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/dependency */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYlen,"goo/types","len");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_29);
DEFLIT(lit_19);
DEFLIT(lit_13);
DEFLIT(lit_1);
DEFLIT(lit_20);
DEFLIT(lit_24);
DEFLIT(lit_8);
DEFLIT(lit_12);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_21);
DEFLIT(lit_3);
DEFLIT(lit_16);
DEFLIT(lit_15);
DEFLIT(lit_2);
DEFLIT(lit_25);
DEFLIT(lit_5);
DEFLIT(lit_18);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_0);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_14);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_23);
DEFLIT(lit_22);

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
  P entryF2409;
  P dep_tableF2408;
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
  dep_tableF2408 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF2408,dependent_,YPfalse);
  entryF2409 = T4;
  if (entryF2409 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF2409,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF2408,dependent_);
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
  P intersectionF2410;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF2410 = T1;
  T4 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF2410);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF2410);
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
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"open", &module_info_gooSioSport, "open"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"min", &module_info_gooSmag, "min"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"do", &module_info_gooSmacros, "do"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {">", &module_info_gooSmag, ">"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"esc", &module_info_gooSboot, "esc"},
  {"neg", &module_info_gooSmath, "neg"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"round/", &module_info_gooSmath, "round/"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"even?", &module_info_gooSmath, "even?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"col", &module_info_gooScolsScol, "col"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"in", &module_info_gooSioSport, "in"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"head", &module_info_gooSboot, "head"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"round", &module_info_gooSmath, "round"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"out", &module_info_gooSioSport, "out"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"always", &module_info_gooSruntime, "always"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"fin", &module_info_gooSboot, "fin"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"export", &module_info_gooSboot, "export"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"tup", &module_info_gooSboot, "tup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"let", &module_info_gooSboot, "let"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooSmacros, "last"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"items", &module_info_gooScolsScol, "items"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"match", &module_info_gooSmacros, "match"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {">>", &module_info_gooSmath, ">>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"max", &module_info_gooSmag, "max"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"abs", &module_info_gooSmath, "abs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"t+", &module_info_gooStypes, "t+"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1-", &module_info_gooSmath, "1-"},
  {"len", &module_info_gooStypes, "len"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"dependents-setter", CVAR, &YevalSdependencyYdependents_setter},
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"---main-0---", PVAR, NULL},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"dependency-or", "dependency-or"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"log-dependency", "log-dependency"},
  {"$empty-dependency", "$empty-dependency"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"<dependency-type>", "<dependency-type>"},
  {"<dependent>", "<dependent>"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-empty?", "dependency-empty?"},
  {"<dependable>", "<dependable>"},
  {"find-dependency", "find-dependency"},
  {"dependency-and", "dependency-and"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"detach-dependent", "detach-dependent"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"$parse-dependencies", "$parse-dependencies"},
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
