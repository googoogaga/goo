/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/dependency");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/dependency */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSdependencyYdepends_on,"eval/dependency","depends-on");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSdependencyYdependents,"eval/dependency","dependents");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSdependencyYDoptimizaton_dependencies,"eval/dependency","$optimizaton-dependencies");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YevalSdependencyYlog_dependency,"eval/dependency","log-dependency");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSdependencyYdepends_on_setter,"eval/dependency","depends-on-setter");
EXT(YgooSmathYN,"goo/math","~");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSdependencyYDparse_dependencies,"eval/dependency","$parse-dependencies");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSclassYobject_class,"goo/class","object-class");
DEF(YevalSdependencyYdependency_or,"eval/dependency","dependency-or");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSdependencyYDname_parse_dependency,"eval/dependency","$name-parse-dependency");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
DEF(YevalSdependencyYDvalue_optimization_dependency,"eval/dependency","$value-optimization-dependency");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSdependencyYfind_dependency,"eval/dependency","find-dependency");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YevalSdependencyYdetach_dependent,"eval/dependency","detach-dependent");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSdependencyYdependency_and,"eval/dependency","dependency-and");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YevalSdependencyYDall_dependency_types,"eval/dependency","$all-dependency-types");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YevalSdependencyYLdependency_typeG,"eval/dependency","<dependency-type>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YevalSdependencyYinvalidate_dependents,"eval/dependency","invalidate-dependents");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(Yhead,"goo/boot","head");
DEF(YevalSdependencyYLdependableG,"eval/dependency","<dependable>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSdependencyYLdependentG,"eval/dependency","<dependent>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
DEF(YevalSdependencyYinvalidate_dependent,"eval/dependency","invalidate-dependent");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSdependencyYdependency_includes_anyQ,"eval/dependency","dependency-includes-any?");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
DEF(YevalSdependencyYdependency_emptyQ,"eval/dependency","dependency-empty?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YevalSdependencyYDempty_dependency,"eval/dependency","$empty-dependency");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
DEF(YevalSdependencyYDexpansion_parse_dependency,"eval/dependency","$expansion-parse-dependency");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(YevalSdependencyYdependency_includes_allQ,"eval/dependency","dependency-includes-all?");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_14);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_33);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_34);
DEFLIT(lit_31);
DEFLIT(lit_2);
DEFLIT(lit_23);
DEFLIT(lit_19);
DEFLIT(lit_26);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_27);
DEFLIT(lit_17);
DEFLIT(lit_1);
DEFLIT(lit_13);
DEFLIT(lit_0);
DEFLIT(lit_20);
DEFLIT(lit_12);
DEFLIT(lit_7);
DEFLIT(lit_4);
DEFLIT(lit_6);
DEFLIT(lit_18);
DEFLIT(lit_30);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_25);
DEFLIT(lit_15);
DEFLIT(lit_29);
DEFLIT(lit_22);
DEFLIT(lit_9);
DEFLIT(lit_28);
DEFLIT(lit_24);

/* FUNCTIONS: */

FUNFOR(YevalSdependencyYdependency_or);
FUNFOR(YevalSdependencyYdependency_and);
FUNFOR(YevalSdependencyYdependency_emptyQ);
FUNFOR(YevalSdependencyYdependency_includes_allQ);
FUNFOR(YevalSdependencyYdependency_includes_anyQ);
LOCFOR(fun_dependents_5);
LOCFOR(fun_6);
LOCFOR(fun_depends_on_7);
LOCFOR(fun_depends_on_setter_8);
LOCFOR(fun_9);
FUNFOR(YevalSdependencyYlog_dependency);
FUNFOR(YevalSdependencyYfind_dependency);
LOCFOR(fun_12);
FUNFOR(YevalSdependencyYinvalidate_dependents);
LOCFOR(fun_14);
FUNFOR(YevalSdependencyYdetach_dependent);
extern P YevalSdependencyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YevalSdependencyYdependency_or) {
  P dep1_,dep2_;
  P T0;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
  T0 = CALL2(1,VARREF(YgooSmathYK),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_and) {
  P dep1_,dep2_;
  P T0;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
  T0 = CALL2(1,VARREF(YgooSmathYB),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_emptyQ) {
  P dep_;
  P T0;
LINK_STACK();
  ARG(dep_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),dep_,VARREF(YevalSdependencyYDempty_dependency));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_includes_allQ) {
  P main_,values_;
  P T0,T1;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
  T1 = CALL2(1,VARREF(YevalSdependencyYdependency_and),main_,values_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,values_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSdependencyYdependency_includes_anyQ) {
  P main_,values_;
  P T0,T1,T2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
  T2 = CALL2(1,VARREF(YevalSdependencyYdependency_and),main_,values_);
  T1 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),T2);
  T0 = CALL1(1,VARREF(Ynot),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_dependents_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSdependencyYdependents));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)4));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_depends_on_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSdependencyYdepends_on));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_depends_on_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSdependencyYdepends_on));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)20));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSdependencyYlog_dependency) {
  P dependable_,dependent_,dtype_;
  P entryF8980;
  P dep_tableF8979;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  ARG(dtype_, 2);
  T0 = CALL1(1,VARREF(YevalSdependencyYdepends_on),dependent_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,T0,dependable_);
  T4 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  dep_tableF8979 = T4;
  T3 = CALL3(1,VARREF(YgooScolsScolYelt_or),dep_tableF8979,dependent_,YPfalse);
  entryF8980 = T3;
  if (entryF8980 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalSdependencyYdependency_or),entryF8980,dtype_);
    T1 = T2;
  } else {
    T1 = dtype_;
  }
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),T1,dep_tableF8979,dependent_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSdependencyYfind_dependency) {
  P dependable_,dependent_;
  P T0,T1;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  T1 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),T1,dependent_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_12) {
  P dependent_,dependendent_dtype_;
  P intersectionF8981;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
  T4 = CALL2(1,VARREF(YevalSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF8981 = T4;
  T2 = CALL1(1,VARREF(YevalSdependencyYdependency_emptyQ),intersectionF8981);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(YevalSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF8981);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSdependencyYinvalidate_dependents) {
  P dependable_,invalid_dtype_;
  P T0,T1,T2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(invalid_dtype_, 1);
  T1 = FUNFAB(fun_12,2,invalid_dtype_,dependable_);
  T2 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T0 = CALL2(1,VARREF(YgooScolsScolYdo_keyed),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_14) {
  P dependable_,junk_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(junk_, 1);
  T3 = CALL1(1,VARREF(YevalSdependencyYdependents),dependable_);
  T2 = CALL2(1,VARREF(YgooScolsScolxYdelX),T3,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL3(1,VARREF(YevalSdependencyYast_error),LITREF(lit_32),FREEREF(0),dependable_);
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
LINK_STACK();
  ARG(dependent_, 0);
  T0 = FUNFAB(fun_14,1,dependent_);
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
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
DEFCREGS();
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
  T11 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_10),T12);
  VARSET(YevalSdependencyYLdependableG,T11);
  lit_11 = YPPsym((P)"dependents");
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YevalSdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,sloc(96));
  T15 = VARREF_OR(YevalSdependencyYdependents,YPfalse);
  T16 = fun_dependents_5;
  T14 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T15,T16);
  VARSET(YevalSdependencyYdependents,T14);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T17,ENVNUL,PNUL,sloc(96));
  T18 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYdependents),YPfalse,VARREF(YgooScolsScolYLtabG),T18);
  lit_14 = YPPsym((P)"<dependent>");
  T20 = (P)YPpair(VARREF(YLanyG),Ynil);
  T19 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T20);
  VARSET(YevalSdependencyYLdependentG,T19);
  lit_15 = YPPsym((P)"depends-on");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_7 = YPmet(FUNCODEREF(fun_depends_on_7),LITREF(lit_15),T21,ENVNUL,PNUL,sloc(100));
  T23 = VARREF_OR(YevalSdependencyYdepends_on,YPfalse);
  T24 = fun_depends_on_7;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YevalSdependencyYdepends_on,T22);
  lit_17 = YPPsym((P)"depends-on-setter");
  lit_18 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T25 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YgooScolsScolYLtabG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_8 = YPmet(FUNCODEREF(fun_depends_on_setter_8),LITREF(lit_17),T25,ENVNUL,PNUL,sloc(100));
  T27 = VARREF_OR(YevalSdependencyYdepends_on_setter,YPfalse);
  T28 = fun_depends_on_setter_8;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSdependencyYdepends_on_setter,T26);
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T29 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T29,ENVNUL,PNUL,sloc(100));
  T30 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYdepends_on),VARREF(YevalSdependencyYdepends_on_setter),VARREF(YgooScolsScolYLtabG),T30);
  lit_20 = YPPsym((P)"log-dependency");
  lit_21 = YPPlist(3,YPPsym((P)"dependable"),YPPsym((P)"dependent"),YPPsym((P)"dtype"));
  T31 = YPsig(LITREF(lit_21),YPPlist(3,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSdependencyYlog_dependency = YPmet(FUNCODEREF(YevalSdependencyYlog_dependency),LITREF(lit_20),T31,ENVNUL,PNUL,sloc(103));
  T32 = YevalSdependencyYlog_dependency;
  VARSET(YevalSdependencyYlog_dependency,T32);
  lit_22 = YPPsym((P)"find-dependency");
  lit_23 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"dependent"));
  T34 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSdependencyYLdependency_typeG));
  T33 = YPsig(LITREF(lit_23),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)2),T34,Ynil);
  YevalSdependencyYfind_dependency = YPmet(FUNCODEREF(YevalSdependencyYfind_dependency),LITREF(lit_22),T33,ENVNUL,PNUL,sloc(116));
  T35 = YevalSdependencyYfind_dependency;
  VARSET(YevalSdependencyYfind_dependency,T35);
  lit_24 = YPPsym((P)"invalidate-dependent");
  lit_25 = YPPlist(3,YPPsym((P)"dependent"),YPPsym((P)"dependable"),YPPsym((P)"dtype"));
  T37 = YPsig(LITREF(lit_25),YPPlist(3,VARREF(YevalSdependencyYLdependentG),VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T36 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T37,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSdependencyYinvalidate_dependent,T36);
  lit_26 = YPPsym((P)"invalidate-dependents");
  lit_27 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"invalid-dtype"));
  lit_28 = YPPlist(2,YPPsym((P)"dependent"),YPPsym((P)"dependendent-dtype"));
  T39 = YPsig(LITREF(lit_28),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T39,ENVNUL,PNUL,sloc(132));
  T38 = YPsig(LITREF(lit_27),YPPlist(2,VARREF(YevalSdependencyYLdependableG),VARREF(YevalSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YevalSdependencyYinvalidate_dependents),LITREF(lit_26),T38,ENVNUL,PNUL,sloc(129));
  T40 = YevalSdependencyYinvalidate_dependents;
  VARSET(YevalSdependencyYinvalidate_dependents,T40);
  lit_29 = YPPsym((P)"detach-dependent");
  lit_30 = YPPlist(1,YPPsym((P)"dependent"));
  lit_31 = YPPlist(2,YPPsym((P)"dependable"),YPPsym((P)"junk"));
  lit_32 = YPsb((P)"Cannot remove %= from %=.\n");
  T42 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T42,ENVNUL,PNUL,sloc(141));
  T41 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YevalSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSdependencyYdetach_dependent = YPmet(FUNCODEREF(YevalSdependencyYdetach_dependent),LITREF(lit_29),T41,ENVNUL,PNUL,sloc(139));
  T43 = YevalSdependencyYdetach_dependent;
  VARSET(YevalSdependencyYdetach_dependent,T43);
  lit_33 = YPPsym((P)"ast-error");
  lit_34 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T45 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_33),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSdependencyYast_error,T44);
  T46 = YPfalse;
  return T46;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"depends-on", CVAR, &YevalSdependencyYdepends_on},
  {"dependents", CVAR, &YevalSdependencyYdependents},
  {"$optimizaton-dependencies", CVAR, &YevalSdependencyYDoptimizaton_dependencies},
  {"log-dependency", CVAR, &YevalSdependencyYlog_dependency},
  {"ast-error", CVAR, &YevalSdependencyYast_error},
  {"depends-on-setter", CVAR, &YevalSdependencyYdepends_on_setter},
  {"$parse-dependencies", CVAR, &YevalSdependencyYDparse_dependencies},
  {"dependency-or", CVAR, &YevalSdependencyYdependency_or},
  {"$name-parse-dependency", CVAR, &YevalSdependencyYDname_parse_dependency},
  {"$value-optimization-dependency", CVAR, &YevalSdependencyYDvalue_optimization_dependency},
  {"---main-0---", PVAR, NULL},
  {"find-dependency", CVAR, &YevalSdependencyYfind_dependency},
  {"detach-dependent", CVAR, &YevalSdependencyYdetach_dependent},
  {"dependency-and", CVAR, &YevalSdependencyYdependency_and},
  {"$all-dependency-types", CVAR, &YevalSdependencyYDall_dependency_types},
  {"<dependency-type>", CVAR, &YevalSdependencyYLdependency_typeG},
  {"invalidate-dependents", CVAR, &YevalSdependencyYinvalidate_dependents},
  {"<dependable>", CVAR, &YevalSdependencyYLdependableG},
  {"<dependent>", CVAR, &YevalSdependencyYLdependentG},
  {"invalidate-dependent", CVAR, &YevalSdependencyYinvalidate_dependent},
  {"dependency-includes-any?", CVAR, &YevalSdependencyYdependency_includes_anyQ},
  {"dependency-empty?", CVAR, &YevalSdependencyYdependency_emptyQ},
  {"$empty-dependency", CVAR, &YevalSdependencyYDempty_dependency},
  {"$expansion-parse-dependency", CVAR, &YevalSdependencyYDexpansion_parse_dependency},
  {"dependency-includes-all?", CVAR, &YevalSdependencyYdependency_includes_allQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"$optimizaton-dependencies", NULL},
  {"log-dependency", NULL},
  {"$parse-dependencies", NULL},
  {"dependency-or", NULL},
  {"$name-parse-dependency", NULL},
  {"$value-optimization-dependency", NULL},
  {"find-dependency", NULL},
  {"detach-dependent", NULL},
  {"dependency-and", NULL},
  {"$all-dependency-types", NULL},
  {"<dependency-type>", NULL},
  {"invalidate-dependents", NULL},
  {"<dependable>", NULL},
  {"<dependent>", NULL},
  {"invalidate-dependent", NULL},
  {"dependency-includes-any?", NULL},
  {"dependency-empty?", NULL},
  {"$empty-dependency", NULL},
  {"$expansion-parse-dependency", NULL},
  {"dependency-includes-all?", NULL},
  {"ast-error", NULL},
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
