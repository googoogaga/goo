/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/syntax");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/syntax */

EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
EXT(Yassert_error,"goo/boot","assert-error");
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
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YPsnul,"goo/boot","%snul");
EXT(Ynot,"goo/boot","not");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YLchrG,"goo/boot","<chr>");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
EXT(YLanyG,"goo/boot","<any>");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSmathYround,"goo/math","round");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Yhead,"goo/boot","head");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(YgooSmathYevenQ,"goo/math","even?");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ysig_names,"goo/boot","sig-names");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooStypesYtQ,"goo/types","t?");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
EXT(Yas_error,"goo/boot","as-error");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLclassG,"goo/boot","<class>");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(Ysig_specs,"goo/boot","sig-specs");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
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
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YPprop,"goo/boot","%prop");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSioSportYget,"goo/io/port","get");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yfun_refs,"goo/boot","fun-refs");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YLtupG,"goo/boot","<tup>");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YLmetG,"goo/boot","<met>");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YPPmacro,"goo/boot","%%macro");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YtT,"goo/boot","t*");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yclass_props,"goo/boot","class-props");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YLmagG,"goo/boot","<mag>");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Ynew,"goo/boot","new");
EXT(YLunionG,"goo/boot","<union>");
DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yclass_of,"goo/boot","class-of");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYroundS,"goo/math","round/");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(Ytup,"goo/boot","tup");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Ynil,"goo/boot","nil");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
EXT(YLseqG,"goo/boot","<seq>");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yprop_type,"goo/boot","prop-type");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
EXT(YLsigG,"goo/boot","<sig>");
DEF(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSmagYGE,"goo/mag",">=");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
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
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSmagYL,"goo/mag","<");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(Yclone,"goo/boot","clone");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
EXT(YgooSmathYsin,"goo/math","sin");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(Yfun_names,"goo/boot","fun-names");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YOanyQ,"goo/boot","@any?");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(Yclass_name,"goo/boot","class-name");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSmathYB,"goo/math","&");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YLfloG,"goo/boot","<flo>");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YLfixnumG,"goo/boot","<fixnum>");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YLproductG,"goo/boot","<product>");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_28);
DEFLIT(lit_204);
DEFLIT(lit_115);
DEFLIT(lit_367);
DEFLIT(lit_369);
DEFLIT(lit_267);
DEFLIT(lit_65);
DEFLIT(lit_182);
DEFLIT(lit_250);
DEFLIT(lit_63);
DEFLIT(lit_130);
DEFLIT(lit_287);
DEFLIT(lit_219);
DEFLIT(lit_116);
DEFLIT(lit_19);
DEFLIT(lit_158);
DEFLIT(lit_153);
DEFLIT(lit_48);
DEFLIT(lit_340);
DEFLIT(lit_170);
DEFLIT(lit_62);
DEFLIT(lit_13);
DEFLIT(lit_84);
DEFLIT(lit_307);
DEFLIT(lit_258);
DEFLIT(lit_313);
DEFLIT(lit_330);
DEFLIT(lit_222);
DEFLIT(lit_1);
DEFLIT(lit_333);
DEFLIT(lit_349);
DEFLIT(lit_106);
DEFLIT(lit_253);
DEFLIT(lit_163);
DEFLIT(lit_305);
DEFLIT(lit_38);
DEFLIT(lit_97);
DEFLIT(lit_59);
DEFLIT(lit_30);
DEFLIT(lit_321);
DEFLIT(lit_166);
DEFLIT(lit_344);
DEFLIT(lit_21);
DEFLIT(lit_7);
DEFLIT(lit_159);
DEFLIT(lit_72);
DEFLIT(lit_134);
DEFLIT(lit_98);
DEFLIT(lit_177);
DEFLIT(lit_334);
DEFLIT(lit_71);
DEFLIT(lit_329);
DEFLIT(lit_29);
DEFLIT(lit_212);
DEFLIT(lit_294);
DEFLIT(lit_285);
DEFLIT(lit_40);
DEFLIT(lit_83);
DEFLIT(lit_91);
DEFLIT(lit_286);
DEFLIT(lit_306);
DEFLIT(lit_105);
DEFLIT(lit_26);
DEFLIT(lit_213);
DEFLIT(lit_50);
DEFLIT(lit_89);
DEFLIT(lit_169);
DEFLIT(lit_90);
DEFLIT(lit_328);
DEFLIT(lit_357);
DEFLIT(lit_193);
DEFLIT(lit_185);
DEFLIT(lit_122);
DEFLIT(lit_345);
DEFLIT(lit_248);
DEFLIT(lit_362);
DEFLIT(lit_178);
DEFLIT(lit_220);
DEFLIT(lit_104);
DEFLIT(lit_102);
DEFLIT(lit_259);
DEFLIT(lit_284);
DEFLIT(lit_12);
DEFLIT(lit_82);
DEFLIT(lit_58);
DEFLIT(lit_224);
DEFLIT(lit_202);
DEFLIT(lit_184);
DEFLIT(lit_365);
DEFLIT(lit_238);
DEFLIT(lit_326);
DEFLIT(lit_113);
DEFLIT(lit_265);
DEFLIT(lit_231);
DEFLIT(lit_10);
DEFLIT(lit_16);
DEFLIT(lit_282);
DEFLIT(lit_280);
DEFLIT(lit_151);
DEFLIT(lit_254);
DEFLIT(lit_274);
DEFLIT(lit_198);
DEFLIT(lit_371);
DEFLIT(lit_228);
DEFLIT(lit_70);
DEFLIT(lit_36);
DEFLIT(lit_44);
DEFLIT(lit_69);
DEFLIT(lit_277);
DEFLIT(lit_85);
DEFLIT(lit_155);
DEFLIT(lit_112);
DEFLIT(lit_42);
DEFLIT(lit_121);
DEFLIT(lit_123);
DEFLIT(lit_34);
DEFLIT(lit_120);
DEFLIT(lit_229);
DEFLIT(lit_366);
DEFLIT(lit_23);
DEFLIT(lit_332);
DEFLIT(lit_68);
DEFLIT(lit_302);
DEFLIT(lit_227);
DEFLIT(lit_304);
DEFLIT(lit_45);
DEFLIT(lit_255);
DEFLIT(lit_146);
DEFLIT(lit_309);
DEFLIT(lit_360);
DEFLIT(lit_22);
DEFLIT(lit_341);
DEFLIT(lit_322);
DEFLIT(lit_186);
DEFLIT(lit_135);
DEFLIT(lit_167);
DEFLIT(lit_373);
DEFLIT(lit_337);
DEFLIT(lit_320);
DEFLIT(lit_175);
DEFLIT(lit_94);
DEFLIT(lit_343);
DEFLIT(lit_348);
DEFLIT(lit_172);
DEFLIT(lit_235);
DEFLIT(lit_176);
DEFLIT(lit_67);
DEFLIT(lit_292);
DEFLIT(lit_125);
DEFLIT(lit_283);
DEFLIT(lit_211);
DEFLIT(lit_319);
DEFLIT(lit_103);
DEFLIT(lit_8);
DEFLIT(lit_80);
DEFLIT(lit_147);
DEFLIT(lit_93);
DEFLIT(lit_200);
DEFLIT(lit_53);
DEFLIT(lit_96);
DEFLIT(lit_363);
DEFLIT(lit_355);
DEFLIT(lit_368);
DEFLIT(lit_100);
DEFLIT(lit_183);
DEFLIT(lit_263);
DEFLIT(lit_157);
DEFLIT(lit_148);
DEFLIT(lit_14);
DEFLIT(lit_245);
DEFLIT(lit_4);
DEFLIT(lit_87);
DEFLIT(lit_149);
DEFLIT(lit_5);
DEFLIT(lit_264);
DEFLIT(lit_33);
DEFLIT(lit_152);
DEFLIT(lit_88);
DEFLIT(lit_237);
DEFLIT(lit_256);
DEFLIT(lit_56);
DEFLIT(lit_188);
DEFLIT(lit_133);
DEFLIT(lit_110);
DEFLIT(lit_161);
DEFLIT(lit_232);
DEFLIT(lit_239);
DEFLIT(lit_218);
DEFLIT(lit_216);
DEFLIT(lit_318);
DEFLIT(lit_140);
DEFLIT(lit_298);
DEFLIT(lit_278);
DEFLIT(lit_6);
DEFLIT(lit_271);
DEFLIT(lit_247);
DEFLIT(lit_301);
DEFLIT(lit_203);
DEFLIT(lit_199);
DEFLIT(lit_64);
DEFLIT(lit_144);
DEFLIT(lit_201);
DEFLIT(lit_209);
DEFLIT(lit_262);
DEFLIT(lit_43);
DEFLIT(lit_119);
DEFLIT(lit_24);
DEFLIT(lit_266);
DEFLIT(lit_312);
DEFLIT(lit_132);
DEFLIT(lit_111);
DEFLIT(lit_150);
DEFLIT(lit_196);
DEFLIT(lit_114);
DEFLIT(lit_168);
DEFLIT(lit_49);
DEFLIT(lit_165);
DEFLIT(lit_223);
DEFLIT(lit_81);
DEFLIT(lit_217);
DEFLIT(lit_300);
DEFLIT(lit_225);
DEFLIT(lit_240);
DEFLIT(lit_39);
DEFLIT(lit_131);
DEFLIT(lit_236);
DEFLIT(lit_145);
DEFLIT(lit_190);
DEFLIT(lit_311);
DEFLIT(lit_273);
DEFLIT(lit_303);
DEFLIT(lit_353);
DEFLIT(lit_317);
DEFLIT(lit_95);
DEFLIT(lit_181);
DEFLIT(lit_92);
DEFLIT(lit_173);
DEFLIT(lit_290);
DEFLIT(lit_20);
DEFLIT(lit_281);
DEFLIT(lit_154);
DEFLIT(lit_2);
DEFLIT(lit_205);
DEFLIT(lit_55);
DEFLIT(lit_293);
DEFLIT(lit_291);
DEFLIT(lit_141);
DEFLIT(lit_66);
DEFLIT(lit_261);
DEFLIT(lit_342);
DEFLIT(lit_206);
DEFLIT(lit_350);
DEFLIT(lit_361);
DEFLIT(lit_189);
DEFLIT(lit_324);
DEFLIT(lit_370);
DEFLIT(lit_336);
DEFLIT(lit_243);
DEFLIT(lit_327);
DEFLIT(lit_323);
DEFLIT(lit_117);
DEFLIT(lit_276);
DEFLIT(lit_234);
DEFLIT(lit_208);
DEFLIT(lit_241);
DEFLIT(lit_78);
DEFLIT(lit_325);
DEFLIT(lit_252);
DEFLIT(lit_295);
DEFLIT(lit_3);
DEFLIT(lit_296);
DEFLIT(lit_197);
DEFLIT(lit_192);
DEFLIT(lit_316);
DEFLIT(lit_54);
DEFLIT(lit_207);
DEFLIT(lit_25);
DEFLIT(lit_11);
DEFLIT(lit_191);
DEFLIT(lit_126);
DEFLIT(lit_162);
DEFLIT(lit_226);
DEFLIT(lit_214);
DEFLIT(lit_108);
DEFLIT(lit_124);
DEFLIT(lit_79);
DEFLIT(lit_138);
DEFLIT(lit_269);
DEFLIT(lit_75);
DEFLIT(lit_77);
DEFLIT(lit_299);
DEFLIT(lit_57);
DEFLIT(lit_335);
DEFLIT(lit_101);
DEFLIT(lit_74);
DEFLIT(lit_51);
DEFLIT(lit_156);
DEFLIT(lit_107);
DEFLIT(lit_270);
DEFLIT(lit_137);
DEFLIT(lit_351);
DEFLIT(lit_47);
DEFLIT(lit_31);
DEFLIT(lit_129);
DEFLIT(lit_260);
DEFLIT(lit_268);
DEFLIT(lit_289);
DEFLIT(lit_221);
DEFLIT(lit_210);
DEFLIT(lit_275);
DEFLIT(lit_37);
DEFLIT(lit_76);
DEFLIT(lit_244);
DEFLIT(lit_230);
DEFLIT(lit_354);
DEFLIT(lit_279);
DEFLIT(lit_60);
DEFLIT(lit_331);
DEFLIT(lit_128);
DEFLIT(lit_315);
DEFLIT(lit_215);
DEFLIT(lit_339);
DEFLIT(lit_41);
DEFLIT(lit_164);
DEFLIT(lit_297);
DEFLIT(lit_127);
DEFLIT(lit_308);
DEFLIT(lit_195);
DEFLIT(lit_372);
DEFLIT(lit_46);
DEFLIT(lit_35);
DEFLIT(lit_61);
DEFLIT(lit_246);
DEFLIT(lit_86);
DEFLIT(lit_179);
DEFLIT(lit_242);
DEFLIT(lit_171);
DEFLIT(lit_272);
DEFLIT(lit_160);
DEFLIT(lit_32);
DEFLIT(lit_118);
DEFLIT(lit_310);
DEFLIT(lit_288);
DEFLIT(lit_18);
DEFLIT(lit_27);
DEFLIT(lit_194);
DEFLIT(lit_233);
DEFLIT(lit_15);
DEFLIT(lit_358);
DEFLIT(lit_99);
DEFLIT(lit_356);
DEFLIT(lit_180);
DEFLIT(lit_338);
DEFLIT(lit_249);
DEFLIT(lit_174);
DEFLIT(lit_347);
DEFLIT(lit_142);
DEFLIT(lit_9);
DEFLIT(lit_257);
DEFLIT(lit_359);
DEFLIT(lit_17);
DEFLIT(lit_187);
DEFLIT(lit_73);
DEFLIT(lit_0);
DEFLIT(lit_346);
DEFLIT(lit_314);
DEFLIT(lit_139);
DEFLIT(lit_364);
DEFLIT(lit_251);
DEFLIT(lit_109);
DEFLIT(lit_136);
DEFLIT(lit_143);
DEFLIT(lit_352);
DEFLIT(lit_52);

/* FUNCTIONS: */

LOCFOR(fun_sexpr_self_evaluatingQ_0);
LOCFOR(fun_sexpr_variableQ_1);
LOCFOR(fun_sexpr_tagged_listQ_2);
LOCFOR(fun_sexpr_quotedQ_3);
LOCFOR(fun_sexpr_make_quote_4);
LOCFOR(fun_sexpr_text_of_quotation_5);
LOCFOR(fun_sexpr_assignmentQ_6);
LOCFOR(fun_sexpr_assignment_variable_7);
LOCFOR(fun_sexpr_assignment_value_8);
LOCFOR(fun_sexpr_variable_name_9);
LOCFOR(fun_sexpr_variable_name_10);
LOCFOR(fun_sexpr_variable_type_11);
LOCFOR(fun_sexpr_variable_type_12);
LOCFOR(fun_sexpr_definitionQ_13);
LOCFOR(fun_sexpr_definition_variable_14);
LOCFOR(fun_sexpr_definition_value_15);
LOCFOR(fun_sexpr_syntax_definitionQ_16);
LOCFOR(fun_sexpr_syntax_definition_variable_17);
LOCFOR(fun_sexpr_syntax_definition_value_18);
LOCFOR(fun_sexpr_function_definitionQ_19);
LOCFOR(fun_sexpr_method_definitionQ_20);
LOCFOR(fun_sexpr_generic_definitionQ_21);
LOCFOR(fun_sexpr_function_definition_variable_22);
LOCFOR(fun_sexpr_function_definition_adjectives_23);
LOCFOR(fun_sexpr_forward_primitiveQ_24);
LOCFOR(fun_sexpr_signature_parameters_25);
LOCFOR(fun_sexpr_value_type_26);
LOCFOR(fun_sexpr_value_type_27);
LOCFOR(fun_sexpr_signature_value_28);
FUNFOR(YevalSsyntaxYas_signature);
LOCFOR(fun_sexpr_function_signature_30);
LOCFOR(fun_sexpr_function_parameters_31);
LOCFOR(fun_sexpr_function_value_32);
LOCFOR(fun_sexpr_function_body_33);
LOCFOR(fun_sexpr_function_definition_value_34);
LOCFOR(fun_sexpr_methodQ_35);
LOCFOR(fun_sexpr_method_signature_36);
LOCFOR(fun_sexpr_method_parameters_37);
LOCFOR(fun_sexpr_method_value_38);
LOCFOR(fun_sexpr_method_body_39);
LOCFOR(fun_sexpr_make_anonymous_method_40);
LOCFOR(fun_sexpr_make_method_41);
LOCFOR(fun_sexpr_ifQ_42);
LOCFOR(fun_sexpr_if_test_43);
LOCFOR(fun_sexpr_if_then_44);
LOCFOR(fun_sexpr_if_else_45);
LOCFOR(fun_sexpr_make_if_46);
LOCFOR(fun_sexpr_blockQ_47);
LOCFOR(fun_sexpr_block_name_48);
LOCFOR(fun_sexpr_block_body_49);
LOCFOR(fun_sexpr_unwind_protectQ_50);
LOCFOR(fun_sexpr_unwind_protect_protected_form_51);
LOCFOR(fun_sexpr_unwind_protect_cleanup_forms_52);
LOCFOR(fun_sexpr_monitorQ_53);
LOCFOR(fun_x_1421_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_expand_56);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1423_58);
LOCFOR(fun_59);
LOCFOR(fun_sexpr_monitor_type_60);
LOCFOR(fun_x_1425_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1427_63);
LOCFOR(fun_64);
LOCFOR(fun_sexpr_monitor_info_65);
LOCFOR(fun_sexpr_monitor_test_66);
LOCFOR(fun_sexpr_monitor_body_67);
LOCFOR(fun_sexpr_beginQ_68);
LOCFOR(fun_sexpr_begin_actions_69);
LOCFOR(fun_sexpr_last_expQ_70);
LOCFOR(fun_sexpr_first_exp_71);
LOCFOR(fun_sexpr_rest_exps_72);
LOCFOR(fun_sexpr_sequence_Gbegin_73);
LOCFOR(fun_sexpr_make_begin_74);
LOCFOR(fun_sexpr_applicationQ_75);
LOCFOR(fun_sexpr_operator_76);
LOCFOR(fun_sexpr_operands_77);
LOCFOR(fun_sexpr_no_operandsQ_78);
LOCFOR(fun_sexpr_first_operand_79);
LOCFOR(fun_sexpr_rest_operands_80);
LOCFOR(fun_sexpr_make_application_81);
LOCFOR(fun_sexpr_new_unique_name_counterX_82);
LOCFOR(fun_sexpr_unique_name_83);
LOCFOR(fun_sexpr_defQ_84);
LOCFOR(fun_sexpr_def_variable_85);
LOCFOR(fun_sexpr_def_value_86);
LOCFOR(fun_sexpr_letQ_87);
LOCFOR(fun_88);
LOCFOR(fun_sexpr_let_bound_variables_89);
LOCFOR(fun_90);
LOCFOR(fun_sexpr_let_values_91);
LOCFOR(fun_sexpr_let_body_92);
LOCFOR(fun_inner_93);
LOCFOR(fun_loop_94);
LOCFOR(fun_sexpr_let_namesAvalues_95);
LOCFOR(fun_col_96);
LOCFOR(fun_sexpr_let_Gcombination_97);
LOCFOR(fun_sexpr_locQ_98);
LOCFOR(fun_sexpr_loc_bound_names_99);
LOCFOR(fun_100);
LOCFOR(fun_sexpr_loc_bound_signatures_101);
LOCFOR(fun_sexpr_loc_bound_bodies_102);
LOCFOR(fun_sexpr_loc_raw_body_103);
LOCFOR(fun_sexpr_loc_body_104);
LOCFOR(fun_sexpr_iterateQ_105);
LOCFOR(fun_sexpr_iterate_name_106);
LOCFOR(fun_107);
LOCFOR(fun_sexpr_iterate_signature_108);
LOCFOR(fun_109);
LOCFOR(fun_sexpr_iterate_inits_110);
LOCFOR(fun_sexpr_iterate_body_111);
LOCFOR(fun_sexpr_iterate_Gloc_112);
LOCFOR(fun_sexpr_isaQ_113);
LOCFOR(fun_sexpr_isa_parent_114);
LOCFOR(fun_sexpr_isa_prop_inits_115);
LOCFOR(fun_sexpr_isa_init_props_116);
LOCFOR(fun_sexpr_isa_init_values_117);
LOCFOR(fun_sexpr_define_classQ_118);
LOCFOR(fun_sexpr_define_class_parents_119);
LOCFOR(fun_sexpr_propQ_120);
LOCFOR(fun_sexpr_prop_name_121);
LOCFOR(fun_sexpr_prop_owner_122);
LOCFOR(fun_sexpr_prop_init_var_123);
LOCFOR(fun_sexpr_prop_type_124);
LOCFOR(fun_sexpr_prop_initQ_125);
LOCFOR(fun_sexpr_prop_init_126);
LOCFOR(fun_sexpr_fab_getter_127);
LOCFOR(fun_sexpr_fab_setter_128);
LOCFOR(fun_sexpr_fab_setter_name_129);
LOCFOR(fun_sexpr_macroQ_130);
LOCFOR(fun_sexpr_macro_expandQ_131);
LOCFOR(fun_sexpr_make_syntax_if_132);
FUNFOR(YevalSsyntaxYsexpr_expand_backquote);
LOCFOR(fun_sexpr_build_backquote_expander_134);
LOCFOR(fun_sexpr_unquoteQ_135);
LOCFOR(fun_sexpr_unquote_splicingQ_136);
LOCFOR(fun_sexpr_backquoteQ_137);
LOCFOR(fun_sexpr_atomQ_138);
LOCFOR(fun_nreconc_139);
LOCFOR(fun_loop_140);
LOCFOR(fun_141);
LOCFOR(fun_bq_process_142);
LOCFOR(fun_bracket_143);
LOCFOR(fun_map_tree_144);
LOCFOR(fun_bq_remove_tokens_145);
LOCFOR(fun_sexpr_syntax_ifQ_146);
LOCFOR(fun_sexpr_syntax_if_value_147);
LOCFOR(fun_sexpr_syntax_if_pattern_148);
LOCFOR(fun_sexpr_syntax_if_then_149);
LOCFOR(fun_sexpr_syntax_if_else_150);
LOCFOR(fun_sexpr_pattern_variableQ_151);
LOCFOR(fun_sexpr_pattern_variable_name_152);
LOCFOR(fun_col_153);
LOCFOR(fun_sexpr_bind_pattern_variables_154);
LOCFOR(fun_sexpr_make_macro_function_155);
extern P YevalSsyntaxY___main_0___ ();
extern P YevalSsyntaxY___main_1___ ();
extern P YevalSsyntaxY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_sexpr_self_evaluatingQ_0) {
  P exp_;
  P tmpF2516;
  P tmpF2515;
  P tmpF2514;
  P tmpF2513;
  P tmpF2512;
  P tmpF2511;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF2511 = T1;
  if (tmpF2511 != YPfalse) {
    T2 = tmpF2511;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF2512 = T4;
    if (tmpF2512 != YPfalse) {
      T5 = tmpF2512;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF2513 = T7;
      if (tmpF2513 != YPfalse) {
        T8 = tmpF2513;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF2514 = T10;
        if (tmpF2514 != YPfalse) {
          T11 = tmpF2514;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF2515 = T13;
          if (tmpF2515 != YPfalse) {
            T14 = tmpF2515;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF2516 = T16;
            if (tmpF2516 != YPfalse) {
              T17 = tmpF2516;
            } else {
              T18 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLtupG));
              T17 = T18;
            }
            T15 = T17;
            T14 = T15;
          }
          T12 = T14;
          T11 = T12;
        }
        T9 = T11;
        T8 = T9;
      }
      T6 = T8;
      T5 = T6;
    }
    T3 = T5;
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_variableQ_1) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLsymG));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_tagged_listQ_2) {
  P exp_,tag_;
  P tmpF2517;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2517 = T1;
  if (tmpF2517 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),exp_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,tag_);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_quotedQ_3) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_quote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_quote_4) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_quote_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_text_of_quotation_5) {
  P quot_;
  P T0;
  P a1;
LINK_STACK();
  ARG(quot_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),quot_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignmentQ_6) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_set_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_variable_7) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_assignment_value_8) {
  P assn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(assn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),assn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_9) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_name_10) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(exp_);
}

FUNCODEDEF(fun_sexpr_variable_type_11) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_variable_type_12) {
  P exp_;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
UNLINK_STACK();
  QRET(LITREF(lit_26));
}

FUNCODEDEF(fun_sexpr_definitionQ_13) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_definition_variable_14) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_definition_value_15) {
  P defn_;
  P T0;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definitionQ_16) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_syntax_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_variable_17) {
  P defn_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Yhead),T2);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_definition_value_18) {
  P defn_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  T4 = CALL1(1,VARREF(Ytail),defn_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_macro_tag),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definitionQ_19) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_function_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_definitionQ_20) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_generic_definitionQ_21) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_generic_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_variable_22) {
  P defn_;
  P varF2518;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2518 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2518,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),varF2518);
    T2 = T4;
  } else {
    T2 = varF2518;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_adjectives_23) {
  P defn_;
  P varF2519;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2519 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2519,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),varF2519);
    T2 = T4;
  } else {
    T2 = Ynil;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_forward_primitiveQ_24) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),defn_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)2));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_signature_parameters_25) {
  P signature_;
  P values_spec_indexF2520;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2520 = T1;
  if (values_spec_indexF2520 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF2520);
    T2 = T3;
  } else {
    T2 = signature_;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_26) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_value_type_27) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(x_);
}

FUNCODEDEF(fun_sexpr_signature_value_28) {
  P signature_;
  P valueF2523;
  P tmpF2522;
  P values_spec_indexF2521;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2521 = T1;
  tmpF2522 = values_spec_indexF2521;
  if (tmpF2522 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF2521,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF2523 = T5;
    T8 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF2523,LITREF(lit_66));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
      T12 = CALL1(1,VARREF(Ytail),valueF2523);
      T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T12);
      T9 = CALL3(1,VARREF(YgooSmacrosYcat),T10,T11,LITREF(lit_68));
      T7 = T9;
    } else {
      T7 = valueF2523;
    }
    T4 = T7;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYas_signature) {
  P sig_;
  P a1;
LINK_STACK();
  ARG(sig_, 0);
loop:
UNLINK_STACK();
  RET(sig_);
}

FUNCODEDEF(fun_sexpr_function_signature_30) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_parameters_31) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_function_value_32) {
  P defn_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_signature),defn_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_body_33) {
  P defn_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),defn_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_value_34) {
  P defn_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),defn_);
  T5 = CALL1(1,VARREF(Ytail),defn_);
  T4 = CALL1(1,VARREF(Ytail),T5);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYpair),T2,T3);
  T6 = CALL1(1,VARREF(YgooScolsSlstYline_of),defn_);
  T0 = CALL3(1,VARREF(YgooScolsSlstYline_pair),VARREF(YevalSsyntaxYDsexpr_method_tag),T1,T6);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_methodQ_35) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_method_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_signature_36) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_parameters_37) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_method_value_38) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_signature),method_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_method_body_39) {
  P method_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(method_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),method_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_anonymous_method_40) {
  P parameters_,body_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(parameters_, 0);
  ARG(body_, 1);
loop:
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag));
  T5 = CALL1(1,VARREF(Ylst),parameters_);
  T3 = CALL3(1,VARREF(YgooSmacrosYcat),T4,T5,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_method_41) {
  P name_,parameters_,body_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(parameters_, 1);
  ARG(body_, 2);
loop:
  T2 = CALL2(1,VARREF(YisaQ),parameters_,VARREF(YgooScolsSlstYLline_listG));
  if (T2 != YPfalse) {
    T1 = parameters_;
  } else {
    T1 = body_;
  }
  T4 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_define_method_tag),name_,parameters_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,body_);
  T0 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_ifQ_42) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_if_test_43) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_then_44) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_if_else_45) {
  P exp_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T4 = CALL1(1,VARREF(Ytail),exp_);
  T3 = CALL1(1,VARREF(Ytail),T4);
  T2 = CALL1(1,VARREF(Ytail),T3);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T2);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T8 = CALL1(1,VARREF(Ytail),exp_);
    T7 = CALL1(1,VARREF(Ytail),T8);
    T6 = CALL1(1,VARREF(Ytail),T7);
    T5 = CALL1(1,VARREF(Yhead),T6);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_if_46) {
  P test_,then_,else_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(test_, 0);
  ARG(then_, 1);
  ARG(else_, 2);
loop:
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_if_tag),test_,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_blockQ_47) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_bind_exit_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_block_name_48) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_block_body_49) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protectQ_50) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_unwind_protect_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_protected_form_51) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_unwind_protect_cleanup_forms_52) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitorQ_53) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_monitor_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1421_54) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_129),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P optionsF2535;
  P x_1420F2534;
  P x_1420F2533;
  P x_1420F2532;
  P x_1420F2531;
  P x_1420F2530;
  P x_1420F2529;
  P bodyF2528;
  P handlerF2527;
  P optionsF2526;
  P x_1420F2525;
  P x_1421F2524;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1421_54,2);
  x_1421F2524 = T1;
  FUNINIT(x_1421F2524, 2,FREEREF(0),return_);
  x_1420F2525 = FREEREF(0);
  optionsF2526 = YPfalse;
  optionsF2526 = BOXFAB(optionsF2526);
  handlerF2527 = YPfalse;
  handlerF2527 = BOXFAB(handlerF2527);
  bodyF2528 = YPfalse;
  bodyF2528 = BOXFAB(bodyF2528);
  T9 = CALL2(1,VARREF(YisaQ),x_1420F2525,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1420F2525,LITREF(lit_121),x_1421F2524);
    x_1420F2529 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1420F2529,x_1421F2524);
    BOXVAL(optionsF2526) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1420F2529);
    x_1420F2530 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1420F2530,x_1421F2524);
    BOXVAL(handlerF2527) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1420F2530);
    x_1420F2531 = T17;
    BOXVAL(bodyF2528) = x_1420F2531;
    x_1420F2532 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1420F2532,x_1421F2524);
    x_1420F2533 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1420F2533,x_1421F2524);
    T22 = CALL1(1,VARREF(Ytail),x_1420F2532);
    x_1420F2534 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1420F2534,x_1421F2524);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1421F2524,LITREF(lit_130),x_1420F2525);
  }
  T28 = BOXVAL(optionsF2526);
  T27 = CALL2(1,VARREF(YisaQ),T28,VARREF(YLsymG));
  if (T27 != YPfalse) {
    T32 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
    T34 = BOXVAL(optionsF2526);
    T33 = CALL1(1,VARREF(Ylst),T34);
    T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_68));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_68));
    T26 = T29;
  } else {
    T35 = BOXVAL(optionsF2526);
    T26 = T35;
  }
  optionsF2535 = T26;
  T37 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF2535);
  T38 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF2535);
  T39 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF2535);
  T40 = BOXVAL(handlerF2527);
  T42 = BOXVAL(bodyF2528);
  T41 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_body),T42);
  T36 = CALL5(1,VARREF(Ytup),T37,T38,T39,T40,T41);
  T25 = T36;
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_expand_56) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_55,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSsyntaxYfind_option) {
  P options_,option_,default_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3;
LINK_STACK();
  ARG(options_, 0);
  ARG(option_, 1);
  ARG(default_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),options_);
  if (T1 != YPfalse) {
    T0 = default_;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
    T4 = CALL1(1,VARREF(Yhead),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),option_,T4);
    if (T3 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosY1st),options_);
      T6 = CALL1(1,VARREF(Ytail),T7);
      T2 = T6;
    } else {
      if (YPtrue != YPfalse) {
        T10 = CALL1(1,VARREF(Ytail),options_);
        T9 = CALL3(1,VARREF(YevalSsyntaxYfind_option),T10,option_,default_);
        T8 = T9;
      } else {
        T8 = YPfalse;
      }
      T2 = T8;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1423_58) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_140),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1422F2541;
  P x_1422F2540;
  P x_1422F2539;
  P typeF2538;
  P x_1422F2537;
  P x_1423F2536;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1423_58,2);
  x_1423F2536 = T1;
  FUNINIT(x_1423F2536, 2,FREEREF(0),return_);
  x_1422F2537 = FREEREF(0);
  typeF2538 = YPfalse;
  typeF2538 = BOXFAB(typeF2538);
  T5 = CALL2(1,VARREF(YisaQ),x_1422F2537,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1422F2537,x_1423F2536);
    BOXVAL(typeF2538) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1422F2537);
    x_1422F2539 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1422F2539,x_1423F2536);
    x_1422F2540 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1422F2540,x_1423F2536);
    T12 = CALL1(1,VARREF(Ytail),x_1422F2539);
    x_1422F2541 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1422F2541,x_1423F2536);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1423F2536,LITREF(lit_130),x_1422F2537);
  }
  T15 = BOXVAL(typeF2538);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_60) {
  P options_;
  P type_listF2542;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_131),LITREF(lit_136));
  type_listF2542 = T1;
  T3 = FUNFAB(fun_59,1,type_listF2542);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1425_61) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_149),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_62) {
  P return_;
  P x_1424F2548;
  P x_1424F2547;
  P x_1424F2546;
  P info_exprF2545;
  P x_1424F2544;
  P x_1425F2543;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1425_61,2);
  x_1425F2543 = T1;
  FUNINIT(x_1425F2543, 2,FREEREF(0),return_);
  x_1424F2544 = FREEREF(0);
  info_exprF2545 = YPfalse;
  info_exprF2545 = BOXFAB(info_exprF2545);
  T5 = CALL2(1,VARREF(YisaQ),x_1424F2544,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1424F2544,x_1425F2543);
    BOXVAL(info_exprF2545) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1424F2544);
    x_1424F2546 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1424F2546,x_1425F2543);
    x_1424F2547 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2547,x_1425F2543);
    T12 = CALL1(1,VARREF(Ytail),x_1424F2546);
    x_1424F2548 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2548,x_1425F2543);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1425F2543,LITREF(lit_130),x_1424F2544);
  }
  T15 = BOXVAL(info_exprF2545);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1427_63) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_153),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P return_;
  P x_1426F2556;
  P x_1426F2555;
  P x_1426F2554;
  P x_1426F2553;
  P argumentsF2552;
  P messageF2551;
  P x_1426F2550;
  P x_1427F2549;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1427_63,2);
  x_1427F2549 = T1;
  FUNINIT(x_1427F2549, 2,FREEREF(0),return_);
  x_1426F2550 = FREEREF(0);
  messageF2551 = YPfalse;
  messageF2551 = BOXFAB(messageF2551);
  argumentsF2552 = YPfalse;
  argumentsF2552 = BOXFAB(argumentsF2552);
  T7 = CALL2(1,VARREF(YisaQ),x_1426F2550,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1426F2550,x_1427F2549);
    BOXVAL(messageF2551) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1426F2550);
    x_1426F2553 = T10;
    BOXVAL(argumentsF2552) = x_1426F2553;
    x_1426F2554 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1426F2554,x_1427F2549);
    x_1426F2555 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2555,x_1427F2549);
    T15 = CALL1(1,VARREF(Ytail),x_1426F2554);
    x_1426F2556 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2556,x_1427F2549);
    T12 = T16;
    T11 = T12;
    T8 = T11;
  } else {
    T17 = CALL2(1,x_1427F2549,LITREF(lit_130),x_1426F2550);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T23 = BOXVAL(messageF2551);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T28 = BOXVAL(argumentsF2552);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_68));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T18 = CALLN(1,VARREF(YgooSmacrosYcat),7,T19,T20,T21,T22,T24,T25,LITREF(lit_68));
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_info_65) {
  P options_;
  P tmpF2559;
  P descriptionF2558;
  P infoF2557;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_143),YPfalse);
  infoF2557 = T1;
  T3 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_144),YPfalse);
  descriptionF2558 = T3;
  tmpF2559 = infoF2557;
  if (tmpF2559 != YPfalse) {
    T6 = descriptionF2558;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_145),options_);
    T4 = T7;
  } else {
    if (infoF2557 != YPfalse) {
      T10 = FUNFAB(fun_62,1,infoF2557);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF2558 != YPfalse) {
        T13 = FUNFAB(fun_64,1,descriptionF2558);
        T12 = with_exit(T13);
        T11 = T12;
      } else {
        if (YPtrue != YPfalse) {
          T14 = LITREF(lit_159);
        } else {
          T14 = YPfalse;
        }
        T11 = T14;
      }
      T8 = T11;
    }
    T4 = T8;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_test_66) {
  P options_;
  P test_bodyF2560;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_162),LITREF(lit_163));
  test_bodyF2560 = T1;
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF2560);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_body_67) {
  P body_;
  P T0;
  P a1;
LINK_STACK();
  ARG(body_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,body_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_beginQ_68) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_begin_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_begin_actions_69) {
  P begin_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(begin_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),begin_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_last_expQ_70) {
  P seq_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),seq_);
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_exp_71) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),seq_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_exps_72) {
  P seq_;
  P T0;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),seq_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_sequence_Gbegin_73) {
  P seq_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(seq_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),seq_);
  if (T1 != YPfalse) {
    T0 = seq_;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_last_expQ),seq_);
    if (T3 != YPfalse) {
      T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_first_exp),seq_);
      T2 = T4;
    } else {
      T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_make_begin),seq_);
      T2 = T5;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_make_begin_74) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYDsexpr_begin_tag),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_applicationQ_75) {
  P exp_;
  P tmpF2561;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2561 = T1;
  if (tmpF2561 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),exp_);
    T3 = CALL1(1,VARREF(Ynot),T4);
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_operator_76) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),app_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_operands_77) {
  P app_;
  P T0;
  P a1;
LINK_STACK();
  ARG(app_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),app_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_no_operandsQ_78) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosYemptyQ),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_first_operand_79) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Yhead),args_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_rest_operands_80) {
  P args_;
  P T0;
  P a1;
LINK_STACK();
  ARG(args_, 0);
loop:
  T0 = CALL1(1,VARREF(Ytail),args_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_application_81) {
  P f_,operands_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(operands_, 1);
loop:
  T1 = CALL1(1,VARREF(Ylst),f_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),T1,operands_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_new_unique_name_counterX_82) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(YevalSsyntaxYTunique_name_counterT),YPint((P)1));
  VARSET(YevalSsyntaxYTunique_name_counterT,T0);
UNLINK_STACK();
  RET(VARREF(YevalSsyntaxYTunique_name_counterT));
}

FUNCODEDEF(fun_sexpr_unique_name_83) {
  P prefix_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(prefix_, 0);
loop:
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),prefix_);
  T4 = CALL0(1,VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX));
  T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,T3);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_defQ_84) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_def_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_def_variable_85) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_def_value_86) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_letQ_87) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_let_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_88) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_bound_variables_89) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_88;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_90) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_values_91) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = fun_90;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),let_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_let_body_92) {
  P let_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),let_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_93) {
  P rtnames_,rtvalues_,index_,tnames_;
  P tmpF2563;
  P nameF2562;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rtnames_, 0);
  ARG(rtvalues_, 1);
  ARG(index_, 2);
  ARG(tnames_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tnames_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ytup),rtnames_,rtvalues_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(Yhead),tnames_);
    nameF2562 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF2562,VARREF(YLlstG));
    tmpF2563 = T7;
    if (tmpF2563 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF2562);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_224));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF2562);
      T14 = CALL2(1,VARREF(Ylst),T15,LITREF(lit_225));
      T13 = CALL2(1,VARREF(YgooSmacrosYpair),T14,rtnames_);
      T18 = CALL2(1,VARREF(Ylst),LITREF(lit_227),FREEREF(0));
      T17 = CALL4(1,VARREF(Ylst),LITREF(lit_226),FREEREF(0),index_,T18);
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),T17,rtvalues_);
      T19 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T20 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T13;
      a2 = T16;
      a3 = T19;
      a4 = T20;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T12;
    } else {
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2562,rtnames_);
      T24 = CALL3(1,VARREF(Ylst),LITREF(lit_228),FREEREF(0),index_);
      T23 = CALL2(1,VARREF(YgooSmacrosYpair),T24,rtvalues_);
      T25 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
      T26 = CALL1(1,VARREF(Ytail),tnames_);
      a1 = T22;
      a2 = T23;
      a3 = T25;
      a4 = T26;
      rtnames_ = a1;
      rtvalues_ = a2;
      index_ = a3;
      tnames_ = a4;
      goto loop;
      T5 = T21;
    }
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_94) {
  P rnames_,rvalues_,names_,vals_;
  P rtvaluesF2571;
  P rtnamesF2570;
  P tup27F2569;
  P innerF2568;
  P tupnameF2567;
  P tmpF2566;
  P valueF2565;
  P nameF2564;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(rnames_, 0);
  ARG(rvalues_, 1);
  ARG(names_, 2);
  ARG(vals_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YgooSmacrosYrevX),rnames_);
    T4 = CALL1(1,VARREF(YgooSmacrosYrevX),rvalues_);
    T2 = CALL2(1,VARREF(Ytup),T3,T4);
    T0 = T2;
  } else {
    T6 = CALL1(1,VARREF(Yhead),names_);
    nameF2564 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF2565 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF2564,VARREF(YLlstG));
    tmpF2566 = T11;
    if (tmpF2566 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF2564);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_66));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_221));
      tupnameF2567 = T16;
      T19 = FUNSHELL(1,fun_inner_93,2);
      innerF2568 = T19;
      FUNINIT(innerF2568, 2,tupnameF2567,innerF2568);
      T21 = CALL1(1,VARREF(Ylst),tupnameF2567);
      T22 = CALL1(1,VARREF(Ylst),valueF2565);
      T23 = CALL1(1,VARREF(Ytail),nameF2564);
      T20 = CALL4(0,innerF2568,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup27F2569 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2569,YPint((P)0));
      rtnamesF2570 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2569,YPint((P)1));
      rtvaluesF2571 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF2570,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF2571,rvalues_);
      T31 = CALL1(1,VARREF(Ytail),names_);
      T32 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T29;
      a2 = T30;
      a3 = T31;
      a4 = T32;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T26 = T28;
      T24 = T26;
      T17 = T24;
      T15 = T17;
      T9 = T15;
    } else {
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2564,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF2565,rvalues_);
      T36 = CALL1(1,VARREF(Ytail),names_);
      T37 = CALL1(1,VARREF(Ytail),vals_);
      a1 = T34;
      a2 = T35;
      a3 = T36;
      a4 = T37;
      rnames_ = a1;
      rvalues_ = a2;
      names_ = a3;
      vals_ = a4;
      goto loop;
      T9 = T33;
    }
    T7 = T9;
    T5 = T7;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_namesAvalues_95) {
  P names_,vals_;
  P loopF2572;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_94,1);
  loopF2572 = T1;
  FUNINIT(loopF2572, 1,loopF2572);
  T2 = CALL4(0,loopF2572,Ynil,Ynil,names_,vals_);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_col_96) {
  P names_,values_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(values_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),names_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T5 = CALL1(1,VARREF(Yhead),names_);
    T4 = CALL1(1,VARREF(Ylst),T5);
    T7 = CALL1(1,VARREF(Ytail),names_);
    T8 = CALL1(1,VARREF(Ytail),values_);
    T6 = CALL2(0,FREEREF(1),T7,T8);
    T3 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_method_tag),T4,T6);
    T10 = CALL1(1,VARREF(Yhead),values_);
    T9 = CALL1(1,VARREF(Ylst),T10);
    T2 = CALL2(1,VARREF(YgooSmacrosYpair),T3,T9);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_let_Gcombination_97) {
  P let_exp_;
  P colF2579;
  P valuesF2578;
  P namesF2577;
  P tup28F2576;
  P bodyF2575;
  P ovaluesF2574;
  P onamesF2573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF2573 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF2574 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF2575 = T5;
  T7 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF2573,ovaluesF2574);
  tup28F2576 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2576,YPint((P)0));
  namesF2577 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2576,YPint((P)1));
  valuesF2578 = T11;
  T13 = FUNSHELL(1,fun_col_96,2);
  colF2579 = T13;
  FUNINIT(colF2579, 2,bodyF2575,colF2579);
  T14 = CALL2(0,colF2579,namesF2577,valuesF2578);
  T12 = T14;
  T10 = T12;
  T8 = T10;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_locQ_98) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_locals_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_names_99) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_100) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),x_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYas_signature),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_signatures_101) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = fun_100;
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_bound_bodies_102) {
  P loc_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSruntimeYcompose),VARREF(Ytail),VARREF(Ytail));
  T2 = CALL1(1,VARREF(YgooSmacrosY2nd),loc_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_raw_body_103) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),loc_exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_loc_body_104) {
  P loc_exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(loc_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_loc_raw_body),loc_exp_);
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterateQ_105) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_iterate_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_name_106) {
  P rep_exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),rep_exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_107) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_signature_108) {
  P rep_exp_;
  P sigF2580;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF2580 = T1;
  T4 = fun_107;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF2580);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2580);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2580);
  T9 = CALL1(1,VARREF(Ylst),T10);
  T2 = CALL3(1,VARREF(YgooSmacrosYcat),T3,T6,T9);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_109) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYas_signature),x_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_inits_110) {
  P rep_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = fun_109;
  T2 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_body_111) {
  P rep_exp_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T2 = CALL1(1,VARREF(Ytail),rep_exp_);
  T1 = CALL1(1,VARREF(Ytail),T2);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_iterate_Gloc_112) {
  P rep_exp_;
  P initsF2584;
  P bodyF2583;
  P sigF2582;
  P nameF2581;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF2581 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF2582 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF2583 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF2584 = T7;
  T12 = CALL2(1,VARREF(Ylst),nameF2581,sigF2582);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,bodyF2583);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),nameF2581);
  T13 = CALL2(1,VARREF(YgooSmacrosYcat),T14,initsF2584);
  T9 = CALL3(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_locals_tag),T10,T13);
  T8 = CALL2(1,VARREF(YgooScolsSlstYline_list_of),rep_exp_,T9);
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isaQ_113) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_isa_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_parent_114) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_isa_prop_inits_115) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),exp_);
  T0 = CALL1(1,VARREF(Ytail),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_props_116) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_isa_init_values_117) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_classQ_118) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_define_class_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_define_class_parents_119) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_propQ_120) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_prop_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_name_121) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_owner_122) {
  P exp_;
  P paramF2585;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2585 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2585,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY2nd),paramF2585);
    T3 = T5;
  } else {
    T3 = paramF2585;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_123) {
  P exp_;
  P paramF2586;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2586 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2586,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),paramF2586);
    T3 = T5;
  } else {
    T3 = LITREF(lit_287);
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_type_124) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_value),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_initQ_125) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),exp_);
  T0 = CALL2(1,VARREF(YgooSmathYE),T1,YPint((P)4));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_126) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYelt),exp_,YPint((P)3));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_fab_getter_127) {
  P name_,type_,line_;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(line_, 2);
loop:
  T2 = CALL2(1,VARREF(Ylst),LITREF(lit_287),type_);
  T1 = CALL2(1,VARREF(YgooScolsSlstYline_list),line_,T2);
  T4 = CALL3(1,VARREF(Ylst),LITREF(lit_296),LITREF(lit_287),name_);
  T3 = CALL1(1,VARREF(Ylst),T4);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),name_,T1,T3);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_128) {
  P name_,type_,prop_type_,line_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(name_, 0);
  ARG(type_, 1);
  ARG(prop_type_, 2);
  ARG(line_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_fab_setter_name),name_);
  T3 = CALL2(1,VARREF(Ylst),LITREF(lit_299),prop_type_);
  T4 = CALL2(1,VARREF(Ylst),LITREF(lit_287),type_);
  T2 = CALL3(1,VARREF(YgooScolsSlstYline_list),line_,T3,T4);
  T6 = CALL4(1,VARREF(Ylst),LITREF(lit_300),LITREF(lit_299),LITREF(lit_287),name_);
  T5 = CALL1(1,VARREF(Ylst),T6);
  T0 = CALL3(1,VARREF(YevalSsyntaxYsexpr_make_method),T1,T2,T5);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_fab_setter_name_129) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmacrosYcat_sym),name_,LITREF(lit_303));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macroQ_130) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_macro_expandQ_131) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_macro_expand_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_syntax_if_132) {
  P pat_,exp_,then_,else_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(pat_, 0);
  ARG(exp_, 1);
  ARG(then_, 2);
  ARG(else_, 3);
loop:
  T1 = CALL2(1,VARREF(Ylst),pat_,exp_);
  T0 = CALL4(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_syntax_if_tag),T1,then_,else_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSsyntaxYsexpr_expand_backquote) {
  P x_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),x_);
  T0 = CALL2(1,VARREF(YevalSsyntaxYeval),T1,LITREF(lit_321));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_build_backquote_expander_134) {
  P x_;
  P resF2588;
  P raw_resultF2587;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF2587 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF2587);
  resF2588 = T3;
  T2 = resF2588;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquoteQ_135) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_326));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_unquote_splicingQ_136) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,LITREF(lit_329));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_backquoteQ_137) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),x_,VARREF(YevalSsyntaxYDsexpr_quasiquote_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_atomQ_138) {
  P x_;
  P tmpF2589;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF2589 = T1;
  if (tmpF2589 != YPfalse) {
    T3 = tmpF2589;
  } else {
    T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_nreconc_139) {
  P x_,y_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYrevX),x_);
  T0 = CALL2(1,VARREF(YgooScolsSseqxYcatX),T1,y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_140) {
  P p_,q_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(p_, 0);
  ARG(q_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),p_);
  if (T1 != YPfalse) {
    T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),p_);
    T5 = CALL1(1,VARREF(Ylst),T6);
    T4 = CALL2(1,VARREF(YevalSsyntaxYnreconc),q_,T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T4);
    T2 = CALL1(1,FREEREF(0),T3);
    T0 = T2;
  } else {
    T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),p_);
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),p_);
      T10 = CALL1(1,VARREF(Ytail),T11);
      T9 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T10);
      T8 = CALL1(1,VARREF(Ynot),T9);
      if (T8 != YPfalse) {
        T12 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_341),p_);
      } else {
      }
      T18 = CALL1(1,VARREF(Ytail),p_);
      T17 = CALL1(1,VARREF(Yhead),T18);
      T16 = CALL1(1,VARREF(Ylst),T17);
      T15 = CALL2(1,VARREF(YevalSsyntaxYnreconc),q_,T16);
      T14 = CALL2(1,VARREF(YgooSmacrosYpair),VARREF(YevalSsyntaxYTbq_appendT),T15);
      T13 = CALL1(1,FREEREF(0),T14);
    } else {
    }
    T20 = CALL1(1,VARREF(Ytail),p_);
    T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,VARREF(YevalSsyntaxYTcomma_atsignT));
    if (T19 != YPfalse) {
      T21 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_342),p_);
    } else {
    }
    T23 = CALL1(1,VARREF(Ytail),p_);
    T26 = CALL1(1,VARREF(Yhead),p_);
    T25 = CALL1(1,VARREF(YevalSsyntaxYbracket),T26);
    T24 = CALL2(1,VARREF(YgooSmacrosYpair),T25,q_);
    a1 = T23;
    a2 = T24;
    p_ = a1;
    q_ = a2;
    goto loop;
    T0 = T22;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P return_;
  P loopF2590;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_140,2);
  loopF2590 = T1;
  FUNINIT(loopF2590, 2,return_,loopF2590);
  T2 = CALL2(0,loopF2590,FREEREF(0),Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_process_142) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_quoteT),x_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_backquoteQ),x_);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL1(1,VARREF(YevalSsyntaxYsexpr_build_backquote_expander),T7);
      T5 = CALL1(1,VARREF(YevalSsyntaxYbq_process),T6);
      T3 = T5;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
      if (T10 != YPfalse) {
        T12 = CALL1(1,VARREF(Ytail),x_);
        T11 = CALL1(1,VARREF(Yhead),T12);
        T9 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
        if (T14 != YPfalse) {
          T18 = CALL0(1,x_);
          T17 = CALL1(1,VARREF(Ytail),T18);
          T16 = CALL1(1,VARREF(Yhead),T17);
          T15 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_338),T16);
          T13 = T15;
        } else {
          if (YPtrue != YPfalse) {
            T21 = FUNFAB(fun_141,1,x_);
            T20 = with_exit(T21);
            T19 = T20;
          } else {
            T19 = YPfalse;
          }
          T13 = T19;
        }
        T9 = T13;
      }
      T3 = T9;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bracket_143) {
  P x_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
    T2 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),x_);
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(Ytail),x_);
      T7 = CALL1(1,VARREF(Yhead),T8);
      T6 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T7);
      T4 = T6;
    } else {
      T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),x_);
      if (T10 != YPfalse) {
        T13 = CALL1(1,VARREF(Ytail),x_);
        T12 = CALL1(1,VARREF(Yhead),T13);
        T11 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_clobberableT),T12);
        T9 = T11;
      } else {
        if (YPtrue != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
          T15 = CALL2(1,VARREF(Ylst),VARREF(YevalSsyntaxYTbq_listT),T16);
          T14 = T15;
        } else {
          T14 = YPfalse;
        }
        T9 = T14;
      }
      T4 = T9;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_map_tree_144) {
  P fn_,x_;
  P tmpF2593;
  P dF2592;
  P aF2591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(fn_, 0);
  ARG(x_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,fn_,x_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),x_);
    T4 = CALL1(1,fn_,T5);
    aF2591 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T8);
    dF2592 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF2591,T12);
    tmpF2593 = T11;
    if (tmpF2593 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF2592,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF2591,dF2592);
      T9 = T16;
    }
    T6 = T9;
    T3 = T6;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bq_remove_tokens_145) {
  P x_;
  P tmpF2595;
  P tmpF2594;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listT));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_158);
  } else {
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_appendT));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_349);
    } else {
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_nconcT));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_350);
      } else {
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_listTT));
        if (T7 != YPfalse) {
          T6 = LITREF(lit_351);
        } else {
          T9 = CALL2(1,VARREF(YgooSmacrosYEE),x_,VARREF(YevalSsyntaxYTbq_quoteT));
          if (T9 != YPfalse) {
            T8 = LITREF(lit_6);
          } else {
            T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_atomQ),x_);
            if (T11 != YPfalse) {
              T10 = x_;
            } else {
              T14 = CALL1(1,VARREF(Yhead),x_);
              T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,VARREF(YevalSsyntaxYTbq_clobberableT));
              if (T13 != YPfalse) {
                T17 = CALL1(1,VARREF(Ytail),x_);
                T16 = CALL1(1,VARREF(Yhead),T17);
                T15 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),T16);
                T12 = T15;
              } else {
                T21 = CALL1(1,VARREF(Yhead),x_);
                T20 = CALL2(1,VARREF(YgooSmacrosYEE),T21,VARREF(YevalSsyntaxYTbq_listTT));
                tmpF2594 = T20;
                if (tmpF2594 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF2595 = T24;
                  if (tmpF2595 != YPfalse) {
                    T32 = CALL1(1,VARREF(Ytail),x_);
                    T31 = CALL1(1,VARREF(Ytail),T32);
                    T30 = CALL1(1,VARREF(Ytail),T31);
                    T29 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T30);
                    T28 = T29;
                  } else {
                    T28 = YPfalse;
                  }
                  T23 = T28;
                  T22 = T23;
                } else {
                  T22 = YPfalse;
                }
                T19 = T22;
                if (T19 != YPfalse) {
                  T35 = CALL1(1,VARREF(Ytail),x_);
                  T34 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),T35);
                  T33 = CALL2(1,VARREF(YgooSmacrosYpair),LITREF(lit_352),T34);
                  T18 = T33;
                } else {
                  if (YPtrue != YPfalse) {
                    T37 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),VARREF(YevalSsyntaxYbq_remove_tokens),x_);
                    T36 = T37;
                  } else {
                    T36 = YPfalse;
                  }
                  T18 = T36;
                }
                T12 = T18;
              }
              T10 = T12;
            }
            T8 = T10;
          }
          T6 = T8;
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

FUNCODEDEF(fun_sexpr_syntax_ifQ_146) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),exp_,VARREF(YevalSsyntaxYDsexpr_syntax_if_tag));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_value_147) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_pattern_148) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),exp_);
  T0 = CALL1(1,VARREF(YgooSmacrosY1st),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_then_149) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooScolsSseqY3rd),exp_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_syntax_if_else_150) {
  P exp_;
  P T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T0 = CALL3(1,VARREF(YgooScolsScolYelt_or),exp_,YPint((P)3),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variableQ_151) {
  P pat_;
  P tmpF2596;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF2596 = T1;
  if (tmpF2596 != YPfalse) {
    T2 = tmpF2596;
  } else {
    T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquote_splicingQ),pat_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_pattern_variable_name_152) {
  P pat_;
  P T0;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T0 = CALL1(1,VARREF(YgooSmacrosY2nd),pat_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_col_153) {
  P pat_;
  P xF2598;
  P tmpF2597;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF2597 = T2;
  if (tmpF2597 != YPfalse) {
    T4 = tmpF2597;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF2598 = T7;
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF2598);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF2598);
      T13 = CALL1(1,VARREF(Ytail),pat_);
      T12 = CALL1(0,FREEREF(0),T13);
      T10 = CALL2(1,VARREF(YgooSmacrosYpair),T11,T12);
      T8 = T10;
    } else {
      T16 = CALL1(1,VARREF(Yhead),pat_);
      T15 = CALL1(0,FREEREF(0),T16);
      T18 = CALL1(1,VARREF(Ytail),pat_);
      T17 = CALL1(0,FREEREF(0),T18);
      T14 = CALL2(1,VARREF(YgooSmacrosYcat),T15,T17);
      T8 = T14;
    }
    T6 = T8;
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_bind_pattern_variables_154) {
  P pat_;
  P colF2599;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_153,1);
  colF2599 = T2;
  FUNINIT(colF2599, 1,colF2599);
  T3 = CALL1(0,colF2599,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_155) {
  P name_,exp_;
  P funcF2601;
  P mifF2600;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(exp_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_parameters),exp_);
  T4 = CALL1(1,VARREF(YevalSsyntaxYsexpr_method_body),exp_);
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T4);
  T6 = CALL1(1,VARREF(Ylst),LITREF(lit_373));
  T9 = CALL1(1,VARREF(Ylst),LITREF(lit_6));
  T10 = CALL1(1,VARREF(Ylst),name_);
  T8 = CALL3(1,VARREF(YgooSmacrosYcat),T9,T10,Ynil);
  T7 = CALL1(1,VARREF(Ylst),T8);
  T11 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
  T5 = CALL4(1,VARREF(YgooSmacrosYcat),T6,T7,T11,LITREF(lit_68));
  T1 = CALL4(1,VARREF(YevalSsyntaxYsexpr_make_syntax_if),T2,LITREF(lit_372),T3,T5);
  mifF2600 = T1;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
  T15 = CALL1(1,VARREF(Ylst),mifF2600);
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T14,T15);
  funcF2601 = T13;
  T12 = funcF2601;
  T0 = T12;
UNLINK_STACK();
  QRET(T0);
}

P YevalSsyntaxY___main_0___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(8));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_self_evaluatingQ,YPfalse);
  T3 = fun_sexpr_self_evaluatingQ_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  lit_3 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(19));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_variableQ,YPfalse);
  T7 = fun_sexpr_variableQ_1;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_variableQ,T5);
  lit_4 = YPPsym((P)"sexpr-tagged-list?");
  lit_5 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"tag"));
  T8 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(24));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_tagged_listQ,YPfalse);
  T11 = fun_sexpr_tagged_listQ_2;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_tagged_listQ,T9);
  lit_6 = YPPsym((P)"quote");
  VARSET(YevalSsyntaxYDsexpr_quote_tag,LITREF(lit_6));
  lit_7 = YPPsym((P)"sexpr-quoted?");
  lit_8 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_7),T12,ENVNUL,PNUL,sloc(31));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_quotedQ,YPfalse);
  T15 = fun_sexpr_quotedQ_3;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_quotedQ,T13);
  lit_9 = YPPsym((P)"sexpr-make-quote");
  lit_10 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_9),T16,ENVNUL,PNUL,sloc(34));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_make_quote,YPfalse);
  T19 = fun_sexpr_make_quote_4;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_make_quote,T17);
  lit_11 = YPPsym((P)"sexpr-text-of-quotation");
  lit_12 = YPPlist(1,YPPsym((P)"quot"));
  T20 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_11),T20,ENVNUL,PNUL,sloc(37));
  T22 = VARREF_OR(YevalSsyntaxYsexpr_text_of_quotation,YPfalse);
  T23 = fun_sexpr_text_of_quotation_5;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_text_of_quotation,T21);
  lit_13 = YPPsym((P)"set");
  VARSET(YevalSsyntaxYDsexpr_set_tag,LITREF(lit_13));
  lit_14 = YPPsym((P)"sexpr-assignment?");
  lit_15 = YPPlist(1,YPPsym((P)"exp"));
  T24 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_14),T24,ENVNUL,PNUL,sloc(44));
  T26 = VARREF_OR(YevalSsyntaxYsexpr_assignmentQ,YPfalse);
  T27 = fun_sexpr_assignmentQ_6;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_assignmentQ,T25);
  lit_16 = YPPsym((P)"sexpr-assignment-variable");
  lit_17 = YPPlist(1,YPPsym((P)"assn"));
  T28 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_16),T28,ENVNUL,PNUL,sloc(47));
  T30 = VARREF_OR(YevalSsyntaxYsexpr_assignment_variable,YPfalse);
  T31 = fun_sexpr_assignment_variable_7;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_assignment_variable,T29);
  lit_18 = YPPsym((P)"sexpr-assignment-value");
  lit_19 = YPPlist(1,YPPsym((P)"assn"));
  T32 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_18),T32,ENVNUL,PNUL,sloc(50));
  T34 = VARREF_OR(YevalSsyntaxYsexpr_assignment_value,YPfalse);
  T35 = fun_sexpr_assignment_value_8;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_assignment_value,T33);
  lit_20 = YPPsym((P)"sexpr-variable-name");
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_20),T36,ENVNUL,PNUL,sloc(55));
  T38 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T39 = fun_sexpr_variable_name_9;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_variable_name,T37);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  T40 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_20),T40,ENVNUL,PNUL,sloc(58));
  T42 = VARREF_OR(YevalSsyntaxYsexpr_variable_name,YPfalse);
  T43 = fun_sexpr_variable_name_10;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_variable_name,T41);
  lit_23 = YPPsym((P)"sexpr-variable-type");
  lit_24 = YPPlist(1,YPPsym((P)"exp"));
  T44 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_23),T44,ENVNUL,PNUL,sloc(61));
  T46 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T47 = fun_sexpr_variable_type_11;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_variable_type,T45);
  lit_25 = YPPlist(1,YPPsym((P)"exp"));
  lit_26 = YPPsym((P)"<any>");
  T48 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_23),T48,ENVNUL,PNUL,sloc(64));
  T50 = VARREF_OR(YevalSsyntaxYsexpr_variable_type,YPfalse);
  T51 = fun_sexpr_variable_type_12;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_variable_type,T49);
  lit_27 = YPPsym((P)"dv");
  VARSET(YevalSsyntaxYDsexpr_define_tag,LITREF(lit_27));
  lit_28 = YPPsym((P)"sexpr-definition?");
  lit_29 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_28),T52,ENVNUL,PNUL,sloc(71));
  T54 = VARREF_OR(YevalSsyntaxYsexpr_definitionQ,YPfalse);
  T55 = fun_sexpr_definitionQ_13;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_definitionQ,T53);
  lit_30 = YPPsym((P)"quasiquote");
  VARSET(YevalSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_30));
  lit_31 = YPPsym((P)"sexpr-definition-variable");
  lit_32 = YPPlist(1,YPPsym((P)"defn"));
  T56 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_31),T56,ENVNUL,PNUL,sloc(76));
  T58 = VARREF_OR(YevalSsyntaxYsexpr_definition_variable,YPfalse);
  T59 = fun_sexpr_definition_variable_14;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_definition_variable,T57);
  lit_33 = YPPsym((P)"sexpr-definition-value");
  lit_34 = YPPlist(1,YPPsym((P)"defn"));
  T60 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_33),T60,ENVNUL,PNUL,sloc(79));
  T62 = VARREF_OR(YevalSsyntaxYsexpr_definition_value,YPfalse);
  T63 = fun_sexpr_definition_value_15;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_definition_value,T61);
  lit_35 = YPPsym((P)"ds");
  VARSET(YevalSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_35));
  lit_36 = YPPsym((P)"sexpr-syntax-definition?");
  lit_37 = YPPlist(1,YPPsym((P)"exp"));
  T64 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_36),T64,ENVNUL,PNUL,sloc(84));
  T66 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definitionQ,YPfalse);
  T67 = fun_sexpr_syntax_definitionQ_16;
  T65 = XCALL2(1,VARREF(YPdefine_method),T66,T67);
  VARSET(YevalSsyntaxYsexpr_syntax_definitionQ,T65);
  lit_38 = YPPsym((P)"mac");
  VARSET(YevalSsyntaxYDsexpr_macro_tag,LITREF(lit_38));
  lit_39 = YPPsym((P)"sexpr-syntax-definition-variable");
  lit_40 = YPPlist(1,YPPsym((P)"defn"));
  T68 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_39),T68,ENVNUL,PNUL,sloc(89));
  T70 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_variable,YPfalse);
  T71 = fun_sexpr_syntax_definition_variable_17;
  T69 = XCALL2(1,VARREF(YPdefine_method),T70,T71);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_variable,T69);
  lit_41 = YPPsym((P)"sexpr-syntax-definition-value");
  lit_42 = YPPlist(1,YPPsym((P)"defn"));
  T72 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_41),T72,ENVNUL,PNUL,sloc(92));
  T74 = VARREF_OR(YevalSsyntaxYsexpr_syntax_definition_value,YPfalse);
  T75 = fun_sexpr_syntax_definition_value_18;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T75);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_value,T73);
  lit_43 = YPPsym((P)"df");
  VARSET(YevalSsyntaxYDsexpr_define_function_tag,LITREF(lit_43));
  lit_44 = YPPsym((P)"sexpr-function-definition?");
  lit_45 = YPPlist(1,YPPsym((P)"exp"));
  T76 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_44),T76,ENVNUL,PNUL,sloc(98));
  T78 = VARREF_OR(YevalSsyntaxYsexpr_function_definitionQ,YPfalse);
  T79 = fun_sexpr_function_definitionQ_19;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T79);
  VARSET(YevalSsyntaxYsexpr_function_definitionQ,T77);
  lit_46 = YPPsym((P)"dm");
  VARSET(YevalSsyntaxYDsexpr_define_method_tag,LITREF(lit_46));
  lit_47 = YPPsym((P)"sexpr-method-definition?");
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  T80 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_47),T80,ENVNUL,PNUL,sloc(103));
  T82 = VARREF_OR(YevalSsyntaxYsexpr_method_definitionQ,YPfalse);
  T83 = fun_sexpr_method_definitionQ_20;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T83);
  VARSET(YevalSsyntaxYsexpr_method_definitionQ,T81);
  lit_49 = YPPsym((P)"dg");
  VARSET(YevalSsyntaxYDsexpr_define_generic_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-generic-definition?");
  lit_51 = YPPlist(1,YPPsym((P)"exp"));
  T84 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_50),T84,ENVNUL,PNUL,sloc(108));
  T86 = VARREF_OR(YevalSsyntaxYsexpr_generic_definitionQ,YPfalse);
  T87 = fun_sexpr_generic_definitionQ_21;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T87);
  VARSET(YevalSsyntaxYsexpr_generic_definitionQ,T85);
  lit_52 = YPPsym((P)"sexpr-function-definition-variable");
  lit_53 = YPPlist(1,YPPsym((P)"defn"));
  T88 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_52),T88,ENVNUL,PNUL,sloc(113));
  T90 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_variable,YPfalse);
  T91 = fun_sexpr_function_definition_variable_22;
  T89 = XCALL2(1,VARREF(YPdefine_method),T90,T91);
  VARSET(YevalSsyntaxYsexpr_function_definition_variable,T89);
  lit_54 = YPPsym((P)"sexpr-function-definition-adjectives");
  lit_55 = YPPlist(1,YPPsym((P)"defn"));
  T92 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_adjectives_23 = YPmet(FUNCODEREF(fun_sexpr_function_definition_adjectives_23),LITREF(lit_54),T92,ENVNUL,PNUL,sloc(119));
  T94 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_adjectives,YPfalse);
  T95 = fun_sexpr_function_definition_adjectives_23;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSsyntaxYsexpr_function_definition_adjectives,T93);
  lit_56 = YPPsym((P)"sexpr-forward-primitive?");
  lit_57 = YPPlist(1,YPPsym((P)"defn"));
  T96 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_24 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_24),LITREF(lit_56),T96,ENVNUL,PNUL,sloc(125));
  T98 = VARREF_OR(YevalSsyntaxYsexpr_forward_primitiveQ,YPfalse);
  T99 = fun_sexpr_forward_primitiveQ_24;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T97);
  lit_58 = YPPsym((P)"sexpr-signature-parameters");
  lit_59 = YPPlist(1,YPPsym((P)"signature"));
  lit_60 = YPPsym((P)"=>");
  T100 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_25 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_25),LITREF(lit_58),T100,ENVNUL,PNUL,sloc(128));
  T102 = VARREF_OR(YevalSsyntaxYsexpr_signature_parameters,YPfalse);
  T103 = fun_sexpr_signature_parameters_25;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T101);
  lit_61 = YPPsym((P)"sexpr-value-type");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T104 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_26 = YPmet(FUNCODEREF(fun_sexpr_value_type_26),LITREF(lit_61),T104,ENVNUL,PNUL,sloc(134));
  T106 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T107 = fun_sexpr_value_type_26;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSsyntaxYsexpr_value_type,T105);
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  T108 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_27 = YPmet(FUNCODEREF(fun_sexpr_value_type_27),LITREF(lit_61),T108,ENVNUL,PNUL,sloc(136));
  T110 = VARREF_OR(YevalSsyntaxYsexpr_value_type,YPfalse);
  T111 = fun_sexpr_value_type_27;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSsyntaxYsexpr_value_type,T109);
  lit_64 = YPPsym((P)"sexpr-signature-value");
  lit_65 = YPPlist(1,YPPsym((P)"signature"));
  lit_66 = YPPsym((P)"tup");
  lit_67 = YPPsym((P)"t*");
  lit_68 = Ynil;
  T112 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_28 = YPmet(FUNCODEREF(fun_sexpr_signature_value_28),LITREF(lit_64),T112,ENVNUL,PNUL,sloc(138));
  T114 = VARREF_OR(YevalSsyntaxYsexpr_signature_value,YPfalse);
  T115 = fun_sexpr_signature_value_28;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSsyntaxYsexpr_signature_value,T113);
  lit_69 = YPPsym((P)"as-signature");
  lit_70 = YPPlist(1,YPPsym((P)"sig"));
  T116 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPmet(FUNCODEREF(YevalSsyntaxYas_signature),LITREF(lit_69),T116,ENVNUL,PNUL,sloc(146));
  T117 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T117);
  lit_71 = YPPsym((P)"sexpr-function-signature");
  lit_72 = YPPlist(1,YPPsym((P)"defn"));
  T118 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_30 = YPmet(FUNCODEREF(fun_sexpr_function_signature_30),LITREF(lit_71),T118,ENVNUL,PNUL,sloc(149));
  T120 = VARREF_OR(YevalSsyntaxYsexpr_function_signature,YPfalse);
  T121 = fun_sexpr_function_signature_30;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSsyntaxYsexpr_function_signature,T119);
  lit_73 = YPPsym((P)"sexpr-function-parameters");
  lit_74 = YPPlist(1,YPPsym((P)"defn"));
  T122 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_31 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_31),LITREF(lit_73),T122,ENVNUL,PNUL,sloc(152));
  T124 = VARREF_OR(YevalSsyntaxYsexpr_function_parameters,YPfalse);
  T125 = fun_sexpr_function_parameters_31;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T123);
  lit_75 = YPPsym((P)"sexpr-function-value");
  lit_76 = YPPlist(1,YPPsym((P)"defn"));
  T126 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_32 = YPmet(FUNCODEREF(fun_sexpr_function_value_32),LITREF(lit_75),T126,ENVNUL,PNUL,sloc(155));
  T128 = VARREF_OR(YevalSsyntaxYsexpr_function_value,YPfalse);
  T129 = fun_sexpr_function_value_32;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_function_value,T127);
  lit_77 = YPPsym((P)"sexpr-function-body");
  lit_78 = YPPlist(1,YPPsym((P)"defn"));
  T130 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_33 = YPmet(FUNCODEREF(fun_sexpr_function_body_33),LITREF(lit_77),T130,ENVNUL,PNUL,sloc(158));
  T132 = VARREF_OR(YevalSsyntaxYsexpr_function_body,YPfalse);
  T133 = fun_sexpr_function_body_33;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T133);
  VARSET(YevalSsyntaxYsexpr_function_body,T131);
  lit_79 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-function-definition-value");
  lit_81 = YPPlist(1,YPPsym((P)"defn"));
  T134 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_34 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_34),LITREF(lit_80),T134,ENVNUL,PNUL,sloc(164));
  T136 = VARREF_OR(YevalSsyntaxYsexpr_function_definition_value,YPfalse);
  T137 = fun_sexpr_function_definition_value_34;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T137);
  VARSET(YevalSsyntaxYsexpr_function_definition_value,T135);
  lit_82 = YPPsym((P)"sexpr-method?");
  lit_83 = YPPlist(1,YPPsym((P)"exp"));
  T138 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_35 = YPmet(FUNCODEREF(fun_sexpr_methodQ_35),LITREF(lit_82),T138,ENVNUL,PNUL,sloc(171));
  T140 = VARREF_OR(YevalSsyntaxYsexpr_methodQ,YPfalse);
  T141 = fun_sexpr_methodQ_35;
  T139 = XCALL2(1,VARREF(YPdefine_method),T140,T141);
  VARSET(YevalSsyntaxYsexpr_methodQ,T139);
  lit_84 = YPPsym((P)"sexpr-method-signature");
  lit_85 = YPPlist(1,YPPsym((P)"method-exp"));
  T142 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_36 = YPmet(FUNCODEREF(fun_sexpr_method_signature_36),LITREF(lit_84),T142,ENVNUL,PNUL,sloc(174));
  T144 = VARREF_OR(YevalSsyntaxYsexpr_method_signature,YPfalse);
  T145 = fun_sexpr_method_signature_36;
  T143 = XCALL2(1,VARREF(YPdefine_method),T144,T145);
  VARSET(YevalSsyntaxYsexpr_method_signature,T143);
  lit_86 = YPPsym((P)"sexpr-method-parameters");
  lit_87 = YPPlist(1,YPPsym((P)"method-exp"));
  T146 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_37 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_37),LITREF(lit_86),T146,ENVNUL,PNUL,sloc(177));
  T148 = VARREF_OR(YevalSsyntaxYsexpr_method_parameters,YPfalse);
  T149 = fun_sexpr_method_parameters_37;
  T147 = XCALL2(1,VARREF(YPdefine_method),T148,T149);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T147);
  lit_88 = YPPsym((P)"sexpr-method-value");
  lit_89 = YPPlist(1,YPPsym((P)"method-exp"));
  T150 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_38 = YPmet(FUNCODEREF(fun_sexpr_method_value_38),LITREF(lit_88),T150,ENVNUL,PNUL,sloc(180));
  T152 = VARREF_OR(YevalSsyntaxYsexpr_method_value,YPfalse);
  T153 = fun_sexpr_method_value_38;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T153);
  VARSET(YevalSsyntaxYsexpr_method_value,T151);
  lit_90 = YPPsym((P)"sexpr-method-body");
  lit_91 = YPPlist(1,YPPsym((P)"method-exp"));
  T154 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_39 = YPmet(FUNCODEREF(fun_sexpr_method_body_39),LITREF(lit_90),T154,ENVNUL,PNUL,sloc(183));
  T156 = VARREF_OR(YevalSsyntaxYsexpr_method_body,YPfalse);
  T157 = fun_sexpr_method_body_39;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T157);
  VARSET(YevalSsyntaxYsexpr_method_body,T155);
  lit_92 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_93 = YPPlist(2,YPPsym((P)"parameters"),YPPsym((P)"body"));
  T158 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_40 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_40),LITREF(lit_92),T158,ENVNUL,PNUL,sloc(188));
  T160 = VARREF_OR(YevalSsyntaxYsexpr_make_anonymous_method,YPfalse);
  T161 = fun_sexpr_make_anonymous_method_40;
  T159 = XCALL2(1,VARREF(YPdefine_method),T160,T161);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T159);
  lit_94 = YPPsym((P)"sexpr-make-method");
  lit_95 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"parameters"),YPPsym((P)"body"));
  T162 = YPsig(LITREF(lit_95),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_41 = YPmet(FUNCODEREF(fun_sexpr_make_method_41),LITREF(lit_94),T162,ENVNUL,PNUL,sloc(193));
  T164 = VARREF_OR(YevalSsyntaxYsexpr_make_method,YPfalse);
  T165 = fun_sexpr_make_method_41;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T165);
  VARSET(YevalSsyntaxYsexpr_make_method,T163);
  lit_96 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_96));
  lit_97 = YPPsym((P)"sexpr-if?");
  lit_98 = YPPlist(1,YPPsym((P)"exp"));
  T166 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_42 = YPmet(FUNCODEREF(fun_sexpr_ifQ_42),LITREF(lit_97),T166,ENVNUL,PNUL,sloc(201));
  T168 = VARREF_OR(YevalSsyntaxYsexpr_ifQ,YPfalse);
  T169 = fun_sexpr_ifQ_42;
  T167 = XCALL2(1,VARREF(YPdefine_method),T168,T169);
  VARSET(YevalSsyntaxYsexpr_ifQ,T167);
  lit_99 = YPPsym((P)"sexpr-if-test");
  lit_100 = YPPlist(1,YPPsym((P)"exp"));
  T170 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_43 = YPmet(FUNCODEREF(fun_sexpr_if_test_43),LITREF(lit_99),T170,ENVNUL,PNUL,sloc(204));
  T172 = VARREF_OR(YevalSsyntaxYsexpr_if_test,YPfalse);
  T173 = fun_sexpr_if_test_43;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T173);
  VARSET(YevalSsyntaxYsexpr_if_test,T171);
  lit_101 = YPPsym((P)"sexpr-if-then");
  lit_102 = YPPlist(1,YPPsym((P)"exp"));
  T174 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_44 = YPmet(FUNCODEREF(fun_sexpr_if_then_44),LITREF(lit_101),T174,ENVNUL,PNUL,sloc(207));
  T176 = VARREF_OR(YevalSsyntaxYsexpr_if_then,YPfalse);
  T177 = fun_sexpr_if_then_44;
  T175 = XCALL2(1,VARREF(YPdefine_method),T176,T177);
  VARSET(YevalSsyntaxYsexpr_if_then,T175);
  lit_103 = YPPsym((P)"sexpr-if-else");
  lit_104 = YPPlist(1,YPPsym((P)"exp"));
  T178 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_45 = YPmet(FUNCODEREF(fun_sexpr_if_else_45),LITREF(lit_103),T178,ENVNUL,PNUL,sloc(210));
  T180 = VARREF_OR(YevalSsyntaxYsexpr_if_else,YPfalse);
  T181 = fun_sexpr_if_else_45;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T181);
  VARSET(YevalSsyntaxYsexpr_if_else,T179);
  lit_105 = YPPsym((P)"sexpr-make-if");
  lit_106 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"then"),YPPsym((P)"else"));
  T182 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_46 = YPmet(FUNCODEREF(fun_sexpr_make_if_46),LITREF(lit_105),T182,ENVNUL,PNUL,sloc(215));
  T184 = VARREF_OR(YevalSsyntaxYsexpr_make_if,YPfalse);
  T185 = fun_sexpr_make_if_46;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T185);
  VARSET(YevalSsyntaxYsexpr_make_if,T183);
  lit_107 = YPPsym((P)"esc");
  VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_107));
  lit_108 = YPPsym((P)"sexpr-block?");
  lit_109 = YPPlist(1,YPPsym((P)"exp"));
  T186 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_47 = YPmet(FUNCODEREF(fun_sexpr_blockQ_47),LITREF(lit_108),T186,ENVNUL,PNUL,sloc(222));
  T188 = VARREF_OR(YevalSsyntaxYsexpr_blockQ,YPfalse);
  T189 = fun_sexpr_blockQ_47;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T189);
  VARSET(YevalSsyntaxYsexpr_blockQ,T187);
  lit_110 = YPPsym((P)"sexpr-block-name");
  lit_111 = YPPlist(1,YPPsym((P)"exp"));
  T192 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T191 = fun_sexpr_block_name_48 = YPmet(FUNCODEREF(fun_sexpr_block_name_48),LITREF(lit_110),T192,ENVNUL,PNUL,sloc(227));
  T195 = VARREF_OR(YevalSsyntaxYsexpr_block_name,YPfalse);
  T196 = fun_sexpr_block_name_48;
  T194 = XCALL2(1,VARREF(YPdefine_method),T195,T196);
  T193 = VARSET(YevalSsyntaxYsexpr_block_name,T194);
  T190 = T193;
  return T190;
}

P YevalSsyntaxY___main_1___() {
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
  P T176,T177,T178,T179,T180,T181,T182,T183,T184,T185,T186,T187,T188,T189,T190,T191;
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225;
DEFCREGS();
loop:
  lit_112 = YPPsym((P)"sexpr-block-body");
  lit_113 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_49 = YPmet(FUNCODEREF(fun_sexpr_block_body_49),LITREF(lit_112),T0,ENVNUL,PNUL,sloc(230));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_block_body,YPfalse);
  T3 = fun_sexpr_block_body_49;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_block_body,T1);
  lit_114 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-unwind-protect?");
  lit_116 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_50 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_50),LITREF(lit_115),T4,ENVNUL,PNUL,sloc(237));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protectQ,YPfalse);
  T7 = fun_sexpr_unwind_protectQ_50;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T5);
  lit_117 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  lit_118 = YPPlist(1,YPPsym((P)"exp"));
  T8 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_51 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_51),LITREF(lit_117),T8,ENVNUL,PNUL,sloc(240));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_protected_form,YPfalse);
  T11 = fun_sexpr_unwind_protect_protected_form_51;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T9);
  lit_119 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  lit_120 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_52 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_52),LITREF(lit_119),T12,ENVNUL,PNUL,sloc(243));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,YPfalse);
  T15 = fun_sexpr_unwind_protect_cleanup_forms_52;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T13);
  lit_121 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_121));
  lit_122 = YPPsym((P)"sexpr-monitor?");
  lit_123 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_53 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_53),LITREF(lit_122),T16,ENVNUL,PNUL,sloc(250));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_monitorQ,YPfalse);
  T19 = fun_sexpr_monitorQ_53;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T17);
  lit_124 = YPPsym((P)"sexpr-monitor-expand");
  lit_125 = YPPlist(1,YPPsym((P)"exp"));
  lit_126 = YPPlist(1,YPPsym((P)"return"));
  lit_127 = YPPsym((P)"x-1421");
  lit_128 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_129 = YPsb((P)"Malformed TRY expression: ~=");
  lit_130 = YPsb((P)"Match Pattern Failure");
  lit_131 = YPPsym((P)"type");
  T22 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1421_54 = YPmet(FUNCODEREF(fun_x_1421_54),LITREF(lit_127),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T21,ENVNUL,PNUL,YPfalse);
  T20 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_56),LITREF(lit_124),T20,ENVNUL,PNUL,sloc(253));
  T24 = VARREF_OR(YevalSsyntaxYsexpr_monitor_expand,YPfalse);
  T25 = fun_sexpr_monitor_expand_56;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T25);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T23);
  lit_132 = YPPsym((P)"find-option");
  lit_133 = YPPlist(3,YPPsym((P)"options"),YPPsym((P)"option"),YPPsym((P)"default"));
  T26 = YPsig(LITREF(lit_133),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPmet(FUNCODEREF(YevalSsyntaxYfind_option),LITREF(lit_132),T26,ENVNUL,PNUL,sloc(264));
  T27 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T27);
  lit_134 = YPPsym((P)"sexpr-monitor-type");
  lit_135 = YPPlist(1,YPPsym((P)"options"));
  lit_136 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-1423");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPsb((P)"Malformed TRY condition type: %=");
  T30 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1423_58 = YPmet(FUNCODEREF(fun_x_1423_58),LITREF(lit_138),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T29,ENVNUL,PNUL,YPfalse);
  T28 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_60 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_60),LITREF(lit_134),T28,ENVNUL,PNUL,sloc(270));
  T32 = VARREF_OR(YevalSsyntaxYsexpr_monitor_type,YPfalse);
  T33 = fun_sexpr_monitor_type_60;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T33);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T31);
  lit_141 = YPPsym((P)"sexpr-monitor-info");
  lit_142 = YPPlist(1,YPPsym((P)"options"));
  lit_143 = YPPsym((P)"info");
  lit_144 = YPPsym((P)"description");
  lit_145 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1425");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPsb((P)"Malformed TRY info expression: %=");
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1427");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPsb((P)"Malformed TRY description: %=");
  lit_154 = YPPsym((P)"new");
  lit_155 = YPPsym((P)"<simple-handler-info>");
  lit_156 = YPPsym((P)"handler-info-message");
  lit_157 = YPPsym((P)"handler-info-arguments");
  lit_158 = YPPsym((P)"lst");
  lit_159 = YPPsym((P)"$default-handler-info");
  T38 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1425_61 = YPmet(FUNCODEREF(fun_x_1425_61),LITREF(lit_147),T38,ENVNUL,PNUL,YPfalse);
  T37 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T37,ENVNUL,PNUL,YPfalse);
  T36 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1427_63 = YPmet(FUNCODEREF(fun_x_1427_63),LITREF(lit_151),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_65 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_65),LITREF(lit_141),T34,ENVNUL,PNUL,sloc(277));
  T40 = VARREF_OR(YevalSsyntaxYsexpr_monitor_info,YPfalse);
  T41 = fun_sexpr_monitor_info_65;
  T39 = XCALL2(1,VARREF(YPdefine_method),T40,T41);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T39);
  lit_160 = YPPsym((P)"sexpr-monitor-test");
  lit_161 = YPPlist(1,YPPsym((P)"options"));
  lit_162 = YPPsym((P)"test");
  lit_163 = YPPlist(1,YPtrue);
  T42 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_66 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_66),LITREF(lit_160),T42,ENVNUL,PNUL,sloc(296));
  T44 = VARREF_OR(YevalSsyntaxYsexpr_monitor_test,YPfalse);
  T45 = fun_sexpr_monitor_test_66;
  T43 = XCALL2(1,VARREF(YPdefine_method),T44,T45);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T43);
  lit_164 = YPPsym((P)"sexpr-monitor-body");
  lit_165 = YPPlist(1,YPPsym((P)"body"));
  T46 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_67 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_67),LITREF(lit_164),T46,ENVNUL,PNUL,sloc(300));
  T48 = VARREF_OR(YevalSsyntaxYsexpr_monitor_body,YPfalse);
  T49 = fun_sexpr_monitor_body_67;
  T47 = XCALL2(1,VARREF(YPdefine_method),T48,T49);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T47);
  lit_166 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_166));
  lit_167 = YPPsym((P)"sexpr-begin?");
  lit_168 = YPPlist(1,YPPsym((P)"exp"));
  T50 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_68 = YPmet(FUNCODEREF(fun_sexpr_beginQ_68),LITREF(lit_167),T50,ENVNUL,PNUL,sloc(307));
  T52 = VARREF_OR(YevalSsyntaxYsexpr_beginQ,YPfalse);
  T53 = fun_sexpr_beginQ_68;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T53);
  VARSET(YevalSsyntaxYsexpr_beginQ,T51);
  lit_169 = YPPsym((P)"sexpr-begin-actions");
  lit_170 = YPPlist(1,YPPsym((P)"begin-exp"));
  T54 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_69 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_69),LITREF(lit_169),T54,ENVNUL,PNUL,sloc(310));
  T56 = VARREF_OR(YevalSsyntaxYsexpr_begin_actions,YPfalse);
  T57 = fun_sexpr_begin_actions_69;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T57);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T55);
  lit_171 = YPPsym((P)"sexpr-last-exp?");
  lit_172 = YPPlist(1,YPPsym((P)"seq"));
  T58 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_70 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_70),LITREF(lit_171),T58,ENVNUL,PNUL,sloc(313));
  T60 = VARREF_OR(YevalSsyntaxYsexpr_last_expQ,YPfalse);
  T61 = fun_sexpr_last_expQ_70;
  T59 = XCALL2(1,VARREF(YPdefine_method),T60,T61);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T59);
  lit_173 = YPPsym((P)"sexpr-first-exp");
  lit_174 = YPPlist(1,YPPsym((P)"seq"));
  T62 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_71 = YPmet(FUNCODEREF(fun_sexpr_first_exp_71),LITREF(lit_173),T62,ENVNUL,PNUL,sloc(316));
  T64 = VARREF_OR(YevalSsyntaxYsexpr_first_exp,YPfalse);
  T65 = fun_sexpr_first_exp_71;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T65);
  VARSET(YevalSsyntaxYsexpr_first_exp,T63);
  lit_175 = YPPsym((P)"sexpr-rest-exps");
  lit_176 = YPPlist(1,YPPsym((P)"seq"));
  T66 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_72 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_72),LITREF(lit_175),T66,ENVNUL,PNUL,sloc(319));
  T68 = VARREF_OR(YevalSsyntaxYsexpr_rest_exps,YPfalse);
  T69 = fun_sexpr_rest_exps_72;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T67);
  lit_177 = YPPsym((P)"sexpr-sequence->begin");
  lit_178 = YPPlist(1,YPPsym((P)"seq"));
  T70 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_73 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_73),LITREF(lit_177),T70,ENVNUL,PNUL,sloc(322));
  T72 = VARREF_OR(YevalSsyntaxYsexpr_sequence_Gbegin,YPfalse);
  T73 = fun_sexpr_sequence_Gbegin_73;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T71);
  lit_179 = YPPsym((P)"sexpr-make-begin");
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  T74 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_74 = YPmet(FUNCODEREF(fun_sexpr_make_begin_74),LITREF(lit_179),T74,ENVNUL,PNUL,sloc(329));
  T76 = VARREF_OR(YevalSsyntaxYsexpr_make_begin,YPfalse);
  T77 = fun_sexpr_make_begin_74;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSsyntaxYsexpr_make_begin,T75);
  lit_181 = YPPsym((P)"sexpr-application?");
  lit_182 = YPPlist(1,YPPsym((P)"exp"));
  T78 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_75 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_75),LITREF(lit_181),T78,ENVNUL,PNUL,sloc(333));
  T80 = VARREF_OR(YevalSsyntaxYsexpr_applicationQ,YPfalse);
  T81 = fun_sexpr_applicationQ_75;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T79);
  lit_183 = YPPsym((P)"sexpr-operator");
  lit_184 = YPPlist(1,YPPsym((P)"app"));
  T82 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_76 = YPmet(FUNCODEREF(fun_sexpr_operator_76),LITREF(lit_183),T82,ENVNUL,PNUL,sloc(336));
  T84 = VARREF_OR(YevalSsyntaxYsexpr_operator,YPfalse);
  T85 = fun_sexpr_operator_76;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSsyntaxYsexpr_operator,T83);
  lit_185 = YPPsym((P)"sexpr-operands");
  lit_186 = YPPlist(1,YPPsym((P)"app"));
  T86 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_77 = YPmet(FUNCODEREF(fun_sexpr_operands_77),LITREF(lit_185),T86,ENVNUL,PNUL,sloc(339));
  T88 = VARREF_OR(YevalSsyntaxYsexpr_operands,YPfalse);
  T89 = fun_sexpr_operands_77;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSsyntaxYsexpr_operands,T87);
  lit_187 = YPPsym((P)"sexpr-no-operands?");
  lit_188 = YPPlist(1,YPPsym((P)"args"));
  T90 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_78 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_78),LITREF(lit_187),T90,ENVNUL,PNUL,sloc(342));
  T92 = VARREF_OR(YevalSsyntaxYsexpr_no_operandsQ,YPfalse);
  T93 = fun_sexpr_no_operandsQ_78;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T93);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T91);
  lit_189 = YPPsym((P)"sexpr-first-operand");
  lit_190 = YPPlist(1,YPPsym((P)"args"));
  T94 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_79 = YPmet(FUNCODEREF(fun_sexpr_first_operand_79),LITREF(lit_189),T94,ENVNUL,PNUL,sloc(345));
  T96 = VARREF_OR(YevalSsyntaxYsexpr_first_operand,YPfalse);
  T97 = fun_sexpr_first_operand_79;
  T95 = XCALL2(1,VARREF(YPdefine_method),T96,T97);
  VARSET(YevalSsyntaxYsexpr_first_operand,T95);
  lit_191 = YPPsym((P)"sexpr-rest-operands");
  lit_192 = YPPlist(1,YPPsym((P)"args"));
  T98 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_80 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_80),LITREF(lit_191),T98,ENVNUL,PNUL,sloc(348));
  T100 = VARREF_OR(YevalSsyntaxYsexpr_rest_operands,YPfalse);
  T101 = fun_sexpr_rest_operands_80;
  T99 = XCALL2(1,VARREF(YPdefine_method),T100,T101);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T99);
  lit_193 = YPPsym((P)"sexpr-make-application");
  lit_194 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"operands"));
  T102 = YPsig(LITREF(lit_194),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_81 = YPmet(FUNCODEREF(fun_sexpr_make_application_81),LITREF(lit_193),T102,ENVNUL,PNUL,sloc(351));
  T104 = VARREF_OR(YevalSsyntaxYsexpr_make_application,YPfalse);
  T105 = fun_sexpr_make_application_81;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T105);
  VARSET(YevalSsyntaxYsexpr_make_application,T103);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_195 = YPPsym((P)"sexpr-new-unique-name-counter!");
  lit_196 = Ynil;
  T106 = YPsig(LITREF(lit_196),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_82 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_82),LITREF(lit_195),T106,ENVNUL,PNUL,sloc(356));
  T108 = VARREF_OR(YevalSsyntaxYsexpr_new_unique_name_counterX,YPfalse);
  T109 = fun_sexpr_new_unique_name_counterX_82;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T109);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T107);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_197 = YPPsym((P)"sexpr-unique-name");
  lit_198 = YPPlist(1,YPPsym((P)"prefix"));
  T110 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_83 = YPmet(FUNCODEREF(fun_sexpr_unique_name_83),LITREF(lit_197),T110,ENVNUL,PNUL,sloc(363));
  T112 = VARREF_OR(YevalSsyntaxYsexpr_unique_name,YPfalse);
  T113 = fun_sexpr_unique_name_83;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T113);
  VARSET(YevalSsyntaxYsexpr_unique_name,T111);
  lit_199 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_199));
  lit_200 = YPPsym((P)"sexpr-def?");
  lit_201 = YPPlist(1,YPPsym((P)"exp"));
  T114 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_84 = YPmet(FUNCODEREF(fun_sexpr_defQ_84),LITREF(lit_200),T114,ENVNUL,PNUL,sloc(374));
  T116 = VARREF_OR(YevalSsyntaxYsexpr_defQ,YPfalse);
  T117 = fun_sexpr_defQ_84;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T117);
  VARSET(YevalSsyntaxYsexpr_defQ,T115);
  lit_202 = YPPsym((P)"sexpr-def-variable");
  lit_203 = YPPlist(1,YPPsym((P)"exp"));
  T118 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_85 = YPmet(FUNCODEREF(fun_sexpr_def_variable_85),LITREF(lit_202),T118,ENVNUL,PNUL,sloc(377));
  T120 = VARREF_OR(YevalSsyntaxYsexpr_def_variable,YPfalse);
  T121 = fun_sexpr_def_variable_85;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T121);
  VARSET(YevalSsyntaxYsexpr_def_variable,T119);
  lit_204 = YPPsym((P)"sexpr-def-value");
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  T122 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_86 = YPmet(FUNCODEREF(fun_sexpr_def_value_86),LITREF(lit_204),T122,ENVNUL,PNUL,sloc(379));
  T124 = VARREF_OR(YevalSsyntaxYsexpr_def_value,YPfalse);
  T125 = fun_sexpr_def_value_86;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T125);
  VARSET(YevalSsyntaxYsexpr_def_value,T123);
  lit_206 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_206));
  lit_207 = YPPsym((P)"sexpr-let?");
  lit_208 = YPPlist(1,YPPsym((P)"exp"));
  T126 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_87 = YPmet(FUNCODEREF(fun_sexpr_letQ_87),LITREF(lit_207),T126,ENVNUL,PNUL,sloc(383));
  T128 = VARREF_OR(YevalSsyntaxYsexpr_letQ,YPfalse);
  T129 = fun_sexpr_letQ_87;
  T127 = XCALL2(1,VARREF(YPdefine_method),T128,T129);
  VARSET(YevalSsyntaxYsexpr_letQ,T127);
  lit_209 = YPPsym((P)"sexpr-let-bound-variables");
  lit_210 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_211 = YPPlist(1,YPPsym((P)"x"));
  T131 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T131,ENVNUL,PNUL,sloc(387));
  T130 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_89 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_89),LITREF(lit_209),T130,ENVNUL,PNUL,sloc(386));
  T133 = VARREF_OR(YevalSsyntaxYsexpr_let_bound_variables,YPfalse);
  T134 = fun_sexpr_let_bound_variables_89;
  T132 = XCALL2(1,VARREF(YPdefine_method),T133,T134);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T132);
  lit_212 = YPPsym((P)"sexpr-let-values");
  lit_213 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T136 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T136,ENVNUL,PNUL,sloc(390));
  T135 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_91 = YPmet(FUNCODEREF(fun_sexpr_let_values_91),LITREF(lit_212),T135,ENVNUL,PNUL,sloc(389));
  T138 = VARREF_OR(YevalSsyntaxYsexpr_let_values,YPfalse);
  T139 = fun_sexpr_let_values_91;
  T137 = XCALL2(1,VARREF(YPdefine_method),T138,T139);
  VARSET(YevalSsyntaxYsexpr_let_values,T137);
  lit_215 = YPPsym((P)"sexpr-let-body");
  lit_216 = YPPlist(1,YPPsym((P)"let-exp"));
  T140 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_92 = YPmet(FUNCODEREF(fun_sexpr_let_body_92),LITREF(lit_215),T140,ENVNUL,PNUL,sloc(392));
  T142 = VARREF_OR(YevalSsyntaxYsexpr_let_body,YPfalse);
  T143 = fun_sexpr_let_body_92;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T143);
  VARSET(YevalSsyntaxYsexpr_let_body,T141);
  lit_217 = YPPsym((P)"sexpr-let-names+values");
  lit_218 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"vals"));
  lit_219 = YPPsym((P)"loop");
  lit_220 = YPPlist(4,YPPsym((P)"rnames"),YPPsym((P)"rvalues"),YPPsym((P)"names"),YPPsym((P)"vals"));
  lit_221 = YPsb((P)"tup");
  lit_222 = YPPsym((P)"inner");
  lit_223 = YPPlist(4,YPPsym((P)"rtnames"),YPPsym((P)"rtvalues"),YPPsym((P)"index"),YPPsym((P)"tnames"));
  lit_224 = YPPsym((P)"...");
  lit_225 = YPPsym((P)"<lst>");
  lit_226 = YPPsym((P)"sub");
  lit_227 = YPPsym((P)"len");
  lit_228 = YPPsym((P)"elt");
  T147 = YPsig(LITREF(lit_223),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_93 = YPmet(FUNCODEREF(fun_inner_93),LITREF(lit_222),T147,ENVNUL,PNUL,sloc(406));
  T146 = YPsig(LITREF(lit_220),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_94 = YPmet(FUNCODEREF(fun_loop_94),LITREF(lit_219),T146,ENVNUL,PNUL,sloc(397));
  T145 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T144 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T145,Ynil);
  fun_sexpr_let_namesAvalues_95 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_95),LITREF(lit_217),T144,ENVNUL,PNUL,sloc(395));
  T149 = VARREF_OR(YevalSsyntaxYsexpr_let_namesAvalues,YPfalse);
  T150 = fun_sexpr_let_namesAvalues_95;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T150);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T148);
  lit_229 = YPPsym((P)"sexpr-let->combination");
  lit_230 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_231 = YPPsym((P)"col");
  lit_232 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"values"));
  T152 = YPsig(LITREF(lit_232),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_96 = YPmet(FUNCODEREF(fun_col_96),LITREF(lit_231),T152,ENVNUL,PNUL,sloc(434));
  T151 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_97 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_97),LITREF(lit_229),T151,ENVNUL,PNUL,sloc(429));
  T154 = VARREF_OR(YevalSsyntaxYsexpr_let_Gcombination,YPfalse);
  T155 = fun_sexpr_let_Gcombination_97;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T155);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T153);
  lit_233 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_233));
  lit_234 = YPPsym((P)"sexpr-loc?");
  lit_235 = YPPlist(1,YPPsym((P)"exp"));
  T156 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_98 = YPmet(FUNCODEREF(fun_sexpr_locQ_98),LITREF(lit_234),T156,ENVNUL,PNUL,sloc(445));
  T158 = VARREF_OR(YevalSsyntaxYsexpr_locQ,YPfalse);
  T159 = fun_sexpr_locQ_98;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T159);
  VARSET(YevalSsyntaxYsexpr_locQ,T157);
  lit_236 = YPPsym((P)"sexpr-loc-bound-names");
  lit_237 = YPPlist(1,YPPsym((P)"loc-exp"));
  T160 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_99),LITREF(lit_236),T160,ENVNUL,PNUL,sloc(448));
  T162 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_names,YPfalse);
  T163 = fun_sexpr_loc_bound_names_99;
  T161 = XCALL2(1,VARREF(YPdefine_method),T162,T163);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T161);
  lit_238 = YPPsym((P)"sexpr-loc-bound-signatures");
  lit_239 = YPPlist(1,YPPsym((P)"loc-exp"));
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T165,ENVNUL,PNUL,sloc(452));
  T164 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_101 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_101),LITREF(lit_238),T164,ENVNUL,PNUL,sloc(451));
  T167 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_signatures,YPfalse);
  T168 = fun_sexpr_loc_bound_signatures_101;
  T166 = XCALL2(1,VARREF(YPdefine_method),T167,T168);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T166);
  lit_241 = YPPsym((P)"sexpr-loc-bound-bodies");
  lit_242 = YPPlist(1,YPPsym((P)"loc-exp"));
  T169 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_102 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_102),LITREF(lit_241),T169,ENVNUL,PNUL,sloc(456));
  T171 = VARREF_OR(YevalSsyntaxYsexpr_loc_bound_bodies,YPfalse);
  T172 = fun_sexpr_loc_bound_bodies_102;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T172);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T170);
  lit_243 = YPPsym((P)"sexpr-loc-raw-body");
  lit_244 = YPPlist(1,YPPsym((P)"loc-exp"));
  T173 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_103 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_103),LITREF(lit_243),T173,ENVNUL,PNUL,sloc(459));
  T175 = VARREF_OR(YevalSsyntaxYsexpr_loc_raw_body,YPfalse);
  T176 = fun_sexpr_loc_raw_body_103;
  T174 = XCALL2(1,VARREF(YPdefine_method),T175,T176);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T174);
  lit_245 = YPPsym((P)"sexpr-loc-body");
  lit_246 = YPPlist(1,YPPsym((P)"loc-exp"));
  T177 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_104 = YPmet(FUNCODEREF(fun_sexpr_loc_body_104),LITREF(lit_245),T177,ENVNUL,PNUL,sloc(462));
  T179 = VARREF_OR(YevalSsyntaxYsexpr_loc_body,YPfalse);
  T180 = fun_sexpr_loc_body_104;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T180);
  VARSET(YevalSsyntaxYsexpr_loc_body,T178);
  lit_247 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_247));
  lit_248 = YPPsym((P)"sexpr-iterate?");
  lit_249 = YPPlist(1,YPPsym((P)"exp"));
  T181 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_105 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_105),LITREF(lit_248),T181,ENVNUL,PNUL,sloc(468));
  T183 = VARREF_OR(YevalSsyntaxYsexpr_iterateQ,YPfalse);
  T184 = fun_sexpr_iterateQ_105;
  T182 = XCALL2(1,VARREF(YPdefine_method),T183,T184);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T182);
  lit_250 = YPPsym((P)"sexpr-iterate-name");
  lit_251 = YPPlist(1,YPPsym((P)"rep-exp"));
  T185 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_106 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_106),LITREF(lit_250),T185,ENVNUL,PNUL,sloc(471));
  T187 = VARREF_OR(YevalSsyntaxYsexpr_iterate_name,YPfalse);
  T188 = fun_sexpr_iterate_name_106;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T188);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T186);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_60));
  lit_252 = YPPsym((P)"sexpr-iterate-signature");
  lit_253 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_254 = YPPlist(1,YPPsym((P)"x"));
  T190 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T190,ENVNUL,PNUL,sloc(478));
  T189 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_108),LITREF(lit_252),T189,ENVNUL,PNUL,sloc(476));
  T192 = VARREF_OR(YevalSsyntaxYsexpr_iterate_signature,YPfalse);
  T193 = fun_sexpr_iterate_signature_108;
  T191 = XCALL2(1,VARREF(YPdefine_method),T192,T193);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T191);
  lit_255 = YPPsym((P)"sexpr-iterate-inits");
  lit_256 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_257 = YPPlist(1,YPPsym((P)"x"));
  T195 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T195,ENVNUL,PNUL,sloc(486));
  T194 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_110 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_110),LITREF(lit_255),T194,ENVNUL,PNUL,sloc(485));
  T197 = VARREF_OR(YevalSsyntaxYsexpr_iterate_inits,YPfalse);
  T198 = fun_sexpr_iterate_inits_110;
  T196 = XCALL2(1,VARREF(YPdefine_method),T197,T198);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T196);
  lit_258 = YPPsym((P)"sexpr-iterate-body");
  lit_259 = YPPlist(1,YPPsym((P)"rep-exp"));
  T199 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_111 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_111),LITREF(lit_258),T199,ENVNUL,PNUL,sloc(488));
  T201 = VARREF_OR(YevalSsyntaxYsexpr_iterate_body,YPfalse);
  T202 = fun_sexpr_iterate_body_111;
  T200 = XCALL2(1,VARREF(YPdefine_method),T201,T202);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T200);
  lit_260 = YPPsym((P)"sexpr-iterate->loc");
  lit_261 = YPPlist(1,YPPsym((P)"rep-exp"));
  T203 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_112 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_112),LITREF(lit_260),T203,ENVNUL,PNUL,sloc(491));
  T205 = VARREF_OR(YevalSsyntaxYsexpr_iterate_Gloc,YPfalse);
  T206 = fun_sexpr_iterate_Gloc_112;
  T204 = XCALL2(1,VARREF(YPdefine_method),T205,T206);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T204);
  lit_262 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_262));
  lit_263 = YPPsym((P)"sexpr-isa?");
  lit_264 = YPPlist(1,YPPsym((P)"exp"));
  T207 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_113 = YPmet(FUNCODEREF(fun_sexpr_isaQ_113),LITREF(lit_263),T207,ENVNUL,PNUL,sloc(505));
  T209 = VARREF_OR(YevalSsyntaxYsexpr_isaQ,YPfalse);
  T210 = fun_sexpr_isaQ_113;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T210);
  VARSET(YevalSsyntaxYsexpr_isaQ,T208);
  lit_265 = YPPsym((P)"sexpr-isa-parent");
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  T211 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_114 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_114),LITREF(lit_265),T211,ENVNUL,PNUL,sloc(508));
  T213 = VARREF_OR(YevalSsyntaxYsexpr_isa_parent,YPfalse);
  T214 = fun_sexpr_isa_parent_114;
  T212 = XCALL2(1,VARREF(YPdefine_method),T213,T214);
  VARSET(YevalSsyntaxYsexpr_isa_parent,T212);
  lit_267 = YPPsym((P)"sexpr-isa-prop-inits");
  lit_268 = YPPlist(1,YPPsym((P)"exp"));
  T215 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_115 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_115),LITREF(lit_267),T215,ENVNUL,PNUL,sloc(511));
  T217 = VARREF_OR(YevalSsyntaxYsexpr_isa_prop_inits,YPfalse);
  T218 = fun_sexpr_isa_prop_inits_115;
  T216 = XCALL2(1,VARREF(YPdefine_method),T217,T218);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T216);
  lit_269 = YPPsym((P)"sexpr-isa-init-props");
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  T221 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T220 = fun_sexpr_isa_init_props_116 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_116),LITREF(lit_269),T221,ENVNUL,PNUL,sloc(514));
  T224 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_props,YPfalse);
  T225 = fun_sexpr_isa_init_props_116;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T225);
  T222 = VARSET(YevalSsyntaxYsexpr_isa_init_props,T223);
  T219 = T222;
  return T219;
}

P YevalSsyntaxY___main_2___() {
  P tmpF2602;
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
loop:
  lit_271 = YPPsym((P)"sexpr-isa-init-values");
  lit_272 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_117 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_117),LITREF(lit_271),T0,ENVNUL,PNUL,sloc(517));
  T2 = VARREF_OR(YevalSsyntaxYsexpr_isa_init_values,YPfalse);
  T3 = fun_sexpr_isa_init_values_117;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T3);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T1);
  lit_273 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_273));
  lit_274 = YPPsym((P)"sexpr-define-class?");
  lit_275 = YPPlist(1,YPPsym((P)"exp"));
  T4 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_118 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_118),LITREF(lit_274),T4,ENVNUL,PNUL,sloc(524));
  T6 = VARREF_OR(YevalSsyntaxYsexpr_define_classQ,YPfalse);
  T7 = fun_sexpr_define_classQ_118;
  T5 = XCALL2(1,VARREF(YPdefine_method),T6,T7);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T5);
  lit_276 = YPPsym((P)"sexpr-define-class-parents");
  lit_277 = YPPlist(1,YPPsym((P)"exp"));
  T8 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_119 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_119),LITREF(lit_276),T8,ENVNUL,PNUL,sloc(527));
  T10 = VARREF_OR(YevalSsyntaxYsexpr_define_class_parents,YPfalse);
  T11 = fun_sexpr_define_class_parents_119;
  T9 = XCALL2(1,VARREF(YPdefine_method),T10,T11);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T9);
  lit_278 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_278));
  lit_279 = YPPsym((P)"sexpr-prop?");
  lit_280 = YPPlist(1,YPPsym((P)"exp"));
  T12 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_120 = YPmet(FUNCODEREF(fun_sexpr_propQ_120),LITREF(lit_279),T12,ENVNUL,PNUL,sloc(536));
  T14 = VARREF_OR(YevalSsyntaxYsexpr_propQ,YPfalse);
  T15 = fun_sexpr_propQ_120;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T15);
  VARSET(YevalSsyntaxYsexpr_propQ,T13);
  lit_281 = YPPsym((P)"sexpr-prop-name");
  lit_282 = YPPlist(1,YPPsym((P)"exp"));
  T16 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_121 = YPmet(FUNCODEREF(fun_sexpr_prop_name_121),LITREF(lit_281),T16,ENVNUL,PNUL,sloc(539));
  T18 = VARREF_OR(YevalSsyntaxYsexpr_prop_name,YPfalse);
  T19 = fun_sexpr_prop_name_121;
  T17 = XCALL2(1,VARREF(YPdefine_method),T18,T19);
  VARSET(YevalSsyntaxYsexpr_prop_name,T17);
  lit_283 = YPPsym((P)"sexpr-prop-owner");
  lit_284 = YPPlist(1,YPPsym((P)"exp"));
  T20 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_122 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_122),LITREF(lit_283),T20,ENVNUL,PNUL,sloc(542));
  T22 = VARREF_OR(YevalSsyntaxYsexpr_prop_owner,YPfalse);
  T23 = fun_sexpr_prop_owner_122;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T23);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T21);
  lit_285 = YPPsym((P)"sexpr-prop-init-var");
  lit_286 = YPPlist(1,YPPsym((P)"exp"));
  lit_287 = YPPsym((P)"_x");
  T24 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_123),LITREF(lit_285),T24,ENVNUL,PNUL,sloc(548));
  T26 = VARREF_OR(YevalSsyntaxYsexpr_prop_init_var,YPfalse);
  T27 = fun_sexpr_prop_init_var_123;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T27);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T25);
  lit_288 = YPPsym((P)"sexpr-prop-type");
  lit_289 = YPPlist(1,YPPsym((P)"exp"));
  T28 = YPsig(LITREF(lit_289),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_124 = YPmet(FUNCODEREF(fun_sexpr_prop_type_124),LITREF(lit_288),T28,ENVNUL,PNUL,sloc(554));
  T30 = VARREF_OR(YevalSsyntaxYsexpr_prop_type,YPfalse);
  T31 = fun_sexpr_prop_type_124;
  T29 = XCALL2(1,VARREF(YPdefine_method),T30,T31);
  VARSET(YevalSsyntaxYsexpr_prop_type,T29);
  lit_290 = YPPsym((P)"sexpr-prop-init?");
  lit_291 = YPPlist(1,YPPsym((P)"exp"));
  T32 = YPsig(LITREF(lit_291),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_125 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_125),LITREF(lit_290),T32,ENVNUL,PNUL,sloc(557));
  T34 = VARREF_OR(YevalSsyntaxYsexpr_prop_initQ,YPfalse);
  T35 = fun_sexpr_prop_initQ_125;
  T33 = XCALL2(1,VARREF(YPdefine_method),T34,T35);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T33);
  lit_292 = YPPsym((P)"sexpr-prop-init");
  lit_293 = YPPlist(1,YPPsym((P)"exp"));
  T36 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_126 = YPmet(FUNCODEREF(fun_sexpr_prop_init_126),LITREF(lit_292),T36,ENVNUL,PNUL,sloc(560));
  T38 = VARREF_OR(YevalSsyntaxYsexpr_prop_init,YPfalse);
  T39 = fun_sexpr_prop_init_126;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T39);
  VARSET(YevalSsyntaxYsexpr_prop_init,T37);
  lit_294 = YPPsym((P)"sexpr-fab-getter");
  lit_295 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"line"));
  lit_296 = YPPsym((P)"prop-value");
  T40 = YPsig(LITREF(lit_295),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_127 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_127),LITREF(lit_294),T40,ENVNUL,PNUL,sloc(563));
  T42 = VARREF_OR(YevalSsyntaxYsexpr_fab_getter,YPfalse);
  T43 = fun_sexpr_fab_getter_127;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T43);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T41);
  lit_297 = YPPsym((P)"sexpr-fab-setter");
  lit_298 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"prop-type"),YPPsym((P)"line"));
  lit_299 = YPPsym((P)"_z");
  lit_300 = YPPsym((P)"prop-value-setter");
  T44 = YPsig(LITREF(lit_298),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_128 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_128),LITREF(lit_297),T44,ENVNUL,PNUL,sloc(568));
  T46 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter,YPfalse);
  T47 = fun_sexpr_fab_setter_128;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T47);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T45);
  lit_301 = YPPsym((P)"sexpr-fab-setter-name");
  lit_302 = YPPlist(1,YPPsym((P)"name"));
  lit_303 = YPsb((P)"-setter");
  T48 = YPsig(LITREF(lit_302),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_129 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_129),LITREF(lit_301),T48,ENVNUL,PNUL,sloc(574));
  T50 = VARREF_OR(YevalSsyntaxYsexpr_fab_setter_name,YPfalse);
  T51 = fun_sexpr_fab_setter_name_129;
  T49 = XCALL2(1,VARREF(YPdefine_method),T50,T51);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T49);
  lit_304 = YPPsym((P)"sexpr-macro?");
  lit_305 = YPPlist(1,YPPsym((P)"exp"));
  T52 = YPsig(LITREF(lit_305),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_130 = YPmet(FUNCODEREF(fun_sexpr_macroQ_130),LITREF(lit_304),T52,ENVNUL,PNUL,sloc(579));
  T54 = VARREF_OR(YevalSsyntaxYsexpr_macroQ,YPfalse);
  T55 = fun_sexpr_macroQ_130;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T55);
  VARSET(YevalSsyntaxYsexpr_macroQ,T53);
  lit_306 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_306));
  lit_307 = YPPsym((P)"sexpr-macro-expand?");
  lit_308 = YPPlist(1,YPPsym((P)"exp"));
  T56 = YPsig(LITREF(lit_308),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_131 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_131),LITREF(lit_307),T56,ENVNUL,PNUL,sloc(584));
  T58 = VARREF_OR(YevalSsyntaxYsexpr_macro_expandQ,YPfalse);
  T59 = fun_sexpr_macro_expandQ_131;
  T57 = XCALL2(1,VARREF(YPdefine_method),T58,T59);
  VARSET(YevalSsyntaxYsexpr_macro_expandQ,T57);
  lit_309 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_309));
  lit_310 = YPPsym((P)"sexpr-make-syntax-if");
  lit_311 = YPPlist(4,YPPsym((P)"pat"),YPPsym((P)"exp"),YPPsym((P)"then"),YPPsym((P)"else"));
  T60 = YPsig(LITREF(lit_311),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_132 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_132),LITREF(lit_310),T60,ENVNUL,PNUL,sloc(589));
  T62 = VARREF_OR(YevalSsyntaxYsexpr_make_syntax_if,YPfalse);
  T63 = fun_sexpr_make_syntax_if_132;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T63);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T61);
  lit_312 = YPPsym((P)"comma-atsign");
  VARSET(YevalSsyntaxYTcomma_atsignT,LITREF(lit_312));
  lit_313 = YPPsym((P)"bq-list");
  VARSET(YevalSsyntaxYTbq_listT,LITREF(lit_313));
  lit_314 = YPPsym((P)"bq-list*");
  VARSET(YevalSsyntaxYTbq_listTT,LITREF(lit_314));
  lit_315 = YPPsym((P)"bq-append");
  VARSET(YevalSsyntaxYTbq_appendT,LITREF(lit_315));
  lit_316 = YPPsym((P)"bq-nconc");
  VARSET(YevalSsyntaxYTbq_nconcT,LITREF(lit_316));
  lit_317 = YPPsym((P)"bq-clobberable");
  VARSET(YevalSsyntaxYTbq_clobberableT,LITREF(lit_317));
  lit_318 = YPPsym((P)"bq-quote");
  VARSET(YevalSsyntaxYTbq_quoteT,LITREF(lit_318));
  lit_319 = YPPsym((P)"sexpr-expand-backquote");
  lit_320 = YPPlist(1,YPPsym((P)"x"));
  lit_321 = YPPsym((P)"goo");
  T64 = YPsig(LITREF(lit_320),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),LITREF(lit_319),T64,ENVNUL,PNUL,sloc(602));
  T65 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T65);
  lit_322 = YPPsym((P)"sexpr-build-backquote-expander");
  lit_323 = YPPlist(1,YPPsym((P)"x"));
  T66 = YPsig(LITREF(lit_323),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_134 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_134),LITREF(lit_322),T66,ENVNUL,PNUL,sloc(605));
  T68 = VARREF_OR(YevalSsyntaxYsexpr_build_backquote_expander,YPfalse);
  T69 = fun_sexpr_build_backquote_expander_134;
  T67 = XCALL2(1,VARREF(YPdefine_method),T68,T69);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T67);
  lit_324 = YPPsym((P)"sexpr-unquote?");
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  lit_326 = YPPsym((P)"unquote");
  T70 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_135 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_135),LITREF(lit_324),T70,ENVNUL,PNUL,sloc(611));
  T72 = VARREF_OR(YevalSsyntaxYsexpr_unquoteQ,YPfalse);
  T73 = fun_sexpr_unquoteQ_135;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T73);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T71);
  lit_327 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_328 = YPPlist(1,YPPsym((P)"x"));
  lit_329 = YPPsym((P)"unquote-splicing");
  T74 = YPsig(LITREF(lit_328),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_136 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_136),LITREF(lit_327),T74,ENVNUL,PNUL,sloc(614));
  T76 = VARREF_OR(YevalSsyntaxYsexpr_unquote_splicingQ,YPfalse);
  T77 = fun_sexpr_unquote_splicingQ_136;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T77);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T75);
  lit_330 = YPPsym((P)"sexpr-backquote?");
  lit_331 = YPPlist(1,YPPsym((P)"x"));
  T78 = YPsig(LITREF(lit_331),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_137 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_137),LITREF(lit_330),T78,ENVNUL,PNUL,sloc(617));
  T80 = VARREF_OR(YevalSsyntaxYsexpr_backquoteQ,YPfalse);
  T81 = fun_sexpr_backquoteQ_137;
  T79 = XCALL2(1,VARREF(YPdefine_method),T80,T81);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T79);
  lit_332 = YPPsym((P)"sexpr-atom?");
  lit_333 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_138 = YPmet(FUNCODEREF(fun_sexpr_atomQ_138),LITREF(lit_332),T82,ENVNUL,PNUL,sloc(620));
  T84 = VARREF_OR(YevalSsyntaxYsexpr_atomQ,YPfalse);
  T85 = fun_sexpr_atomQ_138;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T85);
  VARSET(YevalSsyntaxYsexpr_atomQ,T83);
  lit_334 = YPPsym((P)"nreconc");
  lit_335 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T86 = YPsig(LITREF(lit_335),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_139 = YPmet(FUNCODEREF(fun_nreconc_139),LITREF(lit_334),T86,ENVNUL,PNUL,sloc(623));
  T88 = VARREF_OR(YevalSsyntaxYnreconc,YPfalse);
  T89 = fun_nreconc_139;
  T87 = XCALL2(1,VARREF(YPdefine_method),T88,T89);
  VARSET(YevalSsyntaxYnreconc,T87);
  lit_336 = YPPsym((P)"bq-process");
  lit_337 = YPPlist(1,YPPsym((P)"x"));
  lit_338 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_339 = YPPlist(1,YPPsym((P)"return"));
  lit_340 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"q"));
  lit_341 = YPsb((P)"Malformed ,%=");
  lit_342 = YPsb((P)"Dotted ,@%=");
  T92 = YPsig(LITREF(lit_340),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_140 = YPmet(FUNCODEREF(fun_loop_140),LITREF(lit_219),T92,ENVNUL,PNUL,sloc(637));
  T91 = YPsig(LITREF(lit_339),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T91,ENVNUL,PNUL,sloc(636));
  T90 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_142 = YPmet(FUNCODEREF(fun_bq_process_142),LITREF(lit_336),T90,ENVNUL,PNUL,sloc(626));
  T94 = VARREF_OR(YevalSsyntaxYbq_process,YPfalse);
  T95 = fun_bq_process_142;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T95);
  VARSET(YevalSsyntaxYbq_process,T93);
  lit_343 = YPPsym((P)"bracket");
  lit_344 = YPPlist(1,YPPsym((P)"x"));
  T96 = YPsig(LITREF(lit_344),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_143 = YPmet(FUNCODEREF(fun_bracket_143),LITREF(lit_343),T96,ENVNUL,PNUL,sloc(651));
  T98 = VARREF_OR(YevalSsyntaxYbracket,YPfalse);
  T99 = fun_bracket_143;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T99);
  VARSET(YevalSsyntaxYbracket,T97);
  lit_345 = YPPsym((P)"map-tree");
  lit_346 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"x"));
  T100 = YPsig(LITREF(lit_346),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_144 = YPmet(FUNCODEREF(fun_map_tree_144),LITREF(lit_345),T100,ENVNUL,PNUL,sloc(661));
  T102 = VARREF_OR(YevalSsyntaxYmap_tree,YPfalse);
  T103 = fun_map_tree_144;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T103);
  VARSET(YevalSsyntaxYmap_tree,T101);
  lit_347 = YPPsym((P)"bq-remove-tokens");
  lit_348 = YPPlist(1,YPPsym((P)"x"));
  lit_349 = YPPsym((P)"cat");
  lit_350 = YPPsym((P)"cat!");
  lit_351 = YPPsym((P)"list*");
  lit_352 = YPPsym((P)"pair");
  T104 = YPsig(LITREF(lit_348),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_145 = YPmet(FUNCODEREF(fun_bq_remove_tokens_145),LITREF(lit_347),T104,ENVNUL,PNUL,sloc(670));
  T106 = VARREF_OR(YevalSsyntaxYbq_remove_tokens,YPfalse);
  T107 = fun_bq_remove_tokens_145;
  T105 = XCALL2(1,VARREF(YPdefine_method),T106,T107);
  VARSET(YevalSsyntaxYbq_remove_tokens,T105);
  lit_353 = YPPsym((P)"sexpr-syntax-if?");
  lit_354 = YPPlist(1,YPPsym((P)"exp"));
  T108 = YPsig(LITREF(lit_354),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_146),LITREF(lit_353),T108,ENVNUL,PNUL,sloc(688));
  T110 = VARREF_OR(YevalSsyntaxYsexpr_syntax_ifQ,YPfalse);
  T111 = fun_sexpr_syntax_ifQ_146;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T111);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T109);
  lit_355 = YPPsym((P)"sexpr-syntax-if-value");
  lit_356 = YPPlist(1,YPPsym((P)"exp"));
  T112 = YPsig(LITREF(lit_356),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_147),LITREF(lit_355),T112,ENVNUL,PNUL,sloc(691));
  T114 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_value,YPfalse);
  T115 = fun_sexpr_syntax_if_value_147;
  T113 = XCALL2(1,VARREF(YPdefine_method),T114,T115);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T113);
  lit_357 = YPPsym((P)"sexpr-syntax-if-pattern");
  lit_358 = YPPlist(1,YPPsym((P)"exp"));
  T116 = YPsig(LITREF(lit_358),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_148 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_148),LITREF(lit_357),T116,ENVNUL,PNUL,sloc(694));
  T118 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_pattern,YPfalse);
  T119 = fun_sexpr_syntax_if_pattern_148;
  T117 = XCALL2(1,VARREF(YPdefine_method),T118,T119);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T117);
  lit_359 = YPPsym((P)"sexpr-syntax-if-then");
  lit_360 = YPPlist(1,YPPsym((P)"exp"));
  T120 = YPsig(LITREF(lit_360),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_149 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_149),LITREF(lit_359),T120,ENVNUL,PNUL,sloc(697));
  T122 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_then,YPfalse);
  T123 = fun_sexpr_syntax_if_then_149;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T123);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T121);
  lit_361 = YPPsym((P)"sexpr-syntax-if-else");
  lit_362 = YPPlist(1,YPPsym((P)"exp"));
  T124 = YPsig(LITREF(lit_362),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_150 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_150),LITREF(lit_361),T124,ENVNUL,PNUL,sloc(702));
  T126 = VARREF_OR(YevalSsyntaxYsexpr_syntax_if_else,YPfalse);
  T127 = fun_sexpr_syntax_if_else_150;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T127);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T125);
  lit_363 = YPPsym((P)"sexpr-pattern-variable?");
  lit_364 = YPPlist(1,YPPsym((P)"pat"));
  T128 = YPsig(LITREF(lit_364),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_151 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_151),LITREF(lit_363),T128,ENVNUL,PNUL,sloc(705));
  T130 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variableQ,YPfalse);
  T131 = fun_sexpr_pattern_variableQ_151;
  T129 = XCALL2(1,VARREF(YPdefine_method),T130,T131);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T129);
  lit_365 = YPPsym((P)"sexpr-pattern-variable-name");
  lit_366 = YPPlist(1,YPPsym((P)"pat"));
  T132 = YPsig(LITREF(lit_366),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_152 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_152),LITREF(lit_365),T132,ENVNUL,PNUL,sloc(708));
  T134 = VARREF_OR(YevalSsyntaxYsexpr_pattern_variable_name,YPfalse);
  T135 = fun_sexpr_pattern_variable_name_152;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T135);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T133);
  lit_367 = YPPsym((P)"sexpr-bind-pattern-variables");
  lit_368 = YPPlist(1,YPPsym((P)"pat"));
  lit_369 = YPPlist(1,YPPsym((P)"pat"));
  T137 = YPsig(LITREF(lit_369),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_153 = YPmet(FUNCODEREF(fun_col_153),LITREF(lit_231),T137,ENVNUL,PNUL,sloc(713));
  T136 = YPsig(LITREF(lit_368),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_154 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_154),LITREF(lit_367),T136,ENVNUL,PNUL,sloc(711));
  T139 = VARREF_OR(YevalSsyntaxYsexpr_bind_pattern_variables,YPfalse);
  T140 = fun_sexpr_bind_pattern_variables_154;
  T138 = XCALL2(1,VARREF(YPdefine_method),T139,T140);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T138);
  lit_370 = YPPsym((P)"sexpr-make-macro-function");
  lit_371 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"exp"));
  lit_372 = YPPsym((P)"exp");
  lit_373 = YPPsym((P)"macro-error");
  T141 = YPsig(LITREF(lit_371),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_155 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_155),LITREF(lit_370),T141,ENVNUL,PNUL,sloc(724));
  T143 = VARREF_OR(YevalSsyntaxYsexpr_make_macro_function,YPfalse);
  T144 = fun_sexpr_make_macro_function_155;
  T142 = XCALL2(1,VARREF(YPdefine_method),T143,T144);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T142);
  tmpF2602 = YPfalse;
  if (tmpF2602 != YPfalse) {
    T145 = VARREF(YevalSsyntaxYeval);
  } else {
    T145 = YPfalse;
  }
  T146 = YPfalse;
  return T146;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSlst;
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
  {&module_info_gooScolsSlst},
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
  {"line-list", &module_info_gooScolsSlst, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
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
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%fi2f", &module_info_gooSboot, NULL},
  {"line-of", &module_info_gooScolsSlst, NULL},
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
  {"if", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"line-pair", &module_info_gooScolsSlst, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
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
  {"head", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"object-parents", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
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
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
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
  {"union-elts", &module_info_gooSboot, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%close-in-port", &module_info_gooSboot, NULL},
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
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
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
  {"*", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
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
  {"%i?", &module_info_gooSboot, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
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
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
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
  {"assq", &module_info_gooScolsSlst, NULL},
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
  {"line-list-of", &module_info_gooScolsSlst, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
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
  {"do2", &module_info_gooScolsSseq, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
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
  {"op", &module_info_gooSlate_macros, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"assqn", &module_info_gooScolsSlst, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
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
  {"<line>", &module_info_gooScolsSlst, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"%file-type", &module_info_gooSboot, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<line-list>", &module_info_gooScolsSlst, NULL},
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
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"---main-1---", PVAR, NULL},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"---main-2---", PVAR, NULL},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"---main-0---", PVAR, NULL},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"sexpr-function-definition-adjectives", CVAR, &YevalSsyntaxYsexpr_function_definition_adjectives},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-def-value", NULL},
  {"sexpr-bind-pattern-variables", NULL},
  {"sexpr-isa-prop-inits", NULL},
  {"sexpr-monitor-expand", NULL},
  {"$sexpr-define-function-tag", NULL},
  {"sexpr-method-signature", NULL},
  {"$sexpr-define-syntax-tag", NULL},
  {"sexpr-define-class-parents", NULL},
  {"sexpr-sequence->begin", NULL},
  {"sexpr-function-signature", NULL},
  {"sexpr-fab-getter", NULL},
  {"sexpr-prop-init-var", NULL},
  {"$sexpr-let-tag", NULL},
  {"$sexpr-if-tag", NULL},
  {"sexpr-method-body", NULL},
  {"sexpr-syntax-if-pattern", NULL},
  {"sexpr-make-application", NULL},
  {"sexpr-operands", NULL},
  {"sexpr-signature-parameters", NULL},
  {"sexpr-def-variable", NULL},
  {"sexpr-block-body", NULL},
  {"sexpr-loc-bound-signatures", NULL},
  {"sexpr-isa-parent", NULL},
  {"sexpr-assignment-variable", NULL},
  {"$sexpr-define-method-tag", NULL},
  {"$sexpr-define-generic-tag", NULL},
  {"sexpr-define-class?", NULL},
  {"sexpr-let->combination", NULL},
  {"sexpr-variable-type", NULL},
  {"$sexpr-define-tag", NULL},
  {"sexpr-make-method", NULL},
  {"sexpr-prop-init", NULL},
  {"$sexpr-macro-expand-tag", NULL},
  {"$sexpr-quasiquote-tag", NULL},
  {"sexpr-prop-owner", NULL},
  {"$sexpr-monitor-tag", NULL},
  {"sexpr-expand-backquote", NULL},
  {"$sexpr-def-tag", NULL},
  {"sexpr-if-else", NULL},
  {"sexpr-function-definition-value", NULL},
  {"sexpr-def?", NULL},
  {"sexpr-syntax-if-value", NULL},
  {"sexpr-operator", NULL},
  {"$sexpr-method-tag", NULL},
  {"sexpr-definition-value", NULL},
  {"sexpr-forward-primitive?", NULL},
  {"sexpr-block-name", NULL},
  {"$sexpr-bind-exit-tag", NULL},
  {"sexpr-isa-init-values", NULL},
  {"sexpr-fab-setter-name", NULL},
  {"sexpr-signature-value", NULL},
  {"sexpr-unwind-protect-cleanup-forms", NULL},
  {"$sexpr-begin-tag", NULL},
  {"$sexpr-syntax-if-tag", NULL},
  {"sexpr-function-body", NULL},
  {"$sexpr-define-class-tag", NULL},
  {"sexpr-prop-init?", NULL},
  {"sexpr-variable-name", NULL},
  {"sexpr-prop-name", NULL},
  {"$sexpr-quote-tag", NULL},
  {"sexpr-variable?", NULL},
  {"sexpr-if-then", NULL},
  {"$sexpr-prop-tag", NULL},
  {"$sexpr-set-tag", NULL},
  {"sexpr-syntax-if-else", NULL},
  {"eval", NULL},
  {"sexpr-make-macro-function", NULL},
  {"sexpr-loc-raw-body", NULL},
  {"sexpr-unquote-splicing?", NULL},
  {"sexpr-loc-bound-names", NULL},
  {"sexpr-function-definition-adjectives", NULL},
  {"sexpr-syntax-definition-value", NULL},
  {"$sexpr-locals-tag", NULL},
  {"sexpr-isa-init-props", NULL},
  {"sexpr-syntax-definition-variable", NULL},
  {"sexpr-definition-variable", NULL},
  {"sexpr-iterate->loc", NULL},
  {"sexpr-unwind-protect-protected-form", NULL},
  {"sexpr-text-of-quotation", NULL},
  {"$sexpr-unwind-protect-tag", NULL},
  {"sexpr-fab-setter", NULL},
  {"sexpr-make-begin", NULL},
  {"sexpr-unquote?", NULL},
  {"sexpr-prop-type", NULL},
  {"sexpr-assignment-value", NULL},
  {"$sexpr-iterate-tag", NULL},
  {"sexpr-if-test", NULL},
  {"sexpr-make-anonymous-method", NULL},
  {"sexpr-syntax-if-then", NULL},
  {"sexpr-loc-bound-bodies", NULL},
  {"$sexpr-isa-tag", NULL},
  {"sexpr-function-definition-variable", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSsyntax;
MODULE_INFO module_info_evalSsyntax = {
  "eval/syntax",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooScolsSlst (void);

/* EXPRESSION: */

extern void load_module_evalSsyntax (void);

void load_module_evalSsyntax (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooScolsSlst();

  (P)YevalSsyntaxY___main_0___();
  (P)YevalSsyntaxY___main_1___();
  (P)YevalSsyntaxY___main_2___();

}

/* END OF GENERATED CODE. */
