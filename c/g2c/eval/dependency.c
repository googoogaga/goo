/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/dependency");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/dependency */

EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
DEF(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(Yprop_setter,"goo/boot","prop-setter");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSdependencyYdependents_setter,"eval/dependency","dependents-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(Ynot,"goo/boot","not");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_26);
DEFLIT(lit_31);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_7);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_15);
DEFLIT(lit_32);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_9);
DEFLIT(lit_36);
DEFLIT(lit_16);
DEFLIT(lit_25);
DEFLIT(lit_30);
DEFLIT(lit_24);
DEFLIT(lit_14);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_21);
DEFLIT(lit_8);
DEFLIT(lit_19);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_22);
DEFLIT(lit_23);
DEFLIT(lit_11);
DEFLIT(lit_12);
DEFLIT(lit_18);
DEFLIT(lit_35);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_0);

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
  P entryF2622;
  P dep_tableF2621;
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
  dep_tableF2621 = T2;
  T4 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF2621,dependent_,YPfalse);
  entryF2622 = T4;
  if (entryF2622 != YPfalse) {
    T6 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF2622,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,dep_tableF2621,dependent_);
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
  P intersectionF2623;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF2623 = T1;
  T4 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF2623);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF2623);
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
  YevalSdependencyYdependency_or = YPmet(FUNCODEREF(YevalSdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(18));
  T1 = YevalSdependencyYdependency_or;
  VARSET(YevalSdependencyYdependency_or,T1);
  lit_2 = YPPsym((P)"dependency-and");
  lit_3 = YPPlist(2,YPPsym((P)"dep1"),YPPsym((P)"dep2"));
  T2 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YevalSdependencyYLdependency_typeG),Ynil);
  YevalSdependencyYdependency_and = YPmet(FUNCODEREF(YevalSdependencyYdependency_and),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(23));
  T3 = YevalSdependencyYdependency_and;
  VARSET(YevalSdependencyYdependency_and,T3);
  VARSET(YevalSdependencyYDempty_dependency,YPint((P)0));
  VARSET(YevalSdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPlist(1,YPPsym((P)"dep"));
  T4 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_emptyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,sloc(31));
  T5 = YevalSdependencyYdependency_emptyQ;
  VARSET(YevalSdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPlist(2,YPPsym((P)"main"),YPPsym((P)"values"));
  T6 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,sloc(34));
  T7 = YevalSdependencyYdependency_includes_allQ;
  VARSET(YevalSdependencyYdependency_includes_allQ,T7);
  lit_8 = YPPsym((P)"dependency-includes-any?");
  lit_9 = YPPlist(2,YPPsym((P)"main"),YPPsym((P)"values"));
  T8 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YevalSdependencyYLdependency_typeG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YevalSdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(YevalSdependencyYdependency_includes_anyQ),LITREF(lit_8),T8,ENVNUL,PNUL,sloc(39));
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
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,sloc(96));
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
  fun_dependents_setter_6 = YPmet(FUNCODEREF(fun_dependents_setter_6),LITREF(lit_13),T18,ENVNUL,PNUL,sloc(96));
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
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,sloc(96));
  T24 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYdependents),VARREF(YevalSdependencyYdependents_setter),VARREF(YgooScolsScolYLtabG),T24);
  lit_16 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_16),T26);
  VARSET(YevalSdependencyYLdependentG,T25);
  lit_17 = YPPsym((P)"depends-on");
  lit_18 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_17),T27,ENVNUL,PNUL,sloc(100));
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
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_19),T32,ENVNUL,PNUL,sloc(100));
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
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,sloc(100));
  T38 = fun_10;
  XCALL5(1,VARREF(YPprop),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYdepends_on),VARREF(YevalSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T38);
  lit_22 = YPPsym((P)"log-dependency");
  lit_23 = YPPlist(3,YPPsym((P)"dependable"),YPPsym((P)"dependent"),YPPsym((P)"dtype"));
  T39 = YPsig(LITREF(lit_23),YPPlist(3,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSdependencyYlog_dependency = YPmet(FUNCODEREF(YevalSdependencyYlog_dependency),LITREF(lit_22),T39,ENVNUL,PNUL,sloc(103));
  T40 = YevalSdependencyYlog_dependency;
  VARSET(YevalSdependencyYlog_dependency,T40);
  lit_24 = YPPsym((P)"find-dependency");
  lit_25 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dependent"));
  T42 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSdependencyYLdependency_typeG));
  T41 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  YevalSdependencyYfind_dependency = YPmet(FUNCODEREF(YevalSdependencyYfind_dependency),LITREF(lit_24),T41,ENVNUL,PNUL,sloc(116));
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
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,sloc(132));
  T46 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YevalSdependencyYinvalidate_dependents),LITREF(lit_28),T46,ENVNUL,PNUL,sloc(129));
  T48 = YevalSdependencyYinvalidate_dependents;
  VARSET(YevalSdependencyYinvalidate_dependents,T48);
  lit_31 = YPPsym((P)"detach-dependent");
  lit_32 = YPPlist(1,YPPsym((P)"dependent"));
  lit_33 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"junk"));
  lit_34 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,sloc(141));
  T49 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSdependencyYdetach_dependent = YPmet(FUNCODEREF(YevalSdependencyYdetach_dependent),LITREF(lit_31),T49,ENVNUL,PNUL,sloc(139));
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
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"if", &module_info_gooSboot, "if"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"find", &module_info_gooScolsScol, "find"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"rem", &module_info_gooSmath, "rem"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"rep", &module_info_gooSboot, "rep"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"t=", &module_info_gooStypes, "t="},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"when", &module_info_gooSmacros, "when"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"loc", &module_info_gooSboot, "loc"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"t+", &module_info_gooStypes, "t+"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"<<", &module_info_gooSmath, "<<"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"dm", &module_info_gooSboot, "dm"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"log", &module_info_gooSmath, "log"},
  {"dv", &module_info_gooSboot, "dv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"round", &module_info_gooSmath, "round"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"/", &module_info_gooSmath, "/"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"new", &module_info_gooSboot, "new"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"div", &module_info_gooSmath, "div"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"clone", &module_info_gooSboot, "clone"},
  {"now", &module_info_gooScolsScol, "now"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"t*", &module_info_gooSboot, "t*"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"ast-error", CVAR, &YevalSdependencyYast_error},
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"dependents-setter", CVAR, &YevalSdependencyYdependents_setter},
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"---main-0---", PVAR, NULL},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<dependent>", "<dependent>"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"ast-error", "ast-error"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"dependency-empty?", "dependency-empty?"},
  {"<dependable>", "<dependable>"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"find-dependency", "find-dependency"},
  {"dependency-and", "dependency-and"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"detach-dependent", "detach-dependent"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"dependency-or", "dependency-or"},
  {"$empty-dependency", "$empty-dependency"},
  {"log-dependency", "log-dependency"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"<dependency-type>", "<dependency-type>"},
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
