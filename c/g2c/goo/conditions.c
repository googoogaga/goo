/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"goo/conditions");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: goo/conditions */

EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
DEF(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
DEF(YgooSconditionsYhandler_test,"goo/conditions","handler-test");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSmathYatan2,"goo/math","atan2");
DEF(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
DEF(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
DEF(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
DEF(YgooSconditionsYtype_error_value_setter,"goo/conditions","type-error-value-setter");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(YgooSconditionsYcall_error_arguments_setter,"goo/conditions","call-error-arguments-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
DEF(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YgooSconditionsYrange_error_key_setter,"goo/conditions","range-error-key-setter");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YLcolIG,"goo/boot","<col.>");
DEF(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSioSportYclose,"goo/io/port","close");
DEF(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
DEF(YgooSconditionsYinvoke_handler_interactively,"goo/conditions","invoke-handler-interactively");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLrepG,"goo/boot","<rep>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YgooSconditionsYmacro_error_arguments_setter,"goo/conditions","macro-error-arguments-setter");
DEF(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YgooSconditionsYincongruent_method_error_generic_setter,"goo/conditions","incongruent-method-error-generic-setter");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
DEF(YgooSconditionsYdefault_handler_description,"goo/conditions","default-handler-description");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
DEF(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YgooSconditionsYproperty_error_owner_setter,"goo/conditions","property-error-owner-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
DEF(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YgooSconditionsYunbound_variable_error_variable_setter,"goo/conditions","unbound-variable-error-variable-setter");
EXT(YLnumG,"goo/boot","<num>");
DEF(YgooSconditionsYdescribe_handler,"goo/conditions","describe-handler");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
DEF(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(YgooSconditionsYhandler_condition_type_setter,"goo/conditions","handler-condition-type-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
DEF(YgooSconditionsYchoose_handler,"goo/conditions","choose-handler");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
DEF(YgooSconditionsYLincongruent_method_errorG,"goo/conditions","<incongruent-method-error>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Ynul,"goo/boot","nul");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
DEF(YgooSconditionsYlist_handlers,"goo/conditions","list-handlers");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
DEF(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
DEF(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(Yobject_class,"goo/boot","object-class");
DEF(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
DEF(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(YgooSconditionsYmacro_error_name_setter,"goo/conditions","macro-error-name-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooStypesYtA,"goo/types","t+");
DEF(YgooSconditionsYcondition_message_setter,"goo/conditions","condition-message-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YLlogG,"goo/boot","<log>");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YgooSconditionsYproperty_error_generic_setter,"goo/conditions","property-error-generic-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YtT,"goo/boot","t*");
DEF(YgooSconditionsYincongruent_method_error_generic,"goo/conditions","incongruent-method-error-generic");
EXT(Yprop_init,"goo/boot","prop-init");
DEF(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YLanyG,"goo/boot","<any>");
DEF(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(Ycpl_error,"goo/boot","cpl-error");
DEF(YgooSconditionsYcall_error_function_setter,"goo/conditions","call-error-function-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
DEF(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
DEF(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yerror,"goo/boot","error");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YgooSconditionsYsignal_handler_list,"goo/conditions","signal-handler-list");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YgooSconditionsYhandler_condition_type,"goo/conditions","handler-condition-type");
DEF(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DYNDEF(YgooSconditionsYTcurrent_handlersT,"goo/conditions","*current-handlers*");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YgooSconditionsYhandler_info_setter,"goo/conditions","handler-info-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
DEF(YgooSconditionsYincongruent_method_error_method_setter,"goo/conditions","incongruent-method-error-method-setter");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
DEF(YgooSconditionsYhandler_info_message_setter,"goo/conditions","handler-info-message-setter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YOlst,"goo/boot","@lst");
DEF(YgooSconditionsYdo_handlers_of_type,"goo/conditions","do-handlers-of-type");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YgooSconditionsYincongruent_method_error_method,"goo/conditions","incongruent-method-error-method");
DEF(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ylst,"goo/boot","lst");
EXT(Yprop_value,"goo/boot","prop-value");
DEF(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YgooSconditionsYtype_error_type_setter,"goo/conditions","type-error-type-setter");
DEF(YgooSconditionsYfile_opening_error_filename_setter,"goo/conditions","file-opening-error-filename-setter");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YgooSconditionsYhandler_test_setter,"goo/conditions","handler-test-setter");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
DEF(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
DEF(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YgooSconditionsYcondition_arguments_setter,"goo/conditions","condition-arguments-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
DEF(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
DEF(YgooSconditionsYhandler_info,"goo/conditions","handler-info");
DEF(YgooSconditionsYhandler_info_arguments_setter,"goo/conditions","handler-info-arguments-setter");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YgooSconditionsYbuild_condition_for_handler_interactively,"goo/conditions","build-condition-for-handler-interactively");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
DEF(YgooSconditionsYread,"goo/conditions","read");
DEF(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YgooSconditionsYhandler_function_setter,"goo/conditions","handler-function-setter");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ytup,"goo/boot","tup");
DEF(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YgooSconditionsYmsg,"goo/conditions","msg");
DEF(YgooSconditionsYLcpl_errorG,"goo/conditions","<cpl-error>");
DEF(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
DEF(YgooSconditionsYbuild_condition_interactively,"goo/conditions","build-condition-interactively");
DEF(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYB,"goo/math","&");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(Yclass_of,"goo/boot","class-of");
DEF(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSmathYE,"goo/math","=");
DEF(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
DEF(YgooSconditionsYhandler_activeQ,"goo/conditions","handler-active?");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YgooSconditionsYsig,"goo/conditions","sig");
DEF(YgooSconditionsYrange_error_collection_setter,"goo/conditions","range-error-collection-setter");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLlstG,"goo/boot","<lst>");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_190);
DEFLIT(lit_142);
DEFLIT(lit_162);
DEFLIT(lit_137);
DEFLIT(lit_121);
DEFLIT(lit_3);
DEFLIT(lit_177);
DEFLIT(lit_108);
DEFLIT(lit_251);
DEFLIT(lit_150);
DEFLIT(lit_277);
DEFLIT(lit_120);
DEFLIT(lit_164);
DEFLIT(lit_188);
DEFLIT(lit_175);
DEFLIT(lit_169);
DEFLIT(lit_226);
DEFLIT(lit_151);
DEFLIT(lit_192);
DEFLIT(lit_269);
DEFLIT(lit_94);
DEFLIT(lit_227);
DEFLIT(lit_12);
DEFLIT(lit_170);
DEFLIT(lit_87);
DEFLIT(lit_27);
DEFLIT(lit_131);
DEFLIT(lit_203);
DEFLIT(lit_200);
DEFLIT(lit_42);
DEFLIT(lit_258);
DEFLIT(lit_76);
DEFLIT(lit_237);
DEFLIT(lit_130);
DEFLIT(lit_8);
DEFLIT(lit_152);
DEFLIT(lit_257);
DEFLIT(lit_140);
DEFLIT(lit_89);
DEFLIT(lit_206);
DEFLIT(lit_141);
DEFLIT(lit_57);
DEFLIT(lit_163);
DEFLIT(lit_112);
DEFLIT(lit_10);
DEFLIT(lit_127);
DEFLIT(lit_69);
DEFLIT(lit_104);
DEFLIT(lit_246);
DEFLIT(lit_218);
DEFLIT(lit_86);
DEFLIT(lit_80);
DEFLIT(lit_193);
DEFLIT(lit_81);
DEFLIT(lit_248);
DEFLIT(lit_156);
DEFLIT(lit_147);
DEFLIT(lit_65);
DEFLIT(lit_91);
DEFLIT(lit_13);
DEFLIT(lit_217);
DEFLIT(lit_219);
DEFLIT(lit_62);
DEFLIT(lit_60);
DEFLIT(lit_113);
DEFLIT(lit_109);
DEFLIT(lit_20);
DEFLIT(lit_180);
DEFLIT(lit_135);
DEFLIT(lit_225);
DEFLIT(lit_43);
DEFLIT(lit_100);
DEFLIT(lit_66);
DEFLIT(lit_223);
DEFLIT(lit_126);
DEFLIT(lit_44);
DEFLIT(lit_39);
DEFLIT(lit_241);
DEFLIT(lit_122);
DEFLIT(lit_116);
DEFLIT(lit_271);
DEFLIT(lit_47);
DEFLIT(lit_189);
DEFLIT(lit_17);
DEFLIT(lit_178);
DEFLIT(lit_183);
DEFLIT(lit_233);
DEFLIT(lit_270);
DEFLIT(lit_231);
DEFLIT(lit_267);
DEFLIT(lit_272);
DEFLIT(lit_64);
DEFLIT(lit_107);
DEFLIT(lit_83);
DEFLIT(lit_46);
DEFLIT(lit_204);
DEFLIT(lit_82);
DEFLIT(lit_11);
DEFLIT(lit_253);
DEFLIT(lit_28);
DEFLIT(lit_154);
DEFLIT(lit_106);
DEFLIT(lit_96);
DEFLIT(lit_90);
DEFLIT(lit_173);
DEFLIT(lit_194);
DEFLIT(lit_16);
DEFLIT(lit_148);
DEFLIT(lit_247);
DEFLIT(lit_119);
DEFLIT(lit_201);
DEFLIT(lit_181);
DEFLIT(lit_61);
DEFLIT(lit_115);
DEFLIT(lit_211);
DEFLIT(lit_98);
DEFLIT(lit_167);
DEFLIT(lit_85);
DEFLIT(lit_18);
DEFLIT(lit_159);
DEFLIT(lit_7);
DEFLIT(lit_19);
DEFLIT(lit_212);
DEFLIT(lit_145);
DEFLIT(lit_70);
DEFLIT(lit_210);
DEFLIT(lit_244);
DEFLIT(lit_185);
DEFLIT(lit_97);
DEFLIT(lit_99);
DEFLIT(lit_252);
DEFLIT(lit_174);
DEFLIT(lit_265);
DEFLIT(lit_209);
DEFLIT(lit_249);
DEFLIT(lit_224);
DEFLIT(lit_35);
DEFLIT(lit_79);
DEFLIT(lit_228);
DEFLIT(lit_171);
DEFLIT(lit_59);
DEFLIT(lit_273);
DEFLIT(lit_48);
DEFLIT(lit_88);
DEFLIT(lit_14);
DEFLIT(lit_36);
DEFLIT(lit_2);
DEFLIT(lit_53);
DEFLIT(lit_6);
DEFLIT(lit_30);
DEFLIT(lit_77);
DEFLIT(lit_125);
DEFLIT(lit_75);
DEFLIT(lit_205);
DEFLIT(lit_239);
DEFLIT(lit_196);
DEFLIT(lit_243);
DEFLIT(lit_32);
DEFLIT(lit_191);
DEFLIT(lit_186);
DEFLIT(lit_40);
DEFLIT(lit_102);
DEFLIT(lit_222);
DEFLIT(lit_208);
DEFLIT(lit_168);
DEFLIT(lit_264);
DEFLIT(lit_161);
DEFLIT(lit_157);
DEFLIT(lit_275);
DEFLIT(lit_51);
DEFLIT(lit_187);
DEFLIT(lit_123);
DEFLIT(lit_274);
DEFLIT(lit_63);
DEFLIT(lit_213);
DEFLIT(lit_9);
DEFLIT(lit_21);
DEFLIT(lit_124);
DEFLIT(lit_182);
DEFLIT(lit_184);
DEFLIT(lit_234);
DEFLIT(lit_114);
DEFLIT(lit_92);
DEFLIT(lit_74);
DEFLIT(lit_165);
DEFLIT(lit_132);
DEFLIT(lit_139);
DEFLIT(lit_111);
DEFLIT(lit_58);
DEFLIT(lit_254);
DEFLIT(lit_56);
DEFLIT(lit_260);
DEFLIT(lit_29);
DEFLIT(lit_55);
DEFLIT(lit_261);
DEFLIT(lit_68);
DEFLIT(lit_134);
DEFLIT(lit_263);
DEFLIT(lit_255);
DEFLIT(lit_78);
DEFLIT(lit_22);
DEFLIT(lit_160);
DEFLIT(lit_0);
DEFLIT(lit_15);
DEFLIT(lit_197);
DEFLIT(lit_153);
DEFLIT(lit_149);
DEFLIT(lit_45);
DEFLIT(lit_95);
DEFLIT(lit_245);
DEFLIT(lit_84);
DEFLIT(lit_202);
DEFLIT(lit_24);
DEFLIT(lit_71);
DEFLIT(lit_26);
DEFLIT(lit_220);
DEFLIT(lit_276);
DEFLIT(lit_138);
DEFLIT(lit_172);
DEFLIT(lit_155);
DEFLIT(lit_73);
DEFLIT(lit_235);
DEFLIT(lit_215);
DEFLIT(lit_240);
DEFLIT(lit_1);
DEFLIT(lit_117);
DEFLIT(lit_259);
DEFLIT(lit_221);
DEFLIT(lit_236);
DEFLIT(lit_242);
DEFLIT(lit_52);
DEFLIT(lit_136);
DEFLIT(lit_41);
DEFLIT(lit_230);
DEFLIT(lit_238);
DEFLIT(lit_229);
DEFLIT(lit_250);
DEFLIT(lit_158);
DEFLIT(lit_25);
DEFLIT(lit_129);
DEFLIT(lit_5);
DEFLIT(lit_118);
DEFLIT(lit_268);
DEFLIT(lit_232);
DEFLIT(lit_195);
DEFLIT(lit_207);
DEFLIT(lit_105);
DEFLIT(lit_93);
DEFLIT(lit_143);
DEFLIT(lit_4);
DEFLIT(lit_278);
DEFLIT(lit_179);
DEFLIT(lit_31);
DEFLIT(lit_72);
DEFLIT(lit_49);
DEFLIT(lit_133);
DEFLIT(lit_144);
DEFLIT(lit_214);
DEFLIT(lit_176);
DEFLIT(lit_37);
DEFLIT(lit_198);
DEFLIT(lit_103);
DEFLIT(lit_256);
DEFLIT(lit_216);
DEFLIT(lit_33);
DEFLIT(lit_266);
DEFLIT(lit_146);
DEFLIT(lit_199);
DEFLIT(lit_166);
DEFLIT(lit_23);
DEFLIT(lit_38);
DEFLIT(lit_262);
DEFLIT(lit_54);
DEFLIT(lit_101);
DEFLIT(lit_50);
DEFLIT(lit_128);
DEFLIT(lit_110);
DEFLIT(lit_34);
DEFLIT(lit_67);

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
LOCFOR(fun_incongruent_method_error_generic_setter_15);
LOCFOR(fun_incongruent_method_error_method_16);
LOCFOR(fun_incongruent_method_error_method_setter_17);
LOCFOR(fun_describe_condition_18);
LOCFOR(fun_default_handler_description_19);
LOCFOR(fun_describe_handler_20);
LOCFOR(fun_build_condition_for_handler_interactively_21);
LOCFOR(fun_handler_info_message_22);
LOCFOR(fun_handler_info_message_setter_23);
LOCFOR(fun_handler_info_arguments_24);
LOCFOR(fun_handler_info_arguments_setter_25);
LOCFOR(fun_26);
LOCFOR(fun_describe_handler_27);
LOCFOR(fun_handler_condition_type_28);
LOCFOR(fun_handler_condition_type_setter_29);
LOCFOR(fun_handler_info_30);
LOCFOR(fun_handler_info_setter_31);
LOCFOR(fun_handler_test_32);
LOCFOR(fun_handler_test_setter_33);
LOCFOR(fun_handler_function_34);
LOCFOR(fun_handler_function_setter_35);
FUNFOR(YgooSconditionsYfab_handler);
FUNFOR(YgooSconditionsYhandler_activeQ);
FUNFOR(YgooSconditionsYhandler_matchesQ);
LOCFOR(fun_39);
LOCFOR(fun_Uhandler_functionU_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
FUNFOR(YPwith_monitor);
LOCFOR(fun_44);
FUNFOR(YgooSconditionsYsignal_handler_list);
LOCFOR(fun_sig_46);
LOCFOR(fun_sig_47);
LOCFOR(fun_error_48);
LOCFOR(fun_error_49);
FUNFOR(Yincongruent_method_error);
LOCFOR(fun_call_error_function_51);
LOCFOR(fun_call_error_function_setter_52);
LOCFOR(fun_call_error_arguments_53);
LOCFOR(fun_call_error_arguments_setter_54);
LOCFOR(fun_describe_condition_55);
FUNFOR(Yarity_error);
FUNFOR(Ynarity_error);
LOCFOR(fun_describe_condition_58);
LOCFOR(fun_type_error_value_59);
LOCFOR(fun_type_error_value_setter_60);
LOCFOR(fun_type_error_type_61);
LOCFOR(fun_type_error_type_setter_62);
FUNFOR(Ytype_error);
LOCFOR(fun_describe_condition_64);
FUNFOR(Yunknown_function_error);
LOCFOR(fun_describe_condition_66);
FUNFOR(Yargument_type_error);
LOCFOR(fun_describe_condition_68);
FUNFOR(Yreturn_type_error);
LOCFOR(fun_describe_condition_70);
FUNFOR(Yambiguous_method_error);
LOCFOR(fun_describe_condition_72);
FUNFOR(Yno_applicable_methods_error);
LOCFOR(fun_describe_condition_74);
FUNFOR(Yno_next_methods_error);
LOCFOR(fun_describe_condition_76);
FUNFOR(Ycpl_error);
FUNFOR(Ysyntax_error);
LOCFOR(fun_macro_error_name_79);
LOCFOR(fun_macro_error_name_setter_80);
LOCFOR(fun_macro_error_arguments_81);
LOCFOR(fun_macro_error_arguments_setter_82);
FUNFOR(YgooSmacrosYmacro_error);
LOCFOR(fun_describe_condition_84);
FUNFOR(Ystack_overflow_error);
LOCFOR(fun_describe_condition_86);
FUNFOR(Yinternal_error);
FUNFOR(Yassert_error);
LOCFOR(fun_describe_condition_89);
LOCFOR(fun_range_error_collection_90);
LOCFOR(fun_range_error_collection_setter_91);
LOCFOR(fun_range_error_key_92);
LOCFOR(fun_range_error_key_setter_93);
LOCFOR(fun_range_error_94);
LOCFOR(fun_describe_condition_95);
LOCFOR(fun_file_opening_error_filename_96);
LOCFOR(fun_file_opening_error_filename_setter_97);
LOCFOR(fun_file_opening_error_98);
LOCFOR(fun_describe_condition_99);
LOCFOR(fun_unbound_variable_error_variable_100);
LOCFOR(fun_unbound_variable_error_variable_setter_101);
LOCFOR(fun_describe_condition_102);
LOCFOR(fun_property_error_owner_103);
LOCFOR(fun_property_error_owner_setter_104);
LOCFOR(fun_105);
LOCFOR(fun_property_error_generic_106);
LOCFOR(fun_property_error_generic_setter_107);
LOCFOR(fun_108);
FUNFOR(Yproperty_unbound_error);
LOCFOR(fun_describe_condition_110);
FUNFOR(Yproperty_not_found_error);
LOCFOR(fun_describe_condition_112);
FUNFOR(Yproperty_type_error);
LOCFOR(fun_describe_condition_114);
FUNFOR(Yas_error);
LOCFOR(fun_describe_condition_116);
FUNFOR(Yarithmetic_error);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YgooSconditionsYdo_handlers_of_type);
LOCFOR(fun_120);
FUNFOR(YgooSconditionsYlist_handlers);
LOCFOR(fun_122);
FUNFOR(YgooSconditionsYinvoke_handler_interactively);
FUNFOR(YgooSconditionsYchoose_handler);
extern P YgooSconditionsY___main_0___ ();
extern P YgooSconditionsY___main_1___ ();
extern P YgooSconditionsY___main_2___ ();
extern P YgooSconditionsY___main_3___ ();

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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_message_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_message));
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcondition_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_condition_arguments_setter_8) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcondition_arguments));
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
  P condF2402;
  P next_metsF2401;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(cond_type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T3 = (P)YPfun_reg();
  T4 = (P)YPnext_methods();
  T2 = CALL5(1,VARREF(YgooSmacrosYOchecked_next_methods),T3,T4,cond_type_,in_,out_);
  next_metsF2401 = T2;
  T6 = CALL1(1,VARREF(Yhead),next_metsF2401);
  T7 = CALL1(1,VARREF(Ytail),next_metsF2401);
  T5 = CALLN(1,VARREF(YgooSmacrosYnapp),6,T6,T7,cond_type_,in_,out_,Ynil);
  T1 = T5;
  condF2402 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_25));
  T8 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_message_setter),T8,condF2402);
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_26));
  T9 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  CALL2(1,VARREF(YgooSconditionsYcondition_arguments_setter),T9,condF2402);
  T0 = condF2402;
UNLINK_STACK();
  RET(T0);
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
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_generic_setter_15) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_incongruent_method_error_method_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYincongruent_method_error_method));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_18) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_method),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYincongruent_method_error_generic),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_45),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_default_handler_description_19) {
  P cond_type_;
LINK_STACK();
  ARG(cond_type_, 0);
UNLINK_STACK();
  RET(LITREF(lit_48));
}

FUNCODEDEF(fun_describe_handler_20) {
  P info_,condition_type_;
  P T0;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYdefault_handler_description),condition_type_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_build_condition_for_handler_interactively_21) {
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

FUNCODEDEF(fun_handler_info_message_22) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_message_setter_23) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_message));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_24) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_arguments_setter_25) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yhandler_info_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_describe_handler_27) {
  P info_,condition_type_;
  P T0,T1,T2;
LINK_STACK();
  ARG(info_, 0);
  ARG(condition_type_, 1);
  T1 = CALL1(1,VARREF(Yhandler_info_message),info_);
  T2 = CALL1(1,VARREF(Yhandler_info_arguments),info_);
  T0 = CALL4(1,VARREF(YgooSmacrosYnapp),VARREF(YgooSconditionsYmsg_to_str),YPfalse,T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_handler_condition_type_28) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_condition_type_setter_29) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_condition_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_30) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_info_setter_31) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_info));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_32) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_test_setter_33) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_test));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_34) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYhandler_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_handler_function_setter_35) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYhandler_function));
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
  P tmpF2403;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(handler_, 0);
  ARG(condition_, 1);
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YisaQ),condition_,T2);
  tmpF2403 = T1;
  if (tmpF2403 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handler_);
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P UresumeU_;
  P T0;
LINK_STACK();
  ARG(UresumeU_, 0);
  CALL2(1,FREEREF(1),FREEREF(0),UresumeU_);
  T0 = CALL0(1,FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_Uhandler_functionU_40) {
  P condition_,Unext_handlerU_;
  P T0,T1;
LINK_STACK();
  ARG(condition_, 0);
  ARG(Unext_handlerU_, 1);
  T1 = FUNFAB(fun_39,3,condition_,FREEREF(0),Unext_handlerU_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P T0;
LINK_STACK();
  T0 = CALL0(0,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YgooSconditionsYTcurrent_handlersT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YPwith_monitor) {
  P type_,info_,test_fun_,user_handler_,main_fun_;
  P Uoriginal_handlersUF2404;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(type_, 0);
  ARG(info_, 1);
  ARG(test_fun_, 2);
  ARG(user_handler_, 3);
  ARG(main_fun_, 4);
  Uoriginal_handlersUF2404 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  T3 = FUNFAB(fun_Uhandler_functionU_40,1,user_handler_);
  T2 = CALL4(1,VARREF(YgooSconditionsYfab_handler),type_,info_,test_fun_,T3);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYpushX),DYNREF(YgooSconditionsYTcurrent_handlersT),T2);
  DYNSET(YgooSconditionsYTcurrent_handlersT,T1);
  T5 = FUNFAB(fun_41,1,main_fun_);
  T6 = FUNFAB(fun_42,1,Uoriginal_handlersUF2404);
  T4 = with_cleanup(T5,T6);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYsignal_handler_list) {
  P condition_,handlers_;
  P remainingF2406;
  P handlerF2405;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(condition_, 0);
  ARG(handlers_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlers_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSconditionsYdefault_handler),condition_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),handlers_);
    handlerF2405 = T4;
    T6 = CALL1(1,VARREF(Ytail),handlers_);
    remainingF2406 = T6;
    T8 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handlerF2405,condition_);
    if (T8 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handlerF2405);
      T10 = FUNFAB(fun_44,2,condition_,remainingF2406);
      T9 = CALL2(1,T11,condition_,T10);
      T7 = T9;
    } else {
      T12 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,remainingF2406);
      T7 = T12;
    }
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_46) {
  P condition_,args_;
  P T0;
LINK_STACK();
  ARG(condition_, 0);
  NARGS(args_, 1);
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),condition_,DYNREF(YgooSconditionsYTcurrent_handlersT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sig_47) {
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

FUNCODEDEF(fun_error_48) {
  P c_,args_;
  P T0;
LINK_STACK();
  ARG(c_, 0);
  NARGS(args_, 1);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),c_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_error_49) {
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

FUNCODEDEF(Yincongruent_method_error) {
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

FUNCODEDEF(fun_call_error_function_51) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_function_setter_52) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_53) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_call_error_arguments_setter_54) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYcall_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_55) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_115),T1,T2);
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

FUNCODEDEF(fun_describe_condition_58) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_122),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_type_error_value_59) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_value_setter_60) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_61) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYtype_error_type));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_type_error_type_setter_62) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYtype_error_type));
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

FUNCODEDEF(fun_describe_condition_64) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_135),T1,T2);
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

FUNCODEDEF(fun_describe_condition_66) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_140),T1,T2);
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

FUNCODEDEF(fun_describe_condition_68) {
  P c_;
  P next_metsF2407;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_145),T2,T3);
  T6 = (P)YPfun_reg();
  T7 = (P)YPnext_methods();
  T5 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,c_);
  next_metsF2407 = T5;
  T9 = CALL1(1,VARREF(Yhead),next_metsF2407);
  T10 = CALL1(1,VARREF(Ytail),next_metsF2407);
  T8 = CALL4(1,VARREF(YgooSmacrosYnapp),T9,T10,c_,Ynil);
  T4 = T8;
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

FUNCODEDEF(fun_describe_condition_70) {
  P c_;
  P next_metsF2408;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T3 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T1 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_150),T2,T3);
  T6 = (P)YPfun_reg();
  T7 = (P)YPnext_methods();
  T5 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T6,T7,c_);
  next_metsF2408 = T5;
  T9 = CALL1(1,VARREF(Yhead),next_metsF2408);
  T10 = CALL1(1,VARREF(Ytail),next_metsF2408);
  T8 = CALL4(1,VARREF(YgooSmacrosYnapp),T9,T10,c_,Ynil);
  T4 = T8;
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

FUNCODEDEF(fun_describe_condition_72) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_155),T1,T2);
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

FUNCODEDEF(fun_describe_condition_74) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_160),T1,T2);
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

FUNCODEDEF(fun_describe_condition_76) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYcall_error_function),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYcall_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_165),T1,T2);
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

FUNCODEDEF(fun_macro_error_name_79) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_name_setter_80) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_name));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_81) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_macro_error_arguments_setter_82) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYmacro_error_arguments));
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

FUNCODEDEF(fun_describe_condition_84) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYmacro_error_name),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYmacro_error_arguments),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_185),T1,T2);
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

FUNCODEDEF(fun_describe_condition_86) {
  P c_;
LINK_STACK();
  ARG(c_, 0);
UNLINK_STACK();
  RET(LITREF(lit_189));
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

FUNCODEDEF(fun_describe_condition_89) {
  P c_;
  P next_metsF2409;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(c_, 0);
  T3 = (P)YPfun_reg();
  T4 = (P)YPnext_methods();
  T2 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T3,T4,c_);
  next_metsF2409 = T2;
  T6 = CALL1(1,VARREF(Yhead),next_metsF2409);
  T7 = CALL1(1,VARREF(Ytail),next_metsF2409);
  T5 = CALL4(1,VARREF(YgooSmacrosYnapp),T6,T7,c_,Ynil);
  T1 = T5;
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_197),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_range_error_collection_90) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_collection_setter_91) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_collection));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_92) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_key_setter_93) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYrange_error_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_range_error_94) {
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

FUNCODEDEF(fun_describe_condition_95) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYrange_error_key),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYrange_error_collection),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_210),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_96) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_filename_setter_97) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYfile_opening_error_filename));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_file_opening_error_98) {
  P filename_;
  P T0,T1;
LINK_STACK();
  ARG(filename_, 0);
  T1 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),filename_);
  T0 = CALL1(1,VARREF(YgooSconditionsYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_99) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYfile_opening_error_filename),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_220),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_100) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unbound_variable_error_variable_setter_101) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYunbound_variable_error_variable));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_describe_condition_102) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYunbound_variable_error_variable),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_228),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_property_error_owner_103) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_owner_setter_104) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_owner));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_property_error_generic_106) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_property_error_generic_setter_107) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YgooSconditionsYproperty_error_generic));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
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

FUNCODEDEF(fun_describe_condition_110) {
  P c_;
  P T0,T1;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_244),T1);
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

FUNCODEDEF(fun_describe_condition_112) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_owner),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_249),T1,T2);
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

FUNCODEDEF(fun_describe_condition_114) {
  P c_;
  P next_metsF2410;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(c_, 0);
  T2 = CALL1(1,VARREF(YgooSconditionsYproperty_error_generic),c_);
  T1 = CALL2(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_254),T2);
  T5 = (P)YPfun_reg();
  T6 = (P)YPnext_methods();
  T4 = CALL3(1,VARREF(YgooSmacrosYOchecked_next_methods),T5,T6,c_);
  next_metsF2410 = T4;
  T8 = CALL1(1,VARREF(Yhead),next_metsF2410);
  T9 = CALL1(1,VARREF(Ytail),next_metsF2410);
  T7 = CALL4(1,VARREF(YgooSmacrosYnapp),T8,T9,c_,Ynil);
  T3 = T7;
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

FUNCODEDEF(fun_describe_condition_116) {
  P c_;
  P T0,T1,T2;
LINK_STACK();
  ARG(c_, 0);
  T1 = CALL1(1,VARREF(YgooSconditionsYtype_error_type),c_);
  T2 = CALL1(1,VARREF(YgooSconditionsYtype_error_value),c_);
  T0 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_259),T1,T2);
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
  P tmpF2414;
  P remainingF2413;
  P handlerF2412;
  P handlersF2411;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(type_, 0);
  ARG(f_, 1);
  handlersF2411 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  for (;;) {
    P a145_0;
  loop145:
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlersF2411);
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T6 = CALL1(1,VARREF(Yhead),handlersF2411);
      handlerF2412 = T6;
      T8 = CALL1(1,VARREF(Ytail),handlersF2411);
      remainingF2413 = T8;
      T11 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handlerF2412);
      T10 = CALL2(1,VARREF(YsubtypeQ),T11,type_);
      tmpF2414 = T10;
      if (tmpF2414 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooSconditionsYhandler_activeQ),handlerF2412);
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      if (T9 != YPfalse) {
        T14 = CALL1(0,f_,handlerF2412);
      } else {
      }
      a145_0 = remainingF2413;
      handlersF2411 = a145_0;
      goto loop145;
      T7 = T15;
      T5 = T7;
      T3 = T5;
    }
    break;
  }
  T2 = T3;
  T1 = T2;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_120) {
  P handler_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(handler_, 0);
  T0 = BOXVAL(FREEREF(1));
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL2(1,VARREF(YgooSconditionsYdescribe_handler),T2,T3);
  CALL4(1,VARREF(YgooSconditionsYmsg),FREEREF(0),LITREF(lit_270),T0,T1);
  CALL2(1,VARREF(YgooScolsSseqxYpushX),FREEREF(2),handler_);
  T6 = BOXVAL(FREEREF(1));
  T5 = CALL2(1,VARREF(YgooSmathYA),T6,YPint((P)1));
  T4 = BOXVAL(FREEREF(1)) = T5;
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YgooSconditionsYlist_handlers) {
  P type_,out_;
  P applicableF2416;
  P iF2415;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(type_, 0);
  ARG(out_, 1);
  iF2415 = YPint((P)1);
  iF2415 = BOXFAB(iF2415);
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
  applicableF2416 = T3;
  T4 = FUNFAB(fun_120,3,out_,iF2415,applicableF2416);
  CALL2(1,VARREF(YgooSconditionsYdo_handlers_of_type),type_,T4);
  T2 = applicableF2416;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_122) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSconditionsYsignal_handler_list),FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYinvoke_handler_interactively) {
  P handler_,in_,out_;
  P remainingF2420;
  P currentF2419;
  P handlersF2418;
  P conditionF2417;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(handler_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T2 = CALL1(1,VARREF(YgooSconditionsYhandler_info),handler_);
  T3 = CALL1(1,VARREF(YgooSconditionsYhandler_condition_type),handler_);
  T1 = CALL4(1,VARREF(YgooSconditionsYbuild_condition_for_handler_interactively),T2,T3,in_,out_);
  conditionF2417 = T1;
  T5 = CALL2(1,VARREF(YgooSconditionsYhandler_matchesQ),handler_,conditionF2417);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = CALL3(1,VARREF(Yerror),LITREF(lit_273),handler_,conditionF2417);
  } else {
  }
  handlersF2418 = DYNREF(YgooSconditionsYTcurrent_handlersT);
  for (;;) {
    P a146_0;
  loop146:
    T10 = CALL1(1,VARREF(YgooSmacrosYemptyQ),handlersF2418);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(Yerror),LITREF(lit_274),handler_);
      T9 = T11;
    } else {
      T13 = CALL1(1,VARREF(Yhead),handlersF2418);
      currentF2419 = T13;
      T15 = CALL1(1,VARREF(Ytail),handlersF2418);
      remainingF2420 = T15;
      T17 = CALL2(1,VARREF(YgooSmacrosYEE),handler_,currentF2419);
      if (T17 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooSconditionsYhandler_function),handler_);
        T19 = FUNFAB(fun_122,2,conditionF2417,remainingF2420);
        T18 = CALL2(1,T20,conditionF2417,T19);
        T16 = T18;
      } else {
        a146_0 = remainingF2420;
        handlersF2418 = a146_0;
        goto loop146;
        T16 = T21;
      }
      T14 = T16;
      T12 = T14;
      T9 = T12;
    }
    break;
  }
  T8 = T9;
  T7 = T8;
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YgooSconditionsYchoose_handler) {
  P type_,in_,out_;
  P tmpF2423;
  P nF2422;
  P handlersF2421;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(type_, 0);
  ARG(in_, 1);
  ARG(out_, 2);
  T1 = CALL2(1,VARREF(YgooSconditionsYlist_handlers),type_,out_);
  handlersF2421 = T1;
  CALL2(1,VARREF(YgooSconditionsYmsg),out_,LITREF(lit_277));
  T4 = CALL1(1,VARREF(YgooSconditionsYread),in_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  nF2422 = T3;
  T6 = CALL2(1,VARREF(YgooSmagYL),nF2422,YPint((P)0));
  tmpF2423 = T6;
  if (tmpF2423 != YPfalse) {
    T7 = tmpF2423;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),handlersF2421);
    T8 = CALL2(1,VARREF(YgooSmagYGE),nF2422,T9);
    T7 = T8;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T10 = CALL2(1,VARREF(Yerror),LITREF(lit_278),nF2422);
  } else {
  }
  T12 = CALL2(1,VARREF(YgooSmacrosYelt),handlersF2421,nF2422);
  T11 = CALL3(1,VARREF(YgooSconditionsYinvoke_handler_interactively),T12,in_,out_);
  T2 = T11;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YgooSconditionsY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146;
DEFCREGS();
  lit_0 = YPPsym((P)"<condition>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YgooSconditionsYLconditionG,T0);
  lit_1 = YPPsym((P)"default-handler");
  lit_2 = YPPlist(1,YPPsym((P)"c"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_0 = YPmet(FUNCODEREF(fun_default_handler_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(21));
  T4 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T5 = fun_default_handler_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T5);
  VARSET(YgooSconditionsYdefault_handler,T3);
  lit_3 = YPPsym((P)"describe-condition");
  lit_4 = YPPlist(1,YPPsym((P)"c"));
  lit_5 = YPsb((P)"Anonymous condition %=");
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_1 = YPmet(FUNCODEREF(fun_describe_condition_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(24));
  T8 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T9 = fun_describe_condition_1;
  T7 = XCALL2(1,VARREF(YPdefine_method),T8,T9);
  VARSET(YgooSconditionsYdescribe_condition,T7);
  lit_6 = YPPsym((P)"default-handler-description");
  lit_7 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_8 = YPsb((P)"Anonymous handler for %s");
  T11 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T10 = YPsig(LITREF(lit_7),YPPlist(1,T11),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_2 = YPmet(FUNCODEREF(fun_default_handler_description_2),LITREF(lit_6),T10,ENVNUL,PNUL,sloc(27));
  T13 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T14 = fun_default_handler_description_2;
  T12 = XCALL2(1,VARREF(YPdefine_method),T13,T14);
  VARSET(YgooSconditionsYdefault_handler_description,T12);
  lit_9 = YPPsym((P)"build-condition-interactively");
  lit_10 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T16 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T15 = YPsig(LITREF(lit_10),YPPlist(3,T16,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_3 = YPmet(FUNCODEREF(fun_build_condition_interactively_3),LITREF(lit_9),T15,ENVNUL,PNUL,sloc(30));
  T18 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T19 = fun_build_condition_interactively_3;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSconditionsYbuild_condition_interactively,T17);
  lit_11 = YPPsym((P)"<simple-condition>");
  T21 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T20 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_11),T21);
  VARSET(YgooSconditionsYLsimple_conditionG,T20);
  lit_12 = YPPsym((P)"condition-message");
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_message_4 = YPmet(FUNCODEREF(fun_condition_message_4),LITREF(lit_12),T22,ENVNUL,PNUL,sloc(35));
  T24 = VARREF_OR(YgooSconditionsYcondition_message,YPfalse);
  T25 = fun_condition_message_4;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YgooSconditionsYcondition_message,T23);
  lit_14 = YPPsym((P)"condition-message-setter");
  lit_15 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_15),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_message_setter_5 = YPmet(FUNCODEREF(fun_condition_message_setter_5),LITREF(lit_14),T26,ENVNUL,PNUL,sloc(35));
  T28 = VARREF_OR(YgooSconditionsYcondition_message_setter,YPfalse);
  T29 = fun_condition_message_setter_5;
  T27 = XCALL2(1,VARREF(YPdefine_method),T28,T29);
  VARSET(YgooSconditionsYcondition_message_setter,T27);
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  lit_17 = YPsb((P)"");
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_6 = YPmet(FUNCODEREF(fun_6),YPfalse,T30,ENVNUL,PNUL,sloc(35));
  T31 = fun_6;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_message),VARREF(YgooSconditionsYcondition_message_setter),VARREF(YLstrG),T31);
  lit_18 = YPPsym((P)"condition-arguments");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T32 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_condition_arguments_7 = YPmet(FUNCODEREF(fun_condition_arguments_7),LITREF(lit_18),T32,ENVNUL,PNUL,sloc(36));
  T34 = VARREF_OR(YgooSconditionsYcondition_arguments,YPfalse);
  T35 = fun_condition_arguments_7;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YgooSconditionsYcondition_arguments,T33);
  lit_20 = YPPsym((P)"condition-arguments-setter");
  lit_21 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_21),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_condition_arguments_setter_8 = YPmet(FUNCODEREF(fun_condition_arguments_setter_8),LITREF(lit_20),T36,ENVNUL,PNUL,sloc(36));
  T38 = VARREF_OR(YgooSconditionsYcondition_arguments_setter,YPfalse);
  T39 = fun_condition_arguments_setter_8;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YgooSconditionsYcondition_arguments_setter,T37);
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T40,ENVNUL,PNUL,sloc(36));
  T41 = fun_9;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLsimple_conditionG),VARREF(YgooSconditionsYcondition_arguments),VARREF(YgooSconditionsYcondition_arguments_setter),VARREF(YLlstG),T41);
  lit_23 = YPPlist(1,YPPsym((P)"c"));
  T42 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YgooSconditionsYLsimple_conditionG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_10 = YPmet(FUNCODEREF(fun_describe_condition_10),LITREF(lit_3),T42,ENVNUL,PNUL,sloc(38));
  T44 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T45 = fun_describe_condition_10;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YgooSconditionsYdescribe_condition,T43);
  lit_24 = YPPlist(3,YPPsym((P)"cond-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_25 = YPsb((P)"Condition format string: ");
  lit_26 = YPsb((P)"Condition format arguments: ");
  T47 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLsimple_conditionG));
  T46 = YPsig(LITREF(lit_24),YPPlist(3,T47,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_interactively_11 = YPmet(FUNCODEREF(fun_build_condition_interactively_11),LITREF(lit_9),T46,ENVNUL,PNUL,sloc(41));
  T49 = VARREF_OR(YgooSconditionsYbuild_condition_interactively,YPfalse);
  T50 = fun_build_condition_interactively_11;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T50);
  VARSET(YgooSconditionsYbuild_condition_interactively,T48);
  lit_27 = YPPsym((P)"<serious-condition>");
  T52 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T51 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_27),T52);
  VARSET(YgooSconditionsYLserious_conditionG,T51);
  lit_28 = YPPlist(1,YPPsym((P)"c"));
  lit_29 = YPsb((P)"%s\n");
  T53 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YgooSconditionsYLserious_conditionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_default_handler_12 = YPmet(FUNCODEREF(fun_default_handler_12),LITREF(lit_1),T53,ENVNUL,PNUL,sloc(52));
  T55 = VARREF_OR(YgooSconditionsYdefault_handler,YPfalse);
  T56 = fun_default_handler_12;
  T54 = XCALL2(1,VARREF(YPdefine_method),T55,T56);
  VARSET(YgooSconditionsYdefault_handler,T54);
  lit_30 = YPPsym((P)"<error>");
  T58 = (P)YPpair(VARREF(YgooSconditionsYLserious_conditionG),Ynil);
  T57 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_30),T58);
  VARSET(YgooSconditionsYLerrorG,T57);
  lit_31 = YPPsym((P)"<simple-error>");
  T61 = (P)YPpair(VARREF(YgooSconditionsYLsimple_conditionG),Ynil);
  T60 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),T61);
  T59 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_31),T60);
  VARSET(YgooSconditionsYLsimple_errorG,T59);
  lit_32 = YPPsym((P)"<restart>");
  T63 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T62 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_32),T63);
  VARSET(YgooSconditionsYLrestartG,T62);
  lit_33 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_34 = YPsb((P)"Anonymous restart of type %s");
  T65 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLrestartG));
  T64 = YPsig(LITREF(lit_33),YPPlist(1,T65),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_13 = YPmet(FUNCODEREF(fun_default_handler_description_13),LITREF(lit_6),T64,ENVNUL,PNUL,sloc(76));
  T67 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T68 = fun_default_handler_description_13;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T68);
  VARSET(YgooSconditionsYdefault_handler_description,T66);
  lit_35 = YPPsym((P)"<incongruent-method-error>");
  T70 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T69 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_35),T70);
  VARSET(YgooSconditionsYLincongruent_method_errorG,T69);
  lit_36 = YPPsym((P)"incongruent-method-error-generic");
  lit_37 = YPPlist(1,YPPsym((P)"_x"));
  T71 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_14 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_14),LITREF(lit_36),T71,ENVNUL,PNUL,sloc(80));
  T73 = VARREF_OR(YgooSconditionsYincongruent_method_error_generic,YPfalse);
  T74 = fun_incongruent_method_error_generic_14;
  T72 = XCALL2(1,VARREF(YPdefine_method),T73,T74);
  VARSET(YgooSconditionsYincongruent_method_error_generic,T72);
  lit_38 = YPPsym((P)"incongruent-method-error-generic-setter");
  lit_39 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T75 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YLgenG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_generic_setter_15 = YPmet(FUNCODEREF(fun_incongruent_method_error_generic_setter_15),LITREF(lit_38),T75,ENVNUL,PNUL,sloc(80));
  T77 = VARREF_OR(YgooSconditionsYincongruent_method_error_generic_setter,YPfalse);
  T78 = fun_incongruent_method_error_generic_setter_15;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T78);
  VARSET(YgooSconditionsYincongruent_method_error_generic_setter,T76);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_generic),VARREF(YgooSconditionsYincongruent_method_error_generic_setter),VARREF(YLgenG),VARREF(YPprop_unbound_error));
  lit_40 = YPPsym((P)"incongruent-method-error-method");
  lit_41 = YPPlist(1,YPPsym((P)"_x"));
  T79 = YPsig(LITREF(lit_41),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_16 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_16),LITREF(lit_40),T79,ENVNUL,PNUL,sloc(81));
  T81 = VARREF_OR(YgooSconditionsYincongruent_method_error_method,YPfalse);
  T82 = fun_incongruent_method_error_method_16;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T82);
  VARSET(YgooSconditionsYincongruent_method_error_method,T80);
  lit_42 = YPPsym((P)"incongruent-method-error-method-setter");
  lit_43 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T83 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLmetG),VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_incongruent_method_error_method_setter_17 = YPmet(FUNCODEREF(fun_incongruent_method_error_method_setter_17),LITREF(lit_42),T83,ENVNUL,PNUL,sloc(81));
  T85 = VARREF_OR(YgooSconditionsYincongruent_method_error_method_setter,YPfalse);
  T86 = fun_incongruent_method_error_method_setter_17;
  T84 = XCALL2(1,VARREF(YPdefine_method),T85,T86);
  VARSET(YgooSconditionsYincongruent_method_error_method_setter,T84);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLincongruent_method_errorG),VARREF(YgooSconditionsYincongruent_method_error_method),VARREF(YgooSconditionsYincongruent_method_error_method_setter),VARREF(YLmetG),VARREF(YPprop_unbound_error));
  lit_44 = YPPlist(1,YPPsym((P)"c"));
  lit_45 = YPsb((P)"Method %= incongruent with generic %=.");
  T87 = YPsig(LITREF(lit_44),YPPlist(1,VARREF(YgooSconditionsYLincongruent_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_18 = YPmet(FUNCODEREF(fun_describe_condition_18),LITREF(lit_3),T87,ENVNUL,PNUL,sloc(83));
  T89 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T90 = fun_describe_condition_18;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T90);
  VARSET(YgooSconditionsYdescribe_condition,T88);
  lit_46 = YPPsym((P)"<replace-generic-restart>");
  T92 = (P)YPpair(VARREF(YgooSconditionsYLrestartG),Ynil);
  T91 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_46),T92);
  VARSET(YLreplace_generic_restartG,T91);
  lit_47 = YPPlist(1,YPPsym((P)"cond-type"));
  lit_48 = YPsb((P)"Replace the generic function with an empty, congruent one");
  T94 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YLreplace_generic_restartG));
  T93 = YPsig(LITREF(lit_47),YPPlist(1,T94),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_default_handler_description_19 = YPmet(FUNCODEREF(fun_default_handler_description_19),LITREF(lit_6),T93,ENVNUL,PNUL,sloc(90));
  T96 = VARREF_OR(YgooSconditionsYdefault_handler_description,YPfalse);
  T97 = fun_default_handler_description_19;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YgooSconditionsYdefault_handler_description,T95);
  lit_49 = YPPsym((P)"<handler-info>");
  T99 = (P)YPpair(VARREF(YLanyG),Ynil);
  T98 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_49),T99);
  VARSET(YgooSconditionsYLhandler_infoG,T98);
  lit_50 = YPPsym((P)"describe-handler");
  lit_51 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T100 = YPsig(LITREF(lit_51),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_20 = YPmet(FUNCODEREF(fun_describe_handler_20),LITREF(lit_50),T100,ENVNUL,PNUL,sloc(107));
  T102 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T103 = fun_describe_handler_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSconditionsYdescribe_handler,T101);
  lit_52 = YPPsym((P)"build-condition-for-handler-interactively");
  lit_53 = YPPlist(4,YPPsym((P)"info"),YPPsym((P)"condition-type"),YPPsym((P)"in"),YPPsym((P)"out"));
  T104 = YPsig(LITREF(lit_53),YPPlist(4,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLconditionG),Ynil);
  fun_build_condition_for_handler_interactively_21 = YPmet(FUNCODEREF(fun_build_condition_for_handler_interactively_21),LITREF(lit_52),T104,ENVNUL,PNUL,sloc(110));
  T106 = VARREF_OR(YgooSconditionsYbuild_condition_for_handler_interactively,YPfalse);
  T107 = fun_build_condition_for_handler_interactively_21;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSconditionsYbuild_condition_for_handler_interactively,T105);
  T108 = XCALL1(1,VARREF(Ynew),VARREF(YgooSconditionsYLhandler_infoG));
  VARSET(YgooSconditionsYDdefault_handler_info,T108);
  lit_54 = YPPsym((P)"<simple-handler-info>");
  T110 = (P)YPpair(VARREF(YgooSconditionsYLhandler_infoG),Ynil);
  T109 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_54),T110);
  VARSET(YLsimple_handler_infoG,T109);
  lit_55 = YPPsym((P)"handler-info-message");
  lit_56 = YPPlist(1,YPPsym((P)"_x"));
  T111 = YPsig(LITREF(lit_56),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_message_22 = YPmet(FUNCODEREF(fun_handler_info_message_22),LITREF(lit_55),T111,ENVNUL,PNUL,sloc(117));
  T113 = VARREF_OR(Yhandler_info_message,YPfalse);
  T114 = fun_handler_info_message_22;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T114);
  VARSET(Yhandler_info_message,T112);
  lit_57 = YPPsym((P)"handler-info-message-setter");
  lit_58 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T115 = YPsig(LITREF(lit_58),YPPlist(2,VARREF(YLstrG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_message_setter_23 = YPmet(FUNCODEREF(fun_handler_info_message_setter_23),LITREF(lit_57),T115,ENVNUL,PNUL,sloc(117));
  T117 = VARREF_OR(YgooSconditionsYhandler_info_message_setter,YPfalse);
  T118 = fun_handler_info_message_setter_23;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T118);
  VARSET(YgooSconditionsYhandler_info_message_setter,T116);
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),VARREF(YgooSconditionsYhandler_info_message_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_59 = YPPsym((P)"handler-info-arguments");
  lit_60 = YPPlist(1,YPPsym((P)"_x"));
  T119 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_24 = YPmet(FUNCODEREF(fun_handler_info_arguments_24),LITREF(lit_59),T119,ENVNUL,PNUL,sloc(118));
  T121 = VARREF_OR(Yhandler_info_arguments,YPfalse);
  T122 = fun_handler_info_arguments_24;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T122);
  VARSET(Yhandler_info_arguments,T120);
  lit_61 = YPPsym((P)"handler-info-arguments-setter");
  lit_62 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T123 = YPsig(LITREF(lit_62),YPPlist(2,VARREF(YLlstG),VARREF(YLsimple_handler_infoG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_arguments_setter_25 = YPmet(FUNCODEREF(fun_handler_info_arguments_setter_25),LITREF(lit_61),T123,ENVNUL,PNUL,sloc(118));
  T125 = VARREF_OR(YgooSconditionsYhandler_info_arguments_setter,YPfalse);
  T126 = fun_handler_info_arguments_setter_25;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YgooSconditionsYhandler_info_arguments_setter,T124);
  lit_63 = YPPlist(1,YPPsym((P)"_x"));
  T127 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T127,ENVNUL,PNUL,sloc(118));
  T128 = fun_26;
  XCALL5(1,VARREF(YPprop),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_arguments),VARREF(YgooSconditionsYhandler_info_arguments_setter),VARREF(YLlstG),T128);
  lit_64 = YPPlist(2,YPPsym((P)"info"),YPPsym((P)"condition-type"));
  T129 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLsimple_handler_infoG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_describe_handler_27 = YPmet(FUNCODEREF(fun_describe_handler_27),LITREF(lit_50),T129,ENVNUL,PNUL,sloc(120));
  T131 = VARREF_OR(YgooSconditionsYdescribe_handler,YPfalse);
  T132 = fun_describe_handler_27;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T132);
  VARSET(YgooSconditionsYdescribe_handler,T130);
  DYNDEFSET(YgooSconditionsYTcurrent_handlersT,Ynil);
  lit_65 = YPPsym((P)"<handler>");
  T134 = (P)YPpair(VARREF(YLanyG),Ynil);
  T133 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_65),T134);
  VARSET(YgooSconditionsYLhandlerG,T133);
  lit_66 = YPPsym((P)"handler-condition-type");
  lit_67 = YPPlist(1,YPPsym((P)"_x"));
  T135 = YPsig(LITREF(lit_67),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_condition_type_28 = YPmet(FUNCODEREF(fun_handler_condition_type_28),LITREF(lit_66),T135,ENVNUL,PNUL,sloc(138));
  T137 = VARREF_OR(YgooSconditionsYhandler_condition_type,YPfalse);
  T138 = fun_handler_condition_type_28;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YgooSconditionsYhandler_condition_type,T136);
  lit_68 = YPPsym((P)"handler-condition-type-setter");
  lit_69 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T142 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T141 = YPsig(LITREF(lit_69),YPPlist(2,T142,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T140 = fun_handler_condition_type_setter_29 = YPmet(FUNCODEREF(fun_handler_condition_type_setter_29),LITREF(lit_68),T141,ENVNUL,PNUL,sloc(138));
  T145 = VARREF_OR(YgooSconditionsYhandler_condition_type_setter,YPfalse);
  T146 = fun_handler_condition_type_setter_29;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  T143 = VARSET(YgooSconditionsYhandler_condition_type_setter,T144);
  T139 = T143;
  return T139;
}

P YgooSconditionsY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173,T174,T175;
  P T176,T177,T178,T179;
DEFCREGS();
  T0 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_condition_type),VARREF(YgooSconditionsYhandler_condition_type_setter),T0,VARREF(YPprop_unbound_error));
  lit_70 = YPPsym((P)"handler-info");
  lit_71 = YPPlist(1,YPPsym((P)"_x"));
  T1 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_info_30 = YPmet(FUNCODEREF(fun_handler_info_30),LITREF(lit_70),T1,ENVNUL,PNUL,sloc(139));
  T3 = VARREF_OR(YgooSconditionsYhandler_info,YPfalse);
  T4 = fun_handler_info_30;
  T2 = XCALL2(1,VARREF(YPdefine_method),T3,T4);
  VARSET(YgooSconditionsYhandler_info,T2);
  lit_72 = YPPsym((P)"handler-info-setter");
  lit_73 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T5 = YPsig(LITREF(lit_73),YPPlist(2,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_info_setter_31 = YPmet(FUNCODEREF(fun_handler_info_setter_31),LITREF(lit_72),T5,ENVNUL,PNUL,sloc(139));
  T7 = VARREF_OR(YgooSconditionsYhandler_info_setter,YPfalse);
  T8 = fun_handler_info_setter_31;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T8);
  VARSET(YgooSconditionsYhandler_info_setter,T6);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_info),VARREF(YgooSconditionsYhandler_info_setter),VARREF(YgooSconditionsYLhandler_infoG),VARREF(YPprop_unbound_error));
  lit_74 = YPPsym((P)"handler-test");
  lit_75 = YPPlist(1,YPPsym((P)"_x"));
  T9 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_test_32 = YPmet(FUNCODEREF(fun_handler_test_32),LITREF(lit_74),T9,ENVNUL,PNUL,sloc(140));
  T11 = VARREF_OR(YgooSconditionsYhandler_test,YPfalse);
  T12 = fun_handler_test_32;
  T10 = XCALL2(1,VARREF(YPdefine_method),T11,T12);
  VARSET(YgooSconditionsYhandler_test,T10);
  lit_76 = YPPsym((P)"handler-test-setter");
  lit_77 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T13 = YPsig(LITREF(lit_77),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_test_setter_33 = YPmet(FUNCODEREF(fun_handler_test_setter_33),LITREF(lit_76),T13,ENVNUL,PNUL,sloc(140));
  T15 = VARREF_OR(YgooSconditionsYhandler_test_setter,YPfalse);
  T16 = fun_handler_test_setter_33;
  T14 = XCALL2(1,VARREF(YPdefine_method),T15,T16);
  VARSET(YgooSconditionsYhandler_test_setter,T14);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_test),VARREF(YgooSconditionsYhandler_test_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"handler-function");
  lit_79 = YPPlist(1,YPPsym((P)"_x"));
  T17 = YPsig(LITREF(lit_79),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_handler_function_34 = YPmet(FUNCODEREF(fun_handler_function_34),LITREF(lit_78),T17,ENVNUL,PNUL,sloc(141));
  T19 = VARREF_OR(YgooSconditionsYhandler_function,YPfalse);
  T20 = fun_handler_function_34;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T20);
  VARSET(YgooSconditionsYhandler_function,T18);
  lit_80 = YPPsym((P)"handler-function-setter");
  lit_81 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T21 = YPsig(LITREF(lit_81),YPPlist(2,VARREF(YLfunG),VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_handler_function_setter_35 = YPmet(FUNCODEREF(fun_handler_function_setter_35),LITREF(lit_80),T21,ENVNUL,PNUL,sloc(141));
  T23 = VARREF_OR(YgooSconditionsYhandler_function_setter,YPfalse);
  T24 = fun_handler_function_setter_35;
  T22 = XCALL2(1,VARREF(YPdefine_method),T23,T24);
  VARSET(YgooSconditionsYhandler_function_setter,T22);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYhandler_function),VARREF(YgooSconditionsYhandler_function_setter),VARREF(YLfunG),VARREF(YPprop_unbound_error));
  lit_82 = YPPsym((P)"fab-handler");
  lit_83 = YPPlist(4,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test"),YPPsym((P)"f"));
  T26 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T25 = YPsig(LITREF(lit_83),YPPlist(4,T26,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)4),VARREF(YgooSconditionsYLhandlerG),Ynil);
  YgooSconditionsYfab_handler = YPmet(FUNCODEREF(YgooSconditionsYfab_handler),LITREF(lit_82),T25,ENVNUL,PNUL,sloc(143));
  T27 = YgooSconditionsYfab_handler;
  VARSET(YgooSconditionsYfab_handler,T27);
  lit_84 = YPPsym((P)"handler-active?");
  lit_85 = YPPlist(1,YPPsym((P)"handler"));
  T28 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YgooSconditionsYLhandlerG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_activeQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_activeQ),LITREF(lit_84),T28,ENVNUL,PNUL,sloc(151));
  T29 = YgooSconditionsYhandler_activeQ;
  VARSET(YgooSconditionsYhandler_activeQ,T29);
  lit_86 = YPPsym((P)"handler-matches?");
  lit_87 = YPPlist(2,YPPsym((P)"handler"),YPPsym((P)"condition"));
  T30 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YgooSconditionsYLhandlerG),VARREF(YgooSconditionsYLconditionG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  YgooSconditionsYhandler_matchesQ = YPmet(FUNCODEREF(YgooSconditionsYhandler_matchesQ),LITREF(lit_86),T30,ENVNUL,PNUL,sloc(154));
  T31 = YgooSconditionsYhandler_matchesQ;
  VARSET(YgooSconditionsYhandler_matchesQ,T31);
  lit_88 = YPPsym((P)"%with-monitor");
  lit_89 = YPPlist(5,YPPsym((P)"type"),YPPsym((P)"info"),YPPsym((P)"test-fun"),YPPsym((P)"user-handler"),YPPsym((P)"main-fun"));
  lit_90 = YPPsym((P)"_handler-function_");
  lit_91 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"_next-handler_"));
  lit_92 = YPPlist(1,YPPsym((P)"_resume_"));
  lit_93 = Ynil;
  T37 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T37,ENVNUL,PNUL,sloc(163));
  T36 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_Uhandler_functionU_40 = YPmet(FUNCODEREF(fun_Uhandler_functionU_40),LITREF(lit_90),T36,ENVNUL,PNUL,sloc(162));
  T35 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T35,ENVNUL,PNUL,sloc(168));
  T34 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T34,ENVNUL,PNUL,sloc(168));
  T33 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T32 = YPsig(LITREF(lit_89),YPPlist(5,T33,VARREF(YgooSconditionsYLhandler_infoG),VARREF(YLfunG),VARREF(YLfunG),VARREF(YLfunG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  YPwith_monitor = YPmet(FUNCODEREF(YPwith_monitor),LITREF(lit_88),T32,ENVNUL,PNUL,sloc(158));
  T38 = YPwith_monitor;
  VARSET(YPwith_monitor,T38);
  lit_94 = YPPsym((P)"signal-handler-list");
  lit_95 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"handlers"));
  T40 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T40,ENVNUL,PNUL,sloc(178));
  T39 = YPsig(LITREF(lit_95),YPPlist(2,VARREF(YgooSconditionsYLconditionG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYsignal_handler_list = YPmet(FUNCODEREF(YgooSconditionsYsignal_handler_list),LITREF(lit_94),T39,ENVNUL,PNUL,sloc(171));
  T41 = YgooSconditionsYsignal_handler_list;
  VARSET(YgooSconditionsYsignal_handler_list,T41);
  lit_96 = YPPsym((P)"sig");
  lit_97 = YPPlist(2,YPPsym((P)"condition"),YPPsym((P)"args"));
  T42 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YgooSconditionsYLconditionG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_46 = YPmet(FUNCODEREF(fun_sig_46),LITREF(lit_96),T42,ENVNUL,PNUL,sloc(181));
  T44 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T45 = fun_sig_46;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YgooSconditionsYsig,T43);
  lit_98 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T46 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sig_47 = YPmet(FUNCODEREF(fun_sig_47),LITREF(lit_96),T46,ENVNUL,PNUL,sloc(184));
  T48 = VARREF_OR(YgooSconditionsYsig,YPfalse);
  T49 = fun_sig_47;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YgooSconditionsYsig,T47);
  lit_99 = YPPsym((P)"error");
  lit_100 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T50 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YgooSconditionsYLerrorG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_48 = YPmet(FUNCODEREF(fun_error_48),LITREF(lit_99),T50,ENVNUL,PNUL,sloc(191));
  T52 = VARREF_OR(Yerror,YPfalse);
  T53 = fun_error_48;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(Yerror,T51);
  lit_101 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"args"));
  T54 = YPsig(LITREF(lit_101),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_error_49 = YPmet(FUNCODEREF(fun_error_49),LITREF(lit_99),T54,ENVNUL,PNUL,sloc(194));
  T56 = VARREF_OR(Yerror,YPfalse);
  T57 = fun_error_49;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(Yerror,T55);
  lit_102 = YPPsym((P)"incongruent-method-error");
  lit_103 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"met"));
  T58 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YLgenG),VARREF(YLmetG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yincongruent_method_error = YPmet(FUNCODEREF(Yincongruent_method_error),LITREF(lit_102),T58,ENVNUL,PNUL,sloc(198));
  T59 = Yincongruent_method_error;
  VARSET(Yincongruent_method_error,T59);
  lit_104 = YPPsym((P)"<call-error>");
  T61 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T60 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_104),T61);
  VARSET(YgooSconditionsYLcall_errorG,T60);
  lit_105 = YPPsym((P)"call-error-function");
  lit_106 = YPPlist(1,YPPsym((P)"_x"));
  T62 = YPsig(LITREF(lit_106),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_function_51 = YPmet(FUNCODEREF(fun_call_error_function_51),LITREF(lit_105),T62,ENVNUL,PNUL,sloc(204));
  T64 = VARREF_OR(YgooSconditionsYcall_error_function,YPfalse);
  T65 = fun_call_error_function_51;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YgooSconditionsYcall_error_function,T63);
  lit_107 = YPPsym((P)"call-error-function-setter");
  lit_108 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T66 = YPsig(LITREF(lit_108),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_function_setter_52 = YPmet(FUNCODEREF(fun_call_error_function_setter_52),LITREF(lit_107),T66,ENVNUL,PNUL,sloc(204));
  T68 = VARREF_OR(YgooSconditionsYcall_error_function_setter,YPfalse);
  T69 = fun_call_error_function_setter_52;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YgooSconditionsYcall_error_function_setter,T67);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_function),VARREF(YgooSconditionsYcall_error_function_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_109 = YPPsym((P)"call-error-arguments");
  lit_110 = YPPlist(1,YPPsym((P)"_x"));
  T70 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_53 = YPmet(FUNCODEREF(fun_call_error_arguments_53),LITREF(lit_109),T70,ENVNUL,PNUL,sloc(205));
  T72 = VARREF_OR(YgooSconditionsYcall_error_arguments,YPfalse);
  T73 = fun_call_error_arguments_53;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YgooSconditionsYcall_error_arguments,T71);
  lit_111 = YPPsym((P)"call-error-arguments-setter");
  lit_112 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T74 = YPsig(LITREF(lit_112),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLcall_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_call_error_arguments_setter_54 = YPmet(FUNCODEREF(fun_call_error_arguments_setter_54),LITREF(lit_111),T74,ENVNUL,PNUL,sloc(205));
  T76 = VARREF_OR(YgooSconditionsYcall_error_arguments_setter,YPfalse);
  T77 = fun_call_error_arguments_setter_54;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YgooSconditionsYcall_error_arguments_setter,T75);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLcall_errorG),VARREF(YgooSconditionsYcall_error_arguments),VARREF(YgooSconditionsYcall_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_113 = YPPsym((P)"<arity-error>");
  T79 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T78 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_113),T79);
  VARSET(YgooSconditionsYLarity_errorG,T78);
  lit_114 = YPPlist(1,YPPsym((P)"c"));
  lit_115 = YPsb((P)"Function %= called with wrong number arguments %=.");
  T80 = YPsig(LITREF(lit_114),YPPlist(1,VARREF(YgooSconditionsYLarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_55 = YPmet(FUNCODEREF(fun_describe_condition_55),LITREF(lit_3),T80,ENVNUL,PNUL,sloc(209));
  T82 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T83 = fun_describe_condition_55;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooSconditionsYdescribe_condition,T81);
  lit_116 = YPPsym((P)"arity-error");
  lit_117 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T84 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yarity_error = YPmet(FUNCODEREF(Yarity_error),LITREF(lit_116),T84,ENVNUL,PNUL,sloc(213));
  T85 = Yarity_error;
  VARSET(Yarity_error,T85);
  lit_118 = YPPsym((P)"<narity-error>");
  T87 = (P)YPpair(VARREF(YgooSconditionsYLarity_errorG),Ynil);
  T86 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_118),T87);
  VARSET(YgooSconditionsYLnarity_errorG,T86);
  lit_119 = YPPsym((P)"narity-error");
  lit_120 = YPPlist(2,YPPsym((P)"fun"),YPPsym((P)"args"));
  T88 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YLfunG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ynarity_error = YPmet(FUNCODEREF(Ynarity_error),LITREF(lit_119),T88,ENVNUL,PNUL,sloc(219));
  T89 = Ynarity_error;
  VARSET(Ynarity_error,T89);
  lit_121 = YPPlist(1,YPPsym((P)"c"));
  lit_122 = YPsb((P)"Nary function %= called with too few arguments %=.");
  T90 = YPsig(LITREF(lit_121),YPPlist(1,VARREF(YgooSconditionsYLnarity_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_58 = YPmet(FUNCODEREF(fun_describe_condition_58),LITREF(lit_3),T90,ENVNUL,PNUL,sloc(223));
  T92 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T93 = fun_describe_condition_58;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YgooSconditionsYdescribe_condition,T91);
  lit_123 = YPPsym((P)"<type-error>");
  T95 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T94 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_123),T95);
  VARSET(YgooSconditionsYLtype_errorG,T94);
  lit_124 = YPPsym((P)"type-error-value");
  lit_125 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_value_59 = YPmet(FUNCODEREF(fun_type_error_value_59),LITREF(lit_124),T96,ENVNUL,PNUL,sloc(228));
  T98 = VARREF_OR(YgooSconditionsYtype_error_value,YPfalse);
  T99 = fun_type_error_value_59;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooSconditionsYtype_error_value,T97);
  lit_126 = YPPsym((P)"type-error-value-setter");
  lit_127 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_value_setter_60 = YPmet(FUNCODEREF(fun_type_error_value_setter_60),LITREF(lit_126),T100,ENVNUL,PNUL,sloc(228));
  T102 = VARREF_OR(YgooSconditionsYtype_error_value_setter,YPfalse);
  T103 = fun_type_error_value_setter_60;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSconditionsYtype_error_value_setter,T101);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_value),VARREF(YgooSconditionsYtype_error_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_128 = YPPsym((P)"type-error-type");
  lit_129 = YPPlist(1,YPPsym((P)"_x"));
  T104 = YPsig(LITREF(lit_129),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_type_error_type_61 = YPmet(FUNCODEREF(fun_type_error_type_61),LITREF(lit_128),T104,ENVNUL,PNUL,sloc(229));
  T106 = VARREF_OR(YgooSconditionsYtype_error_type,YPfalse);
  T107 = fun_type_error_type_61;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSconditionsYtype_error_type,T105);
  lit_130 = YPPsym((P)"type-error-type-setter");
  lit_131 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T108 = YPsig(LITREF(lit_131),YPPlist(2,VARREF(YLtypeG),VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_type_error_type_setter_62 = YPmet(FUNCODEREF(fun_type_error_type_setter_62),LITREF(lit_130),T108,ENVNUL,PNUL,sloc(229));
  T110 = VARREF_OR(YgooSconditionsYtype_error_type_setter,YPfalse);
  T111 = fun_type_error_type_setter_62;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YgooSconditionsYtype_error_type_setter,T109);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLtype_errorG),VARREF(YgooSconditionsYtype_error_type),VARREF(YgooSconditionsYtype_error_type_setter),VARREF(YLtypeG),VARREF(YPprop_unbound_error));
  lit_132 = YPPsym((P)"type-error");
  lit_133 = YPPlist(2,YPPsym((P)"arg"),YPPsym((P)"type"));
  T112 = YPsig(LITREF(lit_133),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Ytype_error = YPmet(FUNCODEREF(Ytype_error),LITREF(lit_132),T112,ENVNUL,PNUL,sloc(231));
  T113 = Ytype_error;
  VARSET(Ytype_error,T113);
  lit_134 = YPPlist(1,YPPsym((P)"c"));
  lit_135 = YPsb((P)"Type check failure on %= expected %t.");
  T114 = YPsig(LITREF(lit_134),YPPlist(1,VARREF(YgooSconditionsYLtype_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_64 = YPmet(FUNCODEREF(fun_describe_condition_64),LITREF(lit_3),T114,ENVNUL,PNUL,sloc(234));
  T116 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T117 = fun_describe_condition_64;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YgooSconditionsYdescribe_condition,T115);
  lit_136 = YPPsym((P)"<unknown-function-error>");
  T120 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T119 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T120);
  T118 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_136),T119);
  VARSET(YgooSconditionsYLunknown_function_errorG,T118);
  lit_137 = YPPsym((P)"unknown-function-error");
  lit_138 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"args"));
  T121 = YPsig(LITREF(lit_138),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yunknown_function_error = YPmet(FUNCODEREF(Yunknown_function_error),LITREF(lit_137),T121,ENVNUL,PNUL,sloc(240));
  T122 = Yunknown_function_error;
  VARSET(Yunknown_function_error,T122);
  lit_139 = YPPlist(1,YPPsym((P)"c"));
  lit_140 = YPsb((P)"Unknown function %= called on %=.");
  T123 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YgooSconditionsYLunknown_function_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_66 = YPmet(FUNCODEREF(fun_describe_condition_66),LITREF(lit_3),T123,ENVNUL,PNUL,sloc(245));
  T125 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T126 = fun_describe_condition_66;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T126);
  VARSET(YgooSconditionsYdescribe_condition,T124);
  lit_141 = YPPsym((P)"<argument-type-error>");
  T129 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T128 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T129);
  T127 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_141),T128);
  VARSET(YgooSconditionsYLargument_type_errorG,T127);
  lit_142 = YPPsym((P)"argument-type-error");
  lit_143 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T130 = YPsig(LITREF(lit_143),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yargument_type_error = YPmet(FUNCODEREF(Yargument_type_error),LITREF(lit_142),T130,ENVNUL,PNUL,sloc(251));
  T131 = Yargument_type_error;
  VARSET(Yargument_type_error,T131);
  lit_144 = YPPlist(1,YPPsym((P)"c"));
  lit_145 = YPsb((P)"During call of %= on %= ");
  T132 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YgooSconditionsYLargument_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_68 = YPmet(FUNCODEREF(fun_describe_condition_68),LITREF(lit_3),T132,ENVNUL,PNUL,sloc(256));
  T134 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T135 = fun_describe_condition_68;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YgooSconditionsYdescribe_condition,T133);
  lit_146 = YPPsym((P)"<return-type-error>");
  T138 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T137 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),T138);
  T136 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_146),T137);
  VARSET(YgooSconditionsYLreturn_type_errorG,T136);
  lit_147 = YPPsym((P)"return-type-error");
  lit_148 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"val"),YPPsym((P)"type"),YPPsym((P)"args"));
  T139 = YPsig(LITREF(lit_148),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  Yreturn_type_error = YPmet(FUNCODEREF(Yreturn_type_error),LITREF(lit_147),T139,ENVNUL,PNUL,sloc(263));
  T140 = Yreturn_type_error;
  VARSET(Yreturn_type_error,T140);
  lit_149 = YPPlist(1,YPPsym((P)"c"));
  lit_150 = YPsb((P)"During return of call of %= on %= ");
  T141 = YPsig(LITREF(lit_149),YPPlist(1,VARREF(YgooSconditionsYLreturn_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_70 = YPmet(FUNCODEREF(fun_describe_condition_70),LITREF(lit_3),T141,ENVNUL,PNUL,sloc(268));
  T143 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T144 = fun_describe_condition_70;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YgooSconditionsYdescribe_condition,T142);
  lit_151 = YPPsym((P)"<ambiguous-method-error>");
  T146 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T145 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_151),T146);
  VARSET(YgooSconditionsYLambiguous_method_errorG,T145);
  lit_152 = YPPsym((P)"ambiguous-method-error");
  lit_153 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T147 = YPsig(LITREF(lit_153),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yambiguous_method_error = YPmet(FUNCODEREF(Yambiguous_method_error),LITREF(lit_152),T147,ENVNUL,PNUL,sloc(275));
  T148 = Yambiguous_method_error;
  VARSET(Yambiguous_method_error,T148);
  lit_154 = YPPlist(1,YPPsym((P)"c"));
  lit_155 = YPsb((P)"Ambiguous methods on %= when called with %=.");
  T149 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YgooSconditionsYLambiguous_method_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_72 = YPmet(FUNCODEREF(fun_describe_condition_72),LITREF(lit_3),T149,ENVNUL,PNUL,sloc(279));
  T151 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T152 = fun_describe_condition_72;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T152);
  VARSET(YgooSconditionsYdescribe_condition,T150);
  lit_156 = YPPsym((P)"<no-applicable-methods-error>");
  T154 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T153 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_156),T154);
  VARSET(YgooSconditionsYLno_applicable_methods_errorG,T153);
  lit_157 = YPPsym((P)"no-applicable-methods-error");
  lit_158 = YPPlist(2,YPPsym((P)"gen"),YPPsym((P)"args"));
  T155 = YPsig(LITREF(lit_158),YPPlist(2,VARREF(YLgenG),VARREF(YLoptsG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_applicable_methods_error = YPmet(FUNCODEREF(Yno_applicable_methods_error),LITREF(lit_157),T155,ENVNUL,PNUL,sloc(285));
  T156 = Yno_applicable_methods_error;
  VARSET(Yno_applicable_methods_error,T156);
  lit_159 = YPPlist(1,YPPsym((P)"c"));
  lit_160 = YPsb((P)"No applicable methods on %= when called with %=.");
  T157 = YPsig(LITREF(lit_159),YPPlist(1,VARREF(YgooSconditionsYLno_applicable_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_74 = YPmet(FUNCODEREF(fun_describe_condition_74),LITREF(lit_3),T157,ENVNUL,PNUL,sloc(290));
  T159 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T160 = fun_describe_condition_74;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T160);
  VARSET(YgooSconditionsYdescribe_condition,T158);
  lit_161 = YPPsym((P)"<no-next-methods-error>");
  T162 = (P)YPpair(VARREF(YgooSconditionsYLcall_errorG),Ynil);
  T161 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_161),T162);
  VARSET(YgooSconditionsYLno_next_methods_errorG,T161);
  lit_162 = YPPsym((P)"no-next-methods-error");
  lit_163 = YPPlist(2,YPPsym((P)"met"),YPPsym((P)"args"));
  T163 = YPsig(LITREF(lit_163),YPPlist(2,VARREF(YLanyG),VARREF(YLseqG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yno_next_methods_error = YPmet(FUNCODEREF(Yno_next_methods_error),LITREF(lit_162),T163,ENVNUL,PNUL,sloc(296));
  T164 = Yno_next_methods_error;
  VARSET(Yno_next_methods_error,T164);
  lit_164 = YPPlist(1,YPPsym((P)"c"));
  lit_165 = YPsb((P)"No next-methods on %= when called with %=.");
  T165 = YPsig(LITREF(lit_164),YPPlist(1,VARREF(YgooSconditionsYLno_next_methods_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_76 = YPmet(FUNCODEREF(fun_describe_condition_76),LITREF(lit_3),T165,ENVNUL,PNUL,sloc(300));
  T167 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T168 = fun_describe_condition_76;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YgooSconditionsYdescribe_condition,T166);
  lit_166 = YPPsym((P)"<cpl-error>");
  T170 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T169 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_166),T170);
  VARSET(YgooSconditionsYLcpl_errorG,T169);
  lit_167 = YPPsym((P)"cpl-error");
  lit_168 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T171 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ycpl_error = YPmet(FUNCODEREF(Ycpl_error),LITREF(lit_167),T171,ENVNUL,PNUL,sloc(306));
  T172 = Ycpl_error;
  VARSET(Ycpl_error,T172);
  lit_169 = YPPsym((P)"<compiler-error>");
  T174 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T173 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_169),T174);
  VARSET(YgooSconditionsYLcompiler_errorG,T173);
  lit_170 = YPPsym((P)"<syntax-error>");
  T179 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T178 = (P)YPpair(VARREF(YgooSconditionsYLcompiler_errorG),T179);
  T177 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_170),T178);
  T176 = VARSET(YgooSconditionsYLsyntax_errorG,T177);
  T175 = T176;
  return T175;
}

P YgooSconditionsY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154,T155,T156,T157,T158,T159;
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172;
DEFCREGS();
  lit_171 = YPPsym((P)"syntax-error");
  lit_172 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T0 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Ysyntax_error = YPmet(FUNCODEREF(Ysyntax_error),LITREF(lit_171),T0,ENVNUL,PNUL,sloc(313));
  T1 = Ysyntax_error;
  VARSET(Ysyntax_error,T1);
  lit_173 = YPPsym((P)"<macro-error>");
  T3 = (P)YPpair(VARREF(YgooSconditionsYLsyntax_errorG),Ynil);
  T2 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_173),T3);
  VARSET(YgooSconditionsYLmacro_errorG,T2);
  lit_174 = YPPsym((P)"macro-error-name");
  lit_175 = YPPlist(1,YPPsym((P)"_x"));
  T4 = YPsig(LITREF(lit_175),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_name_79 = YPmet(FUNCODEREF(fun_macro_error_name_79),LITREF(lit_174),T4,ENVNUL,PNUL,sloc(318));
  T6 = VARREF_OR(YgooSconditionsYmacro_error_name,YPfalse);
  T7 = fun_macro_error_name_79;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YgooSconditionsYmacro_error_name,T5);
  lit_176 = YPPsym((P)"macro-error-name-setter");
  lit_177 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T8 = YPsig(LITREF(lit_177),YPPlist(2,VARREF(YLsymG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_name_setter_80 = YPmet(FUNCODEREF(fun_macro_error_name_setter_80),LITREF(lit_176),T8,ENVNUL,PNUL,sloc(318));
  T10 = VARREF_OR(YgooSconditionsYmacro_error_name_setter,YPfalse);
  T11 = fun_macro_error_name_setter_80;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YgooSconditionsYmacro_error_name_setter,T9);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_name),VARREF(YgooSconditionsYmacro_error_name_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_178 = YPPsym((P)"macro-error-arguments");
  lit_179 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_179),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_81 = YPmet(FUNCODEREF(fun_macro_error_arguments_81),LITREF(lit_178),T12,ENVNUL,PNUL,sloc(319));
  T14 = VARREF_OR(YgooSconditionsYmacro_error_arguments,YPfalse);
  T15 = fun_macro_error_arguments_81;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YgooSconditionsYmacro_error_arguments,T13);
  lit_180 = YPPsym((P)"macro-error-arguments-setter");
  lit_181 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_181),YPPlist(2,VARREF(YLlstG),VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_macro_error_arguments_setter_82 = YPmet(FUNCODEREF(fun_macro_error_arguments_setter_82),LITREF(lit_180),T16,ENVNUL,PNUL,sloc(319));
  T18 = VARREF_OR(YgooSconditionsYmacro_error_arguments_setter,YPfalse);
  T19 = fun_macro_error_arguments_setter_82;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YgooSconditionsYmacro_error_arguments_setter,T17);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLmacro_errorG),VARREF(YgooSconditionsYmacro_error_arguments),VARREF(YgooSconditionsYmacro_error_arguments_setter),VARREF(YLlstG),VARREF(YPprop_unbound_error));
  lit_182 = YPPsym((P)"macro-error");
  lit_183 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"args"));
  T20 = YPsig(LITREF(lit_183),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSmacrosYmacro_error = YPmet(FUNCODEREF(YgooSmacrosYmacro_error),LITREF(lit_182),T20,ENVNUL,PNUL,sloc(321));
  T21 = YgooSmacrosYmacro_error;
  VARSET(YgooSmacrosYmacro_error,T21);
  lit_184 = YPPlist(1,YPPsym((P)"c"));
  lit_185 = YPsb((P)"Macro expansion failure for %s when called with %=.");
  T22 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YgooSconditionsYLmacro_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_84 = YPmet(FUNCODEREF(fun_describe_condition_84),LITREF(lit_3),T22,ENVNUL,PNUL,sloc(324));
  T24 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T25 = fun_describe_condition_84;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YgooSconditionsYdescribe_condition,T23);
  lit_186 = YPPsym((P)"<stack-overflow>");
  T27 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T26 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_186),T27);
  VARSET(YgooSconditionsYLstack_overflowG,T26);
  lit_187 = YPPsym((P)"stack-overflow-error");
  T28 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ystack_overflow_error = YPmet(FUNCODEREF(Ystack_overflow_error),LITREF(lit_187),T28,ENVNUL,PNUL,sloc(330));
  T29 = Ystack_overflow_error;
  VARSET(Ystack_overflow_error,T29);
  lit_188 = YPPlist(1,YPPsym((P)"c"));
  lit_189 = YPsb((P)"Stack overflow.");
  T30 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YgooSconditionsYLstack_overflowG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_86 = YPmet(FUNCODEREF(fun_describe_condition_86),LITREF(lit_3),T30,ENVNUL,PNUL,sloc(333));
  T32 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T33 = fun_describe_condition_86;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YgooSconditionsYdescribe_condition,T31);
  lit_190 = YPPsym((P)"<internal-error>");
  T35 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T34 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_190),T35);
  VARSET(YgooSconditionsYLinternal_errorG,T34);
  lit_191 = YPPsym((P)"internal-error");
  lit_192 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T36 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yinternal_error = YPmet(FUNCODEREF(Yinternal_error),LITREF(lit_191),T36,ENVNUL,PNUL,sloc(337));
  T37 = Yinternal_error;
  VARSET(Yinternal_error,T37);
  lit_193 = YPPsym((P)"<assert-error>");
  T39 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T38 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_193),T39);
  VARSET(YgooSconditionsYLassert_errorG,T38);
  lit_194 = YPPsym((P)"assert-error");
  lit_195 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T40 = YPsig(LITREF(lit_195),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yassert_error = YPmet(FUNCODEREF(Yassert_error),LITREF(lit_194),T40,ENVNUL,PNUL,sloc(343));
  T41 = Yassert_error;
  VARSET(Yassert_error,T41);
  lit_196 = YPPlist(1,YPPsym((P)"c"));
  lit_197 = YPsb((P)"Assert failure ");
  T42 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YgooSconditionsYLassert_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_89 = YPmet(FUNCODEREF(fun_describe_condition_89),LITREF(lit_3),T42,ENVNUL,PNUL,sloc(347));
  T44 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T45 = fun_describe_condition_89;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YgooSconditionsYdescribe_condition,T43);
  lit_198 = YPPsym((P)"<range-error>");
  T47 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T46 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_198),T47);
  VARSET(YgooSconditionsYLrange_errorG,T46);
  lit_199 = YPPsym((P)"range-error-collection");
  lit_200 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_collection_90 = YPmet(FUNCODEREF(fun_range_error_collection_90),LITREF(lit_199),T48,ENVNUL,PNUL,sloc(351));
  T50 = VARREF_OR(YgooSconditionsYrange_error_collection,YPfalse);
  T51 = fun_range_error_collection_90;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YgooSconditionsYrange_error_collection,T49);
  lit_201 = YPPsym((P)"range-error-collection-setter");
  lit_202 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YLcolG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_collection_setter_91 = YPmet(FUNCODEREF(fun_range_error_collection_setter_91),LITREF(lit_201),T52,ENVNUL,PNUL,sloc(351));
  T54 = VARREF_OR(YgooSconditionsYrange_error_collection_setter,YPfalse);
  T55 = fun_range_error_collection_setter_91;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YgooSconditionsYrange_error_collection_setter,T53);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_collection),VARREF(YgooSconditionsYrange_error_collection_setter),VARREF(YLcolG),VARREF(YPprop_unbound_error));
  lit_203 = YPPsym((P)"range-error-key");
  lit_204 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_range_error_key_92 = YPmet(FUNCODEREF(fun_range_error_key_92),LITREF(lit_203),T56,ENVNUL,PNUL,sloc(352));
  T58 = VARREF_OR(YgooSconditionsYrange_error_key,YPfalse);
  T59 = fun_range_error_key_92;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YgooSconditionsYrange_error_key,T57);
  lit_205 = YPPsym((P)"range-error-key-setter");
  lit_206 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_206),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_key_setter_93 = YPmet(FUNCODEREF(fun_range_error_key_setter_93),LITREF(lit_205),T60,ENVNUL,PNUL,sloc(352));
  T62 = VARREF_OR(YgooSconditionsYrange_error_key_setter,YPfalse);
  T63 = fun_range_error_key_setter_93;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YgooSconditionsYrange_error_key_setter,T61);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLrange_errorG),VARREF(YgooSconditionsYrange_error_key),VARREF(YgooSconditionsYrange_error_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_207 = YPPsym((P)"range-error");
  lit_208 = YPPlist(2,YPPsym((P)"c"),YPPsym((P)"k"));
  T64 = YPsig(LITREF(lit_208),YPPlist(2,VARREF(YLcolG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_range_error_94 = YPmet(FUNCODEREF(fun_range_error_94),LITREF(lit_207),T64,ENVNUL,PNUL,sloc(354));
  T66 = VARREF_OR(Yrange_error,YPfalse);
  T67 = fun_range_error_94;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(Yrange_error,T65);
  lit_209 = YPPlist(1,YPPsym((P)"c"));
  lit_210 = YPsb((P)"Nonexistent key %= in %=");
  T68 = YPsig(LITREF(lit_209),YPPlist(1,VARREF(YgooSconditionsYLrange_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_95 = YPmet(FUNCODEREF(fun_describe_condition_95),LITREF(lit_3),T68,ENVNUL,PNUL,sloc(357));
  T70 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T71 = fun_describe_condition_95;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YgooSconditionsYdescribe_condition,T69);
  lit_211 = YPPsym((P)"<io-error>");
  T73 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T72 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_211),T73);
  VARSET(YgooSconditionsYLio_errorG,T72);
  lit_212 = YPPsym((P)"<file-opening-error>");
  T75 = (P)YPpair(VARREF(YgooSconditionsYLio_errorG),Ynil);
  T74 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_212),T75);
  VARSET(YgooSconditionsYLfile_opening_errorG,T74);
  lit_213 = YPPsym((P)"file-opening-error-filename");
  lit_214 = YPPlist(1,YPPsym((P)"_x"));
  T76 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_96 = YPmet(FUNCODEREF(fun_file_opening_error_filename_96),LITREF(lit_213),T76,ENVNUL,PNUL,sloc(364));
  T78 = VARREF_OR(YgooSconditionsYfile_opening_error_filename,YPfalse);
  T79 = fun_file_opening_error_filename_96;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YgooSconditionsYfile_opening_error_filename,T77);
  lit_215 = YPPsym((P)"file-opening-error-filename-setter");
  lit_216 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T80 = YPsig(LITREF(lit_216),YPPlist(2,VARREF(YLstrG),VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_file_opening_error_filename_setter_97 = YPmet(FUNCODEREF(fun_file_opening_error_filename_setter_97),LITREF(lit_215),T80,ENVNUL,PNUL,sloc(364));
  T82 = VARREF_OR(YgooSconditionsYfile_opening_error_filename_setter,YPfalse);
  T83 = fun_file_opening_error_filename_setter_97;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YgooSconditionsYfile_opening_error_filename_setter,T81);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLfile_opening_errorG),VARREF(YgooSconditionsYfile_opening_error_filename),VARREF(YgooSconditionsYfile_opening_error_filename_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_217 = YPPsym((P)"file-opening-error");
  lit_218 = YPPlist(1,YPPsym((P)"filename"));
  T84 = YPsig(LITREF(lit_218),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_file_opening_error_98 = YPmet(FUNCODEREF(fun_file_opening_error_98),LITREF(lit_217),T84,ENVNUL,PNUL,sloc(366));
  T86 = VARREF_OR(Yfile_opening_error,YPfalse);
  T87 = fun_file_opening_error_98;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(Yfile_opening_error,T85);
  lit_219 = YPPlist(1,YPPsym((P)"c"));
  lit_220 = YPsb((P)"Failed to open %s.");
  T88 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YgooSconditionsYLfile_opening_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_99 = YPmet(FUNCODEREF(fun_describe_condition_99),LITREF(lit_3),T88,ENVNUL,PNUL,sloc(369));
  T90 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T91 = fun_describe_condition_99;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YgooSconditionsYdescribe_condition,T89);
  lit_221 = YPPsym((P)"<unbound-error>");
  T93 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T92 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_221),T93);
  VARSET(YgooSconditionsYLunbound_errorG,T92);
  lit_222 = YPPsym((P)"<unbound-variable-error>");
  T95 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T94 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_222),T95);
  VARSET(YgooSconditionsYLunbound_variable_errorG,T94);
  lit_223 = YPPsym((P)"unbound-variable-error-variable");
  lit_224 = YPPlist(1,YPPsym((P)"_x"));
  T96 = YPsig(LITREF(lit_224),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_100 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_100),LITREF(lit_223),T96,ENVNUL,PNUL,sloc(375));
  T98 = VARREF_OR(YgooSconditionsYunbound_variable_error_variable,YPfalse);
  T99 = fun_unbound_variable_error_variable_100;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YgooSconditionsYunbound_variable_error_variable,T97);
  lit_225 = YPPsym((P)"unbound-variable-error-variable-setter");
  lit_226 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T100 = YPsig(LITREF(lit_226),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_unbound_variable_error_variable_setter_101 = YPmet(FUNCODEREF(fun_unbound_variable_error_variable_setter_101),LITREF(lit_225),T100,ENVNUL,PNUL,sloc(375));
  T102 = VARREF_OR(YgooSconditionsYunbound_variable_error_variable_setter,YPfalse);
  T103 = fun_unbound_variable_error_variable_setter_101;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YgooSconditionsYunbound_variable_error_variable_setter,T101);
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),VARREF(YgooSconditionsYunbound_variable_error_variable_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_227 = YPPlist(1,YPPsym((P)"c"));
  lit_228 = YPsb((P)"Unbound variable %s.");
  T104 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YgooSconditionsYLunbound_variable_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_102 = YPmet(FUNCODEREF(fun_describe_condition_102),LITREF(lit_3),T104,ENVNUL,PNUL,sloc(377));
  T106 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T107 = fun_describe_condition_102;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YgooSconditionsYdescribe_condition,T105);
  lit_229 = YPPsym((P)"<property-error>");
  T109 = (P)YPpair(VARREF(YgooSconditionsYLerrorG),Ynil);
  T108 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_229),T109);
  VARSET(YgooSconditionsYLproperty_errorG,T108);
  lit_230 = YPPsym((P)"property-error-owner");
  lit_231 = YPPlist(1,YPPsym((P)"_x"));
  T110 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_owner_103 = YPmet(FUNCODEREF(fun_property_error_owner_103),LITREF(lit_230),T110,ENVNUL,PNUL,sloc(381));
  T112 = VARREF_OR(YgooSconditionsYproperty_error_owner,YPfalse);
  T113 = fun_property_error_owner_103;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YgooSconditionsYproperty_error_owner,T111);
  lit_232 = YPPsym((P)"property-error-owner-setter");
  lit_233 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T114 = YPsig(LITREF(lit_233),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_owner_setter_104 = YPmet(FUNCODEREF(fun_property_error_owner_setter_104),LITREF(lit_232),T114,ENVNUL,PNUL,sloc(381));
  T116 = VARREF_OR(YgooSconditionsYproperty_error_owner_setter,YPfalse);
  T117 = fun_property_error_owner_setter_104;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YgooSconditionsYproperty_error_owner_setter,T115);
  lit_234 = YPPlist(1,YPPsym((P)"_x"));
  T118 = YPsig(LITREF(lit_234),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T118,ENVNUL,PNUL,sloc(381));
  T119 = fun_105;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_owner),VARREF(YgooSconditionsYproperty_error_owner_setter),VARREF(YLanyG),T119);
  lit_235 = YPPsym((P)"property-error-generic");
  lit_236 = YPPlist(1,YPPsym((P)"_x"));
  T120 = YPsig(LITREF(lit_236),YPPlist(1,VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_property_error_generic_106 = YPmet(FUNCODEREF(fun_property_error_generic_106),LITREF(lit_235),T120,ENVNUL,PNUL,sloc(382));
  T122 = VARREF_OR(YgooSconditionsYproperty_error_generic,YPfalse);
  T123 = fun_property_error_generic_106;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YgooSconditionsYproperty_error_generic,T121);
  lit_237 = YPPsym((P)"property-error-generic-setter");
  lit_238 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T124 = YPsig(LITREF(lit_238),YPPlist(2,VARREF(YLanyG),VARREF(YgooSconditionsYLproperty_errorG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_property_error_generic_setter_107 = YPmet(FUNCODEREF(fun_property_error_generic_setter_107),LITREF(lit_237),T124,ENVNUL,PNUL,sloc(382));
  T126 = VARREF_OR(YgooSconditionsYproperty_error_generic_setter,YPfalse);
  T127 = fun_property_error_generic_setter_107;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YgooSconditionsYproperty_error_generic_setter,T125);
  lit_239 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T128,ENVNUL,PNUL,sloc(382));
  T129 = fun_108;
  XCALL5(1,VARREF(YPprop),VARREF(YgooSconditionsYLproperty_errorG),VARREF(YgooSconditionsYproperty_error_generic),VARREF(YgooSconditionsYproperty_error_generic_setter),VARREF(YLanyG),T129);
  lit_240 = YPPsym((P)"<property-unbound-error>");
  T132 = (P)YPpair(VARREF(YgooSconditionsYLunbound_errorG),Ynil);
  T131 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T132);
  T130 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_240),T131);
  VARSET(YgooSconditionsYLproperty_unbound_errorG,T130);
  lit_241 = YPPsym((P)"property-unbound-error");
  lit_242 = YPPlist(1,YPPsym((P)"owner"));
  T133 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yproperty_unbound_error = YPmet(FUNCODEREF(Yproperty_unbound_error),LITREF(lit_241),T133,ENVNUL,PNUL,sloc(386));
  T134 = Yproperty_unbound_error;
  VARSET(Yproperty_unbound_error,T134);
  lit_243 = YPPlist(1,YPPsym((P)"c"));
  lit_244 = YPsb((P)"Unbound property on %=.");
  T135 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YgooSconditionsYLproperty_unbound_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_110 = YPmet(FUNCODEREF(fun_describe_condition_110),LITREF(lit_3),T135,ENVNUL,PNUL,sloc(389));
  T137 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T138 = fun_describe_condition_110;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T138);
  VARSET(YgooSconditionsYdescribe_condition,T136);
  lit_245 = YPPsym((P)"<property-not-found-error>");
  T140 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),Ynil);
  T139 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_245),T140);
  VARSET(YgooSconditionsYLproperty_not_found_errorG,T139);
  lit_246 = YPPsym((P)"property-not-found-error");
  lit_247 = YPPlist(2,YPPsym((P)"generic"),YPPsym((P)"owner"));
  T141 = YPsig(LITREF(lit_247),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yproperty_not_found_error = YPmet(FUNCODEREF(Yproperty_not_found_error),LITREF(lit_246),T141,ENVNUL,PNUL,sloc(394));
  T142 = Yproperty_not_found_error;
  VARSET(Yproperty_not_found_error,T142);
  lit_248 = YPPlist(1,YPPsym((P)"c"));
  lit_249 = YPsb((P)"Property %s not found in %s.");
  T143 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YgooSconditionsYLproperty_not_found_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_112 = YPmet(FUNCODEREF(fun_describe_condition_112),LITREF(lit_3),T143,ENVNUL,PNUL,sloc(399));
  T145 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T146 = fun_describe_condition_112;
  T144 = XCALL2(1,VARREF(YPdefine_method),T145,T146);
  VARSET(YgooSconditionsYdescribe_condition,T144);
  lit_250 = YPPsym((P)"<property-type-error>");
  T149 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T148 = (P)YPpair(VARREF(YgooSconditionsYLproperty_errorG),T149);
  T147 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_250),T148);
  VARSET(YgooSconditionsYLproperty_type_errorG,T147);
  lit_251 = YPPsym((P)"property-type-error");
  lit_252 = YPPlist(3,YPPsym((P)"generic"),YPPsym((P)"value"),YPPsym((P)"type"));
  T150 = YPsig(LITREF(lit_252),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  Yproperty_type_error = YPmet(FUNCODEREF(Yproperty_type_error),LITREF(lit_251),T150,ENVNUL,PNUL,sloc(405));
  T151 = Yproperty_type_error;
  VARSET(Yproperty_type_error,T151);
  lit_253 = YPPlist(1,YPPsym((P)"c"));
  lit_254 = YPsb((P)"Property %s ");
  T152 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YgooSconditionsYLproperty_type_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_114 = YPmet(FUNCODEREF(fun_describe_condition_114),LITREF(lit_3),T152,ENVNUL,PNUL,sloc(411));
  T154 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T155 = fun_describe_condition_114;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YgooSconditionsYdescribe_condition,T153);
  lit_255 = YPPsym((P)"<as-error>");
  T157 = (P)YPpair(VARREF(YgooSconditionsYLtype_errorG),Ynil);
  T156 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_255),T157);
  VARSET(YgooSconditionsYLas_errorG,T156);
  lit_256 = YPPsym((P)"as-error");
  lit_257 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"value"));
  T158 = YPsig(LITREF(lit_257),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yas_error = YPmet(FUNCODEREF(Yas_error),LITREF(lit_256),T158,ENVNUL,PNUL,sloc(416));
  T159 = Yas_error;
  VARSET(Yas_error,T159);
  lit_258 = YPPlist(1,YPPsym((P)"c"));
  lit_259 = YPsb((P)"No AS method for type %t and value %=.");
  T160 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YgooSconditionsYLas_errorG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_describe_condition_116 = YPmet(FUNCODEREF(fun_describe_condition_116),LITREF(lit_3),T160,ENVNUL,PNUL,sloc(419));
  T162 = VARREF_OR(YgooSconditionsYdescribe_condition,YPfalse);
  T163 = fun_describe_condition_116;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YgooSconditionsYdescribe_condition,T161);
  lit_260 = YPPsym((P)"<arithmetic-error>");
  T165 = (P)YPpair(VARREF(YgooSconditionsYLsimple_errorG),Ynil);
  T164 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_260),T165);
  VARSET(YgooSconditionsYLarithmetic_errorG,T164);
  lit_261 = YPPsym((P)"arithmetic-error");
  lit_262 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  T166 = YPsig(LITREF(lit_262),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  Yarithmetic_error = YPmet(FUNCODEREF(Yarithmetic_error),LITREF(lit_261),T166,ENVNUL,PNUL,sloc(425));
  T167 = Yarithmetic_error;
  VARSET(Yarithmetic_error,T167);
  lit_263 = YPPsym((P)"<keyboard-interrupt>");
  T169 = (P)YPpair(VARREF(YgooSconditionsYLconditionG),Ynil);
  T168 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_263),T169);
  VARSET(YgooSconditionsYLkeyboard_interruptG,T168);
  lit_264 = YPPsym((P)"keyboard-interrupt");
  T170 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_264),T170,ENVNUL,PNUL,sloc(431));
  T171 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T171);
  T172 = YPfalse;
  return T172;
}

P YgooSconditionsY___main_3___() {
  P tmpF2426;
  P tmpF2425;
  P tmpF2424;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
DEFCREGS();
  lit_265 = YPPsym((P)"do-handlers-of-type");
  lit_266 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"f"));
  T1 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T0 = YPsig(LITREF(lit_266),YPPlist(2,T1,VARREF(YLfunG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YgooSconditionsYdo_handlers_of_type = YPmet(FUNCODEREF(YgooSconditionsYdo_handlers_of_type),LITREF(lit_265),T0,ENVNUL,PNUL,sloc(462));
  T2 = YgooSconditionsYdo_handlers_of_type;
  VARSET(YgooSconditionsYdo_handlers_of_type,T2);
  lit_267 = YPPsym((P)"list-handlers");
  lit_268 = YPPlist(2,YPPsym((P)"type"),YPPsym((P)"out"));
  lit_269 = YPPlist(1,YPPsym((P)"handler"));
  lit_270 = YPsb((P)"%d. %s.\n");
  T5 = YPsig(LITREF(lit_269),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_120 = YPmet(FUNCODEREF(fun_120),YPfalse,T5,ENVNUL,PNUL,sloc(481));
  T4 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T3 = YPsig(LITREF(lit_268),YPPlist(2,T4,VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YgooScolsSvecYLvecG),Ynil);
  YgooSconditionsYlist_handlers = YPmet(FUNCODEREF(YgooSconditionsYlist_handlers),LITREF(lit_267),T3,ENVNUL,PNUL,sloc(477));
  T6 = YgooSconditionsYlist_handlers;
  VARSET(YgooSconditionsYlist_handlers,T6);
  lit_271 = YPPsym((P)"invoke-handler-interactively");
  lit_272 = YPPlist(3,YPPsym((P)"handler"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_273 = YPsb((P)"Handler %= does not match condition %=");
  lit_274 = YPsb((P)"Handler %= is not installed");
  T8 = YPsig(LITREF(lit_93),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T8,ENVNUL,PNUL,sloc(504));
  T7 = YPsig(LITREF(lit_272),YPPlist(3,VARREF(YgooSconditionsYLhandlerG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYinvoke_handler_interactively = YPmet(FUNCODEREF(YgooSconditionsYinvoke_handler_interactively),LITREF(lit_271),T7,ENVNUL,PNUL,sloc(491));
  T9 = YgooSconditionsYinvoke_handler_interactively;
  VARSET(YgooSconditionsYinvoke_handler_interactively,T9);
  lit_275 = YPPsym((P)"choose-handler");
  lit_276 = YPPlist(3,YPPsym((P)"type"),YPPsym((P)"in"),YPPsym((P)"out"));
  lit_277 = YPsb((P)"Please pick a handler: ");
  lit_278 = YPsb((P)"No such handler %d");
  T11 = XCALL1(1,VARREF(YgooStypesYtL),VARREF(YgooSconditionsYLconditionG));
  T10 = YPsig(LITREF(lit_276),YPPlist(3,T11,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YgooSconditionsYchoose_handler = YPmet(FUNCODEREF(YgooSconditionsYchoose_handler),LITREF(lit_275),T10,ENVNUL,PNUL,sloc(508));
  T12 = YgooSconditionsYchoose_handler;
  VARSET(YgooSconditionsYchoose_handler,T12);
  VARSET(YTrestarts_okQT,YPtrue);
  tmpF2424 = YPfalse;
  if (tmpF2424 != YPfalse) {
    T13 = VARREF(YgooSconditionsYread);
  } else {
    T13 = YPfalse;
  }
  tmpF2425 = YPfalse;
  if (tmpF2425 != YPfalse) {
    T14 = VARREF(YgooSconditionsYmsg);
  } else {
    T14 = YPfalse;
  }
  tmpF2426 = YPfalse;
  if (tmpF2426 != YPfalse) {
    T15 = VARREF(YgooSconditionsYmsg_to_str);
  } else {
    T15 = YPfalse;
  }
  T16 = YPfalse;
  return T16;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
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
  {"clone", &module_info_gooSboot, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"%os-name", &module_info_gooSboot, NULL},
  {"%ftanh", &module_info_gooSboot, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"%fatan2", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"eof-object", &module_info_gooSmath, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"%fsin", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%facos", &module_info_gooSboot, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"%get", &module_info_gooSboot, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"%fcosh", &module_info_gooSboot, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"ins!", &module_info_gooScolsSseqx, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"power-of-two-ceil", &module_info_gooSmath, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"%close-out-port", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"do-key-vals", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"gen-refs-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"%open-out-file", &module_info_gooSboot, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"mod-", &module_info_gooSmath, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"%fsinh", &module_info_gooSboot, NULL},
  {"vals-to-str", &module_info_gooScolsSseq, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%f=", &module_info_gooSboot, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"%f-", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%time", &module_info_gooSboot, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%ftan", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"%current-in-port", &module_info_gooSboot, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"%peek", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"as-log", &module_info_gooSmath, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%fpow", &module_info_gooSboot, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"%open-in-file", &module_info_gooSboot, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"fun-refs-setter", &module_info_gooSboot, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"%f<", &module_info_gooSboot, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"%os-val", &module_info_gooSboot, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, NULL},
  {"%create-directory", &module_info_gooSboot, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%file-mtime", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"t<", &module_info_gooStypes, NULL},
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
  {"pub", &module_info_gooSmacros, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"port-handle-setter", &module_info_gooSioSport, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"moddecf", &module_info_gooSmath, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"<replace-generic-restart>", &module_info_gooSboot, NULL},
  {"%f*", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"%flo-bits", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"min", &module_info_gooSmag, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"%f/", &module_info_gooSboot, NULL},
  {"alter", &module_info_gooScolsSseqx, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"assq", &module_info_gooScolsSlst, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
  {"%fsqrt", &module_info_gooSboot, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"%fasin", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"%os-val-setter", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"%flog", &module_info_gooSboot, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"<bot>", &module_info_gooSmath, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"range-check?", &module_info_gooScolsSseq, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%ready?", &module_info_gooSboot, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"%file-exists?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"contagious-call", &module_info_gooSmath, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"%force-out", &module_info_gooSboot, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"port-handle", &module_info_gooSioSport, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"port-index-setter", &module_info_gooSioSport, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"%fcos", &module_info_gooSboot, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {">", &module_info_gooSmag, NULL},
  {"range-check", &module_info_gooScolsSseq, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"%fatan", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%ft", &module_info_gooSboot, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"port-line-setter", &module_info_gooSioSport, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"contagious-type", &module_info_gooSmath, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"%f+", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%put", &module_info_gooSboot, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"%current-out-port", &module_info_gooSboot, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%puts", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"<return-type-error>", CVAR, &YgooSconditionsYLreturn_type_errorG},
  {"file-opening-error-filename", CVAR, &YgooSconditionsYfile_opening_error_filename},
  {"handler-test", CVAR, &YgooSconditionsYhandler_test},
  {"<error>", CVAR, &YgooSconditionsYLerrorG},
  {"<property-type-error>", CVAR, &YgooSconditionsYLproperty_type_errorG},
  {"<file-opening-error>", CVAR, &YgooSconditionsYLfile_opening_errorG},
  {"<handler>", CVAR, &YgooSconditionsYLhandlerG},
  {"type-error-value-setter", CVAR, &YgooSconditionsYtype_error_value_setter},
  {"call-error-arguments-setter", CVAR, &YgooSconditionsYcall_error_arguments_setter},
  {"call-error-function", CVAR, &YgooSconditionsYcall_error_function},
  {"<range-error>", CVAR, &YgooSconditionsYLrange_errorG},
  {"range-error-key-setter", CVAR, &YgooSconditionsYrange_error_key_setter},
  {"handler-function", CVAR, &YgooSconditionsYhandler_function},
  {"<restart>", CVAR, &YgooSconditionsYLrestartG},
  {"<no-applicable-methods-error>", CVAR, &YgooSconditionsYLno_applicable_methods_errorG},
  {"<argument-type-error>", CVAR, &YgooSconditionsYLargument_type_errorG},
  {"invoke-handler-interactively", CVAR, &YgooSconditionsYinvoke_handler_interactively},
  {"range-error-collection", CVAR, &YgooSconditionsYrange_error_collection},
  {"fab-handler", CVAR, &YgooSconditionsYfab_handler},
  {"<type-error>", CVAR, &YgooSconditionsYLtype_errorG},
  {"macro-error-arguments-setter", CVAR, &YgooSconditionsYmacro_error_arguments_setter},
  {"<ambiguous-method-error>", CVAR, &YgooSconditionsYLambiguous_method_errorG},
  {"incongruent-method-error-generic-setter", CVAR, &YgooSconditionsYincongruent_method_error_generic_setter},
  {"default-handler-description", CVAR, &YgooSconditionsYdefault_handler_description},
  {"<keyboard-interrupt>", CVAR, &YgooSconditionsYLkeyboard_interruptG},
  {"<unknown-function-error>", CVAR, &YgooSconditionsYLunknown_function_errorG},
  {"property-error-owner-setter", CVAR, &YgooSconditionsYproperty_error_owner_setter},
  {"<condition>", CVAR, &YgooSconditionsYLconditionG},
  {"---main-0---", PVAR, NULL},
  {"type-error-value", CVAR, &YgooSconditionsYtype_error_value},
  {"<simple-condition>", CVAR, &YgooSconditionsYLsimple_conditionG},
  {"unbound-variable-error-variable-setter", CVAR, &YgooSconditionsYunbound_variable_error_variable_setter},
  {"describe-handler", CVAR, &YgooSconditionsYdescribe_handler},
  {"range-error-key", CVAR, &YgooSconditionsYrange_error_key},
  {"<compiler-error>", CVAR, &YgooSconditionsYLcompiler_errorG},
  {"handler-condition-type-setter", CVAR, &YgooSconditionsYhandler_condition_type_setter},
  {"choose-handler", CVAR, &YgooSconditionsYchoose_handler},
  {"<arithmetic-error>", CVAR, &YgooSconditionsYLarithmetic_errorG},
  {"<incongruent-method-error>", CVAR, &YgooSconditionsYLincongruent_method_errorG},
  {"<arity-error>", CVAR, &YgooSconditionsYLarity_errorG},
  {"<property-error>", CVAR, &YgooSconditionsYLproperty_errorG},
  {"list-handlers", CVAR, &YgooSconditionsYlist_handlers},
  {"<internal-error>", CVAR, &YgooSconditionsYLinternal_errorG},
  {"<unbound-variable-error>", CVAR, &YgooSconditionsYLunbound_variable_errorG},
  {"<io-error>", CVAR, &YgooSconditionsYLio_errorG},
  {"<syntax-error>", CVAR, &YgooSconditionsYLsyntax_errorG},
  {"macro-error-name-setter", CVAR, &YgooSconditionsYmacro_error_name_setter},
  {"condition-message-setter", CVAR, &YgooSconditionsYcondition_message_setter},
  {"<no-next-methods-error>", CVAR, &YgooSconditionsYLno_next_methods_errorG},
  {"<macro-error>", CVAR, &YgooSconditionsYLmacro_errorG},
  {"property-error-generic-setter", CVAR, &YgooSconditionsYproperty_error_generic_setter},
  {"macro-error-arguments", CVAR, &YgooSconditionsYmacro_error_arguments},
  {"---main-2---", PVAR, NULL},
  {"incongruent-method-error-generic", CVAR, &YgooSconditionsYincongruent_method_error_generic},
  {"describe-condition", CVAR, &YgooSconditionsYdescribe_condition},
  {"type-error-type", CVAR, &YgooSconditionsYtype_error_type},
  {"<unbound-error>", CVAR, &YgooSconditionsYLunbound_errorG},
  {"call-error-function-setter", CVAR, &YgooSconditionsYcall_error_function_setter},
  {"call-error-arguments", CVAR, &YgooSconditionsYcall_error_arguments},
  {"msg-to-str", CVAR, &YgooSconditionsYmsg_to_str},
  {"signal-handler-list", CVAR, &YgooSconditionsYsignal_handler_list},
  {"handler-condition-type", CVAR, &YgooSconditionsYhandler_condition_type},
  {"property-error-owner", CVAR, &YgooSconditionsYproperty_error_owner},
  {"*current-handlers*", DVAR, &YgooSconditionsYTcurrent_handlersT},
  {"---main-3---", PVAR, NULL},
  {"handler-info-setter", CVAR, &YgooSconditionsYhandler_info_setter},
  {"unbound-variable-error-variable", CVAR, &YgooSconditionsYunbound_variable_error_variable},
  {"incongruent-method-error-method-setter", CVAR, &YgooSconditionsYincongruent_method_error_method_setter},
  {"handler-info-message-setter", CVAR, &YgooSconditionsYhandler_info_message_setter},
  {"do-handlers-of-type", CVAR, &YgooSconditionsYdo_handlers_of_type},
  {"<as-error>", CVAR, &YgooSconditionsYLas_errorG},
  {"incongruent-method-error-method", CVAR, &YgooSconditionsYincongruent_method_error_method},
  {"handler-matches?", CVAR, &YgooSconditionsYhandler_matchesQ},
  {"<serious-condition>", CVAR, &YgooSconditionsYLserious_conditionG},
  {"macro-error-name", CVAR, &YgooSconditionsYmacro_error_name},
  {"condition-message", CVAR, &YgooSconditionsYcondition_message},
  {"type-error-type-setter", CVAR, &YgooSconditionsYtype_error_type_setter},
  {"file-opening-error-filename-setter", CVAR, &YgooSconditionsYfile_opening_error_filename_setter},
  {"handler-test-setter", CVAR, &YgooSconditionsYhandler_test_setter},
  {"property-error-generic", CVAR, &YgooSconditionsYproperty_error_generic},
  {"<stack-overflow>", CVAR, &YgooSconditionsYLstack_overflowG},
  {"<handler-info>", CVAR, &YgooSconditionsYLhandler_infoG},
  {"condition-arguments-setter", CVAR, &YgooSconditionsYcondition_arguments_setter},
  {"<simple-error>", CVAR, &YgooSconditionsYLsimple_errorG},
  {"<property-not-found-error>", CVAR, &YgooSconditionsYLproperty_not_found_errorG},
  {"---main-1---", PVAR, NULL},
  {"handler-info", CVAR, &YgooSconditionsYhandler_info},
  {"handler-info-arguments-setter", CVAR, &YgooSconditionsYhandler_info_arguments_setter},
  {"build-condition-for-handler-interactively", CVAR, &YgooSconditionsYbuild_condition_for_handler_interactively},
  {"read", CVAR, &YgooSconditionsYread},
  {"<assert-error>", CVAR, &YgooSconditionsYLassert_errorG},
  {"handler-function-setter", CVAR, &YgooSconditionsYhandler_function_setter},
  {"default-handler", CVAR, &YgooSconditionsYdefault_handler},
  {"msg", CVAR, &YgooSconditionsYmsg},
  {"<cpl-error>", CVAR, &YgooSconditionsYLcpl_errorG},
  {"<property-unbound-error>", CVAR, &YgooSconditionsYLproperty_unbound_errorG},
  {"build-condition-interactively", CVAR, &YgooSconditionsYbuild_condition_interactively},
  {"<narity-error>", CVAR, &YgooSconditionsYLnarity_errorG},
  {"$default-handler-info", CVAR, &YgooSconditionsYDdefault_handler_info},
  {"condition-arguments", CVAR, &YgooSconditionsYcondition_arguments},
  {"handler-active?", CVAR, &YgooSconditionsYhandler_activeQ},
  {"<call-error>", CVAR, &YgooSconditionsYLcall_errorG},
  {"sig", CVAR, &YgooSconditionsYsig},
  {"range-error-collection-setter", CVAR, &YgooSconditionsYrange_error_collection_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<return-type-error>", NULL},
  {"file-opening-error-filename", NULL},
  {"assert-error", NULL},
  {"<error>", NULL},
  {"<property-type-error>", NULL},
  {"internal-error", NULL},
  {"<file-opening-error>", NULL},
  {"<handler>", NULL},
  {"handler-info-arguments", NULL},
  {"call-error-function", NULL},
  {"arity-error", NULL},
  {"<range-error>", NULL},
  {"handler-function", NULL},
  {"<restart>", NULL},
  {"<no-applicable-methods-error>", NULL},
  {"<argument-type-error>", NULL},
  {"invoke-handler-interactively", NULL},
  {"range-error-collection", NULL},
  {"fab-handler", NULL},
  {"<type-error>", NULL},
  {"return-type-error", NULL},
  {"macro-error", NULL},
  {"default-handler-description", NULL},
  {"<simple-error>", NULL},
  {"<keyboard-interrupt>", NULL},
  {"<unknown-function-error>", NULL},
  {"<condition>", NULL},
  {"type-error-value", NULL},
  {"<simple-condition>", NULL},
  {"call-error-arguments", NULL},
  {"describe-handler", NULL},
  {"range-error-key", NULL},
  {"<compiler-error>", NULL},
  {"no-next-methods-error", NULL},
  {"%with-monitor", NULL},
  {"choose-handler", NULL},
  {"<arity-error>", NULL},
  {"<property-error>", NULL},
  {"list-handlers", NULL},
  {"<internal-error>", NULL},
  {"<simple-handler-info>", NULL},
  {"<io-error>", NULL},
  {"argument-type-error", NULL},
  {"<syntax-error>", NULL},
  {"stack-overflow-error", NULL},
  {"arithmetic-error", NULL},
  {"<macro-error>", NULL},
  {"macro-error-arguments", NULL},
  {"describe-condition", NULL},
  {"<unbound-error>", NULL},
  {"<no-next-methods-error>", NULL},
  {"msg-to-str", NULL},
  {"error", NULL},
  {"property-error-owner", NULL},
  {"type-error-type", NULL},
  {"narity-error", NULL},
  {"range-error", NULL},
  {"unbound-variable-error-variable", NULL},
  {"<replace-generic-restart>", NULL},
  {"<unbound-variable-error>", NULL},
  {"<as-error>", NULL},
  {"handler-matches?", NULL},
  {"*current-handlers*", NULL},
  {"<serious-condition>", NULL},
  {"macro-error-name", NULL},
  {"condition-message", NULL},
  {"keyboard-interrupt", NULL},
  {"property-error-generic", NULL},
  {"<ambiguous-method-error>", NULL},
  {"<stack-overflow>", NULL},
  {"<handler-info>", NULL},
  {"<property-not-found-error>", NULL},
  {"build-condition-for-handler-interactively", NULL},
  {"handler-info-message", NULL},
  {"read", NULL},
  {"<assert-error>", NULL},
  {"<arithmetic-error>", NULL},
  {"default-handler", NULL},
  {"msg", NULL},
  {"<property-unbound-error>", NULL},
  {"build-condition-interactively", NULL},
  {"<narity-error>", NULL},
  {"$default-handler-info", NULL},
  {"condition-arguments", NULL},
  {"<call-error>", NULL},
  {"sig", NULL},
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

}

/* END OF GENERATED CODE. */
