/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYsinh,"goo/math","sinh");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YLtypeG,"goo/boot","<type>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Ynew,"goo/boot","new");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPisa,"goo/boot","%isa");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYT,"goo/math","*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSvecYpop_lastX,"goo/cols/vec","pop-last!");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSvecYpush_lastX,"goo/cols/vec","push-last!");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_20);
DEFLIT(lit_8);
DEFLIT(lit_52);
DEFLIT(lit_47);
DEFLIT(lit_1);
DEFLIT(lit_44);
DEFLIT(lit_18);
DEFLIT(lit_17);
DEFLIT(lit_30);
DEFLIT(lit_10);
DEFLIT(lit_53);
DEFLIT(lit_12);
DEFLIT(lit_14);
DEFLIT(lit_32);
DEFLIT(lit_28);
DEFLIT(lit_37);
DEFLIT(lit_56);
DEFLIT(lit_3);
DEFLIT(lit_62);
DEFLIT(lit_59);
DEFLIT(lit_48);
DEFLIT(lit_0);
DEFLIT(lit_27);
DEFLIT(lit_36);
DEFLIT(lit_16);
DEFLIT(lit_50);
DEFLIT(lit_5);
DEFLIT(lit_60);
DEFLIT(lit_70);
DEFLIT(lit_2);
DEFLIT(lit_13);
DEFLIT(lit_69);
DEFLIT(lit_57);
DEFLIT(lit_38);
DEFLIT(lit_24);
DEFLIT(lit_41);
DEFLIT(lit_11);
DEFLIT(lit_21);
DEFLIT(lit_68);
DEFLIT(lit_58);
DEFLIT(lit_7);
DEFLIT(lit_31);
DEFLIT(lit_66);
DEFLIT(lit_29);
DEFLIT(lit_55);
DEFLIT(lit_34);
DEFLIT(lit_42);
DEFLIT(lit_43);
DEFLIT(lit_45);
DEFLIT(lit_64);
DEFLIT(lit_49);
DEFLIT(lit_23);
DEFLIT(lit_54);
DEFLIT(lit_46);
DEFLIT(lit_61);
DEFLIT(lit_22);
DEFLIT(lit_63);
DEFLIT(lit_51);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_4);
DEFLIT(lit_65);
DEFLIT(lit_26);
DEFLIT(lit_40);
DEFLIT(lit_39);
DEFLIT(lit_19);
DEFLIT(lit_35);
DEFLIT(lit_67);
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
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
    T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
    if (T3 != YPfalse) {
      T7 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T6 = CALL3(1,VARREF(YgooScolsSseqYsub),FREEREF(0),YPint((P)0),T7);
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
  P loopF1577;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_4,2);
  loopF1577 = T1;
  FUNINIT(loopF1577, 2,filename_,loopF1577);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF1577,T3);
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
  T5 = CALL1(1,VARREF(YgooScolsSseqYlast),T6);
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = BOXVAL(pathname_);
    T13 = BOXVAL(pathname_);
    T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),T11);
    T8 = BOXVAL(pathname_) = T9;
  } else {
  }
  T15 = fun_17;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSstrYstring_split),T17,T18);
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
  T2 = CALL2(1,VARREF(YgooScolsSstrYstring_join),T3,VARREF(YgooSsystemYTpath_separatorT));
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
  P resultF1578;
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
  resultF1578 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF1578);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_55),components_);
  } else {
  }
  T0 = resultF1578;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF1579;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF1579 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF1579,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_57),components_);
  } else {
  }
  T0 = lastF1579;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF1583;
  P countF1582;
  P hierF1581;
  P labelF1580;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF1580 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF1581 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF1581);
  countF1582 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF1581);
  lastF1583 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF1583,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_59),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF1582,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1580,LITREF(lit_60));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF1582,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF1581,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF1580,T15);
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
  P lastF1584;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF1584 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF1584,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF1584,LITREF(lit_43));
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
  P componentsF1585;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1585 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF1585);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_27) {
  P c_;
  P nF1586;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF1586 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF1586);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF1586);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_68));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_69),nF1586);
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
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF1586);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_70),nF1586);
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
  P ensureF1590;
  P hierF1589;
  P labelF1588;
  P componentsF1587;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF1587 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF1587);
  labelF1588 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF1587);
  hierF1589 = T5;
  T6 = FUNSHELL(1,fun_ensure_27,2);
  ensureF1590 = T6;
  FUNINIT(ensureF1590, 2,labelF1588,ensureF1590);
  T7 = CALL1(0,ensureF1590,hierF1589);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF1591;
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
  env_rootF1591 = T34;
  T36 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF1591);
  if (T36 != YPfalse) {
    T39 = CALL0(1,VARREF(YgooSruntimeYapp_filename));
    T38 = CALL1(1,VARREF(YgooSsystemYbase_path),T39);
    T37 = CALLN(1,VARREF(YgooSmacrosYcat),4,T38,LITREF(lit_17),VARREF(YgooSsystemYTpath_separatorT),LITREF(lit_18));
    T35 = T37;
  } else {
    T35 = env_rootF1591;
  }
  T33 = T35;
  VARSET(YgooSsystemYTgoo_rootT,T33);
  lit_19 = YPPsym((P)"add-src-path");
  lit_20 = YPPsym((P)"relpath");
  lit_21 = YPsb((P)"src");
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
  lit_26 = YPsb((P)"c");
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
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_x8rSsyntax;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"quote", &module_info_gooSboot, "quote"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"items", &module_info_gooScolsScol, "items"},
  {"round", &module_info_gooSmath, "round"},
  {"loc", &module_info_gooSboot, "loc"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"len", &module_info_gooStypes, "len"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"min", &module_info_gooSmag, "min"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"as", &module_info_gooStypes, "as"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"$e", &module_info_gooSmath, "$e"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {">", &module_info_gooSmag, ">"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"always", &module_info_gooSruntime, "always"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"df", &module_info_gooSboot, "df"},
  {"floor", &module_info_gooSmath, "floor"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"for", &module_info_gooSmacros, "for"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {">=", &module_info_gooSmag, ">="},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<", &module_info_gooSmag, "<"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"dv", &module_info_gooSboot, "dv"},
  {"-", &module_info_gooSmath, "-"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"nul", &module_info_gooSboot, "nul"},
  {"if", &module_info_gooSboot, "if"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"packed", &module_info_gooSpacker, "packed"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"get", &module_info_gooSioSport, "get"},
  {"dg", &module_info_gooSboot, "dg"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"=", &module_info_gooSmath, "="},
  {"dss", &module_info_gooSboot, "dss"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%put", &module_info_gooSboot, "%put"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"abs", &module_info_gooSmath, "abs"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"<<", &module_info_gooSmath, "<<"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"op", &module_info_gooSmacros, "op"},
  {"not", &module_info_gooSboot, "not"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"asin", &module_info_gooSmath, "asin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"export", &module_info_gooSboot, "export"},
  {"<=", &module_info_gooSmag, "<="},
  {"~", &module_info_gooSmath, "~"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"even?", &module_info_gooSmath, "even?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"head", &module_info_gooSboot, "head"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"let", &module_info_gooSboot, "let"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"or", &module_info_gooSmacros, "or"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%su", &module_info_gooSboot, "%su"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"%im", &module_info_gooSboot, "%im"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"t*", &module_info_gooStypes, "t*"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"map", &module_info_gooSmacros, "map"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"&", &module_info_gooSmath, "&"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"atan", &module_info_gooSmath, "atan"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"while", &module_info_gooSmacros, "while"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"~=", &module_info_gooSmath, "~="},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"now", &module_info_gooScolsScol, "now"},
  {"mif", &module_info_gooSboot, "mif"},
  {"new", &module_info_gooSboot, "new"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {">>", &module_info_gooSmath, ">>"},
  {"^", &module_info_gooSmath, "^"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"do", &module_info_gooSmacros, "do"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"t+", &module_info_gooStypes, "t+"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"del", &module_info_gooScolsScol, "del"},
  {"/", &module_info_gooSmath, "/"},
  {"@+", &module_info_gooSboot, "@+"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"|", &module_info_gooSmath, "|"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"tup", &module_info_gooSboot, "tup"},
  {"out", &module_info_gooSioSport, "out"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"isa", &module_info_gooSboot, "isa"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"set", &module_info_gooSboot, "set"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"dm", &module_info_gooSboot, "dm"},
  {"close", &module_info_gooSioSport, "close"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"1-", &module_info_gooSmath, "1-"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"t?", &module_info_gooStypes, "t?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"@<", &module_info_gooSboot, "@<"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"when", &module_info_gooSmacros, "when"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"put", &module_info_gooSioSport, "put"},
  {"round/", &module_info_gooSmath, "round/"},
  {"rem", &module_info_gooSmath, "rem"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"nil", &module_info_gooSboot, "nil"},
  {"~==", &module_info_gooSmath, "~=="},
  {"popf", &module_info_gooSmacros, "popf"},
  {"%get", &module_info_gooSboot, "%get"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"match", &module_info_gooSmacros, "match"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"log", &module_info_gooSmath, "log"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"+", &module_info_gooSmath, "+"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"in", &module_info_gooSioSport, "in"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"*", &module_info_gooSmath, "*"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"1+", &module_info_gooSmath, "1+"},
  {"def", &module_info_gooSboot, "def"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"t<", &module_info_gooStypes, "t<"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"seq", &module_info_gooSboot, "seq"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"try", &module_info_gooSboot, "try"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"@len", &module_info_gooSboot, "@len"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"sin", &module_info_gooSmath, "sin"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"pop-last!", &module_info_gooScolsSvec, "pop-last!"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"pow", &module_info_gooSmath, "pow"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"until", &module_info_gooSmacros, "until"},
  {"and", &module_info_gooSmacros, "and"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"t=", &module_info_gooStypes, "t="},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"push-last!", &module_info_gooScolsSvec, "push-last!"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"app", &module_info_gooSmacros, "app"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"logn", &module_info_gooSmath, "logn"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"==", &module_info_gooSmacros, "=="},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"cos", &module_info_gooSmath, "cos"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"lst", &module_info_gooSboot, "lst"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"open", &module_info_gooSioSport, "open"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"format", &module_info_gooSruntime, "format"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"max", &module_info_gooSmag, "max"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"use", &module_info_gooSboot, "use"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"case", &module_info_gooSmacros, "case"},
  {"read", &module_info_gooSruntime, "read"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"tail", &module_info_gooSboot, "tail"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"error", &module_info_gooSboot, "error"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"tan", &module_info_gooSmath, "tan"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"add-src-path", &YgooSsystemYadd_src_path},
  {"parent-directory", &YgooSsystemYparent_directory},
  {"*goo-root*", &YgooSsystemYTgoo_rootT},
  {"c-filename", &YgooSsystemYc_filename},
  {"components-to-pathname", &YgooSsystemYcomponents_to_pathname},
  {"process-id", &YgooSsystemYprocess_id},
  {"*obj-extension*", &YgooSsystemYTobj_extensionT},
  {"hierarchical-components", &YgooSsystemYhierarchical_components},
  {"obj-filename", &YgooSsystemYobj_filename},
  {"os-val", &YgooSsystemYos_val},
  {"components-basename", &YgooSsystemYcomponents_basename},
  {"add-build-path", &YgooSsystemYadd_build_path},
  {"probe-directory", &YgooSsystemYprobe_directory},
  {"os-name", &YgooSsystemYos_name},
  {"create-directory", &YgooSsystemYcreate_directory},
  {"%pid", NULL},
  {"exe-filename", &YgooSsystemYexe_filename},
  {"*path-separator*", &YgooSsystemYTpath_separatorT},
  {"base-path", &YgooSsystemYbase_path},
  {"*c-extension*", &YgooSsystemYTc_extensionT},
  {"os-val-setter", &YgooSsystemYos_val_setter},
  {"add-tmp-path", &YgooSsystemYadd_tmp_path},
  {"*goo-extension*", &YgooSsystemYTgoo_extensionT},
  {"---main-0---", NULL},
  {"file-exists?", &YgooSsystemYfile_existsQ},
  {"components-parent-directory", &YgooSsystemYcomponents_parent_directory},
  {"label-components", &YgooSsystemYlabel_components},
  {"goo-filename", &YgooSsystemYgoo_filename},
  {"file-mtime", &YgooSsystemYfile_mtime},
  {"pathname-to-components", &YgooSsystemYpathname_to_components},
  {"file-type", &YgooSsystemYfile_type},
  {"*exe-extension*", &YgooSsystemYTexe_extensionT},
  {"components-last", &YgooSsystemYcomponents_last},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"add-src-path", "add-src-path"},
  {"parent-directory", "parent-directory"},
  {"*goo-root*", "*goo-root*"},
  {"c-filename", "c-filename"},
  {"components-to-pathname", "components-to-pathname"},
  {"process-id", "process-id"},
  {"*obj-extension*", "*obj-extension*"},
  {"hierarchical-components", "hierarchical-components"},
  {"obj-filename", "obj-filename"},
  {"os-val", "os-val"},
  {"components-basename", "components-basename"},
  {"add-build-path", "add-build-path"},
  {"probe-directory", "probe-directory"},
  {"os-name", "os-name"},
  {"create-directory", "create-directory"},
  {"components-parent-directory", "components-parent-directory"},
  {"exe-filename", "exe-filename"},
  {"*path-separator*", "*path-separator*"},
  {"*c-extension*", "*c-extension*"},
  {"os-val-setter", "os-val-setter"},
  {"add-tmp-path", "add-tmp-path"},
  {"*goo-extension*", "*goo-extension*"},
  {"file-exists?", "file-exists?"},
  {"label-components", "label-components"},
  {"file-mtime", "file-mtime"},
  {"goo-filename", "goo-filename"},
  {"pathname-to-components", "pathname-to-components"},
  {"file-type", "file-type"},
  {"*exe-extension*", "*exe-extension*"},
  {"components-last", "components-last"},
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
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSboot (void);

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSstr();
  load_module_gooSboot();

  (P)YgooSsystemY___main_0___();

}

/* END OF GENERATED CODE. */
