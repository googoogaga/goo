/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/top */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
DEF(YevalStopYframe,"eval/top","frame");
EXT(YevalSsyntaxYsexpr_variable_type,"eval/syntax","sexpr-variable-type");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSsyntaxYsexpr_make_macro_function,"eval/syntax","sexpr-make-macro-function");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSsyntaxYsexpr_operator,"eval/syntax","sexpr-operator");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSsyntaxYsexpr_prop_initQ,"eval/syntax","sexpr-prop-init?");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalStopYPPbottomPPg2c_run,"eval/top","%%bottom%%g2c-run");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSsyntaxYDsexpr_macro_expand_tag,"eval/syntax","$sexpr-macro-expand-tag");
DEF(YevalStopYparse,"eval/top","parse");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalStopYDg2c_evalQ,"eval/top","$g2c-eval?");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSsyntaxYsexpr_method_signature,"eval/syntax","sexpr-method-signature");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YevalSsyntaxYsexpr_fab_setter_name,"eval/syntax","sexpr-fab-setter-name");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSsyntaxYsexpr_function_signature,"eval/syntax","sexpr-function-signature");
EXT(YevalSsyntaxYDsexpr_define_class_tag,"eval/syntax","$sexpr-define-class-tag");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSsyntaxYsexpr_make_anonymous_method,"eval/syntax","sexpr-make-anonymous-method");
EXT(YevalSsyntaxYsexpr_defQ,"eval/syntax","sexpr-def?");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSsyntaxYsexpr_unwind_protect_protected_form,"eval/syntax","sexpr-unwind-protect-protected-form");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
DEF(YevalStopYesctst,"eval/top","esctst");
DEF(YevalStopYbacktrace,"eval/top","backtrace");
DEF(YevalStopYg2c_eval,"eval/top","g2c-eval");
DEF(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalSsyntaxYsexpr_if_test,"eval/syntax","sexpr-if-test");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
DEF(YevalStopYstr_parse,"eval/top","str-parse");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(YevalSsyntaxYDsexpr_quasiquote_tag,"eval/syntax","$sexpr-quasiquote-tag");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YgooSioSreadYget_standard_read_macro,"goo/io/read","get-standard-read-macro");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSsyntaxYsexpr_variableQ,"eval/syntax","sexpr-variable?");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YPprop,"goo/boot","%prop");
DEF(YevalStopYstr_eval_in,"eval/top","str-eval-in");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSsyntaxYsexpr_definition_value,"eval/syntax","sexpr-definition-value");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSsyntaxYsexpr_loc_bound_signatures,"eval/syntax","sexpr-loc-bound-signatures");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YisaQ,"goo/boot","isa?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSsyntaxYsexpr_isa_prop_inits,"eval/syntax","sexpr-isa-prop-inits");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YLsymG,"goo/boot","<sym>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YevalSsyntaxYsexpr_syntax_if_then,"eval/syntax","sexpr-syntax-if-then");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSsyntaxYsexpr_prop_type,"eval/syntax","sexpr-prop-type");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
DEF(YevalStopYDD,"eval/top","$$");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSsyntaxYsexpr_let_Gcombination,"eval/syntax","sexpr-let->combination");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSsyntaxYDsexpr_begin_tag,"eval/syntax","$sexpr-begin-tag");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YevalSsyntaxYDsexpr_unwind_protect_tag,"eval/syntax","$sexpr-unwind-protect-tag");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YevalSsyntaxYDsexpr_define_method_tag,"eval/syntax","$sexpr-define-method-tag");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSsyntaxYsexpr_bind_pattern_variables,"eval/syntax","sexpr-bind-pattern-variables");
EXT(YevalSsyntaxYsexpr_variable_name,"eval/syntax","sexpr-variable-name");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YgooSioSreadYset_standard_read_macroX,"goo/io/read","set-standard-read-macro!");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YevalSsyntaxYsexpr_text_of_quotation,"eval/syntax","sexpr-text-of-quotation");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YevalSsyntaxYsexpr_define_class_parents,"eval/syntax","sexpr-define-class-parents");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
DEF(YevalStopYPPbottomPPast_run,"eval/top","%%bottom%%ast-run");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YevalSsyntaxYsexpr_fab_setter,"eval/syntax","sexpr-fab-setter");
EXT(YevalSsyntaxYsexpr_forward_primitiveQ,"eval/syntax","sexpr-forward-primitive?");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSsyntaxYsexpr_method_body,"eval/syntax","sexpr-method-body");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSsyntaxYsexpr_assignment_value,"eval/syntax","sexpr-assignment-value");
EXT(YevalSsyntaxYsexpr_assignment_variable,"eval/syntax","sexpr-assignment-variable");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
DEF(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSioSreadYread_delimited_list,"goo/io/read","read-delimited-list");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YevalSsyntaxYsexpr_expand_backquote,"eval/syntax","sexpr-expand-backquote");
DEF(YevalStopYprompt_for_command_expression,"eval/top","prompt-for-command-expression");
DYNDEF(YevalStopYrun,"eval/top","run");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YevalSsyntaxYsexpr_syntax_if_pattern,"eval/syntax","sexpr-syntax-if-pattern");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YevalSsyntaxYsexpr_function_definition_value,"eval/syntax","sexpr-function-definition-value");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YevalSsyntaxYsexpr_monitor_expand,"eval/syntax","sexpr-monitor-expand");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
DEF(YevalStopYD,"eval/top","$");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(Ylst,"goo/boot","lst");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSsyntaxYsexpr_make_begin,"eval/syntax","sexpr-make-begin");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSsyntaxYsexpr_isa_parent,"eval/syntax","sexpr-isa-parent");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YgooSmathYasin,"goo/math","asin");
DEF(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSsyntaxYsexpr_prop_init_var,"eval/syntax","sexpr-prop-init-var");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSsyntaxYsexpr_signature_value,"eval/syntax","sexpr-signature-value");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooStypesYas,"goo/types","as");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
DEF(YevalStopYeval_in,"eval/top","eval-in");
EXT(YevalSsyntaxYsexpr_define_classQ,"eval/syntax","sexpr-define-class?");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSsyntaxYsexpr_syntax_definition_value,"eval/syntax","sexpr-syntax-definition-value");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YevalSsyntaxYsexpr_definition_variable,"eval/syntax","sexpr-definition-variable");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
DEF(YevalStopYtop,"eval/top","top");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YevalSsyntaxYsexpr_loc_bound_names,"eval/syntax","sexpr-loc-bound-names");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSsyntaxYsexpr_block_body,"eval/syntax","sexpr-block-body");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YevalSsyntaxYsexpr_fab_getter,"eval/syntax","sexpr-fab-getter");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSsyntaxYsexpr_function_body,"eval/syntax","sexpr-function-body");
EXT(YevalSsyntaxYDsexpr_define_tag,"eval/syntax","$sexpr-define-tag");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YevalSsyntaxYsexpr_make_method,"eval/syntax","sexpr-make-method");
EXT(YevalSsyntaxYsexpr_function_definition_adjectives,"eval/syntax","sexpr-function-definition-adjectives");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
DEF(YevalStopYload,"eval/top","load");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
DEF(YevalStopYcompiled_fileQ,"eval/top","compiled-file?");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalStopYLkeyboard_interruptG,"eval/top","<keyboard-interrupt>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSsyntaxYsexpr_def_variable,"eval/syntax","sexpr-def-variable");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
DEF(YevalStopYPPtopPPtop_in,"eval/top","%%top%%top-in");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSsyntaxYsexpr_syntax_if_value,"eval/syntax","sexpr-syntax-if-value");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YevalSsyntaxYDsexpr_define_syntax_tag,"eval/syntax","$sexpr-define-syntax-tag");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSsyntaxYsexpr_sequence_Gbegin,"eval/syntax","sexpr-sequence->begin");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YevalSsyntaxYsexpr_if_else,"eval/syntax","sexpr-if-else");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSsyntaxYDsexpr_locals_tag,"eval/syntax","$sexpr-locals-tag");
EXT(YevalSsyntaxYDsexpr_let_tag,"eval/syntax","$sexpr-let-tag");
EXT(YevalSsyntaxYDsexpr_prop_tag,"eval/syntax","$sexpr-prop-tag");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YevalSsyntaxYsexpr_prop_owner,"eval/syntax","sexpr-prop-owner");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(YevalSsyntaxYsexpr_loc_raw_body,"eval/syntax","sexpr-loc-raw-body");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YevalSsyntaxYDsexpr_isa_tag,"eval/syntax","$sexpr-isa-tag");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
DEF(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSsyntaxYsexpr_unquote_splicingQ,"eval/syntax","sexpr-unquote-splicing?");
EXT(Yfun_cache,"goo/boot","fun-cache");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YevalSsyntaxYDsexpr_define_generic_tag,"eval/syntax","$sexpr-define-generic-tag");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YevalSsyntaxYDsexpr_quote_tag,"eval/syntax","$sexpr-quote-tag");
EXT(YevalSsyntaxYDsexpr_method_tag,"eval/syntax","$sexpr-method-tag");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YevalSsyntaxYsexpr_isa_init_values,"eval/syntax","sexpr-isa-init-values");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalSsyntaxYsexpr_syntax_definition_variable,"eval/syntax","sexpr-syntax-definition-variable");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSsyntaxYDsexpr_set_tag,"eval/syntax","$sexpr-set-tag");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSsyntaxYDsexpr_bind_exit_tag,"eval/syntax","$sexpr-bind-exit-tag");
EXT(YevalSsyntaxYDsexpr_define_function_tag,"eval/syntax","$sexpr-define-function-tag");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSsyntaxYDsexpr_if_tag,"eval/syntax","$sexpr-if-tag");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YevalSsyntaxYDsexpr_syntax_if_tag,"eval/syntax","$sexpr-syntax-if-tag");
EXT(YevalSsyntaxYsexpr_block_name,"eval/syntax","sexpr-block-name");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSsyntaxYsexpr_operands,"eval/syntax","sexpr-operands");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSioSreadYDchar_long_names,"goo/io/read","$char-long-names");
EXT(YevalSsyntaxYsexpr_prop_init,"eval/syntax","sexpr-prop-init");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSsyntaxYsexpr_function_definition_variable,"eval/syntax","sexpr-function-definition-variable");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYmod_,"goo/math","mod-");
DEF(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YevalSsyntaxYsexpr_def_value,"eval/syntax","sexpr-def-value");
EXT(YevalSsyntaxYDsexpr_def_tag,"eval/syntax","$sexpr-def-tag");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YevalSsyntaxYsexpr_make_application,"eval/syntax","sexpr-make-application");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YevalSsyntaxYDsexpr_iterate_tag,"eval/syntax","$sexpr-iterate-tag");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalStopYauto_run,"eval/top","auto-run");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
DEF(YevalStopYstr_eval,"eval/top","str-eval");
EXT(YevalSsyntaxYsexpr_unquoteQ,"eval/syntax","sexpr-unquote?");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
DEF(YevalStopYprint_result_expression,"eval/top","print-result-expression");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYtan,"goo/math","tan");
DEF(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSsyntaxYsexpr_if_then,"eval/syntax","sexpr-if-then");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
DEF(YevalStopYdo_restart,"eval/top","do-restart");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSsyntaxYsexpr_prop_name,"eval/syntax","sexpr-prop-name");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSsyntaxYsexpr_loc_bound_bodies,"eval/syntax","sexpr-loc-bound-bodies");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
DEF(YevalStopYstr_parse_in,"eval/top","str-parse-in");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YevalSsyntaxYsexpr_unwind_protect_cleanup_forms,"eval/syntax","sexpr-unwind-protect-cleanup-forms");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSsyntaxYsexpr_syntax_if_else,"eval/syntax","sexpr-syntax-if-else");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSsyntaxYDsexpr_monitor_tag,"eval/syntax","$sexpr-monitor-tag");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSsyntaxYsexpr_iterate_Gloc,"eval/syntax","sexpr-iterate->loc");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSsyntaxYsexpr_isa_init_props,"eval/syntax","sexpr-isa-init-props");
EXT(YgooSmathYNE,"goo/math","~=");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_149);
DEFLIT(lit_148);
DEFLIT(lit_65);
DEFLIT(lit_29);
DEFLIT(lit_52);
DEFLIT(lit_104);
DEFLIT(lit_7);
DEFLIT(lit_63);
DEFLIT(lit_67);
DEFLIT(lit_39);
DEFLIT(lit_76);
DEFLIT(lit_136);
DEFLIT(lit_10);
DEFLIT(lit_4);
DEFLIT(lit_127);
DEFLIT(lit_12);
DEFLIT(lit_111);
DEFLIT(lit_83);
DEFLIT(lit_96);
DEFLIT(lit_89);
DEFLIT(lit_31);
DEFLIT(lit_28);
DEFLIT(lit_103);
DEFLIT(lit_100);
DEFLIT(lit_19);
DEFLIT(lit_81);
DEFLIT(lit_35);
DEFLIT(lit_106);
DEFLIT(lit_16);
DEFLIT(lit_109);
DEFLIT(lit_44);
DEFLIT(lit_110);
DEFLIT(lit_91);
DEFLIT(lit_131);
DEFLIT(lit_133);
DEFLIT(lit_128);
DEFLIT(lit_71);
DEFLIT(lit_11);
DEFLIT(lit_73);
DEFLIT(lit_43);
DEFLIT(lit_27);
DEFLIT(lit_25);
DEFLIT(lit_75);
DEFLIT(lit_132);
DEFLIT(lit_86);
DEFLIT(lit_14);
DEFLIT(lit_95);
DEFLIT(lit_87);
DEFLIT(lit_135);
DEFLIT(lit_21);
DEFLIT(lit_38);
DEFLIT(lit_137);
DEFLIT(lit_59);
DEFLIT(lit_36);
DEFLIT(lit_82);
DEFLIT(lit_33);
DEFLIT(lit_62);
DEFLIT(lit_0);
DEFLIT(lit_98);
DEFLIT(lit_61);
DEFLIT(lit_78);
DEFLIT(lit_5);
DEFLIT(lit_20);
DEFLIT(lit_143);
DEFLIT(lit_80);
DEFLIT(lit_118);
DEFLIT(lit_34);
DEFLIT(lit_70);
DEFLIT(lit_146);
DEFLIT(lit_49);
DEFLIT(lit_58);
DEFLIT(lit_140);
DEFLIT(lit_138);
DEFLIT(lit_40);
DEFLIT(lit_134);
DEFLIT(lit_113);
DEFLIT(lit_24);
DEFLIT(lit_26);
DEFLIT(lit_1);
DEFLIT(lit_2);
DEFLIT(lit_53);
DEFLIT(lit_22);
DEFLIT(lit_51);
DEFLIT(lit_120);
DEFLIT(lit_126);
DEFLIT(lit_105);
DEFLIT(lit_56);
DEFLIT(lit_37);
DEFLIT(lit_150);
DEFLIT(lit_85);
DEFLIT(lit_124);
DEFLIT(lit_112);
DEFLIT(lit_15);
DEFLIT(lit_122);
DEFLIT(lit_147);
DEFLIT(lit_57);
DEFLIT(lit_129);
DEFLIT(lit_9);
DEFLIT(lit_102);
DEFLIT(lit_55);
DEFLIT(lit_77);
DEFLIT(lit_139);
DEFLIT(lit_121);
DEFLIT(lit_46);
DEFLIT(lit_47);
DEFLIT(lit_145);
DEFLIT(lit_116);
DEFLIT(lit_42);
DEFLIT(lit_17);
DEFLIT(lit_45);
DEFLIT(lit_60);
DEFLIT(lit_79);
DEFLIT(lit_69);
DEFLIT(lit_97);
DEFLIT(lit_119);
DEFLIT(lit_72);
DEFLIT(lit_66);
DEFLIT(lit_142);
DEFLIT(lit_6);
DEFLIT(lit_30);
DEFLIT(lit_74);
DEFLIT(lit_115);
DEFLIT(lit_84);
DEFLIT(lit_99);
DEFLIT(lit_130);
DEFLIT(lit_94);
DEFLIT(lit_107);
DEFLIT(lit_101);
DEFLIT(lit_48);
DEFLIT(lit_117);
DEFLIT(lit_23);
DEFLIT(lit_50);
DEFLIT(lit_13);
DEFLIT(lit_114);
DEFLIT(lit_125);
DEFLIT(lit_3);
DEFLIT(lit_93);
DEFLIT(lit_64);
DEFLIT(lit_32);
DEFLIT(lit_144);
DEFLIT(lit_88);
DEFLIT(lit_123);
DEFLIT(lit_108);
DEFLIT(lit_18);
DEFLIT(lit_8);
DEFLIT(lit_141);
DEFLIT(lit_68);
DEFLIT(lit_90);
DEFLIT(lit_41);
DEFLIT(lit_54);
DEFLIT(lit_92);

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
LOCFOR(fun_x_1486_27);
LOCFOR(fun_28);
LOCFOR(fun_29);
LOCFOR(fun_x_1490_30);
LOCFOR(fun_31);
LOCFOR(fun_32);
LOCFOR(fun_33);
LOCFOR(fun_34);
LOCFOR(fun_backtrace_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_frame_38);
LOCFOR(fun_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_frame_var_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_bt_45);
FUNFOR(Ykeyboard_interrupt);
FUNFOR(YevalStopYdo_restart);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_x_1532_52);
LOCFOR(fun_53);
LOCFOR(fun_x_1529_54);
LOCFOR(fun_55);
LOCFOR(fun_x_1526_56);
LOCFOR(fun_57);
LOCFOR(fun_x_1523_58);
LOCFOR(fun_59);
LOCFOR(fun_x_1520_60);
LOCFOR(fun_61);
LOCFOR(fun_x_1517_62);
LOCFOR(fun_63);
LOCFOR(fun_x_1514_64);
LOCFOR(fun_65);
LOCFOR(fun_x_1511_66);
LOCFOR(fun_67);
LOCFOR(fun_x_1508_68);
LOCFOR(fun_69);
LOCFOR(fun_x_1505_70);
LOCFOR(fun_71);
LOCFOR(fun_x_1502_72);
LOCFOR(fun_73);
LOCFOR(fun_x_1499_74);
LOCFOR(fun_75);
LOCFOR(fun_x_1496_76);
LOCFOR(fun_77);
LOCFOR(fun_x_1493_78);
LOCFOR(fun_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_loop_83);
LOCFOR(fun_84);
LOCFOR(fun_PPtopPPtop_in_85);
LOCFOR(fun_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_loop_89);
LOCFOR(fun_90);
LOCFOR(fun_91);
LOCFOR(fun_top_92);
LOCFOR(fun_93);
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
  P astF2856;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),form_,ct_env_,YPfalse);
  astF2856 = T1;
  T2 = CALL2(1,DYNREF(YevalStopYrun),astF2856,ct_env_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_eval_in_12) {
  P x_,ct_env_;
  P eF2858;
  P oF2857;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),x_,ct_env_,YPfalse);
  oF2857 = T1;
  T3 = CALL1(1,VARREF(YevalSastYast_evaluate),oF2857);
  eF2858 = T3;
  T2 = eF2858;
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
  T0 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_33));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_17) {
  P forms_;
  P xF2859;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(forms_, 0);
loop:
  T2 = BOXVAL(FREEREF(0));
  T1 = CALL1(1,VARREF(YgooSruntimeYread),T2);
  xF2859 = T1;
  T4 = CALL1(1,VARREF(YgooSmathYeof_objectQ),xF2859);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T5 = CALL1(1,VARREF(YevalSsyntaxYsexpr_sequence_Gbegin),T6);
    T3 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYpair),xF2859,forms_);
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
  P loopF2860;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_in_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T2 = FUNSHELL(1,fun_loop_17,2);
  loopF2860 = T2;
  FUNINIT(loopF2860, 2,FREEREF(0),loopF2860);
  T3 = CALL1(0,loopF2860,Ynil);
  T1 = T3;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_19) {
  P tmpF2861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF2861 = T1;
  if (tmpF2861 != YPfalse) {
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
  P portF2862;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(filename_, 0);
loop:
  portF2862 = YPfalse;
  portF2862 = BOXFAB(portF2862);
  T3 = FUNFAB(fun_18,2,portF2862,filename_);
  T4 = FUNFAB(fun_19,1,portF2862);
  T2 = with_cleanup(T3,T4);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_in_21) {
  P filename_,ct_env_;
  P oF2864;
  P xF2863;
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
    xF2863 = T4;
    T6 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),xF2863,ct_env_,YPfalse);
    oF2864 = T6;
    T7 = CALL2(1,DYNREF(YevalStopYrun),oF2864,ct_env_);
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
  P realfileF2865;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(modname_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSsystemYfind_goo_file_in_path),name_,VARREF(YgooSsystemYTmodule_search_pathT));
  realfileF2865 = T1;
  T2 = CALL1(1,VARREF(Ynot),realfileF2865);
  if (T2 != YPfalse) {
    T3 = CALL2(1,VARREF(Yerror),LITREF(lit_41),name_);
  } else {
  }
  T4 = CALL2(1,VARREF(YevalStopYload_file),realfileF2865,modname_);
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_prompt_for_command_expression_24) {
  P env_,level_,prompt_;
  P argsF2869;
  P arg_strF2868;
  P tmpF2867;
  P formF2866;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
  P a1,a2,a3;
LINK_STACK();
  ARG(env_, 0);
  ARG(level_, 1);
  ARG(prompt_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfind_environment_module),env_);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),T1);
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_46),T0,level_,prompt_);
  CALL1(1,VARREF(YgooSioSportYforce_out),VARREF(YgooSioSportYout));
  T3 = CALL1(1,VARREF(YgooSruntimeYread),VARREF(YgooSioSportYin));
  formF2866 = T3;
  T6 = CALL2(1,VARREF(YisaQ),formF2866,VARREF(YLlstG));
  tmpF2867 = T6;
  if (tmpF2867 != YPfalse) {
    T9 = CALL1(1,VARREF(Yhead),formF2866);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,LITREF(lit_47));
    T7 = T8;
  } else {
    T7 = YPfalse;
  }
  T5 = T7;
  if (T5 != YPfalse) {
    T11 = CALL1(1,VARREF(YgooSioSportYgets),VARREF(YgooSioSportYin));
    arg_strF2868 = T11;
    T14 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_48),arg_strF2868,LITREF(lit_49));
    T13 = CALL1(1,VARREF(YgooSioSreadYread_from_string),T14);
    argsF2869 = T13;
    T17 = CALL1(1,VARREF(YgooSmacrosY2nd),formF2866);
    T16 = CALL2(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_50),T17);
    T15 = CALL2(1,VARREF(YgooSmacrosYpair),T16,argsF2869);
    T12 = T15;
    T10 = T12;
    T4 = T10;
  } else {
    T4 = formF2866;
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
  CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_54),T0,level_,label_);
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

FUNCODEDEF(fun_x_1486_27) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_61));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_28) {
  P return_;
  P x_1485F2882;
  P x_1485F2881;
  P x_1485F2880;
  P x_1485F2879;
  P x_1485F2878;
  P x_1485F2877;
  P x_1485F2876;
  P bodyF2875;
  P argsF2874;
  P fF2873;
  P numF2872;
  P x_1485F2871;
  P x_1486F2870;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1486_27,1);
  x_1486F2870 = T1;
  FUNINIT(x_1486F2870, 1,return_);
  x_1485F2871 = FREEREF(0);
  numF2872 = YPfalse;
  numF2872 = BOXFAB(numF2872);
  fF2873 = YPfalse;
  fF2873 = BOXFAB(fF2873);
  argsF2874 = YPfalse;
  argsF2874 = BOXFAB(argsF2874);
  bodyF2875 = YPfalse;
  bodyF2875 = BOXFAB(bodyF2875);
  T11 = CALL2(1,VARREF(YisaQ),x_1485F2871,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1485F2871,LITREF(lit_61),x_1486F2870);
    x_1485F2876 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1485F2876,x_1486F2870);
    x_1485F2877 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F2877,x_1486F2870);
    BOXVAL(numF2872) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1485F2877);
    x_1485F2878 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F2878,x_1486F2870);
    BOXVAL(fF2873) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1485F2878);
    x_1485F2879 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1485F2879,x_1486F2870);
    BOXVAL(argsF2874) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1485F2879);
    x_1485F2880 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F2880,x_1486F2870);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1485F2876);
    x_1485F2881 = T26;
    BOXVAL(bodyF2875) = x_1485F2881;
    x_1485F2882 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1485F2882,x_1486F2870);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1486F2870,LITREF(lit_62),x_1485F2871);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T37 = BOXVAL(numF2872);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T38 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T35 = CALL3(1,VARREF(YgooSmacrosYcat),T36,T38,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T33 = CALL2(1,VARREF(YgooSmacrosYcat),T34,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T44 = CALL1(1,VARREF(Ylst),LITREF(lit_56));
  T48 = BOXVAL(fF2873);
  T47 = CALL1(1,VARREF(Ylst),T48);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T46 = CALL3(1,VARREF(YgooSmacrosYcat),T47,T49,Ynil);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T54 = BOXVAL(argsF2874);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T56 = CALL3(1,VARREF(YgooSmacrosYcat),T57,T58,Ynil);
  T55 = CALL1(1,VARREF(Ylst),T56);
  T51 = CALL4(1,VARREF(YgooSmacrosYcat),T52,T53,T55,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T59 = BOXVAL(bodyF2875);
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T64 = BOXVAL(numF2872);
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

FUNCODEDEF(fun_x_1490_30) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_69));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_31) {
  P return_;
  P x_1489F2895;
  P x_1489F2894;
  P x_1489F2893;
  P x_1489F2892;
  P x_1489F2891;
  P x_1489F2890;
  P x_1489F2889;
  P bodyF2888;
  P argsF2887;
  P fF2886;
  P numF2885;
  P x_1489F2884;
  P x_1490F2883;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1490_30,1);
  x_1490F2883 = T1;
  FUNINIT(x_1490F2883, 1,return_);
  x_1489F2884 = FREEREF(0);
  numF2885 = YPfalse;
  numF2885 = BOXFAB(numF2885);
  fF2886 = YPfalse;
  fF2886 = BOXFAB(fF2886);
  argsF2887 = YPfalse;
  argsF2887 = BOXFAB(argsF2887);
  bodyF2888 = YPfalse;
  bodyF2888 = BOXFAB(bodyF2888);
  T11 = CALL2(1,VARREF(YisaQ),x_1489F2884,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1489F2884,LITREF(lit_69),x_1490F2883);
    x_1489F2889 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1489F2889,x_1490F2883);
    x_1489F2890 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1489F2890,x_1490F2883);
    BOXVAL(numF2885) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1489F2890);
    x_1489F2891 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1489F2891,x_1490F2883);
    BOXVAL(fF2886) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1489F2891);
    x_1489F2892 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1489F2892,x_1490F2883);
    BOXVAL(argsF2887) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1489F2892);
    x_1489F2893 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1489F2893,x_1490F2883);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1489F2889);
    x_1489F2894 = T26;
    BOXVAL(bodyF2888) = x_1489F2894;
    x_1489F2895 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1489F2895,x_1490F2883);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1490F2883,LITREF(lit_62),x_1489F2884);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_70));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T37 = CALL1(1,VARREF(Ylst),YPfalse);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,Ynil);
  T33 = CALL1(1,VARREF(Ylst),T34);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T42 = CALL1(1,VARREF(Ylst),YPint((P)0));
  T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T50 = BOXVAL(fF2886);
  T49 = CALL1(1,VARREF(Ylst),T50);
  T52 = BOXVAL(argsF2887);
  T51 = CALL1(1,VARREF(Ylst),T52);
  T47 = CALL4(1,VARREF(YgooSmacrosYcat),T48,T49,T51,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T55 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T59 = CALL1(1,VARREF(Ylst),LITREF(lit_76));
  T62 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T64 = BOXVAL(fF2886);
  T63 = CALL1(1,VARREF(Ylst),T64);
  T61 = CALL3(1,VARREF(YgooSmacrosYcat),T62,T63,Ynil);
  T60 = CALL1(1,VARREF(Ylst),T61);
  T67 = CALL1(1,VARREF(Ylst),LITREF(lit_78));
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T71 = CALL1(1,VARREF(Ylst),LITREF(lit_77));
  T73 = BOXVAL(fF2886);
  T72 = CALL1(1,VARREF(Ylst),T73);
  T70 = CALL3(1,VARREF(YgooSmacrosYcat),T71,T72,Ynil);
  T69 = CALL1(1,VARREF(Ylst),T70);
  T66 = CALL4(1,VARREF(YgooSmacrosYcat),T67,T68,T69,Ynil);
  T65 = CALL1(1,VARREF(Ylst),T66);
  T74 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T58 = CALL5(1,VARREF(YgooSmacrosYcat),T59,T60,T65,T74,Ynil);
  T57 = CALL1(1,VARREF(Ylst),T58);
  T54 = CALL4(1,VARREF(YgooSmacrosYcat),T55,T56,T57,Ynil);
  T53 = CALL1(1,VARREF(Ylst),T54);
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T79 = BOXVAL(numF2885);
  T78 = CALL1(1,VARREF(Ylst),T79);
  T82 = CALL1(1,VARREF(Ylst),LITREF(lit_81));
  T83 = CALL1(1,VARREF(Ylst),LITREF(lit_74));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T81 = CALL4(1,VARREF(YgooSmacrosYcat),T82,T83,T84,Ynil);
  T80 = CALL1(1,VARREF(Ylst),T81);
  T76 = CALL4(1,VARREF(YgooSmacrosYcat),T77,T78,T80,Ynil);
  T75 = CALL1(1,VARREF(Ylst),T76);
  T87 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T88 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T91 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T94 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T95 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T96 = CALL1(1,VARREF(Ylst),LITREF(lit_84));
  T93 = CALL4(1,VARREF(YgooSmacrosYcat),T94,T95,T96,Ynil);
  T92 = CALL1(1,VARREF(Ylst),T93);
  T99 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T100 = CALL1(1,VARREF(Ylst),YPfalse);
  T98 = CALL3(1,VARREF(YgooSmacrosYcat),T99,T100,Ynil);
  T97 = CALL1(1,VARREF(Ylst),T98);
  T90 = CALL4(1,VARREF(YgooSmacrosYcat),T91,T92,T97,Ynil);
  T89 = CALL1(1,VARREF(Ylst),T90);
  T101 = BOXVAL(bodyF2888);
  T86 = CALL5(1,VARREF(YgooSmacrosYcat),T87,T88,T89,T101,Ynil);
  T85 = CALL1(1,VARREF(Ylst),T86);
  T104 = CALL1(1,VARREF(Ylst),LITREF(lit_82));
  T107 = CALL1(1,VARREF(Ylst),LITREF(lit_83));
  T108 = CALL1(1,VARREF(Ylst),LITREF(lit_75));
  T109 = CALL1(1,VARREF(Ylst),LITREF(lit_85));
  T106 = CALL4(1,VARREF(YgooSmacrosYcat),T107,T108,T109,Ynil);
  T105 = CALL1(1,VARREF(Ylst),T106);
  T112 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T113 = CALL1(1,VARREF(Ylst),LITREF(lit_73));
  T114 = CALL1(1,VARREF(Ylst),LITREF(lit_87));
  T111 = CALL4(1,VARREF(YgooSmacrosYcat),T112,T113,T114,Ynil);
  T110 = CALL1(1,VARREF(Ylst),T111);
  T117 = CALL1(1,VARREF(Ylst),LITREF(lit_86));
  T118 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T119 = CALL1(1,VARREF(Ylst),YPtrue);
  T116 = CALL4(1,VARREF(YgooSmacrosYcat),T117,T118,T119,Ynil);
  T115 = CALL1(1,VARREF(Ylst),T116);
  T103 = CALL5(1,VARREF(YgooSmacrosYcat),T104,T105,T110,T115,Ynil);
  T102 = CALL1(1,VARREF(Ylst),T103);
  T44 = CALLN(1,VARREF(YgooSmacrosYcat),7,T45,T46,T53,T75,T85,T102,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T30 = CALLN(1,VARREF(YgooSmacrosYcat),6,T31,T32,T33,T38,T43,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_32) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_31,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P f_,Uargs_;
  P numF2898;
  P UnameF2897;
  P argsF2896;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2896 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_80);
  }
  UnameF2897 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2898 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2897,LITREF(lit_84));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_90),numF2898,f_,argsF2896);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2897,LITREF(lit_85));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2898;
    T16 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T19 = BOXVAL(FREEREF(0));
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  T17 = BOXVAL(FREEREF(0)) = T18;
  T7 = T17;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_34) {
  P break_;
  P UnumF2901;
  P Utop_numF2900;
  P Useen_topF2899;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2899 = YPfalse;
  Useen_topF2899 = BOXFAB(Useen_topF2899);
  Utop_numF2900 = YPint((P)0);
  Utop_numF2900 = BOXFAB(Utop_numF2900);
  UnumF2901 = YPint((P)0);
  UnumF2901 = BOXFAB(UnumF2901);
  T7 = FUNFAB(fun_33,4,UnumF2901,Utop_numF2900,Useen_topF2899,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_backtrace_35) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_34;
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P f_,Uargs_;
  P numF2904;
  P UnameF2903;
  P argsF2902;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2902 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_80);
  }
  UnameF2903 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2904 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2903,LITREF(lit_84));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2904);
    if (T15 != YPfalse) {
      T16 = CALL5(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_93),numF2904,f_,argsF2902);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T17 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2903,LITREF(lit_85));
  if (T17 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2904;
    T18 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T21 = BOXVAL(FREEREF(0));
  T20 = CALL2(1,VARREF(YgooSmathYA),T21,YPint((P)1));
  T19 = BOXVAL(FREEREF(0)) = T20;
  T7 = T19;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_37) {
  P break_;
  P UnumF2907;
  P Utop_numF2906;
  P Useen_topF2905;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2905 = YPfalse;
  Useen_topF2905 = BOXFAB(Useen_topF2905);
  Utop_numF2906 = YPint((P)0);
  Utop_numF2906 = BOXFAB(Utop_numF2906);
  UnumF2907 = YPint((P)0);
  UnumF2907 = BOXFAB(UnumF2907);
  T7 = FUNFAB(fun_36,5,UnumF2907,Utop_numF2906,Useen_topF2905,break_,FREEREF(0));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_frame_38) {
  P n_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T1 = FUNFAB(fun_37,1,n_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P f_,Uargs_;
  P numF2910;
  P UnameF2909;
  P argsF2908;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2908 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_80);
  }
  UnameF2909 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2910 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2909,LITREF(lit_84));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T15 = CALL2(1,VARREF(YgooSmacrosYEE),FREEREF(4),numF2910);
    if (T15 != YPfalse) {
      T19 = CALL1(1,VARREF(Yfun_names),f_);
      T18 = CALL2(1,VARREF(YgooScolsSseqYpos),T19,FREEREF(5));
      T17 = CALL2(1,VARREF(YgooSmacrosYelt),argsF2908,T18);
      T16 = CALL1(1,FREEREF(6),T17);
      T14 = T16;
    } else {
      T14 = YPfalse;
    }
  } else {
  }
  T20 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2909,LITREF(lit_85));
  if (T20 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2910;
    T21 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T24 = BOXVAL(FREEREF(0));
  T23 = CALL2(1,VARREF(YgooSmathYA),T24,YPint((P)1));
  T22 = BOXVAL(FREEREF(0)) = T23;
  T7 = T22;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P break_;
  P UnumF2913;
  P Utop_numF2912;
  P Useen_topF2911;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2911 = YPfalse;
  Useen_topF2911 = BOXFAB(Useen_topF2911);
  Utop_numF2912 = YPint((P)0);
  Utop_numF2912 = BOXFAB(Utop_numF2912);
  UnumF2913 = YPint((P)0);
  UnumF2913 = BOXFAB(UnumF2913);
  T7 = FUNFAB(fun_39,7,UnumF2913,Utop_numF2912,Useen_topF2911,break_,FREEREF(0),FREEREF(1),FREEREF(2));
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_41) {
  P ret_;
  P T0;
  P a1;
LINK_STACK();
  ARG(ret_, 0);
loop:
  T0 = FUNFAB(fun_40,3,FREEREF(0),FREEREF(1),ret_);
  with_exit(T0);
UNLINK_STACK();
  QRET(VARREF(Ynul));
}

FUNCODEDEF(fun_frame_var_42) {
  P n_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(n_, 0);
  ARG(name_, 1);
loop:
  T1 = FUNFAB(fun_41,2,n_,name_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P f_,Uargs_;
  P numF2916;
  P UnameF2915;
  P argsF2914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(f_, 0);
  ARG(Uargs_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooScolsSseqYrev),Uargs_);
  argsF2914 = T1;
  T4 = CALL1(1,VARREF(Yfun_name),f_);
  if (T4 != YPfalse) {
    T6 = CALL1(1,VARREF(Yfun_name),f_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T3 = T5;
  } else {
    T3 = LITREF(lit_80);
  }
  UnameF2915 = T3;
  T9 = BOXVAL(FREEREF(0));
  T10 = BOXVAL(FREEREF(1));
  T8 = CALL2(1,VARREF(YgooSmathY_),T9,T10);
  numF2916 = T8;
  T11 = BOXVAL(FREEREF(2));
  if (T11 != YPfalse) {
    T12 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2915,LITREF(lit_84));
    if (T12 != YPfalse) {
      T13 = CALL1(1,FREEREF(3),YPfalse);
    } else {
    }
    T14 = CALL4(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_97),numF2916,f_);
  } else {
  }
  T15 = CALL2(1,VARREF(YgooScolsSseqYprefixQ),UnameF2915,LITREF(lit_85));
  if (T15 != YPfalse) {
    BOXVAL(FREEREF(1)) = numF2916;
    T16 = BOXVAL(FREEREF(2)) = YPtrue;
  } else {
  }
  T19 = BOXVAL(FREEREF(0));
  T18 = CALL2(1,VARREF(YgooSmathYA),T19,YPint((P)1));
  T17 = BOXVAL(FREEREF(0)) = T18;
  T7 = T17;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P break_;
  P UnumF2919;
  P Utop_numF2918;
  P Useen_topF2917;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(break_, 0);
loop:
  Useen_topF2917 = YPfalse;
  Useen_topF2917 = BOXFAB(Useen_topF2917);
  Utop_numF2918 = YPint((P)0);
  Utop_numF2918 = BOXFAB(Utop_numF2918);
  UnumF2919 = YPint((P)0);
  UnumF2919 = BOXFAB(UnumF2919);
  T7 = FUNFAB(fun_43,4,UnumF2919,Utop_numF2918,Useen_topF2917,break_);
  T6 = CALL1(1,VARREF(YevalStopYdo_stack_frames),T7);
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bt_45) {
  P T0,T1;
LINK_STACK();
loop:
  T1 = fun_44;
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
  P tmpF2920;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1,a2;
LINK_STACK();
  ARG(restarts_, 0);
  ARG(n_, 1);
loop:
  T0 = CALL1(1,VARREF(Ynot),restarts_);
  if (T0 != YPfalse) {
    T1 = CALL1(1,VARREF(Yerror),LITREF(lit_102));
  } else {
  }
  T4 = CALL2(1,VARREF(YgooSmagYG),n_,YPint((P)0));
  tmpF2920 = T4;
  if (tmpF2920 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooStypesYlen),restarts_);
    T6 = CALL2(1,VARREF(YgooSmagYLE),n_,T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T8 = CALL2(1,VARREF(Yerror),LITREF(lit_103),n_);
  } else {
  }
  T11 = CALL2(1,VARREF(YgooSmathY_),n_,YPint((P)1));
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),restarts_,T11);
  T9 = CALL3(1,VARREF(YgooSruntimeYinvoke_handler_interactively),T10,VARREF(YgooSioSportYin),VARREF(YgooSioSportYout));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_48) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_49) {
  P c_,r_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(c_, 0);
  ARG(r_, 1);
loop:
  T0 = CALL2(1,VARREF(YisaQ),c_,VARREF(YevalStopYLkeyboard_interruptG));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_112));
  } else {
    T3 = CALL1(1,VARREF(YgooSruntimeYdescribe_condition),c_);
    T2 = CALL3(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_113),T3);
  }
  T4 = CALL2(1,VARREF(YgooSmathYA),FREEREF(0),YPint((P)1));
  T5 = BOXVAL(FREEREF(3));
  CALL5(1,VARREF(YevalStopYPPtopPPtop_in),T4,FREEREF(1),FREEREF(2),YPtrue,T5);
  T6 = CALL1(1,FREEREF(4),YPfalse);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_50) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_51) {
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

FUNCODEDEF(fun_x_1532_52) {
  P msg_,args_;
  P x_1536F2925;
  P x_1535F2924;
  P x_1534F2923;
  P x_1533F2922;
  P resF2921;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T3 = BOXVAL(FREEREF(1));
  T2 = CALL2(1,VARREF(YevalStopYauto_eval),FREEREF(0),T3);
  resF2921 = T2;
  resF2921 = BOXFAB(resF2921);
  T5 = BOXVAL(FREEREF(1));
  T6 = BOXVAL(resF2921);
  CALL4(1,VARREF(YevalStopYprint_result_expression),T5,FREEREF(2),LITREF(lit_131),T6);
  x_1533F2922 = VARREF(YevalStopYDDD);
  x_1534F2923 = VARREF(YevalStopYDD);
  x_1535F2924 = VARREF(YevalStopYD);
  T11 = BOXVAL(resF2921);
  x_1536F2925 = T11;
  VARSET(YevalStopYDDD,x_1534F2923);
  VARSET(YevalStopYDD,x_1535F2924);
  VARSET(YevalStopYD,x_1536F2925);
  T12 = BOXVAL(resF2921) = x_1533F2922;
  T10 = T12;
  T9 = T10;
  T8 = T9;
  T7 = T8;
  T1 = T7;
  T0 = CALL1(1,FREEREF(3),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_53) {
  P return_;
  P x_1531F2932;
  P x_1531F2931;
  P x_1531F2930;
  P nameF2929;
  P nF2928;
  P x_1531F2927;
  P x_1532F2926;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1532_52,4);
  x_1532F2926 = T1;
  FUNINIT(x_1532F2926, 4,FREEREF(0),FREEREF(1),FREEREF(2),return_);
  x_1531F2927 = FREEREF(3);
  nF2928 = YPfalse;
  nF2928 = BOXFAB(nF2928);
  nameF2929 = YPfalse;
  nameF2929 = BOXFAB(nameF2929);
  T7 = CALL2(1,VARREF(YisaQ),x_1531F2927,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1531F2927,LITREF(lit_132),x_1532F2926);
    x_1531F2930 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F2930,x_1532F2926);
    BOXVAL(nF2928) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1531F2930);
    x_1531F2931 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1531F2931,x_1532F2926);
    BOXVAL(nameF2929) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1531F2931);
    x_1531F2932 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1531F2932,x_1532F2926);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1532F2926,LITREF(lit_62),x_1531F2927);
  }
  T19 = BOXVAL(FREEREF(1));
  T21 = BOXVAL(nF2928);
  T22 = BOXVAL(nameF2929);
  T20 = CALL2(1,VARREF(YevalStopYframe_var),T21,T22);
  T18 = CALL4(1,VARREF(YevalStopYprint_result_expression),T19,FREEREF(2),LITREF(lit_133),T20);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1529_54) {
  P msg_,args_;
  P x_1530F2933;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1530F2933 = FREEREF(0);
  T3 = FUNFAB(fun_53,4,FREEREF(1),FREEREF(2),FREEREF(3),x_1530F2933);
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_55) {
  P return_;
  P x_1528F2938;
  P x_1528F2937;
  P nF2936;
  P x_1528F2935;
  P x_1529F2934;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1529_54,5);
  x_1529F2934 = T1;
  FUNINIT(x_1529F2934, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1528F2935 = FREEREF(0);
  nF2936 = YPfalse;
  nF2936 = BOXFAB(nF2936);
  T5 = CALL2(1,VARREF(YisaQ),x_1528F2935,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1528F2935,LITREF(lit_134),x_1529F2934);
    x_1528F2937 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1528F2937,x_1529F2934);
    BOXVAL(nF2936) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1528F2937);
    x_1528F2938 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1528F2938,x_1529F2934);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1529F2934,LITREF(lit_62),x_1528F2935);
  }
  T14 = BOXVAL(nF2936);
  T13 = CALL1(1,VARREF(YevalStopYframe),T14);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1526_56) {
  P msg_,args_;
  P x_1527F2939;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1527F2939 = FREEREF(0);
  T3 = FUNFAB(fun_55,4,x_1527F2939,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_57) {
  P return_;
  P x_1525F2942;
  P x_1525F2941;
  P x_1526F2940;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1526_56,5);
  x_1526F2940 = T1;
  FUNINIT(x_1526F2940, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1525F2941 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1525F2941,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1525F2941,LITREF(lit_135),x_1526F2940);
    x_1525F2942 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1525F2942,x_1526F2940);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1526F2940,LITREF(lit_62),x_1525F2941);
  }
  T8 = CALL0(1,VARREF(YevalStopYbacktrace));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1523_58) {
  P msg_,args_;
  P x_1524F2943;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1524F2943 = FREEREF(0);
  T3 = FUNFAB(fun_57,4,x_1524F2943,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P x_1522F2946;
  P x_1522F2945;
  P x_1523F2944;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1523_58,5);
  x_1523F2944 = T1;
  FUNINIT(x_1523F2944, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1522F2945 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1522F2945,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1522F2945,LITREF(lit_136),x_1523F2944);
    x_1522F2946 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1522F2946,x_1523F2944);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1523F2944,LITREF(lit_62),x_1522F2945);
  }
  T8 = CALL0(1,VARREF(YevalStopYbt));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1520_60) {
  P msg_,args_;
  P x_1521F2947;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1521F2947 = FREEREF(0);
  T3 = FUNFAB(fun_59,4,x_1521F2947,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P return_;
  P x_1519F2950;
  P x_1519F2949;
  P x_1520F2948;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1520_60,5);
  x_1520F2948 = T1;
  FUNINIT(x_1520F2948, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1519F2949 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1519F2949,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1519F2949,LITREF(lit_137),x_1520F2948);
    x_1519F2950 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1519F2950,x_1520F2948);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1520F2948,LITREF(lit_62),x_1519F2949);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = DYNSET(YevalStopYrun,VARREF(YevalStopYauto_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1517_62) {
  P msg_,args_;
  P x_1518F2951;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1518F2951 = FREEREF(0);
  T3 = FUNFAB(fun_61,4,x_1518F2951,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_63) {
  P return_;
  P x_1516F2954;
  P x_1516F2953;
  P x_1517F2952;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1517_62,5);
  x_1517F2952 = T1;
  FUNINIT(x_1517F2952, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1516F2953 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1516F2953,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1516F2953,LITREF(lit_138),x_1517F2952);
    x_1516F2954 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1516F2954,x_1517F2952);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1517F2952,LITREF(lit_62),x_1516F2953);
  }
  T8 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPast_run));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1514_64) {
  P msg_,args_;
  P x_1515F2955;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1515F2955 = FREEREF(0);
  T3 = FUNFAB(fun_63,4,x_1515F2955,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_65) {
  P return_;
  P x_1513F2958;
  P x_1513F2957;
  P x_1514F2956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1514_64,5);
  x_1514F2956 = T1;
  FUNINIT(x_1514F2956, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1513F2957 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1513F2957,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1513F2957,LITREF(lit_139),x_1514F2956);
    x_1513F2958 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1513F2958,x_1514F2956);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1514F2956,LITREF(lit_62),x_1513F2957);
  }
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T9 = DYNSET(YevalStopYrun,VARREF(YevalStopYPPbottomPPg2c_run));
    T8 = T9;
  } else {
    T8 = YPfalse;
  }
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1511_66) {
  P msg_,args_;
  P x_1512F2959;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1512F2959 = FREEREF(0);
  T3 = FUNFAB(fun_65,4,x_1512F2959,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P return_;
  P new_envF2965;
  P x_1510F2964;
  P x_1510F2963;
  P mF2962;
  P x_1510F2961;
  P x_1511F2960;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1511_66,5);
  x_1511F2960 = T1;
  FUNINIT(x_1511F2960, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1510F2961 = FREEREF(0);
  mF2962 = YPfalse;
  mF2962 = BOXFAB(mF2962);
  T5 = CALL2(1,VARREF(YisaQ),x_1510F2961,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1510F2961,LITREF(lit_140),x_1511F2960);
    x_1510F2963 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1510F2963,x_1511F2960);
    BOXVAL(mF2962) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1510F2963);
    x_1510F2964 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1510F2964,x_1511F2960);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1511F2960,LITREF(lit_62),x_1510F2961);
  }
  T15 = BOXVAL(mF2962);
  T14 = CALL1(1,VARREF(YevalSastYruntime_environment),T15);
  new_envF2965 = T14;
  T16 = BOXVAL(FREEREF(2)) = new_envF2965;
  T13 = T16;
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1508_68) {
  P msg_,args_;
  P x_1509F2966;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1509F2966 = FREEREF(0);
  T3 = FUNFAB(fun_67,4,x_1509F2966,FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(4),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P return_;
  P x_1507F2971;
  P x_1507F2970;
  P nF2969;
  P x_1507F2968;
  P x_1508F2967;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1508_68,5);
  x_1508F2967 = T1;
  FUNINIT(x_1508F2967, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),return_);
  x_1507F2968 = FREEREF(0);
  nF2969 = YPfalse;
  nF2969 = BOXFAB(nF2969);
  T5 = CALL2(1,VARREF(YisaQ),x_1507F2968,VARREF(YLlstG));
  if (T5 != YPfalse) {
    T7 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1507F2968,LITREF(lit_141),x_1508F2967);
    x_1507F2970 = T7;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1507F2970,x_1508F2967);
    BOXVAL(nF2969) = T9;
    T10 = CALL1(1,VARREF(Ytail),x_1507F2970);
    x_1507F2971 = T10;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1507F2971,x_1508F2967);
    T8 = T11;
    T6 = T8;
  } else {
    T12 = CALL2(1,x_1508F2967,LITREF(lit_62),x_1507F2968);
  }
  T14 = BOXVAL(FREEREF(4));
  T15 = BOXVAL(nF2969);
  T13 = CALL2(1,VARREF(YevalStopYdo_restart),T14,T15);
  T3 = T13;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1505_70) {
  P msg_,args_;
  P x_1506F2972;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1506F2972 = FREEREF(0);
  T3 = FUNFAB(fun_69,5,x_1506F2972,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_71) {
  P return_;
  P x_1504F2975;
  P x_1504F2974;
  P x_1505F2973;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1505_70,6);
  x_1505F2973 = T1;
  FUNINIT(x_1505F2973, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1504F2974 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1504F2974,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1504F2974,LITREF(lit_142),x_1505F2973);
    x_1504F2975 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1504F2975,x_1505F2973);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1505F2973,LITREF(lit_62),x_1504F2974);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1502_72) {
  P msg_,args_;
  P x_1503F2976;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1503F2976 = FREEREF(0);
  T3 = FUNFAB(fun_71,5,x_1503F2976,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P return_;
  P x_1501F2979;
  P x_1501F2978;
  P x_1502F2977;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1502_72,6);
  x_1502F2977 = T1;
  FUNINIT(x_1502F2977, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1501F2978 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1501F2978,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1501F2978,LITREF(lit_143),x_1502F2977);
    x_1501F2979 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1501F2979,x_1502F2977);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1502F2977,LITREF(lit_62),x_1501F2978);
  }
  T8 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLconditionG),VARREF(YgooSioSportYout));
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1499_74) {
  P msg_,args_;
  P x_1500F2980;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1500F2980 = FREEREF(0);
  T3 = FUNFAB(fun_73,5,x_1500F2980,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(5),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_75) {
  P return_;
  P x_1498F2983;
  P x_1498F2982;
  P x_1499F2981;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1499_74,6);
  x_1499F2981 = T1;
  FUNINIT(x_1499F2981, 6,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),return_);
  x_1498F2982 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1498F2982,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1498F2982,LITREF(lit_144),x_1499F2981);
    x_1498F2983 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1498F2983,x_1499F2981);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1499F2981,LITREF(lit_62),x_1498F2982);
  }
  T8 = CALL1(1,FREEREF(5),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1496_76) {
  P msg_,args_;
  P x_1497F2984;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1497F2984 = FREEREF(0);
  T3 = FUNFAB(fun_75,6,x_1497F2984,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(6),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_77) {
  P return_;
  P x_1495F2987;
  P x_1495F2986;
  P x_1496F2985;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1496_76,7);
  x_1496F2985 = T1;
  FUNINIT(x_1496F2985, 7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),return_);
  x_1495F2986 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1495F2986,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1495F2986,LITREF(lit_145),x_1496F2985);
    x_1495F2987 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1495F2987,x_1496F2985);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1496F2985,LITREF(lit_62),x_1495F2986);
  }
  T8 = CALL1(1,FREEREF(6),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1493_78) {
  P msg_,args_;
  P x_1494F2988;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  x_1494F2988 = FREEREF(0);
  T3 = FUNFAB(fun_77,7,x_1494F2988,FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  T2 = with_exit(T3);
  T1 = T2;
  T0 = CALL1(1,FREEREF(7),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_79) {
  P return_;
  P x_1492F2991;
  P x_1492F2990;
  P x_1493F2989;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1493_78,8);
  x_1493F2989 = T1;
  FUNINIT(x_1493F2989, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6),return_);
  x_1492F2990 = FREEREF(0);
  T3 = CALL2(1,VARREF(YisaQ),x_1492F2990,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T5 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1492F2990,LITREF(lit_146),x_1493F2989);
    x_1492F2991 = T5;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1492F2991,x_1493F2989);
    T4 = T6;
  } else {
    T7 = CALL2(1,x_1493F2989,LITREF(lit_62),x_1492F2990);
  }
  T8 = CALL1(1,FREEREF(7),YPfalse);
  T2 = T8;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P x_1491F2993;
  P formF2992;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
loop:
  CALL1(1,VARREF(YgooSioSportYnewline),VARREF(YgooSioSportYout));
  T0 = BOXVAL(FREEREF(0));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSruntimeYmsg),VARREF(YgooSioSportYout),LITREF(lit_115));
    T1 = CALL2(1,VARREF(YgooSruntimeYlist_handlers),VARREF(YgooSruntimeYLrestartG),VARREF(YgooSioSportYout));
    BOXVAL(FREEREF(1)) = T1;
    T2 = BOXVAL(FREEREF(0)) = YPfalse;
  } else {
  }
  T5 = BOXVAL(FREEREF(2));
  T4 = CALL3(1,VARREF(YevalStopYprompt_for_command_expression),T5,FREEREF(3),LITREF(lit_116));
  formF2992 = T4;
  T8 = CALL0(1,VARREF(YgooSmathYeof_object));
  T7 = CALL2(1,VARREF(YgooSmathYE),formF2992,T8);
  if (T7 != YPfalse) {
    T9 = CALL1(1,FREEREF(4),YPfalse);
    T6 = T9;
  } else {
    x_1491F2993 = formF2992;
    T12 = FUNFAB(fun_79,8,x_1491F2993,formF2992,FREEREF(2),FREEREF(3),FREEREF(1),FREEREF(5),FREEREF(6),FREEREF(4));
    T11 = with_exit(T12);
    T10 = T11;
    T6 = T10;
  }
  T3 = T6;
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_81) {
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
loop:
  T2 = CALL1(1,VARREF(Ylst),FREEREF(0));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_114),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_50;
  T4 = FUNFAB(fun_51,1,FREEREF(1));
  T5 = FUNFAB(fun_80,7,FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(0),FREEREF(5),FREEREF(6),FREEREF(7));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_82) {
  P continue_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(continue_, 0);
loop:
  T1 = fun_48;
  T2 = FUNFAB(fun_49,5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),continue_);
  T3 = FUNFAB(fun_81,8,FREEREF(0),continue_,FREEREF(4),FREEREF(5),FREEREF(3),FREEREF(2),FREEREF(1),FREEREF(6));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLconditionG),VARREF(YgooSruntimeYDdefault_handler_info),T1,T2,T3);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_83) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_82,7,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),FREEREF(6));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_84) {
  P blow_;
  P loopF2994;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(blow_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_83,8);
  loopF2994 = T1;
  FUNINIT(loopF2994, 8,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),FREEREF(4),FREEREF(5),blow_,loopF2994);
  T2 = CALL0(0,loopF2994);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_PPtopPPtop_in_85) {
  P level_,top_,quit_,show_restartsQ_,ct_env_;
  P restartsF2995;
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
  restartsF2995 = YPfalse;
  restartsF2995 = BOXFAB(restartsF2995);
  T5 = FUNFAB(fun_84,6,level_,top_,quit_,ct_env_,show_restartsQ_,restartsF2995);
  T4 = with_exit(T5);
  T2 = T4;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_86) {
LINK_STACK();
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_87) {
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

FUNCODEDEF(fun_88) {
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

FUNCODEDEF(fun_loop_89) {
  P T0,T1;
LINK_STACK();
loop:
  T0 = FUNFAB(fun_88,2,FREEREF(0),FREEREF(1));
  with_exit(T0);
  goto loop;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_90) {
  P loopF2996;
  P T0,T1,T2;
LINK_STACK();
loop:
  T1 = FUNSHELL(1,fun_loop_89,3);
  loopF2996 = T1;
  FUNINIT(loopF2996, 3,FREEREF(0),FREEREF(1),loopF2996);
  T2 = CALL0(0,loopF2996);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_91) {
  P quit_;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(quit_, 0);
loop:
  T2 = CALL0(1,VARREF(Ylst));
  T1 = CALL5(1,VARREF(Ynew),VARREF(YLsimple_handler_infoG),VARREF(Yhandler_info_message),LITREF(lit_147),VARREF(Yhandler_info_arguments),T2);
  T3 = fun_86;
  T4 = FUNFAB(fun_87,1,quit_);
  T5 = FUNFAB(fun_90,2,quit_,FREEREF(0));
  T0 = CALLN(1,YPwith_monitor,5,VARREF(YgooSruntimeYLrestartG),T1,T3,T4,T5);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_top_92) {
  P modname_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T1 = FUNFAB(fun_91,1,modname_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_93) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalStopYtop),LITREF(lit_150));
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
  T1 = fun_93;
  T0 = CALL2(1,VARREF(Yunexec),image_name_,T1);
UNLINK_STACK();
  QRET(T0);
}

P YevalStopY___main_0___() {
  P tmpF2999;
  P tmpF2998;
  P modeF2997;
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
  P T192,T193,T194,T195,T196,T197,T198,T199,T200,T201,T202,T203,T204,T205,T206;
DEFCREGS();
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
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
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
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
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
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
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
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
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
  lit_22 = YPsb((P)"GOO_EVAL_MODE");
  lit_23 = YPsb((P)"ast");
  lit_24 = YPsb((P)"g2c");
  lit_25 = YPsb((P)"linux");
  T36 = XCALL1(1,VARREF(YgooSsystemYos_val),LITREF(lit_22));
  modeF2997 = T36;
  T39 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF2997,LITREF(lit_23));
  T38 = XCALL1(1,VARREF(Ynot),T39);
  tmpF2998 = T38;
  if (tmpF2998 != YPfalse) {
    T42 = XCALL2(1,VARREF(YgooScolsStabYcase_insensitive_string_equal),modeF2997,LITREF(lit_24));
    tmpF2999 = T42;
    if (tmpF2999 != YPfalse) {
      T43 = tmpF2999;
    } else {
      T45 = XCALL0(1,VARREF(YgooSsystemYos_name));
      T44 = XCALL2(1,VARREF(YgooSmathYE),T45,LITREF(lit_25));
      T43 = T44;
    }
    T41 = T43;
    T40 = T41;
  } else {
    T40 = YPfalse;
  }
  T37 = T40;
  T35 = T37;
  VARSET(YevalStopYDg2c_evalQ,T35);
  if (VARREF(YevalStopYDg2c_evalQ) != YPfalse) {
    T46 = VARREF(YevalStopYauto_run);
  } else {
    T46 = VARREF(YevalStopYPPbottomPPast_run);
  }
  DYNDEFSET(YevalStopYrun,T46);
  lit_26 = YPPsym((P)"eval-in");
  lit_27 = YPPsym((P)"x");
  T47 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_8)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_in_12 = YPmet(FUNCODEREF(fun_eval_in_12),LITREF(lit_26),T47,ENVNUL,PNUL,YPfalse);
  T50 = BOUNDP(YevalStopYeval_in);
  if (T50 != YPfalse) {
    T49 = VARREF(YevalStopYeval_in);
  } else {
    T49 = YPfalse;
  }
  T51 = fun_eval_in_12;
  T48 = XCALL2(1,VARREF(YPdefine_method),T49,T51);
  VARSET(YevalStopYeval_in,T48);
  lit_28 = YPPsym((P)"eval");
  T52 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_eval_13 = YPmet(FUNCODEREF(fun_eval_13),LITREF(lit_28),T52,ENVNUL,PNUL,YPfalse);
  T55 = BOUNDP(YevalSsyntaxYeval);
  if (T55 != YPfalse) {
    T54 = VARREF(YevalSsyntaxYeval);
  } else {
    T54 = YPfalse;
  }
  T56 = fun_eval_13;
  T53 = XCALL2(1,VARREF(YPdefine_method),T54,T56);
  VARSET(YevalSsyntaxYeval,T53);
  lit_29 = YPPsym((P)"str-eval-in");
  T57 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_in_14 = YPmet(FUNCODEREF(fun_str_eval_in_14),LITREF(lit_29),T57,ENVNUL,PNUL,YPfalse);
  T60 = BOUNDP(YevalStopYstr_eval_in);
  if (T60 != YPfalse) {
    T59 = VARREF(YevalStopYstr_eval_in);
  } else {
    T59 = YPfalse;
  }
  T61 = fun_str_eval_in_14;
  T58 = XCALL2(1,VARREF(YPdefine_method),T59,T61);
  VARSET(YevalStopYstr_eval_in,T58);
  lit_30 = YPPsym((P)"str-eval");
  T62 = YPsig(YPPlist(2,LITREF(lit_27),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_str_eval_15 = YPmet(FUNCODEREF(fun_str_eval_15),LITREF(lit_30),T62,ENVNUL,PNUL,YPfalse);
  T65 = BOUNDP(YevalStopYstr_eval);
  if (T65 != YPfalse) {
    T64 = VARREF(YevalStopYstr_eval);
  } else {
    T64 = YPfalse;
  }
  T66 = fun_str_eval_15;
  T63 = XCALL2(1,VARREF(YPdefine_method),T64,T66);
  VARSET(YevalStopYstr_eval,T63);
  lit_31 = YPPsym((P)"compiled-file?");
  lit_32 = YPPsym((P)"name");
  lit_33 = YPsb((P)".gooc");
  T67 = YPsig(YPPlist(1,LITREF(lit_32)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYcompiled_fileQ = YPmet(FUNCODEREF(YevalStopYcompiled_fileQ),LITREF(lit_31),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalStopYcompiled_fileQ;
  VARSET(YevalStopYcompiled_fileQ,T68);
  lit_34 = YPPsym((P)"read-file");
  lit_35 = YPPsym((P)"filename");
  lit_36 = YPPsym((P)"loop");
  lit_37 = YPPsym((P)"forms");
  T72 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_17 = YPmet(FUNCODEREF(fun_loop_17),LITREF(lit_36),T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_18 = YPmet(FUNCODEREF(fun_18),YPfalse,T71,ENVNUL,PNUL,YPfalse);
  T70 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_19 = YPmet(FUNCODEREF(fun_19),YPfalse,T70,ENVNUL,PNUL,YPfalse);
  T69 = YPsig(YPPlist(1,LITREF(lit_35)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_read_file_20 = YPmet(FUNCODEREF(fun_read_file_20),LITREF(lit_34),T69,ENVNUL,PNUL,YPfalse);
  T75 = BOUNDP(YevalStopYread_file);
  if (T75 != YPfalse) {
    T74 = VARREF(YevalStopYread_file);
  } else {
    T74 = YPfalse;
  }
  T76 = fun_read_file_20;
  T73 = XCALL2(1,VARREF(YPdefine_method),T74,T76);
  VARSET(YevalStopYread_file,T73);
  lit_38 = YPPsym((P)"load-in");
  T77 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_8)),YPPlist(2,VARREF(YLstrG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_in_21 = YPmet(FUNCODEREF(fun_load_in_21),LITREF(lit_38),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSastYload_in);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSastYload_in);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_load_in_21;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSastYload_in,T78);
  lit_39 = YPPsym((P)"load-file");
  T82 = YPsig(YPPlist(2,LITREF(lit_35),LITREF(lit_12)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_file_22 = YPmet(FUNCODEREF(fun_load_file_22),LITREF(lit_39),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalStopYload_file);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalStopYload_file);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_load_file_22;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalStopYload_file,T83);
  lit_40 = YPPsym((P)"load");
  lit_41 = YPsb((P)"File %s not found");
  T87 = YPsig(YPPlist(2,LITREF(lit_32),LITREF(lit_12)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_load_23 = YPmet(FUNCODEREF(fun_load_23),LITREF(lit_40),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalStopYload);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalStopYload);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_load_23;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalStopYload,T88);
  lit_42 = YPPsym((P)"prompt-for-command-expression");
  lit_43 = YPPsym((P)"env");
  lit_44 = YPPsym((P)"level");
  lit_45 = YPPsym((P)"prompt");
  lit_46 = YPsb((P)"%s %=%s");
  lit_47 = YPPsym((P)"unquote");
  lit_48 = YPsb((P)"(");
  lit_49 = YPsb((P)")");
  lit_50 = YPsb((P)"cmd_");
  T92 = YPsig(YPPlist(3,LITREF(lit_43),LITREF(lit_44),LITREF(lit_45)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_prompt_for_command_expression_24 = YPmet(FUNCODEREF(fun_prompt_for_command_expression_24),LITREF(lit_42),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalStopYprompt_for_command_expression);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYprompt_for_command_expression);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_prompt_for_command_expression_24;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYprompt_for_command_expression,T93);
  lit_51 = YPPsym((P)"print-result-expression");
  lit_52 = YPPsym((P)"label");
  lit_53 = YPPsym((P)"result");
  lit_54 = YPsb((P)"%s %=%s");
  T97 = YPsig(YPPlist(4,LITREF(lit_43),LITREF(lit_44),LITREF(lit_52),LITREF(lit_53)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_print_result_expression_25 = YPmet(FUNCODEREF(fun_print_result_expression_25),LITREF(lit_51),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalStopYprint_result_expression);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYprint_result_expression);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_print_result_expression_25;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYprint_result_expression,T98);
  lit_55 = YPPsym((P)"do-stack-frames");
  lit_56 = YPPsym((P)"fun");
  T102 = YPsig(YPPlist(1,LITREF(lit_56)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_stack_frames_26 = YPmet(FUNCODEREF(fun_do_stack_frames_26),LITREF(lit_55),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(YevalStopYdo_stack_frames);
  if (T105 != YPfalse) {
    T104 = VARREF(YevalStopYdo_stack_frames);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_do_stack_frames_26;
  T103 = XCALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(YevalStopYdo_stack_frames,T103);
  lit_57 = YPPsym((P)"return");
  lit_58 = YPPsym((P)"x-1486");
  lit_59 = YPPsym((P)"msg");
  lit_60 = YPPsym((P)"args");
  lit_61 = YPPsym((P)"for-frames");
  lit_62 = YPsb((P)"Match Pattern Failure");
  lit_63 = YPPsym((P)"let");
  lit_64 = YPPsym((P)"_args");
  lit_65 = YPPsym((P)"def");
  lit_66 = YPPsym((P)"rev");
  lit_67 = YPPsym((P)"incf");
  T109 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1486_27 = YPmet(FUNCODEREF(fun_x_1486_27),LITREF(lit_58),T109,ENVNUL,PNUL,YPfalse);
  T108 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_28 = YPmet(FUNCODEREF(fun_28),YPfalse,T108,ENVNUL,PNUL,YPfalse);
  T107 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_29 = YPmet(FUNCODEREF(fun_29),YPfalse,T107,ENVNUL,PNUL,YPfalse);
  T110 = fun_29;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-frames"),T110);
  lit_68 = YPPsym((P)"x-1490");
  lit_69 = YPPsym((P)"for-user-frames");
  lit_70 = YPPsym((P)"esc");
  lit_71 = YPPsym((P)"break");
  lit_72 = YPPsym((P)"_seen-top");
  lit_73 = YPPsym((P)"_top-num");
  lit_74 = YPPsym((P)"_num");
  lit_75 = YPPsym((P)"_name");
  lit_76 = YPPsym((P)"if");
  lit_77 = YPPsym((P)"fun-name");
  lit_78 = YPPsym((P)"as");
  lit_79 = YPPsym((P)"<str>");
  lit_80 = YPsb((P)"");
  lit_81 = YPPsym((P)"-");
  lit_82 = YPPsym((P)"when");
  lit_83 = YPPsym((P)"prefix?");
  lit_84 = YPsb((P)"%%bottom%%");
  lit_85 = YPsb((P)"%%top%%");
  lit_86 = YPPsym((P)"set");
  lit_87 = YPPsym((P)"num");
  T113 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1490_30 = YPmet(FUNCODEREF(fun_x_1490_30),LITREF(lit_68),T113,ENVNUL,PNUL,YPfalse);
  T112 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_31 = YPmet(FUNCODEREF(fun_31),YPfalse,T112,ENVNUL,PNUL,YPfalse);
  T111 = YPsig(YPPlist(1,LITREF(lit_7)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_32 = YPmet(FUNCODEREF(fun_32),YPfalse,T111,ENVNUL,PNUL,YPfalse);
  T114 = fun_32;
  YPmacro(YPPsym((P)"eval/top"),YPPsym((P)"for-user-frames"),T114);
  lit_88 = YPPsym((P)"backtrace");
  lit_89 = YPPsym((P)"f");
  lit_90 = YPsb((P)"[%=] %= %=\n");
  T117 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T116,ENVNUL,PNUL,YPfalse);
  T115 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_backtrace_35 = YPmet(FUNCODEREF(fun_backtrace_35),LITREF(lit_88),T115,ENVNUL,PNUL,YPfalse);
  T120 = BOUNDP(YevalStopYbacktrace);
  if (T120 != YPfalse) {
    T119 = VARREF(YevalStopYbacktrace);
  } else {
    T119 = YPfalse;
  }
  T121 = fun_backtrace_35;
  T118 = XCALL2(1,VARREF(YPdefine_method),T119,T121);
  VARSET(YevalStopYbacktrace,T118);
  lit_91 = YPPsym((P)"frame");
  lit_92 = YPPsym((P)"n");
  lit_93 = YPsb((P)"[%=] %= %=\n");
  T124 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T124,ENVNUL,PNUL,YPfalse);
  T123 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T123,ENVNUL,PNUL,YPfalse);
  T122 = YPsig(YPPlist(1,LITREF(lit_92)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_frame_38 = YPmet(FUNCODEREF(fun_frame_38),LITREF(lit_91),T122,ENVNUL,PNUL,YPfalse);
  T127 = BOUNDP(YevalStopYframe);
  if (T127 != YPfalse) {
    T126 = VARREF(YevalStopYframe);
  } else {
    T126 = YPfalse;
  }
  T128 = fun_frame_38;
  T125 = XCALL2(1,VARREF(YPdefine_method),T126,T128);
  VARSET(YevalStopYframe,T125);
  lit_94 = YPPsym((P)"frame-var");
  lit_95 = YPPsym((P)"ret");
  T132 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T131 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T131,ENVNUL,PNUL,YPfalse);
  T130 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(YPPlist(2,LITREF(lit_92),LITREF(lit_32)),YPPlist(2,VARREF(YLintG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_frame_var_42 = YPmet(FUNCODEREF(fun_frame_var_42),LITREF(lit_94),T129,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalStopYframe_var);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalStopYframe_var);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_frame_var_42;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalStopYframe_var,T133);
  lit_96 = YPPsym((P)"bt");
  lit_97 = YPsb((P)"[%=] %=\n");
  T139 = YPsig(YPPlist(2,LITREF(lit_89),LITREF(lit_64)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_71)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_bt_45 = YPmet(FUNCODEREF(fun_bt_45),LITREF(lit_96),T137,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalStopYbt);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalStopYbt);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_bt_45;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalStopYbt,T140);
  lit_98 = YPPsym((P)"<keyboard-interrupt>");
  T145 = (P)YPpair(VARREF(YgooSruntimeYLconditionG),Ynil);
  T144 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_98),T145);
  VARSET(YevalStopYLkeyboard_interruptG,T144);
  lit_99 = YPPsym((P)"keyboard-interrupt");
  T146 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  Ykeyboard_interrupt = YPmet(FUNCODEREF(Ykeyboard_interrupt),LITREF(lit_99),T146,ENVNUL,PNUL,YPfalse);
  T147 = Ykeyboard_interrupt;
  VARSET(Ykeyboard_interrupt,T147);
  lit_100 = YPPsym((P)"do-restart");
  lit_101 = YPPsym((P)"restarts");
  lit_102 = YPsb((P)"No restarts available.\n");
  lit_103 = YPsb((P)"No restart #%d.\n");
  T148 = YPsig(YPPlist(2,LITREF(lit_101),LITREF(lit_92)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalStopYdo_restart = YPmet(FUNCODEREF(YevalStopYdo_restart),LITREF(lit_100),T148,ENVNUL,PNUL,YPfalse);
  T149 = YevalStopYdo_restart;
  VARSET(YevalStopYdo_restart,T149);
  VARSET(YevalStopYD,YPfalse);
  VARSET(YevalStopYDD,YPfalse);
  VARSET(YevalStopYDDD,YPfalse);
  lit_104 = YPPsym((P)"%%top%%top-in");
  lit_105 = YPPsym((P)"top");
  lit_106 = YPPsym((P)"quit");
  lit_107 = YPPsym((P)"show-restarts?");
  lit_108 = YPPsym((P)"blow");
  lit_109 = YPPsym((P)"continue");
  lit_110 = YPPsym((P)"c");
  lit_111 = YPPsym((P)"r");
  lit_112 = YPsb((P)"BREAK");
  lit_113 = YPsb((P)"ERROR: %s");
  lit_114 = YPsb((P)"Return to interpreter level %d");
  lit_115 = YPsb((P)"Type \",restart N\" to restart execution:\n");
  lit_116 = YPsb((P)"<= ");
  lit_117 = YPPsym((P)"x-1493");
  lit_118 = YPPsym((P)"x-1496");
  lit_119 = YPPsym((P)"x-1499");
  lit_120 = YPPsym((P)"x-1502");
  lit_121 = YPPsym((P)"x-1505");
  lit_122 = YPPsym((P)"x-1508");
  lit_123 = YPPsym((P)"x-1511");
  lit_124 = YPPsym((P)"x-1514");
  lit_125 = YPPsym((P)"x-1517");
  lit_126 = YPPsym((P)"x-1520");
  lit_127 = YPPsym((P)"x-1523");
  lit_128 = YPPsym((P)"x-1526");
  lit_129 = YPPsym((P)"x-1529");
  lit_130 = YPPsym((P)"x-1532");
  lit_131 = YPsb((P)"=> ");
  lit_132 = YPPsym((P)"cmd_frame-var");
  lit_133 = YPsb((P)"=> ");
  lit_134 = YPPsym((P)"cmd_frame");
  lit_135 = YPPsym((P)"cmd_backtrace");
  lit_136 = YPPsym((P)"cmd_bt");
  lit_137 = YPPsym((P)"cmd_auto-eval");
  lit_138 = YPPsym((P)"cmd_ast-eval");
  lit_139 = YPPsym((P)"cmd_g2c-eval");
  lit_140 = YPPsym((P)"cmd_in");
  lit_141 = YPPsym((P)"cmd_restart");
  lit_142 = YPPsym((P)"cmd_restarts");
  lit_143 = YPPsym((P)"cmd_handlers");
  lit_144 = YPPsym((P)"cmd_top");
  lit_145 = YPPsym((P)"cmd_up");
  lit_146 = YPPsym((P)"cmd_quit");
  T187 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T187,ENVNUL,PNUL,YPfalse);
  T186 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_111)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_111)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1532_52 = YPmet(FUNCODEREF(fun_x_1532_52),LITREF(lit_130),T183,ENVNUL,PNUL,YPfalse);
  T182 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T182,ENVNUL,PNUL,YPfalse);
  T181 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1529_54 = YPmet(FUNCODEREF(fun_x_1529_54),LITREF(lit_129),T181,ENVNUL,PNUL,YPfalse);
  T180 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_55 = YPmet(FUNCODEREF(fun_55),YPfalse,T180,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1526_56 = YPmet(FUNCODEREF(fun_x_1526_56),LITREF(lit_128),T179,ENVNUL,PNUL,YPfalse);
  T178 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_57 = YPmet(FUNCODEREF(fun_57),YPfalse,T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1523_58 = YPmet(FUNCODEREF(fun_x_1523_58),LITREF(lit_127),T177,ENVNUL,PNUL,YPfalse);
  T176 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T176,ENVNUL,PNUL,YPfalse);
  T175 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1520_60 = YPmet(FUNCODEREF(fun_x_1520_60),LITREF(lit_126),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T174,ENVNUL,PNUL,YPfalse);
  T173 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1517_62 = YPmet(FUNCODEREF(fun_x_1517_62),LITREF(lit_125),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_63 = YPmet(FUNCODEREF(fun_63),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1514_64 = YPmet(FUNCODEREF(fun_x_1514_64),LITREF(lit_124),T171,ENVNUL,PNUL,YPfalse);
  T170 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_65 = YPmet(FUNCODEREF(fun_65),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1511_66 = YPmet(FUNCODEREF(fun_x_1511_66),LITREF(lit_123),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1508_68 = YPmet(FUNCODEREF(fun_x_1508_68),LITREF(lit_122),T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1505_70 = YPmet(FUNCODEREF(fun_x_1505_70),LITREF(lit_121),T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_71 = YPmet(FUNCODEREF(fun_71),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T163 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1502_72 = YPmet(FUNCODEREF(fun_x_1502_72),LITREF(lit_120),T163,ENVNUL,PNUL,YPfalse);
  T162 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1499_74 = YPmet(FUNCODEREF(fun_x_1499_74),LITREF(lit_119),T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_75 = YPmet(FUNCODEREF(fun_75),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T159 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1496_76 = YPmet(FUNCODEREF(fun_x_1496_76),LITREF(lit_118),T159,ENVNUL,PNUL,YPfalse);
  T158 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_77 = YPmet(FUNCODEREF(fun_77),YPfalse,T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(2,LITREF(lit_59),LITREF(lit_60)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1493_78 = YPmet(FUNCODEREF(fun_x_1493_78),LITREF(lit_117),T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_57)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_79 = YPmet(FUNCODEREF(fun_79),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T155,ENVNUL,PNUL,YPfalse);
  T154 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T154,ENVNUL,PNUL,YPfalse);
  T153 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T153,ENVNUL,PNUL,YPfalse);
  T152 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_83 = YPmet(FUNCODEREF(fun_loop_83),LITREF(lit_36),T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_108)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(5,LITREF(lit_44),LITREF(lit_105),LITREF(lit_106),LITREF(lit_107),LITREF(lit_8)),YPPlist(5,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_PPtopPPtop_in_85 = YPmet(FUNCODEREF(fun_PPtopPPtop_in_85),LITREF(lit_104),T150,ENVNUL,PNUL,YPfalse);
  T190 = BOUNDP(YevalStopYPPtopPPtop_in);
  if (T190 != YPfalse) {
    T189 = VARREF(YevalStopYPPtopPPtop_in);
  } else {
    T189 = YPfalse;
  }
  T191 = fun_PPtopPPtop_in_85;
  T188 = XCALL2(1,VARREF(YPdefine_method),T189,T191);
  VARSET(YevalStopYPPtopPPtop_in,T188);
  lit_147 = YPsb((P)"Exit the top-level interpreter");
  T198 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_86 = YPmet(FUNCODEREF(fun_86),YPfalse,T198,ENVNUL,PNUL,YPfalse);
  T197 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_111)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T196,ENVNUL,PNUL,YPfalse);
  T195 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_loop_89 = YPmet(FUNCODEREF(fun_loop_89),LITREF(lit_36),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_90 = YPmet(FUNCODEREF(fun_90),YPfalse,T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(1,LITREF(lit_106)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_91 = YPmet(FUNCODEREF(fun_91),YPfalse,T193,ENVNUL,PNUL,YPfalse);
  T192 = YPsig(YPPlist(1,LITREF(lit_12)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_top_92 = YPmet(FUNCODEREF(fun_top_92),LITREF(lit_105),T192,ENVNUL,PNUL,YPfalse);
  T201 = BOUNDP(YevalStopYtop);
  if (T201 != YPfalse) {
    T200 = VARREF(YevalStopYtop);
  } else {
    T200 = YPfalse;
  }
  T202 = fun_top_92;
  T199 = XCALL2(1,VARREF(YPdefine_method),T200,T202);
  VARSET(YevalStopYtop,T199);
  lit_148 = YPPsym((P)"save-image");
  lit_149 = YPPsym((P)"image-name");
  lit_150 = YPPsym((P)"goo/user");
  T204 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T204,ENVNUL,PNUL,YPfalse);
  T203 = YPsig(YPPlist(1,LITREF(lit_149)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalStopYsave_image = YPmet(FUNCODEREF(YevalStopYsave_image),LITREF(lit_148),T203,ENVNUL,PNUL,YPfalse);
  T205 = YevalStopYsave_image;
  VARSET(YevalStopYsave_image,T205);
  T206 = YPfalse;
  return T206;
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
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSzip;

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
  {"open", &module_info_gooSioSport, "open"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"add-src-path", &module_info_gooSsystem, "add-src-path"},
  {"until", &module_info_gooSmacros, "until"},
  {"global-box-value", &module_info_evalSast, "global-box-value"},
  {"rep", &module_info_gooSboot, "rep"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"sexpr-variable-type", &module_info_evalSsyntax, "sexpr-variable-type"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"@len", &module_info_gooSboot, "@len"},
  {"assignment-binding", &module_info_evalSast, "assignment-binding"},
  {"<sequential>", &module_info_evalSast, "<sequential>"},
  {"port2str", &module_info_gooSioSport, "port2str"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"any2?", &module_info_gooScolsSseq, "any2?"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"%binding-value", &module_info_evalSast_eval, "%binding-value"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"ct", &module_info_gooSboot, "ct"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"sexpr-make-macro-function", &module_info_evalSsyntax, "sexpr-make-macro-function"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"do", &module_info_gooSmacros, "do"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"sexpr-operator", &module_info_evalSsyntax, "sexpr-operator"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"col", &module_info_gooScolsScol, "col"},
  {"@+", &module_info_gooSboot, "@+"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"rem", &module_info_gooSmath, "rem"},
  {"sexpr-prop-init?", &module_info_evalSsyntax, "sexpr-prop-init?"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {">", &module_info_gooSmag, ">"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"$sexpr-macro-expand-tag", &module_info_evalSsyntax, "$sexpr-macro-expand-tag"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"sexpr-method-signature", &module_info_evalSsyntax, "sexpr-method-signature"},
  {"esc", &module_info_gooSboot, "esc"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {">=", &module_info_gooSmag, ">="},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"sexpr-fab-setter-name", &module_info_evalSsyntax, "sexpr-fab-setter-name"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"sexpr-function-signature", &module_info_evalSsyntax, "sexpr-function-signature"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"$sexpr-define-class-tag", &module_info_evalSsyntax, "$sexpr-define-class-tag"},
  {"binding-kind", &module_info_evalSast, "binding-kind"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"report-undefined-global-bindings", &module_info_evalSast, "report-undefined-global-bindings"},
  {"del", &module_info_gooScolsScol, "del"},
  {"logn", &module_info_gooSmath, "logn"},
  {"rep-elt", &module_info_gooScolsSrep, "rep-elt"},
  {"new", &module_info_gooSboot, "new"},
  {"=", &module_info_gooSmath, "="},
  {"rotf", &module_info_gooSmacros, "rotf"},
  {"<fab-list>", &module_info_evalSast, "<fab-list>"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"sin", &module_info_gooSmath, "sin"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"sexpr-make-anonymous-method", &module_info_evalSsyntax, "sexpr-make-anonymous-method"},
  {"sexpr-def?", &module_info_evalSsyntax, "sexpr-def?"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"sexpr-unwind-protect-protected-form", &module_info_evalSsyntax, "sexpr-unwind-protect-protected-form"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"sexpr-if-test", &module_info_evalSsyntax, "sexpr-if-test"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"$sexpr-quasiquote-tag", &module_info_evalSsyntax, "$sexpr-quasiquote-tag"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"get-standard-read-macro", &module_info_gooSioSread, "get-standard-read-macro"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"sexpr-variable?", &module_info_evalSsyntax, "sexpr-variable?"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<=", &module_info_gooSmag, "<="},
  {"sexpr-definition-value", &module_info_evalSsyntax, "sexpr-definition-value"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"mod", &module_info_gooSmath, "mod"},
  {"tail", &module_info_gooSboot, "tail"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"sexpr-loc-bound-signatures", &module_info_evalSsyntax, "sexpr-loc-bound-signatures"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"%put", &module_info_gooSboot, "%put"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"sexpr-isa-prop-inits", &module_info_evalSsyntax, "sexpr-isa-prop-inits"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"sexpr-syntax-if-then", &module_info_evalSsyntax, "sexpr-syntax-if-then"},
  {"+", &module_info_gooSmath, "+"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"sexpr-prop-type", &module_info_evalSsyntax, "sexpr-prop-type"},
  {"use", &module_info_gooSboot, "use"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"sexpr-let->combination", &module_info_evalSsyntax, "sexpr-let->combination"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"dm", &module_info_gooSboot, "dm"},
  {"%binding-bound?", &module_info_evalSast_eval, "%binding-bound?"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"not", &module_info_gooSboot, "not"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"$sexpr-begin-tag", &module_info_evalSsyntax, "$sexpr-begin-tag"},
  {"dv", &module_info_gooSboot, "dv"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"|", &module_info_gooSmath, "|"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"pow", &module_info_gooSmath, "pow"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"$sexpr-unwind-protect-tag", &module_info_evalSsyntax, "$sexpr-unwind-protect-tag"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"$sexpr-define-method-tag", &module_info_evalSsyntax, "$sexpr-define-method-tag"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"sexpr-bind-pattern-variables", &module_info_evalSsyntax, "sexpr-bind-pattern-variables"},
  {"sexpr-variable-name", &module_info_evalSsyntax, "sexpr-variable-name"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"round/", &module_info_gooSmath, "round/"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"set-standard-read-macro!", &module_info_gooSioSread, "set-standard-read-macro!"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"add", &module_info_gooScolsScol, "add"},
  {"sexpr-text-of-quotation", &module_info_evalSsyntax, "sexpr-text-of-quotation"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"sexpr-define-class-parents", &module_info_evalSsyntax, "sexpr-define-class-parents"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"sexpr-fab-setter", &module_info_evalSsyntax, "sexpr-fab-setter"},
  {"sexpr-forward-primitive?", &module_info_evalSsyntax, "sexpr-forward-primitive?"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"sexpr-method-body", &module_info_evalSsyntax, "sexpr-method-body"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"dl", &module_info_gooSboot, "dl"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"sexpr-assignment-value", &module_info_evalSsyntax, "sexpr-assignment-value"},
  {"sexpr-assignment-variable", &module_info_evalSsyntax, "sexpr-assignment-variable"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"read-delimited-list", &module_info_gooSioSread, "read-delimited-list"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"sexpr-expand-backquote", &module_info_evalSsyntax, "sexpr-expand-backquote"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"sexpr-syntax-if-pattern", &module_info_evalSsyntax, "sexpr-syntax-if-pattern"},
  {"program-bindings", &module_info_evalSast_linearize, "program-bindings"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"sexpr-function-definition-value", &module_info_evalSsyntax, "sexpr-function-definition-value"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"sexpr-monitor-expand", &module_info_evalSsyntax, "sexpr-monitor-expand"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"%binding-value-setter", &module_info_evalSast_eval, "%binding-value-setter"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"sexpr-make-begin", &module_info_evalSsyntax, "sexpr-make-begin"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"sexpr-isa-parent", &module_info_evalSsyntax, "sexpr-isa-parent"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"asin", &module_info_gooSmath, "asin"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"sexpr-prop-init-var", &module_info_evalSsyntax, "sexpr-prop-init-var"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"t+", &module_info_gooStypes, "t+"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"sexpr-signature-value", &module_info_evalSsyntax, "sexpr-signature-value"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"as", &module_info_gooStypes, "as"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"head", &module_info_gooSboot, "head"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"sexpr-define-class?", &module_info_evalSsyntax, "sexpr-define-class?"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"sexpr-syntax-definition-value", &module_info_evalSsyntax, "sexpr-syntax-definition-value"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"sexpr-definition-variable", &module_info_evalSsyntax, "sexpr-definition-variable"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"round", &module_info_gooSmath, "round"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"error", &module_info_gooSboot, "error"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"out", &module_info_gooSioSport, "out"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"sexpr-loc-bound-names", &module_info_evalSsyntax, "sexpr-loc-bound-names"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"sexpr-block-body", &module_info_evalSsyntax, "sexpr-block-body"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"quote", &module_info_gooSboot, "quote"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"sexpr-fab-getter", &module_info_evalSsyntax, "sexpr-fab-getter"},
  {"~", &module_info_gooSmath, "~"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"sexpr-function-body", &module_info_evalSsyntax, "sexpr-function-body"},
  {"$sexpr-define-tag", &module_info_evalSsyntax, "$sexpr-define-tag"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"op", &module_info_gooSmacros, "op"},
  {"div", &module_info_gooSmath, "div"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"sexpr-make-method", &module_info_evalSsyntax, "sexpr-make-method"},
  {"sexpr-function-definition-adjectives", &module_info_evalSsyntax, "sexpr-function-definition-adjectives"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"form-definitions", &module_info_evalSast_linearize, "form-definitions"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"binding-value", &module_info_evalSast, "binding-value"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"reference-binding", &module_info_evalSast, "reference-binding"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"locals-functions", &module_info_evalSast, "locals-functions"},
  {"<computed-program>", &module_info_evalSast, "<computed-program>"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"sexpr-def-variable", &module_info_evalSsyntax, "sexpr-def-variable"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"any?", &module_info_gooStypes, "any?"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"sexpr-syntax-if-value", &module_info_evalSsyntax, "sexpr-syntax-if-value"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"$sexpr-define-syntax-tag", &module_info_evalSsyntax, "$sexpr-define-syntax-tag"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"items", &module_info_gooScolsScol, "items"},
  {"sexpr-sequence->begin", &module_info_evalSsyntax, "sexpr-sequence->begin"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"sexpr-if-else", &module_info_evalSsyntax, "sexpr-if-else"},
  {"$e", &module_info_gooSmath, "$e"},
  {"$sexpr-locals-tag", &module_info_evalSsyntax, "$sexpr-locals-tag"},
  {"$sexpr-let-tag", &module_info_evalSsyntax, "$sexpr-let-tag"},
  {"$sexpr-prop-tag", &module_info_evalSsyntax, "$sexpr-prop-tag"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"sexpr-prop-owner", &module_info_evalSsyntax, "sexpr-prop-owner"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"sexpr-loc-raw-body", &module_info_evalSsyntax, "sexpr-loc-raw-body"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"try", &module_info_gooSboot, "try"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"export", &module_info_gooSboot, "export"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"$sexpr-isa-tag", &module_info_evalSsyntax, "$sexpr-isa-tag"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"tup", &module_info_gooSboot, "tup"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"&", &module_info_gooSmath, "&"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"sexpr-unquote-splicing?", &module_info_evalSsyntax, "sexpr-unquote-splicing?"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"cat", &module_info_gooSmacros, "cat"},
  {"$sexpr-define-generic-tag", &module_info_evalSsyntax, "$sexpr-define-generic-tag"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"$sexpr-quote-tag", &module_info_evalSsyntax, "$sexpr-quote-tag"},
  {"or", &module_info_gooSmacros, "or"},
  {"$sexpr-method-tag", &module_info_evalSsyntax, "$sexpr-method-tag"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"sexpr-isa-init-values", &module_info_evalSsyntax, "sexpr-isa-init-values"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"sexpr-syntax-definition-variable", &module_info_evalSsyntax, "sexpr-syntax-definition-variable"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"last", &module_info_gooSmacros, "last"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"$sexpr-set-tag", &module_info_evalSsyntax, "$sexpr-set-tag"},
  {"put", &module_info_gooSioSport, "put"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"$sexpr-bind-exit-tag", &module_info_evalSsyntax, "$sexpr-bind-exit-tag"},
  {"$sexpr-define-function-tag", &module_info_evalSsyntax, "$sexpr-define-function-tag"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"$sexpr-if-tag", &module_info_evalSsyntax, "$sexpr-if-tag"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"set", &module_info_gooSboot, "set"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"get", &module_info_gooSioSport, "get"},
  {"$sexpr-syntax-if-tag", &module_info_evalSsyntax, "$sexpr-syntax-if-tag"},
  {"sexpr-block-name", &module_info_evalSsyntax, "sexpr-block-name"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"sexpr-operands", &module_info_evalSsyntax, "sexpr-operands"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"==", &module_info_gooSmacros, "=="},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"time", &module_info_gooSsystem, "time"},
  {"$char-long-names", &module_info_gooSioSread, "$char-long-names"},
  {"sexpr-prop-init", &module_info_evalSsyntax, "sexpr-prop-init"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"sexpr-function-definition-variable", &module_info_evalSsyntax, "sexpr-function-definition-variable"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"now", &module_info_gooScolsScol, "now"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"case", &module_info_gooSmacros, "case"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"floor", &module_info_gooSmath, "floor"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"map", &module_info_gooSmacros, "map"},
  {"-", &module_info_gooSmath, "-"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"sexpr-def-value", &module_info_evalSsyntax, "sexpr-def-value"},
  {"$sexpr-def-tag", &module_info_evalSsyntax, "$sexpr-def-tag"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"sexpr-make-application", &module_info_evalSsyntax, "sexpr-make-application"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"match", &module_info_gooSmacros, "match"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%time", &module_info_gooSboot, "%time"},
  {">>", &module_info_gooSmath, ">>"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"$sexpr-iterate-tag", &module_info_evalSsyntax, "$sexpr-iterate-tag"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"nul", &module_info_gooSboot, "nul"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"into", &module_info_gooScolsScol, "into"},
  {"sexpr-unquote?", &module_info_evalSsyntax, "sexpr-unquote?"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tan", &module_info_gooSmath, "tan"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"abs", &module_info_gooSmath, "abs"},
  {"sexpr-if-then", &module_info_evalSsyntax, "sexpr-if-then"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"sexpr-prop-name", &module_info_evalSsyntax, "sexpr-prop-name"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"sexpr-loc-bound-bodies", &module_info_evalSsyntax, "sexpr-loc-bound-bodies"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"sexpr-unwind-protect-cleanup-forms", &module_info_evalSsyntax, "sexpr-unwind-protect-cleanup-forms"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"sexpr-syntax-if-else", &module_info_evalSsyntax, "sexpr-syntax-if-else"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"$sexpr-monitor-tag", &module_info_evalSsyntax, "$sexpr-monitor-tag"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"when", &module_info_gooSmacros, "when"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"sexpr-iterate->loc", &module_info_evalSsyntax, "sexpr-iterate->loc"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"1-", &module_info_gooSmath, "1-"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"len", &module_info_gooStypes, "len"},
  {"sexpr-isa-init-props", &module_info_evalSsyntax, "sexpr-isa-init-props"},
  {"~=", &module_info_gooSmath, "~="},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"frame", CVAR, &YevalStopYframe},
  {"%%bottom%%g2c-run", CVAR, &YevalStopYPPbottomPPg2c_run},
  {"parse", CVAR, &YevalStopYparse},
  {"$g2c-eval?", CVAR, &YevalStopYDg2c_evalQ},
  {"for-frames", PVAR, NULL},
  {"do-stack-frames", CVAR, &YevalStopYdo_stack_frames},
  {"esctst", CVAR, &YevalStopYesctst},
  {"backtrace", CVAR, &YevalStopYbacktrace},
  {"g2c-eval", CVAR, &YevalStopYg2c_eval},
  {"parse-in", CVAR, &YevalStopYparse_in},
  {"str-parse", CVAR, &YevalStopYstr_parse},
  {"str-eval-in", CVAR, &YevalStopYstr_eval_in},
  {"$$", CVAR, &YevalStopYDD},
  {"%%bottom%%ast-run", CVAR, &YevalStopYPPbottomPPast_run},
  {"frame-var", CVAR, &YevalStopYframe_var},
  {"prompt-for-command-expression", CVAR, &YevalStopYprompt_for_command_expression},
  {"run", DVAR, &YevalStopYrun},
  {"$", CVAR, &YevalStopYD},
  {"$$$", CVAR, &YevalStopYDDD},
  {"read-file", CVAR, &YevalStopYread_file},
  {"eval-in", CVAR, &YevalStopYeval_in},
  {"top", CVAR, &YevalStopYtop},
  {"for-user-frames", PVAR, NULL},
  {"load", CVAR, &YevalStopYload},
  {"compiled-file?", CVAR, &YevalStopYcompiled_fileQ},
  {"<keyboard-interrupt>", CVAR, &YevalStopYLkeyboard_interruptG},
  {"%%top%%top-in", CVAR, &YevalStopYPPtopPPtop_in},
  {"auto-eval", CVAR, &YevalStopYauto_eval},
  {"---main-0---", PVAR, NULL},
  {"bt", CVAR, &YevalStopYbt},
  {"auto-run", CVAR, &YevalStopYauto_run},
  {"str-eval", CVAR, &YevalStopYstr_eval},
  {"print-result-expression", CVAR, &YevalStopYprint_result_expression},
  {"load-file", CVAR, &YevalStopYload_file},
  {"do-restart", CVAR, &YevalStopYdo_restart},
  {"str-parse-in", CVAR, &YevalStopYstr_parse_in},
  {"save-image", CVAR, &YevalStopYsave_image},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"frame", "frame"},
  {"eval", "eval"},
  {"esctst", "esctst"},
  {"$$", "$$"},
  {"save-image", "save-image"},
  {"frame-var", "frame-var"},
  {"$$$", "$$$"},
  {"read-file", "read-file"},
  {"do-stack-frames", "do-stack-frames"},
  {"parse-in", "parse-in"},
  {"top", "top"},
  {"load", "load"},
  {"$", "$"},
  {"auto-eval", "auto-eval"},
  {"backtrace", "backtrace"},
  {"g2c-eval", "g2c-eval"},
  {"bt", "bt"},
  {"load-file", "load-file"},
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
