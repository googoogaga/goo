/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/write");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/write */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
DEF(YgooSioSwriteYwrite_string_literal,"goo/io/write","write-string-literal");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YgooSioSwriteYwrite_boolean,"goo/io/write","write-boolean");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YgooSioSwriteYwrite_value_type,"goo/io/write","write-value-type");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSioSwriteYrecurring_write_type,"goo/io/write","recurring-write-type");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSlate_macrosYTgensym_counterT,"goo/late-macros","*gensym-counter*");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
DEF(YgooSioSwriteYas_binding_name,"goo/io/write","as-binding-name");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YgooSioSwriteYwrite_map,"goo/io/write","write-map");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
DYNDEF(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSioSwriteYwrite_list,"goo/io/write","write-list");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YLfunG,"goo/boot","<fun>");
DEF(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
DEF(YgooSioSwriteYwrite_number,"goo/io/write","write-number");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
DEF(YgooSioSwriteYwrite_flat,"goo/io/write","write-flat");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooSioSwriteYwrite_params,"goo/io/write","write-params");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YOOemptyQ,"goo/boot","@@empty?");
DEF(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSioSwriteYquotationQ,"goo/io/write","quotation?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNDEF(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YgooSioSwriteYdo_emit,"goo/io/write","do-emit");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
DEF(YgooSioSwriteYwrite_fun_guts,"goo/io/write","write-fun-guts");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSioSwriteYwrite_char_literal,"goo/io/write","write-char-literal");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YgooSioSwriteYcharacter_name,"goo/io/write","character-name");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_9);
DEFLIT(lit_110);
DEFLIT(lit_96);
DEFLIT(lit_169);
DEFLIT(lit_129);
DEFLIT(lit_163);
DEFLIT(lit_42);
DEFLIT(lit_165);
DEFLIT(lit_6);
DEFLIT(lit_48);
DEFLIT(lit_57);
DEFLIT(lit_101);
DEFLIT(lit_134);
DEFLIT(lit_147);
DEFLIT(lit_47);
DEFLIT(lit_92);
DEFLIT(lit_23);
DEFLIT(lit_99);
DEFLIT(lit_67);
DEFLIT(lit_89);
DEFLIT(lit_75);
DEFLIT(lit_141);
DEFLIT(lit_41);
DEFLIT(lit_12);
DEFLIT(lit_83);
DEFLIT(lit_151);
DEFLIT(lit_29);
DEFLIT(lit_17);
DEFLIT(lit_154);
DEFLIT(lit_60);
DEFLIT(lit_55);
DEFLIT(lit_168);
DEFLIT(lit_58);
DEFLIT(lit_113);
DEFLIT(lit_122);
DEFLIT(lit_162);
DEFLIT(lit_150);
DEFLIT(lit_123);
DEFLIT(lit_45);
DEFLIT(lit_34);
DEFLIT(lit_86);
DEFLIT(lit_84);
DEFLIT(lit_132);
DEFLIT(lit_153);
DEFLIT(lit_112);
DEFLIT(lit_49);
DEFLIT(lit_66);
DEFLIT(lit_124);
DEFLIT(lit_54);
DEFLIT(lit_144);
DEFLIT(lit_107);
DEFLIT(lit_3);
DEFLIT(lit_69);
DEFLIT(lit_52);
DEFLIT(lit_156);
DEFLIT(lit_115);
DEFLIT(lit_25);
DEFLIT(lit_27);
DEFLIT(lit_10);
DEFLIT(lit_70);
DEFLIT(lit_8);
DEFLIT(lit_98);
DEFLIT(lit_43);
DEFLIT(lit_140);
DEFLIT(lit_133);
DEFLIT(lit_146);
DEFLIT(lit_160);
DEFLIT(lit_143);
DEFLIT(lit_33);
DEFLIT(lit_81);
DEFLIT(lit_118);
DEFLIT(lit_21);
DEFLIT(lit_157);
DEFLIT(lit_82);
DEFLIT(lit_39);
DEFLIT(lit_72);
DEFLIT(lit_14);
DEFLIT(lit_121);
DEFLIT(lit_109);
DEFLIT(lit_77);
DEFLIT(lit_114);
DEFLIT(lit_100);
DEFLIT(lit_40);
DEFLIT(lit_20);
DEFLIT(lit_102);
DEFLIT(lit_65);
DEFLIT(lit_104);
DEFLIT(lit_78);
DEFLIT(lit_79);
DEFLIT(lit_85);
DEFLIT(lit_93);
DEFLIT(lit_32);
DEFLIT(lit_167);
DEFLIT(lit_46);
DEFLIT(lit_80);
DEFLIT(lit_71);
DEFLIT(lit_1);
DEFLIT(lit_28);
DEFLIT(lit_152);
DEFLIT(lit_120);
DEFLIT(lit_103);
DEFLIT(lit_119);
DEFLIT(lit_24);
DEFLIT(lit_149);
DEFLIT(lit_135);
DEFLIT(lit_26);
DEFLIT(lit_53);
DEFLIT(lit_138);
DEFLIT(lit_161);
DEFLIT(lit_15);
DEFLIT(lit_35);
DEFLIT(lit_166);
DEFLIT(lit_126);
DEFLIT(lit_0);
DEFLIT(lit_36);
DEFLIT(lit_38);
DEFLIT(lit_159);
DEFLIT(lit_130);
DEFLIT(lit_171);
DEFLIT(lit_164);
DEFLIT(lit_111);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_62);
DEFLIT(lit_4);
DEFLIT(lit_155);
DEFLIT(lit_13);
DEFLIT(lit_63);
DEFLIT(lit_11);
DEFLIT(lit_88);
DEFLIT(lit_108);
DEFLIT(lit_97);
DEFLIT(lit_59);
DEFLIT(lit_127);
DEFLIT(lit_44);
DEFLIT(lit_22);
DEFLIT(lit_30);
DEFLIT(lit_125);
DEFLIT(lit_91);
DEFLIT(lit_116);
DEFLIT(lit_68);
DEFLIT(lit_56);
DEFLIT(lit_76);
DEFLIT(lit_73);
DEFLIT(lit_5);
DEFLIT(lit_50);
DEFLIT(lit_51);
DEFLIT(lit_131);
DEFLIT(lit_142);
DEFLIT(lit_74);
DEFLIT(lit_19);
DEFLIT(lit_117);
DEFLIT(lit_170);
DEFLIT(lit_64);
DEFLIT(lit_94);
DEFLIT(lit_137);
DEFLIT(lit_139);
DEFLIT(lit_2);
DEFLIT(lit_90);
DEFLIT(lit_87);
DEFLIT(lit_145);
DEFLIT(lit_61);
DEFLIT(lit_136);
DEFLIT(lit_148);
DEFLIT(lit_105);
DEFLIT(lit_128);
DEFLIT(lit_37);
DEFLIT(lit_7);
DEFLIT(lit_18);
DEFLIT(lit_95);
DEFLIT(lit_158);
DEFLIT(lit_31);

/* FUNCTIONS: */

LOCFOR(fun_as_binding_name_0);
LOCFOR(fun_do_emit_1);
LOCFOR(fun_do_emit_2);
LOCFOR(fun_do_emit_3);
LOCFOR(fun_recur_4);
LOCFOR(fun_emit_5);
LOCFOR(fun_6);
LOCFOR(fun_7);
LOCFOR(fun_write_to_string_8);
LOCFOR(fun_recur_9);
LOCFOR(fun_write_10);
LOCFOR(fun_writeln_11);
LOCFOR(fun_recurring_write_12);
LOCFOR(fun_recurring_write_13);
LOCFOR(fun_recurring_write_14);
LOCFOR(fun_recurring_write_15);
LOCFOR(fun_recurring_write_16);
LOCFOR(fun_recurring_write_17);
LOCFOR(fun_recurring_write_18);
LOCFOR(fun_recurring_write_19);
LOCFOR(fun_recurring_write_20);
LOCFOR(fun_recurring_write_21);
LOCFOR(fun_recurring_write_22);
LOCFOR(fun_write_boolean_23);
LOCFOR(fun_write_number_24);
LOCFOR(fun_write_char_literal_25);
LOCFOR(fun_character_name_26);
LOCFOR(fun_write_string_literal_27);
LOCFOR(fun_write_list_28);
LOCFOR(fun_quotationQ_29);
LOCFOR(fun_write_flat_30);
LOCFOR(fun_31);
LOCFOR(fun_write_map_32);
LOCFOR(fun_recurring_write_33);
LOCFOR(fun_recurring_write_34);
LOCFOR(fun_recurring_write_35);
LOCFOR(fun_recurring_write_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_write_params_39);
LOCFOR(fun_write_fun_guts_40);
LOCFOR(fun_recurring_write_41);
LOCFOR(fun_recurring_write_42);
LOCFOR(fun_recurring_write_43);
LOCFOR(fun_recurring_write_44);
LOCFOR(fun_recurring_write_45);
LOCFOR(fun_recurring_write_46);
LOCFOR(fun_47);
LOCFOR(fun_recurring_write_48);
LOCFOR(fun_49);
LOCFOR(fun_recurring_write_50);
LOCFOR(fun_51);
LOCFOR(fun_write_value_type_52);
LOCFOR(fun_write_value_type_53);
LOCFOR(fun_recurring_write_type_54);
LOCFOR(fun_recurring_write_type_55);
LOCFOR(fun_recur_56);
LOCFOR(fun_write_type_57);
LOCFOR(fun_recurring_write_58);
LOCFOR(fun_59);
LOCFOR(fun_60);
LOCFOR(fun_61);
LOCFOR(fun_recurring_write_62);
LOCFOR(fun_recurring_write_63);
LOCFOR(fun_recurring_write_64);
LOCFOR(fun_arg_65);
LOCFOR(fun_66);
LOCFOR(fun_msg_67);
LOCFOR(fun_post_68);
LOCFOR(fun_maybe_pack_chars_69);
LOCFOR(fun_arg_70);
LOCFOR(fun_71);
FUNFOR(YgooSioSwriteYpe_msg);
LOCFOR(fun_x_2314_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
FUNFOR(YgooSconditionsYmsg_to_str);
FUNFOR(YgooSioSwriteYsay);
extern P YgooSioSwriteY___main_0___ ();
extern P YgooSioSwriteY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_as_binding_name_0) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_1) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_2) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_emit_3) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_4) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_10));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYdo_emit),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_emit_5) {
  P port_,x_;
  P recurF8767;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_4,2);
  recurF8767 = T1;
  FUNINIT(recurF8767, 2,port_,recurF8767);
  T0 = CALL2(1,recurF8767,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),T2,FREEREF(1));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_7) {
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

FUNCODEDEF(fun_write_to_string_8) {
  P x_;
  P portF8768;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF8768 = YPfalse;
  portF8768 = BOXFAB(portF8768);
  T2 = FUNFAB(fun_6,2,portF8768,x_);
  T3 = FUNFAB(fun_7,1,portF8768);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(fun_recur_9) {
  P x_,d_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T1 = CALL2(1,VARREF(YgooSmagYGE),d_,DYNREF(YgooSioSwriteYTmax_print_depthT));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_18));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    T3 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),FREEREF(0),x_,T4,FREEREF(1));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_10) {
  P port_,x_;
  P recurF8769;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_9,2);
  recurF8769 = T1;
  FUNINIT(recurF8769, 2,port_,recurF8769);
  T0 = CALL2(1,recurF8769,x_,YPint((P)-1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_writeln_11) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSwriteYwrite),port_,x_);
  T0 = CALL1(1,VARREF(YgooSioSportYnewline),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_12) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_23));
    T0 = T2;
  } else {
    T3 = CALL4(1,VARREF(YgooSioSwriteYwrite_list),port_,x_,d_,recur_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_13) {
  P port_,x_,d_,recur_;
  P prefixF8770;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T4 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T3 = CALL1(1,VARREF(Yclass_name),T4);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T3);
  T1 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_25),T2,LITREF(lit_26));
  prefixF8770 = T1;
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,prefixF8770,x_,LITREF(lit_27),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_14) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_29),x_,LITREF(lit_30),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_15) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALLN(1,VARREF(YgooSioSwriteYwrite_flat),6,port_,LITREF(lit_32),x_,LITREF(lit_33),d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_16) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_map),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_17) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  if (x_ != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_36));
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSwriteYwrite_boolean),port_,LITREF(lit_37));
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_18) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_19) {
  P port_,x_,d_,recur_;
  P tF8774;
  P xF8773;
  P xF8772;
  P xF8771;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_40));
  xF8771 = x_;
  T4 = (P)YPuntag_into(xF8771);
  xF8772 = T4;
  xF8773 = xF8772;
  tF8774 = (P)1;
  T3 = (P)YPiLL(xF8773,(P)2);
  T2 = (P)YPiv(T3,tF8774);
  T1 = CALL2(1,VARREF(YgooScolsSstrYnum_to_str_base),T2,YPint((P)16));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_20) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YLnumG));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSioSwriteYas_binding_name),LITREF(lit_42));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSioSwriteYwrite_number),port_,x_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_21) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_string_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_22) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_char_literal),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_boolean_23) {
  P port_,mumble_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(mumble_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)35));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,mumble_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_number_24) {
  P port_,x_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_char_literal_25) {
  P port_,x_;
  P probeF8775;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T3 = CALL1(1,VARREF(YgooSioSwriteYcharacter_name),x_);
  probeF8775 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_51));
  if (probeF8775 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSwriteYwrite),port_,probeF8775);
    T0 = T1;
  } else {
    T2 = CALL2(1,VARREF(YgooSioSportYput),port_,x_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_character_name_26) {
  P char_;
  P assocF8776;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  T2 = CALL3(1,VARREF(YgooScolsSlstYassqn),char_,VARREF(YgooSioSreadYDchar_long_names),YPint((P)1));
  assocF8776 = T2;
  if (assocF8776 != YPfalse) {
    T1 = CALL1(1,VARREF(YgooSmacrosY1st),assocF8776);
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_string_literal_27) {
  P port_,x_;
  P tmpF8780;
  P cF8779;
  P iF8778;
  P lenF8777;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
  T10 = CALL1(1,VARREF(YgooStypesYlen),x_);
  lenF8777 = T10;
  iF8778 = YPint((P)0);
  LOOP_409: {
    P a409_0;
    T1 = CALL2(1,VARREF(YgooSmathYE),iF8778,lenF8777);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)34));
      T0 = T2;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF8778);
      cF8779 = T9;
      T5 = CALL2(1,VARREF(YgooSmathYE),cF8779,YPchr((P)92));
      tmpF8780 = T5;
      if (tmpF8780 != YPfalse) {
        T3 = tmpF8780;
      } else {
        T4 = CALL2(1,VARREF(YgooSmathYE),cF8779,YPchr((P)34));
        T3 = T4;
      }
      if (T3 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)92));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),port_,cF8779);
      T8 = CALL2(1,VARREF(YgooSmathYA),iF8778,YPint((P)1));
      a409_0 = T8;
      iF8778 = a409_0;
      goto LOOP_409;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_list_28) {
  P port_,x_,d_,recur_;
  P nF8782;
  P lF8781;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSwriteYquotationQ),x_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)39));
    T4 = CALL1(1,VARREF(Ytail),x_);
    T3 = CALL1(1,VARREF(Yhead),T4);
    T2 = CALL2(1,recur_,T3,d_);
    T0 = T2;
  } else {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
    T5 = CALL1(1,VARREF(Yhead),x_);
    CALL2(1,recur_,T5,d_);
    T16 = CALL1(1,VARREF(Ytail),x_);
    lF8781 = T16;
    nF8782 = YPint((P)1);
    LOOP_410: {
      P a410_0,a410_1;
      T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),lF8781);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSmagYGE),nF8782,DYNREF(YgooSioSwriteYTmax_print_lengthT));
        if (T10 != YPfalse) {
          T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_58));
          T9 = T11;
        } else {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T12 = CALL1(1,VARREF(Yhead),lF8781);
          CALL2(0,recur_,T12,d_);
          T14 = CALL1(1,VARREF(Ytail),lF8781);
          T15 = CALL2(1,VARREF(YgooSmathYA),nF8782,YPint((P)1));
          a410_0 = T14;
          a410_1 = T15;
          lF8781 = a410_0;
          nF8782 = a410_1;
          goto LOOP_410;
          T9 = T13;
        }
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
    T0 = T17;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_quotationQ_29) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),x_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_61));
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),x_);
      T6 = CALL2(1,VARREF(YisaQ),T7,VARREF(YLlstG));
      if (T6 != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),x_);
        T9 = CALL1(1,VARREF(Ytail),T10);
        T8 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T9);
        T5 = T8;
      } else {
        T5 = YPfalse;
      }
      T2 = T5;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_write_flat_30) {
  P port_,prefix_,x_,suffix_,d_,recur_;
  P iF8784;
  P zF8783;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(port_, 0);
  ARG(prefix_, 1);
  ARG(x_, 2);
  ARG(suffix_, 3);
  ARG(d_, 4);
  ARG(recur_, 5);
  CALL2(1,VARREF(YgooSioSportYputs),port_,prefix_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),x_);
  zF8783 = T12;
  T0 = CALL2(1,VARREF(YgooSmagYG),zF8783,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSmacrosYelt),x_,YPint((P)0));
    CALL2(1,recur_,T1,d_);
    iF8784 = YPint((P)1);
    LOOP_411: {
      P a411_0;
      T3 = CALL2(1,VARREF(YgooSmagYGE),iF8784,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_64));
        T2 = T4;
      } else {
        T7 = CALL2(1,VARREF(YgooSmagYGE),iF8784,zF8783);
        T6 = CALL1(1,VARREF(Ynot),T7);
        if (T6 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
          T8 = CALL2(1,VARREF(YgooSmacrosYelt),x_,iF8784);
          CALL2(1,recur_,T8,d_);
          T10 = CALL2(1,VARREF(YgooSmathYA),iF8784,YPint((P)1));
          a411_0 = T10;
          iF8784 = a411_0;
          goto LOOP_411;
          T5 = T9;
        } else {
          T5 = YPfalse;
        }
        T2 = T5;
      }
    }
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSioSportYputs),port_,suffix_);
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_31) {
  P blow_;
  P valF8791;
  P keyF8790;
  P tup63F8789;
  P iF8788;
  P tmpF8787;
  P x_2296F8786;
  P x_2297F8785;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(blow_, 0);
  T17 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_2297F8785 = T16;
  T18 = CALL1(1,VARREF(YgooScolsScolYenum),FREEREF(0));
  x_2296F8786 = T18;
  LOOP_412: {
    P a412_0,a412_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2297F8785);
    tmpF8787 = T4;
    if (tmpF8787 != YPfalse) {
      T2 = tmpF8787;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2296F8786);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2297F8785);
      iF8788 = T15;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_2296F8786);
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2296F8786);
      T12 = CALL2(1,VARREF(Ytup),T13,T14);
      tup63F8789 = T12;
      T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup63F8789,YPint((P)0));
      keyF8790 = T11;
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup63F8789,YPint((P)1));
      valF8791 = T10;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF8788,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_69));
        T6 = CALL1(0,blow_,YPfalse);
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      CALL2(0,FREEREF(3),keyF8790,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_70));
      CALL2(0,FREEREF(3),valF8791,FREEREF(2));
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2297F8785);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2296F8786);
      a412_0 = T8;
      a412_1 = T9;
      x_2297F8785 = a412_0;
      x_2296F8786 = a412_1;
      goto LOOP_412;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_map_32) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_67));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_31,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)62));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_33) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T2 = CALL1(1,VARREF(YgooSioSportYport_line),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_72),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_34) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(YgooSioSportYport_filename),x_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_74),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_35) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_76));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_36) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_78));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_38) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_write_params_39) {
  P port_,x_,recur_;
  P tmpF8803;
  P valueF8802;
  P iF8801;
  P specF8800;
  P firstQF8799;
  P tmpF8798;
  P tmpF8797;
  P x_2299F8796;
  P x_2300F8795;
  P x_2301F8794;
  P namesF8793;
  P namesF8792;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(recur_, 2);
  T37 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF8792 = T37;
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)40));
  T36 = CALL1(1,VARREF(YgooSfunYfun_names),x_);
  namesF8793 = T36;
  T23 = fun_37;
  T24 = fun_38;
  T22 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T23,T24);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2301F8794 = T21;
  T26 = CALL1(1,VARREF(YgooSfunYfun_specs),x_);
  T25 = CALL1(1,VARREF(YgooScolsScolYenum),T26);
  x_2300F8795 = T25;
  T28 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2299F8796 = T27;
  LOOP_413: {
    P a413_0,a413_1,a413_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2301F8794);
    tmpF8797 = T6;
    if (tmpF8797 != YPfalse) {
      T2 = tmpF8797;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2300F8795);
      tmpF8798 = T5;
      if (tmpF8798 != YPfalse) {
        T3 = tmpF8798;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2299F8796);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2301F8794);
      firstQF8799 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_2300F8795);
      specF8800 = T19;
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_2299F8796);
      iF8801 = T18;
      T7 = CALL1(1,VARREF(Ynot),firstQF8799);
      if (T7 != YPfalse) {
        T8 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
      } else {
      }
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF8793);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF8800);
      } else {
        T12 = CALL2(1,VARREF(YgooSmacrosYelt),namesF8793,iF8801);
        T11 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T12);
        CALL3(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_83),T11);
        CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,specF8800);
        T13 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
      }
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2301F8794);
      T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2300F8795);
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2299F8796);
      a413_0 = T15;
      a413_1 = T16;
      a413_2 = T17;
      x_2301F8794 = a413_0;
      x_2300F8795 = a413_1;
      x_2299F8796 = a413_2;
      goto LOOP_413;
      T0 = T14;
    } else {
      T0 = YPfalse;
    }
  }
  T35 = CALL1(1,VARREF(YgooSfunYfun_val),x_);
  valueF8802 = T35;
  T32 = CALL1(1,VARREF(Ynot),valueF8802);
  tmpF8803 = T32;
  if (tmpF8803 != YPfalse) {
    T30 = tmpF8803;
  } else {
    T31 = CALL2(1,VARREF(YgooSmacrosYEE),valueF8802,VARREF(YLanyG));
    T30 = T31;
  }
  T29 = CALL1(1,VARREF(Ynot),T30);
  if (T29 != YPfalse) {
    CALL2(1,VARREF(YgooSconditionsYmsg),port_,LITREF(lit_84));
    T33 = CALL2(1,VARREF(YgooSioSwriteYwrite_value_type),port_,valueF8802);
  } else {
  }
  T34 = CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)41));
UNLINK_STACK();
  QRET(T34);
}

FUNCODEDEF(fun_write_fun_guts_40) {
  P port_,x_,name_,recur_;
  P nameF8804;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(name_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_87));
  CALL2(1,VARREF(YgooSioSportYputs),port_,name_);
  T3 = CALL1(1,VARREF(Yfun_name),x_);
  nameF8804 = T3;
  if (nameF8804 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
    T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF8804);
    T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYput),port_,YPchr((P)32));
  CALL3(1,VARREF(YgooSioSwriteYwrite_params),port_,x_,recur_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_88));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_recurring_write_41) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_90),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_42) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYwrite_fun_guts),port_,x_,LITREF(lit_92),recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_43) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T1 = CALL1(1,VARREF(Ysrc_loc_line),x_);
  T2 = CALL1(1,VARREF(Ysrc_loc_file),x_);
  T0 = CALL4(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_94),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_44) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_96));
  T1 = CALL1(1,VARREF(Yclass_name),x_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,T0);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_97));
  T3 = CALL1(1,VARREF(Yclass_parents),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yclass_name),T3);
  CALL2(1,recur_,T2,d_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_98));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_recurring_write_45) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_100));
  T0 = CALL1(1,VARREF(Ytype_object),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_101));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_recurring_write_46) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_103));
  T0 = CALL1(1,VARREF(Ytype_class),x_);
  CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_104));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_47) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_48) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_106));
  T0 = FUNFAB(fun_47,1,port_);
  T1 = CALL1(1,VARREF(Yunion_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_108));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_49) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_50) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_110));
  T0 = FUNFAB(fun_49,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_112));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_51) {
  P t_;
  P T0;
LINK_STACK();
  ARG(t_, 0);
  CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)32));
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(0),t_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_value_type_52) {
  P port_,x_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_115));
  T0 = FUNFAB(fun_51,1,port_);
  T1 = CALL1(1,VARREF(Yproduct_elts),x_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_117));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_write_value_type_53) {
  P port_,x_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),port_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_54) {
  P port_,x_,d_,recur_;
  P T0,T1,T2;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T2 = CALL1(1,VARREF(Yclass_name),x_);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_type_55) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write),port_,x_,d_,recur_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recur_56) {
  P x_,d_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(d_, 1);
  T0 = CALL4(1,VARREF(YgooSioSwriteYrecurring_write_type),FREEREF(0),x_,d_,FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_write_type_57) {
  P port_,x_;
  P recurF8805;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  T1 = FUNSHELL(0,fun_recur_56,2);
  recurF8805 = T1;
  FUNINIT(recurF8805, 2,port_,recurF8805);
  T0 = CALL2(1,recurF8805,x_,YPint((P)0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_58) {
  P port_,x_,d_,recur_;
  P T0,T1;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_126));
  T0 = CALL1(1,VARREF(Yprop_getter),x_);
  CALL2(1,recur_,T0,d_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_127));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_59) {
  P getterF8811;
  P propF8810;
  P iF8809;
  P tmpF8808;
  P x_2304F8807;
  P x_2305F8806;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  VARSET(YgooSclassYTreport_prop_unbound_errorsQT,YPfalse);
  T16 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
  x_2305F8806 = T15;
  T18 = CALL1(1,VARREF(Yobject_props),FREEREF(0));
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_2304F8807 = T17;
  LOOP_414: {
    P a414_0,a414_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2305F8806);
    tmpF8808 = T4;
    if (tmpF8808 != YPfalse) {
      T2 = tmpF8808;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2304F8807);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2305F8806);
      iF8809 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_2304F8807);
      propF8810 = T13;
      T5 = CALL2(1,VARREF(YgooSmagYGE),iF8809,DYNREF(YgooSioSwriteYTmax_print_lengthT));
      if (T5 != YPfalse) {
        CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_131));
        T6 = CALL1(1,FREEREF(2),YPfalse);
      } else {
      }
      T12 = CALL1(1,VARREF(Yprop_getter),propF8810);
      getterF8811 = T12;
      CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)32));
      T7 = CALL1(1,VARREF(Yfun_name),getterF8811);
      CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T7);
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_132));
      T8 = CALL1(1,getterF8811,FREEREF(0));
      CALL2(0,FREEREF(4),T8,FREEREF(3));
      T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2305F8806);
      T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2304F8807);
      a414_0 = T10;
      a414_1 = T11;
      x_2305F8806 = a414_0;
      x_2304F8807 = a414_1;
      goto LOOP_414;
      T0 = T9;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_60) {
  P T0;
LINK_STACK();
  T0 = VARSET(YgooSclassYTreport_prop_unbound_errorsQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P blow_;
  P x_2303F8812;
  P T0,T1,T2;
LINK_STACK();
  ARG(blow_, 0);
  x_2303F8812 = VARREF(YgooSclassYTreport_prop_unbound_errorsQT);
  T1 = FUNFAB(fun_59,5,FREEREF(0),FREEREF(1),blow_,FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_60,1,x_2303F8812);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_62) {
  P port_,x_,d_,recur_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_129));
  T1 = CALL1(1,VARREF(YgooSclassYclass_of),x_);
  T0 = CALL1(1,VARREF(Yclass_name),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),port_,T0);
  T2 = FUNFAB(fun_61,4,x_,port_,d_,recur_);
  with_exit(T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_133));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_recurring_write_63) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_135));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_recurring_write_64) {
  P port_,x_,d_,recur_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  ARG(x_, 1);
  ARG(d_, 2);
  ARG(recur_, 3);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),port_,LITREF(lit_137));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_65) {
  P char_,class_;
  P tmpF8815;
  P argumentF8814;
  P current_indexF8813;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(char_, 0);
  ARG(class_, 1);
  T11 = BOXGET(FREEREF(0));
  current_indexF8813 = T11;
  T1 = BOXGET(FREEREF(0));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF8813,FREEREF(1));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_142),FREEREF(2),FREEREF(3));
  } else {
  }
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),current_indexF8813);
  argumentF8814 = T10;
  T8 = CALL2(1,VARREF(YgooSmacrosYEE),class_,VARREF(YLanyG));
  tmpF8815 = T8;
  if (tmpF8815 != YPfalse) {
    T6 = tmpF8815;
  } else {
    T7 = CALL2(1,VARREF(YisaQ),argumentF8814,class_);
    T6 = T7;
  }
  T5 = CALL1(1,VARREF(Ynot),T6);
  if (T5 != YPfalse) {
    T9 = CALL4(1,VARREF(Yassert_error),LITREF(lit_143),char_,class_,argumentF8814);
  } else {
  }
UNLINK_STACK();
  QRET(argumentF8814);
}

FUNCODEDEF(fun_66) {
  P c_;
  P x_2308F8817;
  P x_2307F8816;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T42 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_2307F8816 = T42;
    x_2308F8817 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)68));
    if (T3 != YPfalse) {
      T6 = CALL2(1,FREEREF(2),c_,VARREF(YLnumG));
      T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T5);
      T2 = T4;
    } else {
      T8 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)66));
      if (T8 != YPfalse) {
        T11 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
        T10 = CALL2(1,VARREF(YgooSmathYnum_to_str),T11,YPint((P)2));
        T9 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T10);
        T7 = T9;
      } else {
        T13 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)79));
        if (T13 != YPfalse) {
          T16 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
          T15 = CALL2(1,VARREF(YgooSmathYnum_to_str),T16,YPint((P)8));
          T14 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T15);
          T12 = T14;
        } else {
          T18 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)88));
          if (T18 != YPfalse) {
            T21 = CALL2(1,FREEREF(2),c_,VARREF(YLintG));
            T20 = CALL2(1,VARREF(YgooSmathYnum_to_str),T21,YPint((P)16));
            T19 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),T20);
            T17 = T19;
          } else {
            T23 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)67));
            if (T23 != YPfalse) {
              T25 = CALL2(1,FREEREF(2),c_,VARREF(YLchrG));
              T24 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),T25);
              T22 = T24;
            } else {
              T27 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)83));
              if (T27 != YPfalse) {
                T29 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                T28 = CALL2(1,VARREF(YgooSioSwriteYemit),FREEREF(1),T29);
                T26 = T28;
              } else {
                T31 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)61));
                if (T31 != YPfalse) {
                  T33 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                  T32 = CALL2(1,VARREF(YgooSioSwriteYwrite),FREEREF(1),T33);
                  T30 = T32;
                } else {
                  T35 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)84));
                  if (T35 != YPfalse) {
                    T37 = CALL2(1,FREEREF(2),c_,VARREF(YLanyG));
                    T36 = CALL2(1,VARREF(YgooSioSwriteYwrite_type),FREEREF(1),T37);
                    T34 = T36;
                  } else {
                    T39 = CALL2(1,x_2308F8817,x_2307F8816,YPchr((P)37));
                    if (T39 != YPfalse) {
                      T40 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)37));
                      T38 = T40;
                    } else {
                      T41 = CALL3(1,VARREF(Yerror),LITREF(lit_145),c_,FREEREF(3));
                      T38 = T41;
                    }
                    T34 = T38;
                  }
                  T30 = T34;
                }
                T26 = T30;
              }
              T22 = T26;
            }
            T17 = T22;
          }
          T12 = T17;
        }
        T7 = T12;
      }
      T2 = T7;
    }
    T43 = BOXPUT(YPfalse,FREEREF(0));
    T0 = T43;
  } else {
    T45 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T45 != YPfalse) {
      T46 = BOXPUT(YPtrue,FREEREF(0));
      T44 = T46;
    } else {
      T47 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),c_);
      T44 = T47;
    }
    T0 = T44;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_msg_67) {
  P port_,message_,arguments_;
  P argF8821;
  P num_argumentsF8820;
  P argument_indexF8819;
  P found_percentQF8818;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(arguments_, 2);
  found_percentQF8818 = YPfalse;
  found_percentQF8818 = BOXFAB(found_percentQF8818);
  check_type(YPint((P)0),VARREF(YLintG));
  argument_indexF8819 = YPint((P)0);
  argument_indexF8819 = BOXFAB(argument_indexF8819);
  T10 = CALL1(1,VARREF(YgooStypesYlen),arguments_);
  num_argumentsF8820 = T10;
  T4 = FUNSHELL(1,fun_arg_65,4);
  argF8821 = T4;
  FUNINIT(argF8821, 4,argument_indexF8819,num_argumentsF8820,message_,arguments_);
  T3 = FUNFAB(fun_66,4,found_percentQF8818,port_,argF8821,message_);
  T2 = CALL2(1,VARREF(YgooSmacrosYdo),T3,message_);
  T8 = BOXGET(found_percentQF8818);
  T7 = CALL1(1,VARREF(Ynot),T8);
  T6 = CALL1(1,VARREF(Ynot),T7);
  if (T6 != YPfalse) {
    T9 = CALL2(1,VARREF(Yassert_error),LITREF(lit_146),message_);
    T5 = T9;
  } else {
    T5 = YPfalse;
  }
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_post_68) {
  P message_,arguments_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  T0 = CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,VARREF(YgooSioSportYout),message_,arguments_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_pack_chars_69) {
  P UF8822;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = BOXGET(FREEREF(1));
    UF8822 = T10;
    T6 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
    T7 = CALL1(1,VARREF(Ylst),FREEREF(2));
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),FREEREF(0));
    T8 = CALL1(1,VARREF(Ylst),T9);
    T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T8,LITREF(lit_153));
    T4 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8822,T5);
    T3 = BOXPUT(T4,FREEREF(1));
    T11 = CALL1(1,VARREF(YgooScolsScolxYzapX),FREEREF(0));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_arg_70) {
  P char_;
  P current_indexF8823;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(char_, 0);
  CALL0(1,FREEREF(0));
  T6 = BOXGET(FREEREF(1));
  current_indexF8823 = T6;
  T1 = BOXGET(FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmathYA),T1,YPint((P)1));
  BOXPUT(T0,FREEREF(1));
  T3 = CALL2(1,VARREF(YgooSmagYL),current_indexF8823,FREEREF(2));
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL3(1,VARREF(Yassert_error),LITREF(lit_155),FREEREF(3),FREEREF(4));
  } else {
  }
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(4),current_indexF8823);
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_71) {
  P c_;
  P UF8833;
  P UF8832;
  P UF8831;
  P UF8830;
  P UF8829;
  P UF8828;
  P UF8827;
  P UF8826;
  P x_2310F8825;
  P x_2309F8824;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106;
LINK_STACK();
  ARG(c_, 0);
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T101 = CALL1(1,VARREF(YgooSmathYto_upper),c_);
    x_2309F8824 = T101;
    x_2310F8825 = VARREF(YgooSmacrosYEE);
    T3 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)68));
    if (T3 != YPfalse) {
      T14 = BOXGET(FREEREF(1));
      UF8826 = T14;
      T7 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
      T8 = CALL1(1,VARREF(Ylst),FREEREF(2));
      T11 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
      T13 = CALL1(1,FREEREF(3),c_);
      T12 = CALL1(1,VARREF(Ylst),T13);
      T10 = CALL3(1,VARREF(YgooSmacrosYcat),T11,T12,LITREF(lit_153));
      T9 = CALL1(1,VARREF(Ylst),T10);
      T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,T9,LITREF(lit_153));
      T5 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8826,T6);
      T4 = BOXPUT(T5,FREEREF(1));
      T2 = T4;
    } else {
      T16 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)66));
      if (T16 != YPfalse) {
        T28 = BOXGET(FREEREF(1));
        UF8827 = T28;
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
        T21 = CALL1(1,VARREF(Ylst),FREEREF(2));
        T24 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
        T26 = CALL1(1,FREEREF(3),c_);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T27 = CALL1(1,VARREF(Ylst),YPint((P)2));
        T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_153));
        T22 = CALL1(1,VARREF(Ylst),T23);
        T19 = CALL4(1,VARREF(YgooSmacrosYcat),T20,T21,T22,LITREF(lit_153));
        T18 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8827,T19);
        T17 = BOXPUT(T18,FREEREF(1));
        T15 = T17;
      } else {
        T30 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)79));
        if (T30 != YPfalse) {
          T42 = BOXGET(FREEREF(1));
          UF8828 = T42;
          T34 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
          T35 = CALL1(1,VARREF(Ylst),FREEREF(2));
          T38 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
          T40 = CALL1(1,FREEREF(3),c_);
          T39 = CALL1(1,VARREF(Ylst),T40);
          T41 = CALL1(1,VARREF(Ylst),YPint((P)8));
          T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T41,LITREF(lit_153));
          T36 = CALL1(1,VARREF(Ylst),T37);
          T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_153));
          T32 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8828,T33);
          T31 = BOXPUT(T32,FREEREF(1));
          T29 = T31;
        } else {
          T44 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)88));
          if (T44 != YPfalse) {
            T56 = BOXGET(FREEREF(1));
            UF8829 = T56;
            T48 = CALL1(1,VARREF(Ylst),LITREF(lit_152));
            T49 = CALL1(1,VARREF(Ylst),FREEREF(2));
            T52 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
            T54 = CALL1(1,FREEREF(3),c_);
            T53 = CALL1(1,VARREF(Ylst),T54);
            T55 = CALL1(1,VARREF(Ylst),YPint((P)16));
            T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,LITREF(lit_153));
            T50 = CALL1(1,VARREF(Ylst),T51);
            T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T50,LITREF(lit_153));
            T46 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8829,T47);
            T45 = BOXPUT(T46,FREEREF(1));
            T43 = T45;
          } else {
            T58 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)67));
            if (T58 != YPfalse) {
              T66 = BOXGET(FREEREF(1));
              UF8830 = T66;
              T62 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
              T63 = CALL1(1,VARREF(Ylst),FREEREF(2));
              T65 = CALL2(1,FREEREF(3),c_,VARREF(YLchrG));
              T64 = CALL1(1,VARREF(Ylst),T65);
              T61 = CALL4(1,VARREF(YgooSmacrosYcat),T62,T63,T64,LITREF(lit_153));
              T60 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8830,T61);
              T59 = BOXPUT(T60,FREEREF(1));
              T57 = T59;
            } else {
              T68 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)83));
              if (T68 != YPfalse) {
                T76 = BOXGET(FREEREF(1));
                UF8831 = T76;
                T72 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
                T73 = CALL1(1,VARREF(Ylst),FREEREF(2));
                T75 = CALL1(1,FREEREF(3),c_);
                T74 = CALL1(1,VARREF(Ylst),T75);
                T71 = CALL4(1,VARREF(YgooSmacrosYcat),T72,T73,T74,LITREF(lit_153));
                T70 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8831,T71);
                T69 = BOXPUT(T70,FREEREF(1));
                T67 = T69;
              } else {
                T78 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)61));
                if (T78 != YPfalse) {
                  T86 = BOXGET(FREEREF(1));
                  UF8832 = T86;
                  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_15));
                  T83 = CALL1(1,VARREF(Ylst),FREEREF(2));
                  T85 = CALL1(1,FREEREF(3),c_);
                  T84 = CALL1(1,VARREF(Ylst),T85);
                  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,LITREF(lit_153));
                  T80 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8832,T81);
                  T79 = BOXPUT(T80,FREEREF(1));
                  T77 = T79;
                } else {
                  T88 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)84));
                  if (T88 != YPfalse) {
                    T96 = BOXGET(FREEREF(1));
                    UF8833 = T96;
                    T92 = CALL1(1,VARREF(Ylst),LITREF(lit_122));
                    T93 = CALL1(1,VARREF(Ylst),FREEREF(2));
                    T95 = CALL1(1,FREEREF(3),c_);
                    T94 = CALL1(1,VARREF(Ylst),T95);
                    T91 = CALL4(1,VARREF(YgooSmacrosYcat),T92,T93,T94,LITREF(lit_153));
                    T90 = CALL2(1,VARREF(YgooSpackerYpacker_add),UF8833,T91);
                    T89 = BOXPUT(T90,FREEREF(1));
                    T87 = T89;
                  } else {
                    T98 = CALL2(1,x_2310F8825,x_2309F8824,YPchr((P)37));
                    if (T98 != YPfalse) {
                      T99 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),YPchr((P)37));
                      T97 = T99;
                    } else {
                      T100 = CALL3(1,VARREF(Yerror),LITREF(lit_159),c_,FREEREF(5));
                      T97 = T100;
                    }
                    T87 = T97;
                  }
                  T77 = T87;
                }
                T67 = T77;
              }
              T57 = T67;
            }
            T43 = T57;
          }
          T29 = T43;
        }
        T15 = T29;
      }
      T2 = T15;
    }
    T102 = BOXPUT(YPfalse,FREEREF(0));
    T0 = T102;
  } else {
    T104 = CALL2(1,VARREF(YgooSmacrosYEE),c_,YPchr((P)37));
    if (T104 != YPfalse) {
      T105 = BOXPUT(YPtrue,FREEREF(0));
      T103 = T105;
    } else {
      T106 = CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(4),c_);
      T103 = T106;
    }
    T0 = T103;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSwriteYpe_msg) {
  P port_expr_,message_,args_;
  P exprsF8842;
  P argF8841;
  P maybe_pack_charsF8840;
  P packer_F8839;
  P portF8838;
  P charsF8837;
  P num_argsF8836;
  P arg_indexF8835;
  P found_percentQF8834;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(port_expr_, 0);
  ARG(message_, 1);
  ARG(args_, 2);
  found_percentQF8834 = YPfalse;
  found_percentQF8834 = BOXFAB(found_percentQF8834);
  check_type(YPint((P)0),VARREF(YLintG));
  arg_indexF8835 = YPint((P)0);
  arg_indexF8835 = BOXFAB(arg_indexF8835);
  T24 = CALL1(1,VARREF(YgooStypesYlen),args_);
  num_argsF8836 = T24;
  T23 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  charsF8837 = T23;
  T22 = CALL0(1,VARREF(YgooSmacrosYgensym));
  portF8838 = T22;
  T21 = CALL1(1,VARREF(YgooSpackerYpacker_fab),VARREF(YLlstG));
  packer_F8839 = T21;
  packer_F8839 = BOXFAB(packer_F8839);
  T17 = FUNSHELL(1,fun_maybe_pack_chars_69,3);
  maybe_pack_charsF8840 = T17;
  T18 = FUNSHELL(1,fun_arg_70,5);
  argF8841 = T18;
  FUNINIT(maybe_pack_charsF8840, 3,charsF8837,packer_F8839,portF8838);
  FUNINIT(argF8841, 5,maybe_pack_charsF8840,arg_indexF8835,num_argsF8836,message_,args_);
  T15 = FUNFAB(fun_71,6,found_percentQF8834,packer_F8839,portF8838,argF8841,charsF8837,message_);
  CALL2(1,VARREF(YgooSmacrosYdo),T15,message_);
  T16 = CALL0(1,maybe_pack_charsF8840);
  T20 = BOXGET(packer_F8839);
  T19 = CALL1(1,VARREF(YgooSpackerYpacker_res),T20);
  exprsF8842 = T19;
  T4 = BOXGET(found_percentQF8834);
  T3 = CALL1(1,VARREF(Ynot),T4);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T5 = CALL2(1,VARREF(Yassert_error),LITREF(lit_160),message_);
  } else {
  }
  T7 = CALL1(1,VARREF(Ylst),LITREF(lit_161));
  T12 = CALL1(1,VARREF(Ylst),portF8838);
  T13 = CALL1(1,VARREF(Ylst),port_expr_);
  T11 = CALL3(1,VARREF(YgooSmacrosYcat),T12,T13,LITREF(lit_153));
  T10 = CALL1(1,VARREF(Ylst),T11);
  T9 = CALL2(1,VARREF(YgooSmacrosYcat),T10,LITREF(lit_153));
  T8 = CALL1(1,VARREF(Ylst),T9);
  T6 = CALL4(1,VARREF(YgooSmacrosYcat),T7,T8,exprsF8842,LITREF(lit_153));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_2314_73) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_166),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P return_;
  P x_2313F8853;
  P x_2313F8852;
  P x_2313F8851;
  P x_2313F8850;
  P x_2313F8849;
  P x_2313F8848;
  P argsF8847;
  P messageF8846;
  P portF8845;
  P x_2313F8844;
  P x_2314F8843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
LINK_STACK();
  ARG(return_, 0);
  T28 = FUNSHELL(0,fun_x_2314_73,2);
  x_2314F8843 = T28;
  FUNINIT(x_2314F8843, 2,FREEREF(0),return_);
  x_2313F8844 = FREEREF(0);
  portF8845 = YPfalse;
  messageF8846 = YPfalse;
  argsF8847 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2313F8844,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T12 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2313F8844,LITREF(lit_166),x_2314F8843);
    x_2313F8848 = T12;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2313F8848,x_2314F8843);
    portF8845 = T10;
    T11 = CALL1(1,VARREF(Ytail),x_2313F8848);
    x_2313F8849 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2313F8849,x_2314F8843);
    messageF8846 = T8;
    T9 = CALL1(1,VARREF(Ytail),x_2313F8849);
    x_2313F8850 = T9;
    argsF8847 = x_2313F8850;
    x_2313F8851 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2313F8851,x_2314F8843);
    x_2313F8852 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2313F8852,x_2314F8843);
    T7 = CALL1(1,VARREF(Ytail),x_2313F8851);
    x_2313F8853 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2313F8853,x_2314F8843);
  } else {
    T13 = CALL2(1,x_2314F8843,LITREF(lit_167),x_2313F8844);
  }
  T16 = messageF8846;
  T15 = CALL2(1,VARREF(YisaQ),T16,VARREF(YLstrG));
  if (T15 != YPfalse) {
    T18 = portF8845;
    T19 = messageF8846;
    T20 = argsF8847;
    T17 = CALL3(1,VARREF(YgooSioSwriteYpe_msg),T18,T19,T20);
    T14 = T17;
  } else {
    T22 = CALL1(1,VARREF(Ylst),LITREF(lit_138));
    T24 = portF8845;
    T23 = CALL1(1,VARREF(Ylst),T24);
    T26 = messageF8846;
    T25 = CALL1(1,VARREF(Ylst),T26);
    T27 = argsF8847;
    T21 = CALL5(1,VARREF(YgooSmacrosYcat),T22,T23,T25,T27,LITREF(lit_153));
    T14 = T21;
  }
UNLINK_STACK();
  QRET(T14);
}

FUNCODEDEF(fun_75) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_74,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_out_portG),LITREF(lit_14));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL5(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg),YPfalse,T1,FREEREF(1),FREEREF(2));
  T3 = BOXGET(FREEREF(0));
  T2 = CALL1(1,VARREF(YgooSioSportYport_contents),T3);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_77) {
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

FUNCODEDEF(YgooSconditionsYmsg_to_str) {
  P message_,arguments_;
  P portF8854;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(message_, 0);
  NARGS(arguments_, 1);
  portF8854 = YPfalse;
  portF8854 = BOXFAB(portF8854);
  T2 = FUNFAB(fun_76,3,portF8854,message_,arguments_);
  T3 = FUNFAB(fun_77,1,portF8854);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  RET(T1);
}

FUNCODEDEF(YgooSioSwriteYsay) {
  P port_,args_;
  P iF8856;
  P limF8855;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  NARGS(args_, 1);
  T7 = CALL1(1,VARREF(YgooStypesYlen),args_);
  limF8855 = T7;
  iF8856 = YPint((P)0);
  LOOP_415: {
    P a415_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),iF8856,limF8855);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooScolsScolYlow_elt),args_,iF8856);
      T3 = CALL1(1,VARREF(YgooSmathYto_str),T4);
      CALL2(1,VARREF(YgooSioSportYputs),port_,T3);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF8856,YPint((P)1));
      a415_0 = T6;
      iF8856 = a415_0;
      goto LOOP_415;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

P YgooSioSwriteY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149;
DEFCREGS();
  DYNDEFSET(YgooSioSwriteYTmax_print_depthT,YPint((P)4));
  DYNDEFSET(YgooSioSwriteYTmax_print_lengthT,YPint((P)12));
  lit_0 = YPPsym((P)"as-binding-name");
  lit_1 = YPPlist(1,YPPsym((P)"name"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_binding_name_0 = YPmet(FUNCODEREF(fun_as_binding_name_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(23));
  T2 = VARREF_OR(YgooSioSwriteYas_binding_name,YPfalse);
  T3 = fun_as_binding_name_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYas_binding_name,T1);
  lit_2 = YPPsym((P)"do-emit");
  lit_3 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T4 = YPsig(LITREF(lit_3),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_1 = YPmet(FUNCODEREF(fun_do_emit_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(26));
  T6 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T7 = fun_do_emit_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYdo_emit,T5);
  lit_4 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T8 = YPsig(LITREF(lit_4),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_2 = YPmet(FUNCODEREF(fun_do_emit_2),LITREF(lit_2),T8,ENVNUL,PNUL,sloc(29));
  T10 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T11 = fun_do_emit_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYdo_emit,T9);
  lit_5 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T12 = YPsig(LITREF(lit_5),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_do_emit_3 = YPmet(FUNCODEREF(fun_do_emit_3),LITREF(lit_2),T12,ENVNUL,PNUL,sloc(32));
  T14 = VARREF_OR(YgooSioSwriteYdo_emit,YPfalse);
  T15 = fun_do_emit_3;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSioSwriteYdo_emit,T13);
  lit_6 = YPPsym((P)"emit");
  lit_7 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_8 = YPPsym((P)"recur");
  lit_9 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_10 = YPsb((P)"*");
  T17 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_4 = YPmet(FUNCODEREF(fun_recur_4),LITREF(lit_8),T17,ENVNUL,PNUL,sloc(36));
  T16 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_emit_5 = YPmet(FUNCODEREF(fun_emit_5),LITREF(lit_6),T16,ENVNUL,PNUL,sloc(35));
  T19 = VARREF_OR(YgooSioSwriteYemit,YPfalse);
  T20 = fun_emit_5;
  T18 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T19,T20);
  VARSET(YgooSioSwriteYemit,T18);
  lit_11 = YPPsym((P)"write-to-string");
  lit_12 = YPPlist(1,YPPsym((P)"x"));
  lit_13 = Ynil;
  lit_14 = YPsb((P)"");
  T23 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T23,ENVNUL,PNUL,sloc(42));
  T22 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T22,ENVNUL,PNUL,sloc(42));
  T21 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_write_to_string_8 = YPmet(FUNCODEREF(fun_write_to_string_8),LITREF(lit_11),T21,ENVNUL,PNUL,sloc(41));
  T25 = VARREF_OR(YgooSioSwriteYwrite_to_string,YPfalse);
  T26 = fun_write_to_string_8;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSioSwriteYwrite_to_string,T24);
  lit_15 = YPPsym((P)"write");
  lit_16 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_17 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  lit_18 = YPsb((P)"*");
  T28 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_9 = YPmet(FUNCODEREF(fun_recur_9),LITREF(lit_8),T28,ENVNUL,PNUL,sloc(45));
  T27 = YPsig(LITREF(lit_16),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_10 = YPmet(FUNCODEREF(fun_write_10),LITREF(lit_15),T27,ENVNUL,PNUL,sloc(44));
  T30 = VARREF_OR(YgooSioSwriteYwrite,YPfalse);
  T31 = fun_write_10;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSioSwriteYwrite,T29);
  lit_19 = YPPsym((P)"writeln");
  lit_20 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T32 = YPsig(LITREF(lit_20),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_writeln_11 = YPmet(FUNCODEREF(fun_writeln_11),LITREF(lit_19),T32,ENVNUL,PNUL,sloc(50));
  T34 = VARREF_OR(YgooSioSwriteYwriteln,YPfalse);
  T35 = fun_writeln_11;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSioSwriteYwriteln,T33);
  lit_21 = YPPsym((P)"recurring-write");
  lit_22 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_23 = YPsb((P)"()");
  T36 = YPsig(LITREF(lit_22),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_12 = YPmet(FUNCODEREF(fun_recurring_write_12),LITREF(lit_21),T36,ENVNUL,PNUL,sloc(53));
  T38 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T39 = fun_recurring_write_12;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSioSwriteYrecurring_write,T37);
  lit_24 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_25 = YPsb((P)"$$");
  lit_26 = YPsb((P)"(");
  lit_27 = YPsb((P)")");
  T40 = YPsig(LITREF(lit_24),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLflatG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_13 = YPmet(FUNCODEREF(fun_recurring_write_13),LITREF(lit_21),T40,ENVNUL,PNUL,sloc(58));
  T42 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T43 = fun_recurring_write_13;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSioSwriteYrecurring_write,T41);
  lit_28 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_29 = YPsb((P)"#(");
  lit_30 = YPsb((P)")");
  T44 = YPsig(LITREF(lit_28),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLtupG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_14 = YPmet(FUNCODEREF(fun_recurring_write_14),LITREF(lit_21),T44,ENVNUL,PNUL,sloc(62));
  T46 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T47 = fun_recurring_write_14;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YgooSioSwriteYrecurring_write,T45);
  lit_31 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_32 = YPsb((P)"#[");
  lit_33 = YPsb((P)"]");
  T48 = YPsig(LITREF(lit_31),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSvecYLvecG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_15 = YPmet(FUNCODEREF(fun_recurring_write_15),LITREF(lit_21),T48,ENVNUL,PNUL,sloc(65));
  T50 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T51 = fun_recurring_write_15;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSioSwriteYrecurring_write,T49);
  lit_34 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T52 = YPsig(LITREF(lit_34),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_16 = YPmet(FUNCODEREF(fun_recurring_write_16),LITREF(lit_21),T52,ENVNUL,PNUL,sloc(68));
  T54 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T55 = fun_recurring_write_16;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSwriteYrecurring_write,T53);
  lit_35 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_36 = YPPsym((P)"t");
  lit_37 = YPPsym((P)"f");
  T56 = YPsig(LITREF(lit_35),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_17 = YPmet(FUNCODEREF(fun_recurring_write_17),LITREF(lit_21),T56,ENVNUL,PNUL,sloc(71));
  T58 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T59 = fun_recurring_write_17;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YgooSioSwriteYrecurring_write,T57);
  lit_38 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T60 = YPsig(LITREF(lit_38),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsymG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_18 = YPmet(FUNCODEREF(fun_recurring_write_18),LITREF(lit_21),T60,ENVNUL,PNUL,sloc(76));
  T62 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T63 = fun_recurring_write_18;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSwriteYrecurring_write,T61);
  lit_39 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_40 = YPsb((P)"&0x");
  T64 = YPsig(LITREF(lit_39),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlocG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_19 = YPmet(FUNCODEREF(fun_recurring_write_19),LITREF(lit_21),T64,ENVNUL,PNUL,sloc(79));
  T66 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T67 = fun_recurring_write_19;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSwriteYrecurring_write,T65);
  lit_41 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_42 = YPsb((P)"<num>");
  T68 = YPsig(LITREF(lit_41),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_20 = YPmet(FUNCODEREF(fun_recurring_write_20),LITREF(lit_21),T68,ENVNUL,PNUL,sloc(83));
  T70 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T71 = fun_recurring_write_20;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSwriteYrecurring_write,T69);
  lit_43 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T72 = YPsig(LITREF(lit_43),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_21 = YPmet(FUNCODEREF(fun_recurring_write_21),LITREF(lit_21),T72,ENVNUL,PNUL,sloc(88));
  T74 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T75 = fun_recurring_write_21;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSwriteYrecurring_write,T73);
  lit_44 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T76 = YPsig(LITREF(lit_44),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLchrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_22 = YPmet(FUNCODEREF(fun_recurring_write_22),LITREF(lit_21),T76,ENVNUL,PNUL,sloc(91));
  T78 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T79 = fun_recurring_write_22;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSioSwriteYrecurring_write,T77);
  lit_45 = YPPsym((P)"write-boolean");
  lit_46 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"mumble"));
  T80 = YPsig(LITREF(lit_46),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_boolean_23 = YPmet(FUNCODEREF(fun_write_boolean_23),LITREF(lit_45),T80,ENVNUL,PNUL,sloc(94));
  T82 = VARREF_OR(YgooSioSwriteYwrite_boolean,YPfalse);
  T83 = fun_write_boolean_23;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSioSwriteYwrite_boolean,T81);
  lit_47 = YPPsym((P)"write-number");
  lit_48 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T84 = YPsig(LITREF(lit_48),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLnumG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_number_24 = YPmet(FUNCODEREF(fun_write_number_24),LITREF(lit_47),T84,ENVNUL,PNUL,sloc(98));
  T86 = VARREF_OR(YgooSioSwriteYwrite_number,YPfalse);
  T87 = fun_write_number_24;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSioSwriteYwrite_number,T85);
  lit_49 = YPPsym((P)"write-char-literal");
  lit_50 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_51 = YPsb((P)"#\\");
  T88 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_char_literal_25 = YPmet(FUNCODEREF(fun_write_char_literal_25),LITREF(lit_49),T88,ENVNUL,PNUL,sloc(101));
  T90 = VARREF_OR(YgooSioSwriteYwrite_char_literal,YPfalse);
  T91 = fun_write_char_literal_25;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSioSwriteYwrite_char_literal,T89);
  lit_52 = YPPsym((P)"character-name");
  lit_53 = YPPlist(1,YPPsym((P)"char"));
  T92 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_character_name_26 = YPmet(FUNCODEREF(fun_character_name_26),LITREF(lit_52),T92,ENVNUL,PNUL,sloc(108));
  T94 = VARREF_OR(YgooSioSwriteYcharacter_name,YPfalse);
  T95 = fun_character_name_26;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YgooSioSwriteYcharacter_name,T93);
  lit_54 = YPPsym((P)"write-string-literal");
  lit_55 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_55),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_string_literal_27 = YPmet(FUNCODEREF(fun_write_string_literal_27),LITREF(lit_54),T96,ENVNUL,PNUL,sloc(112));
  T98 = VARREF_OR(YgooSioSwriteYwrite_string_literal,YPfalse);
  T99 = fun_write_string_literal_27;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSioSwriteYwrite_string_literal,T97);
  lit_56 = YPPsym((P)"write-list");
  lit_57 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_58 = YPsb((P)" ...");
  T100 = YPsig(LITREF(lit_57),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLlstG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_list_28 = YPmet(FUNCODEREF(fun_write_list_28),LITREF(lit_56),T100,ENVNUL,PNUL,sloc(124));
  T102 = VARREF_OR(YgooSioSwriteYwrite_list,YPfalse);
  T103 = fun_write_list_28;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YgooSioSwriteYwrite_list,T101);
  lit_59 = YPPsym((P)"quotation?");
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  lit_61 = YPPsym((P)"quote");
  T104 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_quotationQ_29 = YPmet(FUNCODEREF(fun_quotationQ_29),LITREF(lit_59),T104,ENVNUL,PNUL,sloc(139));
  T106 = VARREF_OR(YgooSioSwriteYquotationQ,YPfalse);
  T107 = fun_quotationQ_29;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YgooSioSwriteYquotationQ,T105);
  lit_62 = YPPsym((P)"write-flat");
  lit_63 = YPPlist(6,YPPsym((P)"port"),YPPsym((P)"prefix"),YPPsym((P)"x"),YPPsym((P)"suffix"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_64 = YPsb((P)" ...");
  T108 = YPsig(LITREF(lit_63),YPPlist(6,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG),VARREF(YLflatG),VARREF(YLstrG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)6),VARREF(YLanyG),Ynil);
  fun_write_flat_30 = YPmet(FUNCODEREF(fun_write_flat_30),LITREF(lit_62),T108,ENVNUL,PNUL,sloc(145));
  T110 = VARREF_OR(YgooSioSwriteYwrite_flat,YPfalse);
  T111 = fun_write_flat_30;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSioSwriteYwrite_flat,T109);
  lit_65 = YPPsym((P)"write-map");
  lit_66 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_67 = YPsb((P)"#<");
  lit_68 = YPPlist(1,YPPsym((P)"blow"));
  lit_69 = YPsb((P)" ...");
  lit_70 = YPsb((P)": ");
  T113 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T113,ENVNUL,PNUL,sloc(163));
  T112 = YPsig(LITREF(lit_66),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooScolsSmapYLmapG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_map_32 = YPmet(FUNCODEREF(fun_write_map_32),LITREF(lit_65),T112,ENVNUL,PNUL,sloc(160));
  T115 = VARREF_OR(YgooSioSwriteYwrite_map,YPfalse);
  T116 = fun_write_map_32;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YgooSioSwriteYwrite_map,T114);
  lit_71 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_72 = YPsb((P)"#{File-in-port %s %d}");
  T117 = YPsig(LITREF(lit_71),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_in_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_33 = YPmet(FUNCODEREF(fun_recurring_write_33),LITREF(lit_21),T117,ENVNUL,PNUL,sloc(173));
  T119 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T120 = fun_recurring_write_33;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YgooSioSwriteYrecurring_write,T118);
  lit_73 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_74 = YPsb((P)"#{File-out-port %s}");
  T121 = YPsig(LITREF(lit_73),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLfile_out_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_34 = YPmet(FUNCODEREF(fun_recurring_write_34),LITREF(lit_21),T121,ENVNUL,PNUL,sloc(176));
  T123 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T124 = fun_recurring_write_34;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YgooSioSwriteYrecurring_write,T122);
  lit_75 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_76 = YPsb((P)"#{In-port}");
  T125 = YPsig(LITREF(lit_75),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLin_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_35 = YPmet(FUNCODEREF(fun_recurring_write_35),LITREF(lit_21),T125,ENVNUL,PNUL,sloc(179));
  T127 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T128 = fun_recurring_write_35;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YgooSioSwriteYrecurring_write,T126);
  lit_77 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_78 = YPsb((P)"#{Out-port}");
  T129 = YPsig(LITREF(lit_77),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YgooSioSportYLout_portG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_36 = YPmet(FUNCODEREF(fun_recurring_write_36),LITREF(lit_21),T129,ENVNUL,PNUL,sloc(182));
  T131 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T132 = fun_recurring_write_36;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YgooSioSwriteYrecurring_write,T130);
  lit_79 = YPPsym((P)"write-params");
  lit_80 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"recur"));
  lit_81 = YPPlist(1,YPPsym((P)"x"));
  lit_82 = YPPlist(1,YPPsym((P)"x"));
  lit_83 = YPsb((P)"(%s ");
  lit_84 = YPsb((P)" => ");
  T135 = YPsig(LITREF(lit_81),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T135,ENVNUL,PNUL,sloc(191));
  T134 = YPsig(LITREF(lit_82),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T134,ENVNUL,PNUL,sloc(191));
  T133 = YPsig(LITREF(lit_80),YPPlist(3,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_write_params_39 = YPmet(FUNCODEREF(fun_write_params_39),LITREF(lit_79),T133,ENVNUL,PNUL,sloc(187));
  T137 = VARREF_OR(YgooSioSwriteYwrite_params,YPfalse);
  T138 = fun_write_params_39;
  T136 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T137,T138);
  VARSET(YgooSioSwriteYwrite_params,T136);
  lit_85 = YPPsym((P)"write-fun-guts");
  lit_86 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"name"),YPPsym((P)"recur"));
  lit_87 = YPsb((P)"#{");
  lit_88 = YPsb((P)"}");
  T139 = YPsig(LITREF(lit_86),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLfunG),VARREF(YLstrG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_write_fun_guts_40 = YPmet(FUNCODEREF(fun_write_fun_guts_40),LITREF(lit_85),T139,ENVNUL,PNUL,sloc(203));
  T141 = VARREF_OR(YgooSioSwriteYwrite_fun_guts,YPfalse);
  T142 = fun_write_fun_guts_40;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YgooSioSwriteYwrite_fun_guts,T140);
  lit_89 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_90 = YPsb((P)"Gen");
  T145 = YPsig(LITREF(lit_89),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLgenG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T144 = fun_recurring_write_41 = YPmet(FUNCODEREF(fun_recurring_write_41),LITREF(lit_21),T145,ENVNUL,PNUL,sloc(213));
  T148 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T149 = fun_recurring_write_41;
  T147 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T148,T149);
  T146 = VARSET(YgooSioSwriteYrecurring_write,T147);
  T143 = T146;
  return T143;
}

P YgooSioSwriteY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99;
DEFCREGS();
  lit_91 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_92 = YPsb((P)"Met");
  T0 = YPsig(LITREF(lit_91),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLmetG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_42 = YPmet(FUNCODEREF(fun_recurring_write_42),LITREF(lit_21),T0,ENVNUL,PNUL,sloc(216));
  T2 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T3 = fun_recurring_write_42;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSioSwriteYrecurring_write,T1);
  lit_93 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_94 = YPsb((P)"<SRC-LOC %= %s>");
  T4 = YPsig(LITREF(lit_93),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsrc_locG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_43 = YPmet(FUNCODEREF(fun_recurring_write_43),LITREF(lit_21),T4,ENVNUL,PNUL,sloc(219));
  T6 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T7 = fun_recurring_write_43;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSioSwriteYrecurring_write,T5);
  lit_95 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_96 = YPsb((P)"#{Class ");
  lit_97 = YPsb((P)" ");
  lit_98 = YPsb((P)"}");
  T8 = YPsig(LITREF(lit_95),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_44 = YPmet(FUNCODEREF(fun_recurring_write_44),LITREF(lit_21),T8,ENVNUL,PNUL,sloc(222));
  T10 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T11 = fun_recurring_write_44;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSioSwriteYrecurring_write,T9);
  lit_99 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_100 = YPsb((P)"#{T= ");
  lit_101 = YPsb((P)"}");
  T12 = YPsig(LITREF(lit_99),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsingletonG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_45 = YPmet(FUNCODEREF(fun_recurring_write_45),LITREF(lit_21),T12,ENVNUL,PNUL,sloc(229));
  T14 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T15 = fun_recurring_write_45;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YgooSioSwriteYrecurring_write,T13);
  lit_102 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_103 = YPsb((P)"#{T< ");
  lit_104 = YPsb((P)"}");
  T16 = YPsig(LITREF(lit_102),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLsubclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_46 = YPmet(FUNCODEREF(fun_recurring_write_46),LITREF(lit_21),T16,ENVNUL,PNUL,sloc(234));
  T18 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T19 = fun_recurring_write_46;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSwriteYrecurring_write,T17);
  lit_105 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_106 = YPsb((P)"#{T+");
  lit_107 = YPPlist(1,YPPsym((P)"t"));
  lit_108 = YPsb((P)"}");
  T21 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T21,ENVNUL,PNUL,sloc(241));
  T20 = YPsig(LITREF(lit_105),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLunionG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_48 = YPmet(FUNCODEREF(fun_recurring_write_48),LITREF(lit_21),T20,ENVNUL,PNUL,sloc(239));
  T23 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T24 = fun_recurring_write_48;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSioSwriteYrecurring_write,T22);
  lit_109 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_110 = YPsb((P)"#{T*");
  lit_111 = YPPlist(1,YPPsym((P)"t"));
  lit_112 = YPsb((P)"}");
  T26 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T26,ENVNUL,PNUL,sloc(246));
  T25 = YPsig(LITREF(lit_109),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_50 = YPmet(FUNCODEREF(fun_recurring_write_50),LITREF(lit_21),T25,ENVNUL,PNUL,sloc(244));
  T28 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T29 = fun_recurring_write_50;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSioSwriteYrecurring_write,T27);
  lit_113 = YPPsym((P)"write-value-type");
  lit_114 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_115 = YPsb((P)"(tup");
  lit_116 = YPPlist(1,YPPsym((P)"t"));
  lit_117 = YPsb((P)")");
  T31 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T31,ENVNUL,PNUL,sloc(251));
  T30 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLproductG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_52 = YPmet(FUNCODEREF(fun_write_value_type_52),LITREF(lit_113),T30,ENVNUL,PNUL,sloc(249));
  T33 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T34 = fun_write_value_type_52;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSioSwriteYwrite_value_type,T32);
  lit_118 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  T35 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_value_type_53 = YPmet(FUNCODEREF(fun_write_value_type_53),LITREF(lit_113),T35,ENVNUL,PNUL,sloc(254));
  T37 = VARREF_OR(YgooSioSwriteYwrite_value_type,YPfalse);
  T38 = fun_write_value_type_53;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YgooSioSwriteYwrite_value_type,T36);
  lit_119 = YPPsym((P)"recurring-write-type");
  lit_120 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T39 = YPsig(LITREF(lit_120),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLclassG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_54 = YPmet(FUNCODEREF(fun_recurring_write_type_54),LITREF(lit_119),T39,ENVNUL,PNUL,sloc(257));
  T41 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T42 = fun_recurring_write_type_54;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YgooSioSwriteYrecurring_write_type,T40);
  lit_121 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  T43 = YPsig(LITREF(lit_121),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_type_55 = YPmet(FUNCODEREF(fun_recurring_write_type_55),LITREF(lit_119),T43,ENVNUL,PNUL,sloc(260));
  T45 = VARREF_OR(YgooSioSwriteYrecurring_write_type,YPfalse);
  T46 = fun_recurring_write_type_55;
  T44 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T45,T46);
  VARSET(YgooSioSwriteYrecurring_write_type,T44);
  lit_122 = YPPsym((P)"write-type");
  lit_123 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"x"));
  lit_124 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"d"));
  T48 = YPsig(LITREF(lit_124),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_recur_56 = YPmet(FUNCODEREF(fun_recur_56),LITREF(lit_8),T48,ENVNUL,PNUL,sloc(264));
  T47 = YPsig(LITREF(lit_123),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_write_type_57 = YPmet(FUNCODEREF(fun_write_type_57),LITREF(lit_122),T47,ENVNUL,PNUL,sloc(263));
  T50 = VARREF_OR(YgooSioSwriteYwrite_type,YPfalse);
  T51 = fun_write_type_57;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSioSwriteYwrite_type,T49);
  lit_125 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_126 = YPsb((P)"#{Prop ");
  lit_127 = YPsb((P)"}");
  T52 = YPsig(LITREF(lit_125),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLpropG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_58 = YPmet(FUNCODEREF(fun_recurring_write_58),LITREF(lit_21),T52,ENVNUL,PNUL,sloc(267));
  T54 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T55 = fun_recurring_write_58;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YgooSioSwriteYrecurring_write,T53);
  lit_128 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_129 = YPsb((P)"#{");
  lit_130 = YPPlist(1,YPPsym((P)"blow"));
  lit_131 = YPsb((P)" ...");
  lit_132 = YPsb((P)": ");
  lit_133 = YPsb((P)"}");
  T59 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T59,ENVNUL,PNUL,sloc(276));
  T58 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_60 = YPmet(FUNCODEREF(fun_60),YPfalse,T58,ENVNUL,PNUL,sloc(276));
  T57 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T57,ENVNUL,PNUL,sloc(275));
  T56 = YPsig(LITREF(lit_128),YPPlist(4,VARREF(YgooSioSportYLout_portG),VARREF(YLanyG),VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_62 = YPmet(FUNCODEREF(fun_recurring_write_62),LITREF(lit_21),T56,ENVNUL,PNUL,sloc(272));
  T61 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T62 = fun_recurring_write_62;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSioSwriteYrecurring_write,T60);
  lit_134 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_135 = YPsb((P)"#{End-of-file}");
  T65 = XCALL0(1,VARREF(YgooSmathYeof_object));
  T64 = XCALL1(1,VARREF(YgooStypesYtE),T65);
  T63 = YPsig(LITREF(lit_134),YPPlist(4,VARREF(YgooSioSportYLout_portG),T64,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_63 = YPmet(FUNCODEREF(fun_recurring_write_63),LITREF(lit_21),T63,ENVNUL,PNUL,sloc(287));
  T67 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T68 = fun_recurring_write_63;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSioSwriteYrecurring_write,T66);
  lit_136 = YPPlist(4,YPPsym((P)"port"),YPPsym((P)"x"),YPPsym((P)"d"),YPPsym((P)"recur"));
  lit_137 = YPsb((P)"nul");
  T70 = XCALL1(1,VARREF(YgooStypesYtE),VARREF(Ynul));
  T69 = YPsig(LITREF(lit_136),YPPlist(4,VARREF(YgooSioSportYLout_portG),T70,VARREF(YLintG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_recurring_write_64 = YPmet(FUNCODEREF(fun_recurring_write_64),LITREF(lit_21),T69,ENVNUL,PNUL,sloc(290));
  T72 = VARREF_OR(YgooSioSwriteYrecurring_write,YPfalse);
  T73 = fun_recurring_write_64;
  T71 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T72,T73);
  VARSET(YgooSioSwriteYrecurring_write,T71);
  lit_138 = YPPsym((P)"msg");
  lit_139 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"arguments"));
  lit_140 = YPPsym((P)"arg");
  lit_141 = YPPlist(2,YPPsym((P)"char"),YPPsym((P)"class"));
  lit_142 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_143 = YPsb((P)"Msg argument for directive '%%%c' not of class %t: %=");
  lit_144 = YPPlist(1,YPPsym((P)"c"));
  lit_145 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_146 = YPsb((P)"Incomplete msg directive in \"%s\"");
  T76 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLchrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_arg_65 = YPmet(FUNCODEREF(fun_arg_65),LITREF(lit_140),T76,ENVNUL,PNUL,sloc(297));
  T75 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_66 = YPmet(FUNCODEREF(fun_66),YPfalse,T75,ENVNUL,PNUL,sloc(308));
  T74 = YPsig(LITREF(lit_139),YPPlist(2,VARREF(YgooSioSportYLout_portG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_msg_67 = YPmet(FUNCODEREF(fun_msg_67),LITREF(lit_138),T74,ENVNUL,PNUL,sloc(293));
  T78 = VARREF_OR(YgooSconditionsYmsg,YPfalse);
  T79 = fun_msg_67;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSconditionsYmsg,T77);
  lit_147 = YPPsym((P)"post");
  lit_148 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T80 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_post_68 = YPmet(FUNCODEREF(fun_post_68),LITREF(lit_147),T80,ENVNUL,PNUL,sloc(330));
  T82 = VARREF_OR(YgooSioSwriteYpost,YPfalse);
  T83 = fun_post_68;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YgooSioSwriteYpost,T81);
  lit_149 = YPPsym((P)"pe-msg");
  lit_150 = YPPlist(3,YPPsym((P)"port-expr"),YPPsym((P)"message"),YPPsym((P)"args"));
  lit_151 = YPPsym((P)"maybe-pack-chars");
  lit_152 = YPPsym((P)"puts");
  lit_153 = Ynil;
  lit_154 = YPPlist(1,YPPsym((P)"char"));
  lit_155 = YPsb((P)"Too few arguments for msg string %=: %=");
  lit_156 = YPPlist(1,YPPsym((P)"c"));
  lit_157 = YPPsym((P)"num-to-str");
  lit_158 = YPPsym((P)"put");
  lit_159 = YPsb((P)"Invalid msg directive '%s' in \"%s\"");
  lit_160 = YPsb((P)"Incomplete msg directive in \"%s\"");
  lit_161 = YPPsym((P)"let");
  T87 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_maybe_pack_chars_69 = YPmet(FUNCODEREF(fun_maybe_pack_chars_69),LITREF(lit_151),T87,ENVNUL,PNUL,sloc(348));
  T86 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_arg_70 = YPmet(FUNCODEREF(fun_arg_70),LITREF(lit_140),T86,ENVNUL,PNUL,sloc(349));
  T85 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T85,ENVNUL,PNUL,sloc(356));
  T84 = YPsig(LITREF(lit_150),YPPlist(3,VARREF(YLanyG),VARREF(YLstrG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSioSwriteYpe_msg = YPmet(FUNCODEREF(YgooSioSwriteYpe_msg),LITREF(lit_149),T84,ENVNUL,PNUL,sloc(337));
  T88 = YgooSioSwriteYpe_msg;
  VARSET(YgooSioSwriteYpe_msg,T88);
  lit_162 = YPPlist(1,YPPsym((P)"exp"));
  lit_163 = YPPlist(1,YPPsym((P)"return"));
  lit_164 = YPPsym((P)"x-2314");
  lit_165 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_166 = YPPsym((P)"msg*");
  lit_167 = YPsb((P)"Match Pattern Failure");
  T91 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2314_73 = YPmet(FUNCODEREF(fun_x_2314_73),LITREF(lit_164),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(LITREF(lit_163),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_75;
  YPmacro(YPPsym((P)"goo/io/write"),YPPsym((P)"msg*"),T92);
  lit_168 = YPPsym((P)"msg-to-str");
  lit_169 = YPPlist(2,YPPsym((P)"message"),YPPsym((P)"arguments"));
  T95 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T95,ENVNUL,PNUL,sloc(389));
  T94 = YPsig(LITREF(lit_13),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T94,ENVNUL,PNUL,sloc(389));
  T93 = YPsig(LITREF(lit_169),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLstrG),Ynil);
  YgooSconditionsYmsg_to_str = YPmet(FUNCODEREF(YgooSconditionsYmsg_to_str),LITREF(lit_168),T93,ENVNUL,PNUL,sloc(388));
  T96 = YgooSconditionsYmsg_to_str;
  VARSET(YgooSconditionsYmsg_to_str,T96);
  lit_170 = YPPsym((P)"say");
  lit_171 = YPPlist(2,YPPsym((P)"port"),YPPsym((P)"args"));
  T97 = YPsig(LITREF(lit_171),YPPlist(1,VARREF(YgooSioSportYLout_portG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSwriteYsay = YPmet(FUNCODEREF(YgooSioSwriteYsay),LITREF(lit_170),T97,ENVNUL,PNUL,sloc(393));
  T98 = YgooSioSwriteYsay;
  VARSET(YgooSioSwriteYsay,T98);
  T99 = YPfalse;
  return T99;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSpacker},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooSconditions},
  {&module_info_gooSioSread},
  {&module_info_gooSpacker},
  {&module_info_gooSlate_macros},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"set-standard-read-macro!", &module_info_gooSioSread, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"choose-handler", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
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
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"$char-long-names", &module_info_gooSioSread, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"*gensym-counter*", &module_info_gooSlate_macros, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"build-condition-for-handler-interactively", &module_info_gooSconditions, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"invoke-handler-interactively", &module_info_gooSconditions, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
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
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"read-delimited-list", &module_info_gooSioSread, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"list-handlers", &module_info_gooSconditions, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"port-filename", &module_info_gooSioSport, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"get-standard-read-macro", &module_info_gooSioSread, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"*current-handlers*", &module_info_gooSconditions, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"describe-handler", &module_info_gooSconditions, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSclass, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"build-condition-interactively", &module_info_gooSconditions, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"write-string-literal", CVAR, &YgooSioSwriteYwrite_string_literal},
  {"writeln", CVAR, &YgooSioSwriteYwriteln},
  {"write-boolean", CVAR, &YgooSioSwriteYwrite_boolean},
  {"write-value-type", CVAR, &YgooSioSwriteYwrite_value_type},
  {"msg*", PVAR, NULL},
  {"recurring-write-type", CVAR, &YgooSioSwriteYrecurring_write_type},
  {"as-binding-name", CVAR, &YgooSioSwriteYas_binding_name},
  {"write-map", CVAR, &YgooSioSwriteYwrite_map},
  {"*max-print-depth*", DVAR, &YgooSioSwriteYTmax_print_depthT},
  {"write-list", CVAR, &YgooSioSwriteYwrite_list},
  {"post", CVAR, &YgooSioSwriteYpost},
  {"write", CVAR, &YgooSioSwriteYwrite},
  {"write-number", CVAR, &YgooSioSwriteYwrite_number},
  {"write-flat", CVAR, &YgooSioSwriteYwrite_flat},
  {"---main-0---", PVAR, NULL},
  {"write-params", CVAR, &YgooSioSwriteYwrite_params},
  {"emit", CVAR, &YgooSioSwriteYemit},
  {"say", CVAR, &YgooSioSwriteYsay},
  {"quotation?", CVAR, &YgooSioSwriteYquotationQ},
  {"*max-print-length*", DVAR, &YgooSioSwriteYTmax_print_lengthT},
  {"recurring-write", CVAR, &YgooSioSwriteYrecurring_write},
  {"write-to-string", CVAR, &YgooSioSwriteYwrite_to_string},
  {"do-emit", CVAR, &YgooSioSwriteYdo_emit},
  {"write-fun-guts", CVAR, &YgooSioSwriteYwrite_fun_guts},
  {"---main-1---", PVAR, NULL},
  {"write-char-literal", CVAR, &YgooSioSwriteYwrite_char_literal},
  {"write-type", CVAR, &YgooSioSwriteYwrite_type},
  {"pe-msg", CVAR, &YgooSioSwriteYpe_msg},
  {"character-name", CVAR, &YgooSioSwriteYcharacter_name},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"writeln", NULL},
  {"msg*", NULL},
  {"*max-print-depth*", NULL},
  {"post", NULL},
  {"msg", NULL},
  {"emit", NULL},
  {"write", NULL},
  {"say", NULL},
  {"*max-print-length*", NULL},
  {"recurring-write", NULL},
  {"write-to-string", NULL},
  {"msg-to-str", NULL},
  {"write-type", NULL},
  {"pe-msg", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSwrite;
MODULE_INFO module_info_gooSioSwrite = {
  "goo/io/write",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSclass (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooSconditions (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSlate_macros (void);

/* EXPRESSION: */

extern void load_module_gooSioSwrite (void);

void load_module_gooSioSwrite (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSpacker();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooSconditions();
  load_module_gooSioSread();
  load_module_gooSpacker();
  load_module_gooSlate_macros();

  (P)YgooSioSwriteY___main_0___();
  (P)YgooSioSwriteY___main_1___();

}

/* END OF GENERATED CODE. */
