/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: dependency */

EXT(YprotoScollectionsScollectionYelt_type,"proto/collections/collection","elt-type");
EXT(YprotoSportsYout,"proto/ports","out");
EXT(YprotoScollectionsScollectionYany2Q,"proto/collections/collection","any2?");
EXT(YprotoScollectionsSsequenceYpos,"proto/collections/sequence","pos");
EXT(YprotoScollectionsStableYtab_hash,"proto/collections/table","tab-hash");
EXT(YprotoScollectionsScollectionYnow_setter,"proto/collections/collection","now-setter");
EXT(YprotoScollectionsScollectionYelts,"proto/collections/collection","elts");
EXT(Ynil,"boot","nil");
EXT(YprotoSportsYLfile_in_portG,"proto/ports","<file-in-port>");
EXT(YprotoScollectionsStableYtab_growth_factor,"proto/collections/table","tab-growth-factor");
EXT(YprotoSmagnitudesYLE,"proto/magnitudes","<=");
EXT(YprotoScollectionsSbufferYlenSfill_setter,"proto/collections/buffer","len/fill-setter");
EXT(YprotoSmathYto_digit,"proto/math","to-digit");
EXT(YprotoScollectionsSsequenceYreject,"proto/collections/sequence","reject");
EXT(YprotoScollectionsStableYtab_gc_state,"proto/collections/table","tab-gc-state");
EXT(YLsingletonG,"boot","<singleton>");
EXT(YprotoSportsYreadyQ,"proto/ports","ready?");
EXT(YprotoScollectionsSrangeYfrom,"proto/collections/range","from");
EXT(YLfunG,"boot","<fun>");
EXT(YprotoSmathYC,"proto/math","^");
EXT(Yhandler_info_message,"boot","handler-info-message");
EXT(YprotoScollectionsSbufferYLbufG,"proto/collections/buffer","<buf>");
EXT(YprotoSportsYLfile_portG,"proto/ports","<file-port>");
EXT(Yprop_boundQ,"boot","prop-bound?");
EXT(YprotoSmathYN,"proto/math","~");
EXT(YmacrosYcat_sym,"macros","cat-sym");
EXT(YprotoScollectionsScollectionYallQ,"proto/collections/collection","all?");
EXT(YprotoScollectionsScollectionYitems,"proto/collections/collection","items");
EXT(YLlstG,"boot","<lst>");
EXT(YprotoScollectionsStableYtab_test,"proto/collections/table","tab-test");
EXT(YprotoSmathYneg,"proto/math","neg");
EXT(Yfab_class,"boot","fab-class");
EXT(YLlogG,"boot","<log>");
EXT(YprotoSmathYeof_objectQ,"proto/math","eof-object?");
EXT(YruntimeYloc_val_setter,"runtime","loc-val-setter");
EXT(Yfun_specs,"boot","fun-specs");
EXT(Ytype_object,"boot","type-object");
EXT(YruntimeYread,"runtime","read");
EXT(YprotoScollectionsSstringYstr_to_num,"proto/collections/string","str-to-num");
EXT(YruntimeYDdefault_handler_info,"runtime","$default-handler-info");
EXT(YprotoStypesYtT,"proto/types","t*");
EXT(YruntimeYalways,"runtime","always");
EXT(YprotoScollectionsSsequenceYsub,"proto/collections/sequence","sub");
EXT(YprotoSportsYopen,"proto/ports","open");
EXT(YprotoScollectionsSbufferYpop_lastX,"proto/collections/buffer","pop-last!");
EXT(YprotoSmathYnum_to_str,"proto/math","num-to-str");
EXT(YprotoSmathYK,"proto/math","|");
EXT(YprotoScollectionsScollectionYfind,"proto/collections/collection","find");
EXT(YprotoScollectionsScollectionYaddX,"proto/collections/collection","add!");
EXT(YprotoSportsYpeek,"proto/ports","peek");
EXT(YruntimeYcompose,"runtime","compose");
EXT(Yfun_name,"boot","fun-name");
EXT(YprotoScollectionsScollectionYfold,"proto/collections/collection","fold");
EXT(Yadd_prop,"boot","add-prop");
DEF(YdependencyYinvalidate_dependents,"dependency","invalidate-dependents");
EXT(YprotoScollectionsScollectionYmap2,"proto/collections/collection","map2");
EXT(Yprop_owner,"boot","prop-owner");
EXT(YprotoScollectionsSlistYpush,"proto/collections/list","push");
EXT(YprotoSmathYzeroQ,"proto/math","zero?");
EXT(YprotoScollectionsSstringYTprint_baseT,"proto/collections/string","*print-base*");
EXT(YruntimeYloc_val,"runtime","loc-val");
EXT(YprotoSportsYLstring_portG,"proto/ports","<string-port>");
EXT(YprotoSmathYoddQ,"proto/math","odd?");
EXT(YprotoSmathYround,"proto/math","round");
EXT(Yprop_value,"boot","prop-value");
EXT(Yclass_parents,"boot","class-parents");
DEF(YdependencyYDparse_dependencies,"dependency","$parse-dependencies");
EXT(YDmax_int,"boot","$max-int");
EXT(YprotoSmagnitudesYG,"proto/magnitudes",">");
EXT(YmacrosYmatch_sublist,"macros","match-sublist");
EXT(YprotoScollectionsSsequenceYpick,"proto/collections/sequence","pick");
EXT(Ymay_isaQ,"boot","may-isa?");
DEF(YdependencyYdependency_or,"dependency","dependency-or");
EXT(YprotoScollectionsSlistYLlistG,"proto/collections/list","<list>");
EXT(YprotoScollectionsScollectionYelt_setter,"proto/collections/collection","elt-setter");
EXT(YprotoSmathYmod,"proto/math","mod");
EXT(YprotoScollectionsStableYDpermanent_hash_state,"proto/collections/table","$permanent-hash-state");
EXT(YprotoSportsYputs,"proto/ports","puts");
EXT(YLseqG,"boot","<seq>");
EXT(YprotoSmathY1A,"proto/math","1+");
EXT(YprotoStypesYtA,"proto/types","t+");
EXT(YLanyG,"boot","<any>");
EXT(Yprop_type,"boot","prop-type");
EXT(YprotoSportsYgets,"proto/ports","gets");
EXT(YprotoScollectionsSrangeYLrangeG,"proto/collections/range","<range>");
EXT(YprotoScollectionsScollectionYmemQ,"proto/collections/collection","mem?");
EXT(YprotoScollectionsSsequenceYcat2,"proto/collections/sequence","cat2");
EXT(Yclass_props,"boot","class-props");
EXT(YmacrosYmap,"macros","map");
EXT(Yerror,"boot","error");
DEF(YdependencyYDexpansion_parse_dependency,"dependency","$expansion-parse-dependency");
EXT(YprotoSmagnitudesYL,"proto/magnitudes","<");
EXT(YprotoSmathYnegQ,"proto/math","neg?");
DEF(YdependencyYfind_dependency,"dependency","find-dependency");
EXT(YPprop_unbound_error,"boot","%prop-unbound-error");
EXT(YprotoSportsYLstring_out_portG,"proto/ports","<string-out-port>");
DEF(YdependencyYDoptimizaton_dependencies,"dependency","$optimizaton-dependencies");
EXT(YprotoSmathYroundS,"proto/math","round/");
EXT(YwriteYwrite,"write","write");
DEF(YdependencyYLdependentG,"dependency","<dependent>");
EXT(Yfun_names,"boot","fun-names");
EXT(YprotoScollectionsScollectionYadd,"proto/collections/collection","add");
EXT(YwriteYwrite_to_string,"write","write-to-string");
EXT(YruntimeYformat,"runtime","format");
EXT(YprotoSmathYposQ,"proto/math","pos?");
DEF(YdependencyYinvalidate_dependent,"dependency","invalidate-dependent");
EXT(YprotoSmathYGGG,"proto/math",">>>");
EXT(YprotoSmathYE,"proto/math","=");
EXT(YruntimeYhandler_matchesQ,"runtime","handler-matches?");
EXT(Yhandler_info_arguments,"boot","handler-info-arguments");
EXT(YprotoSmathYT,"proto/math","*");
EXT(YruntimeYcurry,"runtime","curry");
EXT(YprotoSportsYport_line,"proto/ports","port-line");
EXT(YprotoSmathYdigitQ,"proto/math","digit?");
EXT(YLcolG,"boot","<col>");
EXT(YLclassG,"boot","<class>");
EXT(YprotoScollectionsSstringYstr,"proto/collections/string","str");
EXT(YprotoSmathYalphaQ,"proto/math","alpha?");
EXT(YprotoScollectionsStableYcase_insensitive_string_equal,"proto/collections/table","case-insensitive-string-equal");
EXT(YruntimeYLconditionG,"runtime","<condition>");
EXT(YprotoSmathYNEE,"proto/math","~==");
EXT(YprotoSmathYevenQ,"proto/math","even?");
EXT(YprotoScollectionsSsequenceYcatX,"proto/collections/sequence","cat!");
EXT(YmacrosYvar_name,"macros","var-name");
DEF(YdependencyYdetach_dependent,"dependency","detach-dependent");
EXT(YsyntaxYsexpr_signature_parameters,"syntax","sexpr-signature-parameters");
EXT(YprotoSportsYLstring_in_portG,"proto/ports","<string-in-port>");
EXT(YprotoScollectionsScollectionYinto,"proto/collections/collection","into");
EXT(YprotoSmathYNE,"proto/math","~=");
EXT(YprotoStypesYtQ,"proto/types","t?");
EXT(YprotoSportsYput,"proto/ports","put");
EXT(YprotoStypesYall2Q,"proto/types","all2?");
EXT(YprotoScollectionsScollectionYelt_or,"proto/collections/collection","elt-or");
EXT(YprotoSportsYget,"proto/ports","get");
EXT(Ytail_setter,"boot","tail-setter");
DEF(YdependencyYdependents_setter,"dependency","dependents-setter");
EXT(YmacrosYmatch_atom,"macros","match-atom");
DEF(YdependencyYdependency_includes_anyQ,"dependency","dependency-includes-any?");
EXT(YprotoScollectionsSstepYfirst_then,"proto/collections/step","first-then");
DEF(YdependencyYDname_parse_dependency,"dependency","$name-parse-dependency");
EXT(YprotoScollectionsScollectionYzap,"proto/collections/collection","zap");
EXT(YLoptsG,"boot","<opts>");
EXT(YmacrosYnapp,"macros","napp");
EXT(YprotoSportsYLfile_out_portG,"proto/ports","<file-out-port>");
EXT(Ytail,"boot","tail");
EXT(YruntimeYLserious_conditionG,"runtime","<serious-condition>");
EXT(YLtypeG,"boot","<type>");
EXT(Yord_app_mets,"boot","ord-app-mets");
EXT(YprotoSmathYto_str,"proto/math","to-str");
EXT(YprotoSportsYforce_out,"proto/ports","force-out");
EXT(YprotoStypesYtL,"proto/types","t<");
EXT(YLlocG,"boot","<loc>");
EXT(YprotoSmathYB,"proto/math","&");
EXT(YprotoScollectionsScollectionYfab,"proto/collections/collection","fab");
EXT(YprotoSmathYtruncS,"proto/math","trunc/");
EXT(Ytype_elts,"boot","type-elts");
EXT(YprotoSmathYabs,"proto/math","abs");
DEF(YdependencyYLdependency_typeG,"dependency","<dependency-type>");
EXT(YruntimeYLsimple_errorG,"runtime","<simple-error>");
EXT(YreadYread_from_string,"read","read-from-string");
EXT(YruntimeYdescribe_condition,"runtime","describe-condition");
DEF(YdependencyYdependency_and,"dependency","dependency-and");
DEF(YdependencyYlog_dependency,"dependency","log-dependency");
EXT(Yfind_getter,"boot","find-getter");
EXT(Yclass_name,"boot","class-name");
EXT(YruntimeYcondition_message,"runtime","condition-message");
EXT(YmacrosYmatch_unquote,"macros","match-unquote");
EXT(YmacrosYemptyQ,"macros","empty?");
EXT(YmacrosYfab_setter_name,"macros","fab-setter-name");
EXT(YprotoScollectionsSmapYfab_map,"proto/collections/map","fab-map");
EXT(YprotoSmathYflo_bits,"proto/math","flo-bits");
EXT(YprotoScollectionsStableYcase_insensitive_string_hash,"proto/collections/table","case-insensitive-string-hash");
EXT(YprotoScollectionsScollectionYfill,"proto/collections/collection","fill");
EXT(Ygen_add_met,"boot","gen-add-met");
EXT(YmacrosYcat,"macros","cat");
EXT(YprotoStypesYanyQ,"proto/types","any?");
EXT(Yprop_setter,"boot","prop-setter");
EXT(Yfun_val,"boot","fun-val");
DEF(YdependencyYdependency_includes_allQ,"dependency","dependency-includes-all?");
EXT(YprotoSportsYnewline,"proto/ports","newline");
DEF(YdependencyYdepends_on,"dependency","depends-on");
EXT(YDmin_int,"boot","$min-int");
EXT(YprotoSmathYaddress_of,"proto/math","address-of");
EXT(YprotoSmathY1_,"proto/math","1-");
EXT(YprotoStypesYtE,"proto/types","t=");
EXT(Yclass_ancestors,"boot","class-ancestors");
EXT(YprotoSmathYceil,"proto/math","ceil");
EXT(YmacrosYelt,"macros","elt");
EXT(YprotoScollectionsSbufferYpush_lastX,"proto/collections/buffer","push-last!");
EXT(YprotoScollectionsSlistYlist,"proto/collections/list","list");
EXT(YprotoScollectionsScollectionYdel,"proto/collections/collection","del");
EXT(YruntimeYLerrorG,"runtime","<error>");
EXT(YLfloG,"boot","<flo>");
EXT(YLsymG,"boot","<sym>");
EXT(YprotoScollectionsSrangeYrange_by,"proto/collections/range","range-by");
EXT(YprotoScollectionsScollectionYempty,"proto/collections/collection","empty");
EXT(Ymet_appQ,"boot","met-app?");
EXT(YruntimeYcondition_arguments,"runtime","condition-arguments");
EXT(YruntimeYrcurry,"runtime","rcurry");
EXT(YprotoScollectionsScollectionYnxt,"proto/collections/collection","nxt");
EXT(Yfun_mets,"boot","fun-mets");
EXT(YprotoSmathYfloorS,"proto/math","floor/");
EXT(YprotoScollectionsScollectionYdo2,"proto/collections/collection","do2");
EXT(YprotoScollectionsSmapYLmapG,"proto/collections/map","<map>");
EXT(YmacrosYdo,"macros","do");
EXT(YprotoScollectionsScollectionYkeys,"proto/collections/collection","keys");
EXT(YprotoSmathYto_upper,"proto/math","to-upper");
DEF(YdependencyYDvalue_optimization_dependency,"dependency","$value-optimization-dependency");
EXT(YLpropG,"boot","<prop>");
EXT(YruntimeYdefault_handler,"runtime","default-handler");
EXT(Ynew,"boot","new");
EXT(YprotoSmathYfabs,"proto/math","fabs");
EXT(YLgenG,"boot","<gen>");
EXT(YprotoSmathYS,"proto/math","/");
EXT(YprotoScollectionsSbufferYbuf,"proto/collections/buffer","buf");
EXT(YprotoScollectionsScollectionYlow_elt_setter,"proto/collections/collection","low-elt-setter");
EXT(Ynul,"boot","nul");
EXT(YprotoScollectionsScollectionYnow_key,"proto/collections/collection","now-key");
EXT(YprotoScollectionsSsequenceYrev,"proto/collections/sequence","rev");
EXT(YprotoSmathYLL,"proto/math","<<");
EXT(YprotoScollectionsSsequenceYlast,"proto/collections/sequence","last");
EXT(YprotoSmagnitudesYmax,"proto/magnitudes","max");
EXT(YprotoSportsYport_contents,"proto/ports","port-contents");
EXT(YmacrosYvar_type,"macros","var-type");
EXT(YruntimeYsig,"runtime","sig");
EXT(YruntimeYLhandler_infoG,"runtime","<handler-info>");
EXT(YLsimple_handler_infoG,"boot","<simple-handler-info>");
EXT(YmacrosYmatch_empty_list,"macros","match-empty-list");
EXT(YprotoScollectionsSlistYpop,"proto/collections/list","pop");
EXT(YprotoScollectionsStableYLstr_tabG,"proto/collections/table","<str-tab>");
EXT(YLintG,"boot","<int>");
EXT(YruntimeYLhandlerG,"runtime","<handler>");
EXT(YLstrG,"boot","<str>");
EXT(YprotoStypesYlen,"proto/types","len");
EXT(YruntimeYapp_args,"runtime","app-args");
EXT(Yfun_arity,"boot","fun-arity");
EXT(YprotoScollectionsScollectionYnow,"proto/collections/collection","now");
EXT(Yvec,"boot","vec");
EXT(YprotoScollectionsStableYtab_shrink_threshold,"proto/collections/table","tab-shrink-threshold");
EXT(Ylst,"boot","lst");
EXT(YprotoStypesY2nd,"proto/types","2nd");
EXT(YmacrosYEE,"macros","==");
EXT(YwriteYwriteln,"write","writeln");
EXT(YprotoScollectionsScollectionYmap_keyed,"proto/collections/collection","map-keyed");
EXT(YruntimeYhandler_function,"runtime","handler-function");
EXT(YprotoSportsYLin_portG,"proto/ports","<in-port>");
EXT(YmacrosYrevX,"macros","rev!");
EXT(YprotoScollectionsScollectionYkey_test,"proto/collections/collection","key-test");
EXT(YLtupG,"boot","<tup>");
EXT(YprotoSportsYport_index,"proto/ports","port-index");
EXT(YprotoScollectionsSstepYLstepG,"proto/collections/step","<step>");
EXT(Ytup,"boot","tup");
EXT(YisaQ,"boot","isa?");
EXT(YprotoScollectionsSsequenceY3rd,"proto/collections/sequence","3rd");
EXT(YprotoScollectionsScollectionYlow_elt,"proto/collections/collection","low-elt");
EXT(YruntimeYapp_filename,"runtime","app-filename");
EXT(Yhead_setter,"boot","head-setter");
EXT(Ytype_class,"boot","type-class");
EXT(YPprop,"boot","%prop");
EXT(YLunionG,"boot","<union>");
EXT(YPisa,"boot","%isa");
EXT(YprotoScollectionsSbufferYlen_setter,"proto/collections/buffer","len-setter");
EXT(YprotoSmathYupperQ,"proto/math","upper?");
EXT(YprotoSmagnitudesYmin,"proto/magnitudes","min");
EXT(YprotoScollectionsSrangeYrange,"proto/collections/range","range");
EXT(YprotoScollectionsSsequenceYdel_dups,"proto/collections/sequence","del-dups");
DEF(YdependencyYdepends_on_setter,"dependency","depends-on-setter");
EXT(YprotoScollectionsSassocYLassocsG,"proto/collections/assoc","<assocs>");
DEF(YdependencyYLdependableG,"dependency","<dependable>");
EXT(YprotoSportsYLportG,"proto/ports","<port>");
DEF(YdependencyYdependents,"dependency","dependents");
EXT(Yhead,"boot","head");
EXT(YruntimeYfab_handler,"runtime","fab-handler");
EXT(YprotoScollectionsScollectionYfind_or,"proto/collections/collection","find-or");
EXT(YprotoScollectionsScollectionYkey_type,"proto/collections/collection","key-type");
EXT(YLnumG,"boot","<num>");
EXT(YLvecG,"boot","<vec>");
EXT(Yprop_getter,"boot","prop-getter");
EXT(YmacrosYpair,"macros","pair");
EXT(YprotoSportsYin,"proto/ports","in");
EXT(YprotoScollectionsScollectionYfinQ,"proto/collections/collection","fin?");
EXT(YprotoScollectionsSsequenceYsub_setter,"proto/collections/sequence","sub-setter");
EXT(YprotoSmathYA,"proto/math","+");
EXT(YprotoSmathYbitQ,"proto/math","bit?");
EXT(YprotoScollectionsScollectionYdo_keyed,"proto/collections/collection","do-keyed");
DEF(YdependencyYDempty_dependency,"dependency","$empty-dependency");
EXT(YprotoSportsYclose,"proto/ports","close");
EXT(YprotoScollectionsSsequenceY1st,"proto/collections/sequence","1st");
EXT(Yclass_direct_props,"boot","class-direct-props");
EXT(YLmetG,"boot","<met>");
EXT(YprotoScollectionsStableYid_hash,"proto/collections/table","id-hash");
EXT(Yprop_init,"boot","prop-init");
DEF(YdependencyYDall_dependency_types,"dependency","$all-dependency-types");
EXT(YprotoStypesYas,"proto/types","as");
EXT(YprotoScollectionsScollectionYenum,"proto/collections/collection","enum");
EXT(Yfun_naryQ,"boot","fun-nary?");
EXT(YprotoScollectionsScollectionYelt_default,"proto/collections/collection","elt-default");
EXT(YLsubclassG,"boot","<subclass>");
EXT(YprotoScollectionsSassocYassocs_test,"proto/collections/assoc","assocs-test");
EXT(YprotoSmathYto_lower,"proto/math","to-lower");
EXT(YprotoSmathYfloor,"proto/math","floor");
EXT(YprotoScollectionsSsequenceYdel_vals,"proto/collections/sequence","del-vals");
EXT(YprotoSmathYrem,"proto/math","rem");
EXT(Yclass_descendents,"boot","class-descendents");
EXT(YprotoSmagnitudesYGE,"proto/magnitudes",">=");
DEF(YdependencyYdependency_emptyQ,"dependency","dependency-empty?");
EXT(YruntimeYLsimple_conditionG,"runtime","<simple-condition>");
EXT(YprotoScollectionsScollectionYLtabG,"proto/collections/collection","<tab>");
EXT(YprotoScollectionsScollectionYfoldA,"proto/collections/collection","fold+");
EXT(YwriteYdisplay,"write","display");
EXT(YsubtypeQ,"boot","subtype?");
EXT(YprotoSmathYGG,"proto/math",">>");
EXT(Yfind_setter,"boot","find-setter");
EXT(Yprop_value_setter,"boot","prop-value-setter");
EXT(YprotoSmathYtrunc,"proto/math","trunc");
EXT(YprotoSportsYLout_portG,"proto/ports","<out-port>");
EXT(YLchrG,"boot","<chr>");
EXT(YprotoScollectionsStableYtab_growth_threshold,"proto/collections/table","tab-growth-threshold");
EXT(YLflatG,"boot","<flat>");
EXT(YPdefine_method,"boot","%define-method");
EXT(YprotoSmathY_,"proto/math","-");
EXT(YprotoSmathYlowerQ,"proto/math","lower?");
EXT(YprotoScollectionsScollectionYLenumG,"proto/collections/collection","<enum>");
EXT(Ynot,"boot","not");
EXT(YruntimeYidentity,"runtime","identity");
EXT(YprotoScollectionsSsequenceYbelow,"proto/collections/sequence","below");
EXT(YmacrosYgensym,"macros","gensym");
EXT(YprotoSmathYceilingS,"proto/math","ceiling/");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_8);
DEFLIT(lit_9);
DEFLIT(lit_21);
DEFLIT(lit_10);
DEFLIT(lit_17);
DEFLIT(lit_1);
DEFLIT(lit_6);
DEFLIT(lit_12);
DEFLIT(lit_25);
DEFLIT(lit_28);
DEFLIT(lit_3);
DEFLIT(lit_24);
DEFLIT(lit_22);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_4);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_27);
DEFLIT(lit_30);
DEFLIT(lit_29);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_14);
DEFLIT(lit_20);
DEFLIT(lit_0);
DEFLIT(lit_5);
DEFLIT(lit_18);
DEFLIT(lit_2);
DEFLIT(lit_23);
DEFLIT(lit_7);

/* FUNCTIONS: */

FUNFOR(YdependencyYdependency_or);
FUNFOR(YdependencyYdependency_and);
FUNFOR(YdependencyYdependency_emptyQ);
FUNFOR(YdependencyYdependency_includes_allQ);
FUNFOR(YdependencyYdependency_includes_anyQ);
LOCFOR(fun_dependents_5);
LOCFOR(fun_dependents_setter_6);
LOCFOR(fun_7);
LOCFOR(fun_depends_on_8);
LOCFOR(fun_depends_on_setter_9);
LOCFOR(fun_10);
FUNFOR(YdependencyYlog_dependency);
FUNFOR(YdependencyYfind_dependency);
LOCFOR(fun_13);
FUNFOR(YdependencyYinvalidate_dependents);
LOCFOR(fun_15);
FUNFOR(YdependencyYdetach_dependent);
extern P YdependencyY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YdependencyYdependency_or) {
  P dep1_,dep2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYK),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YdependencyYdependency_and) {
  P dep1_,dep2_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(dep1_, 0);
  ARG(dep2_, 1);
loop:
  T0 = CALL2(1,VARREF(YprotoSmathYB),dep1_,dep2_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YdependencyYdependency_emptyQ) {
  P dep_;
  P T0;
  P a1;
LINK_STACK();
  ARG(dep_, 0);
loop:
  T0 = CALL2(1,VARREF(YmacrosYEE),dep_,VARREF(YdependencyYDempty_dependency));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YdependencyYdependency_includes_allQ) {
  P main_,values_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL2(1,VARREF(YdependencyYdependency_and),main_,values_);
  T0 = CALL2(1,VARREF(YmacrosYEE),T1,values_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YdependencyYdependency_includes_anyQ) {
  P main_,values_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(main_, 0);
  ARG(values_, 1);
loop:
  T2 = CALL2(1,VARREF(YdependencyYdependency_and),main_,values_);
  T1 = CALL1(1,VARREF(YdependencyYdependency_emptyQ),T2);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YdependencyYdependents));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YdependencyYdependents));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)4));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YdependencyYdepends_on));
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
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YdependencyYdepends_on));
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
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)20));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YdependencyYlog_dependency) {
  P dependable_,dependent_,dtype_;
  P entryF1516;
  P dep_tableF1515;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
  ARG(dtype_, 2);
loop:
  T0 = CALL1(1,VARREF(YdependencyYdepends_on),dependent_);
  CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),YPtrue,T0,dependable_);
  T2 = CALL1(1,VARREF(YdependencyYdependents),dependable_);
  dep_tableF1515 = T2;
  T4 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),dep_tableF1515,dependent_,YPfalse);
  entryF1516 = T4;
  if (entryF1516 != YPfalse) {
    T6 = CALL2(1,VARREF(YdependencyYdependency_or),entryF1516,dtype_);
    T5 = T6;
  } else {
    T5 = dtype_;
  }
  CALL3(1,VARREF(YprotoScollectionsScollectionYelt_setter),T5,dep_tableF1515,dependent_);
  T3 = YPfalse;
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YdependencyYfind_dependency) {
  P dependable_,dependent_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(dependent_, 1);
loop:
  T1 = CALL1(1,VARREF(YdependencyYdependents),dependable_);
  T0 = CALL3(1,VARREF(YprotoScollectionsScollectionYelt_or),T1,dependent_,YPfalse);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P dependent_,dependendent_dtype_;
  P intersectionF1517;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependent_, 0);
  ARG(dependendent_dtype_, 1);
loop:
  T1 = CALL2(1,VARREF(YdependencyYdependency_and),FREEREF(0),dependendent_dtype_);
  intersectionF1517 = T1;
  T4 = CALL1(1,VARREF(YdependencyYdependency_emptyQ),intersectionF1517);
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YdependencyYinvalidate_dependent),dependent_,FREEREF(1),intersectionF1517);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YdependencyYinvalidate_dependents) {
  P dependable_,invalid_dtype_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(dependable_, 0);
  ARG(invalid_dtype_, 1);
loop:
  T1 = FUNFAB(fun_13,2,invalid_dtype_,dependable_);
  T2 = CALL1(1,VARREF(YdependencyYdependents),dependable_);
  T0 = CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T1,T2);
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
  T3 = CALL1(1,VARREF(YdependencyYdependents),dependable_);
  T2 = CALL2(1,VARREF(YprotoScollectionsScollectionYdel),T3,FREEREF(0));
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

FUNCODEDEF(YdependencyYdetach_dependent) {
  P dependent_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(dependent_, 0);
loop:
  T0 = FUNFAB(fun_15,1,dependent_);
  T1 = CALL1(1,VARREF(YdependencyYdepends_on),dependent_);
  CALL2(1,VARREF(YprotoScollectionsScollectionYdo_keyed),T0,T1);
  T3 = CALL2(1,VARREF(YprotoScollectionsScollectionYfab),VARREF(YprotoScollectionsScollectionYLtabG),YPint((P)0));
  T2 = CALL2(1,VARREF(YdependencyYdepends_on_setter),T3,dependent_);
UNLINK_STACK();
  QRET(T2);
}

P YdependencyY___main_0___() {
  P T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37;
  P T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
loop:
  VARSET(YdependencyYLdependency_typeG,VARREF(YLintG));
  lit_0 = YPPsym((P)"dependency-or");
  lit_1 = YPPsym((P)"dep1");
  lit_2 = YPPsym((P)"dep2");
  T0 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YdependencyYLdependency_typeG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YdependencyYLdependency_typeG),Ynil);
  YdependencyYdependency_or = YPmet(FUNCODEREF(YdependencyYdependency_or),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T1 = YdependencyYdependency_or;
  VARSET(YdependencyYdependency_or,T1);
  lit_3 = YPPsym((P)"dependency-and");
  T2 = YPsig(YPPlist(2,LITREF(lit_1),LITREF(lit_2)),YPPlist(2,VARREF(YdependencyYLdependency_typeG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YdependencyYLdependency_typeG),Ynil);
  YdependencyYdependency_and = YPmet(FUNCODEREF(YdependencyYdependency_and),LITREF(lit_3),T2,ENVNUL,PNUL,YPfalse);
  T3 = YdependencyYdependency_and;
  VARSET(YdependencyYdependency_and,T3);
  VARSET(YdependencyYDempty_dependency,YPint((P)0));
  VARSET(YdependencyYDall_dependency_types,YPint((P)65535));
  lit_4 = YPPsym((P)"dependency-empty?");
  lit_5 = YPPsym((P)"dep");
  T4 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YdependencyYdependency_emptyQ = YPmet(FUNCODEREF(YdependencyYdependency_emptyQ),LITREF(lit_4),T4,ENVNUL,PNUL,YPfalse);
  T5 = YdependencyYdependency_emptyQ;
  VARSET(YdependencyYdependency_emptyQ,T5);
  lit_6 = YPPsym((P)"dependency-includes-all?");
  lit_7 = YPPsym((P)"main");
  lit_8 = YPPsym((P)"values");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YdependencyYLdependency_typeG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YdependencyYdependency_includes_allQ = YPmet(FUNCODEREF(YdependencyYdependency_includes_allQ),LITREF(lit_6),T6,ENVNUL,PNUL,YPfalse);
  T7 = YdependencyYdependency_includes_allQ;
  VARSET(YdependencyYdependency_includes_allQ,T7);
  lit_9 = YPPsym((P)"dependency-includes-any?");
  T8 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YdependencyYLdependency_typeG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YdependencyYdependency_includes_anyQ = YPmet(FUNCODEREF(YdependencyYdependency_includes_anyQ),LITREF(lit_9),T8,ENVNUL,PNUL,YPfalse);
  T9 = YdependencyYdependency_includes_anyQ;
  VARSET(YdependencyYdependency_includes_anyQ,T9);
  VARSET(YdependencyYDname_parse_dependency,YPint((P)1));
  VARSET(YdependencyYDexpansion_parse_dependency,YPint((P)2));
  T10 = CALL2(1,VARREF(YdependencyYdependency_or),VARREF(YdependencyYDname_parse_dependency),VARREF(YdependencyYDexpansion_parse_dependency));
  VARSET(YdependencyYDparse_dependencies,T10);
  VARSET(YdependencyYDvalue_optimization_dependency,YPint((P)4));
  VARSET(YdependencyYDoptimizaton_dependencies,VARREF(YdependencyYDvalue_optimization_dependency));
  lit_10 = YPPsym((P)"<dependable>");
  T12 = (P)YPpair(VARREF(YLanyG),Ynil);
  T11 = CALL2(1,VARREF(Yfab_class),LITREF(lit_10),T12);
  VARSET(YdependencyYLdependableG,T11);
  lit_11 = YPPsym((P)"dependents");
  lit_12 = YPPsym((P)"_x");
  T13 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YdependencyYLdependableG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dependents_5 = YPmet(FUNCODEREF(fun_dependents_5),LITREF(lit_11),T13,ENVNUL,PNUL,YPfalse);
  T16 = BOUNDP(YdependencyYdependents);
  if (T16 != YPfalse) {
    T15 = VARREF(YdependencyYdependents);
  } else {
    T15 = YPfalse;
  }
  T17 = fun_dependents_5;
  T14 = CALL2(1,VARREF(YPdefine_method),T15,T17);
  VARSET(YdependencyYdependents,T14);
  lit_13 = YPPsym((P)"dependents-setter");
  lit_14 = YPPsym((P)"_z");
  T18 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YdependencyYLdependableG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_dependents_setter_6 = YPmet(FUNCODEREF(fun_dependents_setter_6),LITREF(lit_13),T18,ENVNUL,PNUL,YPfalse);
  T21 = BOUNDP(YdependencyYdependents_setter);
  if (T21 != YPfalse) {
    T20 = VARREF(YdependencyYdependents_setter);
  } else {
    T20 = YPfalse;
  }
  T22 = fun_dependents_setter_6;
  T19 = CALL2(1,VARREF(YPdefine_method),T20,T22);
  VARSET(YdependencyYdependents_setter,T19);
  lit_15 = YPPsym((P)"x");
  T23 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T23,ENVNUL,PNUL,YPfalse);
  T24 = fun_7;
  CALLN(1,VARREF(YPprop),5,VARREF(YdependencyYLdependableG),VARREF(YdependencyYdependents),VARREF(YdependencyYdependents_setter),VARREF(YprotoScollectionsScollectionYLtabG),T24);
  lit_16 = YPPsym((P)"<dependent>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = CALL2(1,VARREF(Yfab_class),LITREF(lit_16),T26);
  VARSET(YdependencyYLdependentG,T25);
  lit_17 = YPPsym((P)"depends-on");
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_depends_on_8 = YPmet(FUNCODEREF(fun_depends_on_8),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YdependencyYdepends_on);
  if (T30 != YPfalse) {
    T29 = VARREF(YdependencyYdepends_on);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_depends_on_8;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YdependencyYdepends_on,T28);
  lit_18 = YPPsym((P)"depends-on-setter");
  T32 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_12)),YPPlist(2,VARREF(YprotoScollectionsScollectionYLtabG),VARREF(YdependencyYLdependentG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_depends_on_setter_9 = YPmet(FUNCODEREF(fun_depends_on_setter_9),LITREF(lit_18),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YdependencyYdepends_on_setter);
  if (T35 != YPfalse) {
    T34 = VARREF(YdependencyYdepends_on_setter);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_depends_on_setter_9;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YdependencyYdepends_on_setter,T33);
  T37 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T38 = fun_10;
  CALLN(1,VARREF(YPprop),5,VARREF(YdependencyYLdependentG),VARREF(YdependencyYdepends_on),VARREF(YdependencyYdepends_on_setter),VARREF(YprotoScollectionsScollectionYLtabG),T38);
  lit_19 = YPPsym((P)"log-dependency");
  lit_20 = YPPsym((P)"dependable");
  lit_21 = YPPsym((P)"dependent");
  lit_22 = YPPsym((P)"dtype");
  T39 = YPsig(YPPlist(3,LITREF(lit_20),LITREF(lit_21),LITREF(lit_22)),YPPlist(3,VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependentG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YdependencyYlog_dependency = YPmet(FUNCODEREF(YdependencyYlog_dependency),LITREF(lit_19),T39,ENVNUL,PNUL,YPfalse);
  T40 = YdependencyYlog_dependency;
  VARSET(YdependencyYlog_dependency,T40);
  lit_23 = YPPsym((P)"find-dependency");
  T42 = CALL1(1,VARREF(YprotoStypesYtQ),VARREF(YdependencyYLdependency_typeG));
  T41 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependentG)),YPfalse,YPint((P)2),T42,Ynil);
  YdependencyYfind_dependency = YPmet(FUNCODEREF(YdependencyYfind_dependency),LITREF(lit_23),T41,ENVNUL,PNUL,YPfalse);
  T43 = YdependencyYfind_dependency;
  VARSET(YdependencyYfind_dependency,T43);
  lit_24 = YPPsym((P)"invalidate-dependent");
  T45 = YPsig(YPPlist(3,LITREF(lit_21),LITREF(lit_20),LITREF(lit_22)),YPPlist(3,VARREF(YdependencyYLdependentG),VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T44 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_24),T45,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YdependencyYinvalidate_dependent,T44);
  lit_25 = YPPsym((P)"invalidate-dependents");
  lit_26 = YPPsym((P)"invalid-dtype");
  lit_27 = YPPsym((P)"dependendent-dtype");
  T47 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_27)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T47,ENVNUL,PNUL,YPfalse);
  T46 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_26)),YPPlist(2,VARREF(YdependencyYLdependableG),VARREF(YdependencyYLdependency_typeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YdependencyYinvalidate_dependents = YPmet(FUNCODEREF(YdependencyYinvalidate_dependents),LITREF(lit_25),T46,ENVNUL,PNUL,YPfalse);
  T48 = YdependencyYinvalidate_dependents;
  VARSET(YdependencyYinvalidate_dependents,T48);
  lit_28 = YPPsym((P)"detach-dependent");
  lit_29 = YPPsym((P)"junk");
  lit_30 = YPsb((P)"Cannot remove %= from %=.\n");
  T50 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YdependencyYLdependentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YdependencyYdetach_dependent = YPmet(FUNCODEREF(YdependencyYdetach_dependent),LITREF(lit_28),T49,ENVNUL,PNUL,YPfalse);
  T51 = YdependencyYdetach_dependent;
  VARSET(YdependencyYdetach_dependent,T51);
  T52 = YPfalse;
  return T52;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_proto;
extern MODULE_INFO module_info_protoScollectionsScollection;
extern MODULE_INFO module_info_protoSports;
extern MODULE_INFO module_info_boot;
extern MODULE_INFO module_info_protoScollectionsSsequence;
extern MODULE_INFO module_info_protoScollectionsStable;
extern MODULE_INFO module_info_protoSmagnitudes;
extern MODULE_INFO module_info_protoScollectionsSbuffer;
extern MODULE_INFO module_info_protoSmath;
extern MODULE_INFO module_info_macros;
extern MODULE_INFO module_info_protoScollectionsSrange;
extern MODULE_INFO module_info_runtime;
extern MODULE_INFO module_info_protoScollectionsSstring;
extern MODULE_INFO module_info_protoStypes;
extern MODULE_INFO module_info_protoScollectionsSlist;
extern MODULE_INFO module_info_write;
extern MODULE_INFO module_info_syntax;
extern MODULE_INFO module_info_protoScollectionsSstep;
extern MODULE_INFO module_info_read;
extern MODULE_INFO module_info_protoScollectionsSmap;
extern MODULE_INFO module_info_protoScollectionsSassoc;

static USE_INFO use_infos[] = {
  {&module_info_proto},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"elt-type", &module_info_protoScollectionsScollection, "elt-type"},
  {"out", &module_info_protoSports, "out"},
  {"any2?", &module_info_protoScollectionsScollection, "any2?"},
  {"dg", &module_info_boot, "dg"},
  {"pos", &module_info_protoScollectionsSsequence, "pos"},
  {"tab-hash", &module_info_protoScollectionsStable, "tab-hash"},
  {"now-setter", &module_info_protoScollectionsScollection, "now-setter"},
  {"elts", &module_info_protoScollectionsScollection, "elts"},
  {"nil", &module_info_boot, "nil"},
  {"<file-in-port>", &module_info_protoSports, "<file-in-port>"},
  {"tab-growth-factor", &module_info_protoScollectionsStable, "tab-growth-factor"},
  {"<=", &module_info_protoSmagnitudes, "<="},
  {"len/fill-setter", &module_info_protoScollectionsSbuffer, "len/fill-setter"},
  {"rep", &module_info_boot, "rep"},
  {"to-digit", &module_info_protoSmath, "to-digit"},
  {"reject", &module_info_protoScollectionsSsequence, "reject"},
  {"opf", &module_info_macros, "opf"},
  {"tab-gc-state", &module_info_protoScollectionsStable, "tab-gc-state"},
  {"<singleton>", &module_info_boot, "<singleton>"},
  {"%pair", &module_info_boot, "%pair"},
  {"ready?", &module_info_protoSports, "ready?"},
  {"from", &module_info_protoScollectionsSrange, "from"},
  {"<fun>", &module_info_boot, "<fun>"},
  {"^", &module_info_protoSmath, "^"},
  {"handler-info-message", &module_info_boot, "handler-info-message"},
  {"match", &module_info_macros, "match"},
  {"assert", &module_info_macros, "assert"},
  {"<buf>", &module_info_protoScollectionsSbuffer, "<buf>"},
  {"<file-port>", &module_info_protoSports, "<file-port>"},
  {"prop-bound?", &module_info_boot, "prop-bound?"},
  {"~", &module_info_protoSmath, "~"},
  {"cat-sym", &module_info_macros, "cat-sym"},
  {"all?", &module_info_protoScollectionsScollection, "all?"},
  {"items", &module_info_protoScollectionsScollection, "items"},
  {"<lst>", &module_info_boot, "<lst>"},
  {"tab-test", &module_info_protoScollectionsStable, "tab-test"},
  {"neg", &module_info_protoSmath, "neg"},
  {"fab-class", &module_info_boot, "fab-class"},
  {"<log>", &module_info_boot, "<log>"},
  {"eof-object?", &module_info_protoSmath, "eof-object?"},
  {"loc-val-setter", &module_info_runtime, "loc-val-setter"},
  {"fun-specs", &module_info_boot, "fun-specs"},
  {"type-object", &module_info_boot, "type-object"},
  {"renew", &module_info_macros, "renew"},
  {"read", &module_info_runtime, "read"},
  {"decf", &module_info_macros, "decf"},
  {"str-to-num", &module_info_protoScollectionsSstring, "str-to-num"},
  {"$default-handler-info", &module_info_runtime, "$default-handler-info"},
  {"t*", &module_info_protoStypes, "t*"},
  {"always", &module_info_runtime, "always"},
  {"sub", &module_info_protoScollectionsSsequence, "sub"},
  {"open", &module_info_protoSports, "open"},
  {"pop-last!", &module_info_protoScollectionsSbuffer, "pop-last!"},
  {"num-to-str", &module_info_protoSmath, "num-to-str"},
  {"|", &module_info_protoSmath, "|"},
  {"find", &module_info_protoScollectionsScollection, "find"},
  {"df", &module_info_boot, "df"},
  {"add!", &module_info_protoScollectionsScollection, "add!"},
  {"peek", &module_info_protoSports, "peek"},
  {"compose", &module_info_runtime, "compose"},
  {"fun-name", &module_info_boot, "fun-name"},
  {"fold", &module_info_protoScollectionsScollection, "fold"},
  {"add-prop", &module_info_boot, "add-prop"},
  {"map2", &module_info_protoScollectionsScollection, "map2"},
  {"prop-owner", &module_info_boot, "prop-owner"},
  {"push", &module_info_protoScollectionsSlist, "push"},
  {"zero?", &module_info_protoSmath, "zero?"},
  {"*print-base*", &module_info_protoScollectionsSstring, "*print-base*"},
  {"loc-val", &module_info_runtime, "loc-val"},
  {"<string-port>", &module_info_protoSports, "<string-port>"},
  {"odd?", &module_info_protoSmath, "odd?"},
  {"round", &module_info_protoSmath, "round"},
  {"prop-value", &module_info_boot, "prop-value"},
  {"collected", &module_info_macros, "collected"},
  {"class-parents", &module_info_boot, "class-parents"},
  {"dv", &module_info_boot, "dv"},
  {"$max-int", &module_info_boot, "$max-int"},
  {">", &module_info_protoSmagnitudes, ">"},
  {"match-sublist", &module_info_macros, "match-sublist"},
  {"pick", &module_info_protoScollectionsSsequence, "pick"},
  {"may-isa?", &module_info_boot, "may-isa?"},
  {"<list>", &module_info_protoScollectionsSlist, "<list>"},
  {"elt-setter", &module_info_protoScollectionsScollection, "elt-setter"},
  {"mod", &module_info_protoSmath, "mod"},
  {"$permanent-hash-state", &module_info_protoScollectionsStable, "$permanent-hash-state"},
  {"seq", &module_info_boot, "seq"},
  {"puts", &module_info_protoSports, "puts"},
  {"<seq>", &module_info_boot, "<seq>"},
  {"1+", &module_info_protoSmath, "1+"},
  {"t+", &module_info_protoStypes, "t+"},
  {"<any>", &module_info_boot, "<any>"},
  {"prop-type", &module_info_boot, "prop-type"},
  {"pushf", &module_info_macros, "pushf"},
  {"gets", &module_info_protoSports, "gets"},
  {"<range>", &module_info_protoScollectionsSrange, "<range>"},
  {"mem?", &module_info_protoScollectionsScollection, "mem?"},
  {"cat2", &module_info_protoScollectionsSsequence, "cat2"},
  {"class-props", &module_info_boot, "class-props"},
  {"map", &module_info_macros, "map"},
  {"error", &module_info_boot, "error"},
  {"<", &module_info_protoSmagnitudes, "<"},
  {"neg?", &module_info_protoSmath, "neg?"},
  {"%prop-unbound-error", &module_info_boot, "%prop-unbound-error"},
  {"<string-out-port>", &module_info_protoSports, "<string-out-port>"},
  {"round/", &module_info_protoSmath, "round/"},
  {"esc", &module_info_boot, "esc"},
  {"write", &module_info_write, "write"},
  {"collecting", &module_info_macros, "collecting"},
  {"fun-names", &module_info_boot, "fun-names"},
  {"add", &module_info_protoScollectionsScollection, "add"},
  {"macro-expand", &module_info_boot, "macro-expand"},
  {"write-to-string", &module_info_write, "write-to-string"},
  {"unless", &module_info_macros, "unless"},
  {"format", &module_info_runtime, "format"},
  {"pos?", &module_info_protoSmath, "pos?"},
  {"quote", &module_info_boot, "quote"},
  {">>>", &module_info_protoSmath, ">>>"},
  {"=", &module_info_protoSmath, "="},
  {"handler-matches?", &module_info_runtime, "handler-matches?"},
  {"handler-info-arguments", &module_info_boot, "handler-info-arguments"},
  {"*", &module_info_protoSmath, "*"},
  {"curry", &module_info_runtime, "curry"},
  {"port-line", &module_info_protoSports, "port-line"},
  {"fin", &module_info_boot, "fin"},
  {"digit?", &module_info_protoSmath, "digit?"},
  {"<col>", &module_info_boot, "<col>"},
  {"<class>", &module_info_boot, "<class>"},
  {"str", &module_info_protoScollectionsSstring, "str"},
  {"alpha?", &module_info_protoSmath, "alpha?"},
  {"case-insensitive-string-equal", &module_info_protoScollectionsStable, "case-insensitive-string-equal"},
  {"<condition>", &module_info_runtime, "<condition>"},
  {"~==", &module_info_protoSmath, "~=="},
  {"even?", &module_info_protoSmath, "even?"},
  {"cat!", &module_info_protoScollectionsSsequence, "cat!"},
  {"var-name", &module_info_macros, "var-name"},
  {"sexpr-signature-parameters", &module_info_syntax, "sexpr-signature-parameters"},
  {"<string-in-port>", &module_info_protoSports, "<string-in-port>"},
  {"into", &module_info_protoScollectionsScollection, "into"},
  {"~=", &module_info_protoSmath, "~="},
  {"t?", &module_info_protoStypes, "t?"},
  {"put", &module_info_protoSports, "put"},
  {"all2?", &module_info_protoStypes, "all2?"},
  {"elt-or", &module_info_protoScollectionsScollection, "elt-or"},
  {"get", &module_info_protoSports, "get"},
  {"loc", &module_info_boot, "loc"},
  {"tail-setter", &module_info_boot, "tail-setter"},
  {"match-atom", &module_info_macros, "match-atom"},
  {"for", &module_info_macros, "for"},
  {"quasiquote", &module_info_boot, "quasiquote"},
  {"ct", &module_info_boot, "ct"},
  {"dm", &module_info_boot, "dm"},
  {"first-then", &module_info_protoScollectionsSstep, "first-then"},
  {"zap", &module_info_protoScollectionsScollection, "zap"},
  {"<opts>", &module_info_boot, "<opts>"},
  {"use", &module_info_boot, "use"},
  {"napp", &module_info_macros, "napp"},
  {"<file-out-port>", &module_info_protoSports, "<file-out-port>"},
  {"tail", &module_info_boot, "tail"},
  {"<serious-condition>", &module_info_runtime, "<serious-condition>"},
  {"<type>", &module_info_boot, "<type>"},
  {"ord-app-mets", &module_info_boot, "ord-app-mets"},
  {"try", &module_info_boot, "try"},
  {"case-by", &module_info_macros, "case-by"},
  {"to-str", &module_info_protoSmath, "to-str"},
  {"force-out", &module_info_protoSports, "force-out"},
  {"t<", &module_info_protoStypes, "t<"},
  {"<loc>", &module_info_boot, "<loc>"},
  {"&", &module_info_protoSmath, "&"},
  {"fab", &module_info_protoScollectionsScollection, "fab"},
  {"trunc/", &module_info_protoSmath, "trunc/"},
  {"type-elts", &module_info_boot, "type-elts"},
  {"abs", &module_info_protoSmath, "abs"},
  {"set", &module_info_boot, "set"},
  {"<simple-error>", &module_info_runtime, "<simple-error>"},
  {"read-from-string", &module_info_read, "read-from-string"},
  {"swapf", &module_info_macros, "swapf"},
  {"describe-condition", &module_info_runtime, "describe-condition"},
  {"find-getter", &module_info_boot, "find-getter"},
  {"class-name", &module_info_boot, "class-name"},
  {"if", &module_info_boot, "if"},
  {"condition-message", &module_info_runtime, "condition-message"},
  {"match-unquote", &module_info_macros, "match-unquote"},
  {"def", &module_info_boot, "def"},
  {"empty?", &module_info_macros, "empty?"},
  {"fab-setter-name", &module_info_macros, "fab-setter-name"},
  {"dlet", &module_info_macros, "dlet"},
  {"fab-map", &module_info_protoScollectionsSmap, "fab-map"},
  {"flo-bits", &module_info_protoSmath, "flo-bits"},
  {"case-insensitive-string-hash", &module_info_protoScollectionsStable, "case-insensitive-string-hash"},
  {"fill", &module_info_protoScollectionsScollection, "fill"},
  {"gen-add-met", &module_info_boot, "gen-add-met"},
  {"cat", &module_info_macros, "cat"},
  {"any?", &module_info_protoStypes, "any?"},
  {"prop-setter", &module_info_boot, "prop-setter"},
  {"fun-val", &module_info_boot, "fun-val"},
  {"when", &module_info_macros, "when"},
  {"collect", &module_info_macros, "collect"},
  {"newline", &module_info_protoSports, "newline"},
  {"bound?", &module_info_boot, "bound?"},
  {"$min-int", &module_info_boot, "$min-int"},
  {"address-of", &module_info_protoSmath, "address-of"},
  {"1-", &module_info_protoSmath, "1-"},
  {"t=", &module_info_protoStypes, "t="},
  {"class-ancestors", &module_info_boot, "class-ancestors"},
  {"%next-methods", &module_info_boot, "%next-methods"},
  {"ceil", &module_info_protoSmath, "ceil"},
  {"elt", &module_info_macros, "elt"},
  {"push-last!", &module_info_protoScollectionsSbuffer, "push-last!"},
  {"list", &module_info_protoScollectionsSlist, "list"},
  {"del", &module_info_protoScollectionsScollection, "del"},
  {"<error>", &module_info_runtime, "<error>"},
  {"<flo>", &module_info_boot, "<flo>"},
  {"<sym>", &module_info_boot, "<sym>"},
  {"range-by", &module_info_protoScollectionsSrange, "range-by"},
  {"empty", &module_info_protoScollectionsScollection, "empty"},
  {"met-app?", &module_info_boot, "met-app?"},
  {"condition-arguments", &module_info_runtime, "condition-arguments"},
  {"rcurry", &module_info_runtime, "rcurry"},
  {"nxt", &module_info_protoScollectionsScollection, "nxt"},
  {"fun-mets", &module_info_boot, "fun-mets"},
  {"floor/", &module_info_protoSmath, "floor/"},
  {"do2", &module_info_protoScollectionsScollection, "do2"},
  {"while", &module_info_macros, "while"},
  {"<map>", &module_info_protoScollectionsSmap, "<map>"},
  {"do", &module_info_macros, "do"},
  {"keys", &module_info_protoScollectionsScollection, "keys"},
  {"to-upper", &module_info_protoSmath, "to-upper"},
  {"<prop>", &module_info_boot, "<prop>"},
  {"default-handler", &module_info_runtime, "default-handler"},
  {"let", &module_info_boot, "let"},
  {"new", &module_info_boot, "new"},
  {"fabs", &module_info_protoSmath, "fabs"},
  {"<gen>", &module_info_boot, "<gen>"},
  {"/", &module_info_protoSmath, "/"},
  {"buf", &module_info_protoScollectionsSbuffer, "buf"},
  {"low-elt-setter", &module_info_protoScollectionsScollection, "low-elt-setter"},
  {"nul", &module_info_boot, "nul"},
  {"now-key", &module_info_protoScollectionsScollection, "now-key"},
  {"rev", &module_info_protoScollectionsSsequence, "rev"},
  {"with-port", &module_info_protoSports, "with-port"},
  {"<<", &module_info_protoSmath, "<<"},
  {"last", &module_info_protoScollectionsSsequence, "last"},
  {"max", &module_info_protoSmagnitudes, "max"},
  {"isa", &module_info_boot, "isa"},
  {"port-contents", &module_info_protoSports, "port-contents"},
  {"dp", &module_info_boot, "dp"},
  {"var-type", &module_info_macros, "var-type"},
  {"sig", &module_info_runtime, "sig"},
  {"<handler-info>", &module_info_runtime, "<handler-info>"},
  {"<simple-handler-info>", &module_info_boot, "<simple-handler-info>"},
  {"match-empty-list", &module_info_macros, "match-empty-list"},
  {"ct-also", &module_info_boot, "ct-also"},
  {"pop", &module_info_protoScollectionsSlist, "pop"},
  {"<str-tab>", &module_info_protoScollectionsStable, "<str-tab>"},
  {"<int>", &module_info_boot, "<int>"},
  {"<handler>", &module_info_runtime, "<handler>"},
  {"<str>", &module_info_boot, "<str>"},
  {"sup", &module_info_macros, "sup"},
  {"len", &module_info_protoStypes, "len"},
  {"app-args", &module_info_runtime, "app-args"},
  {"fun-arity", &module_info_boot, "fun-arity"},
  {"now", &module_info_protoScollectionsScollection, "now"},
  {"vec", &module_info_boot, "vec"},
  {"tab-shrink-threshold", &module_info_protoScollectionsStable, "tab-shrink-threshold"},
  {"lst", &module_info_boot, "lst"},
  {"2nd", &module_info_protoStypes, "2nd"},
  {"==", &module_info_macros, "=="},
  {"writeln", &module_info_write, "writeln"},
  {"map-keyed", &module_info_protoScollectionsScollection, "map-keyed"},
  {"handler-function", &module_info_runtime, "handler-function"},
  {"<in-port>", &module_info_protoSports, "<in-port>"},
  {"rev!", &module_info_macros, "rev!"},
  {"key-test", &module_info_protoScollectionsScollection, "key-test"},
  {"<tup>", &module_info_boot, "<tup>"},
  {"port-index", &module_info_protoSports, "port-index"},
  {"<step>", &module_info_protoScollectionsSstep, "<step>"},
  {"tup", &module_info_boot, "tup"},
  {"isa?", &module_info_boot, "isa?"},
  {"3rd", &module_info_protoScollectionsSsequence, "3rd"},
  {"low-elt", &module_info_protoScollectionsScollection, "low-elt"},
  {"app-filename", &module_info_runtime, "app-filename"},
  {"head-setter", &module_info_boot, "head-setter"},
  {"ds", &module_info_boot, "ds"},
  {"type-class", &module_info_boot, "type-class"},
  {"fun", &module_info_boot, "fun"},
  {"%prop", &module_info_boot, "%prop"},
  {"<union>", &module_info_boot, "<union>"},
  {"case", &module_info_macros, "case"},
  {"%isa", &module_info_boot, "%isa"},
  {"len-setter", &module_info_protoScollectionsSbuffer, "len-setter"},
  {"upper?", &module_info_protoSmath, "upper?"},
  {"min", &module_info_protoSmagnitudes, "min"},
  {"popf", &module_info_macros, "popf"},
  {"range", &module_info_protoScollectionsSrange, "range"},
  {"del-dups", &module_info_protoScollectionsSsequence, "del-dups"},
  {"<assocs>", &module_info_protoScollectionsSassoc, "<assocs>"},
  {"<port>", &module_info_protoSports, "<port>"},
  {"head", &module_info_boot, "head"},
  {"fab-handler", &module_info_runtime, "fab-handler"},
  {"find-or", &module_info_protoScollectionsScollection, "find-or"},
  {"key-type", &module_info_protoScollectionsScollection, "key-type"},
  {"and", &module_info_macros, "and"},
  {"<num>", &module_info_boot, "<num>"},
  {"<vec>", &module_info_boot, "<vec>"},
  {"prop-getter", &module_info_boot, "prop-getter"},
  {"pair", &module_info_macros, "pair"},
  {"in", &module_info_protoSports, "in"},
  {"fin?", &module_info_protoScollectionsScollection, "fin?"},
  {"sub-setter", &module_info_protoScollectionsSsequence, "sub-setter"},
  {"+", &module_info_protoSmath, "+"},
  {"bit?", &module_info_protoSmath, "bit?"},
  {"do-keyed", &module_info_protoScollectionsScollection, "do-keyed"},
  {"or", &module_info_macros, "or"},
  {"close", &module_info_protoSports, "close"},
  {"1st", &module_info_protoScollectionsSsequence, "1st"},
  {"class-direct-props", &module_info_boot, "class-direct-props"},
  {"mif", &module_info_boot, "mif"},
  {"dc", &module_info_boot, "dc"},
  {"<met>", &module_info_boot, "<met>"},
  {"until", &module_info_macros, "until"},
  {"id-hash", &module_info_protoScollectionsStable, "id-hash"},
  {"prop-init", &module_info_boot, "prop-init"},
  {"as", &module_info_protoStypes, "as"},
  {"enum", &module_info_protoScollectionsScollection, "enum"},
  {"fun-nary?", &module_info_boot, "fun-nary?"},
  {"elt-default", &module_info_protoScollectionsScollection, "elt-default"},
  {"<subclass>", &module_info_boot, "<subclass>"},
  {"assocs-test", &module_info_protoScollectionsSassoc, "assocs-test"},
  {"to-lower", &module_info_protoSmath, "to-lower"},
  {"floor", &module_info_protoSmath, "floor"},
  {"del-vals", &module_info_protoScollectionsSsequence, "del-vals"},
  {"export", &module_info_boot, "export"},
  {"rem", &module_info_protoSmath, "rem"},
  {"class-descendents", &module_info_boot, "class-descendents"},
  {"cond", &module_info_macros, "cond"},
  {">=", &module_info_protoSmagnitudes, ">="},
  {"app", &module_info_macros, "app"},
  {"<simple-condition>", &module_info_runtime, "<simple-condition>"},
  {"<tab>", &module_info_protoScollectionsScollection, "<tab>"},
  {"fold+", &module_info_protoScollectionsScollection, "fold+"},
  {"display", &module_info_write, "display"},
  {"subtype?", &module_info_boot, "subtype?"},
  {">>", &module_info_protoSmath, ">>"},
  {"find-setter", &module_info_boot, "find-setter"},
  {"prop-value-setter", &module_info_boot, "prop-value-setter"},
  {"trunc", &module_info_protoSmath, "trunc"},
  {"<out-port>", &module_info_protoSports, "<out-port>"},
  {"<chr>", &module_info_boot, "<chr>"},
  {"tab-growth-threshold", &module_info_protoScollectionsStable, "tab-growth-threshold"},
  {"<flat>", &module_info_boot, "<flat>"},
  {"%define-method", &module_info_boot, "%define-method"},
  {"-", &module_info_protoSmath, "-"},
  {"incf", &module_info_macros, "incf"},
  {"lower?", &module_info_protoSmath, "lower?"},
  {"need-implementation", &module_info_macros, "need-implementation"},
  {"<enum>", &module_info_protoScollectionsScollection, "<enum>"},
  {"not", &module_info_boot, "not"},
  {"identity", &module_info_runtime, "identity"},
  {"below", &module_info_protoScollectionsSsequence, "below"},
  {"gensym", &module_info_macros, "gensym"},
  {"ceiling/", &module_info_protoSmath, "ceiling/"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"invalidate-dependents", &YdependencyYinvalidate_dependents},
  {"$parse-dependencies", &YdependencyYDparse_dependencies},
  {"dependency-or", &YdependencyYdependency_or},
  {"$expansion-parse-dependency", &YdependencyYDexpansion_parse_dependency},
  {"find-dependency", &YdependencyYfind_dependency},
  {"---main-0---", NULL},
  {"$optimizaton-dependencies", &YdependencyYDoptimizaton_dependencies},
  {"<dependent>", &YdependencyYLdependentG},
  {"invalidate-dependent", &YdependencyYinvalidate_dependent},
  {"detach-dependent", &YdependencyYdetach_dependent},
  {"dependents-setter", &YdependencyYdependents_setter},
  {"dependency-includes-any?", &YdependencyYdependency_includes_anyQ},
  {"$name-parse-dependency", &YdependencyYDname_parse_dependency},
  {"<dependency-type>", &YdependencyYLdependency_typeG},
  {"dependency-and", &YdependencyYdependency_and},
  {"log-dependency", &YdependencyYlog_dependency},
  {"dependency-includes-all?", &YdependencyYdependency_includes_allQ},
  {"depends-on", &YdependencyYdepends_on},
  {"$value-optimization-dependency", &YdependencyYDvalue_optimization_dependency},
  {"depends-on-setter", &YdependencyYdepends_on_setter},
  {"<dependable>", &YdependencyYLdependableG},
  {"dependents", &YdependencyYdependents},
  {"$empty-dependency", &YdependencyYDempty_dependency},
  {"$all-dependency-types", &YdependencyYDall_dependency_types},
  {"dependency-empty?", &YdependencyYdependency_emptyQ},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"invalidate-dependents", "invalidate-dependents"},
  {"$parse-dependencies", "$parse-dependencies"},
  {"dependency-or", "dependency-or"},
  {"$expansion-parse-dependency", "$expansion-parse-dependency"},
  {"find-dependency", "find-dependency"},
  {"$optimizaton-dependencies", "$optimizaton-dependencies"},
  {"<dependent>", "<dependent>"},
  {"detach-dependent", "detach-dependent"},
  {"dependency-includes-any?", "dependency-includes-any?"},
  {"$name-parse-dependency", "$name-parse-dependency"},
  {"<dependency-type>", "<dependency-type>"},
  {"log-dependency", "log-dependency"},
  {"invalidate-dependent", "invalidate-dependent"},
  {"dependency-includes-all?", "dependency-includes-all?"},
  {"$value-optimization-dependency", "$value-optimization-dependency"},
  {"dependency-and", "dependency-and"},
  {"<dependable>", "<dependable>"},
  {"$empty-dependency", "$empty-dependency"},
  {"$all-dependency-types", "$all-dependency-types"},
  {"dependency-empty?", "dependency-empty?"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_dependency;
MODULE_INFO module_info_dependency = {
  "dependency",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_proto (void);

/* EXPRESSION: */

extern void load_module_dependency (void);

void load_module_dependency (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_proto();

  (P)YdependencyY___main_0___();

}

/* END OF GENERATED CODE. */
