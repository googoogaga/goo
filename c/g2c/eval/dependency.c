/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: compiler/dependency */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YPisa,"runtime/boot","%isa");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YcompilerSdependencyYinvalidate_dependent,"compiler/dependency","invalidate-dependent");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
DEF(YcompilerSdependencyYDall_dependency_types,"compiler/dependency","$all-dependency-types");
DEF(YcompilerSdependencyYlog_dependency,"compiler/dependency","log-dependency");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
DEF(YcompilerSdependencyYLdependentG,"compiler/dependency","<dependent>");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YcompilerSdependencyYdetach_dependent,"compiler/dependency","detach-dependent");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynot,"runtime/boot","not");
DEF(YcompilerSdependencyYdependency_emptyQ,"compiler/dependency","dependency-empty?");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
DEF(YcompilerSdependencyYdepends_on,"compiler/dependency","depends-on");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
DEF(YcompilerSdependencyYdependency_or,"compiler/dependency","dependency-or");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
DEF(YcompilerSdependencyYdependency_and,"compiler/dependency","dependency-and");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YcompilerSdependencyYDempty_dependency,"compiler/dependency","$empty-dependency");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
DEF(YcompilerSdependencyYdependency_includes_anyQ,"compiler/dependency","dependency-includes-any?");
DEF(YcompilerSdependencyYDname_parse_dependency,"compiler/dependency","$name-parse-dependency");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
DEF(YcompilerSdependencyYdependents_setter,"compiler/dependency","dependents-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
DEF(YcompilerSdependencyYfind_dependency,"compiler/dependency","find-dependency");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
DEF(YcompilerSdependencyYdependents,"compiler/dependency","dependents");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YcompilerSdependencyYDparse_dependencies,"compiler/dependency","$parse-dependencies");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Yerror,"runtime/boot","error");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YgooSmathYround,"goo/math","round");
DEF(YcompilerSdependencyYDoptimizaton_dependencies,"compiler/dependency","$optimizaton-dependencies");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YcompilerSdependencyYLdependableG,"compiler/dependency","<dependable>");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
DEF(YcompilerSdependencyYDvalue_optimization_dependency,"compiler/dependency","$value-optimization-dependency");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
DEF(YcompilerSdependencyYdependency_includes_allQ,"compiler/dependency","dependency-includes-all?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
DEF(YcompilerSdependencyYinvalidate_dependents,"compiler/dependency","invalidate-dependents");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YLgenG,"runtime/boot","<gen>");
DEF(YcompilerSdependencyYdepends_on_setter,"compiler/dependency","depends-on-setter");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
DEF(YcompilerSdependencyYDexpansion_parse_dependency,"compiler/dependency","$expansion-parse-dependency");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYtrunc,"goo/math","trunc");
DEF(YcompilerSdependencyYLdependency_typeG,"compiler/dependency","<dependency-type>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_25);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_20);
DEFLIT(lit_14);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_16);
DEFLIT(lit_5);
DEFLIT(lit_30);
DEFLIT(lit_18);
DEFLIT(lit_13);
DEFLIT(lit_23);
DEFLIT(lit_0);
DEFLIT(lit_26);
DEFLIT(lit_11);
DEFLIT(lit_9);
DEFLIT(lit_17);
DEFLIT(lit_24);
DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_19);
DEFLIT(lit_8);

/* FUNCTIONS: */

FUNFOR(YcompilerSdependencyYdependency_or);
FUNFOR(YcompilerSdependencyYdependency_and);
FUNFOR(YcompilerSdependencyYdependency_emptyQ);
FUNFOR(YcompilerSdependencyYdependency_includes_allQ);
FUNFOR(YcompilerSdependencyYdependency_includes_anyQ);
LOCFOR(fun_dependents_5);
LOCFOR(fun_dependents_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_depends_on_8);
LOCFOR(fun_depends_on_setter_9);
LOCFOR(fun_10);
FUNFOR(YcompilerSdependencyYlog_dependency);
FUNFOR(YcompilerSdependencyYfind_dependency);
LOCFOR(fun_13);
FUNFOR(YcompilerSdependencyYinvalidate_dependents);
LOCFOR(fun_15);
FUNFOR(YcompilerSdependencyYdetach_dependent);
extern P YcompilerSdependencyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YcompilerSdependencyYdependency_or) {
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

FUNCODEDEF(YcompilerSdependencyYdependency_and) {
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

FUNCODEDEF(YcompilerSdependencyYdependency_emptyQ) {
  P dep_;
  P T0;
  P a1;
LINK_STACK();
  ARG(dep_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),dep_,VARREF(YcompilerSdependencyYDempty_dependency));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSdependencyYdependency_includes_allQ) {
  P main_,values_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL2(1,VARREF(YcompilerSdependencyYdependency_and),main_,values_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),T1,values_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YcompilerSdependencyYdependency_includes_anyQ) {
  P main_,values_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T2 = CALL2(1,VARREF(YcompilerSdependencyYdependency_and),main_,values_);
  T1 = CALL1(1,VARREF(YcompilerSdependencyYdependency_emptyQ),T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSdependencyYdependents));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSdependencyYdependents));
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
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),YPint((P)4));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YcompilerSdependencyYdepends_on));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YcompilerSdependencyYdepends_on));
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
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),YPint((P)20));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSdependencyYlog_dependency) {
  P dependable_,dependent_,dtype_;
  P entryF1521;
  P dep_tableF1520;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  ARG(dtype_, 2);
loop:
  T0 = CALL1(1,VARREF(YcompilerSdependencyYdepends_on),dependent_);
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),YPtrue,T0,dependable_);
  T2 = CALL1(1,VARREF(YcompilerSdependencyYdependents),dependable_);
  dep_tableF1520 = T2;
  T4 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),dep_tableF1520,dependent_,YPfalse);
  entryF1521 = T4;
  if (entryF1521 != YPfalse) {
    T6 = CALL2(1,VARREF(YcompilerSdependencyYdependency_or),entryF1521,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YgooScollectionsScollectionYelt_setter),T5,dep_tableF1520,dependent_);
  T3 = YPfalse;
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YcompilerSdependencyYfind_dependency) {
  P dependable_,dependent_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
loop:
  T1 = CALL1(1,VARREF(YcompilerSdependencyYdependents),dependable_);
  T0 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),T1,dependent_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P dependent_,dependendent_dtype_;
  P intersectionF1522;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YcompilerSdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF1522 = T1;
  T4 = CALL1(1,VARREF(YcompilerSdependencyYdependency_emptyQ),intersectionF1522);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YcompilerSdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF1522);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YcompilerSdependencyYinvalidate_dependents) {
  P dependable_,invalid_dtype_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(invalid_dtype_, 1);
loop:
  T1 = FUNFAB(fun_13,2,invalid_dtype_,dependable_);
  T2 = CALL1(1,VARREF(YcompilerSdependencyYdependents),dependable_);
  T0 = CALL2(1,VARREF(YgooScollectionsScollectionYdo_keyed),T1,T2);
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
  T3 = CALL1(1,VARREF(YcompilerSdependencyYdependents),dependable_);
  T2 = CALL2(1,VARREF(YgooScollectionsScollectionYdel),T3,FREEREF(0));
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

FUNCODEDEF(YcompilerSdependencyYdetach_dependent) {
  P dependent_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(dependent_, 0);
loop:
  T0 = FUNFAB(fun_15,1,dependent_);
  T1 = CALL1(1,VARREF(YcompilerSdependencyYdepends_on),dependent_);
  CALL2(1,VARREF(YgooScollectionsScollectionYdo_keyed),T0,T1);
  T3 = CALL2(1,VARREF(YgooScollectionsScollectionYfab),VARREF(YgooScollectionsScollectionYLtabG),YPint((P)0));
  T2 = CALL2(1,VARREF(YcompilerSdependencyYdepends_on_setter),T3,dependent_);
UNLINK_STACK();
  QRET(T2);
}

P YcompilerSdependencyY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  VARSET(YcompilerSdependencyYLdependency_typeG,VARREF(YLintG));
  lit_0 = YPPsym((P)"dependency-or");
  lit_1 = YPPsym((P)"dep1");
  lit_2 = YPPsym((P)"dep2");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YcompilerSdependencyYLdependency_typeG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YcompilerSdependencyYLdependency_typeG),Ynil);
  YcompilerSdependencyYdependency_or = YPmet(FUNCODEREF(YcompilerSdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YcompilerSdependencyYdependency_or;
  VARSET(YcompilerSdependencyYdependency_or,T1);
  lit_3 = YPPsym((P)"dependency-and");
  T2 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YcompilerSdependencyYLdependency_typeG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YcompilerSdependencyYLdependency_typeG),Ynil);
  YcompilerSdependencyYdependency_and = YPmet(FUNCODEREF(YcompilerSdependencyYdependency_and),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = YcompilerSdependencyYdependency_and;
  VARSET(YcompilerSdependencyYdependency_and,T3);
  VARSET(YcompilerSdependencyYDempty_dependency,YPint((P)0));
  VARSET(YcompilerSdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPsym((P)"dep");
  T4 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YcompilerSdependencyYdependency_emptyQ = YPmet(FUNCODEREF(YcompilerSdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YcompilerSdependencyYdependency_emptyQ;
  VARSET(YcompilerSdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPsym((P)"main");
  lit_8 = YPPsym((P)"values");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YcompilerSdependencyYLdependency_typeG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YcompilerSdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(YcompilerSdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = YcompilerSdependencyYdependency_includes_allQ;
  VARSET(YcompilerSdependencyYdependency_includes_allQ,T7);
  lit_9 = YPPsym((P)"dependency-includes-any?");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YcompilerSdependencyYLdependency_typeG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YcompilerSdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(YcompilerSdependencyYdependency_includes_anyQ),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
  T9 = YcompilerSdependencyYdependency_includes_anyQ;
  VARSET(YcompilerSdependencyYdependency_includes_anyQ,T9);
  VARSET(YcompilerSdependencyYDname_parse_dependency,YPint((P)1));
  VARSET(YcompilerSdependencyYDexpansion_parse_dependency,YPint((P)2));
  T10 = CALL2(1,VARREF(YcompilerSdependencyYdependency_or),VARREF(YcompilerSdependencyYDname_parse_dependency),VARREF(YcompilerSdependencyYDexpansion_parse_dependency));
  VARSET(YcompilerSdependencyYDparse_dependencies,T10);
  VARSET(YcompilerSdependencyYDvalue_optimization_dependency,YPint((P)4));
  VARSET(YcompilerSdependencyYDoptimizaton_dependencies,VARREF(YcompilerSdependencyYDvalue_optimization_dependency));
  lit_10 = YPPsym((P)"<dependable>");
  T12 = (P)YPpair(VARREF(YLanyG),Ynil);
  T11 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T12);
  VARSET(YcompilerSdependencyYLdependableG,T11);
  lit_11 = YPPsym((P)"dependents");
  lit_12 = YPPsym((P)"_x");
  T13 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YcompilerSdependencyYdependents);
  if (T16 != YPfalse) {
    T15 = VARREF(YcompilerSdependencyYdependents);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_dependents_5;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YcompilerSdependencyYdependents,T14);
  lit_13 = YPPsym((P)"dependents-setter");
  lit_14 = YPPsym((P)"_z");
  T18 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScollectionsScollectionYLtabG),VARREF(YcompilerSdependencyYLdependableG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dependents_setter_6 = YPmet(FUNCODEREF(fun_dependents_setter_6),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YcompilerSdependencyYdependents_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YcompilerSdependencyYdependents_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_dependents_setter_6;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YcompilerSdependencyYdependents_setter,T19);
  lit_15 = YPPsym((P)"x");
  T23 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSdependencyYLdependableG),VARREF(YcompilerSdependencyYdependents),VARREF(YcompilerSdependencyYdependents_setter),VARREF(YgooScollectionsScollectionYLtabG),T24);
  lit_16 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_16),T26);
  VARSET(YcompilerSdependencyYLdependentG,T25);
  lit_17 = YPPsym((P)"depends-on");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YcompilerSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YcompilerSdependencyYdepends_on);
  if (T30 != YPfalse) {
    T29 = VARREF(YcompilerSdependencyYdepends_on);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_depends_on_8;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YcompilerSdependencyYdepends_on,T28);
  lit_18 = YPPsym((P)"depends-on-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YgooScollectionsScollectionYLtabG),VARREF(YcompilerSdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_18),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YcompilerSdependencyYdepends_on_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YcompilerSdependencyYdepends_on_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_depends_on_setter_9;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YcompilerSdependencyYdepends_on_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(YcompilerSdependencyYLdependentG),VARREF(YcompilerSdependencyYdepends_on),VARREF(YcompilerSdependencyYdepends_on_setter),VARREF(YgooScollectionsScollectionYLtabG),T38);
  lit_19 = YPPsym((P)"log-dependency");
  lit_20 = YPPsym((P)"dependable");
  lit_21 = YPPsym((P)"dependent");
  lit_22 = YPPsym((P)"dtype");
  T39 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_21),LITREF(lit_22)),YPPlist(3,VARREF(YcompilerSdependencyYLdependableG),VARREF(YcompilerSdependencyYLdependentG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YcompilerSdependencyYlog_dependency = YPmet(FUNCODEREF(YcompilerSdependencyYlog_dependency),LITREF(lit_19),T39,ENVNUL,PNUL,YPfalse);
  T40 = YcompilerSdependencyYlog_dependency;
  VARSET(YcompilerSdependencyYlog_dependency,T40);
  lit_23 = YPPsym((P)"find-dependency");
  T42 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YcompilerSdependencyYLdependency_typeG));
  T41 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YcompilerSdependencyYLdependableG),VARREF(YcompilerSdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  YcompilerSdependencyYfind_dependency = YPmet(FUNCODEREF(YcompilerSdependencyYfind_dependency),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T43 = YcompilerSdependencyYfind_dependency;
  VARSET(YcompilerSdependencyYfind_dependency,T43);
  lit_24 = YPPsym((P)"invalidate-dependent");
  T45 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_20),LITREF(lit_22)),YPPlist(3,VARREF(YcompilerSdependencyYLdependentG),VARREF(YcompilerSdependencyYLdependableG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YcompilerSdependencyYinvalidate_dependent,T44);
  lit_25 = YPPsym((P)"invalidate-dependents");
  lit_26 = YPPsym((P)"invalid-dtype");
  lit_27 = YPPsym((P)"dependendent-dtype");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_26)),YPPlist(2,VARREF(YcompilerSdependencyYLdependableG),VARREF(YcompilerSdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YcompilerSdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YcompilerSdependencyYinvalidate_dependents),LITREF(lit_25),T46,ENVNUL,PNUL,YPfalse);
  T48 = YcompilerSdependencyYinvalidate_dependents;
  VARSET(YcompilerSdependencyYinvalidate_dependents,T48);
  lit_28 = YPPsym((P)"detach-dependent");
  lit_29 = YPPsym((P)"junk");
  lit_30 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YcompilerSdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YcompilerSdependencyYdetach_dependent = YPmet(FUNCODEREF(YcompilerSdependencyYdetach_dependent),LITREF(lit_28),T49,ENVNUL,PNUL,YPfalse);
  T51 = YcompilerSdependencyYdetach_dependent;
  VARSET(YcompilerSdependencyYdetach_dependent,T51);
  T52 = YPfalse;
  return T52;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"get", &module_info_gooSioSport, "get"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"as", &module_info_gooStypes, "as"},
  {"out", &module_info_gooSioSport, "out"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"try", &module_info_runtimeSboot, "try"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"in", &module_info_gooSioSport, "in"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"even?", &module_info_gooSmath, "even?"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"put", &module_info_gooSioSport, "put"},
  {"*", &module_info_gooSmath, "*"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"~", &module_info_gooSmath, "~"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {">>", &module_info_gooSmath, ">>"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"&", &module_info_gooSmath, "&"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"df", &module_info_runtimeSboot, "df"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"close", &module_info_gooSioSport, "close"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"if", &module_info_runtimeSboot, "if"},
  {"use", &module_info_runtimeSboot, "use"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"until", &module_info_gooSmacros, "until"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"mod", &module_info_gooSmath, "mod"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"error", &module_info_runtimeSboot, "error"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"and", &module_info_gooSmacros, "and"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"open", &module_info_gooSioSport, "open"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"==", &module_info_gooSmacros, "=="},
  {"do", &module_info_gooSmacros, "do"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"t=", &module_info_gooStypes, "t="},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"-", &module_info_gooSmath, "-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"always", &module_info_runtimeSruntime, "always"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"invalidate-dependent", &YcompilerSdependencyYinvalidate_dependent},
  {"---main-0---", NULL},
  {"$all-dependency-types", &YcompilerSdependencyYDall_dependency_types},
  {"log-dependency", &YcompilerSdependencyYlog_dependency},
  {"<dependent>", &YcompilerSdependencyYLdependentG},
  {"detach-dependent", &YcompilerSdependencyYdetach_dependent},
  {"dependency-empty?", &YcompilerSdependencyYdependency_emptyQ},
  {"depends-on", &YcompilerSdependencyYdepends_on},
  {"dependency-or", &YcompilerSdependencyYdependency_or},
  {"dependency-and", &YcompilerSdependencyYdependency_and},
  {"$empty-dependency", &YcompilerSdependencyYDempty_dependency},
  {"dependency-includes-any?", &YcompilerSdependencyYdependency_includes_anyQ},
  {"$name-parse-dependency", &YcompilerSdependencyYDname_parse_dependency},
  {"dependents-setter", &YcompilerSdependencyYdependents_setter},
  {"find-dependency", &YcompilerSdependencyYfind_dependency},
  {"dependents", &YcompilerSdependencyYdependents},
  {"$parse-dependencies", &YcompilerSdependencyYDparse_dependencies},
  {"$optimizaton-dependencies", &YcompilerSdependencyYDoptimizaton_dependencies},
  {"<dependable>", &YcompilerSdependencyYLdependableG},
  {"$value-optimization-dependency", &YcompilerSdependencyYDvalue_optimization_dependency},
  {"dependency-includes-all?", &YcompilerSdependencyYdependency_includes_allQ},
  {"invalidate-dependents", &YcompilerSdependencyYinvalidate_dependents},
  {"depends-on-setter", &YcompilerSdependencyYdepends_on_setter},
  {"$expansion-parse-dependency", &YcompilerSdependencyYDexpansion_parse_dependency},
  {"<dependency-type>", &YcompilerSdependencyYLdependency_typeG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"invalidate-dependent", "invalidate-dependent"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"log-dependency", "log-dependency"},
  {"<dependent>", "<dependent>"},
  {"detach-dependent", "detach-dependent"},
  {"dependency-empty?", "dependency-empty?"},
  {"dependency-or", "dependency-or"},
  {"dependency-and", "dependency-and"},
  {"$empty-dependency", "$empty-dependency"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"find-dependency", "find-dependency"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"<dependable>", "<dependable>"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"<dependency-type>", "<dependency-type>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_compilerSdependency;
MODULE_INFO module_info_compilerSdependency = {
  "compiler/dependency",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);

/* EXPRESSION: */

extern void load_module_compilerSdependency (void);

void load_module_compilerSdependency (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();

  (P)YcompilerSdependencyY___main_0___();

}

/* END OF GENERATED CODE. */
