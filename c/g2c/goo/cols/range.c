/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/range */

EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooScolsSrangeYPdat_setter,"goo/cols/range","%dat-setter");
DEF(YgooScolsSrangeYLrange_enumG,"goo/cols/range","<range-enum>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooScolsSrangeYrange_inQ_setter,"goo/cols/range","range-in?-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
DEF(YgooScolsSrangeYPval,"goo/cols/range","%val");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooScolsSrangeYrange_lim,"goo/cols/range","range-lim");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YgooScolsSrangeYrange_nxt_setter,"goo/cols/range","range-nxt-setter");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooScolsSrangeYrange_from_setter,"goo/cols/range","range-from-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooScolsSrangeYrange_inQ,"goo/cols/range","range-in?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooScolsSrangeYrange_nxt,"goo/cols/range","range-nxt");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
DEF(YgooScolsSrangeYrange_lim_setter,"goo/cols/range","range-lim-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yvec,"goo/boot","vec");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
DEF(YgooScolsSrangeYPval_setter,"goo/cols/range","%val-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYround,"goo/math","round");
EXT(Ytup,"goo/boot","tup");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooScolsSrangeYrange_from,"goo/cols/range","range-from");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YgooScolsSrangeYPdat,"goo/cols/range","%dat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_27);
DEFLIT(lit_1);
DEFLIT(lit_14);
DEFLIT(lit_28);
DEFLIT(lit_11);
DEFLIT(lit_13);
DEFLIT(lit_24);
DEFLIT(lit_23);
DEFLIT(lit_32);
DEFLIT(lit_31);
DEFLIT(lit_0);
DEFLIT(lit_7);
DEFLIT(lit_3);
DEFLIT(lit_10);
DEFLIT(lit_12);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_5);
DEFLIT(lit_30);
DEFLIT(lit_9);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_25);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_15);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_17);

/* FUNCTIONS: */

LOCFOR(fun_range_from_0);
LOCFOR(fun_range_from_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_range_inQ_3);
LOCFOR(fun_range_inQ_setter_4);
LOCFOR(fun_5);
LOCFOR(fun_range_lim_6);
LOCFOR(fun_range_lim_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_range_nxt_9);
LOCFOR(fun_range_nxt_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_fab_12);
LOCFOR(fun_range_13);
LOCFOR(fun_range_by_14);
LOCFOR(fun_from_15);
LOCFOR(fun_below_16);
LOCFOR(fun_as_copy_17);
LOCFOR(fun_Pdat_18);
LOCFOR(fun_Pdat_setter_19);
LOCFOR(fun_Pval_20);
LOCFOR(fun_Pval_setter_21);
LOCFOR(fun_enum_22);
LOCFOR(fun_finQ_23);
LOCFOR(fun_nxt_24);
LOCFOR(fun_now_25);
extern P YgooScolsSrangeY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_range_from_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_from_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYrange_from));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_2) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_range_inQ_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYrange_inQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_inQ_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYrange_inQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_5) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSmagYL));
}

FUNCODEDEF(fun_range_lim_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYrange_lim));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_lim_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYrange_lim));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_range_nxt_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYrange_nxt));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_nxt_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYrange_nxt));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(VARREF(YgooSmathY1A));
}

FUNCODEDEF(fun_fab_12) {
  P c_,s_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(s_, 1);
loop:
  T0 = CALLN(1,VARREF(YgooScolsSrangeYrange),4,YPint((P)0),VARREF(YgooSmagYL),s_,VARREF(YgooSmathY1A));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_13) {
  P from_,inQ_,lim_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(from_, 0);
  ARG(inQ_, 1);
  ARG(lim_, 2);
loop:
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),inQ_,VARREF(YgooScolsSrangeYrange_lim),lim_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_by_14) {
  P from_,inQ_,lim_,nxt_;
  P T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(from_, 0);
  ARG(inQ_, 1);
  ARG(lim_, 2);
  ARG(nxt_, 3);
loop:
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),inQ_,VARREF(YgooScolsSrangeYrange_lim),lim_,VARREF(YgooScolsSrangeYrange_nxt),nxt_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_from_15) {
  P from_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(from_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYalways),YPtrue);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_below_16) {
  P lim_;
  P T0;
  P a1;
LINK_STACK();
  ARG(lim_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_lim),lim_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_as_copy_17) {
  P c_,x_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(x_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),x_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_Pdat_18) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pdat_setter_19) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYPdat));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pval_20) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYPval));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pval_setter_21) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYPval));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_22) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrangeYrange_from),x_);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),x_,VARREF(YgooScolsSrangeYPval),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_23) {
  P e_;
  P cF1278;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  cF1278 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrangeYrange_inQ),cF1278);
  T5 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T6 = CALL1(1,VARREF(YgooScolsSrangeYrange_lim),cF1278);
  T3 = CALL2(1,T4,T5,T6);
  T2 = CALL1(1,VARREF(Ynot),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_24) {
  P e_;
  P x_1324F1279;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1324F1279 = e_;
  T3 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYrange_nxt),T3);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T1 = CALL1(1,T2,T4);
  CALL2(1,VARREF(YgooScolsSrangeYPval_setter),T1,x_1324F1279);
  T0 = x_1324F1279;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_25) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSrangeY___main_0___() {
  P T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120;
  P T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104;
  P T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88;
  P T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72;
  P T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56;
  P T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40;
  P T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<range>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooScolsSrangeYLrangeG,T0);
  lit_1 = YPPsym((P)"range");
  lit_2 = YPPsym((P)"from");
  lit_3 = YPPsym((P)"done?");
  lit_4 = YPPsym((P)"lim");
  T3 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_3),LITREF(lit_4)),YPPlist(3,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSrangeYrange,T2);
  lit_5 = YPPsym((P)"range-by");
  lit_6 = YPPsym((P)"nxt");
  T5 = YPsig(YPPlist(4,LITREF(lit_2),LITREF(lit_3),LITREF(lit_4),LITREF(lit_6)),YPPlist(4,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSrangeYrange_by,T4);
  T7 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_2),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSrangeYfrom,T6);
  lit_7 = YPPsym((P)"below");
  T9 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooScolsSseqYbelow,T8);
  lit_8 = YPPsym((P)"range-from");
  lit_9 = YPPsym((P)"_x");
  T10 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_from_0 = YPmet(FUNCODEREF(fun_range_from_0),LITREF(lit_8),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooScolsSrangeYrange_from);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooScolsSrangeYrange_from);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_range_from_0;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooScolsSrangeYrange_from,T11);
  lit_10 = YPPsym((P)"range-from-setter");
  lit_11 = YPPsym((P)"_z");
  T15 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_from_setter_1 = YPmet(FUNCODEREF(fun_range_from_setter_1),LITREF(lit_10),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooScolsSrangeYrange_from_setter);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooScolsSrangeYrange_from_setter);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_range_from_setter_1;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooScolsSrangeYrange_from_setter,T16);
  lit_12 = YPPsym((P)"x");
  T20 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T21 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),VARREF(YgooScolsSrangeYrange_from_setter),VARREF(YLnumG),T21);
  lit_13 = YPPsym((P)"range-in?");
  T22 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_inQ_3 = YPmet(FUNCODEREF(fun_range_inQ_3),LITREF(lit_13),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsSrangeYrange_inQ);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsSrangeYrange_inQ);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_range_inQ_3;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsSrangeYrange_inQ,T23);
  lit_14 = YPPsym((P)"range-in?-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_inQ_setter_4 = YPmet(FUNCODEREF(fun_range_inQ_setter_4),LITREF(lit_14),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooScolsSrangeYrange_inQ_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooScolsSrangeYrange_inQ_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_range_inQ_setter_4;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooScolsSrangeYrange_inQ_setter,T28);
  T32 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_5;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_inQ),VARREF(YgooScolsSrangeYrange_inQ_setter),VARREF(YLfunG),T33);
  lit_15 = YPPsym((P)"range-lim");
  T34 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_lim_6 = YPmet(FUNCODEREF(fun_range_lim_6),LITREF(lit_15),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScolsSrangeYrange_lim);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsSrangeYrange_lim);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_range_lim_6;
  T35 = CALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsSrangeYrange_lim,T35);
  lit_16 = YPPsym((P)"range-lim-setter");
  T40 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T39 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,T40,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_lim_setter_7 = YPmet(FUNCODEREF(fun_range_lim_setter_7),LITREF(lit_16),T39,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsSrangeYrange_lim_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsSrangeYrange_lim_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_range_lim_setter_7;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsSrangeYrange_lim_setter,T41);
  T45 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T46 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T47 = fun_8;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_lim),VARREF(YgooScolsSrangeYrange_lim_setter),T46,T47);
  lit_17 = YPPsym((P)"range-nxt");
  T48 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_nxt_9 = YPmet(FUNCODEREF(fun_range_nxt_9),LITREF(lit_17),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsSrangeYrange_nxt);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsSrangeYrange_nxt);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_range_nxt_9;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsSrangeYrange_nxt,T49);
  lit_18 = YPPsym((P)"range-nxt-setter");
  T53 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_nxt_setter_10 = YPmet(FUNCODEREF(fun_range_nxt_setter_10),LITREF(lit_18),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsSrangeYrange_nxt_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSrangeYrange_nxt_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_range_nxt_setter_10;
  T54 = CALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSrangeYrange_nxt_setter,T54);
  T58 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T59 = fun_11;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_nxt),VARREF(YgooScolsSrangeYrange_nxt_setter),VARREF(YLfunG),T59);
  lit_19 = YPPsym((P)"fab");
  lit_20 = YPPsym((P)"c");
  lit_21 = YPPsym((P)"s");
  T61 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSrangeYLrangeG));
  T60 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_21)),YPPlist(2,T61,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_fab_12 = YPmet(FUNCODEREF(fun_fab_12),LITREF(lit_19),T60,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooScolsScolYfab);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScolsScolYfab);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_fab_12;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScolsScolYfab,T62);
  lit_22 = YPPsym((P)"in?");
  T66 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_22),LITREF(lit_4)),YPPlist(3,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_13 = YPmet(FUNCODEREF(fun_range_13),LITREF(lit_1),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooScolsSrangeYrange);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooScolsSrangeYrange);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_range_13;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooScolsSrangeYrange,T67);
  T71 = YPsig(YPPlist(4,LITREF(lit_2),LITREF(lit_22),LITREF(lit_4),LITREF(lit_6)),YPPlist(4,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_by_14 = YPmet(FUNCODEREF(fun_range_by_14),LITREF(lit_5),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScolsSrangeYrange_by);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScolsSrangeYrange_by);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_range_by_14;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooScolsSrangeYrange_by,T72);
  T76 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_from_15 = YPmet(FUNCODEREF(fun_from_15),LITREF(lit_2),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooScolsSrangeYfrom);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooScolsSrangeYfrom);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_from_15;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooScolsSrangeYfrom,T77);
  T81 = YPsig(YPPlist(1,LITREF(lit_4)),YPPlist(1,VARREF(YLnumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_below_16 = YPmet(FUNCODEREF(fun_below_16),LITREF(lit_7),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooScolsSseqYbelow);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooScolsSseqYbelow);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_below_16;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooScolsSseqYbelow,T82);
  lit_23 = YPPsym((P)"as-copy");
  T86 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_12)),YPPlist(2,VARREF(YgooScolsSrangeYLrangeG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLcolG),Ynil);
  fun_as_copy_17 = YPmet(FUNCODEREF(fun_as_copy_17),LITREF(lit_23),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooScolsScolYas_copy);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooScolsScolYas_copy);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_as_copy_17;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooScolsScolYas_copy,T87);
  lit_24 = YPPsym((P)"<range-enum>");
  T92 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T91 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T92);
  VARSET(YgooScolsSrangeYLrange_enumG,T91);
  lit_25 = YPPsym((P)"%dat");
  T93 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pdat_18 = YPmet(FUNCODEREF(fun_Pdat_18),LITREF(lit_25),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooScolsSrangeYPdat);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooScolsSrangeYPdat);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_Pdat_18;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooScolsSrangeYPdat,T94);
  lit_26 = YPPsym((P)"%dat-setter");
  T98 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pdat_setter_19 = YPmet(FUNCODEREF(fun_Pdat_setter_19),LITREF(lit_26),T98,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooScolsSrangeYPdat_setter);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooScolsSrangeYPdat_setter);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_Pdat_setter_19;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooScolsSrangeYPdat_setter,T99);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),VARREF(YgooScolsSrangeYPdat_setter),VARREF(YgooScolsSrangeYLrangeG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"%val");
  T103 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pval_20 = YPmet(FUNCODEREF(fun_Pval_20),LITREF(lit_27),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooScolsSrangeYPval);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooScolsSrangeYPval);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_Pval_20;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooScolsSrangeYPval,T104);
  lit_28 = YPPsym((P)"%val-setter");
  T108 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLnumG),VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pval_setter_21 = YPmet(FUNCODEREF(fun_Pval_setter_21),LITREF(lit_28),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooScolsSrangeYPval_setter);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooScolsSrangeYPval_setter);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_Pval_setter_21;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooScolsSrangeYPval_setter,T109);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPval),VARREF(YgooScolsSrangeYPval_setter),VARREF(YLnumG),VARREF(YPprop_unbound_error));
  lit_29 = YPPsym((P)"enum");
  T113 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_enum_22 = YPmet(FUNCODEREF(fun_enum_22),LITREF(lit_29),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooScolsScolYenum);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooScolsScolYenum);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_enum_22;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooScolsScolYenum,T114);
  lit_30 = YPPsym((P)"fin?");
  lit_31 = YPPsym((P)"e");
  T118 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_23 = YPmet(FUNCODEREF(fun_finQ_23),LITREF(lit_30),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooScolsScolYfinQ);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsScolYfinQ);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_finQ_23;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsScolYfinQ,T119);
  T123 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_nxt_24 = YPmet(FUNCODEREF(fun_nxt_24),LITREF(lit_6),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooScolsScolYnxt);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooScolsScolYnxt);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_nxt_24;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooScolsScolYnxt,T124);
  lit_32 = YPPsym((P)"now");
  T130 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  T129 = fun_now_25 = YPmet(FUNCODEREF(fun_now_25),LITREF(lit_32),T130,ENVNUL,PNUL,YPfalse);
  T134 = BOUNDP(YgooScolsScolYnow);
  if (T134 != YPfalse) {
    T133 = VARREF(YgooScolsScolYnow);
  } else {
    T133 = YPfalse;
  }
  T135 = fun_now_25;
  T132 = CALL2(1,VARREF(YPdefine_method),T133,T135);
  T131 = VARSET(YgooScolsScolYnow,T132);
  T128 = T131;
  return T128;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"=", &module_info_gooSmath, "="},
  {"sig", &module_info_gooSruntime, "sig"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"for", &module_info_gooSmacros, "for"},
  {"<<", &module_info_gooSmath, "<<"},
  {"items", &module_info_gooScolsScol, "items"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"export", &module_info_gooSboot, "export"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%im", &module_info_gooSboot, "%im"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"always", &module_info_gooSruntime, "always"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"while", &module_info_gooSmacros, "while"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"try", &module_info_gooSboot, "try"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"read", &module_info_gooSruntime, "read"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"&", &module_info_gooSmath, "&"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"tan", &module_info_gooSmath, "tan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"into", &module_info_gooScolsScol, "into"},
  {"@<", &module_info_gooSboot, "@<"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"~", &module_info_gooSmath, "~"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"dp", &module_info_gooSboot, "dp"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"floor", &module_info_gooSmath, "floor"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"^", &module_info_gooSmath, "^"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {">>", &module_info_gooSmath, ">>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"round/", &module_info_gooSmath, "round/"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tail", &module_info_gooSboot, "tail"},
  {"|", &module_info_gooSmath, "|"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"@len", &module_info_gooSboot, "@len"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"max", &module_info_gooSmag, "max"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"fin", &module_info_gooSboot, "fin"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"map", &module_info_gooSmacros, "map"},
  {"@==", &module_info_gooSboot, "@=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"esc", &module_info_gooSboot, "esc"},
  {"format", &module_info_gooSruntime, "format"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"new", &module_info_gooSboot, "new"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"==", &module_info_gooSmacros, "=="},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"def", &module_info_gooSboot, "def"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%str", &module_info_gooSboot, "%str"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"not", &module_info_gooSboot, "not"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"round", &module_info_gooSmath, "round"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"head", &module_info_gooSboot, "head"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"abs", &module_info_gooSmath, "abs"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"as", &module_info_gooStypes, "as"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"when", &module_info_gooSmacros, "when"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$e", &module_info_gooSmath, "$e"},
  {"isa", &module_info_gooSboot, "isa"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"app", &module_info_gooSmacros, "app"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {">", &module_info_gooSmag, ">"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"log", &module_info_gooSmath, "log"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"nul", &module_info_gooSboot, "nul"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"rem", &module_info_gooSmath, "rem"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"sin", &module_info_gooSmath, "sin"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"/", &module_info_gooSmath, "/"},
  {"error", &module_info_gooSboot, "error"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%dat-setter", &YgooScolsSrangeYPdat_setter},
  {"<range-enum>", &YgooScolsSrangeYLrange_enumG},
  {"range-in?-setter", &YgooScolsSrangeYrange_inQ_setter},
  {"%val", &YgooScolsSrangeYPval},
  {"range", &YgooScolsSrangeYrange},
  {"---main-0---", NULL},
  {"range-lim", &YgooScolsSrangeYrange_lim},
  {"range-nxt-setter", &YgooScolsSrangeYrange_nxt_setter},
  {"range-by", &YgooScolsSrangeYrange_by},
  {"range-from-setter", &YgooScolsSrangeYrange_from_setter},
  {"range-in?", &YgooScolsSrangeYrange_inQ},
  {"range-nxt", &YgooScolsSrangeYrange_nxt},
  {"from", &YgooScolsSrangeYfrom},
  {"<range>", &YgooScolsSrangeYLrangeG},
  {"range-lim-setter", &YgooScolsSrangeYrange_lim_setter},
  {"%val-setter", &YgooScolsSrangeYPval_setter},
  {"range-from", &YgooScolsSrangeYrange_from},
  {"%dat", &YgooScolsSrangeYPdat},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"range", "range"},
  {"range-by", "range-by"},
  {"below", "below"},
  {"from", "from"},
  {"<range>", "<range>"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooScolsSrange;
MODULE_INFO module_info_gooScolsSrange = {
  "goo/cols/range",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooScolsSrange (void);

void load_module_gooScolsSrange (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooScolsSrangeY___main_0___();

}

/* END OF GENERATED CODE. */
