/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo/system */

EXT(Yclass_props,"goo/boot","class-props");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ytail,"goo/boot","tail");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Ymet_appQ,"goo/boot","met-app?");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooStypesYlen,"goo/types","len");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yfab_gen,"goo/boot","fab-gen");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_65);
DEFLIT(lit_76);
DEFLIT(lit_41);
DEFLIT(lit_63);
DEFLIT(lit_57);
DEFLIT(lit_18);
DEFLIT(lit_2);
DEFLIT(lit_24);
DEFLIT(lit_16);
DEFLIT(lit_33);
DEFLIT(lit_38);
DEFLIT(lit_81);
DEFLIT(lit_78);
DEFLIT(lit_11);
DEFLIT(lit_61);
DEFLIT(lit_19);
DEFLIT(lit_15);
DEFLIT(lit_70);
DEFLIT(lit_25);
DEFLIT(lit_5);
DEFLIT(lit_86);
DEFLIT(lit_45);
DEFLIT(lit_42);
DEFLIT(lit_8);
DEFLIT(lit_68);
DEFLIT(lit_3);
DEFLIT(lit_36);
DEFLIT(lit_66);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_79);
DEFLIT(lit_54);
DEFLIT(lit_30);
DEFLIT(lit_17);
DEFLIT(lit_13);
DEFLIT(lit_34);
DEFLIT(lit_64);
DEFLIT(lit_58);
DEFLIT(lit_69);
DEFLIT(lit_75);
DEFLIT(lit_35);
DEFLIT(lit_89);
DEFLIT(lit_50);
DEFLIT(lit_52);
DEFLIT(lit_7);
DEFLIT(lit_82);
DEFLIT(lit_55);
DEFLIT(lit_46);
DEFLIT(lit_29);
DEFLIT(lit_83);
DEFLIT(lit_92);
DEFLIT(lit_85);
DEFLIT(lit_26);
DEFLIT(lit_87);
DEFLIT(lit_32);
DEFLIT(lit_84);
DEFLIT(lit_43);
DEFLIT(lit_49);
DEFLIT(lit_6);
DEFLIT(lit_80);
DEFLIT(lit_88);
DEFLIT(lit_9);
DEFLIT(lit_48);
DEFLIT(lit_74);
DEFLIT(lit_4);
DEFLIT(lit_31);
DEFLIT(lit_60);
DEFLIT(lit_72);
DEFLIT(lit_71);
DEFLIT(lit_10);
DEFLIT(lit_28);
DEFLIT(lit_93);
DEFLIT(lit_77);
DEFLIT(lit_0);
DEFLIT(lit_23);
DEFLIT(lit_90);
DEFLIT(lit_14);
DEFLIT(lit_51);
DEFLIT(lit_1);
DEFLIT(lit_44);
DEFLIT(lit_22);
DEFLIT(lit_56);
DEFLIT(lit_20);
DEFLIT(lit_27);
DEFLIT(lit_47);
DEFLIT(lit_59);
DEFLIT(lit_53);
DEFLIT(lit_40);
DEFLIT(lit_12);
DEFLIT(lit_62);
DEFLIT(lit_73);
DEFLIT(lit_37);
DEFLIT(lit_21);
DEFLIT(lit_91);

/* FUNCTIONS: */

LOCFOR(fun_os_name_0);
LOCFOR(fun_os_val_1);
LOCFOR(fun_os_val_setter_2);
LOCFOR(fun_process_id_3);
LOCFOR(fun_loop_4);
LOCFOR(fun_base_path_5);
LOCFOR(fun_fab_path_6);
LOCFOR(fun_add_src_path_7);
LOCFOR(fun_add_goo_root_path_8);
LOCFOR(fun_add_goo_personal_root_path_9);
LOCFOR(fun_add_tmp_path_10);
LOCFOR(fun_add_build_path_11);
FUNFOR(YgooSsystemYgoo_filenameQ);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYgooc_filenameQ);
FUNFOR(YgooSsystemYgooc_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_19);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
FUNFOR(YgooSsystemYso_load);
LOCFOR(fun_24);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_26);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
LOCFOR(fun_ensure_34);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_x_7611_37);
LOCFOR(fun_38);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_os_name_0) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_1) {
  P s_;
  P T0,T1,T2;
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
  P T0,T1;
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
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  T0 = (P)YPib(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_4) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
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
  P loopF24030;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_4,2);
  loopF24030 = T1;
  FUNINIT(loopF24030, 2,filename_,loopF24030);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF24030,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_path_6) {
  P dirs_;
  P T0;
  P a1;
LINK_STACK();
  NARGS(dirs_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),dirs_,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_7) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_29),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_root_path_8) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_personal_root_path_9) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_tmp_path_10) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_15),LITREF(lit_33),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_11) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_36),builddir_,relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filenameQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgoo_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filename) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgoo_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filenameQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgooc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filename) {
  P name_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),name_);
  if (T1 != YPfalse) {
    T0 = name_;
  } else {
    T2 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTgooc_extensionT));
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
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
  RET(T0);
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
  RET(T0);
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
  RET(T0);
}

FUNCODEDEF(fun_file_mtime_19) {
  P filename_;
  P T0,T1,T2;
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
  P T0,T1;
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
  P T0,T1;
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
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYso_load) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = (P)YPsu(name_);
  T0 = (P)YgooSsystemYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_58);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_59));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_60);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_61));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_62);
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
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pathname_, 0);
loop:
  pathname_ = BOXFAB(pathname_);
  T2 = BOXVAL(pathname_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Yerror),LITREF(lit_56));
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
  T15 = fun_24;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_26) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_58));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_60));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_66);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_62));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_67);
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
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_65));
  } else {
  }
  T4 = fun_26;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,components_);
  T2 = CALL2(1,VARREF(YgooScolsSseqYjoin),T3,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YgooSsystemYlabel_components) {
  P components_;
  P T0,T1,T2,T3,T4;
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
  P resultF24031;
  P T0,T1,T2,T3,T4,T5,T6;
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
  resultF24031 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF24031);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(Yerror),LITREF(lit_70),components_);
  } else {
  }
  T0 = resultF24031;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF24032;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF24032 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF24032,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(Yerror),LITREF(lit_72),components_);
  } else {
  }
  T0 = lastF24032;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF24036;
  P countF24035;
  P hierF24034;
  P labelF24033;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF24033 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF24034 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF24034);
  countF24035 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF24034);
  lastF24036 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF24036,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_74),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF24035,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF24033,LITREF(lit_75));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF24035,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF24034,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF24033,T15);
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
  P lastF24037;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF24037 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF24037,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF24037,LITREF(lit_58));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(Yerror),LITREF(lit_77));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_78));
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
  P componentsF24038;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF24038 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF24038);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_ensure_34) {
  P c_;
  P nF24039;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF24039 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF24039);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF24039);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_83));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(Yerror),LITREF(lit_84),nF24039);
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
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF24039);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(Yerror),LITREF(lit_85),nF24039);
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
  P ensureF24043;
  P hierF24042;
  P labelF24041;
  P componentsF24040;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF24040 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF24040);
  labelF24041 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF24040);
  hierF24042 = T5;
  T6 = FUNSHELL(1,fun_ensure_34,2);
  ensureF24043 = T6;
  FUNINIT(ensureF24043, 2,labelF24041,ensureF24043);
  T7 = CALL1(0,ensureF24043,hierF24042);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P tmpF24051;
  P tmpF24050;
  P tmpF24049;
  P gooc_foundF24048;
  P goo_foundF24047;
  P gooc_fileF24046;
  P goo_fileF24045;
  P base_fileF24044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF24044 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF24044);
  goo_fileF24045 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF24044);
  gooc_fileF24046 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF24045);
  goo_foundF24047 = T7;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF24046);
  gooc_foundF24048 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF24044);
  tmpF24049 = T12;
  if (tmpF24049 != YPfalse) {
    T13 = goo_foundF24047;
  } else {
    T13 = YPfalse;
  }
  T11 = T13;
  if (T11 != YPfalse) {
    T10 = goo_fileF24045;
  } else {
    T16 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF24044);
    tmpF24050 = T16;
    if (tmpF24050 != YPfalse) {
      T17 = gooc_foundF24048;
    } else {
      T17 = YPfalse;
    }
    T15 = T17;
    if (T15 != YPfalse) {
      T14 = gooc_fileF24046;
    } else {
      tmpF24051 = goo_foundF24047;
      if (tmpF24051 != YPfalse) {
        T20 = gooc_foundF24048;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      if (T19 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF24045);
        T24 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF24046);
        T22 = CALL2(1,VARREF(YgooSmagYG),T23,T24);
        if (T22 != YPfalse) {
          T21 = goo_fileF24045;
        } else {
          T21 = gooc_fileF24046;
        }
        T18 = T21;
      } else {
        if (gooc_foundF24048 != YPfalse) {
          T25 = gooc_fileF24046;
        } else {
          if (goo_foundF24047 != YPfalse) {
            T26 = goo_fileF24045;
          } else {
            if (YPtrue != YPfalse) {
              T27 = YPfalse;
            } else {
              T27 = YPfalse;
            }
            T26 = T27;
          }
          T25 = T26;
        }
        T18 = T25;
      }
      T14 = T18;
    }
    T10 = T14;
  }
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_7611_37) {
  P x_7610_;
  P fileF24053;
  P pathF24052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_7610_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_7610_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_7610_);
    pathF24052 = T4;
    T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(0),pathF24052);
    fileF24053 = T6;
    if (fileF24053 != YPfalse) {
      T7 = CALL1(1,FREEREF(1),fileF24053);
    } else {
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_7610_);
    a1 = T9;
    x_7610_ = a1;
    goto loop;
    T5 = T8;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P return_;
  P x_7611F24054;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_x_7611_37,3);
  x_7611F24054 = T0;
  FUNINIT(x_7611F24054, 3,FREEREF(0),return_,x_7611F24054);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
  T1 = CALL1(0,x_7611F24054,T2);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_in_path) {
  P fname_,search_paths_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(search_paths_, 1);
loop:
  T1 = FUNFAB(fun_38,2,fname_,search_paths_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF24056;
  P env_rootF24055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135;
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
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPsym((P)"dirs");
  T33 = YPsig(YPPlist(1,LITREF(lit_17)),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPmet(FUNCODEREF(fun_fab_path_6),LITREF(lit_16),T33,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YgooSsystemYfab_path);
  if (T36 != YPfalse) {
    T35 = VARREF(YgooSsystemYfab_path);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_fab_path_6;
  T34 = CALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YgooSsystemYfab_path,T34);
  lit_18 = YPsb((P)"GOO_ROOT");
  T39 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF24055 = T39;
  T41 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF24055);
  if (T41 != YPfalse) {
    T43 = (P)YgooSsystemYPdefault_goo_root();
    T42 = (P)YPsb(T43);
    T40 = T42;
  } else {
    T40 = env_rootF24055;
  }
  T38 = T40;
  VARSET(YgooSsystemYTgoo_rootT,T38);
  lit_19 = YPsb((P)"HOME");
  lit_20 = YPsb((P)".goo");
  T45 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_19));
  T44 = CALL2(1,VARREF(YgooSsystemYfab_path),T45,LITREF(lit_20));
  VARSET(YgooSsystemYTgoo_personal_rootT,T44);
  lit_21 = YPsb((P)"mods");
  lit_22 = YPsb((P)"local");
  lit_23 = YPsb((P)"mods");
  lit_24 = YPsb((P)"mods");
  T47 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_21));
  T48 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_22),LITREF(lit_23));
  T49 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_24));
  T46 = CALL4(1,VARREF(Ylst),LITREF(lit_15),T47,T48,T49);
  VARSET(YgooSsystemYTmodule_search_pathT,T46);
  lit_25 = YPsb((P)"GOO_BUILD_ROOT");
  lit_26 = YPsb((P)".");
  T51 = CALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_25));
  env_rootF24056 = T51;
  T53 = CALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF24056);
  if (T53 != YPfalse) {
    T52 = LITREF(lit_26);
  } else {
    T52 = env_rootF24056;
  }
  T50 = T52;
  VARSET(YgooSsystemYTgoo_build_rootT,T50);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPsym((P)"relpath");
  lit_29 = YPsb((P)"src");
  T54 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPmet(FUNCODEREF(fun_add_src_path_7),LITREF(lit_27),T54,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YgooSsystemYadd_src_path);
  if (T57 != YPfalse) {
    T56 = VARREF(YgooSsystemYadd_src_path);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_add_src_path_7;
  T55 = CALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YgooSsystemYadd_src_path,T55);
  lit_30 = YPPsym((P)"add-goo-root-path");
  T59 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPmet(FUNCODEREF(fun_add_goo_root_path_8),LITREF(lit_30),T59,ENVNUL,PNUL,YPfalse);
  T62 = BOUNDP(YgooSsystemYadd_goo_root_path);
  if (T62 != YPfalse) {
    T61 = VARREF(YgooSsystemYadd_goo_root_path);
  } else {
    T61 = YPfalse;
  }
  T63 = fun_add_goo_root_path_8;
  T60 = CALL2(1,VARREF(YPdefine_method),T61,T63);
  VARSET(YgooSsystemYadd_goo_root_path,T60);
  lit_31 = YPPsym((P)"add-goo-personal-root-path");
  T64 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_9),LITREF(lit_31),T64,ENVNUL,PNUL,YPfalse);
  T67 = BOUNDP(YgooSsystemYadd_goo_personal_root_path);
  if (T67 != YPfalse) {
    T66 = VARREF(YgooSsystemYadd_goo_personal_root_path);
  } else {
    T66 = YPfalse;
  }
  T68 = fun_add_goo_personal_root_path_9;
  T65 = CALL2(1,VARREF(YPdefine_method),T66,T68);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T65);
  lit_32 = YPPsym((P)"add-tmp-path");
  lit_33 = YPsb((P)"tmp");
  T69 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPmet(FUNCODEREF(fun_add_tmp_path_10),LITREF(lit_32),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YgooSsystemYadd_tmp_path);
  if (T72 != YPfalse) {
    T71 = VARREF(YgooSsystemYadd_tmp_path);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_add_tmp_path_10;
  T70 = CALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YgooSsystemYadd_tmp_path,T70);
  lit_34 = YPPsym((P)"add-build-path");
  lit_35 = YPPsym((P)"builddir");
  lit_36 = YPsb((P)"c");
  T74 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_28)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPmet(FUNCODEREF(fun_add_build_path_11),LITREF(lit_34),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YgooSsystemYadd_build_path);
  if (T77 != YPfalse) {
    T76 = VARREF(YgooSsystemYadd_build_path);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_add_build_path_11;
  T75 = CALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YgooSsystemYadd_build_path,T75);
  lit_37 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_37));
  lit_38 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_38));
  lit_39 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_39));
  lit_40 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_40));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_15));
  lit_41 = YPPsym((P)"goo-filename?");
  lit_42 = YPPsym((P)"name");
  T79 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_41),T79,ENVNUL,PNUL,YPfalse);
  T80 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T80);
  lit_43 = YPPsym((P)"goo-filename");
  T81 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_43),T81,ENVNUL,PNUL,YPfalse);
  T82 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T82);
  lit_44 = YPPsym((P)"gooc-filename?");
  T83 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_44),T83,ENVNUL,PNUL,YPfalse);
  T84 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T84);
  lit_45 = YPPsym((P)"gooc-filename");
  T85 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_45),T85,ENVNUL,PNUL,YPfalse);
  T86 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T86);
  lit_46 = YPPsym((P)"c-filename");
  T87 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_46),T87,ENVNUL,PNUL,YPfalse);
  T88 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T88);
  lit_47 = YPPsym((P)"obj-filename");
  T89 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_47),T89,ENVNUL,PNUL,YPfalse);
  T90 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T90);
  lit_48 = YPPsym((P)"exe-filename");
  T91 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_48),T91,ENVNUL,PNUL,YPfalse);
  T92 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T92);
  lit_49 = YPPsym((P)"file-mtime");
  T93 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPmet(FUNCODEREF(fun_file_mtime_19),LITREF(lit_49),T93,ENVNUL,PNUL,YPfalse);
  T96 = BOUNDP(YgooSsystemYfile_mtime);
  if (T96 != YPfalse) {
    T95 = VARREF(YgooSsystemYfile_mtime);
  } else {
    T95 = YPfalse;
  }
  T97 = fun_file_mtime_19;
  T94 = CALL2(1,VARREF(YPdefine_method),T95,T97);
  VARSET(YgooSsystemYfile_mtime,T94);
  lit_50 = YPPsym((P)"file-exists?");
  T98 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_50),T98,ENVNUL,PNUL,YPfalse);
  T99 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T99);
  lit_51 = YPPsym((P)"file-type");
  T100 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_51),T100,ENVNUL,PNUL,YPfalse);
  T101 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T101);
  lit_52 = YPPsym((P)"create-directory");
  T102 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_52),T102,ENVNUL,PNUL,YPfalse);
  T103 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T103);
  lit_53 = YPPsym((P)"so-load");
  T104 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_53),T104,ENVNUL,PNUL,YPfalse);
  T105 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T105);
  lit_54 = YPPsym((P)"pathname-to-components");
  lit_55 = YPPsym((P)"pathname");
  lit_56 = YPsb((P)"Can't convert empty an pathname to components.\n");
  lit_57 = YPPsym((P)"component");
  lit_58 = YPPsym((P)"root");
  lit_59 = YPsb((P)"..");
  lit_60 = YPPsym((P)"up");
  lit_61 = YPsb((P)".");
  lit_62 = YPPsym((P)"current");
  T107 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T106 = YPsig(YPPlist(1,LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_54),T106,ENVNUL,PNUL,YPfalse);
  T108 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T108);
  lit_63 = YPPsym((P)"components-to-pathname");
  lit_64 = YPPsym((P)"components");
  lit_65 = YPsb((P)"Can't convert empty components to a pathname.\n");
  lit_66 = YPsb((P)"..");
  lit_67 = YPsb((P)".");
  T110 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_63),T109,ENVNUL,PNUL,YPfalse);
  T111 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T111);
  lit_68 = YPPsym((P)"label-components");
  T112 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_68),T112,ENVNUL,PNUL,YPfalse);
  T113 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T113);
  lit_69 = YPPsym((P)"hierarchical-components");
  lit_70 = YPsb((P)"Hierarchical portion of %= must not be empty.\n");
  T114 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_69),T114,ENVNUL,PNUL,YPfalse);
  T115 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T115);
  lit_71 = YPPsym((P)"components-last");
  lit_72 = YPsb((P)"No filename in %=.\n");
  T116 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_71),T116,ENVNUL,PNUL,YPfalse);
  T117 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T117);
  lit_73 = YPPsym((P)"components-basename");
  lit_74 = YPsb((P)"Can't compute basename of %=\n.");
  lit_75 = YPPlist(1,YPPsym((P)"current"));
  T118 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_73),T118,ENVNUL,PNUL,YPfalse);
  T119 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T119);
  lit_76 = YPPsym((P)"components-parent-directory");
  lit_77 = YPsb((P)"Can't calculate parent of root directory");
  lit_78 = YPPlist(1,YPPsym((P)"up"));
  T120 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_76),T120,ENVNUL,PNUL,YPfalse);
  T121 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T121);
  lit_79 = YPPsym((P)"parent-directory");
  T122 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_79),T122,ENVNUL,PNUL,YPfalse);
  T123 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T123);
  lit_80 = YPPsym((P)"probe-directory");
  lit_81 = YPPsym((P)"ensure");
  lit_82 = YPPsym((P)"c");
  lit_83 = YPPsym((P)"directory");
  lit_84 = YPsb((P)"%s is not a directory.\n");
  lit_85 = YPsb((P)"Don't know how to create the directory %s.\n");
  T125 = YPsig(YPPlist(1,LITREF(lit_82)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_34 = YPmet(FUNCODEREF(fun_ensure_34),LITREF(lit_81),T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(YPPlist(1,LITREF(lit_42)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_80),T124,ENVNUL,PNUL,YPfalse);
  T126 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T126);
  lit_86 = YPPsym((P)"find-goo-file-at");
  lit_87 = YPPsym((P)"fname");
  lit_88 = YPPsym((P)"path");
  T128 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T127 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_88)),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T128,Ynil);
  YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_86),T127,ENVNUL,PNUL,YPfalse);
  T129 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T129);
  lit_89 = YPPsym((P)"find-goo-file-in-path");
  lit_90 = YPPsym((P)"search-paths");
  lit_91 = YPPsym((P)"return");
  lit_92 = YPPsym((P)"x-7611");
  lit_93 = YPPsym((P)"x-7610");
  T133 = YPsig(YPPlist(1,LITREF(lit_93)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_7611_37 = YPmet(FUNCODEREF(fun_x_7611_37),LITREF(lit_92),T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T130 = YPsig(YPPlist(2,LITREF(lit_87),LITREF(lit_90)),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T131,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_89),T130,ENVNUL,PNUL,YPfalse);
  T134 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T134);
  T135 = YPfalse;
  return T135;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSread;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<", &module_info_gooSmag, "<"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {">=", &module_info_gooSmag, ">="},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"new", &module_info_gooSboot, "new"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"t+", &module_info_gooStypes, "t+"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"until", &module_info_gooSmacros, "until"},
  {"~=", &module_info_gooSmath, "~="},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"try", &module_info_gooSboot, "try"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"$e", &module_info_gooSmath, "$e"},
  {"1-", &module_info_gooSmath, "1-"},
  {"=", &module_info_gooSmath, "="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"@+", &module_info_gooSboot, "@+"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"op", &module_info_gooSmacros, "op"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun", &module_info_gooSboot, "fun"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"def", &module_info_gooSboot, "def"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"t<", &module_info_gooStypes, "t<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"or", &module_info_gooSmacros, "or"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"@<", &module_info_gooSboot, "@<"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"set", &module_info_gooSboot, "set"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"items", &module_info_gooScolsScol, "items"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<=", &module_info_gooSmag, "<="},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"dl", &module_info_gooSboot, "dl"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"t=", &module_info_gooStypes, "t="},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"do", &module_info_gooSmacros, "do"},
  {"%su", &module_info_gooSboot, "%su"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"/", &module_info_gooSmath, "/"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"map", &module_info_gooSmacros, "map"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"put", &module_info_gooSioSport, "put"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"while", &module_info_gooSmacros, "while"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"out", &module_info_gooSioSport, "out"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"round", &module_info_gooSmath, "round"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"==", &module_info_gooSmacros, "=="},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"&", &module_info_gooSmath, "&"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%put", &module_info_gooSboot, "%put"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"round/", &module_info_gooSmath, "round/"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"%get", &module_info_gooSboot, "%get"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"and", &module_info_gooSmacros, "and"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"when", &module_info_gooSmacros, "when"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"case", &module_info_gooSmacros, "case"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"logn", &module_info_gooSmath, "logn"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"get", &module_info_gooSioSport, "get"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"in", &module_info_gooSioSport, "in"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"head", &module_info_gooSboot, "head"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cos", &module_info_gooSmath, "cos"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"t?", &module_info_gooStypes, "t?"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"if", &module_info_gooSboot, "if"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"read", &module_info_gooSruntime, "read"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%im", &module_info_gooSboot, "%im"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"esc", &module_info_gooSboot, "esc"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"abs", &module_info_gooSmath, "abs"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"open", &module_info_gooSioSport, "open"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"len", &module_info_gooStypes, "len"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"loc", &module_info_gooSboot, "loc"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"acos", &module_info_gooSmath, "acos"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"tup", &module_info_gooSboot, "tup"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"app", &module_info_gooSmacros, "app"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"lst", &module_info_gooSboot, "lst"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"export", &module_info_gooSboot, "export"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"dss", &module_info_gooSboot, "dss"},
  {"*", &module_info_gooSmath, "*"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"packer", &module_info_gooSpacker, "packer"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"use", &module_info_gooSboot, "use"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"close", &module_info_gooSioSport, "close"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"@==", &module_info_gooSboot, "@=="},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"for", &module_info_gooSmacros, "for"},
  {"match", &module_info_gooSmacros, "match"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"seq", &module_info_gooSboot, "seq"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"-", &module_info_gooSmath, "-"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"@len", &module_info_gooSboot, "@len"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"as", &module_info_gooStypes, "as"},
  {"t*", &module_info_gooStypes, "t*"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"ct", &module_info_gooSboot, "ct"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"neg", &module_info_gooSmath, "neg"},
  {"always", &module_info_gooSruntime, "always"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"base-path", &YgooSsystemYbase_path},
  {"components-basename", &YgooSsystemYcomponents_basename},
  {"c-filename", &YgooSsystemYc_filename},
  {"file-exists?", &YgooSsystemYfile_existsQ},
  {"*goo-personal-root*", &YgooSsystemYTgoo_personal_rootT},
  {"*goo-build-root*", &YgooSsystemYTgoo_build_rootT},
  {"*module-search-path*", &YgooSsystemYTmodule_search_pathT},
  {"os-val-setter", &YgooSsystemYos_val_setter},
  {"gooc-filename", &YgooSsystemYgooc_filename},
  {"components-last", &YgooSsystemYcomponents_last},
  {"*obj-extension*", &YgooSsystemYTobj_extensionT},
  {"add-goo-root-path", &YgooSsystemYadd_goo_root_path},
  {"*path-separator*", &YgooSsystemYTpath_separatorT},
  {"%compile", NULL},
  {"*goo-extension*", &YgooSsystemYTgoo_extensionT},
  {"%pid", NULL},
  {"gooc-filename?", &YgooSsystemYgooc_filenameQ},
  {"add-build-path", &YgooSsystemYadd_build_path},
  {"hierarchical-components", &YgooSsystemYhierarchical_components},
  {"*gooc-extension*", &YgooSsystemYTgooc_extensionT},
  {"%load", NULL},
  {"goo-filename", &YgooSsystemYgoo_filename},
  {"*c-extension*", &YgooSsystemYTc_extensionT},
  {"---main-0---", NULL},
  {"os-val", &YgooSsystemYos_val},
  {"file-mtime", &YgooSsystemYfile_mtime},
  {"label-components", &YgooSsystemYlabel_components},
  {"fab-path", &YgooSsystemYfab_path},
  {"%default-goo-root", NULL},
  {"*goo-root*", &YgooSsystemYTgoo_rootT},
  {"create-directory", &YgooSsystemYcreate_directory},
  {"add-tmp-path", &YgooSsystemYadd_tmp_path},
  {"parent-directory", &YgooSsystemYparent_directory},
  {"probe-directory", &YgooSsystemYprobe_directory},
  {"find-goo-file-in-path", &YgooSsystemYfind_goo_file_in_path},
  {"*exe-extension*", &YgooSsystemYTexe_extensionT},
  {"process-id", &YgooSsystemYprocess_id},
  {"so-load", &YgooSsystemYso_load},
  {"os-name", &YgooSsystemYos_name},
  {"exe-filename", &YgooSsystemYexe_filename},
  {"components-parent-directory", &YgooSsystemYcomponents_parent_directory},
  {"add-src-path", &YgooSsystemYadd_src_path},
  {"goo-filename?", &YgooSsystemYgoo_filenameQ},
  {"add-goo-personal-root-path", &YgooSsystemYadd_goo_personal_root_path},
  {"obj-filename", &YgooSsystemYobj_filename},
  {"pathname-to-components", &YgooSsystemYpathname_to_components},
  {"file-type", &YgooSsystemYfile_type},
  {"find-goo-file-at", &YgooSsystemYfind_goo_file_at},
  {"components-to-pathname", &YgooSsystemYcomponents_to_pathname},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"components-basename", "components-basename"},
  {"c-filename", "c-filename"},
  {"file-exists?", "file-exists?"},
  {"*c-extension*", "*c-extension*"},
  {"*goo-personal-root*", "*goo-personal-root*"},
  {"*goo-build-root*", "*goo-build-root*"},
  {"*module-search-path*", "*module-search-path*"},
  {"os-val-setter", "os-val-setter"},
  {"find-goo-file-in-path", "find-goo-file-in-path"},
  {"gooc-filename", "gooc-filename"},
  {"components-last", "components-last"},
  {"*obj-extension*", "*obj-extension*"},
  {"add-goo-root-path", "add-goo-root-path"},
  {"*path-separator*", "*path-separator*"},
  {"%compile", "%compile"},
  {"*goo-extension*", "*goo-extension*"},
  {"add-build-path", "add-build-path"},
  {"so-load", "so-load"},
  {"hierarchical-components", "hierarchical-components"},
  {"probe-directory", "probe-directory"},
  {"goo-filename", "goo-filename"},
  {"os-val", "os-val"},
  {"*goo-root*", "*goo-root*"},
  {"file-mtime", "file-mtime"},
  {"label-components", "label-components"},
  {"%load", "%load"},
  {"create-directory", "create-directory"},
  {"add-tmp-path", "add-tmp-path"},
  {"parent-directory", "parent-directory"},
  {"*exe-extension*", "*exe-extension*"},
  {"process-id", "process-id"},
  {"os-name", "os-name"},
  {"exe-filename", "exe-filename"},
  {"components-parent-directory", "components-parent-directory"},
  {"add-src-path", "add-src-path"},
  {"add-goo-personal-root-path", "add-goo-personal-root-path"},
  {"obj-filename", "obj-filename"},
  {"pathname-to-components", "pathname-to-components"},
  {"file-type", "file-type"},
  {"find-goo-file-at", "find-goo-file-at"},
  {"components-to-pathname", "components-to-pathname"},
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
