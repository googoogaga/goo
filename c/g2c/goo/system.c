/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(YgooSmathYabs,"goo/math","abs");
EXT(Ysig_naryQ,"runtime/boot","sig-nary?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLintG,"runtime/boot","<int>");
EXT(YLtupG,"runtime/boot","<tup>");
EXT(YLstrG,"runtime/boot","<str>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScollectionsScollectionYallQ,"goo/collections/collection","all?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"runtime/boot","fun-arity");
EXT(YTboot_macro_module_namesT,"runtime/boot","*boot-macro-module-names*");
EXT(YPprop,"runtime/boot","%prop");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YPisa,"runtime/boot","%isa");
EXT(YruntimeSruntimeYloc_val_setter,"runtime/runtime","loc-val-setter");
EXT(YgooScollectionsSbufferYbuf,"goo/collections/buffer","buf");
EXT(YgooScollectionsScollectionYadd,"goo/collections/collection","add");
EXT(Ytup,"runtime/boot","tup");
EXT(YgooScollectionsScollectionYany2Q,"goo/collections/collection","any2?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooScollectionsSsequenceYcatX,"goo/collections/sequence","cat!");
EXT(YgooSmagnitudeYmax,"goo/magnitude","max");
EXT(YLmagG,"runtime/boot","<mag>");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(Yhead_setter,"runtime/boot","head-setter");
EXT(Ytype_class,"runtime/boot","type-class");
EXT(Yunexec,"runtime/boot","unexec");
EXT(Yfun_sig_setter,"runtime/boot","fun-sig-setter");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YLunionG,"runtime/boot","<union>");
EXT(YgooScollectionsScollectionYnow_setter,"goo/collections/collection","now-setter");
EXT(YruntimeSruntimeYcurry,"runtime/runtime","curry");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScollectionsScollectionYnxt,"goo/collections/collection","nxt");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Ykeyboard_interrupt,"runtime/boot","keyboard-interrupt");
EXT(YruntimeSruntimeYloc_val,"runtime/runtime","loc-val");
EXT(YruntimeSruntimeYdefault_handler,"runtime/runtime","default-handler");
EXT(YgooScollectionsStableYid_hash,"goo/collections/table","id-hash");
EXT(Yhead,"runtime/boot","head");
EXT(YgooScollectionsScollectionYelt_or,"goo/collections/collection","elt-or");
EXT(YLnumG,"runtime/boot","<num>");
EXT(YLvecG,"runtime/boot","<vec>");
EXT(Yprop_getter,"runtime/boot","prop-getter");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScollectionsScollectionYinto,"goo/collections/collection","into");
EXT(YgooScollectionsScollectionYempty,"goo/collections/collection","empty");
EXT(Ywrong_number_arguments_error,"runtime/boot","wrong-number-arguments-error");
EXT(Yhandler_info_arguments,"runtime/boot","handler-info-arguments");
EXT(YgooScollectionsScollectionYnow_key,"goo/collections/collection","now-key");
EXT(Yclass_direct_props,"runtime/boot","class-direct-props");
EXT(YLmetG,"runtime/boot","<met>");
EXT(YgooScollectionsScollectionYzap,"goo/collections/collection","zap");
EXT(YgooSmagnitudeYmin,"goo/magnitude","min");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yprop_init,"runtime/boot","prop-init");
EXT(YgooScollectionsSassocYLassocsG,"goo/collections/assoc","<assocs>");
EXT(YgooScollectionsScollectionYmap2,"goo/collections/collection","map2");
EXT(Yfun_naryQ,"runtime/boot","fun-nary?");
EXT(YPdefine_method,"runtime/boot","%define-method");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScollectionsSsequenceYlast,"goo/collections/sequence","last");
EXT(YgooScollectionsScollectionYnow,"goo/collections/collection","now");
EXT(YLsubclassG,"runtime/boot","<subclass>");
EXT(YTmacros_okQT,"runtime/boot","*macros-ok?*");
EXT(YruntimeSruntimeYdescribe_condition,"runtime/runtime","describe-condition");
EXT(Yclass_descendents,"runtime/boot","class-descendents");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScollectionsStableYtab_hash,"goo/collections/table","tab-hash");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ygen_refs_setter,"runtime/boot","gen-refs-setter");
EXT(YgooScollectionsSlistYpush,"goo/collections/list","push");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(Yprop_value_setter,"runtime/boot","prop-value-setter");
EXT(YruntimeSruntimeYapp_args,"runtime/runtime","app-args");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLchrG,"runtime/boot","<chr>");
EXT(YLflatG,"runtime/boot","<flat>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYT,"goo/math","*");
EXT(YsubtypeQ,"runtime/boot","subtype?");
EXT(Ygen_refs,"runtime/boot","gen-refs");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ynot,"runtime/boot","not");
EXT(YLreplace_generic_restartG,"runtime/boot","<replace-generic-restart>");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YruntimeSruntimeYrcurry,"runtime/runtime","rcurry");
EXT(YgooScollectionsSsequenceY3rd,"goo/collections/sequence","3rd");
EXT(YgooScollectionsSsequenceYpos,"goo/collections/sequence","pos");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScollectionsScollectionYfill,"goo/collections/collection","fill");
EXT(YDmin_int,"runtime/boot","$min-int");
EXT(Yfab_sym,"runtime/boot","fab-sym");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ylst,"runtime/boot","lst");
EXT(YruntimeSruntimeYDdefault_handler_info,"runtime/runtime","$default-handler-info");
EXT(YgooSmagnitudeYGE,"goo/magnitude",">=");
EXT(YruntimeSruntimeYcondition_arguments,"runtime/runtime","condition-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Ysig_specs,"runtime/boot","sig-specs");
EXT(YOlst,"runtime/boot","@lst");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScollectionsStableYtab_test,"goo/collections/table","tab-test");
EXT(YgooSmacrosYmap,"goo/macros","map");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YLsingletonG,"runtime/boot","<singleton>");
EXT(YgooScollectionsScollectionYdel,"goo/collections/collection","del");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScollectionsSstringsYstring_repeat,"goo/collections/strings","string-repeat");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLfunG,"runtime/boot","<fun>");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YruntimeSruntimeYread,"runtime/runtime","read");
EXT(YTboot_macro_expandersT,"runtime/boot","*boot-macro-expanders*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yprop_boundQ,"runtime/boot","prop-bound?");
EXT(YgooScollectionsScollectionYlow_elt,"goo/collections/collection","low-elt");
EXT(YgooScollectionsScollectionYkeys,"goo/collections/collection","keys");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Ysig_val,"runtime/boot","sig-val");
EXT(YLlstG,"runtime/boot","<lst>");
EXT(Yfab_class,"runtime/boot","fab-class");
EXT(YLlogG,"runtime/boot","<log>");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YruntimeSruntimeYLhandler_infoG,"runtime/runtime","<handler-info>");
EXT(YgooScollectionsSstringsYstring_join,"goo/collections/strings","string-join");
EXT(Yfun_specs,"runtime/boot","fun-specs");
EXT(Ytype_object,"runtime/boot","type-object");
EXT(Yfun_name_setter,"runtime/boot","fun-name-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScollectionsSsequenceYrev,"goo/collections/sequence","rev");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScollectionsSsequenceY1st,"goo/collections/sequence","1st");
EXT(YgooScollectionsStableYcase_insensitive_string_equal,"goo/collections/table","case-insensitive-string-equal");
EXT(YgooScollectionsScollectionYenum,"goo/collections/collection","enum");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(Yadd_prop,"runtime/boot","add-prop");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmagnitudeYLE,"goo/magnitude","<=");
EXT(Yfile_opening_error,"runtime/boot","file-opening-error");
EXT(YgooScollectionsStableYDpermanent_hash_state,"goo/collections/table","$permanent-hash-state");
EXT(YgooScollectionsSrangeYrange_by,"goo/collections/range","range-by");
EXT(YTboot_macro_namesT,"runtime/boot","*boot-macro-names*");
EXT(YgooScollectionsScollectionYfind,"goo/collections/collection","find");
EXT(Ynil,"runtime/boot","nil");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScollectionsSbufferYlen_setter,"goo/collections/buffer","len-setter");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfun_name,"runtime/boot","fun-name");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YruntimeSruntimeYhandler_function,"runtime/runtime","handler-function");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScollectionsSstringYstr_to_num,"goo/collections/string","str-to-num");
EXT(YgooScollectionsSstringsYmap_str,"goo/collections/strings","map-str");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yobject_class,"runtime/boot","object-class");
EXT(Yprop_owner,"runtime/boot","prop-owner");
EXT(YgooScollectionsScollectionYLtabG,"goo/collections/collection","<tab>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yprop_value,"runtime/boot","prop-value");
EXT(Yclass_parents,"runtime/boot","class-parents");
EXT(YgooSmagnitudeYG,"goo/magnitude",">");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScollectionsSmapYfab_map,"goo/collections/map","fab-map");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScollectionsScollectionYkey_test,"goo/collections/collection","key-test");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YLseqG,"runtime/boot","<seq>");
EXT(YLanyG,"runtime/boot","<any>");
EXT(Yprop_type,"runtime/boot","prop-type");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yincongruent_method_error,"runtime/boot","incongruent-method-error");
EXT(YPwith_monitor,"runtime/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YruntimeSruntimeYidentity,"runtime/runtime","identity");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yclass_props,"runtime/boot","class-props");
EXT(YgooSmagnitudeYL,"goo/magnitude","<");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YruntimeSruntimeYcondition_message,"runtime/runtime","condition-message");
EXT(YPprop_unbound_error,"runtime/boot","%prop-unbound-error");
EXT(Yvec,"runtime/boot","vec");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScollectionsSsequenceYdel_dups,"goo/collections/sequence","del-dups");
EXT(YruntimeSruntimeYfab_handler,"runtime/runtime","fab-handler");
EXT(YgooScollectionsSbufferYLbufG,"goo/collections/buffer","<buf>");
EXT(YgooScollectionsStableYcase_insensitive_string_hash,"goo/collections/table","case-insensitive-string-hash");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScollectionsScollectionYkey_type,"goo/collections/collection","key-type");
EXT(YruntimeSruntimeYLconditionG,"runtime/runtime","<condition>");
EXT(Yfun_names,"runtime/boot","fun-names");
EXT(Yhandler_info_message,"runtime/boot","handler-info-message");
EXT(Yfind_setter,"runtime/boot","find-setter");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooScollectionsScollectionYfind_or,"goo/collections/collection","find-or");
EXT(YgooScollectionsSsequenceYsub_setter,"goo/collections/sequence","sub-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YcompilerSsyntaxYsexpr_signature_parameters,"compiler/syntax","sexpr-signature-parameters");
EXT(YOall2Q,"runtime/boot","@all2?");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScollectionsScollectionYfinQ,"goo/collections/collection","fin?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLcolG,"runtime/boot","<col>");
EXT(YLclassG,"runtime/boot","<class>");
EXT(Ysig_names,"runtime/boot","sig-names");
EXT(Yfab_gen,"runtime/boot","fab-gen");
EXT(YruntimeSruntimeYformat,"runtime/runtime","format");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScollectionsScollectionYelt_default,"goo/collections/collection","elt-default");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScollectionsSbufferYlenSfill_setter,"goo/collections/buffer","len/fill-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScollectionsSsequenceYdel_vals,"goo/collections/sequence","del-vals");
EXT(Yerror,"runtime/boot","error");
EXT(YruntimeSruntimeYapp_filename,"runtime/runtime","app-filename");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ytail_setter,"runtime/boot","tail-setter");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ysig_arity,"runtime/boot","sig-arity");
EXT(YgooScollectionsScollectionYfoldA,"goo/collections/collection","fold+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScollectionsScollectionYdo2,"goo/collections/collection","do2");
EXT(YPsymbols,"runtime/boot","%symbols");
EXT(YgooScollectionsSstringYstr,"goo/collections/string","str");
EXT(YgooScollectionsScollectionYlow_elt_setter,"goo/collections/collection","low-elt-setter");
EXT(YDmax_int,"runtime/boot","$max-int");
EXT(Yfind_getter,"runtime/boot","find-getter");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(Ytail,"runtime/boot","tail");
EXT(YgooScollectionsSrangeYrange,"goo/collections/range","range");
EXT(Ytype_error,"runtime/boot","type-error");
EXT(YgooScollectionsScollectionYelt_type,"goo/collections/collection","elt-type");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScollectionsSsequenceYbelow,"goo/collections/sequence","below");
EXT(YgooScollectionsScollectionYLenumG,"goo/collections/collection","<enum>");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLtypeG,"runtime/boot","<type>");
EXT(Yord_app_mets,"runtime/boot","ord-app-mets");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLlocG,"runtime/boot","<loc>");
EXT(YgooScollectionsSbufferYpop_lastX,"goo/collections/buffer","pop-last!");
EXT(YgooScollectionsScollectionYfab,"goo/collections/collection","fab");
EXT(Ytype_elts,"runtime/boot","type-elts");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScollectionsSrangeYfrom,"goo/collections/range","from");
EXT(YTreport_prop_unbound_errorsQT,"runtime/boot","*report-prop-unbound-errors?*");
EXT(YgooScollectionsStableYtab_gc_state,"goo/collections/table","tab-gc-state");
EXT(YTrestarts_okQT,"runtime/boot","*restarts-ok?*");
EXT(YruntimeSruntimeYLsimple_conditionG,"runtime/runtime","<simple-condition>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YPPmacro,"runtime/boot","%%macro");
EXT(YruntimeSruntimeYLsimple_errorG,"runtime/runtime","<simple-error>");
EXT(YgooScollectionsSassocYassocs_test,"goo/collections/assoc","assocs-test");
EXT(YgooScollectionsSsequenceYreject,"goo/collections/sequence","reject");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ymay_isaQ,"runtime/boot","may-isa?");
EXT(YgooScollectionsSlistYLlistG,"goo/collections/list","<list>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YLsigG,"runtime/boot","<sig>");
EXT(YLoptsG,"runtime/boot","<opts>");
EXT(YgooScollectionsStableYtab_shrink_threshold,"goo/collections/table","tab-shrink-threshold");
EXT(Ygen_add_met,"runtime/boot","gen-add-met");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yprop_setter,"runtime/boot","prop-setter");
EXT(YruntimeSruntimeYsig,"runtime/runtime","sig");
EXT(Yfun_val,"runtime/boot","fun-val");
EXT(YgooScollectionsStableYtab_growth_threshold,"goo/collections/table","tab-growth-threshold");
EXT(YgooScollectionsScollectionYmap_keyed,"goo/collections/collection","map-keyed");
EXT(YgooScollectionsSsequenceYsub,"goo/collections/sequence","sub");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooScollectionsScollectionYitems,"goo/collections/collection","items");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Ysig_unification_vars,"runtime/boot","sig-unification-vars");
EXT(Yunknown_function_error,"runtime/boot","unknown-function-error");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yclass_ancestors,"runtime/boot","class-ancestors");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScollectionsStableYtab_growth_factor,"goo/collections/table","tab-growth-factor");
EXT(YgooScollectionsSstepYfirst_then,"goo/collections/step","first-then");
EXT(YLsimple_handler_infoG,"runtime/boot","<simple-handler-info>");
EXT(Ysym_name,"runtime/boot","sym-name");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YruntimeSruntimeYLhandlerG,"runtime/runtime","<handler>");
EXT(Yclass_name,"runtime/boot","class-name");
EXT(YLfloG,"runtime/boot","<flo>");
EXT(YLsymG,"runtime/boot","<sym>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ymet_appQ,"runtime/boot","met-app?");
EXT(YgooScollectionsScollectionYaddX,"goo/collections/collection","add!");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ynew,"runtime/boot","new");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yobject_parents,"runtime/boot","object-parents");
EXT(YgooScollectionsScollectionYfold,"goo/collections/collection","fold");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YruntimeSruntimeYLserious_conditionG,"runtime/runtime","<serious-condition>");
EXT(Yfun_mets,"runtime/boot","fun-mets");
EXT(YOisaQ,"runtime/boot","@isa?");
EXT(YPsnul,"runtime/boot","%snul");
EXT(YruntimeSruntimeYcompose,"runtime/runtime","compose");
EXT(YgooScollectionsSstringYTprint_baseT,"goo/collections/string","*print-base*");
EXT(Ygen_src_setter,"runtime/boot","gen-src-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ynul,"runtime/boot","nul");
EXT(YgooScollectionsScollectionYelt_setter,"goo/collections/collection","elt-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScollectionsScollectionYdo_keyed,"goo/collections/collection","do-keyed");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScollectionsSsequenceYpick,"goo/collections/sequence","pick");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLpropG,"runtime/boot","<prop>");
EXT(YgooScollectionsSrangeYLrangeG,"goo/collections/range","<range>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScollectionsSbufferYpush_lastX,"goo/collections/buffer","push-last!");
EXT(YgooScollectionsScollectionYelts,"goo/collections/collection","elts");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScollectionsSsequenceYcat2,"goo/collections/sequence","cat2");
EXT(YgooScollectionsSstepYLstepG,"goo/collections/step","<step>");
EXT(YruntimeSruntimeYhandler_matchesQ,"runtime/runtime","handler-matches?");
EXT(YLgenG,"runtime/boot","<gen>");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YruntimeSruntimeYLerrorG,"runtime/runtime","<error>");
EXT(YgooScollectionsSlistYlist,"goo/collections/list","list");
EXT(Ygen_src,"runtime/boot","gen-src");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScollectionsSstringsYstring_split,"goo/collections/strings","string-split");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YisaQ,"runtime/boot","isa?");
EXT(Yobject_props,"runtime/boot","object-props");
EXT(YgooScollectionsSmapYLmapG,"goo/collections/map","<map>");
EXT(YgooScollectionsSlistYpop,"goo/collections/list","pop");
EXT(YgooScollectionsSstringYnum_to_str_base,"goo/collections/string","num-to-str-base");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScollectionsScollectionYmemQ,"goo/collections/collection","mem?");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScollectionsStableYLstr_tabG,"goo/collections/table","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YPvnul,"runtime/boot","%vnul");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YruntimeSruntimeYalways,"runtime/runtime","always");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_60);
DEFLIT(lit_52);
DEFLIT(lit_64);
DEFLIT(lit_14);
DEFLIT(lit_21);
DEFLIT(lit_18);
DEFLIT(lit_38);
DEFLIT(lit_65);
DEFLIT(lit_58);
DEFLIT(lit_51);
DEFLIT(lit_0);
DEFLIT(lit_27);
DEFLIT(lit_36);
DEFLIT(lit_48);
DEFLIT(lit_32);
DEFLIT(lit_13);
DEFLIT(lit_11);
DEFLIT(lit_3);
DEFLIT(lit_55);
DEFLIT(lit_37);
DEFLIT(lit_49);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_57);
DEFLIT(lit_29);
DEFLIT(lit_35);
DEFLIT(lit_69);
DEFLIT(lit_22);
DEFLIT(lit_68);
DEFLIT(lit_40);
DEFLIT(lit_6);
DEFLIT(lit_8);
DEFLIT(lit_62);
DEFLIT(lit_42);
DEFLIT(lit_47);
DEFLIT(lit_43);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_44);
DEFLIT(lit_34);
DEFLIT(lit_5);
DEFLIT(lit_45);
DEFLIT(lit_16);
DEFLIT(lit_4);
DEFLIT(lit_33);
DEFLIT(lit_12);
DEFLIT(lit_26);
DEFLIT(lit_19);
DEFLIT(lit_2);
DEFLIT(lit_17);
DEFLIT(lit_10);
DEFLIT(lit_63);
DEFLIT(lit_39);
DEFLIT(lit_15);
DEFLIT(lit_41);
DEFLIT(lit_20);
DEFLIT(lit_50);
DEFLIT(lit_54);
DEFLIT(lit_70);
DEFLIT(lit_24);
DEFLIT(lit_56);
DEFLIT(lit_23);
DEFLIT(lit_46);
DEFLIT(lit_67);
DEFLIT(lit_53);
DEFLIT(lit_59);
DEFLIT(lit_28);
DEFLIT(lit_31);
DEFLIT(lit_1);
DEFLIT(lit_61);
DEFLIT(lit_25);

/* FUNCTIONS: */

LOCFOR(fun_os_name_0);
LOCFOR(fun_os_val_1);
LOCFOR(fun_os_val_setter_2);
LOCFOR(fun_process_id_3);
LOCFOR(fun_loop_4);
LOCFOR(fun_base_path_5);
LOCFOR(fun_add_src_path_6);
LOCFOR(fun_add_tmp_path_7);
LOCFOR(fun_add_build_path_8);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_13);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
LOCFOR(fun_17);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_19);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
LOCFOR(fun_ensure_27);
FUNFOR(YgooSsystemYprobe_directory);
extern P YgooSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_os_name_0) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_1) {
  P s_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(s_, 0);
loop:
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_val(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_setter_2) {
  P v_,s_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
loop:
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

FUNCODEDEF(fun_process_id_3) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  T0 = (P)YPib(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_4) {
  P i_;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagnitudeYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
    T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
    if (T3 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T6 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),FREEREF(0),YPint((P)0),T7);
      T2 = T6;
    } else {
      T9 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
      a1 = T9;
      i_ = a1;
      goto loop;
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_base_path_5) {
  P filename_;
  P loopF1505;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_4,2);
  loopF1505 = T1;
  FUNINIT(loopF1505, 2,filename_,loopF1505);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF1505,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_6) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),5,VARREF(YgooSsystemYTgoo_rootT),VARREF(YgooSsystemYTpath_separatorT),LITREF(lit_21),VARREF(YgooSsystemYTpath_separatorT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_tmp_path_7) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),4,VARREF(YgooSsystemYTpath_separatorT),LITREF(lit_23),VARREF(YgooSsystemYTpath_separatorT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_8) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALLN(1,VARREF(YgooSmacrosYcat),7,VARREF(YgooSsystemYTgoo_rootT),VARREF(YgooSsystemYTpath_separatorT),LITREF(lit_26),VARREF(YgooSsystemYTpath_separatorT),builddir_,VARREF(YgooSsystemYTpath_separatorT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgoo_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYc_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYobj_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTobj_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYexe_filename) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTexe_extensionT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_mtime_13) {
  P filename_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T2 = (P)YPsu(filename_);
  T1 = (P)YPfile_mtime(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_existsQ) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_type) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcreate_directory) {
  P filename_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P component_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_43);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_44));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_45);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_46));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_47);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYpathname_to_components) {
  P pathname_;
  P T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(pathname_, 0);
loop:
  pathname_ = BOXFAB(pathname_);
  T2 = BOXVAL(pathname_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yerror),LITREF(lit_41));
  } else {
  }
  T6 = BOXVAL(pathname_);
  T5 = CALL1(1,VARREF(YgooScollectionsSsequenceYlast),T6);
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = BOXVAL(pathname_);
    T13 = BOXVAL(pathname_);
    T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T9 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),T10,YPint((P)0),T11);
    T8 = BOXVAL(pathname_) = T9;
  } else {
  }
  T15 = fun_17;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScollectionsSstringsYstring_split),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_19) {
  P component_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_43));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_45));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_51);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_47));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_52);
      } else {
        if (YPtrue != YPfalse) {
          T6 = component_;
        } else {
          T6 = YPfalse;
        }
        T4 = T6;
      }
      T2 = T4;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_to_pathname) {
  P components_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_50));
  } else {
  }
  T4 = fun_19;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,components_);
  T2 = CALL2(1,VARREF(YgooScollectionsSstringsYstring_join),T3,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YgooSsystemYlabel_components) {
  P components_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T2 = CALL1(1,VARREF(Yhead),components_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),components_);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T0 = T3;
  } else {
    T0 = Ynil;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYhierarchical_components) {
  P components_;
  P resultF1506;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(Yhead),components_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),components_);
    T1 = T4;
  } else {
    T1 = components_;
  }
  resultF1506 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF1506);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_55),components_);
  } else {
  }
  T0 = resultF1506;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF1507;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF1507 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF1507,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_57),components_);
  } else {
  }
  T0 = lastF1507;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF1511;
  P countF1510;
  P hierF1509;
  P labelF1508;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF1508 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF1509 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF1509);
  countF1510 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF1509);
  lastF1511 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF1511,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_59),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF1510,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1508,LITREF(lit_60));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF1510,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScollectionsSsequenceYsub),hierF1509,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1508,T15);
    T11 = T14;
  }
  T6 = T11;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF1512;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF1512 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF1512,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF1512,LITREF(lit_43));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Yerror),LITREF(lit_62));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_63));
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T5 = T8;
    }
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYparent_directory) {
  P name_;
  P componentsF1513;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1513 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF1513);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_27) {
  P c_;
  P nF1514;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF1514 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF1514);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF1514);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_68));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_69),nF1514);
      T5 = T9;
    } else {
      T5 = YPfalse;
    }
    T3 = T5;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYcomponents_last),c_);
    T11 = CALL2(1,VARREF(YisaQ),T12,VARREF(YLstrG));
    if (T11 != YPfalse) {
      T13 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),c_);
      CALL1(0,FREEREF(1),T13);
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF1514);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_70),nF1514);
        T15 = T16;
      } else {
        T15 = YPfalse;
      }
      T10 = T15;
    }
    T3 = T10;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYprobe_directory) {
  P name_;
  P ensureF1518;
  P hierF1517;
  P labelF1516;
  P componentsF1515;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1515 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF1515);
  labelF1516 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF1515);
  hierF1517 = T5;
  T6 = FUNSHELL(1,fun_ensure_27,2);
  ensureF1518 = T6;
  FUNINIT(ensureF1518, 2,labelF1516,ensureF1518);
  T7 = CALL1(0,ensureF1518,hierF1517);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF1519;
  P T95,T94,T93,T92,T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80;
  P T79,T78,T77,T76,T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64;
  P T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48;
  P T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32;
  P T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"os-name");
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_0 = YPmet(FUNCODEREF(fun_os_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YgooSsystemYos_name);
  if (T3 != YPfalse) {
    T2 = VARREF(YgooSsystemYos_name);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_os_name_0;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YgooSsystemYos_name,T1);
  lit_1 = YPPsym((P)"os-val");
  lit_2 = YPPsym((P)"s");
  T5 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_1 = YPmet(FUNCODEREF(fun_os_val_1),LITREF(lit_1),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YgooSsystemYos_val);
  if (T8 != YPfalse) {
    T7 = VARREF(YgooSsystemYos_val);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_os_val_1;
  T6 = CALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YgooSsystemYos_val,T6);
  lit_3 = YPPsym((P)"os-val-setter");
  lit_4 = YPPsym((P)"v");
  T10 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_2 = YPmet(FUNCODEREF(fun_os_val_setter_2),LITREF(lit_3),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YgooSsystemYos_val_setter);
  if (T13 != YPfalse) {
    T12 = VARREF(YgooSsystemYos_val_setter);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_os_val_setter_2;
  T11 = CALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_5 = YPPsym((P)"process-id");
  T15 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_3 = YPmet(FUNCODEREF(fun_process_id_3),LITREF(lit_5),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YgooSsystemYprocess_id);
  if (T18 != YPfalse) {
    T17 = VARREF(YgooSsystemYprocess_id);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_process_id_3;
  T16 = CALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YgooSsystemYprocess_id,T16);
  lit_6 = YPsb((P)"linux");
  lit_7 = YPsb((P)"/");
  lit_8 = YPsb((P)"win32");
  lit_9 = YPsb((P)"\\");
  lit_10 = YPsb((P)"/");
  T22 = CALL0(1,VARREF(YgooSsystemYos_name));
  T21 = CALL2(1,VARREF(YgooSmathYE),T22,LITREF(lit_6));
  if (T21 != YPfalse) {
    T20 = LITREF(lit_7);
  } else {
    T25 = CALL0(1,VARREF(YgooSsystemYos_name));
    T24 = CALL2(1,VARREF(YgooSmathYE),T25,LITREF(lit_8));
    if (T24 != YPfalse) {
      T23 = LITREF(lit_9);
    } else {
      if (YPtrue != YPfalse) {
        T26 = LITREF(lit_10);
      } else {
        T26 = YPfalse;
      }
      T23 = T26;
    }
    T20 = T23;
  }
  VARSET(YgooSsystemYTpath_separatorT,T20);
  lit_11 = YPPsym((P)"base-path");
  lit_12 = YPPsym((P)"filename");
  lit_13 = YPPsym((P)"loop");
  lit_14 = YPPsym((P)"i");
  lit_15 = YPsb((P)"");
  T28 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_4 = YPmet(FUNCODEREF(fun_loop_4),LITREF(lit_13),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_5 = YPmet(FUNCODEREF(fun_base_path_5),LITREF(lit_11),T27,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(YgooSsystemYbase_path);
  if (T31 != YPfalse) {
    T30 = VARREF(YgooSsystemYbase_path);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_base_path_5;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(YgooSsystemYbase_path,T29);
  lit_16 = YPsb((P)"GOO_ROOT");
  lit_17 = YPsb((P)"..");
  lit_18 = YPsb((P)"..");
  T34 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_16));
  env_rootF1519 = T34;
  T36 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF1519);
  if (T36 != YPfalse) {
    T39 = CALL0(1,VARREF(YruntimeSruntimeYapp_filename));
    T38 = CALL1(1,VARREF(YgooSsystemYbase_path),T39);
    T37 = CALLN(1,VARREF(YgooSmacrosYcat),4,T38,LITREF(lit_17),VARREF(YgooSsystemYTpath_separatorT),LITREF(lit_18));
    T35 = T37;
  } else {
    T35 = env_rootF1519;
  }
  T33 = T35;
  VARSET(YgooSsystemYTgoo_rootT,T33);
  lit_19 = YPPsym((P)"add-src-path");
  lit_20 = YPPsym((P)"relpath");
  lit_21 = YPsb((P)"SRC");
  T40 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_6 = YPmet(FUNCODEREF(fun_add_src_path_6),LITREF(lit_19),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YgooSsystemYadd_src_path);
  if (T43 != YPfalse) {
    T42 = VARREF(YgooSsystemYadd_src_path);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_add_src_path_6;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YgooSsystemYadd_src_path,T41);
  lit_22 = YPPsym((P)"add-tmp-path");
  lit_23 = YPsb((P)"tmp");
  T45 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_7 = YPmet(FUNCODEREF(fun_add_tmp_path_7),LITREF(lit_22),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YgooSsystemYadd_tmp_path);
  if (T48 != YPfalse) {
    T47 = VARREF(YgooSsystemYadd_tmp_path);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_add_tmp_path_7;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YgooSsystemYadd_tmp_path,T46);
  lit_24 = YPPsym((P)"add-build-path");
  lit_25 = YPPsym((P)"builddir");
  lit_26 = YPsb((P)"C");
  T50 = YPsig(YPPlist(2,LITREF(lit_25),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_8 = YPmet(FUNCODEREF(fun_add_build_path_8),LITREF(lit_24),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YgooSsystemYadd_build_path);
  if (T53 != YPfalse) {
    T52 = VARREF(YgooSsystemYadd_build_path);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_add_build_path_8;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YgooSsystemYadd_build_path,T51);
  lit_27 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_27));
  lit_28 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_28));
  lit_29 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_29));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_15));
  lit_30 = YPPsym((P)"goo-filename");
  lit_31 = YPPsym((P)"name");
  T55 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_30),T55,ENVNUL,PNUL,YPfalse);
  T56 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T56);
  lit_32 = YPPsym((P)"c-filename");
  T57 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_32),T57,ENVNUL,PNUL,YPfalse);
  T58 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T58);
  lit_33 = YPPsym((P)"obj-filename");
  T59 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_33),T59,ENVNUL,PNUL,YPfalse);
  T60 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T60);
  lit_34 = YPPsym((P)"exe-filename");
  T61 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_34),T61,ENVNUL,PNUL,YPfalse);
  T62 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T62);
  lit_35 = YPPsym((P)"file-mtime");
  T63 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_13 = YPmet(FUNCODEREF(fun_file_mtime_13),LITREF(lit_35),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(YgooSsystemYfile_mtime);
  if (T66 != YPfalse) {
    T65 = VARREF(YgooSsystemYfile_mtime);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_file_mtime_13;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(YgooSsystemYfile_mtime,T64);
  lit_36 = YPPsym((P)"file-exists?");
  T68 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_36),T68,ENVNUL,PNUL,YPfalse);
  T69 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T69);
  lit_37 = YPPsym((P)"file-type");
  T70 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_37),T70,ENVNUL,PNUL,YPfalse);
  T71 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T71);
  lit_38 = YPPsym((P)"create-directory");
  T72 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_38),T72,ENVNUL,PNUL,YPfalse);
  T73 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T73);
  lit_39 = YPPsym((P)"pathname-to-components");
  lit_40 = YPPsym((P)"pathname");
  lit_41 = YPsb((P)"Can't convert empty an pathname to components.\n");
  lit_42 = YPPsym((P)"component");
  lit_43 = YPPsym((P)"root");
  lit_44 = YPsb((P)"..");
  lit_45 = YPPsym((P)"up");
  lit_46 = YPsb((P)".");
  lit_47 = YPPsym((P)"current");
  T75 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(1,LITREF(lit_40)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_39),T74,ENVNUL,PNUL,YPfalse);
  T76 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T76);
  lit_48 = YPPsym((P)"components-to-pathname");
  lit_49 = YPPsym((P)"components");
  lit_50 = YPsb((P)"Can't convert empty components to a pathname.\n");
  lit_51 = YPsb((P)"..");
  lit_52 = YPsb((P)".");
  T78 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T78,ENVNUL,PNUL,YPfalse);
  T77 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_48),T77,ENVNUL,PNUL,YPfalse);
  T79 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T79);
  lit_53 = YPPsym((P)"label-components");
  T80 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_53),T80,ENVNUL,PNUL,YPfalse);
  T81 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T81);
  lit_54 = YPPsym((P)"hierarchical-components");
  lit_55 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T82 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_54),T82,ENVNUL,PNUL,YPfalse);
  T83 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T83);
  lit_56 = YPPsym((P)"components-last");
  lit_57 = YPsb((P)"No filename in %=.\n");
  T84 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_56),T84,ENVNUL,PNUL,YPfalse);
  T85 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T85);
  lit_58 = YPPsym((P)"components-basename");
  lit_59 = YPsb((P)"Can't compute basename of %=\n.");
  lit_60 = YPPlist(1,YPPsym((P)"current"));
  T86 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_58),T86,ENVNUL,PNUL,YPfalse);
  T87 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T87);
  lit_61 = YPPsym((P)"components-parent-directory");
  lit_62 = YPsb((P)"Can't calculate parent of root directory");
  lit_63 = YPPlist(1,YPPsym((P)"up"));
  T88 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_61),T88,ENVNUL,PNUL,YPfalse);
  T89 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T89);
  lit_64 = YPPsym((P)"parent-directory");
  T90 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_64),T90,ENVNUL,PNUL,YPfalse);
  T91 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T91);
  lit_65 = YPPsym((P)"probe-directory");
  lit_66 = YPPsym((P)"ensure");
  lit_67 = YPPsym((P)"c");
  lit_68 = YPPsym((P)"directory");
  lit_69 = YPsb((P)"%s is not a directory.\n");
  lit_70 = YPsb((P)"Don't know how to create the directory %s.\n");
  T93 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_27 = YPmet(FUNCODEREF(fun_ensure_27),LITREF(lit_66),T93,ENVNUL,PNUL,YPfalse);
  T92 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_65),T92,ENVNUL,PNUL,YPfalse);
  T94 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T94);
  T95 = YPfalse;
  return T95;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScollectionsSstrings;
extern MODULE_INFO module_info_runtimeSboot;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScollectionsScollection;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_runtimeSruntime;
extern MODULE_INFO module_info_gooScollectionsSbuffer;
extern MODULE_INFO module_info_gooScollectionsSsequence;
extern MODULE_INFO module_info_gooSmagnitude;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScollectionsStable;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScollectionsSassoc;
extern MODULE_INFO module_info_gooScollectionsSlist;
extern MODULE_INFO module_info_gooScollectionsSrange;
extern MODULE_INFO module_info_gooScollectionsSstring;
extern MODULE_INFO module_info_gooScollectionsSmap;
extern MODULE_INFO module_info_compilerSsyntax;
extern MODULE_INFO module_info_gooScollectionsSstep;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScollectionsSstrings},
  {&module_info_runtimeSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"set", &module_info_runtimeSboot, "set"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sig-nary?", &module_info_runtimeSboot, "sig-nary?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<int>", &module_info_runtimeSboot, "<int>"},
  {"<tup>", &module_info_runtimeSboot, "<tup>"},
  {"<str>", &module_info_runtimeSboot, "<str>"},
  {"get", &module_info_gooSioSport, "get"},
  {"%loc-off-setter", &module_info_runtimeSboot, "%loc-off-setter"},
  {"all?", &module_info_gooScollectionsScollection, "all?"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"fun-arity", &module_info_runtimeSboot, "fun-arity"},
  {"%vec", &module_info_runtimeSboot, "%vec"},
  {"fun", &module_info_runtimeSboot, "fun"},
  {"*boot-macro-module-names*", &module_info_runtimeSboot, "*boot-macro-module-names*"},
  {"%fi2f", &module_info_runtimeSboot, "%fi2f"},
  {"%prop", &module_info_runtimeSboot, "%prop"},
  {"as", &module_info_gooStypes, "as"},
  {"out", &module_info_gooSioSport, "out"},
  {"%isa", &module_info_runtimeSboot, "%isa"},
  {"%bb", &module_info_runtimeSboot, "%bb"},
  {"loc-val-setter", &module_info_runtimeSruntime, "loc-val-setter"},
  {"%eof-object", &module_info_runtimeSboot, "%eof-object"},
  {"buf", &module_info_gooScollectionsSbuffer, "buf"},
  {"try", &module_info_runtimeSboot, "try"},
  {"add", &module_info_gooScollectionsScollection, "add"},
  {"tup", &module_info_runtimeSboot, "tup"},
  {"any2?", &module_info_gooScollectionsScollection, "any2?"},
  {"%binding-name", &module_info_runtimeSboot, "%binding-name"},
  {"%ready?", &module_info_runtimeSboot, "%ready?"},
  {"%i<", &module_info_runtimeSboot, "%i<"},
  {"%pair", &module_info_runtimeSboot, "%pair"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"dp", &module_info_runtimeSboot, "dp"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"cat!", &module_info_gooScollectionsSsequence, "cat!"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"max", &module_info_gooSmagnitude, "max"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<mag>", &module_info_runtimeSboot, "<mag>"},
  {"%i+", &module_info_runtimeSboot, "%i+"},
  {"ds", &module_info_runtimeSboot, "ds"},
  {"head-setter", &module_info_runtimeSboot, "head-setter"},
  {"type-class", &module_info_runtimeSboot, "type-class"},
  {"unexec", &module_info_runtimeSboot, "unexec"},
  {"fun-sig-setter", &module_info_runtimeSboot, "fun-sig-setter"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"%cu", &module_info_runtimeSboot, "%cu"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<union>", &module_info_runtimeSboot, "<union>"},
  {"now-setter", &module_info_gooScollectionsScollection, "now-setter"},
  {"%build-runtime-modules", &module_info_runtimeSboot, "%build-runtime-modules"},
  {"curry", &module_info_runtimeSruntime, "curry"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"nxt", &module_info_gooScollectionsScollection, "nxt"},
  {"%f*", &module_info_runtimeSboot, "%f*"},
  {"%facos", &module_info_runtimeSboot, "%facos"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"~=", &module_info_gooSmath, "~="},
  {"loc", &module_info_runtimeSboot, "loc"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"@+", &module_info_runtimeSboot, "@+"},
  {"keyboard-interrupt", &module_info_runtimeSboot, "keyboard-interrupt"},
  {"loc-val", &module_info_runtimeSruntime, "loc-val"},
  {"default-handler", &module_info_runtimeSruntime, "default-handler"},
  {"@len", &module_info_runtimeSboot, "@len"},
  {"id-hash", &module_info_gooScollectionsStable, "id-hash"},
  {"head", &module_info_runtimeSboot, "head"},
  {"elt-or", &module_info_gooScollectionsScollection, "elt-or"},
  {"%flog", &module_info_runtimeSboot, "%flog"},
  {"when", &module_info_gooSmacros, "when"},
  {"<num>", &module_info_runtimeSboot, "<num>"},
  {"<vec>", &module_info_runtimeSboot, "<vec>"},
  {"prop-getter", &module_info_runtimeSboot, "prop-getter"},
  {"in", &module_info_gooSioSport, "in"},
  {"into", &module_info_gooScollectionsScollection, "into"},
  {"%os-val", &module_info_runtimeSboot, "%os-val"},
  {"empty", &module_info_gooScollectionsScollection, "empty"},
  {"wrong-number-arguments-error", &module_info_runtimeSboot, "wrong-number-arguments-error"},
  {"handler-info-arguments", &module_info_runtimeSboot, "handler-info-arguments"},
  {"now-key", &module_info_gooScollectionsScollection, "now-key"},
  {"class-direct-props", &module_info_runtimeSboot, "class-direct-props"},
  {"%file-exists?", &module_info_runtimeSboot, "%file-exists?"},
  {"mif", &module_info_runtimeSboot, "mif"},
  {"export", &module_info_runtimeSboot, "export"},
  {"<met>", &module_info_runtimeSboot, "<met>"},
  {"zap", &module_info_gooScollectionsScollection, "zap"},
  {"%fatan2", &module_info_runtimeSboot, "%fatan2"},
  {"min", &module_info_gooSmagnitude, "min"},
  {"%lu", &module_info_runtimeSboot, "%lu"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"prop-init", &module_info_runtimeSboot, "prop-init"},
  {"<assocs>", &module_info_gooScollectionsSassoc, "<assocs>"},
  {"%puts", &module_info_runtimeSboot, "%puts"},
  {"map2", &module_info_gooScollectionsScollection, "map2"},
  {"fun-nary?", &module_info_runtimeSboot, "fun-nary?"},
  {"%define-method", &module_info_runtimeSboot, "%define-method"},
  {"%iu", &module_info_runtimeSboot, "%iu"},
  {"app", &module_info_gooSmacros, "app"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"last", &module_info_gooScollectionsSsequence, "last"},
  {"%fu", &module_info_runtimeSboot, "%fu"},
  {"now", &module_info_gooScollectionsScollection, "now"},
  {"<subclass>", &module_info_runtimeSboot, "<subclass>"},
  {"*macros-ok?*", &module_info_runtimeSboot, "*macros-ok?*"},
  {"describe-condition", &module_info_runtimeSruntime, "describe-condition"},
  {"%f/", &module_info_runtimeSboot, "%f/"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_runtimeSboot, "class-descendents"},
  {"%fcos", &module_info_runtimeSboot, "%fcos"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%%sym", &module_info_runtimeSboot, "%%sym"},
  {"%i<<<", &module_info_runtimeSboot, "%i<<<"},
  {"tab-hash", &module_info_gooScollectionsStable, "tab-hash"},
  {"even?", &module_info_gooSmath, "even?"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"gen-refs-setter", &module_info_runtimeSboot, "gen-refs-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"push", &module_info_gooScollectionsSlist, "push"},
  {"dl", &module_info_runtimeSboot, "dl"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%fsqrt", &module_info_runtimeSboot, "%fsqrt"},
  {"fin", &module_info_runtimeSboot, "fin"},
  {"%file-mtime", &module_info_runtimeSboot, "%file-mtime"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"dc", &module_info_runtimeSboot, "dc"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%check-call-types", &module_info_runtimeSboot, "%check-call-types"},
  {"prop-value-setter", &module_info_runtimeSboot, "prop-value-setter"},
  {"app-args", &module_info_runtimeSruntime, "app-args"},
  {"1-", &module_info_gooSmath, "1-"},
  {"%unlink-stack", &module_info_runtimeSboot, "%unlink-stack"},
  {"<chr>", &module_info_runtimeSboot, "<chr>"},
  {"<flat>", &module_info_runtimeSboot, "<flat>"},
  {"%file-type", &module_info_runtimeSboot, "%file-type"},
  {"put", &module_info_gooSioSport, "put"},
  {"*", &module_info_gooSmath, "*"},
  {"%fb", &module_info_runtimeSboot, "%fb"},
  {"subtype?", &module_info_runtimeSboot, "subtype?"},
  {"use/export", &module_info_runtimeSboot, "use/export"},
  {"gen-refs", &module_info_runtimeSboot, "gen-refs"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"not", &module_info_runtimeSboot, "not"},
  {"<replace-generic-restart>", &module_info_runtimeSboot, "<replace-generic-restart>"},
  {"ct", &module_info_runtimeSboot, "ct"},
  {"%gen-src", &module_info_runtimeSboot, "%gen-src"},
  {"%app-filename", &module_info_runtimeSboot, "%app-filename"},
  {"%loc-val", &module_info_runtimeSboot, "%loc-val"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"rcurry", &module_info_runtimeSruntime, "rcurry"},
  {"3rd", &module_info_gooScollectionsSsequence, "3rd"},
  {"pos", &module_info_gooScollectionsSsequence, "pos"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"fill", &module_info_gooScollectionsScollection, "fill"},
  {"$min-int", &module_info_runtimeSboot, "$min-int"},
  {"fab-sym", &module_info_runtimeSboot, "fab-sym"},
  {"~", &module_info_gooSmath, "~"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"lst", &module_info_runtimeSboot, "lst"},
  {"$default-handler-info", &module_info_runtimeSruntime, "$default-handler-info"},
  {">=", &module_info_gooSmagnitude, ">="},
  {"condition-arguments", &module_info_runtimeSruntime, "condition-arguments"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"sig-specs", &module_info_runtimeSboot, "sig-specs"},
  {"%do-stack-frames", &module_info_runtimeSboot, "%do-stack-frames"},
  {"@lst", &module_info_runtimeSboot, "@lst"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"~==", &module_info_gooSmath, "~=="},
  {"tab-test", &module_info_gooScollectionsStable, "tab-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"%allocate-stack", &module_info_runtimeSboot, "%allocate-stack"},
  {"%sb", &module_info_runtimeSboot, "%sb"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<singleton>", &module_info_runtimeSboot, "<singleton>"},
  {"del", &module_info_gooScollectionsScollection, "del"},
  {">>", &module_info_gooSmath, ">>"},
  {"%met-code", &module_info_runtimeSboot, "%met-code"},
  {"%ftanh", &module_info_runtimeSboot, "%ftanh"},
  {"string-repeat", &module_info_gooScollectionsSstrings, "string-repeat"},
  {"round/", &module_info_gooSmath, "round/"},
  {"<fun>", &module_info_runtimeSboot, "<fun>"},
  {"@<", &module_info_runtimeSboot, "@<"},
  {"%fsinh", &module_info_runtimeSboot, "%fsinh"},
  {"1+", &module_info_gooSmath, "1+"},
  {"read", &module_info_runtimeSruntime, "read"},
  {"match", &module_info_gooSmacros, "match"},
  {"*boot-macro-expanders*", &module_info_runtimeSboot, "*boot-macro-expanders*"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"prop-bound?", &module_info_runtimeSboot, "prop-bound?"},
  {"low-elt", &module_info_gooScollectionsScollection, "low-elt"},
  {"dg", &module_info_runtimeSboot, "dg"},
  {"keys", &module_info_gooScollectionsScollection, "keys"},
  {"%gen-code-setter", &module_info_runtimeSboot, "%gen-code-setter"},
  {"sig-val", &module_info_runtimeSboot, "sig-val"},
  {"<lst>", &module_info_runtimeSboot, "<lst>"},
  {"fab-class", &module_info_runtimeSboot, "fab-class"},
  {"%fatan", &module_info_runtimeSboot, "%fatan"},
  {"<log>", &module_info_runtimeSboot, "<log>"},
  {"^", &module_info_gooSmath, "^"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<handler-info>", &module_info_runtimeSruntime, "<handler-info>"},
  {"string-join", &module_info_gooScollectionsSstrings, "string-join"},
  {"fun-specs", &module_info_runtimeSboot, "fun-specs"},
  {"type-object", &module_info_runtimeSboot, "type-object"},
  {"dss", &module_info_runtimeSboot, "dss"},
  {"fun-name-setter", &module_info_runtimeSboot, "fun-name-setter"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%velt-setter", &module_info_runtimeSboot, "%velt-setter"},
  {"rev", &module_info_gooScollectionsSsequence, "rev"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"1st", &module_info_gooScollectionsSsequence, "1st"},
  {"case-insensitive-string-equal", &module_info_gooScollectionsStable, "case-insensitive-string-equal"},
  {"quote", &module_info_runtimeSboot, "quote"},
  {"enum", &module_info_gooScollectionsScollection, "enum"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"add-prop", &module_info_runtimeSboot, "add-prop"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<=", &module_info_gooSmagnitude, "<="},
  {"file-opening-error", &module_info_runtimeSboot, "file-opening-error"},
  {"$permanent-hash-state", &module_info_gooScollectionsStable, "$permanent-hash-state"},
  {"range-by", &module_info_gooScollectionsSrange, "range-by"},
  {"%put", &module_info_runtimeSboot, "%put"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%i-", &module_info_runtimeSboot, "%i-"},
  {"*boot-macro-names*", &module_info_runtimeSboot, "*boot-macro-names*"},
  {"find", &module_info_gooScollectionsScollection, "find"},
  {"nil", &module_info_runtimeSboot, "nil"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"len-setter", &module_info_gooScollectionsSbuffer, "len-setter"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"%str", &module_info_runtimeSboot, "%str"},
  {"fun-name", &module_info_runtimeSboot, "fun-name"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"handler-function", &module_info_runtimeSruntime, "handler-function"},
  {"dm", &module_info_runtimeSboot, "dm"},
  {"str-to-num", &module_info_gooScollectionsSstring, "str-to-num"},
  {"map-str", &module_info_gooScollectionsSstrings, "map-str"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"object-class", &module_info_runtimeSboot, "object-class"},
  {"prop-owner", &module_info_runtimeSboot, "prop-owner"},
  {"<tab>", &module_info_gooScollectionsScollection, "<tab>"},
  {"%i&", &module_info_runtimeSboot, "%i&"},
  {"%im", &module_info_runtimeSboot, "%im"},
  {"%raw-call", &module_info_runtimeSboot, "%raw-call"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f<", &module_info_runtimeSboot, "%f<"},
  {"prop-value", &module_info_runtimeSboot, "prop-value"},
  {"class-parents", &module_info_runtimeSboot, "class-parents"},
  {"@oelt", &module_info_runtimeSboot, "@oelt"},
  {">", &module_info_gooSmagnitude, ">"},
  {"%f=", &module_info_runtimeSboot, "%f="},
  {"&", &module_info_gooSmath, "&"},
  {"%open-out-file", &module_info_runtimeSboot, "%open-out-file"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"fab-map", &module_info_gooScollectionsSmap, "fab-map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"|", &module_info_gooSmath, "|"},
  {"key-test", &module_info_gooScollectionsScollection, "key-test"},
  {"df", &module_info_runtimeSboot, "df"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<seq>", &module_info_runtimeSboot, "<seq>"},
  {"<any>", &module_info_runtimeSboot, "<any>"},
  {"prop-type", &module_info_runtimeSboot, "prop-type"},
  {"incongruent-method-error", &module_info_runtimeSboot, "incongruent-method-error"},
  {"%fcosh", &module_info_runtimeSboot, "%fcosh"},
  {"%with-monitor", &module_info_runtimeSboot, "%with-monitor"},
  {"quasiquote", &module_info_runtimeSboot, "quasiquote"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"identity", &module_info_runtimeSruntime, "identity"},
  {"%get", &module_info_runtimeSboot, "%get"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"class-props", &module_info_runtimeSboot, "class-props"},
  {"%loc-val-setter", &module_info_runtimeSboot, "%loc-val-setter"},
  {"%c=", &module_info_runtimeSboot, "%c="},
  {"<", &module_info_gooSmagnitude, "<"},
  {"condition-message", &module_info_runtimeSruntime, "condition-message"},
  {"%prop-unbound-error", &module_info_runtimeSboot, "%prop-unbound-error"},
  {"vec", &module_info_runtimeSboot, "vec"},
  {"close", &module_info_gooSioSport, "close"},
  {"del-dups", &module_info_gooScollectionsSsequence, "del-dups"},
  {"fab-handler", &module_info_runtimeSruntime, "fab-handler"},
  {"<buf>", &module_info_gooScollectionsSbuffer, "<buf>"},
  {"case-insensitive-string-hash", &module_info_gooScollectionsStable, "case-insensitive-string-hash"},
  {"%i*", &module_info_runtimeSboot, "%i*"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"key-type", &module_info_gooScollectionsScollection, "key-type"},
  {"<condition>", &module_info_runtimeSruntime, "<condition>"},
  {"fun-names", &module_info_runtimeSboot, "fun-names"},
  {"handler-info-message", &module_info_runtimeSboot, "handler-info-message"},
  {"find-setter", &module_info_runtimeSboot, "find-setter"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"find-or", &module_info_gooScollectionsScollection, "find-or"},
  {"if", &module_info_runtimeSboot, "if"},
  {"use", &module_info_runtimeSboot, "use"},
  {"%fun-reg", &module_info_runtimeSboot, "%fun-reg"},
  {"sub-setter", &module_info_gooScollectionsSsequence, "sub-setter"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"%open-in-file", &module_info_runtimeSboot, "%open-in-file"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-signature-parameters", &module_info_compilerSsyntax, "sexpr-signature-parameters"},
  {"@all2?", &module_info_runtimeSboot, "@all2?"},
  {"rep", &module_info_runtimeSboot, "rep"},
  {"fin?", &module_info_gooScollectionsScollection, "fin?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isa", &module_info_runtimeSboot, "isa"},
  {"or", &module_info_gooSmacros, "or"},
  {"macro-expand", &module_info_runtimeSboot, "macro-expand"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%i^", &module_info_runtimeSboot, "%i^"},
  {"until", &module_info_gooSmacros, "until"},
  {"%it/", &module_info_runtimeSboot, "%it/"},
  {"esc", &module_info_runtimeSboot, "esc"},
  {"<col>", &module_info_runtimeSboot, "<col>"},
  {"<class>", &module_info_runtimeSboot, "<class>"},
  {"sig-names", &module_info_runtimeSboot, "sig-names"},
  {"%current-in-port", &module_info_runtimeSboot, "%current-in-port"},
  {"fab-gen", &module_info_runtimeSboot, "fab-gen"},
  {"format", &module_info_runtimeSruntime, "format"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%next-methods", &module_info_runtimeSboot, "%next-methods"},
  {"elt-default", &module_info_gooScollectionsScollection, "elt-default"},
  {"%gen-refs", &module_info_runtimeSboot, "%gen-refs"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%loc-off", &module_info_runtimeSboot, "%loc-off"},
  {"len/fill-setter", &module_info_gooScollectionsSbuffer, "len/fill-setter"},
  {"def", &module_info_runtimeSboot, "def"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"mod", &module_info_gooSmath, "mod"},
  {"del-vals", &module_info_gooScollectionsSsequence, "del-vals"},
  {"error", &module_info_runtimeSboot, "error"},
  {"app-filename", &module_info_runtimeSruntime, "app-filename"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"%i>>>", &module_info_runtimeSboot, "%i>>>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"tail-setter", &module_info_runtimeSboot, "tail-setter"},
  {"+", &module_info_gooSmath, "+"},
  {"%close-in-port", &module_info_runtimeSboot, "%close-in-port"},
  {"<<", &module_info_gooSmath, "<<"},
  {"sig-arity", &module_info_runtimeSboot, "sig-arity"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"fold+", &module_info_gooScollectionsScollection, "fold+"},
  {"seq", &module_info_runtimeSboot, "seq"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"do2", &module_info_gooScollectionsScollection, "do2"},
  {"%selt", &module_info_runtimeSboot, "%selt"},
  {"and", &module_info_gooSmacros, "and"},
  {"%symbols", &module_info_runtimeSboot, "%symbols"},
  {"str", &module_info_gooScollectionsSstring, "str"},
  {"low-elt-setter", &module_info_gooScollectionsScollection, "low-elt-setter"},
  {"%invoke-debugger", &module_info_runtimeSboot, "%invoke-debugger"},
  {"ct-also", &module_info_runtimeSboot, "ct-also"},
  {"$max-int", &module_info_runtimeSboot, "$max-int"},
  {"find-getter", &module_info_runtimeSboot, "find-getter"},
  {"%close-out-port", &module_info_runtimeSboot, "%close-out-port"},
  {"tail", &module_info_runtimeSboot, "tail"},
  {"range", &module_info_gooScollectionsSrange, "range"},
  {"type-error", &module_info_runtimeSboot, "type-error"},
  {"elt-type", &module_info_gooScollectionsScollection, "elt-type"},
  {"%velt", &module_info_runtimeSboot, "%velt"},
  {"%os-name", &module_info_runtimeSboot, "%os-name"},
  {"below", &module_info_gooScollectionsSsequence, "below"},
  {"<enum>", &module_info_gooScollectionsScollection, "<enum>"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"let", &module_info_runtimeSboot, "let"},
  {"<type>", &module_info_runtimeSboot, "<type>"},
  {"ord-app-mets", &module_info_runtimeSboot, "ord-app-mets"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"<loc>", &module_info_runtimeSboot, "<loc>"},
  {"pop-last!", &module_info_gooScollectionsSbuffer, "pop-last!"},
  {"@==", &module_info_runtimeSboot, "@=="},
  {"fab", &module_info_gooScollectionsScollection, "fab"},
  {"type-elts", &module_info_runtimeSboot, "type-elts"},
  {"from", &module_info_gooScollectionsSrange, "from"},
  {"*report-prop-unbound-errors?*", &module_info_runtimeSboot, "*report-prop-unbound-errors?*"},
  {"tab-gc-state", &module_info_gooScollectionsStable, "tab-gc-state"},
  {"*restarts-ok?*", &module_info_runtimeSboot, "*restarts-ok?*"},
  {"<simple-condition>", &module_info_runtimeSruntime, "<simple-condition>"},
  {"round", &module_info_gooSmath, "round"},
  {"%%macro", &module_info_runtimeSboot, "%%macro"},
  {"<simple-error>", &module_info_runtimeSruntime, "<simple-error>"},
  {"assocs-test", &module_info_gooScollectionsSassoc, "assocs-test"},
  {"reject", &module_info_gooScollectionsSsequence, "reject"},
  {"%raw", &module_info_runtimeSboot, "%raw"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"%selt-setter", &module_info_runtimeSboot, "%selt-setter"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%f+", &module_info_runtimeSboot, "%f+"},
  {"open", &module_info_gooSioSport, "open"},
  {"%create-directory", &module_info_runtimeSboot, "%create-directory"},
  {"%iv", &module_info_runtimeSboot, "%iv"},
  {"may-isa?", &module_info_runtimeSboot, "may-isa?"},
  {"%sp-reg", &module_info_runtimeSboot, "%sp-reg"},
  {"<list>", &module_info_gooScollectionsSlist, "<list>"},
  {"%i!", &module_info_runtimeSboot, "%i!"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<sig>", &module_info_runtimeSboot, "<sig>"},
  {"<opts>", &module_info_runtimeSboot, "<opts>"},
  {"%f-", &module_info_runtimeSboot, "%f-"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%fasin", &module_info_runtimeSboot, "%fasin"},
  {"tab-shrink-threshold", &module_info_gooScollectionsStable, "tab-shrink-threshold"},
  {"gen-add-met", &module_info_runtimeSboot, "gen-add-met"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"prop-setter", &module_info_runtimeSboot, "prop-setter"},
  {"sig", &module_info_runtimeSruntime, "sig"},
  {"fun-val", &module_info_runtimeSboot, "fun-val"},
  {"tab-growth-threshold", &module_info_gooScollectionsStable, "tab-growth-threshold"},
  {"map-keyed", &module_info_gooScollectionsScollection, "map-keyed"},
  {"sub", &module_info_gooScollectionsSsequence, "sub"},
  {"%cb", &module_info_runtimeSboot, "%cb"},
  {"%ft", &module_info_runtimeSboot, "%ft"},
  {"%app-args", &module_info_runtimeSboot, "%app-args"},
  {"items", &module_info_gooScollectionsScollection, "items"},
  {"len", &module_info_gooStypes, "len"},
  {"sig-unification-vars", &module_info_runtimeSboot, "sig-unification-vars"},
  {"unknown-function-error", &module_info_runtimeSboot, "unknown-function-error"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"t<", &module_info_gooStypes, "t<"},
  {"bound?", &module_info_runtimeSboot, "bound?"},
  {"%lb", &module_info_runtimeSboot, "%lb"},
  {"class-ancestors", &module_info_runtimeSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_runtimeSboot, "%sp-reg-setter"},
  {"%eq?", &module_info_runtimeSboot, "%eq?"},
  {"%i>>", &module_info_runtimeSboot, "%i>>"},
  {"%slen", &module_info_runtimeSboot, "%slen"},
  {"%ib", &module_info_runtimeSboot, "%ib"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%force-out", &module_info_runtimeSboot, "%force-out"},
  {"tab-growth-factor", &module_info_gooScollectionsStable, "tab-growth-factor"},
  {"first-then", &module_info_gooScollectionsSstep, "first-then"},
  {"<simple-handler-info>", &module_info_runtimeSboot, "<simple-handler-info>"},
  {"%os-val-setter", &module_info_runtimeSboot, "%os-val-setter"},
  {"sym-name", &module_info_runtimeSboot, "sym-name"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"<handler>", &module_info_runtimeSruntime, "<handler>"},
  {"class-name", &module_info_runtimeSboot, "class-name"},
  {"%peek", &module_info_runtimeSboot, "%peek"},
  {"<flo>", &module_info_runtimeSboot, "<flo>"},
  {"<sym>", &module_info_runtimeSboot, "<sym>"},
  {"for", &module_info_gooSmacros, "for"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"%current-out-port", &module_info_runtimeSboot, "%current-out-port"},
  {"met-app?", &module_info_runtimeSboot, "met-app?"},
  {"add!", &module_info_gooScollectionsScollection, "add!"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"new", &module_info_runtimeSboot, "new"},
  {"%fpow", &module_info_runtimeSboot, "%fpow"},
  {"%gen-code", &module_info_runtimeSboot, "%gen-code"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%su", &module_info_runtimeSboot, "%su"},
  {"%flo-bits", &module_info_runtimeSboot, "%flo-bits"},
  {"object-parents", &module_info_runtimeSboot, "object-parents"},
  {"fold", &module_info_gooScollectionsScollection, "fold"},
  {"<serious-condition>", &module_info_runtimeSruntime, "<serious-condition>"},
  {"fun-mets", &module_info_runtimeSboot, "fun-mets"},
  {"@isa?", &module_info_runtimeSboot, "@isa?"},
  {"%snul", &module_info_runtimeSboot, "%snul"},
  {"compose", &module_info_runtimeSruntime, "compose"},
  {"*print-base*", &module_info_gooScollectionsSstring, "*print-base*"},
  {"%i<<", &module_info_runtimeSboot, "%i<<"},
  {"gen-src-setter", &module_info_runtimeSboot, "gen-src-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"do", &module_info_gooSmacros, "do"},
  {"%process-module", &module_info_runtimeSboot, "%process-module"},
  {"%i=", &module_info_runtimeSboot, "%i="},
  {"%ftan", &module_info_runtimeSboot, "%ftan"},
  {"nul", &module_info_runtimeSboot, "nul"},
  {"elt-setter", &module_info_gooScollectionsScollection, "elt-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"do-keyed", &module_info_gooScollectionsScollection, "do-keyed"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"t=", &module_info_gooStypes, "t="},
  {"pick", &module_info_gooScollectionsSsequence, "pick"},
  {"-", &module_info_gooSmath, "-"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<prop>", &module_info_runtimeSboot, "<prop>"},
  {"<range>", &module_info_gooScollectionsSrange, "<range>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push-last!", &module_info_gooScollectionsSbuffer, "push-last!"},
  {"elts", &module_info_gooScollectionsScollection, "elts"},
  {"%untag", &module_info_runtimeSboot, "%untag"},
  {"/", &module_info_gooSmath, "/"},
  {"cat2", &module_info_gooScollectionsSsequence, "cat2"},
  {"<step>", &module_info_gooScollectionsSstep, "<step>"},
  {"handler-matches?", &module_info_runtimeSruntime, "handler-matches?"},
  {"<gen>", &module_info_runtimeSboot, "<gen>"},
  {"<error>", &module_info_runtimeSruntime, "<error>"},
  {"list", &module_info_gooScollectionsSlist, "list"},
  {"%fsin", &module_info_runtimeSboot, "%fsin"},
  {"gen-src", &module_info_runtimeSboot, "gen-src"},
  {"string-split", &module_info_gooScollectionsSstrings, "string-split"},
  {"%i?", &module_info_runtimeSboot, "%i?"},
  {"isa?", &module_info_runtimeSboot, "isa?"},
  {"object-props", &module_info_runtimeSboot, "object-props"},
  {"%c<", &module_info_runtimeSboot, "%c<"},
  {"@olen", &module_info_runtimeSboot, "@olen"},
  {"<map>", &module_info_gooScollectionsSmap, "<map>"},
  {"pop", &module_info_gooScollectionsSlist, "pop"},
  {"num-to-str-base", &module_info_gooScollectionsSstring, "num-to-str-base"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"case", &module_info_gooSmacros, "case"},
  {"%vlen", &module_info_runtimeSboot, "%vlen"},
  {"mem?", &module_info_gooScollectionsScollection, "mem?"},
  {"dv", &module_info_runtimeSboot, "dv"},
  {"<str-tab>", &module_info_gooScollectionsStable, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%vnul", &module_info_runtimeSboot, "%vnul"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"always", &module_info_runtimeSruntime, "always"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"process-id", &YgooSsystemYprocess_id},
  {"file-exists?", &YgooSsystemYfile_existsQ},
  {"hierarchical-components", &YgooSsystemYhierarchical_components},
  {"---main-0---", NULL},
  {"add-tmp-path", &YgooSsystemYadd_tmp_path},
  {"*obj-extension*", &YgooSsystemYTobj_extensionT},
  {"components-parent-directory", &YgooSsystemYcomponents_parent_directory},
  {"add-build-path", &YgooSsystemYadd_build_path},
  {"pathname-to-components", &YgooSsystemYpathname_to_components},
  {"label-components", &YgooSsystemYlabel_components},
  {"add-src-path", &YgooSsystemYadd_src_path},
  {"*goo-root*", &YgooSsystemYTgoo_rootT},
  {"os-val-setter", &YgooSsystemYos_val_setter},
  {"os-name", &YgooSsystemYos_name},
  {"%pid", NULL},
  {"file-mtime", &YgooSsystemYfile_mtime},
  {"goo-filename", &YgooSsystemYgoo_filename},
  {"components-basename", &YgooSsystemYcomponents_basename},
  {"create-directory", &YgooSsystemYcreate_directory},
  {"*goo-extension*", &YgooSsystemYTgoo_extensionT},
  {"os-val", &YgooSsystemYos_val},
  {"*c-extension*", &YgooSsystemYTc_extensionT},
  {"exe-filename", &YgooSsystemYexe_filename},
  {"components-last", &YgooSsystemYcomponents_last},
  {"file-type", &YgooSsystemYfile_type},
  {"base-path", &YgooSsystemYbase_path},
  {"*exe-extension*", &YgooSsystemYTexe_extensionT},
  {"*path-separator*", &YgooSsystemYTpath_separatorT},
  {"components-to-pathname", &YgooSsystemYcomponents_to_pathname},
  {"probe-directory", &YgooSsystemYprobe_directory},
  {"obj-filename", &YgooSsystemYobj_filename},
  {"parent-directory", &YgooSsystemYparent_directory},
  {"c-filename", &YgooSsystemYc_filename},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"process-id", "process-id"},
  {"file-exists?", "file-exists?"},
  {"hierarchical-components", "hierarchical-components"},
  {"add-tmp-path", "add-tmp-path"},
  {"c-filename", "c-filename"},
  {"components-parent-directory", "components-parent-directory"},
  {"add-build-path", "add-build-path"},
  {"pathname-to-components", "pathname-to-components"},
  {"label-components", "label-components"},
  {"add-src-path", "add-src-path"},
  {"*goo-root*", "*goo-root*"},
  {"os-val-setter", "os-val-setter"},
  {"os-name", "os-name"},
  {"file-mtime", "file-mtime"},
  {"goo-filename", "goo-filename"},
  {"*exe-extension*", "*exe-extension*"},
  {"components-basename", "components-basename"},
  {"create-directory", "create-directory"},
  {"*goo-extension*", "*goo-extension*"},
  {"*obj-extension*", "*obj-extension*"},
  {"os-val", "os-val"},
  {"*c-extension*", "*c-extension*"},
  {"exe-filename", "exe-filename"},
  {"probe-directory", "probe-directory"},
  {"components-last", "components-last"},
  {"file-type", "file-type"},
  {"*path-separator*", "*path-separator*"},
  {"components-to-pathname", "components-to-pathname"},
  {"obj-filename", "obj-filename"},
  {"parent-directory", "parent-directory"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSsystem;
MODULE_INFO module_info_gooSsystem = {
  "goo/system",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooScollectionsSstrings (void);
extern void load_module_runtimeSboot (void);

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScollectionsSstrings();
  load_module_runtimeSboot();

  (P)YgooSsystemY___main_0___();

}

/* END OF GENERATED CODE. */
