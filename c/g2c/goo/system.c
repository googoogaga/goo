/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/system");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/system */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
DEF(YgooSsystemYpathname_error,"goo/system","pathname-error");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
DEF(YgooSsystemYos_name,"goo/system","os-name");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSconditionsYread,"goo/conditions","read");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_cache,"goo/boot","fun-cache");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOnew,"goo/boot","@new");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
DEF(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YDmax_int,"goo/boot","$max-int");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
DEF(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Yhead,"goo/boot","head");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YgooSsystemYdirectory_error,"goo/system","directory-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YOrev,"goo/boot","@rev");
EXT(Yas_error,"goo/boot","as-error");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_24);
DEFLIT(lit_52);
DEFLIT(lit_44);
DEFLIT(lit_41);
DEFLIT(lit_47);
DEFLIT(lit_10);
DEFLIT(lit_90);
DEFLIT(lit_113);
DEFLIT(lit_23);
DEFLIT(lit_95);
DEFLIT(lit_78);
DEFLIT(lit_17);
DEFLIT(lit_103);
DEFLIT(lit_22);
DEFLIT(lit_69);
DEFLIT(lit_14);
DEFLIT(lit_70);
DEFLIT(lit_66);
DEFLIT(lit_9);
DEFLIT(lit_108);
DEFLIT(lit_21);
DEFLIT(lit_93);
DEFLIT(lit_116);
DEFLIT(lit_68);
DEFLIT(lit_55);
DEFLIT(lit_79);
DEFLIT(lit_16);
DEFLIT(lit_28);
DEFLIT(lit_46);
DEFLIT(lit_94);
DEFLIT(lit_35);
DEFLIT(lit_110);
DEFLIT(lit_29);
DEFLIT(lit_111);
DEFLIT(lit_83);
DEFLIT(lit_39);
DEFLIT(lit_32);
DEFLIT(lit_51);
DEFLIT(lit_33);
DEFLIT(lit_27);
DEFLIT(lit_59);
DEFLIT(lit_100);
DEFLIT(lit_106);
DEFLIT(lit_109);
DEFLIT(lit_71);
DEFLIT(lit_61);
DEFLIT(lit_99);
DEFLIT(lit_20);
DEFLIT(lit_15);
DEFLIT(lit_87);
DEFLIT(lit_118);
DEFLIT(lit_107);
DEFLIT(lit_96);
DEFLIT(lit_84);
DEFLIT(lit_98);
DEFLIT(lit_40);
DEFLIT(lit_76);
DEFLIT(lit_86);
DEFLIT(lit_19);
DEFLIT(lit_119);
DEFLIT(lit_48);
DEFLIT(lit_13);
DEFLIT(lit_105);
DEFLIT(lit_4);
DEFLIT(lit_73);
DEFLIT(lit_53);
DEFLIT(lit_60);
DEFLIT(lit_54);
DEFLIT(lit_8);
DEFLIT(lit_26);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_65);
DEFLIT(lit_104);
DEFLIT(lit_120);
DEFLIT(lit_6);
DEFLIT(lit_112);
DEFLIT(lit_74);
DEFLIT(lit_45);
DEFLIT(lit_2);
DEFLIT(lit_75);
DEFLIT(lit_3);
DEFLIT(lit_34);
DEFLIT(lit_7);
DEFLIT(lit_37);
DEFLIT(lit_115);
DEFLIT(lit_50);
DEFLIT(lit_77);
DEFLIT(lit_89);
DEFLIT(lit_18);
DEFLIT(lit_1);
DEFLIT(lit_81);
DEFLIT(lit_43);
DEFLIT(lit_97);
DEFLIT(lit_63);
DEFLIT(lit_62);
DEFLIT(lit_56);
DEFLIT(lit_30);
DEFLIT(lit_5);
DEFLIT(lit_38);
DEFLIT(lit_114);
DEFLIT(lit_88);
DEFLIT(lit_12);
DEFLIT(lit_67);
DEFLIT(lit_25);
DEFLIT(lit_101);
DEFLIT(lit_102);
DEFLIT(lit_57);
DEFLIT(lit_80);
DEFLIT(lit_42);
DEFLIT(lit_11);
DEFLIT(lit_31);
DEFLIT(lit_92);
DEFLIT(lit_117);
DEFLIT(lit_64);
DEFLIT(lit_58);
DEFLIT(lit_49);
DEFLIT(lit_91);
DEFLIT(lit_85);
DEFLIT(lit_82);
DEFLIT(lit_72);

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
  P tF8859;
  P xF8858;
  P xF8857;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPtime();
  xF8857 = T2;
  xF8858 = xF8857;
  tF8859 = (P)1;
  T1 = (P)YPiLL(xF8858,(P)2);
  T0 = (P)YPiv(T1,tF8859);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
  T1 = (P)YgooSsystemYPos_name();
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
  T1 = (P)YgooSsystemYPos_val(T2);
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
  (P)YgooSsystemYPos_val_setter(T0,T1);
UNLINK_STACK();
  RET(v_);
}

FUNCODEDEF(fun_process_id_4) {
  P tF8862;
  P xF8861;
  P xF8860;
  P T0,T1,T2;
LINK_STACK();
  T2 = (P)YgooSsystemYPpid();
  xF8860 = T2;
  xF8861 = xF8860;
  tF8862 = (P)1;
  T1 = (P)YPiLL(xF8861,(P)2);
  T0 = (P)YPiv(T1,tF8862);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_base_path_5) {
  P filename_;
  P iF8863;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(filename_, 0);
  T11 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T10 = CALL2(1,VARREF(YgooSmathY_),T11,YPint((P)1));
  iF8863 = T10;
  LOOP_416: {
    P a416_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF8863,YPint((P)0));
    if (T1 != YPfalse) {
      T0 = LITREF(lit_15);
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYelt),filename_,iF8863);
      T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
      T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
      if (T3 != YPfalse) {
        T7 = CALL2(1,VARREF(YgooSmathYA),iF8863,YPint((P)1));
        T6 = CALL3(1,VARREF(YgooScolsSseqYsub),filename_,YPint((P)0),T7);
        T2 = T6;
      } else {
        T9 = CALL2(1,VARREF(YgooSmathY_),iF8863,YPint((P)1));
        a416_0 = T9;
        iF8863 = a416_0;
        goto LOOP_416;
        T2 = T8;
      }
      T0 = T2;
    }
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

FUNCODEDEF(fun_23) {
  P cF8864;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  LOOP_417: {
    T7 = BOXGET(FREEREF(2));
    T6 = CALL1(1,VARREF(YgooSioSportYget),T7);
    cF8864 = T6;
    T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8864);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T4 = BOXGET(FREEREF(0));
      CALL2(1,VARREF(YgooSioSportYput),T4,cF8864);
      goto LOOP_417;
      T1 = T5;
    } else {
      T1 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_24) {
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

FUNCODEDEF(fun_25) {
  P dst_portF8865;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  dst_portF8865 = YPfalse;
  dst_portF8865 = BOXFAB(dst_portF8865);
  T3 = FUNFAB(fun_23,3,dst_portF8865,FREEREF(2),FREEREF(0));
  T4 = FUNFAB(fun_24,1,dst_portF8865);
  T2 = with_cleanup(T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_26) {
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

FUNCODEDEF(fun_file_copy_27) {
  P src_,dst_;
  P src_portF8866;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
  src_portF8866 = YPfalse;
  src_portF8866 = BOXFAB(src_portF8866);
  T2 = FUNFAB(fun_25,3,src_portF8866,src_,dst_);
  T3 = FUNFAB(fun_26,1,src_portF8866);
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
  T2 = pathname_;
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
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
  P resultF8867;
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
  resultF8867 = T2;
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF8867);
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_92),components_);
  } else {
  }
UNLINK_STACK();
  RET(resultF8867);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF8868;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(components_, 0);
  T4 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T3);
  lastF8868 = T2;
  T0 = CALL2(1,VARREF(YisaQ),lastF8868,VARREF(YLlstG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_95),components_);
  } else {
  }
UNLINK_STACK();
  QRET(lastF8868);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF8872;
  P countF8871;
  P hierF8870;
  P labelF8869;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(components_, 0);
  T12 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF8869 = T12;
  T11 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF8870 = T11;
  T10 = CALL1(1,VARREF(YgooStypesYlen),hierF8870);
  countF8871 = T10;
  T9 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF8870);
  lastF8872 = T9;
  T1 = CALL2(1,VARREF(YisaQ),lastF8872,VARREF(YLstrG));
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_98),components_);
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),countF8871,YPint((P)1));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSmacrosYcat),labelF8869,LITREF(lit_99));
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmathY_),countF8871,YPint((P)1));
    T7 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF8870,YPint((P)0),T8);
    T6 = CALL2(1,VARREF(YgooSmacrosYcat),labelF8869,T7);
    T3 = T6;
  }
UNLINK_STACK();
  RET(T3);
}

FUNCODEDEF(YgooSsystemYcomponents_parent_directory) {
  P components_;
  P lastF8873;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(components_, 0);
  T8 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF8873 = T8;
  T1 = CALL2(1,VARREF(YisaQ),lastF8873,VARREF(YLstrG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),lastF8873,LITREF(lit_77));
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
  P componentsF8874;
  P T0,T1,T2;
LINK_STACK();
  ARG(name_, 0);
  T2 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF8874 = T2;
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF8874);
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
  P nF8875;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(c_, 0);
  T15 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T14 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T15);
  nF8875 = T14;
  T1 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF8875);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSsystemYfile_type),nF8875);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_113));
    T3 = CALL1(1,VARREF(Ynot),T4);
    if (T3 != YPfalse) {
      T6 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_114),nF8875);
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
      T11 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF8875);
      T7 = T11;
    } else {
      if (YPtrue != YPfalse) {
        T13 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_115),nF8875);
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
  P ensureF8879;
  P hierF8878;
  P labelF8877;
  P componentsF8876;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(name_, 0);
  T4 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF8876 = T4;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF8876);
  labelF8877 = T3;
  T2 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF8876);
  hierF8878 = T2;
  T1 = FUNSHELL(1,fun_ensure_41,2);
  ensureF8879 = T1;
  FUNINIT(ensureF8879, 2,labelF8877,ensureF8879);
  T0 = CALL1(1,ensureF8879,hierF8878);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P gooc_foundF8884;
  P goo_foundF8883;
  P gooc_fileF8882;
  P goo_fileF8881;
  P base_fileF8880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
  T19 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF8880 = T19;
  T18 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF8880);
  goo_fileF8881 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF8880);
  gooc_fileF8882 = T17;
  T16 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF8881);
  goo_foundF8883 = T16;
  T15 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF8882);
  gooc_foundF8884 = T15;
  T2 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF8880);
  if (T2 != YPfalse) {
    T1 = goo_foundF8883;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T0 = goo_fileF8881;
  } else {
    T5 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF8880);
    if (T5 != YPfalse) {
      T4 = gooc_foundF8884;
    } else {
      T4 = YPfalse;
    }
    if (T4 != YPfalse) {
      T3 = gooc_fileF8882;
    } else {
      if (goo_foundF8883 != YPfalse) {
        T7 = gooc_foundF8884;
      } else {
        T7 = YPfalse;
      }
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF8881);
        T11 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF8882);
        T9 = CALL2(1,VARREF(YgooSmagYG),T10,T11);
        if (T9 != YPfalse) {
          T8 = goo_fileF8881;
        } else {
          T8 = gooc_fileF8882;
        }
        T6 = T8;
      } else {
        if (gooc_foundF8884 != YPfalse) {
          T12 = gooc_fileF8882;
        } else {
          if (goo_foundF8883 != YPfalse) {
            T13 = goo_fileF8881;
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
  P fileF8887;
  P pathF8886;
  P x_2315F8885;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(return_, 0);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_2315F8885 = T8;
  LOOP_418: {
    P a418_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2315F8885);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2315F8885);
      pathF8886 = T7;
      T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(1),pathF8886);
      fileF8887 = T6;
      if (fileF8887 != YPfalse) {
        T3 = CALL1(0,return_,fileF8887);
      } else {
      }
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2315F8885);
      a418_0 = T5;
      x_2315F8885 = a418_0;
      goto LOOP_418;
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
  P env_rootF8889;
  P env_rootF8888;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
DEFCREGS();
  lit_0 = YPPsym((P)"time");
  lit_1 = Ynil;
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPmet(FUNCODEREF(YgooSsystemYtime),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(22));
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_2 = YPPsym((P)"os-name");
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPmet(FUNCODEREF(fun_os_name_1),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(35));
  T4 = VARREF_OR(YgooSsystemYos_name,YPfalse);
  T5 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSsystemYos_name,T3);
  lit_3 = YPPsym((P)"os-val");
  lit_4 = YPPlist(1,YPPsym((P)"s"));
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPmet(FUNCODEREF(fun_os_val_2),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(40));
  T8 = VARREF_OR(YgooSsystemYos_val,YPfalse);
  T9 = fun_os_val_2;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYos_val,T7);
  lit_5 = YPPsym((P)"os-val-setter");
  lit_6 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"s"));
  T10 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPmet(FUNCODEREF(fun_os_val_setter_3),LITREF(lit_5),T10,ENVNUL,PNUL,sloc(44));
  T12 = VARREF_OR(YgooSsystemYos_val_setter,YPfalse);
  T13 = fun_os_val_setter_3;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSsystemYos_val_setter,T11);
  lit_7 = YPPsym((P)"process-id");
  T14 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPmet(FUNCODEREF(fun_process_id_4),LITREF(lit_7),T14,ENVNUL,PNUL,sloc(59));
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
  fun_base_path_5 = YPmet(FUNCODEREF(fun_base_path_5),LITREF(lit_13),T25,ENVNUL,PNUL,sloc(77));
  T27 = VARREF_OR(YgooSsystemYbase_path,YPfalse);
  T28 = fun_base_path_5;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YgooSsystemYbase_path,T26);
  lit_16 = YPPsym((P)"fab-path");
  lit_17 = YPPlist(1,YPPsym((P)"dirs"));
  T29 = YPsig(LITREF(lit_17),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_6 = YPmet(FUNCODEREF(fun_fab_path_6),LITREF(lit_16),T29,ENVNUL,PNUL,sloc(86));
  T31 = VARREF_OR(YgooSsystemYfab_path,YPfalse);
  T32 = fun_fab_path_6;
  T30 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T31,T32);
  VARSET(YgooSsystemYfab_path,T30);
  lit_18 = YPsb((P)"GOO_ROOT");
  T37 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_18));
  env_rootF8888 = T37;
  T34 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF8888);
  if (T34 != YPfalse) {
    T36 = (P)YgooSsystemYPdefault_goo_root();
    T35 = (P)YPsb(T36);
    T33 = T35;
  } else {
    T33 = env_rootF8888;
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
  env_rootF8889 = T46;
  T45 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF8889);
  if (T45 != YPfalse) {
    T44 = LITREF(lit_26);
  } else {
    T44 = env_rootF8889;
  }
  VARSET(YgooSsystemYTgoo_build_rootT,T44);
  lit_27 = YPPsym((P)"add-src-path");
  lit_28 = YPPlist(1,YPPsym((P)"relpath"));
  lit_29 = YPsb((P)"src");
  T47 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_7 = YPmet(FUNCODEREF(fun_add_src_path_7),LITREF(lit_27),T47,ENVNUL,PNUL,sloc(111));
  T49 = VARREF_OR(YgooSsystemYadd_src_path,YPfalse);
  T50 = fun_add_src_path_7;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSsystemYadd_src_path,T48);
  lit_30 = YPPsym((P)"add-goo-root-path");
  lit_31 = YPPlist(1,YPPsym((P)"relpath"));
  T51 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_8 = YPmet(FUNCODEREF(fun_add_goo_root_path_8),LITREF(lit_30),T51,ENVNUL,PNUL,sloc(114));
  T53 = VARREF_OR(YgooSsystemYadd_goo_root_path,YPfalse);
  T54 = fun_add_goo_root_path_8;
  T52 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T53,T54);
  VARSET(YgooSsystemYadd_goo_root_path,T52);
  lit_32 = YPPsym((P)"add-goo-personal-root-path");
  lit_33 = YPPlist(1,YPPsym((P)"relpath"));
  T55 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_9),LITREF(lit_32),T55,ENVNUL,PNUL,sloc(117));
  T57 = VARREF_OR(YgooSsystemYadd_goo_personal_root_path,YPfalse);
  T58 = fun_add_goo_personal_root_path_9;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T56);
  lit_34 = YPPsym((P)"add-tmp-path");
  lit_35 = YPPlist(1,YPPsym((P)"relpath"));
  lit_36 = YPsb((P)"tmp");
  T59 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_10 = YPmet(FUNCODEREF(fun_add_tmp_path_10),LITREF(lit_34),T59,ENVNUL,PNUL,sloc(121));
  T61 = VARREF_OR(YgooSsystemYadd_tmp_path,YPfalse);
  T62 = fun_add_tmp_path_10;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSsystemYadd_tmp_path,T60);
  lit_37 = YPPsym((P)"add-build-path");
  lit_38 = YPPlist(2,YPPsym((P)"builddir"),YPPsym((P)"relpath"));
  lit_39 = YPsb((P)"c");
  T63 = YPsig(LITREF(lit_38),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_11 = YPmet(FUNCODEREF(fun_add_build_path_11),LITREF(lit_37),T63,ENVNUL,PNUL,sloc(124));
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
  T67 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_44),T67,ENVNUL,PNUL,sloc(133));
  T68 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T68);
  lit_46 = YPPsym((P)"goo-filename");
  lit_47 = YPPlist(1,YPPsym((P)"name"));
  T69 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_46),T69,ENVNUL,PNUL,sloc(136));
  T70 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T70);
  lit_48 = YPPsym((P)"gooc-filename?");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  T71 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_48),T71,ENVNUL,PNUL,sloc(139));
  T72 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T72);
  lit_50 = YPPsym((P)"gooc-filename");
  lit_51 = YPPlist(1,YPPsym((P)"name"));
  T73 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_50),T73,ENVNUL,PNUL,sloc(142));
  T74 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T74);
  lit_52 = YPPsym((P)"c-filename");
  lit_53 = YPPlist(1,YPPsym((P)"name"));
  T75 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_52),T75,ENVNUL,PNUL,sloc(145));
  T76 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T76);
  lit_54 = YPPsym((P)"obj-filename");
  lit_55 = YPPlist(1,YPPsym((P)"name"));
  T77 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_54),T77,ENVNUL,PNUL,sloc(148));
  T78 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T78);
  lit_56 = YPPsym((P)"exe-filename");
  lit_57 = YPPlist(1,YPPsym((P)"name"));
  T79 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_56),T79,ENVNUL,PNUL,sloc(151));
  T80 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T80);
  lit_58 = YPPsym((P)"file-mtime");
  lit_59 = YPPlist(1,YPPsym((P)"filename"));
  T81 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_19 = YPmet(FUNCODEREF(fun_file_mtime_19),LITREF(lit_58),T81,ENVNUL,PNUL,sloc(191));
  T83 = VARREF_OR(YgooSsystemYfile_mtime,YPfalse);
  T84 = fun_file_mtime_19;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSsystemYfile_mtime,T82);
  lit_60 = YPPsym((P)"file-exists?");
  lit_61 = YPPlist(1,YPPsym((P)"filename"));
  T85 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_60),T85,ENVNUL,PNUL,sloc(196));
  T86 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T86);
  lit_62 = YPPsym((P)"file-type");
  lit_63 = YPPlist(1,YPPsym((P)"filename"));
  T89 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  T88 = YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_62),T89,ENVNUL,PNUL,sloc(201));
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
  T0 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_64),T0,ENVNUL,PNUL,sloc(208));
  T1 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T1);
  lit_66 = YPPsym((P)"file-copy");
  lit_67 = YPPlist(2,YPPsym((P)"src"),YPPsym((P)"dst"));
  T6 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T6,ENVNUL,PNUL,sloc(213));
  T5 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T5,ENVNUL,PNUL,sloc(213));
  T4 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T4,ENVNUL,PNUL,sloc(212));
  T3 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T3,ENVNUL,PNUL,sloc(212));
  T2 = YPsig(LITREF(lit_67),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_27 = YPmet(FUNCODEREF(fun_file_copy_27),LITREF(lit_66),T2,ENVNUL,PNUL,sloc(211));
  T8 = VARREF_OR(YgooSsystemYfile_copy,YPfalse);
  T9 = fun_file_copy_27;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSsystemYfile_copy,T7);
  lit_68 = YPPsym((P)"so-load");
  lit_69 = YPPlist(1,YPPsym((P)"name"));
  T10 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_68),T10,ENVNUL,PNUL,sloc(223));
  T11 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T11);
  lit_70 = YPPsym((P)"<pathname-error>");
  T13 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_70),T13);
  VARSET(YgooSsystemYLpathname_errorG,T12);
  lit_71 = YPPsym((P)"pathname-error");
  lit_72 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T14 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYpathname_error = YPmet(FUNCODEREF(YgooSsystemYpathname_error),LITREF(lit_71),T14,ENVNUL,PNUL,sloc(262));
  T15 = YgooSsystemYpathname_error;
  VARSET(YgooSsystemYpathname_error,T15);
  lit_73 = YPPsym((P)"pathname-to-components");
  lit_74 = YPPlist(1,YPPsym((P)"pathname"));
  lit_75 = YPsb((P)"Can't convert empty an pathname to components.");
  lit_76 = YPPlist(1,YPPsym((P)"component"));
  lit_77 = YPPsym((P)"root");
  lit_78 = YPsb((P)"..");
  lit_79 = YPPsym((P)"up");
  lit_80 = YPsb((P)".");
  lit_81 = YPPsym((P)"current");
  T17 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T17,ENVNUL,PNUL,sloc(271));
  T16 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_73),T16,ENVNUL,PNUL,sloc(266));
  T18 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T18);
  lit_82 = YPPsym((P)"components-to-pathname");
  lit_83 = YPPlist(1,YPPsym((P)"components"));
  lit_84 = YPsb((P)"Can't convert empty components to a pathname.");
  lit_85 = YPPlist(1,YPPsym((P)"component"));
  lit_86 = YPsb((P)"..");
  lit_87 = YPsb((P)".");
  T20 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T20,ENVNUL,PNUL,sloc(283));
  T19 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_82),T19,ENVNUL,PNUL,sloc(280));
  T21 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T21);
  lit_88 = YPPsym((P)"label-components");
  lit_89 = YPPlist(1,YPPsym((P)"components"));
  T22 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_88),T22,ENVNUL,PNUL,sloc(293));
  T23 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T23);
  lit_90 = YPPsym((P)"hierarchical-components");
  lit_91 = YPPlist(1,YPPsym((P)"components"));
  lit_92 = YPsb((P)"Hierarchical portion of %= must not be empty.");
  T24 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_90),T24,ENVNUL,PNUL,sloc(299));
  T25 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T25);
  lit_93 = YPPsym((P)"components-last");
  lit_94 = YPPlist(1,YPPsym((P)"components"));
  lit_95 = YPsb((P)"No filename in %=.");
  T26 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_93),T26,ENVNUL,PNUL,sloc(308));
  T27 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T27);
  lit_96 = YPPsym((P)"components-basename");
  lit_97 = YPPlist(1,YPPsym((P)"components"));
  lit_98 = YPsb((P)"Can't compute basename of %=.");
  lit_99 = YPPlist(1,YPPsym((P)"current"));
  T28 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_96),T28,ENVNUL,PNUL,sloc(319));
  T29 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T29);
  lit_100 = YPPsym((P)"components-parent-directory");
  lit_101 = YPPlist(1,YPPsym((P)"components"));
  lit_102 = YPsb((P)"Can't calculate parent of root directory.");
  lit_103 = YPPlist(1,YPPsym((P)"up"));
  T30 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_100),T30,ENVNUL,PNUL,sloc(331));
  T31 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T31);
  lit_104 = YPPsym((P)"parent-directory");
  lit_105 = YPPlist(1,YPPsym((P)"name"));
  T32 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_104),T32,ENVNUL,PNUL,sloc(358));
  T33 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T33);
  lit_106 = YPPsym((P)"<directory-error>");
  T36 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T35 = (P)YPpair(VARREF(YgooSconditionsYLfile_opening_errorG),T36);
  T34 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_106),T35);
  VARSET(YgooSsystemYLdirectory_errorG,T34);
  lit_107 = YPPsym((P)"directory-error");
  lit_108 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"name"));
  T37 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSsystemYdirectory_error = YPmet(FUNCODEREF(YgooSsystemYdirectory_error),LITREF(lit_107),T37,ENVNUL,PNUL,sloc(364));
  T38 = YgooSsystemYdirectory_error;
  VARSET(YgooSsystemYdirectory_error,T38);
  lit_109 = YPPsym((P)"probe-directory");
  lit_110 = YPPlist(1,YPPsym((P)"name"));
  lit_111 = YPPsym((P)"ensure");
  lit_112 = YPPlist(1,YPPsym((P)"c"));
  lit_113 = YPPsym((P)"directory");
  lit_114 = YPsb((P)"%s is not a directory.\n");
  lit_115 = YPsb((P)"Don't know how to create the directory %s.\n");
  T40 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_41 = YPmet(FUNCODEREF(fun_ensure_41),LITREF(lit_111),T40,ENVNUL,PNUL,sloc(375));
  T39 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_109),T39,ENVNUL,PNUL,sloc(371));
  T41 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T41);
  lit_116 = YPPsym((P)"find-goo-file-at");
  lit_117 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"path"));
  T43 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T42 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T43,Ynil);
  YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_116),T42,ENVNUL,PNUL,sloc(393));
  T44 = YgooSsystemYfind_goo_file_at;
  VARSET(YgooSsystemYfind_goo_file_at,T44);
  lit_118 = YPPsym((P)"find-goo-file-in-path");
  lit_119 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"search-paths"));
  lit_120 = YPPlist(1,YPPsym((P)"return"));
  T47 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T47,ENVNUL,PNUL,sloc(412));
  T46 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T45 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T46,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_118),T45,ENVNUL,PNUL,sloc(411));
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
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"%os-name", PVAR, NULL},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"pathname-error", CVAR, &YgooSsystemYpathname_error},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"%os-val", PVAR, NULL},
  {"%os-val-setter", PVAR, NULL},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"time", CVAR, &YgooSsystemYtime},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"%create-directory", PVAR, NULL},
  {"%compile", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"%time", PVAR, NULL},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"%default-goo-root", PVAR, NULL},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"<directory-error>", CVAR, &YgooSsystemYLdirectory_errorG},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"<pathname-error>", CVAR, &YgooSsystemYLpathname_errorG},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"%pid", PVAR, NULL},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"%file-exists?", PVAR, NULL},
  {"directory-error", CVAR, &YgooSsystemYdirectory_error},
  {"---main-1---", PVAR, NULL},
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"%file-type", PVAR, NULL},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"%file-mtime", PVAR, NULL},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"%load", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"gooc-filename", NULL},
  {"add-src-path", NULL},
  {"components-basename", NULL},
  {"*goo-build-root*", NULL},
  {"components-to-pathname", NULL},
  {"find-goo-file-at", NULL},
  {"os-name", NULL},
  {"process-id", NULL},
  {"*goo-extension*", NULL},
  {"file-mtime", NULL},
  {"add-tmp-path", NULL},
  {"components-last", NULL},
  {"file-copy", NULL},
  {"*goo-root*", NULL},
  {"time", NULL},
  {"exe-filename", NULL},
  {"goo-filename", NULL},
  {"%compile", NULL},
  {"hierarchical-components", NULL},
  {"*obj-extension*", NULL},
  {"<directory-error>", NULL},
  {"*path-separator*", NULL},
  {"create-directory", NULL},
  {"find-goo-file-in-path", NULL},
  {"obj-filename", NULL},
  {"probe-directory", NULL},
  {"label-components", NULL},
  {"os-val-setter", NULL},
  {"*exe-extension*", NULL},
  {"parent-directory", NULL},
  {"<pathname-error>", NULL},
  {"add-goo-root-path", NULL},
  {"file-type", NULL},
  {"add-goo-personal-root-path", NULL},
  {"components-parent-directory", NULL},
  {"os-val", NULL},
  {"*c-extension*", NULL},
  {"file-exists?", NULL},
  {"c-filename", NULL},
  {"pathname-to-components", NULL},
  {"so-load", NULL},
  {"*goo-personal-root*", NULL},
  {"add-build-path", NULL},
  {"%load", NULL},
  {"*module-search-path*", NULL},
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
