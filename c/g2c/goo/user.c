/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/user */

EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yx8rStopYload,"x8r/top","load");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rStopYtop,"x8r/top","top");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yx8rStopYdo_stack_frames,"x8r/top","do-stack-frames");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLmetG,"goo/boot","<met>");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(Yx8rStopYbt,"x8r/top","bt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yvec,"goo/boot","vec");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ytup,"goo/boot","tup");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rStopYframe_var,"x8r/top","frame-var");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yx8rStopYframe,"x8r/top","frame");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rStopYbacktrace,"x8r/top","backtrace");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yx8rStopYsave_image,"x8r/top","save-image");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");

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
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_x8rStop;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"=", &module_info_gooSmath, "="},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"for", &module_info_gooSmacros, "for"},
  {"<<", &module_info_gooSmath, "<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"1-", &module_info_gooSmath, "1-"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"export", &module_info_gooSboot, "export"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"even?", &module_info_gooSmath, "even?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"always", &module_info_gooSruntime, "always"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"while", &module_info_gooSmacros, "while"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"~", &module_info_gooSmath, "~"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"try", &module_info_gooSboot, "try"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"1+", &module_info_gooSmath, "1+"},
  {"open", &module_info_gooSioSport, "open"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"&", &module_info_gooSmath, "&"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"load", &module_info_x8rStop, "load"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"t<", &module_info_gooStypes, "t<"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"dp", &module_info_gooSboot, "dp"},
  {"floor", &module_info_gooSmath, "floor"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"top", &module_info_x8rStop, "top"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"^", &module_info_gooSmath, "^"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"or", &module_info_gooSmacros, "or"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"loc", &module_info_gooSboot, "loc"},
  {">>", &module_info_gooSmath, ">>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"any?", &module_info_gooStypes, "any?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"do-stack-frames", &module_info_x8rStop, "do-stack-frames"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"mif", &module_info_gooSboot, "mif"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"round/", &module_info_gooSmath, "round/"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"tail", &module_info_gooSboot, "tail"},
  {"|", &module_info_gooSmath, "|"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"now", &module_info_gooScolsScol, "now"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"max", &module_info_gooSmag, "max"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"get", &module_info_gooSioSport, "get"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"fin", &module_info_gooSboot, "fin"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"out", &module_info_gooSioSport, "out"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"map", &module_info_gooSmacros, "map"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"del", &module_info_gooScolsScol, "del"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"esc", &module_info_gooSboot, "esc"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"format", &module_info_gooSruntime, "format"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"dc", &module_info_gooSboot, "dc"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"new", &module_info_gooSboot, "new"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"bt", &module_info_x8rStop, "bt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"-", &module_info_gooSmath, "-"},
  {"df", &module_info_gooSboot, "df"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"len-setter", &module_info_gooScolsSbuf, "len-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"def", &module_info_gooSboot, "def"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"case", &module_info_gooSmacros, "case"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"put", &module_info_gooSioSport, "put"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"read", &module_info_gooSruntime, "read"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"ds", &module_info_gooSboot, "ds"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"vec", &module_info_gooSboot, "vec"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"round", &module_info_gooSmath, "round"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"frame-var", &module_info_x8rStop, "frame-var"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"as", &module_info_gooStypes, "as"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"len/fill-setter", &module_info_gooScolsSbuf, "len/fill-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"isa", &module_info_gooSboot, "isa"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"neg", &module_info_gooSmath, "neg"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"t*", &module_info_gooStypes, "t*"},
  {"until", &module_info_gooSmacros, "until"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"frame", &module_info_x8rStop, "frame"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"app", &module_info_gooSmacros, "app"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"close", &module_info_gooSioSport, "close"},
  {"backtrace", &module_info_x8rStop, "backtrace"},
  {"push", &module_info_gooScolsSlst, "push"},
  {">", &module_info_gooSmag, ">"},
  {"~=", &module_info_gooSmath, "~="},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"<", &module_info_gooSmag, "<"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"t+", &module_info_gooStypes, "t+"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rem", &module_info_gooSmath, "rem"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"save-image", &module_info_x8rStop, "save-image"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"/", &module_info_gooSmath, "/"},
  {"error", &module_info_gooSboot, "error"},
  {"1st", &module_info_gooScolsSseq, "1st"},
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
