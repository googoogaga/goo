/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/packer */

EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSpackerYpacker_reser,"goo/packer","packer-reser");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooSpackerYpacker_value_setter,"goo/packer","packer-value-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ynew,"goo/boot","new");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLstrG,"goo/boot","<str>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YisaQ,"goo/boot","isa?");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSpackerYpacker_value,"goo/packer","packer-value");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSpackerYpacker_adder_setter,"goo/packer","packer-adder-setter");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YtT,"goo/boot","t*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YLprim_intG,"goo/boot","<prim-int>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YLintG,"goo/boot","<int>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSpackerYpacker_adder,"goo/packer","packer-adder");
DEF(YgooSpackerYLsim_packerG,"goo/packer","<sim-packer>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLunionG,"goo/boot","<union>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YLanyG,"goo/boot","<any>");
EXT(Ylst,"goo/boot","lst");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
DEF(YgooSpackerYpacker_reser_setter,"goo/packer","packer-reser-setter");
DEF(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
DEF(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_27);
DEFLIT(lit_14);
DEFLIT(lit_35);
DEFLIT(lit_17);
DEFLIT(lit_6);
DEFLIT(lit_20);
DEFLIT(lit_18);
DEFLIT(lit_3);
DEFLIT(lit_37);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_40);
DEFLIT(lit_25);
DEFLIT(lit_34);
DEFLIT(lit_44);
DEFLIT(lit_12);
DEFLIT(lit_8);
DEFLIT(lit_15);
DEFLIT(lit_5);
DEFLIT(lit_31);
DEFLIT(lit_23);
DEFLIT(lit_4);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_19);
DEFLIT(lit_11);
DEFLIT(lit_47);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_22);
DEFLIT(lit_21);
DEFLIT(lit_1);
DEFLIT(lit_48);
DEFLIT(lit_28);
DEFLIT(lit_36);
DEFLIT(lit_39);
DEFLIT(lit_9);
DEFLIT(lit_42);
DEFLIT(lit_7);
DEFLIT(lit_46);
DEFLIT(lit_30);
DEFLIT(lit_38);
DEFLIT(lit_10);
DEFLIT(lit_41);
DEFLIT(lit_45);
DEFLIT(lit_43);
DEFLIT(lit_26);
DEFLIT(lit_32);
DEFLIT(lit_33);

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
LOCFOR(fun_x_1320_15);
LOCFOR(fun_x_1326_16);
LOCFOR(fun_17);
LOCFOR(fun_x_1323_18);
LOCFOR(fun_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_x_1339_22);
LOCFOR(fun_x_1348_23);
LOCFOR(fun_24);
LOCFOR(fun_x_1345_25);
LOCFOR(fun_26);
LOCFOR(fun_x_1342_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_x_1352_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_x_1356_34);
LOCFOR(fun_35);
LOCFOR(fun_36);
LOCFOR(fun_x_1360_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_x_1364_40);
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
  P x_1310F1085;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(a_, 0);
  ARG(x_, 1);
loop:
  x_1310F1085 = a_;
  T3 = CALL1(1,VARREF(YgooSpackerYpacker_adder),a_);
  T2 = CALL1(1,VARREF(YgooSpackerYpacker_value),a_);
  T1 = CALL2(1,T3,x_,T2);
  CALL2(1,VARREF(YgooSpackerYpacker_value_setter),T1,x_1310F1085);
  T0 = x_1310F1085;
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

FUNCODEDEF(fun_x_1320_15) {
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

FUNCODEDEF(fun_x_1326_16) {
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
  P x_1325F1095;
  P x_1325F1094;
  P x_1325F1093;
  P x_1325F1092;
  P x_1325F1091;
  P restF1090;
  P packF1089;
  P varF1088;
  P x_1325F1087;
  P x_1326F1086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1326_16,1);
  x_1326F1086 = T1;
  FUNINIT(x_1326F1086, 1,return_);
  x_1325F1087 = FREEREF(0);
  varF1088 = YPfalse;
  varF1088 = BOXFAB(varF1088);
  packF1089 = YPfalse;
  packF1089 = BOXFAB(packF1089);
  restF1090 = YPfalse;
  restF1090 = BOXFAB(restF1090);
  T9 = CALL2(1,VARREF(YisaQ),x_1325F1087,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1325F1087,x_1326F1086);
    x_1325F1091 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1325F1091,x_1326F1086);
    BOXVAL(varF1088) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1325F1091);
    x_1325F1092 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1325F1092,x_1326F1086);
    BOXVAL(packF1089) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1325F1092);
    x_1325F1093 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1325F1093,x_1326F1086);
    T15 = T18;
    T12 = T15;
    T19 = CALL1(1,VARREF(Ytail),x_1325F1087);
    x_1325F1094 = T19;
    BOXVAL(restF1090) = x_1325F1094;
    x_1325F1095 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1325F1095,x_1326F1086);
    T20 = T21;
    T10 = T20;
  } else {
    T22 = CALL2(1,x_1326F1086,LITREF(lit_26),x_1325F1087);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_30));
  T30 = BOXVAL(varF1088);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T32 = BOXVAL(packF1089);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T38 = BOXVAL(restF1090);
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

FUNCODEDEF(fun_x_1323_18) {
  P msg_,args_;
  P x_1324F1096;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1324F1096 = FREEREF(0);
  T3 = FUNFAB(fun_17,2,x_1324F1096,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_19) {
  P return_;
  P x_1322F1098;
  P x_1323F1097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1323_18,3);
  x_1323F1097 = T1;
  FUNINIT(x_1323F1097, 3,FREEREF(0),FREEREF(1),return_);
  x_1322F1098 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1322F1098,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1322F1098,x_1323F1097);
  } else {
    T5 = CALL2(1,x_1323F1097,LITREF(lit_26),x_1322F1098);
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
  P x_1321F1108;
  P x_1319F1107;
  P x_1319F1106;
  P x_1319F1105;
  P x_1319F1104;
  P x_1319F1103;
  P bodyF1102;
  P declsF1101;
  P x_1319F1100;
  P x_1320F1099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1320_15,1);
  x_1320F1099 = T1;
  FUNINIT(x_1320F1099, 1,return_);
  x_1319F1100 = FREEREF(0);
  declsF1101 = YPfalse;
  declsF1101 = BOXFAB(declsF1101);
  bodyF1102 = YPfalse;
  bodyF1102 = BOXFAB(bodyF1102);
  T7 = CALL2(1,VARREF(YisaQ),x_1319F1100,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1319F1100,LITREF(lit_25),x_1320F1099);
    x_1319F1103 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1319F1103,x_1320F1099);
    x_1319F1104 = T11;
    BOXVAL(declsF1101) = x_1319F1104;
    x_1319F1105 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1319F1105,x_1320F1099);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1319F1103);
    x_1319F1106 = T14;
    BOXVAL(bodyF1102) = x_1319F1106;
    x_1319F1107 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1319F1107,x_1320F1099);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1320F1099,LITREF(lit_26),x_1319F1100);
  }
  T19 = BOXVAL(declsF1101);
  x_1321F1108 = T19;
  T21 = FUNFAB(fun_19,2,x_1321F1108,bodyF1102);
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

FUNCODEDEF(fun_x_1339_22) {
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

FUNCODEDEF(fun_x_1348_23) {
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
  P x_1347F1114;
  P x_1347F1113;
  P restF1112;
  P nameF1111;
  P x_1347F1110;
  P x_1348F1109;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1348_23,1);
  x_1348F1109 = T1;
  FUNINIT(x_1348F1109, 1,return_);
  x_1347F1110 = FREEREF(0);
  nameF1111 = YPfalse;
  nameF1111 = BOXFAB(nameF1111);
  restF1112 = YPfalse;
  restF1112 = BOXFAB(restF1112);
  T7 = CALL2(1,VARREF(YisaQ),x_1347F1110,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1347F1110,x_1348F1109);
    BOXVAL(nameF1111) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1347F1110);
    x_1347F1113 = T10;
    BOXVAL(restF1112) = x_1347F1113;
    x_1347F1114 = Ynil;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1347F1114,x_1348F1109);
    T11 = T12;
    T8 = T11;
  } else {
    T13 = CALL2(1,x_1348F1109,LITREF(lit_26),x_1347F1110);
  }
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T21 = BOXVAL(nameF1111);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T22 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T19 = CALL3(1,VARREF(YgooSmacrosYcat),T20,T22,Ynil);
  T18 = CALL1(1,VARREF(Ylst),T19);
  T23 = BOXVAL(restF1112);
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

FUNCODEDEF(fun_x_1345_25) {
  P msg_,args_;
  P x_1346F1115;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1346F1115 = FREEREF(0);
  T3 = FUNFAB(fun_24,2,x_1346F1115,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_1344F1125;
  P x_1344F1124;
  P x_1344F1123;
  P x_1344F1122;
  P x_1344F1121;
  P restF1120;
  P typeF1119;
  P nameF1118;
  P x_1344F1117;
  P x_1345F1116;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1345_25,3);
  x_1345F1116 = T1;
  FUNINIT(x_1345F1116, 3,FREEREF(0),FREEREF(1),return_);
  x_1344F1117 = FREEREF(0);
  nameF1118 = YPfalse;
  nameF1118 = BOXFAB(nameF1118);
  typeF1119 = YPfalse;
  typeF1119 = BOXFAB(typeF1119);
  restF1120 = YPfalse;
  restF1120 = BOXFAB(restF1120);
  T9 = CALL2(1,VARREF(YisaQ),x_1344F1117,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1344F1117,x_1345F1116);
    x_1344F1121 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1344F1121,x_1345F1116);
    BOXVAL(nameF1118) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1344F1121);
    x_1344F1122 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1344F1122,x_1345F1116);
    BOXVAL(typeF1119) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1344F1122);
    x_1344F1123 = T17;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1344F1123,x_1345F1116);
    T15 = T18;
    T12 = T15;
    T19 = CALL1(1,VARREF(Ytail),x_1344F1117);
    x_1344F1124 = T19;
    BOXVAL(restF1120) = x_1344F1124;
    x_1344F1125 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1344F1125,x_1345F1116);
    T20 = T21;
    T10 = T20;
  } else {
    T22 = CALL2(1,x_1345F1116,LITREF(lit_26),x_1344F1117);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_25));
  T30 = BOXVAL(nameF1118);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_5));
  T35 = BOXVAL(typeF1119);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T32 = CALL3(1,VARREF(YgooSmacrosYcat),T33,T34,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T28 = CALL3(1,VARREF(YgooSmacrosYcat),T29,T31,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,Ynil);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T41 = BOXVAL(restF1120);
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

FUNCODEDEF(fun_x_1342_27) {
  P msg_,args_;
  P x_1343F1126;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1343F1126 = FREEREF(0);
  T3 = FUNFAB(fun_26,2,x_1343F1126,FREEREF(1));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1341F1128;
  P x_1342F1127;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1342_27,3);
  x_1342F1127 = T1;
  FUNINIT(x_1342F1127, 3,FREEREF(0),FREEREF(1),return_);
  x_1341F1128 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1341F1128,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1341F1128,x_1342F1127);
  } else {
    T5 = CALL2(1,x_1342F1127,LITREF(lit_26),x_1341F1128);
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
  P x_1340F1138;
  P x_1338F1137;
  P x_1338F1136;
  P x_1338F1135;
  P x_1338F1134;
  P x_1338F1133;
  P bodyF1132;
  P varsF1131;
  P x_1338F1130;
  P x_1339F1129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1339_22,1);
  x_1339F1129 = T1;
  FUNINIT(x_1339F1129, 1,return_);
  x_1338F1130 = FREEREF(0);
  varsF1131 = YPfalse;
  varsF1131 = BOXFAB(varsF1131);
  bodyF1132 = YPfalse;
  bodyF1132 = BOXFAB(bodyF1132);
  T7 = CALL2(1,VARREF(YisaQ),x_1338F1130,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1338F1130,LITREF(lit_33),x_1339F1129);
    x_1338F1133 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1338F1133,x_1339F1129);
    x_1338F1134 = T11;
    BOXVAL(varsF1131) = x_1338F1134;
    x_1338F1135 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1338F1135,x_1339F1129);
    T12 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1338F1133);
    x_1338F1136 = T14;
    BOXVAL(bodyF1132) = x_1338F1136;
    x_1338F1137 = Ynil;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1338F1137,x_1339F1129);
    T15 = T16;
    T10 = T15;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1339F1129,LITREF(lit_26),x_1338F1130);
  }
  T19 = BOXVAL(varsF1131);
  x_1340F1138 = T19;
  T21 = FUNFAB(fun_28,2,x_1340F1138,bodyF1132);
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

FUNCODEDEF(fun_x_1352_31) {
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
  P x_1351F1143;
  P x_1351F1142;
  P bodyF1141;
  P x_1351F1140;
  P x_1352F1139;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1352_31,1);
  x_1352F1139 = T1;
  FUNINIT(x_1352F1139, 1,return_);
  x_1351F1140 = FREEREF(0);
  bodyF1141 = YPfalse;
  bodyF1141 = BOXFAB(bodyF1141);
  T5 = CALL2(1,VARREF(YisaQ),x_1351F1140,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1351F1140,LITREF(lit_39),x_1352F1139);
    x_1351F1142 = T7;
    BOXVAL(bodyF1141) = x_1351F1142;
    x_1351F1143 = Ynil;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1351F1143,x_1352F1139);
    T8 = T9;
    T6 = T8;
  } else {
    T10 = CALL2(1,x_1352F1139,LITREF(lit_26),x_1351F1140);
  }
  T12 = CALL1(1,VARREF(Ylst),LITREF(lit_33));
  T17 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_37));
  T16 = CALL3(1,VARREF(YgooSmacrosYcat),T17,T18,Ynil);
  T15 = CALL1(1,VARREF(Ylst),T16);
  T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,Ynil);
  T13 = CALL1(1,VARREF(Ylst),T14);
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_31));
  T22 = BOXVAL(bodyF1141);
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

FUNCODEDEF(fun_x_1356_34) {
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
  P x_1355F1150;
  P x_1355F1149;
  P x_1355F1148;
  P valueF1147;
  P packF1146;
  P x_1355F1145;
  P x_1356F1144;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1356_34,1);
  x_1356F1144 = T1;
  FUNINIT(x_1356F1144, 1,return_);
  x_1355F1145 = FREEREF(0);
  packF1146 = YPfalse;
  packF1146 = BOXFAB(packF1146);
  valueF1147 = YPfalse;
  valueF1147 = BOXFAB(valueF1147);
  T7 = CALL2(1,VARREF(YisaQ),x_1355F1145,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1355F1145,LITREF(lit_43),x_1356F1144);
    x_1355F1148 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1355F1148,x_1356F1144);
    BOXVAL(packF1146) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1355F1148);
    x_1355F1149 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1355F1149,x_1356F1144);
    BOXVAL(valueF1147) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1355F1149);
    x_1355F1150 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1355F1150,x_1356F1144);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1356F1144,LITREF(lit_26),x_1355F1145);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_44));
  T21 = BOXVAL(packF1146);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_7));
  T25 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T27 = BOXVAL(valueF1147);
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

FUNCODEDEF(fun_x_1360_37) {
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
  P x_1359F1155;
  P x_1359F1154;
  P valueF1153;
  P x_1359F1152;
  P x_1360F1151;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1360_37,1);
  x_1360F1151 = T1;
  FUNINIT(x_1360F1151, 1,return_);
  x_1359F1152 = FREEREF(0);
  valueF1153 = YPfalse;
  valueF1153 = BOXFAB(valueF1153);
  T5 = CALL2(1,VARREF(YisaQ),x_1359F1152,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1359F1152,LITREF(lit_47),x_1360F1151);
    x_1359F1154 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1359F1154,x_1360F1151);
    BOXVAL(valueF1153) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1359F1154);
    x_1359F1155 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1359F1155,x_1360F1151);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1360F1151,LITREF(lit_26),x_1359F1152);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_43));
  T15 = CALL1(1,VARREF(Ylst),LITREF(lit_40));
  T17 = BOXVAL(valueF1153);
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

FUNCODEDEF(fun_x_1364_40) {
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
  P x_1363F1160;
  P x_1363F1159;
  P nameF1158;
  P x_1363F1157;
  P x_1364F1156;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1364_40,1);
  x_1364F1156 = T1;
  FUNINIT(x_1364F1156, 1,return_);
  x_1363F1157 = FREEREF(0);
  nameF1158 = YPfalse;
  nameF1158 = BOXFAB(nameF1158);
  T5 = CALL2(1,VARREF(YisaQ),x_1363F1157,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1363F1157,LITREF(lit_41),x_1364F1156);
    x_1363F1159 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1363F1159,x_1364F1156);
    BOXVAL(nameF1158) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1363F1159);
    x_1363F1160 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1363F1160,x_1364F1156);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1364F1156,LITREF(lit_26),x_1363F1157);
  }
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_10));
  T16 = BOXVAL(nameF1158);
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
  T68 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLintG));
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
  lit_22 = YPPsym((P)"x-1320");
  lit_23 = YPPsym((P)"msg");
  lit_24 = YPPsym((P)"args");
  lit_25 = YPPsym((P)"packing-with");
  lit_26 = YPsb((P)"Match Pattern Failure");
  lit_27 = YPPsym((P)"x-1323");
  lit_28 = YPPsym((P)"x-1326");
  lit_29 = YPsb((P)"Failed to match.");
  lit_30 = YPPsym((P)"let");
  lit_31 = YPPsym((P)"seq");
  T80 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1320_15 = YPmet(FUNCODEREF(fun_x_1320_15),LITREF(lit_22),T80,ENVNUL,PNUL,YPfalse);
  T79 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1326_16 = YPmet(FUNCODEREF(fun_x_1326_16),LITREF(lit_28),T79,ENVNUL,PNUL,YPfalse);
  T78 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1323_18 = YPmet(FUNCODEREF(fun_x_1323_18),LITREF(lit_27),T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T81 = fun_21;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-with"),T81);
  lit_32 = YPPsym((P)"x-1339");
  lit_33 = YPPsym((P)"packing-in");
  lit_34 = YPPsym((P)"x-1342");
  lit_35 = YPPsym((P)"x-1345");
  lit_36 = YPPsym((P)"x-1348");
  lit_37 = YPPsym((P)"<lst>");
  T90 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1339_22 = YPmet(FUNCODEREF(fun_x_1339_22),LITREF(lit_32),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1348_23 = YPmet(FUNCODEREF(fun_x_1348_23),LITREF(lit_36),T89,ENVNUL,PNUL,YPfalse);
  T88 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T88,ENVNUL,PNUL,YPfalse);
  T87 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1345_25 = YPmet(FUNCODEREF(fun_x_1345_25),LITREF(lit_35),T87,ENVNUL,PNUL,YPfalse);
  T86 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T86,ENVNUL,PNUL,YPfalse);
  T85 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1342_27 = YPmet(FUNCODEREF(fun_x_1342_27),LITREF(lit_34),T85,ENVNUL,PNUL,YPfalse);
  T84 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T91 = fun_30;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing-in"),T91);
  lit_38 = YPPsym((P)"x-1352");
  lit_39 = YPPsym((P)"packing");
  lit_40 = YPPsym((P)"packer-");
  lit_41 = YPPsym((P)"packed");
  T94 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1352_31 = YPmet(FUNCODEREF(fun_x_1352_31),LITREF(lit_38),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T92,ENVNUL,PNUL,YPfalse);
  T95 = fun_33;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"packing"),T95);
  lit_42 = YPPsym((P)"x-1356");
  lit_43 = YPPsym((P)"pack-in");
  lit_44 = YPPsym((P)"opf");
  lit_45 = YPPsym((P)"_");
  T98 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1356_34 = YPmet(FUNCODEREF(fun_x_1356_34),LITREF(lit_42),T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T99 = fun_36;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack-in"),T99);
  lit_46 = YPPsym((P)"x-1360");
  lit_47 = YPPsym((P)"pack");
  T102 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1360_37 = YPmet(FUNCODEREF(fun_x_1360_37),LITREF(lit_46),T102,ENVNUL,PNUL,YPfalse);
  T101 = YPsig(YPPlist(1,LITREF(lit_21)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T101,ENVNUL,PNUL,YPfalse);
  T100 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T103 = fun_39;
  YPmacro(YPPsym((P)"goo/packer"),YPPsym((P)"pack"),T103);
  lit_48 = YPPsym((P)"x-1364");
  T110 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_24)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T109 = fun_x_1364_40 = YPmet(FUNCODEREF(fun_x_1364_40),LITREF(lit_48),T110,ENVNUL,PNUL,YPfalse);
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
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fin", &module_info_gooSboot, "fin"},
  {"app", &module_info_gooSmacros, "app"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"round/", &module_info_gooSmath, "round/"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"export", &module_info_gooSboot, "export"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"tup", &module_info_gooSboot, "tup"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"or", &module_info_gooSmacros, "or"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"new", &module_info_gooSboot, "new"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"tail", &module_info_gooSboot, "tail"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"min", &module_info_gooSmag, "min"},
  {"nul", &module_info_gooSboot, "nul"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"~==", &module_info_gooSmath, "~=="},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"%str", &module_info_gooSboot, "%str"},
  {"items", &module_info_gooScolsScol, "items"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"^", &module_info_gooSmath, "^"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"==", &module_info_gooSmacros, "=="},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"match", &module_info_gooSmacros, "match"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"fun", &module_info_gooSboot, "fun"},
  {"+", &module_info_gooSmath, "+"},
  {"cos", &module_info_gooSmath, "cos"},
  {"now", &module_info_gooScolsScol, "now"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"case", &module_info_gooSmacros, "case"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"mod", &module_info_gooSmath, "mod"},
  {"pair", &module_info_gooSmacros, "pair"},
  {">=", &module_info_gooSmag, ">="},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"~=", &module_info_gooSmath, "~="},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"try", &module_info_gooSboot, "try"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<=", &module_info_gooSmag, "<="},
  {"col", &module_info_gooScolsScol, "col"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<<", &module_info_gooSmath, "<<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"when", &module_info_gooSmacros, "when"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"ds", &module_info_gooSboot, "ds"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"until", &module_info_gooSmacros, "until"},
  {"rep", &module_info_gooSboot, "rep"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"|", &module_info_gooSmath, "|"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"dss", &module_info_gooSboot, "dss"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"floor", &module_info_gooSmath, "floor"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"head", &module_info_gooSboot, "head"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"div", &module_info_gooSmath, "div"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"t?", &module_info_gooStypes, "t?"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"abs", &module_info_gooSmath, "abs"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"error", &module_info_gooSboot, "error"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"seq", &module_info_gooSboot, "seq"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"quote", &module_info_gooSboot, "quote"},
  {"*", &module_info_gooSmath, "*"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%su", &module_info_gooSboot, "%su"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"df", &module_info_gooSboot, "df"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"dg", &module_info_gooSboot, "dg"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<prim-int>", &module_info_gooSboot, "<prim-int>"},
  {"while", &module_info_gooSmacros, "while"},
  {"dl", &module_info_gooSboot, "dl"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"if", &module_info_gooSboot, "if"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"t=", &module_info_gooStypes, "t="},
  {"dc", &module_info_gooSboot, "dc"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"and", &module_info_gooSmacros, "and"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"~", &module_info_gooSmath, "~"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"round", &module_info_gooSmath, "round"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"map", &module_info_gooSmacros, "map"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"find", &module_info_gooScolsScol, "find"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"len", &module_info_gooStypes, "len"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"set", &module_info_gooSboot, "set"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"even?", &module_info_gooSmath, "even?"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"rem", &module_info_gooSmath, "rem"},
  {"logn", &module_info_gooSmath, "logn"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"pow", &module_info_gooSmath, "pow"},
  {"add", &module_info_gooScolsScol, "add"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"atan", &module_info_gooSmath, "atan"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"-", &module_info_gooSmath, "-"},
  {"log", &module_info_gooSmath, "log"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%im", &module_info_gooSboot, "%im"},
  {">>", &module_info_gooSmath, ">>"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"as", &module_info_gooStypes, "as"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"def", &module_info_gooSboot, "def"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"&", &module_info_gooSmath, "&"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%time", &module_info_gooSboot, "%time"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"do", &module_info_gooSmacros, "do"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"op", &module_info_gooSmacros, "op"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {">", &module_info_gooSmag, ">"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"@len", &module_info_gooSboot, "@len"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<", &module_info_gooSmag, "<"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"use", &module_info_gooSboot, "use"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"$e", &module_info_gooSmath, "$e"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"/", &module_info_gooSmath, "/"},
  {"=", &module_info_gooSmath, "="},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"max", &module_info_gooSmag, "max"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"packer-reser", CVAR, &YgooSpackerYpacker_reser},
  {"packer-value-setter", CVAR, &YgooSpackerYpacker_value_setter},
  {"packing-in", PVAR, NULL},
  {"packer-value", CVAR, &YgooSpackerYpacker_value},
  {"pack-in", PVAR, NULL},
  {"packed", PVAR, NULL},
  {"pack", PVAR, NULL},
  {"packer-adder-setter", CVAR, &YgooSpackerYpacker_adder_setter},
  {"packer-add", CVAR, &YgooSpackerYpacker_add},
  {"<packer>", CVAR, &YgooSpackerYLpackerG},
  {"packing-with", PVAR, NULL},
  {"packing", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"packer-adder", CVAR, &YgooSpackerYpacker_adder},
  {"<sim-packer>", CVAR, &YgooSpackerYLsim_packerG},
  {"packer-res", CVAR, &YgooSpackerYpacker_res},
  {"packer-reser-setter", CVAR, &YgooSpackerYpacker_reser_setter},
  {"packer-fab", CVAR, &YgooSpackerYpacker_fab},
  {"packer", CVAR, &YgooSpackerYpacker},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"pack", "pack"},
  {"packing-in", "packing-in"},
  {"pack-in", "pack-in"},
  {"<packer>", "<packer>"},
  {"packed", "packed"},
  {"packing-with", "packing-with"},
  {"packing", "packing"},
  {"packer-res", "packer-res"},
  {"packer-add", "packer-add"},
  {"packer-fab", "packer-fab"},
  {"packer", "packer"},
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
