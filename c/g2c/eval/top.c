/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YgooSmathYS,"goo/math","/");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yerror,"goo/boot","error");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYmap2,"goo/cols/seq","map2");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
DEF(YevalStopYesctst,"eval/top","esctst");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DEF(YevalStopYbacktrace_short,"eval/top","backtrace-short");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YLunionG,"goo/boot","<union>");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YOlst,"goo/boot","@lst");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YLcolG,"goo/boot","<col>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSast_linearizeYupdate_walkX,"eval/ast-linearize","update-walk!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalStopYtop,"eval/top","top");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
DEF(YevalStopYparse,"eval/top","parse");
DEF(YevalStopYauto_run,"eval/top","auto-run");
DEF(YevalStopYload,"eval/top","load");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
DEF(YevalStopYrun,"eval/top","run");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooSmathY_,"goo/math","-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Ytype_elts,"goo/boot","type-elts");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Ynew,"goo/boot","new");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmathYE,"goo/math","=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(Ynot,"goo/boot","not");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(Ytail,"goo/boot","tail");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_13);
DEFLIT(lit_59);
DEFLIT(lit_27);
DEFLIT(lit_110);
DEFLIT(lit_61);
DEFLIT(lit_43);
DEFLIT(lit_51);
DEFLIT(lit_22);
DEFLIT(lit_96);
DEFLIT(lit_1);
DEFLIT(lit_36);
DEFLIT(lit_28);
DEFLIT(lit_62);
DEFLIT(lit_26);
DEFLIT(lit_9);
DEFLIT(lit_31);
DEFLIT(lit_20);
DEFLIT(lit_79);
DEFLIT(lit_102);
DEFLIT(lit_5);
DEFLIT(lit_58);
DEFLIT(lit_114);
DEFLIT(lit_84);
DEFLIT(lit_63);
DEFLIT(lit_16);
DEFLIT(lit_11);
DEFLIT(lit_10);
DEFLIT(lit_97);
DEFLIT(lit_34);
DEFLIT(lit_15);
DEFLIT(lit_94);
DEFLIT(lit_86);
DEFLIT(lit_88);
DEFLIT(lit_39);
DEFLIT(lit_117);
DEFLIT(lit_101);
DEFLIT(lit_23);
DEFLIT(lit_118);
DEFLIT(lit_116);
DEFLIT(lit_0);
DEFLIT(lit_111);
DEFLIT(lit_2);
DEFLIT(lit_83);
DEFLIT(lit_119);
DEFLIT(lit_29);
DEFLIT(lit_18);
DEFLIT(lit_87);
DEFLIT(lit_64);
DEFLIT(lit_67);
DEFLIT(lit_57);
DEFLIT(lit_25);
DEFLIT(lit_112);
DEFLIT(lit_19);
DEFLIT(lit_98);
DEFLIT(lit_30);
DEFLIT(lit_89);
DEFLIT(lit_95);
DEFLIT(lit_17);
DEFLIT(lit_93);
DEFLIT(lit_100);
DEFLIT(lit_49);
DEFLIT(lit_32);
DEFLIT(lit_47);
DEFLIT(lit_71);
DEFLIT(lit_107);
DEFLIT(lit_48);
DEFLIT(lit_82);
DEFLIT(lit_12);
DEFLIT(lit_42);
DEFLIT(lit_92);
DEFLIT(lit_78);
DEFLIT(lit_113);
DEFLIT(lit_108);
DEFLIT(lit_75);
DEFLIT(lit_45);
DEFLIT(lit_35);
DEFLIT(lit_73);
DEFLIT(lit_115);
DEFLIT(lit_90);
DEFLIT(lit_41);
DEFLIT(lit_69);
DEFLIT(lit_55);
DEFLIT(lit_56);
DEFLIT(lit_24);
DEFLIT(lit_85);
DEFLIT(lit_76);
DEFLIT(lit_60);
DEFLIT(lit_109);
DEFLIT(lit_44);
DEFLIT(lit_6);
DEFLIT(lit_3);
DEFLIT(lit_106);
DEFLIT(lit_14);
DEFLIT(lit_80);
DEFLIT(lit_105);
DEFLIT(lit_37);
DEFLIT(lit_103);
DEFLIT(lit_50);
DEFLIT(lit_99);
DEFLIT(lit_66);
DEFLIT(lit_38);
DEFLIT(lit_52);
DEFLIT(lit_33);
DEFLIT(lit_70);
DEFLIT(lit_74);
DEFLIT(lit_54);
DEFLIT(lit_104);
DEFLIT(lit_81);
DEFLIT(lit_8);
DEFLIT(lit_40);
DEFLIT(lit_7);
DEFLIT(lit_46);
DEFLIT(lit_65);
DEFLIT(lit_21);
DEFLIT(lit_77);
DEFLIT(lit_53);
DEFLIT(lit_72);
DEFLIT(lit_4);
DEFLIT(lit_91);
DEFLIT(lit_68);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(YevalStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(YevalStopYPPbottomPPast_run);
FUNFOR(YevalStopYPPbottomPPg2c_run);
FUNFOR(YevalStopYauto_run);
FUNFOR(YevalStopYauto_eval);
LOCFOR(fun_eval_in_12);
LOCFOR(fun_eval_13);
LOCFOR(fun_str_eval_in_14);
LOCFOR(fun_str_eval_15);
FUNFOR(YevalStopYcompiled_fileQ);
LOCFOR(fun_loop_17);
LOCFOR(fun_18);
LOCFOR(fun_19);
LOCFOR(fun_read_file_20);
LOCFOR(fun_load_in_21);
LOCFOR(fun_load_file_22);
LOCFOR(fun_load_23);
LOCFOR(fun_prompt_for_command_expression_24);
LOCFOR(fun_print_result_expression_25);
LOCFOR(fun_do_stack_frames_26);
LOCFOR(fun_x_1766_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_30);
LOCFOR(fun_backtrace_31);
LOCFOR(fun_32);
LOCFOR(fun_frame_33);
LOCFOR(fun_34);
LOCFOR(fun_35);
LOCFOR(fun_frame_var_36);
LOCFOR(fun_37);
LOCFOR(fun_bt_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_backtrace_short_41);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1805_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1802_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1799_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1796_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1793_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1790_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1787_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1784_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1781_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1778_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1775_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1772_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1769_72);
LOCFOR(fun_73);
LOCFOR(fun_74);
LOCFOR(fun_75);
LOCFOR(fun_76);
LOCFOR(fun_loop_77);
LOCFOR(fun_78);
LOCFOR(fun_PPtopPPtop_in_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_loop_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_top_86);
LOCFOR(fun_87);
FUNFOR(YevalStopYsave_image);
extern P YevalStopY___main_0___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_0) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,FREEREF(0),LITREF(lit_1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_1) {
LINK_STACK();
loop:
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
UNLINK_STACK();
  QRET(LITREF(lit_3));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T0 = FUNFAB(fun_0,1,exit_);
  T1 = fun_1;
  with_cleanup(T0,T1);
  CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(YevalStopYesctst) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_5) {
  P s_,modname_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_6) {
  P s_,ct_env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYPPbottomPPg2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_run) {
  P ast_,ct_env_;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YevalStopYPPbottomPPg2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalStopYPPbottomPPast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYauto_eval) {
  P form_,ct_env_;
  P astF2955;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2955 = T1;
  T2 = CALL2(1,VARREF(YevalStopYrun),astF2955,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2957;
  P oF2956;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2956 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2956);
  eF2957 = T3;
  T2 = eF2957;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_13) {
  P x_,modname_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_14) {
  P x_,ct_env_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(YevalStopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YgooSioSwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_15) {
  P x_,modname_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYcompiled_fileQ) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF2958;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2958 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2958);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2958,forms_);
    a1 = T8;
    forms_ = a1;
    goto loop;
    T3 = T7;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_18) {
  P loopF2959;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2959 = T2;
  FUNINIT(loopF2959, 2,FREEREF(0),loopF2959);
  T3 = CALL1(0,loopF2959,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2960;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2960 = T1;
  if (tmpF2960 != YPfalse) {
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

FUNCODEDEF(fun_read_file_20) {
  P filename_;
  P portF2961;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2961 = YPfalse;
  portF2961 = BOXFAB(portF2961);
  T3 = FUNFAB(fun_18,2,portF2961,filename_);
  T4 = FUNFAB(fun_19,1,portF2961);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2963;
  P xF2962;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYcompiled_fileQ),filename_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSsystemYso_load),filename_);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalStopYread_file),filename_);
    xF2962 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2962,ct_env_,YPfalse);
    oF2963 = T6;
    T7 = CALL2(1,VARREF(YevalStopYrun),oF2963,ct_env_);
    T5 = T7;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_file_22) {
  P filename_,modname_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(YevalSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_23) {
  P name_,modname_;
  P realfileF2964;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2964 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2964);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_37),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2964,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2968;
  P arg_strF2967;
  P tmpF2966;
  P formF2965;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_42),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF2965 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2965,VARREF(YLlstG));
  tmpF2966 = T6;
  if (tmpF2966 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2965);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_43));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2967 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_44),arg_strF2967,LITREF(lit_45));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2968 = T13;
    T16 = CALL1(1,VARREF(YgooStypesY2nd),formF2965);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2968);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2965;
  }
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_25) {
  P env_,level_,label_,result_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_49),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_26) {
  P fun_;
  P T0;
  P a1;
LINK_STACK();
  ARG(fun_, 0);
loop:
  T0 = (P)YPdo_stack_frames(fun_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1766_27) {
  P msg_,args_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1765F2981;
  P x_1765F2980;
  P x_1765F2979;
  P x_1765F2978;
  P x_1765F2977;
  P x_1765F2976;
  P x_1765F2975;
  P bodyF2974;
  P argsF2973;
  P fF2972;
  P numF2971;
  P x_1765F2970;
  P x_1766F2969;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1766_27,1);
  x_1766F2969 = T1;
  FUNINIT(x_1766F2969, 1,return_);
  x_1765F2970 = FREEREF(0);
  numF2971 = YPfalse;
  numF2971 = BOXFAB(numF2971);
  fF2972 = YPfalse;
  fF2972 = BOXFAB(fF2972);
  argsF2973 = YPfalse;
  argsF2973 = BOXFAB(argsF2973);
  bodyF2974 = YPfalse;
  bodyF2974 = BOXFAB(bodyF2974);
  T11 = CALL2(1,VARREF(YisaQ),x_1765F2970,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1765F2970,LITREF(lit_56),x_1766F2969);
    x_1765F2975 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1765F2975,x_1766F2969);
    x_1765F2976 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1765F2976,x_1766F2969);
    BOXVAL(numF2971) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1765F2976);
    x_1765F2977 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1765F2977,x_1766F2969);
    BOXVAL(fF2972) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1765F2977);
    x_1765F2978 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1765F2978,x_1766F2969);
    BOXVAL(argsF2973) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1765F2978);
    x_1765F2979 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1765F2979,x_1766F2969);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1765F2975);
    x_1765F2980 = T26;
    BOXVAL(bodyF2974) = x_1765F2980;
    x_1765F2981 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1765F2981,x_1766F2969);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1766F2969,LITREF(lit_57),x_1765F2970);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T37 = BOXVAL(numF2971);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_50));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_51));
  T48 = BOXVAL(fF2972);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T54 = BOXVAL(argsF2973);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2974);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T64 = BOXVAL(numF2971);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),6,T44,T45,T50,T59,T60,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T39,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_28,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_30) {
  P f_,Uargs_;
  P argsF2982;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2982 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_65),T2,f_,argsF2982);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_31) {
  P numF2983;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  numF2983 = YPint((P)0);
  numF2983 = BOXFAB(numF2983);
  T3 = FUNFAB(fun_30,1,numF2983);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P f_,Uargs_;
  P argsF2984;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2984 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_68),T5,f_,argsF2984);
  } else {
  }
  T8 = BOXVAL(FREEREF(1));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(1)) = T7;
  T0 = T6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_33) {
  P n_;
  P numF2985;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  numF2985 = YPint((P)0);
  numF2985 = BOXFAB(numF2985);
  T3 = FUNFAB(fun_32,2,n_,numF2985);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P f_,Uargs_;
  P argsF2986;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2986 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_names),f_);
    T6 = CALL2(1,VARREF(YgooScolsSseqYpos),T7,FREEREF(2));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2986,T6);
    T4 = CALL1(1,FREEREF(3),T5);
  } else {
  }
  T10 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXVAL(FREEREF(1)) = T9;
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_35) {
  P ret_;
  P numF2987;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  numF2987 = YPint((P)0);
  numF2987 = BOXFAB(numF2987);
  T2 = FUNFAB(fun_34,4,FREEREF(0),numF2987,FREEREF(1),ret_);
  T1 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T2);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_36) {
  P n_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_35,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P f_,Uargs_;
  P argsF2988;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2988 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_72),T2,f_);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_38) {
  P numF2989;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  numF2989 = YPint((P)0);
  numF2989 = BOXFAB(numF2989);
  T3 = FUNFAB(fun_37,1,numF2989);
  T2 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P f_,Uargs_;
  P tmpF2992;
  P tmpF2991;
  P argsF2990;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2990 = T1;
  T2 = BOXVAL(FREEREF(0));
  if (T2 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooSmathYE),T6,YPfalse);
    T4 = CALL1(1,VARREF(Ynot),T5);
    tmpF2991 = T4;
    if (tmpF2991 != YPfalse) {
      T11 = CALL1(1,VARREF(Yfun_name),f_);
      T10 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T11);
      T9 = CALL3(1,VARREF(YgooScolsSseqYsub),T10,YPint((P)0),YPint((P)10));
      T8 = CALL2(1,VARREF(YgooSmathYE),T9,LITREF(lit_75));
      T7 = T8;
    } else {
      T7 = YPfalse;
    }
    T3 = T7;
    if (T3 != YPfalse) {
      T12 = CALL1(1,FREEREF(1),YPfalse);
    } else {
    }
    T14 = BOXVAL(FREEREF(2));
    T13 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_76),T14,f_,argsF2990);
  } else {
  }
  T17 = CALL1(1,VARREF(Yfun_name),f_);
  T16 = CALL2(1,VARREF(YgooSmathYNE),T17,YPfalse);
  tmpF2992 = T16;
  if (tmpF2992 != YPfalse) {
    T22 = CALL1(1,VARREF(Yfun_name),f_);
    T21 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T22);
    T20 = CALL3(1,VARREF(YgooScolsSseqYsub),T21,YPint((P)0),YPint((P)7));
    T19 = CALL2(1,VARREF(YgooSmathYE),T20,LITREF(lit_77));
    T18 = T19;
  } else {
    T18 = YPfalse;
  }
  T15 = T18;
  if (T15 != YPfalse) {
    T23 = BOXVAL(FREEREF(0)) = YPtrue;
  } else {
  }
  T26 = BOXVAL(FREEREF(2));
  T25 = CALL2(1,VARREF(YgooSmathYA),T26,YPint((P)1));
  T24 = BOXVAL(FREEREF(2)) = T25;
  T0 = T24;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P break_;
  P numF2994;
  P seen_topF2993;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  seen_topF2993 = YPfalse;
  seen_topF2993 = BOXFAB(seen_topF2993);
  numF2994 = YPint((P)0);
  numF2994 = BOXFAB(numF2994);
  T5 = FUNFAB(fun_39,3,seen_topF2993,break_,numF2994);
  T4 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T5);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_short_41) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_40;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(YevalStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYdo_restart) {
  P restarts_,n_;
  P tmpF2995;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_82));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2995 = T4;
  if (tmpF2995 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_83));
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_44) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_45) {
  P c_,r_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YevalStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_92));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_93),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_46) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_47) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1805_48) {
  P msg_,args_;
  P resF2996;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2996 = T2;
  T5 = BOXVAL(FREEREF(1));
  T4 = CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_110),resF2996);
  T1 = T4;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1804F3003;
  P x_1804F3002;
  P x_1804F3001;
  P nameF3000;
  P nF2999;
  P x_1804F2998;
  P x_1805F2997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1805_48,4);
  x_1805F2997 = T1;
  FUNINIT(x_1805F2997, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1804F2998 = FREEREF(3);
  nF2999 = YPfalse;
  nF2999 = BOXFAB(nF2999);
  nameF3000 = YPfalse;
  nameF3000 = BOXFAB(nameF3000);
  T7 = CALL2(1,VARREF(YisaQ),x_1804F2998,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1804F2998,LITREF(lit_69),x_1805F2997);
    x_1804F3001 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1804F3001,x_1805F2997);
    BOXVAL(nF2999) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1804F3001);
    x_1804F3002 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1804F3002,x_1805F2997);
    BOXVAL(nameF3000) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1804F3002);
    x_1804F3003 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1804F3003,x_1805F2997);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1805F2997,LITREF(lit_57),x_1804F2998);
  }
  T19 = BOXVAL(nF2999);
  T20 = BOXVAL(nameF3000);
  T18 = CALL2(1,VARREF(YevalStopYframe_var),T19,T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1802_50) {
  P msg_,args_;
  P x_1803F3004;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1803F3004 = FREEREF(0);
  T3 = FUNFAB(fun_49,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1803F3004);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1801F3009;
  P x_1801F3008;
  P nF3007;
  P x_1801F3006;
  P x_1802F3005;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1802_50,5);
  x_1802F3005 = T1;
  FUNINIT(x_1802F3005, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1801F3006 = FREEREF(0);
  nF3007 = YPfalse;
  nF3007 = BOXFAB(nF3007);
  T5 = CALL2(1,VARREF(YisaQ),x_1801F3006,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1801F3006,LITREF(lit_66),x_1802F3005);
    x_1801F3008 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1801F3008,x_1802F3005);
    BOXVAL(nF3007) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1801F3008);
    x_1801F3009 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1801F3009,x_1802F3005);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1802F3005,LITREF(lit_57),x_1801F3006);
  }
  T14 = BOXVAL(nF3007);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1799_52) {
  P msg_,args_;
  P x_1800F3010;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1800F3010 = FREEREF(0);
  T3 = FUNFAB(fun_51,4,x_1800F3010,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1798F3013;
  P x_1798F3012;
  P x_1799F3011;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1799_52,5);
  x_1799F3011 = T1;
  FUNINIT(x_1799F3011, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1798F3012 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1798F3012,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1798F3012,LITREF(lit_63),x_1799F3011);
    x_1798F3013 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1798F3013,x_1799F3011);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1799F3011,LITREF(lit_57),x_1798F3012);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1796_54) {
  P msg_,args_;
  P x_1797F3014;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1797F3014 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,x_1797F3014,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1795F3017;
  P x_1795F3016;
  P x_1796F3015;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1796_54,5);
  x_1796F3015 = T1;
  FUNINIT(x_1796F3015, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1795F3016 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1795F3016,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1795F3016,LITREF(lit_71),x_1796F3015);
    x_1795F3017 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1795F3017,x_1796F3015);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1796F3015,LITREF(lit_57),x_1795F3016);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1793_56) {
  P msg_,args_;
  P x_1794F3018;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1794F3018 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1794F3018,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1792F3021;
  P x_1792F3020;
  P x_1793F3019;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1793_56,5);
  x_1793F3019 = T1;
  FUNINIT(x_1793F3019, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1792F3020 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1792F3020,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1792F3020,LITREF(lit_20),x_1793F3019);
    x_1792F3021 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1792F3021,x_1793F3019);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1793F3019,LITREF(lit_57),x_1792F3020);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYauto_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1790_58) {
  P msg_,args_;
  P x_1791F3022;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1791F3022 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1791F3022,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1789F3025;
  P x_1789F3024;
  P x_1790F3023;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1790_58,5);
  x_1790F3023 = T1;
  FUNINIT(x_1790F3023, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1789F3024 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1789F3024,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1789F3024,LITREF(lit_111),x_1790F3023);
    x_1789F3025 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1789F3025,x_1790F3023);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1790F3023,LITREF(lit_57),x_1789F3024);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1787_60) {
  P msg_,args_;
  P x_1788F3026;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1788F3026 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1788F3026,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1786F3029;
  P x_1786F3028;
  P x_1787F3027;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1787_60,5);
  x_1787F3027 = T1;
  FUNINIT(x_1787F3027, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1786F3028 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1786F3028,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1786F3028,LITREF(lit_6),x_1787F3027);
    x_1786F3029 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1786F3029,x_1787F3027);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1787F3027,LITREF(lit_57),x_1786F3028);
  }
  T8 = VARSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1784_62) {
  P msg_,args_;
  P x_1785F3030;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1785F3030 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1785F3030,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P new_envF3036;
  P x_1783F3035;
  P x_1783F3034;
  P mF3033;
  P x_1783F3032;
  P x_1784F3031;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1784_62,5);
  x_1784F3031 = T1;
  FUNINIT(x_1784F3031, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1783F3032 = FREEREF(0);
  mF3033 = YPfalse;
  mF3033 = BOXFAB(mF3033);
  T5 = CALL2(1,VARREF(YisaQ),x_1783F3032,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1783F3032,LITREF(lit_112),x_1784F3031);
    x_1783F3034 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1783F3034,x_1784F3031);
    BOXVAL(mF3033) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1783F3034);
    x_1783F3035 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1783F3035,x_1784F3031);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1784F3031,LITREF(lit_57),x_1783F3032);
  }
  T15 = BOXVAL(mF3033);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF3036 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF3036;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1781_64) {
  P msg_,args_;
  P x_1782F3037;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1782F3037 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1782F3037,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1780F3042;
  P x_1780F3041;
  P nF3040;
  P x_1780F3039;
  P x_1781F3038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1781_64,5);
  x_1781F3038 = T1;
  FUNINIT(x_1781F3038, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1780F3039 = FREEREF(0);
  nF3040 = YPfalse;
  nF3040 = BOXFAB(nF3040);
  T5 = CALL2(1,VARREF(YisaQ),x_1780F3039,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1780F3039,LITREF(lit_113),x_1781F3038);
    x_1780F3041 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1780F3041,x_1781F3038);
    BOXVAL(nF3040) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1780F3041);
    x_1780F3042 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1780F3042,x_1781F3038);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1781F3038,LITREF(lit_57),x_1780F3039);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF3040);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1778_66) {
  P msg_,args_;
  P x_1779F3043;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1779F3043 = FREEREF(0);
  T3 = FUNFAB(fun_65,5,x_1779F3043,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1777F3046;
  P x_1777F3045;
  P x_1778F3044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1778_66,6);
  x_1778F3044 = T1;
  FUNINIT(x_1778F3044, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1777F3045 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1777F3045,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1777F3045,LITREF(lit_81),x_1778F3044);
    x_1777F3046 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1777F3046,x_1778F3044);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1778F3044,LITREF(lit_57),x_1777F3045);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1775_68) {
  P msg_,args_;
  P x_1776F3047;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1776F3047 = FREEREF(0);
  T3 = FUNFAB(fun_67,5,x_1776F3047,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1774F3050;
  P x_1774F3049;
  P x_1775F3048;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1775_68,6);
  x_1775F3048 = T1;
  FUNINIT(x_1775F3048, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1774F3049 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1774F3049,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1774F3049,LITREF(lit_114),x_1775F3048);
    x_1774F3050 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1774F3050,x_1775F3048);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1775F3048,LITREF(lit_57),x_1774F3049);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1772_70) {
  P msg_,args_;
  P x_1773F3051;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1773F3051 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1773F3051,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1771F3054;
  P x_1771F3053;
  P x_1772F3052;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1772_70,6);
  x_1772F3052 = T1;
  FUNINIT(x_1772F3052, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1771F3053 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1771F3053,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1771F3053,LITREF(lit_115),x_1772F3052);
    x_1771F3054 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1771F3054,x_1772F3052);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1772F3052,LITREF(lit_57),x_1771F3053);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1769_72) {
  P msg_,args_;
  P x_1770F3055;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1770F3055 = FREEREF(0);
  T3 = FUNFAB(fun_71,6,x_1770F3055,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1768F3058;
  P x_1768F3057;
  P x_1769F3056;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1769_72,7);
  x_1769F3056 = T1;
  FUNINIT(x_1769F3056, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1768F3057 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1768F3057,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1768F3057,LITREF(lit_86),x_1769F3056);
    x_1768F3058 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1768F3058,x_1769F3056);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1769F3056,LITREF(lit_57),x_1768F3057);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P x_1767F3060;
  P formF3059;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_95));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_96));
  formF3059 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF3059,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1767F3060 = formF3059;
    T12 = FUNFAB(fun_73,7,x_1767F3060,formF3059,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_75) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_94),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_46;
  T4 = FUNFAB(fun_47,1,FREEREF(1));
  T5 = FUNFAB(fun_74,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_76) {
  P continue_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_44;
  T2 = FUNFAB(fun_45,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_75,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_77) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_76,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_78) {
  P blow_;
  P loopF3061;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_77,8);
  loopF3061 = T1;
  FUNINIT(loopF3061, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF3061);
  T2 = CALL0(0,loopF3061);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_79) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF3062;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(level_, 0);
  ARG(top_, 1);
  ARG(quit_, 2);
  ARG(show_restartsQ_, 3);
  ARG(ct_env_, 4);
loop:
  show_restartsQ_ = BOXFAB(show_restartsQ_);
  ct_env_ = BOXFAB(ct_env_);
  restartsF3062 = YPfalse;
  restartsF3062 = BOXFAB(restartsF3062);
  T5 = FUNFAB(fun_78,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF3062);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_80) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_81) {
  P c_,r_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL1(1,FREEREF(0),YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P top_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYruntime_environment),FREEREF(1));
  T0 = CALL5(1,VARREF(YevalStopYPPtopPPtop_in),YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_82,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_84) {
  P loopF3063;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_83,3);
  loopF3063 = T1;
  FUNINIT(loopF3063, 3,FREEREF(0),FREEREF(1),loopF3063);
  T2 = CALL0(0,loopF3063);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_85) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_116),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_80;
  T4 = FUNFAB(fun_81,1,quit_);
  T5 = FUNFAB(fun_84,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_86) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_85,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_119));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalStopYsave_image) {
  P image_name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_87;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
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
loop:
  lit_0 = YPPsym((P)"esctst");
  lit_1 = YPPsym((P)"exit");
  lit_2 = YPsb((P)"CLEANUP\n");
  lit_3 = YPPsym((P)"cleanup");
  lit_4 = YPsb((P)"DO\n");
  lit_5 = YPPsym((P)"done");
  T3 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_0 = YPmet(FUNCODEREF(fun_0),YPfalse,T3,ENVNUL,PNUL,YPfalse);
  T2 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_1 = YPmet(FUNCODEREF(fun_1),YPfalse,T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(YPPlist(1,LITREF(lit_1)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_2 = YPmet(FUNCODEREF(fun_2),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  YevalStopYesctst = YPmet(FUNCODEREF(YevalStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = YevalStopYesctst;
  VARSET(YevalStopYesctst,T4);
  lit_6 = YPPsym((P)"g2c-eval");
  lit_7 = YPPsym((P)"exp");
  lit_8 = YPPsym((P)"ct-env");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalStopYg2c_eval,T5);
  lit_9 = YPPsym((P)"parse-in");
  lit_10 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_9),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalStopYparse_in,T8);
  lit_11 = YPPsym((P)"parse");
  lit_12 = YPPsym((P)"modname");
  T12 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalStopYparse,T13);
  lit_13 = YPPsym((P)"str-parse-in");
  lit_14 = YPsb((P)"%=\n");
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalStopYstr_parse_in,T18);
  lit_15 = YPPsym((P)"str-parse");
  T22 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_15),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalStopYstr_parse,T23);
  lit_16 = YPPsym((P)"%%bottom%%ast-run");
  lit_17 = YPPsym((P)"ast");
  T27 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPast_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPast_run),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T28 = YevalStopYPPbottomPPast_run;
  VARSET(YevalStopYPPbottomPPast_run,T28);
  lit_18 = YPPsym((P)"%%bottom%%g2c-run");
  T29 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYPPbottomPPg2c_run = YPmet(FUNCODEREF(YevalStopYPPbottomPPg2c_run),LITREF(lit_18),T29,ENVNUL,PNUL,YPfalse);
  T30 = YevalStopYPPbottomPPg2c_run;
  VARSET(YevalStopYPPbottomPPg2c_run,T30);
  lit_19 = YPPsym((P)"auto-run");
  T31 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_run = YPmet(FUNCODEREF(YevalStopYauto_run),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T32 = YevalStopYauto_run;
  VARSET(YevalStopYauto_run,T32);
  lit_20 = YPPsym((P)"auto-eval");
  lit_21 = YPPsym((P)"form");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYauto_eval = YPmet(FUNCODEREF(YevalStopYauto_eval),LITREF(lit_20),T33,ENVNUL,PNUL,YPfalse);
  T34 = YevalStopYauto_eval;
  VARSET(YevalStopYauto_eval,T34);
  VARSET(YevalStopYrun,VARREF(YevalStopYauto_run));
  lit_22 = YPPsym((P)"eval-in");
  lit_23 = YPPsym((P)"x");
  T35 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_22),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalStopYeval_in);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalStopYeval_in);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_eval_in_12;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalStopYeval_in,T36);
  lit_24 = YPPsym((P)"eval");
  T40 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_24),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSsyntaxYeval);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSsyntaxYeval);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_eval_13;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSsyntaxYeval,T41);
  lit_25 = YPPsym((P)"str-eval-in");
  T45 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalStopYstr_eval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalStopYstr_eval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_str_eval_in_14;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalStopYstr_eval_in,T46);
  lit_26 = YPPsym((P)"str-eval");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_26),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalStopYstr_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalStopYstr_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_str_eval_15;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalStopYstr_eval,T51);
  lit_27 = YPPsym((P)"compiled-file?");
  lit_28 = YPPsym((P)"name");
  lit_29 = YPsb((P)".gooc");
  T55 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_27),T55,ENVNUL,PNUL,YPfalse);
  T56 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T56);
  lit_30 = YPPsym((P)"read-file");
  lit_31 = YPPsym((P)"filename");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"forms");
  T60 = YPsig(YPPlist(1,LITREF(lit_33)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_32),T60,ENVNUL,PNUL,YPfalse);
  T59 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T59,ENVNUL,PNUL,YPfalse);
  T58 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(YPPlist(1,LITREF(lit_31)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_30),T57,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(YevalStopYread_file);
  if (T63 != YPfalse) {
    T62 = VARREF(YevalStopYread_file);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_read_file_20;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(YevalStopYread_file,T61);
  lit_34 = YPPsym((P)"load-in");
  T65 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_34),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(YevalSastYload_in);
  if (T68 != YPfalse) {
    T67 = VARREF(YevalSastYload_in);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_load_in_21;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(YevalSastYload_in,T66);
  lit_35 = YPPsym((P)"load-file");
  T70 = YPsig(YPPlist(2,LITREF(lit_31),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_35),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(YevalStopYload_file);
  if (T73 != YPfalse) {
    T72 = VARREF(YevalStopYload_file);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_load_file_22;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(YevalStopYload_file,T71);
  lit_36 = YPPsym((P)"load");
  lit_37 = YPsb((P)"File %s not found");
  T75 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_36),T75,ENVNUL,PNUL,YPfalse);
  T78 = BOUNDP(YevalStopYload);
  if (T78 != YPfalse) {
    T77 = VARREF(YevalStopYload);
  } else {
    T77 = YPfalse;
  }
  T79 = fun_load_23;
  T76 = CALL2(1,VARREF(YPdefine_method),T77,T79);
  VARSET(YevalStopYload,T76);
  lit_38 = YPPsym((P)"prompt-for-command-expression");
  lit_39 = YPPsym((P)"env");
  lit_40 = YPPsym((P)"level");
  lit_41 = YPPsym((P)"prompt");
  lit_42 = YPsb((P)"%s %=%s");
  lit_43 = YPPsym((P)"unquote");
  lit_44 = YPsb((P)"(");
  lit_45 = YPsb((P)")");
  T80 = YPsig(YPPlist(3,LITREF(lit_39),LITREF(lit_40),LITREF(lit_41)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_38),T80,ENVNUL,PNUL,YPfalse);
  T83 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T83 != YPfalse) {
    T82 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T82 = YPfalse;
  }
  T84 = fun_prompt_for_command_expression_24;
  T81 = CALL2(1,VARREF(YPdefine_method),T82,T84);
  VARSET(YevalStopYprompt_for_command_expression,T81);
  lit_46 = YPPsym((P)"print-result-expression");
  lit_47 = YPPsym((P)"label");
  lit_48 = YPPsym((P)"result");
  lit_49 = YPsb((P)"%s %=%s");
  T85 = YPsig(YPPlist(4,LITREF(lit_39),LITREF(lit_40),LITREF(lit_47),LITREF(lit_48)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_46),T85,ENVNUL,PNUL,YPfalse);
  T88 = BOUNDP(YevalStopYprint_result_expression);
  if (T88 != YPfalse) {
    T87 = VARREF(YevalStopYprint_result_expression);
  } else {
    T87 = YPfalse;
  }
  T89 = fun_print_result_expression_25;
  T86 = CALL2(1,VARREF(YPdefine_method),T87,T89);
  VARSET(YevalStopYprint_result_expression,T86);
  lit_50 = YPPsym((P)"do-stack-frames");
  lit_51 = YPPsym((P)"fun");
  T90 = YPsig(YPPlist(1,LITREF(lit_51)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_50),T90,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalStopYdo_stack_frames);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_do_stack_frames_26;
  T91 = CALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalStopYdo_stack_frames,T91);
  lit_52 = YPPsym((P)"return");
  lit_53 = YPPsym((P)"x-1766");
  lit_54 = YPPsym((P)"msg");
  lit_55 = YPPsym((P)"args");
  lit_56 = YPPsym((P)"for-frames");
  lit_57 = YPsb((P)"Match Pattern Failure");
  lit_58 = YPPsym((P)"let");
  lit_59 = YPPsym((P)"_args");
  lit_60 = YPPsym((P)"def");
  lit_61 = YPPsym((P)"rev");
  lit_62 = YPPsym((P)"incf");
  T97 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1766_27 = YPmet(FUNCODEREF(fun_x_1766_27),LITREF(lit_53),T97,ENVNUL,PNUL,YPfalse);
  T96 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T95,ENVNUL,PNUL,YPfalse);
  T98 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T98);
  lit_63 = YPPsym((P)"backtrace");
  lit_64 = YPPsym((P)"f");
  lit_65 = YPsb((P)"[%=] %= %=\n");
  T100 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_30 = YPmet(FUNCODEREF(fun_30),YPfalse,T100,ENVNUL,PNUL,YPfalse);
  T99 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_31 = YPmet(FUNCODEREF(fun_backtrace_31),LITREF(lit_63),T99,ENVNUL,PNUL,YPfalse);
  T103 = BOUNDP(YevalStopYbacktrace);
  if (T103 != YPfalse) {
    T102 = VARREF(YevalStopYbacktrace);
  } else {
    T102 = YPfalse;
  }
  T104 = fun_backtrace_31;
  T101 = CALL2(1,VARREF(YPdefine_method),T102,T104);
  VARSET(YevalStopYbacktrace,T101);
  lit_66 = YPPsym((P)"frame");
  lit_67 = YPPsym((P)"n");
  lit_68 = YPsb((P)"[%=] %= %=\n");
  T106 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T106,ENVNUL,PNUL,YPfalse);
  T105 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_33 = YPmet(FUNCODEREF(fun_frame_33),LITREF(lit_66),T105,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalStopYframe);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalStopYframe);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_frame_33;
  T107 = CALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalStopYframe,T107);
  lit_69 = YPPsym((P)"frame-var");
  lit_70 = YPPsym((P)"ret");
  T113 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_70)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_35 = YPmet(FUNCODEREF(fun_35),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_28)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_36 = YPmet(FUNCODEREF(fun_frame_var_36),LITREF(lit_69),T111,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalStopYframe_var);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalStopYframe_var);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_frame_var_36;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalStopYframe_var,T114);
  lit_71 = YPPsym((P)"bt");
  lit_72 = YPsb((P)"[%=] %=\n");
  T119 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_38 = YPmet(FUNCODEREF(fun_bt_38),LITREF(lit_71),T118,ENVNUL,PNUL,YPfalse);
  T122 = BOUNDP(YevalStopYbt);
  if (T122 != YPfalse) {
    T121 = VARREF(YevalStopYbt);
  } else {
    T121 = YPfalse;
  }
  T123 = fun_bt_38;
  T120 = CALL2(1,VARREF(YPdefine_method),T121,T123);
  VARSET(YevalStopYbt,T120);
  lit_73 = YPPsym((P)"backtrace-short");
  lit_74 = YPPsym((P)"break");
  lit_75 = YPsb((P)"%%bottom%%");
  lit_76 = YPsb((P)"[%=] %= %=\n");
  lit_77 = YPsb((P)"%%top%%");
  T126 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_59)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(1,LITREF(lit_74)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T125,ENVNUL,PNUL,YPfalse);
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_short_41 = YPmet(FUNCODEREF(fun_backtrace_short_41),LITREF(lit_73),T124,ENVNUL,PNUL,YPfalse);
  T129 = BOUNDP(YevalStopYbacktrace_short);
  if (T129 != YPfalse) {
    T128 = VARREF(YevalStopYbacktrace_short);
  } else {
    T128 = YPfalse;
  }
  T130 = fun_backtrace_short_41;
  T127 = CALL2(1,VARREF(YPdefine_method),T128,T130);
  VARSET(YevalStopYbacktrace_short,T127);
  lit_78 = YPPsym((P)"<keyboard-interrupt>");
  T132 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T131 = CALL2(1,VARREF(Yfab_class),LITREF(lit_78),T132);
  VARSET(YevalStopYLkeyboard_interruptG,T131);
  lit_79 = YPPsym((P)"keyboard-interrupt");
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_79),T133,ENVNUL,PNUL,YPfalse);
  T134 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T134);
  lit_80 = YPPsym((P)"do-restart");
  lit_81 = YPPsym((P)"restarts");
  lit_82 = YPsb((P)"No restarts available.\n");
  lit_83 = YPsb((P)"No restart #%d.\n");
  T135 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_67)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_80),T135,ENVNUL,PNUL,YPfalse);
  T136 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T136);
  lit_84 = YPPsym((P)"%%top%%top-in");
  lit_85 = YPPsym((P)"top");
  lit_86 = YPPsym((P)"quit");
  lit_87 = YPPsym((P)"show-restarts?");
  lit_88 = YPPsym((P)"blow");
  lit_89 = YPPsym((P)"continue");
  lit_90 = YPPsym((P)"c");
  lit_91 = YPPsym((P)"r");
  lit_92 = YPsb((P)"BREAK");
  lit_93 = YPsb((P)"ERROR: %s");
  lit_94 = YPsb((P)"Return to interpreter level %d");
  lit_95 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_96 = YPsb((P)"<= ");
  lit_97 = YPPsym((P)"x-1769");
  lit_98 = YPPsym((P)"x-1772");
  lit_99 = YPPsym((P)"x-1775");
  lit_100 = YPPsym((P)"x-1778");
  lit_101 = YPPsym((P)"x-1781");
  lit_102 = YPPsym((P)"x-1784");
  lit_103 = YPPsym((P)"x-1787");
  lit_104 = YPPsym((P)"x-1790");
  lit_105 = YPPsym((P)"x-1793");
  lit_106 = YPPsym((P)"x-1796");
  lit_107 = YPPsym((P)"x-1799");
  lit_108 = YPPsym((P)"x-1802");
  lit_109 = YPPsym((P)"x-1805");
  lit_110 = YPsb((P)"=> ");
  lit_111 = YPPsym((P)"ast-eval");
  lit_112 = YPPsym((P)"in");
  lit_113 = YPPsym((P)"restart");
  lit_114 = YPPsym((P)"handlers");
  lit_115 = YPPsym((P)"up");
  T172 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1805_48 = YPmet(FUNCODEREF(fun_x_1805_48),LITREF(lit_109),T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1802_50 = YPmet(FUNCODEREF(fun_x_1802_50),LITREF(lit_108),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1799_52 = YPmet(FUNCODEREF(fun_x_1799_52),LITREF(lit_107),T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1796_54 = YPmet(FUNCODEREF(fun_x_1796_54),LITREF(lit_106),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1793_56 = YPmet(FUNCODEREF(fun_x_1793_56),LITREF(lit_105),T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1790_58 = YPmet(FUNCODEREF(fun_x_1790_58),LITREF(lit_104),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1787_60 = YPmet(FUNCODEREF(fun_x_1787_60),LITREF(lit_103),T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1784_62 = YPmet(FUNCODEREF(fun_x_1784_62),LITREF(lit_102),T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1781_64 = YPmet(FUNCODEREF(fun_x_1781_64),LITREF(lit_101),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1778_66 = YPmet(FUNCODEREF(fun_x_1778_66),LITREF(lit_100),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1775_68 = YPmet(FUNCODEREF(fun_x_1775_68),LITREF(lit_99),T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1772_70 = YPmet(FUNCODEREF(fun_x_1772_70),LITREF(lit_98),T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_55)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1769_72 = YPmet(FUNCODEREF(fun_x_1769_72),LITREF(lit_97),T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_89)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_77 = YPmet(FUNCODEREF(fun_loop_77),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_88)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(5,LITREF(lit_40),LITREF(lit_85),LITREF(lit_86),LITREF(lit_87),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_79 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_79),LITREF(lit_84),T137,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_PPtopPPtop_in_79;
  T173 = CALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalStopYPPtopPPtop_in,T173);
  lit_116 = YPsb((P)"Exit the top-level interpreter");
  T183 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(2,LITREF(lit_90),LITREF(lit_91)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(1,LITREF(lit_85)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_32),T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_86 = YPmet(FUNCODEREF(fun_top_86),LITREF(lit_85),T177,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(YevalStopYtop);
  if (T186 != YPfalse) {
    T185 = VARREF(YevalStopYtop);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_top_86;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(YevalStopYtop,T184);
  lit_117 = YPPsym((P)"save-image");
  lit_118 = YPPsym((P)"image-name");
  lit_119 = YPPsym((P)"goo/user");
  T189 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(1,LITREF(lit_118)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_117),T188,ENVNUL,PNUL,YPfalse);
  T190 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T190);
  T191 = YPfalse;
  return T191;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalSast_eval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSioSwrite},
  {&module_info_evalSsyntax},
  {&module_info_evalSast},
  {&module_info_evalSast_linearize},
  {&module_info_evalSast_eval},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"%i+", &module_info_gooSboot, "%i+"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"asin", &module_info_gooSmath, "asin"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"items", &module_info_gooScolsScol, "items"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"rem", &module_info_gooSmath, "rem"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"t=", &module_info_gooStypes, "t="},
  {"try", &module_info_gooSboot, "try"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"%str", &module_info_gooSboot, "%str"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"|", &module_info_gooSmath, "|"},
  {"do", &module_info_gooSmacros, "do"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"t<", &module_info_gooStypes, "t<"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"/", &module_info_gooSmath, "/"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"%im", &module_info_gooSboot, "%im"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"len", &module_info_gooStypes, "len"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"error", &module_info_gooSboot, "error"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"map", &module_info_gooSmacros, "map"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"put", &module_info_gooSioSport, "put"},
  {"map2", &module_info_gooScolsSseq, "map2"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"@==", &module_info_gooSboot, "@=="},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"+", &module_info_gooSmath, "+"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%get", &module_info_gooSboot, "%get"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"while", &module_info_gooSmacros, "while"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"open", &module_info_gooSioSport, "open"},
  {"def", &module_info_gooSboot, "def"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"quote", &module_info_gooSboot, "quote"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"add", &module_info_gooScolsScol, "add"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"round", &module_info_gooSmath, "round"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"ds", &module_info_gooSboot, "ds"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"nul", &module_info_gooSboot, "nul"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"round/", &module_info_gooSmath, "round/"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"and", &module_info_gooSmacros, "and"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"when", &module_info_gooSmacros, "when"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"case", &module_info_gooSmacros, "case"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"use", &module_info_gooSboot, "use"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"in", &module_info_gooSioSport, "in"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"max", &module_info_gooSmag, "max"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"dm", &module_info_gooSboot, "dm"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"update-walk!", &module_info_evalSast_linearize, "update-walk!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"log", &module_info_gooSmath, "log"},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@len", &module_info_gooSboot, "@len"},
  {"head", &module_info_gooSboot, "head"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"%su", &module_info_gooSboot, "%su"},
  {"&", &module_info_gooSmath, "&"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"cos", &module_info_gooSmath, "cos"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"t?", &module_info_gooStypes, "t?"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"if", &module_info_gooSboot, "if"},
  {"loc", &module_info_gooSboot, "loc"},
  {"dss", &module_info_gooSboot, "dss"},
  {"always", &module_info_gooSruntime, "always"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"dv", &module_info_gooSboot, "dv"},
  {"mif", &module_info_gooSboot, "mif"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"abs", &module_info_gooSmath, "abs"},
  {"1-", &module_info_gooSmath, "1-"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"any?", &module_info_gooStypes, "any?"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"read", &module_info_gooSruntime, "read"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"acos", &module_info_gooSmath, "acos"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"tup", &module_info_gooSboot, "tup"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"app", &module_info_gooSmacros, "app"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"out", &module_info_gooSioSport, "out"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"lst", &module_info_gooSboot, "lst"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"export", &module_info_gooSboot, "export"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"*", &module_info_gooSmath, "*"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {">>", &module_info_gooSmath, ">>"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"let", &module_info_gooSboot, "let"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"@+", &module_info_gooSboot, "@+"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"<=", &module_info_gooSmag, "<="},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"even?", &module_info_gooSmath, "even?"},
  {"min", &module_info_gooSmag, "min"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"$e", &module_info_gooSmath, "$e"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"for", &module_info_gooSmacros, "for"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"match", &module_info_gooSmacros, "match"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"seq", &module_info_gooSboot, "seq"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"dp", &module_info_gooSboot, "dp"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"-", &module_info_gooSmath, "-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"find", &module_info_gooScolsScol, "find"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"ct", &module_info_gooSboot, "ct"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<<", &module_info_gooSmath, "<<"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"pow", &module_info_gooSmath, "pow"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"as", &module_info_gooStypes, "as"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"t*", &module_info_gooStypes, "t*"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"^", &module_info_gooSmath, "^"},
  {"df", &module_info_gooSboot, "df"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"@<", &module_info_gooSboot, "@<"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"unless", &module_info_gooSmacros, "unless"},
  {">", &module_info_gooSmag, ">"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"get", &module_info_gooSioSport, "get"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%put", &module_info_gooSboot, "%put"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"esc", &module_info_gooSboot, "esc"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"dg", &module_info_gooSboot, "dg"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<", &module_info_gooSmag, "<"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"dl", &module_info_gooSboot, "dl"},
  {">=", &module_info_gooSmag, ">="},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"new", &module_info_gooSboot, "new"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"t+", &module_info_gooStypes, "t+"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"until", &module_info_gooSmacros, "until"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"floor", &module_info_gooSmath, "floor"},
  {"dc", &module_info_gooSboot, "dc"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"=", &module_info_gooSmath, "="},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"sin", &module_info_gooSmath, "sin"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"~", &module_info_gooSmath, "~"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"not", &module_info_gooSboot, "not"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"atan", &module_info_gooSmath, "atan"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"fin", &module_info_gooSboot, "fin"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"op", &module_info_gooSmacros, "op"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"~=", &module_info_gooSmath, "~="},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"or", &module_info_gooSmacros, "or"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"tail", &module_info_gooSboot, "tail"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"close", &module_info_gooSioSport, "close"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"set", &module_info_gooSboot, "set"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"save-image", &YevalStopYsave_image},
  {"str-parse-in", &YevalStopYstr_parse_in},
  {"%%bottom%%g2c-run", &YevalStopYPPbottomPPg2c_run},
  {"esctst", &YevalStopYesctst},
  {"g2c-eval", &YevalStopYg2c_eval},
  {"backtrace-short", &YevalStopYbacktrace_short},
  {"---main-0---", NULL},
  {"do-restart", &YevalStopYdo_restart},
  {"bt", &YevalStopYbt},
  {"<keyboard-interrupt>", &YevalStopYLkeyboard_interruptG},
  {"do-stack-frames", &YevalStopYdo_stack_frames},
  {"for-frames", NULL},
  {"str-eval-in", &YevalStopYstr_eval_in},
  {"print-result-expression", &YevalStopYprint_result_expression},
  {"parse-in", &YevalStopYparse_in},
  {"top", &YevalStopYtop},
  {"parse", &YevalStopYparse},
  {"auto-run", &YevalStopYauto_run},
  {"load", &YevalStopYload},
  {"auto-eval", &YevalStopYauto_eval},
  {"compiled-file?", &YevalStopYcompiled_fileQ},
  {"frame", &YevalStopYframe},
  {"backtrace", &YevalStopYbacktrace},
  {"%%top%%top-in", &YevalStopYPPtopPPtop_in},
  {"run", &YevalStopYrun},
  {"eval-in", &YevalStopYeval_in},
  {"prompt-for-command-expression", &YevalStopYprompt_for_command_expression},
  {"str-parse", &YevalStopYstr_parse},
  {"str-eval", &YevalStopYstr_eval},
  {"%%bottom%%ast-run", &YevalStopYPPbottomPPast_run},
  {"load-file", &YevalStopYload_file},
  {"read-file", &YevalStopYread_file},
  {"frame-var", &YevalStopYframe_var},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"save-image", "save-image"},
  {"auto-eval", "auto-eval"},
  {"esctst", "esctst"},
  {"bt", "bt"},
  {"do-stack-frames", "do-stack-frames"},
  {"parse-in", "parse-in"},
  {"top", "top"},
  {"frame", "frame"},
  {"eval", "eval"},
  {"backtrace", "backtrace"},
  {"load", "load"},
  {"g2c-eval", "g2c-eval"},
  {"load-file", "load-file"},
  {"read-file", "read-file"},
  {"frame-var", "frame-var"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalStop;
MODULE_INFO module_info_evalStop = {
  "eval/top",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSread (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_evalSsyntax (void);
extern void load_module_evalSast (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalSast_eval (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_evalStop (void);

void load_module_evalStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSread();
  load_module_gooSioSwrite();
  load_module_evalSsyntax();
  load_module_evalSast();
  load_module_evalSast_linearize();
  load_module_evalSast_eval();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)YevalStopY___main_0___();

}

/* END OF GENERATED CODE. */
