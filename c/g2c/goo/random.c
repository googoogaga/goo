/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/random");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/random */

EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynew,"goo/boot","new");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Yarity_error,"goo/boot","arity-error");
DEF(YgooSrandomYlcg_rand,"goo/random","lcg-rand");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YgooSrandomYrecent,"goo/random","recent");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
DEF(YgooSrandomYrandom_29,"goo/random","random-29");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
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
EXT(YgooSsystemYos_name,"goo/system","os-name");
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
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
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
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YgooSrandomYrandom,"goo/random","random");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
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
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
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
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
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
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSsystemYso_load,"goo/system","so-load");
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
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YgooSrandomYLrandomG,"goo/random","<random>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
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
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
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
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
DEF(YgooSrandomYdefault_random_seed,"goo/random","default-random-seed");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
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
DEF(YgooSrandomYrandom_unit,"goo/random","random-unit");
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
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(YgooSrandomYrecent_index,"goo/random","recent-index");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
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
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSrandomYrecent_index_setter,"goo/random","recent-index-setter");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YgooSrandomYrecent_setter,"goo/random","recent-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
DEF(YgooSrandomYDdefault_random,"goo/random","$default-random");
EXT(YgooSmathYN,"goo/math","~");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
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
DEF(YgooSrandomYrandom_using,"goo/random","random-using");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
DEF(YgooSrandomYfab_random_from,"goo/random","fab-random-from");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
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
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YtT,"goo/boot","t*");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSsystemYos_val,"goo/system","os-val");
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
DEF(YgooSrandomYDrecent_size,"goo/random","$recent-size");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_mets,"goo/boot","fun-mets");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_12);
DEFLIT(lit_0);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_31);
DEFLIT(lit_21);
DEFLIT(lit_32);
DEFLIT(lit_8);
DEFLIT(lit_25);
DEFLIT(lit_22);
DEFLIT(lit_11);
DEFLIT(lit_29);
DEFLIT(lit_9);
DEFLIT(lit_16);
DEFLIT(lit_13);
DEFLIT(lit_27);
DEFLIT(lit_5);
DEFLIT(lit_26);
DEFLIT(lit_20);
DEFLIT(lit_30);
DEFLIT(lit_23);
DEFLIT(lit_24);
DEFLIT(lit_10);
DEFLIT(lit_28);
DEFLIT(lit_15);
DEFLIT(lit_19);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_3);
DEFLIT(lit_18);
DEFLIT(lit_7);
DEFLIT(lit_14);
DEFLIT(lit_6);
DEFLIT(lit_17);

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
LOCFOR(fun_x_1784_9);
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
  P v2F3795;
  P v1F3794;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(prev_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,VARREF(YgooSrandomYDrecent_size));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSrandomYlcg_rand),prev_);
    v1F3794 = T3;
    T5 = CALL1(1,VARREF(YgooSrandomYlcg_rand),v1F3794);
    v2F3795 = T5;
    T7 = CALL2(1,VARREF(YgooSmathYmod),v1F3794,YPint((P)32768));
    T9 = CALL2(1,VARREF(YgooSmathYmod),v2F3795,YPint((P)16384));
    T8 = CALL2(1,VARREF(YgooSmathYT),T9,YPint((P)32768));
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,T8);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T6,FREEREF(0),j_);
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    a1 = T11;
    a2 = v2F3795;
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

FUNCODEDEF(fun_x_1784_9) {
  P x_1783_;
  P jF3796;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1783_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1783_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1783_);
    jF3796 = T4;
    CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1783_);
    a1 = T6;
    x_1783_ = a1;
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
  P x_1784F3800;
  P loopF3799;
  P aF3798;
  P rF3797;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(seed_, 0);
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSrandomYLrandomG));
  rF3797 = T1;
  T3 = CALL1(1,VARREF(YgooSrandomYrecent),rF3797);
  aF3798 = T3;
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),VARREF(YDmax_int),aF3798,YPint((P)0));
  T4 = FUNSHELL(1,fun_loop_8,2);
  loopF3799 = T4;
  FUNINIT(loopF3799, 2,aF3798,loopF3799);
  T7 = CALL1(1,VARREF(YgooSmathYabs),seed_);
  T6 = CALL2(1,VARREF(YgooSmathYmod),T7,YPint((P)32768));
  T5 = CALL2(0,loopF3799,YPint((P)1),T6);
  T8 = FUNSHELL(1,fun_x_1784_9,2);
  x_1784F3800 = T8;
  FUNINIT(x_1784F3800, 2,rF3797,x_1784F3800);
  T12 = CALL2(1,VARREF(YgooSmathYT),YPint((P)4),VARREF(YgooSrandomYDrecent_size));
  T11 = CALL3(1,VARREF(YgooScolsSrangeYrange),YPint((P)0),VARREF(YgooSmagYLE),T12);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  T9 = CALL1(0,x_1784F3800,T10);
  T2 = rF3797;
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
  P tapF3803;
  P aF3802;
  P riF3801;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSrandomYrecent_index),r_);
  T2 = CALL2(1,VARREF(YgooSmathYA),T3,YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmathYmod),T2,VARREF(YgooSrandomYDrecent_size));
  check_type(T1,VARREF(YLintG));
  riF3801 = T1;
  T5 = CALL1(1,VARREF(YgooSrandomYrecent),r_);
  aF3802 = T5;
  CALL2(1,VARREF(YgooSrandomYrecent_index_setter),riF3801,r_);
  T7 = FUNSHELL(1,fun_tap_12,2);
  tapF3803 = T7;
  FUNINIT(tapF3803, 2,aF3802,riF3801);
  T11 = CALL1(1,tapF3803,YPint((P)54));
  T12 = CALL1(1,tapF3803,YPint((P)8));
  T10 = CALL2(1,VARREF(YgooSmathYC),T11,T12);
  T14 = CALL1(1,tapF3803,YPint((P)6));
  T15 = CALL1(1,tapF3803,YPint((P)3));
  T13 = CALL2(1,VARREF(YgooSmathYC),T14,T15);
  T9 = CALL2(1,VARREF(YgooSmathYC),T10,T13);
  T8 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),T9,aF3802,riF3801);
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
  P valueF3804;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(YgooSrandomYrandom_29),FREEREF(0));
  valueF3804 = T1;
  T3 = CALL2(1,VARREF(YgooSmagYLE),valueF3804,FREEREF(1));
  if (T3 != YPfalse) {
    T2 = valueF3804;
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
  P find_good_valueF3807;
  P limitF3806;
  P mF3805;
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
    mF3805 = VARREF(YDmax_int);
    T7 = CALL2(1,VARREF(YgooSmathY_),mF3805,range_);
    T6 = CALL2(1,VARREF(YgooSmathYA),T7,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmathYmod),T6,range_);
    T4 = CALL2(1,VARREF(YgooSmathY_),mF3805,T5);
    limitF3806 = T4;
    T9 = FUNSHELL(1,fun_find_good_value_15,3);
    find_good_valueF3807 = T9;
    FUNINIT(find_good_valueF3807, 3,r_,limitF3806,find_good_valueF3807);
    T11 = CALL0(1,find_good_valueF3807);
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
  P maxF3808;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(r_, 0);
loop:
  maxF3808 = YPint((P)1000000);
  T4 = CALL2(1,VARREF(YgooSmathYA),maxF3808,YPint((P)1));
  T3 = CALL2(1,VARREF(YgooSrandomYrandom_using),T4,r_);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),T3);
  T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLfloG),maxF3808);
  T1 = CALL2(1,VARREF(YgooSmathYS),T2,T5);
  T0 = T1;
UNLINK_STACK();
  RET(T0);
}

P YgooSrandomY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67;
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
  T7 = BOUNDP(YgooSrandomYrecent);
  if (T7 != YPfalse) {
    T6 = VARREF(YgooSrandomYrecent);
  } else {
    T6 = YPfalse;
  }
  T8 = fun_recent_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T8);
  VARSET(YgooSrandomYrecent,T5);
  lit_5 = YPPsym((P)"recent-setter");
  lit_6 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_6),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_setter_2 = YPmet(FUNCODEREF(fun_recent_setter_2),LITREF(lit_5),T9,ENVNUL,PNUL,sloc(14));
  T12 = BOUNDP(YgooSrandomYrecent_setter);
  if (T12 != YPfalse) {
    T11 = VARREF(YgooSrandomYrecent_setter);
  } else {
    T11 = YPfalse;
  }
  T13 = fun_recent_setter_2;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T13);
  VARSET(YgooSrandomYrecent_setter,T10);
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_3 = YPmet(FUNCODEREF(fun_3),YPfalse,T14,ENVNUL,PNUL,sloc(14));
  T15 = fun_3;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent),VARREF(YgooSrandomYrecent_setter),VARREF(YgooScolsSvecYLvecG),T15);
  lit_8 = YPPsym((P)"recent-index");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_recent_index_4 = YPmet(FUNCODEREF(fun_recent_index_4),LITREF(lit_8),T16,ENVNUL,PNUL,sloc(15));
  T19 = BOUNDP(YgooSrandomYrecent_index);
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSrandomYrecent_index);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_recent_index_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(YgooSrandomYrecent_index,T17);
  lit_10 = YPPsym((P)"recent-index-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recent_index_setter_5 = YPmet(FUNCODEREF(fun_recent_index_setter_5),LITREF(lit_10),T21,ENVNUL,PNUL,sloc(15));
  T24 = BOUNDP(YgooSrandomYrecent_index_setter);
  if (T24 != YPfalse) {
    T23 = VARREF(YgooSrandomYrecent_index_setter);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_recent_index_setter_5;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(YgooSrandomYrecent_index_setter,T22);
  lit_12 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T26,ENVNUL,PNUL,sloc(15));
  T27 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSrandomYLrandomG),VARREF(YgooSrandomYrecent_index),VARREF(YgooSrandomYrecent_index_setter),VARREF(YLintG),T27);
  lit_13 = YPPsym((P)"lcg-rand");
  lit_14 = YPPlist(1,YPPsym((P)"prev"));
  T28 = YPsig(LITREF(lit_14),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYlcg_rand = YPmet(FUNCODEREF(YgooSrandomYlcg_rand),LITREF(lit_13),T28,ENVNUL,PNUL,sloc(19));
  T29 = YgooSrandomYlcg_rand;
  VARSET(YgooSrandomYlcg_rand,T29);
  lit_15 = YPPsym((P)"fab-random-from");
  lit_16 = YPPlist(1,YPPsym((P)"seed"));
  lit_17 = YPPsym((P)"loop");
  lit_18 = YPPlist(2,YPPsym((P)"j"),YPPsym((P)"prev"));
  lit_19 = YPPsym((P)"x-1784");
  lit_20 = YPPlist(1,YPPsym((P)"x-1783"));
  T32 = YPsig(LITREF(lit_18),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_8 = YPmet(FUNCODEREF(fun_loop_8),LITREF(lit_17),T32,ENVNUL,PNUL,sloc(27));
  T31 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1784_9 = YPmet(FUNCODEREF(fun_x_1784_9),LITREF(lit_19),T31,ENVNUL,PNUL,sloc(35));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_from_10 = YPmet(FUNCODEREF(fun_fab_random_from_10),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(22));
  T35 = BOUNDP(YgooSrandomYfab_random_from);
  if (T35 != YPfalse) {
    T34 = VARREF(YgooSrandomYfab_random_from);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_fab_random_from_10;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(YgooSrandomYfab_random_from,T33);
  lit_21 = YPPsym((P)"fab-random");
  T37 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YgooSrandomYLrandomG),Ynil);
  fun_fab_random_11 = YPmet(FUNCODEREF(fun_fab_random_11),LITREF(lit_21),T37,ENVNUL,PNUL,sloc(39));
  T40 = BOUNDP(YgooSrandomYfab_random);
  if (T40 != YPfalse) {
    T39 = VARREF(YgooSrandomYfab_random);
  } else {
    T39 = YPfalse;
  }
  T41 = fun_fab_random_11;
  T38 = XCALL2(1,VARREF(YPdefine_method),T39,T41);
  VARSET(YgooSrandomYfab_random,T38);
  lit_22 = YPPsym((P)"random-29");
  lit_23 = YPPlist(1,YPPsym((P)"r"));
  lit_24 = YPPsym((P)"tap");
  lit_25 = YPPlist(1,YPPsym((P)"bit"));
  T43 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_tap_12 = YPmet(FUNCODEREF(fun_tap_12),LITREF(lit_24),T43,ENVNUL,PNUL,sloc(46));
  T42 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  YgooSrandomYrandom_29 = YPmet(FUNCODEREF(YgooSrandomYrandom_29),LITREF(lit_22),T42,ENVNUL,PNUL,sloc(42));
  T44 = YgooSrandomYrandom_29;
  VARSET(YgooSrandomYrandom_29,T44);
  T45 = XCALL0(1,VARREF(YgooSrandomYfab_random));
  VARSET(YgooSrandomYDdefault_random,T45);
  lit_26 = YPPsym((P)"random");
  lit_27 = YPPlist(1,YPPsym((P)"range"));
  T46 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLintG),Ynil);
  fun_random_14 = YPmet(FUNCODEREF(fun_random_14),LITREF(lit_26),T46,ENVNUL,PNUL,sloc(56));
  T49 = BOUNDP(YgooSrandomYrandom);
  if (T49 != YPfalse) {
    T48 = VARREF(YgooSrandomYrandom);
  } else {
    T48 = YPfalse;
  }
  T50 = fun_random_14;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T50);
  VARSET(YgooSrandomYrandom,T47);
  lit_28 = YPPsym((P)"random-using");
  lit_29 = YPPlist(2,YPPsym((P)"range"),YPPsym((P)"r"));
  lit_30 = YPPsym((P)"find-good-value");
  T52 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_find_good_value_15 = YPmet(FUNCODEREF(fun_find_good_value_15),LITREF(lit_30),T52,ENVNUL,PNUL,sloc(64));
  T51 = YPsig(LITREF(lit_29),YPPlist(2,VARREF(YLintG),VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_random_using_16 = YPmet(FUNCODEREF(fun_random_using_16),LITREF(lit_28),T51,ENVNUL,PNUL,sloc(59));
  T55 = BOUNDP(YgooSrandomYrandom_using);
  if (T55 != YPfalse) {
    T54 = VARREF(YgooSrandomYrandom_using);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_random_using_16;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YgooSrandomYrandom_using,T53);
  lit_31 = YPPsym((P)"random-unit");
  T57 = YPsig(LITREF(lit_1),Ynil,YPfalse,YPint((P)0),VARREF(YLfloG),Ynil);
  fun_random_unit_17 = YPmet(FUNCODEREF(fun_random_unit_17),LITREF(lit_31),T57,ENVNUL,PNUL,sloc(71));
  T60 = BOUNDP(YgooSrandomYrandom_unit);
  if (T60 != YPfalse) {
    T59 = VARREF(YgooSrandomYrandom_unit);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_random_unit_17;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YgooSrandomYrandom_unit,T58);
  lit_32 = YPPsym((P)"random-unit-using");
  lit_33 = YPPlist(1,YPPsym((P)"r"));
  T62 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YgooSrandomYLrandomG)),YPfalse,YPint((P)1),VARREF(YLfloG),Ynil);
  fun_random_unit_using_18 = YPmet(FUNCODEREF(fun_random_unit_using_18),LITREF(lit_32),T62,ENVNUL,PNUL,sloc(74));
  T65 = BOUNDP(YgooSrandomYrandom_unit_using);
  if (T65 != YPfalse) {
    T64 = VARREF(YgooSrandomYrandom_unit_using);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_random_unit_using_18;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YgooSrandomYrandom_unit_using,T63);
  T67 = YPfalse;
  return T67;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstr;
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
  {&module_info_gooSboot},
  {&module_info_gooSsystem},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
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
  {"os-name", &module_info_gooSsystem, NULL},
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
  {"components-basename", &module_info_gooSsystem, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
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
  {"time", &module_info_gooSsystem, NULL},
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
  {"<pathname-error>", &module_info_gooSsystem, NULL},
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
  {"exe-filename", &module_info_gooSsystem, NULL},
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
  {"*goo-extension*", &module_info_gooSsystem, NULL},
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
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
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
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
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
  {"add-build-path", &module_info_gooSsystem, NULL},
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
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
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
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
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
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
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
  {"os-val-setter", &module_info_gooSsystem, NULL},
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
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
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
  {"create-directory", &module_info_gooSsystem, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
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
  {"file-mtime", &module_info_gooSsystem, NULL},
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
  {"%load", &module_info_gooSsystem, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
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
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
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
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"lcg-rand", CVAR, &YgooSrandomYlcg_rand},
  {"recent", CVAR, &YgooSrandomYrecent},
  {"random-29", CVAR, &YgooSrandomYrandom_29},
  {"fab-random", CVAR, &YgooSrandomYfab_random},
  {"---main-0---", PVAR, NULL},
  {"random-unit-using", CVAR, &YgooSrandomYrandom_unit_using},
  {"random", CVAR, &YgooSrandomYrandom},
  {"<random>", CVAR, &YgooSrandomYLrandomG},
  {"default-random-seed", CVAR, &YgooSrandomYdefault_random_seed},
  {"random-unit", CVAR, &YgooSrandomYrandom_unit},
  {"recent-index", CVAR, &YgooSrandomYrecent_index},
  {"recent-index-setter", CVAR, &YgooSrandomYrecent_index_setter},
  {"recent-setter", CVAR, &YgooSrandomYrecent_setter},
  {"$default-random", CVAR, &YgooSrandomYDdefault_random},
  {"random-using", CVAR, &YgooSrandomYrandom_using},
  {"fab-random-from", CVAR, &YgooSrandomYfab_random_from},
  {"$recent-size", CVAR, &YgooSrandomYDrecent_size},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"fab-random", NULL},
  {"random-unit-using", NULL},
  {"random", NULL},
  {"random-unit", NULL},
  {"random-using", NULL},
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
