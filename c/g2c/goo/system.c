/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/system");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/system */

DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
DEF(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSsystemYtime,"goo/system","time");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YLcolG,"goo/boot","<col>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Yhead_setter,"goo/boot","head-setter");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YgooSsystemYdirectory_error,"goo/system","directory-error");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(Yhead,"goo/boot","head");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSioSportYport_filename_setter,"goo/io/port","port-filename-setter");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YgooSsystemYpathname_error,"goo/system","pathname-error");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Ygen_src,"goo/boot","gen-src");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_75);
DEFLIT(lit_52);
DEFLIT(lit_32);
DEFLIT(lit_102);
DEFLIT(lit_105);
DEFLIT(lit_25);
DEFLIT(lit_91);
DEFLIT(lit_22);
DEFLIT(lit_113);
DEFLIT(lit_96);
DEFLIT(lit_18);
DEFLIT(lit_62);
DEFLIT(lit_61);
DEFLIT(lit_39);
DEFLIT(lit_110);
DEFLIT(lit_21);
DEFLIT(lit_78);
DEFLIT(lit_29);
DEFLIT(lit_67);
DEFLIT(lit_31);
DEFLIT(lit_88);
DEFLIT(lit_34);
DEFLIT(lit_94);
DEFLIT(lit_99);
DEFLIT(lit_85);
DEFLIT(lit_76);
DEFLIT(lit_70);
DEFLIT(lit_12);
DEFLIT(lit_95);
DEFLIT(lit_92);
DEFLIT(lit_59);
DEFLIT(lit_5);
DEFLIT(lit_112);
DEFLIT(lit_116);
DEFLIT(lit_54);
DEFLIT(lit_118);
DEFLIT(lit_77);
DEFLIT(lit_111);
DEFLIT(lit_63);
DEFLIT(lit_81);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_28);
DEFLIT(lit_2);
DEFLIT(lit_38);
DEFLIT(lit_15);
DEFLIT(lit_3);
DEFLIT(lit_27);
DEFLIT(lit_19);
DEFLIT(lit_0);
DEFLIT(lit_51);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_83);
DEFLIT(lit_43);
DEFLIT(lit_46);
DEFLIT(lit_97);
DEFLIT(lit_11);
DEFLIT(lit_26);
DEFLIT(lit_84);
DEFLIT(lit_103);
DEFLIT(lit_87);
DEFLIT(lit_14);
DEFLIT(lit_114);
DEFLIT(lit_65);
DEFLIT(lit_82);
DEFLIT(lit_73);
DEFLIT(lit_86);
DEFLIT(lit_101);
DEFLIT(lit_79);
DEFLIT(lit_9);
DEFLIT(lit_56);
DEFLIT(lit_42);
DEFLIT(lit_90);
DEFLIT(lit_17);
DEFLIT(lit_89);
DEFLIT(lit_100);
DEFLIT(lit_107);
DEFLIT(lit_104);
DEFLIT(lit_53);
DEFLIT(lit_72);
DEFLIT(lit_8);
DEFLIT(lit_71);
DEFLIT(lit_66);
DEFLIT(lit_50);
DEFLIT(lit_55);
DEFLIT(lit_120);
DEFLIT(lit_36);
DEFLIT(lit_4);
DEFLIT(lit_98);
DEFLIT(lit_93);
DEFLIT(lit_115);
DEFLIT(lit_49);
DEFLIT(lit_60);
DEFLIT(lit_69);
DEFLIT(lit_109);
DEFLIT(lit_57);
DEFLIT(lit_7);
DEFLIT(lit_1);
DEFLIT(lit_41);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_108);
DEFLIT(lit_30);
DEFLIT(lit_35);
DEFLIT(lit_37);
DEFLIT(lit_47);
DEFLIT(lit_44);
DEFLIT(lit_48);
DEFLIT(lit_58);
DEFLIT(lit_74);
DEFLIT(lit_24);
DEFLIT(lit_80);
DEFLIT(lit_119);
DEFLIT(lit_45);
DEFLIT(lit_68);
DEFLIT(lit_13);
DEFLIT(lit_64);
DEFLIT(lit_40);
DEFLIT(lit_117);
DEFLIT(lit_23);

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
  P tF2559;
  P xF2558;
  P xF2557;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YPtime();
  xF2557 = T2;
  xF2558 = xF2557;
  tF2559 = (P)1;
  T1 = (P)YPiLL(xF2558,(P)2);
  T0 = (P)YPiv(T1,tF2559);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_2) {
  P s_;
  P T0,T1,T2;
LINK_STACK();
  ARG(s_, 0);
  T2 = (P)YPsu(s_);
  T1 = (P)YPos_val(T2);
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_setter_3) {
  P v_,s_;
  P T0,T1;
LINK_STACK();
  ARG(v_, 0);
  ARG(s_, 1);
  T0 = (P)YPsu(v_);
  T1 = (P)YPsu(s_);
  (P)YPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

FUNCODEDEF(fun_process_id_4) {
  P tF2562;
  P xF2561;
  P xF2560;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPpid();
  xF2560 = T2;
  xF2561 = xF2560;
  tF2562 = (P)1;
  T1 = (P)YPiLL(xF2561,(P)2);
  T0 = (P)YPiv(T1,tF2562);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_base_path_5) {
  P filename_;
  P iF2563;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(filename_, 0);
  T11 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
  iF2563 = T10;
  for (;;) {
    P a161_0;
  loop161:
    T1 = CALL2(1,VARREF(YgooSmagYL),iF2563,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = LITREF(lit_15);
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),filename_,iF2563);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
      T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
      if (T3 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmathYA),iF2563,YPint((P)1));
        T6 = CALL3(1,VARREF(YgooScolsSseqYsub),filename_,YPint((P)0),T7);
        T2 = T6;
      } else {
        T9 = CALL2(1,VARREF(YgooSmathY_),iF2563,YPint((P)1));
        a161_0 = T9;
        iF2563 = a161_0;
        goto loop161;
        T2 = T8;
      }
      T0 = T2;
    }
    break;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_path_6) {
  P dirs_;
  P T0;
LINK_STACK();
  NARGS(dirs_, 0);
  T0 = CALL2(1,VARREF(YgooScolsSseqYjoin),dirs_,VARREF(YgooSsystemYTpath_separatorT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_src_path_7) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_29),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_root_path_8) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_personal_root_path_9) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_tmp_path_10) {
  P relpath_;
  P T0;
LINK_STACK();
  ARG(relpath_, 0);
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_15),LITREF(lit_36),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_11) {
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

FUNCODEDEF(fun_file_mtime_19) {
  P filename_;
  P T0,T1,T2;
LINK_STACK();
  ARG(filename_, 0);
  T2 = (P)YPsu(filename_);
  T1 = (P)YPfile_mtime(T2);
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
  T0 = (P)YPfile_existsQ(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYfile_type) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YPfile_type(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcreate_directory) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = (P)YPsu(filename_);
  T0 = (P)YPcreate_directory(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P cF2564;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  for (;;) {
  loop162:
    T7 = BOXVAL(FREEREF(2));
    T6 = CALL1(1,VARREF(YgooSioSportYget),T7);
    cF2564 = T6;
    T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2564);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T4 = BOXVAL(FREEREF(0));
      CALL2(1,VARREF(YgooSioSportYput),T4,cF2564);
      goto loop162;
      T1 = T5;
    } else {
      T1 = YPfalse;
    }
    break;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_24) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P dst_portF2565;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  dst_portF2565 = YPfalse;
  dst_portF2565 = BOXFAB(dst_portF2565);
  T3 = FUNFAB(fun_23,3,dst_portF2565,FREEREF(2),FREEREF(0));
  T4 = FUNFAB(fun_24,1,dst_portF2565);
  T2 = with_cleanup(T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_26) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXVAL(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXVAL(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_copy_27) {
  P src_,dst_;
  P src_portF2566;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  src_portF2566 = YPfalse;
  src_portF2566 = BOXFAB(src_portF2566);
  T2 = FUNFAB(fun_25,3,src_portF2566,src_,dst_);
  T3 = FUNFAB(fun_26,1,src_portF2566);
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

FUNCODEDEF(fun_30) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(component_, 0);
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_15));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_77);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_78));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_79);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_80));
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
  pathname_ = BOXFAB(pathname_);
  T2 = BOXVAL(pathname_);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_75));
  } else {
  }
  T6 = BOXVAL(pathname_);
  T5 = CALL1(1,VARREF(YgooSmacrosYlast),T6);
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
  T15 = fun_30;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_32) {
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
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),components_);
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
  P resultF2567;
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
  resultF2567 = T2;
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF2567);
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_92),components_);
  } else {
  }
UNLINK_STACK();
  RET(resultF2567);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF2568;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T3);
  lastF2568 = T2;
  T0 = CALL2(1,VARREF(YisaQ),lastF2568,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_95),components_);
  } else {
  }
UNLINK_STACK();
  QRET(lastF2568);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF2572;
  P countF2571;
  P hierF2570;
  P labelF2569;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(components_, 0);
  T12 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF2569 = T12;
  T11 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF2570 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),hierF2570);
  countF2571 = T10;
  T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF2570);
  lastF2572 = T9;
  T1 = CALL2(1,VARREF(YisaQ),lastF2572,VARREF(YLstrG));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_98),components_);
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF2571,YPint((P)1));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2569,LITREF(lit_99));
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmathY_),countF2571,YPint((P)1));
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF2570,YPint((P)0),T8);
    T6 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2569,T7);
    T3 = T6;
  }
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF2573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(components_, 0);
  T8 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF2573 = T8;
  T1 = CALL2(1,VARREF(YisaQ),lastF2573,VARREF(YLstrG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),lastF2573,LITREF(lit_77));
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
  P componentsF2574;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2574 = T2;
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF2574);
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

FUNCODEDEF(fun_ensure_41) {
  P c_;
  P nF2575;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T14 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T15);
  nF2575 = T14;
  T1 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF2575);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSsystemYfile_type),nF2575);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_113));
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_114),nF2575);
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
      T11 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF2575);
      T7 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_115),nF2575);
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
  P ensureF2579;
  P hierF2578;
  P labelF2577;
  P componentsF2576;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2576 = T4;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF2576);
  labelF2577 = T3;
  T2 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF2576);
  hierF2578 = T2;
  T1 = FUNSHELL(1,fun_ensure_41,2);
  ensureF2579 = T1;
  FUNINIT(ensureF2579, 2,labelF2577,ensureF2579);
  T0 = CALL1(1,ensureF2579,hierF2578);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P gooc_foundF2584;
  P goo_foundF2583;
  P gooc_fileF2582;
  P goo_fileF2581;
  P base_fileF2580;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
  T19 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF2580 = T19;
  T18 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF2580);
  goo_fileF2581 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF2580);
  gooc_fileF2582 = T17;
  T16 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF2581);
  goo_foundF2583 = T16;
  T15 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF2582);
  gooc_foundF2584 = T15;
  T2 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF2580);
  if (T2 != YPfalse) {
    T1 = goo_foundF2583;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T0 = goo_fileF2581;
  } else {
    T5 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF2580);
    if (T5 != YPfalse) {
      T4 = gooc_foundF2584;
    } else {
      T4 = YPfalse;
    }
    if (T4 != YPfalse) {
      T3 = gooc_fileF2582;
    } else {
      if (goo_foundF2583 != YPfalse) {
        T7 = gooc_foundF2584;
      } else {
        T7 = YPfalse;
      }
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF2581);
        T11 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF2582);
        T9 = CALL2(1,VARREF(YgooSmagYG),T10,T11);
        if (T9 != YPfalse) {
          T8 = goo_fileF2581;
        } else {
          T8 = gooc_fileF2582;
        }
        T6 = T8;
      } else {
        if (gooc_foundF2584 != YPfalse) {
          T12 = gooc_fileF2582;
        } else {
          if (goo_foundF2583 != YPfalse) {
            T13 = goo_fileF2581;
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

FUNCODEDEF(fun_44) {
  P return_;
  P fileF2587;
  P pathF2586;
  P x_1422F2585;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_1422F2585 = T8;
  for (;;) {
    P a163_0;
  loop163:
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1422F2585);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1422F2585);
      pathF2586 = T7;
      T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(1),pathF2586);
      fileF2587 = T6;
      if (fileF2587 != YPfalse) {
        T3 = CALL1(0,return_,fileF2587);
      } else {
      }
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1422F2585);
      a163_0 = T5;
      x_1422F2585 = a163_0;
      goto loop163;
      T0 = T4;
    } else {
      T0 = YPfalse;
    }
    break;
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
  P env_rootF2589;
  P env_rootF2588;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136;
DEFCREGS();
  lit_0 = YPPsym((P)"time");
  lit_1 = Ynil;
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPmet(FUNCODEREF(YgooSsystemYtime),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(19));
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_2 = YPPsym((P)"os-name");
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPmet(FUNCODEREF(fun_os_name_1),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(28));
  T4 = VARREF_OR(YgooSsystemYos_name,YPfalse);
  T5 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YgooSsystemYos_name,T3);
  lit_3 = YPPsym((P)"os-val");
  lit_4 = YPPlist(1,YPPsym((P)"s"));
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPmet(FUNCODEREF(fun_os_val_2),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(32));
  T8 = VARREF_OR(YgooSsystemYos_val,YPfalse);
  T9 = fun_os_val_2;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YgooSsystemYos_val,T7);
  lit_5 = YPPsym((P)"os-val-setter");
  lit_6 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"s"));
  T10 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPmet(FUNCODEREF(fun_os_val_setter_3),LITREF(lit_5),T10,ENVNUL,PNUL,sloc(36));
  T12 = VARREF_OR(YgooSsystemYos_val_setter,YPfalse);
  T13 = fun_os_val_setter_3;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T13);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_7 = YPPsym((P)"process-id");
  T14 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPmet(FUNCODEREF(fun_process_id_4),LITREF(lit_7),T14,ENVNUL,PNUL,sloc(51));
  T16 = VARREF_OR(YgooSsystemYprocess_id,YPfalse);
  T17 = fun_process_id_4;
  T15 = XCALL2(1,VARREF(YPdefine_method),T16,T17);
  VARSET(YgooSsystemYprocess_id,T15);
  lit_8 = YPsb((P)"linux");
  lit_9 = YPsb((P)"/");
  lit_10 = YPsb((P)"win32");
  lit_11 = YPsb((P)"\\");
  lit_12 = YPsb((P)"/");
  T20 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T19 = XCALL2(1,VARREF(YgooSmathYE),T20,LITREF(lit_8));
  if (T19 != YPfalse) {
    T18 = LITREF(lit_9);
  } else {
    T23 = XCALL0(1,VARREF(YgooSsystemYos_name));
    T22 = XCALL2(1,VARREF(YgooSmathYE),T23,LITREF(lit_10));
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
  T25 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_5 = YPmet(FUNCODEREF(fun_base_path_5),LITREF(lit_13),T25,ENVNUL,PNUL,sloc(69));
  T27 = VARREF_OR(YgooSsystemYbase_path,YPfalse);
  T28 = fun_base_path_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T28);
  VARSET(YgooSsystemYbase_path,T26);
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPlist(1,YPPsym((P)"dirs"));
  T29 = YPsig(LITREF(lit_17),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPmet(FUNCODEREF(fun_fab_path_6),LITREF(lit_16),T29,ENVNUL,PNUL,sloc(78));
  T31 = VARREF_OR(YgooSsystemYfab_path,YPfalse);
  T32 = fun_fab_path_6;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T32);
  VARSET(YgooSsystemYfab_path,T30);
  lit_18 = YPsb((P)"GOO_ROOT");
  T37 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF2588 = T37;
  T34 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2588);
  if (T34 != YPfalse) {
    T36 = (P)YgooSsystemYPdefault_goo_root();
    T35 = (P)YPsb(T36);
    T33 = T35;
  } else {
    T33 = env_rootF2588;
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
  env_rootF2589 = T46;
  T45 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2589);
  if (T45 != YPfalse) {
    T44 = LITREF(lit_26);
  } else {
    T44 = env_rootF2589;
  }
  VARSET(YgooSsystemYTgoo_build_rootT,T44);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPlist(1,YPPsym((P)"relpath"));
  lit_29 = YPsb((P)"src");
  T47 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPmet(FUNCODEREF(fun_add_src_path_7),LITREF(lit_27),T47,ENVNUL,PNUL,sloc(103));
  T49 = VARREF_OR(YgooSsystemYadd_src_path,YPfalse);
  T50 = fun_add_src_path_7;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooSsystemYadd_src_path,T48);
  lit_30 = YPPsym((P)"add-goo-root-path");
  lit_31 = YPPlist(1,YPPsym((P)"relpath"));
  T51 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPmet(FUNCODEREF(fun_add_goo_root_path_8),LITREF(lit_30),T51,ENVNUL,PNUL,sloc(106));
  T53 = VARREF_OR(YgooSsystemYadd_goo_root_path,YPfalse);
  T54 = fun_add_goo_root_path_8;
  T52 = XCALL2(1,VARREF(YPdefine_method),T53,T54);
  VARSET(YgooSsystemYadd_goo_root_path,T52);
  lit_32 = YPPsym((P)"add-goo-personal-root-path");
  lit_33 = YPPlist(1,YPPsym((P)"relpath"));
  T55 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_9),LITREF(lit_32),T55,ENVNUL,PNUL,sloc(109));
  T57 = VARREF_OR(YgooSsystemYadd_goo_personal_root_path,YPfalse);
  T58 = fun_add_goo_personal_root_path_9;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T58);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T56);
  lit_34 = YPPsym((P)"add-tmp-path");
  lit_35 = YPPlist(1,YPPsym((P)"relpath"));
  lit_36 = YPsb((P)"tmp");
  T59 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPmet(FUNCODEREF(fun_add_tmp_path_10),LITREF(lit_34),T59,ENVNUL,PNUL,sloc(113));
  T61 = VARREF_OR(YgooSsystemYadd_tmp_path,YPfalse);
  T62 = fun_add_tmp_path_10;
  T60 = XCALL2(1,VARREF(YPdefine_method),T61,T62);
  VARSET(YgooSsystemYadd_tmp_path,T60);
  lit_37 = YPPsym((P)"add-build-path");
  lit_38 = YPPlist(2,YPPsym((P)"builddir"),YPPsym((P)"relpath"));
  lit_39 = YPsb((P)"c");
  T63 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPmet(FUNCODEREF(fun_add_build_path_11),LITREF(lit_37),T63,ENVNUL,PNUL,sloc(116));
  T65 = VARREF_OR(YgooSsystemYadd_build_path,YPfalse);
  T66 = fun_add_build_path_11;
  T64 = XCALL2(1,VARREF(YPdefine_method),T65,T66);
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
  T67 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_44),T67,ENVNUL,PNUL,sloc(125));
  T68 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T68);
  lit_46 = YPPsym((P)"goo-filename");
  lit_47 = YPPlist(1,YPPsym((P)"name"));
  T69 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_46),T69,ENVNUL,PNUL,sloc(128));
  T70 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T70);
  lit_48 = YPPsym((P)"gooc-filename?");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  T71 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_48),T71,ENVNUL,PNUL,sloc(131));
  T72 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T72);
  lit_50 = YPPsym((P)"gooc-filename");
  lit_51 = YPPlist(1,YPPsym((P)"name"));
  T73 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_50),T73,ENVNUL,PNUL,sloc(134));
  T74 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T74);
  lit_52 = YPPsym((P)"c-filename");
  lit_53 = YPPlist(1,YPPsym((P)"name"));
  T75 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_52),T75,ENVNUL,PNUL,sloc(137));
  T76 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T76);
  lit_54 = YPPsym((P)"obj-filename");
  lit_55 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_54),T77,ENVNUL,PNUL,sloc(140));
  T78 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T78);
  lit_56 = YPPsym((P)"exe-filename");
  lit_57 = YPPlist(1,YPPsym((P)"name"));
  T79 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_56),T79,ENVNUL,PNUL,sloc(143));
  T80 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T80);
  lit_58 = YPPsym((P)"file-mtime");
  lit_59 = YPPlist(1,YPPsym((P)"filename"));
  T81 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPmet(FUNCODEREF(fun_file_mtime_19),LITREF(lit_58),T81,ENVNUL,PNUL,sloc(179));
  T83 = VARREF_OR(YgooSsystemYfile_mtime,YPfalse);
  T84 = fun_file_mtime_19;
  T82 = XCALL2(1,VARREF(YPdefine_method),T83,T84);
  VARSET(YgooSsystemYfile_mtime,T82);
  lit_60 = YPPsym((P)"file-exists?");
  lit_61 = YPPlist(1,YPPsym((P)"filename"));
  T85 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_60),T85,ENVNUL,PNUL,sloc(184));
  T86 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T86);
  lit_62 = YPPsym((P)"file-type");
  lit_63 = YPPlist(1,YPPsym((P)"filename"));
  T87 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_62),T87,ENVNUL,PNUL,sloc(189));
  T88 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T88);
  lit_64 = YPPsym((P)"create-directory");
  lit_65 = YPPlist(1,YPPsym((P)"filename"));
  T89 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_64),T89,ENVNUL,PNUL,sloc(194));
  T90 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T90);
  lit_66 = YPPsym((P)"file-copy");
  lit_67 = YPPlist(2,YPPsym((P)"src"),YPPsym((P)"dst"));
  T95 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T95,ENVNUL,PNUL,sloc(199));
  T94 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T94,ENVNUL,PNUL,sloc(199));
  T93 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T93,ENVNUL,PNUL,sloc(198));
  T92 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T92,ENVNUL,PNUL,sloc(198));
  T91 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_27 = YPmet(FUNCODEREF(fun_file_copy_27),LITREF(lit_66),T91,ENVNUL,PNUL,sloc(197));
  T97 = VARREF_OR(YgooSsystemYfile_copy,YPfalse);
  T98 = fun_file_copy_27;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T98);
  VARSET(YgooSsystemYfile_copy,T96);
  lit_68 = YPPsym((P)"so-load");
  lit_69 = YPPlist(1,YPPsym((P)"name"));
  T99 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_68),T99,ENVNUL,PNUL,sloc(209));
  T100 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T100);
  lit_70 = YPPsym((P)"<pathname-error>");
  T102 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T101 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_70),T102);
  VARSET(YgooSsystemYLpathname_errorG,T101);
  lit_71 = YPPsym((P)"pathname-error");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T103 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYpathname_error = YPmet(FUNCODEREF(YgooSsystemYpathname_error),LITREF(lit_71),T103,ENVNUL,PNUL,sloc(248));
  T104 = YgooSsystemYpathname_error;
  VARSET(YgooSsystemYpathname_error,T104);
  lit_73 = YPPsym((P)"pathname-to-components");
  lit_74 = YPPlist(1,YPPsym((P)"pathname"));
  lit_75 = YPsb((P)"Can't convert empty an pathname to components.");
  lit_76 = YPPlist(1,YPPsym((P)"component"));
  lit_77 = YPPsym((P)"root");
  lit_78 = YPsb((P)"..");
  lit_79 = YPPsym((P)"up");
  lit_80 = YPsb((P)".");
  lit_81 = YPPsym((P)"current");
  T106 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T106,ENVNUL,PNUL,sloc(257));
  T105 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_73),T105,ENVNUL,PNUL,sloc(252));
  T107 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T107);
  lit_82 = YPPsym((P)"components-to-pathname");
  lit_83 = YPPlist(1,YPPsym((P)"components"));
  lit_84 = YPsb((P)"Can't convert empty components to a pathname.");
  lit_85 = YPPlist(1,YPPsym((P)"component"));
  lit_86 = YPsb((P)"..");
  lit_87 = YPsb((P)".");
  T109 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T109,ENVNUL,PNUL,sloc(269));
  T108 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_82),T108,ENVNUL,PNUL,sloc(266));
  T110 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T110);
  lit_88 = YPPsym((P)"label-components");
  lit_89 = YPPlist(1,YPPsym((P)"components"));
  T111 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_88),T111,ENVNUL,PNUL,sloc(279));
  T112 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T112);
  lit_90 = YPPsym((P)"hierarchical-components");
  lit_91 = YPPlist(1,YPPsym((P)"components"));
  lit_92 = YPsb((P)"Hierarchical portion of %= must not be empty.");
  T113 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_90),T113,ENVNUL,PNUL,sloc(285));
  T114 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T114);
  lit_93 = YPPsym((P)"components-last");
  lit_94 = YPPlist(1,YPPsym((P)"components"));
  lit_95 = YPsb((P)"No filename in %=.");
  T115 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_93),T115,ENVNUL,PNUL,sloc(294));
  T116 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T116);
  lit_96 = YPPsym((P)"components-basename");
  lit_97 = YPPlist(1,YPPsym((P)"components"));
  lit_98 = YPsb((P)"Can't compute basename of %=.");
  lit_99 = YPPlist(1,YPPsym((P)"current"));
  T117 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_96),T117,ENVNUL,PNUL,sloc(305));
  T118 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T118);
  lit_100 = YPPsym((P)"components-parent-directory");
  lit_101 = YPPlist(1,YPPsym((P)"components"));
  lit_102 = YPsb((P)"Can't calculate parent of root directory.");
  lit_103 = YPPlist(1,YPPsym((P)"up"));
  T119 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_100),T119,ENVNUL,PNUL,sloc(317));
  T120 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T120);
  lit_104 = YPPsym((P)"parent-directory");
  lit_105 = YPPlist(1,YPPsym((P)"name"));
  T121 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_104),T121,ENVNUL,PNUL,sloc(344));
  T122 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T122);
  lit_106 = YPPsym((P)"<directory-error>");
  T125 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T124 = (P)YPpair(VARREF(YgooSconditionsYLfile_opening_errorG),T125);
  T123 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_106),T124);
  VARSET(YgooSsystemYLdirectory_errorG,T123);
  lit_107 = YPPsym((P)"directory-error");
  lit_108 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"name"));
  T126 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSsystemYdirectory_error = YPmet(FUNCODEREF(YgooSsystemYdirectory_error),LITREF(lit_107),T126,ENVNUL,PNUL,sloc(350));
  T127 = YgooSsystemYdirectory_error;
  VARSET(YgooSsystemYdirectory_error,T127);
  lit_109 = YPPsym((P)"probe-directory");
  lit_110 = YPPlist(1,YPPsym((P)"name"));
  lit_111 = YPPsym((P)"ensure");
  lit_112 = YPPlist(1,YPPsym((P)"c"));
  lit_113 = YPPsym((P)"directory");
  lit_114 = YPsb((P)"%s is not a directory.\n");
  lit_115 = YPsb((P)"Don't know how to create the directory %s.\n");
  T129 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_41 = YPmet(FUNCODEREF(fun_ensure_41),LITREF(lit_111),T129,ENVNUL,PNUL,sloc(361));
  T128 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_109),T128,ENVNUL,PNUL,sloc(357));
  T130 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T130);
  lit_116 = YPPsym((P)"find-goo-file-at");
  lit_117 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"path"));
  T134 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T133 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T134,Ynil);
  T132 = YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_116),T133,ENVNUL,PNUL,sloc(379));
  T136 = YgooSsystemYfind_goo_file_at;
  T135 = VARSET(YgooSsystemYfind_goo_file_at,T136);
  T131 = T135;
  return T131;
}

P YgooSsystemY___main_1___() {
  P T0,T1,T2,T3,T4;
DEFCREGS();
  lit_118 = YPPsym((P)"find-goo-file-in-path");
  lit_119 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"search-paths"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  T2 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T2,ENVNUL,PNUL,sloc(398));
  T1 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T0 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T1,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_118),T0,ENVNUL,PNUL,sloc(397));
  T3 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T3);
  T4 = YPfalse;
  return T4;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%vpc", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"port-filename-setter", &module_info_gooSioSport, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {">", &module_info_gooSmag, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"<pathname-error>", CVAR, &YgooSsystemYLpathname_errorG},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"%default-goo-root", PVAR, NULL},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"time", CVAR, &YgooSsystemYtime},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"directory-error", CVAR, &YgooSsystemYdirectory_error},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"---main-0---", PVAR, NULL},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"<directory-error>", CVAR, &YgooSsystemYLdirectory_errorG},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"%compile", PVAR, NULL},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"---main-1---", PVAR, NULL},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"%pid", PVAR, NULL},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"pathname-error", CVAR, &YgooSsystemYpathname_error},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"%load", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"components-basename", NULL},
  {"<pathname-error>", NULL},
  {"file-exists?", NULL},
  {"*exe-extension*", NULL},
  {"os-val-setter", NULL},
  {"probe-directory", NULL},
  {"*c-extension*", NULL},
  {"add-goo-personal-root-path", NULL},
  {"components-last", NULL},
  {"so-load", NULL},
  {"find-goo-file-in-path", NULL},
  {"goo-filename", NULL},
  {"hierarchical-components", NULL},
  {"file-mtime", NULL},
  {"add-goo-root-path", NULL},
  {"os-val", NULL},
  {"*goo-root*", NULL},
  {"*goo-personal-root*", NULL},
  {"os-name", NULL},
  {"*obj-extension*", NULL},
  {"label-components", NULL},
  {"exe-filename", NULL},
  {"<directory-error>", NULL},
  {"pathname-to-components", NULL},
  {"%compile", NULL},
  {"*path-separator*", NULL},
  {"file-copy", NULL},
  {"add-src-path", NULL},
  {"obj-filename", NULL},
  {"parent-directory", NULL},
  {"*goo-extension*", NULL},
  {"time", NULL},
  {"*module-search-path*", NULL},
  {"find-goo-file-at", NULL},
  {"create-directory", NULL},
  {"process-id", NULL},
  {"add-build-path", NULL},
  {"components-to-pathname", NULL},
  {"*goo-build-root*", NULL},
  {"c-filename", NULL},
  {"components-parent-directory", NULL},
  {"file-type", NULL},
  {"gooc-filename", NULL},
  {"add-tmp-path", NULL},
  {"%load", NULL},
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
