/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo */

EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yunexec,"goo/boot","unexec");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLproductG,"goo/boot","<product>");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(Ynot,"goo/boot","not");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSmathYT,"goo/math","*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YtT,"goo/boot","t*");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYC,"goo/math","^");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ynew,"goo/boot","new");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooY___main_0___ ();

/* FUNCTION CODES: */

P YgooY___main_0___() {
  P T0;
loop:
  T0 = YPfalse;
  return T0;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSvec;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooSruntime},
  {&module_info_gooScols},
  {&module_info_gooSpacker},
  {&module_info_gooSioSwrite},
  {&module_info_gooSioSread},
  {&module_info_evalSsyntax},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {">", &module_info_gooSmag, ">"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"set", &module_info_gooSboot, "set"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"~==", &module_info_gooSmath, "~=="},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"find", &module_info_gooScolsScol, "find"},
  {"tan", &module_info_gooSmath, "tan"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"error", &module_info_gooSboot, "error"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"try", &module_info_gooSboot, "try"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"@<", &module_info_gooSboot, "@<"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"+", &module_info_gooSmath, "+"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"in", &module_info_gooSioSport, "in"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"<", &module_info_gooSmag, "<"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"while", &module_info_gooSmacros, "while"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"put", &module_info_gooSioSport, "put"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"quote", &module_info_gooSboot, "quote"},
  {"fun", &module_info_gooSboot, "fun"},
  {"tail", &module_info_gooSboot, "tail"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"==", &module_info_gooSmacros, "=="},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"%im", &module_info_gooSboot, "%im"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%su", &module_info_gooSboot, "%su"},
  {"dss", &module_info_gooSboot, "dss"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"t?", &module_info_gooStypes, "t?"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"=", &module_info_gooSmath, "="},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"and", &module_info_gooSmacros, "and"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"when", &module_info_gooSmacros, "when"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"case", &module_info_gooSmacros, "case"},
  {"asin", &module_info_gooSmath, "asin"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"%str", &module_info_gooSboot, "%str"},
  {"rem", &module_info_gooSmath, "rem"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"items", &module_info_gooScolsScol, "items"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"t<", &module_info_gooStypes, "t<"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"atan", &module_info_gooSmath, "atan"},
  {"dm", &module_info_gooSboot, "dm"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"|", &module_info_gooSmath, "|"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"~", &module_info_gooSmath, "~"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"/", &module_info_gooSmath, "/"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"if", &module_info_gooSboot, "if"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$e", &module_info_gooSmath, "$e"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"dv", &module_info_gooSboot, "dv"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"~=", &module_info_gooSmath, "~="},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"esc", &module_info_gooSboot, "esc"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"nul", &module_info_gooSboot, "nul"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"t=", &module_info_gooStypes, "t="},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"tup", &module_info_gooSboot, "tup"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"loc", &module_info_gooSboot, "loc"},
  {"app", &module_info_gooSmacros, "app"},
  {"round", &module_info_gooSmath, "round"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"close", &module_info_gooSioSport, "close"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"read", &module_info_gooSruntime, "read"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"ct", &module_info_gooSboot, "ct"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"max", &module_info_gooSmag, "max"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"log", &module_info_gooSmath, "log"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"add", &module_info_gooScolsScol, "add"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"&", &module_info_gooSmath, "&"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"round/", &module_info_gooSmath, "round/"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"def", &module_info_gooSboot, "def"},
  {"let", &module_info_gooSboot, "let"},
  {"logn", &module_info_gooSmath, "logn"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"export", &module_info_gooSboot, "export"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"into", &module_info_gooScolsScol, "into"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"match", &module_info_gooSmacros, "match"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"map", &module_info_gooSmacros, "map"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"head", &module_info_gooSboot, "head"},
  {"cos", &module_info_gooSmath, "cos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"always", &module_info_gooSruntime, "always"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"for", &module_info_gooSmacros, "for"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"min", &module_info_gooSmag, "min"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"-", &module_info_gooSmath, "-"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"as", &module_info_gooStypes, "as"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"not", &module_info_gooSboot, "not"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"df", &module_info_gooSboot, "df"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"abs", &module_info_gooSmath, "abs"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"any?", &module_info_gooStypes, "any?"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"*", &module_info_gooSmath, "*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"dg", &module_info_gooSboot, "dg"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {">=", &module_info_gooSmag, ">="},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {">>", &module_info_gooSmath, ">>"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%put", &module_info_gooSboot, "%put"},
  {"until", &module_info_gooSmacros, "until"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"open", &module_info_gooSioSport, "open"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len", &module_info_gooStypes, "len"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"out", &module_info_gooSioSport, "out"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"del", &module_info_gooScolsScol, "del"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"<=", &module_info_gooSmag, "<="},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"op", &module_info_gooSmacros, "op"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"fin", &module_info_gooSboot, "fin"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do", &module_info_gooSmacros, "do"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<<", &module_info_gooSmath, "<<"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"pow", &module_info_gooSmath, "pow"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"@len", &module_info_gooSboot, "@len"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"get", &module_info_gooSioSport, "get"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"^", &module_info_gooSmath, "^"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"or", &module_info_gooSmacros, "or"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"now", &module_info_gooScolsScol, "now"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"nil", &module_info_gooSboot, "nil"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"neg", &module_info_gooSmath, "neg"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"col", &module_info_gooScolsScol, "col"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"@+", &module_info_gooSboot, "@+"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"1-", &module_info_gooSmath, "1-"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"sin", &module_info_gooSmath, "sin"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"floor", &module_info_gooSmath, "floor"},
  {"new", &module_info_gooSboot, "new"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", NULL},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"writeln", "writeln"},
  {"ct-also", "ct-also"},
  {"num-to-str", "num-to-str"},
  {"ds", "ds"},
  {"list", "list"},
  {"<str>", "<str>"},
  {">", ">"},
  {"<packer>", "<packer>"},
  {"<opts>", "<opts>"},
  {"fab-handler", "fab-handler"},
  {"<enum>", "<enum>"},
  {"~==", "~=="},
  {"%pair", "%pair"},
  {"sub", "sub"},
  {"cycle", "cycle"},
  {"find", "find"},
  {"tan", "tan"},
  {"find-or", "find-or"},
  {"enum", "enum"},
  {"compose", "compose"},
  {"lower?", "lower?"},
  {"isqrt", "isqrt"},
  {"low-elt", "low-elt"},
  {"try", "try"},
  {"map2", "map2"},
  {"push", "push"},
  {"renew", "renew"},
  {"elt-default", "elt-default"},
  {"<str-out-port>", "<str-out-port>"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"del!", "del!"},
  {"tail-setter", "tail-setter"},
  {"+", "+"},
  {"<condition>", "<condition>"},
  {"<union>", "<union>"},
  {"do2", "do2"},
  {"<", "<"},
  {"del-vals!", "del-vals!"},
  {"while", "while"},
  {"$default-handler-info", "$default-handler-info"},
  {"push!", "push!"},
  {"<out-port>", "<out-port>"},
  {"put", "put"},
  {"prop-value-setter", "prop-value-setter"},
  {"quote", "quote"},
  {"fun", "fun"},
  {"tail", "tail"},
  {"del-dups", "del-dups"},
  {"$pi", "$pi"},
  {"==", "=="},
  {"<cycle>", "<cycle>"},
  {"repeat", "repeat"},
  {"col-res-type", "col-res-type"},
  {"upper?", "upper?"},
  {"t?", "t?"},
  {"<tup>", "<tup>"},
  {"first-then", "first-then"},
  {"=", "="},
  {"map", "map"},
  {"<map>", "<map>"},
  {"type-class", "type-class"},
  {"add!", "add!"},
  {"fab-class", "fab-class"},
  {"elt-type", "elt-type"},
  {"1st", "1st"},
  {"pub", "pub"},
  {"read-from-string", "read-from-string"},
  {"fold+", "fold+"},
  {"empty?", "empty?"},
  {"rep", "rep"},
  {"say", "say"},
  {"and", "and"},
  {"class-name", "class-name"},
  {"when", "when"},
  {"cosh", "cosh"},
  {"cat!", "cat!"},
  {"sig", "sig"},
  {"case", "case"},
  {"asin", "asin"},
  {"low-elt-setter", "low-elt-setter"},
  {"rem", "rem"},
  {"incf", "incf"},
  {"below", "below"},
  {"<subclass>", "<subclass>"},
  {"sort-by!", "sort-by!"},
  {"<in-port>", "<in-port>"},
  {"prop-owner", "prop-owner"},
  {"neg?", "neg?"},
  {"packer", "packer"},
  {"fun-nary?", "fun-nary?"},
  {"items", "items"},
  {"del-vals", "del-vals"},
  {"fun-name", "fun-name"},
  {">>>", ">>>"},
  {"class-ancestors", "class-ancestors"},
  {"atan", "atan"},
  {"dm", "dm"},
  {"cat-sym", "cat-sym"},
  {"<prop>", "<prop>"},
  {"dup", "dup"},
  {"~", "~"},
  {"pop", "pop"},
  {"|", "|"},
  {"split", "split"},
  {"cat2", "cat2"},
  {"identity", "identity"},
  {"<flat>", "<flat>"},
  {"handler-matches?", "handler-matches?"},
  {"sort!", "sort!"},
  {"even?", "even?"},
  {"met-app?", "met-app?"},
  {"to-lower", "to-lower"},
  {"/", "/"},
  {"from", "from"},
  {"prop-getter", "prop-getter"},
  {"if", "if"},
  {"%define-method", "%define-method"},
  {"logn", "logn"},
  {"round", "round"},
  {"<any>", "<any>"},
  {"gen-add-met", "gen-add-met"},
  {"port-line", "port-line"},
  {"mif", "mif"},
  {"$e", "$e"},
  {"<handler-info>", "<handler-info>"},
  {"dv", "dv"},
  {"peek", "peek"},
  {"pop!", "pop!"},
  {"floor/", "floor/"},
  {"<singleton>", "<singleton>"},
  {"prop-value", "prop-value"},
  {"~=", "~="},
  {"num-to-str-base", "num-to-str-base"},
  {"esc", "esc"},
  {"fun-arity", "fun-arity"},
  {"elt-or", "elt-or"},
  {"3rd", "3rd"},
  {"use", "use"},
  {"match-sublist", "match-sublist"},
  {"key-type", "key-type"},
  {"to-digit", "to-digit"},
  {"reject", "reject"},
  {"pack-in", "pack-in"},
  {"<log>", "<log>"},
  {"<col>", "<col>"},
  {"%next-methods", "%next-methods"},
  {"app-args", "app-args"},
  {"del-dups!", "del-dups!"},
  {"in", "in"},
  {"condition-arguments", "condition-arguments"},
  {"<product>", "<product>"},
  {"tup", "tup"},
  {"fold", "fold"},
  {"loc", "loc"},
  {"packing-with", "packing-with"},
  {"<simple-condition>", "<simple-condition>"},
  {"close", "close"},
  {"read", "read"},
  {"<gen>", "<gen>"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"fun-specs", "fun-specs"},
  {"prefix?", "prefix?"},
  {"mem?", "mem?"},
  {"ct", "ct"},
  {"<error>", "<error>"},
  {"max", "max"},
  {"<str-in-port>", "<str-in-port>"},
  {"lst", "lst"},
  {"force-out", "force-out"},
  {"<lst>", "<lst>"},
  {"len-setter", "len-setter"},
  {"<loc>", "<loc>"},
  {"head", "head"},
  {"ready?", "ready?"},
  {"prop-bound?", "prop-bound?"},
  {"log", "log"},
  {"add", "add"},
  {"any2?", "any2?"},
  {"rev!", "rev!"},
  {"&", "&"},
  {"<str-port>", "<str-port>"},
  {"popf", "popf"},
  {"round/", "round/"},
  {"%prop", "%prop"},
  {"def", "def"},
  {"let", "let"},
  {"all2?", "all2?"},
  {"head-setter", "head-setter"},
  {"type-object", "type-object"},
  {"t+", "t+"},
  {"default-handler", "default-handler"},
  {"prop-type", "prop-type"},
  {"join", "join"},
  {"export", "export"},
  {"<met>", "<met>"},
  {"write", "write"},
  {"match-unquote", "match-unquote"},
  {"var-type", "var-type"},
  {"var-name", "var-name"},
  {"into", "into"},
  {"zero?", "zero?"},
  {"match", "match"},
  {"sqrt", "sqrt"},
  {"subtype?", "subtype?"},
  {"case-by", "case-by"},
  {"last", "last"},
  {"seq", "seq"},
  {"cos", "cos"},
  {"app-filename", "app-filename"},
  {"always", "always"},
  {"str-to-num", "str-to-num"},
  {"rcurry", "rcurry"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"sup", "sup"},
  {"product-elts", "product-elts"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"for", "for"},
  {"port-contents", "port-contents"},
  {"newline", "newline"},
  {"dp", "dp"},
  {"need-implementation", "need-implementation"},
  {"address-of", "address-of"},
  {"<set>", "<set>"},
  {"min", "min"},
  {"empty", "empty"},
  {"macro-expand", "macro-expand"},
  {"elt", "elt"},
  {"class-direct-props", "class-direct-props"},
  {"<flo>", "<flo>"},
  {"$max-int", "$max-int"},
  {"len/fill-setter", "len/fill-setter"},
  {"trunc/", "trunc/"},
  {"sub-setter", "sub-setter"},
  {"match-atom", "match-atom"},
  {"pick", "pick"},
  {"isa?", "isa?"},
  {"-", "-"},
  {"as", "as"},
  {"not", "not"},
  {"napp", "napp"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"$min-int", "$min-int"},
  {"df", "df"},
  {"abs", "abs"},
  {"cond", "cond"},
  {"fun-names", "fun-names"},
  {"unless", "unless"},
  {"zap", "zap"},
  {"sinh", "sinh"},
  {"elt-setter", "elt-setter"},
  {"msg", "msg"},
  {"<zip>", "<zip>"},
  {"prop-setter", "prop-setter"},
  {"1+", "1+"},
  {"zip", "zip"},
  {"mod", "mod"},
  {"map-keyed", "map-keyed"},
  {"post", "post"},
  {"<vec>", "<vec>"},
  {"any?", "any?"},
  {"trunc", "trunc"},
  {"vec", "vec"},
  {"<class>", "<class>"},
  {"<file-out-port>", "<file-out-port>"},
  {"*", "*"},
  {"<fun>", "<fun>"},
  {"<simple-error>", "<simple-error>"},
  {"app", "app"},
  {"puts", "puts"},
  {"class-descendents", "class-descendents"},
  {"<file-port>", "<file-port>"},
  {"dg", "dg"},
  {"<file-in-port>", "<file-in-port>"},
  {"<handler>", "<handler>"},
  {"tanh", "tanh"},
  {"fun-mets", "fun-mets"},
  {"<col.>", "<col.>"},
  {">=", ">="},
  {"<seq.>", "<seq.>"},
  {"unzip", "unzip"},
  {"<int>", "<int>"},
  {"elts", "elts"},
  {"get", "get"},
  {"gets", "gets"},
  {"t<", "t<"},
  {">>", ">>"},
  {"ceil", "ceil"},
  {"<step>", "<step>"},
  {"describe-condition", "describe-condition"},
  {"pack", "pack"},
  {"fab", "fab"},
  {"decf", "decf"},
  {"packer-res", "packer-res"},
  {"bound?", "bound?"},
  {"acos", "acos"},
  {"until", "until"},
  {"bit?", "bit?"},
  {"open", "open"},
  {"dc", "dc"},
  {"loc-val-setter", "loc-val-setter"},
  {"suffix?", "suffix?"},
  {"cat", "cat"},
  {"len", "len"},
  {"<port>", "<port>"},
  {"all?", "all?"},
  {"find-getter", "find-getter"},
  {"pair", "pair"},
  {"nxt", "nxt"},
  {"pos", "pos"},
  {"<str-tab>", "<str-tab>"},
  {"<type>", "<type>"},
  {"exported", "exported"},
  {"do-keyed", "do-keyed"},
  {"may-isa?", "may-isa?"},
  {"keys", "keys"},
  {"out", "out"},
  {"fab-setter-name", "fab-setter-name"},
  {"write-to-string", "write-to-string"},
  {"del", "del"},
  {"<list>", "<list>"},
  {"swapf", "swapf"},
  {"col-res", "col-res"},
  {"t*", "t*"},
  {"nul", "nul"},
  {"pos?", "pos?"},
  {"<=", "<="},
  {"<each>", "<each>"},
  {"op", "op"},
  {"<seq>", "<seq>"},
  {"finds", "finds"},
  {"fin", "fin"},
  {"zap!", "zap!"},
  {"ceiling/", "ceiling/"},
  {"now-key", "now-key"},
  {"fill", "fill"},
  {"handler-function", "handler-function"},
  {"do", "do"},
  {"<<", "<<"},
  {"packing-in", "packing-in"},
  {"handler-info-message", "handler-info-message"},
  {"pow", "pow"},
  {"with-port", "with-port"},
  {"fun-val", "fun-val"},
  {"id-hash", "id-hash"},
  {"str", "str"},
  {"fill!", "fill!"},
  {"union-elts", "union-elts"},
  {"sort-by", "sort-by"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"packed", "packed"},
  {"each", "each"},
  {"curry", "curry"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"2nd", "2nd"},
  {"^", "^"},
  {"or", "or"},
  {"quasiquote", "quasiquote"},
  {"<range>", "<range>"},
  {"now", "now"},
  {"range-by", "range-by"},
  {"assert", "assert"},
  {"class-parents", "class-parents"},
  {"eof-object?", "eof-object?"},
  {"loc-val", "loc-val"},
  {"set", "set"},
  {"packer-add", "packer-add"},
  {"atan2", "atan2"},
  {"nil", "nil"},
  {"find-setter", "find-setter"},
  {"to-str", "to-str"},
  {"<sym>", "<sym>"},
  {"neg", "neg"},
  {"match-empty-list", "match-empty-list"},
  {"digit?", "digit?"},
  {"key-test", "key-test"},
  {"<tab>", "<tab>"},
  {"<num>", "<num>"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"rev", "rev"},
  {"alpha?", "alpha?"},
  {"ord-app-mets", "ord-app-mets"},
  {"class-props", "class-props"},
  {"<col!>", "<col!>"},
  {"gensym", "gensym"},
  {"<chr>", "<chr>"},
  {"col", "col"},
  {"sort", "sort"},
  {"ins", "ins"},
  {"fabs", "fabs"},
  {"tab-hash", "tab-hash"},
  {"add-prop", "add-prop"},
  {"emit", "emit"},
  {"now-setter", "now-setter"},
  {"1-", "1-"},
  {"to-upper", "to-upper"},
  {"packing", "packing"},
  {"*print-base*", "*print-base*"},
  {"t=", "t="},
  {"error", "error"},
  {"sin", "sin"},
  {"condition-message", "condition-message"},
  {"range", "range"},
  {"dlet", "dlet"},
  {"<seq!>", "<seq!>"},
  {"fin?", "fin?"},
  {"flo-bits", "flo-bits"},
  {"packer-fab", "packer-fab"},
  {"floor", "floor"},
  {"new", "new"},
  {"<serious-condition>", "<serious-condition>"},
  {"prop-init", "prop-init"},
  {"opf", "opf"},
  {"port-index", "port-index"},
  {"odd?", "odd?"},
  {"pushf", "pushf"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_goo;
MODULE_INFO module_info_goo = {
  "goo",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooScols (void);
extern void load_module_gooSpacker (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooSioSread (void);
extern void load_module_evalSsyntax (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_goo (void);

void load_module_goo (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooSruntime();
  load_module_gooScols();
  load_module_gooSpacker();
  load_module_gooSioSwrite();
  load_module_gooSioSread();
  load_module_evalSsyntax();
  load_module_gooSioSport();

  (P)YgooY___main_0___();

}

/* END OF GENERATED CODE. */
