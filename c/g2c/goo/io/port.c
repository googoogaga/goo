/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/io/port */

DEF(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYfloor,"goo/math","floor");
DEF(YgooSioSportYpeek,"goo/io/port","peek");
DEF(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YgooScollectionsScollectionYrange_error,"goo/collections/collection","range-error");
DEF(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
DEF(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YLgenG,"runtime/boot","<gen>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ygen_src,"runtime/boot","gen-src");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YisaQ,"runtime/boot","isa?");
DEF(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
EXT(YPisa,"runtime/boot","%isa");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YgooScollectionsSsequenceYinsX,"goo/collections/sequence","ins!");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yhead,"runtime/boot","head");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooSioSportYin,"goo/io/port","in");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
DEF(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
DEF(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YLchrG,"runtime/boot","<chr>");
DEF(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(Ynot,"runtime/boot","not");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ylst,"runtime/boot","lst");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ynul,"runtime/boot","nul");
EXT(Yerror,"runtime/boot","error");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooSmathYGG,"goo/math",">>");
DEF(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooScollectionsSsequenceYins,"goo/collections/sequence","ins");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsSsequenceYdo_key_vals,"goo/collections/sequence","do-key-vals");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(YPdefine_method,"runtime/boot","%define-method");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
DEF(YgooSioSportYport_guts,"goo/io/port","port-guts");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
DEF(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScollectionsSsequenceYvals_to_str,"goo/collections/sequence","vals-to-str");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooScollectionsSsequenceYrange_checkQ,"goo/collections/sequence","range-check?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(Yprop_type,"runtime/boot","prop-type");
EXT(YLanyG,"runtime/boot","<any>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSioSportYgets,"goo/io/port","gets");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
DEF(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYdo3,"goo/collections/collection","do3");
DEF(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
DEF(YgooSioSportYport_guts_setter,"goo/io/port","port-guts-setter");
EXT(YgooScollectionsScollectionYas_copy,"goo/collections/collection","as-copy");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yfind_setter,"runtime/boot","find-setter");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmathYE,"goo/math","=");
EXT(YOall2Q,"runtime/boot","@all2?");
EXT(YgooScollectionsSsequenceYrange_check,"goo/collections/sequence","range-check");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynil,"runtime/boot","nil");
EXT(YLcolG,"runtime/boot","<col>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
DEF(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
DEF(YgooSioSportYget,"goo/io/port","get");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YLmagG,"runtime/boot","<mag>");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(Yfind_getter,"runtime/boot","find-getter");
DEF(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScollectionsScollectionYdup,"goo/collections/collection","dup");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YLlocG,"runtime/boot","<loc>");
DEF(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsSsequenceYfinds,"goo/collections/sequence","finds");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
DEF(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yclass_name,"runtime/boot","class-name");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_21);
DEFLIT(lit_37);
DEFLIT(lit_23);
DEFLIT(lit_35);
DEFLIT(lit_0);
DEFLIT(lit_18);
DEFLIT(lit_51);
DEFLIT(lit_39);
DEFLIT(lit_16);
DEFLIT(lit_19);
DEFLIT(lit_41);
DEFLIT(lit_32);
DEFLIT(lit_5);
DEFLIT(lit_48);
DEFLIT(lit_31);
DEFLIT(lit_25);
DEFLIT(lit_3);
DEFLIT(lit_11);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_1);
DEFLIT(lit_52);
DEFLIT(lit_53);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_22);
DEFLIT(lit_6);
DEFLIT(lit_29);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_36);
DEFLIT(lit_24);
DEFLIT(lit_50);
DEFLIT(lit_40);
DEFLIT(lit_38);
DEFLIT(lit_30);
DEFLIT(lit_12);
DEFLIT(lit_28);
DEFLIT(lit_47);
DEFLIT(lit_54);
DEFLIT(lit_13);
DEFLIT(lit_9);
DEFLIT(lit_44);
DEFLIT(lit_33);
DEFLIT(lit_49);
DEFLIT(lit_14);
DEFLIT(lit_17);
DEFLIT(lit_46);
DEFLIT(lit_20);
DEFLIT(lit_34);
DEFLIT(lit_2);
DEFLIT(lit_15);
DEFLIT(lit_42);
DEFLIT(lit_26);
DEFLIT(lit_7);

/* FUNCTIONS: */

LOCFOR(fun_port_line_0);
LOCFOR(fun_port_line_setter_1);
LOCFOR(fun_2);
LOCFOR(fun_port_handle_3);
LOCFOR(fun_port_handle_setter_4);
LOCFOR(fun_close_5);
LOCFOR(fun_port_guts_6);
LOCFOR(fun_port_guts_setter_7);
LOCFOR(fun_8);
LOCFOR(fun_port_index_9);
LOCFOR(fun_port_index_setter_10);
LOCFOR(fun_11);
LOCFOR(fun_loop_12);
LOCFOR(fun_gets_13);
LOCFOR(fun_open_14);
LOCFOR(fun_file_opening_error_15);
LOCFOR(fun_open_16);
LOCFOR(fun_close_17);
LOCFOR(fun_close_18);
LOCFOR(fun_x_1295_19);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_get_22);
LOCFOR(fun_peek_23);
LOCFOR(fun_readyQ_24);
LOCFOR(fun_newline_25);
LOCFOR(fun_force_out_26);
LOCFOR(fun_put_27);
LOCFOR(fun_puts_28);
LOCFOR(fun_port_contents_29);
LOCFOR(fun_open_30);
LOCFOR(fun_open_31);
LOCFOR(fun_peek_32);
LOCFOR(fun_get_33);
LOCFOR(fun_readyQ_34);
LOCFOR(fun_put_35);
LOCFOR(fun_puts_36);
extern P YgooSioSportY___main_0___ ();
extern P YgooSioSportY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_port_line_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_line));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_line_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_line));
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

FUNCODEDEF(fun_port_handle_3) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_handle_setter_4) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_handle));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_5) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_port_guts_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_guts));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_guts_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_guts));
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
  QRET(LITREF(lit_31));
}

FUNCODEDEF(fun_port_index_9) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSioSportYport_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_index_setter_10) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSioSportYport_index));
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
  QRET(YPint((P)0));
}

FUNCODEDEF(fun_loop_12) {
  P res_,c_;
  P tmpF1196;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYeof_objectQ),c_);
  tmpF1196 = T2;
  if (tmpF1196 != YPfalse) {
    T3 = tmpF1196;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)10));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),c_,res_);
    T9 = CALL1(1,VARREF(YgooSioSportYget),FREEREF(1));
    a1 = T8;
    a2 = T9;
    res_ = a1;
    c_ = a2;
    goto loop;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gets_13) {
  P port_;
  P loopF1197;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_12,2);
  loopF1197 = T1;
  FUNINIT(loopF1197, 2,loopF1197,port_);
  T3 = CALL1(1,VARREF(YgooSioSportYget),port_);
  T2 = CALL2(0,loopF1197,Ynil,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_14) {
  P t_,filename_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_in_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_15) {
  P filename_;
  P T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T0 = CALL2(1,VARREF(Yerror),LITREF(lit_41),filename_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_open_16) {
  P t_,filename_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(filename_, 1);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPopen_out_file(T2);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_close_17) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_in_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_close_18) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPclose_out_port(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1295_19) {
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

FUNCODEDEF(fun_20) {
  P return_;
  P x_1294F1208;
  P x_1294F1207;
  P x_1294F1206;
  P x_1294F1205;
  P x_1294F1204;
  P x_1294F1203;
  P bodyF1202;
  P portF1201;
  P nameF1200;
  P x_1294F1199;
  P x_1295F1198;
  P T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42;
  P T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26;
  P T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1295_19,1);
  x_1295F1198 = T1;
  FUNINIT(x_1295F1198, 1,return_);
  x_1294F1199 = FREEREF(0);
  nameF1200 = YPfalse;
  nameF1200 = BOXFAB(nameF1200);
  portF1201 = YPfalse;
  portF1201 = BOXFAB(portF1201);
  bodyF1202 = YPfalse;
  bodyF1202 = BOXFAB(bodyF1202);
  T9 = CALL2(1,VARREF(YisaQ),x_1294F1199,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1294F1199,LITREF(lit_47),x_1295F1198);
    x_1294F1203 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1294F1203,x_1295F1198);
    x_1294F1204 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1294F1204,x_1295F1198);
    BOXVAL(nameF1200) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1294F1204);
    x_1294F1205 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1294F1205,x_1295F1198);
    BOXVAL(portF1201) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1294F1205);
    x_1294F1206 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1294F1206,x_1295F1198);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1294F1203);
    x_1294F1207 = T21;
    BOXVAL(bodyF1202) = x_1294F1207;
    x_1294F1208 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1294F1208,x_1295F1198);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1295F1198,LITREF(lit_48),x_1294F1199);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_49));
  T32 = BOXVAL(nameF1200);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T33 = CALL1(1,VARREF(Ylst),YPfalse);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T33,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_52));
  T44 = BOXVAL(nameF1200);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(portF1201);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T41 = CALLN(1,VARREF(YgooSmacrosYcat),4,T42,T43,T45,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T47 = BOXVAL(bodyF1202);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),4,T39,T40,T47,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T52 = BOXVAL(nameF1200);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_4));
  T57 = BOXVAL(nameF1200);
  T56 = CALL1(1,VARREF(Ylst),T57);
  T54 = CALL3(1,VARREF(YgooSmacrosYcat),T55,T56,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T49 = CALLN(1,VARREF(YgooSmacrosYcat),4,T50,T51,T53,Ynil);
  T48 = CALL1(1,VARREF(Ylst),T49);
  T35 = CALLN(1,VARREF(YgooSmacrosYcat),4,T36,T37,T48,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),4,T26,T27,T34,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_21) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_20,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_22) {
  P port_;
  P x_1296F1210;
  P cF1209;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPget(T3);
  T1 = (P)YPcb(T2);
  cF1209 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),cF1209,YPchr((P)10));
  if (T4 != YPfalse) {
    x_1296F1210 = port_;
    T8 = CALL1(1,VARREF(YgooSioSportYport_line),x_1296F1210);
    T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
    T6 = CALL2(1,VARREF(YgooSioSportYport_line_setter),T7,x_1296F1210);
    T5 = T6;
  } else {
  }
  T0 = cF1209;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_23) {
  P port_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPpeek(T2);
  T0 = (P)YPcb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_24) {
  P port_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T1 = (P)YPreadyQ(T2);
  T0 = (P)YPbb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_newline_25) {
  P port_;
  P T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)10));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_force_out_26) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T0 = (P)YPforce_out(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_27) {
  P port_,c_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPcu(c_);
  T0 = (P)YPput(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_28) {
  P port_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_handle),port_);
  T2 = (P)YPsu(s_);
  T0 = (P)YPputs(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_port_contents_29) {
  P port_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_30) {
  P t_,dat_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_guts),dat_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_open_31) {
  P t_,dat_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(t_, 0);
  ARG(dat_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScollectionsSbufferYLbufG),dat_);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLstr_out_portG),VARREF(YgooSioSportYport_guts),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_peek_32) {
  P port_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T7 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T8 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),T7,T8);
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_get_33) {
  P port_;
  P x_1297F1212;
  P resF1211;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
  T4 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T3 = CALL1(1,VARREF(YgooStypesYlen),T4);
  T1 = CALL2(1,VARREF(YgooSmagnitudeYGE),T2,T3);
  if (T1 != YPfalse) {
    T5 = CALL0(1,VARREF(YgooSmathYeof_object));
    T0 = T5;
  } else {
    T8 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
    T9 = CALL1(1,VARREF(YgooSioSportYport_index),port_);
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),T8,T9);
    resF1211 = T7;
    x_1297F1212 = port_;
    T12 = CALL1(1,VARREF(YgooSioSportYport_index),x_1297F1212);
    T11 = CALL2(1,VARREF(YgooSmathYA),T12,YPint((P)1));
    T10 = CALL2(1,VARREF(YgooSioSportYport_index_setter),T11,x_1297F1212);
    T6 = resF1211;
    T0 = T6;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_readyQ_34) {
  P port_;
  P a1;
LINK_STACK();
  ARG(port_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_put_35) {
  P port_,c_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(c_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScollectionsScollectionYaddX),T2,c_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_puts_36) {
  P port_,s_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(port_, 0);
  ARG(s_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSportYport_guts),port_);
  T1 = CALL2(1,VARREF(YgooScollectionsSsequenceYcatX),T2,s_);
  T0 = CALL2(1,VARREF(YgooSioSportYport_guts_setter),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSportY___main_0___() {
  P T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73;
  P T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57;
  P T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41;
  P T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25;
  P T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<port>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSioSportYLportG,T0);
  lit_1 = YPPsym((P)"open");
  lit_2 = YPPsym((P)"t");
  lit_3 = YPPsym((P)"name");
  T4 = CALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSioSportYLportG));
  T3 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_3)),YPPlist(2,T4,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLportG),Ynil);
  T2 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_1),T3,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYopen,T2);
  lit_4 = YPPsym((P)"close");
  lit_5 = YPPsym((P)"x");
  T6 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_4),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYclose,T5);
  lit_6 = YPPsym((P)"<in-port>");
  T8 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T7 = CALL2(1,VARREF(Yfab_class),LITREF(lit_6),T8);
  VARSET(YgooSioSportYLin_portG,T7);
  lit_7 = YPPsym((P)"port-line");
  lit_8 = YPPsym((P)"_x");
  T9 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_line_0 = YPmet(FUNCODEREF(fun_port_line_0),LITREF(lit_7),T9,ENVNUL,PNUL,YPfalse);
  T12 = BOUNDP(YgooSioSportYport_line);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSioSportYport_line);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_port_line_0;
  T10 = CALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSioSportYport_line,T10);
  lit_9 = YPPsym((P)"port-line-setter");
  lit_10 = YPPsym((P)"_z");
  T14 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_line_setter_1 = YPmet(FUNCODEREF(fun_port_line_setter_1),LITREF(lit_9),T14,ENVNUL,PNUL,YPfalse);
  T17 = BOUNDP(YgooSioSportYport_line_setter);
  if (T17 != YPfalse) {
    T16 = VARREF(YgooSioSportYport_line_setter);
  } else {
    T16 = YPfalse;
  }
  T18 = fun_port_line_setter_1;
  T15 = CALL2(1,VARREF(YPdefine_method),T16,T18);
  VARSET(YgooSioSportYport_line_setter,T15);
  T19 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T19,ENVNUL,PNUL,YPfalse);
  T20 = fun_2;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooSioSportYLin_portG),VARREF(YgooSioSportYport_line),VARREF(YgooSioSportYport_line_setter),VARREF(YLintG),T20);
  lit_11 = YPPsym((P)"get");
  lit_12 = YPPsym((P)"port");
  T22 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T21 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_11),T22,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYget,T21);
  lit_13 = YPPsym((P)"gets");
  T24 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T23 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_13),T24,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYgets,T23);
  lit_14 = YPPsym((P)"peek");
  T26 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  T25 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_14),T26,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYpeek,T25);
  lit_15 = YPPsym((P)"ready?");
  T28 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  T27 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_15),T28,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYreadyQ,T27);
  lit_16 = YPPsym((P)"<out-port>");
  T30 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T29 = CALL2(1,VARREF(Yfab_class),LITREF(lit_16),T30);
  VARSET(YgooSioSportYLout_portG,T29);
  lit_17 = YPPsym((P)"newline");
  T32 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T31 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_17),T32,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYnewline,T31);
  lit_18 = YPPsym((P)"force-out");
  T34 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T33 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_18),T34,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYforce_out,T33);
  lit_19 = YPPsym((P)"put");
  lit_20 = YPPsym((P)"c");
  T36 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T35 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_19),T36,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYput,T35);
  lit_21 = YPPsym((P)"puts");
  lit_22 = YPPsym((P)"s");
  T38 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T37 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_21),T38,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYputs,T37);
  lit_23 = YPPsym((P)"<file-port>");
  T40 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T39 = CALL2(1,VARREF(Yfab_class),LITREF(lit_23),T40);
  VARSET(YgooSioSportYLfile_portG,T39);
  lit_24 = YPPsym((P)"port-handle");
  T41 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_handle_3 = YPmet(FUNCODEREF(fun_port_handle_3),LITREF(lit_24),T41,ENVNUL,PNUL,YPfalse);
  T44 = BOUNDP(YgooSioSportYport_handle);
  if (T44 != YPfalse) {
    T43 = VARREF(YgooSioSportYport_handle);
  } else {
    T43 = YPfalse;
  }
  T45 = fun_port_handle_3;
  T42 = CALL2(1,VARREF(YPdefine_method),T43,T45);
  VARSET(YgooSioSportYport_handle,T42);
  lit_25 = YPPsym((P)"port-handle-setter");
  T46 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_handle_setter_4 = YPmet(FUNCODEREF(fun_port_handle_setter_4),LITREF(lit_25),T46,ENVNUL,PNUL,YPfalse);
  T49 = BOUNDP(YgooSioSportYport_handle_setter);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSioSportYport_handle_setter);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_port_handle_setter_4;
  T47 = CALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSioSportYport_handle_setter,T47);
  CALLN(1,VARREF(YPprop),5,VARREF(YgooSioSportYLportG),VARREF(YgooSioSportYport_handle),VARREF(YgooSioSportYport_handle_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_5 = YPmet(FUNCODEREF(fun_close_5),LITREF(lit_4),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooSioSportYclose);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYclose);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_close_5;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYclose,T52);
  lit_26 = YPPsym((P)"<file-in-port>");
  T58 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T57 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T58);
  T56 = CALL2(1,VARREF(Yfab_class),LITREF(lit_26),T57);
  VARSET(YgooSioSportYLfile_in_portG,T56);
  lit_27 = YPPsym((P)"<file-out-port>");
  T61 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSioSportYLfile_portG),T61);
  T59 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T60);
  VARSET(YgooSioSportYLfile_out_portG,T59);
  VARSET(YgooSioSportYin,YPfalse);
  VARSET(YgooSioSportYout,YPfalse);
  lit_28 = YPPsym((P)"<str-port>");
  T63 = (P)YPpair(VARREF(YgooSioSportYLportG),Ynil);
  T62 = CALL2(1,VARREF(Yfab_class),LITREF(lit_28),T63);
  VARSET(YgooSioSportYLstr_portG,T62);
  lit_29 = YPPsym((P)"port-guts");
  T64 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_port_guts_6 = YPmet(FUNCODEREF(fun_port_guts_6),LITREF(lit_29),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSioSportYport_guts);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSioSportYport_guts);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_port_guts_6;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSioSportYport_guts,T65);
  lit_30 = YPPsym((P)"port-guts-setter");
  T69 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLseqG),VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_guts_setter_7 = YPmet(FUNCODEREF(fun_port_guts_setter_7),LITREF(lit_30),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSioSportYport_guts_setter);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSioSportYport_guts_setter);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_port_guts_setter_7;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSioSportYport_guts_setter,T70);
  lit_31 = YPsb((P)"");
  T74 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T75 = fun_8;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooSioSportYLstr_portG),VARREF(YgooSioSportYport_guts),VARREF(YgooSioSportYport_guts_setter),VARREF(YLseqG),T75);
  lit_32 = YPPsym((P)"port-contents");
  T77 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  T76 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_32),T77,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YgooSioSportYport_contents,T76);
  lit_33 = YPPsym((P)"<str-in-port>");
  T80 = (P)YPpair(VARREF(YgooSioSportYLin_portG),Ynil);
  T79 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T80);
  T78 = CALL2(1,VARREF(Yfab_class),LITREF(lit_33),T79);
  VARSET(YgooSioSportYLstr_in_portG,T78);
  lit_34 = YPPsym((P)"port-index");
  T83 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T82 = fun_port_index_9 = YPmet(FUNCODEREF(fun_port_index_9),LITREF(lit_34),T83,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YgooSioSportYport_index);
  if (T87 != YPfalse) {
    T86 = VARREF(YgooSioSportYport_index);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_port_index_9;
  T85 = CALL2(1,VARREF(YPdefine_method),T86,T88);
  T84 = VARSET(YgooSioSportYport_index,T85);
  T81 = T84;
  return T81;
}

P YgooSioSportY___main_1___() {
  P T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119,T118,T117,T116,T115;
  P T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103,T102,T101,T100,T99;
  P T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83;
  P T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67;
  P T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51;
  P T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35;
  P T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
loop:
  lit_35 = YPPsym((P)"port-index-setter");
  T0 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLintG),VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_port_index_setter_10 = YPmet(FUNCODEREF(fun_port_index_setter_10),LITREF(lit_35),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSioSportYport_index_setter);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSioSportYport_index_setter);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_port_index_setter_10;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSioSportYport_index_setter,T1);
  T5 = YPsig(YPPlist(1,LITREF(lit_5)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T5,ENVNUL,PNUL,YPfalse);
  T6 = fun_11;
  CALLN(1,VARREF(YPprop),5,VARREF(YgooSioSportYLstr_in_portG),VARREF(YgooSioSportYport_index),VARREF(YgooSioSportYport_index_setter),VARREF(YLintG),T6);
  lit_36 = YPPsym((P)"<str-out-port>");
  T9 = (P)YPpair(VARREF(YgooSioSportYLout_portG),Ynil);
  T8 = (P)YPpair(VARREF(YgooSioSportYLstr_portG),T9);
  T7 = CALL2(1,VARREF(Yfab_class),LITREF(lit_36),T8);
  VARSET(YgooSioSportYLstr_out_portG,T7);
  lit_37 = YPPsym((P)"loop");
  lit_38 = YPPsym((P)"res");
  T11 = YPsig(YPPlist(2,LITREF(lit_38),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_12 = YPmet(FUNCODEREF(fun_loop_12),LITREF(lit_37),T11,ENVNUL,PNUL,YPfalse);
  T10 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_gets_13 = YPmet(FUNCODEREF(fun_gets_13),LITREF(lit_13),T10,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(YgooSioSportYgets);
  if (T14 != YPfalse) {
    T13 = VARREF(YgooSioSportYgets);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_gets_13;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(YgooSioSportYgets,T12);
  lit_39 = YPPsym((P)"filename");
  T17 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_in_portG));
  T16 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T17,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_in_portG),Ynil);
  fun_open_14 = YPmet(FUNCODEREF(fun_open_14),LITREF(lit_1),T16,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YgooSioSportYopen);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSioSportYopen);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_open_14;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSioSportYopen,T18);
  lit_40 = YPPsym((P)"file-opening-error");
  lit_41 = YPsb((P)"Cannot open file named %=");
  T22 = YPsig(YPPlist(1,LITREF(lit_39)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_15 = YPmet(FUNCODEREF(fun_file_opening_error_15),LITREF(lit_40),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yfile_opening_error);
  if (T25 != YPfalse) {
    T24 = VARREF(Yfile_opening_error);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_file_opening_error_15;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yfile_opening_error,T23);
  T28 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLfile_out_portG));
  T27 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_39)),YPPlist(2,T28,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLfile_out_portG),Ynil);
  fun_open_16 = YPmet(FUNCODEREF(fun_open_16),LITREF(lit_1),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSioSportYopen);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSioSportYopen);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_open_16;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSioSportYopen,T29);
  T33 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_17 = YPmet(FUNCODEREF(fun_close_17),LITREF(lit_4),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooSioSportYclose);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooSioSportYclose);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_close_17;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooSioSportYclose,T34);
  T38 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_close_18 = YPmet(FUNCODEREF(fun_close_18),LITREF(lit_4),T38,ENVNUL,PNUL,YPfalse);
  T41 = BOUNDP(YgooSioSportYclose);
  if (T41 != YPfalse) {
    T40 = VARREF(YgooSioSportYclose);
  } else {
    T40 = YPfalse;
  }
  T42 = fun_close_18;
  T39 = CALL2(1,VARREF(YPdefine_method),T40,T42);
  VARSET(YgooSioSportYclose,T39);
  lit_42 = YPPsym((P)"exp");
  lit_43 = YPPsym((P)"return");
  lit_44 = YPPsym((P)"x-1295");
  lit_45 = YPPsym((P)"msg");
  lit_46 = YPPsym((P)"args");
  lit_47 = YPPsym((P)"with-port");
  lit_48 = YPsb((P)"Match Pattern Failure");
  lit_49 = YPPsym((P)"let");
  lit_50 = YPPsym((P)"fin");
  lit_51 = YPPsym((P)"seq");
  lit_52 = YPPsym((P)"set");
  lit_53 = YPPsym((P)"and");
  T45 = YPsig(YPPlist(2,LITREF(lit_45),LITREF(lit_46)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1295_19 = YPmet(FUNCODEREF(fun_x_1295_19),LITREF(lit_44),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T43,ENVNUL,PNUL,YPfalse);
  T46 = fun_21;
  YPmacro(YPPsym((P)"goo/io/port"),YPPsym((P)"with-port"),T46);
  T48 = (P)YPcurrent_in_port();
  T47 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_in_portG),VARREF(YgooSioSportYport_handle),T48);
  VARSET(YgooSioSportYin,T47);
  T50 = (P)YPcurrent_out_port();
  T49 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSportYLfile_out_portG),VARREF(YgooSioSportYport_handle),T50);
  VARSET(YgooSioSportYout,T49);
  T51 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_22 = YPmet(FUNCODEREF(fun_get_22),LITREF(lit_11),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(YgooSioSportYget);
  if (T54 != YPfalse) {
    T53 = VARREF(YgooSioSportYget);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_get_22;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(YgooSioSportYget,T52);
  T56 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_23 = YPmet(FUNCODEREF(fun_peek_23),LITREF(lit_14),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(YgooSioSportYpeek);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSioSportYpeek);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_peek_23;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSioSportYpeek,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_24 = YPmet(FUNCODEREF(fun_readyQ_24),LITREF(lit_15),T61,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YgooSioSportYreadyQ);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSioSportYreadyQ);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_readyQ_24;
  T62 = CALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSioSportYreadyQ,T62);
  T66 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_newline_25 = YPmet(FUNCODEREF(fun_newline_25),LITREF(lit_17),T66,ENVNUL,PNUL,YPfalse);
  T69 = BOUNDP(YgooSioSportYnewline);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooSioSportYnewline);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_newline_25;
  T67 = CALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooSioSportYnewline,T67);
  T71 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLfile_out_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_force_out_26 = YPmet(FUNCODEREF(fun_force_out_26),LITREF(lit_18),T71,ENVNUL,PNUL,YPfalse);
  T74 = BOUNDP(YgooSioSportYforce_out);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSioSportYforce_out);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_force_out_26;
  T72 = CALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSioSportYforce_out,T72);
  T76 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_27 = YPmet(FUNCODEREF(fun_put_27),LITREF(lit_19),T76,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YgooSioSportYput);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSioSportYput);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_put_27;
  T77 = CALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSioSportYput,T77);
  T81 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLfile_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_puts_28 = YPmet(FUNCODEREF(fun_puts_28),LITREF(lit_21),T81,ENVNUL,PNUL,YPfalse);
  T84 = BOUNDP(YgooSioSportYputs);
  if (T84 != YPfalse) {
    T83 = VARREF(YgooSioSportYputs);
  } else {
    T83 = YPfalse;
  }
  T85 = fun_puts_28;
  T82 = CALL2(1,VARREF(YPdefine_method),T83,T85);
  VARSET(YgooSioSportYputs,T82);
  T86 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_portG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_port_contents_29 = YPmet(FUNCODEREF(fun_port_contents_29),LITREF(lit_32),T86,ENVNUL,PNUL,YPfalse);
  T89 = BOUNDP(YgooSioSportYport_contents);
  if (T89 != YPfalse) {
    T88 = VARREF(YgooSioSportYport_contents);
  } else {
    T88 = YPfalse;
  }
  T90 = fun_port_contents_29;
  T87 = CALL2(1,VARREF(YPdefine_method),T88,T90);
  VARSET(YgooSioSportYport_contents,T87);
  lit_54 = YPPsym((P)"dat");
  T92 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_in_portG));
  T91 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T92,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_in_portG),Ynil);
  fun_open_30 = YPmet(FUNCODEREF(fun_open_30),LITREF(lit_1),T91,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YgooSioSportYopen);
  if (T95 != YPfalse) {
    T94 = VARREF(YgooSioSportYopen);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_open_30;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YgooSioSportYopen,T93);
  T98 = CALL1(1,VARREF(YgooStypesYtE),VARREF(YgooSioSportYLstr_out_portG));
  T97 = YPsig(YPPlist(2,LITREF(lit_2),LITREF(lit_54)),YPPlist(2,T98,VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YgooSioSportYLstr_out_portG),Ynil);
  fun_open_31 = YPmet(FUNCODEREF(fun_open_31),LITREF(lit_1),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(YgooSioSportYopen);
  if (T101 != YPfalse) {
    T100 = VARREF(YgooSioSportYopen);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_open_31;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(YgooSioSportYopen,T99);
  T103 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_peek_32 = YPmet(FUNCODEREF(fun_peek_32),LITREF(lit_14),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YgooSioSportYpeek);
  if (T106 != YPfalse) {
    T105 = VARREF(YgooSioSportYpeek);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_peek_32;
  T104 = CALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YgooSioSportYpeek,T104);
  T108 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLchrG),Ynil);
  fun_get_33 = YPmet(FUNCODEREF(fun_get_33),LITREF(lit_11),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YgooSioSportYget);
  if (T111 != YPfalse) {
    T110 = VARREF(YgooSioSportYget);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_get_33;
  T109 = CALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YgooSioSportYget,T109);
  T113 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YgooSioSportYLstr_in_portG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_readyQ_34 = YPmet(FUNCODEREF(fun_readyQ_34),LITREF(lit_15),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YgooSioSportYreadyQ);
  if (T116 != YPfalse) {
    T115 = VARREF(YgooSioSportYreadyQ);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_readyQ_34;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YgooSioSportYreadyQ,T114);
  T118 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_20)),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_put_35 = YPmet(FUNCODEREF(fun_put_35),LITREF(lit_19),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YgooSioSportYput);
  if (T121 != YPfalse) {
    T120 = VARREF(YgooSioSportYput);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_put_35;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YgooSioSportYput,T119);
  T125 = YPsig(YPPlist(2,LITREF(lit_12),LITREF(lit_22)),YPPlist(2,VARREF(YgooSioSportYLstr_out_portG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T124 = fun_puts_36 = YPmet(FUNCODEREF(fun_puts_36),LITREF(lit_21),T125,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YgooSioSportYputs);
  if (T129 != YPfalse) {
    T128 = VARREF(YgooSioSportYputs);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_puts_36;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  T126 = VARSET(YgooSioSportYputs,T127);
  T123 = T126;
  return T123;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooSmagnitude;

static USE_INFO use_infos[] = {
  {&module_info_runtimeSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooScollectionsScollection},
  {&module_info_gooScollectionsSsequence},
  {&module_info_gooScollectionsSbuffer},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"loc", &module_info_runtimeSboot, "loc"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"floor", &module_info_gooSmath, "floor"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"def", &module_info_runtimeSboot, "def"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"range-error", &module_info_gooScollectionsScollection, "range-error"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"new", &module_info_runtimeSboot, "new"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"do", &module_info_gooSmacros, "do"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"t=", &module_info_gooStypes, "t="},
  {"-", &module_info_gooSmath, "-"},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"$e", &module_info_gooSmath, "$e"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"logn", &module_info_gooSmath, "logn"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"as", &module_info_gooStypes, "as"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"ins!", &module_info_gooScollectionsSsequence, "ins!"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"head", &module_info_runtimeSboot, "head"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"t+", &module_info_gooStypes, "t+"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"app", &module_info_gooSmacros, "app"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"even?", &module_info_gooSmath, "even?"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"cos", &module_info_gooSmath, "cos"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"not", &module_info_runtimeSboot, "not"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"~", &module_info_gooSmath, "~"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"map", &module_info_gooSmacros, "map"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"error", &module_info_runtimeSboot, "error"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {">>", &module_info_gooSmath, ">>"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"ins", &module_info_gooScollectionsSsequence, "ins"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"match", &module_info_gooSmacros, "match"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"do-key-vals", &module_info_gooScollectionsSsequence, "do-key-vals"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"try", &module_info_runtimeSboot, "try"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"mod", &module_info_gooSmath, "mod"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {">", &module_info_gooSmagnitude, ">"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"vals-to-str", &module_info_gooScollectionsSsequence, "vals-to-str"},
  {"&", &module_info_gooSmath, "&"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"df", &module_info_runtimeSboot, "df"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"range-check?", &module_info_gooScollectionsSsequence, "range-check?"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"log", &module_info_gooSmath, "log"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"<", &module_info_gooSmagnitude, "<"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"do3", &module_info_gooScollectionsScollection, "do3"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"as-copy", &module_info_gooScollectionsScollection, "as-copy"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"if", &module_info_runtimeSboot, "if"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"=", &module_info_gooSmath, "="},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"range-check", &module_info_gooScollectionsSsequence, "range-check"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"or", &module_info_gooSmacros, "or"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"until", &module_info_gooSmacros, "until"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"and", &module_info_gooSmacros, "and"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"dup", &module_info_gooScollectionsScollection, "dup"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"let", &module_info_runtimeSboot, "let"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"finds", &module_info_gooScollectionsSsequence, "finds"},
  {"round", &module_info_gooSmath, "round"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"pow", &module_info_gooSmath, "pow"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"unless", &module_info_gooSmacros, "unless"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"puts", &YgooSioSportYputs},
  {"peek", &YgooSioSportYpeek},
  {"force-out", &YgooSioSportYforce_out},
  {"port-handle", &YgooSioSportYport_handle},
  {"<port>", &YgooSioSportYLportG},
  {"put", &YgooSioSportYput},
  {"<file-out-port>", &YgooSioSportYLfile_out_portG},
  {"with-port", NULL},
  {"open", &YgooSioSportYopen},
  {"newline", &YgooSioSportYnewline},
  {"---main-1---", NULL},
  {"in", &YgooSioSportYin},
  {"port-line", &YgooSioSportYport_line},
  {"out", &YgooSioSportYout},
  {"<out-port>", &YgooSioSportYLout_portG},
  {"ready?", &YgooSioSportYreadyQ},
  {"port-guts", &YgooSioSportYport_guts},
  {"port-handle-setter", &YgooSioSportYport_handle_setter},
  {"<file-port>", &YgooSioSportYLfile_portG},
  {"<str-port>", &YgooSioSportYLstr_portG},
  {"gets", &YgooSioSportYgets},
  {"port-index", &YgooSioSportYport_index},
  {"port-contents", &YgooSioSportYport_contents},
  {"port-guts-setter", &YgooSioSportYport_guts_setter},
  {"port-line-setter", &YgooSioSportYport_line_setter},
  {"<str-out-port>", &YgooSioSportYLstr_out_portG},
  {"port-index-setter", &YgooSioSportYport_index_setter},
  {"<in-port>", &YgooSioSportYLin_portG},
  {"get", &YgooSioSportYget},
  {"<file-in-port>", &YgooSioSportYLfile_in_portG},
  {"close", &YgooSioSportYclose},
  {"---main-0---", NULL},
  {"<str-in-port>", &YgooSioSportYLstr_in_portG},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<port>", "<port>"},
  {"put", "put"},
  {"<file-out-port>", "<file-out-port>"},
  {"force-out", "force-out"},
  {"with-port", "with-port"},
  {"open", "open"},
  {"newline", "newline"},
  {"in", "in"},
  {"port-line", "port-line"},
  {"port-contents", "port-contents"},
  {"<str-in-port>", "<str-in-port>"},
  {"out", "out"},
  {"<out-port>", "<out-port>"},
  {"ready?", "ready?"},
  {"peek", "peek"},
  {"<file-port>", "<file-port>"},
  {"<str-port>", "<str-port>"},
  {"gets", "gets"},
  {"port-index", "port-index"},
  {"port-line-setter", "port-line-setter"},
  {"<str-out-port>", "<str-out-port>"},
  {"port-index-setter", "port-index-setter"},
  {"<in-port>", "<in-port>"},
  {"get", "get"},
  {"<file-in-port>", "<file-in-port>"},
  {"close", "close"},
  {"puts", "puts"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSport;
MODULE_INFO module_info_gooSioSport = {
  "goo/io/port",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_runtimeSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooScollectionsScollection (void);
extern void load_module_gooScollectionsSsequence (void);
extern void load_module_gooScollectionsSbuffer (void);

/* EXPRESSION: */

extern void load_module_gooSioSport (void);

void load_module_gooSioSport (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_runtimeSboot();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooScollectionsScollection();
  load_module_gooScollectionsSsequence();
  load_module_gooScollectionsSbuffer();

  (P)YgooSioSportY___main_0___();
  (P)YgooSioSportY___main_1___();

}

/* END OF GENERATED CODE. */
