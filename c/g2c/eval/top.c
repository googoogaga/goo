/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/top */

DEF(Yx8rStopYauto_eval,"x8r/top","auto-eval");
DEF(Yx8rStopYtop_in,"x8r/top","top-in");
EXT(Yx8rSsyntaxYDsexpr_define_generic_tag,"x8r/syntax","$sexpr-define-generic-tag");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yx8rSast_linearizeYcollect_registersX,"x8r/ast-linearize","collect-registers!");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YLanyG,"goo/boot","<any>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yx8rSast_linearizeYform_quotations,"x8r/ast-linearize","form-quotations");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(Yx8rSsyntaxYsexpr_syntax_if_value,"x8r/syntax","sexpr-syntax-if-value");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSsyntaxYsexpr_assignment_variable,"x8r/syntax","sexpr-assignment-variable");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
DEF(Yx8rStopYg2c_eval,"x8r/top","g2c-eval");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Ynil,"goo/boot","nil");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yx8rSsyntaxYDsexpr_syntax_if_tag,"x8r/syntax","$sexpr-syntax-if-tag");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSioSwriteYdisplay,"goo/io/write","display");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
DEF(Yx8rStopYbt,"x8r/top","bt");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(Yx8rSsyntaxYsexpr_block_name,"x8r/syntax","sexpr-block-name");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSsyntaxYDsexpr_let_tag,"x8r/syntax","$sexpr-let-tag");
DEF(Yx8rStopYprint_result_expression,"x8r/top","print-result-expression");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
DEF(Yx8rStopYload,"x8r/top","load");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(Yx8rSast_linearizeYTregister_passiveQT,"x8r/ast-linearize","*register-passive?*");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
DEF(Yx8rStopYprompt_for_command_expression,"x8r/top","prompt-for-command-expression");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(Yx8rSsyntaxYsexpr_define_class_parents,"x8r/syntax","sexpr-define-class-parents");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
DEF(Yx8rStopYLkeyboard_interruptG,"x8r/top","<keyboard-interrupt>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Yx8rSsyntaxYsexpr_forward_primitiveQ,"x8r/syntax","sexpr-forward-primitive?");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_value,"x8r/syntax","sexpr-syntax-definition-value");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(Yx8rSsyntaxYsexpr_unquote_splicingQ,"x8r/syntax","sexpr-unquote-splicing?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
DEF(Yx8rStopYstr_parse_in,"x8r/top","str-parse-in");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YPvnul,"goo/boot","%vnul");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(Yx8rSast_linearizeYLbox_writeG,"x8r/ast-linearize","<box-write>");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
EXT(Yx8rSsyntaxYDsexpr_define_function_tag,"x8r/syntax","$sexpr-define-function-tag");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
EXT(YPsnul,"goo/boot","%snul");
EXT(Yx8rSast_linearizeYreference_offset,"x8r/ast-linearize","reference-offset");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yx8rSsyntaxYsexpr_loc_bound_bodies,"x8r/syntax","sexpr-loc-bound-bodies");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Yx8rSsyntaxYsexpr_prop_init_var,"x8r/syntax","sexpr-prop-init-var");
DEF(Yx8rStopYsave_image,"x8r/top","save-image");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yx8rSsyntaxYDsexpr_unwind_protect_tag,"x8r/syntax","$sexpr-unwind-protect-tag");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(Yx8rStopYframe,"x8r/top","frame");
EXT(Yobject_props,"goo/boot","object-props");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(Yx8rSsyntaxYsexpr_method_signature,"x8r/syntax","sexpr-method-signature");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yx8rSsyntaxYsexpr_syntax_if_else,"x8r/syntax","sexpr-syntax-if-else");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(YPisa,"goo/boot","%isa");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(Yx8rSsyntaxYsexpr_prop_owner,"x8r/syntax","sexpr-prop-owner");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(YgooSmathYlog,"goo/math","log");
EXT(Yx8rSast_linearizeYliftX,"x8r/ast-linearize","lift!");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Yx8rSsyntaxYsexpr_isa_init_props,"x8r/syntax","sexpr-isa-init-props");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(Yx8rSsyntaxYsexpr_syntax_if_then,"x8r/syntax","sexpr-syntax-if-then");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Yx8rSast_linearizeYLtop_level_formG,"x8r/ast-linearize","<top-level-form>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yvec,"goo/boot","vec");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(Yx8rSsyntaxYsexpr_variableQ,"x8r/syntax","sexpr-variable?");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(Yx8rSsyntaxYDsexpr_define_tag,"x8r/syntax","$sexpr-define-tag");
EXT(Yx8rSsyntaxYsexpr_operands,"x8r/syntax","sexpr-operands");
EXT(Yx8rSast_linearizeYform_program,"x8r/ast-linearize","form-program");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(Yx8rSsyntaxYsexpr_signature_parameters,"x8r/syntax","sexpr-signature-parameters");
EXT(Yx8rSsyntaxYsexpr_function_definition_variable,"x8r/syntax","sexpr-function-definition-variable");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yx8rSsyntaxYsexpr_fab_setter_name,"x8r/syntax","sexpr-fab-setter-name");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yx8rSsyntaxYsexpr_prop_type,"x8r/syntax","sexpr-prop-type");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(Yx8rSsyntaxYsexpr_loc_bound_signatures,"x8r/syntax","sexpr-loc-bound-signatures");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
DEF(Yx8rStopYeval_in,"x8r/top","eval-in");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLmetG,"goo/boot","<met>");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(Ynew,"goo/boot","new");
EXT(Yx8rSsyntaxYsexpr_variable_type,"x8r/syntax","sexpr-variable-type");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_protected_form,"x8r/syntax","sexpr-unwind-protect-protected-form");
EXT(Yx8rSast_linearizeYinsert_boxX,"x8r/ast-linearize","insert-box!");
EXT(Yx8rSsyntaxYsexpr_loc_raw_body,"x8r/syntax","sexpr-loc-raw-body");
EXT(Yx8rSsyntaxYsexpr_make_macro_function,"x8r/syntax","sexpr-make-macro-function");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(Yx8rSsyntaxYDsexpr_set_tag,"x8r/syntax","$sexpr-set-tag");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Yx8rSast_linearizeYform_definitions,"x8r/ast-linearize","form-definitions");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(Yx8rSsyntaxYsexpr_make_application,"x8r/syntax","sexpr-make-application");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(Yx8rSast_linearizeYanalyze_dynamic_extent,"x8r/ast-linearize","analyze-dynamic-extent");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(Yx8rSsyntaxYDsexpr_define_syntax_tag,"x8r/syntax","$sexpr-define-syntax-tag");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(Yx8rSast_linearizeYLclosure_creationG,"x8r/ast-linearize","<closure-creation>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(Yx8rSsyntaxYsexpr_make_anonymous_method,"x8r/syntax","sexpr-make-anonymous-method");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLintG,"goo/boot","<int>");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YLflatG,"goo/boot","<flat>");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(Yx8rSsyntaxYDsexpr_method_tag,"x8r/syntax","$sexpr-method-tag");
EXT(Yx8rSsyntaxYsexpr_make_begin,"x8r/syntax","sexpr-make-begin");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(Yx8rSast_linearizeYgather_temporariesX,"x8r/ast-linearize","gather-temporaries!");
EXT(Yx8rSsyntaxYsexpr_isa_parent,"x8r/syntax","sexpr-isa-parent");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(Ylst,"goo/boot","lst");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(Ynot,"goo/boot","not");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yx8rSast_linearizeYLrenamed_local_bindingG,"x8r/ast-linearize","<renamed-local-binding>");
DEF(Yx8rStopYdo_restart,"x8r/top","do-restart");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
DEF(Yx8rStopYparse_in,"x8r/top","parse-in");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSast_linearizeYprogram_form,"x8r/ast-linearize","program-form");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yx8rSast_linearizeYbox_form,"x8r/ast-linearize","box-form");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(Yx8rSsyntaxYsexpr_loc_bound_names,"x8r/syntax","sexpr-loc-bound-names");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
DEF(Yx8rStopYg2c_run,"x8r/top","g2c-run");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(Yx8rSsyntaxYsexpr_unquoteQ,"x8r/syntax","sexpr-unquote?");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(Ytup,"goo/boot","tup");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSioSwriteYpe_format,"goo/io/write","pe-format");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsScolYfillX,"goo/cols/col","fill!");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yx8rSsyntaxYsexpr_definition_variable,"x8r/syntax","sexpr-definition-variable");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(Yx8rSsyntaxYeval,"x8r/syntax","eval");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(Yx8rSsyntaxYsexpr_define_classQ,"x8r/syntax","sexpr-define-class?");
DEF(Yx8rStopYdo_stack_frames,"x8r/top","do-stack-frames");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
DEF(Yx8rStopYesctst,"x8r/top","esctst");
EXT(Yx8rSast_linearizeYprogram_definitions,"x8r/ast-linearize","program-definitions");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSast_linearizeYLbox_readG,"x8r/ast-linearize","<box-read>");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSsyntaxYDsexpr_begin_tag,"x8r/syntax","$sexpr-begin-tag");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
DEF(Yx8rStopYframe_var,"x8r/top","frame-var");
DEF(Yx8rStopYstr_eval_in,"x8r/top","str-eval-in");
EXT(Yx8rSast_linearizeYcollect_temporariesX,"x8r/ast-linearize","collect-temporaries!");
EXT(Yx8rSsyntaxYsexpr_def_value,"x8r/syntax","sexpr-def-value");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(Yx8rSsyntaxYsexpr_fab_getter,"x8r/syntax","sexpr-fab-getter");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooStypesYas,"goo/types","as");
EXT(Ynul,"goo/boot","nul");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YLlstG,"goo/boot","<lst>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSsyntaxYsexpr_if_else,"x8r/syntax","sexpr-if-else");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(Yx8rSast_linearizeYbox_reference,"x8r/ast-linearize","box-reference");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(Yx8rSast_linearizeYprogram_quotations,"x8r/ast-linearize","program-quotations");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(Yx8rSsyntaxYsexpr_variable_name,"x8r/syntax","sexpr-variable-name");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(Yx8rSsyntaxYDsexpr_prop_tag,"x8r/syntax","$sexpr-prop-tag");
EXT(Yx8rSsyntaxYDsexpr_if_tag,"x8r/syntax","$sexpr-if-tag");
EXT(Yx8rSsyntaxYsexpr_if_then,"x8r/syntax","sexpr-if-then");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(Yx8rSsyntaxYsexpr_monitor_expand,"x8r/syntax","sexpr-monitor-expand");
EXT(Yx8rSsyntaxYsexpr_unwind_protect_cleanup_forms,"x8r/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(Yx8rSast_linearizeYupdate_walkX,"x8r/ast-linearize","update-walk!");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yx8rSsyntaxYDsexpr_define_class_tag,"x8r/syntax","$sexpr-define-class-tag");
EXT(Yx8rSsyntaxYsexpr_expand_backquote,"x8r/syntax","sexpr-expand-backquote");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Yx8rSsyntaxYsexpr_prop_initQ,"x8r/syntax","sexpr-prop-init?");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(Yx8rSsyntaxYsexpr_function_signature,"x8r/syntax","sexpr-function-signature");
DEF(Yx8rStopYparse,"x8r/top","parse");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(Yx8rSsyntaxYDsexpr_define_method_tag,"x8r/syntax","$sexpr-define-method-tag");
EXT(Yx8rSsyntaxYsexpr_signature_value,"x8r/syntax","sexpr-signature-value");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yx8rSsyntaxYDsexpr_iterate_tag,"x8r/syntax","$sexpr-iterate-tag");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
DEF(Yx8rStopYread_file,"x8r/top","read-file");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
DEF(Yx8rStopYload_from,"x8r/top","load-from");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
DEF(Yx8rStopYtop,"x8r/top","top");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(Yx8rSast_linearizeYclosure_creation_index,"x8r/ast-linearize","closure-creation-index");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(Yx8rSsyntaxYDsexpr_monitor_tag,"x8r/syntax","$sexpr-monitor-tag");
EXT(YgooSmagYG,"goo/mag",">");
EXT(Yx8rSsyntaxYsexpr_isa_init_values,"x8r/syntax","sexpr-isa-init-values");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
DEF(Yx8rStopYast_run,"x8r/top","ast-run");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(Yx8rSast_linearizeYreference_selfQ,"x8r/ast-linearize","reference-self?");
EXT(Yx8rSsyntaxYsexpr_if_test,"x8r/syntax","sexpr-if-test");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yx8rSast_linearizeYLbox_creationG,"x8r/ast-linearize","<box-creation>");
EXT(Yx8rSsyntaxYsexpr_isa_prop_inits,"x8r/syntax","sexpr-isa-prop-inits");
EXT(Yx8rSsyntaxYDsexpr_macro_expand_tag,"x8r/syntax","$sexpr-macro-expand-tag");
EXT(Yx8rSsyntaxYDsexpr_def_tag,"x8r/syntax","$sexpr-def-tag");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Yx8rSast_linearizeYLfree_referenceG,"x8r/ast-linearize","<free-reference>");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yx8rSsyntaxYsexpr_let_Gcombination,"x8r/syntax","sexpr-let->combination");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(Yx8rStopYauto_run,"x8r/top","auto-run");
EXT(Yx8rSsyntaxYsexpr_fab_setter,"x8r/syntax","sexpr-fab-setter");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yx8rSsyntaxYDsexpr_quote_tag,"x8r/syntax","$sexpr-quote-tag");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yx8rSast_linearizeYast_contains_funQ,"x8r/ast-linearize","ast-contains-fun?");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
DEF(Yx8rStopYstr_eval,"x8r/top","str-eval");
EXT(Yx8rSsyntaxYsexpr_syntax_definition_variable,"x8r/syntax","sexpr-syntax-definition-variable");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(YLsigG,"goo/boot","<sig>");
EXT(Yx8rSsyntaxYsexpr_iterate_Gloc,"x8r/syntax","sexpr-iterate->loc");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(Yx8rSsyntaxYsexpr_method_body,"x8r/syntax","sexpr-method-body");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(Yx8rSsyntaxYsexpr_prop_name,"x8r/syntax","sexpr-prop-name");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooSmathYS,"goo/math","/");
DEF(Yx8rStopYstr_parse,"x8r/top","str-parse");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yx8rSsyntaxYDsexpr_quasiquote_tag,"x8r/syntax","$sexpr-quasiquote-tag");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(Yx8rSsyntaxYDsexpr_bind_exit_tag,"x8r/syntax","$sexpr-bind-exit-tag");
EXT(Yx8rSast_linearizeYextract_thingsX,"x8r/ast-linearize","extract-things!");
EXT(Yx8rSast_linearizeYunconstrained_typeQ,"x8r/ast-linearize","unconstrained-type?");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Yx8rSast_linearizeYregister_allocateX,"x8r/ast-linearize","register-allocate!");
EXT(YLlogG,"goo/boot","<log>");
EXT(Yx8rSsyntaxYsexpr_function_definition_value,"x8r/syntax","sexpr-function-definition-value");
EXT(YgooSmathYN,"goo/math","~");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(Yx8rSsyntaxYsexpr_assignment_value,"x8r/syntax","sexpr-assignment-value");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
DEF(Yx8rStopYrun,"x8r/top","run");
EXT(Yx8rSast_linearizeYflatten_seqs,"x8r/ast-linearize","flatten-seqs");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(Yx8rSsyntaxYsexpr_syntax_if_pattern,"x8r/syntax","sexpr-syntax-if-pattern");
EXT(YgooSmathYE,"goo/math","=");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(Yx8rSsyntaxYsexpr_block_body,"x8r/syntax","sexpr-block-body");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(Yx8rSast_linearizeYclosurize_mainX,"x8r/ast-linearize","closurize-main!");
EXT(Yx8rSsyntaxYsexpr_prop_init,"x8r/syntax","sexpr-prop-init");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSast_linearizeYclosure_creation_free,"x8r/ast-linearize","closure-creation-free");
EXT(Yx8rSsyntaxYsexpr_def_variable,"x8r/syntax","sexpr-def-variable");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(Yx8rSsyntaxYsexpr_definition_value,"x8r/syntax","sexpr-definition-value");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
DEF(Yx8rStopYbacktrace,"x8r/top","backtrace");
EXT(Yx8rSsyntaxYDsexpr_isa_tag,"x8r/syntax","$sexpr-isa-tag");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Yx8rSsyntaxYDsexpr_locals_tag,"x8r/syntax","$sexpr-locals-tag");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(Yx8rSsyntaxYsexpr_text_of_quotation,"x8r/syntax","sexpr-text-of-quotation");
EXT(Yx8rSsyntaxYsexpr_function_body,"x8r/syntax","sexpr-function-body");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yx8rSsyntaxYsexpr_operator,"x8r/syntax","sexpr-operator");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(Yx8rSsyntaxYsexpr_bind_pattern_variables,"x8r/syntax","sexpr-bind-pattern-variables");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(Yx8rSsyntaxYsexpr_defQ,"x8r/syntax","sexpr-def?");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(Yx8rSast_linearizeYanalyze_calls,"x8r/ast-linearize","analyze-calls");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSsyntaxYsexpr_sequence_Gbegin,"x8r/syntax","sexpr-sequence->begin");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYB,"goo/math","&");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_78);
DEFLIT(lit_61);
DEFLIT(lit_86);
DEFLIT(lit_42);
DEFLIT(lit_1);
DEFLIT(lit_102);
DEFLIT(lit_77);
DEFLIT(lit_98);
DEFLIT(lit_76);
DEFLIT(lit_51);
DEFLIT(lit_53);
DEFLIT(lit_111);
DEFLIT(lit_44);
DEFLIT(lit_12);
DEFLIT(lit_91);
DEFLIT(lit_92);
DEFLIT(lit_25);
DEFLIT(lit_93);
DEFLIT(lit_0);
DEFLIT(lit_4);
DEFLIT(lit_26);
DEFLIT(lit_105);
DEFLIT(lit_43);
DEFLIT(lit_21);
DEFLIT(lit_74);
DEFLIT(lit_84);
DEFLIT(lit_62);
DEFLIT(lit_88);
DEFLIT(lit_52);
DEFLIT(lit_100);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_85);
DEFLIT(lit_41);
DEFLIT(lit_103);
DEFLIT(lit_33);
DEFLIT(lit_109);
DEFLIT(lit_82);
DEFLIT(lit_101);
DEFLIT(lit_64);
DEFLIT(lit_107);
DEFLIT(lit_49);
DEFLIT(lit_29);
DEFLIT(lit_90);
DEFLIT(lit_59);
DEFLIT(lit_99);
DEFLIT(lit_30);
DEFLIT(lit_46);
DEFLIT(lit_47);
DEFLIT(lit_57);
DEFLIT(lit_28);
DEFLIT(lit_69);
DEFLIT(lit_97);
DEFLIT(lit_56);
DEFLIT(lit_22);
DEFLIT(lit_54);
DEFLIT(lit_27);
DEFLIT(lit_67);
DEFLIT(lit_38);
DEFLIT(lit_87);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_58);
DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_63);
DEFLIT(lit_50);
DEFLIT(lit_79);
DEFLIT(lit_72);
DEFLIT(lit_39);
DEFLIT(lit_32);
DEFLIT(lit_73);
DEFLIT(lit_110);
DEFLIT(lit_71);
DEFLIT(lit_9);
DEFLIT(lit_60);
DEFLIT(lit_89);
DEFLIT(lit_70);
DEFLIT(lit_17);
DEFLIT(lit_81);
DEFLIT(lit_20);
DEFLIT(lit_8);
DEFLIT(lit_104);
DEFLIT(lit_14);
DEFLIT(lit_23);
DEFLIT(lit_5);
DEFLIT(lit_95);
DEFLIT(lit_6);
DEFLIT(lit_80);
DEFLIT(lit_108);
DEFLIT(lit_40);
DEFLIT(lit_36);
DEFLIT(lit_68);
DEFLIT(lit_18);
DEFLIT(lit_16);
DEFLIT(lit_106);
DEFLIT(lit_83);
DEFLIT(lit_13);
DEFLIT(lit_24);
DEFLIT(lit_94);
DEFLIT(lit_37);
DEFLIT(lit_35);
DEFLIT(lit_75);
DEFLIT(lit_55);
DEFLIT(lit_10);
DEFLIT(lit_96);
DEFLIT(lit_45);
DEFLIT(lit_65);
DEFLIT(lit_31);
DEFLIT(lit_66);
DEFLIT(lit_19);
DEFLIT(lit_48);

/* FUNCTIONS: */

LOCFOR(fun_0);
LOCFOR(fun_1);
LOCFOR(fun_2);
FUNFOR(Yx8rStopYesctst);
LOCFOR(fun_parse_in_4);
LOCFOR(fun_parse_5);
LOCFOR(fun_str_parse_in_6);
LOCFOR(fun_str_parse_7);
FUNFOR(Yx8rStopYast_run);
FUNFOR(Yx8rStopYg2c_run);
FUNFOR(Yx8rStopYauto_run);
FUNFOR(Yx8rStopYauto_eval);
LOCFOR(fun_eval_in_12);
LOCFOR(fun_eval_13);
LOCFOR(fun_str_eval_in_14);
LOCFOR(fun_str_eval_15);
LOCFOR(fun_loop_16);
LOCFOR(fun_17);
LOCFOR(fun_18);
LOCFOR(fun_read_file_19);
LOCFOR(fun_load_in_20);
LOCFOR(fun_load_21);
LOCFOR(fun_load_from_22);
LOCFOR(fun_prompt_for_command_expression_23);
LOCFOR(fun_print_result_expression_24);
LOCFOR(fun_do_stack_frames_25);
LOCFOR(fun_x_1474_26);
LOCFOR(fun_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_backtrace_30);
LOCFOR(fun_31);
LOCFOR(fun_frame_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_frame_var_35);
LOCFOR(fun_36);
LOCFOR(fun_bt_37);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(Yx8rStopYdo_restart);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_x_1513_44);
LOCFOR(fun_45);
LOCFOR(fun_x_1510_46);
LOCFOR(fun_47);
LOCFOR(fun_x_1507_48);
LOCFOR(fun_49);
LOCFOR(fun_x_1504_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1501_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1498_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1495_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1492_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1489_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1486_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1483_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1480_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1477_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_71);
LOCFOR(fun_72);
LOCFOR(fun_loop_73);
LOCFOR(fun_74);
LOCFOR(fun_top_in_75);
LOCFOR(fun_76);
LOCFOR(fun_77);
LOCFOR(fun_78);
LOCFOR(fun_loop_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_top_82);
LOCFOR(fun_83);
FUNFOR(Yx8rStopYsave_image);
extern P Yx8rStopY___main_0___ ();

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
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_2));
UNLINK_STACK();
  QRET(LITREF(lit_3));
}

FUNCODEDEF(fun_2) {
  P exit_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exit_, 0);
loop:
  T0 = FUNFAB(fun_0,1,exit_);
  T1 = fun_1;
  with_cleanup(T0,T1);
  CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_4));
UNLINK_STACK();
  QRET(LITREF(lit_5));
}

FUNCODEDEF(Yx8rStopYesctst) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = fun_2;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_in_4) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSioSreadYread_from_string),s_);
  T0 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),T1,ct_env_,YPfalse);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_parse_5) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYparse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_in_6) {
  P s_,ct_env_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL2(1,VARREF(Yx8rStopYparse_in),s_,ct_env_);
  T0 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_14),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_parse_7) {
  P s_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYstr_parse_in),s_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYast_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYast_evaluate),ast_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYg2c_run) {
  P ast_,ct_env_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T0 = CALL2(1,VARREF(Yx8rStopYg2c_eval),ast_,ct_env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYauto_run) {
  P ast_,ct_env_;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYast_contains_funQ),ast_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yx8rStopYg2c_run),ast_,ct_env_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yx8rStopYast_run),ast_,ct_env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYauto_eval) {
  P form_,ct_env_;
  P astF2002;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2002 = T1;
  T2 = CALL2(1,VARREF(Yx8rStopYauto_run),astF2002,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2004;
  P oF2003;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2003 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYast_evaluate),oF2003);
  eF2004 = T3;
  T2 = eF2004;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_13) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYeval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_in_14) {
  P x_,ct_env_;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSioSreadYread_from_string),x_);
  T1 = CALL2(1,VARREF(Yx8rStopYeval_in),T2,ct_env_);
  T0 = CALL1(1,VARREF(YgooSioSwriteYwrite_to_string),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_str_eval_15) {
  P x_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rStopYstr_eval_in),x_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_16) {
  P forms_;
  P xF2005;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2005 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2005);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(Yx8rSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2005,forms_);
    a1 = T8;
    forms_ = a1;
    goto loop;
    T3 = T7;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P loopF2006;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_16,2);
  loopF2006 = T2;
  FUNINIT(loopF2006, 2,FREEREF(0),loopF2006);
  T3 = CALL1(0,loopF2006,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_18) {
  P tmpF2007;
  P T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2007 = T1;
  if (tmpF2007 != YPfalse) {
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

FUNCODEDEF(fun_read_file_19) {
  P filename_;
  P portF2008;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2008 = YPfalse;
  portF2008 = BOXFAB(portF2008);
  T3 = FUNFAB(fun_17,2,portF2008,filename_);
  T4 = FUNFAB(fun_18,1,portF2008);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_20) {
  P filename_,ct_env_;
  P oF2010;
  P xF2009;
  P T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rStopYread_file),filename_);
  xF2009 = T1;
  T3 = CALL3(1,VARREF(Yx8rSastYobjectify_with_subtransaction),xF2009,ct_env_,YPfalse);
  oF2010 = T3;
  T4 = CALL2(1,VARREF(Yx8rStopYrun),oF2010,ct_env_);
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_21) {
  P filename_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),modname_);
  T0 = CALL2(1,VARREF(Yx8rSastYload_in),filename_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_from_22) {
  P name_,modname_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSsystemYgoo_filename),name_);
  T0 = CALL2(1,VARREF(Yx8rStopYload),T1,modname_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_23) {
  P env_,level_,prompt_;
  P argsF2014;
  P arg_strF2013;
  P tmpF2012;
  P formF2011;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_39),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF2011 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2011,VARREF(YLlstG));
  tmpF2012 = T6;
  if (tmpF2012 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2011);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_40));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2013 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_41),arg_strF2013,LITREF(lit_42));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2014 = T13;
    T16 = CALL1(1,VARREF(YgooStypesY2nd),formF2011);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2014);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2011;
  }
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_print_result_expression_24) {
  P env_,level_,label_,result_;
  P T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(label_, 2);
  ARG(result_, 3);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(Yx8rSastYmodule_name),T1);
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_46),T0,level_,label_);
  T2 = CALL2(1,VARREF(YgooSioSwriteYwrite),VARREF(YgooSioSportYout),result_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_do_stack_frames_25) {
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

FUNCODEDEF(fun_x_1474_26) {
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

FUNCODEDEF(fun_27) {
  P return_;
  P x_1473F2027;
  P x_1473F2026;
  P x_1473F2025;
  P x_1473F2024;
  P x_1473F2023;
  P x_1473F2022;
  P x_1473F2021;
  P bodyF2020;
  P argsF2019;
  P fF2018;
  P numF2017;
  P x_1473F2016;
  P x_1474F2015;
  P T64,T63,T62,T61,T60,T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49;
  P T48,T47,T46,T45,T44,T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33;
  P T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1474_26,1);
  x_1474F2015 = T1;
  FUNINIT(x_1474F2015, 1,return_);
  x_1473F2016 = FREEREF(0);
  numF2017 = YPfalse;
  numF2017 = BOXFAB(numF2017);
  fF2018 = YPfalse;
  fF2018 = BOXFAB(fF2018);
  argsF2019 = YPfalse;
  argsF2019 = BOXFAB(argsF2019);
  bodyF2020 = YPfalse;
  bodyF2020 = BOXFAB(bodyF2020);
  T11 = CALL2(1,VARREF(YisaQ),x_1473F2016,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1473F2016,LITREF(lit_53),x_1474F2015);
    x_1473F2021 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1473F2021,x_1474F2015);
    x_1473F2022 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2022,x_1474F2015);
    BOXVAL(numF2017) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1473F2022);
    x_1473F2023 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2023,x_1474F2015);
    BOXVAL(fF2018) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1473F2023);
    x_1473F2024 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1473F2024,x_1474F2015);
    BOXVAL(argsF2019) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1473F2024);
    x_1473F2025 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1473F2025,x_1474F2015);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1473F2021);
    x_1473F2026 = T26;
    BOXVAL(bodyF2020) = x_1473F2026;
    x_1473F2027 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1473F2027,x_1474F2015);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1474F2015,LITREF(lit_54),x_1473F2016);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T37 = BOXVAL(numF2017);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_47));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_48));
  T48 = BOXVAL(fF2018);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T54 = BOXVAL(argsF2019);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALLN(1,VARREF(YgooSmacrosYcat),4,T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2020);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T64 = BOXVAL(numF2017);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T43 = CALLN(1,VARREF(YgooSmacrosYcat),6,T44,T45,T50,T59,T60,Ynil);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,Ynil);
  T39 = CALL1(1,VARREF(Ylst),T40);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),4,T31,T32,T39,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P exp_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_27,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_29) {
  P f_,Uargs_;
  P argsF2028;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2028 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_62),T2,f_,argsF2028);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_30) {
  P numF2029;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2029 = YPint((P)0);
  numF2029 = BOXFAB(numF2029);
  T3 = FUNFAB(fun_29,1,numF2029);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P f_,Uargs_;
  P argsF2030;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2030 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T5 = BOXVAL(FREEREF(1));
    T4 = CALLN(1,VARREF(YgooSruntimeYformat),5,VARREF(YgooSioSportYout),LITREF(lit_65),T5,f_,argsF2030);
  } else {
  }
  T8 = BOXVAL(FREEREF(1));
  T7 = CALL2(1,VARREF(YgooSmathYA),T8,YPint((P)1));
  T6 = BOXVAL(FREEREF(1)) = T7;
  T0 = T6;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_32) {
  P n_;
  P numF2031;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  numF2031 = YPint((P)0);
  numF2031 = BOXFAB(numF2031);
  T3 = FUNFAB(fun_31,2,n_,numF2031);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P argsF2032;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2032 = T1;
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(0),T3);
  if (T2 != YPfalse) {
    T7 = CALL1(1,VARREF(Yfun_names),f_);
    T6 = CALL2(1,VARREF(YgooScolsSseqYpos),T7,FREEREF(3));
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2032,T6);
    T4 = CALL1(1,FREEREF(2),T5);
  } else {
  }
  T10 = BOXVAL(FREEREF(1));
  T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
  T8 = BOXVAL(FREEREF(1)) = T9;
  T0 = T8;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P ret_;
  P numF2033;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  numF2033 = YPint((P)0);
  numF2033 = BOXFAB(numF2033);
  T2 = FUNFAB(fun_33,4,FREEREF(0),numF2033,ret_,FREEREF(1));
  T1 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T2);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_35) {
  P n_,name_;
  P T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_34,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P f_,Uargs_;
  P argsF2034;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2034 = T1;
  T2 = BOXVAL(FREEREF(0));
  CALLN(1,VARREF(YgooSruntimeYformat),4,VARREF(YgooSioSportYout),LITREF(lit_69),T2,f_);
  T5 = BOXVAL(FREEREF(0));
  T4 = CALL2(1,VARREF(YgooSmathYA),T5,YPint((P)1));
  T3 = BOXVAL(FREEREF(0)) = T4;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_37) {
  P numF2035;
  P T3,T2,T1,T0;
LINK_STACK();
loop:
  numF2035 = YPint((P)0);
  numF2035 = BOXFAB(numF2035);
  T3 = FUNFAB(fun_36,1,numF2035);
  T2 = CALL1(1,VARREF(Yx8rStopYdo_stack_frames),T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Ykeyboard_interrupt) {
  P T1,T0;
LINK_STACK();
loop:
  T1 = CALL1(1,VARREF(Ynew),VARREF(Yx8rStopYLkeyboard_interruptG));
  T0 = CALL1(1,VARREF(YgooSruntimeYsig),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYdo_restart) {
  P restarts_,n_;
  P tmpF2036;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_74));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2036 = T4;
  if (tmpF2036 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL1(1,VARREF(Yerror),LITREF(lit_75));
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_40) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_41) {
  P c_,r_;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(Yx8rStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_84));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_85),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALLN(1,VARREF(Yx8rStopYtop_in),5,T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_42) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_43) {
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

FUNCODEDEF(fun_x_1513_44) {
  P msg_,args_;
  P resF2037;
  P T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(2));
  T2 = CALL2(1,VARREF(Yx8rStopYauto_eval),FREEREF(1),T3);
  resF2037 = T2;
  T5 = BOXVAL(FREEREF(2));
  T4 = CALLN(1,VARREF(Yx8rStopYprint_result_expression),4,T5,FREEREF(3),LITREF(lit_102),resF2037);
  T1 = T4;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P return_;
  P x_1512F2044;
  P x_1512F2043;
  P x_1512F2042;
  P nameF2041;
  P nF2040;
  P x_1512F2039;
  P x_1513F2038;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1513_44,4);
  x_1513F2038 = T1;
  FUNINIT(x_1513F2038, 4,return_,FREEREF(0),FREEREF(1),FREEREF(2));
  x_1512F2039 = FREEREF(3);
  nF2040 = YPfalse;
  nF2040 = BOXFAB(nF2040);
  nameF2041 = YPfalse;
  nameF2041 = BOXFAB(nameF2041);
  T7 = CALL2(1,VARREF(YisaQ),x_1512F2039,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1512F2039,LITREF(lit_66),x_1513F2038);
    x_1512F2042 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1512F2042,x_1513F2038);
    BOXVAL(nF2040) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1512F2042);
    x_1512F2043 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1512F2043,x_1513F2038);
    BOXVAL(nameF2041) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1512F2043);
    x_1512F2044 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1512F2044,x_1513F2038);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1513F2038,LITREF(lit_54),x_1512F2039);
  }
  T19 = BOXVAL(nF2040);
  T20 = BOXVAL(nameF2041);
  T18 = CALL2(1,VARREF(Yx8rStopYframe_var),T19,T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1510_46) {
  P msg_,args_;
  P x_1511F2045;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1511F2045 = FREEREF(1);
  T3 = FUNFAB(fun_45,4,FREEREF(2),FREEREF(3),FREEREF(4),x_1511F2045);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P return_;
  P x_1509F2050;
  P x_1509F2049;
  P nF2048;
  P x_1509F2047;
  P x_1510F2046;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1510_46,5);
  x_1510F2046 = T1;
  FUNINIT(x_1510F2046, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1509F2047 = FREEREF(0);
  nF2048 = YPfalse;
  nF2048 = BOXFAB(nF2048);
  T5 = CALL2(1,VARREF(YisaQ),x_1509F2047,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1509F2047,LITREF(lit_63),x_1510F2046);
    x_1509F2049 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1509F2049,x_1510F2046);
    BOXVAL(nF2048) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1509F2049);
    x_1509F2050 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1509F2050,x_1510F2046);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1510F2046,LITREF(lit_54),x_1509F2047);
  }
  T14 = BOXVAL(nF2048);
  T13 = CALL1(1,VARREF(Yx8rStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1507_48) {
  P msg_,args_;
  P x_1508F2051;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1508F2051 = FREEREF(1);
  T3 = FUNFAB(fun_47,4,x_1508F2051,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P return_;
  P x_1506F2054;
  P x_1506F2053;
  P x_1507F2052;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1507_48,5);
  x_1507F2052 = T1;
  FUNINIT(x_1507F2052, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1506F2053 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1506F2053,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1506F2053,LITREF(lit_60),x_1507F2052);
    x_1506F2054 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1506F2054,x_1507F2052);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1507F2052,LITREF(lit_54),x_1506F2053);
  }
  T8 = CALL0(1,VARREF(Yx8rStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1504_50) {
  P msg_,args_;
  P x_1505F2055;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1505F2055 = FREEREF(1);
  T3 = FUNFAB(fun_49,4,x_1505F2055,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P return_;
  P x_1503F2058;
  P x_1503F2057;
  P x_1504F2056;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1504_50,5);
  x_1504F2056 = T1;
  FUNINIT(x_1504F2056, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1503F2057 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1503F2057,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1503F2057,LITREF(lit_68),x_1504F2056);
    x_1503F2058 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1503F2058,x_1504F2056);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1504F2056,LITREF(lit_54),x_1503F2057);
  }
  T8 = CALL0(1,VARREF(Yx8rStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1501_52) {
  P msg_,args_;
  P x_1502F2059;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1502F2059 = FREEREF(1);
  T3 = FUNFAB(fun_51,4,x_1502F2059,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1500F2062;
  P x_1500F2061;
  P x_1501F2060;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1501_52,5);
  x_1501F2060 = T1;
  FUNINIT(x_1501F2060, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1500F2061 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1500F2061,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1500F2061,LITREF(lit_20),x_1501F2060);
    x_1500F2062 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1500F2062,x_1501F2060);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1501F2060,LITREF(lit_54),x_1500F2061);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYauto_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1498_54) {
  P msg_,args_;
  P x_1499F2063;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1499F2063 = FREEREF(1);
  T3 = FUNFAB(fun_53,4,x_1499F2063,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1497F2066;
  P x_1497F2065;
  P x_1498F2064;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1498_54,5);
  x_1498F2064 = T1;
  FUNINIT(x_1498F2064, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1497F2065 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1497F2065,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1497F2065,LITREF(lit_103),x_1498F2064);
    x_1497F2066 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1497F2066,x_1498F2064);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1498F2064,LITREF(lit_54),x_1497F2065);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1495_56) {
  P msg_,args_;
  P x_1496F2067;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1496F2067 = FREEREF(1);
  T3 = FUNFAB(fun_55,4,x_1496F2067,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1494F2070;
  P x_1494F2069;
  P x_1495F2068;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1495_56,5);
  x_1495F2068 = T1;
  FUNINIT(x_1495F2068, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1494F2069 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1494F2069,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1494F2069,LITREF(lit_6),x_1495F2068);
    x_1494F2070 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1494F2070,x_1495F2068);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1495F2068,LITREF(lit_54),x_1494F2069);
  }
  T8 = VARSET(Yx8rStopYrun,VARREF(Yx8rStopYg2c_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1492_58) {
  P msg_,args_;
  P x_1493F2071;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1493F2071 = FREEREF(1);
  T3 = FUNFAB(fun_57,4,x_1493F2071,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P new_envF2077;
  P x_1491F2076;
  P x_1491F2075;
  P mF2074;
  P x_1491F2073;
  P x_1492F2072;
  P T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1;
  P T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1492_58,5);
  x_1492F2072 = T1;
  FUNINIT(x_1492F2072, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1491F2073 = FREEREF(0);
  mF2074 = YPfalse;
  mF2074 = BOXFAB(mF2074);
  T5 = CALL2(1,VARREF(YisaQ),x_1491F2073,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1491F2073,LITREF(lit_104),x_1492F2072);
    x_1491F2075 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1491F2075,x_1492F2072);
    BOXVAL(mF2074) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1491F2075);
    x_1491F2076 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1491F2076,x_1492F2072);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1492F2072,LITREF(lit_54),x_1491F2073);
  }
  T15 = BOXVAL(mF2074);
  T14 = CALL1(1,VARREF(Yx8rSastYruntime_environment),T15);
  new_envF2077 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2077;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1489_60) {
  P msg_,args_;
  P x_1490F2078;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1490F2078 = FREEREF(1);
  T3 = FUNFAB(fun_59,4,x_1490F2078,FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1488F2083;
  P x_1488F2082;
  P nF2081;
  P x_1488F2080;
  P x_1489F2079;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1489_60,5);
  x_1489F2079 = T1;
  FUNINIT(x_1489F2079, 5,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  x_1488F2080 = FREEREF(0);
  nF2081 = YPfalse;
  nF2081 = BOXFAB(nF2081);
  T5 = CALL2(1,VARREF(YisaQ),x_1488F2080,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1488F2080,LITREF(lit_105),x_1489F2079);
    x_1488F2082 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1488F2082,x_1489F2079);
    BOXVAL(nF2081) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1488F2082);
    x_1488F2083 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1488F2083,x_1489F2079);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1489F2079,LITREF(lit_54),x_1488F2080);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2081);
  T13 = CALL2(1,VARREF(Yx8rStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1486_62) {
  P msg_,args_;
  P x_1487F2084;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1487F2084 = FREEREF(1);
  T3 = FUNFAB(fun_61,5,x_1487F2084,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1485F2087;
  P x_1485F2086;
  P x_1486F2085;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1486_62,6);
  x_1486F2085 = T1;
  FUNINIT(x_1486F2085, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1485F2086 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1485F2086,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1485F2086,LITREF(lit_73),x_1486F2085);
    x_1485F2087 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F2087,x_1486F2085);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1486F2085,LITREF(lit_54),x_1485F2086);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1483_64) {
  P msg_,args_;
  P x_1484F2088;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1484F2088 = FREEREF(1);
  T3 = FUNFAB(fun_63,5,x_1484F2088,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1482F2091;
  P x_1482F2090;
  P x_1483F2089;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1483_64,6);
  x_1483F2089 = T1;
  FUNINIT(x_1483F2089, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1482F2090 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1482F2090,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1482F2090,LITREF(lit_106),x_1483F2089);
    x_1482F2091 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1482F2091,x_1483F2089);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1483F2089,LITREF(lit_54),x_1482F2090);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1480_66) {
  P msg_,args_;
  P x_1481F2092;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1481F2092 = FREEREF(1);
  T3 = FUNFAB(fun_65,5,x_1481F2092,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P x_1479F2095;
  P x_1479F2094;
  P x_1480F2093;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1480_66,6);
  x_1480F2093 = T1;
  FUNINIT(x_1480F2093, 6,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  x_1479F2094 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1479F2094,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1479F2094,LITREF(lit_107),x_1480F2093);
    x_1479F2095 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1479F2095,x_1480F2093);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1480F2093,LITREF(lit_54),x_1479F2094);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1477_68) {
  P msg_,args_;
  P x_1478F2096;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1478F2096 = FREEREF(1);
  T3 = FUNFAB(fun_67,6,x_1478F2096,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1476F2099;
  P x_1476F2098;
  P x_1477F2097;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1477_68,7);
  x_1477F2097 = T1;
  FUNINIT(x_1477F2097, 7,return_,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  x_1476F2098 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1476F2098,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1476F2098,LITREF(lit_78),x_1477F2097);
    x_1476F2099 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1476F2099,x_1477F2097);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1477F2097,LITREF(lit_54),x_1476F2098);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P x_1475F2101;
  P formF2100;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYformat),VARREF(YgooSioSportYout),LITREF(lit_87));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(Yx8rStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_88));
  formF2100 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2100,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1475F2101 = formF2100;
    T12 = FUNFAB(fun_69,7,x_1475F2101,formF2100,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_71) {
  P T5,T4,T3,T2,T1,T0;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_86),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_42;
  T4 = FUNFAB(fun_43,1,FREEREF(1));
  T5 = FUNFAB(fun_70,6,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P continue_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_40;
  T2 = FUNFAB(fun_41,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_71,7,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_73) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_72,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_74) {
  P blow_;
  P loopF2102;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_73,8);
  loopF2102 = T1;
  FUNINIT(loopF2102, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2102);
  T2 = CALL0(0,loopF2102);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_in_75) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2103;
  P T5,T4,T3,T2,T1,T0;
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
  restartsF2103 = YPfalse;
  restartsF2103 = BOXFAB(restartsF2103);
  T5 = FUNFAB(fun_74,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2103);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_76) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_77) {
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

FUNCODEDEF(fun_78) {
  P top_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(top_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYruntime_environment),FREEREF(1));
  T0 = CALLN(1,VARREF(Yx8rStopYtop_in),5,YPint((P)0),top_,FREEREF(0),YPfalse,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_79) {
  P T1,T0;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_78,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_80) {
  P loopF2104;
  P T2,T1,T0;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_79,3);
  loopF2104 = T1;
  FUNINIT(loopF2104, 3,FREEREF(0),FREEREF(1),loopF2104);
  T2 = CALL0(0,loopF2104);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P quit_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALLN(1,VARREF(Ynew),5,VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_108),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_76;
  T4 = FUNFAB(fun_77,1,quit_);
  T5 = FUNFAB(fun_80,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_82) {
  P modname_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_81,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(Yx8rStopYtop),LITREF(lit_111));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rStopYsave_image) {
  P image_name_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(image_name_, 0);
loop:
  T1 = fun_83;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P Yx8rStopY___main_0___() {
  P T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171,T170,T169,T168,T167;
  P T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155,T154,T153,T152,T151;
  P T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139,T138,T137,T136,T135;
  P T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123,T122,T121,T120,T119;
  P T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107,T106,T105,T104,T103;
  P T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91,T90,T89,T88,T87;
  P T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75,T74,T73,T72,T71;
  P T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59,T58,T57,T56,T55;
  P T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43,T42,T41,T40,T39;
  P T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23;
  P T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7;
  P T6,T5,T4,T3,T2,T1,T0;
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
  Yx8rStopYesctst = YPmet(FUNCODEREF(Yx8rStopYesctst),LITREF(lit_0),T0,ENVNUL,PNUL,YPfalse);
  T4 = Yx8rStopYesctst;
  VARSET(Yx8rStopYesctst,T4);
  lit_6 = YPPsym((P)"g2c-eval");
  lit_7 = YPPsym((P)"exp");
  lit_8 = YPPsym((P)"ct-env");
  T6 = YPsig(YPPlist(2,LITREF(lit_7),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T5 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_6),T6,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(Yx8rStopYg2c_eval,T5);
  lit_9 = YPPsym((P)"parse-in");
  lit_10 = YPPsym((P)"s");
  T7 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_in_4 = YPmet(FUNCODEREF(fun_parse_in_4),LITREF(lit_9),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rStopYparse_in);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rStopYparse_in);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_parse_in_4;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rStopYparse_in,T8);
  lit_11 = YPPsym((P)"parse");
  lit_12 = YPPsym((P)"modname");
  T12 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_parse_5 = YPmet(FUNCODEREF(fun_parse_5),LITREF(lit_11),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rStopYparse);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rStopYparse);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_parse_5;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rStopYparse,T13);
  lit_13 = YPPsym((P)"str-parse-in");
  lit_14 = YPsb((P)"%=\n");
  T17 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_in_6 = YPmet(FUNCODEREF(fun_str_parse_in_6),LITREF(lit_13),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rStopYstr_parse_in);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rStopYstr_parse_in);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_str_parse_in_6;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rStopYstr_parse_in,T18);
  lit_15 = YPPsym((P)"str-parse");
  T22 = YPsig(YPPlist(2,LITREF(lit_10),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_parse_7 = YPmet(FUNCODEREF(fun_str_parse_7),LITREF(lit_15),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rStopYstr_parse);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rStopYstr_parse);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_str_parse_7;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rStopYstr_parse,T23);
  lit_16 = YPPsym((P)"ast-run");
  lit_17 = YPPsym((P)"ast");
  T27 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYast_run = YPmet(FUNCODEREF(Yx8rStopYast_run),LITREF(lit_16),T27,ENVNUL,PNUL,YPfalse);
  T28 = Yx8rStopYast_run;
  VARSET(Yx8rStopYast_run,T28);
  lit_18 = YPPsym((P)"g2c-run");
  T29 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYg2c_run = YPmet(FUNCODEREF(Yx8rStopYg2c_run),LITREF(lit_18),T29,ENVNUL,PNUL,YPfalse);
  T30 = Yx8rStopYg2c_run;
  VARSET(Yx8rStopYg2c_run,T30);
  lit_19 = YPPsym((P)"auto-run");
  T31 = YPsig(YPPlist(2,LITREF(lit_17),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYauto_run = YPmet(FUNCODEREF(Yx8rStopYauto_run),LITREF(lit_19),T31,ENVNUL,PNUL,YPfalse);
  T32 = Yx8rStopYauto_run;
  VARSET(Yx8rStopYauto_run,T32);
  lit_20 = YPPsym((P)"auto-eval");
  lit_21 = YPPsym((P)"form");
  T33 = YPsig(YPPlist(2,LITREF(lit_21),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYauto_eval = YPmet(FUNCODEREF(Yx8rStopYauto_eval),LITREF(lit_20),T33,ENVNUL,PNUL,YPfalse);
  T34 = Yx8rStopYauto_eval;
  VARSET(Yx8rStopYauto_eval,T34);
  VARSET(Yx8rStopYrun,VARREF(Yx8rStopYauto_run));
  lit_22 = YPPsym((P)"eval-in");
  lit_23 = YPPsym((P)"x");
  T35 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_22),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(Yx8rStopYeval_in);
  if (T38 != YPfalse) {
    T37 = VARREF(Yx8rStopYeval_in);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_eval_in_12;
  T36 = CALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(Yx8rStopYeval_in,T36);
  lit_24 = YPPsym((P)"eval");
  T40 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_24),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(Yx8rSsyntaxYeval);
  if (T43 != YPfalse) {
    T42 = VARREF(Yx8rSsyntaxYeval);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_eval_13;
  T41 = CALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(Yx8rSsyntaxYeval,T41);
  lit_25 = YPPsym((P)"str-eval-in");
  T45 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_25),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rStopYstr_eval_in);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rStopYstr_eval_in);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_str_eval_in_14;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rStopYstr_eval_in,T46);
  lit_26 = YPPsym((P)"str-eval");
  T50 = YPsig(YPPlist(2,LITREF(lit_23),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_26),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(Yx8rStopYstr_eval);
  if (T53 != YPfalse) {
    T52 = VARREF(Yx8rStopYstr_eval);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_str_eval_15;
  T51 = CALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(Yx8rStopYstr_eval,T51);
  lit_27 = YPPsym((P)"read-file");
  lit_28 = YPPsym((P)"filename");
  lit_29 = YPPsym((P)"loop");
  lit_30 = YPPsym((P)"forms");
  T58 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_16 = YPmet(FUNCODEREF(fun_loop_16),LITREF(lit_29),T58,ENVNUL,PNUL,YPfalse);
  T57 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T57,ENVNUL,PNUL,YPfalse);
  T56 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T56,ENVNUL,PNUL,YPfalse);
  T55 = YPsig(YPPlist(1,LITREF(lit_28)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_19 = YPmet(FUNCODEREF(fun_read_file_19),LITREF(lit_27),T55,ENVNUL,PNUL,YPfalse);
  T61 = BOUNDP(Yx8rStopYread_file);
  if (T61 != YPfalse) {
    T60 = VARREF(Yx8rStopYread_file);
  } else {
    T60 = YPfalse;
  }
  T62 = fun_read_file_19;
  T59 = CALL2(1,VARREF(YPdefine_method),T60,T62);
  VARSET(Yx8rStopYread_file,T59);
  lit_31 = YPPsym((P)"load-in");
  T63 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_20 = YPmet(FUNCODEREF(fun_load_in_20),LITREF(lit_31),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSastYload_in);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSastYload_in);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_load_in_20;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSastYload_in,T64);
  lit_32 = YPPsym((P)"load");
  T68 = YPsig(YPPlist(2,LITREF(lit_28),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_21 = YPmet(FUNCODEREF(fun_load_21),LITREF(lit_32),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rStopYload);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rStopYload);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_load_21;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rStopYload,T69);
  lit_33 = YPPsym((P)"load-from");
  lit_34 = YPPsym((P)"name");
  T73 = YPsig(YPPlist(2,LITREF(lit_34),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_from_22 = YPmet(FUNCODEREF(fun_load_from_22),LITREF(lit_33),T73,ENVNUL,PNUL,YPfalse);
  T76 = BOUNDP(Yx8rStopYload_from);
  if (T76 != YPfalse) {
    T75 = VARREF(Yx8rStopYload_from);
  } else {
    T75 = YPfalse;
  }
  T77 = fun_load_from_22;
  T74 = CALL2(1,VARREF(YPdefine_method),T75,T77);
  VARSET(Yx8rStopYload_from,T74);
  lit_35 = YPPsym((P)"prompt-for-command-expression");
  lit_36 = YPPsym((P)"env");
  lit_37 = YPPsym((P)"level");
  lit_38 = YPPsym((P)"prompt");
  lit_39 = YPsb((P)"%s %=%s");
  lit_40 = YPPsym((P)"unquote");
  lit_41 = YPsb((P)"(");
  lit_42 = YPsb((P)")");
  T78 = YPsig(YPPlist(3,LITREF(lit_36),LITREF(lit_37),LITREF(lit_38)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_23 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_23),LITREF(lit_35),T78,ENVNUL,PNUL,YPfalse);
  T81 = BOUNDP(Yx8rStopYprompt_for_command_expression);
  if (T81 != YPfalse) {
    T80 = VARREF(Yx8rStopYprompt_for_command_expression);
  } else {
    T80 = YPfalse;
  }
  T82 = fun_prompt_for_command_expression_23;
  T79 = CALL2(1,VARREF(YPdefine_method),T80,T82);
  VARSET(Yx8rStopYprompt_for_command_expression,T79);
  lit_43 = YPPsym((P)"print-result-expression");
  lit_44 = YPPsym((P)"label");
  lit_45 = YPPsym((P)"result");
  lit_46 = YPsb((P)"%s %=%s");
  T83 = YPsig(YPPlist(4,LITREF(lit_36),LITREF(lit_37),LITREF(lit_44),LITREF(lit_45)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_24 = YPmet(FUNCODEREF(fun_print_result_expression_24),LITREF(lit_43),T83,ENVNUL,PNUL,YPfalse);
  T86 = BOUNDP(Yx8rStopYprint_result_expression);
  if (T86 != YPfalse) {
    T85 = VARREF(Yx8rStopYprint_result_expression);
  } else {
    T85 = YPfalse;
  }
  T87 = fun_print_result_expression_24;
  T84 = CALL2(1,VARREF(YPdefine_method),T85,T87);
  VARSET(Yx8rStopYprint_result_expression,T84);
  lit_47 = YPPsym((P)"do-stack-frames");
  lit_48 = YPPsym((P)"fun");
  T88 = YPsig(YPPlist(1,LITREF(lit_48)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_25 = YPmet(FUNCODEREF(fun_do_stack_frames_25),LITREF(lit_47),T88,ENVNUL,PNUL,YPfalse);
  T91 = BOUNDP(Yx8rStopYdo_stack_frames);
  if (T91 != YPfalse) {
    T90 = VARREF(Yx8rStopYdo_stack_frames);
  } else {
    T90 = YPfalse;
  }
  T92 = fun_do_stack_frames_25;
  T89 = CALL2(1,VARREF(YPdefine_method),T90,T92);
  VARSET(Yx8rStopYdo_stack_frames,T89);
  lit_49 = YPPsym((P)"return");
  lit_50 = YPPsym((P)"x-1474");
  lit_51 = YPPsym((P)"msg");
  lit_52 = YPPsym((P)"args");
  lit_53 = YPPsym((P)"for-frames");
  lit_54 = YPsb((P)"Match Pattern Failure");
  lit_55 = YPPsym((P)"let");
  lit_56 = YPPsym((P)"_args");
  lit_57 = YPPsym((P)"def");
  lit_58 = YPPsym((P)"rev");
  lit_59 = YPPsym((P)"incf");
  T95 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1474_26 = YPmet(FUNCODEREF(fun_x_1474_26),LITREF(lit_50),T95,ENVNUL,PNUL,YPfalse);
  T94 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T93,ENVNUL,PNUL,YPfalse);
  T96 = fun_28;
  YPmacro(YPPsym((P)"x8r/top"),YPPsym((P)"for-frames"),T96);
  lit_60 = YPPsym((P)"backtrace");
  lit_61 = YPPsym((P)"f");
  lit_62 = YPsb((P)"[%=] %= %=\n");
  T98 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_30 = YPmet(FUNCODEREF(fun_backtrace_30),LITREF(lit_60),T97,ENVNUL,PNUL,YPfalse);
  T101 = BOUNDP(Yx8rStopYbacktrace);
  if (T101 != YPfalse) {
    T100 = VARREF(Yx8rStopYbacktrace);
  } else {
    T100 = YPfalse;
  }
  T102 = fun_backtrace_30;
  T99 = CALL2(1,VARREF(YPdefine_method),T100,T102);
  VARSET(Yx8rStopYbacktrace,T99);
  lit_63 = YPPsym((P)"frame");
  lit_64 = YPPsym((P)"n");
  lit_65 = YPsb((P)"[%=] %= %=\n");
  T104 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T104,ENVNUL,PNUL,YPfalse);
  T103 = YPsig(YPPlist(1,LITREF(lit_64)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_32 = YPmet(FUNCODEREF(fun_frame_32),LITREF(lit_63),T103,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yx8rStopYframe);
  if (T107 != YPfalse) {
    T106 = VARREF(Yx8rStopYframe);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_frame_32;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yx8rStopYframe,T105);
  lit_66 = YPPsym((P)"frame-var");
  lit_67 = YPPsym((P)"ret");
  T111 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T110 = YPsig(YPPlist(1,LITREF(lit_67)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T110,ENVNUL,PNUL,YPfalse);
  T109 = YPsig(YPPlist(2,LITREF(lit_64),LITREF(lit_34)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_35 = YPmet(FUNCODEREF(fun_frame_var_35),LITREF(lit_66),T109,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(Yx8rStopYframe_var);
  if (T114 != YPfalse) {
    T113 = VARREF(Yx8rStopYframe_var);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_frame_var_35;
  T112 = CALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(Yx8rStopYframe_var,T112);
  lit_68 = YPPsym((P)"bt");
  lit_69 = YPsb((P)"[%=] %=\n");
  T117 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_56)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_37 = YPmet(FUNCODEREF(fun_bt_37),LITREF(lit_68),T116,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(Yx8rStopYbt);
  if (T120 != YPfalse) {
    T119 = VARREF(Yx8rStopYbt);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_bt_37;
  T118 = CALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(Yx8rStopYbt,T118);
  lit_70 = YPPsym((P)"<keyboard-interrupt>");
  T123 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T122 = CALL2(1,VARREF(Yfab_class),LITREF(lit_70),T123);
  VARSET(Yx8rStopYLkeyboard_interruptG,T122);
  lit_71 = YPPsym((P)"keyboard-interrupt");
  T124 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_71),T124,ENVNUL,PNUL,YPfalse);
  T125 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T125);
  lit_72 = YPPsym((P)"do-restart");
  lit_73 = YPPsym((P)"restarts");
  lit_74 = YPsb((P)"No restarts available.\n");
  lit_75 = YPsb((P)"No restart #%d.\n");
  T126 = YPsig(YPPlist(2,LITREF(lit_73),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  Yx8rStopYdo_restart = YPmet(FUNCODEREF(Yx8rStopYdo_restart),LITREF(lit_72),T126,ENVNUL,PNUL,YPfalse);
  T127 = Yx8rStopYdo_restart;
  VARSET(Yx8rStopYdo_restart,T127);
  lit_76 = YPPsym((P)"top-in");
  lit_77 = YPPsym((P)"top");
  lit_78 = YPPsym((P)"quit");
  lit_79 = YPPsym((P)"show-restarts?");
  lit_80 = YPPsym((P)"blow");
  lit_81 = YPPsym((P)"continue");
  lit_82 = YPPsym((P)"c");
  lit_83 = YPPsym((P)"r");
  lit_84 = YPsb((P)"BREAK");
  lit_85 = YPsb((P)"ERROR: %s");
  lit_86 = YPsb((P)"Return to interpreter level %d");
  lit_87 = YPsb((P)"Type (restart N) to restart execution:\n");
  lit_88 = YPsb((P)"<= ");
  lit_89 = YPPsym((P)"x-1477");
  lit_90 = YPPsym((P)"x-1480");
  lit_91 = YPPsym((P)"x-1483");
  lit_92 = YPPsym((P)"x-1486");
  lit_93 = YPPsym((P)"x-1489");
  lit_94 = YPPsym((P)"x-1492");
  lit_95 = YPPsym((P)"x-1495");
  lit_96 = YPPsym((P)"x-1498");
  lit_97 = YPPsym((P)"x-1501");
  lit_98 = YPPsym((P)"x-1504");
  lit_99 = YPPsym((P)"x-1507");
  lit_100 = YPPsym((P)"x-1510");
  lit_101 = YPPsym((P)"x-1513");
  lit_102 = YPsb((P)"=> ");
  lit_103 = YPPsym((P)"ast-eval");
  lit_104 = YPPsym((P)"in");
  lit_105 = YPPsym((P)"restart");
  lit_106 = YPPsym((P)"handlers");
  lit_107 = YPPsym((P)"up");
  T163 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1513_44 = YPmet(FUNCODEREF(fun_x_1513_44),LITREF(lit_101),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1510_46 = YPmet(FUNCODEREF(fun_x_1510_46),LITREF(lit_100),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1507_48 = YPmet(FUNCODEREF(fun_x_1507_48),LITREF(lit_99),T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1504_50 = YPmet(FUNCODEREF(fun_x_1504_50),LITREF(lit_98),T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1501_52 = YPmet(FUNCODEREF(fun_x_1501_52),LITREF(lit_97),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1498_54 = YPmet(FUNCODEREF(fun_x_1498_54),LITREF(lit_96),T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1495_56 = YPmet(FUNCODEREF(fun_x_1495_56),LITREF(lit_95),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1492_58 = YPmet(FUNCODEREF(fun_x_1492_58),LITREF(lit_94),T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1489_60 = YPmet(FUNCODEREF(fun_x_1489_60),LITREF(lit_93),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_62 = YPmet(FUNCODEREF(fun_x_1486_62),LITREF(lit_92),T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1483_64 = YPmet(FUNCODEREF(fun_x_1483_64),LITREF(lit_91),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1480_66 = YPmet(FUNCODEREF(fun_x_1480_66),LITREF(lit_90),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(2,LITREF(lit_51),LITREF(lit_52)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1477_68 = YPmet(FUNCODEREF(fun_x_1477_68),LITREF(lit_89),T135,ENVNUL,PNUL,YPfalse);
  T134 = YPsig(YPPlist(1,LITREF(lit_49)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_73 = YPmet(FUNCODEREF(fun_loop_73),LITREF(lit_29),T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(1,LITREF(lit_80)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(5,LITREF(lit_37),LITREF(lit_77),LITREF(lit_78),LITREF(lit_79),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_top_in_75 = YPmet(FUNCODEREF(fun_top_in_75),LITREF(lit_76),T128,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rStopYtop_in);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rStopYtop_in);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_top_in_75;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rStopYtop_in,T164);
  lit_108 = YPsb((P)"Exit the top-level interpreter");
  T174 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_76 = YPmet(FUNCODEREF(fun_76),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_82),LITREF(lit_83)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_77)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_78 = YPmet(FUNCODEREF(fun_78),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_79 = YPmet(FUNCODEREF(fun_loop_79),LITREF(lit_29),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(1,LITREF(lit_78)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_82 = YPmet(FUNCODEREF(fun_top_82),LITREF(lit_77),T168,ENVNUL,PNUL,YPfalse);
  T177 = BOUNDP(Yx8rStopYtop);
  if (T177 != YPfalse) {
    T176 = VARREF(Yx8rStopYtop);
  } else {
    T176 = YPfalse;
  }
  T178 = fun_top_82;
  T175 = CALL2(1,VARREF(YPdefine_method),T176,T178);
  VARSET(Yx8rStopYtop,T175);
  lit_109 = YPPsym((P)"save-image");
  lit_110 = YPPsym((P)"image-name");
  lit_111 = YPPsym((P)"goo/user");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(1,LITREF(lit_110)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  Yx8rStopYsave_image = YPmet(FUNCODEREF(Yx8rStopYsave_image),LITREF(lit_109),T179,ENVNUL,PNUL,YPfalse);
  T181 = Yx8rStopYsave_image;
  VARSET(Yx8rStopYsave_image,T181);
  T182 = YPfalse;
  return T182;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_x8rSsyntax;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_x8rSast_linearize;
extern MODULE_INFO module_info_x8rSast_eval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSread},
  {&module_info_gooSioSwrite},
  {&module_info_x8rSsyntax},
  {&module_info_x8rSast},
  {&module_info_x8rSast_linearize},
  {&module_info_x8rSast_eval},
  {&module_info_gooSsystem},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {&module_info_gooSioSport},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$sexpr-define-generic-tag", &module_info_x8rSsyntax, "$sexpr-define-generic-tag"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"*", &module_info_gooSmath, "*"},
  {"t?", &module_info_gooStypes, "t?"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"collect-registers!", &module_info_x8rSast_linearize, "collect-registers!"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"list", &module_info_gooScolsSlst, "list"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"form-quotations", &module_info_x8rSast_linearize, "form-quotations"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"put", &module_info_gooSioSport, "put"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"sexpr-syntax-if-value", &module_info_x8rSsyntax, "sexpr-syntax-if-value"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"sexpr-assignment-variable", &module_info_x8rSsyntax, "sexpr-assignment-variable"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"1+", &module_info_gooSmath, "1+"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"nil", &module_info_gooSboot, "nil"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"%binding-value-setter", &module_info_x8rSast_eval, "%binding-value-setter"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"^", &module_info_gooSmath, "^"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"$sexpr-syntax-if-tag", &module_info_x8rSsyntax, "$sexpr-syntax-if-tag"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"t<", &module_info_gooStypes, "t<"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"display", &module_info_gooSioSwrite, "display"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"dp", &module_info_gooSboot, "dp"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"sexpr-block-name", &module_info_x8rSsyntax, "sexpr-block-name"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"$e", &module_info_gooSmath, "$e"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"$sexpr-let-tag", &module_info_x8rSsyntax, "$sexpr-let-tag"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"*register-passive?*", &module_info_x8rSast_linearize, "*register-passive?*"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"@==", &module_info_gooSboot, "@=="},
  {"sexpr-define-class-parents", &module_info_x8rSsyntax, "sexpr-define-class-parents"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%get", &module_info_gooSboot, "%get"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"or", &module_info_gooSmacros, "or"},
  {"sexpr-forward-primitive?", &module_info_x8rSsyntax, "sexpr-forward-primitive?"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"t=", &module_info_gooStypes, "t="},
  {"items", &module_info_gooScolsScol, "items"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"even?", &module_info_gooSmath, "even?"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"any?", &module_info_gooStypes, "any?"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"|", &module_info_gooSmath, "|"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {">>", &module_info_gooSmath, ">>"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"def", &module_info_gooSboot, "def"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"sexpr-syntax-definition-value", &module_info_x8rSsyntax, "sexpr-syntax-definition-value"},
  {"do", &module_info_gooSmacros, "do"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sexpr-unquote-splicing?", &module_info_x8rSsyntax, "sexpr-unquote-splicing?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"out", &module_info_gooSioSport, "out"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"tail", &module_info_gooSboot, "tail"},
  {"acos", &module_info_gooSmath, "acos"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<box-write>", &module_info_x8rSast_linearize, "<box-write>"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"+", &module_info_gooSmath, "+"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"$sexpr-define-function-tag", &module_info_x8rSsyntax, "$sexpr-define-function-tag"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"max", &module_info_gooSmag, "max"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"reference-offset", &module_info_x8rSast_linearize, "reference-offset"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"sexpr-loc-bound-bodies", &module_info_x8rSsyntax, "sexpr-loc-bound-bodies"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"sexpr-prop-init-var", &module_info_x8rSsyntax, "sexpr-prop-init-var"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"$sexpr-unwind-protect-tag", &module_info_x8rSsyntax, "$sexpr-unwind-protect-tag"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"sexpr-method-signature", &module_info_x8rSsyntax, "sexpr-method-signature"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"fin", &module_info_gooSboot, "fin"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"sexpr-syntax-if-else", &module_info_x8rSsyntax, "sexpr-syntax-if-else"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"sexpr-prop-owner", &module_info_x8rSsyntax, "sexpr-prop-owner"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"log", &module_info_gooSmath, "log"},
  {"lift!", &module_info_x8rSast_linearize, "lift!"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"close", &module_info_gooSioSport, "close"},
  {"let", &module_info_gooSboot, "let"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"sexpr-isa-init-props", &module_info_x8rSsyntax, "sexpr-isa-init-props"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"sexpr-syntax-if-then", &module_info_x8rSsyntax, "sexpr-syntax-if-then"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"round/", &module_info_gooSmath, "round/"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"ds", &module_info_gooSboot, "ds"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"<top-level-form>", &module_info_x8rSast_linearize, "<top-level-form>"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"vec", &module_info_gooSboot, "vec"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"%binding-bound?", &module_info_x8rSast_eval, "%binding-bound?"},
  {"sin", &module_info_gooSmath, "sin"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"ct", &module_info_gooSboot, "ct"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"<=", &module_info_gooSmag, "<="},
  {"@len", &module_info_gooSboot, "@len"},
  {"sexpr-variable?", &module_info_x8rSsyntax, "sexpr-variable?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"$sexpr-define-tag", &module_info_x8rSsyntax, "$sexpr-define-tag"},
  {"sexpr-operands", &module_info_x8rSsyntax, "sexpr-operands"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"form-program", &module_info_x8rSast_linearize, "form-program"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"round", &module_info_gooSmath, "round"},
  {"sexpr-signature-parameters", &module_info_x8rSsyntax, "sexpr-signature-parameters"},
  {"sexpr-function-definition-variable", &module_info_x8rSsyntax, "sexpr-function-definition-variable"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"sexpr-fab-setter-name", &module_info_x8rSsyntax, "sexpr-fab-setter-name"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"in", &module_info_gooSioSport, "in"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"sexpr-prop-type", &module_info_x8rSsyntax, "sexpr-prop-type"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"sexpr-loc-bound-signatures", &module_info_x8rSsyntax, "sexpr-loc-bound-signatures"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"dc", &module_info_gooSboot, "dc"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"new", &module_info_gooSboot, "new"},
  {"sexpr-variable-type", &module_info_x8rSsyntax, "sexpr-variable-type"},
  {"sexpr-unwind-protect-protected-form", &module_info_x8rSsyntax, "sexpr-unwind-protect-protected-form"},
  {"insert-box!", &module_info_x8rSast_linearize, "insert-box!"},
  {"sexpr-loc-raw-body", &module_info_x8rSsyntax, "sexpr-loc-raw-body"},
  {"sexpr-make-macro-function", &module_info_x8rSsyntax, "sexpr-make-macro-function"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"always", &module_info_gooSruntime, "always"},
  {"msg", &module_info_gooSioSwrite, "msg"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"$sexpr-set-tag", &module_info_x8rSsyntax, "$sexpr-set-tag"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"form-definitions", &module_info_x8rSast_linearize, "form-definitions"},
  {"into", &module_info_gooScolsScol, "into"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sexpr-make-application", &module_info_x8rSsyntax, "sexpr-make-application"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"analyze-dynamic-extent", &module_info_x8rSast_linearize, "analyze-dynamic-extent"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"$sexpr-define-syntax-tag", &module_info_x8rSsyntax, "$sexpr-define-syntax-tag"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<closure-creation>", &module_info_x8rSast_linearize, "<closure-creation>"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"sexpr-make-anonymous-method", &module_info_x8rSsyntax, "sexpr-make-anonymous-method"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"pair", &module_info_gooSmacros, "pair"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {">=", &module_info_gooSmag, ">="},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"tan", &module_info_gooSmath, "tan"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"$sexpr-method-tag", &module_info_x8rSsyntax, "$sexpr-method-tag"},
  {"sexpr-make-begin", &module_info_x8rSsyntax, "sexpr-make-begin"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"set", &module_info_gooSboot, "set"},
  {"gather-temporaries!", &module_info_x8rSast_linearize, "gather-temporaries!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"sexpr-isa-parent", &module_info_x8rSsyntax, "sexpr-isa-parent"},
  {"dss", &module_info_gooSboot, "dss"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"lst", &module_info_gooSboot, "lst"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"@<", &module_info_gooSboot, "@<"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"not", &module_info_gooSboot, "not"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"rep", &module_info_gooSboot, "rep"},
  {"<renamed-local-binding>", &module_info_x8rSast_linearize, "<renamed-local-binding>"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"floor", &module_info_gooSmath, "floor"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"%im", &module_info_gooSboot, "%im"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"program-form", &module_info_x8rSast_linearize, "program-form"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"fun", &module_info_gooSboot, "fun"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"dm", &module_info_gooSboot, "dm"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"box-form", &module_info_x8rSast_linearize, "box-form"},
  {"%str", &module_info_gooSboot, "%str"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"sexpr-loc-bound-names", &module_info_x8rSsyntax, "sexpr-loc-bound-names"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"sexpr-unquote?", &module_info_x8rSsyntax, "sexpr-unquote?"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"tup", &module_info_gooSboot, "tup"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pe-format", &module_info_gooSioSwrite, "pe-format"},
  {"use", &module_info_gooSboot, "use"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"head", &module_info_gooSboot, "head"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"fill!", &module_info_gooScolsScol, "fill!"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"sexpr-definition-variable", &module_info_x8rSsyntax, "sexpr-definition-variable"},
  {"map", &module_info_gooSmacros, "map"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eval", &module_info_x8rSsyntax, "eval"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sexpr-define-class?", &module_info_x8rSsyntax, "sexpr-define-class?"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"del", &module_info_gooScolsScol, "del"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"program-definitions", &module_info_x8rSast_linearize, "program-definitions"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"<box-read>", &module_info_x8rSast_linearize, "<box-read>"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"$sexpr-begin-tag", &module_info_x8rSsyntax, "$sexpr-begin-tag"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"collect-temporaries!", &module_info_x8rSast_linearize, "collect-temporaries!"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"sexpr-def-value", &module_info_x8rSsyntax, "sexpr-def-value"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sexpr-fab-getter", &module_info_x8rSsyntax, "sexpr-fab-getter"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"as", &module_info_gooStypes, "as"},
  {"nul", &module_info_gooSboot, "nul"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"sexpr-if-else", &module_info_x8rSsyntax, "sexpr-if-else"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"box-reference", &module_info_x8rSast_linearize, "box-reference"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"find", &module_info_gooScolsScol, "find"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"program-quotations", &module_info_x8rSast_linearize, "program-quotations"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"sexpr-variable-name", &module_info_x8rSsyntax, "sexpr-variable-name"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"$sexpr-prop-tag", &module_info_x8rSsyntax, "$sexpr-prop-tag"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"$sexpr-if-tag", &module_info_x8rSsyntax, "$sexpr-if-tag"},
  {"sexpr-if-then", &module_info_x8rSsyntax, "sexpr-if-then"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"sexpr-monitor-expand", &module_info_x8rSsyntax, "sexpr-monitor-expand"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_x8rSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"update-walk!", &module_info_x8rSast_linearize, "update-walk!"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"dl", &module_info_gooSboot, "dl"},
  {"$sexpr-define-class-tag", &module_info_x8rSsyntax, "$sexpr-define-class-tag"},
  {"sexpr-expand-backquote", &module_info_x8rSsyntax, "sexpr-expand-backquote"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"get", &module_info_gooSioSport, "get"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sexpr-prop-init?", &module_info_x8rSsyntax, "sexpr-prop-init?"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"sexpr-function-signature", &module_info_x8rSsyntax, "sexpr-function-signature"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"$sexpr-define-method-tag", &module_info_x8rSsyntax, "$sexpr-define-method-tag"},
  {"sexpr-signature-value", &module_info_x8rSsyntax, "sexpr-signature-value"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$sexpr-iterate-tag", &module_info_x8rSsyntax, "$sexpr-iterate-tag"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"t*", &module_info_gooStypes, "t*"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"loc", &module_info_gooSboot, "loc"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"closure-creation-index", &module_info_x8rSast_linearize, "closure-creation-index"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"read", &module_info_gooSruntime, "read"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"$sexpr-monitor-tag", &module_info_x8rSsyntax, "$sexpr-monitor-tag"},
  {">", &module_info_gooSmag, ">"},
  {"sexpr-isa-init-values", &module_info_x8rSsyntax, "sexpr-isa-init-values"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"reference-self?", &module_info_x8rSast_linearize, "reference-self?"},
  {"sexpr-if-test", &module_info_x8rSsyntax, "sexpr-if-test"},
  {"~=", &module_info_gooSmath, "~="},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"open", &module_info_gooSioSport, "open"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"rem", &module_info_gooSmath, "rem"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<box-creation>", &module_info_x8rSast_linearize, "<box-creation>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sexpr-isa-prop-inits", &module_info_x8rSsyntax, "sexpr-isa-prop-inits"},
  {"$sexpr-macro-expand-tag", &module_info_x8rSsyntax, "$sexpr-macro-expand-tag"},
  {"$sexpr-def-tag", &module_info_x8rSsyntax, "$sexpr-def-tag"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"<free-reference>", &module_info_x8rSast_linearize, "<free-reference>"},
  {"format", &module_info_gooSruntime, "format"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"sexpr-let->combination", &module_info_x8rSsyntax, "sexpr-let->combination"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"sexpr-fab-setter", &module_info_x8rSsyntax, "sexpr-fab-setter"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"$sexpr-quote-tag", &module_info_x8rSsyntax, "$sexpr-quote-tag"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"ast-contains-fun?", &module_info_x8rSast_linearize, "ast-contains-fun?"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"sexpr-syntax-definition-variable", &module_info_x8rSsyntax, "sexpr-syntax-definition-variable"},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"sexpr-iterate->loc", &module_info_x8rSsyntax, "sexpr-iterate->loc"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"<", &module_info_gooSmag, "<"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"sexpr-method-body", &module_info_x8rSsyntax, "sexpr-method-body"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"sexpr-prop-name", &module_info_x8rSsyntax, "sexpr-prop-name"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"t+", &module_info_gooStypes, "t+"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"<<", &module_info_gooSmath, "<<"},
  {"abs", &module_info_gooSmath, "abs"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"asin", &module_info_gooSmath, "asin"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"/", &module_info_gooSmath, "/"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"$sexpr-quasiquote-tag", &module_info_x8rSsyntax, "$sexpr-quasiquote-tag"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"$sexpr-bind-exit-tag", &module_info_x8rSsyntax, "$sexpr-bind-exit-tag"},
  {"extract-things!", &module_info_x8rSast_linearize, "extract-things!"},
  {"unconstrained-type?", &module_info_x8rSast_linearize, "unconstrained-type?"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"register-allocate!", &module_info_x8rSast_linearize, "register-allocate!"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"@+", &module_info_gooSboot, "@+"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"sexpr-function-definition-value", &module_info_x8rSsyntax, "sexpr-function-definition-value"},
  {"~", &module_info_gooSmath, "~"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"sexpr-assignment-value", &module_info_x8rSsyntax, "sexpr-assignment-value"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"flatten-seqs", &module_info_x8rSast_linearize, "flatten-seqs"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"sexpr-syntax-if-pattern", &module_info_x8rSsyntax, "sexpr-syntax-if-pattern"},
  {"=", &module_info_gooSmath, "="},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"for", &module_info_gooSmacros, "for"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"sexpr-block-body", &module_info_x8rSsyntax, "sexpr-block-body"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"closurize-main!", &module_info_x8rSast_linearize, "closurize-main!"},
  {"sexpr-prop-init", &module_info_x8rSsyntax, "sexpr-prop-init"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"export", &module_info_gooSboot, "export"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"closure-creation-free", &module_info_x8rSast_linearize, "closure-creation-free"},
  {"sexpr-def-variable", &module_info_x8rSsyntax, "sexpr-def-variable"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"sexpr-definition-value", &module_info_x8rSsyntax, "sexpr-definition-value"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"$sexpr-isa-tag", &module_info_x8rSsyntax, "$sexpr-isa-tag"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"dg", &module_info_gooSboot, "dg"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"$sexpr-locals-tag", &module_info_x8rSsyntax, "$sexpr-locals-tag"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"sexpr-text-of-quotation", &module_info_x8rSsyntax, "sexpr-text-of-quotation"},
  {"sexpr-function-body", &module_info_x8rSsyntax, "sexpr-function-body"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"sexpr-operator", &module_info_x8rSsyntax, "sexpr-operator"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"try", &module_info_gooSboot, "try"},
  {"sexpr-bind-pattern-variables", &module_info_x8rSsyntax, "sexpr-bind-pattern-variables"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"quote", &module_info_gooSboot, "quote"},
  {"%binding-value", &module_info_x8rSast_eval, "%binding-value"},
  {"sexpr-def?", &module_info_x8rSsyntax, "sexpr-def?"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"isa", &module_info_gooSboot, "isa"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"analyze-calls", &module_info_x8rSast_linearize, "analyze-calls"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"while", &module_info_gooSmacros, "while"},
  {"sexpr-sequence->begin", &module_info_x8rSsyntax, "sexpr-sequence->begin"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"&", &module_info_gooSmath, "&"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"auto-eval", &Yx8rStopYauto_eval},
  {"top-in", &Yx8rStopYtop_in},
  {"g2c-eval", &Yx8rStopYg2c_eval},
  {"bt", &Yx8rStopYbt},
  {"print-result-expression", &Yx8rStopYprint_result_expression},
  {"load", &Yx8rStopYload},
  {"prompt-for-command-expression", &Yx8rStopYprompt_for_command_expression},
  {"<keyboard-interrupt>", &Yx8rStopYLkeyboard_interruptG},
  {"str-parse-in", &Yx8rStopYstr_parse_in},
  {"for-frames", NULL},
  {"save-image", &Yx8rStopYsave_image},
  {"frame", &Yx8rStopYframe},
  {"eval-in", &Yx8rStopYeval_in},
  {"---main-0---", NULL},
  {"do-restart", &Yx8rStopYdo_restart},
  {"parse-in", &Yx8rStopYparse_in},
  {"g2c-run", &Yx8rStopYg2c_run},
  {"do-stack-frames", &Yx8rStopYdo_stack_frames},
  {"esctst", &Yx8rStopYesctst},
  {"frame-var", &Yx8rStopYframe_var},
  {"str-eval-in", &Yx8rStopYstr_eval_in},
  {"parse", &Yx8rStopYparse},
  {"read-file", &Yx8rStopYread_file},
  {"load-from", &Yx8rStopYload_from},
  {"top", &Yx8rStopYtop},
  {"ast-run", &Yx8rStopYast_run},
  {"auto-run", &Yx8rStopYauto_run},
  {"str-eval", &Yx8rStopYstr_eval},
  {"str-parse", &Yx8rStopYstr_parse},
  {"run", &Yx8rStopYrun},
  {"backtrace", &Yx8rStopYbacktrace},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"auto-eval", "auto-eval"},
  {"g2c-eval", "g2c-eval"},
  {"bt", "bt"},
  {"load", "load"},
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"do-stack-frames", "do-stack-frames"},
  {"frame", "frame"},
  {"parse-in", "parse-in"},
  {"eval", "eval"},
  {"esctst", "esctst"},
  {"read-file", "read-file"},
  {"top", "top"},
  {"backtrace", "backtrace"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rStop;
MODULE_INFO module_info_x8rStop = {
  "x8r/top",
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
extern void load_module_x8rSsyntax (void);
extern void load_module_x8rSast (void);
extern void load_module_x8rSast_linearize (void);
extern void load_module_x8rSast_eval (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_x8rStop (void);

void load_module_x8rStop (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSread();
  load_module_gooSioSwrite();
  load_module_x8rSsyntax();
  load_module_x8rSast();
  load_module_x8rSast_linearize();
  load_module_x8rSast_eval();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)Yx8rStopY___main_0___();

}

/* END OF GENERATED CODE. */
