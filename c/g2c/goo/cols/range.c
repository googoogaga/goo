/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/range */

EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooScolsSrangeYrange_from_setter,"goo/cols/range","range-from-setter");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
DEF(YgooScolsSrangeYrange_nxt_setter,"goo/cols/range","range-nxt-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooScolsSrangeYrange_lim_setter,"goo/cols/range","range-lim-setter");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooScolsSrangeYPval,"goo/cols/range","%val");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooScolsSrangeYLrange_enumG,"goo/cols/range","<range-enum>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooScolsSrangeYrange_from,"goo/cols/range","range-from");
DEF(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfillX,"goo/cols/col","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
DEF(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooScolsSrangeYPval_setter,"goo/cols/range","%val-setter");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooScolsSrangeYPdat_setter,"goo/cols/range","%dat-setter");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
DEF(YgooScolsSrangeYrange_inQ,"goo/cols/range","range-in?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
DEF(YgooScolsSrangeYrange_lim,"goo/cols/range","range-lim");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYfabs,"goo/math","fabs");
DEF(YgooScolsSrangeYPdat,"goo/cols/range","%dat");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooScolsSrangeYrange_nxt,"goo/cols/range","range-nxt");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
DEF(YgooScolsSrangeYrange_inQ_setter,"goo/cols/range","range-in?-setter");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_2);
DEFLIT(lit_30);
DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_20);
DEFLIT(lit_8);
DEFLIT(lit_3);
DEFLIT(lit_13);
DEFLIT(lit_4);
DEFLIT(lit_10);
DEFLIT(lit_14);
DEFLIT(lit_25);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_28);
DEFLIT(lit_7);
DEFLIT(lit_18);
DEFLIT(lit_31);
DEFLIT(lit_12);
DEFLIT(lit_21);
DEFLIT(lit_23);
DEFLIT(lit_11);
DEFLIT(lit_16);
DEFLIT(lit_24);
DEFLIT(lit_0);
DEFLIT(lit_9);
DEFLIT(lit_32);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_17);
DEFLIT(lit_1);
DEFLIT(lit_5);

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
  P cF1282;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  cF1282 = T1;
  T4 = CALL1(1,VARREF(YgooScolsSrangeYrange_inQ),cF1282);
  T5 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T6 = CALL1(1,VARREF(YgooScolsSrangeYrange_lim),cF1282);
  T3 = CALL2(1,T4,T5,T6);
  T2 = CALL1(1,VARREF(Ynot),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_24) {
  P e_;
  P x_1328F1283;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1328F1283 = e_;
  T3 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYrange_nxt),T3);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T1 = CALL1(1,T2,T4);
  CALL2(1,VARREF(YgooScolsSrangeYPval_setter),T1,x_1328F1283);
  T0 = x_1328F1283;
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
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"1+", &module_info_gooSmath, "1+"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"format", &module_info_gooSruntime, "format"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"@<", &module_info_gooSboot, "@<"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"nul", &module_info_gooSboot, "nul"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"or", &module_info_gooSmacros, "or"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"any?", &module_info_gooStypes, "any?"},
  {"|", &module_info_gooSmath, "|"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"always", &module_info_gooSruntime, "always"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"even?", &module_info_gooSmath, "even?"},
  {"max", &module_info_gooSmag, "max"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fin", &module_info_gooSboot, "fin"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"log", &module_info_gooSmath, "log"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"ds", &module_info_gooSboot, "ds"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"round", &module_info_gooSmath, "round"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"ct", &module_info_gooSboot, "ct"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dc", &module_info_gooSboot, "dc"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%str", &module_info_gooSboot, "%str"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"tan", &module_info_gooSmath, "tan"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"set", &module_info_gooSboot, "set"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"def", &module_info_gooSboot, "def"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"isa", &module_info_gooSboot, "isa"},
  {"head", &module_info_gooSboot, "head"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"map", &module_info_gooSmacros, "map"},
  {"<=", &module_info_gooSmag, "<="},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"dss", &module_info_gooSboot, "dss"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"$e", &module_info_gooSmath, "$e"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"del", &module_info_gooScolsScol, "del"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"as", &module_info_gooStypes, "as"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"find", &module_info_gooScolsScol, "find"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"esc", &module_info_gooSboot, "esc"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%su", &module_info_gooSboot, "%su"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"dl", &module_info_gooSboot, "dl"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"nil", &module_info_gooSboot, "nil"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {">", &module_info_gooSmag, ">"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_gooSboot, "loc"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"rem", &module_info_gooSmath, "rem"},
  {"read", &module_info_gooSruntime, "read"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"try", &module_info_gooSboot, "try"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"mod", &module_info_gooSmath, "mod"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"use", &module_info_gooSboot, "use"},
  {"asin", &module_info_gooSmath, "asin"},
  {"/", &module_info_gooSmath, "/"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"~", &module_info_gooSmath, "~"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"=", &module_info_gooSmath, "="},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"for", &module_info_gooSmacros, "for"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"export", &module_info_gooSboot, "export"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"%im", &module_info_gooSboot, "%im"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"dg", &module_info_gooSboot, "dg"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"while", &module_info_gooSmacros, "while"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"last", &module_info_gooScolsSseq, "last"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"range-from-setter", &YgooScolsSrangeYrange_from_setter},
  {"range-nxt-setter", &YgooScolsSrangeYrange_nxt_setter},
  {"range-lim-setter", &YgooScolsSrangeYrange_lim_setter},
  {"<range>", &YgooScolsSrangeYLrangeG},
  {"%val", &YgooScolsSrangeYPval},
  {"<range-enum>", &YgooScolsSrangeYLrange_enumG},
  {"range-from", &YgooScolsSrangeYrange_from},
  {"from", &YgooScolsSrangeYfrom},
  {"---main-0---", NULL},
  {"range", &YgooScolsSrangeYrange},
  {"%val-setter", &YgooScolsSrangeYPval_setter},
  {"%dat-setter", &YgooScolsSrangeYPdat_setter},
  {"range-in?", &YgooScolsSrangeYrange_inQ},
  {"range-by", &YgooScolsSrangeYrange_by},
  {"range-lim", &YgooScolsSrangeYrange_lim},
  {"%dat", &YgooScolsSrangeYPdat},
  {"range-nxt", &YgooScolsSrangeYrange_nxt},
  {"range-in?-setter", &YgooScolsSrangeYrange_inQ_setter},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<range>", "<range>"},
  {"below", "below"},
  {"from", "from"},
  {"range", "range"},
  {"range-by", "range-by"},
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
