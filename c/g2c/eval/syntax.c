/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/syntax");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/syntax */

EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooScolsSlstYLlineG,"goo/cols/lst","<line>");
DEF(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSsyntaxYsexpr_isaQ,"eval/syntax","sexpr-isa?");
DEF(YevalSsyntaxYTbq_listTT,"eval/syntax","*bq-list**");
DEF(YevalSsyntaxYsexpr_build_backquote_expander,"eval/syntax","sexpr-build-backquote-expander");
DEF(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
DEF(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSsyntaxYsexpr_let_body,"eval/syntax","sexpr-let-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Ynul,"goo/boot","nul");
EXT(Ynil,"goo/boot","nil");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Ytail_setter,"goo/boot","tail-setter");
DEF(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalSsyntaxYsexpr_iterate_signature,"eval/syntax","sexpr-iterate-signature");
DEF(YevalSsyntaxYsexpr_definitionQ,"eval/syntax","sexpr-definition?");
DEF(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsSlstYLline_listG,"goo/cols/lst","<line-list>");
DEF(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
DEF(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
DEF(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
DEF(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
DEF(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
DEF(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
DEF(YevalSsyntaxYsexpr_function_value,"eval/syntax","sexpr-function-value");
DEF(YevalSsyntaxYsexpr_beginQ,"eval/syntax","sexpr-begin?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
DEF(YevalSsyntaxYsexpr_macroQ,"eval/syntax","sexpr-macro?");
DEF(YevalSsyntaxYsexpr_value_type,"eval/syntax","sexpr-value-type");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yerror,"goo/boot","error");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
DEF(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
DEF(YevalSsyntaxYTbq_clobberableT,"eval/syntax","*bq-clobberable*");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yfun_src,"goo/boot","fun-src");
DEF(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
DEF(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
DEF(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
DEF(YevalSsyntaxYTbq_appendT,"eval/syntax","*bq-append*");
EXT(YgooScolsSlstYline_list_of,"goo/cols/lst","line-list-of");
DEF(YevalSsyntaxYsexpr_rest_exps,"eval/syntax","sexpr-rest-exps");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLnumG,"goo/boot","<num>");
DEF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
DEF(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
DEF(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
DEF(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
DEF(YevalSsyntaxYsexpr_blockQ,"eval/syntax","sexpr-block?");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmacrosYdo,"goo/macros","do");
DEF(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
DEF(YevalSsyntaxYsexpr_let_values,"eval/syntax","sexpr-let-values");
EXT(YOisaQ,"goo/boot","@isa?");
DEF(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
DEF(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSioSportYopen,"goo/io/port","open");
DEF(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsSlstYline_of,"goo/cols/lst","line-of");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathYK,"goo/math","|");
DEF(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
DEF(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
DEF(YevalSsyntaxYTcomma_atsignT,"eval/syntax","*comma-atsign*");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSlstYline_list,"goo/cols/lst","line-list");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYE,"goo/math","=");
EXT(Ygen_refs,"goo/boot","gen-refs");
DEF(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
DEF(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSsyntaxYsexpr_monitor_body,"eval/syntax","sexpr-monitor-body");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalSsyntaxYsexpr_syntax_definitionQ,"eval/syntax","sexpr-syntax-definition?");
DEF(YevalSsyntaxYsexpr_generic_definitionQ,"eval/syntax","sexpr-generic-definition?");
DEF(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
DEF(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSsyntaxYbracket,"eval/syntax","bracket");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
DEF(YevalSsyntaxYsexpr_backquoteQ,"eval/syntax","sexpr-backquote?");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYceilS,"goo/math","ceil/");
DEF(YevalSsyntaxYfind_option,"eval/syntax","find-option");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalSsyntaxYsexpr_iterate_name,"eval/syntax","sexpr-iterate-name");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
DEF(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
DEF(YevalSsyntaxYTbq_listT,"eval/syntax","*bq-list*");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
DEF(YevalSsyntaxYsexpr_rest_operands,"eval/syntax","sexpr-rest-operands");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YLrepG,"goo/boot","<rep>");
DEF(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalSsyntaxYsexpr_propQ,"eval/syntax","sexpr-prop?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YPsnul,"goo/boot","%snul");
EXT(YPtnul,"goo/boot","%tnul");
DEF(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooScolsSlstYline_pair,"goo/cols/lst","line-pair");
EXT(YLlocG,"goo/boot","<loc>");
DEF(YevalSsyntaxYsexpr_function_parameters,"eval/syntax","sexpr-function-parameters");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSsyntaxYTunique_name_counterT,"eval/syntax","*unique-name-counter*");
DEF(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
DEF(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ynot,"goo/boot","not");
DEF(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
DEF(YevalSsyntaxYsexpr_pattern_variableQ,"eval/syntax","sexpr-pattern-variable?");
EXT(YPprop,"goo/boot","%prop");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
DEF(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(Yfun_val,"goo/boot","fun-val");
DEF(YevalSsyntaxYsexpr_method_definitionQ,"eval/syntax","sexpr-method-definition?");
DEF(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
DEF(YevalSsyntaxYsexpr_applicationQ,"eval/syntax","sexpr-application?");
DEF(YevalSsyntaxYsexpr_iterate_body,"eval/syntax","sexpr-iterate-body");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
DEF(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYround,"goo/math","round");
DEF(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooSmathYS,"goo/math","/");
EXT(YLsubclassG,"goo/boot","<subclass>");
DEF(YevalSsyntaxYsexpr_iterateQ,"eval/syntax","sexpr-iterate?");
DEF(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(Ynew,"goo/boot","new");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
DEF(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(YevalSsyntaxYsexpr_methodQ,"eval/syntax","sexpr-method?");
EXT(YgooSmathYN,"goo/math","~");
DEF(YevalSsyntaxYTbq_quoteT,"eval/syntax","*bq-quote*");
DEF(YevalSsyntaxYas_signature,"eval/syntax","as-signature");
DEF(YevalSsyntaxYsexpr_monitor_test,"eval/syntax","sexpr-monitor-test");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsingletonG,"goo/boot","<singleton>");
DEF(YevalSsyntaxYsexpr_unwind_protectQ,"eval/syntax","sexpr-unwind-protect?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
DEF(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YgooSmathYdiv,"goo/math","div");
DEF(YevalSsyntaxYsexpr_ifQ,"eval/syntax","sexpr-if?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
DEF(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSsyntaxYsexpr_let_bound_variables,"eval/syntax","sexpr-let-bound-variables");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
DEF(YevalSsyntaxYsexpr_begin_actions,"eval/syntax","sexpr-begin-actions");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
DEF(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
DEF(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YPrnul,"goo/boot","%rnul");
DEF(YevalSsyntaxYsexpr_self_evaluatingQ,"eval/syntax","sexpr-self-evaluating?");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
DEF(YevalSsyntaxYsexpr_last_expQ,"eval/syntax","sexpr-last-exp?");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
DEF(YevalSsyntaxYDsexpr_values_tag,"eval/syntax","$sexpr-values-tag");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YevalSsyntaxYsexpr_function_definitionQ,"eval/syntax","sexpr-function-definition?");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooStypesYas,"goo/types","as");
DEF(YevalSsyntaxYsexpr_method_parameters,"eval/syntax","sexpr-method-parameters");
DEF(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
DEF(YevalSsyntaxYLnameG,"eval/syntax","<name>");
DEF(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
DEF(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
DEF(YevalSsyntaxYsexpr_make_syntax_if,"eval/syntax","sexpr-make-syntax-if");
DEF(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(Yfun_arity,"goo/boot","fun-arity");
DEF(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ylst,"goo/boot","lst");
DEF(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
DEF(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
DEF(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
DEF(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSsyntaxYsexpr_unique_name,"eval/syntax","sexpr-unique-name");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YLoptsG,"goo/boot","<opts>");
DEF(YevalSsyntaxYsexpr_quotedQ,"eval/syntax","sexpr-quoted?");
DEF(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
DEF(YevalSsyntaxYmap_tree,"eval/syntax","map-tree");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
DEF(YevalSsyntaxYsexpr_syntax_ifQ,"eval/syntax","sexpr-syntax-if?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
DEF(YevalSsyntaxYsexpr_pattern_variable_name,"eval/syntax","sexpr-pattern-variable-name");
DEF(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSmacrosYlast,"goo/macros","last");
DEF(YevalSsyntaxYsexpr_atomQ,"eval/syntax","sexpr-atom?");
DEF(YevalSsyntaxYnreconc,"eval/syntax","nreconc");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYput,"goo/io/port","put");
DEF(YevalSsyntaxYTbq_nconcT,"eval/syntax","*bq-nconc*");
DEF(YevalSsyntaxYsexpr_iterate_inits,"eval/syntax","sexpr-iterate-inits");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
DEF(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
DEF(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
DEF(YevalSsyntaxYsexpr_locQ,"eval/syntax","sexpr-loc?");
EXT(YgooSmathYT,"goo/math","*");
DEF(YevalSsyntaxYsexpr_loc_body,"eval/syntax","sexpr-loc-body");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(Ysym_name,"goo/boot","sym-name");
DEF(YevalSsyntaxYsexpr_letQ,"eval/syntax","sexpr-let?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
DEF(YevalSsyntaxYsexpr_first_operand,"eval/syntax","sexpr-first-operand");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YPdefine_method,"goo/boot","%define-method");
DEF(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
DEF(YevalSsyntaxYsexpr_let_namesAvalues,"eval/syntax","sexpr-let-names+values");
EXT(Yclone,"goo/boot","clone");
DEF(YevalSsyntaxYbq_process,"eval/syntax","bq-process");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DEF(YevalSsyntaxYsexpr_monitor_info,"eval/syntax","sexpr-monitor-info");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLclassG,"goo/boot","<class>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
DEF(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
DEF(YevalSsyntaxYsexpr_first_exp,"eval/syntax","sexpr-first-exp");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSsyntaxYsexpr_method_value,"eval/syntax","sexpr-method-value");
DEF(YevalSsyntaxYsexpr_make_quote,"eval/syntax","sexpr-make-quote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
DEF(YevalSsyntaxYsexpr_macro_expandQ,"eval/syntax","sexpr-macro-expand?");
EXT(YtT,"goo/boot","t*");
DEF(YevalSsyntaxYsexpr_monitorQ,"eval/syntax","sexpr-monitor?");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
DEF(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
DEF(YevalSsyntaxYsexpr_new_unique_name_counterX,"eval/syntax","sexpr-new-unique-name-counter!");
DEF(YevalSsyntaxYsexpr_make_if,"eval/syntax","sexpr-make-if");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
DEF(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYcos,"goo/math","cos");
DEF(YevalSsyntaxYsexpr_monitor_type,"eval/syntax","sexpr-monitor-type");
EXT(YLtypeG,"goo/boot","<type>");
DEF(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
DEF(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
DEF(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
DEF(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSsyntaxYsexpr_tagged_listQ,"eval/syntax","sexpr-tagged-list?");
EXT(YLgenG,"goo/boot","<gen>");
DEF(YevalSsyntaxYsexpr_assignmentQ,"eval/syntax","sexpr-assignment?");
EXT(Yclass_children,"goo/boot","class-children");
DEF(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
DEF(YevalSsyntaxYsexpr_no_operandsQ,"eval/syntax","sexpr-no-operands?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
DEF(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSsyntaxYbq_remove_tokens,"eval/syntax","bq-remove-tokens");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSsyntaxYDsexpr_macro_tag,"eval/syntax","$sexpr-macro-tag");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_77);
DEFLIT(lit_96);
DEFLIT(lit_54);
DEFLIT(lit_139);
DEFLIT(lit_263);
DEFLIT(lit_322);
DEFLIT(lit_177);
DEFLIT(lit_244);
DEFLIT(lit_228);
DEFLIT(lit_306);
DEFLIT(lit_121);
DEFLIT(lit_254);
DEFLIT(lit_103);
DEFLIT(lit_85);
DEFLIT(lit_240);
DEFLIT(lit_80);
DEFLIT(lit_19);
DEFLIT(lit_359);
DEFLIT(lit_51);
DEFLIT(lit_142);
DEFLIT(lit_335);
DEFLIT(lit_325);
DEFLIT(lit_151);
DEFLIT(lit_311);
DEFLIT(lit_55);
DEFLIT(lit_363);
DEFLIT(lit_30);
DEFLIT(lit_7);
DEFLIT(lit_227);
DEFLIT(lit_358);
DEFLIT(lit_283);
DEFLIT(lit_22);
DEFLIT(lit_243);
DEFLIT(lit_220);
DEFLIT(lit_258);
DEFLIT(lit_91);
DEFLIT(lit_298);
DEFLIT(lit_204);
DEFLIT(lit_252);
DEFLIT(lit_299);
DEFLIT(lit_28);
DEFLIT(lit_235);
DEFLIT(lit_234);
DEFLIT(lit_337);
DEFLIT(lit_214);
DEFLIT(lit_278);
DEFLIT(lit_262);
DEFLIT(lit_289);
DEFLIT(lit_135);
DEFLIT(lit_201);
DEFLIT(lit_39);
DEFLIT(lit_271);
DEFLIT(lit_110);
DEFLIT(lit_329);
DEFLIT(lit_226);
DEFLIT(lit_321);
DEFLIT(lit_86);
DEFLIT(lit_369);
DEFLIT(lit_247);
DEFLIT(lit_292);
DEFLIT(lit_320);
DEFLIT(lit_259);
DEFLIT(lit_43);
DEFLIT(lit_237);
DEFLIT(lit_251);
DEFLIT(lit_367);
DEFLIT(lit_53);
DEFLIT(lit_75);
DEFLIT(lit_40);
DEFLIT(lit_148);
DEFLIT(lit_24);
DEFLIT(lit_49);
DEFLIT(lit_185);
DEFLIT(lit_270);
DEFLIT(lit_304);
DEFLIT(lit_61);
DEFLIT(lit_137);
DEFLIT(lit_69);
DEFLIT(lit_371);
DEFLIT(lit_273);
DEFLIT(lit_233);
DEFLIT(lit_196);
DEFLIT(lit_339);
DEFLIT(lit_168);
DEFLIT(lit_331);
DEFLIT(lit_38);
DEFLIT(lit_52);
DEFLIT(lit_193);
DEFLIT(lit_221);
DEFLIT(lit_345);
DEFLIT(lit_182);
DEFLIT(lit_119);
DEFLIT(lit_81);
DEFLIT(lit_332);
DEFLIT(lit_101);
DEFLIT(lit_319);
DEFLIT(lit_225);
DEFLIT(lit_57);
DEFLIT(lit_170);
DEFLIT(lit_45);
DEFLIT(lit_12);
DEFLIT(lit_357);
DEFLIT(lit_184);
DEFLIT(lit_372);
DEFLIT(lit_129);
DEFLIT(lit_68);
DEFLIT(lit_242);
DEFLIT(lit_146);
DEFLIT(lit_176);
DEFLIT(lit_108);
DEFLIT(lit_253);
DEFLIT(lit_216);
DEFLIT(lit_212);
DEFLIT(lit_162);
DEFLIT(lit_368);
DEFLIT(lit_198);
DEFLIT(lit_74);
DEFLIT(lit_241);
DEFLIT(lit_260);
DEFLIT(lit_180);
DEFLIT(lit_223);
DEFLIT(lit_202);
DEFLIT(lit_190);
DEFLIT(lit_208);
DEFLIT(lit_73);
DEFLIT(lit_48);
DEFLIT(lit_348);
DEFLIT(lit_132);
DEFLIT(lit_34);
DEFLIT(lit_308);
DEFLIT(lit_172);
DEFLIT(lit_301);
DEFLIT(lit_144);
DEFLIT(lit_194);
DEFLIT(lit_269);
DEFLIT(lit_166);
DEFLIT(lit_281);
DEFLIT(lit_373);
DEFLIT(lit_318);
DEFLIT(lit_290);
DEFLIT(lit_174);
DEFLIT(lit_256);
DEFLIT(lit_104);
DEFLIT(lit_37);
DEFLIT(lit_63);
DEFLIT(lit_23);
DEFLIT(lit_4);
DEFLIT(lit_164);
DEFLIT(lit_25);
DEFLIT(lit_32);
DEFLIT(lit_50);
DEFLIT(lit_107);
DEFLIT(lit_362);
DEFLIT(lit_183);
DEFLIT(lit_343);
DEFLIT(lit_102);
DEFLIT(lit_300);
DEFLIT(lit_83);
DEFLIT(lit_93);
DEFLIT(lit_330);
DEFLIT(lit_60);
DEFLIT(lit_14);
DEFLIT(lit_350);
DEFLIT(lit_250);
DEFLIT(lit_268);
DEFLIT(lit_366);
DEFLIT(lit_246);
DEFLIT(lit_249);
DEFLIT(lit_17);
DEFLIT(lit_222);
DEFLIT(lit_8);
DEFLIT(lit_46);
DEFLIT(lit_149);
DEFLIT(lit_92);
DEFLIT(lit_126);
DEFLIT(lit_6);
DEFLIT(lit_210);
DEFLIT(lit_36);
DEFLIT(lit_173);
DEFLIT(lit_147);
DEFLIT(lit_145);
DEFLIT(lit_141);
DEFLIT(lit_279);
DEFLIT(lit_117);
DEFLIT(lit_27);
DEFLIT(lit_99);
DEFLIT(lit_78);
DEFLIT(lit_286);
DEFLIT(lit_200);
DEFLIT(lit_157);
DEFLIT(lit_266);
DEFLIT(lit_140);
DEFLIT(lit_71);
DEFLIT(lit_317);
DEFLIT(lit_346);
DEFLIT(lit_264);
DEFLIT(lit_215);
DEFLIT(lit_155);
DEFLIT(lit_284);
DEFLIT(lit_275);
DEFLIT(lit_161);
DEFLIT(lit_15);
DEFLIT(lit_334);
DEFLIT(lit_2);
DEFLIT(lit_33);
DEFLIT(lit_47);
DEFLIT(lit_62);
DEFLIT(lit_238);
DEFLIT(lit_165);
DEFLIT(lit_181);
DEFLIT(lit_316);
DEFLIT(lit_352);
DEFLIT(lit_267);
DEFLIT(lit_327);
DEFLIT(lit_205);
DEFLIT(lit_277);
DEFLIT(lit_288);
DEFLIT(lit_109);
DEFLIT(lit_199);
DEFLIT(lit_248);
DEFLIT(lit_229);
DEFLIT(lit_344);
DEFLIT(lit_167);
DEFLIT(lit_296);
DEFLIT(lit_127);
DEFLIT(lit_231);
DEFLIT(lit_282);
DEFLIT(lit_154);
DEFLIT(lit_178);
DEFLIT(lit_100);
DEFLIT(lit_87);
DEFLIT(lit_153);
DEFLIT(lit_131);
DEFLIT(lit_82);
DEFLIT(lit_160);
DEFLIT(lit_76);
DEFLIT(lit_115);
DEFLIT(lit_230);
DEFLIT(lit_347);
DEFLIT(lit_42);
DEFLIT(lit_90);
DEFLIT(lit_97);
DEFLIT(lit_257);
DEFLIT(lit_297);
DEFLIT(lit_156);
DEFLIT(lit_356);
DEFLIT(lit_353);
DEFLIT(lit_35);
DEFLIT(lit_118);
DEFLIT(lit_239);
DEFLIT(lit_209);
DEFLIT(lit_138);
DEFLIT(lit_20);
DEFLIT(lit_315);
DEFLIT(lit_128);
DEFLIT(lit_111);
DEFLIT(lit_189);
DEFLIT(lit_0);
DEFLIT(lit_163);
DEFLIT(lit_171);
DEFLIT(lit_192);
DEFLIT(lit_44);
DEFLIT(lit_364);
DEFLIT(lit_276);
DEFLIT(lit_219);
DEFLIT(lit_11);
DEFLIT(lit_79);
DEFLIT(lit_310);
DEFLIT(lit_120);
DEFLIT(lit_124);
DEFLIT(lit_342);
DEFLIT(lit_113);
DEFLIT(lit_21);
DEFLIT(lit_158);
DEFLIT(lit_106);
DEFLIT(lit_224);
DEFLIT(lit_295);
DEFLIT(lit_72);
DEFLIT(lit_349);
DEFLIT(lit_56);
DEFLIT(lit_336);
DEFLIT(lit_333);
DEFLIT(lit_324);
DEFLIT(lit_125);
DEFLIT(lit_197);
DEFLIT(lit_326);
DEFLIT(lit_105);
DEFLIT(lit_29);
DEFLIT(lit_169);
DEFLIT(lit_95);
DEFLIT(lit_361);
DEFLIT(lit_114);
DEFLIT(lit_354);
DEFLIT(lit_314);
DEFLIT(lit_217);
DEFLIT(lit_130);
DEFLIT(lit_116);
DEFLIT(lit_355);
DEFLIT(lit_365);
DEFLIT(lit_303);
DEFLIT(lit_312);
DEFLIT(lit_360);
DEFLIT(lit_26);
DEFLIT(lit_213);
DEFLIT(lit_302);
DEFLIT(lit_265);
DEFLIT(lit_218);
DEFLIT(lit_232);
DEFLIT(lit_133);
DEFLIT(lit_351);
DEFLIT(lit_287);
DEFLIT(lit_323);
DEFLIT(lit_203);
DEFLIT(lit_3);
DEFLIT(lit_285);
DEFLIT(lit_291);
DEFLIT(lit_236);
DEFLIT(lit_245);
DEFLIT(lit_98);
DEFLIT(lit_255);
DEFLIT(lit_206);
DEFLIT(lit_136);
DEFLIT(lit_261);
DEFLIT(lit_207);
DEFLIT(lit_89);
DEFLIT(lit_191);
DEFLIT(lit_150);
DEFLIT(lit_59);
DEFLIT(lit_341);
DEFLIT(lit_305);
DEFLIT(lit_64);
DEFLIT(lit_134);
DEFLIT(lit_41);
DEFLIT(lit_1);
DEFLIT(lit_274);
DEFLIT(lit_370);
DEFLIT(lit_175);
DEFLIT(lit_66);
DEFLIT(lit_179);
DEFLIT(lit_88);
DEFLIT(lit_9);
DEFLIT(lit_294);
DEFLIT(lit_307);
DEFLIT(lit_67);
DEFLIT(lit_122);
DEFLIT(lit_195);
DEFLIT(lit_112);
DEFLIT(lit_70);
DEFLIT(lit_313);
DEFLIT(lit_309);
DEFLIT(lit_328);
DEFLIT(lit_58);
DEFLIT(lit_31);
DEFLIT(lit_272);
DEFLIT(lit_84);
DEFLIT(lit_188);
DEFLIT(lit_293);
DEFLIT(lit_143);
DEFLIT(lit_94);
DEFLIT(lit_5);
DEFLIT(lit_280);
DEFLIT(lit_159);
DEFLIT(lit_16);
DEFLIT(lit_18);
DEFLIT(lit_187);
DEFLIT(lit_123);
DEFLIT(lit_340);
DEFLIT(lit_338);
DEFLIT(lit_10);
DEFLIT(lit_65);
DEFLIT(lit_186);
DEFLIT(lit_13);
DEFLIT(lit_211);
DEFLIT(lit_152);

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
LOCFOR(fun_x_1423_54);
LOCFOR(fun_55);
LOCFOR(fun_sexpr_monitor_expand_56);
FUNFOR(YevalSsyntaxYfind_option);
LOCFOR(fun_x_1425_58);
LOCFOR(fun_59);
LOCFOR(fun_sexpr_monitor_type_60);
LOCFOR(fun_x_1427_61);
LOCFOR(fun_62);
LOCFOR(fun_x_1429_63);
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
  P tmpF2534;
  P tmpF2533;
  P tmpF2532;
  P tmpF2531;
  P tmpF2530;
  P tmpF2529;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLnumG));
  tmpF2529 = T1;
  if (tmpF2529 != YPfalse) {
    T2 = tmpF2529;
  } else {
    T4 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLchrG));
    tmpF2530 = T4;
    if (tmpF2530 != YPfalse) {
      T5 = tmpF2530;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPtrue);
      tmpF2531 = T7;
      if (tmpF2531 != YPfalse) {
        T8 = tmpF2531;
      } else {
        T10 = CALL2(1,VARREF(YgooSmacrosYEE),exp_,YPfalse);
        tmpF2532 = T10;
        if (tmpF2532 != YPfalse) {
          T11 = tmpF2532;
        } else {
          T13 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLstrG));
          tmpF2533 = T13;
          if (tmpF2533 != YPfalse) {
            T14 = tmpF2533;
          } else {
            T16 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YgooScolsSvecYLvecG));
            tmpF2534 = T16;
            if (tmpF2534 != YPfalse) {
              T17 = tmpF2534;
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
  P tmpF2535;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(tag_, 1);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2535 = T1;
  if (tmpF2535 != YPfalse) {
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
  P varF2536;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2536 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2536,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Yhead),varF2536);
    T2 = T4;
  } else {
    T2 = varF2536;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_function_definition_adjectives_23) {
  P defn_;
  P varF2537;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(defn_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosY2nd),defn_);
  varF2537 = T1;
  T3 = CALL2(1,VARREF(YisaQ),varF2537,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T4 = CALL1(1,VARREF(Ytail),varF2537);
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
  P values_spec_indexF2538;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2538 = T1;
  if (values_spec_indexF2538 != YPfalse) {
    T3 = CALL3(1,VARREF(YgooScolsSseqYsub),signature_,YPint((P)0),values_spec_indexF2538);
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
  P valueF2541;
  P tmpF2540;
  P values_spec_indexF2539;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(signature_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooScolsSseqYpos),signature_,LITREF(lit_60));
  values_spec_indexF2539 = T1;
  tmpF2540 = values_spec_indexF2539;
  if (tmpF2540 != YPfalse) {
    T6 = CALL2(1,VARREF(YgooSmathYA),values_spec_indexF2539,YPint((P)1));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),signature_,T6);
    valueF2541 = T5;
    T8 = CALL2(1,VARREF(YevalSsyntaxYsexpr_tagged_listQ),valueF2541,LITREF(lit_66));
    if (T8 != YPfalse) {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
      T12 = CALL1(1,VARREF(Ytail),valueF2541);
      T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSsyntaxYsexpr_value_type),T12);
      T9 = CALL3(1,VARREF(YgooSmacrosYcat),T10,T11,LITREF(lit_68));
      T7 = T9;
    } else {
      T7 = valueF2541;
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

FUNCODEDEF(fun_x_1423_54) {
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
  P optionsF2553;
  P x_1422F2552;
  P x_1422F2551;
  P x_1422F2550;
  P x_1422F2549;
  P x_1422F2548;
  P x_1422F2547;
  P bodyF2546;
  P handlerF2545;
  P optionsF2544;
  P x_1422F2543;
  P x_1423F2542;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1423_54,2);
  x_1423F2542 = T1;
  FUNINIT(x_1423F2542, 2,FREEREF(0),return_);
  x_1422F2543 = FREEREF(0);
  optionsF2544 = YPfalse;
  optionsF2544 = BOXFAB(optionsF2544);
  handlerF2545 = YPfalse;
  handlerF2545 = BOXFAB(handlerF2545);
  bodyF2546 = YPfalse;
  bodyF2546 = BOXFAB(bodyF2546);
  T9 = CALL2(1,VARREF(YisaQ),x_1422F2543,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1422F2543,LITREF(lit_121),x_1423F2542);
    x_1422F2547 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1422F2547,x_1423F2542);
    BOXVAL(optionsF2544) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1422F2547);
    x_1422F2548 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1422F2548,x_1423F2542);
    BOXVAL(handlerF2545) = T16;
    T17 = CALL1(1,VARREF(Ytail),x_1422F2548);
    x_1422F2549 = T17;
    BOXVAL(bodyF2546) = x_1422F2549;
    x_1422F2550 = Ynil;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1422F2550,x_1423F2542);
    x_1422F2551 = T20;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1422F2551,x_1423F2542);
    T22 = CALL1(1,VARREF(Ytail),x_1422F2550);
    x_1422F2552 = T22;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1422F2552,x_1423F2542);
    T19 = T23;
    T18 = T19;
    T15 = T18;
    T12 = T15;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1423F2542,LITREF(lit_130),x_1422F2543);
  }
  T28 = BOXVAL(optionsF2544);
  T27 = CALL2(1,VARREF(YisaQ),T28,VARREF(YLsymG));
  if (T27 != YPfalse) {
    T32 = CALL1(1,VARREF(Ylst),LITREF(lit_131));
    T34 = BOXVAL(optionsF2544);
    T33 = CALL1(1,VARREF(Ylst),T34);
    T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_68));
    T30 = CALL1(1,VARREF(Ylst),T31);
    T29 = CALL2(1,VARREF(YgooSmacrosYcat),T30,LITREF(lit_68));
    T26 = T29;
  } else {
    T35 = BOXVAL(optionsF2544);
    T26 = T35;
  }
  optionsF2553 = T26;
  T37 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_type),optionsF2553);
  T38 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_info),optionsF2553);
  T39 = CALL1(1,VARREF(YevalSsyntaxYsexpr_monitor_test),optionsF2553);
  T40 = BOXVAL(handlerF2545);
  T42 = BOXVAL(bodyF2546);
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

FUNCODEDEF(fun_x_1425_58) {
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
  P x_1424F2559;
  P x_1424F2558;
  P x_1424F2557;
  P typeF2556;
  P x_1424F2555;
  P x_1425F2554;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1425_58,2);
  x_1425F2554 = T1;
  FUNINIT(x_1425F2554, 2,FREEREF(0),return_);
  x_1424F2555 = FREEREF(0);
  typeF2556 = YPfalse;
  typeF2556 = BOXFAB(typeF2556);
  T5 = CALL2(1,VARREF(YisaQ),x_1424F2555,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1424F2555,x_1425F2554);
    BOXVAL(typeF2556) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1424F2555);
    x_1424F2557 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1424F2557,x_1425F2554);
    x_1424F2558 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2558,x_1425F2554);
    T12 = CALL1(1,VARREF(Ytail),x_1424F2557);
    x_1424F2559 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1424F2559,x_1425F2554);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1425F2554,LITREF(lit_130),x_1424F2555);
  }
  T15 = BOXVAL(typeF2556);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_monitor_type_60) {
  P options_;
  P type_listF2560;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_131),LITREF(lit_136));
  type_listF2560 = T1;
  T3 = FUNFAB(fun_59,1,type_listF2560);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1427_61) {
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
  P x_1426F2566;
  P x_1426F2565;
  P x_1426F2564;
  P info_exprF2563;
  P x_1426F2562;
  P x_1427F2561;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1427_61,2);
  x_1427F2561 = T1;
  FUNINIT(x_1427F2561, 2,FREEREF(0),return_);
  x_1426F2562 = FREEREF(0);
  info_exprF2563 = YPfalse;
  info_exprF2563 = BOXFAB(info_exprF2563);
  T5 = CALL2(1,VARREF(YisaQ),x_1426F2562,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1426F2562,x_1427F2561);
    BOXVAL(info_exprF2563) = T7;
    T8 = CALL1(1,VARREF(Ytail),x_1426F2562);
    x_1426F2564 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1426F2564,x_1427F2561);
    x_1426F2565 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2565,x_1427F2561);
    T12 = CALL1(1,VARREF(Ytail),x_1426F2564);
    x_1426F2566 = T12;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1426F2566,x_1427F2561);
    T9 = T13;
    T6 = T9;
  } else {
    T14 = CALL2(1,x_1427F2561,LITREF(lit_130),x_1426F2562);
  }
  T15 = BOXVAL(info_exprF2563);
  T3 = T15;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1429_63) {
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
  P x_1428F2574;
  P x_1428F2573;
  P x_1428F2572;
  P x_1428F2571;
  P argumentsF2570;
  P messageF2569;
  P x_1428F2568;
  P x_1429F2567;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1429_63,2);
  x_1429F2567 = T1;
  FUNINIT(x_1429F2567, 2,FREEREF(0),return_);
  x_1428F2568 = FREEREF(0);
  messageF2569 = YPfalse;
  messageF2569 = BOXFAB(messageF2569);
  argumentsF2570 = YPfalse;
  argumentsF2570 = BOXFAB(argumentsF2570);
  T7 = CALL2(1,VARREF(YisaQ),x_1428F2568,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1428F2568,x_1429F2567);
    BOXVAL(messageF2569) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1428F2568);
    x_1428F2571 = T10;
    BOXVAL(argumentsF2570) = x_1428F2571;
    x_1428F2572 = Ynil;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1428F2572,x_1429F2567);
    x_1428F2573 = T13;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1428F2573,x_1429F2567);
    T15 = CALL1(1,VARREF(Ytail),x_1428F2572);
    x_1428F2574 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1428F2574,x_1429F2567);
    T12 = T16;
    T11 = T12;
    T8 = T11;
  } else {
    T17 = CALL2(1,x_1429F2567,LITREF(lit_130),x_1428F2568);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_154));
  T20 = CALL1(1,VARREF(Ylst),LITREF(lit_155));
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_156));
  T23 = BOXVAL(messageF2569);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_157));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_158));
  T28 = BOXVAL(argumentsF2570);
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
  P tmpF2577;
  P descriptionF2576;
  P infoF2575;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_143),YPfalse);
  infoF2575 = T1;
  T3 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_144),YPfalse);
  descriptionF2576 = T3;
  tmpF2577 = infoF2575;
  if (tmpF2577 != YPfalse) {
    T6 = descriptionF2576;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  if (T5 != YPfalse) {
    T7 = CALL2(1,VARREF(Ysyntax_error),LITREF(lit_145),options_);
    T4 = T7;
  } else {
    if (infoF2575 != YPfalse) {
      T10 = FUNFAB(fun_62,1,infoF2575);
      T9 = with_exit(T10);
      T8 = T9;
    } else {
      if (descriptionF2576 != YPfalse) {
        T13 = FUNFAB(fun_64,1,descriptionF2576);
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
  P test_bodyF2578;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(options_, 0);
loop:
  T1 = CALL3(1,VARREF(YevalSsyntaxYfind_option),options_,LITREF(lit_162),LITREF(lit_163));
  test_bodyF2578 = T1;
  T2 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),Ynil,test_bodyF2578);
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
  P tmpF2579;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),exp_,VARREF(YLlstG));
  tmpF2579 = T1;
  if (tmpF2579 != YPfalse) {
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
  P tmpF2581;
  P nameF2580;
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
    nameF2580 = T4;
    T7 = CALL2(1,VARREF(YisaQ),nameF2580,VARREF(YLlstG));
    tmpF2581 = T7;
    if (tmpF2581 != YPfalse) {
      T11 = CALL1(1,VARREF(Ytail),nameF2580);
      T10 = CALL1(1,VARREF(Yhead),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),T10,LITREF(lit_224));
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    if (T6 != YPfalse) {
      T15 = CALL1(1,VARREF(Yhead),nameF2580);
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
      T22 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2580,rtnames_);
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
  P rtvaluesF2589;
  P rtnamesF2588;
  P tup27F2587;
  P innerF2586;
  P tupnameF2585;
  P tmpF2584;
  P valueF2583;
  P nameF2582;
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
    nameF2582 = T6;
    T8 = CALL1(1,VARREF(Yhead),vals_);
    valueF2583 = T8;
    T11 = CALL2(1,VARREF(YisaQ),nameF2582,VARREF(YLlstG));
    tmpF2584 = T11;
    if (tmpF2584 != YPfalse) {
      T14 = CALL1(1,VARREF(Yhead),nameF2582);
      T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,LITREF(lit_66));
      T12 = T13;
    } else {
      T12 = YPfalse;
    }
    T10 = T12;
    if (T10 != YPfalse) {
      T16 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unique_name),LITREF(lit_221));
      tupnameF2585 = T16;
      T19 = FUNSHELL(1,fun_inner_93,2);
      innerF2586 = T19;
      FUNINIT(innerF2586, 2,tupnameF2585,innerF2586);
      T21 = CALL1(1,VARREF(Ylst),tupnameF2585);
      T22 = CALL1(1,VARREF(Ylst),valueF2583);
      T23 = CALL1(1,VARREF(Ytail),nameF2582);
      T20 = CALL4(0,innerF2586,T21,T22,YPint((P)0),T23);
      T18 = T20;
      tup27F2587 = T18;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2587,YPint((P)0));
      rtnamesF2588 = T25;
      T27 = CALL2(1,VARREF(YgooSmacrosYelt),tup27F2587,YPint((P)1));
      rtvaluesF2589 = T27;
      T29 = CALL2(1,VARREF(YgooSmacrosYcat),rtnamesF2588,rnames_);
      T30 = CALL2(1,VARREF(YgooSmacrosYcat),rtvaluesF2589,rvalues_);
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
      T34 = CALL2(1,VARREF(YgooSmacrosYpair),nameF2582,rnames_);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),valueF2583,rvalues_);
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
  P loopF2590;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(names_, 0);
  ARG(vals_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_94,1);
  loopF2590 = T1;
  FUNINIT(loopF2590, 1,loopF2590);
  T2 = CALL4(0,loopF2590,Ynil,Ynil,names_,vals_);
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
  P colF2597;
  P valuesF2596;
  P namesF2595;
  P tup28F2594;
  P bodyF2593;
  P ovaluesF2592;
  P onamesF2591;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(let_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_bound_variables),let_exp_);
  onamesF2591 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_values),let_exp_);
  ovaluesF2592 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_let_body),let_exp_);
  bodyF2593 = T5;
  T7 = CALL2(1,VARREF(YevalSsyntaxYsexpr_let_namesAvalues),onamesF2591,ovaluesF2592);
  tup28F2594 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2594,YPint((P)0));
  namesF2595 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYelt),tup28F2594,YPint((P)1));
  valuesF2596 = T11;
  T13 = FUNSHELL(1,fun_col_96,2);
  colF2597 = T13;
  FUNINIT(colF2597, 2,bodyF2593,colF2597);
  T14 = CALL2(0,colF2597,namesF2595,valuesF2596);
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
  P sigF2598;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqY3rd),rep_exp_);
  sigF2598 = T1;
  T4 = fun_107;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_parameters),sigF2598);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2598);
  if (T7 != YPfalse) {
    T6 = Ynil;
  } else {
    T8 = CALL1(1,VARREF(Ylst),VARREF(YevalSsyntaxYDsexpr_values_tag));
    T6 = T8;
  }
  T10 = CALL1(1,VARREF(YevalSsyntaxYsexpr_signature_value),sigF2598);
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
  P initsF2602;
  P bodyF2601;
  P sigF2600;
  P nameF2599;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(rep_exp_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_name),rep_exp_);
  nameF2599 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_signature),rep_exp_);
  sigF2600 = T3;
  T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_body),rep_exp_);
  bodyF2601 = T5;
  T7 = CALL1(1,VARREF(YevalSsyntaxYsexpr_iterate_inits),rep_exp_);
  initsF2602 = T7;
  T12 = CALL2(1,VARREF(Ylst),nameF2599,sigF2600);
  T11 = CALL2(1,VARREF(YgooSmacrosYcat),T12,bodyF2601);
  T10 = CALL1(1,VARREF(Ylst),T11);
  T14 = CALL1(1,VARREF(Ylst),nameF2599);
  T13 = CALL2(1,VARREF(YgooSmacrosYcat),T14,initsF2602);
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
  P paramF2603;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2603 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2603,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY2nd),paramF2603);
    T3 = T5;
  } else {
    T3 = paramF2603;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_sexpr_prop_init_var_123) {
  P exp_;
  P paramF2604;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSsyntaxYsexpr_function_parameters),exp_);
  T1 = CALL1(1,VARREF(YgooSmacrosY1st),T2);
  paramF2604 = T1;
  T4 = CALL2(1,VARREF(YisaQ),paramF2604,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosY1st),paramF2604);
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
  P resF2606;
  P raw_resultF2605;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYbq_process),x_);
  raw_resultF2605 = T1;
  T3 = CALL1(1,VARREF(YevalSsyntaxYbq_remove_tokens),raw_resultF2605);
  resF2606 = T3;
  T2 = resF2606;
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
  P tmpF2607;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),x_,VARREF(YLlstG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  tmpF2607 = T1;
  if (tmpF2607 != YPfalse) {
    T3 = tmpF2607;
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
  P loopF2608;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_140,2);
  loopF2608 = T1;
  FUNINIT(loopF2608, 2,return_,loopF2608);
  T2 = CALL2(0,loopF2608,FREEREF(0),Ynil);
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
  P tmpF2611;
  P dF2610;
  P aF2609;
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
    aF2609 = T4;
    T8 = CALL1(1,VARREF(Ytail),x_);
    T7 = CALL2(1,VARREF(YevalSsyntaxYmap_tree),fn_,T8);
    dF2610 = T7;
    T12 = CALL1(1,VARREF(Yhead),x_);
    T11 = CALL2(1,VARREF(YgooSmathYE),aF2609,T12);
    tmpF2611 = T11;
    if (tmpF2611 != YPfalse) {
      T15 = CALL1(1,VARREF(Ytail),x_);
      T14 = CALL2(1,VARREF(YgooSmathYE),dF2610,T15);
      T13 = T14;
    } else {
      T13 = YPfalse;
    }
    T10 = T13;
    if (T10 != YPfalse) {
      T9 = x_;
    } else {
      T16 = CALL2(1,VARREF(YgooSmacrosYpair),aF2609,dF2610);
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
  P tmpF2613;
  P tmpF2612;
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
                tmpF2612 = T20;
                if (tmpF2612 != YPfalse) {
                  T27 = CALL1(1,VARREF(Ytail),x_);
                  T26 = CALL1(1,VARREF(Ytail),T27);
                  T25 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T26);
                  T24 = CALL1(1,VARREF(Ynot),T25);
                  tmpF2613 = T24;
                  if (tmpF2613 != YPfalse) {
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
  P tmpF2614;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSsyntaxYsexpr_unquoteQ),pat_);
  tmpF2614 = T1;
  if (tmpF2614 != YPfalse) {
    T2 = tmpF2614;
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
  P xF2616;
  P tmpF2615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T3 = CALL2(1,VARREF(YisaQ),pat_,VARREF(YLlstG));
  T2 = CALL1(1,VARREF(Ynot),T3);
  tmpF2615 = T2;
  if (tmpF2615 != YPfalse) {
    T4 = tmpF2615;
  } else {
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),pat_);
    T4 = T5;
  }
  T1 = T4;
  if (T1 != YPfalse) {
    T0 = Ynil;
  } else {
    T7 = CALL1(1,VARREF(Yhead),pat_);
    xF2616 = T7;
    T9 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variableQ),xF2616);
    if (T9 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSsyntaxYsexpr_pattern_variable_name),xF2616);
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
  P colF2617;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(pat_, 0);
loop:
  T2 = FUNSHELL(1,fun_col_153,1);
  colF2617 = T2;
  FUNINIT(colF2617, 1,colF2617);
  T3 = CALL1(0,colF2617,pat_);
  T1 = T3;
  T0 = CALL1(1,VARREF(YgooScolsSseqYdel_dups),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_sexpr_make_macro_function_155) {
  P name_,exp_;
  P funcF2619;
  P mifF2618;
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
  mifF2618 = T1;
  T14 = CALL1(1,VARREF(Ylst),LITREF(lit_372));
  T15 = CALL1(1,VARREF(Ylst),mifF2618);
  T13 = CALL2(1,VARREF(YevalSsyntaxYsexpr_make_anonymous_method),T14,T15);
  funcF2619 = T13;
  T12 = funcF2619;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206,T207;
  P T208,T209,T210,T211,T212,T213,T214,T215,T216,T217,T218,T219,T220,T221,T222,T223;
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244;
DEFCREGS();
loop:
  lit_0 = YPPsym((P)"sexpr-self-evaluating?");
  lit_1 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_self_evaluatingQ_0 = YPmet(FUNCODEREF(fun_sexpr_self_evaluatingQ_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(8));
  T3 = BOUNDP(YevalSsyntaxYsexpr_self_evaluatingQ);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_self_evaluatingQ);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_self_evaluatingQ_0;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_self_evaluatingQ,T1);
  lit_2 = YPPsym((P)"sexpr-variable?");
  lit_3 = YPPlist(1,YPPsym((P)"exp"));
  T5 = YPsig(LITREF(lit_3),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_variableQ_1 = YPmet(FUNCODEREF(fun_sexpr_variableQ_1),LITREF(lit_2),T5,ENVNUL,PNUL,sloc(19));
  T8 = BOUNDP(YevalSsyntaxYsexpr_variableQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_variableQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_variableQ_1;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_variableQ,T6);
  lit_4 = YPPsym((P)"sexpr-tagged-list?");
  lit_5 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"tag"));
  T10 = YPsig(LITREF(lit_5),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLlogG),Ynil);
  fun_sexpr_tagged_listQ_2 = YPmet(FUNCODEREF(fun_sexpr_tagged_listQ_2),LITREF(lit_4),T10,ENVNUL,PNUL,sloc(24));
  T13 = BOUNDP(YevalSsyntaxYsexpr_tagged_listQ);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_tagged_listQ);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_tagged_listQ_2;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_tagged_listQ,T11);
  lit_6 = YPPsym((P)"quote");
  VARSET(YevalSsyntaxYDsexpr_quote_tag,LITREF(lit_6));
  lit_7 = YPPsym((P)"sexpr-quoted?");
  lit_8 = YPPlist(1,YPPsym((P)"exp"));
  T15 = YPsig(LITREF(lit_8),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_quotedQ_3 = YPmet(FUNCODEREF(fun_sexpr_quotedQ_3),LITREF(lit_7),T15,ENVNUL,PNUL,sloc(31));
  T18 = BOUNDP(YevalSsyntaxYsexpr_quotedQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_quotedQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_quotedQ_3;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_quotedQ,T16);
  lit_9 = YPPsym((P)"sexpr-make-quote");
  lit_10 = YPPlist(1,YPPsym((P)"exp"));
  T20 = YPsig(LITREF(lit_10),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_quote_4 = YPmet(FUNCODEREF(fun_sexpr_make_quote_4),LITREF(lit_9),T20,ENVNUL,PNUL,sloc(34));
  T23 = BOUNDP(YevalSsyntaxYsexpr_make_quote);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_make_quote);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_make_quote_4;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_make_quote,T21);
  lit_11 = YPPsym((P)"sexpr-text-of-quotation");
  lit_12 = YPPlist(1,YPPsym((P)"quot"));
  T25 = YPsig(LITREF(lit_12),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_text_of_quotation_5 = YPmet(FUNCODEREF(fun_sexpr_text_of_quotation_5),LITREF(lit_11),T25,ENVNUL,PNUL,sloc(37));
  T28 = BOUNDP(YevalSsyntaxYsexpr_text_of_quotation);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_text_of_quotation);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_text_of_quotation_5;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_text_of_quotation,T26);
  lit_13 = YPPsym((P)"set");
  VARSET(YevalSsyntaxYDsexpr_set_tag,LITREF(lit_13));
  lit_14 = YPPsym((P)"sexpr-assignment?");
  lit_15 = YPPlist(1,YPPsym((P)"exp"));
  T30 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_assignmentQ_6 = YPmet(FUNCODEREF(fun_sexpr_assignmentQ_6),LITREF(lit_14),T30,ENVNUL,PNUL,sloc(44));
  T33 = BOUNDP(YevalSsyntaxYsexpr_assignmentQ);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_assignmentQ);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_assignmentQ_6;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_assignmentQ,T31);
  lit_16 = YPPsym((P)"sexpr-assignment-variable");
  lit_17 = YPPlist(1,YPPsym((P)"assn"));
  T35 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_variable_7 = YPmet(FUNCODEREF(fun_sexpr_assignment_variable_7),LITREF(lit_16),T35,ENVNUL,PNUL,sloc(47));
  T38 = BOUNDP(YevalSsyntaxYsexpr_assignment_variable);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSsyntaxYsexpr_assignment_variable);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_assignment_variable_7;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSsyntaxYsexpr_assignment_variable,T36);
  lit_18 = YPPsym((P)"sexpr-assignment-value");
  lit_19 = YPPlist(1,YPPsym((P)"assn"));
  T40 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_assignment_value_8 = YPmet(FUNCODEREF(fun_sexpr_assignment_value_8),LITREF(lit_18),T40,ENVNUL,PNUL,sloc(50));
  T43 = BOUNDP(YevalSsyntaxYsexpr_assignment_value);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYsexpr_assignment_value);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_assignment_value_8;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYsexpr_assignment_value,T41);
  lit_20 = YPPsym((P)"sexpr-variable-name");
  lit_21 = YPPlist(1,YPPsym((P)"exp"));
  T45 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_9 = YPmet(FUNCODEREF(fun_sexpr_variable_name_9),LITREF(lit_20),T45,ENVNUL,PNUL,sloc(55));
  T48 = BOUNDP(YevalSsyntaxYsexpr_variable_name);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_variable_name);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_variable_name_9;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_variable_name,T46);
  lit_22 = YPPlist(1,YPPsym((P)"exp"));
  T50 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_name_10 = YPmet(FUNCODEREF(fun_sexpr_variable_name_10),LITREF(lit_20),T50,ENVNUL,PNUL,sloc(58));
  T53 = BOUNDP(YevalSsyntaxYsexpr_variable_name);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_variable_name);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_variable_name_10;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_variable_name,T51);
  lit_23 = YPPsym((P)"sexpr-variable-type");
  lit_24 = YPPlist(1,YPPsym((P)"exp"));
  T55 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_11 = YPmet(FUNCODEREF(fun_sexpr_variable_type_11),LITREF(lit_23),T55,ENVNUL,PNUL,sloc(61));
  T58 = BOUNDP(YevalSsyntaxYsexpr_variable_type);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_variable_type);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_variable_type_11;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_variable_type,T56);
  lit_25 = YPPlist(1,YPPsym((P)"exp"));
  lit_26 = YPPsym((P)"<any>");
  T60 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_variable_type_12 = YPmet(FUNCODEREF(fun_sexpr_variable_type_12),LITREF(lit_23),T60,ENVNUL,PNUL,sloc(64));
  T63 = BOUNDP(YevalSsyntaxYsexpr_variable_type);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_variable_type);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_variable_type_12;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_variable_type,T61);
  lit_27 = YPPsym((P)"dv");
  VARSET(YevalSsyntaxYDsexpr_define_tag,LITREF(lit_27));
  lit_28 = YPPsym((P)"sexpr-definition?");
  lit_29 = YPPlist(1,YPPsym((P)"exp"));
  T65 = YPsig(LITREF(lit_29),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_definitionQ_13 = YPmet(FUNCODEREF(fun_sexpr_definitionQ_13),LITREF(lit_28),T65,ENVNUL,PNUL,sloc(71));
  T68 = BOUNDP(YevalSsyntaxYsexpr_definitionQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_definitionQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_definitionQ_13;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_definitionQ,T66);
  lit_30 = YPPsym((P)"quasiquote");
  VARSET(YevalSsyntaxYDsexpr_quasiquote_tag,LITREF(lit_30));
  lit_31 = YPPsym((P)"sexpr-definition-variable");
  lit_32 = YPPlist(1,YPPsym((P)"defn"));
  T70 = YPsig(LITREF(lit_32),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_variable_14 = YPmet(FUNCODEREF(fun_sexpr_definition_variable_14),LITREF(lit_31),T70,ENVNUL,PNUL,sloc(76));
  T73 = BOUNDP(YevalSsyntaxYsexpr_definition_variable);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_definition_variable);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_definition_variable_14;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_definition_variable,T71);
  lit_33 = YPPsym((P)"sexpr-definition-value");
  lit_34 = YPPlist(1,YPPsym((P)"defn"));
  T75 = YPsig(LITREF(lit_34),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_definition_value_15 = YPmet(FUNCODEREF(fun_sexpr_definition_value_15),LITREF(lit_33),T75,ENVNUL,PNUL,sloc(79));
  T78 = BOUNDP(YevalSsyntaxYsexpr_definition_value);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_definition_value);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_definition_value_15;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_definition_value,T76);
  lit_35 = YPPsym((P)"ds");
  VARSET(YevalSsyntaxYDsexpr_define_syntax_tag,LITREF(lit_35));
  lit_36 = YPPsym((P)"sexpr-syntax-definition?");
  lit_37 = YPPlist(1,YPPsym((P)"exp"));
  T80 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_definitionQ_16 = YPmet(FUNCODEREF(fun_sexpr_syntax_definitionQ_16),LITREF(lit_36),T80,ENVNUL,PNUL,sloc(84));
  T83 = BOUNDP(YevalSsyntaxYsexpr_syntax_definitionQ);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_syntax_definitionQ);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_syntax_definitionQ_16;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_syntax_definitionQ,T81);
  lit_38 = YPPsym((P)"mac");
  VARSET(YevalSsyntaxYDsexpr_macro_tag,LITREF(lit_38));
  lit_39 = YPPsym((P)"sexpr-syntax-definition-variable");
  lit_40 = YPPlist(1,YPPsym((P)"defn"));
  T85 = YPsig(LITREF(lit_40),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_variable_17 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_variable_17),LITREF(lit_39),T85,ENVNUL,PNUL,sloc(89));
  T88 = BOUNDP(YevalSsyntaxYsexpr_syntax_definition_variable);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_syntax_definition_variable);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_syntax_definition_variable_17;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_variable,T86);
  lit_41 = YPPsym((P)"sexpr-syntax-definition-value");
  lit_42 = YPPlist(1,YPPsym((P)"defn"));
  T90 = YPsig(LITREF(lit_42),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_definition_value_18 = YPmet(FUNCODEREF(fun_sexpr_syntax_definition_value_18),LITREF(lit_41),T90,ENVNUL,PNUL,sloc(92));
  T93 = BOUNDP(YevalSsyntaxYsexpr_syntax_definition_value);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_syntax_definition_value);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_syntax_definition_value_18;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_syntax_definition_value,T91);
  lit_43 = YPPsym((P)"df");
  VARSET(YevalSsyntaxYDsexpr_define_function_tag,LITREF(lit_43));
  lit_44 = YPPsym((P)"sexpr-function-definition?");
  lit_45 = YPPlist(1,YPPsym((P)"exp"));
  T95 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_function_definitionQ_19 = YPmet(FUNCODEREF(fun_sexpr_function_definitionQ_19),LITREF(lit_44),T95,ENVNUL,PNUL,sloc(98));
  T98 = BOUNDP(YevalSsyntaxYsexpr_function_definitionQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSsyntaxYsexpr_function_definitionQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_function_definitionQ_19;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSsyntaxYsexpr_function_definitionQ,T96);
  lit_46 = YPPsym((P)"dm");
  VARSET(YevalSsyntaxYDsexpr_define_method_tag,LITREF(lit_46));
  lit_47 = YPPsym((P)"sexpr-method-definition?");
  lit_48 = YPPlist(1,YPPsym((P)"exp"));
  T100 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_method_definitionQ_20 = YPmet(FUNCODEREF(fun_sexpr_method_definitionQ_20),LITREF(lit_47),T100,ENVNUL,PNUL,sloc(103));
  T103 = BOUNDP(YevalSsyntaxYsexpr_method_definitionQ);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSsyntaxYsexpr_method_definitionQ);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_method_definitionQ_20;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSsyntaxYsexpr_method_definitionQ,T101);
  lit_49 = YPPsym((P)"dg");
  VARSET(YevalSsyntaxYDsexpr_define_generic_tag,LITREF(lit_49));
  lit_50 = YPPsym((P)"sexpr-generic-definition?");
  lit_51 = YPPlist(1,YPPsym((P)"exp"));
  T105 = YPsig(LITREF(lit_51),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_generic_definitionQ_21 = YPmet(FUNCODEREF(fun_sexpr_generic_definitionQ_21),LITREF(lit_50),T105,ENVNUL,PNUL,sloc(108));
  T108 = BOUNDP(YevalSsyntaxYsexpr_generic_definitionQ);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSsyntaxYsexpr_generic_definitionQ);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_generic_definitionQ_21;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSsyntaxYsexpr_generic_definitionQ,T106);
  lit_52 = YPPsym((P)"sexpr-function-definition-variable");
  lit_53 = YPPlist(1,YPPsym((P)"defn"));
  T110 = YPsig(LITREF(lit_53),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_variable_22 = YPmet(FUNCODEREF(fun_sexpr_function_definition_variable_22),LITREF(lit_52),T110,ENVNUL,PNUL,sloc(113));
  T113 = BOUNDP(YevalSsyntaxYsexpr_function_definition_variable);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSsyntaxYsexpr_function_definition_variable);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_function_definition_variable_22;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSsyntaxYsexpr_function_definition_variable,T111);
  lit_54 = YPPsym((P)"sexpr-function-definition-adjectives");
  lit_55 = YPPlist(1,YPPsym((P)"defn"));
  T115 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_adjectives_23 = YPmet(FUNCODEREF(fun_sexpr_function_definition_adjectives_23),LITREF(lit_54),T115,ENVNUL,PNUL,sloc(119));
  T118 = BOUNDP(YevalSsyntaxYsexpr_function_definition_adjectives);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_function_definition_adjectives);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_function_definition_adjectives_23;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_function_definition_adjectives,T116);
  lit_56 = YPPsym((P)"sexpr-forward-primitive?");
  lit_57 = YPPlist(1,YPPsym((P)"defn"));
  T120 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_forward_primitiveQ_24 = YPmet(FUNCODEREF(fun_sexpr_forward_primitiveQ_24),LITREF(lit_56),T120,ENVNUL,PNUL,sloc(125));
  T123 = BOUNDP(YevalSsyntaxYsexpr_forward_primitiveQ);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_forward_primitiveQ);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_forward_primitiveQ_24;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_forward_primitiveQ,T121);
  lit_58 = YPPsym((P)"sexpr-signature-parameters");
  lit_59 = YPPlist(1,YPPsym((P)"signature"));
  lit_60 = YPPsym((P)"=>");
  T125 = YPsig(LITREF(lit_59),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_signature_parameters_25 = YPmet(FUNCODEREF(fun_sexpr_signature_parameters_25),LITREF(lit_58),T125,ENVNUL,PNUL,sloc(128));
  T128 = BOUNDP(YevalSsyntaxYsexpr_signature_parameters);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_signature_parameters);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_signature_parameters_25;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_signature_parameters,T126);
  lit_61 = YPPsym((P)"sexpr-value-type");
  lit_62 = YPPlist(1,YPPsym((P)"x"));
  T130 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_26 = YPmet(FUNCODEREF(fun_sexpr_value_type_26),LITREF(lit_61),T130,ENVNUL,PNUL,sloc(134));
  T133 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_value_type_26;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_value_type,T131);
  lit_63 = YPPlist(1,YPPsym((P)"x"));
  T135 = YPsig(LITREF(lit_63),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_value_type_27 = YPmet(FUNCODEREF(fun_sexpr_value_type_27),LITREF(lit_61),T135,ENVNUL,PNUL,sloc(136));
  T138 = BOUNDP(YevalSsyntaxYsexpr_value_type);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_value_type);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_value_type_27;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_value_type,T136);
  lit_64 = YPPsym((P)"sexpr-signature-value");
  lit_65 = YPPlist(1,YPPsym((P)"signature"));
  lit_66 = YPPsym((P)"tup");
  lit_67 = YPPsym((P)"t*");
  lit_68 = Ynil;
  T140 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_signature_value_28 = YPmet(FUNCODEREF(fun_sexpr_signature_value_28),LITREF(lit_64),T140,ENVNUL,PNUL,sloc(138));
  T143 = BOUNDP(YevalSsyntaxYsexpr_signature_value);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSsyntaxYsexpr_signature_value);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_signature_value_28;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSsyntaxYsexpr_signature_value,T141);
  lit_69 = YPPsym((P)"as-signature");
  lit_70 = YPPlist(1,YPPsym((P)"sig"));
  T145 = YPsig(LITREF(lit_70),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYas_signature = YPmet(FUNCODEREF(YevalSsyntaxYas_signature),LITREF(lit_69),T145,ENVNUL,PNUL,sloc(146));
  T146 = YevalSsyntaxYas_signature;
  VARSET(YevalSsyntaxYas_signature,T146);
  lit_71 = YPPsym((P)"sexpr-function-signature");
  lit_72 = YPPlist(1,YPPsym((P)"defn"));
  T147 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_signature_30 = YPmet(FUNCODEREF(fun_sexpr_function_signature_30),LITREF(lit_71),T147,ENVNUL,PNUL,sloc(149));
  T150 = BOUNDP(YevalSsyntaxYsexpr_function_signature);
  if (T150 != YPfalse) {
    T149 = VARREF(YevalSsyntaxYsexpr_function_signature);
  } else {
    T149 = YPfalse;
  }
  T151 = fun_sexpr_function_signature_30;
  T148 = XCALL2(1,VARREF(YPdefine_method),T149,T151);
  VARSET(YevalSsyntaxYsexpr_function_signature,T148);
  lit_73 = YPPsym((P)"sexpr-function-parameters");
  lit_74 = YPPlist(1,YPPsym((P)"defn"));
  T152 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_function_parameters_31 = YPmet(FUNCODEREF(fun_sexpr_function_parameters_31),LITREF(lit_73),T152,ENVNUL,PNUL,sloc(152));
  T155 = BOUNDP(YevalSsyntaxYsexpr_function_parameters);
  if (T155 != YPfalse) {
    T154 = VARREF(YevalSsyntaxYsexpr_function_parameters);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_sexpr_function_parameters_31;
  T153 = XCALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(YevalSsyntaxYsexpr_function_parameters,T153);
  lit_75 = YPPsym((P)"sexpr-function-value");
  lit_76 = YPPlist(1,YPPsym((P)"defn"));
  T157 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_value_32 = YPmet(FUNCODEREF(fun_sexpr_function_value_32),LITREF(lit_75),T157,ENVNUL,PNUL,sloc(155));
  T160 = BOUNDP(YevalSsyntaxYsexpr_function_value);
  if (T160 != YPfalse) {
    T159 = VARREF(YevalSsyntaxYsexpr_function_value);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_sexpr_function_value_32;
  T158 = XCALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(YevalSsyntaxYsexpr_function_value,T158);
  lit_77 = YPPsym((P)"sexpr-function-body");
  lit_78 = YPPlist(1,YPPsym((P)"defn"));
  T162 = YPsig(LITREF(lit_78),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_body_33 = YPmet(FUNCODEREF(fun_sexpr_function_body_33),LITREF(lit_77),T162,ENVNUL,PNUL,sloc(158));
  T165 = BOUNDP(YevalSsyntaxYsexpr_function_body);
  if (T165 != YPfalse) {
    T164 = VARREF(YevalSsyntaxYsexpr_function_body);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_sexpr_function_body_33;
  T163 = XCALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(YevalSsyntaxYsexpr_function_body,T163);
  lit_79 = YPPsym((P)"fun");
  VARSET(YevalSsyntaxYDsexpr_method_tag,LITREF(lit_79));
  lit_80 = YPPsym((P)"sexpr-function-definition-value");
  lit_81 = YPPlist(1,YPPsym((P)"defn"));
  T167 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_function_definition_value_34 = YPmet(FUNCODEREF(fun_sexpr_function_definition_value_34),LITREF(lit_80),T167,ENVNUL,PNUL,sloc(164));
  T170 = BOUNDP(YevalSsyntaxYsexpr_function_definition_value);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSsyntaxYsexpr_function_definition_value);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_function_definition_value_34;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSsyntaxYsexpr_function_definition_value,T168);
  lit_82 = YPPsym((P)"sexpr-method?");
  lit_83 = YPPlist(1,YPPsym((P)"exp"));
  T172 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_methodQ_35 = YPmet(FUNCODEREF(fun_sexpr_methodQ_35),LITREF(lit_82),T172,ENVNUL,PNUL,sloc(171));
  T175 = BOUNDP(YevalSsyntaxYsexpr_methodQ);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSsyntaxYsexpr_methodQ);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_methodQ_35;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSsyntaxYsexpr_methodQ,T173);
  lit_84 = YPPsym((P)"sexpr-method-signature");
  lit_85 = YPPlist(1,YPPsym((P)"method-exp"));
  T177 = YPsig(LITREF(lit_85),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_signature_36 = YPmet(FUNCODEREF(fun_sexpr_method_signature_36),LITREF(lit_84),T177,ENVNUL,PNUL,sloc(174));
  T180 = BOUNDP(YevalSsyntaxYsexpr_method_signature);
  if (T180 != YPfalse) {
    T179 = VARREF(YevalSsyntaxYsexpr_method_signature);
  } else {
    T179 = YPfalse;
  }
  T181 = fun_sexpr_method_signature_36;
  T178 = XCALL2(1,VARREF(YPdefine_method),T179,T181);
  VARSET(YevalSsyntaxYsexpr_method_signature,T178);
  lit_86 = YPPsym((P)"sexpr-method-parameters");
  lit_87 = YPPlist(1,YPPsym((P)"method-exp"));
  T182 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_parameters_37 = YPmet(FUNCODEREF(fun_sexpr_method_parameters_37),LITREF(lit_86),T182,ENVNUL,PNUL,sloc(177));
  T185 = BOUNDP(YevalSsyntaxYsexpr_method_parameters);
  if (T185 != YPfalse) {
    T184 = VARREF(YevalSsyntaxYsexpr_method_parameters);
  } else {
    T184 = YPfalse;
  }
  T186 = fun_sexpr_method_parameters_37;
  T183 = XCALL2(1,VARREF(YPdefine_method),T184,T186);
  VARSET(YevalSsyntaxYsexpr_method_parameters,T183);
  lit_88 = YPPsym((P)"sexpr-method-value");
  lit_89 = YPPlist(1,YPPsym((P)"method-exp"));
  T187 = YPsig(LITREF(lit_89),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_method_value_38 = YPmet(FUNCODEREF(fun_sexpr_method_value_38),LITREF(lit_88),T187,ENVNUL,PNUL,sloc(180));
  T190 = BOUNDP(YevalSsyntaxYsexpr_method_value);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalSsyntaxYsexpr_method_value);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_sexpr_method_value_38;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalSsyntaxYsexpr_method_value,T188);
  lit_90 = YPPsym((P)"sexpr-method-body");
  lit_91 = YPPlist(1,YPPsym((P)"method-exp"));
  T192 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_method_body_39 = YPmet(FUNCODEREF(fun_sexpr_method_body_39),LITREF(lit_90),T192,ENVNUL,PNUL,sloc(183));
  T195 = BOUNDP(YevalSsyntaxYsexpr_method_body);
  if (T195 != YPfalse) {
    T194 = VARREF(YevalSsyntaxYsexpr_method_body);
  } else {
    T194 = YPfalse;
  }
  T196 = fun_sexpr_method_body_39;
  T193 = XCALL2(1,VARREF(YPdefine_method),T194,T196);
  VARSET(YevalSsyntaxYsexpr_method_body,T193);
  lit_92 = YPPsym((P)"sexpr-make-anonymous-method");
  lit_93 = YPPlist(2,YPPsym((P)"parameters"),YPPsym((P)"body"));
  T197 = YPsig(LITREF(lit_93),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_anonymous_method_40 = YPmet(FUNCODEREF(fun_sexpr_make_anonymous_method_40),LITREF(lit_92),T197,ENVNUL,PNUL,sloc(188));
  T200 = BOUNDP(YevalSsyntaxYsexpr_make_anonymous_method);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSsyntaxYsexpr_make_anonymous_method);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_sexpr_make_anonymous_method_40;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSsyntaxYsexpr_make_anonymous_method,T198);
  lit_94 = YPPsym((P)"sexpr-make-method");
  lit_95 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"parameters"),YPPsym((P)"body"));
  T202 = YPsig(LITREF(lit_95),YPPlist(3,VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_method_41 = YPmet(FUNCODEREF(fun_sexpr_make_method_41),LITREF(lit_94),T202,ENVNUL,PNUL,sloc(193));
  T205 = BOUNDP(YevalSsyntaxYsexpr_make_method);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSsyntaxYsexpr_make_method);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_make_method_41;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSsyntaxYsexpr_make_method,T203);
  lit_96 = YPPsym((P)"if");
  VARSET(YevalSsyntaxYDsexpr_if_tag,LITREF(lit_96));
  lit_97 = YPPsym((P)"sexpr-if?");
  lit_98 = YPPlist(1,YPPsym((P)"exp"));
  T207 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_ifQ_42 = YPmet(FUNCODEREF(fun_sexpr_ifQ_42),LITREF(lit_97),T207,ENVNUL,PNUL,sloc(201));
  T210 = BOUNDP(YevalSsyntaxYsexpr_ifQ);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSsyntaxYsexpr_ifQ);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_ifQ_42;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSsyntaxYsexpr_ifQ,T208);
  lit_99 = YPPsym((P)"sexpr-if-test");
  lit_100 = YPPlist(1,YPPsym((P)"exp"));
  T212 = YPsig(LITREF(lit_100),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_test_43 = YPmet(FUNCODEREF(fun_sexpr_if_test_43),LITREF(lit_99),T212,ENVNUL,PNUL,sloc(204));
  T215 = BOUNDP(YevalSsyntaxYsexpr_if_test);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_if_test);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_if_test_43;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_if_test,T213);
  lit_101 = YPPsym((P)"sexpr-if-then");
  lit_102 = YPPlist(1,YPPsym((P)"exp"));
  T217 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_then_44 = YPmet(FUNCODEREF(fun_sexpr_if_then_44),LITREF(lit_101),T217,ENVNUL,PNUL,sloc(207));
  T220 = BOUNDP(YevalSsyntaxYsexpr_if_then);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_if_then);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_if_then_44;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_if_then,T218);
  lit_103 = YPPsym((P)"sexpr-if-else");
  lit_104 = YPPlist(1,YPPsym((P)"exp"));
  T222 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_if_else_45 = YPmet(FUNCODEREF(fun_sexpr_if_else_45),LITREF(lit_103),T222,ENVNUL,PNUL,sloc(210));
  T225 = BOUNDP(YevalSsyntaxYsexpr_if_else);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_if_else);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_if_else_45;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_if_else,T223);
  lit_105 = YPPsym((P)"sexpr-make-if");
  lit_106 = YPPlist(3,YPPsym((P)"test"),YPPsym((P)"then"),YPPsym((P)"else"));
  T227 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_make_if_46 = YPmet(FUNCODEREF(fun_sexpr_make_if_46),LITREF(lit_105),T227,ENVNUL,PNUL,sloc(215));
  T230 = BOUNDP(YevalSsyntaxYsexpr_make_if);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSsyntaxYsexpr_make_if);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_sexpr_make_if_46;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSsyntaxYsexpr_make_if,T228);
  lit_107 = YPPsym((P)"esc");
  VARSET(YevalSsyntaxYDsexpr_bind_exit_tag,LITREF(lit_107));
  lit_108 = YPPsym((P)"sexpr-block?");
  lit_109 = YPPlist(1,YPPsym((P)"exp"));
  T232 = YPsig(LITREF(lit_109),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_blockQ_47 = YPmet(FUNCODEREF(fun_sexpr_blockQ_47),LITREF(lit_108),T232,ENVNUL,PNUL,sloc(222));
  T235 = BOUNDP(YevalSsyntaxYsexpr_blockQ);
  if (T235 != YPfalse) {
    T234 = VARREF(YevalSsyntaxYsexpr_blockQ);
  } else {
    T234 = YPfalse;
  }
  T236 = fun_sexpr_blockQ_47;
  T233 = XCALL2(1,VARREF(YPdefine_method),T234,T236);
  VARSET(YevalSsyntaxYsexpr_blockQ,T233);
  lit_110 = YPPsym((P)"sexpr-block-name");
  lit_111 = YPPlist(1,YPPsym((P)"exp"));
  T239 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T238 = fun_sexpr_block_name_48 = YPmet(FUNCODEREF(fun_sexpr_block_name_48),LITREF(lit_110),T239,ENVNUL,PNUL,sloc(227));
  T243 = BOUNDP(YevalSsyntaxYsexpr_block_name);
  if (T243 != YPfalse) {
    T242 = VARREF(YevalSsyntaxYsexpr_block_name);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_sexpr_block_name_48;
  T241 = XCALL2(1,VARREF(YPdefine_method),T242,T244);
  T240 = VARSET(YevalSsyntaxYsexpr_block_name,T241);
  T237 = T240;
  return T237;
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
  P T224,T225,T226,T227,T228,T229,T230,T231,T232,T233,T234,T235,T236,T237,T238,T239;
  P T240,T241,T242,T243,T244,T245,T246,T247,T248,T249,T250,T251,T252,T253,T254,T255;
  P T256,T257,T258,T259,T260,T261,T262,T263,T264,T265,T266,T267,T268,T269,T270,T271;
  P T272,T273,T274,T275,T276;
DEFCREGS();
loop:
  lit_112 = YPPsym((P)"sexpr-block-body");
  lit_113 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_block_body_49 = YPmet(FUNCODEREF(fun_sexpr_block_body_49),LITREF(lit_112),T0,ENVNUL,PNUL,sloc(230));
  T3 = BOUNDP(YevalSsyntaxYsexpr_block_body);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_block_body);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_block_body_49;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_block_body,T1);
  lit_114 = YPPsym((P)"fin");
  VARSET(YevalSsyntaxYDsexpr_unwind_protect_tag,LITREF(lit_114));
  lit_115 = YPPsym((P)"sexpr-unwind-protect?");
  lit_116 = YPPlist(1,YPPsym((P)"exp"));
  T5 = YPsig(LITREF(lit_116),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unwind_protectQ_50 = YPmet(FUNCODEREF(fun_sexpr_unwind_protectQ_50),LITREF(lit_115),T5,ENVNUL,PNUL,sloc(237));
  T8 = BOUNDP(YevalSsyntaxYsexpr_unwind_protectQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_unwind_protectQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_unwind_protectQ_50;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_unwind_protectQ,T6);
  lit_117 = YPPsym((P)"sexpr-unwind-protect-protected-form");
  lit_118 = YPPlist(1,YPPsym((P)"exp"));
  T10 = YPsig(LITREF(lit_118),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_protected_form_51 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_protected_form_51),LITREF(lit_117),T10,ENVNUL,PNUL,sloc(240));
  T13 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_unwind_protect_protected_form);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_unwind_protect_protected_form_51;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_protected_form,T11);
  lit_119 = YPPsym((P)"sexpr-unwind-protect-cleanup-forms");
  lit_120 = YPPlist(1,YPPsym((P)"exp"));
  T15 = YPsig(LITREF(lit_120),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_unwind_protect_cleanup_forms_52 = YPmet(FUNCODEREF(fun_sexpr_unwind_protect_cleanup_forms_52),LITREF(lit_119),T15,ENVNUL,PNUL,sloc(243));
  T18 = BOUNDP(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_unwind_protect_cleanup_forms_52;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,T16);
  lit_121 = YPPsym((P)"try");
  VARSET(YevalSsyntaxYDsexpr_monitor_tag,LITREF(lit_121));
  lit_122 = YPPsym((P)"sexpr-monitor?");
  lit_123 = YPPlist(1,YPPsym((P)"exp"));
  T20 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_monitorQ_53 = YPmet(FUNCODEREF(fun_sexpr_monitorQ_53),LITREF(lit_122),T20,ENVNUL,PNUL,sloc(250));
  T23 = BOUNDP(YevalSsyntaxYsexpr_monitorQ);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_monitorQ);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_monitorQ_53;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_monitorQ,T21);
  lit_124 = YPPsym((P)"sexpr-monitor-expand");
  lit_125 = YPPlist(1,YPPsym((P)"exp"));
  lit_126 = YPPlist(1,YPPsym((P)"return"));
  lit_127 = YPPsym((P)"x-1423");
  lit_128 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_129 = YPsb((P)"Malformed TRY expression: ~=");
  lit_130 = YPsb((P)"Match Pattern Failure");
  lit_131 = YPPsym((P)"type");
  T27 = YPsig(LITREF(lit_128),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1423_54 = YPmet(FUNCODEREF(fun_x_1423_54),LITREF(lit_127),T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(LITREF(lit_126),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T26,ENVNUL,PNUL,YPfalse);
  T25 = YPsig(LITREF(lit_125),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_expand_56 = YPmet(FUNCODEREF(fun_sexpr_monitor_expand_56),LITREF(lit_124),T25,ENVNUL,PNUL,sloc(253));
  T30 = BOUNDP(YevalSsyntaxYsexpr_monitor_expand);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSsyntaxYsexpr_monitor_expand);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_sexpr_monitor_expand_56;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSsyntaxYsexpr_monitor_expand,T28);
  lit_132 = YPPsym((P)"find-option");
  lit_133 = YPPlist(3,YPPsym((P)"options"),YPPsym((P)"option"),YPPsym((P)"default"));
  T32 = YPsig(LITREF(lit_133),YPPlist(3,VARREF(YLlstG),VARREF(YLsymG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSsyntaxYfind_option = YPmet(FUNCODEREF(YevalSsyntaxYfind_option),LITREF(lit_132),T32,ENVNUL,PNUL,sloc(264));
  T33 = YevalSsyntaxYfind_option;
  VARSET(YevalSsyntaxYfind_option,T33);
  lit_134 = YPPsym((P)"sexpr-monitor-type");
  lit_135 = YPPlist(1,YPPsym((P)"options"));
  lit_136 = YPPlist(1,YPPsym((P)"<condition>"));
  lit_137 = YPPlist(1,YPPsym((P)"return"));
  lit_138 = YPPsym((P)"x-1425");
  lit_139 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_140 = YPsb((P)"Malformed TRY condition type: %=");
  T36 = YPsig(LITREF(lit_139),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1425_58 = YPmet(FUNCODEREF(fun_x_1425_58),LITREF(lit_138),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(LITREF(lit_137),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T35,ENVNUL,PNUL,YPfalse);
  T34 = YPsig(LITREF(lit_135),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_type_60 = YPmet(FUNCODEREF(fun_sexpr_monitor_type_60),LITREF(lit_134),T34,ENVNUL,PNUL,sloc(270));
  T39 = BOUNDP(YevalSsyntaxYsexpr_monitor_type);
  if (T39 != YPfalse) {
    T38 = VARREF(YevalSsyntaxYsexpr_monitor_type);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_sexpr_monitor_type_60;
  T37 = XCALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(YevalSsyntaxYsexpr_monitor_type,T37);
  lit_141 = YPPsym((P)"sexpr-monitor-info");
  lit_142 = YPPlist(1,YPPsym((P)"options"));
  lit_143 = YPPsym((P)"info");
  lit_144 = YPPsym((P)"description");
  lit_145 = YPsb((P)"TRY may only have one of INFO or DESCRIPTION: %=");
  lit_146 = YPPlist(1,YPPsym((P)"return"));
  lit_147 = YPPsym((P)"x-1427");
  lit_148 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_149 = YPsb((P)"Malformed TRY info expression: %=");
  lit_150 = YPPlist(1,YPPsym((P)"return"));
  lit_151 = YPPsym((P)"x-1429");
  lit_152 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_153 = YPsb((P)"Malformed TRY description: %=");
  lit_154 = YPPsym((P)"new");
  lit_155 = YPPsym((P)"<simple-handler-info>");
  lit_156 = YPPsym((P)"handler-info-message");
  lit_157 = YPPsym((P)"handler-info-arguments");
  lit_158 = YPPsym((P)"lst");
  lit_159 = YPPsym((P)"$default-handler-info");
  T45 = YPsig(LITREF(lit_148),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1427_61 = YPmet(FUNCODEREF(fun_x_1427_61),LITREF(lit_147),T45,ENVNUL,PNUL,YPfalse);
  T44 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_62 = YPmet(FUNCODEREF(fun_62),YPfalse,T44,ENVNUL,PNUL,YPfalse);
  T43 = YPsig(LITREF(lit_152),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1429_63 = YPmet(FUNCODEREF(fun_x_1429_63),LITREF(lit_151),T43,ENVNUL,PNUL,YPfalse);
  T42 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T42,ENVNUL,PNUL,YPfalse);
  T41 = YPsig(LITREF(lit_142),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_monitor_info_65 = YPmet(FUNCODEREF(fun_sexpr_monitor_info_65),LITREF(lit_141),T41,ENVNUL,PNUL,sloc(277));
  T48 = BOUNDP(YevalSsyntaxYsexpr_monitor_info);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_monitor_info);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_monitor_info_65;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_monitor_info,T46);
  lit_160 = YPPsym((P)"sexpr-monitor-test");
  lit_161 = YPPlist(1,YPPsym((P)"options"));
  lit_162 = YPPsym((P)"test");
  lit_163 = YPPlist(1,YPtrue);
  T50 = YPsig(LITREF(lit_161),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_test_66 = YPmet(FUNCODEREF(fun_sexpr_monitor_test_66),LITREF(lit_160),T50,ENVNUL,PNUL,sloc(296));
  T53 = BOUNDP(YevalSsyntaxYsexpr_monitor_test);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_monitor_test);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_monitor_test_66;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_monitor_test,T51);
  lit_164 = YPPsym((P)"sexpr-monitor-body");
  lit_165 = YPPlist(1,YPPsym((P)"body"));
  T55 = YPsig(LITREF(lit_165),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_monitor_body_67 = YPmet(FUNCODEREF(fun_sexpr_monitor_body_67),LITREF(lit_164),T55,ENVNUL,PNUL,sloc(300));
  T58 = BOUNDP(YevalSsyntaxYsexpr_monitor_body);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_monitor_body);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_monitor_body_67;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_monitor_body,T56);
  lit_166 = YPPsym((P)"seq");
  VARSET(YevalSsyntaxYDsexpr_begin_tag,LITREF(lit_166));
  lit_167 = YPPsym((P)"sexpr-begin?");
  lit_168 = YPPlist(1,YPPsym((P)"exp"));
  T60 = YPsig(LITREF(lit_168),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_beginQ_68 = YPmet(FUNCODEREF(fun_sexpr_beginQ_68),LITREF(lit_167),T60,ENVNUL,PNUL,sloc(307));
  T63 = BOUNDP(YevalSsyntaxYsexpr_beginQ);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_beginQ);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_beginQ_68;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_beginQ,T61);
  lit_169 = YPPsym((P)"sexpr-begin-actions");
  lit_170 = YPPlist(1,YPPsym((P)"begin-exp"));
  T65 = YPsig(LITREF(lit_170),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_begin_actions_69 = YPmet(FUNCODEREF(fun_sexpr_begin_actions_69),LITREF(lit_169),T65,ENVNUL,PNUL,sloc(310));
  T68 = BOUNDP(YevalSsyntaxYsexpr_begin_actions);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_begin_actions);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_begin_actions_69;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_begin_actions,T66);
  lit_171 = YPPsym((P)"sexpr-last-exp?");
  lit_172 = YPPlist(1,YPPsym((P)"seq"));
  T70 = YPsig(LITREF(lit_172),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_last_expQ_70 = YPmet(FUNCODEREF(fun_sexpr_last_expQ_70),LITREF(lit_171),T70,ENVNUL,PNUL,sloc(313));
  T73 = BOUNDP(YevalSsyntaxYsexpr_last_expQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_last_expQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_last_expQ_70;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_last_expQ,T71);
  lit_173 = YPPsym((P)"sexpr-first-exp");
  lit_174 = YPPlist(1,YPPsym((P)"seq"));
  T75 = YPsig(LITREF(lit_174),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_exp_71 = YPmet(FUNCODEREF(fun_sexpr_first_exp_71),LITREF(lit_173),T75,ENVNUL,PNUL,sloc(316));
  T78 = BOUNDP(YevalSsyntaxYsexpr_first_exp);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_first_exp);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_first_exp_71;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_first_exp,T76);
  lit_175 = YPPsym((P)"sexpr-rest-exps");
  lit_176 = YPPlist(1,YPPsym((P)"seq"));
  T80 = YPsig(LITREF(lit_176),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_exps_72 = YPmet(FUNCODEREF(fun_sexpr_rest_exps_72),LITREF(lit_175),T80,ENVNUL,PNUL,sloc(319));
  T83 = BOUNDP(YevalSsyntaxYsexpr_rest_exps);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalSsyntaxYsexpr_rest_exps);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_sexpr_rest_exps_72;
  T81 = XCALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalSsyntaxYsexpr_rest_exps,T81);
  lit_177 = YPPsym((P)"sexpr-sequence->begin");
  lit_178 = YPPlist(1,YPPsym((P)"seq"));
  T85 = YPsig(LITREF(lit_178),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_sequence_Gbegin_73 = YPmet(FUNCODEREF(fun_sexpr_sequence_Gbegin_73),LITREF(lit_177),T85,ENVNUL,PNUL,sloc(322));
  T88 = BOUNDP(YevalSsyntaxYsexpr_sequence_Gbegin);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalSsyntaxYsexpr_sequence_Gbegin);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_sexpr_sequence_Gbegin_73;
  T86 = XCALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalSsyntaxYsexpr_sequence_Gbegin,T86);
  lit_179 = YPPsym((P)"sexpr-make-begin");
  lit_180 = YPPlist(1,YPPsym((P)"exp"));
  T90 = YPsig(LITREF(lit_180),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_make_begin_74 = YPmet(FUNCODEREF(fun_sexpr_make_begin_74),LITREF(lit_179),T90,ENVNUL,PNUL,sloc(329));
  T93 = BOUNDP(YevalSsyntaxYsexpr_make_begin);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSsyntaxYsexpr_make_begin);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_sexpr_make_begin_74;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSsyntaxYsexpr_make_begin,T91);
  lit_181 = YPPsym((P)"sexpr-application?");
  lit_182 = YPPlist(1,YPPsym((P)"exp"));
  T95 = YPsig(LITREF(lit_182),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_applicationQ_75 = YPmet(FUNCODEREF(fun_sexpr_applicationQ_75),LITREF(lit_181),T95,ENVNUL,PNUL,sloc(333));
  T98 = BOUNDP(YevalSsyntaxYsexpr_applicationQ);
  if (T98 != YPfalse) {
    T97 = VARREF(YevalSsyntaxYsexpr_applicationQ);
  } else {
    T97 = YPfalse;
  }
  T99 = fun_sexpr_applicationQ_75;
  T96 = XCALL2(1,VARREF(YPdefine_method),T97,T99);
  VARSET(YevalSsyntaxYsexpr_applicationQ,T96);
  lit_183 = YPPsym((P)"sexpr-operator");
  lit_184 = YPPlist(1,YPPsym((P)"app"));
  T100 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_operator_76 = YPmet(FUNCODEREF(fun_sexpr_operator_76),LITREF(lit_183),T100,ENVNUL,PNUL,sloc(336));
  T103 = BOUNDP(YevalSsyntaxYsexpr_operator);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalSsyntaxYsexpr_operator);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_sexpr_operator_76;
  T101 = XCALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalSsyntaxYsexpr_operator,T101);
  lit_185 = YPPsym((P)"sexpr-operands");
  lit_186 = YPPlist(1,YPPsym((P)"app"));
  T105 = YPsig(LITREF(lit_186),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_operands_77 = YPmet(FUNCODEREF(fun_sexpr_operands_77),LITREF(lit_185),T105,ENVNUL,PNUL,sloc(339));
  T108 = BOUNDP(YevalSsyntaxYsexpr_operands);
  if (T108 != YPfalse) {
    T107 = VARREF(YevalSsyntaxYsexpr_operands);
  } else {
    T107 = YPfalse;
  }
  T109 = fun_sexpr_operands_77;
  T106 = XCALL2(1,VARREF(YPdefine_method),T107,T109);
  VARSET(YevalSsyntaxYsexpr_operands,T106);
  lit_187 = YPPsym((P)"sexpr-no-operands?");
  lit_188 = YPPlist(1,YPPsym((P)"args"));
  T110 = YPsig(LITREF(lit_188),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_no_operandsQ_78 = YPmet(FUNCODEREF(fun_sexpr_no_operandsQ_78),LITREF(lit_187),T110,ENVNUL,PNUL,sloc(342));
  T113 = BOUNDP(YevalSsyntaxYsexpr_no_operandsQ);
  if (T113 != YPfalse) {
    T112 = VARREF(YevalSsyntaxYsexpr_no_operandsQ);
  } else {
    T112 = YPfalse;
  }
  T114 = fun_sexpr_no_operandsQ_78;
  T111 = XCALL2(1,VARREF(YPdefine_method),T112,T114);
  VARSET(YevalSsyntaxYsexpr_no_operandsQ,T111);
  lit_189 = YPPsym((P)"sexpr-first-operand");
  lit_190 = YPPlist(1,YPPsym((P)"args"));
  T115 = YPsig(LITREF(lit_190),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_first_operand_79 = YPmet(FUNCODEREF(fun_sexpr_first_operand_79),LITREF(lit_189),T115,ENVNUL,PNUL,sloc(345));
  T118 = BOUNDP(YevalSsyntaxYsexpr_first_operand);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSsyntaxYsexpr_first_operand);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_sexpr_first_operand_79;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSsyntaxYsexpr_first_operand,T116);
  lit_191 = YPPsym((P)"sexpr-rest-operands");
  lit_192 = YPPlist(1,YPPsym((P)"args"));
  T120 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_rest_operands_80 = YPmet(FUNCODEREF(fun_sexpr_rest_operands_80),LITREF(lit_191),T120,ENVNUL,PNUL,sloc(348));
  T123 = BOUNDP(YevalSsyntaxYsexpr_rest_operands);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSsyntaxYsexpr_rest_operands);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_sexpr_rest_operands_80;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSsyntaxYsexpr_rest_operands,T121);
  lit_193 = YPPsym((P)"sexpr-make-application");
  lit_194 = YPPlist(2,YPPsym((P)"f"),YPPsym((P)"operands"));
  T125 = YPsig(LITREF(lit_194),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_sexpr_make_application_81 = YPmet(FUNCODEREF(fun_sexpr_make_application_81),LITREF(lit_193),T125,ENVNUL,PNUL,sloc(351));
  T128 = BOUNDP(YevalSsyntaxYsexpr_make_application);
  if (T128 != YPfalse) {
    T127 = VARREF(YevalSsyntaxYsexpr_make_application);
  } else {
    T127 = YPfalse;
  }
  T129 = fun_sexpr_make_application_81;
  T126 = XCALL2(1,VARREF(YPdefine_method),T127,T129);
  VARSET(YevalSsyntaxYsexpr_make_application,T126);
  VARSET(YevalSsyntaxYTunique_name_counterT,YPint((P)0));
  lit_195 = YPPsym((P)"sexpr-new-unique-name-counter!");
  lit_196 = Ynil;
  T130 = YPsig(LITREF(lit_196),Ynil,YPfalse,YPint((P)0),VARREF(YLintG),Ynil);
  fun_sexpr_new_unique_name_counterX_82 = YPmet(FUNCODEREF(fun_sexpr_new_unique_name_counterX_82),LITREF(lit_195),T130,ENVNUL,PNUL,sloc(356));
  T133 = BOUNDP(YevalSsyntaxYsexpr_new_unique_name_counterX);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSsyntaxYsexpr_new_unique_name_counterX);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_sexpr_new_unique_name_counterX_82;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSsyntaxYsexpr_new_unique_name_counterX,T131);
  VARSET(YevalSsyntaxYLnameG,VARREF(YLanyG));
  lit_197 = YPPsym((P)"sexpr-unique-name");
  lit_198 = YPPlist(1,YPPsym((P)"prefix"));
  T135 = YPsig(LITREF(lit_198),YPPlist(1,VARREF(YevalSsyntaxYLnameG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_unique_name_83 = YPmet(FUNCODEREF(fun_sexpr_unique_name_83),LITREF(lit_197),T135,ENVNUL,PNUL,sloc(363));
  T138 = BOUNDP(YevalSsyntaxYsexpr_unique_name);
  if (T138 != YPfalse) {
    T137 = VARREF(YevalSsyntaxYsexpr_unique_name);
  } else {
    T137 = YPfalse;
  }
  T139 = fun_sexpr_unique_name_83;
  T136 = XCALL2(1,VARREF(YPdefine_method),T137,T139);
  VARSET(YevalSsyntaxYsexpr_unique_name,T136);
  lit_199 = YPPsym((P)"def");
  VARSET(YevalSsyntaxYDsexpr_def_tag,LITREF(lit_199));
  lit_200 = YPPsym((P)"sexpr-def?");
  lit_201 = YPPlist(1,YPPsym((P)"exp"));
  T140 = YPsig(LITREF(lit_201),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_defQ_84 = YPmet(FUNCODEREF(fun_sexpr_defQ_84),LITREF(lit_200),T140,ENVNUL,PNUL,sloc(374));
  T143 = BOUNDP(YevalSsyntaxYsexpr_defQ);
  if (T143 != YPfalse) {
    T142 = VARREF(YevalSsyntaxYsexpr_defQ);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_sexpr_defQ_84;
  T141 = XCALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(YevalSsyntaxYsexpr_defQ,T141);
  lit_202 = YPPsym((P)"sexpr-def-variable");
  lit_203 = YPPlist(1,YPPsym((P)"exp"));
  T145 = YPsig(LITREF(lit_203),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_variable_85 = YPmet(FUNCODEREF(fun_sexpr_def_variable_85),LITREF(lit_202),T145,ENVNUL,PNUL,sloc(377));
  T148 = BOUNDP(YevalSsyntaxYsexpr_def_variable);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSsyntaxYsexpr_def_variable);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_sexpr_def_variable_85;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSsyntaxYsexpr_def_variable,T146);
  lit_204 = YPPsym((P)"sexpr-def-value");
  lit_205 = YPPlist(1,YPPsym((P)"exp"));
  T150 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_def_value_86 = YPmet(FUNCODEREF(fun_sexpr_def_value_86),LITREF(lit_204),T150,ENVNUL,PNUL,sloc(379));
  T153 = BOUNDP(YevalSsyntaxYsexpr_def_value);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSsyntaxYsexpr_def_value);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_sexpr_def_value_86;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSsyntaxYsexpr_def_value,T151);
  lit_206 = YPPsym((P)"let");
  VARSET(YevalSsyntaxYDsexpr_let_tag,LITREF(lit_206));
  lit_207 = YPPsym((P)"sexpr-let?");
  lit_208 = YPPlist(1,YPPsym((P)"exp"));
  T155 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_letQ_87 = YPmet(FUNCODEREF(fun_sexpr_letQ_87),LITREF(lit_207),T155,ENVNUL,PNUL,sloc(383));
  T158 = BOUNDP(YevalSsyntaxYsexpr_letQ);
  if (T158 != YPfalse) {
    T157 = VARREF(YevalSsyntaxYsexpr_letQ);
  } else {
    T157 = YPfalse;
  }
  T159 = fun_sexpr_letQ_87;
  T156 = XCALL2(1,VARREF(YPdefine_method),T157,T159);
  VARSET(YevalSsyntaxYsexpr_letQ,T156);
  lit_209 = YPPsym((P)"sexpr-let-bound-variables");
  lit_210 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_211 = YPPlist(1,YPPsym((P)"x"));
  T161 = YPsig(LITREF(lit_211),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T161,ENVNUL,PNUL,sloc(387));
  T160 = YPsig(LITREF(lit_210),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_bound_variables_89 = YPmet(FUNCODEREF(fun_sexpr_let_bound_variables_89),LITREF(lit_209),T160,ENVNUL,PNUL,sloc(386));
  T164 = BOUNDP(YevalSsyntaxYsexpr_let_bound_variables);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSsyntaxYsexpr_let_bound_variables);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_sexpr_let_bound_variables_89;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSsyntaxYsexpr_let_bound_variables,T162);
  lit_212 = YPPsym((P)"sexpr-let-values");
  lit_213 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_214 = YPPlist(1,YPPsym((P)"x"));
  T167 = YPsig(LITREF(lit_214),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T167,ENVNUL,PNUL,sloc(390));
  T166 = YPsig(LITREF(lit_213),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_let_values_91 = YPmet(FUNCODEREF(fun_sexpr_let_values_91),LITREF(lit_212),T166,ENVNUL,PNUL,sloc(389));
  T170 = BOUNDP(YevalSsyntaxYsexpr_let_values);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSsyntaxYsexpr_let_values);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_sexpr_let_values_91;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSsyntaxYsexpr_let_values,T168);
  lit_215 = YPPsym((P)"sexpr-let-body");
  lit_216 = YPPlist(1,YPPsym((P)"let-exp"));
  T172 = YPsig(LITREF(lit_216),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_body_92 = YPmet(FUNCODEREF(fun_sexpr_let_body_92),LITREF(lit_215),T172,ENVNUL,PNUL,sloc(392));
  T175 = BOUNDP(YevalSsyntaxYsexpr_let_body);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSsyntaxYsexpr_let_body);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_sexpr_let_body_92;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSsyntaxYsexpr_let_body,T173);
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
  T180 = YPsig(LITREF(lit_223),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_inner_93 = YPmet(FUNCODEREF(fun_inner_93),LITREF(lit_222),T180,ENVNUL,PNUL,sloc(406));
  T179 = YPsig(LITREF(lit_220),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_94 = YPmet(FUNCODEREF(fun_loop_94),LITREF(lit_219),T179,ENVNUL,PNUL,sloc(397));
  T178 = XCALL2(1,VARREF(YtT),VARREF(YLlstG),VARREF(YLlstG));
  T177 = YPsig(LITREF(lit_218),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),T178,Ynil);
  fun_sexpr_let_namesAvalues_95 = YPmet(FUNCODEREF(fun_sexpr_let_namesAvalues_95),LITREF(lit_217),T177,ENVNUL,PNUL,sloc(395));
  T183 = BOUNDP(YevalSsyntaxYsexpr_let_namesAvalues);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSsyntaxYsexpr_let_namesAvalues);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_sexpr_let_namesAvalues_95;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSsyntaxYsexpr_let_namesAvalues,T181);
  lit_229 = YPPsym((P)"sexpr-let->combination");
  lit_230 = YPPlist(1,YPPsym((P)"let-exp"));
  lit_231 = YPPsym((P)"col");
  lit_232 = YPPlist(2,YPPsym((P)"names"),YPPsym((P)"values"));
  T186 = YPsig(LITREF(lit_232),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_col_96 = YPmet(FUNCODEREF(fun_col_96),LITREF(lit_231),T186,ENVNUL,PNUL,sloc(434));
  T185 = YPsig(LITREF(lit_230),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_let_Gcombination_97 = YPmet(FUNCODEREF(fun_sexpr_let_Gcombination_97),LITREF(lit_229),T185,ENVNUL,PNUL,sloc(429));
  T189 = BOUNDP(YevalSsyntaxYsexpr_let_Gcombination);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSsyntaxYsexpr_let_Gcombination);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_sexpr_let_Gcombination_97;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSsyntaxYsexpr_let_Gcombination,T187);
  lit_233 = YPPsym((P)"loc");
  VARSET(YevalSsyntaxYDsexpr_locals_tag,LITREF(lit_233));
  lit_234 = YPPsym((P)"sexpr-loc?");
  lit_235 = YPPlist(1,YPPsym((P)"exp"));
  T191 = YPsig(LITREF(lit_235),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_locQ_98 = YPmet(FUNCODEREF(fun_sexpr_locQ_98),LITREF(lit_234),T191,ENVNUL,PNUL,sloc(445));
  T194 = BOUNDP(YevalSsyntaxYsexpr_locQ);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSsyntaxYsexpr_locQ);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_sexpr_locQ_98;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSsyntaxYsexpr_locQ,T192);
  lit_236 = YPPsym((P)"sexpr-loc-bound-names");
  lit_237 = YPPlist(1,YPPsym((P)"loc-exp"));
  T196 = YPsig(LITREF(lit_237),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_names_99 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_names_99),LITREF(lit_236),T196,ENVNUL,PNUL,sloc(448));
  T199 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_names);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSsyntaxYsexpr_loc_bound_names);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_sexpr_loc_bound_names_99;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSsyntaxYsexpr_loc_bound_names,T197);
  lit_238 = YPPsym((P)"sexpr-loc-bound-signatures");
  lit_239 = YPPlist(1,YPPsym((P)"loc-exp"));
  lit_240 = YPPlist(1,YPPsym((P)"x"));
  T202 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_100 = YPmet(FUNCODEREF(fun_100),YPfalse,T202,ENVNUL,PNUL,sloc(452));
  T201 = YPsig(LITREF(lit_239),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_signatures_101 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_signatures_101),LITREF(lit_238),T201,ENVNUL,PNUL,sloc(451));
  T205 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_signatures);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSsyntaxYsexpr_loc_bound_signatures);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_sexpr_loc_bound_signatures_101;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSsyntaxYsexpr_loc_bound_signatures,T203);
  lit_241 = YPPsym((P)"sexpr-loc-bound-bodies");
  lit_242 = YPPlist(1,YPPsym((P)"loc-exp"));
  T207 = YPsig(LITREF(lit_242),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_bound_bodies_102 = YPmet(FUNCODEREF(fun_sexpr_loc_bound_bodies_102),LITREF(lit_241),T207,ENVNUL,PNUL,sloc(456));
  T210 = BOUNDP(YevalSsyntaxYsexpr_loc_bound_bodies);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSsyntaxYsexpr_loc_bound_bodies);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_sexpr_loc_bound_bodies_102;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSsyntaxYsexpr_loc_bound_bodies,T208);
  lit_243 = YPPsym((P)"sexpr-loc-raw-body");
  lit_244 = YPPlist(1,YPPsym((P)"loc-exp"));
  T212 = YPsig(LITREF(lit_244),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_loc_raw_body_103 = YPmet(FUNCODEREF(fun_sexpr_loc_raw_body_103),LITREF(lit_243),T212,ENVNUL,PNUL,sloc(459));
  T215 = BOUNDP(YevalSsyntaxYsexpr_loc_raw_body);
  if (T215 != YPfalse) {
    T214 = VARREF(YevalSsyntaxYsexpr_loc_raw_body);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_sexpr_loc_raw_body_103;
  T213 = XCALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(YevalSsyntaxYsexpr_loc_raw_body,T213);
  lit_245 = YPPsym((P)"sexpr-loc-body");
  lit_246 = YPPlist(1,YPPsym((P)"loc-exp"));
  T217 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_loc_body_104 = YPmet(FUNCODEREF(fun_sexpr_loc_body_104),LITREF(lit_245),T217,ENVNUL,PNUL,sloc(462));
  T220 = BOUNDP(YevalSsyntaxYsexpr_loc_body);
  if (T220 != YPfalse) {
    T219 = VARREF(YevalSsyntaxYsexpr_loc_body);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_sexpr_loc_body_104;
  T218 = XCALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(YevalSsyntaxYsexpr_loc_body,T218);
  lit_247 = YPPsym((P)"rep");
  VARSET(YevalSsyntaxYDsexpr_iterate_tag,LITREF(lit_247));
  lit_248 = YPPsym((P)"sexpr-iterate?");
  lit_249 = YPPlist(1,YPPsym((P)"exp"));
  T222 = YPsig(LITREF(lit_249),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_iterateQ_105 = YPmet(FUNCODEREF(fun_sexpr_iterateQ_105),LITREF(lit_248),T222,ENVNUL,PNUL,sloc(468));
  T225 = BOUNDP(YevalSsyntaxYsexpr_iterateQ);
  if (T225 != YPfalse) {
    T224 = VARREF(YevalSsyntaxYsexpr_iterateQ);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_sexpr_iterateQ_105;
  T223 = XCALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(YevalSsyntaxYsexpr_iterateQ,T223);
  lit_250 = YPPsym((P)"sexpr-iterate-name");
  lit_251 = YPPlist(1,YPPsym((P)"rep-exp"));
  T227 = YPsig(LITREF(lit_251),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_iterate_name_106 = YPmet(FUNCODEREF(fun_sexpr_iterate_name_106),LITREF(lit_250),T227,ENVNUL,PNUL,sloc(471));
  T230 = BOUNDP(YevalSsyntaxYsexpr_iterate_name);
  if (T230 != YPfalse) {
    T229 = VARREF(YevalSsyntaxYsexpr_iterate_name);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_sexpr_iterate_name_106;
  T228 = XCALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(YevalSsyntaxYsexpr_iterate_name,T228);
  VARSET(YevalSsyntaxYDsexpr_values_tag,LITREF(lit_60));
  lit_252 = YPPsym((P)"sexpr-iterate-signature");
  lit_253 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_254 = YPPlist(1,YPPsym((P)"x"));
  T233 = YPsig(LITREF(lit_254),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T233,ENVNUL,PNUL,sloc(478));
  T232 = YPsig(LITREF(lit_253),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_signature_108 = YPmet(FUNCODEREF(fun_sexpr_iterate_signature_108),LITREF(lit_252),T232,ENVNUL,PNUL,sloc(476));
  T236 = BOUNDP(YevalSsyntaxYsexpr_iterate_signature);
  if (T236 != YPfalse) {
    T235 = VARREF(YevalSsyntaxYsexpr_iterate_signature);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_sexpr_iterate_signature_108;
  T234 = XCALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(YevalSsyntaxYsexpr_iterate_signature,T234);
  lit_255 = YPPsym((P)"sexpr-iterate-inits");
  lit_256 = YPPlist(1,YPPsym((P)"rep-exp"));
  lit_257 = YPPlist(1,YPPsym((P)"x"));
  T239 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T239,ENVNUL,PNUL,sloc(486));
  T238 = YPsig(LITREF(lit_256),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_inits_110 = YPmet(FUNCODEREF(fun_sexpr_iterate_inits_110),LITREF(lit_255),T238,ENVNUL,PNUL,sloc(485));
  T242 = BOUNDP(YevalSsyntaxYsexpr_iterate_inits);
  if (T242 != YPfalse) {
    T241 = VARREF(YevalSsyntaxYsexpr_iterate_inits);
  } else {
    T241 = YPfalse;
  }
  T243 = fun_sexpr_iterate_inits_110;
  T240 = XCALL2(1,VARREF(YPdefine_method),T241,T243);
  VARSET(YevalSsyntaxYsexpr_iterate_inits,T240);
  lit_258 = YPPsym((P)"sexpr-iterate-body");
  lit_259 = YPPlist(1,YPPsym((P)"rep-exp"));
  T244 = YPsig(LITREF(lit_259),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_body_111 = YPmet(FUNCODEREF(fun_sexpr_iterate_body_111),LITREF(lit_258),T244,ENVNUL,PNUL,sloc(488));
  T247 = BOUNDP(YevalSsyntaxYsexpr_iterate_body);
  if (T247 != YPfalse) {
    T246 = VARREF(YevalSsyntaxYsexpr_iterate_body);
  } else {
    T246 = YPfalse;
  }
  T248 = fun_sexpr_iterate_body_111;
  T245 = XCALL2(1,VARREF(YPdefine_method),T246,T248);
  VARSET(YevalSsyntaxYsexpr_iterate_body,T245);
  lit_260 = YPPsym((P)"sexpr-iterate->loc");
  lit_261 = YPPlist(1,YPPsym((P)"rep-exp"));
  T249 = YPsig(LITREF(lit_261),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_iterate_Gloc_112 = YPmet(FUNCODEREF(fun_sexpr_iterate_Gloc_112),LITREF(lit_260),T249,ENVNUL,PNUL,sloc(491));
  T252 = BOUNDP(YevalSsyntaxYsexpr_iterate_Gloc);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSsyntaxYsexpr_iterate_Gloc);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_sexpr_iterate_Gloc_112;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSsyntaxYsexpr_iterate_Gloc,T250);
  lit_262 = YPPsym((P)"isa");
  VARSET(YevalSsyntaxYDsexpr_isa_tag,LITREF(lit_262));
  lit_263 = YPPsym((P)"sexpr-isa?");
  lit_264 = YPPlist(1,YPPsym((P)"exp"));
  T254 = YPsig(LITREF(lit_264),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_isaQ_113 = YPmet(FUNCODEREF(fun_sexpr_isaQ_113),LITREF(lit_263),T254,ENVNUL,PNUL,sloc(505));
  T257 = BOUNDP(YevalSsyntaxYsexpr_isaQ);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSsyntaxYsexpr_isaQ);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_sexpr_isaQ_113;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSsyntaxYsexpr_isaQ,T255);
  lit_265 = YPPsym((P)"sexpr-isa-parent");
  lit_266 = YPPlist(1,YPPsym((P)"exp"));
  T259 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_isa_parent_114 = YPmet(FUNCODEREF(fun_sexpr_isa_parent_114),LITREF(lit_265),T259,ENVNUL,PNUL,sloc(508));
  T262 = BOUNDP(YevalSsyntaxYsexpr_isa_parent);
  if (T262 != YPfalse) {
    T261 = VARREF(YevalSsyntaxYsexpr_isa_parent);
  } else {
    T261 = YPfalse;
  }
  T263 = fun_sexpr_isa_parent_114;
  T260 = XCALL2(1,VARREF(YPdefine_method),T261,T263);
  VARSET(YevalSsyntaxYsexpr_isa_parent,T260);
  lit_267 = YPPsym((P)"sexpr-isa-prop-inits");
  lit_268 = YPPlist(1,YPPsym((P)"exp"));
  T264 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_prop_inits_115 = YPmet(FUNCODEREF(fun_sexpr_isa_prop_inits_115),LITREF(lit_267),T264,ENVNUL,PNUL,sloc(511));
  T267 = BOUNDP(YevalSsyntaxYsexpr_isa_prop_inits);
  if (T267 != YPfalse) {
    T266 = VARREF(YevalSsyntaxYsexpr_isa_prop_inits);
  } else {
    T266 = YPfalse;
  }
  T268 = fun_sexpr_isa_prop_inits_115;
  T265 = XCALL2(1,VARREF(YPdefine_method),T266,T268);
  VARSET(YevalSsyntaxYsexpr_isa_prop_inits,T265);
  lit_269 = YPPsym((P)"sexpr-isa-init-props");
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  T271 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  T270 = fun_sexpr_isa_init_props_116 = YPmet(FUNCODEREF(fun_sexpr_isa_init_props_116),LITREF(lit_269),T271,ENVNUL,PNUL,sloc(514));
  T275 = BOUNDP(YevalSsyntaxYsexpr_isa_init_props);
  if (T275 != YPfalse) {
    T274 = VARREF(YevalSsyntaxYsexpr_isa_init_props);
  } else {
    T274 = YPfalse;
  }
  T276 = fun_sexpr_isa_init_props_116;
  T273 = XCALL2(1,VARREF(YPdefine_method),T274,T276);
  T272 = VARSET(YevalSsyntaxYsexpr_isa_init_props,T273);
  T269 = T272;
  return T269;
}

P YevalSsyntaxY___main_2___() {
  P tmpF2620;
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
  P T176,T177,T178,T179,T180,T181;
DEFCREGS();
loop:
  lit_271 = YPPsym((P)"sexpr-isa-init-values");
  lit_272 = YPPlist(1,YPPsym((P)"exp"));
  T0 = YPsig(LITREF(lit_272),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_isa_init_values_117 = YPmet(FUNCODEREF(fun_sexpr_isa_init_values_117),LITREF(lit_271),T0,ENVNUL,PNUL,sloc(517));
  T3 = BOUNDP(YevalSsyntaxYsexpr_isa_init_values);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSsyntaxYsexpr_isa_init_values);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_sexpr_isa_init_values_117;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSsyntaxYsexpr_isa_init_values,T1);
  lit_273 = YPPsym((P)"dc");
  VARSET(YevalSsyntaxYDsexpr_define_class_tag,LITREF(lit_273));
  lit_274 = YPPsym((P)"sexpr-define-class?");
  lit_275 = YPPlist(1,YPPsym((P)"exp"));
  T5 = YPsig(LITREF(lit_275),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_define_classQ_118 = YPmet(FUNCODEREF(fun_sexpr_define_classQ_118),LITREF(lit_274),T5,ENVNUL,PNUL,sloc(524));
  T8 = BOUNDP(YevalSsyntaxYsexpr_define_classQ);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSsyntaxYsexpr_define_classQ);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_sexpr_define_classQ_118;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSsyntaxYsexpr_define_classQ,T6);
  lit_276 = YPPsym((P)"sexpr-define-class-parents");
  lit_277 = YPPlist(1,YPPsym((P)"exp"));
  T10 = YPsig(LITREF(lit_277),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_define_class_parents_119 = YPmet(FUNCODEREF(fun_sexpr_define_class_parents_119),LITREF(lit_276),T10,ENVNUL,PNUL,sloc(527));
  T13 = BOUNDP(YevalSsyntaxYsexpr_define_class_parents);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSsyntaxYsexpr_define_class_parents);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_sexpr_define_class_parents_119;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSsyntaxYsexpr_define_class_parents,T11);
  lit_278 = YPPsym((P)"dp");
  VARSET(YevalSsyntaxYDsexpr_prop_tag,LITREF(lit_278));
  lit_279 = YPPsym((P)"sexpr-prop?");
  lit_280 = YPPlist(1,YPPsym((P)"exp"));
  T15 = YPsig(LITREF(lit_280),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_propQ_120 = YPmet(FUNCODEREF(fun_sexpr_propQ_120),LITREF(lit_279),T15,ENVNUL,PNUL,sloc(536));
  T18 = BOUNDP(YevalSsyntaxYsexpr_propQ);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSsyntaxYsexpr_propQ);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_sexpr_propQ_120;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSsyntaxYsexpr_propQ,T16);
  lit_281 = YPPsym((P)"sexpr-prop-name");
  lit_282 = YPPlist(1,YPPsym((P)"exp"));
  T20 = YPsig(LITREF(lit_282),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_prop_name_121 = YPmet(FUNCODEREF(fun_sexpr_prop_name_121),LITREF(lit_281),T20,ENVNUL,PNUL,sloc(539));
  T23 = BOUNDP(YevalSsyntaxYsexpr_prop_name);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSsyntaxYsexpr_prop_name);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_sexpr_prop_name_121;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSsyntaxYsexpr_prop_name,T21);
  lit_283 = YPPsym((P)"sexpr-prop-owner");
  lit_284 = YPPlist(1,YPPsym((P)"exp"));
  T25 = YPsig(LITREF(lit_284),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_owner_122 = YPmet(FUNCODEREF(fun_sexpr_prop_owner_122),LITREF(lit_283),T25,ENVNUL,PNUL,sloc(542));
  T28 = BOUNDP(YevalSsyntaxYsexpr_prop_owner);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSsyntaxYsexpr_prop_owner);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_sexpr_prop_owner_122;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSsyntaxYsexpr_prop_owner,T26);
  lit_285 = YPPsym((P)"sexpr-prop-init-var");
  lit_286 = YPPlist(1,YPPsym((P)"exp"));
  lit_287 = YPPsym((P)"_x");
  T30 = YPsig(LITREF(lit_286),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_var_123 = YPmet(FUNCODEREF(fun_sexpr_prop_init_var_123),LITREF(lit_285),T30,ENVNUL,PNUL,sloc(548));
  T33 = BOUNDP(YevalSsyntaxYsexpr_prop_init_var);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSsyntaxYsexpr_prop_init_var);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_sexpr_prop_init_var_123;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSsyntaxYsexpr_prop_init_var,T31);
  lit_288 = YPPsym((P)"sexpr-prop-type");
  lit_289 = YPPlist(1,YPPsym((P)"exp"));
  T35 = YPsig(LITREF(lit_289),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_type_124 = YPmet(FUNCODEREF(fun_sexpr_prop_type_124),LITREF(lit_288),T35,ENVNUL,PNUL,sloc(554));
  T38 = BOUNDP(YevalSsyntaxYsexpr_prop_type);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSsyntaxYsexpr_prop_type);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_sexpr_prop_type_124;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSsyntaxYsexpr_prop_type,T36);
  lit_290 = YPPsym((P)"sexpr-prop-init?");
  lit_291 = YPPlist(1,YPPsym((P)"exp"));
  T40 = YPsig(LITREF(lit_291),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_prop_initQ_125 = YPmet(FUNCODEREF(fun_sexpr_prop_initQ_125),LITREF(lit_290),T40,ENVNUL,PNUL,sloc(557));
  T43 = BOUNDP(YevalSsyntaxYsexpr_prop_initQ);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYsexpr_prop_initQ);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_sexpr_prop_initQ_125;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYsexpr_prop_initQ,T41);
  lit_292 = YPPsym((P)"sexpr-prop-init");
  lit_293 = YPPlist(1,YPPsym((P)"exp"));
  T45 = YPsig(LITREF(lit_293),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_prop_init_126 = YPmet(FUNCODEREF(fun_sexpr_prop_init_126),LITREF(lit_292),T45,ENVNUL,PNUL,sloc(560));
  T48 = BOUNDP(YevalSsyntaxYsexpr_prop_init);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSsyntaxYsexpr_prop_init);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_sexpr_prop_init_126;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSsyntaxYsexpr_prop_init,T46);
  lit_294 = YPPsym((P)"sexpr-fab-getter");
  lit_295 = YPPlist(3,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"line"));
  lit_296 = YPPsym((P)"prop-value");
  T50 = YPsig(LITREF(lit_295),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_getter_127 = YPmet(FUNCODEREF(fun_sexpr_fab_getter_127),LITREF(lit_294),T50,ENVNUL,PNUL,sloc(563));
  T53 = BOUNDP(YevalSsyntaxYsexpr_fab_getter);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSsyntaxYsexpr_fab_getter);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_sexpr_fab_getter_127;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSsyntaxYsexpr_fab_getter,T51);
  lit_297 = YPPsym((P)"sexpr-fab-setter");
  lit_298 = YPPlist(4,YPPsym((P)"name"),YPPsym((P)"type"),YPPsym((P)"prop-type"),YPPsym((P)"line"));
  lit_299 = YPPsym((P)"_z");
  lit_300 = YPPsym((P)"prop-value-setter");
  T55 = YPsig(LITREF(lit_298),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_fab_setter_128 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_128),LITREF(lit_297),T55,ENVNUL,PNUL,sloc(568));
  T58 = BOUNDP(YevalSsyntaxYsexpr_fab_setter);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSsyntaxYsexpr_fab_setter);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_sexpr_fab_setter_128;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSsyntaxYsexpr_fab_setter,T56);
  lit_301 = YPPsym((P)"sexpr-fab-setter-name");
  lit_302 = YPPlist(1,YPPsym((P)"name"));
  lit_303 = YPsb((P)"-setter");
  T60 = YPsig(LITREF(lit_302),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_sexpr_fab_setter_name_129 = YPmet(FUNCODEREF(fun_sexpr_fab_setter_name_129),LITREF(lit_301),T60,ENVNUL,PNUL,sloc(574));
  T63 = BOUNDP(YevalSsyntaxYsexpr_fab_setter_name);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalSsyntaxYsexpr_fab_setter_name);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_sexpr_fab_setter_name_129;
  T61 = XCALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalSsyntaxYsexpr_fab_setter_name,T61);
  lit_304 = YPPsym((P)"sexpr-macro?");
  lit_305 = YPPlist(1,YPPsym((P)"exp"));
  T65 = YPsig(LITREF(lit_305),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macroQ_130 = YPmet(FUNCODEREF(fun_sexpr_macroQ_130),LITREF(lit_304),T65,ENVNUL,PNUL,sloc(579));
  T68 = BOUNDP(YevalSsyntaxYsexpr_macroQ);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSsyntaxYsexpr_macroQ);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_sexpr_macroQ_130;
  T66 = XCALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSsyntaxYsexpr_macroQ,T66);
  lit_306 = YPPsym((P)"macro-expand");
  VARSET(YevalSsyntaxYDsexpr_macro_expand_tag,LITREF(lit_306));
  lit_307 = YPPsym((P)"sexpr-macro-expand?");
  lit_308 = YPPlist(1,YPPsym((P)"exp"));
  T70 = YPsig(LITREF(lit_308),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_macro_expandQ_131 = YPmet(FUNCODEREF(fun_sexpr_macro_expandQ_131),LITREF(lit_307),T70,ENVNUL,PNUL,sloc(584));
  T73 = BOUNDP(YevalSsyntaxYsexpr_macro_expandQ);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalSsyntaxYsexpr_macro_expandQ);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_sexpr_macro_expandQ_131;
  T71 = XCALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalSsyntaxYsexpr_macro_expandQ,T71);
  lit_309 = YPPsym((P)"mif");
  VARSET(YevalSsyntaxYDsexpr_syntax_if_tag,LITREF(lit_309));
  lit_310 = YPPsym((P)"sexpr-make-syntax-if");
  lit_311 = YPPlist(4,YPPsym((P)"pat"),YPPsym((P)"exp"),YPPsym((P)"then"),YPPsym((P)"else"));
  T75 = YPsig(LITREF(lit_311),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  fun_sexpr_make_syntax_if_132 = YPmet(FUNCODEREF(fun_sexpr_make_syntax_if_132),LITREF(lit_310),T75,ENVNUL,PNUL,sloc(589));
  T78 = BOUNDP(YevalSsyntaxYsexpr_make_syntax_if);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalSsyntaxYsexpr_make_syntax_if);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_sexpr_make_syntax_if_132;
  T76 = XCALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalSsyntaxYsexpr_make_syntax_if,T76);
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
  T80 = YPsig(LITREF(lit_320),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  YevalSsyntaxYsexpr_expand_backquote = YPmet(FUNCODEREF(YevalSsyntaxYsexpr_expand_backquote),LITREF(lit_319),T80,ENVNUL,PNUL,sloc(602));
  T81 = YevalSsyntaxYsexpr_expand_backquote;
  VARSET(YevalSsyntaxYsexpr_expand_backquote,T81);
  lit_322 = YPPsym((P)"sexpr-build-backquote-expander");
  lit_323 = YPPlist(1,YPPsym((P)"x"));
  T82 = YPsig(LITREF(lit_323),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_build_backquote_expander_134 = YPmet(FUNCODEREF(fun_sexpr_build_backquote_expander_134),LITREF(lit_322),T82,ENVNUL,PNUL,sloc(605));
  T85 = BOUNDP(YevalSsyntaxYsexpr_build_backquote_expander);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSsyntaxYsexpr_build_backquote_expander);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_sexpr_build_backquote_expander_134;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSsyntaxYsexpr_build_backquote_expander,T83);
  lit_324 = YPPsym((P)"sexpr-unquote?");
  lit_325 = YPPlist(1,YPPsym((P)"x"));
  lit_326 = YPPsym((P)"unquote");
  T87 = YPsig(LITREF(lit_325),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquoteQ_135 = YPmet(FUNCODEREF(fun_sexpr_unquoteQ_135),LITREF(lit_324),T87,ENVNUL,PNUL,sloc(611));
  T90 = BOUNDP(YevalSsyntaxYsexpr_unquoteQ);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSsyntaxYsexpr_unquoteQ);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_sexpr_unquoteQ_135;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSsyntaxYsexpr_unquoteQ,T88);
  lit_327 = YPPsym((P)"sexpr-unquote-splicing?");
  lit_328 = YPPlist(1,YPPsym((P)"x"));
  lit_329 = YPPsym((P)"unquote-splicing");
  T92 = YPsig(LITREF(lit_328),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_unquote_splicingQ_136 = YPmet(FUNCODEREF(fun_sexpr_unquote_splicingQ_136),LITREF(lit_327),T92,ENVNUL,PNUL,sloc(614));
  T95 = BOUNDP(YevalSsyntaxYsexpr_unquote_splicingQ);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalSsyntaxYsexpr_unquote_splicingQ);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_sexpr_unquote_splicingQ_136;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalSsyntaxYsexpr_unquote_splicingQ,T93);
  lit_330 = YPPsym((P)"sexpr-backquote?");
  lit_331 = YPPlist(1,YPPsym((P)"x"));
  T97 = YPsig(LITREF(lit_331),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_backquoteQ_137 = YPmet(FUNCODEREF(fun_sexpr_backquoteQ_137),LITREF(lit_330),T97,ENVNUL,PNUL,sloc(617));
  T100 = BOUNDP(YevalSsyntaxYsexpr_backquoteQ);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalSsyntaxYsexpr_backquoteQ);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_sexpr_backquoteQ_137;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalSsyntaxYsexpr_backquoteQ,T98);
  lit_332 = YPPsym((P)"sexpr-atom?");
  lit_333 = YPPlist(1,YPPsym((P)"x"));
  T102 = YPsig(LITREF(lit_333),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_atomQ_138 = YPmet(FUNCODEREF(fun_sexpr_atomQ_138),LITREF(lit_332),T102,ENVNUL,PNUL,sloc(620));
  T105 = BOUNDP(YevalSsyntaxYsexpr_atomQ);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalSsyntaxYsexpr_atomQ);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_sexpr_atomQ_138;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalSsyntaxYsexpr_atomQ,T103);
  lit_334 = YPPsym((P)"nreconc");
  lit_335 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T107 = YPsig(LITREF(lit_335),YPPlist(2,VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLlstG),Ynil);
  fun_nreconc_139 = YPmet(FUNCODEREF(fun_nreconc_139),LITREF(lit_334),T107,ENVNUL,PNUL,sloc(623));
  T110 = BOUNDP(YevalSsyntaxYnreconc);
  if (T110 != YPfalse) {
    T109 = VARREF(YevalSsyntaxYnreconc);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_nreconc_139;
  T108 = XCALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(YevalSsyntaxYnreconc,T108);
  lit_336 = YPPsym((P)"bq-process");
  lit_337 = YPPlist(1,YPPsym((P)"x"));
  lit_338 = YPsb((P)"UNQUOTE-SPLICING %= AFTER BQ");
  lit_339 = YPPlist(1,YPPsym((P)"return"));
  lit_340 = YPPlist(2,YPPsym((P)"p"),YPPsym((P)"q"));
  lit_341 = YPsb((P)"Malformed ,%=");
  lit_342 = YPsb((P)"Dotted ,@%=");
  T114 = YPsig(LITREF(lit_340),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_140 = YPmet(FUNCODEREF(fun_loop_140),LITREF(lit_219),T114,ENVNUL,PNUL,sloc(637));
  T113 = YPsig(LITREF(lit_339),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T113,ENVNUL,PNUL,sloc(636));
  T112 = YPsig(LITREF(lit_337),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_process_142 = YPmet(FUNCODEREF(fun_bq_process_142),LITREF(lit_336),T112,ENVNUL,PNUL,sloc(626));
  T117 = BOUNDP(YevalSsyntaxYbq_process);
  if (T117 != YPfalse) {
    T116 = VARREF(YevalSsyntaxYbq_process);
  } else {
    T116 = YPfalse;
  }
  T118 = fun_bq_process_142;
  T115 = XCALL2(1,VARREF(YPdefine_method),T116,T118);
  VARSET(YevalSsyntaxYbq_process,T115);
  lit_343 = YPPsym((P)"bracket");
  lit_344 = YPPlist(1,YPPsym((P)"x"));
  T119 = YPsig(LITREF(lit_344),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bracket_143 = YPmet(FUNCODEREF(fun_bracket_143),LITREF(lit_343),T119,ENVNUL,PNUL,sloc(651));
  T122 = BOUNDP(YevalSsyntaxYbracket);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalSsyntaxYbracket);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bracket_143;
  T120 = XCALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalSsyntaxYbracket,T120);
  lit_345 = YPPsym((P)"map-tree");
  lit_346 = YPPlist(2,YPPsym((P)"fn"),YPPsym((P)"x"));
  T124 = YPsig(LITREF(lit_346),YPPlist(2,VARREF(YLfunG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_map_tree_144 = YPmet(FUNCODEREF(fun_map_tree_144),LITREF(lit_345),T124,ENVNUL,PNUL,sloc(661));
  T127 = BOUNDP(YevalSsyntaxYmap_tree);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalSsyntaxYmap_tree);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_map_tree_144;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalSsyntaxYmap_tree,T125);
  lit_347 = YPPsym((P)"bq-remove-tokens");
  lit_348 = YPPlist(1,YPPsym((P)"x"));
  lit_349 = YPPsym((P)"cat");
  lit_350 = YPPsym((P)"cat!");
  lit_351 = YPPsym((P)"list*");
  lit_352 = YPPsym((P)"pair");
  T129 = YPsig(LITREF(lit_348),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bq_remove_tokens_145 = YPmet(FUNCODEREF(fun_bq_remove_tokens_145),LITREF(lit_347),T129,ENVNUL,PNUL,sloc(670));
  T132 = BOUNDP(YevalSsyntaxYbq_remove_tokens);
  if (T132 != YPfalse) {
    T131 = VARREF(YevalSsyntaxYbq_remove_tokens);
  } else {
    T131 = YPfalse;
  }
  T133 = fun_bq_remove_tokens_145;
  T130 = XCALL2(1,VARREF(YPdefine_method),T131,T133);
  VARSET(YevalSsyntaxYbq_remove_tokens,T130);
  lit_353 = YPPsym((P)"sexpr-syntax-if?");
  lit_354 = YPPlist(1,YPPsym((P)"exp"));
  T134 = YPsig(LITREF(lit_354),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_syntax_ifQ_146 = YPmet(FUNCODEREF(fun_sexpr_syntax_ifQ_146),LITREF(lit_353),T134,ENVNUL,PNUL,sloc(688));
  T137 = BOUNDP(YevalSsyntaxYsexpr_syntax_ifQ);
  if (T137 != YPfalse) {
    T136 = VARREF(YevalSsyntaxYsexpr_syntax_ifQ);
  } else {
    T136 = YPfalse;
  }
  T138 = fun_sexpr_syntax_ifQ_146;
  T135 = XCALL2(1,VARREF(YPdefine_method),T136,T138);
  VARSET(YevalSsyntaxYsexpr_syntax_ifQ,T135);
  lit_355 = YPPsym((P)"sexpr-syntax-if-value");
  lit_356 = YPPlist(1,YPPsym((P)"exp"));
  T139 = YPsig(LITREF(lit_356),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_value_147 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_value_147),LITREF(lit_355),T139,ENVNUL,PNUL,sloc(691));
  T142 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_value);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSsyntaxYsexpr_syntax_if_value);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_sexpr_syntax_if_value_147;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSsyntaxYsexpr_syntax_if_value,T140);
  lit_357 = YPPsym((P)"sexpr-syntax-if-pattern");
  lit_358 = YPPlist(1,YPPsym((P)"exp"));
  T144 = YPsig(LITREF(lit_358),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_pattern_148 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_pattern_148),LITREF(lit_357),T144,ENVNUL,PNUL,sloc(694));
  T147 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_pattern);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSsyntaxYsexpr_syntax_if_pattern);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_sexpr_syntax_if_pattern_148;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSsyntaxYsexpr_syntax_if_pattern,T145);
  lit_359 = YPPsym((P)"sexpr-syntax-if-then");
  lit_360 = YPPlist(1,YPPsym((P)"exp"));
  T149 = YPsig(LITREF(lit_360),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_then_149 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_then_149),LITREF(lit_359),T149,ENVNUL,PNUL,sloc(697));
  T152 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_then);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSsyntaxYsexpr_syntax_if_then);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_sexpr_syntax_if_then_149;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSsyntaxYsexpr_syntax_if_then,T150);
  lit_361 = YPPsym((P)"sexpr-syntax-if-else");
  lit_362 = YPPlist(1,YPPsym((P)"exp"));
  T154 = YPsig(LITREF(lit_362),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_syntax_if_else_150 = YPmet(FUNCODEREF(fun_sexpr_syntax_if_else_150),LITREF(lit_361),T154,ENVNUL,PNUL,sloc(702));
  T157 = BOUNDP(YevalSsyntaxYsexpr_syntax_if_else);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSsyntaxYsexpr_syntax_if_else);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_sexpr_syntax_if_else_150;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSsyntaxYsexpr_syntax_if_else,T155);
  lit_363 = YPPsym((P)"sexpr-pattern-variable?");
  lit_364 = YPPlist(1,YPPsym((P)"pat"));
  T159 = YPsig(LITREF(lit_364),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_sexpr_pattern_variableQ_151 = YPmet(FUNCODEREF(fun_sexpr_pattern_variableQ_151),LITREF(lit_363),T159,ENVNUL,PNUL,sloc(705));
  T162 = BOUNDP(YevalSsyntaxYsexpr_pattern_variableQ);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSsyntaxYsexpr_pattern_variableQ);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_sexpr_pattern_variableQ_151;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSsyntaxYsexpr_pattern_variableQ,T160);
  lit_365 = YPPsym((P)"sexpr-pattern-variable-name");
  lit_366 = YPPlist(1,YPPsym((P)"pat"));
  T164 = YPsig(LITREF(lit_366),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_sexpr_pattern_variable_name_152 = YPmet(FUNCODEREF(fun_sexpr_pattern_variable_name_152),LITREF(lit_365),T164,ENVNUL,PNUL,sloc(708));
  T167 = BOUNDP(YevalSsyntaxYsexpr_pattern_variable_name);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSsyntaxYsexpr_pattern_variable_name);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_sexpr_pattern_variable_name_152;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSsyntaxYsexpr_pattern_variable_name,T165);
  lit_367 = YPPsym((P)"sexpr-bind-pattern-variables");
  lit_368 = YPPlist(1,YPPsym((P)"pat"));
  lit_369 = YPPlist(1,YPPsym((P)"pat"));
  T170 = YPsig(LITREF(lit_369),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_col_153 = YPmet(FUNCODEREF(fun_col_153),LITREF(lit_231),T170,ENVNUL,PNUL,sloc(713));
  T169 = YPsig(LITREF(lit_368),YPPlist(1,VARREF(YLlstG)),YPfalse,YPint((P)1),VARREF(YLlstG),Ynil);
  fun_sexpr_bind_pattern_variables_154 = YPmet(FUNCODEREF(fun_sexpr_bind_pattern_variables_154),LITREF(lit_367),T169,ENVNUL,PNUL,sloc(711));
  T173 = BOUNDP(YevalSsyntaxYsexpr_bind_pattern_variables);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSsyntaxYsexpr_bind_pattern_variables);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_sexpr_bind_pattern_variables_154;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSsyntaxYsexpr_bind_pattern_variables,T171);
  lit_370 = YPPsym((P)"sexpr-make-macro-function");
  lit_371 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"exp"));
  lit_372 = YPPsym((P)"exp");
  lit_373 = YPPsym((P)"macro-error");
  T175 = YPsig(LITREF(lit_371),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_sexpr_make_macro_function_155 = YPmet(FUNCODEREF(fun_sexpr_make_macro_function_155),LITREF(lit_370),T175,ENVNUL,PNUL,sloc(724));
  T178 = BOUNDP(YevalSsyntaxYsexpr_make_macro_function);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSsyntaxYsexpr_make_macro_function);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_sexpr_make_macro_function_155;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSsyntaxYsexpr_make_macro_function,T176);
  tmpF2620 = YPfalse;
  if (tmpF2620 != YPfalse) {
    T180 = VARREF(YevalSsyntaxYeval);
  } else {
    T180 = YPfalse;
  }
  T181 = YPfalse;
  return T181;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstr;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooScolsSlst},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"<handler-info>", &module_info_gooSconditions, "<handler-info>"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"atan", &module_info_gooSmath, "atan"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"file-opening-error-filename", &module_info_gooSconditions, "file-opening-error-filename"},
  {"%vm-fun-env-elt", &module_info_gooSboot, "%vm-fun-env-elt"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"<file-opening-error>", &module_info_gooSconditions, "<file-opening-error>"},
  {"elt!", &module_info_gooScolsScolx, "elt!"},
  {"<property-not-found-error>", &module_info_gooSconditions, "<property-not-found-error>"},
  {"if", &module_info_gooSboot, "if"},
  {"<line>", &module_info_gooScolsSlst, "<line>"},
  {"def-list", &module_info_gooScolsSlst, "def-list"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"1-", &module_info_gooSmath, "1-"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"abs", &module_info_gooSmath, "abs"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"try", &module_info_gooSboot, "try"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"src-loc-line", &module_info_gooSboot, "src-loc-line"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"-", &module_info_gooSmath, "-"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"find", &module_info_gooScolsScol, "find"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"t?", &module_info_gooStypes, "t?"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"no-applicable-methods-error", &module_info_gooSboot, "no-applicable-methods-error"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%vm-fun-env-fab", &module_info_gooSboot, "%vm-fun-env-fab"},
  {"==", &module_info_gooSmacros, "=="},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"nul", &module_info_gooSboot, "nul"},
  {"nil", &module_info_gooSboot, "nil"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"len", &module_info_gooStypes, "len"},
  {"<property-unbound-error>", &module_info_gooSconditions, "<property-unbound-error>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"type-error-value", &module_info_gooSconditions, "type-error-value"},
  {"dl", &module_info_gooSboot, "dl"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"let", &module_info_gooSboot, "let"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%su", &module_info_gooSboot, "%su"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%met", &module_info_gooSboot, "%met"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<compiler-error>", &module_info_gooSconditions, "<compiler-error>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"match", &module_info_gooSmacros, "match"},
  {"<macro-error>", &module_info_gooSconditions, "<macro-error>"},
  {"t<", &module_info_gooStypes, "t<"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"$e", &module_info_gooSmath, "$e"},
  {"^", &module_info_gooSmath, "^"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<line-list>", &module_info_gooScolsSlst, "<line-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"rem", &module_info_gooSmath, "rem"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"condition-arguments", &module_info_gooSconditions, "condition-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"<condition>", &module_info_gooSconditions, "<condition>"},
  {"~=", &module_info_gooSmath, "~="},
  {"rep", &module_info_gooSboot, "rep"},
  {"fab-handler", &module_info_gooSconditions, "fab-handler"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"tail", &module_info_gooSboot, "tail"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"df", &module_info_gooSboot, "df"},
  {"close", &module_info_gooSioSport, "close"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"%put", &module_info_gooSboot, "%put"},
  {"return-type-error", &module_info_gooSboot, "return-type-error"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"type-error-type", &module_info_gooSconditions, "type-error-type"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"neg", &module_info_gooSmath, "neg"},
  {"<arithmetic-error>", &module_info_gooSconditions, "<arithmetic-error>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"%im", &module_info_gooSboot, "%im"},
  {"t=", &module_info_gooStypes, "t="},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"dg", &module_info_gooSboot, "dg"},
  {"max", &module_info_gooSmag, "max"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"when", &module_info_gooSmacros, "when"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"round/", &module_info_gooSmath, "round/"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"logn", &module_info_gooSmath, "logn"},
  {"msg", &module_info_gooSconditions, "msg"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"error", &module_info_gooSboot, "error"},
  {"<arity-error>", &module_info_gooSconditions, "<arity-error>"},
  {"call-error-arguments", &module_info_gooSconditions, "call-error-arguments"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sin", &module_info_gooSmath, "sin"},
  {"dc", &module_info_gooSboot, "dc"},
  {"argument-type-error", &module_info_gooSboot, "argument-type-error"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"loc", &module_info_gooSboot, "loc"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"until", &module_info_gooSmacros, "until"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"%time", &module_info_gooSboot, "%time"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"<internal-error>", &module_info_gooSconditions, "<internal-error>"},
  {"line-list-of", &module_info_gooScolsSlst, "line-list-of"},
  {"fun-sig", &module_info_gooSboot, "fun-sig"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"macro-error-arguments", &module_info_gooSconditions, "macro-error-arguments"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<error>", &module_info_gooSconditions, "<error>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"even?", &module_info_gooSmath, "even?"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"sub*-setter", &module_info_gooScolsSseqx, "sub*-setter"},
  {"<argument-type-error>", &module_info_gooSconditions, "<argument-type-error>"},
  {"acos", &module_info_gooSmath, "acos"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"min", &module_info_gooSmag, "min"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"app", &module_info_gooSmacros, "app"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%vm-box-val-setter", &module_info_gooSboot, "%vm-box-val-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"range-error-key", &module_info_gooSconditions, "range-error-key"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"property-not-found-error", &module_info_gooSboot, "property-not-found-error"},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<property-type-error>", &module_info_gooSconditions, "<property-type-error>"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"<property-error>", &module_info_gooSconditions, "<property-error>"},
  {"do", &module_info_gooSmacros, "do"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"@opts-as-lst", &module_info_gooSboot, "@opts-as-lst"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"sub*", &module_info_gooScolsSseq, "sub*"},
  {">", &module_info_gooSmag, ">"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"<return-type-error>", &module_info_gooSconditions, "<return-type-error>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"arity-error", &module_info_gooSboot, "arity-error"},
  {"open", &module_info_gooSioSport, "open"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, "<no-applicable-methods-error>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"range-error", &module_info_gooSboot, "range-error"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"line-of", &module_info_gooScolsSlst, "line-of"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"%dispatch", &module_info_gooSboot, "%dispatch"},
  {"below", &module_info_gooScolsSseq, "below"},
  {">>", &module_info_gooSmath, ">>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"handler-function", &module_info_gooSconditions, "handler-function"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"for", &module_info_gooSmacros, "for"},
  {"<", &module_info_gooSmag, "<"},
  {"|", &module_info_gooSmath, "|"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"range-error-collection", &module_info_gooSconditions, "range-error-collection"},
  {"1+", &module_info_gooSmath, "1+"},
  {"seq", &module_info_gooSboot, "seq"},
  {">=", &module_info_gooSmag, ">="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"line-list", &module_info_gooScolsSlst, "line-list"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"+", &module_info_gooSmath, "+"},
  {"=", &module_info_gooSmath, "="},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"cpl-error", &module_info_gooSboot, "cpl-error"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"esc", &module_info_gooSboot, "esc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"msg-to-str", &module_info_gooSconditions, "msg-to-str"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"<=", &module_info_gooSmag, "<="},
  {"handler-matches?", &module_info_gooSconditions, "handler-matches?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"read", &module_info_gooSconditions, "read"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"%met-env-setter", &module_info_gooSboot, "%met-env-setter"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"sig", &module_info_gooSconditions, "sig"},
  {"call-error-function", &module_info_gooSconditions, "call-error-function"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"while", &module_info_gooSmacros, "while"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"%vm-with-exit", &module_info_gooSboot, "%vm-with-exit"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"<syntax-error>", &module_info_gooSconditions, "<syntax-error>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"log", &module_info_gooSmath, "log"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"dv", &module_info_gooSboot, "dv"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"<simple-condition>", &module_info_gooSconditions, "<simple-condition>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<unknown-function-error>", &module_info_gooSconditions, "<unknown-function-error>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"line-pair", &module_info_gooScolsSlst, "line-pair"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"property-unbound-error", &module_info_gooSboot, "property-unbound-error"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"fun", &module_info_gooSboot, "fun"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%get", &module_info_gooSboot, "%get"},
  {"<stack-overflow>", &module_info_gooSconditions, "<stack-overflow>"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"property-type-error", &module_info_gooSboot, "property-type-error"},
  {"describe-condition", &module_info_gooSconditions, "describe-condition"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"not", &module_info_gooSboot, "not"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<unbound-error>", &module_info_gooSconditions, "<unbound-error>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"assert-error", &module_info_gooSboot, "assert-error"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"narity-error", &module_info_gooSboot, "narity-error"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"round", &module_info_gooSmath, "round"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"/", &module_info_gooSmath, "/"},
  {"def", &module_info_gooSboot, "def"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"unbound-variable-error-variable", &module_info_gooSconditions, "unbound-variable-error-variable"},
  {"col", &module_info_gooScolsScol, "col"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<keyboard-interrupt>", &module_info_gooSconditions, "<keyboard-interrupt>"},
  {"new", &module_info_gooSboot, "new"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"<type-error>", &module_info_gooSconditions, "<type-error>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"tan", &module_info_gooSmath, "tan"},
  {"property-error-owner", &module_info_gooSconditions, "property-error-owner"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"stack-overflow-error", &module_info_gooSboot, "stack-overflow-error"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"macro-error-name", &module_info_gooSconditions, "macro-error-name"},
  {"always", &module_info_gooSruntime, "always"},
  {"~", &module_info_gooSmath, "~"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"div", &module_info_gooSmath, "div"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"<unbound-variable-error>", &module_info_gooSconditions, "<unbound-variable-error>"},
  {"<call-error>", &module_info_gooSconditions, "<call-error>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"<restart>", &module_info_gooSconditions, "<restart>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<handler>", &module_info_gooSconditions, "<handler>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<src-loc>", &module_info_gooSboot, "<src-loc>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"src-loc-file", &module_info_gooSboot, "src-loc-file"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"<assert-error>", &module_info_gooSconditions, "<assert-error>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<narity-error>", &module_info_gooSconditions, "<narity-error>"},
  {"as", &module_info_gooStypes, "as"},
  {"<simple-error>", &module_info_gooSconditions, "<simple-error>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"ct", &module_info_gooSboot, "ct"},
  {"in", &module_info_gooSioSport, "in"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"as-error", &module_info_gooSboot, "as-error"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"any?", &module_info_gooStypes, "any?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"@+", &module_info_gooSboot, "@+"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"@<", &module_info_gooSboot, "@<"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"default-handler", &module_info_gooSconditions, "default-handler"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<ambiguous-method-error>", &module_info_gooSconditions, "<ambiguous-method-error>"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"arithmetic-error", &module_info_gooSboot, "arithmetic-error"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fin", &module_info_gooSboot, "fin"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"no-next-methods-error", &module_info_gooSboot, "no-next-methods-error"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%src-loc", &module_info_gooSboot, "%src-loc"},
  {"%vm-with-cleanup", &module_info_gooSboot, "%vm-with-cleanup"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"<serious-condition>", &module_info_gooSconditions, "<serious-condition>"},
  {"last", &module_info_gooSmacros, "last"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"put", &module_info_gooSioSport, "put"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"%vm-box-fab", &module_info_gooSboot, "%vm-box-fab"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"out", &module_info_gooSioSport, "out"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"op", &module_info_gooSmacros, "op"},
  {"*", &module_info_gooSmath, "*"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"items", &module_info_gooScolsScol, "items"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"internal-error", &module_info_gooSboot, "internal-error"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"clone", &module_info_gooSboot, "clone"},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, "%vm-fun-env-elt-setter"},
  {"now", &module_info_gooScolsScol, "now"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"&", &module_info_gooSmath, "&"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"syntax-error", &module_info_gooSboot, "syntax-error"},
  {"<io-error>", &module_info_gooSconditions, "<io-error>"},
  {"property-error-generic", &module_info_gooSconditions, "property-error-generic"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"dss", &module_info_gooSboot, "dss"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"tup", &module_info_gooSboot, "tup"},
  {"pow", &module_info_gooSmath, "pow"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%vm-box-val", &module_info_gooSboot, "%vm-box-val"},
  {"ambiguous-method-error", &module_info_gooSboot, "ambiguous-method-error"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"class-of", &module_info_gooSboot, "class-of"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"condition-message", &module_info_gooSconditions, "condition-message"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"mif", &module_info_gooSboot, "mif"},
  {"floor", &module_info_gooSmath, "floor"},
  {"cos", &module_info_gooSmath, "cos"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"export", &module_info_gooSboot, "export"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"<as-error>", &module_info_gooSconditions, "<as-error>"},
  {"$default-handler-info", &module_info_gooSconditions, "$default-handler-info"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<range-error>", &module_info_gooSconditions, "<range-error>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"<no-next-methods-error>", &module_info_gooSconditions, "<no-next-methods-error>"},
  {"or", &module_info_gooSmacros, "or"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"use", &module_info_gooSboot, "use"},
  {"set", &module_info_gooSboot, "set"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"and", &module_info_gooSmacros, "and"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"sexpr-function-definition-adjectives", CVAR, &YevalSsyntaxYsexpr_function_definition_adjectives},
  {"sexpr-isa?", CVAR, &YevalSsyntaxYsexpr_isaQ},
  {"*bq-list**", CVAR, &YevalSsyntaxYTbq_listTT},
  {"sexpr-build-backquote-expander", CVAR, &YevalSsyntaxYsexpr_build_backquote_expander},
  {"sexpr-sequence->begin", CVAR, &YevalSsyntaxYsexpr_sequence_Gbegin},
  {"$sexpr-if-tag", CVAR, &YevalSsyntaxYDsexpr_if_tag},
  {"sexpr-syntax-if-then", CVAR, &YevalSsyntaxYsexpr_syntax_if_then},
  {"sexpr-let-body", CVAR, &YevalSsyntaxYsexpr_let_body},
  {"sexpr-prop-owner", CVAR, &YevalSsyntaxYsexpr_prop_owner},
  {"sexpr-loc-raw-body", CVAR, &YevalSsyntaxYsexpr_loc_raw_body},
  {"sexpr-def-value", CVAR, &YevalSsyntaxYsexpr_def_value},
  {"sexpr-iterate-signature", CVAR, &YevalSsyntaxYsexpr_iterate_signature},
  {"sexpr-definition?", CVAR, &YevalSsyntaxYsexpr_definitionQ},
  {"$sexpr-define-generic-tag", CVAR, &YevalSsyntaxYDsexpr_define_generic_tag},
  {"$sexpr-prop-tag", CVAR, &YevalSsyntaxYDsexpr_prop_tag},
  {"sexpr-syntax-definition-variable", CVAR, &YevalSsyntaxYsexpr_syntax_definition_variable},
  {"sexpr-isa-init-values", CVAR, &YevalSsyntaxYsexpr_isa_init_values},
  {"sexpr-block-name", CVAR, &YevalSsyntaxYsexpr_block_name},
  {"sexpr-prop-init", CVAR, &YevalSsyntaxYsexpr_prop_init},
  {"$sexpr-unwind-protect-tag", CVAR, &YevalSsyntaxYDsexpr_unwind_protect_tag},
  {"sexpr-bind-pattern-variables", CVAR, &YevalSsyntaxYsexpr_bind_pattern_variables},
  {"$sexpr-bind-exit-tag", CVAR, &YevalSsyntaxYDsexpr_bind_exit_tag},
  {"sexpr-function-value", CVAR, &YevalSsyntaxYsexpr_function_value},
  {"sexpr-begin?", CVAR, &YevalSsyntaxYsexpr_beginQ},
  {"sexpr-macro?", CVAR, &YevalSsyntaxYsexpr_macroQ},
  {"sexpr-value-type", CVAR, &YevalSsyntaxYsexpr_value_type},
  {"$sexpr-set-tag", CVAR, &YevalSsyntaxYDsexpr_set_tag},
  {"$sexpr-def-tag", CVAR, &YevalSsyntaxYDsexpr_def_tag},
  {"*bq-clobberable*", CVAR, &YevalSsyntaxYTbq_clobberableT},
  {"sexpr-function-definition-variable", CVAR, &YevalSsyntaxYsexpr_function_definition_variable},
  {"sexpr-make-application", CVAR, &YevalSsyntaxYsexpr_make_application},
  {"$sexpr-define-method-tag", CVAR, &YevalSsyntaxYDsexpr_define_method_tag},
  {"*bq-append*", CVAR, &YevalSsyntaxYTbq_appendT},
  {"sexpr-rest-exps", CVAR, &YevalSsyntaxYsexpr_rest_exps},
  {"$sexpr-begin-tag", CVAR, &YevalSsyntaxYDsexpr_begin_tag},
  {"sexpr-unwind-protect-cleanup-forms", CVAR, &YevalSsyntaxYsexpr_unwind_protect_cleanup_forms},
  {"sexpr-if-then", CVAR, &YevalSsyntaxYsexpr_if_then},
  {"sexpr-expand-backquote", CVAR, &YevalSsyntaxYsexpr_expand_backquote},
  {"sexpr-assignment-variable", CVAR, &YevalSsyntaxYsexpr_assignment_variable},
  {"sexpr-syntax-if-pattern", CVAR, &YevalSsyntaxYsexpr_syntax_if_pattern},
  {"sexpr-block?", CVAR, &YevalSsyntaxYsexpr_blockQ},
  {"$sexpr-quasiquote-tag", CVAR, &YevalSsyntaxYDsexpr_quasiquote_tag},
  {"sexpr-let-values", CVAR, &YevalSsyntaxYsexpr_let_values},
  {"$sexpr-iterate-tag", CVAR, &YevalSsyntaxYDsexpr_iterate_tag},
  {"sexpr-loc-bound-bodies", CVAR, &YevalSsyntaxYsexpr_loc_bound_bodies},
  {"sexpr-function-signature", CVAR, &YevalSsyntaxYsexpr_function_signature},
  {"$sexpr-define-class-tag", CVAR, &YevalSsyntaxYDsexpr_define_class_tag},
  {"sexpr-iterate->loc", CVAR, &YevalSsyntaxYsexpr_iterate_Gloc},
  {"sexpr-fab-setter-name", CVAR, &YevalSsyntaxYsexpr_fab_setter_name},
  {"sexpr-isa-init-props", CVAR, &YevalSsyntaxYsexpr_isa_init_props},
  {"sexpr-prop-init?", CVAR, &YevalSsyntaxYsexpr_prop_initQ},
  {"*comma-atsign*", CVAR, &YevalSsyntaxYTcomma_atsignT},
  {"sexpr-variable-type", CVAR, &YevalSsyntaxYsexpr_variable_type},
  {"$sexpr-let-tag", CVAR, &YevalSsyntaxYDsexpr_let_tag},
  {"sexpr-monitor-body", CVAR, &YevalSsyntaxYsexpr_monitor_body},
  {"sexpr-syntax-definition?", CVAR, &YevalSsyntaxYsexpr_syntax_definitionQ},
  {"sexpr-generic-definition?", CVAR, &YevalSsyntaxYsexpr_generic_definitionQ},
  {"sexpr-def-variable", CVAR, &YevalSsyntaxYsexpr_def_variable},
  {"sexpr-operator", CVAR, &YevalSsyntaxYsexpr_operator},
  {"bracket", CVAR, &YevalSsyntaxYbracket},
  {"sexpr-backquote?", CVAR, &YevalSsyntaxYsexpr_backquoteQ},
  {"find-option", CVAR, &YevalSsyntaxYfind_option},
  {"sexpr-iterate-name", CVAR, &YevalSsyntaxYsexpr_iterate_name},
  {"$sexpr-macro-expand-tag", CVAR, &YevalSsyntaxYDsexpr_macro_expand_tag},
  {"sexpr-make-anonymous-method", CVAR, &YevalSsyntaxYsexpr_make_anonymous_method},
  {"*bq-list*", CVAR, &YevalSsyntaxYTbq_listT},
  {"sexpr-rest-operands", CVAR, &YevalSsyntaxYsexpr_rest_operands},
  {"---main-2---", PVAR, NULL},
  {"sexpr-method-signature", CVAR, &YevalSsyntaxYsexpr_method_signature},
  {"sexpr-prop?", CVAR, &YevalSsyntaxYsexpr_propQ},
  {"sexpr-unwind-protect-protected-form", CVAR, &YevalSsyntaxYsexpr_unwind_protect_protected_form},
  {"sexpr-if-test", CVAR, &YevalSsyntaxYsexpr_if_test},
  {"sexpr-syntax-if-value", CVAR, &YevalSsyntaxYsexpr_syntax_if_value},
  {"sexpr-function-parameters", CVAR, &YevalSsyntaxYsexpr_function_parameters},
  {"*unique-name-counter*", CVAR, &YevalSsyntaxYTunique_name_counterT},
  {"$sexpr-syntax-if-tag", CVAR, &YevalSsyntaxYDsexpr_syntax_if_tag},
  {"sexpr-signature-parameters", CVAR, &YevalSsyntaxYsexpr_signature_parameters},
  {"$sexpr-quote-tag", CVAR, &YevalSsyntaxYDsexpr_quote_tag},
  {"sexpr-pattern-variable?", CVAR, &YevalSsyntaxYsexpr_pattern_variableQ},
  {"sexpr-variable?", CVAR, &YevalSsyntaxYsexpr_variableQ},
  {"sexpr-method-definition?", CVAR, &YevalSsyntaxYsexpr_method_definitionQ},
  {"sexpr-loc-bound-signatures", CVAR, &YevalSsyntaxYsexpr_loc_bound_signatures},
  {"sexpr-application?", CVAR, &YevalSsyntaxYsexpr_applicationQ},
  {"sexpr-iterate-body", CVAR, &YevalSsyntaxYsexpr_iterate_body},
  {"sexpr-isa-prop-inits", CVAR, &YevalSsyntaxYsexpr_isa_prop_inits},
  {"sexpr-unquote-splicing?", CVAR, &YevalSsyntaxYsexpr_unquote_splicingQ},
  {"sexpr-prop-type", CVAR, &YevalSsyntaxYsexpr_prop_type},
  {"sexpr-iterate?", CVAR, &YevalSsyntaxYsexpr_iterateQ},
  {"sexpr-let->combination", CVAR, &YevalSsyntaxYsexpr_let_Gcombination},
  {"---main-1---", PVAR, NULL},
  {"$sexpr-isa-tag", CVAR, &YevalSsyntaxYDsexpr_isa_tag},
  {"$sexpr-define-tag", CVAR, &YevalSsyntaxYDsexpr_define_tag},
  {"sexpr-method?", CVAR, &YevalSsyntaxYsexpr_methodQ},
  {"*bq-quote*", CVAR, &YevalSsyntaxYTbq_quoteT},
  {"as-signature", CVAR, &YevalSsyntaxYas_signature},
  {"sexpr-monitor-test", CVAR, &YevalSsyntaxYsexpr_monitor_test},
  {"sexpr-unwind-protect?", CVAR, &YevalSsyntaxYsexpr_unwind_protectQ},
  {"sexpr-method-body", CVAR, &YevalSsyntaxYsexpr_method_body},
  {"sexpr-if?", CVAR, &YevalSsyntaxYsexpr_ifQ},
  {"sexpr-fab-setter", CVAR, &YevalSsyntaxYsexpr_fab_setter},
  {"sexpr-loc-bound-names", CVAR, &YevalSsyntaxYsexpr_loc_bound_names},
  {"sexpr-let-bound-variables", CVAR, &YevalSsyntaxYsexpr_let_bound_variables},
  {"sexpr-begin-actions", CVAR, &YevalSsyntaxYsexpr_begin_actions},
  {"sexpr-variable-name", CVAR, &YevalSsyntaxYsexpr_variable_name},
  {"$sexpr-define-function-tag", CVAR, &YevalSsyntaxYDsexpr_define_function_tag},
  {"sexpr-self-evaluating?", CVAR, &YevalSsyntaxYsexpr_self_evaluatingQ},
  {"sexpr-last-exp?", CVAR, &YevalSsyntaxYsexpr_last_expQ},
  {"$sexpr-values-tag", CVAR, &YevalSsyntaxYDsexpr_values_tag},
  {"sexpr-function-definition?", CVAR, &YevalSsyntaxYsexpr_function_definitionQ},
  {"sexpr-method-parameters", CVAR, &YevalSsyntaxYsexpr_method_parameters},
  {"sexpr-define-class-parents", CVAR, &YevalSsyntaxYsexpr_define_class_parents},
  {"<name>", CVAR, &YevalSsyntaxYLnameG},
  {"$sexpr-locals-tag", CVAR, &YevalSsyntaxYDsexpr_locals_tag},
  {"sexpr-text-of-quotation", CVAR, &YevalSsyntaxYsexpr_text_of_quotation},
  {"sexpr-make-syntax-if", CVAR, &YevalSsyntaxYsexpr_make_syntax_if},
  {"sexpr-monitor-expand", CVAR, &YevalSsyntaxYsexpr_monitor_expand},
  {"eval", CVAR, &YevalSsyntaxYeval},
  {"---main-0---", PVAR, NULL},
  {"$sexpr-define-syntax-tag", CVAR, &YevalSsyntaxYDsexpr_define_syntax_tag},
  {"$sexpr-method-tag", CVAR, &YevalSsyntaxYDsexpr_method_tag},
  {"sexpr-forward-primitive?", CVAR, &YevalSsyntaxYsexpr_forward_primitiveQ},
  {"sexpr-unquote?", CVAR, &YevalSsyntaxYsexpr_unquoteQ},
  {"sexpr-make-begin", CVAR, &YevalSsyntaxYsexpr_make_begin},
  {"sexpr-unique-name", CVAR, &YevalSsyntaxYsexpr_unique_name},
  {"sexpr-quoted?", CVAR, &YevalSsyntaxYsexpr_quotedQ},
  {"sexpr-syntax-if-else", CVAR, &YevalSsyntaxYsexpr_syntax_if_else},
  {"map-tree", CVAR, &YevalSsyntaxYmap_tree},
  {"sexpr-syntax-if?", CVAR, &YevalSsyntaxYsexpr_syntax_ifQ},
  {"sexpr-pattern-variable-name", CVAR, &YevalSsyntaxYsexpr_pattern_variable_name},
  {"sexpr-make-macro-function", CVAR, &YevalSsyntaxYsexpr_make_macro_function},
  {"sexpr-atom?", CVAR, &YevalSsyntaxYsexpr_atomQ},
  {"nreconc", CVAR, &YevalSsyntaxYnreconc},
  {"*bq-nconc*", CVAR, &YevalSsyntaxYTbq_nconcT},
  {"sexpr-iterate-inits", CVAR, &YevalSsyntaxYsexpr_iterate_inits},
  {"sexpr-isa-parent", CVAR, &YevalSsyntaxYsexpr_isa_parent},
  {"sexpr-define-class?", CVAR, &YevalSsyntaxYsexpr_define_classQ},
  {"sexpr-prop-name", CVAR, &YevalSsyntaxYsexpr_prop_name},
  {"sexpr-prop-init-var", CVAR, &YevalSsyntaxYsexpr_prop_init_var},
  {"sexpr-loc?", CVAR, &YevalSsyntaxYsexpr_locQ},
  {"sexpr-loc-body", CVAR, &YevalSsyntaxYsexpr_loc_body},
  {"sexpr-function-body", CVAR, &YevalSsyntaxYsexpr_function_body},
  {"sexpr-let?", CVAR, &YevalSsyntaxYsexpr_letQ},
  {"sexpr-operands", CVAR, &YevalSsyntaxYsexpr_operands},
  {"sexpr-first-operand", CVAR, &YevalSsyntaxYsexpr_first_operand},
  {"sexpr-def?", CVAR, &YevalSsyntaxYsexpr_defQ},
  {"sexpr-let-names+values", CVAR, &YevalSsyntaxYsexpr_let_namesAvalues},
  {"bq-process", CVAR, &YevalSsyntaxYbq_process},
  {"sexpr-syntax-definition-value", CVAR, &YevalSsyntaxYsexpr_syntax_definition_value},
  {"sexpr-monitor-info", CVAR, &YevalSsyntaxYsexpr_monitor_info},
  {"$sexpr-monitor-tag", CVAR, &YevalSsyntaxYDsexpr_monitor_tag},
  {"sexpr-first-exp", CVAR, &YevalSsyntaxYsexpr_first_exp},
  {"sexpr-method-value", CVAR, &YevalSsyntaxYsexpr_method_value},
  {"sexpr-make-quote", CVAR, &YevalSsyntaxYsexpr_make_quote},
  {"sexpr-fab-getter", CVAR, &YevalSsyntaxYsexpr_fab_getter},
  {"sexpr-macro-expand?", CVAR, &YevalSsyntaxYsexpr_macro_expandQ},
  {"sexpr-monitor?", CVAR, &YevalSsyntaxYsexpr_monitorQ},
  {"sexpr-if-else", CVAR, &YevalSsyntaxYsexpr_if_else},
  {"sexpr-new-unique-name-counter!", CVAR, &YevalSsyntaxYsexpr_new_unique_name_counterX},
  {"sexpr-make-if", CVAR, &YevalSsyntaxYsexpr_make_if},
  {"sexpr-block-body", CVAR, &YevalSsyntaxYsexpr_block_body},
  {"sexpr-monitor-type", CVAR, &YevalSsyntaxYsexpr_monitor_type},
  {"sexpr-definition-variable", CVAR, &YevalSsyntaxYsexpr_definition_variable},
  {"sexpr-function-definition-value", CVAR, &YevalSsyntaxYsexpr_function_definition_value},
  {"sexpr-assignment-value", CVAR, &YevalSsyntaxYsexpr_assignment_value},
  {"sexpr-make-method", CVAR, &YevalSsyntaxYsexpr_make_method},
  {"sexpr-tagged-list?", CVAR, &YevalSsyntaxYsexpr_tagged_listQ},
  {"sexpr-assignment?", CVAR, &YevalSsyntaxYsexpr_assignmentQ},
  {"sexpr-definition-value", CVAR, &YevalSsyntaxYsexpr_definition_value},
  {"sexpr-no-operands?", CVAR, &YevalSsyntaxYsexpr_no_operandsQ},
  {"sexpr-signature-value", CVAR, &YevalSsyntaxYsexpr_signature_value},
  {"bq-remove-tokens", CVAR, &YevalSsyntaxYbq_remove_tokens},
  {"$sexpr-macro-tag", CVAR, &YevalSsyntaxYDsexpr_macro_tag},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"sexpr-function-body", "sexpr-function-body"},
  {"sexpr-function-definition-adjectives", "sexpr-function-definition-adjectives"},
  {"sexpr-sequence->begin", "sexpr-sequence->begin"},
  {"$sexpr-if-tag", "$sexpr-if-tag"},
  {"sexpr-if-else", "sexpr-if-else"},
  {"sexpr-syntax-if-then", "sexpr-syntax-if-then"},
  {"sexpr-prop-owner", "sexpr-prop-owner"},
  {"sexpr-loc-raw-body", "sexpr-loc-raw-body"},
  {"sexpr-def-value", "sexpr-def-value"},
  {"$sexpr-define-generic-tag", "$sexpr-define-generic-tag"},
  {"$sexpr-prop-tag", "$sexpr-prop-tag"},
  {"sexpr-syntax-definition-variable", "sexpr-syntax-definition-variable"},
  {"sexpr-isa-init-values", "sexpr-isa-init-values"},
  {"sexpr-block-name", "sexpr-block-name"},
  {"sexpr-prop-init", "sexpr-prop-init"},
  {"sexpr-bind-pattern-variables", "sexpr-bind-pattern-variables"},
  {"$sexpr-bind-exit-tag", "$sexpr-bind-exit-tag"},
  {"sexpr-operands", "sexpr-operands"},
  {"$sexpr-def-tag", "$sexpr-def-tag"},
  {"sexpr-function-definition-variable", "sexpr-function-definition-variable"},
  {"sexpr-make-application", "sexpr-make-application"},
  {"sexpr-unwind-protect-cleanup-forms", "sexpr-unwind-protect-cleanup-forms"},
  {"sexpr-if-then", "sexpr-if-then"},
  {"sexpr-expand-backquote", "sexpr-expand-backquote"},
  {"sexpr-assignment-variable", "sexpr-assignment-variable"},
  {"$sexpr-quasiquote-tag", "$sexpr-quasiquote-tag"},
  {"$sexpr-iterate-tag", "$sexpr-iterate-tag"},
  {"sexpr-prop-name", "sexpr-prop-name"},
  {"sexpr-loc-bound-bodies", "sexpr-loc-bound-bodies"},
  {"sexpr-def-variable", "sexpr-def-variable"},
  {"$sexpr-define-method-tag", "$sexpr-define-method-tag"},
  {"$sexpr-begin-tag", "$sexpr-begin-tag"},
  {"$sexpr-define-class-tag", "$sexpr-define-class-tag"},
  {"sexpr-iterate->loc", "sexpr-iterate->loc"},
  {"sexpr-fab-setter-name", "sexpr-fab-setter-name"},
  {"sexpr-isa-init-props", "sexpr-isa-init-props"},
  {"sexpr-prop-init?", "sexpr-prop-init?"},
  {"$sexpr-unwind-protect-tag", "$sexpr-unwind-protect-tag"},
  {"sexpr-variable-type", "sexpr-variable-type"},
  {"$sexpr-let-tag", "$sexpr-let-tag"},
  {"sexpr-operator", "sexpr-operator"},
  {"$sexpr-macro-expand-tag", "$sexpr-macro-expand-tag"},
  {"sexpr-make-anonymous-method", "sexpr-make-anonymous-method"},
  {"$sexpr-set-tag", "$sexpr-set-tag"},
  {"sexpr-method-signature", "sexpr-method-signature"},
  {"sexpr-unwind-protect-protected-form", "sexpr-unwind-protect-protected-form"},
  {"sexpr-if-test", "sexpr-if-test"},
  {"sexpr-def?", "sexpr-def?"},
  {"sexpr-syntax-if-value", "sexpr-syntax-if-value"},
  {"sexpr-function-signature", "sexpr-function-signature"},
  {"$sexpr-syntax-if-tag", "$sexpr-syntax-if-tag"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"$sexpr-quote-tag", "$sexpr-quote-tag"},
  {"sexpr-variable?", "sexpr-variable?"},
  {"sexpr-definition-value", "sexpr-definition-value"},
  {"sexpr-loc-bound-signatures", "sexpr-loc-bound-signatures"},
  {"sexpr-isa-prop-inits", "sexpr-isa-prop-inits"},
  {"sexpr-unquote-splicing?", "sexpr-unquote-splicing?"},
  {"sexpr-prop-type", "sexpr-prop-type"},
  {"sexpr-let->combination", "sexpr-let->combination"},
  {"$sexpr-isa-tag", "$sexpr-isa-tag"},
  {"$sexpr-define-tag", "$sexpr-define-tag"},
  {"sexpr-method-body", "sexpr-method-body"},
  {"sexpr-fab-setter", "sexpr-fab-setter"},
  {"sexpr-variable-name", "sexpr-variable-name"},
  {"$sexpr-define-function-tag", "$sexpr-define-function-tag"},
  {"sexpr-define-class-parents", "sexpr-define-class-parents"},
  {"$sexpr-locals-tag", "$sexpr-locals-tag"},
  {"sexpr-text-of-quotation", "sexpr-text-of-quotation"},
  {"sexpr-monitor-expand", "sexpr-monitor-expand"},
  {"eval", "eval"},
  {"$sexpr-define-syntax-tag", "$sexpr-define-syntax-tag"},
  {"$sexpr-method-tag", "$sexpr-method-tag"},
  {"sexpr-forward-primitive?", "sexpr-forward-primitive?"},
  {"sexpr-unquote?", "sexpr-unquote?"},
  {"sexpr-make-begin", "sexpr-make-begin"},
  {"sexpr-syntax-if-else", "sexpr-syntax-if-else"},
  {"sexpr-syntax-if-pattern", "sexpr-syntax-if-pattern"},
  {"sexpr-make-macro-function", "sexpr-make-macro-function"},
  {"sexpr-function-definition-value", "sexpr-function-definition-value"},
  {"sexpr-isa-parent", "sexpr-isa-parent"},
  {"sexpr-prop-init-var", "sexpr-prop-init-var"},
  {"sexpr-loc-bound-names", "sexpr-loc-bound-names"},
  {"sexpr-signature-value", "sexpr-signature-value"},
  {"sexpr-syntax-definition-value", "sexpr-syntax-definition-value"},
  {"sexpr-define-class?", "sexpr-define-class?"},
  {"sexpr-block-body", "sexpr-block-body"},
  {"$sexpr-monitor-tag", "$sexpr-monitor-tag"},
  {"sexpr-fab-getter", "sexpr-fab-getter"},
  {"sexpr-definition-variable", "sexpr-definition-variable"},
  {"sexpr-assignment-value", "sexpr-assignment-value"},
  {"sexpr-make-method", "sexpr-make-method"},
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
