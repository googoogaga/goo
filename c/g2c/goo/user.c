/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "prt.h"

/* MODULE ENVIRONMENT: goo/user */

EXT(Ylst,"runtime/boot","lst");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YcompilerStopYsave_image,"compiler/top","save-image");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooSportYLfile_portG,"goo/port","<file-port>");
EXT(YcompilerStopYbt,"compiler/top","bt");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSportYLstr_out_portG,"goo/port","<str-out-port>");
EXT(YgooSportYget,"goo/port","get");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSportYin,"goo/port","in");
EXT(YcompilerStopYtop,"compiler/top","top");
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
EXT(YcompilerStopYdo_stack_frames,"compiler/top","do-stack-frames");
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
EXT(YgooSportYLportG,"goo/port","<port>");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooStypeYtE,"goo/type","t=");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(Yprop_value,"runtime/boot","prop-value");
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
EXT(YLseqG,"runtime/boot","<seq>");
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
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(YgooSportYnewline,"goo/port","newline");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooStypeYanyQ,"goo/type","any?");
EXT(YgooSmathYB,"goo/math","&");
EXT(YcompilerStopYload,"compiler/top","load");
EXT(YgooSportYLstr_in_portG,"goo/port","<str-in-port>");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
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
EXT(YcompilerSsyntaxYeval,"compiler/syntax","eval");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooSportYLout_portG,"goo/port","<out-port>");
EXT(YcompilerStopYbacktrace,"compiler/top","backtrace");
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
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YcompilerStopYframe_var,"compiler/top","frame-var");
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
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSportYpeek,"goo/port","peek");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YLlocG,"runtime/boot","<loc>");
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
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YcompilerStopYframe,"compiler/top","frame");
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


/* FUNCTIONS: */

extern P YgooSuserY___main_0___ ();

/* FUNCTION CODES: */

P YgooSuserY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_compilerStop;
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
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
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
  {"save-image", &module_info_compilerStop, "save-image"},
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
  {"bt", &module_info_compilerStop, "bt"},
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
  {"top", &module_info_compilerStop, "top"},
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
  {"do-stack-frames", &module_info_compilerStop, "do-stack-frames"},
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
  {"load", &module_info_compilerStop, "load"},
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
  {"eval", &module_info_compilerSsyntax, "eval"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {">>", &module_info_gooSmath, ">>"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"<out-port>", &module_info_gooSport, "<out-port>"},
  {"backtrace", &module_info_compilerStop, "backtrace"},
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
  {"frame-var", &module_info_compilerStop, "frame-var"},
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
  {"frame", &module_info_compilerStop, "frame"},
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
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSuser;
MODULE_INFO module_info_gooSuser = {
  "goo/user",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);

/* EXPRESSION: */

extern void load_module_gooSuser (void);

void load_module_gooSuser (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();

  (P)YgooSuserY___main_0___();

}

/* END OF GENERATED CODE. */
