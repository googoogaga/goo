/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/io/read");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/io/read */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yclass_children,"goo/boot","class-children");
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
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
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
DEF(YgooSioSreadYgobble_nested_comment,"goo/io/read","gobble-nested-comment");
EXT(YOelt,"goo/boot","@elt");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YgooSioSreadYreader_tokenQ,"goo/io/read","reader-token?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
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
EXT(YgooSmathYsqrt,"goo/math","sqrt");
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
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSioSreadYDvert_sym,"goo/io/read","$vert-sym");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YgooSioSreadYbs_sym,"goo/io/read","bs-sym");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
DEF(YgooSioSreadYTread_terminatingQ_vectorT,"goo/io/read","*read-terminating?-vector*");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YgooSioSreadYsub_read_curlies,"goo/io/read","sub-read-curlies");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSioSreadYDclose_curly,"goo/io/read","$close-curly");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YgooSioSreadYDclose_bracket,"goo/io/read","$close-bracket");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YgooSioSreadYLreader_tokenG,"goo/io/read","<reader-token>");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
DEF(YgooSioSreadYmake_immutableX,"goo/io/read","make-immutable!");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YgooSioSreadYdefine_sharp_macro,"goo/io/read","define-sharp-macro");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YgooSioSreadYsub_read_token,"goo/io/read","sub-read-token");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
DEF(YgooSioSreadYread_string_literal,"goo/io/read","read-string-literal");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooSioSreadYwarn,"goo/io/read","warn");
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
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YgooSioSreadYsub_read_constituent,"goo/io/read","sub-read-constituent");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YOallQ,"goo/boot","@all?");
DEF(YgooSioSreadYmake_reader_token,"goo/io/read","make-reader-token");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YgooSioSreadYgobble_line,"goo/io/read","gobble-line");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YgooSioSreadYDvert_proxy,"goo/io/read","$vert-proxy");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
DEF(YgooSioSreadYsub_read_vertical,"goo/io/read","sub-read-vertical");
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
DEF(YgooSioSreadYTread_dispatch_vectorT,"goo/io/read","*read-dispatch-vector*");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YgooSioSreadYTsharp_macrosT,"goo/io/read","*sharp-macros*");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
DEF(YgooSioSreadYsub_read_carefully,"goo/io/read","sub-read-carefully");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YgooSioSreadYsub_read,"goo/io/read","sub-read");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YgooSioSreadYDstrange_symbol_names,"goo/io/read","$strange-symbol-names");
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
DEF(YgooSioSreadYparse_token,"goo/io/read","parse-token");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YgooSioSreadYsub_read_brackets,"goo/io/read","sub-read-brackets");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
DEF(YgooSioSreadYDstring_escape_chars,"goo/io/read","$string-escape-chars");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
DEF(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
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
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
DEF(YgooSioSreadYset_standard_syntaxX,"goo/io/read","set-standard-syntax!");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DYNEXT(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Yprop_offset,"goo/boot","prop-offset");
DEF(YgooSioSreadYsub_read_list,"goo/io/read","sub-read-list");
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
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YgooSioSreadYsub_read_backslash,"goo/io/read","sub-read-backslash");
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
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
DEF(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSmathYceil,"goo/math","ceil");
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
DEF(YgooSioSreadYDclose_paren,"goo/io/read","$close-paren");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YgooSioSreadYflush_whitespace,"goo/io/read","flush-whitespace");
DEF(YgooSioSreadYreverse_list_Gstring,"goo/io/read","reverse-list->string");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
DEF(YgooSioSreadYtoken_message,"goo/io/read","token-message");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSclassYobject_parents,"goo/class","object-parents");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
DEF(YgooSioSreadYsub_read_list_eof_error,"goo/io/read","sub-read-list-eof-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
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
DEF(YgooSioSreadYpreferred_case,"goo/io/read","preferred-case");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
DEF(YgooSioSreadYsub_read_seq,"goo/io/read","sub-read-seq");
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
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
DEF(YgooSioSreadYreading_error,"goo/io/read","reading-error");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_91);
DEFLIT(lit_102);
DEFLIT(lit_22);
DEFLIT(lit_40);
DEFLIT(lit_21);
DEFLIT(lit_45);
DEFLIT(lit_86);
DEFLIT(lit_27);
DEFLIT(lit_108);
DEFLIT(lit_15);
DEFLIT(lit_61);
DEFLIT(lit_64);
DEFLIT(lit_32);
DEFLIT(lit_111);
DEFLIT(lit_20);
DEFLIT(lit_6);
DEFLIT(lit_48);
DEFLIT(lit_59);
DEFLIT(lit_126);
DEFLIT(lit_125);
DEFLIT(lit_33);
DEFLIT(lit_80);
DEFLIT(lit_122);
DEFLIT(lit_8);
DEFLIT(lit_38);
DEFLIT(lit_110);
DEFLIT(lit_37);
DEFLIT(lit_43);
DEFLIT(lit_87);
DEFLIT(lit_11);
DEFLIT(lit_71);
DEFLIT(lit_73);
DEFLIT(lit_116);
DEFLIT(lit_63);
DEFLIT(lit_83);
DEFLIT(lit_3);
DEFLIT(lit_62);
DEFLIT(lit_121);
DEFLIT(lit_36);
DEFLIT(lit_95);
DEFLIT(lit_120);
DEFLIT(lit_7);
DEFLIT(lit_16);
DEFLIT(lit_12);
DEFLIT(lit_68);
DEFLIT(lit_39);
DEFLIT(lit_94);
DEFLIT(lit_10);
DEFLIT(lit_29);
DEFLIT(lit_28);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_42);
DEFLIT(lit_113);
DEFLIT(lit_30);
DEFLIT(lit_35);
DEFLIT(lit_31);
DEFLIT(lit_51);
DEFLIT(lit_54);
DEFLIT(lit_18);
DEFLIT(lit_57);
DEFLIT(lit_118);
DEFLIT(lit_99);
DEFLIT(lit_56);
DEFLIT(lit_67);
DEFLIT(lit_105);
DEFLIT(lit_0);
DEFLIT(lit_1);
DEFLIT(lit_72);
DEFLIT(lit_106);
DEFLIT(lit_49);
DEFLIT(lit_104);
DEFLIT(lit_124);
DEFLIT(lit_17);
DEFLIT(lit_70);
DEFLIT(lit_13);
DEFLIT(lit_81);
DEFLIT(lit_65);
DEFLIT(lit_107);
DEFLIT(lit_26);
DEFLIT(lit_4);
DEFLIT(lit_58);
DEFLIT(lit_60);
DEFLIT(lit_92);
DEFLIT(lit_112);
DEFLIT(lit_119);
DEFLIT(lit_103);
DEFLIT(lit_52);
DEFLIT(lit_41);
DEFLIT(lit_47);
DEFLIT(lit_100);
DEFLIT(lit_46);
DEFLIT(lit_88);
DEFLIT(lit_97);
DEFLIT(lit_25);
DEFLIT(lit_117);
DEFLIT(lit_50);
DEFLIT(lit_5);
DEFLIT(lit_79);
DEFLIT(lit_78);
DEFLIT(lit_128);
DEFLIT(lit_85);
DEFLIT(lit_53);
DEFLIT(lit_24);
DEFLIT(lit_101);
DEFLIT(lit_115);
DEFLIT(lit_127);
DEFLIT(lit_66);
DEFLIT(lit_98);
DEFLIT(lit_19);
DEFLIT(lit_109);
DEFLIT(lit_55);
DEFLIT(lit_96);
DEFLIT(lit_76);
DEFLIT(lit_23);
DEFLIT(lit_93);
DEFLIT(lit_90);
DEFLIT(lit_34);
DEFLIT(lit_82);
DEFLIT(lit_123);
DEFLIT(lit_44);
DEFLIT(lit_74);
DEFLIT(lit_14);
DEFLIT(lit_75);
DEFLIT(lit_84);
DEFLIT(lit_114);
DEFLIT(lit_69);
DEFLIT(lit_77);
DEFLIT(lit_89);

/* FUNCTIONS: */

LOCFOR(fun_read_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
LOCFOR(fun_read_from_string_3);
LOCFOR(fun_sub_read_carefully_4);
LOCFOR(fun_token_message_5);
LOCFOR(fun_make_reader_token_6);
LOCFOR(fun_reader_tokenQ_7);
LOCFOR(fun_sub_read_8);
LOCFOR(fun_9);
LOCFOR(fun_set_standard_syntaxX_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
FUNFOR(YgooSioSreadYflush_whitespace);
FUNFOR(YgooSioSreadYread_delimited_list);
FUNFOR(YgooSioSreadYsub_read_constituent);
LOCFOR(fun_16);
LOCFOR(fun_set_standard_read_macroX_17);
LOCFOR(fun_get_standard_read_macro_18);
LOCFOR(fun_sub_read_vertical_19);
LOCFOR(fun_sub_read_backslash_20);
FUNFOR(YgooSioSreadYsub_read_list_eof_error);
LOCFOR(fun_read_next_22);
LOCFOR(fun_sub_read_list_23);
LOCFOR(fun_sub_read_seq_24);
LOCFOR(fun_sub_read_brackets_25);
LOCFOR(fun_sub_read_curlies_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
FUNFOR(YgooSioSreadYread_string_literal);
LOCFOR(fun_34);
LOCFOR(fun_gobble_line_35);
LOCFOR(fun_define_sharp_macro_36);
LOCFOR(fun_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
FUNFOR(YgooSioSreadYgobble_nested_comment);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_sub_read_token_48);
LOCFOR(fun_49);
LOCFOR(fun_parse_token_50);
LOCFOR(fun_reading_error_51);
LOCFOR(fun_warn_52);
LOCFOR(fun_reverse_list_Gstring_53);
LOCFOR(fun_make_immutableX_54);
extern P YgooSioSreadY___main_0___ ();
extern P YgooSioSreadY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_read_0) {
  P port_;
  P formF8693;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  LOOP_403: {
    T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
    formF8693 = T7;
    T2 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF8693);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T0 = formF8693;
    } else {
      T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF8693,VARREF(YgooSioSreadYDclose_paren));
      if (T4 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSioSreadYwarn),LITREF(lit_2));
        T3 = T5;
      } else {
        goto LOOP_403;
        T3 = T6;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLstr_in_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_2) {
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

FUNCODEDEF(fun_read_from_string_3) {
  P x_;
  P portF8694;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  portF8694 = YPfalse;
  portF8694 = BOXFAB(portF8694);
  T2 = FUNFAB(fun_1,2,portF8694,x_);
  T3 = FUNFAB(fun_2,1,portF8694);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_sub_read_carefully_4) {
  P port_;
  P formF8695;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(port_, 0);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF8695 = T7;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF8695);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_8));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSioSreadYreader_tokenQ),formF8695);
    if (T4 != YPfalse) {
      T6 = CALL1(1,VARREF(Ytail),formF8695);
      T5 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,T6);
      T3 = T5;
    } else {
      T3 = formF8695;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_token_message_5) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSioSreadYtoken_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_make_reader_token_6) {
  P message_;
  P T0;
LINK_STACK();
  ARG(message_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),message_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reader_tokenQ_7) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL2(1,VARREF(YisaQ),form_,VARREF(YgooSioSreadYLreader_tokenG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sub_read_8) {
  P port_;
  P cF8696;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
  cF8696 = T5;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8696);
  if (T1 != YPfalse) {
    T0 = cF8696;
  } else {
    T4 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF8696);
    T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T4);
    T2 = CALL2(1,T3,cF8696,port_);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_22),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_syntaxX_10) {
  P char_,terminatingQ_,reader_;
  P T0,T1,T2;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(reader_, 2);
  T0 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  CALL3(1,VARREF(YgooScolsScolxYelt_setter),reader_,VARREF(YgooSioSreadYTread_dispatch_vectorT),T0);
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T1 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),terminatingQ_,VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T2);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_11) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooScolsScolxYelt_setter),FREEREF(0),VARREF(YgooSioSreadYTread_dispatch_vectorT),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYflush_whitespace) {
  P port_;
  P cF8697;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(port_, 0);
  T4 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF8697 = T4;
  T2 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF8697);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),VARREF(YgooScolsSstrYascii_whitespaces),T2);
  if (T1 != YPfalse) {
    CALL1(1,VARREF(YgooSioSportYget),port_);
    T3 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
    T0 = T3;
  } else {
    T0 = cF8697;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_delimited_list) {
  P endchar_,port_;
  P UF8700;
  P cF8699;
  P retlistF8698;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(endchar_, 0);
  ARG(port_, 1);
  retlistF8698 = VARREF(Ynil);
  T11 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
  cF8699 = T11;
  LOOP_404: {
    P a404_0;
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),cF8699,endchar_);
    if (T2 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T4 = retlistF8698;
      T3 = CALL1(1,VARREF(YgooScolsSseqYrev),T4);
      T1 = T3;
    } else {
      T8 = retlistF8698;
      UF8700 = T8;
      T7 = CALL1(1,VARREF(YgooSconditionsYread),port_);
      T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,UF8700);
      T5 = retlistF8698 = T6;
      T10 = CALL1(1,VARREF(YgooSioSreadYflush_whitespace),port_);
      a404_0 = T10;
      cF8699 = a404_0;
      goto LOOP_404;
      T1 = T9;
    }
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(YgooSioSreadYsub_read_constituent) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),c_,port_);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),T1,port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_16) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),c_,YPfalse,VARREF(YgooSioSreadYsub_read_constituent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_set_standard_read_macroX_17) {
  P char_,terminatingQ_,proc_;
  P T0;
LINK_STACK();
  ARG(char_, 0);
  ARG(terminatingQ_, 1);
  ARG(proc_, 2);
  T0 = CALL3(1,VARREF(YgooSioSreadYset_standard_syntaxX),char_,terminatingQ_,proc_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_get_standard_read_macro_18) {
  P char_;
  P T0,T1;
LINK_STACK();
  ARG(char_, 0);
  T1 = CALL1(1,VARREF(YgooSmathYchar_Gascii),char_);
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_dispatch_vectorT),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_vertical_19) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_42),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_backslash_20) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T0 = CALL2(1,VARREF(YgooSioSreadYparse_token),LITREF(lit_45),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYsub_read_list_eof_error) {
  P port_;
  P T0;
LINK_STACK();
  ARG(port_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_50));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_read_next_22) {
  P c_,prev_,line_,form_;
  P nextF8702;
  P prevF8701;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
LINK_STACK();
  ARG(c_, 0);
  ARG(prev_, 1);
  ARG(line_, 2);
  ARG(form_, 3);
  T19 = CALL2(1,VARREF(YgooSmacrosYEE),prev_,VARREF(YgooSioSreadYDvert_proxy));
  if (T19 != YPfalse) {
    T18 = VARREF(YgooSioSreadYDvert_sym);
  } else {
    T18 = prev_;
  }
  prevF8701 = T18;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),form_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),FREEREF(0));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,prevF8701);
      T3 = T5;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),form_,VARREF(YgooSioSreadYDvert_sym));
      if (T7 != YPfalse) {
        T12 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),FREEREF(0));
        nextF8702 = T12;
        T10 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,nextF8702);
        T9 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF8701,T10,line_);
        T11 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,FREEREF(0));
        T8 = CALL3(1,VARREF(YgooScolsSlstYline_pair),T9,T11,line_);
        T6 = T8;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YgooSioSportYport_line),FREEREF(0));
          T17 = CALL1(1,VARREF(YgooSioSreadYsub_read),FREEREF(0));
          T15 = CALL4(1,FREEREF(1),c_,form_,T16,T17);
          T14 = CALL3(1,VARREF(YgooScolsSlstYline_pair),prevF8701,T15,line_);
          T13 = T14;
        } else {
          T13 = YPfalse;
        }
        T6 = T13;
      }
      T3 = T6;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_list_23) {
  P c_,p_;
  P read_nextF8705;
  P formF8704;
  P lineF8703;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(p_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYport_line),p_);
  lineF8703 = T10;
  T9 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
  formF8704 = T9;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF8704);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSioSreadYsub_read_list_eof_error),p_);
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF8704,VARREF(YgooSioSreadYDclose_paren));
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      if (YPtrue != YPfalse) {
        T8 = FUNSHELL(1,fun_read_next_22,2);
        read_nextF8705 = T8;
        FUNINIT(read_nextF8705, 2,p_,read_nextF8705);
        T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),p_);
        T6 = CALL4(1,read_nextF8705,c_,formF8704,lineF8703,T7);
        T5 = T6;
      } else {
        T5 = YPfalse;
      }
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_seq_24) {
  P c_,e_,port_;
  P formF8706;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(e_, 1);
  ARG(port_, 2);
  T7 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
  formF8706 = T7;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),formF8706);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_57));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),formF8706,e_);
    if (T4 != YPfalse) {
      T3 = Ynil;
    } else {
      T6 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,e_,port_);
      T5 = CALL2(1,VARREF(YgooSmacrosYpair),formF8706,T6);
      T3 = T5;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_brackets_25) {
  P c_,port_;
  P x_2289F8709;
  P x_2288F8708;
  P formF8707;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T29 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  formF8707 = T29;
  T28 = CALL1(1,VARREF(YgooStypesYlen),formF8707);
  x_2288F8708 = T28;
  x_2289F8709 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2289F8709,x_2288F8708,YPint((P)2));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),formF8707);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(YgooSmacrosY2nd),formF8707);
    T6 = CALL1(1,VARREF(Ylst),T7);
    T2 = CALL4(1,VARREF(YgooSmacrosYcat),T3,T4,T6,LITREF(lit_61));
    T0 = T2;
  } else {
    T9 = CALL2(1,x_2289F8709,x_2288F8708,YPint((P)3));
    if (T9 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF8707);
      T11 = CALL2(1,VARREF(YgooSmacrosYEE),T12,LITREF(lit_62));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
        T16 = CALL1(1,VARREF(YgooSmacrosY1st),formF8707);
        T15 = CALL1(1,VARREF(Ylst),T16);
        T18 = CALL1(1,VARREF(YgooSmacrosY2nd),formF8707);
        T17 = CALL1(1,VARREF(Ylst),T18);
        T13 = CALL4(1,VARREF(YgooSmacrosYcat),T14,T15,T17,LITREF(lit_61));
        T10 = T13;
      } else {
        T20 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
        T22 = CALL1(1,VARREF(YgooSmacrosY1st),formF8707);
        T21 = CALL1(1,VARREF(Ylst),T22);
        T24 = CALL1(1,VARREF(YgooSmacrosY2nd),formF8707);
        T23 = CALL1(1,VARREF(Ylst),T24);
        T26 = CALL1(1,VARREF(YgooScolsSseqY3rd),formF8707);
        T25 = CALL1(1,VARREF(Ylst),T26);
        T19 = CALL5(1,VARREF(YgooSmacrosYcat),T20,T21,T23,T25,LITREF(lit_61));
        T10 = T19;
      }
      T8 = T10;
    } else {
      T27 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_65));
      T8 = T27;
    }
    T0 = T8;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_curlies_26) {
  P c_,port_;
  P slash_indexF8711;
  P formsF8710;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_curly),port_);
  formsF8710 = T10;
  T9 = CALL2(1,VARREF(YgooScolsSseqYpos),formsF8710,VARREF(YgooSioSreadYbs_sym));
  slash_indexF8711 = T9;
  if (slash_indexF8711 != YPfalse) {
    T2 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),formsF8710,YPint((P)0),slash_indexF8711);
    T3 = CALL1(1,VARREF(Ylst),T4);
    T6 = CALL2(1,VARREF(YgooSmathYA),slash_indexF8711,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooScolsSseqYsubT),formsF8710,T6);
    T1 = CALL4(1,VARREF(YgooSmacrosYcat),T2,T3,T5,LITREF(lit_61));
    T0 = T1;
  } else {
    T8 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
    T7 = CALL3(1,VARREF(YgooSmacrosYcat),T8,formsF8710,LITREF(lit_61));
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_27) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_paren));
}

FUNCODEDEF(fun_28) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_curly));
}

FUNCODEDEF(fun_29) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDclose_bracket));
}

FUNCODEDEF(fun_30) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_75),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),LITREF(lit_77),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P c_,port_;
  P keywordF8713;
  P nextF8712;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T7 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  nextF8712 = T7;
  T3 = CALL1(1,VARREF(YgooSmathYeof_objectQ),nextF8712);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_79));
    T2 = T4;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),nextF8712,YPchr((P)64));
    if (T6 != YPfalse) {
      CALL1(1,VARREF(YgooSioSportYget),port_);
      T5 = LITREF(lit_80);
    } else {
      T5 = LITREF(lit_81);
    }
    T2 = T5;
  }
  keywordF8713 = T2;
  T1 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
  T0 = CALL2(1,VARREF(Ylst),keywordF8713,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSioSreadYread_string_literal) {
  P c_,port_;
  P ecF8719;
  P tmpF8718;
  P cF8717;
  P cF8716;
  P iF8715;
  P lF8714;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  lF8714 = Ynil;
  iF8715 = YPint((P)0);
  LOOP_405: {
    P a405_0,a405_1;
    T29 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF8716 = T29;
    T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8716);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_84));
      T0 = T2;
    } else {
      T4 = CALL2(1,VARREF(YgooSmathYE),cF8716,YPchr((P)92));
      if (T4 != YPfalse) {
        T22 = CALL1(1,VARREF(YgooSioSportYget),port_);
        cF8717 = T22;
        T6 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8717);
        if (T6 != YPfalse) {
          T7 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_85));
          T5 = T7;
        } else {
          T11 = CALL2(1,VARREF(YgooSmathYE),cF8717,YPchr((P)92));
          tmpF8718 = T11;
          if (tmpF8718 != YPfalse) {
            T9 = tmpF8718;
          } else {
            T10 = CALL2(1,VARREF(YgooSmathYE),cF8717,YPchr((P)34));
            T9 = T10;
          }
          if (T9 != YPfalse) {
            T13 = CALL2(1,VARREF(YgooSmacrosYpair),cF8717,lF8714);
            T14 = CALL2(1,VARREF(YgooSmathYA),iF8715,YPint((P)1));
            a405_0 = T13;
            a405_1 = T14;
            lF8714 = a405_0;
            iF8715 = a405_1;
            goto LOOP_405;
            T8 = T12;
          } else {
            T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF8717);
            T20 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYDstring_escape_chars),T21);
            ecF8719 = T20;
            if (ecF8719 != YPfalse) {
              T17 = CALL2(1,VARREF(YgooSmacrosYpair),ecF8719,lF8714);
              T18 = CALL2(1,VARREF(YgooSmathYA),iF8715,YPint((P)1));
              a405_0 = T17;
              a405_1 = T18;
              lF8714 = a405_0;
              iF8715 = a405_1;
              goto LOOP_405;
              T15 = T16;
            } else {
              T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_86),cF8717);
              T15 = T19;
            }
            T8 = T15;
          }
          T5 = T8;
        }
        T3 = T5;
      } else {
        T24 = CALL2(1,VARREF(YgooSmathYE),cF8716,YPchr((P)34));
        if (T24 != YPfalse) {
          T25 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF8714,iF8715);
          T23 = T25;
        } else {
          T27 = CALL2(1,VARREF(YgooSmacrosYpair),cF8716,lF8714);
          T28 = CALL2(1,VARREF(YgooSmathYA),iF8715,YPint((P)1));
          a405_0 = T27;
          a405_1 = T28;
          lF8714 = a405_0;
          iF8715 = a405_1;
          goto LOOP_405;
          T23 = T26;
        }
        T3 = T23;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_line),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gobble_line_35) {
  P port_;
  P cF8720;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(port_, 0);
  LOOP_406: {
    T5 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF8720 = T5;
    T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8720);
    if (T1 != YPfalse) {
      T0 = cF8720;
    } else {
      T3 = CALL2(1,VARREF(YgooSmathYE),cF8720,YPchr((P)10));
      if (T3 != YPfalse) {
        T2 = YPfalse;
      } else {
        goto LOOP_406;
        T2 = T4;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_define_sharp_macro_36) {
  P c_,proc_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  ARG(proc_, 1);
  T2 = CALL2(1,VARREF(Ylst),c_,proc_);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,VARREF(YgooSioSreadYTsharp_macrosT));
  T0 = VARSET(YgooSioSreadYTsharp_macrosT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P c_,port_;
  P probeF8723;
  P cF8722;
  P cF8721;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T10 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF8721 = T10;
  T7 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8721);
  if (T7 != YPfalse) {
    T8 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_93));
    T6 = T8;
  } else {
    T9 = CALL1(1,VARREF(YgooSmathYto_lower),cF8721);
    T6 = T9;
  }
  cF8722 = T6;
  T5 = CALL2(1,VARREF(YgooScolsSlstYassq),cF8722,VARREF(YgooSioSreadYTsharp_macrosT));
  probeF8723 = T5;
  if (probeF8723 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),probeF8723);
    T2 = CALL1(1,VARREF(Yhead),T3);
    T1 = CALL2(1,T2,cF8722,port_);
    T0 = T1;
  } else {
    T4 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_94),cF8722);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_38) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_39) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_40) {
  P c_,port_;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
UNLINK_STACK();
  QRET(VARREF(YgooSioSreadYDvert_proxy));
}

FUNCODEDEF(YgooSioSreadYgobble_nested_comment) {
  P port_;
  P x_2291F8727;
  P x_2290F8726;
  P cF8725;
  P found_slashQF8724;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(port_, 0);
  found_slashQF8724 = YPfalse;
  LOOP_407: {
    P a407_0;
    T10 = CALL1(1,VARREF(YgooSioSportYget),port_);
    cF8725 = T10;
    T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8725);
    if (T1 != YPfalse) {
      T0 = cF8725;
    } else {
      x_2290F8726 = cF8725;
      x_2291F8727 = VARREF(YgooSmacrosYEE);
      T3 = CALL2(1,x_2291F8727,x_2290F8726,YPchr((P)47));
      if (T3 != YPfalse) {
        a407_0 = YPtrue;
        found_slashQF8724 = a407_0;
        goto LOOP_407;
        T2 = T4;
      } else {
        T6 = CALL2(1,x_2291F8727,x_2290F8726,YPchr((P)35));
        if (T6 != YPfalse) {
          if (found_slashQF8724 != YPfalse) {
            T7 = YPfalse;
          } else {
            a407_0 = YPfalse;
            found_slashQF8724 = a407_0;
            goto LOOP_407;
            T7 = T8;
          }
          T5 = T7;
        } else {
          a407_0 = YPfalse;
          found_slashQF8724 = a407_0;
          goto LOOP_407;
          T5 = T9;
        }
        T2 = T5;
      }
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P c_,port_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSreadYgobble_nested_comment),port_);
  T0 = CALL1(1,VARREF(YgooSioSreadYsub_read),port_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P c_,port_;
  P tempF8730;
  P nameF8729;
  P cF8728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T16 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
  cF8728 = T16;
  T1 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8728);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_103));
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YgooSmathYalphaQ),cF8728);
    if (T4 != YPfalse) {
      T14 = CALL1(1,VARREF(YgooSioSreadYsub_read_carefully),port_);
      nameF8729 = T14;
      T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),nameF8729);
      T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
      T6 = CALL2(1,VARREF(YgooSmathYE),T7,YPint((P)1));
      if (T6 != YPfalse) {
        T5 = cF8728;
      } else {
        T13 = CALL2(1,VARREF(YgooScolsSlstYassq),nameF8729,VARREF(YgooSioSreadYDchar_long_names));
        tempF8730 = T13;
        if (tempF8730 != YPfalse) {
          T11 = CALL1(1,VARREF(Ytail),tempF8730);
          T10 = CALL1(1,VARREF(Yhead),T11);
          T9 = T10;
        } else {
          T12 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_104),nameF8729);
          T9 = T12;
        }
        T5 = T9;
      }
      T3 = T5;
    } else {
      T15 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T3 = T15;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL2(1,VARREF(YgooSioSreadYsub_read_list),c_,port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P c_,port_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  CALL1(1,VARREF(YgooSioSportYget),port_);
  T1 = CALL3(1,VARREF(YgooSioSreadYsub_read_seq),c_,VARREF(YgooSioSreadYDclose_bracket),port_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YgooScolsSvecYLvecG),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P c_,port_;
  P tmpF8732;
  P stringF8731;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T3 = CALL2(1,VARREF(YgooSioSreadYsub_read_token),YPchr((P)35),port_);
  stringF8731 = T3;
  T2 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),stringF8731);
  tmpF8732 = T2;
  if (tmpF8732 != YPfalse) {
    T0 = tmpF8732;
  } else {
    T1 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_108),stringF8731);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),c_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sub_read_token_48) {
  P c_,port_;
  P tmpF8736;
  P cF8735;
  P nF8734;
  P lF8733;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(c_, 0);
  ARG(port_, 1);
  T13 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),c_);
  T12 = CALL1(1,VARREF(Ylst),T13);
  lF8733 = T12;
  nF8734 = YPint((P)1);
  LOOP_408: {
    P a408_0,a408_1;
    T11 = CALL1(1,VARREF(YgooSioSportYpeek),port_);
    cF8735 = T11;
    T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),cF8735);
    tmpF8736 = T4;
    if (tmpF8736 != YPfalse) {
      T1 = tmpF8736;
    } else {
      T3 = CALL1(1,VARREF(YgooSmathYchar_Gascii),cF8735);
      T2 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YgooSioSreadYTread_terminatingQ_vectorT),T3);
      T1 = T2;
    }
    if (T1 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSreadYreverse_list_Gstring),lF8733,nF8734);
      T0 = T5;
    } else {
      T9 = CALL1(1,VARREF(YgooSioSportYget),port_);
      T8 = CALL1(1,VARREF(YgooSioSreadYpreferred_case),T9);
      T7 = CALL2(1,VARREF(YgooSmacrosYpair),T8,lF8733);
      T10 = CALL2(1,VARREF(YgooSmathYA),nF8734,YPint((P)1));
      a408_0 = T7;
      a408_1 = T10;
      lF8733 = a408_0;
      nF8734 = a408_1;
      goto LOOP_408;
      T0 = T6;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYE),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_token_50) {
  P string_,port_;
  P maybe_numberF8741;
  P tmpF8740;
  P tmpF8739;
  P tmpF8738;
  P cF8737;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(string_, 0);
  ARG(port_, 1);
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),string_,YPint((P)0));
  cF8737 = T8;
  T7 = CALL1(1,VARREF(YgooSmathYdigitQ),cF8737);
  tmpF8738 = T7;
  if (tmpF8738 != YPfalse) {
    T1 = tmpF8738;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYE),cF8737,YPchr((P)43));
    tmpF8739 = T6;
    if (tmpF8739 != YPfalse) {
      T2 = tmpF8739;
    } else {
      T5 = CALL2(1,VARREF(YgooSmathYE),cF8737,YPchr((P)45));
      tmpF8740 = T5;
      if (tmpF8740 != YPfalse) {
        T3 = tmpF8740;
      } else {
        T4 = CALL2(1,VARREF(YgooSmathYE),cF8737,YPchr((P)46));
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T20 = CALL1(1,VARREF(YgooScolsSstrYstr_to_num),string_);
    maybe_numberF8741 = T20;
    if (maybe_numberF8741 != YPfalse) {
      T9 = maybe_numberF8741;
    } else {
      T12 = FUNFAB(fun_49,1,string_);
      T11 = CALL2(1,VARREF(YgooStypesYanyQ),T12,VARREF(YgooSioSreadYDstrange_symbol_names));
      if (T11 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
        T13 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T14);
        T10 = T13;
      } else {
        T16 = CALL2(1,VARREF(YgooSmathYE),string_,LITREF(lit_116));
        if (T16 != YPfalse) {
          T18 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
          T17 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T18);
          T15 = T17;
        } else {
          T19 = CALL3(1,VARREF(YgooSioSreadYreading_error),port_,LITREF(lit_117),string_);
          T15 = T19;
        }
        T10 = T15;
      }
      T9 = T10;
    }
    T0 = T9;
  } else {
    T22 = CALL1(1,VARREF(YgooSioSreadYmake_immutableX),string_);
    T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T22);
    T0 = T21;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reading_error_51) {
  P port_,message_,irritants_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(port_, 0);
  ARG(message_, 1);
  NARGS(irritants_, 2);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),message_,LITREF(lit_122));
  T3 = CALL1(1,VARREF(Ylst),port_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),irritants_,T3);
  T0 = CALL2(1,VARREF(Yerror),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_warn_52) {
  P string_,irritants_and_port_;
LINK_STACK();
  ARG(string_, 0);
  NARGS(irritants_and_port_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_reverse_list_Gstring_53) {
  P l_,n_;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  ARG(n_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),l_);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_make_immutableX_54) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(x_);
}

P YgooSioSreadY___main_0___() {
  P str10496F8743;
  P sub_read_whitespaceF8742;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103;
DEFCREGS();
  lit_0 = YPPsym((P)"read");
  lit_1 = YPPlist(1,YPPsym((P)"port"));
  lit_2 = YPsb((P)"discarding extraneous right parenthesis");
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YgooSioSportYLin_portG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_0 = YPmet(FUNCODEREF(fun_read_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(27));
  T2 = VARREF_OR(YgooSconditionsYread,YPfalse);
  T3 = fun_read_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYread,T1);
  lit_3 = YPPsym((P)"read-from-string");
  lit_4 = YPPlist(1,YPPsym((P)"x"));
  lit_5 = Ynil;
  T6 = YPsig(LITREF(lit_5),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T6,ENVNUL,PNUL,sloc(40));
  T5 = YPsig(LITREF(lit_5),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T5,ENVNUL,PNUL,sloc(40));
  T4 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_from_string_3 = YPmet(FUNCODEREF(fun_read_from_string_3),LITREF(lit_3),T4,ENVNUL,PNUL,sloc(39));
  T8 = VARREF_OR(YgooSioSreadYread_from_string,YPfalse);
  T9 = fun_read_from_string_3;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSioSreadYread_from_string,T7);
  lit_6 = YPPsym((P)"sub-read-carefully");
  lit_7 = YPPlist(1,YPPsym((P)"port"));
  lit_8 = YPsb((P)"unexpected end of file");
  T10 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_carefully_4 = YPmet(FUNCODEREF(fun_sub_read_carefully_4),LITREF(lit_6),T10,ENVNUL,PNUL,sloc(42));
  T12 = VARREF_OR(YgooSioSreadYsub_read_carefully,YPfalse);
  T13 = fun_sub_read_carefully_4;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSioSreadYsub_read_carefully,T11);
  lit_9 = YPPsym((P)"<reader-token>");
  T15 = (P)YPpair(VARREF(YLanyG),Ynil);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_9),T15);
  VARSET(YgooSioSreadYLreader_tokenG,T14);
  lit_10 = YPPsym((P)"token-message");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YgooSioSreadYLreader_tokenG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_token_message_5 = YPmet(FUNCODEREF(fun_token_message_5),LITREF(lit_10),T16,ENVNUL,PNUL,sloc(52));
  T18 = VARREF_OR(YgooSioSreadYtoken_message,YPfalse);
  T19 = fun_token_message_5;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSioSreadYtoken_message,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSioSreadYLreader_tokenG),VARREF(YgooSioSreadYtoken_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"make-reader-token");
  lit_13 = YPPlist(1,YPPsym((P)"message"));
  T20 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_reader_token_6 = YPmet(FUNCODEREF(fun_make_reader_token_6),LITREF(lit_12),T20,ENVNUL,PNUL,sloc(54));
  T22 = VARREF_OR(YgooSioSreadYmake_reader_token,YPfalse);
  T23 = fun_make_reader_token_6;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YgooSioSreadYmake_reader_token,T21);
  lit_14 = YPPsym((P)"reader-token?");
  lit_15 = YPPlist(1,YPPsym((P)"form"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_reader_tokenQ_7 = YPmet(FUNCODEREF(fun_reader_tokenQ_7),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(57));
  T26 = VARREF_OR(YgooSioSreadYreader_tokenQ,YPfalse);
  T27 = fun_reader_tokenQ_7;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSioSreadYreader_tokenQ,T25);
  lit_16 = YPsb((P)"unexpected right parenthesis");
  T28 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_16));
  VARSET(YgooSioSreadYDclose_paren,T28);
  lit_17 = YPsb((P)"unexpected right bracket");
  T29 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_17));
  VARSET(YgooSioSreadYDclose_bracket,T29);
  lit_18 = YPsb((P)"unexpected right curly");
  T30 = XCALL1(1,VARREF(YgooSioSreadYmake_reader_token),LITREF(lit_18));
  VARSET(YgooSioSreadYDclose_curly,T30);
  lit_19 = YPPsym((P)"sub-read");
  lit_20 = YPPlist(1,YPPsym((P)"port"));
  T31 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sub_read_8 = YPmet(FUNCODEREF(fun_sub_read_8),LITREF(lit_19),T31,ENVNUL,PNUL,sloc(66));
  T33 = VARREF_OR(YgooSioSreadYsub_read,YPfalse);
  T34 = fun_sub_read_8;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YgooSioSreadYsub_read,T32);
  lit_21 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_22 = YPsb((P)"illegal character read");
  T35 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T35,ENVNUL,PNUL,sloc(77));
  T37 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T38 = fun_9;
  T36 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T37,T38);
  VARSET(YgooSioSreadYTread_dispatch_vectorT,T36);
  T40 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T39 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T40,YPtrue);
  VARSET(YgooSioSreadYTread_terminatingQ_vectorT,T39);
  lit_23 = YPPsym((P)"set-standard-syntax!");
  lit_24 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"reader"));
  T41 = YPsig(LITREF(lit_24),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_syntaxX_10 = YPmet(FUNCODEREF(fun_set_standard_syntaxX_10),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(81));
  T43 = VARREF_OR(YgooSioSreadYset_standard_syntaxX,YPfalse);
  T44 = fun_set_standard_syntaxX_10;
  T42 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T43,T44);
  VARSET(YgooSioSreadYset_standard_syntaxX,T42);
  lit_25 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_26 = YPPlist(1,YPPsym((P)"c"));
  T46 = YPsig(LITREF(lit_25),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T46,ENVNUL,PNUL,sloc(85));
  T45 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T45,ENVNUL,PNUL,sloc(86));
  T49 = fun_11;
  sub_read_whitespaceF8742 = T49;
  T48 = FUNFAB(fun_12,1,sub_read_whitespaceF8742);
  T47 = XCALL2(1,VARREF(YgooSmacrosYdo),T48,VARREF(YgooScolsSstrYascii_whitespaces));
  lit_27 = YPPsym((P)"flush-whitespace");
  lit_28 = YPPlist(1,YPPsym((P)"port"));
  T50 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYflush_whitespace = YPmet(FUNCODEREF(YgooSioSreadYflush_whitespace),LITREF(lit_27),T50,ENVNUL,PNUL,sloc(89));
  T51 = YgooSioSreadYflush_whitespace;
  VARSET(YgooSioSreadYflush_whitespace,T51);
  lit_29 = YPPsym((P)"read-delimited-list");
  lit_30 = YPPlist(2,YPPsym((P)"endchar"),YPPsym((P)"port"));
  T52 = YPsig(LITREF(lit_30),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_delimited_list = YPmet(FUNCODEREF(YgooSioSreadYread_delimited_list),LITREF(lit_29),T52,ENVNUL,PNUL,sloc(97));
  T53 = YgooSioSreadYread_delimited_list;
  VARSET(YgooSioSreadYread_delimited_list,T53);
  lit_31 = YPPsym((P)"sub-read-constituent");
  lit_32 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T54 = YPsig(LITREF(lit_32),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_constituent = YPmet(FUNCODEREF(YgooSioSreadYsub_read_constituent),LITREF(lit_31),T54,ENVNUL,PNUL,sloc(105));
  T55 = YgooSioSreadYsub_read_constituent;
  VARSET(YgooSioSreadYsub_read_constituent,T55);
  lit_33 = YPsb((P)"!$%&*+-./0123456789:<=>?@^_~ABCDEFGHIJKLM");
  lit_34 = YPsb((P)"NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
  lit_35 = YPPlist(1,YPPsym((P)"c"));
  T56 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T56,ENVNUL,PNUL,sloc(112));
  T59 = XCALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_33),LITREF(lit_34));
  str10496F8743 = T59;
  T58 = fun_16;
  T57 = XCALL2(1,VARREF(YgooSmacrosYdo),T58,str10496F8743);
  lit_36 = YPPsym((P)"set-standard-read-macro!");
  lit_37 = YPPlist(3,YPPsym((P)"char"),YPPsym((P)"terminating?"),YPPsym((P)"proc"));
  T60 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLfunG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_set_standard_read_macroX_17 = YPmet(FUNCODEREF(fun_set_standard_read_macroX_17),LITREF(lit_36),T60,ENVNUL,PNUL,sloc(117));
  T62 = VARREF_OR(YgooSioSreadYset_standard_read_macroX,YPfalse);
  T63 = fun_set_standard_read_macroX_17;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YgooSioSreadYset_standard_read_macroX,T61);
  lit_38 = YPPsym((P)"get-standard-read-macro");
  lit_39 = YPPlist(1,YPPsym((P)"char"));
  T64 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YLchrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_get_standard_read_macro_18 = YPmet(FUNCODEREF(fun_get_standard_read_macro_18),LITREF(lit_38),T64,ENVNUL,PNUL,sloc(120));
  T66 = VARREF_OR(YgooSioSreadYget_standard_read_macro,YPfalse);
  T67 = fun_get_standard_read_macro_18;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YgooSioSreadYget_standard_read_macro,T65);
  lit_40 = YPPsym((P)"sub-read-vertical");
  lit_41 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_42 = YPsb((P)"|");
  T68 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_vertical_19 = YPmet(FUNCODEREF(fun_sub_read_vertical_19),LITREF(lit_40),T68,ENVNUL,PNUL,sloc(123));
  T70 = VARREF_OR(YgooSioSreadYsub_read_vertical,YPfalse);
  T71 = fun_sub_read_vertical_19;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YgooSioSreadYsub_read_vertical,T69);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)124),YPtrue,VARREF(YgooSioSreadYsub_read_vertical));
  lit_43 = YPPsym((P)"sub-read-backslash");
  lit_44 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_45 = YPsb((P)"\\");
  T72 = YPsig(LITREF(lit_44),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_backslash_20 = YPmet(FUNCODEREF(fun_sub_read_backslash_20),LITREF(lit_43),T72,ENVNUL,PNUL,sloc(128));
  T74 = VARREF_OR(YgooSioSreadYsub_read_backslash,YPfalse);
  T75 = fun_sub_read_backslash_20;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YgooSioSreadYsub_read_backslash,T73);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)92),YPtrue,VARREF(YgooSioSreadYsub_read_backslash));
  lit_46 = YPsb((P)"|");
  T76 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_46));
  VARSET(YgooSioSreadYDvert_sym,T76);
  lit_47 = YPsb((P)"vert-proxy");
  T77 = XCALL1(1,VARREF(Ylst),LITREF(lit_47));
  VARSET(YgooSioSreadYDvert_proxy,T77);
  lit_48 = YPPsym((P)"sub-read-list-eof-error");
  lit_49 = YPPlist(1,YPPsym((P)"port"));
  lit_50 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T78 = YPsig(LITREF(lit_49),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYsub_read_list_eof_error = YPmet(FUNCODEREF(YgooSioSreadYsub_read_list_eof_error),LITREF(lit_48),T78,ENVNUL,PNUL,sloc(136));
  T79 = YgooSioSreadYsub_read_list_eof_error;
  VARSET(YgooSioSreadYsub_read_list_eof_error,T79);
  lit_51 = YPPsym((P)"sub-read-list");
  lit_52 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"p"));
  lit_53 = YPPsym((P)"read-next");
  lit_54 = YPPlist(4,YPPsym((P)"c"),YPPsym((P)"prev"),YPPsym((P)"line"),YPPsym((P)"form"));
  T81 = YPsig(LITREF(lit_54),YPPlist(4,VARREF(YLchrG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_read_next_22 = YPmet(FUNCODEREF(fun_read_next_22),LITREF(lit_53),T81,ENVNUL,PNUL,sloc(146));
  T80 = YPsig(LITREF(lit_52),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_list_23 = YPmet(FUNCODEREF(fun_sub_read_list_23),LITREF(lit_51),T80,ENVNUL,PNUL,sloc(139));
  T83 = VARREF_OR(YgooSioSreadYsub_read_list,YPfalse);
  T84 = fun_sub_read_list_23;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSioSreadYsub_read_list,T82);
  lit_55 = YPPsym((P)"sub-read-seq");
  lit_56 = YPPlist(3,YPPsym((P)"c"),YPPsym((P)"e"),YPPsym((P)"port"));
  lit_57 = YPsb((P)"end of file inside list -- unbalanced parentheses");
  T85 = YPsig(LITREF(lit_56),YPPlist(3,VARREF(YLchrG),VARREF(YLanyG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_sub_read_seq_24 = YPmet(FUNCODEREF(fun_sub_read_seq_24),LITREF(lit_55),T85,ENVNUL,PNUL,sloc(163));
  T87 = VARREF_OR(YgooSioSreadYsub_read_seq,YPfalse);
  T88 = fun_sub_read_seq_24;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSioSreadYsub_read_seq,T86);
  lit_58 = YPPsym((P)"sub-read-brackets");
  lit_59 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_60 = YPPsym((P)"elt");
  lit_61 = Ynil;
  lit_62 = YPPsym((P)"*");
  lit_63 = YPPsym((P)"sub*");
  lit_64 = YPPsym((P)"sub");
  lit_65 = YPsb((P)"invalid [ ... ] form");
  T89 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_brackets_25 = YPmet(FUNCODEREF(fun_sub_read_brackets_25),LITREF(lit_58),T89,ENVNUL,PNUL,sloc(172));
  T91 = VARREF_OR(YgooSioSreadYsub_read_brackets,YPfalse);
  T92 = fun_sub_read_brackets_25;
  T90 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T91,T92);
  VARSET(YgooSioSreadYsub_read_brackets,T90);
  lit_66 = YPsb((P)"\\");
  T93 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),LITREF(lit_66));
  VARSET(YgooSioSreadYbs_sym,T93);
  lit_67 = YPPsym((P)"sub-read-curlies");
  lit_68 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_69 = YPPsym((P)"fun");
  lit_70 = YPPsym((P)"seq");
  T94 = YPsig(LITREF(lit_68),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_curlies_26 = YPmet(FUNCODEREF(fun_sub_read_curlies_26),LITREF(lit_67),T94,ENVNUL,PNUL,sloc(183));
  T96 = VARREF_OR(YgooSioSreadYsub_read_curlies,YPfalse);
  T97 = fun_sub_read_curlies_26;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YgooSioSreadYsub_read_curlies,T95);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)40),YPtrue,VARREF(YgooSioSreadYsub_read_list));
  lit_71 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T98 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T98,ENVNUL,PNUL,sloc(192));
  T99 = fun_27;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)41),YPtrue,T99);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)123),YPtrue,VARREF(YgooSioSreadYsub_read_curlies));
  lit_72 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T100 = YPsig(LITREF(lit_72),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T100,ENVNUL,PNUL,sloc(196));
  T101 = fun_28;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)125),YPtrue,T101);
  T103 = XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)91),YPtrue,VARREF(YgooSioSreadYsub_read_brackets));
  T102 = T103;
  return T102;
}

P YgooSioSreadY___main_1___() {
  P number_sharp_macroF8745;
  P vecF8744;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
DEFCREGS();
  lit_73 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T0 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T0,ENVNUL,PNUL,sloc(200));
  T1 = fun_29;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)93),YPtrue,T1);
  lit_74 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_75 = YPPsym((P)"quote");
  T2 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T2,ENVNUL,PNUL,sloc(203));
  T3 = fun_30;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)39),YPtrue,T3);
  lit_76 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_77 = YPPsym((P)"quasiquote");
  T4 = YPsig(LITREF(lit_76),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T4,ENVNUL,PNUL,sloc(206));
  T5 = fun_31;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)96),YPtrue,T5);
  lit_78 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_79 = YPsb((P)"end of file after ,");
  lit_80 = YPPsym((P)"unquote-splicing");
  lit_81 = YPPsym((P)"unquote");
  T6 = YPsig(LITREF(lit_78),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T6,ENVNUL,PNUL,sloc(210));
  T7 = fun_32;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)44),YPtrue,T7);
  T14 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T13 = XCALL2(1,VARREF(YgooScolsScolxYfillX),T14,YPfalse);
  vecF8744 = T13;
  T8 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)116));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)9),vecF8744,T8);
  T9 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)102));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)12),vecF8744,T9);
  T10 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)114));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)13),vecF8744,T10);
  T11 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)110));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)10),vecF8744,T11);
  T12 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF8744);
  VARSET(YgooSioSreadYDstring_escape_chars,T12);
  lit_82 = YPPsym((P)"read-string-literal");
  lit_83 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_84 = YPsb((P)"end of file within a string");
  lit_85 = YPsb((P)"end of file within a string");
  lit_86 = YPsb((P)"invalid escaped character in string");
  T15 = YPsig(LITREF(lit_83),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSioSreadYread_string_literal = YPmet(FUNCODEREF(YgooSioSreadYread_string_literal),LITREF(lit_82),T15,ENVNUL,PNUL,sloc(228));
  T16 = YgooSioSreadYread_string_literal;
  VARSET(YgooSioSreadYread_string_literal,T16);
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)34),YPtrue,VARREF(YgooSioSreadYread_string_literal));
  lit_87 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T17 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T17,ENVNUL,PNUL,sloc(254));
  T18 = fun_34;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)59),YPtrue,T18);
  lit_88 = YPPsym((P)"gobble-line");
  lit_89 = YPPlist(1,YPPsym((P)"port"));
  T19 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gobble_line_35 = YPmet(FUNCODEREF(fun_gobble_line_35),LITREF(lit_88),T19,ENVNUL,PNUL,sloc(256));
  T21 = VARREF_OR(YgooSioSreadYgobble_line,YPfalse);
  T22 = fun_gobble_line_35;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSioSreadYgobble_line,T20);
  VARSET(YgooSioSreadYTsharp_macrosT,Ynil);
  lit_90 = YPPsym((P)"define-sharp-macro");
  lit_91 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"proc"));
  T23 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_define_sharp_macro_36 = YPmet(FUNCODEREF(fun_define_sharp_macro_36),LITREF(lit_90),T23,ENVNUL,PNUL,sloc(263));
  T25 = VARREF_OR(YgooSioSreadYdefine_sharp_macro,YPfalse);
  T26 = fun_define_sharp_macro_36;
  T24 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T25,T26);
  VARSET(YgooSioSreadYdefine_sharp_macro,T24);
  lit_92 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_93 = YPsb((P)"end of file after #");
  lit_94 = YPsb((P)"unknown # syntax");
  T27 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T27,ENVNUL,PNUL,sloc(268));
  T28 = fun_37;
  XCALL3(1,VARREF(YgooSioSreadYset_standard_read_macroX),YPchr((P)35),YPfalse,T28);
  lit_95 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T29 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T29,ENVNUL,PNUL,sloc(278));
  T30 = fun_38;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)102),T30);
  lit_96 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T31 = YPsig(LITREF(lit_96),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T31,ENVNUL,PNUL,sloc(280));
  T32 = fun_39;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)116),T32);
  lit_97 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T33 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T33,ENVNUL,PNUL,sloc(282));
  T34 = fun_40;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)124),T34);
  lit_98 = YPPsym((P)"gobble-nested-comment");
  lit_99 = YPPlist(1,YPPsym((P)"port"));
  T35 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YgooSioSreadYgobble_nested_comment = YPmet(FUNCODEREF(YgooSioSreadYgobble_nested_comment),LITREF(lit_98),T35,ENVNUL,PNUL,sloc(284));
  T36 = YgooSioSreadYgobble_nested_comment;
  VARSET(YgooSioSreadYgobble_nested_comment,T36);
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T37 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T37,ENVNUL,PNUL,sloc(295));
  T38 = fun_42;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)47),T38);
  lit_101 = YPPlist(5,YPPlist(2,YPPsym((P)"tab"),YPchr((P)9)),YPPlist(2,YPPsym((P)"page"),YPchr((P)12)),YPPlist(2,YPPsym((P)"return"),YPchr((P)13)),YPPlist(2,YPPsym((P)"newline"),YPchr((P)10)),YPPlist(2,YPPsym((P)"space"),YPchr((P)32)));
  VARSET(YgooSioSreadYDchar_long_names,LITREF(lit_101));
  lit_102 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_103 = YPsb((P)"end of file after #\\");
  lit_104 = YPsb((P)"unknown #\\ name");
  T39 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T39,ENVNUL,PNUL,sloc(306));
  T40 = fun_43;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)92),T40);
  lit_105 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T41 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T41,ENVNUL,PNUL,sloc(323));
  T42 = fun_44;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)40),T42);
  lit_106 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T43 = YPsig(LITREF(lit_106),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T43,ENVNUL,PNUL,sloc(329));
  T44 = fun_45;
  XCALL2(1,VARREF(YgooSioSreadYdefine_sharp_macro),YPchr((P)91),T44);
  lit_107 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  lit_108 = YPsb((P)"unsupported number syntax");
  lit_109 = YPPlist(1,YPPsym((P)"c"));
  lit_110 = YPPlist(4,YPchr((P)98),YPchr((P)111),YPchr((P)100),YPchr((P)120));
  T46 = YPsig(LITREF(lit_107),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T46,ENVNUL,PNUL,sloc(334));
  T45 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T45,ENVNUL,PNUL,sloc(338));
  T49 = fun_46;
  number_sharp_macroF8745 = T49;
  T48 = FUNFAB(fun_47,1,number_sharp_macroF8745);
  T47 = XCALL2(1,VARREF(YgooSmacrosYdo),T48,LITREF(lit_110));
  lit_111 = YPPsym((P)"sub-read-token");
  lit_112 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"port"));
  T50 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLchrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sub_read_token_48 = YPmet(FUNCODEREF(fun_sub_read_token_48),LITREF(lit_111),T50,ENVNUL,PNUL,sloc(343));
  T52 = VARREF_OR(YgooSioSreadYsub_read_token,YPfalse);
  T53 = fun_sub_read_token_48;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YgooSioSreadYsub_read_token,T51);
  lit_113 = YPPsym((P)"parse-token");
  lit_114 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"port"));
  lit_115 = YPPlist(1,YPPsym((P)"x"));
  lit_116 = YPsb((P)".");
  lit_117 = YPsb((P)"unsupported number syntax");
  T55 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T55,ENVNUL,PNUL,sloc(364));
  T54 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLstrG),VARREF(YgooSioSportYLportG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_token_50 = YPmet(FUNCODEREF(fun_parse_token_50),LITREF(lit_113),T54,ENVNUL,PNUL,sloc(354));
  T57 = VARREF_OR(YgooSioSreadYparse_token,YPfalse);
  T58 = fun_parse_token_50;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YgooSioSreadYparse_token,T56);
  lit_118 = YPPlist(9,YPsb((P)"+"),YPsb((P)"-"),YPsb((P)"..."),YPsb((P)"1st"),YPsb((P)"2nd"),YPsb((P)"3rd"),YPsb((P)"1+"),YPsb((P)"1-"),YPsb((P)"->"));
  VARSET(YgooSioSreadYDstrange_symbol_names,LITREF(lit_118));
  lit_119 = YPPsym((P)"t");
  T62 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),LITREF(lit_119));
  T61 = XCALL2(1,VARREF(YgooSmacrosYelt),T62,YPint((P)0));
  T60 = XCALL2(1,VARREF(YgooSmathYE),T61,YPchr((P)84));
  if (T60 != YPfalse) {
    T59 = VARREF(YgooSmathYto_upper);
  } else {
    T59 = VARREF(YgooSmathYto_lower);
  }
  VARSET(YgooSioSreadYpreferred_case,T59);
  lit_120 = YPPsym((P)"reading-error");
  lit_121 = YPPlist(3,YPPsym((P)"port"),YPPsym((P)"message"),YPPsym((P)"irritants"));
  lit_122 = YPsb((P)": %=");
  T63 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YgooSioSportYLportG),VARREF(YLstrG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reading_error_51 = YPmet(FUNCODEREF(fun_reading_error_51),LITREF(lit_120),T63,ENVNUL,PNUL,sloc(391));
  T65 = VARREF_OR(YgooSioSreadYreading_error,YPfalse);
  T66 = fun_reading_error_51;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YgooSioSreadYreading_error,T64);
  lit_123 = YPPsym((P)"warn");
  lit_124 = YPPlist(2,YPPsym((P)"string"),YPPsym((P)"irritants-and-port"));
  T67 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_warn_52 = YPmet(FUNCODEREF(fun_warn_52),LITREF(lit_123),T67,ENVNUL,PNUL,sloc(395));
  T69 = VARREF_OR(YgooSioSreadYwarn,YPfalse);
  T70 = fun_warn_52;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YgooSioSreadYwarn,T68);
  lit_125 = YPPsym((P)"reverse-list->string");
  lit_126 = YPPlist(2,YPPsym((P)"l"),YPPsym((P)"n"));
  T71 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YLlstG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_reverse_list_Gstring_53 = YPmet(FUNCODEREF(fun_reverse_list_Gstring_53),LITREF(lit_125),T71,ENVNUL,PNUL,sloc(403));
  T73 = VARREF_OR(YgooSioSreadYreverse_list_Gstring,YPfalse);
  T74 = fun_reverse_list_Gstring_53;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooSioSreadYreverse_list_Gstring,T72);
  lit_127 = YPPsym((P)"make-immutable!");
  lit_128 = YPPlist(1,YPPsym((P)"x"));
  T75 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_make_immutableX_54 = YPmet(FUNCODEREF(fun_make_immutableX_54),LITREF(lit_127),T75,ENVNUL,PNUL,sloc(406));
  T77 = VARREF_OR(YgooSioSreadYmake_immutableX,YPfalse);
  T78 = fun_make_immutableX_54;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooSioSreadYmake_immutableX,T76);
  T79 = YPfalse;
  return T79;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
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
  {&module_info_gooSconditions},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSioSport},
  {&module_info_gooScols},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"add-prop", &module_info_gooSclass, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
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
  {"<error>", &module_info_gooSconditions, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
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
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
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
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
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
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
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
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
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
  {"default-handler-description", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
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
  {"ready?", &module_info_gooSioSport, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
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
  {"key-test", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
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
  {"~==", &module_info_gooSmath, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
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
  {"mod", &module_info_gooSmath, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
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
  {"<unbound-error>", &module_info_gooSconditions, NULL},
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
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
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
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
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
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
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
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
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
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
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
  {"%app-filename", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
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
  {"<restart>", &module_info_gooSconditions, NULL},
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
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
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
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
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
  {"set-standard-read-macro!", CVAR, &YgooSioSreadYset_standard_read_macroX},
  {"gobble-nested-comment", CVAR, &YgooSioSreadYgobble_nested_comment},
  {"reader-token?", CVAR, &YgooSioSreadYreader_tokenQ},
  {"$char-long-names", CVAR, &YgooSioSreadYDchar_long_names},
  {"$vert-sym", CVAR, &YgooSioSreadYDvert_sym},
  {"bs-sym", CVAR, &YgooSioSreadYbs_sym},
  {"*read-terminating?-vector*", CVAR, &YgooSioSreadYTread_terminatingQ_vectorT},
  {"sub-read-curlies", CVAR, &YgooSioSreadYsub_read_curlies},
  {"$close-curly", CVAR, &YgooSioSreadYDclose_curly},
  {"$close-bracket", CVAR, &YgooSioSreadYDclose_bracket},
  {"<reader-token>", CVAR, &YgooSioSreadYLreader_tokenG},
  {"make-immutable!", CVAR, &YgooSioSreadYmake_immutableX},
  {"define-sharp-macro", CVAR, &YgooSioSreadYdefine_sharp_macro},
  {"sub-read-token", CVAR, &YgooSioSreadYsub_read_token},
  {"read-string-literal", CVAR, &YgooSioSreadYread_string_literal},
  {"warn", CVAR, &YgooSioSreadYwarn},
  {"sub-read-constituent", CVAR, &YgooSioSreadYsub_read_constituent},
  {"make-reader-token", CVAR, &YgooSioSreadYmake_reader_token},
  {"gobble-line", CVAR, &YgooSioSreadYgobble_line},
  {"$vert-proxy", CVAR, &YgooSioSreadYDvert_proxy},
  {"sub-read-vertical", CVAR, &YgooSioSreadYsub_read_vertical},
  {"*read-dispatch-vector*", CVAR, &YgooSioSreadYTread_dispatch_vectorT},
  {"read-delimited-list", CVAR, &YgooSioSreadYread_delimited_list},
  {"*sharp-macros*", CVAR, &YgooSioSreadYTsharp_macrosT},
  {"sub-read-carefully", CVAR, &YgooSioSreadYsub_read_carefully},
  {"sub-read", CVAR, &YgooSioSreadYsub_read},
  {"$strange-symbol-names", CVAR, &YgooSioSreadYDstrange_symbol_names},
  {"parse-token", CVAR, &YgooSioSreadYparse_token},
  {"sub-read-brackets", CVAR, &YgooSioSreadYsub_read_brackets},
  {"$string-escape-chars", CVAR, &YgooSioSreadYDstring_escape_chars},
  {"get-standard-read-macro", CVAR, &YgooSioSreadYget_standard_read_macro},
  {"set-standard-syntax!", CVAR, &YgooSioSreadYset_standard_syntaxX},
  {"sub-read-list", CVAR, &YgooSioSreadYsub_read_list},
  {"sub-read-backslash", CVAR, &YgooSioSreadYsub_read_backslash},
  {"---main-0---", PVAR, NULL},
  {"read-from-string", CVAR, &YgooSioSreadYread_from_string},
  {"$close-paren", CVAR, &YgooSioSreadYDclose_paren},
  {"---main-1---", PVAR, NULL},
  {"flush-whitespace", CVAR, &YgooSioSreadYflush_whitespace},
  {"reverse-list->string", CVAR, &YgooSioSreadYreverse_list_Gstring},
  {"token-message", CVAR, &YgooSioSreadYtoken_message},
  {"sub-read-list-eof-error", CVAR, &YgooSioSreadYsub_read_list_eof_error},
  {"preferred-case", CVAR, &YgooSioSreadYpreferred_case},
  {"sub-read-seq", CVAR, &YgooSioSreadYsub_read_seq},
  {"reading-error", CVAR, &YgooSioSreadYreading_error},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"set-standard-read-macro!", NULL},
  {"$char-long-names", NULL},
  {"read", NULL},
  {"get-standard-read-macro", NULL},
  {"read-delimited-list", NULL},
  {"read-from-string", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSioSread;
MODULE_INFO module_info_gooSioSread = {
  "goo/io/read",
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
extern void load_module_gooSconditions (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSioSport (void);
extern void load_module_gooScols (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_gooSioSread (void);

void load_module_gooSioSread (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSconditions();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSioSport();
  load_module_gooScols();
  load_module_gooScolsSlst();

  (P)YgooSioSreadY___main_0___();
  (P)YgooSioSreadY___main_1___();

}

/* END OF GENERATED CODE. */
