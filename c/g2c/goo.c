/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: goo */

EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYA,"goo/math","+");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ynul,"goo/boot","nul");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YLnumG,"goo/boot","<num>");
EXT(Yproduct_elts,"goo/boot","product-elts");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YPprop,"goo/boot","%prop");
EXT(Ynot,"goo/boot","not");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYS,"goo/math","/");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(Yerror,"goo/boot","error");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSmathYtan,"goo/math","tan");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YtT,"goo/boot","t*");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(Ylst,"goo/boot","lst");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooSmathY_,"goo/math","-");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yprop_owner,"goo/boot","prop-owner");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(Ytup,"goo/boot","tup");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YOlst,"goo/boot","@lst");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYC,"goo/math","^");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");

/* FORWARD QUOTATIONS: */


/* FUNCTIONS: */

extern P YgooY___main_0___ ();

/* FUNCTION CODES: */

P YgooY___main_0___() {
  P T0;
DEFCREGS();
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
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;

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
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"del", &module_info_gooScolsScol, "del"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"match", &module_info_gooSmacros, "match"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"do", &module_info_gooSmacros, "do"},
  {"loc", &module_info_gooSboot, "loc"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"now", &module_info_gooScolsScol, "now"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"case", &module_info_gooSmacros, "case"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"+", &module_info_gooSmath, "+"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {">", &module_info_gooSmag, ">"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sin", &module_info_gooSmath, "sin"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"max", &module_info_gooSmag, "max"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"<", &module_info_gooSmag, "<"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"=", &module_info_gooSmath, "="},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"~==", &module_info_gooSmath, "~=="},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"ct", &module_info_gooSboot, "ct"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"add", &module_info_gooScolsScol, "add"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"nul", &module_info_gooSboot, "nul"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"rep", &module_info_gooSboot, "rep"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"tail", &module_info_gooSboot, "tail"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"min", &module_info_gooSmag, "min"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%su", &module_info_gooSboot, "%su"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"until", &module_info_gooSmacros, "until"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"|", &module_info_gooSmath, "|"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"not", &module_info_gooSboot, "not"},
  {"read", &module_info_gooSruntime, "read"},
  {">=", &module_info_gooSmag, ">="},
  {"round", &module_info_gooSmath, "round"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"/", &module_info_gooSmath, "/"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"~=", &module_info_gooSmath, "~="},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"div", &module_info_gooSmath, "div"},
  {"<<", &module_info_gooSmath, "<<"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%time", &module_info_gooSboot, "%time"},
  {"dss", &module_info_gooSboot, "dss"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"for", &module_info_gooSmacros, "for"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"log", &module_info_gooSmath, "log"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"use", &module_info_gooSboot, "use"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"seq", &module_info_gooSboot, "seq"},
  {"t<", &module_info_gooStypes, "t<"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"error", &module_info_gooSboot, "error"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"asin", &module_info_gooSmath, "asin"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"dp", &module_info_gooSboot, "dp"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any?", &module_info_gooStypes, "any?"},
  {"col", &module_info_gooScolsScol, "col"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"df", &module_info_gooSboot, "df"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"t=", &module_info_gooStypes, "t="},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"dg", &module_info_gooSboot, "dg"},
  {"ds", &module_info_gooSboot, "ds"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"dm", &module_info_gooSboot, "dm"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"while", &module_info_gooSmacros, "while"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"def", &module_info_gooSboot, "def"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"%str", &module_info_gooSboot, "%str"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"if", &module_info_gooSboot, "if"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"t+", &module_info_gooStypes, "t+"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dc", &module_info_gooSboot, "dc"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%put", &module_info_gooSboot, "%put"},
  {"dv", &module_info_gooSboot, "dv"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"head", &module_info_gooSboot, "head"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"*", &module_info_gooSmath, "*"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"tan", &module_info_gooSmath, "tan"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"pow", &module_info_gooSmath, "pow"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"~", &module_info_gooSmath, "~"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"floor", &module_info_gooSmath, "floor"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"into", &module_info_gooScolsScol, "into"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"gets", &module_info_gooSioSport, "gets"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"let", &module_info_gooSboot, "let"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"out", &module_info_gooSioSport, "out"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"t*", &module_info_gooSboot, "t*"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"@+", &module_info_gooSboot, "@+"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"set", &module_info_gooSboot, "set"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"lst", &module_info_gooSboot, "lst"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"abs", &module_info_gooSmath, "abs"},
  {"get", &module_info_gooSioSport, "get"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"and", &module_info_gooSmacros, "and"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"when", &module_info_gooSmacros, "when"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"always", &module_info_gooSruntime, "always"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"-", &module_info_gooSmath, "-"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"as", &module_info_gooStypes, "as"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"@<", &module_info_gooSboot, "@<"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"&", &module_info_gooSmath, "&"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"map", &module_info_gooSmacros, "map"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"find", &module_info_gooScolsScol, "find"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"@len", &module_info_gooSboot, "@len"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"cos", &module_info_gooSmath, "cos"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"%im", &module_info_gooSboot, "%im"},
  {"logn", &module_info_gooSmath, "logn"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"op", &module_info_gooSmacros, "op"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"atan", &module_info_gooSmath, "atan"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {">>", &module_info_gooSmath, ">>"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"round/", &module_info_gooSmath, "round/"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"close", &module_info_gooSioSport, "close"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"try", &module_info_gooSboot, "try"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"tup", &module_info_gooSboot, "tup"},
  {"%get", &module_info_gooSboot, "%get"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"app", &module_info_gooSmacros, "app"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"in", &module_info_gooSioSport, "in"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"export", &module_info_gooSboot, "export"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"mif", &module_info_gooSboot, "mif"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"len", &module_info_gooStypes, "len"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"or", &module_info_gooSmacros, "or"},
  {"new", &module_info_gooSboot, "new"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"open", &module_info_gooSioSport, "open"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"^", &module_info_gooSmath, "^"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"==", &module_info_gooSmacros, "=="},
  {"1+", &module_info_gooSmath, "1+"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"prop-type", "prop-type"},
  {"del", "del"},
  {"packer-add", "packer-add"},
  {"match-empty-list", "match-empty-list"},
  {"match", "match"},
  {"isa?", "isa?"},
  {"cond", "cond"},
  {"do", "do"},
  {"loc", "loc"},
  {"class-parents", "class-parents"},
  {"fun", "fun"},
  {"now", "now"},
  {"dup", "dup"},
  {"%next-methods", "%next-methods"},
  {"case", "case"},
  {"+", "+"},
  {"<loc>", "<loc>"},
  {"$pi", "$pi"},
  {">", ">"},
  {"writeln", "writeln"},
  {"sin", "sin"},
  {"isqrt", "isqrt"},
  {"rev", "rev"},
  {"max", "max"},
  {"last", "last"},
  {"read-from-string", "read-from-string"},
  {"<tab>", "<tab>"},
  {"mod", "mod"},
  {"<flo>", "<flo>"},
  {"ceil/", "ceil/"},
  {"packer-fab", "packer-fab"},
  {"enum", "enum"},
  {"acos", "acos"},
  {"len/fill-setter", "len/fill-setter"},
  {"rcurry", "rcurry"},
  {"del-vals", "del-vals"},
  {"to-lower", "to-lower"},
  {"prop-value-setter", "prop-value-setter"},
  {"fin?", "fin?"},
  {"default-handler", "default-handler"},
  {"cycle", "cycle"},
  {"incf", "incf"},
  {"<int>", "<int>"},
  {"zero?", "zero?"},
  {"app-sup", "app-sup"},
  {"=", "="},
  {"nil", "nil"},
  {"~==", "~=="},
  {"ct", "ct"},
  {"even?", "even?"},
  {"fab-setter-name", "fab-setter-name"},
  {"tail-setter", "tail-setter"},
  {"add", "add"},
  {"when", "when"},
  {"swapf", "swapf"},
  {"<prop>", "<prop>"},
  {"<file-out-port>", "<file-out-port>"},
  {"<num>", "<num>"},
  {"product-elts", "product-elts"},
  {"case-insensitive-string-equal", "case-insensitive-string-equal"},
  {"rep", "rep"},
  {"match-unquote", "match-unquote"},
  {"app-filename", "app-filename"},
  {"<vec>", "<vec>"},
  {"condition-arguments", "condition-arguments"},
  {"tail", "tail"},
  {"min", "min"},
  {"emit", "emit"},
  {"<str-out-port>", "<str-out-port>"},
  {"nul", "nul"},
  {"<chr>", "<chr>"},
  {"gensym", "gensym"},
  {"modincf", "modincf"},
  {"<product>", "<product>"},
  {"class-props", "class-props"},
  {"add-prop", "add-prop"},
  {"reject", "reject"},
  {"until", "until"},
  {"all2?", "all2?"},
  {"prop-bound?", "prop-bound?"},
  {"2nd", "2nd"},
  {"<serious-condition>", "<serious-condition>"},
  {"elt-setter", "elt-setter"},
  {"num-to-str", "num-to-str"},
  {"find-or", "find-or"},
  {"packer", "packer"},
  {"empty", "empty"},
  {"sort-by!", "sort-by!"},
  {"sinh", "sinh"},
  {"fab", "fab"},
  {"|", "|"},
  {"quasiquote", "quasiquote"},
  {"bound?", "bound?"},
  {"<union>", "<union>"},
  {"pair", "pair"},
  {"num-to-str-base", "num-to-str-base"},
  {"<log>", "<log>"},
  {"upper?", "upper?"},
  {"not", "not"},
  {"read", "read"},
  {">=", ">="},
  {"1st", "1st"},
  {"/", "/"},
  {"fun-val", "fun-val"},
  {"case-by", "case-by"},
  {"~=", "~="},
  {"ord-app-mets", "ord-app-mets"},
  {"<any>", "<any>"},
  {"pos?", "pos?"},
  {"<cycle>", "<cycle>"},
  {"empty?", "empty?"},
  {"first-then", "first-then"},
  {"<list>", "<list>"},
  {"esc", "esc"},
  {"digit?", "digit?"},
  {"pick", "pick"},
  {"all?", "all?"},
  {"<zip>", "<zip>"},
  {"prop-value", "prop-value"},
  {"<simple-condition>", "<simple-condition>"},
  {"rev!", "rev!"},
  {"t?", "t?"},
  {"prop-setter", "prop-setter"},
  {"<str-in-port>", "<str-in-port>"},
  {"fold+", "fold+"},
  {"join", "join"},
  {"str-to-num", "str-to-num"},
  {"dlet", "dlet"},
  {"div", "div"},
  {"class-name", "class-name"},
  {"any2?", "any2?"},
  {"pack", "pack"},
  {"repeat", "repeat"},
  {"in", "in"},
  {"<singleton>", "<singleton>"},
  {"for", "for"},
  {"3rd", "3rd"},
  {"push", "push"},
  {"prefix?", "prefix?"},
  {"log", "log"},
  {"use", "use"},
  {"packing-in", "packing-in"},
  {"<=", "<="},
  {"seq", "seq"},
  {"push!", "push!"},
  {"identity", "identity"},
  {"<out-port>", "<out-port>"},
  {"port-contents", "port-contents"},
  {"bit?", "bit?"},
  {"ceil", "ceil"},
  {"keys", "keys"},
  {"asin", "asin"},
  {"dp", "dp"},
  {"low-elt", "low-elt"},
  {"col-res", "col-res"},
  {"unless", "unless"},
  {"pushf", "pushf"},
  {"unzip", "unzip"},
  {"quote", "quote"},
  {"match-sublist", "match-sublist"},
  {"fun-mets", "fun-mets"},
  {"col", "col"},
  {"items", "items"},
  {"do-keyed", "do-keyed"},
  {"df", "df"},
  {"app-args", "app-args"},
  {"tanh", "tanh"},
  {"t=", "t="},
  {"fun-arity", "fun-arity"},
  {"ready?", "ready?"},
  {"<<", "<<"},
  {"union-elts", "union-elts"},
  {"napp", "napp"},
  {"fold", "fold"},
  {"key-test", "key-test"},
  {"%pair", "%pair"},
  {"sort!", "sort!"},
  {"dg", "dg"},
  {"alpha?", "alpha?"},
  {"dm", "dm"},
  {"ins", "ins"},
  {"while", "while"},
  {"map2", "map2"},
  {"head-setter", "head-setter"},
  {"def", "def"},
  {"str", "str"},
  {"<condition>", "<condition>"},
  {"round", "round"},
  {"compose", "compose"},
  {"if", "if"},
  {"split", "split"},
  {"low-elt-setter", "low-elt-setter"},
  {"dc", "dc"},
  {"and", "and"},
  {"dv", "dv"},
  {"handler-info-message", "handler-info-message"},
  {"to-upper", "to-upper"},
  {"eof-object?", "eof-object?"},
  {"post", "post"},
  {"1+", "1+"},
  {"say", "say"},
  {"atan2", "atan2"},
  {"to-str", "to-str"},
  {"pos", "pos"},
  {"<opts>", "<opts>"},
  {"lower?", "lower?"},
  {"fab-handler", "fab-handler"},
  {"key-type", "key-type"},
  {"*", "*"},
  {"tan", "tan"},
  {"cat!", "cat!"},
  {"pow", "pow"},
  {"zip", "zip"},
  {"~", "~"},
  {"each", "each"},
  {"floor", "floor"},
  {"write-to-string", "write-to-string"},
  {"t<", "t<"},
  {"<subclass>", "<subclass>"},
  {"loc-val-setter", "loc-val-setter"},
  {"<each>", "<each>"},
  {"pack-in", "pack-in"},
  {"into", "into"},
  {"<file-port>", "<file-port>"},
  {"gets", "gets"},
  {">>>", ">>>"},
  {"<enum>", "<enum>"},
  {"let", "let"},
  {"match-atom", "match-atom"},
  {"<packer>", "<packer>"},
  {"assert", "assert"},
  {"elt-default", "elt-default"},
  {"fill!", "fill!"},
  {"<class>", "<class>"},
  {"trunc/", "trunc/"},
  {"below", "below"},
  {"with-port", "with-port"},
  {"fun-nary?", "fun-nary?"},
  {"sexpr-signature-parameters", "sexpr-signature-parameters"},
  {"prop-getter", "prop-getter"},
  {"sup", "sup"},
  {"any?", "any?"},
  {"t*", "t*"},
  {"<error>", "<error>"},
  {"gen-add-met", "gen-add-met"},
  {"del-vals!", "del-vals!"},
  {"<range>", "<range>"},
  {"<type>", "<type>"},
  {"loc-val", "loc-val"},
  {"subtype?", "subtype?"},
  {"set", "set"},
  {"col-res-type", "col-res-type"},
  {"msg", "msg"},
  {"<str-port>", "<str-port>"},
  {"elt-type", "elt-type"},
  {"sqrt", "sqrt"},
  {"sub", "sub"},
  {"<gen>", "<gen>"},
  {"lst", "lst"},
  {"opf", "opf"},
  {"puts", "puts"},
  {"<sym>", "<sym>"},
  {"abs", "abs"},
  {"write", "write"},
  {"t+", "t+"},
  {"1-", "1-"},
  {"<str-tab>", "<str-tab>"},
  {"floor/", "floor/"},
  {"$e", "$e"},
  {"<str>", "<str>"},
  {"error", "error"},
  {"renew", "renew"},
  {"-", "-"},
  {"fill", "fill"},
  {"exported", "exported"},
  {"pub", "pub"},
  {"elts", "elts"},
  {"as", "as"},
  {"list", "list"},
  {"<tup>", "<tup>"},
  {"pop", "pop"},
  {"type-class", "type-class"},
  {"$min-int", "$min-int"},
  {"%define-method", "%define-method"},
  {"vec", "vec"},
  {"id-hash", "id-hash"},
  {"do2", "do2"},
  {"now-setter", "now-setter"},
  {"fun-specs", "fun-specs"},
  {"prop-init", "prop-init"},
  {"<flat>", "<flat>"},
  {"fun-name", "fun-name"},
  {"rem", "rem"},
  {"decf", "decf"},
  {"class-direct-props", "class-direct-props"},
  {"&", "&"},
  {"handler-matches?", "handler-matches?"},
  {"packed", "packed"},
  {"map", "map"},
  {"<in-port>", "<in-port>"},
  {"fabs", "fabs"},
  {"find", "find"},
  {"elt-or", "elt-or"},
  {"describe-condition", "describe-condition"},
  {"cos", "cos"},
  {"tab-hash", "tab-hash"},
  {"to-digit", "to-digit"},
  {"<handler-info>", "<handler-info>"},
  {"find-setter", "find-setter"},
  {"<set>", "<set>"},
  {"logn", "logn"},
  {"sig", "sig"},
  {"op", "op"},
  {"force-out", "force-out"},
  {"<lst>", "<lst>"},
  {"neg", "neg"},
  {"<handler>", "<handler>"},
  {"mem?", "mem?"},
  {"packing", "packing"},
  {"atan", "atan"},
  {"range", "range"},
  {"tab-shrink-threshold", "tab-shrink-threshold"},
  {"del!", "del!"},
  {"<fun>", "<fun>"},
  {">>", ">>"},
  {"handler-function", "handler-function"},
  {"trunc", "trunc"},
  {"ct-also", "ct-also"},
  {"packing-with", "packing-with"},
  {"from", "from"},
  {"var-name", "var-name"},
  {"zap!", "zap!"},
  {"flo-bits", "flo-bits"},
  {"<seq!>", "<seq!>"},
  {"round/", "round/"},
  {"close", "close"},
  {"<simple-handler-info>", "<simple-handler-info>"},
  {"mod+", "mod+"},
  {"address-of", "address-of"},
  {"%prop-unbound-error", "%prop-unbound-error"},
  {"%prop", "%prop"},
  {"fun-names", "fun-names"},
  {"pop!", "pop!"},
  {"peek", "peek"},
  {"newline", "newline"},
  {"map-keyed", "map-keyed"},
  {"*print-base*", "*print-base*"},
  {"always", "always"},
  {"out", "out"},
  {"condition-message", "condition-message"},
  {"elt", "elt"},
  {"ddv", "ddv"},
  {"sub-setter", "sub-setter"},
  {"curry", "curry"},
  {"sort-by", "sort-by"},
  {"fin", "fin"},
  {"<", "<"},
  {"finds", "finds"},
  {"del-dups!", "del-dups!"},
  {"met-app?", "met-app?"},
  {"try", "try"},
  {"tup", "tup"},
  {"prop-owner", "prop-owner"},
  {"<seq>", "<seq>"},
  {"app", "app"},
  {"cat2", "cat2"},
  {"ds", "ds"},
  {"cat-sym", "cat-sym"},
  {"suffix?", "suffix?"},
  {"var-type", "var-type"},
  {"$default-handler-info", "$default-handler-info"},
  {"class-children", "class-children"},
  {"export", "export"},
  {"tab-growth-factor", "tab-growth-factor"},
  {"<met>", "<met>"},
  {"port-index", "port-index"},
  {"find-getter", "find-getter"},
  {"head", "head"},
  {"popf", "popf"},
  {"tab-growth-threshold", "tab-growth-threshold"},
  {"class-ancestors", "class-ancestors"},
  {"<col!>", "<col!>"},
  {"<file-in-port>", "<file-in-port>"},
  {"zap", "zap"},
  {"packer-res", "packer-res"},
  {"<simple-error>", "<simple-error>"},
  {"mif", "mif"},
  {"len", "len"},
  {"$max-int", "$max-int"},
  {"cosh", "cosh"},
  {"handler-info-arguments", "handler-info-arguments"},
  {"need-implementation", "need-implementation"},
  {"sort", "sort"},
  {"or", "or"},
  {"port-line", "port-line"},
  {"new", "new"},
  {"get", "get"},
  {"put", "put"},
  {"<map>", "<map>"},
  {"object-class", "object-class"},
  {"<step>", "<step>"},
  {"<seq.>", "<seq.>"},
  {"macro-expand", "macro-expand"},
  {"<col.>", "<col.>"},
  {"neg?", "neg?"},
  {"case-insensitive-string-hash", "case-insensitive-string-hash"},
  {"<port>", "<port>"},
  {"len-setter", "len-setter"},
  {"odd?", "odd?"},
  {"range-by", "range-by"},
  {"open", "open"},
  {"nxt", "nxt"},
  {"fab-class", "fab-class"},
  {"<col>", "<col>"},
  {"type-object", "type-object"},
  {"^", "^"},
  {"del-dups", "del-dups"},
  {"cat", "cat"},
  {"may-isa?", "may-isa?"},
  {"now-key", "now-key"},
  {"==", "=="},
  {"add!", "add!"},
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
