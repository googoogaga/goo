/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/dependency */

EXT(Ynot,"goo/boot","not");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSmathYC,"goo/math","^");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Ytup,"goo/boot","tup");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Ytail,"goo/boot","tail");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYS,"goo/math","/");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_25);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_0);
DEFLIT(lit_18);
DEFLIT(lit_14);
DEFLIT(lit_22);
DEFLIT(lit_31);
DEFLIT(lit_21);
DEFLIT(lit_29);
DEFLIT(lit_26);
DEFLIT(lit_33);
DEFLIT(lit_13);
DEFLIT(lit_15);
DEFLIT(lit_23);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_10);
DEFLIT(lit_19);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_1);
DEFLIT(lit_28);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_5);
DEFLIT(lit_32);
DEFLIT(lit_35);
DEFLIT(lit_27);
DEFLIT(lit_12);
DEFLIT(lit_11);
DEFLIT(lit_17);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_8);
DEFLIT(lit_36);

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
  P entryF2431;
  P dep_tableF2430;
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
  dep_tableF2430 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF2430,dependent_,YPfalse);
  entryF2431 = T4;
  if (entryF2431 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF2431,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF2430,dependent_);
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
  P intersectionF2432;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF2432 = T1;
  T4 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF2432);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF2432);
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
    T4 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_34),FREEREF(0),dependable_);
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
  P T48,T49,T50,T51,T52,T53,T54;
DEFCREGS();
loop:
  VARSET(YevalSdependencyYLdependency_typeG,VARREF(YLintG));
  lit_0 = YPPsym((P)"dependency-or");
  lit_1 = YPPlist(2,YPPsym((P)"dep1"),YPPsym((P)"dep2"));
  T0 = YPsig(LITREF(lit_1),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YevalSdependencyYLdependency_typeG),Ynil);
  YevalSdependencyYdependency_or = YPmet(FUNCODEREF(YevalSdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YevalSdependencyYdependency_or;
  VARSET(YevalSdependencyYdependency_or,T1);
  lit_2 = YPPsym((P)"dependency-and");
  lit_3 = YPPlist(2,YPPsym((P)"dep1"),YPPsym((P)"dep2"));
  T2 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YevalSdependencyYLdependency_typeG),Ynil);
  YevalSdependencyYdependency_and = YPmet(FUNCODEREF(YevalSdependencyYdependency_and),LITREF(lit_2),T2,ENVNUL,PNUL,YPfalse);
  T3 = YevalSdependencyYdependency_and;
  VARSET(YevalSdependencyYdependency_and,T3);
  VARSET(YevalSdependencyYDempty_dependency,YPint((P)0));
  VARSET(YevalSdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPlist(1,YPPsym((P)"dep"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_emptyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YevalSdependencyYdependency_emptyQ;
  VARSET(YevalSdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPlist(2,YPPsym((P)"main"),YPPsym((P)"values"));
  T6 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = YevalSdependencyYdependency_includes_allQ;
  VARSET(YevalSdependencyYdependency_includes_allQ,T7);
  lit_8 = YPPsym((P)"dependency-includes-any?");
  lit_9 = YPPlist(2,YPPsym((P)"main"),YPPsym((P)"values"));
  T8 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_anyQ),LITREF(lit_8),T8,ENVNUL,PNUL,YPfalse);
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
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YevalSdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
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
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSdependencyYLdependableG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
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
  lit_15 = YPPlist(1,YPPsym((P)"_x"));
  T23 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYdependents),VARREF(YevalSdependencyYdependents_setter),VARREF(YgooScolsScolYLtabG),T24);
  lit_16 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_16),T26);
  VARSET(YevalSdependencyYLdependentG,T25);
  lit_17 = YPPsym((P)"depends-on");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSdependencyYdepends_on);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSdependencyYdepends_on);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_depends_on_8;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSdependencyYdepends_on,T28);
  lit_19 = YPPsym((P)"depends-on-setter");
  lit_20 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_19),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YevalSdependencyYdepends_on_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YevalSdependencyYdepends_on_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_depends_on_setter_9;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YevalSdependencyYdepends_on_setter,T33);
  lit_21 = YPPlist(1,YPPsym((P)"_x"));
  T37 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYdepends_on),VARREF(YevalSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T38);
  lit_22 = YPPsym((P)"log-dependency");
  lit_23 = YPPlist(3,YPPsym((P)"dependable"),YPPsym((P)"dependent"),YPPsym((P)"dtype"));
  T39 = YPsig(LITREF(lit_23),YPPlist(3,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSdependencyYlog_dependency = YPmet(FUNCODEREF(YevalSdependencyYlog_dependency),LITREF(lit_22),T39,ENVNUL,PNUL,YPfalse);
  T40 = YevalSdependencyYlog_dependency;
  VARSET(YevalSdependencyYlog_dependency,T40);
  lit_24 = YPPsym((P)"find-dependency");
  lit_25 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dependent"));
  T42 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSdependencyYLdependency_typeG));
  T41 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  YevalSdependencyYfind_dependency = YPmet(FUNCODEREF(YevalSdependencyYfind_dependency),LITREF(lit_24),T41,ENVNUL,PNUL,YPfalse);
  T43 = YevalSdependencyYfind_dependency;
  VARSET(YevalSdependencyYfind_dependency,T43);
  lit_26 = YPPsym((P)"invalidate-dependent");
  lit_27 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T45 = YPsig(LITREF(lit_27),YPPlist(3,VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_26),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSdependencyYinvalidate_dependent,T44);
  lit_28 = YPPsym((P)"invalidate-dependents");
  lit_29 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"invalid-dtype"));
  lit_30 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"dependendent-dtype"));
  T47 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YevalSdependencyYinvalidate_dependents),LITREF(lit_28),T46,ENVNUL,PNUL,YPfalse);
  T48 = YevalSdependencyYinvalidate_dependents;
  VARSET(YevalSdependencyYinvalidate_dependents,T48);
  lit_31 = YPPsym((P)"detach-dependent");
  lit_32 = YPPlist(1,YPPsym((P)"dependent"));
  lit_33 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"junk"));
  lit_34 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSdependencyYdetach_dependent = YPmet(FUNCODEREF(YevalSdependencyYdetach_dependent),LITREF(lit_31),T49,ENVNUL,PNUL,YPfalse);
  T51 = YevalSdependencyYdetach_dependent;
  VARSET(YevalSdependencyYdetach_dependent,T51);
  lit_35 = YPPsym((P)"ast-error");
  lit_36 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T53 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T52 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_35),T53,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSdependencyYast_error,T52);
  T54 = YPfalse;
  return T54;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"not", &module_info_gooSboot, "not"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"head", &module_info_gooSboot, "head"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"loc", &module_info_gooSboot, "loc"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"as", &module_info_gooStypes, "as"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"^", &module_info_gooSmath, "^"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"col", &module_info_gooScolsScol, "col"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"even?", &module_info_gooSmath, "even?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"mod", &module_info_gooSmath, "mod"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"len", &module_info_gooStypes, "len"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"atan", &module_info_gooSmath, "atan"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"in", &module_info_gooSioSport, "in"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"*", &module_info_gooSmath, "*"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"op", &module_info_gooSmacros, "op"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"floor", &module_info_gooSmath, "floor"},
  {"clone", &module_info_gooSboot, "clone"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"def", &module_info_gooSboot, "def"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@==", &module_info_gooSboot, "@=="},
  {"map", &module_info_gooSmacros, "map"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"export", &module_info_gooSboot, "export"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"@not", &module_info_gooSboot, "@not"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"t*", &module_info_gooSboot, "t*"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"put", &module_info_gooSioSport, "put"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"and", &module_info_gooSmacros, "and"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"~==", &module_info_gooSmath, "~=="},
  {"close", &module_info_gooSioSport, "close"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"1-", &module_info_gooSmath, "1-"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"set", &module_info_gooSboot, "set"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"if", &module_info_gooSboot, "if"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"|", &module_info_gooSmath, "|"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"ct", &module_info_gooSboot, "ct"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"mif", &module_info_gooSboot, "mif"},
  {"==", &module_info_gooSmacros, "=="},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"-", &module_info_gooSmath, "-"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"case", &module_info_gooSmacros, "case"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"let", &module_info_gooSboot, "let"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"out", &module_info_gooSioSport, "out"},
  {"any?", &module_info_gooStypes, "any?"},
  {"always", &module_info_gooSruntime, "always"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"abs", &module_info_gooSmath, "abs"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"max", &module_info_gooSmag, "max"},
  {"round/", &module_info_gooSmath, "round/"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~=", &module_info_gooSmath, "~="},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"acos", &module_info_gooSmath, "acos"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"match", &module_info_gooSmacros, "match"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"t+", &module_info_gooStypes, "t+"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"open", &module_info_gooSioSport, "open"},
  {"when", &module_info_gooSmacros, "when"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"div", &module_info_gooSmath, "div"},
  {"rep", &module_info_gooSboot, "rep"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"min", &module_info_gooSmag, "min"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"pow", &module_info_gooSmath, "pow"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"~", &module_info_gooSmath, "~"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"sin", &module_info_gooSmath, "sin"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"use", &module_info_gooSboot, "use"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"read", &module_info_gooSconditions, "read"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"neg", &module_info_gooSmath, "neg"},
  {"app", &module_info_gooSmacros, "app"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {">=", &module_info_gooSmag, ">="},
  {"pack", &module_info_gooSpacker, "pack"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"$e", &module_info_gooSmath, "$e"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"1+", &module_info_gooSmath, "1+"},
  {"tail", &module_info_gooSboot, "tail"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"nul", &module_info_gooSboot, "nul"},
  {"seq", &module_info_gooSboot, "seq"},
  {"do", &module_info_gooSmacros, "do"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {">", &module_info_gooSmag, ">"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"error", &module_info_gooSboot, "error"},
  {">>", &module_info_gooSmath, ">>"},
  {"+", &module_info_gooSmath, "+"},
  {"asin", &module_info_gooSmath, "asin"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"<", &module_info_gooSmag, "<"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"dm", &module_info_gooSboot, "dm"},
  {"while", &module_info_gooSmacros, "while"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"df", &module_info_gooSboot, "df"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"=", &module_info_gooSmath, "="},
  {"get", &module_info_gooSioSport, "get"},
  {"dv", &module_info_gooSboot, "dv"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"last", &module_info_gooSmacros, "last"},
  {"dg", &module_info_gooSboot, "dg"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"&", &module_info_gooSmath, "&"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"try", &module_info_gooSboot, "try"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"dc", &module_info_gooSboot, "dc"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"round", &module_info_gooSmath, "round"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"log", &module_info_gooSmath, "log"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"esc", &module_info_gooSboot, "esc"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"/", &module_info_gooSmath, "/"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"tan", &module_info_gooSmath, "tan"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"ast-error", CVAR, &YevalSdependencyYast_error},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {"---main-0---", PVAR, NULL},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"dependents-setter", CVAR, &YevalSdependencyYdependents_setter},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$parse-dependencies", "$parse-dependencies"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"log-dependency", "log-dependency"},
  {"dependency-and", "dependency-and"},
  {"<dependency-type>", "<dependency-type>"},
  {"<dependent>", "<dependent>"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"ast-error", "ast-error"},
  {"<dependable>", "<dependable>"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"find-dependency", "find-dependency"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$empty-dependency", "$empty-dependency"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"dependency-or", "dependency-or"},
  {"detach-dependent", "detach-dependent"},
  {"dependency-empty?", "dependency-empty?"},
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
