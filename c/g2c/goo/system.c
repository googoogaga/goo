/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/system");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/system */

EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YOOEE,"goo/boot","@@==");
EXT(Yfab_pair,"goo/boot","fab-pair");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(Yclass_gens_setter,"goo/boot","class-gens-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YLboxG,"goo/boot","<box>");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YgooSsystemYtime,"goo/system","time");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSsystemYpathname_error,"goo/system","pathname-error");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
DEF(YgooSsystemYdirectory_error,"goo/system","directory-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSfunYfun_name,"goo/fun","fun-name");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYemptyQ,"goo/cols/col","empty?");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YLopts_tupG,"goo/boot","<opts-tup>");
EXT(Yclass_id,"goo/boot","class-id");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(Yclass_prop_len_setter,"goo/boot","class-prop-len-setter");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsScolYnul,"goo/cols/col","nul");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSmathYK,"goo/math","|");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmacrosYmatch_nul_list,"goo/macros","match-nul-list");
EXT(Yclass_gens,"goo/boot","class-gens");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(Yclass_prop_len,"goo/boot","class-prop-len");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Ygen_cache_missableQ,"goo/boot","gen-cache-missable?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmacrosYnulQ,"goo/macros","nul?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ytail,"goo/boot","tail");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(Yfun_info_src_loc_setter,"goo/boot","fun-info-src-loc-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSlogYE,"goo/log","=");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfun_info_src_loc,"goo/boot","fun-info-src-loc");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(Yclass_direct_props_setter,"goo/boot","class-direct-props-setter");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yfun_mets_setter,"goo/boot","fun-mets-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YOlst,"goo/boot","@lst");
EXT(Yfun_code,"goo/boot","fun-code");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yprops_of,"goo/boot","props-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSanyYaddress_of,"goo/any","address-of");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yclass_children_setter,"goo/boot","class-children-setter");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ynul_prop,"goo/boot","nul-prop");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSchrYeof_objectQ,"goo/chr","eof-object?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YOelt,"goo/boot","@elt");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ynew,"goo/boot","new");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_forward,"goo/boot","class-forward");
EXT(YgooSanyYto_str,"goo/any","to-str");
EXT(YgooSmathYposQ,"goo/math","pos?");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSchrYdigitQ,"goo/chr","digit?");
DEF(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yopts_tup_storage,"goo/boot","opts-tup-storage");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Yfun_env,"goo/boot","fun-env");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSchrYalphaQ,"goo/chr","alpha?");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yfun_info_names_setter,"goo/boot","fun-info-names-setter");
EXT(YLfun_infoG,"goo/boot","<fun-info>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yfun_info_count_setter,"goo/boot","fun-info-count-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSchrYchar_Gascii,"goo/chr","char->ascii");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSchrYto_digit,"goo/chr","to-digit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_info_names,"goo/boot","fun-info-names");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents_setter,"goo/boot","class-parents-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YOlit,"goo/boot","@lit");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_info_count,"goo/boot","fun-info-count");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yclass_props_setter,"goo/boot","class-props-setter");
EXT(YPtrue,"goo/boot","%true");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YOdo,"goo/boot","@do");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_cache_classes,"goo/boot","gen-cache-classes");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Ybox_value_setter,"goo/boot","box-value-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Yopts_count,"goo/boot","opts-count");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSchrYto_upper,"goo/chr","to-upper");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSchrYto_lower,"goo/chr","to-lower");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSchrYfabs,"goo/chr","fabs");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yclass_mets_setter,"goo/boot","class-mets-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Ybox_value,"goo/boot","box-value");
EXT(YgooSchrYupperQ,"goo/chr","upper?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yfun_info_setter,"goo/boot","fun-info-setter");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yclass_mets,"goo/boot","class-mets");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yfun_info,"goo/boot","fun-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSchrYlowerQ,"goo/chr","lower?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YPfalse,"goo/boot","%false");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOOnulQ,"goo/boot","@@nul?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ygen_cache_singletons,"goo/boot","gen-cache-singletons");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(Yopts_location,"goo/boot","opts-location");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ylst,"goo/boot","lst");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yclass_forward_setter,"goo/boot","class-forward-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_info_name_setter,"goo/boot","fun-info-name-setter");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yfun_info_src_setter,"goo/boot","fun-info-src-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSlogYNEE,"goo/log","~==");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yfun_info_name,"goo/boot","fun-info-name");
EXT(Yclass_row,"goo/boot","class-row");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yfun_info_src,"goo/boot","fun-info-src");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yclass_ancestors_setter,"goo/boot","class-ancestors-setter");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(Ygen_cache_arg_pos,"goo/boot","gen-cache-arg-pos");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSlogYNE,"goo/log","~=");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YOnew,"goo/boot","@new");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathY_,"goo/math","-");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YLmagG,"goo/boot","<mag>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_98);
DEFLIT(lit_61);
DEFLIT(lit_37);
DEFLIT(lit_82);
DEFLIT(lit_49);
DEFLIT(lit_21);
DEFLIT(lit_57);
DEFLIT(lit_9);
DEFLIT(lit_29);
DEFLIT(lit_56);
DEFLIT(lit_4);
DEFLIT(lit_42);
DEFLIT(lit_103);
DEFLIT(lit_28);
DEFLIT(lit_8);
DEFLIT(lit_35);
DEFLIT(lit_77);
DEFLIT(lit_66);
DEFLIT(lit_78);
DEFLIT(lit_50);
DEFLIT(lit_88);
DEFLIT(lit_2);
DEFLIT(lit_41);
DEFLIT(lit_109);
DEFLIT(lit_100);
DEFLIT(lit_104);
DEFLIT(lit_0);
DEFLIT(lit_93);
DEFLIT(lit_91);
DEFLIT(lit_120);
DEFLIT(lit_60);
DEFLIT(lit_6);
DEFLIT(lit_1);
DEFLIT(lit_112);
DEFLIT(lit_79);
DEFLIT(lit_72);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_40);
DEFLIT(lit_20);
DEFLIT(lit_87);
DEFLIT(lit_65);
DEFLIT(lit_51);
DEFLIT(lit_33);
DEFLIT(lit_58);
DEFLIT(lit_92);
DEFLIT(lit_67);
DEFLIT(lit_53);
DEFLIT(lit_68);
DEFLIT(lit_26);
DEFLIT(lit_5);
DEFLIT(lit_63);
DEFLIT(lit_44);
DEFLIT(lit_117);
DEFLIT(lit_48);
DEFLIT(lit_52);
DEFLIT(lit_38);
DEFLIT(lit_110);
DEFLIT(lit_95);
DEFLIT(lit_17);
DEFLIT(lit_74);
DEFLIT(lit_86);
DEFLIT(lit_114);
DEFLIT(lit_96);
DEFLIT(lit_30);
DEFLIT(lit_3);
DEFLIT(lit_62);
DEFLIT(lit_46);
DEFLIT(lit_105);
DEFLIT(lit_75);
DEFLIT(lit_39);
DEFLIT(lit_31);
DEFLIT(lit_34);
DEFLIT(lit_14);
DEFLIT(lit_84);
DEFLIT(lit_119);
DEFLIT(lit_115);
DEFLIT(lit_107);
DEFLIT(lit_45);
DEFLIT(lit_111);
DEFLIT(lit_83);
DEFLIT(lit_116);
DEFLIT(lit_25);
DEFLIT(lit_118);
DEFLIT(lit_70);
DEFLIT(lit_99);
DEFLIT(lit_73);
DEFLIT(lit_55);
DEFLIT(lit_32);
DEFLIT(lit_18);
DEFLIT(lit_97);
DEFLIT(lit_101);
DEFLIT(lit_54);
DEFLIT(lit_12);
DEFLIT(lit_81);
DEFLIT(lit_71);
DEFLIT(lit_59);
DEFLIT(lit_94);
DEFLIT(lit_24);
DEFLIT(lit_15);
DEFLIT(lit_108);
DEFLIT(lit_11);
DEFLIT(lit_64);
DEFLIT(lit_19);
DEFLIT(lit_27);
DEFLIT(lit_89);
DEFLIT(lit_43);
DEFLIT(lit_23);
DEFLIT(lit_10);
DEFLIT(lit_13);
DEFLIT(lit_90);
DEFLIT(lit_36);
DEFLIT(lit_80);
DEFLIT(lit_76);
DEFLIT(lit_7);
DEFLIT(lit_113);
DEFLIT(lit_85);
DEFLIT(lit_22);
DEFLIT(lit_69);
DEFLIT(lit_102);
DEFLIT(lit_47);

/* FUNCTIONS: */

FUNFOR(YgooSsystemYtime);
LOCFOR(fun_os_name_1);
LOCFOR(fun_os_val_2);
LOCFOR(fun_os_val_setter_3);
LOCFOR(fun_process_id_4);
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
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_file_copy_27);
FUNFOR(YgooSsystemYso_load);
FUNFOR(YgooSsystemYpathname_error);
LOCFOR(fun_30);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_32);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
FUNFOR(YgooSsystemYdirectory_error);
LOCFOR(fun_ensure_41);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_44);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();
extern P YgooSsystemY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSsystemYtime) {
  P tF3852;
  P xF3851;
  P xF3850;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPtime();
  xF3850 = T2;
  xF3851 = xF3850;
  tF3852 = (P)1;
  T1 = (P)YPiLL(xF3851,(P)2);
  T0 = (P)YPiv(T1,tF3852);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
  T1 = (P)YgooSsystemYPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_os_val_2) {
  P s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  T2 = (P)YPsu(s_);
  T1 = (P)YgooSsystemYPos_val(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_os_val_setter_3) {
  P v_,s_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YgooSsystemYPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

LOCCODEDEF(fun_process_id_4) {
  P tF3855;
  P xF3854;
  P xF3853;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPpid();
  xF3853 = T2;
  xF3854 = xF3853;
  tF3855 = (P)1;
  T1 = (P)YPiLL(xF3854,(P)2);
  T0 = (P)YPiv(T1,tF3855);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_base_path_5) {
  P filename_;
  P iF3856;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(filename_, 0);
  T11 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
  iF3856 = T10;
  LOOP_166: {
    P a166_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF3856,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = LITREF(lit_15);
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),filename_,iF3856);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
      T3 = CALL2(1,VARREF(YgooSlogYE),T4,T5);
      if (T3 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmathYA),iF3856,YPint((P)1));
        T6 = CALL3(1,VARREF(YgooScolsSseqYsub),filename_,YPint((P)0),T7);
        T2 = T6;
      } else {
        T9 = CALL2(1,VARREF(YgooSmathY_),iF3856,YPint((P)1));
        a166_0 = T9;
        iF3856 = a166_0;
        goto LOOP_166;
        T2 = T8;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_fab_path_6) {
  P dirs_;
  P T0;
LINK_STACK();
  NARGS(dirs_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),dirs_,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_src_path_7) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_29),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_goo_root_path_8) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_goo_personal_root_path_9) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_tmp_path_10) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_15),LITREF(lit_36),relpath_);
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_add_build_path_11) {
  P builddir_,relpath_;
  P T0;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_39),builddir_,relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filenameQ) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgoo_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgoo_filename) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
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
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,VARREF(YgooSsystemYTgooc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYgooc_filename) {
  P name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
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
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYobj_filename) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTobj_extensionT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYexe_filename) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTexe_extensionT));
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_file_mtime_19) {
  P filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(filename_, 0);
  T2 = (P)YPsu(filename_);
  T1 = (P)YgooSsystemYPfile_mtime(T2);
  T0 = (P)YPfb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_existsQ) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_type) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcreate_directory) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YgooSsystemYPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_23) {
  P cF3857;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  LOOP_167: {
    T7 = BOXGET(FREEREF(2));
    T6 = CALL1(1,VARREF(YgooSioSportYget),T7);
    cF3857 = T6;
    T3 = CALL1(1,VARREF(YgooSchrYeof_objectQ),cF3857);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T4 = BOXGET(FREEREF(0));
      CALL2(1,VARREF(YgooSioSportYput),T4,cF3857);
      goto LOOP_167;
      T1 = T5;
    } else {
      T1 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

LOCCODEDEF(fun_24) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_25) {
  P dst_portF3858;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  dst_portF3858 = YPfalse;
  dst_portF3858 = BOXFAB(dst_portF3858);
  T3 = FUNFAB(fun_23,3,dst_portF3858,FREEREF(2),FREEREF(0));
  T4 = FUNFAB(fun_24,1,dst_portF3858);
  T2 = with_cleanup(T3,T4);
UNLINK_STACK();
  QRET(T2);
}

LOCCODEDEF(fun_26) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_file_copy_27) {
  P src_,dst_;
  P src_portF3859;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  src_portF3859 = YPfalse;
  src_portF3859 = BOXFAB(src_portF3859);
  T2 = FUNFAB(fun_25,3,src_portF3859,src_,dst_);
  T3 = FUNFAB(fun_26,1,src_portF3859);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSsystemYso_load) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = (P)YPsu(name_);
  T0 = (P)YgooSsystemYPload(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYpathname_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSsystemYLpathname_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_30) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(component_, 0);
  T1 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_77);
  } else {
    T3 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_78));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_79);
    } else {
      T5 = CALL2(1,VARREF(YgooSlogYE),component_,LITREF(lit_80));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_81);
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
LINK_STACK();
  ARG(pathname_, 0);
  T2 = pathname_;
  T1 = CALL1(1,VARREF(YgooSmacrosYnulQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_75));
  } else {
  }
  T6 = pathname_;
  T5 = CALL1(1,VARREF(YgooSmacrosYlast),T6);
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,T7);
  if (T4 != YPfalse) {
    T10 = pathname_;
    T13 = pathname_;
    T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),T11);
    T8 = pathname_ = T9;
  } else {
  }
  T15 = fun_30;
  T17 = pathname_;
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

LOCCODEDEF(fun_32) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(component_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_77));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_15);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_79));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_86);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_81));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_87);
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
LINK_STACK();
  ARG(components_, 0);
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),components_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_84));
  } else {
  }
  T4 = fun_32;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,components_);
  T2 = CALL2(1,VARREF(YgooScolsSseqYjoin),T3,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T2);
}

FUNCODEDEF(YgooSsystemYlabel_components) {
  P components_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
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
  P resultF3860;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(Yhead),components_);
  T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL1(1,VARREF(Ytail),components_);
    T2 = T5;
  } else {
    T2 = components_;
  }
  resultF3860 = T2;
  T0 = CALL1(1,VARREF(YgooSmacrosYnulQ),resultF3860);
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_92),components_);
  } else {
  }
UNLINK_STACK();
  RET(resultF3860);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF3861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T3);
  lastF3861 = T2;
  T0 = CALL2(1,VARREF(YisaQ),lastF3861,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_95),components_);
  } else {
  }
UNLINK_STACK();
  QRET(lastF3861);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF3865;
  P countF3864;
  P hierF3863;
  P labelF3862;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(components_, 0);
  T12 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF3862 = T12;
  T11 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF3863 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),hierF3863);
  countF3864 = T10;
  T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF3863);
  lastF3865 = T9;
  T1 = CALL2(1,VARREF(YisaQ),lastF3865,VARREF(YLstrG));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_98),components_);
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF3864,YPint((P)1));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYcat),labelF3862,LITREF(lit_99));
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmathY_),countF3864,YPint((P)1));
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF3863,YPint((P)0),T8);
    T6 = CALL2(1,VARREF(YgooSmacrosYcat),labelF3862,T7);
    T3 = T6;
  }
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF3866;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(components_, 0);
  T8 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF3866 = T8;
  T1 = CALL2(1,VARREF(YisaQ),lastF3866,VARREF(YLstrG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),lastF3866,LITREF(lit_77));
    if (T4 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_102));
      T3 = T5;
    } else {
      if (YPtrue != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_103));
        T6 = T7;
      } else {
        T6 = YPfalse;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYparent_directory) {
  P name_;
  P componentsF3867;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF3867 = T2;
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF3867);
  T0 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYdirectory_error) {
  P msg_,name_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  ARG(name_, 1);
  T2 = CALL1(1,VARREF(Ylst),name_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSsystemYLdirectory_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),name_,VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

LOCCODEDEF(fun_ensure_41) {
  P c_;
  P nF3868;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T14 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T15);
  nF3868 = T14;
  T1 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF3868);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSsystemYfile_type),nF3868);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_113));
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_114),nF3868);
      T2 = T6;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),c_);
    T8 = CALL2(1,VARREF(YisaQ),T9,VARREF(YLstrG));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),c_);
      CALL1(0,FREEREF(1),T10);
      T11 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF3868);
      T7 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_115),nF3868);
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYprobe_directory) {
  P name_;
  P ensureF3872;
  P hierF3871;
  P labelF3870;
  P componentsF3869;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF3869 = T4;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF3869);
  labelF3870 = T3;
  T2 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF3869);
  hierF3871 = T2;
  T1 = FUNSHELL(1,fun_ensure_41,2);
  ensureF3872 = T1;
  FUNINIT(ensureF3872, 2,labelF3870,ensureF3872);
  T0 = CALL1(1,ensureF3872,hierF3871);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P gooc_foundF3877;
  P goo_foundF3876;
  P gooc_fileF3875;
  P goo_fileF3874;
  P base_fileF3873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
  T19 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF3873 = T19;
  T18 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF3873);
  goo_fileF3874 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF3873);
  gooc_fileF3875 = T17;
  T16 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF3874);
  goo_foundF3876 = T16;
  T15 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF3875);
  gooc_foundF3877 = T15;
  T2 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF3873);
  if (T2 != YPfalse) {
    T1 = goo_foundF3876;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T0 = goo_fileF3874;
  } else {
    T5 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF3873);
    if (T5 != YPfalse) {
      T4 = gooc_foundF3877;
    } else {
      T4 = YPfalse;
    }
    if (T4 != YPfalse) {
      T3 = gooc_fileF3875;
    } else {
      if (goo_foundF3876 != YPfalse) {
        T7 = gooc_foundF3877;
      } else {
        T7 = YPfalse;
      }
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF3874);
        T11 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF3875);
        T9 = CALL2(1,VARREF(YgooSmagYG),T10,T11);
        if (T9 != YPfalse) {
          T8 = goo_fileF3874;
        } else {
          T8 = gooc_fileF3875;
        }
        T6 = T8;
      } else {
        if (gooc_foundF3877 != YPfalse) {
          T12 = gooc_fileF3875;
        } else {
          if (goo_foundF3876 != YPfalse) {
            T13 = goo_fileF3874;
          } else {
            if (YPtrue != YPfalse) {
              T14 = YPfalse;
            } else {
              T14 = YPfalse;
            }
            T13 = T14;
          }
          T12 = T13;
        }
        T6 = T12;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  RET(T0);
}

LOCCODEDEF(fun_44) {
  P return_;
  P fileF3880;
  P pathF3879;
  P x_1468F3878;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1468F3878 = T8;
  LOOP_168: {
    P a168_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1468F3878);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1468F3878);
      pathF3879 = T7;
      T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(1),pathF3879);
      fileF3880 = T6;
      if (fileF3880 != YPfalse) {
        T3 = CALL1(0,return_,fileF3880);
      } else {
      }
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1468F3878);
      a168_0 = T5;
      x_1468F3878 = a168_0;
      goto LOOP_168;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_in_path) {
  P fname_,search_paths_;
  P T0,T1;
LINK_STACK();
  ARG(fname_, 0);
  ARG(search_paths_, 1);
  T1 = FUNFAB(fun_44,2,search_paths_,fname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF3882;
  P env_rootF3881;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
DEFCREGS();
  lit_0 = YPPsym((P)"time");
  lit_1 = Ynil;
  T0 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPfab_met(FUNCODEREF(YgooSsystemYtime),T0,LITREF(lit_0),LITREF(lit_1),sloc(22),YPsb((P)"(fun () (%ib (%time)))"));
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_2 = YPPsym((P)"os-name");
  T2 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPfab_met(FUNCODEREF(fun_os_name_1),T2,LITREF(lit_2),LITREF(lit_1),sloc(35),YPsb((P)"(fun (=> <str>) (%sb (%os-name)))"));
  T4 = VARREF_OR(YgooSsystemYos_name,YPfalse);
  T5 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSsystemYos_name,T3);
  lit_3 = YPPsym((P)"os-val");
  lit_4 = YPPlist(1,YPPsym((P)"s"));
  T6 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPfab_met(FUNCODEREF(fun_os_val_2),T6,LITREF(lit_3),LITREF(lit_4),sloc(40),YPsb((P)"(fun ((s <str>) => <str>) (%sb (%os-val (%su s))))"));
  T8 = VARREF_OR(YgooSsystemYos_val,YPfalse);
  T9 = fun_os_val_2;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYos_val,T7);
  lit_5 = YPPsym((P)"os-val-setter");
  lit_6 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"s"));
  T10 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPfab_met(FUNCODEREF(fun_os_val_setter_3),T10,LITREF(lit_5),LITREF(lit_6),sloc(44),YPsb((P)"(fun ((v <str>) (s <str>) => <str>) (set (%os-val (%su s)) (%su v)) v)"));
  T12 = VARREF_OR(YgooSsystemYos_val_setter,YPfalse);
  T13 = fun_os_val_setter_3;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_7 = YPPsym((P)"process-id");
  T14 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPfab_met(FUNCODEREF(fun_process_id_4),T14,LITREF(lit_7),LITREF(lit_1),sloc(59),YPsb((P)"(fun () (%ib (%pid)))"));
  T16 = VARREF_OR(YgooSsystemYprocess_id,YPfalse);
  T17 = fun_process_id_4;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YgooSsystemYprocess_id,T15);
  lit_8 = YPsb((P)"linux");
  lit_9 = YPsb((P)"/");
  lit_10 = YPsb((P)"win32");
  lit_11 = YPsb((P)"\\");
  lit_12 = YPsb((P)"/");
  T20 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T19 = XCALL2(1,VARREF(YgooSlogYE),T20,LITREF(lit_8));
  if (T19 != YPfalse) {
    T18 = LITREF(lit_9);
  } else {
    T23 = XCALL0(1,VARREF(YgooSsystemYos_name));
    T22 = XCALL2(1,VARREF(YgooSlogYE),T23,LITREF(lit_10));
    if (T22 != YPfalse) {
      T21 = LITREF(lit_11);
    } else {
      if (YPtrue != YPfalse) {
        T24 = LITREF(lit_12);
      } else {
        T24 = YPfalse;
      }
      T21 = T24;
    }
    T18 = T21;
  }
  VARSET(YgooSsystemYTpath_separatorT,T18);
  lit_13 = YPPsym((P)"base-path");
  lit_14 = YPPlist(1,YPPsym((P)"filename"));
  lit_15 = YPsb((P)"");
  T25 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_5 = YPfab_met(FUNCODEREF(fun_base_path_5),T25,LITREF(lit_13),LITREF(lit_14),sloc(77),YPsb((P)"(fun ((filename <str>) => <str>) (rep loop ((i (- (len filename) 1))) (if (< i 0)  (if (= (elt filename i) (elt *path-separator* 0)) (sub filename 0 (+ i 1)) (loop (- i 1))))))"));
  T27 = VARREF_OR(YgooSsystemYbase_path,YPfalse);
  T28 = fun_base_path_5;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSsystemYbase_path,T26);
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPlist(1,YPPsym((P)"dirs"));
  T29 = YPfab_sig(Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPfab_met(FUNCODEREF(fun_fab_path_6),T29,LITREF(lit_16),LITREF(lit_17),sloc(86),YPsb((P)"(fun ((dirs ...) => <str>) (join dirs *path-separator*))"));
  T31 = VARREF_OR(YgooSsystemYfab_path,YPfalse);
  T32 = fun_fab_path_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooSsystemYfab_path,T30);
  lit_18 = YPsb((P)"GOO_ROOT");
  T37 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF3881 = T37;
  T34 = XCALL1(1,VARREF(YgooSmacrosYnulQ),env_rootF3881);
  if (T34 != YPfalse) {
    T36 = (P)YgooSsystemYPdefault_goo_root();
    T35 = (P)YPsb(T36);
    T33 = T35;
  } else {
    T33 = env_rootF3881;
  }
  VARSET(YgooSsystemYTgoo_rootT,T33);
  lit_19 = YPsb((P)"HOME");
  lit_20 = YPsb((P)".goo");
  T39 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_19));
  T38 = XCALL2(1,VARREF(YgooSsystemYfab_path),T39,LITREF(lit_20));
  VARSET(YgooSsystemYTgoo_personal_rootT,T38);
  lit_21 = YPsb((P)"mods");
  lit_22 = YPsb((P)"local");
  lit_23 = YPsb((P)"mods");
  lit_24 = YPsb((P)"mods");
  T41 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_21));
  T42 = XCALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_22),LITREF(lit_23));
  T43 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_24));
  T40 = XCALL4(1,VARREF(Ylst),LITREF(lit_15),T41,T42,T43);
  VARSET(YgooSsystemYTmodule_search_pathT,T40);
  lit_25 = YPsb((P)"GOO_BUILD_ROOT");
  lit_26 = YPsb((P)".");
  T46 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_25));
  env_rootF3882 = T46;
  T45 = XCALL1(1,VARREF(YgooSmacrosYnulQ),env_rootF3882);
  if (T45 != YPfalse) {
    T44 = LITREF(lit_26);
  } else {
    T44 = env_rootF3882;
  }
  VARSET(YgooSsystemYTgoo_build_rootT,T44);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPlist(1,YPPsym((P)"relpath"));
  lit_29 = YPsb((P)"src");
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPfab_met(FUNCODEREF(fun_add_src_path_7),T47,LITREF(lit_27),LITREF(lit_28),sloc(111),YPsb((P)"(fun (relpath => <str>) (fab-path *goo-build-root* src relpath))"));
  T49 = VARREF_OR(YgooSsystemYadd_src_path,YPfalse);
  T50 = fun_add_src_path_7;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSsystemYadd_src_path,T48);
  lit_30 = YPPsym((P)"add-goo-root-path");
  lit_31 = YPPlist(1,YPPsym((P)"relpath"));
  T51 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPfab_met(FUNCODEREF(fun_add_goo_root_path_8),T51,LITREF(lit_30),LITREF(lit_31),sloc(114),YPsb((P)"(fun (relpath => <str>) (fab-path *goo-root* relpath))"));
  T53 = VARREF_OR(YgooSsystemYadd_goo_root_path,YPfalse);
  T54 = fun_add_goo_root_path_8;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSsystemYadd_goo_root_path,T52);
  lit_32 = YPPsym((P)"add-goo-personal-root-path");
  lit_33 = YPPlist(1,YPPsym((P)"relpath"));
  T55 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPfab_met(FUNCODEREF(fun_add_goo_personal_root_path_9),T55,LITREF(lit_32),LITREF(lit_33),sloc(117),YPsb((P)"(fun (relpath => <str>) (fab-path *goo-personal-root* relpath))"));
  T57 = VARREF_OR(YgooSsystemYadd_goo_personal_root_path,YPfalse);
  T58 = fun_add_goo_personal_root_path_9;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T56);
  lit_34 = YPPsym((P)"add-tmp-path");
  lit_35 = YPPlist(1,YPPsym((P)"relpath"));
  lit_36 = YPsb((P)"tmp");
  T59 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPfab_met(FUNCODEREF(fun_add_tmp_path_10),T59,LITREF(lit_34),LITREF(lit_35),sloc(121),YPsb((P)"(fun (relpath => <str>) (fab-path  tmp relpath))"));
  T61 = VARREF_OR(YgooSsystemYadd_tmp_path,YPfalse);
  T62 = fun_add_tmp_path_10;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSsystemYadd_tmp_path,T60);
  lit_37 = YPPsym((P)"add-build-path");
  lit_38 = YPPlist(2,YPPsym((P)"builddir"),YPPsym((P)"relpath"));
  lit_39 = YPsb((P)"c");
  T63 = YPfab_sig(YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPfab_met(FUNCODEREF(fun_add_build_path_11),T63,LITREF(lit_37),LITREF(lit_38),sloc(124),YPsb((P)"(fun (builddir relpath => <str>) (fab-path *goo-build-root* c builddir relpath))"));
  T65 = VARREF_OR(YgooSsystemYadd_build_path,YPfalse);
  T66 = fun_add_build_path_11;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooSsystemYadd_build_path,T64);
  lit_40 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_40));
  lit_41 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_41));
  lit_42 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_42));
  lit_43 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_43));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_15));
  lit_44 = YPPsym((P)"goo-filename?");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  T67 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPfab_met(FUNCODEREF(YgooSsystemYgoo_filenameQ),T67,LITREF(lit_44),LITREF(lit_45),sloc(133),YPsb((P)"(fun ((name <str>) => <log>) (suffix? name *goo-extension*))"));
  T68 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T68);
  lit_46 = YPPsym((P)"goo-filename");
  lit_47 = YPPlist(1,YPPsym((P)"name"));
  T69 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPfab_met(FUNCODEREF(YgooSsystemYgoo_filename),T69,LITREF(lit_46),LITREF(lit_47),sloc(136),YPsb((P)"(fun ((name <str>) => <str>) (if (goo-filename? name) name (cat name *goo-extension*)))"));
  T70 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T70);
  lit_48 = YPPsym((P)"gooc-filename?");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  T71 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPfab_met(FUNCODEREF(YgooSsystemYgooc_filenameQ),T71,LITREF(lit_48),LITREF(lit_49),sloc(139),YPsb((P)"(fun ((name <str>) => <log>) (suffix? name *gooc-extension*))"));
  T72 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T72);
  lit_50 = YPPsym((P)"gooc-filename");
  lit_51 = YPPlist(1,YPPsym((P)"name"));
  T73 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPfab_met(FUNCODEREF(YgooSsystemYgooc_filename),T73,LITREF(lit_50),LITREF(lit_51),sloc(142),YPsb((P)"(fun ((name <str>) => <str>) (if (gooc-filename? name) name (cat name *gooc-extension*)))"));
  T74 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T74);
  lit_52 = YPPsym((P)"c-filename");
  lit_53 = YPPlist(1,YPPsym((P)"name"));
  T75 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPfab_met(FUNCODEREF(YgooSsystemYc_filename),T75,LITREF(lit_52),LITREF(lit_53),sloc(145),YPsb((P)"(fun ((name <str>) => <str>) (cat name *c-extension*))"));
  T76 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T76);
  lit_54 = YPPsym((P)"obj-filename");
  lit_55 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPfab_met(FUNCODEREF(YgooSsystemYobj_filename),T77,LITREF(lit_54),LITREF(lit_55),sloc(148),YPsb((P)"(fun ((name <str>) => <str>) (cat name *obj-extension*))"));
  T78 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T78);
  lit_56 = YPPsym((P)"exe-filename");
  lit_57 = YPPlist(1,YPPsym((P)"name"));
  T79 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPfab_met(FUNCODEREF(YgooSsystemYexe_filename),T79,LITREF(lit_56),LITREF(lit_57),sloc(151),YPsb((P)"(fun ((name <str>) => <str>) (cat name *exe-extension*))"));
  T80 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T80);
  lit_58 = YPPsym((P)"file-mtime");
  lit_59 = YPPlist(1,YPPsym((P)"filename"));
  T81 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPfab_met(FUNCODEREF(fun_file_mtime_19),T81,LITREF(lit_58),LITREF(lit_59),sloc(191),YPsb((P)"(fun ((filename <str>) => <flo>) (%fb (%file-mtime (%su filename))))"));
  T83 = VARREF_OR(YgooSsystemYfile_mtime,YPfalse);
  T84 = fun_file_mtime_19;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSsystemYfile_mtime,T82);
  lit_60 = YPPsym((P)"file-exists?");
  lit_61 = YPPlist(1,YPPsym((P)"filename"));
  T85 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPfab_met(FUNCODEREF(YgooSsystemYfile_existsQ),T85,LITREF(lit_60),LITREF(lit_61),sloc(196),YPsb((P)"(fun ((filename <str>) => <log>) (%file-exists? (%su filename)))"));
  T86 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T86);
  lit_62 = YPPsym((P)"file-type");
  lit_63 = YPPlist(1,YPPsym((P)"filename"));
  T89 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  T88 = YgooSsystemYfile_type = YPfab_met(FUNCODEREF(YgooSsystemYfile_type),T89,LITREF(lit_62),LITREF(lit_63),sloc(201),YPsb((P)"(fun ((filename <str>) => <sym>) (%file-type (%su filename)))"));
  T91 = YgooSsystemYfile_type;
  T90 = VARSET(YgooSsystemYfile_type,T91);
  T87 = T90;
  return T87;
}

P YgooSsystemY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49;
DEFCREGS();
  lit_64 = YPPsym((P)"create-directory");
  lit_65 = YPPlist(1,YPPsym((P)"filename"));
  T0 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPfab_met(FUNCODEREF(YgooSsystemYcreate_directory),T0,LITREF(lit_64),LITREF(lit_65),sloc(208),YPsb((P)"(fun ((filename <str>)) (%create-directory (%su filename)))"));
  T1 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T1);
  lit_66 = YPPsym((P)"file-copy");
  lit_67 = YPPlist(2,YPPsym((P)"src"),YPPsym((P)"dst"));
  T6 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPfab_met(FUNCODEREF(fun_23),T6,YPfalse,LITREF(lit_1),sloc(213),YPsb((P)"(fun () (seq (set dst-port (open <file-out-port> dst)) (rep loop () (let ((c (get src-port))) (unless (eof-object? c) (put dst-port c) (loop))))))"));
  T5 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPfab_met(FUNCODEREF(fun_24),T5,YPfalse,LITREF(lit_1),sloc(213),YPsb((P)"(fun () (and dst-port (close dst-port)))"));
  T4 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPfab_met(FUNCODEREF(fun_25),T4,YPfalse,LITREF(lit_1),sloc(212),YPsb((P)"(fun () (seq (set src-port (open <file-in-port> src)) (with-port (dst-port (open <file-out-port> dst)) (rep loop () (let ((c (get src-port))) (unless (eof-object? c) (put dst-port c) (loop)))))))"));
  T3 = YPfab_sig(Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPfab_met(FUNCODEREF(fun_26),T3,YPfalse,LITREF(lit_1),sloc(212),YPsb((P)"(fun () (and src-port (close src-port)))"));
  T2 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_27 = YPfab_met(FUNCODEREF(fun_file_copy_27),T2,LITREF(lit_66),LITREF(lit_67),sloc(211),YPsb((P)"(fun ((src <str>) (dst <str>)) (with-port (src-port (open <file-in-port> src)) (with-port (dst-port (open <file-out-port> dst)) (rep loop () (let ((c (get src-port))) (unless (eof-object? c) (put dst-port c) (loop)))))))"));
  T8 = VARREF_OR(YgooSsystemYfile_copy,YPfalse);
  T9 = fun_file_copy_27;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYfile_copy,T7);
  lit_68 = YPPsym((P)"so-load");
  lit_69 = YPPlist(1,YPPsym((P)"name"));
  T10 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPfab_met(FUNCODEREF(YgooSsystemYso_load),T10,LITREF(lit_68),LITREF(lit_69),sloc(223),YPsb((P)"(fun (name) (%load (%su name)))"));
  T11 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T11);
  lit_70 = YPPsym((P)"<pathname-error>");
  T13 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_70),T13);
  VARSET(YgooSsystemYLpathname_errorG,T12);
  lit_71 = YPPsym((P)"pathname-error");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T14 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYpathname_error = YPfab_met(FUNCODEREF(YgooSsystemYpathname_error),T14,LITREF(lit_71),LITREF(lit_72),sloc(262),YPsb((P)"(fun ((msg <str>) (args ...)) (sig (new <pathname-error> condition-message msg condition-arguments (as <lst> args))))"));
  T15 = YgooSsystemYpathname_error;
  VARSET(YgooSsystemYpathname_error,T15);
  lit_73 = YPPsym((P)"pathname-to-components");
  lit_74 = YPPlist(1,YPPsym((P)"pathname"));
  lit_75 = YPsb((P)"Can't convert nul an pathname to components.");
  lit_76 = YPPlist(1,YPPsym((P)"component"));
  lit_77 = YPPsym((P)"root");
  lit_78 = YPsb((P)"..");
  lit_79 = YPPsym((P)"up");
  lit_80 = YPsb((P)".");
  lit_81 = YPPsym((P)"current");
  T17 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPfab_met(FUNCODEREF(fun_30),T17,YPfalse,LITREF(lit_76),sloc(271),YPsb((P)"(fun (component) (cond ((= component ) 'root) ((= component ..) 'up) ((= component .) 'current) (#t component)))"));
  T16 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPfab_met(FUNCODEREF(YgooSsystemYpathname_to_components),T16,LITREF(lit_73),LITREF(lit_74),sloc(266),YPsb((P)"(fun ((pathname <str>) => <lst>) (when (nul? pathname) (pathname-error Can't convert nul an pathname to components.)) (when (== (last pathname) (elt *path-separator* 0)) (set pathname (sub pathname 0 (- (len pathname) 1)))) (map (fun (component) (cond ((= component ) 'root) ((= component ..) 'up) ((= component .) 'current) (#t component))) (split pathname (elt *path-separator* 0))))"));
  T18 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T18);
  lit_82 = YPPsym((P)"components-to-pathname");
  lit_83 = YPPlist(1,YPPsym((P)"components"));
  lit_84 = YPsb((P)"Can't convert nul components to a pathname.");
  lit_85 = YPPlist(1,YPPsym((P)"component"));
  lit_86 = YPsb((P)"..");
  lit_87 = YPsb((P)".");
  T20 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPfab_met(FUNCODEREF(fun_32),T20,YPfalse,LITREF(lit_85),sloc(283),YPsb((P)"(fun (component) (cond ((== component 'root) ) ((== component 'up) ..) ((== component 'current) .) (#t component)))"));
  T19 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_to_pathname),T19,LITREF(lit_82),LITREF(lit_83),sloc(280),YPsb((P)"(fun ((components <lst>) => <str>) (when (nul? components) (pathname-error Can't convert nul components to a pathname.)) (join (map (fun (component) (cond ((== component 'root) ) ((== component 'up) ..) ((== component 'current) .) (#t component))) components) *path-separator*))"));
  T21 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T21);
  lit_88 = YPPsym((P)"label-components");
  lit_89 = YPPlist(1,YPPsym((P)"components"));
  T22 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPfab_met(FUNCODEREF(YgooSsystemYlabel_components),T22,LITREF(lit_88),LITREF(lit_89),sloc(293),YPsb((P)"(fun ((components <lst>) => <lst>) (if (isa? (head components) <lst>) (lst (head components)) '()))"));
  T23 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T23);
  lit_90 = YPPsym((P)"hierarchical-components");
  lit_91 = YPPlist(1,YPPsym((P)"components"));
  lit_92 = YPsb((P)"Hierarchical portion of %= must not be nul.");
  T24 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPfab_met(FUNCODEREF(YgooSsystemYhierarchical_components),T24,LITREF(lit_90),LITREF(lit_91),sloc(299),YPsb((P)"(fun ((components <lst>) => <lst>) (def result (if (isa? (head components) <lst>) (tail components) components)) (when (nul? result) (pathname-error Hierarchical portion of %= must not be nul. components)) result)"));
  T25 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T25);
  lit_93 = YPPsym((P)"components-last");
  lit_94 = YPPlist(1,YPPsym((P)"components"));
  lit_95 = YPsb((P)"No filename in %=.");
  T26 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_last),T26,LITREF(lit_93),LITREF(lit_94),sloc(308),YPsb((P)"(fun ((components <lst>) => <any>) (def last (elt components (- (len components) 1))) (when (isa? last <lst>) (pathname-error No filename in %=. components)) last)"));
  T27 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T27);
  lit_96 = YPPsym((P)"components-basename");
  lit_97 = YPPlist(1,YPPsym((P)"components"));
  lit_98 = YPsb((P)"Can't compute basename of %=.");
  lit_99 = YPPlist(1,YPPsym((P)"current"));
  T28 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_basename),T28,LITREF(lit_96),LITREF(lit_97),sloc(319),YPsb((P)"(fun ((components <lst>) => <lst>) (def label (label-components components)) (def hier (hierarchical-components components)) (def count (len hier)) (def last (components-last hier)) (unless (isa? last <str>) (pathname-error Can't compute basename of %=. components)) (if (== count 1) (cat label '(current)) (cat label (sub hier 0 (- count 1)))))"));
  T29 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T29);
  lit_100 = YPPsym((P)"components-parent-directory");
  lit_101 = YPPlist(1,YPPsym((P)"components"));
  lit_102 = YPsb((P)"Can't calculate parent of root directory.");
  lit_103 = YPPlist(1,YPPsym((P)"up"));
  T30 = YPfab_sig(YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPfab_met(FUNCODEREF(YgooSsystemYcomponents_parent_directory),T30,LITREF(lit_100),LITREF(lit_101),sloc(331),YPsb((P)"(fun ((components <lst>) => <lst>) (def last (components-last components)) (cond ((isa? last <str>) (components-basename components)) ((== last 'root) (pathname-error Can't calculate parent of root directory.)) (#t (cat components '(up)))))"));
  T31 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T31);
  lit_104 = YPPsym((P)"parent-directory");
  lit_105 = YPPlist(1,YPPsym((P)"name"));
  T32 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPfab_met(FUNCODEREF(YgooSsystemYparent_directory),T32,LITREF(lit_104),LITREF(lit_105),sloc(358),YPsb((P)"(fun ((name <str>) => <str>) (def components (pathname-to-components name)) (components-to-pathname (components-parent-directory components)))"));
  T33 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T33);
  lit_106 = YPPsym((P)"<directory-error>");
  T36 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T35 = XCALL2(1,VARREF(Yfab_pair),VARREF(YgooSconditionsYLfile_opening_errorG),T36);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_106),T35);
  VARSET(YgooSsystemYLdirectory_errorG,T34);
  lit_107 = YPPsym((P)"directory-error");
  lit_108 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"name"));
  T37 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSsystemYdirectory_error = YPfab_met(FUNCODEREF(YgooSsystemYdirectory_error),T37,LITREF(lit_107),LITREF(lit_108),sloc(364),YPsb((P)"(fun ((msg <str>) (name <str>)) (sig (new <directory-error> file-opening-error-filename name condition-message msg condition-arguments (lst name))))"));
  T38 = YgooSsystemYdirectory_error;
  VARSET(YgooSsystemYdirectory_error,T38);
  lit_109 = YPPsym((P)"probe-directory");
  lit_110 = YPPlist(1,YPPsym((P)"name"));
  lit_111 = YPPsym((P)"ensure");
  lit_112 = YPPlist(1,YPPsym((P)"c"));
  lit_113 = YPPsym((P)"directory");
  lit_114 = YPsb((P)"%s is not a directory.\n");
  lit_115 = YPsb((P)"Don't know how to create the directory %s.\n");
  T40 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_41 = YPfab_met(FUNCODEREF(fun_ensure_41),T40,LITREF(lit_111),LITREF(lit_112),sloc(375),YPsb((P)"(fun (c => #f) (def n (components-to-pathname (cat label c))) (cond ((file-exists? n) (unless (== (file-type n) 'directory) (directory-error %s is not a directory.\n n))) ((isa? (components-last c) <str>) (ensure (components-basename c)) (create-directory n)) (#t (directory-error Don't know how to create the directory %s.\n n))))"));
  T39 = YPfab_sig(YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPfab_met(FUNCODEREF(YgooSsystemYprobe_directory),T39,LITREF(lit_109),LITREF(lit_110),sloc(371),YPsb((P)"(fun ((name <str>)) (def components (pathname-to-components name)) (def label (label-components components)) (def hier (hierarchical-components components)) (rep ensure ((c hier)) (def n (components-to-pathname (cat label c))) (cond ((file-exists? n) (unless (== (file-type n) 'directory) (directory-error %s is not a directory.\n n))) ((isa? (components-last c) <str>) (ensure (components-basename c)) (create-directory n)) (#t (directory-error Don't know how to create the directory %s.\n n)))) #f)"));
  T41 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T41);
  lit_116 = YPPsym((P)"find-goo-file-at");
  lit_117 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"path"));
  T43 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T42 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T43,Ynil);
  YgooSsystemYfind_goo_file_at = YPfab_met(FUNCODEREF(YgooSsystemYfind_goo_file_at),T42,LITREF(lit_116),LITREF(lit_117),sloc(393),YPsb((P)"(fun ((fname <str>) (path <str>) => (t? <str>)) (def base-file (fab-path path fname)) (def goo-file (goo-filename base-file)) (def gooc-file (gooc-filename base-file)) (def goo-found (file-exists? goo-file)) (def gooc-found (file-exists? gooc-file)) (cond ((and (goo-filename? base-file) goo-found) goo-file) ((and (gooc-filename? base-file) gooc-found) gooc-file) ((and goo-found gooc-found) (if (> (file-mtime goo-file) (file-mtime gooc-file)) goo-file gooc-file)) (gooc-found gooc-file) (goo-found goo-file) (#t #f)))"));
  T44 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T44);
  lit_118 = YPPsym((P)"find-goo-file-in-path");
  lit_119 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"search-paths"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  T47 = YPfab_sig(YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPfab_met(FUNCODEREF(fun_44),T47,YPfalse,LITREF(lit_120),sloc(412),YPsb((P)"(fun (return) (for ((path search-paths)) (def file (find-goo-file-at fname path)) (when file (return file))) #f)"));
  T46 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T45 = YPfab_sig(YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T46,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPfab_met(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),T45,LITREF(lit_118),LITREF(lit_119),sloc(411),YPsb((P)"(fun ((fname <str>) (search-paths <col>) => (t? <str>)) (esc return (for ((path search-paths)) (def file (find-goo-file-at fname path)) (when file (return file))) #f))"));
  T48 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T48);
  T49 = YPfalse;
  return T49;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSlog;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSany;
extern MODULE_INFO module_info_gooSchr;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSloc;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"log", &module_info_gooSmath, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"fab-pair", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"class-gens-setter", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"<box>", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%next-methods-reg-setter", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSfun, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooScolsScol, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"<opts-tup>", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"class-id", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"class-prop-len-setter", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooScolsScol, NULL},
  {"%fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%fun-info-src-setter", &module_info_gooSboot, NULL},
  {"match-nul-list", &module_info_gooSmacros, NULL},
  {"class-gens", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"class-prop-len", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"gen-cache-missable?", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"nul?", &module_info_gooSmacros, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%fun-info-src", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%fun-info-name", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"fun-info-src-loc-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSlog, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"fun-info-src-loc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"class-direct-props-setter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"fun-mets-setter", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"fun-code", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"props-of", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"address-of", &module_info_gooSany, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%fun-info-count-setter", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"class-children-setter", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"%fun-info-src-loc", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"eof-object?", &module_info_gooSchr, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"class-forward", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSany, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"%fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"digit?", &module_info_gooSchr, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"opts-tup-storage", &module_info_gooSboot, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"fun-env", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"alpha?", &module_info_gooSchr, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"%fun-info-count", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fun-info-names-setter", &module_info_gooSboot, NULL},
  {"<fun-info>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%fun-info-names", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"fun-info-count-setter", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSchr, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"to-digit", &module_info_gooSchr, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fun-info-names", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"class-parents-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"@lit", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"fun-info-count", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"class-props-setter", &module_info_gooSboot, NULL},
  {"%true", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%gen-info", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"gen-cache-classes", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"box-value-setter", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"opts-count", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"to-upper", &module_info_gooSchr, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"to-lower", &module_info_gooSchr, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSchr, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"%fab-met", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"class-mets-setter", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"box-value", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSchr, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"fun-info-setter", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"class-mets", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"fun-info", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSchr, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%false", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"@@nul?", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"opts-location", &module_info_gooSboot, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%met-info", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"class-forward-setter", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"fun-info-name-setter", &module_info_gooSboot, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fun-info-src-setter", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSlog, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-info-name", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"class-row", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"fun-info-src", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"class-ancestors-setter", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%met-code-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"@nul?", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSlog, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"time", CVAR, &YgooSsystemYtime},
  {"pathname-error", CVAR, &YgooSsystemYpathname_error},
  {"%file-exists?", PVAR, NULL},
  {"directory-error", CVAR, &YgooSsystemYdirectory_error},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"---main-0---", PVAR, NULL},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"%file-mtime", PVAR, NULL},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"%os-name", PVAR, NULL},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"---main-1---", PVAR, NULL},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"%load", PVAR, NULL},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"%pid", PVAR, NULL},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"<pathname-error>", CVAR, &YgooSsystemYLpathname_errorG},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"%file-type", PVAR, NULL},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"%time", PVAR, NULL},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"%default-goo-root", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"%os-val", PVAR, NULL},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"%compile", PVAR, NULL},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"<directory-error>", CVAR, &YgooSsystemYLdirectory_errorG},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"%create-directory", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"file-copy", NULL},
  {"add-src-path", NULL},
  {"obj-filename", NULL},
  {"parent-directory", NULL},
  {"time", NULL},
  {"process-id", NULL},
  {"*goo-build-root*", NULL},
  {"find-goo-file-at", NULL},
  {"add-build-path", NULL},
  {"create-directory", NULL},
  {"components-to-pathname", NULL},
  {"c-filename", NULL},
  {"components-parent-directory", NULL},
  {"*goo-personal-root*", NULL},
  {"*module-search-path*", NULL},
  {"file-type", NULL},
  {"add-tmp-path", NULL},
  {"*exe-extension*", NULL},
  {"gooc-filename", NULL},
  {"components-basename", NULL},
  {"*c-extension*", NULL},
  {"%load", NULL},
  {"os-val-setter", NULL},
  {"*path-separator*", NULL},
  {"<pathname-error>", NULL},
  {"file-exists?", NULL},
  {"add-goo-personal-root-path", NULL},
  {"probe-directory", NULL},
  {"components-last", NULL},
  {"*goo-root*", NULL},
  {"so-load", NULL},
  {"*obj-extension*", NULL},
  {"find-goo-file-in-path", NULL},
  {"goo-filename", NULL},
  {"os-val", NULL},
  {"hierarchical-components", NULL},
  {"add-goo-root-path", NULL},
  {"file-mtime", NULL},
  {"*goo-extension*", NULL},
  {"os-name", NULL},
  {"%compile", NULL},
  {"label-components", NULL},
  {"exe-filename", NULL},
  {"<directory-error>", NULL},
  {"pathname-to-components", NULL},
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
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSsystem (void);

void load_module_gooSsystem (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooScolsSstr();
  load_module_gooSboot();
  load_module_gooSioSport();

  (P)YgooSsystemY___main_0___();
  (P)YgooSsystemY___main_1___();

}

/* END OF GENERATED CODE. */
