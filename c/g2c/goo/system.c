/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/system");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/system */

EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynew,"goo/boot","new");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
DEF(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
DEF(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ytail,"goo/boot","tail");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
DEF(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOlst,"goo/boot","@lst");
EXT(YLlstG,"goo/boot","<lst>");
DEF(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
DEF(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
DEF(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSsystemYso_load,"goo/system","so-load");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YgooSsystemYdirectory_error,"goo/system","directory-error");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YPsymbols,"goo/boot","%symbols");
DEF(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YgooSsystemYadd_src_path,"goo/system","add-src-path");
DEF(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YgooSsystemYgoo_filenameQ,"goo/system","goo-filename?");
DEF(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
DEF(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSsystemYfab_path,"goo/system","fab-path");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
DEF(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
DEF(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPsnul,"goo/boot","%snul");
DEF(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
DEF(YgooSsystemYTgooc_extensionT,"goo/system","*gooc-extension*");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSsystemYbase_path,"goo/system","base-path");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSsystemYpathname_error,"goo/system","pathname-error");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YgooSsystemYgooc_filenameQ,"goo/system","gooc-filename?");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYdiv,"goo/math","div");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
DEF(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
DEF(YgooSsystemYos_val,"goo/system","os-val");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
DEF(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_83);
DEFLIT(lit_29);
DEFLIT(lit_52);
DEFLIT(lit_69);
DEFLIT(lit_56);
DEFLIT(lit_13);
DEFLIT(lit_34);
DEFLIT(lit_105);
DEFLIT(lit_22);
DEFLIT(lit_4);
DEFLIT(lit_106);
DEFLIT(lit_67);
DEFLIT(lit_87);
DEFLIT(lit_100);
DEFLIT(lit_51);
DEFLIT(lit_121);
DEFLIT(lit_70);
DEFLIT(lit_58);
DEFLIT(lit_36);
DEFLIT(lit_55);
DEFLIT(lit_66);
DEFLIT(lit_123);
DEFLIT(lit_16);
DEFLIT(lit_104);
DEFLIT(lit_6);
DEFLIT(lit_107);
DEFLIT(lit_118);
DEFLIT(lit_71);
DEFLIT(lit_94);
DEFLIT(lit_92);
DEFLIT(lit_28);
DEFLIT(lit_1);
DEFLIT(lit_38);
DEFLIT(lit_91);
DEFLIT(lit_122);
DEFLIT(lit_48);
DEFLIT(lit_73);
DEFLIT(lit_47);
DEFLIT(lit_74);
DEFLIT(lit_10);
DEFLIT(lit_114);
DEFLIT(lit_5);
DEFLIT(lit_96);
DEFLIT(lit_90);
DEFLIT(lit_120);
DEFLIT(lit_84);
DEFLIT(lit_3);
DEFLIT(lit_54);
DEFLIT(lit_45);
DEFLIT(lit_12);
DEFLIT(lit_0);
DEFLIT(lit_59);
DEFLIT(lit_62);
DEFLIT(lit_27);
DEFLIT(lit_11);
DEFLIT(lit_81);
DEFLIT(lit_72);
DEFLIT(lit_60);
DEFLIT(lit_108);
DEFLIT(lit_37);
DEFLIT(lit_68);
DEFLIT(lit_110);
DEFLIT(lit_33);
DEFLIT(lit_44);
DEFLIT(lit_76);
DEFLIT(lit_35);
DEFLIT(lit_75);
DEFLIT(lit_20);
DEFLIT(lit_63);
DEFLIT(lit_78);
DEFLIT(lit_26);
DEFLIT(lit_95);
DEFLIT(lit_50);
DEFLIT(lit_61);
DEFLIT(lit_124);
DEFLIT(lit_113);
DEFLIT(lit_32);
DEFLIT(lit_43);
DEFLIT(lit_101);
DEFLIT(lit_9);
DEFLIT(lit_116);
DEFLIT(lit_117);
DEFLIT(lit_25);
DEFLIT(lit_119);
DEFLIT(lit_17);
DEFLIT(lit_111);
DEFLIT(lit_80);
DEFLIT(lit_109);
DEFLIT(lit_86);
DEFLIT(lit_88);
DEFLIT(lit_8);
DEFLIT(lit_77);
DEFLIT(lit_24);
DEFLIT(lit_64);
DEFLIT(lit_15);
DEFLIT(lit_57);
DEFLIT(lit_82);
DEFLIT(lit_93);
DEFLIT(lit_98);
DEFLIT(lit_102);
DEFLIT(lit_14);
DEFLIT(lit_103);
DEFLIT(lit_42);
DEFLIT(lit_49);
DEFLIT(lit_99);
DEFLIT(lit_65);
DEFLIT(lit_19);
DEFLIT(lit_97);
DEFLIT(lit_30);
DEFLIT(lit_89);
DEFLIT(lit_115);
DEFLIT(lit_46);
DEFLIT(lit_40);
DEFLIT(lit_85);
DEFLIT(lit_7);
DEFLIT(lit_2);
DEFLIT(lit_53);
DEFLIT(lit_31);
DEFLIT(lit_18);
DEFLIT(lit_112);
DEFLIT(lit_21);
DEFLIT(lit_41);
DEFLIT(lit_23);
DEFLIT(lit_79);
DEFLIT(lit_39);

/* FUNCTIONS: */

FUNFOR(YgooSsystemYtime);
LOCFOR(fun_os_name_1);
LOCFOR(fun_os_val_2);
LOCFOR(fun_os_val_setter_3);
LOCFOR(fun_process_id_4);
LOCFOR(fun_loop_5);
LOCFOR(fun_base_path_6);
LOCFOR(fun_fab_path_7);
LOCFOR(fun_add_src_path_8);
LOCFOR(fun_add_goo_root_path_9);
LOCFOR(fun_add_goo_personal_root_path_10);
LOCFOR(fun_add_tmp_path_11);
LOCFOR(fun_add_build_path_12);
FUNFOR(YgooSsystemYgoo_filenameQ);
FUNFOR(YgooSsystemYgoo_filename);
FUNFOR(YgooSsystemYgooc_filenameQ);
FUNFOR(YgooSsystemYgooc_filename);
FUNFOR(YgooSsystemYc_filename);
FUNFOR(YgooSsystemYobj_filename);
FUNFOR(YgooSsystemYexe_filename);
LOCFOR(fun_file_mtime_20);
FUNFOR(YgooSsystemYfile_existsQ);
FUNFOR(YgooSsystemYfile_type);
FUNFOR(YgooSsystemYcreate_directory);
LOCFOR(fun_loop_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_file_copy_29);
FUNFOR(YgooSsystemYso_load);
FUNFOR(YgooSsystemYpathname_error);
LOCFOR(fun_32);
FUNFOR(YgooSsystemYpathname_to_components);
LOCFOR(fun_34);
FUNFOR(YgooSsystemYcomponents_to_pathname);
FUNFOR(YgooSsystemYlabel_components);
FUNFOR(YgooSsystemYhierarchical_components);
FUNFOR(YgooSsystemYcomponents_last);
FUNFOR(YgooSsystemYcomponents_basename);
FUNFOR(YgooSsystemYcomponents_parent_directory);
FUNFOR(YgooSsystemYparent_directory);
FUNFOR(YgooSsystemYdirectory_error);
LOCFOR(fun_ensure_43);
FUNFOR(YgooSsystemYprobe_directory);
FUNFOR(YgooSsystemYfind_goo_file_at);
LOCFOR(fun_x_1421_46);
LOCFOR(fun_47);
FUNFOR(YgooSsystemYfind_goo_file_in_path);
extern P YgooSsystemY___main_0___ ();
extern P YgooSsystemY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(YgooSsystemYtime) {
  P tF2492;
  P xF2491;
  P xF2490;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YPtime();
  xF2490 = T1;
  xF2491 = xF2490;
  tF2492 = (P)1;
  T4 = (P)YPiLL(xF2491,(P)2);
  T3 = (P)YPiv(T4,tF2492);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_os_name_1) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = (P)YPos_name();
  T0 = (P)YPsb(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_os_val_2) {
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

FUNCODEDEF(fun_os_val_setter_3) {
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

FUNCODEDEF(fun_process_id_4) {
  P tF2495;
  P xF2494;
  P xF2493;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = (P)YgooSsystemYPpid();
  xF2493 = T1;
  xF2494 = xF2493;
  tF2495 = (P)1;
  T4 = (P)YPiLL(xF2494,(P)2);
  T3 = (P)YPiv(T4,tF2495);
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_5) {
  P i_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_17);
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

FUNCODEDEF(fun_base_path_6) {
  P filename_;
  P loopF2496;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_5,2);
  loopF2496 = T1;
  FUNINIT(loopF2496, 2,filename_,loopF2496);
  T4 = CALL1(1,VARREF(YgooStypesYlen),filename_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF2496,T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_fab_path_7) {
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

FUNCODEDEF(fun_add_src_path_8) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_31),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_goo_root_path_9) {
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

FUNCODEDEF(fun_add_goo_personal_root_path_10) {
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

FUNCODEDEF(fun_add_tmp_path_11) {
  P relpath_;
  P T0;
  P a1;
LINK_STACK();
  ARG(relpath_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooSsystemYfab_path),LITREF(lit_17),LITREF(lit_38),relpath_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_add_build_path_12) {
  P builddir_,relpath_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(builddir_, 0);
  ARG(relpath_, 1);
loop:
  T0 = CALL4(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_build_rootT),LITREF(lit_41),builddir_,relpath_);
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

FUNCODEDEF(fun_file_mtime_20) {
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

FUNCODEDEF(fun_loop_24) {
  P cF2497;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSioSportYget),T2);
  cF2497 = T1;
  T5 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF2497);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = BOXVAL(FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYput),T6,cF2497);
    goto loop;
    T3 = T7;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P loopF2498;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_24,3);
  loopF2498 = T2;
  FUNINIT(loopF2498, 3,FREEREF(2),FREEREF(0),loopF2498);
  T3 = CALL0(0,loopF2498);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_26) {
  P tmpF2499;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2499 = T1;
  if (tmpF2499 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P dst_portF2500;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  dst_portF2500 = YPfalse;
  dst_portF2500 = BOXFAB(dst_portF2500);
  T4 = FUNFAB(fun_25,3,dst_portF2500,FREEREF(2),FREEREF(0));
  T5 = FUNFAB(fun_26,1,dst_portF2500);
  T3 = with_cleanup(T4,T5);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_28) {
  P tmpF2501;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2501 = T1;
  if (tmpF2501 != YPfalse) {
    T4 = BOXVAL(FREEREF(0));
    T3 = CALL1(1,VARREF(YgooSioSportYclose),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_copy_29) {
  P src_,dst_;
  P src_portF2502;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(src_, 0);
  ARG(dst_, 1);
loop:
  src_portF2502 = YPfalse;
  src_portF2502 = BOXFAB(src_portF2502);
  T3 = FUNFAB(fun_27,3,src_portF2502,src_,dst_);
  T4 = FUNFAB(fun_28,1,src_portF2502);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
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

FUNCODEDEF(YgooSsystemYpathname_error) {
  P msg_,args_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSsystemYLpathname_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_17));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_79);
  } else {
    T3 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_80));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_81);
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),component_,LITREF(lit_82));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_83);
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
    T3 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_77));
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
  T15 = fun_32;
  T17 = BOXVAL(pathname_);
  T18 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSsystemYTpath_separatorT),YPint((P)0));
  T16 = CALL2(1,VARREF(YgooScolsSseqYsplit),T17,T18);
  T14 = CALL2(1,VARREF(YgooSmacrosYmap),T15,T16);
UNLINK_STACK();
  RET(T14);
}

FUNCODEDEF(fun_34) {
  P component_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(component_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_79));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_17);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_81));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_88);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),component_,LITREF(lit_83));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_89);
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
    T1 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_86));
  } else {
  }
  T4 = fun_34;
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
  P resultF2503;
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
  resultF2503 = T1;
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),resultF2503);
  if (T5 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_94),components_);
  } else {
  }
  T0 = resultF2503;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_last) {
  P components_;
  P lastF2504;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooStypesYlen),components_);
  T2 = CALL2(1,VARREF(YgooSmathY_),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmacrosYelt),components_,T2);
  lastF2504 = T1;
  T4 = CALL2(1,VARREF(YisaQ),lastF2504,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_97),components_);
  } else {
  }
  T0 = lastF2504;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYcomponents_basename) {
  P components_;
  P lastF2508;
  P countF2507;
  P hierF2506;
  P labelF2505;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYlabel_components),components_);
  labelF2505 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),components_);
  hierF2506 = T3;
  T5 = CALL1(1,VARREF(YgooStypesYlen),hierF2506);
  countF2507 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYcomponents_last),hierF2506);
  lastF2508 = T7;
  T9 = CALL2(1,VARREF(YisaQ),lastF2508,VARREF(YLstrG));
  T8 = CALL1(1,VARREF(Ynot),T9);
  if (T8 != YPfalse) {
    T10 = CALL2(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_100),components_);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYEE),countF2507,YPint((P)1));
  if (T12 != YPfalse) {
    T13 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2505,LITREF(lit_101));
    T11 = T13;
  } else {
    T16 = CALL2(1,VARREF(YgooSmathY_),countF2507,YPint((P)1));
    T15 = CALL3(1,VARREF(YgooScolsSseqYsub),hierF2506,YPint((P)0),T16);
    T14 = CALL2(1,VARREF(YgooSmacrosYcat),labelF2505,T15);
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
  P lastF2509;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(components_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_last),components_);
  lastF2509 = T1;
  T3 = CALL2(1,VARREF(YisaQ),lastF2509,VARREF(YLstrG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSsystemYcomponents_basename),components_);
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmacrosYEE),lastF2509,LITREF(lit_79));
    if (T6 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSsystemYpathname_error),LITREF(lit_104));
      T5 = T7;
    } else {
      if (YPtrue != YPfalse) {
        T9 = CALL2(1,VARREF(YgooSmacrosYcat),components_,LITREF(lit_105));
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
  P componentsF2510;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2510 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYcomponents_parent_directory),componentsF2510);
  T2 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSsystemYdirectory_error) {
  P msg_,name_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  ARG(name_, 1);
loop:
  T2 = CALL1(1,VARREF(Ylst),name_);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSsystemYLdirectory_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),name_,VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ensure_43) {
  P c_;
  P nF2511;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(c_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),FREEREF(0),c_);
  T1 = CALL1(1,VARREF(YgooSsystemYcomponents_to_pathname),T2);
  nF2511 = T1;
  T4 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),nF2511);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooSsystemYfile_type),nF2511);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,LITREF(lit_115));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_116),nF2511);
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
      T14 = CALL1(1,VARREF(YgooSsystemYcreate_directory),nF2511);
      T10 = T14;
    } else {
      if (YPtrue != YPfalse) {
        T16 = CALL2(1,VARREF(YgooSsystemYdirectory_error),LITREF(lit_117),nF2511);
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
  P ensureF2515;
  P hierF2514;
  P labelF2513;
  P componentsF2512;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYpathname_to_components),name_);
  componentsF2512 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYlabel_components),componentsF2512);
  labelF2513 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYhierarchical_components),componentsF2512);
  hierF2514 = T5;
  T6 = FUNSHELL(1,fun_ensure_43,2);
  ensureF2515 = T6;
  FUNINIT(ensureF2515, 2,labelF2513,ensureF2515);
  T7 = CALL1(0,ensureF2515,hierF2514);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSsystemYfind_goo_file_at) {
  P fname_,path_;
  P tmpF2523;
  P tmpF2522;
  P tmpF2521;
  P gooc_foundF2520;
  P goo_foundF2519;
  P gooc_fileF2518;
  P goo_fileF2517;
  P base_fileF2516;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
  P a1,a2;
LINK_STACK();
  ARG(fname_, 0);
  ARG(path_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfab_path),path_,fname_);
  base_fileF2516 = T1;
  T3 = CALL1(1,VARREF(YgooSsystemYgoo_filename),base_fileF2516);
  goo_fileF2517 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYgooc_filename),base_fileF2516);
  gooc_fileF2518 = T5;
  T7 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),goo_fileF2517);
  goo_foundF2519 = T7;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),gooc_fileF2518);
  gooc_foundF2520 = T9;
  T12 = CALL1(1,VARREF(YgooSsystemYgoo_filenameQ),base_fileF2516);
  tmpF2521 = T12;
  if (tmpF2521 != YPfalse) {
    T13 = goo_foundF2519;
  } else {
    T13 = YPfalse;
  }
  T11 = T13;
  if (T11 != YPfalse) {
    T10 = goo_fileF2517;
  } else {
    T16 = CALL1(1,VARREF(YgooSsystemYgooc_filenameQ),base_fileF2516);
    tmpF2522 = T16;
    if (tmpF2522 != YPfalse) {
      T17 = gooc_foundF2520;
    } else {
      T17 = YPfalse;
    }
    T15 = T17;
    if (T15 != YPfalse) {
      T14 = gooc_fileF2518;
    } else {
      tmpF2523 = goo_foundF2519;
      if (tmpF2523 != YPfalse) {
        T20 = gooc_foundF2520;
      } else {
        T20 = YPfalse;
      }
      T19 = T20;
      if (T19 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooSsystemYfile_mtime),goo_fileF2517);
        T24 = CALL1(1,VARREF(YgooSsystemYfile_mtime),gooc_fileF2518);
        T22 = CALL2(1,VARREF(YgooSmagYG),T23,T24);
        if (T22 != YPfalse) {
          T21 = goo_fileF2517;
        } else {
          T21 = gooc_fileF2518;
        }
        T18 = T21;
      } else {
        if (gooc_foundF2520 != YPfalse) {
          T25 = gooc_fileF2518;
        } else {
          if (goo_foundF2519 != YPfalse) {
            T26 = goo_fileF2517;
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

FUNCODEDEF(fun_x_1421_46) {
  P x_1420_;
  P fileF2525;
  P pathF2524;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1420_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1420_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1420_);
    pathF2524 = T4;
    T6 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_at),FREEREF(0),pathF2524);
    fileF2525 = T6;
    if (fileF2525 != YPfalse) {
      T7 = CALL1(1,FREEREF(1),fileF2525);
    } else {
    }
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1420_);
    a1 = T9;
    x_1420_ = a1;
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

FUNCODEDEF(fun_47) {
  P return_;
  P x_1421F2526;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(1,fun_x_1421_46,3);
  x_1421F2526 = T0;
  FUNINIT(x_1421F2526, 3,FREEREF(0),return_,x_1421F2526);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(1));
  T1 = CALL1(0,x_1421F2526,T2);
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
  T1 = FUNFAB(fun_47,2,fname_,search_paths_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P YgooSsystemY___main_0___() {
  P env_rootF2528;
  P env_rootF2527;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"time");
  lit_1 = Ynil;
  T0 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YgooSsystemYtime = YPmet(FUNCODEREF(YgooSsystemYtime),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(19));
  T1 = YgooSsystemYtime;
  VARSET(YgooSsystemYtime,T1);
  lit_2 = YPPsym((P)"os-name");
  T2 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_os_name_1 = YPmet(FUNCODEREF(fun_os_name_1),LITREF(lit_2),T2,ENVNUL,PNUL,sloc(28));
  T5 = BOUNDP(YgooSsystemYos_name);
  if (T5 != YPfalse) {
    T4 = VARREF(YgooSsystemYos_name);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_os_name_1;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YgooSsystemYos_name,T3);
  lit_3 = YPPsym((P)"os-val");
  lit_4 = YPPlist(1,YPPsym((P)"s"));
  T7 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_os_val_2 = YPmet(FUNCODEREF(fun_os_val_2),LITREF(lit_3),T7,ENVNUL,PNUL,sloc(32));
  T10 = BOUNDP(YgooSsystemYos_val);
  if (T10 != YPfalse) {
    T9 = VARREF(YgooSsystemYos_val);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_os_val_2;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YgooSsystemYos_val,T8);
  lit_5 = YPPsym((P)"os-val-setter");
  lit_6 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"s"));
  T12 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_os_val_setter_3 = YPmet(FUNCODEREF(fun_os_val_setter_3),LITREF(lit_5),T12,ENVNUL,PNUL,sloc(36));
  T15 = BOUNDP(YgooSsystemYos_val_setter);
  if (T15 != YPfalse) {
    T14 = VARREF(YgooSsystemYos_val_setter);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_os_val_setter_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YgooSsystemYos_val_setter,T13);
  lit_7 = YPPsym((P)"process-id");
  T17 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_process_id_4 = YPmet(FUNCODEREF(fun_process_id_4),LITREF(lit_7),T17,ENVNUL,PNUL,sloc(51));
  T20 = BOUNDP(YgooSsystemYprocess_id);
  if (T20 != YPfalse) {
    T19 = VARREF(YgooSsystemYprocess_id);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_process_id_4;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YgooSsystemYprocess_id,T18);
  lit_8 = YPsb((P)"linux");
  lit_9 = YPsb((P)"/");
  lit_10 = YPsb((P)"win32");
  lit_11 = YPsb((P)"\\");
  lit_12 = YPsb((P)"/");
  T24 = XCALL0(1,VARREF(YgooSsystemYos_name));
  T23 = XCALL2(1,VARREF(YgooSmathYE),T24,LITREF(lit_8));
  if (T23 != YPfalse) {
    T22 = LITREF(lit_9);
  } else {
    T27 = XCALL0(1,VARREF(YgooSsystemYos_name));
    T26 = XCALL2(1,VARREF(YgooSmathYE),T27,LITREF(lit_10));
    if (T26 != YPfalse) {
      T25 = LITREF(lit_11);
    } else {
      if (YPtrue != YPfalse) {
        T28 = LITREF(lit_12);
      } else {
        T28 = YPfalse;
      }
      T25 = T28;
    }
    T22 = T25;
  }
  VARSET(YgooSsystemYTpath_separatorT,T22);
  lit_13 = YPPsym((P)"base-path");
  lit_14 = YPPlist(1,YPPsym((P)"filename"));
  lit_15 = YPPsym((P)"loop");
  lit_16 = YPPlist(1,YPPsym((P)"i"));
  lit_17 = YPsb((P)"");
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_5 = YPmet(FUNCODEREF(fun_loop_5),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(70));
  T29 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_base_path_6 = YPmet(FUNCODEREF(fun_base_path_6),LITREF(lit_13),T29,ENVNUL,PNUL,sloc(69));
  T33 = BOUNDP(YgooSsystemYbase_path);
  if (T33 != YPfalse) {
    T32 = VARREF(YgooSsystemYbase_path);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_base_path_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YgooSsystemYbase_path,T31);
  lit_18 = YPPsym((P)"fab-path");
  lit_19 = YPPlist(1,YPPsym((P)"dirs"));
  T35 = YPsig(LITREF(lit_19),Ynil,YPtrue,YPint((P)0),VARREF(YLstrG),Ynil);
  fun_fab_path_7 = YPmet(FUNCODEREF(fun_fab_path_7),LITREF(lit_18),T35,ENVNUL,PNUL,sloc(78));
  T38 = BOUNDP(YgooSsystemYfab_path);
  if (T38 != YPfalse) {
    T37 = VARREF(YgooSsystemYfab_path);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_fab_path_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YgooSsystemYfab_path,T36);
  lit_20 = YPsb((P)"GOO_ROOT");
  T41 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_20));
  env_rootF2527 = T41;
  T43 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2527);
  if (T43 != YPfalse) {
    T45 = (P)YgooSsystemYPdefault_goo_root();
    T44 = (P)YPsb(T45);
    T42 = T44;
  } else {
    T42 = env_rootF2527;
  }
  T40 = T42;
  VARSET(YgooSsystemYTgoo_rootT,T40);
  lit_21 = YPsb((P)"HOME");
  lit_22 = YPsb((P)".goo");
  T47 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_21));
  T46 = XCALL2(1,VARREF(YgooSsystemYfab_path),T47,LITREF(lit_22));
  VARSET(YgooSsystemYTgoo_personal_rootT,T46);
  lit_23 = YPsb((P)"mods");
  lit_24 = YPsb((P)"local");
  lit_25 = YPsb((P)"mods");
  lit_26 = YPsb((P)"mods");
  T49 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_personal_rootT),LITREF(lit_23));
  T50 = XCALL3(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_24),LITREF(lit_25));
  T51 = XCALL2(1,VARREF(YgooSsystemYfab_path),VARREF(YgooSsystemYTgoo_rootT),LITREF(lit_26));
  T48 = XCALL4(1,VARREF(Ylst),LITREF(lit_17),T49,T50,T51);
  VARSET(YgooSsystemYTmodule_search_pathT,T48);
  lit_27 = YPsb((P)"GOO_BUILD_ROOT");
  lit_28 = YPsb((P)".");
  T53 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_27));
  env_rootF2528 = T53;
  T55 = XCALL1(1,VARREF(YgooSmacrosYemptyQ),env_rootF2528);
  if (T55 != YPfalse) {
    T54 = LITREF(lit_28);
  } else {
    T54 = env_rootF2528;
  }
  T52 = T54;
  VARSET(YgooSsystemYTgoo_build_rootT,T52);
  lit_29 = YPPsym((P)"add-src-path");
  lit_30 = YPPlist(1,YPPsym((P)"relpath"));
  lit_31 = YPsb((P)"src");
  T56 = YPsig(LITREF(lit_30),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_src_path_8 = YPmet(FUNCODEREF(fun_add_src_path_8),LITREF(lit_29),T56,ENVNUL,PNUL,sloc(103));
  T59 = BOUNDP(YgooSsystemYadd_src_path);
  if (T59 != YPfalse) {
    T58 = VARREF(YgooSsystemYadd_src_path);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_add_src_path_8;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(YgooSsystemYadd_src_path,T57);
  lit_32 = YPPsym((P)"add-goo-root-path");
  lit_33 = YPPlist(1,YPPsym((P)"relpath"));
  T61 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_root_path_9 = YPmet(FUNCODEREF(fun_add_goo_root_path_9),LITREF(lit_32),T61,ENVNUL,PNUL,sloc(106));
  T64 = BOUNDP(YgooSsystemYadd_goo_root_path);
  if (T64 != YPfalse) {
    T63 = VARREF(YgooSsystemYadd_goo_root_path);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_add_goo_root_path_9;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YgooSsystemYadd_goo_root_path,T62);
  lit_34 = YPPsym((P)"add-goo-personal-root-path");
  lit_35 = YPPlist(1,YPPsym((P)"relpath"));
  T66 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_goo_personal_root_path_10 = YPmet(FUNCODEREF(fun_add_goo_personal_root_path_10),LITREF(lit_34),T66,ENVNUL,PNUL,sloc(109));
  T69 = BOUNDP(YgooSsystemYadd_goo_personal_root_path);
  if (T69 != YPfalse) {
    T68 = VARREF(YgooSsystemYadd_goo_personal_root_path);
  } else {
    T68 = YPfalse;
  }
  T70 = fun_add_goo_personal_root_path_10;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T70);
  VARSET(YgooSsystemYadd_goo_personal_root_path,T67);
  lit_36 = YPPsym((P)"add-tmp-path");
  lit_37 = YPPlist(1,YPPsym((P)"relpath"));
  lit_38 = YPsb((P)"tmp");
  T71 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_add_tmp_path_11 = YPmet(FUNCODEREF(fun_add_tmp_path_11),LITREF(lit_36),T71,ENVNUL,PNUL,sloc(113));
  T74 = BOUNDP(YgooSsystemYadd_tmp_path);
  if (T74 != YPfalse) {
    T73 = VARREF(YgooSsystemYadd_tmp_path);
  } else {
    T73 = YPfalse;
  }
  T75 = fun_add_tmp_path_11;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T75);
  VARSET(YgooSsystemYadd_tmp_path,T72);
  lit_39 = YPPsym((P)"add-build-path");
  lit_40 = YPPlist(2,YPPsym((P)"builddir"),YPPsym((P)"relpath"));
  lit_41 = YPsb((P)"c");
  T76 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_add_build_path_12 = YPmet(FUNCODEREF(fun_add_build_path_12),LITREF(lit_39),T76,ENVNUL,PNUL,sloc(116));
  T79 = BOUNDP(YgooSsystemYadd_build_path);
  if (T79 != YPfalse) {
    T78 = VARREF(YgooSsystemYadd_build_path);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_add_build_path_12;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YgooSsystemYadd_build_path,T77);
  lit_42 = YPsb((P)".goo");
  VARSET(YgooSsystemYTgoo_extensionT,LITREF(lit_42));
  lit_43 = YPsb((P)".gooc");
  VARSET(YgooSsystemYTgooc_extensionT,LITREF(lit_43));
  lit_44 = YPsb((P)".c");
  VARSET(YgooSsystemYTc_extensionT,LITREF(lit_44));
  lit_45 = YPsb((P)".o");
  VARSET(YgooSsystemYTobj_extensionT,LITREF(lit_45));
  VARSET(YgooSsystemYTexe_extensionT,LITREF(lit_17));
  lit_46 = YPPsym((P)"goo-filename?");
  lit_47 = YPPlist(1,YPPsym((P)"name"));
  T81 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgoo_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgoo_filenameQ),LITREF(lit_46),T81,ENVNUL,PNUL,sloc(125));
  T82 = YgooSsystemYgoo_filenameQ;
  VARSET(YgooSsystemYgoo_filenameQ,T82);
  lit_48 = YPPsym((P)"goo-filename");
  lit_49 = YPPlist(1,YPPsym((P)"name"));
  T83 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgoo_filename = YPmet(FUNCODEREF(YgooSsystemYgoo_filename),LITREF(lit_48),T83,ENVNUL,PNUL,sloc(128));
  T84 = YgooSsystemYgoo_filename;
  VARSET(YgooSsystemYgoo_filename,T84);
  lit_50 = YPPsym((P)"gooc-filename?");
  lit_51 = YPPlist(1,YPPsym((P)"name"));
  T85 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYgooc_filenameQ = YPmet(FUNCODEREF(YgooSsystemYgooc_filenameQ),LITREF(lit_50),T85,ENVNUL,PNUL,sloc(131));
  T86 = YgooSsystemYgooc_filenameQ;
  VARSET(YgooSsystemYgooc_filenameQ,T86);
  lit_52 = YPPsym((P)"gooc-filename");
  lit_53 = YPPlist(1,YPPsym((P)"name"));
  T87 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYgooc_filename = YPmet(FUNCODEREF(YgooSsystemYgooc_filename),LITREF(lit_52),T87,ENVNUL,PNUL,sloc(134));
  T88 = YgooSsystemYgooc_filename;
  VARSET(YgooSsystemYgooc_filename,T88);
  lit_54 = YPPsym((P)"c-filename");
  lit_55 = YPPlist(1,YPPsym((P)"name"));
  T89 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYc_filename = YPmet(FUNCODEREF(YgooSsystemYc_filename),LITREF(lit_54),T89,ENVNUL,PNUL,sloc(137));
  T90 = YgooSsystemYc_filename;
  VARSET(YgooSsystemYc_filename,T90);
  lit_56 = YPPsym((P)"obj-filename");
  lit_57 = YPPlist(1,YPPsym((P)"name"));
  T91 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYobj_filename = YPmet(FUNCODEREF(YgooSsystemYobj_filename),LITREF(lit_56),T91,ENVNUL,PNUL,sloc(140));
  T92 = YgooSsystemYobj_filename;
  VARSET(YgooSsystemYobj_filename,T92);
  lit_58 = YPPsym((P)"exe-filename");
  lit_59 = YPPlist(1,YPPsym((P)"name"));
  T93 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYexe_filename = YPmet(FUNCODEREF(YgooSsystemYexe_filename),LITREF(lit_58),T93,ENVNUL,PNUL,sloc(143));
  T94 = YgooSsystemYexe_filename;
  VARSET(YgooSsystemYexe_filename,T94);
  lit_60 = YPPsym((P)"file-mtime");
  lit_61 = YPPlist(1,YPPsym((P)"filename"));
  T95 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_file_mtime_20 = YPmet(FUNCODEREF(fun_file_mtime_20),LITREF(lit_60),T95,ENVNUL,PNUL,sloc(179));
  T98 = BOUNDP(YgooSsystemYfile_mtime);
  if (T98 != YPfalse) {
    T97 = VARREF(YgooSsystemYfile_mtime);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_file_mtime_20;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YgooSsystemYfile_mtime,T96);
  lit_62 = YPPsym((P)"file-exists?");
  lit_63 = YPPlist(1,YPPsym((P)"filename"));
  T100 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSsystemYfile_existsQ = YPmet(FUNCODEREF(YgooSsystemYfile_existsQ),LITREF(lit_62),T100,ENVNUL,PNUL,sloc(184));
  T101 = YgooSsystemYfile_existsQ;
  VARSET(YgooSsystemYfile_existsQ,T101);
  lit_64 = YPPsym((P)"file-type");
  lit_65 = YPPlist(1,YPPsym((P)"filename"));
  T102 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  YgooSsystemYfile_type = YPmet(FUNCODEREF(YgooSsystemYfile_type),LITREF(lit_64),T102,ENVNUL,PNUL,sloc(189));
  T103 = YgooSsystemYfile_type;
  VARSET(YgooSsystemYfile_type,T103);
  lit_66 = YPPsym((P)"create-directory");
  lit_67 = YPPlist(1,YPPsym((P)"filename"));
  T104 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcreate_directory = YPmet(FUNCODEREF(YgooSsystemYcreate_directory),LITREF(lit_66),T104,ENVNUL,PNUL,sloc(194));
  T105 = YgooSsystemYcreate_directory;
  VARSET(YgooSsystemYcreate_directory,T105);
  lit_68 = YPPsym((P)"file-copy");
  lit_69 = YPPlist(2,YPPsym((P)"src"),YPPsym((P)"dst"));
  T111 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_15),T111,ENVNUL,PNUL,sloc(200));
  T110 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T110,ENVNUL,PNUL,sloc(199));
  T109 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T109,ENVNUL,PNUL,sloc(199));
  T108 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T108,ENVNUL,PNUL,sloc(198));
  T107 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T107,ENVNUL,PNUL,sloc(198));
  T106 = YPsig(LITREF(lit_69),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_copy_29 = YPmet(FUNCODEREF(fun_file_copy_29),LITREF(lit_68),T106,ENVNUL,PNUL,sloc(197));
  T114 = BOUNDP(YgooSsystemYfile_copy);
  if (T114 != YPfalse) {
    T113 = VARREF(YgooSsystemYfile_copy);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_file_copy_29;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YgooSsystemYfile_copy,T112);
  lit_70 = YPPsym((P)"so-load");
  lit_71 = YPPlist(1,YPPsym((P)"name"));
  T116 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYso_load = YPmet(FUNCODEREF(YgooSsystemYso_load),LITREF(lit_70),T116,ENVNUL,PNUL,sloc(209));
  T117 = YgooSsystemYso_load;
  VARSET(YgooSsystemYso_load,T117);
  lit_72 = YPPsym((P)"<pathname-error>");
  T119 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T118 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_72),T119);
  VARSET(YgooSsystemYLpathname_errorG,T118);
  lit_73 = YPPsym((P)"pathname-error");
  lit_74 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T120 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYpathname_error = YPmet(FUNCODEREF(YgooSsystemYpathname_error),LITREF(lit_73),T120,ENVNUL,PNUL,sloc(248));
  T121 = YgooSsystemYpathname_error;
  VARSET(YgooSsystemYpathname_error,T121);
  lit_75 = YPPsym((P)"pathname-to-components");
  lit_76 = YPPlist(1,YPPsym((P)"pathname"));
  lit_77 = YPsb((P)"Can't convert empty an pathname to components.");
  lit_78 = YPPlist(1,YPPsym((P)"component"));
  lit_79 = YPPsym((P)"root");
  lit_80 = YPsb((P)"..");
  lit_81 = YPPsym((P)"up");
  lit_82 = YPsb((P)".");
  lit_83 = YPPsym((P)"current");
  T123 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T123,ENVNUL,PNUL,sloc(257));
  T122 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYpathname_to_components = YPmet(FUNCODEREF(YgooSsystemYpathname_to_components),LITREF(lit_75),T122,ENVNUL,PNUL,sloc(252));
  T124 = YgooSsystemYpathname_to_components;
  VARSET(YgooSsystemYpathname_to_components,T124);
  lit_84 = YPPsym((P)"components-to-pathname");
  lit_85 = YPPlist(1,YPPsym((P)"components"));
  lit_86 = YPsb((P)"Can't convert empty components to a pathname.");
  lit_87 = YPPlist(1,YPPsym((P)"component"));
  lit_88 = YPsb((P)"..");
  lit_89 = YPsb((P)".");
  T126 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T126,ENVNUL,PNUL,sloc(269));
  T125 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYcomponents_to_pathname = YPmet(FUNCODEREF(YgooSsystemYcomponents_to_pathname),LITREF(lit_84),T125,ENVNUL,PNUL,sloc(266));
  T127 = YgooSsystemYcomponents_to_pathname;
  VARSET(YgooSsystemYcomponents_to_pathname,T127);
  lit_90 = YPPsym((P)"label-components");
  lit_91 = YPPlist(1,YPPsym((P)"components"));
  T128 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYlabel_components = YPmet(FUNCODEREF(YgooSsystemYlabel_components),LITREF(lit_90),T128,ENVNUL,PNUL,sloc(279));
  T129 = YgooSsystemYlabel_components;
  VARSET(YgooSsystemYlabel_components,T129);
  lit_92 = YPPsym((P)"hierarchical-components");
  lit_93 = YPPlist(1,YPPsym((P)"components"));
  lit_94 = YPsb((P)"Hierarchical portion of %= must not be empty.");
  T130 = YPsig(LITREF(lit_93),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYhierarchical_components = YPmet(FUNCODEREF(YgooSsystemYhierarchical_components),LITREF(lit_92),T130,ENVNUL,PNUL,sloc(285));
  T131 = YgooSsystemYhierarchical_components;
  VARSET(YgooSsystemYhierarchical_components,T131);
  lit_95 = YPPsym((P)"components-last");
  lit_96 = YPPlist(1,YPPsym((P)"components"));
  lit_97 = YPsb((P)"No filename in %=.");
  T132 = YPsig(LITREF(lit_96),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYcomponents_last = YPmet(FUNCODEREF(YgooSsystemYcomponents_last),LITREF(lit_95),T132,ENVNUL,PNUL,sloc(294));
  T133 = YgooSsystemYcomponents_last;
  VARSET(YgooSsystemYcomponents_last,T133);
  lit_98 = YPPsym((P)"components-basename");
  lit_99 = YPPlist(1,YPPsym((P)"components"));
  lit_100 = YPsb((P)"Can't compute basename of %=.");
  lit_101 = YPPlist(1,YPPsym((P)"current"));
  T134 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_basename = YPmet(FUNCODEREF(YgooSsystemYcomponents_basename),LITREF(lit_98),T134,ENVNUL,PNUL,sloc(305));
  T135 = YgooSsystemYcomponents_basename;
  VARSET(YgooSsystemYcomponents_basename,T135);
  lit_102 = YPPsym((P)"components-parent-directory");
  lit_103 = YPPlist(1,YPPsym((P)"components"));
  lit_104 = YPsb((P)"Can't calculate parent of root directory.");
  lit_105 = YPPlist(1,YPPsym((P)"up"));
  T136 = YPsig(LITREF(lit_103),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YgooSsystemYcomponents_parent_directory = YPmet(FUNCODEREF(YgooSsystemYcomponents_parent_directory),LITREF(lit_102),T136,ENVNUL,PNUL,sloc(317));
  T137 = YgooSsystemYcomponents_parent_directory;
  VARSET(YgooSsystemYcomponents_parent_directory,T137);
  lit_106 = YPPsym((P)"parent-directory");
  lit_107 = YPPlist(1,YPPsym((P)"name"));
  T138 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSsystemYparent_directory = YPmet(FUNCODEREF(YgooSsystemYparent_directory),LITREF(lit_106),T138,ENVNUL,PNUL,sloc(344));
  T139 = YgooSsystemYparent_directory;
  VARSET(YgooSsystemYparent_directory,T139);
  lit_108 = YPPsym((P)"<directory-error>");
  T142 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T141 = (P)YPpair(VARREF(YgooSconditionsYLfile_opening_errorG),T142);
  T140 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_108),T141);
  VARSET(YgooSsystemYLdirectory_errorG,T140);
  lit_109 = YPPsym((P)"directory-error");
  lit_110 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"name"));
  T143 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSsystemYdirectory_error = YPmet(FUNCODEREF(YgooSsystemYdirectory_error),LITREF(lit_109),T143,ENVNUL,PNUL,sloc(350));
  T144 = YgooSsystemYdirectory_error;
  VARSET(YgooSsystemYdirectory_error,T144);
  lit_111 = YPPsym((P)"probe-directory");
  lit_112 = YPPlist(1,YPPsym((P)"name"));
  lit_113 = YPPsym((P)"ensure");
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  lit_115 = YPPsym((P)"directory");
  lit_116 = YPsb((P)"%s is not a directory.\n");
  lit_117 = YPsb((P)"Don't know how to create the directory %s.\n");
  T146 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ensure_43 = YPmet(FUNCODEREF(fun_ensure_43),LITREF(lit_113),T146,ENVNUL,PNUL,sloc(361));
  T145 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSsystemYprobe_directory = YPmet(FUNCODEREF(YgooSsystemYprobe_directory),LITREF(lit_111),T145,ENVNUL,PNUL,sloc(357));
  T147 = YgooSsystemYprobe_directory;
  VARSET(YgooSsystemYprobe_directory,T147);
  lit_118 = YPPsym((P)"find-goo-file-at");
  lit_119 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"path"));
  T151 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T150 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLstrG),VARREF(YLstrG)),YPfalse,YPint((P)2),T151,Ynil);
  T149 = YgooSsystemYfind_goo_file_at = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_at),LITREF(lit_118),T150,ENVNUL,PNUL,sloc(379));
  T153 = YgooSsystemYfind_goo_file_at;
  T152 = VARSET(YgooSsystemYfind_goo_file_at,T153);
  T148 = T152;
  return T148;
}

P YgooSsystemY___main_1___() {
  P T0,T1,T2,T3,T4,T5;
DEFCREGS();
loop:
  lit_120 = YPPsym((P)"find-goo-file-in-path");
  lit_121 = YPPlist(2,YPPsym((P)"fname"),YPPsym((P)"search-paths"));
  lit_122 = YPPlist(1,YPPsym((P)"return"));
  lit_123 = YPPsym((P)"x-1421");
  lit_124 = YPPlist(1,YPPsym((P)"x-1420"));
  T3 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1421_46 = YPmet(FUNCODEREF(fun_x_1421_46),LITREF(lit_123),T3,ENVNUL,PNUL,sloc(399));
  T2 = YPsig(LITREF(lit_122),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T2,ENVNUL,PNUL,sloc(398));
  T1 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLstrG));
  T0 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLstrG),VARREF(YLcolG)),YPfalse,YPint((P)2),T1,Ynil);
  YgooSsystemYfind_goo_file_in_path = YPmet(FUNCODEREF(YgooSsystemYfind_goo_file_in_path),LITREF(lit_120),T0,ENVNUL,PNUL,sloc(397));
  T4 = YgooSsystemYfind_goo_file_in_path;
  VARSET(YgooSsystemYfind_goo_file_in_path,T4);
  T5 = YPfalse;
  return T5;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooScolsSstr},
  {&module_info_gooSboot},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"fab-gen", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"components-parent-directory", CVAR, &YgooSsystemYcomponents_parent_directory},
  {"*exe-extension*", CVAR, &YgooSsystemYTexe_extensionT},
  {"find-goo-file-in-path", CVAR, &YgooSsystemYfind_goo_file_in_path},
  {"os-name", CVAR, &YgooSsystemYos_name},
  {"components-basename", CVAR, &YgooSsystemYcomponents_basename},
  {"probe-directory", CVAR, &YgooSsystemYprobe_directory},
  {"---main-0---", PVAR, NULL},
  {"time", CVAR, &YgooSsystemYtime},
  {"<pathname-error>", CVAR, &YgooSsystemYLpathname_errorG},
  {"---main-1---", PVAR, NULL},
  {"exe-filename", CVAR, &YgooSsystemYexe_filename},
  {"*goo-extension*", CVAR, &YgooSsystemYTgoo_extensionT},
  {"parent-directory", CVAR, &YgooSsystemYparent_directory},
  {"pathname-to-components", CVAR, &YgooSsystemYpathname_to_components},
  {"components-to-pathname", CVAR, &YgooSsystemYcomponents_to_pathname},
  {"components-last", CVAR, &YgooSsystemYcomponents_last},
  {"so-load", CVAR, &YgooSsystemYso_load},
  {"%compile", PVAR, NULL},
  {"directory-error", CVAR, &YgooSsystemYdirectory_error},
  {"*goo-build-root*", CVAR, &YgooSsystemYTgoo_build_rootT},
  {"obj-filename", CVAR, &YgooSsystemYobj_filename},
  {"process-id", CVAR, &YgooSsystemYprocess_id},
  {"add-build-path", CVAR, &YgooSsystemYadd_build_path},
  {"*goo-personal-root*", CVAR, &YgooSsystemYTgoo_personal_rootT},
  {"*module-search-path*", CVAR, &YgooSsystemYTmodule_search_pathT},
  {"add-src-path", CVAR, &YgooSsystemYadd_src_path},
  {"add-tmp-path", CVAR, &YgooSsystemYadd_tmp_path},
  {"goo-filename?", CVAR, &YgooSsystemYgoo_filenameQ},
  {"goo-filename", CVAR, &YgooSsystemYgoo_filename},
  {"hierarchical-components", CVAR, &YgooSsystemYhierarchical_components},
  {"<directory-error>", CVAR, &YgooSsystemYLdirectory_errorG},
  {"fab-path", CVAR, &YgooSsystemYfab_path},
  {"c-filename", CVAR, &YgooSsystemYc_filename},
  {"find-goo-file-at", CVAR, &YgooSsystemYfind_goo_file_at},
  {"label-components", CVAR, &YgooSsystemYlabel_components},
  {"file-copy", CVAR, &YgooSsystemYfile_copy},
  {"*goo-root*", CVAR, &YgooSsystemYTgoo_rootT},
  {"gooc-filename", CVAR, &YgooSsystemYgooc_filename},
  {"%pid", PVAR, NULL},
  {"*path-separator*", CVAR, &YgooSsystemYTpath_separatorT},
  {"*gooc-extension*", CVAR, &YgooSsystemYTgooc_extensionT},
  {"os-val-setter", CVAR, &YgooSsystemYos_val_setter},
  {"add-goo-personal-root-path", CVAR, &YgooSsystemYadd_goo_personal_root_path},
  {"base-path", CVAR, &YgooSsystemYbase_path},
  {"create-directory", CVAR, &YgooSsystemYcreate_directory},
  {"*obj-extension*", CVAR, &YgooSsystemYTobj_extensionT},
  {"pathname-error", CVAR, &YgooSsystemYpathname_error},
  {"gooc-filename?", CVAR, &YgooSsystemYgooc_filenameQ},
  {"%default-goo-root", PVAR, NULL},
  {"file-mtime", CVAR, &YgooSsystemYfile_mtime},
  {"%load", PVAR, NULL},
  {"file-exists?", CVAR, &YgooSsystemYfile_existsQ},
  {"add-goo-root-path", CVAR, &YgooSsystemYadd_goo_root_path},
  {"file-type", CVAR, &YgooSsystemYfile_type},
  {"os-val", CVAR, &YgooSsystemYos_val},
  {"*c-extension*", CVAR, &YgooSsystemYTc_extensionT},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"components-parent-directory", NULL},
  {"*exe-extension*", NULL},
  {"find-goo-file-in-path", NULL},
  {"os-name", NULL},
  {"file-mtime", NULL},
  {"components-basename", NULL},
  {"probe-directory", NULL},
  {"*goo-build-root*", NULL},
  {"time", NULL},
  {"<pathname-error>", NULL},
  {"add-src-path", NULL},
  {"exe-filename", NULL},
  {"*goo-extension*", NULL},
  {"components-last", NULL},
  {"so-load", NULL},
  {"%compile", NULL},
  {"obj-filename", NULL},
  {"process-id", NULL},
  {"add-build-path", NULL},
  {"*goo-personal-root*", NULL},
  {"*module-search-path*", NULL},
  {"hierarchical-components", NULL},
  {"<directory-error>", NULL},
  {"c-filename", NULL},
  {"add-tmp-path", NULL},
  {"find-goo-file-at", NULL},
  {"label-components", NULL},
  {"pathname-to-components", NULL},
  {"file-copy", NULL},
  {"*goo-root*", NULL},
  {"gooc-filename", NULL},
  {"parent-directory", NULL},
  {"*path-separator*", NULL},
  {"os-val-setter", NULL},
  {"add-goo-personal-root-path", NULL},
  {"create-directory", NULL},
  {"*obj-extension*", NULL},
  {"%load", NULL},
  {"file-exists?", NULL},
  {"components-to-pathname", NULL},
  {"add-goo-root-path", NULL},
  {"file-type", NULL},
  {"os-val", NULL},
  {"goo-filename", NULL},
  {"*c-extension*", NULL},
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
