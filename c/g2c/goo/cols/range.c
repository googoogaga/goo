/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/cols/range */

EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
DEF(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooScolsSrangeYPkey,"goo/cols/range","%key");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooScolsSrangeYrange_inQ,"goo/cols/range","range-in?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooScolsSrangeYPkey_setter,"goo/cols/range","%key-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfunG,"goo/boot","<fun>");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
DEF(YgooScolsSrangeYrange_from,"goo/cols/range","range-from");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YgooScolsSrangeYPval_setter,"goo/cols/range","%val-setter");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooScolsSrangeYrange_nxt,"goo/cols/range","range-nxt");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooScolsSrangeYrange_lim_setter,"goo/cols/range","range-lim-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YtT,"goo/boot","t*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ylst,"goo/boot","lst");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooScolsSrangeYLrange_enumG,"goo/cols/range","<range-enum>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmathYB,"goo/math","&");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooScolsSrangeYrange_nxt_setter,"goo/cols/range","range-nxt-setter");
DEF(YgooScolsSrangeYPdat_setter,"goo/cols/range","%dat-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLlogG,"goo/boot","<log>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ytup,"goo/boot","tup");
DEF(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooScolsSrangeYPval,"goo/cols/range","%val");
DEF(YgooScolsSrangeYPdat,"goo/cols/range","%dat");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
DEF(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YgooScolsSrangeYrange_lim,"goo/cols/range","range-lim");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
DEF(YgooScolsSrangeYrange_from_setter,"goo/cols/range","range-from-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YgooScolsSrangeYrange_inQ_setter,"goo/cols/range","range-in?-setter");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYA,"goo/math","+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_33);
DEFLIT(lit_6);
DEFLIT(lit_5);
DEFLIT(lit_29);
DEFLIT(lit_23);
DEFLIT(lit_17);
DEFLIT(lit_4);
DEFLIT(lit_32);
DEFLIT(lit_9);
DEFLIT(lit_20);
DEFLIT(lit_35);
DEFLIT(lit_19);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_3);
DEFLIT(lit_7);
DEFLIT(lit_30);
DEFLIT(lit_27);
DEFLIT(lit_14);
DEFLIT(lit_1);
DEFLIT(lit_0);
DEFLIT(lit_31);
DEFLIT(lit_25);
DEFLIT(lit_18);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_12);
DEFLIT(lit_26);
DEFLIT(lit_22);
DEFLIT(lit_8);
DEFLIT(lit_2);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_28);
DEFLIT(lit_13);
DEFLIT(lit_21);

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
LOCFOR(fun_col_res_type_17);
LOCFOR(fun_Pdat_18);
LOCFOR(fun_Pdat_setter_19);
LOCFOR(fun_Pval_20);
LOCFOR(fun_Pval_setter_21);
LOCFOR(fun_Pkey_22);
LOCFOR(fun_Pkey_setter_23);
LOCFOR(fun_enum_24);
LOCFOR(fun_finQ_25);
LOCFOR(fun_nxt_26);
LOCFOR(fun_now_27);
LOCFOR(fun_now_key_28);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
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
  T0 = CALL4(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYL),s_,VARREF(YgooSmathY1A));
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(from_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSruntimeYalways),YPtrue);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),from_,VARREF(YgooScolsSrangeYrange_inQ),T1);
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

FUNCODEDEF(fun_col_res_type_17) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YLlstG));
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

FUNCODEDEF(fun_Pkey_22) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooScolsSrangeYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Pkey_setter_23) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooScolsSrangeYPkey));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_enum_24) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrangeYrange_from),x_);
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),x_,VARREF(YgooScolsSrangeYPval),T1,VARREF(YgooScolsSrangeYPkey),YPint((P)0));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_finQ_25) {
  P e_;
  P cF1383;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  cF1383 = T1;
  T6 = CALL1(1,VARREF(YgooScolsSrangeYrange_inQ),cF1383);
  T4 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T5 = CALL1(1,VARREF(YgooScolsSrangeYrange_lim),cF1383);
  T3 = CALL2(1,T6,T4,T5);
  T2 = CALL1(1,VARREF(Ynot),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nxt_26) {
  P e_;
  P x_1375F1384;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  x_1375F1384 = e_;
  T4 = CALL1(1,VARREF(YgooScolsSrangeYPdat),e_);
  T3 = CALL1(1,VARREF(YgooScolsSrangeYrange_nxt),T4);
  T2 = CALL1(1,VARREF(YgooScolsSrangeYPval),e_);
  T1 = CALL1(1,T3,T2);
  CALL2(1,VARREF(YgooScolsSrangeYPval_setter),T1,x_1375F1384);
  T6 = CALL1(1,VARREF(YgooScolsSrangeYPkey),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  CALL2(1,VARREF(YgooScolsSrangeYPkey_setter),T5,x_1375F1384);
  T0 = x_1375F1384;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_now_27) {
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

FUNCODEDEF(fun_now_key_28) {
  P e_;
  P T0;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSrangeYPkey),e_);
UNLINK_STACK();
  RET(T0);
}

P YgooScolsSrangeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<range>");
  T1 = (P)YPpair(VARREF(YLseqG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
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
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
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
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooScolsSrangeYrange_from_setter,T16);
  T20 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T20,ENVNUL,PNUL,YPfalse);
  T21 = fun_2;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_from),VARREF(YgooScolsSrangeYrange_from_setter),VARREF(YLnumG),T21);
  lit_12 = YPPsym((P)"range-in?");
  T22 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_inQ_3 = YPmet(FUNCODEREF(fun_range_inQ_3),LITREF(lit_12),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooScolsSrangeYrange_inQ);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooScolsSrangeYrange_inQ);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_range_inQ_3;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooScolsSrangeYrange_inQ,T23);
  lit_13 = YPPsym((P)"range-in?-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_inQ_setter_4 = YPmet(FUNCODEREF(fun_range_inQ_setter_4),LITREF(lit_13),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooScolsSrangeYrange_inQ_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooScolsSrangeYrange_inQ_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_range_inQ_setter_4;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooScolsSrangeYrange_inQ_setter,T28);
  T32 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_5 = YPmet(FUNCODEREF(fun_5),YPfalse,T32,ENVNUL,PNUL,YPfalse);
  T33 = fun_5;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_inQ),VARREF(YgooScolsSrangeYrange_inQ_setter),VARREF(YLfunG),T33);
  lit_14 = YPPsym((P)"range-lim");
  T34 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_lim_6 = YPmet(FUNCODEREF(fun_range_lim_6),LITREF(lit_14),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YgooScolsSrangeYrange_lim);
  if (T37 != YPfalse) {
    T36 = VARREF(YgooScolsSrangeYrange_lim);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_range_lim_6;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YgooScolsSrangeYrange_lim,T35);
  lit_15 = YPPsym((P)"range-lim-setter");
  T40 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T39 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,T40,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_lim_setter_7 = YPmet(FUNCODEREF(fun_range_lim_setter_7),LITREF(lit_15),T39,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooScolsSrangeYrange_lim_setter);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooScolsSrangeYrange_lim_setter);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_range_lim_setter_7;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooScolsSrangeYrange_lim_setter,T41);
  T45 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T45,ENVNUL,PNUL,YPfalse);
  T46 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLnumG));
  T47 = fun_8;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_lim),VARREF(YgooScolsSrangeYrange_lim_setter),T46,T47);
  lit_16 = YPPsym((P)"range-nxt");
  T48 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_nxt_9 = YPmet(FUNCODEREF(fun_range_nxt_9),LITREF(lit_16),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(YgooScolsSrangeYrange_nxt);
  if (T51 != YPfalse) {
    T50 = VARREF(YgooScolsSrangeYrange_nxt);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_range_nxt_9;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(YgooScolsSrangeYrange_nxt,T49);
  lit_17 = YPPsym((P)"range-nxt-setter");
  T53 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLfunG),VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_nxt_setter_10 = YPmet(FUNCODEREF(fun_range_nxt_setter_10),LITREF(lit_17),T53,ENVNUL,PNUL,YPfalse);
  T56 = BOUNDP(YgooScolsSrangeYrange_nxt_setter);
  if (T56 != YPfalse) {
    T55 = VARREF(YgooScolsSrangeYrange_nxt_setter);
  } else {
    T55 = YPfalse;
  }
  T57 = fun_range_nxt_setter_10;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T57);
  VARSET(YgooScolsSrangeYrange_nxt_setter,T54);
  T58 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T59 = fun_11;
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrangeG),VARREF(YgooScolsSrangeYrange_nxt),VARREF(YgooScolsSrangeYrange_nxt_setter),VARREF(YLfunG),T59);
  lit_18 = YPPsym((P)"fab");
  lit_19 = YPPsym((P)"c");
  lit_20 = YPPsym((P)"s");
  T61 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YgooScolsSrangeYLrangeG));
  T60 = YPsig(YPPlist(2,LITREF(lit_19),LITREF(lit_20)),YPPlist(2,T61,VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_fab_12 = YPmet(FUNCODEREF(fun_fab_12),LITREF(lit_18),T60,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooScolsScolYfab);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooScolsScolYfab);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_fab_12;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooScolsScolYfab,T62);
  lit_21 = YPPsym((P)"in?");
  T66 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_21),LITREF(lit_4)),YPPlist(3,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG)),YPfalse,YPint((P)3),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_13 = YPmet(FUNCODEREF(fun_range_13),LITREF(lit_1),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooScolsSrangeYrange);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooScolsSrangeYrange);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_range_13;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooScolsSrangeYrange,T67);
  T71 = YPsig(YPPlist(4,LITREF(lit_2),LITREF(lit_21),LITREF(lit_4),LITREF(lit_6)),YPPlist(4,VARREF(YLnumG),VARREF(YLfunG),VARREF(YLnumG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooScolsSrangeYLrangeG),Ynil);
  fun_range_by_14 = YPmet(FUNCODEREF(fun_range_by_14),LITREF(lit_5),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooScolsSrangeYrange_by);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooScolsSrangeYrange_by);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_range_by_14;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
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
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
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
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooScolsSseqYbelow,T82);
  lit_22 = YPPsym((P)"col-res-type");
  lit_23 = YPPsym((P)"x");
  T86 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_col_res_type_17 = YPmet(FUNCODEREF(fun_col_res_type_17),LITREF(lit_22),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooScolsScolYcol_res_type);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooScolsScolYcol_res_type);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_col_res_type_17;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooScolsScolYcol_res_type,T87);
  lit_24 = YPPsym((P)"<range-enum>");
  T92 = (P)YPpair(VARREF(YgooScolsScolYLenumG),Ynil);
  T91 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_24),T92);
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
  T94 = XCALL2(1,VARREF(YPdefine_method),T95,T97);
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
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooScolsSrangeYPdat_setter,T99);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPdat),VARREF(YgooScolsSrangeYPdat_setter),VARREF(YgooScolsSrangeYLrangeG),VARREF(YPprop_unbound_error));
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
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
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
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooScolsSrangeYPval_setter,T109);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPval),VARREF(YgooScolsSrangeYPval_setter),VARREF(YLnumG),VARREF(YPprop_unbound_error));
  lit_29 = YPPsym((P)"%key");
  T113 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_Pkey_22 = YPmet(FUNCODEREF(fun_Pkey_22),LITREF(lit_29),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooScolsSrangeYPkey);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooScolsSrangeYPkey);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_Pkey_22;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooScolsSrangeYPkey,T114);
  lit_30 = YPPsym((P)"%key-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_11),LITREF(lit_9)),YPPlist(2,VARREF(YLintG),VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Pkey_setter_23 = YPmet(FUNCODEREF(fun_Pkey_setter_23),LITREF(lit_30),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooScolsSrangeYPkey_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooScolsSrangeYPkey_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_Pkey_setter_23;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooScolsSrangeYPkey_setter,T119);
  XCALL5(1,VARREF(YPprop),VARREF(YgooScolsSrangeYLrange_enumG),VARREF(YgooScolsSrangeYPkey),VARREF(YgooScolsSrangeYPkey_setter),VARREF(YLintG),VARREF(YPprop_unbound_error));
  lit_31 = YPPsym((P)"enum");
  T123 = YPsig(YPPlist(1,LITREF(lit_23)),YPPlist(1,VARREF(YgooScolsSrangeYLrangeG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_enum_24 = YPmet(FUNCODEREF(fun_enum_24),LITREF(lit_31),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YgooScolsScolYenum);
  if (T126 != YPfalse) {
    T125 = VARREF(YgooScolsScolYenum);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_enum_24;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YgooScolsScolYenum,T124);
  lit_32 = YPPsym((P)"fin?");
  lit_33 = YPPsym((P)"e");
  T128 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_finQ_25 = YPmet(FUNCODEREF(fun_finQ_25),LITREF(lit_32),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(YgooScolsScolYfinQ);
  if (T131 != YPfalse) {
    T130 = VARREF(YgooScolsScolYfinQ);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_finQ_25;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(YgooScolsScolYfinQ,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YgooScolsSrangeYLrange_enumG),Ynil);
  fun_nxt_26 = YPmet(FUNCODEREF(fun_nxt_26),LITREF(lit_6),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(YgooScolsScolYnxt);
  if (T136 != YPfalse) {
    T135 = VARREF(YgooScolsScolYnxt);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_nxt_26;
  T134 = XCALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(YgooScolsScolYnxt,T134);
  lit_34 = YPPsym((P)"now");
  T138 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLnumG),Ynil);
  fun_now_27 = YPmet(FUNCODEREF(fun_now_27),LITREF(lit_34),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(YgooScolsScolYnow);
  if (T141 != YPfalse) {
    T140 = VARREF(YgooScolsScolYnow);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_now_27;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(YgooScolsScolYnow,T139);
  lit_35 = YPPsym((P)"now-key");
  T145 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YgooScolsSrangeYLrange_enumG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  T144 = fun_now_key_28 = YPmet(FUNCODEREF(fun_now_key_28),LITREF(lit_35),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(YgooScolsScolYnow_key);
  if (T149 != YPfalse) {
    T148 = VARREF(YgooScolsScolYnow_key);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_now_key_28;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T150);
  T146 = VARSET(YgooScolsScolYnow_key,T147);
  T143 = T146;
  return T143;
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
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"%time", &module_info_gooSboot, "%time"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sin", &module_info_gooSmath, "sin"},
  {">", &module_info_gooSmag, ">"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {">=", &module_info_gooSmag, ">="},
  {"last", &module_info_gooScolsSseq, "last"},
  {"/", &module_info_gooSmath, "/"},
  {"~=", &module_info_gooSmath, "~="},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"read", &module_info_gooSruntime, "read"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"@len", &module_info_gooSboot, "@len"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<", &module_info_gooSmag, "<"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"@<", &module_info_gooSboot, "@<"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"=", &module_info_gooSmath, "="},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%im", &module_info_gooSboot, "%im"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"when", &module_info_gooSmacros, "when"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"<=", &module_info_gooSmag, "<="},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"round", &module_info_gooSmath, "round"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"not", &module_info_gooSboot, "not"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"def", &module_info_gooSboot, "def"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"*", &module_info_gooSmath, "*"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"for", &module_info_gooSmacros, "for"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"log", &module_info_gooSmath, "log"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"dp", &module_info_gooSboot, "dp"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"nul", &module_info_gooSboot, "nul"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"df", &module_info_gooSboot, "df"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"t=", &module_info_gooStypes, "t="},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"dg", &module_info_gooSboot, "dg"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"while", &module_info_gooSmacros, "while"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"if", &module_info_gooSboot, "if"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"1-", &module_info_gooSmath, "1-"},
  {"t+", &module_info_gooStypes, "t+"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%put", &module_info_gooSboot, "%put"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"head", &module_info_gooSboot, "head"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"pow", &module_info_gooSmath, "pow"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"ct", &module_info_gooSboot, "ct"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"let", &module_info_gooSboot, "let"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"try", &module_info_gooSboot, "try"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"~==", &module_info_gooSmath, "~=="},
  {"renew", &module_info_gooSmacros, "renew"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"as", &module_info_gooStypes, "as"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"dss", &module_info_gooSboot, "dss"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"use", &module_info_gooSboot, "use"},
  {"%get", &module_info_gooSboot, "%get"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"&", &module_info_gooSmath, "&"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"cos", &module_info_gooSmath, "cos"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"op", &module_info_gooSmacros, "op"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%su", &module_info_gooSboot, "%su"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"round/", &module_info_gooSmath, "round/"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"loc", &module_info_gooSboot, "loc"},
  {"max", &module_info_gooSmag, "max"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"tup", &module_info_gooSboot, "tup"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"export", &module_info_gooSboot, "export"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"min", &module_info_gooSmag, "min"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"^", &module_info_gooSmath, "^"},
  {"@+", &module_info_gooSboot, "@+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"match", &module_info_gooSmacros, "match"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"case", &module_info_gooSmacros, "case"},
  {"do", &module_info_gooSmacros, "do"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"+", &module_info_gooSmath, "+"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"from", CVAR, &YgooScolsSrangeYfrom},
  {"%key", CVAR, &YgooScolsSrangeYPkey},
  {"range-in?", CVAR, &YgooScolsSrangeYrange_inQ},
  {"%key-setter", CVAR, &YgooScolsSrangeYPkey_setter},
  {"range-from", CVAR, &YgooScolsSrangeYrange_from},
  {"%val-setter", CVAR, &YgooScolsSrangeYPval_setter},
  {"range-by", CVAR, &YgooScolsSrangeYrange_by},
  {"range-nxt", CVAR, &YgooScolsSrangeYrange_nxt},
  {"range-lim-setter", CVAR, &YgooScolsSrangeYrange_lim_setter},
  {"---main-0---", PVAR, NULL},
  {"<range-enum>", CVAR, &YgooScolsSrangeYLrange_enumG},
  {"range-nxt-setter", CVAR, &YgooScolsSrangeYrange_nxt_setter},
  {"%dat-setter", CVAR, &YgooScolsSrangeYPdat_setter},
  {"<range>", CVAR, &YgooScolsSrangeYLrangeG},
  {"%val", CVAR, &YgooScolsSrangeYPval},
  {"%dat", CVAR, &YgooScolsSrangeYPdat},
  {"range", CVAR, &YgooScolsSrangeYrange},
  {"range-lim", CVAR, &YgooScolsSrangeYrange_lim},
  {"range-from-setter", CVAR, &YgooScolsSrangeYrange_from_setter},
  {"range-in?-setter", CVAR, &YgooScolsSrangeYrange_inQ_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"range-by", "range-by"},
  {"below", "below"},
  {"from", "from"},
  {"<range>", "<range>"},
  {"range", "range"},
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
