/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: compiler/dependency */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooSportYLfile_portG,"goo/port","<file-port>");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
DEF(YcompilerSdependencyYLdependentG,"compiler/dependency","<dependent>");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSportYLstr_out_portG,"goo/port","<str-out-port>");
EXT(YgooSportYget,"goo/port","get");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YcompilerSdependencyYDparse_dependencies,"compiler/dependency","$parse-dependencies");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSportYin,"goo/port","in");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSportYLfile_out_portG,"goo/port","<file-out-port>");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YcompilerSdependencyYLdependency_typeG,"compiler/dependency","<dependency-type>");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(YgooSportYputs,"goo/port","puts");
EXT(YgooSportYout,"goo/port","out");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooStypeY2nd,"goo/type","2nd");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYS,"goo/math","/");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(Ynot,"runtime/boot","not");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypeYtQ,"goo/type","t?");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YcompilerSdependencyYinvalidate_dependent,"compiler/dependency","invalidate-dependent");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(Yerror,"runtime/boot","error");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooStypeYlen,"goo/type","len");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynil,"runtime/boot","nil");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooStypeYtL,"goo/type","t<");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YgooSportYput,"goo/port","put");
EXT(YLlogG,"runtime/boot","<log>");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSportYport_line,"goo/port","port-line");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
DEF(YcompilerSdependencyYdetach_dependent,"compiler/dependency","detach-dependent");
EXT(YgooSportYLportG,"goo/port","<port>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(Yprop_value,"runtime/boot","prop-value");
DEF(YcompilerSdependencyYDexpansion_parse_dependency,"compiler/dependency","$expansion-parse-dependency");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSportYforce_out,"goo/port","force-out");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(YgooSportYLstr_portG,"goo/port","<str-port>");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
DEF(YcompilerSdependencyYdependency_and,"compiler/dependency","dependency-and");
EXT(YLseqG,"runtime/boot","<seq>");
DEF(YcompilerSdependencyYDall_dependency_types,"compiler/dependency","$all-dependency-types");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooStypeYas,"goo/type","as");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(YcompilerSdependencyYDempty_dependency,"compiler/dependency","$empty-dependency");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
DEF(YcompilerSdependencyYDoptimizaton_dependencies,"compiler/dependency","$optimizaton-dependencies");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YgooSportYnewline,"goo/port","newline");
DEF(YcompilerSdependencyYDvalue_optimization_dependency,"compiler/dependency","$value-optimization-dependency");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YcompilerSdependencyYdependency_includes_allQ,"compiler/dependency","dependency-includes-all?");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YcompilerSdependencyYdependents_setter,"compiler/dependency","dependents-setter");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooSmathYB,"goo/math","&");
DEF(YcompilerSdependencyYdependency_emptyQ,"compiler/dependency","dependency-empty?");
EXT(YgooSportYLstr_in_portG,"goo/port","<str-in-port>");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YcompilerSdependencyYdependency_or,"compiler/dependency","dependency-or");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
DEF(YcompilerSdependencyYlog_dependency,"compiler/dependency","log-dependency");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSportYLin_portG,"goo/port","<in-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YLclassG,"runtime/boot","<class>");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooSportYLout_portG,"goo/port","<out-port>");
EXT(YgooSportYport_contents,"goo/port","port-contents");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooStypeYtT,"goo/type","t*");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YgooSportYreadyQ,"goo/port","ready?");
EXT(YgooSportYclose,"goo/port","close");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YcompilerSdependencyYdependency_includes_anyQ,"compiler/dependency","dependency-includes-any?");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooStypeYtA,"goo/type","t+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
DEF(YcompilerSdependencyYinvalidate_dependents,"compiler/dependency","invalidate-dependents");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
DEF(YcompilerSdependencyYfind_dependency,"compiler/dependency","find-dependency");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSportYpeek,"goo/port","peek");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YcompilerSdependencyYdepends_on,"compiler/dependency","depends-on");
EXT(YgooSportYLfile_in_portG,"goo/port","<file-in-port>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(Ynew,"runtime/boot","new");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YcompilerSdependencyYDname_parse_dependency,"compiler/dependency","$name-parse-dependency");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
DEF(YcompilerSdependencyYdepends_on_setter,"compiler/dependency","depends-on-setter");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
DEF(YcompilerSdependencyYLdependableG,"compiler/dependency","<dependable>");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(YgooSportYgets,"goo/port","gets");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YisaQ,"runtime/boot","isa?");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooStypeYall2Q,"goo/type","all2?");
EXT(YgooSportYopen,"goo/port","open");
DEF(YcompilerSdependencyYdependents,"compiler/dependency","dependents");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSportYport_index,"goo/port","port-index");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_10);
DEFLIT(lit_2);
DEFLIT(lit_26);
DEFLIT(lit_20);
DEFLIT(lit_18);
DEFLIT(lit_8);
DEFLIT(lit_5);
DEFLIT(lit_3);
DEFLIT(lit_6);
DEFLIT(lit_22);
DEFLIT(lit_17);
DEFLIT(lit_25);
DEFLIT(lit_12);
DEFLIT(lit_19);
DEFLIT(lit_24);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_9);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_15);
DEFLIT(lit_16);
DEFLIT(lit_27);
DEFLIT(lit_21);
DEFLIT(lit_28);
DEFLIT(lit_0);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_23);

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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  check_type(T2,VARREF(YLanyG));
  dep_tableF1520 = T2;
  T4 = CALL3(1,VARREF(YgooScollectionsScollectionYelt_or),dep_tableF1520,dependent_,YPfalse);
  check_type(T4,VARREF(YLanyG));
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
  RET(T1);
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
  check_type(T1,VARREF(YLanyG));
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T2);
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
  T42 = CALL1(1,VARREF(YgooStypeYtQ),VARREF(YcompilerSdependencyYLdependency_typeG));
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
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooSport;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSstep;
extern MODULE_INFO module_info_gooStype;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_compilerSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"lst", &module_info_runtimeSboot, "lst"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"match", &module_info_gooSmacros, "match"},
  {"rem", &module_info_gooSmath, "rem"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"<file-port>", &module_info_gooSport, "<file-port>"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"head", &module_info_runtimeSboot, "head"},
  {"<str-out-port>", &module_info_gooSport, "<str-out-port>"},
  {"get", &module_info_gooSport, "get"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"in", &module_info_gooSport, "in"},
  {"floor", &module_info_gooSmath, "floor"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"<file-out-port>", &module_info_gooSport, "<file-out-port>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"app", &module_info_gooSmacros, "app"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"puts", &module_info_gooSport, "puts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"out", &module_info_gooSport, "out"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"<<", &module_info_gooSmath, "<<"},
  {"until", &module_info_gooSmacros, "until"},
  {"2nd", &module_info_gooStype, "2nd"},
  {"round", &module_info_gooSmath, "round"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"/", &module_info_gooSmath, "/"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"t?", &module_info_gooStype, "t?"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"use", &module_info_runtimeSboot, "use"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"error", &module_info_runtimeSboot, "error"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"len", &module_info_gooStype, "len"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"t<", &module_info_gooStype, "t<"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"or", &module_info_gooSmacros, "or"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"put", &module_info_gooSport, "put"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {"port-line", &module_info_gooSport, "port-line"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"<port>", &module_info_gooSport, "<port>"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"t=", &module_info_gooStype, "t="},
  {"and", &module_info_gooSmacros, "and"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"force-out", &module_info_gooSport, "force-out"},
  {">", &module_info_gooSmagnitude, ">"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"always", &module_info_runtimeSruntime, "always"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"<str-port>", &module_info_gooSport, "<str-port>"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"with-port", &module_info_gooSport, "with-port"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"as", &module_info_gooStype, "as"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"for", &module_info_gooSmacros, "for"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"newline", &module_info_gooSport, "newline"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"+", &module_info_gooSmath, "+"},
  {"def", &module_info_runtimeSboot, "def"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"if", &module_info_runtimeSboot, "if"},
  {"any?", &module_info_gooStype, "any?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"&", &module_info_gooSmath, "&"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<str-in-port>", &module_info_gooSport, "<str-in-port>"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"1-", &module_info_gooSmath, "1-"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"neg", &module_info_gooSmath, "neg"},
  {"=", &module_info_gooSmath, "="},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"~=", &module_info_gooSmath, "~="},
  {"==", &module_info_gooSmacros, "=="},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"<in-port>", &module_info_gooSport, "<in-port>"},
  {"*", &module_info_gooSmath, "*"},
  {"~", &module_info_gooSmath, "~"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {">>", &module_info_gooSmath, ">>"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"<out-port>", &module_info_gooSport, "<out-port>"},
  {"port-contents", &module_info_gooSport, "port-contents"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"1+", &module_info_gooSmath, "1+"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"t*", &module_info_gooStype, "t*"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"^", &module_info_gooSmath, "^"},
  {"round/", &module_info_gooSmath, "round/"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"export", &module_info_runtimeSboot, "export"},
  {"ready?", &module_info_gooSport, "ready?"},
  {"close", &module_info_gooSport, "close"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"map", &module_info_gooSmacros, "map"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"-", &module_info_gooSmath, "-"},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"t+", &module_info_gooStype, "t+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"|", &module_info_gooSmath, "|"},
  {"peek", &module_info_gooSport, "peek"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"<file-in-port>", &module_info_gooSport, "<file-in-port>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"while", &module_info_gooSmacros, "while"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"do", &module_info_gooSmacros, "do"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"set", &module_info_runtimeSboot, "set"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"when", &module_info_gooSmacros, "when"},
  {"gets", &module_info_gooSport, "gets"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"try", &module_info_runtimeSboot, "try"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"all2?", &module_info_gooStype, "all2?"},
  {"open", &module_info_gooSport, "open"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"port-index", &module_info_gooSport, "port-index"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<dependent>", &YcompilerSdependencyYLdependentG},
  {"$parse-dependencies", &YcompilerSdependencyYDparse_dependencies},
  {"<dependency-type>", &YcompilerSdependencyYLdependency_typeG},
  {"invalidate-dependent", &YcompilerSdependencyYinvalidate_dependent},
  {"detach-dependent", &YcompilerSdependencyYdetach_dependent},
  {"$expansion-parse-dependency", &YcompilerSdependencyYDexpansion_parse_dependency},
  {"dependency-and", &YcompilerSdependencyYdependency_and},
  {"$all-dependency-types", &YcompilerSdependencyYDall_dependency_types},
  {"$empty-dependency", &YcompilerSdependencyYDempty_dependency},
  {"$optimizaton-dependencies", &YcompilerSdependencyYDoptimizaton_dependencies},
  {"$value-optimization-dependency", &YcompilerSdependencyYDvalue_optimization_dependency},
  {"dependency-includes-all?", &YcompilerSdependencyYdependency_includes_allQ},
  {"dependents-setter", &YcompilerSdependencyYdependents_setter},
  {"dependency-empty?", &YcompilerSdependencyYdependency_emptyQ},
  {"dependency-or", &YcompilerSdependencyYdependency_or},
  {"log-dependency", &YcompilerSdependencyYlog_dependency},
  {"dependency-includes-any?", &YcompilerSdependencyYdependency_includes_anyQ},
  {"---main-0---", NULL},
  {"invalidate-dependents", &YcompilerSdependencyYinvalidate_dependents},
  {"find-dependency", &YcompilerSdependencyYfind_dependency},
  {"depends-on", &YcompilerSdependencyYdepends_on},
  {"$name-parse-dependency", &YcompilerSdependencyYDname_parse_dependency},
  {"depends-on-setter", &YcompilerSdependencyYdepends_on_setter},
  {"<dependable>", &YcompilerSdependencyYLdependableG},
  {"dependents", &YcompilerSdependencyYdependents},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<dependent>", "<dependent>"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"<dependency-type>", "<dependency-type>"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"detach-dependent", "detach-dependent"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"dependency-and", "dependency-and"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"$empty-dependency", "$empty-dependency"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"dependency-empty?", "dependency-empty?"},
  {"dependency-or", "dependency-or"},
  {"log-dependency", "log-dependency"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"invalidate-dependents", "invalidate-dependents"},
  {"find-dependency", "find-dependency"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"<dependable>", "<dependable>"},
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
