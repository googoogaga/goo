/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/conditions");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/conditions */

DEF(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
DEF(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
DEF(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
DEF(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
DEF(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yas_error,"goo/boot","as-error");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yinternal_error,"goo/boot","internal-error");
DEF(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DEF(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
DEF(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
DEF(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYG,"goo/mag",">");
DEF(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
DEF(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
DEF(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
DEF(YgooSconditionsYLincongruent_method_errorG,"goo/conditions","<incongruent-method-error>");
DEF(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(YgooSconditionsYhandler_info,"goo/conditions","handler-info");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YLflatG,"goo/boot","<flat>");
DEF(YgooSconditionsYincongruent_method_error_method,"goo/conditions","incongruent-method-error-method");
DEF(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
DEF(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YgooSconditionsYhandler_activeQ,"goo/conditions","handler-active?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
DEF(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
DEF(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
DEF(YgooSconditionsYincongruent_method_error_generic,"goo/conditions","incongruent-method-error-generic");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
DEF(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
DEF(YgooSconditionsYLcpl_errorG,"goo/conditions","<cpl-error>");
DEF(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
DEF(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
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
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
DEF(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
DEF(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSclassYTreport_prop_unbound_errorsQT,"goo/class","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YOallQ,"goo/boot","@all?");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
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
DEF(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
DEF(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
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
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
DEF(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YgooSconditionsYcondition_message_setter,"goo/conditions","condition-message-setter");
DEF(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
DEF(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YgooSconditionsYsignal_handler_list,"goo/conditions","signal-handler-list");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YgooSconditionsYhandler_condition_type,"goo/conditions","handler-condition-type");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
DEF(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSioSportYport_filename,"goo/io/port","port-filename");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YgooSconditionsYhandler_test,"goo/conditions","handler-test");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(Yhead,"goo/boot","head");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YgooSconditionsYcondition_arguments_setter,"goo/conditions","condition-arguments-setter");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSmathYC,"goo/math","^");
DEF(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
DYNDEF(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
DEF(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
DEF(YgooSconditionsYdo_handlers_of_type,"goo/conditions","do-handlers-of-type");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
DEF(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
DEF(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
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
DEF(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
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
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
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
DEF(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
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
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_98);
DEFLIT(lit_138);
DEFLIT(lit_200);
DEFLIT(lit_169);
DEFLIT(lit_152);
DEFLIT(lit_148);
DEFLIT(lit_78);
DEFLIT(lit_228);
DEFLIT(lit_177);
DEFLIT(lit_229);
DEFLIT(lit_25);
DEFLIT(lit_47);
DEFLIT(lit_110);
DEFLIT(lit_182);
DEFLIT(lit_4);
DEFLIT(lit_207);
DEFLIT(lit_79);
DEFLIT(lit_37);
DEFLIT(lit_184);
DEFLIT(lit_215);
DEFLIT(lit_185);
DEFLIT(lit_230);
DEFLIT(lit_206);
DEFLIT(lit_87);
DEFLIT(lit_175);
DEFLIT(lit_6);
DEFLIT(lit_238);
DEFLIT(lit_190);
DEFLIT(lit_165);
DEFLIT(lit_134);
DEFLIT(lit_81);
DEFLIT(lit_119);
DEFLIT(lit_39);
DEFLIT(lit_139);
DEFLIT(lit_85);
DEFLIT(lit_16);
DEFLIT(lit_204);
DEFLIT(lit_166);
DEFLIT(lit_126);
DEFLIT(lit_89);
DEFLIT(lit_174);
DEFLIT(lit_113);
DEFLIT(lit_170);
DEFLIT(lit_111);
DEFLIT(lit_214);
DEFLIT(lit_222);
DEFLIT(lit_75);
DEFLIT(lit_189);
DEFLIT(lit_127);
DEFLIT(lit_235);
DEFLIT(lit_53);
DEFLIT(lit_130);
DEFLIT(lit_202);
DEFLIT(lit_212);
DEFLIT(lit_18);
DEFLIT(lit_168);
DEFLIT(lit_100);
DEFLIT(lit_51);
DEFLIT(lit_116);
DEFLIT(lit_109);
DEFLIT(lit_70);
DEFLIT(lit_164);
DEFLIT(lit_84);
DEFLIT(lit_209);
DEFLIT(lit_123);
DEFLIT(lit_108);
DEFLIT(lit_88);
DEFLIT(lit_221);
DEFLIT(lit_117);
DEFLIT(lit_64);
DEFLIT(lit_120);
DEFLIT(lit_121);
DEFLIT(lit_226);
DEFLIT(lit_90);
DEFLIT(lit_141);
DEFLIT(lit_30);
DEFLIT(lit_80);
DEFLIT(lit_74);
DEFLIT(lit_172);
DEFLIT(lit_125);
DEFLIT(lit_15);
DEFLIT(lit_13);
DEFLIT(lit_136);
DEFLIT(lit_93);
DEFLIT(lit_145);
DEFLIT(lit_178);
DEFLIT(lit_38);
DEFLIT(lit_176);
DEFLIT(lit_11);
DEFLIT(lit_92);
DEFLIT(lit_95);
DEFLIT(lit_149);
DEFLIT(lit_157);
DEFLIT(lit_181);
DEFLIT(lit_151);
DEFLIT(lit_160);
DEFLIT(lit_173);
DEFLIT(lit_218);
DEFLIT(lit_96);
DEFLIT(lit_42);
DEFLIT(lit_122);
DEFLIT(lit_197);
DEFLIT(lit_45);
DEFLIT(lit_83);
DEFLIT(lit_131);
DEFLIT(lit_1);
DEFLIT(lit_133);
DEFLIT(lit_201);
DEFLIT(lit_153);
DEFLIT(lit_112);
DEFLIT(lit_114);
DEFLIT(lit_118);
DEFLIT(lit_67);
DEFLIT(lit_199);
DEFLIT(lit_8);
DEFLIT(lit_72);
DEFLIT(lit_163);
DEFLIT(lit_216);
DEFLIT(lit_102);
DEFLIT(lit_187);
DEFLIT(lit_27);
DEFLIT(lit_236);
DEFLIT(lit_49);
DEFLIT(lit_156);
DEFLIT(lit_150);
DEFLIT(lit_188);
DEFLIT(lit_191);
DEFLIT(lit_233);
DEFLIT(lit_183);
DEFLIT(lit_86);
DEFLIT(lit_14);
DEFLIT(lit_76);
DEFLIT(lit_62);
DEFLIT(lit_105);
DEFLIT(lit_162);
DEFLIT(lit_32);
DEFLIT(lit_193);
DEFLIT(lit_161);
DEFLIT(lit_23);
DEFLIT(lit_147);
DEFLIT(lit_171);
DEFLIT(lit_57);
DEFLIT(lit_180);
DEFLIT(lit_55);
DEFLIT(lit_106);
DEFLIT(lit_154);
DEFLIT(lit_135);
DEFLIT(lit_198);
DEFLIT(lit_12);
DEFLIT(lit_128);
DEFLIT(lit_82);
DEFLIT(lit_20);
DEFLIT(lit_24);
DEFLIT(lit_61);
DEFLIT(lit_10);
DEFLIT(lit_129);
DEFLIT(lit_3);
DEFLIT(lit_132);
DEFLIT(lit_9);
DEFLIT(lit_167);
DEFLIT(lit_58);
DEFLIT(lit_186);
DEFLIT(lit_144);
DEFLIT(lit_97);
DEFLIT(lit_91);
DEFLIT(lit_63);
DEFLIT(lit_203);
DEFLIT(lit_179);
DEFLIT(lit_21);
DEFLIT(lit_40);
DEFLIT(lit_19);
DEFLIT(lit_65);
DEFLIT(lit_205);
DEFLIT(lit_48);
DEFLIT(lit_194);
DEFLIT(lit_31);
DEFLIT(lit_5);
DEFLIT(lit_77);
DEFLIT(lit_68);
DEFLIT(lit_155);
DEFLIT(lit_140);
DEFLIT(lit_73);
DEFLIT(lit_219);
DEFLIT(lit_213);
DEFLIT(lit_143);
DEFLIT(lit_43);
DEFLIT(lit_103);
DEFLIT(lit_0);
DEFLIT(lit_22);
DEFLIT(lit_208);
DEFLIT(lit_237);
DEFLIT(lit_192);
DEFLIT(lit_104);
DEFLIT(lit_146);
DEFLIT(lit_210);
DEFLIT(lit_231);
DEFLIT(lit_28);
DEFLIT(lit_158);
DEFLIT(lit_232);
DEFLIT(lit_220);
DEFLIT(lit_44);
DEFLIT(lit_101);
DEFLIT(lit_59);
DEFLIT(lit_159);
DEFLIT(lit_50);
DEFLIT(lit_46);
DEFLIT(lit_7);
DEFLIT(lit_234);
DEFLIT(lit_217);
DEFLIT(lit_94);
DEFLIT(lit_115);
DEFLIT(lit_60);
DEFLIT(lit_26);
DEFLIT(lit_41);
DEFLIT(lit_227);
DEFLIT(lit_71);
DEFLIT(lit_29);
DEFLIT(lit_69);
DEFLIT(lit_137);
DEFLIT(lit_34);
DEFLIT(lit_2);
DEFLIT(lit_66);
DEFLIT(lit_33);
DEFLIT(lit_124);
DEFLIT(lit_142);
DEFLIT(lit_223);
DEFLIT(lit_17);
DEFLIT(lit_52);
DEFLIT(lit_211);
DEFLIT(lit_195);
DEFLIT(lit_35);
DEFLIT(lit_54);
DEFLIT(lit_224);
DEFLIT(lit_107);
DEFLIT(lit_225);
DEFLIT(lit_196);
DEFLIT(lit_56);
DEFLIT(lit_99);

/* FUNCTIONS: */

LOCFOR(fun_default_handler_0);
LOCFOR(fun_describe_condition_1);
LOCFOR(fun_default_handler_description_2);
LOCFOR(fun_build_condition_interactively_3);
LOCFOR(fun_condition_message_4);
LOCFOR(fun_condition_message_setter_5);
LOCFOR(fun_6);
LOCFOR(fun_condition_arguments_7);
LOCFOR(fun_condition_arguments_setter_8);
LOCFOR(fun_9);
LOCFOR(fun_describe_condition_10);
LOCFOR(fun_build_condition_interactively_11);
LOCFOR(fun_default_handler_12);
LOCFOR(fun_default_handler_description_13);
LOCFOR(fun_incongruent_method_error_generic_14);
LOCFOR(fun_incongruent_method_error_method_15);
LOCFOR(fun_describe_condition_16);
LOCFOR(fun_default_handler_description_17);
LOCFOR(fun_describe_handler_18);
LOCFOR(fun_build_condition_for_handler_interactively_19);
LOCFOR(fun_handler_info_message_20);
LOCFOR(fun_handler_info_arguments_21);
LOCFOR(fun_22);
LOCFOR(fun_describe_handler_23);
LOCFOR(fun_handler_condition_type_24);
LOCFOR(fun_handler_info_25);
LOCFOR(fun_handler_test_26);
LOCFOR(fun_handler_function_27);
FUNFOR(YgooSconditionsYfab_handler);
FUNFOR(YgooSconditionsYhandler_activeQ);
FUNFOR(YgooSconditionsYhandler_matchesQ);
LOCFOR(fun_31);
LOCFOR(fun_Uhandler_functionU_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
FUNFOR(YPwith_monitor);
LOCFOR(fun_36);
FUNFOR(YgooSconditionsYsignal_handler_list);
LOCFOR(fun_sig_38);
LOCFOR(fun_sig_39);
LOCFOR(fun_error_40);
LOCFOR(fun_error_41);
FUNFOR(YgooSfunYincongruent_method_error);
LOCFOR(fun_call_error_function_43);
LOCFOR(fun_call_error_arguments_44);
LOCFOR(fun_describe_condition_45);
FUNFOR(Yarity_error);
FUNFOR(Ynarity_error);
LOCFOR(fun_describe_condition_48);
LOCFOR(fun_type_error_value_49);
LOCFOR(fun_type_error_type_50);
FUNFOR(Ytype_error);
LOCFOR(fun_describe_condition_52);
FUNFOR(Yunknown_function_error);
LOCFOR(fun_describe_condition_54);
FUNFOR(Yargument_type_error);
LOCFOR(fun_describe_condition_56);
FUNFOR(Yreturn_type_error);
LOCFOR(fun_describe_condition_58);
FUNFOR(Yambiguous_method_error);
LOCFOR(fun_describe_condition_60);
FUNFOR(Yno_applicable_methods_error);
LOCFOR(fun_describe_condition_62);
FUNFOR(Yno_next_methods_error);
LOCFOR(fun_describe_condition_64);
FUNFOR(Ycpl_error);
FUNFOR(Ysyntax_error);
LOCFOR(fun_macro_error_name_67);
LOCFOR(fun_macro_error_arguments_68);
FUNFOR(YgooSmacrosYmacro_error);
LOCFOR(fun_describe_condition_70);
FUNFOR(Ystack_overflow_error);
LOCFOR(fun_describe_condition_72);
FUNFOR(Yinternal_error);
FUNFOR(Yassert_error);
LOCFOR(fun_describe_condition_75);
LOCFOR(fun_range_error_collection_76);
LOCFOR(fun_range_error_key_77);
LOCFOR(fun_range_error_78);
LOCFOR(fun_describe_condition_79);
LOCFOR(fun_file_opening_error_filename_80);
LOCFOR(fun_file_opening_error_81);
LOCFOR(fun_describe_condition_82);
LOCFOR(fun_unbound_variable_error_variable_83);
LOCFOR(fun_describe_condition_84);
LOCFOR(fun_property_error_owner_85);
LOCFOR(fun_86);
LOCFOR(fun_property_error_generic_87);
LOCFOR(fun_88);
FUNFOR(Yproperty_unbound_error);
LOCFOR(fun_describe_condition_90);
FUNFOR(Yproperty_not_found_error);
LOCFOR(fun_describe_condition_92);
FUNFOR(Yproperty_type_error);
LOCFOR(fun_describe_condition_94);
FUNFOR(Yas_error);
LOCFOR(fun_describe_condition_96);
FUNFOR(Yarithmetic_error);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YgooSconditionsYdo_handlers_of_type);
LOCFOR(fun_100);
FUNFOR(YgooSconditionsYlist_handlers);
LOCFOR(fun_102);
FUNFOR(YgooSconditionsYinvoke_handler_interactively);
FUNFOR(YgooSconditionsYchoose_handler);
extern P YgooSconditionsY___main_0___ ();
extern P YgooSconditionsY___main_1___ ();
extern P YgooSconditionsY___main_2___ ();
extern P YgooSconditionsY___main_3___ ();
extern P YgooSconditionsY___main_4___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_default_handler_0) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_describe_condition_1) {
  P c_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_5),c_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_2) {
  P cond_type_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_8),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_3) {
  P cond_type_,in_,out_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T0 = CALL1(1,VARREF(Ynew),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_condition_message_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_6) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(LITREF(lit_17));
}

FUNCODEDEF(fun_condition_arguments_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_condition_10) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcondition_message),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcondition_arguments),c_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_interactively_11) {
  P cond_type_,in_,out_;
  P condF8663;
  P next_metsF8662;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T6 = (P)YPfun_reg();
  T7 = (P)YPnext_methods();
  T5 = CALL5(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,cond_type_,in_,out_);
  next_metsF8662 = T5;
  T3 = CALL1(1,VARREF(Yhead),next_metsF8662);
  T4 = CALL1(1,VARREF(Ytail),next_metsF8662);
  T2 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T3,T4,cond_type_,in_,out_,Ynil);
  condF8663 = T2;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_25));
  T0 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_message_setter),T0,condF8663);
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_26));
  T1 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_arguments_setter),T1,condF8663);
UNLINK_STACK();
  RET(condF8663);
}

FUNCODEDEF(fun_default_handler_12) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T0 = CALL1(1,VARREF(YgooSconditionsYdescribe_condition),c_);
  CALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_29),T0);
  T1 = (P)YPinvoke_debugger(c_);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_default_handler_description_13) {
  P cond_type_;
  P T0;
LINK_STACK();
  ARG(cond_type_, 0);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_34),cond_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_14) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_15) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_16) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_17) {
  P cond_type_;
LINK_STACK();
  ARG(cond_type_, 0);
UNLINK_STACK();
  RET(LITREF(lit_44));
}

FUNCODEDEF(fun_describe_handler_18) {
  P info_,condition_type_;
  P T0;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_19) {
  P info_,condition_type_,in_,out_;
  P T0;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  ARG(in_, 2);
  ARG(out_, 3);
  T0 = CALL3(1,VARREF(YgooSconditionsYbuild_condition_interactively),condition_type_,in_,out_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_info_message_20) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSfunYhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_21) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSfunYhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_23) {
  P info_,condition_type_;
  P T0,T1,T2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T1 = CALL1(1,VARREF(YgooSfunYhandler_info_message),info_);
  T2 = CALL1(1,VARREF(YgooSfunYhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_24) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_25) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_26) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_27) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYfab_handler) {
  P type_,info_,test_,f_;
  P T0;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_, 2);
  ARG(f_, 3);
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),type_,VARREF(YgooSconditionsYhandler_info),info_,VARREF(YgooSconditionsYhandler_test),test_,VARREF(YgooSconditionsYhandler_function),f_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_activeQ) {
  P handler_;
  P T0,T1;
LINK_STACK();
  ARG(handler_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYhandler_test),handler_);
  T0 = CALL0(1,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YgooSconditionsYhandler_matchesQ) {
  P handler_,condition_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handler_);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_31) {
  P UresumeU_;
  P T0;
LINK_STACK();
  ARG(UresumeU_, 0);
  CALL2(1,FREEREF(1),FREEREF(0),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_32) {
  P condition_,Unext_handlerU_;
  P T0,T1;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
  T1 = FUNFAB(fun_31,3,condition_,FREEREF(0),Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P T0;
LINK_STACK();
  T0 = CALL0(0,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSconditionsYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uoriginal_handlersUF8664;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
  Uoriginal_handlersUF8664 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  T2 = FUNFAB(fun_Uhandler_functionU_32,1,user_handler_);
  T1 = CALL4(1,VARREF(YgooSconditionsYfab_handler),type_,info_,test_fun_,T2);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYpushX),DYNREF(YgooSconditionsYTcurrent_handlersT),T1);
  DYNSET(YgooSconditionsYTcurrent_handlersT,T0);
  T4 = FUNFAB(fun_33,1,main_fun_);
  T5 = FUNFAB(fun_34,1,Uoriginal_handlersUF8664);
  T3 = with_cleanup(T4,T5);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_36) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF8666;
  P handlerF8665;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSconditionsYdefault_handler),condition_);
    T0 = T2;
  } else {
    T10 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF8665 = T10;
    T9 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF8666 = T9;
    T4 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handlerF8665,condition_);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handlerF8665);
      T6 = FUNFAB(fun_36,2,condition_,remainingF8666);
      T5 = CALL2(1,T7,condition_,T6);
      T3 = T5;
    } else {
      T8 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,remainingF8666);
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_38) {
  P condition_,args_;
  P T0;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,DYNREF(YgooSconditionsYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_39) {
  P c_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_40) {
  P c_,args_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_41) {
  P c_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsimple_errorG),VARREF(YgooSconditionsYcondition_message),c_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSfunYincongruent_method_error) {
  P gen_,met_;
  P T0,T1;
LINK_STACK();
  ARG(gen_, 0);
  ARG(met_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),gen_,VARREF(YgooSconditionsYincongruent_method_error_method),met_);
  T0 = CALL1(1,VARREF(Yerror),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_43) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_44) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_45) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_95),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarity_error) {
  P fun_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ynarity_error) {
  P fun_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(fun_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLnarity_errorG),VARREF(YgooSconditionsYcall_error_function),fun_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_48) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_102),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_type_error_value_49) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ytype_error) {
  P arg_,type_;
  P T0,T1;
LINK_STACK();
  ARG(arg_, 0);
  ARG(type_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),arg_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_52) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_111),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yunknown_function_error) {
  P f_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLunknown_function_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),f_,VARREF(YgooSconditionsYtype_error_type),VARREF(YLfunG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_54) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_116),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yargument_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLargument_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_56) {
  P c_;
  P next_metsF8667;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_121),T2,T3);
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T8,T9,c_);
  next_metsF8667 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF8667);
  T6 = CALL1(1,VARREF(Ytail),next_metsF8667);
  T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yreturn_type_error) {
  P f_,val_,type_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(f_, 0);
  ARG(val_, 1);
  ARG(type_, 2);
  ARG(args_, 3);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(YgooSconditionsYLreturn_type_errorG),VARREF(YgooSconditionsYcall_error_function),f_,VARREF(YgooSconditionsYcall_error_arguments),T2,VARREF(YgooSconditionsYtype_error_value),val_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_58) {
  P c_;
  P next_metsF8668;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_126),T2,T3);
  T8 = (P)YPfun_reg();
  T9 = (P)YPnext_methods();
  T7 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T8,T9,c_);
  next_metsF8668 = T7;
  T5 = CALL1(1,VARREF(Yhead),next_metsF8668);
  T6 = CALL1(1,VARREF(Ytail),next_metsF8668);
  T4 = CALL4(1,VARREF(YgooSmacrosYnapp),T5,T6,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T4);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yambiguous_method_error) {
  P gen_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLambiguous_method_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_60) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_131),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_applicable_methods_error) {
  P gen_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(gen_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_applicable_methods_errorG),VARREF(YgooSconditionsYcall_error_function),gen_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_62) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_136),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yno_next_methods_error) {
  P met_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(met_, 0);
  ARG(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLno_next_methods_errorG),VARREF(YgooSconditionsYcall_error_function),met_,VARREF(YgooSconditionsYcall_error_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_64) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_141),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ycpl_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL4(1,VARREF(Ynew),VARREF(YgooSconditionsYLcpl_errorG),VARREF(YgooSconditionsYcondition_message),msg_,T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ysyntax_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLsyntax_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_67) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_68) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSmacrosYmacro_error) {
  P name_,args_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(args_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),name_,VARREF(YgooSconditionsYmacro_error_arguments),args_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_70) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYmacro_error_name),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYmacro_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_157),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Ystack_overflow_error) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLstack_overflowG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_72) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(LITREF(lit_161));
}

FUNCODEDEF(Yinternal_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLinternal_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yassert_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLassert_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_75) {
  P c_;
  P next_metsF8669;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(c_, 0);
  T5 = (P)YPfun_reg();
  T6 = (P)YPnext_methods();
  T4 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T5,T6,c_);
  next_metsF8669 = T4;
  T2 = CALL1(1,VARREF(Yhead),next_metsF8669);
  T3 = CALL1(1,VARREF(Ytail),next_metsF8669);
  T1 = CALL4(1,VARREF(YgooSmacrosYnapp),T2,T3,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_169),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_error_collection_76) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_77) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_78) {
  P c_,k_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  ARG(k_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),c_,VARREF(YgooSconditionsYrange_error_key),k_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_79) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYrange_error_key),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYrange_error_collection),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_178),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_80) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_81) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),filename_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_82) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYfile_opening_error_filename),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_186),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_83) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_84) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYunbound_variable_error_variable),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_192),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_property_error_owner_85) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_86) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_property_error_generic_87) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(Yproperty_unbound_error) {
  P owner_;
  P T0,T1;
LINK_STACK();
  ARG(owner_, 0);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_unbound_errorG),VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_90) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_204),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_not_found_error) {
  P generic_,owner_;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  ARG(owner_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLproperty_not_found_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYproperty_error_owner),owner_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_92) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_209),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yproperty_type_error) {
  P generic_,value_,type_;
  P T0,T1;
LINK_STACK();
  ARG(generic_, 0);
  ARG(value_, 1);
  ARG(type_, 2);
  T1 = CALLN(1,VARREF(Ynew),7,VARREF(YgooSconditionsYLproperty_type_errorG),VARREF(YgooSconditionsYproperty_error_generic),generic_,VARREF(YgooSconditionsYtype_error_value),value_,VARREF(YgooSconditionsYtype_error_type),type_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_94) {
  P c_;
  P next_metsF8670;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T1 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_214),T2);
  T7 = (P)YPfun_reg();
  T8 = (P)YPnext_methods();
  T6 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T7,T8,c_);
  next_metsF8670 = T6;
  T4 = CALL1(1,VARREF(Yhead),next_metsF8670);
  T5 = CALL1(1,VARREF(Ytail),next_metsF8670);
  T3 = CALL4(1,VARREF(YgooSmacrosYnapp),T4,T5,c_,Ynil);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yas_error) {
  P type_,value_;
  P T0,T1;
LINK_STACK();
  ARG(type_, 0);
  ARG(value_, 1);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLas_errorG),VARREF(YgooSconditionsYtype_error_type),type_,VARREF(YgooSconditionsYtype_error_value),value_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_96) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_219),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(Yarithmetic_error) {
  P msg_,args_;
  P T0,T1,T2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),args_);
  T1 = CALL5(1,VARREF(Ynew),VARREF(YgooSconditionsYLarithmetic_errorG),VARREF(YgooSconditionsYcondition_message),msg_,VARREF(YgooSconditionsYcondition_arguments),T2);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
  T1 = CALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYdo_handlers_of_type) {
  P type_,f_;
  P remainingF8673;
  P handlerF8672;
  P handlersF8671;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
  handlersF8671 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  LOOP_400: {
    P a400_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlersF8671);
    if (T1 != YPfalse) {
      T0 = YPfalse;
    } else {
      T9 = CALL1(1,VARREF(Yhead),handlersF8671);
      handlerF8672 = T9;
      T8 = CALL1(1,VARREF(Ytail),handlersF8671);
      remainingF8673 = T8;
      T4 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handlerF8672);
      T3 = CALL2(1,VARREF(YsubtypeQ),T4,type_);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handlerF8672);
        T2 = T5;
      } else {
        T2 = YPfalse;
      }
      if (T2 != YPfalse) {
        T6 = CALL1(0,f_,handlerF8672);
      } else {
      }
      a400_0 = remainingF8673;
      handlersF8671 = a400_0;
      goto LOOP_400;
      T0 = T7;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_100) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(handler_, 0);
  T0 = BOXGET(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSconditionsYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_230),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXGET(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXPUT(T5,FREEREF(1));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSconditionsYlist_handlers) {
  P type_,out_;
  P applicableF8675;
  P iF8674;
  P T0,T1,T2;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
  iF8674 = YPint((P)1);
  iF8674 = BOXFAB(iF8674);
  T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF8675 = T2;
  T1 = FUNFAB(fun_100,3,out_,iF8674,applicableF8675);
  CALL2(1,VARREF(YgooSconditionsYdo_handlers_of_type),type_,T1);
UNLINK_STACK();
  RET(applicableF8675);
}

FUNCODEDEF(fun_102) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P remainingF8679;
  P currentF8678;
  P handlersF8677;
  P conditionF8676;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T15 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T16 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T14 = CALL4(1,VARREF(YgooSconditionsYbuild_condition_for_handler_interactively),T15,T16,in_,out_);
  conditionF8676 = T14;
  T1 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handler_,conditionF8676);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T2 = CALL3(1,VARREF(Yerror),LITREF(lit_233),handler_,conditionF8676);
  } else {
  }
  handlersF8677 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  LOOP_401: {
    P a401_0;
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlersF8677);
    if (T4 != YPfalse) {
      T5 = CALL2(1,VARREF(Yerror),LITREF(lit_234),handler_);
      T3 = T5;
    } else {
      T13 = CALL1(1,VARREF(Yhead),handlersF8677);
      currentF8678 = T13;
      T12 = CALL1(1,VARREF(Ytail),handlersF8677);
      remainingF8679 = T12;
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),handler_,currentF8678);
      if (T7 != YPfalse) {
        T10 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handler_);
        T9 = FUNFAB(fun_102,2,conditionF8676,remainingF8679);
        T8 = CALL2(1,T10,conditionF8676,T9);
        T6 = T8;
      } else {
        a401_0 = remainingF8679;
        handlersF8677 = a401_0;
        goto LOOP_401;
        T6 = T11;
      }
      T3 = T6;
    }
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(YgooSconditionsYchoose_handler) {
  P type_,in_,out_;
  P tmpF8682;
  P nF8681;
  P handlersF8680;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T9 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),type_,out_);
  handlersF8680 = T9;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_237));
  T8 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
  nF8681 = T7;
  T3 = CALL2(1,VARREF(YgooSmagYL),nF8681,YPint((P)0));
  tmpF8682 = T3;
  if (tmpF8682 != YPfalse) {
    T0 = tmpF8682;
  } else {
    T2 = CALL1(1,VARREF(YgooStypesYlen),handlersF8680);
    T1 = CALL2(1,VARREF(YgooSmagYGE),nF8681,T2);
    T0 = T1;
  }
  if (T0 != YPfalse) {
    T4 = CALL2(1,VARREF(Yerror),LITREF(lit_238),nF8681);
  } else {
  }
  T6 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF8680,nF8681);
  T5 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T6,in_,out_);
UNLINK_STACK();
  QRET(T5);
}

P YgooSconditionsY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93;
DEFCREGS();
  lit_0 = YPPsym((P)"<condition>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YgooSconditionsYLconditionG,T0);
  lit_1 = YPPsym((P)"default-handler");
  lit_2 = YPPlist(1,YPPsym((P)"c"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_0 = YPmet(FUNCODEREF(fun_default_handler_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(23));
  T4 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T5 = fun_default_handler_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YgooSconditionsYdefault_handler,T3);
  lit_3 = YPPsym((P)"describe-condition");
  lit_4 = YPPlist(1,YPPsym((P)"c"));
  lit_5 = YPsb((P)"Anonymous condition %=");
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_1 = YPmet(FUNCODEREF(fun_describe_condition_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(26));
  T8 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T9 = fun_describe_condition_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YgooSconditionsYdescribe_condition,T7);
  lit_6 = YPPsym((P)"default-handler-description");
  lit_7 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_8 = YPsb((P)"Anonymous handler for %s");
  T11 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T10 = YPsig(LITREF(lit_7),YPPlist(1,T11),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_2 = YPmet(FUNCODEREF(fun_default_handler_description_2),LITREF(lit_6),T10,ENVNUL,PNUL,sloc(29));
  T13 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T14 = fun_default_handler_description_2;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSconditionsYdefault_handler_description,T12);
  lit_9 = YPPsym((P)"build-condition-interactively");
  lit_10 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T16 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T15 = YPsig(LITREF(lit_10),YPPlist(3,T16,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_3 = YPmet(FUNCODEREF(fun_build_condition_interactively_3),LITREF(lit_9),T15,ENVNUL,PNUL,sloc(32));
  T18 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T19 = fun_build_condition_interactively_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSconditionsYbuild_condition_interactively,T17);
  lit_11 = YPPsym((P)"<simple-condition>");
  T21 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T20 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_11),T21);
  VARSET(YgooSconditionsYLsimple_conditionG,T20);
  lit_12 = YPPsym((P)"condition-message");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_4 = YPmet(FUNCODEREF(fun_condition_message_4),LITREF(lit_12),T22,ENVNUL,PNUL,sloc(37));
  T24 = VARREF_OR(YgooSconditionsYcondition_message,YPfalse);
  T25 = fun_condition_message_4;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YgooSconditionsYcondition_message,T23);
  lit_14 = YPPsym((P)"condition-message-setter");
  lit_15 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_5 = YPmet(FUNCODEREF(fun_condition_message_setter_5),LITREF(lit_14),T26,ENVNUL,PNUL,sloc(37));
  T28 = VARREF_OR(YgooSconditionsYcondition_message_setter,YPfalse);
  T29 = fun_condition_message_setter_5;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YgooSconditionsYcondition_message_setter,T27);
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  lit_17 = YPsb((P)"");
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T30,ENVNUL,PNUL,sloc(37));
  T31 = fun_6;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),VARREF(YgooSconditionsYcondition_message_setter),VARREF(YLstrG),T31);
  lit_18 = YPPsym((P)"condition-arguments");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_7 = YPmet(FUNCODEREF(fun_condition_arguments_7),LITREF(lit_18),T32,ENVNUL,PNUL,sloc(38));
  T34 = VARREF_OR(YgooSconditionsYcondition_arguments,YPfalse);
  T35 = fun_condition_arguments_7;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSconditionsYcondition_arguments,T33);
  lit_20 = YPPsym((P)"condition-arguments-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_8 = YPmet(FUNCODEREF(fun_condition_arguments_setter_8),LITREF(lit_20),T36,ENVNUL,PNUL,sloc(38));
  T38 = VARREF_OR(YgooSconditionsYcondition_arguments_setter,YPfalse);
  T39 = fun_condition_arguments_setter_8;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYcondition_arguments_setter,T37);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T40,ENVNUL,PNUL,sloc(38));
  T41 = fun_9;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_arguments),VARREF(YgooSconditionsYcondition_arguments_setter),VARREF(YLlstG),T41);
  lit_23 = YPPlist(1,YPPsym((P)"c"));
  T42 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_10 = YPmet(FUNCODEREF(fun_describe_condition_10),LITREF(lit_3),T42,ENVNUL,PNUL,sloc(40));
  T44 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T45 = fun_describe_condition_10;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSconditionsYdescribe_condition,T43);
  lit_24 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_25 = YPsb((P)"Condition format string: ");
  lit_26 = YPsb((P)"Condition format arguments: ");
  T47 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLsimple_conditionG));
  T46 = YPsig(LITREF(lit_24),YPPlist(3,T47,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_11 = YPmet(FUNCODEREF(fun_build_condition_interactively_11),LITREF(lit_9),T46,ENVNUL,PNUL,sloc(43));
  T49 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T50 = fun_build_condition_interactively_11;
  T48 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T49,T50);
  VARSET(YgooSconditionsYbuild_condition_interactively,T48);
  lit_27 = YPPsym((P)"<serious-condition>");
  T52 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T51 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_27),T52);
  VARSET(YgooSconditionsYLserious_conditionG,T51);
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = YPsb((P)"%s\n");
  T53 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooSconditionsYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_12 = YPmet(FUNCODEREF(fun_default_handler_12),LITREF(lit_1),T53,ENVNUL,PNUL,sloc(54));
  T55 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T56 = fun_default_handler_12;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSconditionsYdefault_handler,T54);
  lit_30 = YPPsym((P)"<error>");
  T58 = (P)YPpair(VARREF(YgooSconditionsYLserious_conditionG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_30),T58);
  VARSET(YgooSconditionsYLerrorG,T57);
  lit_31 = YPPsym((P)"<simple-error>");
  T61 = (P)YPpair(VARREF(YgooSconditionsYLsimple_conditionG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),T61);
  T59 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_31),T60);
  VARSET(YgooSconditionsYLsimple_errorG,T59);
  lit_32 = YPPsym((P)"<restart>");
  T63 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T62 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_32),T63);
  VARSET(YgooSconditionsYLrestartG,T62);
  lit_33 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_34 = YPsb((P)"Anonymous restart of type %s");
  T65 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLrestartG));
  T64 = YPsig(LITREF(lit_33),YPPlist(1,T65),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_13 = YPmet(FUNCODEREF(fun_default_handler_description_13),LITREF(lit_6),T64,ENVNUL,PNUL,sloc(78));
  T67 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T68 = fun_default_handler_description_13;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSconditionsYdefault_handler_description,T66);
  lit_35 = YPPsym((P)"<incongruent-method-error>");
  T70 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T69 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_35),T70);
  VARSET(YgooSconditionsYLincongruent_method_errorG,T69);
  lit_36 = YPPsym((P)"incongruent-method-error-generic");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_14 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_14),LITREF(lit_36),T71,ENVNUL,PNUL,sloc(82));
  T73 = VARREF_OR(YgooSconditionsYincongruent_method_error_generic,YPfalse);
  T74 = fun_incongruent_method_error_generic_14;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YgooSconditionsYincongruent_method_error_generic,T72);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),YPfalse,VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_38 = YPPsym((P)"incongruent-method-error-method");
  lit_39 = YPPlist(1,YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_39),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_15 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_15),LITREF(lit_38),T75,ENVNUL,PNUL,sloc(83));
  T77 = VARREF_OR(YgooSconditionsYincongruent_method_error_method,YPfalse);
  T78 = fun_incongruent_method_error_method_15;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YgooSconditionsYincongruent_method_error_method,T76);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_method),YPfalse,VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_40 = YPPlist(1,YPPsym((P)"c"));
  lit_41 = YPsb((P)"Method %= incongruent with generic %=.");
  T79 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_16 = YPmet(FUNCODEREF(fun_describe_condition_16),LITREF(lit_3),T79,ENVNUL,PNUL,sloc(85));
  T81 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T82 = fun_describe_condition_16;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YgooSconditionsYdescribe_condition,T80);
  lit_42 = YPPsym((P)"<replace-generic-restart>");
  T84 = (P)YPpair(VARREF(YgooSconditionsYLrestartG),Ynil);
  T83 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_42),T84);
  VARSET(YgooSfunYLreplace_generic_restartG,T83);
  lit_43 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_44 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T86 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSfunYLreplace_generic_restartG));
  T85 = YPsig(LITREF(lit_43),YPPlist(1,T86),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_17 = YPmet(FUNCODEREF(fun_default_handler_description_17),LITREF(lit_6),T85,ENVNUL,PNUL,sloc(92));
  T88 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T89 = fun_default_handler_description_17;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YgooSconditionsYdefault_handler_description,T87);
  lit_45 = YPPsym((P)"<handler-info>");
  T93 = (P)YPpair(VARREF(YLanyG),Ynil);
  T92 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_45),T93);
  T91 = VARSET(YgooSconditionsYLhandler_infoG,T92);
  T90 = T91;
  return T90;
}

P YgooSconditionsY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108;
DEFCREGS();
  lit_46 = YPPsym((P)"describe-handler");
  lit_47 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T0 = YPsig(LITREF(lit_47),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_18 = YPmet(FUNCODEREF(fun_describe_handler_18),LITREF(lit_46),T0,ENVNUL,PNUL,sloc(109));
  T2 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T3 = fun_describe_handler_18;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYdescribe_handler,T1);
  lit_48 = YPPsym((P)"build-condition-for-handler-interactively");
  lit_49 = YPPlist(4,YPPsym((P)"info"),YPPsym((P)"condition-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T4 = YPsig(LITREF(lit_49),YPPlist(4,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_19 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_19),LITREF(lit_48),T4,ENVNUL,PNUL,sloc(112));
  T6 = VARREF_OR(YgooSconditionsYbuild_condition_for_handler_interactively,YPfalse);
  T7 = fun_build_condition_for_handler_interactively_19;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSconditionsYbuild_condition_for_handler_interactively,T5);
  T8 = XCALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLhandler_infoG));
  VARSET(YgooSconditionsYDdefault_handler_info,T8);
  lit_50 = YPPsym((P)"<simple-handler-info>");
  T10 = (P)YPpair(VARREF(YgooSconditionsYLhandler_infoG),Ynil);
  T9 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_50),T10);
  VARSET(YgooSfunYLsimple_handler_infoG,T9);
  lit_51 = YPPsym((P)"handler-info-message");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T11 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YgooSfunYLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_20 = YPmet(FUNCODEREF(fun_handler_info_message_20),LITREF(lit_51),T11,ENVNUL,PNUL,sloc(119));
  T13 = VARREF_OR(YgooSfunYhandler_info_message,YPfalse);
  T14 = fun_handler_info_message_20;
  T12 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T13,T14);
  VARSET(YgooSfunYhandler_info_message,T12);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_message),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_53 = YPPsym((P)"handler-info-arguments");
  lit_54 = YPPlist(1,YPPsym((P)"_x"));
  T15 = YPsig(LITREF(lit_54),YPPlist(1,VARREF(YgooSfunYLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_21 = YPmet(FUNCODEREF(fun_handler_info_arguments_21),LITREF(lit_53),T15,ENVNUL,PNUL,sloc(120));
  T17 = VARREF_OR(YgooSfunYhandler_info_arguments,YPfalse);
  T18 = fun_handler_info_arguments_21;
  T16 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T17,T18);
  VARSET(YgooSfunYhandler_info_arguments,T16);
  lit_55 = YPPlist(1,YPPsym((P)"_x"));
  T19 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T19,ENVNUL,PNUL,sloc(120));
  T20 = fun_22;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YgooSfunYhandler_info_arguments),YPfalse,VARREF(YLlstG),T20);
  lit_56 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T21 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YgooSfunYLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_23 = YPmet(FUNCODEREF(fun_describe_handler_23),LITREF(lit_46),T21,ENVNUL,PNUL,sloc(122));
  T23 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T24 = fun_describe_handler_23;
  T22 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T23,T24);
  VARSET(YgooSconditionsYdescribe_handler,T22);
  DYNDEFSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  lit_57 = YPPsym((P)"<handler>");
  T26 = (P)YPpair(VARREF(YLanyG),Ynil);
  T25 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_57),T26);
  VARSET(YgooSconditionsYLhandlerG,T25);
  lit_58 = YPPsym((P)"handler-condition-type");
  lit_59 = YPPlist(1,YPPsym((P)"_x"));
  T27 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_24 = YPmet(FUNCODEREF(fun_handler_condition_type_24),LITREF(lit_58),T27,ENVNUL,PNUL,sloc(140));
  T29 = VARREF_OR(YgooSconditionsYhandler_condition_type,YPfalse);
  T30 = fun_handler_condition_type_24;
  T28 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T29,T30);
  VARSET(YgooSconditionsYhandler_condition_type,T28);
  T31 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),YPfalse,T31,VARREF(YPprop_unbound_error));
  lit_60 = YPPsym((P)"handler-info");
  lit_61 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_61),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_25 = YPmet(FUNCODEREF(fun_handler_info_25),LITREF(lit_60),T32,ENVNUL,PNUL,sloc(141));
  T34 = VARREF_OR(YgooSconditionsYhandler_info,YPfalse);
  T35 = fun_handler_info_25;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSconditionsYhandler_info,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_info),YPfalse,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_62 = YPPsym((P)"handler-test");
  lit_63 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_26 = YPmet(FUNCODEREF(fun_handler_test_26),LITREF(lit_62),T36,ENVNUL,PNUL,sloc(142));
  T38 = VARREF_OR(YgooSconditionsYhandler_test,YPfalse);
  T39 = fun_handler_test_26;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYhandler_test,T37);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_test),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"handler-function");
  lit_65 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_27 = YPmet(FUNCODEREF(fun_handler_function_27),LITREF(lit_64),T40,ENVNUL,PNUL,sloc(143));
  T42 = VARREF_OR(YgooSconditionsYhandler_function,YPfalse);
  T43 = fun_handler_function_27;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YgooSconditionsYhandler_function,T41);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_function),YPfalse,VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_66 = YPPsym((P)"fab-handler");
  lit_67 = YPPlist(4,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"f"));
  T45 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T44 = YPsig(LITREF(lit_67),YPPlist(4,T45,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLhandlerG),Ynil);
  YgooSconditionsYfab_handler = YPmet(FUNCODEREF(YgooSconditionsYfab_handler),LITREF(lit_66),T44,ENVNUL,PNUL,sloc(145));
  T46 = YgooSconditionsYfab_handler;
  VARSET(YgooSconditionsYfab_handler,T46);
  lit_68 = YPPsym((P)"handler-active?");
  lit_69 = YPPlist(1,YPPsym((P)"handler"));
  T47 = YPsig(LITREF(lit_69),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_activeQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_activeQ),LITREF(lit_68),T47,ENVNUL,PNUL,sloc(153));
  T48 = YgooSconditionsYhandler_activeQ;
  VARSET(YgooSconditionsYhandler_activeQ,T48);
  lit_70 = YPPsym((P)"handler-matches?");
  lit_71 = YPPlist(2,YPPsym((P)"handler"),YPPsym((P)"condition"));
  T49 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_matchesQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_matchesQ),LITREF(lit_70),T49,ENVNUL,PNUL,sloc(156));
  T50 = YgooSconditionsYhandler_matchesQ;
  VARSET(YgooSconditionsYhandler_matchesQ,T50);
  lit_72 = YPPsym((P)"%with-monitor");
  lit_73 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test-fun"),YPPsym((P)"user-handler"),YPPsym((P)"main-fun"));
  lit_74 = YPPsym((P)"_handler-function_");
  lit_75 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"_next-handler_"));
  lit_76 = YPPlist(1,YPPsym((P)"_resume_"));
  lit_77 = Ynil;
  T56 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T56,ENVNUL,PNUL,sloc(165));
  T55 = YPsig(LITREF(lit_75),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_32 = YPmet(FUNCODEREF(fun_Uhandler_functionU_32),LITREF(lit_74),T55,ENVNUL,PNUL,sloc(164));
  T54 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T54,ENVNUL,PNUL,sloc(170));
  T53 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T53,ENVNUL,PNUL,sloc(170));
  T52 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T51 = YPsig(LITREF(lit_73),YPPlist(5,T52,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_72),T51,ENVNUL,PNUL,sloc(160));
  T57 = YPwith_monitor;
  VARSET(YPwith_monitor,T57);
  lit_78 = YPPsym((P)"signal-handler-list");
  lit_79 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"handlers"));
  T59 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T59,ENVNUL,PNUL,sloc(180));
  T58 = YPsig(LITREF(lit_79),YPPlist(2,VARREF(YgooSconditionsYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYsignal_handler_list = YPmet(FUNCODEREF(YgooSconditionsYsignal_handler_list),LITREF(lit_78),T58,ENVNUL,PNUL,sloc(173));
  T60 = YgooSconditionsYsignal_handler_list;
  VARSET(YgooSconditionsYsignal_handler_list,T60);
  lit_80 = YPPsym((P)"sig");
  lit_81 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"args"));
  T61 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_38 = YPmet(FUNCODEREF(fun_sig_38),LITREF(lit_80),T61,ENVNUL,PNUL,sloc(183));
  T63 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T64 = fun_sig_38;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooSconditionsYsig,T62);
  lit_82 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T65 = YPsig(LITREF(lit_82),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_39 = YPmet(FUNCODEREF(fun_sig_39),LITREF(lit_80),T65,ENVNUL,PNUL,sloc(186));
  T67 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T68 = fun_sig_39;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YgooSconditionsYsig,T66);
  lit_83 = YPPsym((P)"error");
  lit_84 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T69 = YPsig(LITREF(lit_84),YPPlist(1,VARREF(YgooSconditionsYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_40 = YPmet(FUNCODEREF(fun_error_40),LITREF(lit_83),T69,ENVNUL,PNUL,sloc(193));
  T71 = VARREF_OR(Yerror,YPfalse);
  T72 = fun_error_40;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(Yerror,T70);
  lit_85 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T73 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_41 = YPmet(FUNCODEREF(fun_error_41),LITREF(lit_83),T73,ENVNUL,PNUL,sloc(196));
  T75 = VARREF_OR(Yerror,YPfalse);
  T76 = fun_error_41;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(Yerror,T74);
  lit_86 = YPPsym((P)"incongruent-method-error");
  lit_87 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T77 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSfunYincongruent_method_error = YPmet(FUNCODEREF(YgooSfunYincongruent_method_error),LITREF(lit_86),T77,ENVNUL,PNUL,sloc(200));
  T78 = YgooSfunYincongruent_method_error;
  VARSET(YgooSfunYincongruent_method_error,T78);
  lit_88 = YPPsym((P)"<call-error>");
  T80 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T79 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_88),T80);
  VARSET(YgooSconditionsYLcall_errorG,T79);
  lit_89 = YPPsym((P)"call-error-function");
  lit_90 = YPPlist(1,YPPsym((P)"_x"));
  T81 = YPsig(LITREF(lit_90),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_function_43 = YPmet(FUNCODEREF(fun_call_error_function_43),LITREF(lit_89),T81,ENVNUL,PNUL,sloc(206));
  T83 = VARREF_OR(YgooSconditionsYcall_error_function,YPfalse);
  T84 = fun_call_error_function_43;
  T82 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T83,T84);
  VARSET(YgooSconditionsYcall_error_function,T82);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_function),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_91 = YPPsym((P)"call-error-arguments");
  lit_92 = YPPlist(1,YPPsym((P)"_x"));
  T85 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_44 = YPmet(FUNCODEREF(fun_call_error_arguments_44),LITREF(lit_91),T85,ENVNUL,PNUL,sloc(207));
  T87 = VARREF_OR(YgooSconditionsYcall_error_arguments,YPfalse);
  T88 = fun_call_error_arguments_44;
  T86 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T87,T88);
  VARSET(YgooSconditionsYcall_error_arguments,T86);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_arguments),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_93 = YPPsym((P)"<arity-error>");
  T90 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T89 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_93),T90);
  VARSET(YgooSconditionsYLarity_errorG,T89);
  lit_94 = YPPlist(1,YPPsym((P)"c"));
  lit_95 = YPsb((P)"Function %= called with wrong number arguments %=.");
  T91 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YgooSconditionsYLarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_45 = YPmet(FUNCODEREF(fun_describe_condition_45),LITREF(lit_3),T91,ENVNUL,PNUL,sloc(211));
  T93 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T94 = fun_describe_condition_45;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YgooSconditionsYdescribe_condition,T92);
  lit_96 = YPPsym((P)"arity-error");
  lit_97 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T95 = YPsig(LITREF(lit_97),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yarity_error = YPmet(FUNCODEREF(Yarity_error),LITREF(lit_96),T95,ENVNUL,PNUL,sloc(215));
  T96 = Yarity_error;
  VARSET(Yarity_error,T96);
  lit_98 = YPPsym((P)"<narity-error>");
  T98 = (P)YPpair(VARREF(YgooSconditionsYLarity_errorG),Ynil);
  T97 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_98),T98);
  VARSET(YgooSconditionsYLnarity_errorG,T97);
  lit_99 = YPPsym((P)"narity-error");
  lit_100 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T99 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ynarity_error = YPmet(FUNCODEREF(Ynarity_error),LITREF(lit_99),T99,ENVNUL,PNUL,sloc(221));
  T100 = Ynarity_error;
  VARSET(Ynarity_error,T100);
  lit_101 = YPPlist(1,YPPsym((P)"c"));
  lit_102 = YPsb((P)"Nary function %= called with too few arguments %=.");
  T101 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YgooSconditionsYLnarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_48 = YPmet(FUNCODEREF(fun_describe_condition_48),LITREF(lit_3),T101,ENVNUL,PNUL,sloc(225));
  T103 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T104 = fun_describe_condition_48;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YgooSconditionsYdescribe_condition,T102);
  lit_103 = YPPsym((P)"<type-error>");
  T108 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T107 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_103),T108);
  T106 = VARSET(YgooSconditionsYLtype_errorG,T107);
  T105 = T106;
  return T105;
}

P YgooSconditionsY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120;
DEFCREGS();
  lit_104 = YPPsym((P)"type-error-value");
  lit_105 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_value_49 = YPmet(FUNCODEREF(fun_type_error_value_49),LITREF(lit_104),T0,ENVNUL,PNUL,sloc(230));
  T2 = VARREF_OR(YgooSconditionsYtype_error_value,YPfalse);
  T3 = fun_type_error_value_49;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYtype_error_value,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_106 = YPPsym((P)"type-error-type");
  lit_107 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_107),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_type_50 = YPmet(FUNCODEREF(fun_type_error_type_50),LITREF(lit_106),T4,ENVNUL,PNUL,sloc(231));
  T6 = VARREF_OR(YgooSconditionsYtype_error_type,YPfalse);
  T7 = fun_type_error_type_50;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YgooSconditionsYtype_error_type,T5);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_type),YPfalse,VARREF(YLtypeG),VARREF(YPprop_unbound_error));
  lit_108 = YPPsym((P)"type-error");
  lit_109 = YPPlist(2,YPPsym((P)"arg"),YPPsym((P)"type"));
  T8 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_108),T8,ENVNUL,PNUL,sloc(233));
  T9 = Ytype_error;
  VARSET(Ytype_error,T9);
  lit_110 = YPPlist(1,YPPsym((P)"c"));
  lit_111 = YPsb((P)"Type check failure on %= expected %t.");
  T10 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_52 = YPmet(FUNCODEREF(fun_describe_condition_52),LITREF(lit_3),T10,ENVNUL,PNUL,sloc(236));
  T12 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T13 = fun_describe_condition_52;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YgooSconditionsYdescribe_condition,T11);
  lit_112 = YPPsym((P)"<unknown-function-error>");
  T16 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T15 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T16);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_112),T15);
  VARSET(YgooSconditionsYLunknown_function_errorG,T14);
  lit_113 = YPPsym((P)"unknown-function-error");
  lit_114 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"args"));
  T17 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_113),T17,ENVNUL,PNUL,sloc(242));
  T18 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T18);
  lit_115 = YPPlist(1,YPPsym((P)"c"));
  lit_116 = YPsb((P)"Unknown function %= called on %=.");
  T19 = YPsig(LITREF(lit_115),YPPlist(1,VARREF(YgooSconditionsYLunknown_function_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_54 = YPmet(FUNCODEREF(fun_describe_condition_54),LITREF(lit_3),T19,ENVNUL,PNUL,sloc(247));
  T21 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T22 = fun_describe_condition_54;
  T20 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T21,T22);
  VARSET(YgooSconditionsYdescribe_condition,T20);
  lit_117 = YPPsym((P)"<argument-type-error>");
  T25 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T24 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T25);
  T23 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T24);
  VARSET(YgooSconditionsYLargument_type_errorG,T23);
  lit_118 = YPPsym((P)"argument-type-error");
  lit_119 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T26 = YPsig(LITREF(lit_119),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yargument_type_error = YPmet(FUNCODEREF(Yargument_type_error),LITREF(lit_118),T26,ENVNUL,PNUL,sloc(253));
  T27 = Yargument_type_error;
  VARSET(Yargument_type_error,T27);
  lit_120 = YPPlist(1,YPPsym((P)"c"));
  lit_121 = YPsb((P)"During call of %= on %= ");
  T28 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YgooSconditionsYLargument_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_56 = YPmet(FUNCODEREF(fun_describe_condition_56),LITREF(lit_3),T28,ENVNUL,PNUL,sloc(258));
  T30 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T31 = fun_describe_condition_56;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YgooSconditionsYdescribe_condition,T29);
  lit_122 = YPPsym((P)"<return-type-error>");
  T34 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T33 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T34);
  T32 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_122),T33);
  VARSET(YgooSconditionsYLreturn_type_errorG,T32);
  lit_123 = YPPsym((P)"return-type-error");
  lit_124 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T35 = YPsig(LITREF(lit_124),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yreturn_type_error = YPmet(FUNCODEREF(Yreturn_type_error),LITREF(lit_123),T35,ENVNUL,PNUL,sloc(265));
  T36 = Yreturn_type_error;
  VARSET(Yreturn_type_error,T36);
  lit_125 = YPPlist(1,YPPsym((P)"c"));
  lit_126 = YPsb((P)"During return of call of %= on %= ");
  T37 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YgooSconditionsYLreturn_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_58 = YPmet(FUNCODEREF(fun_describe_condition_58),LITREF(lit_3),T37,ENVNUL,PNUL,sloc(270));
  T39 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T40 = fun_describe_condition_58;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YgooSconditionsYdescribe_condition,T38);
  lit_127 = YPPsym((P)"<ambiguous-method-error>");
  T42 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T41 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_127),T42);
  VARSET(YgooSconditionsYLambiguous_method_errorG,T41);
  lit_128 = YPPsym((P)"ambiguous-method-error");
  lit_129 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T43 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yambiguous_method_error = YPmet(FUNCODEREF(Yambiguous_method_error),LITREF(lit_128),T43,ENVNUL,PNUL,sloc(277));
  T44 = Yambiguous_method_error;
  VARSET(Yambiguous_method_error,T44);
  lit_130 = YPPlist(1,YPPsym((P)"c"));
  lit_131 = YPsb((P)"Ambiguous methods on %= when called with %=.");
  T45 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YgooSconditionsYLambiguous_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_60 = YPmet(FUNCODEREF(fun_describe_condition_60),LITREF(lit_3),T45,ENVNUL,PNUL,sloc(281));
  T47 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T48 = fun_describe_condition_60;
  T46 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T47,T48);
  VARSET(YgooSconditionsYdescribe_condition,T46);
  lit_132 = YPPsym((P)"<no-applicable-methods-error>");
  T50 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T49 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_132),T50);
  VARSET(YgooSconditionsYLno_applicable_methods_errorG,T49);
  lit_133 = YPPsym((P)"no-applicable-methods-error");
  lit_134 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T51 = YPsig(LITREF(lit_134),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_applicable_methods_error = YPmet(FUNCODEREF(Yno_applicable_methods_error),LITREF(lit_133),T51,ENVNUL,PNUL,sloc(287));
  T52 = Yno_applicable_methods_error;
  VARSET(Yno_applicable_methods_error,T52);
  lit_135 = YPPlist(1,YPPsym((P)"c"));
  lit_136 = YPsb((P)"No applicable methods on %= when called with %=.");
  T53 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YgooSconditionsYLno_applicable_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_62 = YPmet(FUNCODEREF(fun_describe_condition_62),LITREF(lit_3),T53,ENVNUL,PNUL,sloc(292));
  T55 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T56 = fun_describe_condition_62;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YgooSconditionsYdescribe_condition,T54);
  lit_137 = YPPsym((P)"<no-next-methods-error>");
  T58 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T57 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_137),T58);
  VARSET(YgooSconditionsYLno_next_methods_errorG,T57);
  lit_138 = YPPsym((P)"no-next-methods-error");
  lit_139 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T59 = YPsig(LITREF(lit_139),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_next_methods_error = YPmet(FUNCODEREF(Yno_next_methods_error),LITREF(lit_138),T59,ENVNUL,PNUL,sloc(298));
  T60 = Yno_next_methods_error;
  VARSET(Yno_next_methods_error,T60);
  lit_140 = YPPlist(1,YPPsym((P)"c"));
  lit_141 = YPsb((P)"No next-methods on %= when called with %=.");
  T61 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YgooSconditionsYLno_next_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_64 = YPmet(FUNCODEREF(fun_describe_condition_64),LITREF(lit_3),T61,ENVNUL,PNUL,sloc(302));
  T63 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T64 = fun_describe_condition_64;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YgooSconditionsYdescribe_condition,T62);
  lit_142 = YPPsym((P)"<cpl-error>");
  T66 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T65 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_142),T66);
  VARSET(YgooSconditionsYLcpl_errorG,T65);
  lit_143 = YPPsym((P)"cpl-error");
  lit_144 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T67 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ycpl_error = YPmet(FUNCODEREF(Ycpl_error),LITREF(lit_143),T67,ENVNUL,PNUL,sloc(308));
  T68 = Ycpl_error;
  VARSET(Ycpl_error,T68);
  lit_145 = YPPsym((P)"<compiler-error>");
  T70 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T69 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_145),T70);
  VARSET(YgooSconditionsYLcompiler_errorG,T69);
  lit_146 = YPPsym((P)"<syntax-error>");
  T73 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T72 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),T73);
  T71 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_146),T72);
  VARSET(YgooSconditionsYLsyntax_errorG,T71);
  lit_147 = YPPsym((P)"syntax-error");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T74 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ysyntax_error = YPmet(FUNCODEREF(Ysyntax_error),LITREF(lit_147),T74,ENVNUL,PNUL,sloc(315));
  T75 = Ysyntax_error;
  VARSET(Ysyntax_error,T75);
  lit_149 = YPPsym((P)"<macro-error>");
  T77 = (P)YPpair(VARREF(YgooSconditionsYLsyntax_errorG),Ynil);
  T76 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_149),T77);
  VARSET(YgooSconditionsYLmacro_errorG,T76);
  lit_150 = YPPsym((P)"macro-error-name");
  lit_151 = YPPlist(1,YPPsym((P)"_x"));
  T78 = YPsig(LITREF(lit_151),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_name_67 = YPmet(FUNCODEREF(fun_macro_error_name_67),LITREF(lit_150),T78,ENVNUL,PNUL,sloc(320));
  T80 = VARREF_OR(YgooSconditionsYmacro_error_name,YPfalse);
  T81 = fun_macro_error_name_67;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YgooSconditionsYmacro_error_name,T79);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_152 = YPPsym((P)"macro-error-arguments");
  lit_153 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_153),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_68 = YPmet(FUNCODEREF(fun_macro_error_arguments_68),LITREF(lit_152),T82,ENVNUL,PNUL,sloc(321));
  T84 = VARREF_OR(YgooSconditionsYmacro_error_arguments,YPfalse);
  T85 = fun_macro_error_arguments_68;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YgooSconditionsYmacro_error_arguments,T83);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_arguments),YPfalse,VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_154 = YPPsym((P)"macro-error");
  lit_155 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"args"));
  T86 = YPsig(LITREF(lit_155),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmacro_error = YPmet(FUNCODEREF(YgooSmacrosYmacro_error),LITREF(lit_154),T86,ENVNUL,PNUL,sloc(323));
  T87 = YgooSmacrosYmacro_error;
  VARSET(YgooSmacrosYmacro_error,T87);
  lit_156 = YPPlist(1,YPPsym((P)"c"));
  lit_157 = YPsb((P)"Macro expansion failure for %s when called with %=.");
  T88 = YPsig(LITREF(lit_156),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_70 = YPmet(FUNCODEREF(fun_describe_condition_70),LITREF(lit_3),T88,ENVNUL,PNUL,sloc(326));
  T90 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T91 = fun_describe_condition_70;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YgooSconditionsYdescribe_condition,T89);
  lit_158 = YPPsym((P)"<stack-overflow>");
  T93 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T92 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_158),T93);
  VARSET(YgooSconditionsYLstack_overflowG,T92);
  lit_159 = YPPsym((P)"stack-overflow-error");
  T94 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ystack_overflow_error = YPmet(FUNCODEREF(Ystack_overflow_error),LITREF(lit_159),T94,ENVNUL,PNUL,sloc(332));
  T95 = Ystack_overflow_error;
  VARSET(Ystack_overflow_error,T95);
  lit_160 = YPPlist(1,YPPsym((P)"c"));
  lit_161 = YPsb((P)"Stack overflow.");
  T96 = YPsig(LITREF(lit_160),YPPlist(1,VARREF(YgooSconditionsYLstack_overflowG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_72 = YPmet(FUNCODEREF(fun_describe_condition_72),LITREF(lit_3),T96,ENVNUL,PNUL,sloc(335));
  T98 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T99 = fun_describe_condition_72;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YgooSconditionsYdescribe_condition,T97);
  lit_162 = YPPsym((P)"<internal-error>");
  T101 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T100 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_162),T101);
  VARSET(YgooSconditionsYLinternal_errorG,T100);
  lit_163 = YPPsym((P)"internal-error");
  lit_164 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T102 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinternal_error = YPmet(FUNCODEREF(Yinternal_error),LITREF(lit_163),T102,ENVNUL,PNUL,sloc(339));
  T103 = Yinternal_error;
  VARSET(Yinternal_error,T103);
  lit_165 = YPPsym((P)"<assert-error>");
  T105 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T104 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_165),T105);
  VARSET(YgooSconditionsYLassert_errorG,T104);
  lit_166 = YPPsym((P)"assert-error");
  lit_167 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T106 = YPsig(LITREF(lit_167),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yassert_error = YPmet(FUNCODEREF(Yassert_error),LITREF(lit_166),T106,ENVNUL,PNUL,sloc(345));
  T107 = Yassert_error;
  VARSET(Yassert_error,T107);
  lit_168 = YPPlist(1,YPPsym((P)"c"));
  lit_169 = YPsb((P)"Assert failure ");
  T108 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YgooSconditionsYLassert_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_75 = YPmet(FUNCODEREF(fun_describe_condition_75),LITREF(lit_3),T108,ENVNUL,PNUL,sloc(349));
  T110 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T111 = fun_describe_condition_75;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YgooSconditionsYdescribe_condition,T109);
  lit_170 = YPPsym((P)"<range-error>");
  T113 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T112 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_170),T113);
  VARSET(YgooSconditionsYLrange_errorG,T112);
  lit_171 = YPPsym((P)"range-error-collection");
  lit_172 = YPPlist(1,YPPsym((P)"_x"));
  T116 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T115 = fun_range_error_collection_76 = YPmet(FUNCODEREF(fun_range_error_collection_76),LITREF(lit_171),T116,ENVNUL,PNUL,sloc(353));
  T119 = VARREF_OR(YgooSconditionsYrange_error_collection,YPfalse);
  T120 = fun_range_error_collection_76;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  T117 = VARSET(YgooSconditionsYrange_error_collection,T118);
  T114 = T117;
  return T114;
}

P YgooSconditionsY___main_3___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),YPfalse,VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_173 = YPPsym((P)"range-error-key");
  lit_174 = YPPlist(1,YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_key_77 = YPmet(FUNCODEREF(fun_range_error_key_77),LITREF(lit_173),T0,ENVNUL,PNUL,sloc(354));
  T2 = VARREF_OR(YgooSconditionsYrange_error_key,YPfalse);
  T3 = fun_range_error_key_77;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YgooSconditionsYrange_error_key,T1);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_key),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_175 = YPPsym((P)"range-error");
  lit_176 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"k"));
  T4 = YPsig(LITREF(lit_176),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_78 = YPmet(FUNCODEREF(fun_range_error_78),LITREF(lit_175),T4,ENVNUL,PNUL,sloc(356));
  T6 = VARREF_OR(Yrange_error,YPfalse);
  T7 = fun_range_error_78;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(Yrange_error,T5);
  lit_177 = YPPlist(1,YPPsym((P)"c"));
  lit_178 = YPsb((P)"Nonexistent key %= in %=");
  T8 = YPsig(LITREF(lit_177),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_79 = YPmet(FUNCODEREF(fun_describe_condition_79),LITREF(lit_3),T8,ENVNUL,PNUL,sloc(359));
  T10 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T11 = fun_describe_condition_79;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YgooSconditionsYdescribe_condition,T9);
  lit_179 = YPPsym((P)"<io-error>");
  T13 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T12 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_179),T13);
  VARSET(YgooSconditionsYLio_errorG,T12);
  lit_180 = YPPsym((P)"<file-opening-error>");
  T15 = (P)YPpair(VARREF(YgooSconditionsYLio_errorG),Ynil);
  T14 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_180),T15);
  VARSET(YgooSconditionsYLfile_opening_errorG,T14);
  lit_181 = YPPsym((P)"file-opening-error-filename");
  lit_182 = YPPlist(1,YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_80 = YPmet(FUNCODEREF(fun_file_opening_error_filename_80),LITREF(lit_181),T16,ENVNUL,PNUL,sloc(366));
  T18 = VARREF_OR(YgooSconditionsYfile_opening_error_filename,YPfalse);
  T19 = fun_file_opening_error_filename_80;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YgooSconditionsYfile_opening_error_filename,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_183 = YPPsym((P)"file-opening-error");
  lit_184 = YPPlist(1,YPPsym((P)"filename"));
  T20 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_81 = YPmet(FUNCODEREF(fun_file_opening_error_81),LITREF(lit_183),T20,ENVNUL,PNUL,sloc(368));
  T22 = VARREF_OR(Yfile_opening_error,YPfalse);
  T23 = fun_file_opening_error_81;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(Yfile_opening_error,T21);
  lit_185 = YPPlist(1,YPPsym((P)"c"));
  lit_186 = YPsb((P)"Failed to open %s.");
  T24 = YPsig(LITREF(lit_185),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_82 = YPmet(FUNCODEREF(fun_describe_condition_82),LITREF(lit_3),T24,ENVNUL,PNUL,sloc(371));
  T26 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T27 = fun_describe_condition_82;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YgooSconditionsYdescribe_condition,T25);
  lit_187 = YPPsym((P)"<unbound-error>");
  T29 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_187),T29);
  VARSET(YgooSconditionsYLunbound_errorG,T28);
  lit_188 = YPPsym((P)"<unbound-variable-error>");
  T31 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T30 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_188),T31);
  VARSET(YgooSconditionsYLunbound_variable_errorG,T30);
  lit_189 = YPPsym((P)"unbound-variable-error-variable");
  lit_190 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_83 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_83),LITREF(lit_189),T32,ENVNUL,PNUL,sloc(377));
  T34 = VARREF_OR(YgooSconditionsYunbound_variable_error_variable,YPfalse);
  T35 = fun_unbound_variable_error_variable_83;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YgooSconditionsYunbound_variable_error_variable,T33);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),YPfalse,VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_191 = YPPlist(1,YPPsym((P)"c"));
  lit_192 = YPsb((P)"Unbound variable %s.");
  T36 = YPsig(LITREF(lit_191),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_84 = YPmet(FUNCODEREF(fun_describe_condition_84),LITREF(lit_3),T36,ENVNUL,PNUL,sloc(379));
  T38 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T39 = fun_describe_condition_84;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YgooSconditionsYdescribe_condition,T37);
  lit_193 = YPPsym((P)"<property-error>");
  T41 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T40 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_193),T41);
  VARSET(YgooSconditionsYLproperty_errorG,T40);
  lit_194 = YPPsym((P)"property-error-owner");
  lit_195 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_owner_85 = YPmet(FUNCODEREF(fun_property_error_owner_85),LITREF(lit_194),T42,ENVNUL,PNUL,sloc(383));
  T44 = VARREF_OR(YgooSconditionsYproperty_error_owner,YPfalse);
  T45 = fun_property_error_owner_85;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YgooSconditionsYproperty_error_owner,T43);
  lit_196 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T46,ENVNUL,PNUL,sloc(383));
  T47 = fun_86;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_owner),YPfalse,VARREF(YLanyG),T47);
  lit_197 = YPPsym((P)"property-error-generic");
  lit_198 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_generic_87 = YPmet(FUNCODEREF(fun_property_error_generic_87),LITREF(lit_197),T48,ENVNUL,PNUL,sloc(384));
  T50 = VARREF_OR(YgooSconditionsYproperty_error_generic,YPfalse);
  T51 = fun_property_error_generic_87;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YgooSconditionsYproperty_error_generic,T49);
  lit_199 = YPPlist(1,YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_199),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T52,ENVNUL,PNUL,sloc(384));
  T53 = fun_88;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_generic),YPfalse,VARREF(YLanyG),T53);
  lit_200 = YPPsym((P)"<property-unbound-error>");
  T56 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T55 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T56);
  T54 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_200),T55);
  VARSET(YgooSconditionsYLproperty_unbound_errorG,T54);
  lit_201 = YPPsym((P)"property-unbound-error");
  lit_202 = YPPlist(1,YPPsym((P)"owner"));
  T57 = YPsig(LITREF(lit_202),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yproperty_unbound_error = YPmet(FUNCODEREF(Yproperty_unbound_error),LITREF(lit_201),T57,ENVNUL,PNUL,sloc(388));
  T58 = Yproperty_unbound_error;
  VARSET(Yproperty_unbound_error,T58);
  lit_203 = YPPlist(1,YPPsym((P)"c"));
  lit_204 = YPsb((P)"Unbound property on %=.");
  T59 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YgooSconditionsYLproperty_unbound_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_90 = YPmet(FUNCODEREF(fun_describe_condition_90),LITREF(lit_3),T59,ENVNUL,PNUL,sloc(391));
  T61 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T62 = fun_describe_condition_90;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YgooSconditionsYdescribe_condition,T60);
  lit_205 = YPPsym((P)"<property-not-found-error>");
  T64 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),Ynil);
  T63 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_205),T64);
  VARSET(YgooSconditionsYLproperty_not_found_errorG,T63);
  lit_206 = YPPsym((P)"property-not-found-error");
  lit_207 = YPPlist(2,YPPsym((P)"generic"),YPPsym((P)"owner"));
  T65 = YPsig(LITREF(lit_207),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yproperty_not_found_error = YPmet(FUNCODEREF(Yproperty_not_found_error),LITREF(lit_206),T65,ENVNUL,PNUL,sloc(396));
  T66 = Yproperty_not_found_error;
  VARSET(Yproperty_not_found_error,T66);
  lit_208 = YPPlist(1,YPPsym((P)"c"));
  lit_209 = YPsb((P)"Property %s not found in %s.");
  T67 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YgooSconditionsYLproperty_not_found_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_92 = YPmet(FUNCODEREF(fun_describe_condition_92),LITREF(lit_3),T67,ENVNUL,PNUL,sloc(401));
  T69 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T70 = fun_describe_condition_92;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YgooSconditionsYdescribe_condition,T68);
  lit_210 = YPPsym((P)"<property-type-error>");
  T73 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T72 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T73);
  T71 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_210),T72);
  VARSET(YgooSconditionsYLproperty_type_errorG,T71);
  lit_211 = YPPsym((P)"property-type-error");
  lit_212 = YPPlist(3,YPPsym((P)"generic"),YPPsym((P)"value"),YPPsym((P)"type"));
  T74 = YPsig(LITREF(lit_212),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yproperty_type_error = YPmet(FUNCODEREF(Yproperty_type_error),LITREF(lit_211),T74,ENVNUL,PNUL,sloc(407));
  T75 = Yproperty_type_error;
  VARSET(Yproperty_type_error,T75);
  lit_213 = YPPlist(1,YPPsym((P)"c"));
  lit_214 = YPsb((P)"Property %s ");
  T76 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YgooSconditionsYLproperty_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_94 = YPmet(FUNCODEREF(fun_describe_condition_94),LITREF(lit_3),T76,ENVNUL,PNUL,sloc(413));
  T78 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T79 = fun_describe_condition_94;
  T77 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T78,T79);
  VARSET(YgooSconditionsYdescribe_condition,T77);
  lit_215 = YPPsym((P)"<as-error>");
  T81 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T80 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_215),T81);
  VARSET(YgooSconditionsYLas_errorG,T80);
  lit_216 = YPPsym((P)"as-error");
  lit_217 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"value"));
  T82 = YPsig(LITREF(lit_217),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yas_error = YPmet(FUNCODEREF(Yas_error),LITREF(lit_216),T82,ENVNUL,PNUL,sloc(418));
  T83 = Yas_error;
  VARSET(Yas_error,T83);
  lit_218 = YPPlist(1,YPPsym((P)"c"));
  lit_219 = YPsb((P)"No AS method for type %t and value %=.");
  T84 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YgooSconditionsYLas_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_96 = YPmet(FUNCODEREF(fun_describe_condition_96),LITREF(lit_3),T84,ENVNUL,PNUL,sloc(421));
  T86 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T87 = fun_describe_condition_96;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YgooSconditionsYdescribe_condition,T85);
  lit_220 = YPPsym((P)"<arithmetic-error>");
  T89 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T88 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_220),T89);
  VARSET(YgooSconditionsYLarithmetic_errorG,T88);
  lit_221 = YPPsym((P)"arithmetic-error");
  lit_222 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T90 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yarithmetic_error = YPmet(FUNCODEREF(Yarithmetic_error),LITREF(lit_221),T90,ENVNUL,PNUL,sloc(427));
  T91 = Yarithmetic_error;
  VARSET(Yarithmetic_error,T91);
  lit_223 = YPPsym((P)"<keyboard-interrupt>");
  T93 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T92 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_223),T93);
  VARSET(YgooSconditionsYLkeyboard_interruptG,T92);
  lit_224 = YPPsym((P)"keyboard-interrupt");
  T94 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_224),T94,ENVNUL,PNUL,sloc(433));
  T95 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T95);
  lit_225 = YPPsym((P)"do-handlers-of-type");
  lit_226 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"f"));
  T97 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T96 = YPsig(LITREF(lit_226),YPPlist(2,T97,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYdo_handlers_of_type = YPmet(FUNCODEREF(YgooSconditionsYdo_handlers_of_type),LITREF(lit_225),T96,ENVNUL,PNUL,sloc(464));
  T98 = YgooSconditionsYdo_handlers_of_type;
  VARSET(YgooSconditionsYdo_handlers_of_type,T98);
  lit_227 = YPPsym((P)"list-handlers");
  lit_228 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"out"));
  lit_229 = YPPlist(1,YPPsym((P)"handler"));
  lit_230 = YPsb((P)"%d. %s.\n");
  T101 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T101,ENVNUL,PNUL,sloc(483));
  T100 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T99 = YPsig(LITREF(lit_228),YPPlist(2,T100,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  YgooSconditionsYlist_handlers = YPmet(FUNCODEREF(YgooSconditionsYlist_handlers),LITREF(lit_227),T99,ENVNUL,PNUL,sloc(479));
  T102 = YgooSconditionsYlist_handlers;
  VARSET(YgooSconditionsYlist_handlers,T102);
  lit_231 = YPPsym((P)"invoke-handler-interactively");
  lit_232 = YPPlist(3,YPPsym((P)"handler"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_233 = YPsb((P)"Handler %= does not match condition %=");
  lit_234 = YPsb((P)"Handler %= is not installed");
  T104 = YPsig(LITREF(lit_77),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T104,ENVNUL,PNUL,sloc(506));
  T103 = YPsig(LITREF(lit_232),YPPlist(3,VARREF(YgooSconditionsYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYinvoke_handler_interactively = YPmet(FUNCODEREF(YgooSconditionsYinvoke_handler_interactively),LITREF(lit_231),T103,ENVNUL,PNUL,sloc(493));
  T105 = YgooSconditionsYinvoke_handler_interactively;
  VARSET(YgooSconditionsYinvoke_handler_interactively,T105);
  lit_235 = YPPsym((P)"choose-handler");
  lit_236 = YPPlist(3,YPPsym((P)"type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_237 = YPsb((P)"Please pick a handler: ");
  lit_238 = YPsb((P)"No such handler %d");
  T107 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T106 = YPsig(LITREF(lit_236),YPPlist(3,T107,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYchoose_handler = YPmet(FUNCODEREF(YgooSconditionsYchoose_handler),LITREF(lit_235),T106,ENVNUL,PNUL,sloc(510));
  T108 = YgooSconditionsYchoose_handler;
  VARSET(YgooSconditionsYchoose_handler,T108);
  VARSET(YTrestarts_okQT,YPtrue);
  if (YPfalse != YPfalse) {
    T110 = VARREF(YgooSconditionsYread);
  } else {
    T110 = YPfalse;
  }
  T109 = T110;
  return T109;
}

P YgooSconditionsY___main_4___() {
  P T0;
DEFCREGS();
  if (YPfalse != YPfalse) {
  } else {
  }
  if (YPfalse != YPfalse) {
  } else {
  }
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSapp;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSopts;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStup;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSmag;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSclass},
  {&module_info_gooSmacros},
  {&module_info_gooSmath},
  {&module_info_gooStypes},
  {&module_info_gooSapp},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsScolx},
  {&module_info_gooScolsSseq},
  {&module_info_gooScolsSseqx},
  {&module_info_gooScolsSopts},
  {&module_info_gooScolsSlst},
  {&module_info_gooScolsStup},
  {&module_info_gooScolsSvec},
  {&module_info_gooScolsStab},
  {&module_info_gooSioSport},
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
  {"bit?", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
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
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
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
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
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
  {"<fun>", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
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
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
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
  {"@head", &module_info_gooSboot, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSclass, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
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
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
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
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
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
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
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
  {"items", &module_info_gooScolsScol, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
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
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fin", &module_info_gooSboot, NULL},
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
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
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
  {"%class-forward-setter", &module_info_gooSboot, NULL},
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
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
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
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
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
  {"force-out", &module_info_gooSioSport, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
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
  {"object-props", &module_info_gooSboot, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
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
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
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
  {"<unbound-variable-error>", CVAR, &YgooSconditionsYLunbound_variable_errorG},
  {"file-opening-error-filename", CVAR, &YgooSconditionsYfile_opening_error_filename},
  {"<internal-error>", CVAR, &YgooSconditionsYLinternal_errorG},
  {"<assert-error>", CVAR, &YgooSconditionsYLassert_errorG},
  {"<error>", CVAR, &YgooSconditionsYLerrorG},
  {"<handler>", CVAR, &YgooSconditionsYLhandlerG},
  {"<type-error>", CVAR, &YgooSconditionsYLtype_errorG},
  {"<macro-error>", CVAR, &YgooSconditionsYLmacro_errorG},
  {"<no-next-methods-error>", CVAR, &YgooSconditionsYLno_next_methods_errorG},
  {"handler-function", CVAR, &YgooSconditionsYhandler_function},
  {"property-error-generic", CVAR, &YgooSconditionsYproperty_error_generic},
  {"<argument-type-error>", CVAR, &YgooSconditionsYLargument_type_errorG},
  {"<return-type-error>", CVAR, &YgooSconditionsYLreturn_type_errorG},
  {"<unknown-function-error>", CVAR, &YgooSconditionsYLunknown_function_errorG},
  {"<handler-info>", CVAR, &YgooSconditionsYLhandler_infoG},
  {"<range-error>", CVAR, &YgooSconditionsYLrange_errorG},
  {"<arity-error>", CVAR, &YgooSconditionsYLarity_errorG},
  {"<narity-error>", CVAR, &YgooSconditionsYLnarity_errorG},
  {"<ambiguous-method-error>", CVAR, &YgooSconditionsYLambiguous_method_errorG},
  {"<unbound-error>", CVAR, &YgooSconditionsYLunbound_errorG},
  {"<incongruent-method-error>", CVAR, &YgooSconditionsYLincongruent_method_errorG},
  {"type-error-value", CVAR, &YgooSconditionsYtype_error_value},
  {"handler-info", CVAR, &YgooSconditionsYhandler_info},
  {"read", CVAR, &YgooSconditionsYread},
  {"incongruent-method-error-method", CVAR, &YgooSconditionsYincongruent_method_error_method},
  {"---main-4---", PVAR, NULL},
  {"build-condition-for-handler-interactively", CVAR, &YgooSconditionsYbuild_condition_for_handler_interactively},
  {"<simple-error>", CVAR, &YgooSconditionsYLsimple_errorG},
  {"<restart>", CVAR, &YgooSconditionsYLrestartG},
  {"<syntax-error>", CVAR, &YgooSconditionsYLsyntax_errorG},
  {"default-handler-description", CVAR, &YgooSconditionsYdefault_handler_description},
  {"describe-condition", CVAR, &YgooSconditionsYdescribe_condition},
  {"handler-active?", CVAR, &YgooSconditionsYhandler_activeQ},
  {"<call-error>", CVAR, &YgooSconditionsYLcall_errorG},
  {"<as-error>", CVAR, &YgooSconditionsYLas_errorG},
  {"sig", CVAR, &YgooSconditionsYsig},
  {"incongruent-method-error-generic", CVAR, &YgooSconditionsYincongruent_method_error_generic},
  {"range-error-collection", CVAR, &YgooSconditionsYrange_error_collection},
  {"invoke-handler-interactively", CVAR, &YgooSconditionsYinvoke_handler_interactively},
  {"<cpl-error>", CVAR, &YgooSconditionsYLcpl_errorG},
  {"<condition>", CVAR, &YgooSconditionsYLconditionG},
  {"$default-handler-info", CVAR, &YgooSconditionsYDdefault_handler_info},
  {"<simple-condition>", CVAR, &YgooSconditionsYLsimple_conditionG},
  {"call-error-function", CVAR, &YgooSconditionsYcall_error_function},
  {"msg", CVAR, &YgooSconditionsYmsg},
  {"---main-0---", PVAR, NULL},
  {"<file-opening-error>", CVAR, &YgooSconditionsYLfile_opening_errorG},
  {"<arithmetic-error>", CVAR, &YgooSconditionsYLarithmetic_errorG},
  {"<property-unbound-error>", CVAR, &YgooSconditionsYLproperty_unbound_errorG},
  {"fab-handler", CVAR, &YgooSconditionsYfab_handler},
  {"unbound-variable-error-variable", CVAR, &YgooSconditionsYunbound_variable_error_variable},
  {"<io-error>", CVAR, &YgooSconditionsYLio_errorG},
  {"condition-message-setter", CVAR, &YgooSconditionsYcondition_message_setter},
  {"<no-applicable-methods-error>", CVAR, &YgooSconditionsYLno_applicable_methods_errorG},
  {"<property-error>", CVAR, &YgooSconditionsYLproperty_errorG},
  {"list-handlers", CVAR, &YgooSconditionsYlist_handlers},
  {"signal-handler-list", CVAR, &YgooSconditionsYsignal_handler_list},
  {"<property-type-error>", CVAR, &YgooSconditionsYLproperty_type_errorG},
  {"handler-condition-type", CVAR, &YgooSconditionsYhandler_condition_type},
  {"type-error-type", CVAR, &YgooSconditionsYtype_error_type},
  {"handler-test", CVAR, &YgooSconditionsYhandler_test},
  {"property-error-owner", CVAR, &YgooSconditionsYproperty_error_owner},
  {"condition-arguments-setter", CVAR, &YgooSconditionsYcondition_arguments_setter},
  {"<serious-condition>", CVAR, &YgooSconditionsYLserious_conditionG},
  {"*current-handlers*", DVAR, &YgooSconditionsYTcurrent_handlersT},
  {"describe-handler", CVAR, &YgooSconditionsYdescribe_handler},
  {"---main-3---", PVAR, NULL},
  {"<compiler-error>", CVAR, &YgooSconditionsYLcompiler_errorG},
  {"do-handlers-of-type", CVAR, &YgooSconditionsYdo_handlers_of_type},
  {"range-error-key", CVAR, &YgooSconditionsYrange_error_key},
  {"condition-message", CVAR, &YgooSconditionsYcondition_message},
  {"msg-to-str", CVAR, &YgooSconditionsYmsg_to_str},
  {"<stack-overflow>", CVAR, &YgooSconditionsYLstack_overflowG},
  {"macro-error-arguments", CVAR, &YgooSconditionsYmacro_error_arguments},
  {"---main-1---", PVAR, NULL},
  {"call-error-arguments", CVAR, &YgooSconditionsYcall_error_arguments},
  {"default-handler", CVAR, &YgooSconditionsYdefault_handler},
  {"<keyboard-interrupt>", CVAR, &YgooSconditionsYLkeyboard_interruptG},
  {"---main-2---", PVAR, NULL},
  {"macro-error-name", CVAR, &YgooSconditionsYmacro_error_name},
  {"choose-handler", CVAR, &YgooSconditionsYchoose_handler},
  {"condition-arguments", CVAR, &YgooSconditionsYcondition_arguments},
  {"build-condition-interactively", CVAR, &YgooSconditionsYbuild_condition_interactively},
  {"<property-not-found-error>", CVAR, &YgooSconditionsYLproperty_not_found_errorG},
  {"handler-matches?", CVAR, &YgooSconditionsYhandler_matchesQ},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<replace-generic-restart>", NULL},
  {"choose-handler", NULL},
  {"<error>", NULL},
  {"<handler>", NULL},
  {"<type-error>", NULL},
  {"arithmetic-error", NULL},
  {"internal-error", NULL},
  {"handler-function", NULL},
  {"property-error-generic", NULL},
  {"<handler-info>", NULL},
  {"<range-error>", NULL},
  {"<ambiguous-method-error>", NULL},
  {"type-error-value", NULL},
  {"range-error", NULL},
  {"macro-error-name", NULL},
  {"read", NULL},
  {"build-condition-for-handler-interactively", NULL},
  {"handler-info-message", NULL},
  {"macro-error-arguments", NULL},
  {"<call-error>", NULL},
  {"<as-error>", NULL},
  {"<arity-error>", NULL},
  {"sig", NULL},
  {"default-handler-description", NULL},
  {"macro-error", NULL},
  {"range-error-collection", NULL},
  {"invoke-handler-interactively", NULL},
  {"<simple-error>", NULL},
  {"<condition>", NULL},
  {"<return-type-error>", NULL},
  {"<simple-condition>", NULL},
  {"call-error-function", NULL},
  {"msg", NULL},
  {"narity-error", NULL},
  {"<unbound-error>", NULL},
  {"<arithmetic-error>", NULL},
  {"<property-unbound-error>", NULL},
  {"fab-handler", NULL},
  {"unbound-variable-error-variable", NULL},
  {"<internal-error>", NULL},
  {"<io-error>", NULL},
  {"describe-condition", NULL},
  {"<unbound-variable-error>", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"<property-error>", NULL},
  {"list-handlers", NULL},
  {"<argument-type-error>", NULL},
  {"file-opening-error-filename", NULL},
  {"<property-type-error>", NULL},
  {"type-error-type", NULL},
  {"<file-opening-error>", NULL},
  {"return-type-error", NULL},
  {"<unknown-function-error>", NULL},
  {"property-error-owner", NULL},
  {"%with-monitor", NULL},
  {"<serious-condition>", NULL},
  {"*current-handlers*", NULL},
  {"describe-handler", NULL},
  {"<compiler-error>", NULL},
  {"<narity-error>", NULL},
  {"range-error-key", NULL},
  {"no-next-methods-error", NULL},
  {"handler-info-arguments", NULL},
  {"condition-message", NULL},
  {"msg-to-str", NULL},
  {"<stack-overflow>", NULL},
  {"<simple-handler-info>", NULL},
  {"argument-type-error", NULL},
  {"assert-error", NULL},
  {"error", NULL},
  {"call-error-arguments", NULL},
  {"keyboard-interrupt", NULL},
  {"<restart>", NULL},
  {"default-handler", NULL},
  {"<keyboard-interrupt>", NULL},
  {"<syntax-error>", NULL},
  {"<macro-error>", NULL},
  {"stack-overflow-error", NULL},
  {"<assert-error>", NULL},
  {"arity-error", NULL},
  {"condition-arguments", NULL},
  {"build-condition-interactively", NULL},
  {"<no-next-methods-error>", NULL},
  {"<property-not-found-error>", NULL},
  {"$default-handler-info", NULL},
  {"handler-matches?", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_gooSconditions;
MODULE_INFO module_info_gooSconditions = {
  "goo/conditions",
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
extern void load_module_gooSmath (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSapp (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsScolx (void);
extern void load_module_gooScolsSseq (void);
extern void load_module_gooScolsSseqx (void);
extern void load_module_gooScolsSopts (void);
extern void load_module_gooScolsSlst (void);
extern void load_module_gooScolsStup (void);
extern void load_module_gooScolsSvec (void);
extern void load_module_gooScolsStab (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_gooSconditions (void);

void load_module_gooSconditions (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSclass();
  load_module_gooSmacros();
  load_module_gooSmath();
  load_module_gooStypes();
  load_module_gooSapp();
  load_module_gooScolsScol();
  load_module_gooScolsScolx();
  load_module_gooScolsSseq();
  load_module_gooScolsSseqx();
  load_module_gooScolsSopts();
  load_module_gooScolsSlst();
  load_module_gooScolsStup();
  load_module_gooScolsSvec();
  load_module_gooScolsStab();
  load_module_gooSioSport();

  (P)YgooSconditionsY___main_0___();
  (P)YgooSconditionsY___main_1___();
  (P)YgooSconditionsY___main_2___();
  (P)YgooSconditionsY___main_3___();
  (P)YgooSconditionsY___main_4___();

}

/* END OF GENERATED CODE. */
