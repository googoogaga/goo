/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/random");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/random */

EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSrandomYrecent_setter,"goo/random","recent-setter");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSrandomYrandom_29,"goo/random","random-29");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
DEF(YgooSrandomYLrandomG,"goo/random","<random>");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YgooSrandomYDrecent_size,"goo/random","$recent-size");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YgooSrandomYfab_random_from,"goo/random","fab-random-from");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YgooSrandomYrecent_index_setter,"goo/random","recent-index-setter");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DEF(YgooSrandomYdefault_random_seed,"goo/random","default-random-seed");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YgooSrandomYrecent,"goo/random","recent");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSrandomYDdefault_random,"goo/random","$default-random");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
DEF(YgooSrandomYlcg_rand,"goo/random","lcg-rand");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
DEF(YgooSrandomYrandom,"goo/random","random");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooSrandomYrecent_index,"goo/random","recent-index");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
DEF(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLintG,"goo/boot","<int>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_29);
DEFLIT(lit_25);
DEFLIT(lit_8);
DEFLIT(lit_7);
DEFLIT(lit_28);
DEFLIT(lit_21);
DEFLIT(lit_5);
DEFLIT(lit_9);
DEFLIT(lit_23);
DEFLIT(lit_16);
DEFLIT(lit_14);
DEFLIT(lit_22);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_6);
DEFLIT(lit_17);
DEFLIT(lit_27);
DEFLIT(lit_30);
DEFLIT(lit_0);
DEFLIT(lit_10);
DEFLIT(lit_11);
DEFLIT(lit_4);
DEFLIT(lit_15);
DEFLIT(lit_33);
DEFLIT(lit_18);
DEFLIT(lit_32);
DEFLIT(lit_13);
DEFLIT(lit_26);
DEFLIT(lit_3);
DEFLIT(lit_2);
DEFLIT(lit_20);
DEFLIT(lit_31);

/* FUNCTIONS: */

FUNFOR(YgooSrandomYdefault_random_seed);
LOCFOR(fun_recent_1);
LOCFOR(fun_recent_setter_2);
LOCFOR(fun_3);
LOCFOR(fun_recent_index_4);
LOCFOR(fun_recent_index_setter_5);
LOCFOR(fun_6);
FUNFOR(YgooSrandomYlcg_rand);
LOCFOR(fun_loop_8);
LOCFOR(fun_x_1782_9);
LOCFOR(fun_fab_random_from_10);
LOCFOR(fun_fab_random_11);
LOCFOR(fun_tap_12);
FUNFOR(YgooSrandomYrandom_29);
LOCFOR(fun_random_14);
LOCFOR(fun_find_good_value_15);
LOCFOR(fun_random_using_16);
LOCFOR(fun_random_unit_17);
LOCFOR(fun_random_unit_using_18);
extern P YgooSrandomY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSrandomYdefault_random_seed) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL0(1,VARREF(YgooSsystemYtime));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_recent_1) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_setter_2) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_3) {
  P Ux_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooScolsScolYfill),T1,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_index_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recent_index_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSrandomYrecent_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
UNLINK_STACK();
  QRET(YPint((P)0));
}

FUNCODEDEF(YgooSrandomYlcg_rand) {
  P prev_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(prev_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYT),prev_,YPint((P)171));
  T1 = CALL2(1,VARREF(YgooSmathYA),T2,YPint((P)11213));
  T0 = CALL2(1,VARREF(YgooSmathYmod),T1,YPint((P)53125));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_8) {
  P j_,prev_;
  P v2F3761;
  P v1F3760;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(prev_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,VARREF(YgooSrandomYDrecent_size));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSrandomYlcg_rand),prev_);
    v1F3760 = T3;
    T5 = CALL1(1,VARREF(YgooSrandomYlcg_rand),v1F3760);
    v2F3761 = T5;
    T7 = CALL2(1,VARREF(YgooSmathYmod),v1F3760,YPint((P)32768));
    T9 = CALL2(1,VARREF(YgooSmathYmod),v2F3761,YPint((P)16384));
    T8 = CALL2(1,VARREF(YgooSmathYT),T9,YPint((P)32768));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T8);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T6,FREEREF(0),j_);
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T11;
    a2 = v2F3761;
    j_ = a1;
    prev_ = a2;
    goto loop;
    T4 = T10;
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1782_9) {
  P x_1781_;
  P jF3762;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1781_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1781_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1781_);
    jF3762 = T4;
    CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1781_);
    a1 = T6;
    x_1781_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_fab_random_from_10) {
  P seed_;
  P x_1782F3766;
  P loopF3765;
  P aF3764;
  P rF3763;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(seed_, 0);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSrandomYLrandomG));
  rF3763 = T1;
  T3 = CALL1(1,VARREF(YgooSrandomYrecent),rF3763);
  aF3764 = T3;
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),VARREF(YDmax_int),aF3764,YPint((P)0));
  T4 = FUNSHELL(1,fun_loop_8,2);
  loopF3765 = T4;
  FUNINIT(loopF3765, 2,aF3764,loopF3765);
  T7 = CALL1(1,VARREF(YgooSmathYabs),seed_);
  T6 = CALL2(1,VARREF(YgooSmathYmod),T7,YPint((P)32768));
  T5 = CALL2(0,loopF3765,YPint((P)1),T6);
  T8 = FUNSHELL(1,fun_x_1782_9,2);
  x_1782F3766 = T8;
  FUNINIT(x_1782F3766, 2,rF3763,x_1782F3766);
  T12 = CALL2(1,VARREF(YgooSmathYT),YPint((P)4),VARREF(YgooSrandomYDrecent_size));
  T11 = CALL3(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYLE),T12);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T9 = CALL1(0,x_1782F3766,T10);
  T2 = rF3763;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_random_11) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL0(1,VARREF(YgooSrandomYdefault_random_seed));
  T0 = CALL1(1,VARREF(YgooSrandomYfab_random_from),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_tap_12) {
  P bit_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(bit_, 0);
loop:
  T3 = CALL2(1,VARREF(YgooSmathY_),VARREF(YgooSrandomYDrecent_size),bit_);
  T2 = CALL2(1,VARREF(YgooSmathYA),FREEREF(1),T3);
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSrandomYrandom_29) {
  P r_;
  P tapF3769;
  P aF3768;
  P riF3767;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSrandomYrecent_index),r_);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  check_type(T1,VARREF(YLintG));
  riF3767 = T1;
  T5 = CALL1(1,VARREF(YgooSrandomYrecent),r_);
  aF3768 = T5;
  CALL2(1,VARREF(YgooSrandomYrecent_index_setter),riF3767,r_);
  T7 = FUNSHELL(1,fun_tap_12,2);
  tapF3769 = T7;
  FUNINIT(tapF3769, 2,aF3768,riF3767);
  T11 = CALL1(1,tapF3769,YPint((P)54));
  T12 = CALL1(1,tapF3769,YPint((P)8));
  T10 = CALL2(1,VARREF(YgooSmathYC),T11,T12);
  T14 = CALL1(1,tapF3769,YPint((P)6));
  T15 = CALL1(1,tapF3769,YPint((P)3));
  T13 = CALL2(1,VARREF(YgooSmathYC),T14,T15);
  T9 = CALL2(1,VARREF(YgooSmathYC),T10,T13);
  T8 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T9,aF3768,riF3767);
  T6 = T8;
  T4 = T6;
  T0 = T4;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_14) {
  P range_;
  P T0;
  P a1;
LINK_STACK();
  ARG(range_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSrandomYrandom_using),range_,VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_find_good_value_15) {
  P valueF3770;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
  valueF3770 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYLE),valueF3770,FREEREF(1));
  if (T3 != YPfalse) {
    T2 = valueF3770;
  } else {
    goto loop;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_using_16) {
  P range_,r_;
  P find_good_valueF3773;
  P limitF3772;
  P mF3771;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(range_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),range_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = YPint((P)0);
  } else {
    mF3771 = VARREF(YDmax_int);
    T7 = CALL2(1,VARREF(YgooSmathY_),mF3771,range_);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYmod),T6,range_);
    T4 = CALL2(1,VARREF(YgooSmathY_),mF3771,T5);
    limitF3772 = T4;
    T9 = FUNSHELL(1,fun_find_good_value_15,3);
    find_good_valueF3773 = T9;
    FUNINIT(find_good_valueF3773, 3,r_,limitF3772,find_good_valueF3773);
    T11 = CALL0(1,find_good_valueF3773);
    T10 = CALL2(1,VARREF(YgooSmathYmod),T11,range_);
    T8 = T10;
    T3 = T8;
    T2 = T3;
    T0 = T2;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_unit_17) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YgooSrandomYrandom_unit_using),VARREF(YgooSrandomYDdefault_random));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_random_unit_using_18) {
  P r_;
  P maxF3774;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  maxF3774 = YPint((P)1000000);
  T4 = CALL2(1,VARREF(YgooSmathYA),maxF3774,YPint((P)1));
  T3 = CALL2(1,VARREF(YgooSrandomYrandom_using),T4,r_);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T3);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),maxF3774);
  T1 = CALL2(1,VARREF(YgooSmathYS),T2,T5);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

P YgooSrandomY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"default-random-seed");
  lit_1 = Ynil;
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  YgooSrandomYdefault_random_seed = YPmet(FUNCODEREF(YgooSrandomYdefault_random_seed),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(9));
  T1 = YgooSrandomYdefault_random_seed;
  VARSET(YgooSrandomYdefault_random_seed,T1);
  VARSET(YgooSrandomYDrecent_size,YPint((P)54));
  lit_2 = YPPsym((P)"<random>");
  T3 = (P)YPpair(VARREF(YLanyG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_2),T3);
  VARSET(YgooSrandomYLrandomG,T2);
  lit_3 = YPPsym((P)"recent");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_1 = YPmet(FUNCODEREF(fun_recent_1),LITREF(lit_3),T4,ENVNUL,PNUL,sloc(14));
  T6 = VARREF_OR(YgooSrandomYrecent,YPfalse);
  T7 = fun_recent_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooSrandomYrecent,T5);
  lit_5 = YPPsym((P)"recent-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_setter_2 = YPmet(FUNCODEREF(fun_recent_setter_2),LITREF(lit_5),T8,ENVNUL,PNUL,sloc(14));
  T10 = VARREF_OR(YgooSrandomYrecent_setter,YPfalse);
  T11 = fun_recent_setter_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YgooSrandomYrecent_setter,T9);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T12,ENVNUL,PNUL,sloc(14));
  T13 = fun_3;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent),VARREF(YgooSrandomYrecent_setter),VARREF(YgooScolsSvecYLvecG),T13);
  lit_8 = YPPsym((P)"recent-index");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_index_4 = YPmet(FUNCODEREF(fun_recent_index_4),LITREF(lit_8),T14,ENVNUL,PNUL,sloc(15));
  T16 = VARREF_OR(YgooSrandomYrecent_index,YPfalse);
  T17 = fun_recent_index_4;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooSrandomYrecent_index,T15);
  lit_10 = YPPsym((P)"recent-index-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_index_setter_5 = YPmet(FUNCODEREF(fun_recent_index_setter_5),LITREF(lit_10),T18,ENVNUL,PNUL,sloc(15));
  T20 = VARREF_OR(YgooSrandomYrecent_index_setter,YPfalse);
  T21 = fun_recent_index_setter_5;
  T19 = XCALL2(1,VARREF(YPdefine_method),T20,T21);
  VARSET(YgooSrandomYrecent_index_setter,T19);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T22,ENVNUL,PNUL,sloc(15));
  T23 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent_index),VARREF(YgooSrandomYrecent_index_setter),VARREF(YLintG),T23);
  lit_13 = YPPsym((P)"lcg-rand");
  lit_14 = YPPlist(1,YPPsym((P)"prev"));
  T24 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYlcg_rand = YPmet(FUNCODEREF(YgooSrandomYlcg_rand),LITREF(lit_13),T24,ENVNUL,PNUL,sloc(19));
  T25 = YgooSrandomYlcg_rand;
  VARSET(YgooSrandomYlcg_rand,T25);
  lit_15 = YPPsym((P)"fab-random-from");
  lit_16 = YPPlist(1,YPPsym((P)"seed"));
  lit_17 = YPPsym((P)"loop");
  lit_18 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"prev"));
  lit_19 = YPPsym((P)"x-1782");
  lit_20 = YPPlist(1,YPPsym((P)"x-1781"));
  T28 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),LITREF(lit_17),T28,ENVNUL,PNUL,sloc(27));
  T27 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1782_9 = YPmet(FUNCODEREF(fun_x_1782_9),LITREF(lit_19),T27,ENVNUL,PNUL,sloc(35));
  T26 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_from_10 = YPmet(FUNCODEREF(fun_fab_random_from_10),LITREF(lit_15),T26,ENVNUL,PNUL,sloc(22));
  T30 = VARREF_OR(YgooSrandomYfab_random_from,YPfalse);
  T31 = fun_fab_random_from_10;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YgooSrandomYfab_random_from,T29);
  lit_21 = YPPsym((P)"fab-random");
  T32 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_11 = YPmet(FUNCODEREF(fun_fab_random_11),LITREF(lit_21),T32,ENVNUL,PNUL,sloc(39));
  T34 = VARREF_OR(YgooSrandomYfab_random,YPfalse);
  T35 = fun_fab_random_11;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSrandomYfab_random,T33);
  lit_22 = YPPsym((P)"random-29");
  lit_23 = YPPlist(1,YPPsym((P)"r"));
  lit_24 = YPPsym((P)"tap");
  lit_25 = YPPlist(1,YPPsym((P)"bit"));
  T37 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tap_12 = YPmet(FUNCODEREF(fun_tap_12),LITREF(lit_24),T37,ENVNUL,PNUL,sloc(46));
  T36 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYrandom_29 = YPmet(FUNCODEREF(YgooSrandomYrandom_29),LITREF(lit_22),T36,ENVNUL,PNUL,sloc(42));
  T38 = YgooSrandomYrandom_29;
  VARSET(YgooSrandomYrandom_29,T38);
  T39 = XCALL0(1,VARREF(YgooSrandomYfab_random));
  VARSET(YgooSrandomYDdefault_random,T39);
  lit_26 = YPPsym((P)"random");
  lit_27 = YPPlist(1,YPPsym((P)"range"));
  T40 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_random_14 = YPmet(FUNCODEREF(fun_random_14),LITREF(lit_26),T40,ENVNUL,PNUL,sloc(56));
  T42 = VARREF_OR(YgooSrandomYrandom,YPfalse);
  T43 = fun_random_14;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YgooSrandomYrandom,T41);
  lit_28 = YPPsym((P)"random-using");
  lit_29 = YPPlist(2,YPPsym((P)"range"),YPPsym((P)"r"));
  lit_30 = YPPsym((P)"find-good-value");
  T45 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_find_good_value_15 = YPmet(FUNCODEREF(fun_find_good_value_15),LITREF(lit_30),T45,ENVNUL,PNUL,sloc(64));
  T44 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_random_using_16 = YPmet(FUNCODEREF(fun_random_using_16),LITREF(lit_28),T44,ENVNUL,PNUL,sloc(59));
  T47 = VARREF_OR(YgooSrandomYrandom_using,YPfalse);
  T48 = fun_random_using_16;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T48);
  VARSET(YgooSrandomYrandom_using,T46);
  lit_31 = YPPsym((P)"random-unit");
  T49 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLfloG),Ynil);
  fun_random_unit_17 = YPmet(FUNCODEREF(fun_random_unit_17),LITREF(lit_31),T49,ENVNUL,PNUL,sloc(71));
  T51 = VARREF_OR(YgooSrandomYrandom_unit,YPfalse);
  T52 = fun_random_unit_17;
  T50 = XCALL2(1,VARREF(YPdefine_method),T51,T52);
  VARSET(YgooSrandomYrandom_unit,T50);
  lit_32 = YPPsym((P)"random-unit-using");
  lit_33 = YPPlist(1,YPPsym((P)"r"));
  T53 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_random_unit_using_18 = YPmet(FUNCODEREF(fun_random_unit_using_18),LITREF(lit_32),T53,ENVNUL,PNUL,sloc(74));
  T55 = VARREF_OR(YgooSrandomYrandom_unit_using,YPfalse);
  T56 = fun_random_unit_using_18;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooSrandomYrandom_unit_using,T54);
  T57 = YPfalse;
  return T57;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"type-object", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"recent-setter", CVAR, &YgooSrandomYrecent_setter},
  {"random-29", CVAR, &YgooSrandomYrandom_29},
  {"<random>", CVAR, &YgooSrandomYLrandomG},
  {"$recent-size", CVAR, &YgooSrandomYDrecent_size},
  {"fab-random", CVAR, &YgooSrandomYfab_random},
  {"fab-random-from", CVAR, &YgooSrandomYfab_random_from},
  {"recent-index-setter", CVAR, &YgooSrandomYrecent_index_setter},
  {"random-using", CVAR, &YgooSrandomYrandom_using},
  {"default-random-seed", CVAR, &YgooSrandomYdefault_random_seed},
  {"random-unit-using", CVAR, &YgooSrandomYrandom_unit_using},
  {"recent", CVAR, &YgooSrandomYrecent},
  {"$default-random", CVAR, &YgooSrandomYDdefault_random},
  {"lcg-rand", CVAR, &YgooSrandomYlcg_rand},
  {"---main-0---", PVAR, NULL},
  {"random", CVAR, &YgooSrandomYrandom},
  {"recent-index", CVAR, &YgooSrandomYrecent_index},
  {"random-unit", CVAR, &YgooSrandomYrandom_unit},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fab-random", NULL},
  {"random-using", NULL},
  {"random-unit-using", NULL},
  {"random", NULL},
  {"random-unit", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSrandom;
MODULE_INFO module_info_gooSrandom = {
  "goo/random",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSsystem (void);

/* EXPRESSION: */

extern void load_module_gooSrandom (void);

void load_module_gooSrandom (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSsystem();

  (P)YgooSrandomY___main_0___();

}

/* END OF GENERATED CODE. */
