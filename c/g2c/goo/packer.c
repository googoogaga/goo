/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/packer */

EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooSpackerYpacker_reser_setter,"goo/packer","packer-reser-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Ylst,"goo/boot","lst");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
DEF(YgooSpackerYpacker_adder_setter,"goo/packer","packer-adder-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOlst,"goo/boot","@lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfind_getter,"goo/boot","find-getter");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLcolG,"goo/boot","<col>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_22);
DEFLIT(lit_1);
DEFLIT(lit_28);
DEFLIT(lit_33);
DEFLIT(lit_36);
DEFLIT(lit_21);
DEFLIT(lit_3);
DEFLIT(lit_23);
DEFLIT(lit_47);
DEFLIT(lit_7);
DEFLIT(lit_26);
DEFLIT(lit_10);
DEFLIT(lit_48);
DEFLIT(lit_45);
DEFLIT(lit_43);
DEFLIT(lit_32);
DEFLIT(lit_37);
DEFLIT(lit_9);
DEFLIT(lit_27);
DEFLIT(lit_35);
DEFLIT(lit_19);
DEFLIT(lit_0);
DEFLIT(lit_46);
DEFLIT(lit_12);
DEFLIT(lit_16);
DEFLIT(lit_29);
DEFLIT(lit_30);
DEFLIT(lit_6);
DEFLIT(lit_13);
DEFLIT(lit_39);
DEFLIT(lit_11);
DEFLIT(lit_15);
DEFLIT(lit_44);
DEFLIT(lit_42);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_8);
DEFLIT(lit_24);
DEFLIT(lit_20);
DEFLIT(lit_5);
DEFLIT(lit_40);
DEFLIT(lit_31);
DEFLIT(lit_41);
DEFLIT(lit_38);
DEFLIT(lit_14);
DEFLIT(lit_4);
DEFLIT(lit_17);
DEFLIT(lit_18);
DEFLIT(lit_2);

/* FUNCTIONS: */

LOCFOR(fun_packer_value_0);
LOCFOR(fun_packer_value_setter_1);
LOCFOR(fun_packer_adder_2);
LOCFOR(fun_packer_adder_setter_3);
LOCFOR(fun_packer_reser_4);
LOCFOR(fun_packer_reser_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_packer_8);
LOCFOR(fun_packer_add_9);
LOCFOR(fun_packer_res_10);
LOCFOR(fun_11);
LOCFOR(fun_packer_fab_12);
LOCFOR(fun_13);
LOCFOR(fun_packer_fab_14);
LOCFOR(fun_x_1315_15);
LOCFOR(fun_x_1321_16);
LOCFOR(fun_17);
LOCFOR(fun_x_1318_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1334_22);
LOCFOR(fun_x_1343_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1340_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1337_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1347_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1351_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1355_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1359_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
extern P YgooSpackerY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_packer_value_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_value_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_adder_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_adder));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_reser_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSpackerYpacker_reser));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_7) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = fun_6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_8) {
  P init_,add_,res_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(init_, 0);
  ARG(add_, 1);
  ARG(res_, 2);
loop:
  T0 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),init_,VARREF(YgooSpackerYpacker_adder),add_,VARREF(YgooSpackerYpacker_reser),res_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_add_9) {
  P a_,x_;
  P x_1305F1071;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
loop:
  x_1305F1071 = a_;
  T3 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T1 = CALL2(1,T3,x_,T2);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T1,x_1305F1071);
  T0 = x_1305F1071;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_packer_res_10) {
  P a_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(a_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_reser),a_);
  T1 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T0 = CALL1(1,T2,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_packer_fab_12) {
  P t_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = FUNFAB(fun_11,1,t_);
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),Ynil,VARREF(YgooSmacrosYpair),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_13) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_packer_fab_14) {
  P t_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(t_, 0);
loop:
  T1 = fun_13;
  T0 = CALL3(1,VARREF(YgooSpackerYpacker),YPint((P)0),VARREF(YgooSmathYA),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1315_15) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1321_16) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_29));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P return_;
  P x_1320F1081;
  P x_1320F1080;
  P x_1320F1079;
  P x_1320F1078;
  P x_1320F1077;
  P restF1076;
  P packF1075;
  P varF1074;
  P x_1320F1073;
  P x_1321F1072;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1321_16,1);
  x_1321F1072 = T1;
  FUNINIT(x_1321F1072, 1,return_);
  x_1320F1073 = FREEREF(0);
  varF1074 = YPfalse;
  varF1074 = BOXFAB(varF1074);
  packF1075 = YPfalse;
  packF1075 = BOXFAB(packF1075);
  restF1076 = YPfalse;
  restF1076 = BOXFAB(restF1076);
  T9 = CALL2(1,VARREF(YisaQ),x_1320F1073,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1320F1073,x_1321F1072);
    x_1320F1077 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1320F1077,x_1321F1072);
    BOXVAL(varF1074) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1320F1077);
    x_1320F1078 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1320F1078,x_1321F1072);
    BOXVAL(packF1075) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1320F1078);
    x_1320F1079 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1320F1079,x_1321F1072);
    T15 = T18;
    T12 = T15;
    T19 = CALL1(1,VARREF(Ytail),x_1320F1073);
    x_1320F1080 = T19;
    BOXVAL(restF1076) = x_1320F1080;
    x_1320F1081 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1320F1081,x_1321F1072);
    T20 = T21;
    T10 = T20;
  } else {
    T22 = CALL2(1,x_1321F1072,LITREF(lit_26),x_1320F1073);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T30 = BOXVAL(varF1074);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T32 = BOXVAL(packF1075);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T38 = BOXVAL(restF1076);
  T37 = CALL2(1,VARREF(YgooSmacrosYcat),T38,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T39 = BOXVAL(FREEREF(1));
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T39,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T33,Ynil);
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1318_18) {
  P msg_,args_;
  P x_1319F1082;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1319F1082 = FREEREF(0);
  T3 = FUNFAB(fun_17,2,x_1319F1082,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1317F1084;
  P x_1318F1083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1318_18,3);
  x_1318F1083 = T1;
  FUNINIT(x_1318F1083, 3,FREEREF(0),FREEREF(1),return_);
  x_1317F1084 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1317F1084,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1317F1084,x_1318F1083);
  } else {
    T5 = CALL2(1,x_1318F1083,LITREF(lit_26),x_1317F1084);
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T8 = BOXVAL(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P return_;
  P x_1316F1094;
  P x_1314F1093;
  P x_1314F1092;
  P x_1314F1091;
  P x_1314F1090;
  P x_1314F1089;
  P bodyF1088;
  P declsF1087;
  P x_1314F1086;
  P x_1315F1085;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1315_15,1);
  x_1315F1085 = T1;
  FUNINIT(x_1315F1085, 1,return_);
  x_1314F1086 = FREEREF(0);
  declsF1087 = YPfalse;
  declsF1087 = BOXFAB(declsF1087);
  bodyF1088 = YPfalse;
  bodyF1088 = BOXFAB(bodyF1088);
  T7 = CALL2(1,VARREF(YisaQ),x_1314F1086,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1314F1086,LITREF(lit_25),x_1315F1085);
    x_1314F1089 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1314F1089,x_1315F1085);
    x_1314F1090 = T11;
    BOXVAL(declsF1087) = x_1314F1090;
    x_1314F1091 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1314F1091,x_1315F1085);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1314F1089);
    x_1314F1092 = T14;
    BOXVAL(bodyF1088) = x_1314F1092;
    x_1314F1093 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1314F1093,x_1315F1085);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1315F1085,LITREF(lit_26),x_1314F1086);
  }
  T19 = BOXVAL(declsF1087);
  x_1316F1094 = T19;
  T21 = FUNFAB(fun_19,2,x_1316F1094,bodyF1088);
  T20 = with_exit(T21);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1334_22) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1343_23) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(Yerror),LITREF(lit_29));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P return_;
  P x_1342F1100;
  P x_1342F1099;
  P restF1098;
  P nameF1097;
  P x_1342F1096;
  P x_1343F1095;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1343_23,1);
  x_1343F1095 = T1;
  FUNINIT(x_1343F1095, 1,return_);
  x_1342F1096 = FREEREF(0);
  nameF1097 = YPfalse;
  nameF1097 = BOXFAB(nameF1097);
  restF1098 = YPfalse;
  restF1098 = BOXFAB(restF1098);
  T7 = CALL2(1,VARREF(YisaQ),x_1342F1096,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1342F1096,x_1343F1095);
    BOXVAL(nameF1097) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1342F1096);
    x_1342F1099 = T10;
    BOXVAL(restF1098) = x_1342F1099;
    x_1342F1100 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1342F1100,x_1343F1095);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1343F1095,LITREF(lit_26),x_1342F1096);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T21 = BOXVAL(nameF1097);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T22,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T23 = BOXVAL(restF1098);
  T17 = CALL3(1,VARREF(YgooSmacrosYcat),T18,T23,Ynil);
  T16 = CALL1(1,VARREF(Ylst),T17);
  T24 = BOXVAL(FREEREF(1));
  T14 = CALL4(1,VARREF(YgooSmacrosYcat),T15,T16,T24,Ynil);
  T5 = T14;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1340_25) {
  P msg_,args_;
  P x_1341F1101;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1341F1101 = FREEREF(0);
  T3 = FUNFAB(fun_24,2,x_1341F1101,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_1339F1111;
  P x_1339F1110;
  P x_1339F1109;
  P x_1339F1108;
  P x_1339F1107;
  P restF1106;
  P typeF1105;
  P nameF1104;
  P x_1339F1103;
  P x_1340F1102;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1340_25,3);
  x_1340F1102 = T1;
  FUNINIT(x_1340F1102, 3,FREEREF(0),FREEREF(1),return_);
  x_1339F1103 = FREEREF(0);
  nameF1104 = YPfalse;
  nameF1104 = BOXFAB(nameF1104);
  typeF1105 = YPfalse;
  typeF1105 = BOXFAB(typeF1105);
  restF1106 = YPfalse;
  restF1106 = BOXFAB(restF1106);
  T9 = CALL2(1,VARREF(YisaQ),x_1339F1103,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1339F1103,x_1340F1102);
    x_1339F1107 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1339F1107,x_1340F1102);
    BOXVAL(nameF1104) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1339F1107);
    x_1339F1108 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1339F1108,x_1340F1102);
    BOXVAL(typeF1105) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1339F1108);
    x_1339F1109 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1339F1109,x_1340F1102);
    T15 = T18;
    T12 = T15;
    T19 = CALL1(1,VARREF(Ytail),x_1339F1103);
    x_1339F1110 = T19;
    BOXVAL(restF1106) = x_1339F1110;
    x_1339F1111 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1339F1111,x_1340F1102);
    T20 = T21;
    T10 = T20;
  } else {
    T22 = CALL2(1,x_1340F1102,LITREF(lit_26),x_1339F1103);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T30 = BOXVAL(nameF1104);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T35 = BOXVAL(typeF1105);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T41 = BOXVAL(restF1106);
  T40 = CALL2(1,VARREF(YgooSmacrosYcat),T41,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T42 = BOXVAL(FREEREF(1));
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T42,Ynil);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T36,Ynil);
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1337_27) {
  P msg_,args_;
  P x_1338F1112;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1338F1112 = FREEREF(0);
  T3 = FUNFAB(fun_26,2,x_1338F1112,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1336F1114;
  P x_1337F1113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1337_27,3);
  x_1337F1113 = T1;
  FUNINIT(x_1337F1113, 3,FREEREF(0),FREEREF(1),return_);
  x_1336F1114 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1336F1114,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1336F1114,x_1337F1113);
  } else {
    T5 = CALL2(1,x_1337F1113,LITREF(lit_26),x_1336F1114);
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T8 = BOXVAL(FREEREF(1));
  T6 = CALL3(1,VARREF(YgooSmacrosYcat),T7,T8,Ynil);
  T2 = T6;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P return_;
  P x_1335F1124;
  P x_1333F1123;
  P x_1333F1122;
  P x_1333F1121;
  P x_1333F1120;
  P x_1333F1119;
  P bodyF1118;
  P varsF1117;
  P x_1333F1116;
  P x_1334F1115;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1334_22,1);
  x_1334F1115 = T1;
  FUNINIT(x_1334F1115, 1,return_);
  x_1333F1116 = FREEREF(0);
  varsF1117 = YPfalse;
  varsF1117 = BOXFAB(varsF1117);
  bodyF1118 = YPfalse;
  bodyF1118 = BOXFAB(bodyF1118);
  T7 = CALL2(1,VARREF(YisaQ),x_1333F1116,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1333F1116,LITREF(lit_33),x_1334F1115);
    x_1333F1119 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1333F1119,x_1334F1115);
    x_1333F1120 = T11;
    BOXVAL(varsF1117) = x_1333F1120;
    x_1333F1121 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F1121,x_1334F1115);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1333F1119);
    x_1333F1122 = T14;
    BOXVAL(bodyF1118) = x_1333F1122;
    x_1333F1123 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1333F1123,x_1334F1115);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1334F1115,LITREF(lit_26),x_1333F1116);
  }
  T19 = BOXVAL(varsF1117);
  x_1335F1124 = T19;
  T21 = FUNFAB(fun_28,2,x_1335F1124,bodyF1118);
  T20 = with_exit(T21);
  T18 = T20;
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_29,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1347_31) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P return_;
  P x_1346F1129;
  P x_1346F1128;
  P bodyF1127;
  P x_1346F1126;
  P x_1347F1125;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1347_31,1);
  x_1347F1125 = T1;
  FUNINIT(x_1347F1125, 1,return_);
  x_1346F1126 = FREEREF(0);
  bodyF1127 = YPfalse;
  bodyF1127 = BOXFAB(bodyF1127);
  T5 = CALL2(1,VARREF(YisaQ),x_1346F1126,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1346F1126,LITREF(lit_39),x_1347F1125);
    x_1346F1128 = T7;
    BOXVAL(bodyF1127) = x_1346F1128;
    x_1346F1129 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1346F1129,x_1347F1125);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1347F1125,LITREF(lit_26),x_1346F1126);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T22 = BOXVAL(bodyF1127);
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_41));
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T24 = CALL3(1,VARREF(YgooSmacrosYcat),T25,T26,Ynil);
  T23 = CALL1(1,VARREF(Ylst),T24);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T23,Ynil);
  T19 = CALL1(1,VARREF(Ylst),T20);
  T11 = CALL4(1,VARREF(YgooSmacrosYcat),T12,T13,T19,Ynil);
  T3 = T11;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_32,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1351_34) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P return_;
  P x_1350F1136;
  P x_1350F1135;
  P x_1350F1134;
  P valueF1133;
  P packF1132;
  P x_1350F1131;
  P x_1351F1130;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1351_34,1);
  x_1351F1130 = T1;
  FUNINIT(x_1351F1130, 1,return_);
  x_1350F1131 = FREEREF(0);
  packF1132 = YPfalse;
  packF1132 = BOXFAB(packF1132);
  valueF1133 = YPfalse;
  valueF1133 = BOXFAB(valueF1133);
  T7 = CALL2(1,VARREF(YisaQ),x_1350F1131,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1350F1131,LITREF(lit_43),x_1351F1130);
    x_1350F1134 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1350F1134,x_1351F1130);
    BOXVAL(packF1132) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1350F1134);
    x_1350F1135 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1350F1135,x_1351F1130);
    BOXVAL(valueF1133) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1350F1135);
    x_1350F1136 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1350F1136,x_1351F1130);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1351F1130,LITREF(lit_26),x_1350F1131);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T21 = BOXVAL(packF1132);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T27 = BOXVAL(valueF1133);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T26,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_35,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1355_37) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P x_1354F1141;
  P x_1354F1140;
  P valueF1139;
  P x_1354F1138;
  P x_1355F1137;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1355_37,1);
  x_1355F1137 = T1;
  FUNINIT(x_1355F1137, 1,return_);
  x_1354F1138 = FREEREF(0);
  valueF1139 = YPfalse;
  valueF1139 = BOXFAB(valueF1139);
  T5 = CALL2(1,VARREF(YisaQ),x_1354F1138,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1354F1138,LITREF(lit_47),x_1355F1137);
    x_1354F1140 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1354F1140,x_1355F1137);
    BOXVAL(valueF1139) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1354F1140);
    x_1354F1141 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1354F1141,x_1355F1137);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1355F1137,LITREF(lit_26),x_1354F1138);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T17 = BOXVAL(valueF1139);
  T16 = CALL1(1,VARREF(Ylst),T17);
  T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T16,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_38,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1359_40) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P return_;
  P x_1358F1146;
  P x_1358F1145;
  P nameF1144;
  P x_1358F1143;
  P x_1359F1142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1359_40,1);
  x_1359F1142 = T1;
  FUNINIT(x_1359F1142, 1,return_);
  x_1358F1143 = FREEREF(0);
  nameF1144 = YPfalse;
  nameF1144 = BOXFAB(nameF1144);
  T5 = CALL2(1,VARREF(YisaQ),x_1358F1143,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1358F1143,LITREF(lit_41),x_1359F1142);
    x_1358F1145 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1358F1145,x_1359F1142);
    BOXVAL(nameF1144) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1358F1145);
    x_1358F1146 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1358F1146,x_1359F1142);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1359F1142,LITREF(lit_26),x_1358F1143);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T16 = BOXVAL(nameF1144);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T13 = CALL3(1,VARREF(YgooSmacrosYcat),T14,T15,Ynil);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_41,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

P YgooSpackerY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"<packer>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSpackerYLpackerG,T0);
  lit_1 = YPPsym((P)"packer");
  lit_2 = YPPsym((P)"init");
  lit_3 = YPPsym((P)"add");
  lit_4 = YPPsym((P)"res");
  T3 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_3),LITREF(lit_4)),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLpackerG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker,T2);
  lit_5 = YPPsym((P)"packer-fab");
  lit_6 = YPPsym((P)"t");
  T5 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,VARREF(YLtypeG)),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  T4 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_5),T5,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_fab,T4);
  lit_7 = YPPsym((P)"packer-add");
  lit_8 = YPPsym((P)"a");
  lit_9 = YPPsym((P)"x");
  T7 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YgooSpackerYLpackerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLpackerG),Ynil);
  T6 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_7),T7,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_add,T6);
  lit_10 = YPPsym((P)"packer-res");
  T9 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSpackerYLpackerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T8 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_10),T9,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSpackerYpacker_res,T8);
  lit_11 = YPPsym((P)"<sim-packer>");
  T11 = (P)YPpair(VARREF(YgooSpackerYLpackerG),Ynil);
  T10 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_11),T11);
  VARSET(YgooSpackerYLsim_packerG,T10);
  lit_12 = YPPsym((P)"packer-value");
  lit_13 = YPPsym((P)"_x");
  T12 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_value_0 = YPmet(FUNCODEREF(fun_packer_value_0),LITREF(lit_12),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YgooSpackerYpacker_value);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSpackerYpacker_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_packer_value_0;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSpackerYpacker_value,T13);
  lit_14 = YPPsym((P)"packer-value-setter");
  lit_15 = YPPsym((P)"_z");
  T17 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_13)),YPPlist(2,VARREF(YLanyG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_value_setter_1 = YPmet(FUNCODEREF(fun_packer_value_setter_1),LITREF(lit_14),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSpackerYpacker_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSpackerYpacker_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_packer_value_setter_1;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSpackerYpacker_value_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_value),VARREF(YgooSpackerYpacker_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_16 = YPPsym((P)"packer-adder");
  T22 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_adder_2 = YPmet(FUNCODEREF(fun_packer_adder_2),LITREF(lit_16),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YgooSpackerYpacker_adder);
  if (T25 != YPfalse) {
    T24 = VARREF(YgooSpackerYpacker_adder);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_packer_adder_2;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YgooSpackerYpacker_adder,T23);
  lit_17 = YPPsym((P)"packer-adder-setter");
  T27 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_adder_setter_3 = YPmet(FUNCODEREF(fun_packer_adder_setter_3),LITREF(lit_17),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YgooSpackerYpacker_adder_setter);
  if (T30 != YPfalse) {
    T29 = VARREF(YgooSpackerYpacker_adder_setter);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_packer_adder_setter_3;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YgooSpackerYpacker_adder_setter,T28);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_adder),VARREF(YgooSpackerYpacker_adder_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_18 = YPPsym((P)"packer-reser");
  T32 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_reser_4 = YPmet(FUNCODEREF(fun_packer_reser_4),LITREF(lit_18),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(YgooSpackerYpacker_reser);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSpackerYpacker_reser);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_packer_reser_4;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSpackerYpacker_reser,T33);
  lit_19 = YPPsym((P)"packer-reser-setter");
  T37 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_13)),YPPlist(2,VARREF(YLfunG),VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_packer_reser_setter_5 = YPmet(FUNCODEREF(fun_packer_reser_setter_5),LITREF(lit_19),T37,ENVNUL,PNUL,YPfalse);
  T40 = BOUNDP(YgooSpackerYpacker_reser_setter);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSpackerYpacker_reser_setter);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_packer_reser_setter_5;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSpackerYpacker_reser_setter,T38);
  T43 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T44 = fun_7;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSpackerYLsim_packerG),VARREF(YgooSpackerYpacker_reser),VARREF(YgooSpackerYpacker_reser_setter),VARREF(YLfunG),T44);
  T45 = YPsig(YPPlist(3,LITREF(lit_2),LITREF(lit_3),LITREF(lit_4)),YPPlist(3,VARREF(YLanyG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_8 = YPmet(FUNCODEREF(fun_packer_8),LITREF(lit_1),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooSpackerYpacker);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooSpackerYpacker);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_packer_8;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooSpackerYpacker,T46);
  T50 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YgooSpackerYLsim_packerG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooSpackerYLsim_packerG),Ynil);
  fun_packer_add_9 = YPmet(FUNCODEREF(fun_packer_add_9),LITREF(lit_7),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooSpackerYpacker_add);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSpackerYpacker_add);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_packer_add_9;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSpackerYpacker_add,T51);
  T55 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSpackerYLsim_packerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_packer_res_10 = YPmet(FUNCODEREF(fun_packer_res_10),LITREF(lit_10),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YgooSpackerYpacker_res);
  if (T58 != YPfalse) {
    T57 = VARREF(YgooSpackerYpacker_res);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_packer_res_10;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YgooSpackerYpacker_res,T56);
  T62 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLseqG));
  T60 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,T61),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_12 = YPmet(FUNCODEREF(fun_packer_fab_12),LITREF(lit_5),T60,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YgooSpackerYpacker_fab);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSpackerYpacker_fab);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_packer_fab_12;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSpackerYpacker_fab,T63);
  T69 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T69,ENVNUL,PNUL,YPfalse);
  T68 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(YLintG));
  T67 = YPsig(YPPlist(1,LITREF(lit_6)),YPPlist(1,T68),YPfalse,YPint((P)1),VARREF(YgooSpackerYLpackerG),Ynil);
  fun_packer_fab_14 = YPmet(FUNCODEREF(fun_packer_fab_14),LITREF(lit_5),T67,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSpackerYpacker_fab);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSpackerYpacker_fab);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_packer_fab_14;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSpackerYpacker_fab,T70);
  lit_20 = YPPsym((P)"exp");
  lit_21 = YPPsym((P)"return");
  lit_22 = YPPsym((P)"x-1315");
  lit_23 = YPPsym((P)"msg");
  lit_24 = YPPsym((P)"args");
  lit_25 = YPPsym((P)"packing-with");
  lit_26 = YPsb((P)"Match Pattern Failure");
  lit_27 = YPPsym((P)"x-1318");
  lit_28 = YPPsym((P)"x-1321");
  lit_29 = YPsb((P)"Failed to match.");
  lit_30 = YPPsym((P)"let");
  lit_31 = YPPsym((P)"seq");
  T80 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1315_15 = YPmet(FUNCODEREF(fun_x_1315_15),LITREF(lit_22),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1321_16 = YPmet(FUNCODEREF(fun_x_1321_16),LITREF(lit_28),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1318_18 = YPmet(FUNCODEREF(fun_x_1318_18),LITREF(lit_27),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T81 = fun_21;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T81);
  lit_32 = YPPsym((P)"x-1334");
  lit_33 = YPPsym((P)"packing-in");
  lit_34 = YPPsym((P)"x-1337");
  lit_35 = YPPsym((P)"x-1340");
  lit_36 = YPPsym((P)"x-1343");
  lit_37 = YPPsym((P)"<lst>");
  T90 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1334_22 = YPmet(FUNCODEREF(fun_x_1334_22),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1343_23 = YPmet(FUNCODEREF(fun_x_1343_23),LITREF(lit_36),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1340_25 = YPmet(FUNCODEREF(fun_x_1340_25),LITREF(lit_35),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1337_27 = YPmet(FUNCODEREF(fun_x_1337_27),LITREF(lit_34),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T91 = fun_30;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T91);
  lit_38 = YPPsym((P)"x-1347");
  lit_39 = YPPsym((P)"packing");
  lit_40 = YPPsym((P)"packer-");
  lit_41 = YPPsym((P)"packed");
  T94 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1347_31 = YPmet(FUNCODEREF(fun_x_1347_31),LITREF(lit_38),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T95 = fun_33;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T95);
  lit_42 = YPPsym((P)"x-1351");
  lit_43 = YPPsym((P)"pack-in");
  lit_44 = YPPsym((P)"opf");
  lit_45 = YPPsym((P)"_");
  T98 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1351_34 = YPmet(FUNCODEREF(fun_x_1351_34),LITREF(lit_42),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T99 = fun_36;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T99);
  lit_46 = YPPsym((P)"x-1355");
  lit_47 = YPPsym((P)"pack");
  T102 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1355_37 = YPmet(FUNCODEREF(fun_x_1355_37),LITREF(lit_46),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T103 = fun_39;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T103);
  lit_48 = YPPsym((P)"x-1359");
  T110 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_x_1359_40 = YPmet(FUNCODEREF(fun_x_1359_40),LITREF(lit_48),T110,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T107 = fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T105 = fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T112 = fun_42;
  T111 = YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packed"),T112);
  T104 = T111;
  return T104;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSseq},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"|", &module_info_gooSmath, "|"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"use", &module_info_gooSboot, "use"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<=", &module_info_gooSmag, "<="},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"into", &module_info_gooScolsScol, "into"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer-reser-setter", CVAR, &YgooSpackerYpacker_reser_setter},
  {"packer", CVAR, &YgooSpackerYpacker},
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"pack", PVAR, NULL},
  {"packing-in", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"pack-in", PVAR, NULL},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"packed", PVAR, NULL},
  {"packer-adder-setter", CVAR, &YgooSpackerYpacker_adder_setter},
  {"packing", PVAR, NULL},
  {"packing-with", PVAR, NULL},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"packer-add", "packer-add"},
  {"packer-fab", "packer-fab"},
  {"packer", "packer"},
  {"pack", "pack"},
  {"packing-in", "packing-in"},
  {"pack-in", "pack-in"},
  {"<packer>", "<packer>"},
  {"packed", "packed"},
  {"packing", "packing"},
  {"packing-with", "packing-with"},
  {"packer-res", "packer-res"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSpacker;
MODULE_INFO module_info_gooSpacker = {
  "goo/packer",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSseq (void);

/* EXPRESSION: */

extern void load_module_gooSpacker (void);

void load_module_gooSpacker (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScolsScol();
  load_module_gooScolsSseq();

  (P)YgooSpackerY___main_0___();

}

/* END OF GENERATED CODE. */
