/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalStopYframe,"eval/top","frame");
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
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(Ytype_object,"goo/boot","type-object");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
DEF(YevalSg2cYpp,"eval/g2c","pp");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YgooSioSportYport_handle,"goo/io/port","port-handle");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
DEF(YevalSg2cYmodule_loader_appname_setter,"eval/g2c","module-loader-appname-setter");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSmathYlogn,"goo/math","logn");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YevalSsyntaxYsexpr_signature_parameters,"eval/syntax","sexpr-signature-parameters");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
DEF(YevalSg2cYmodule_loader_app_modname_setter,"eval/g2c","module-loader-app-modname-setter");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YLclassG,"goo/boot","<class>");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSmathYmodA,"goo/math","mod+");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(YgooSruntimeYstack_overflow_error,"goo/runtime","stack-overflow-error");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooSmathYpower_of_two_ceil,"goo/math","power-of-two-ceil");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YPprop,"goo/boot","%prop");
EXT(YevalSast_linearizeYunconstrained_typeQ,"eval/ast-linearize","unconstrained-type?");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(Ytail,"goo/boot","tail");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YisaQ,"goo/boot","isa?");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLsymG,"goo/boot","<sym>");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YLstrG,"goo/boot","<str>");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(Ynot,"goo/boot","not");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
DEF(YevalSg2cYgenerate_self_recursive_call,"eval/g2c","generate-self-recursive-call");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YgooSmathY1A,"goo/math","1+");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSast_linearizeYanalyze_ast,"eval/ast-linearize","analyze-ast");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(Yfun_name,"goo/boot","fun-name");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSmathYlog,"goo/math","log");
DEF(YevalSg2cYgenerate_shadow_args,"eval/g2c","generate-shadow-args");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YLseqIG,"goo/boot","<seq.>");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalStopYDDD,"eval/top","$$$");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yunion_elts,"goo/boot","union-elts");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yclone,"goo/boot","clone");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(Yfun_refs_setter,"goo/boot","fun-refs-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
DYNEXT(YgooSruntimeYTcurrent_handlersT,"goo/runtime","*current-handlers*");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(Yerror,"goo/boot","error");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSruntimeYzipped,"goo/runtime","zipped");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSioSportYport_index_setter,"goo/io/port","port-index-setter");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(Yprop_getter,"goo/boot","prop-getter");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(YLlocG,"goo/boot","<loc>");
EXT(Ynul,"goo/boot","nul");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooSruntimeYmsg_to_str,"goo/runtime","msg-to-str");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YLnumG,"goo/boot","<num>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSast_linearizeYast_contains_funQ,"eval/ast-linearize","ast-contains-fun?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(Yobject_props,"goo/boot","object-props");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(YLpropG,"goo/boot","<prop>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(Yfun_cache,"goo/boot","fun-cache");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Ytype_class,"goo/boot","type-class");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(YgooSsystemYos_name,"goo/system","os-name");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLmetG,"goo/boot","<met>");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSioSportYport_handle_setter,"goo/io/port","port-handle-setter");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSruntimeYmsg,"goo/runtime","msg");
EXT(YgooSioSportYport_line_setter,"goo/io/port","port-line-setter");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSmathYmod_,"goo/math","mod-");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYNE,"goo/math","~=");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Ynil,"goo/boot","nil");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(Yclass_children,"goo/boot","class-children");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_346);
DEFLIT(lit_423);
DEFLIT(lit_223);
DEFLIT(lit_39);
DEFLIT(lit_410);
DEFLIT(lit_561);
DEFLIT(lit_448);
DEFLIT(lit_353);
DEFLIT(lit_574);
DEFLIT(lit_453);
DEFLIT(lit_324);
DEFLIT(lit_120);
DEFLIT(lit_62);
DEFLIT(lit_159);
DEFLIT(lit_3);
DEFLIT(lit_172);
DEFLIT(lit_409);
DEFLIT(lit_314);
DEFLIT(lit_272);
DEFLIT(lit_575);
DEFLIT(lit_105);
DEFLIT(lit_369);
DEFLIT(lit_332);
DEFLIT(lit_119);
DEFLIT(lit_337);
DEFLIT(lit_468);
DEFLIT(lit_547);
DEFLIT(lit_205);
DEFLIT(lit_469);
DEFLIT(lit_193);
DEFLIT(lit_549);
DEFLIT(lit_422);
DEFLIT(lit_88);
DEFLIT(lit_352);
DEFLIT(lit_507);
DEFLIT(lit_240);
DEFLIT(lit_140);
DEFLIT(lit_500);
DEFLIT(lit_244);
DEFLIT(lit_380);
DEFLIT(lit_234);
DEFLIT(lit_233);
DEFLIT(lit_541);
DEFLIT(lit_266);
DEFLIT(lit_87);
DEFLIT(lit_356);
DEFLIT(lit_239);
DEFLIT(lit_566);
DEFLIT(lit_527);
DEFLIT(lit_58);
DEFLIT(lit_102);
DEFLIT(lit_504);
DEFLIT(lit_104);
DEFLIT(lit_149);
DEFLIT(lit_506);
DEFLIT(lit_286);
DEFLIT(lit_95);
DEFLIT(lit_213);
DEFLIT(lit_408);
DEFLIT(lit_180);
DEFLIT(lit_153);
DEFLIT(lit_100);
DEFLIT(lit_538);
DEFLIT(lit_400);
DEFLIT(lit_303);
DEFLIT(lit_526);
DEFLIT(lit_285);
DEFLIT(lit_445);
DEFLIT(lit_364);
DEFLIT(lit_381);
DEFLIT(lit_499);
DEFLIT(lit_81);
DEFLIT(lit_8);
DEFLIT(lit_174);
DEFLIT(lit_137);
DEFLIT(lit_117);
DEFLIT(lit_284);
DEFLIT(lit_442);
DEFLIT(lit_151);
DEFLIT(lit_165);
DEFLIT(lit_20);
DEFLIT(lit_2);
DEFLIT(lit_307);
DEFLIT(lit_455);
DEFLIT(lit_116);
DEFLIT(lit_61);
DEFLIT(lit_497);
DEFLIT(lit_26);
DEFLIT(lit_0);
DEFLIT(lit_370);
DEFLIT(lit_398);
DEFLIT(lit_444);
DEFLIT(lit_133);
DEFLIT(lit_134);
DEFLIT(lit_16);
DEFLIT(lit_310);
DEFLIT(lit_6);
DEFLIT(lit_251);
DEFLIT(lit_94);
DEFLIT(lit_170);
DEFLIT(lit_452);
DEFLIT(lit_371);
DEFLIT(lit_384);
DEFLIT(lit_443);
DEFLIT(lit_243);
DEFLIT(lit_186);
DEFLIT(lit_572);
DEFLIT(lit_385);
DEFLIT(lit_545);
DEFLIT(lit_256);
DEFLIT(lit_492);
DEFLIT(lit_33);
DEFLIT(lit_462);
DEFLIT(lit_516);
DEFLIT(lit_449);
DEFLIT(lit_470);
DEFLIT(lit_257);
DEFLIT(lit_568);
DEFLIT(lit_283);
DEFLIT(lit_147);
DEFLIT(lit_365);
DEFLIT(lit_336);
DEFLIT(lit_200);
DEFLIT(lit_167);
DEFLIT(lit_198);
DEFLIT(lit_152);
DEFLIT(lit_366);
DEFLIT(lit_425);
DEFLIT(lit_539);
DEFLIT(lit_179);
DEFLIT(lit_76);
DEFLIT(lit_231);
DEFLIT(lit_465);
DEFLIT(lit_466);
DEFLIT(lit_83);
DEFLIT(lit_50);
DEFLIT(lit_368);
DEFLIT(lit_202);
DEFLIT(lit_483);
DEFLIT(lit_72);
DEFLIT(lit_230);
DEFLIT(lit_569);
DEFLIT(lit_430);
DEFLIT(lit_302);
DEFLIT(lit_225);
DEFLIT(lit_82);
DEFLIT(lit_459);
DEFLIT(lit_60);
DEFLIT(lit_248);
DEFLIT(lit_413);
DEFLIT(lit_158);
DEFLIT(lit_552);
DEFLIT(lit_450);
DEFLIT(lit_292);
DEFLIT(lit_496);
DEFLIT(lit_112);
DEFLIT(lit_537);
DEFLIT(lit_1);
DEFLIT(lit_536);
DEFLIT(lit_319);
DEFLIT(lit_435);
DEFLIT(lit_52);
DEFLIT(lit_92);
DEFLIT(lit_279);
DEFLIT(lit_493);
DEFLIT(lit_458);
DEFLIT(lit_386);
DEFLIT(lit_395);
DEFLIT(lit_481);
DEFLIT(lit_178);
DEFLIT(lit_461);
DEFLIT(lit_415);
DEFLIT(lit_191);
DEFLIT(lit_513);
DEFLIT(lit_376);
DEFLIT(lit_69);
DEFLIT(lit_318);
DEFLIT(lit_192);
DEFLIT(lit_362);
DEFLIT(lit_241);
DEFLIT(lit_35);
DEFLIT(lit_169);
DEFLIT(lit_122);
DEFLIT(lit_317);
DEFLIT(lit_212);
DEFLIT(lit_235);
DEFLIT(lit_24);
DEFLIT(lit_278);
DEFLIT(lit_210);
DEFLIT(lit_330);
DEFLIT(lit_125);
DEFLIT(lit_479);
DEFLIT(lit_99);
DEFLIT(lit_229);
DEFLIT(lit_89);
DEFLIT(lit_49);
DEFLIT(lit_329);
DEFLIT(lit_304);
DEFLIT(lit_290);
DEFLIT(lit_288);
DEFLIT(lit_219);
DEFLIT(lit_38);
DEFLIT(lit_311);
DEFLIT(lit_216);
DEFLIT(lit_118);
DEFLIT(lit_145);
DEFLIT(lit_274);
DEFLIT(lit_79);
DEFLIT(lit_45);
DEFLIT(lit_132);
DEFLIT(lit_54);
DEFLIT(lit_333);
DEFLIT(lit_64);
DEFLIT(lit_407);
DEFLIT(lit_338);
DEFLIT(lit_359);
DEFLIT(lit_289);
DEFLIT(lit_360);
DEFLIT(lit_228);
DEFLIT(lit_525);
DEFLIT(lit_78);
DEFLIT(lit_111);
DEFLIT(lit_277);
DEFLIT(lit_416);
DEFLIT(lit_325);
DEFLIT(lit_185);
DEFLIT(lit_342);
DEFLIT(lit_343);
DEFLIT(lit_5);
DEFLIT(lit_389);
DEFLIT(lit_222);
DEFLIT(lit_573);
DEFLIT(lit_215);
DEFLIT(lit_514);
DEFLIT(lit_267);
DEFLIT(lit_322);
DEFLIT(lit_189);
DEFLIT(lit_328);
DEFLIT(lit_11);
DEFLIT(lit_260);
DEFLIT(lit_281);
DEFLIT(lit_512);
DEFLIT(lit_457);
DEFLIT(lit_474);
DEFLIT(lit_23);
DEFLIT(lit_138);
DEFLIT(lit_378);
DEFLIT(lit_357);
DEFLIT(lit_535);
DEFLIT(lit_196);
DEFLIT(lit_402);
DEFLIT(lit_427);
DEFLIT(lit_348);
DEFLIT(lit_489);
DEFLIT(lit_505);
DEFLIT(lit_75);
DEFLIT(lit_206);
DEFLIT(lit_66);
DEFLIT(lit_121);
DEFLIT(lit_98);
DEFLIT(lit_312);
DEFLIT(lit_403);
DEFLIT(lit_524);
DEFLIT(lit_396);
DEFLIT(lit_7);
DEFLIT(lit_297);
DEFLIT(lit_276);
DEFLIT(lit_339);
DEFLIT(lit_247);
DEFLIT(lit_305);
DEFLIT(lit_316);
DEFLIT(lit_501);
DEFLIT(lit_148);
DEFLIT(lit_426);
DEFLIT(lit_85);
DEFLIT(lit_51);
DEFLIT(lit_521);
DEFLIT(lit_540);
DEFLIT(lit_326);
DEFLIT(lit_124);
DEFLIT(lit_429);
DEFLIT(lit_562);
DEFLIT(lit_531);
DEFLIT(lit_358);
DEFLIT(lit_110);
DEFLIT(lit_560);
DEFLIT(lit_520);
DEFLIT(lit_503);
DEFLIT(lit_123);
DEFLIT(lit_80);
DEFLIT(lit_387);
DEFLIT(lit_460);
DEFLIT(lit_301);
DEFLIT(lit_161);
DEFLIT(lit_315);
DEFLIT(lit_173);
DEFLIT(lit_498);
DEFLIT(lit_108);
DEFLIT(lit_522);
DEFLIT(lit_530);
DEFLIT(lit_77);
DEFLIT(lit_275);
DEFLIT(lit_65);
DEFLIT(lit_508);
DEFLIT(lit_300);
DEFLIT(lit_190);
DEFLIT(lit_548);
DEFLIT(lit_246);
DEFLIT(lit_495);
DEFLIT(lit_4);
DEFLIT(lit_22);
DEFLIT(lit_476);
DEFLIT(lit_482);
DEFLIT(lit_488);
DEFLIT(lit_529);
DEFLIT(lit_220);
DEFLIT(lit_101);
DEFLIT(lit_164);
DEFLIT(lit_37);
DEFLIT(lit_478);
DEFLIT(lit_553);
DEFLIT(lit_393);
DEFLIT(lit_42);
DEFLIT(lit_114);
DEFLIT(lit_533);
DEFLIT(lit_36);
DEFLIT(lit_12);
DEFLIT(lit_217);
DEFLIT(lit_237);
DEFLIT(lit_103);
DEFLIT(lit_171);
DEFLIT(lit_347);
DEFLIT(lit_280);
DEFLIT(lit_296);
DEFLIT(lit_419);
DEFLIT(lit_59);
DEFLIT(lit_226);
DEFLIT(lit_436);
DEFLIT(lit_34);
DEFLIT(lit_25);
DEFLIT(lit_97);
DEFLIT(lit_519);
DEFLIT(lit_437);
DEFLIT(lit_265);
DEFLIT(lit_308);
DEFLIT(lit_109);
DEFLIT(lit_340);
DEFLIT(lit_70);
DEFLIT(lit_295);
DEFLIT(lit_446);
DEFLIT(lit_373);
DEFLIT(lit_550);
DEFLIT(lit_201);
DEFLIT(lit_518);
DEFLIT(lit_131);
DEFLIT(lit_320);
DEFLIT(lit_271);
DEFLIT(lit_21);
DEFLIT(lit_494);
DEFLIT(lit_363);
DEFLIT(lit_350);
DEFLIT(lit_93);
DEFLIT(lit_517);
DEFLIT(lit_204);
DEFLIT(lit_406);
DEFLIT(lit_397);
DEFLIT(lit_377);
DEFLIT(lit_182);
DEFLIT(lit_10);
DEFLIT(lit_379);
DEFLIT(lit_559);
DEFLIT(lit_412);
DEFLIT(lit_53);
DEFLIT(lit_242);
DEFLIT(lit_294);
DEFLIT(lit_542);
DEFLIT(lit_163);
DEFLIT(lit_349);
DEFLIT(lit_18);
DEFLIT(lit_306);
DEFLIT(lit_551);
DEFLIT(lit_262);
DEFLIT(lit_555);
DEFLIT(lit_27);
DEFLIT(lit_207);
DEFLIT(lit_487);
DEFLIT(lit_146);
DEFLIT(lit_113);
DEFLIT(lit_463);
DEFLIT(lit_261);
DEFLIT(lit_486);
DEFLIT(lit_46);
DEFLIT(lit_321);
DEFLIT(lit_567);
DEFLIT(lit_418);
DEFLIT(lit_57);
DEFLIT(lit_221);
DEFLIT(lit_157);
DEFLIT(lit_269);
DEFLIT(lit_14);
DEFLIT(lit_554);
DEFLIT(lit_440);
DEFLIT(lit_299);
DEFLIT(lit_63);
DEFLIT(lit_391);
DEFLIT(lit_232);
DEFLIT(lit_218);
DEFLIT(lit_532);
DEFLIT(lit_156);
DEFLIT(lit_48);
DEFLIT(lit_388);
DEFLIT(lit_141);
DEFLIT(lit_106);
DEFLIT(lit_472);
DEFLIT(lit_544);
DEFLIT(lit_345);
DEFLIT(lit_490);
DEFLIT(lit_177);
DEFLIT(lit_344);
DEFLIT(lit_414);
DEFLIT(lit_424);
DEFLIT(lit_480);
DEFLIT(lit_438);
DEFLIT(lit_259);
DEFLIT(lit_441);
DEFLIT(lit_475);
DEFLIT(lit_268);
DEFLIT(lit_282);
DEFLIT(lit_335);
DEFLIT(lit_197);
DEFLIT(lit_565);
DEFLIT(lit_298);
DEFLIT(lit_331);
DEFLIT(lit_564);
DEFLIT(lit_183);
DEFLIT(lit_404);
DEFLIT(lit_19);
DEFLIT(lit_236);
DEFLIT(lit_13);
DEFLIT(lit_162);
DEFLIT(lit_451);
DEFLIT(lit_534);
DEFLIT(lit_40);
DEFLIT(lit_502);
DEFLIT(lit_168);
DEFLIT(lit_32);
DEFLIT(lit_166);
DEFLIT(lit_334);
DEFLIT(lit_354);
DEFLIT(lit_411);
DEFLIT(lit_130);
DEFLIT(lit_203);
DEFLIT(lit_313);
DEFLIT(lit_515);
DEFLIT(lit_405);
DEFLIT(lit_399);
DEFLIT(lit_355);
DEFLIT(lit_439);
DEFLIT(lit_86);
DEFLIT(lit_208);
DEFLIT(lit_464);
DEFLIT(lit_56);
DEFLIT(lit_44);
DEFLIT(lit_184);
DEFLIT(lit_254);
DEFLIT(lit_67);
DEFLIT(lit_194);
DEFLIT(lit_467);
DEFLIT(lit_96);
DEFLIT(lit_511);
DEFLIT(lit_129);
DEFLIT(lit_390);
DEFLIT(lit_456);
DEFLIT(lit_199);
DEFLIT(lit_473);
DEFLIT(lit_188);
DEFLIT(lit_570);
DEFLIT(lit_563);
DEFLIT(lit_417);
DEFLIT(lit_41);
DEFLIT(lit_546);
DEFLIT(lit_484);
DEFLIT(lit_309);
DEFLIT(lit_155);
DEFLIT(lit_181);
DEFLIT(lit_383);
DEFLIT(lit_454);
DEFLIT(lit_128);
DEFLIT(lit_471);
DEFLIT(lit_558);
DEFLIT(lit_434);
DEFLIT(lit_187);
DEFLIT(lit_432);
DEFLIT(lit_176);
DEFLIT(lit_74);
DEFLIT(lit_327);
DEFLIT(lit_150);
DEFLIT(lit_84);
DEFLIT(lit_543);
DEFLIT(lit_264);
DEFLIT(lit_30);
DEFLIT(lit_71);
DEFLIT(lit_477);
DEFLIT(lit_9);
DEFLIT(lit_556);
DEFLIT(lit_107);
DEFLIT(lit_509);
DEFLIT(lit_127);
DEFLIT(lit_55);
DEFLIT(lit_139);
DEFLIT(lit_31);
DEFLIT(lit_211);
DEFLIT(lit_485);
DEFLIT(lit_68);
DEFLIT(lit_273);
DEFLIT(lit_195);
DEFLIT(lit_238);
DEFLIT(lit_293);
DEFLIT(lit_47);
DEFLIT(lit_253);
DEFLIT(lit_29);
DEFLIT(lit_431);
DEFLIT(lit_510);
DEFLIT(lit_143);
DEFLIT(lit_73);
DEFLIT(lit_375);
DEFLIT(lit_126);
DEFLIT(lit_252);
DEFLIT(lit_392);
DEFLIT(lit_394);
DEFLIT(lit_270);
DEFLIT(lit_367);
DEFLIT(lit_447);
DEFLIT(lit_17);
DEFLIT(lit_557);
DEFLIT(lit_209);
DEFLIT(lit_144);
DEFLIT(lit_43);
DEFLIT(lit_351);
DEFLIT(lit_361);
DEFLIT(lit_135);
DEFLIT(lit_571);
DEFLIT(lit_528);
DEFLIT(lit_323);
DEFLIT(lit_263);
DEFLIT(lit_245);
DEFLIT(lit_401);
DEFLIT(lit_420);
DEFLIT(lit_523);
DEFLIT(lit_433);
DEFLIT(lit_154);
DEFLIT(lit_382);
DEFLIT(lit_291);
DEFLIT(lit_374);
DEFLIT(lit_224);
DEFLIT(lit_491);
DEFLIT(lit_258);
DEFLIT(lit_115);
DEFLIT(lit_175);
DEFLIT(lit_91);
DEFLIT(lit_15);
DEFLIT(lit_250);
DEFLIT(lit_227);
DEFLIT(lit_214);
DEFLIT(lit_255);
DEFLIT(lit_160);
DEFLIT(lit_421);
DEFLIT(lit_90);
DEFLIT(lit_249);
DEFLIT(lit_28);
DEFLIT(lit_428);
DEFLIT(lit_372);
DEFLIT(lit_136);
DEFLIT(lit_142);
DEFLIT(lit_287);
DEFLIT(lit_341);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_appname_setter_1);
LOCFOR(fun_module_loader_app_modname_2);
LOCFOR(fun_module_loader_app_modname_setter_3);
LOCFOR(fun_module_src_file_4);
LOCFOR(fun_module_src_file_setter_5);
LOCFOR(fun_module_mtime_6);
LOCFOR(fun_module_mtime_setter_7);
LOCFOR(fun_module_loader_module_type_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_12);
LOCFOR(fun_13);
LOCFOR(fun_load_module_14);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_16);
LOCFOR(fun_17);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_g2c_ast_28);
LOCFOR(fun_g2c_exp_29);
LOCFOR(fun_compile_load_30);
LOCFOR(fun_g2c_eval_31);
LOCFOR(fun_g2c_eval_32);
LOCFOR(fun_g2c_top_33);
LOCFOR(fun_g2c_clean_34);
LOCFOR(fun_compute_ast_35);
LOCFOR(fun_compute_program_36);
LOCFOR(fun_generate_c_module_37);
LOCFOR(fun_38);
LOCFOR(fun_39);
LOCFOR(fun_generate_c_application_40);
LOCFOR(fun_x_1544_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_44);
LOCFOR(fun_45);
LOCFOR(fun_put_obj_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_52);
LOCFOR(fun_53);
LOCFOR(fun_generate_makefile_54);
LOCFOR(fun_pp_55);
LOCFOR(fun_generate_header_56);
LOCFOR(fun_generate_trailer_57);
LOCFOR(fun_58);
LOCFOR(fun_generate_global_environment_59);
LOCFOR(fun_generate_global_binding_60);
LOCFOR(fun_loop_61);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_loop_63);
LOCFOR(fun_mangle_string_literal_64);
LOCFOR(fun_mangle_string_literal_65);
LOCFOR(fun_process_integer_66);
LOCFOR(fun_mangle_integer_67);
LOCFOR(fun_x_1566_68);
LOCFOR(fun_x_1568_69);
LOCFOR(fun_x_1570_70);
LOCFOR(fun_x_1572_71);
FUNFOR(YevalSg2cYmangler_reset);
LOCFOR(fun_x_1574_73);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_75);
LOCFOR(fun_mangle_raw_name_76);
LOCFOR(fun_mangle_local_name_77);
LOCFOR(fun_mangle_local_name_78);
LOCFOR(fun_x_1578_79);
LOCFOR(fun_80);
LOCFOR(fun_81);
LOCFOR(fun_loop_82);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_84);
LOCFOR(fun_mangle_global_name_85);
LOCFOR(fun_mangle_global_name_86);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_89);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_91);
LOCFOR(fun_mangle_binding_92);
LOCFOR(fun_x_1582_93);
LOCFOR(fun_94);
LOCFOR(fun_95);
LOCFOR(fun_x_1586_96);
LOCFOR(fun_97);
LOCFOR(fun_98);
LOCFOR(fun_x_1590_99);
LOCFOR(fun_loop_100);
LOCFOR(fun_101);
LOCFOR(fun_102);
LOCFOR(fun_gen_result_103);
LOCFOR(fun_x_1593_104);
LOCFOR(fun_gen_depth_105);
LOCFOR(fun_x_1597_106);
LOCFOR(fun_107);
LOCFOR(fun_108);
LOCFOR(fun_x_1601_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_x_1605_112);
LOCFOR(fun_113);
LOCFOR(fun_114);
LOCFOR(fun_x_1607_115);
LOCFOR(fun_generate_quotation_forwards_116);
LOCFOR(fun_x_1610_117);
LOCFOR(fun_generate_quotations_118);
LOCFOR(fun_false_name_119);
LOCFOR(fun_generate_quotation_120);
LOCFOR(fun_generate_quotation_121);
LOCFOR(fun_122);
LOCFOR(fun_generate_quotation_123);
LOCFOR(fun_generate_quotation_124);
LOCFOR(fun_generate_quotation_125);
LOCFOR(fun_loop_126);
LOCFOR(fun_127);
LOCFOR(fun_float_to_c_string_128);
LOCFOR(fun_generate_quotation_129);
LOCFOR(fun_generate_quotation_130);
LOCFOR(fun_x_1620_131);
LOCFOR(fun_generate_quotation_132);
LOCFOR(fun_x_1623_133);
LOCFOR(fun_generate_quotation_134);
LOCFOR(fun_generate_quotation_135);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_137);
LOCFOR(fun_reference_Gc_138);
LOCFOR(fun_to_c_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_gen_ref_141);
LOCFOR(fun_gen_ref_142);
LOCFOR(fun_gen_ref_143);
LOCFOR(fun_gen_ref_144);
LOCFOR(fun_gen_ref_145);
LOCFOR(fun_gen_ref_146);
LOCFOR(fun_to_c_147);
LOCFOR(fun_to_c_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_153);
LOCFOR(fun_to_c_154);
LOCFOR(fun_x_1640_155);
LOCFOR(fun_x_1643_156);
LOCFOR(fun_x_1647_157);
LOCFOR(fun_generate_self_recursive_call_158);
LOCFOR(fun_x_1650_159);
LOCFOR(fun_x_1655_160);
LOCFOR(fun_to_c_161);
LOCFOR(fun_x_1659_162);
LOCFOR(fun_163);
LOCFOR(fun_164);
LOCFOR(fun_to_c_165);
LOCFOR(fun_x_1663_166);
LOCFOR(fun_to_c_167);
LOCFOR(fun_x_1667_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_to_c_170);
LOCFOR(fun_to_c_171);
LOCFOR(fun_to_c_172);
LOCFOR(fun_x_1672_173);
LOCFOR(fun_x_1678_174);
LOCFOR(fun_175);
LOCFOR(fun_176);
LOCFOR(fun_to_c_177);
LOCFOR(fun_178);
LOCFOR(fun_x_1682_179);
LOCFOR(fun_to_c_180);
LOCFOR(fun_funshell_to_c_181);
LOCFOR(fun_182);
LOCFOR(fun_x_1689_183);
LOCFOR(fun_funinit_to_c_184);
LOCFOR(fun_to_c_185);
LOCFOR(fun_x_1694_186);
LOCFOR(fun_out_list_builder_187);
LOCFOR(fun_188);
LOCFOR(fun_gen_fab_list_189);
LOCFOR(fun_generate_function_specs_190);
LOCFOR(fun_191);
LOCFOR(fun_to_c_192);
LOCFOR(fun_to_c_193);
LOCFOR(fun_x_1698_194);
LOCFOR(fun_generate_function_forwards_195);
LOCFOR(fun_x_1703_196);
LOCFOR(fun_197);
LOCFOR(fun_198);
LOCFOR(fun_generate_function_forward_199);
LOCFOR(fun_generate_function_binding_200);
LOCFOR(fun_generate_function_forward_201);
LOCFOR(fun_202);
LOCFOR(fun_generate_function_bodies_203);
LOCFOR(fun_204);
LOCFOR(fun_generate_functions_205);
LOCFOR(fun_generate_closure_structure_206);
LOCFOR(fun_generate_function_body_reference_207);
LOCFOR(fun_x_1712_208);
LOCFOR(fun_209);
LOCFOR(fun_210);
LOCFOR(fun_generate_shadow_args_211);
LOCFOR(fun_generate_return_212);
LOCFOR(fun_generate_return_213);
LOCFOR(fun_primitive_inlinableQ_214);
LOCFOR(fun_x_1720_215);
LOCFOR(fun_216);
LOCFOR(fun_217);
LOCFOR(fun_generate_function_code_218);
LOCFOR(fun_dispatcherQ_219);
LOCFOR(fun_x_1724_220);
LOCFOR(fun_221);
LOCFOR(fun_222);
LOCFOR(fun_223);
LOCFOR(fun_generate_function_code_224);
LOCFOR(fun_x_1727_225);
LOCFOR(fun_generate_local_temporaries_226);
LOCFOR(fun_next_reg_227);
LOCFOR(fun_next_line_228);
LOCFOR(fun_generate_registers_229);
LOCFOR(fun_module_info_name_230);
LOCFOR(fun_maybe_declare_231);
LOCFOR(fun_232);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_x_1730_234);
LOCFOR(fun_235);
LOCFOR(fun_236);
LOCFOR(fun_x_1739_237);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_239);
LOCFOR(fun_module_init_decl_240);
LOCFOR(fun_x_1745_241);
LOCFOR(fun_x_1750_242);
LOCFOR(fun_generate_module_init_243);
LOCFOR(fun_generate_main_244);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_appname_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_4) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_5) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_6) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_7) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_8) {
  P loader_;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_9) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P x_1537F3000;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1537F3000 = DYNREF(YevalSg2cYTdefinitionsT);
  T3 = FUNFAB(fun_9,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_10,1,x_1537F3000);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_12) {
  P tmpF3001;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3001 = T1;
  if (tmpF3001 != YPfalse) {
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

FUNCODEDEF(fun_13) {
  P name_;
  P tmpF3005;
  P src_fileF3004;
  P build_fileF3003;
  P fileF3002;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3002 = T1;
  T3 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF3002);
  build_fileF3003 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF3002);
  src_fileF3004 = T5;
  T9 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF3003);
  T8 = CALL1(1,VARREF(Ynot),T9);
  tmpF3005 = T8;
  if (tmpF3005 != YPfalse) {
    T10 = tmpF3005;
  } else {
    T12 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3004);
    T13 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF3003);
    T11 = CALL2(1,VARREF(YgooSmagYGE),T12,T13);
    T10 = T11;
  }
  T7 = T10;
  if (T7 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF3004,build_fileF3003);
    T6 = T14;
  } else {
    T6 = YPfalse;
  }
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_14) {
  P loader_,name_;
  P out_portF3015;
  P prgF3014;
  P astF3013;
  P out_fileF3012;
  P appnameF3011;
  P src_fileF3010;
  P fileF3009;
  P envF3008;
  P keepmodQF3007;
  P modF3006;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF3006 = T1;
  keepmodQF3007 = YPfalse;
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF3006);
  envF3008 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF3009 = T6;
  T9 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF3009);
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T9);
  src_fileF3010 = T8;
  T11 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3011 = T11;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3009);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3011,T14);
  out_fileF3012 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF3010,modF3006);
  T15 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF3010);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T15,modF3006);
  T16 = (P)YPsu(LITREF(lit_16));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T18 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF3010,envF3008);
  astF3013 = T18;
  T20 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF3013,envF3008);
  prgF3014 = T20;
  T21 = (P)YPsu(LITREF(lit_17));
  (P)YevalSg2cYPprint_cpu_usage(T21);
  T22 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF3012);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T22);
  out_portF3015 = YPfalse;
  out_portF3015 = BOXFAB(out_portF3015);
  T25 = FUNFAB(fun_11,5,out_portF3015,out_fileF3012,prgF3014,astF3013,modF3006);
  T26 = FUNFAB(fun_12,1,out_portF3015);
  T24 = with_cleanup(T25,T26);
  T27 = FUNFAB(fun_13,1,appnameF3011);
  T28 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF3006);
  CALL2(1,VARREF(YgooSmacrosYdo),T27,T28);
  T29 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T29);
  T19 = modF3006;
  T17 = T19;
  T12 = T17;
  T10 = T12;
  T7 = T10;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_16) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXVAL(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXVAL(FREEREF(0)) = T4;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_17) {
  P name_;
  P x_1538F3016;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  x_1538F3016 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1538F3016,name_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1538F3016,LITREF(lit_22));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF3017;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  changedF3017 = Ynil;
  changedF3017 = BOXFAB(changedF3017);
  T2 = FUNFAB(fun_16,1,changedF3017);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T2,loader_);
  T3 = fun_17;
  T4 = BOXVAL(changedF3017);
  CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
  T6 = BOXVAL(changedF3017);
  T5 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T6);
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
loop:
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF3018;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T1 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T2);
  modF3018 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_27));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF3018);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
  T0 = YPfalse;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_30),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_31));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P T0,T1,T2;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXVAL(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_23) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_1540F3019;
  P T0,T1,T2,T3;
LINK_STACK();
loop:
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_1540F3019 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_22,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T3 = FUNFAB(fun_23,1,x_1540F3019);
  T1 = with_cleanup(T2,T3);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_25) {
  P T0;
LINK_STACK();
loop:
  T0 = DYNSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P x_1539F3020;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  x_1539F3020 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T3 = FUNFAB(fun_24,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T4 = FUNFAB(fun_25,1,x_1539F3020);
  T2 = with_cleanup(T3,T4);
  T1 = T2;
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_27) {
  P tmpF3021;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3021 = T1;
  if (tmpF3021 != YPfalse) {
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

FUNCODEDEF(fun_g2c_ast_28) {
  P ast_,env_;
  P out_portF3027;
  P prgF3026;
  P out_fileF3025;
  P fileF3024;
  P nameF3023;
  P modF3022;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF3022 = T1;
  T4 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T6 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T5 = DYNSET(YevalSg2cYTtmp_file_counterT,T6);
  T3 = CALL3(1,VARREF(YgooSruntimeYmsg_to_str),LITREF(lit_35),T4,T5);
  nameF3023 = T3;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF3023);
  fileF3024 = T8;
  T10 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF3024);
  out_fileF3025 = T10;
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF3026 = T12;
  out_portF3027 = YPfalse;
  out_portF3027 = BOXFAB(out_portF3027);
  T15 = FUNFAB(fun_26,5,out_portF3027,out_fileF3025,prgF3026,ast_,modF3022);
  T16 = FUNFAB(fun_27,1,out_portF3027);
  T14 = with_cleanup(T15,T16);
  T11 = fileF3024;
  T9 = T11;
  T7 = T9;
  T2 = T7;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_exp_29) {
  P exp_,env_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_30) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_39));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_40));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_31) {
  P exp_,env_;
  P nameF3028;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF3028 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3028);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_32) {
  P ast_,env_;
  P nameF3029;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF3029 = T1;
  T2 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF3029);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_33) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_34) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_45),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_35) {
  P filename_,ct_env_;
  P astF3031;
  P sexprF3030;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF3030 = T1;
  T2 = (P)YPsu(LITREF(lit_49));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF3030,ct_env_,YPfalse);
  astF3031 = T4;
  T5 = (P)YPsu(LITREF(lit_50));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T3 = astF3031;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compute_program_36) {
  P e_,env_;
  P fltF3036;
  P prgF3035;
  P lftF3034;
  P anaF3033;
  P boxF3032;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),e_);
  boxF3032 = T1;
  T2 = (P)YPsu(LITREF(lit_53));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYanalyze_ast),boxF3032);
  anaF3033 = T4;
  T5 = (P)YPsu(LITREF(lit_54));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYliftX),anaF3033);
  lftF3034 = T7;
  T8 = (P)YPsu(LITREF(lit_55));
  (P)YevalSg2cYPprint_cpu_usage(T8);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF3034);
  prgF3035 = T10;
  T11 = (P)YPsu(LITREF(lit_56));
  (P)YevalSg2cYPprint_cpu_usage(T11);
  T13 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF3035,env_,YPint((P)64));
  fltF3036 = T13;
  T14 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T14);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF3036);
  T15 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T15);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF3036,YPfalse);
  T16 = (P)YPsu(LITREF(lit_59));
  (P)YevalSg2cYPprint_cpu_usage(T16);
  T12 = prgF3035;
  T9 = T12;
  T6 = T9;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_module_37) {
  P code_out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgenerate_header),code_out_,e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),code_out_,mod_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),code_out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),code_out_,T2);
  T3 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),code_out_,mod_);
  } else {
  }
  T5 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),code_out_,mod_,T5);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),code_out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_38) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,YPfalse);
  T2 = BOXVAL(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(2));
  T4 = BOXVAL(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_39) {
  P tmpF3037;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3037 = T1;
  if (tmpF3037 != YPfalse) {
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

FUNCODEDEF(fun_generate_c_application_40) {
  P loader_,mod_;
  P out_portF3041;
  P out_nameF3040;
  P init_nameF3039;
  P appnameF3038;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3038 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3038,LITREF(lit_64));
  init_nameF3039 = T3;
  T6 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF3039);
  T5 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3038,T6);
  out_nameF3040 = T5;
  out_portF3041 = YPfalse;
  out_portF3041 = BOXFAB(out_portF3041);
  T9 = FUNFAB(fun_38,3,out_portF3041,out_nameF3040,mod_);
  T10 = FUNFAB(fun_39,1,out_portF3041);
  T8 = with_cleanup(T9,T10);
  T4 = YPfalse;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1544_41) {
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

FUNCODEDEF(fun_42) {
  P return_;
  P x_1543F3052;
  P x_1543F3051;
  P x_1543F3050;
  P x_1543F3049;
  P x_1543F3048;
  P x_1543F3047;
  P bodyF3046;
  P loaderF3045;
  P modF3044;
  P x_1543F3043;
  P x_1544F3042;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1544_41,1);
  x_1544F3042 = T1;
  FUNINIT(x_1544F3042, 1,return_);
  x_1543F3043 = FREEREF(0);
  modF3044 = YPfalse;
  modF3044 = BOXFAB(modF3044);
  loaderF3045 = YPfalse;
  loaderF3045 = BOXFAB(loaderF3045);
  bodyF3046 = YPfalse;
  bodyF3046 = BOXFAB(bodyF3046);
  T9 = CALL2(1,VARREF(YisaQ),x_1543F3043,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1543F3043,LITREF(lit_69),x_1544F3042);
    x_1543F3047 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1543F3047,x_1544F3042);
    x_1543F3048 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3048,x_1544F3042);
    BOXVAL(modF3044) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1543F3048);
    x_1543F3049 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1543F3049,x_1544F3042);
    BOXVAL(loaderF3045) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1543F3049);
    x_1543F3050 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3050,x_1544F3042);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1543F3047);
    x_1543F3051 = T21;
    BOXVAL(bodyF3046) = x_1543F3051;
    x_1543F3052 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1543F3052,x_1544F3042);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1544F3042,LITREF(lit_70),x_1543F3043);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_71));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_72));
  T33 = BOXVAL(modF3044);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T31 = CALL2(1,VARREF(YgooSmacrosYcat),T32,Ynil);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T34 = BOXVAL(bodyF3046);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T34,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = BOXVAL(loaderF3045);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T35,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_42,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P i_;
  P x_1548F3053;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1548F3053 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1548F3053,LITREF(lit_82));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1548F3053,i_);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1548F3053,LITREF(lit_83));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_45) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_44,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_46) {
  P name_;
  P x_1551F3054;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1551F3054 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1551F3054,LITREF(lit_87));
  T3 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T2 = CALL1(1,VARREF(YgooSsystemYobj_filename),T3);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1551F3054,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1551F3054,LITREF(lit_88));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P name_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T4 = CALL1(1,VARREF(YgooStypesYlen),name_);
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)2));
  T2 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T3);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T2);
  T0 = CALL1(0,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_48) {
  P n_;
  P T0;
  P a1;
LINK_STACK();
  ARG(n_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P mod_;
  P put_objF3055;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNSHELL(1,fun_put_obj_46,1);
  put_objF3055 = T1;
  FUNINIT(put_objF3055, 1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF3055,T2);
  T4 = FUNFAB(fun_47,1,put_objF3055);
  T6 = fun_48;
  T7 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T5 = CALL2(1,VARREF(YgooSmacrosYmap),T6,T7);
  T3 = CALL2(1,VARREF(YgooSmacrosYdo),T4,T5);
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P l_;
  P x_1555F3056;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(l_, 0);
loop:
  T1 = BOXVAL(FREEREF(0));
  x_1555F3056 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1555F3056,LITREF(lit_96));
  T2 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1555F3056,l_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_51) {
  P mod_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(mod_, 0);
loop:
  T1 = FUNFAB(fun_50,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_52) {
  P x_1556F3065;
  P x_1554F3064;
  P x_1553F3063;
  P x_1552F3062;
  P x_1550F3061;
  P x_1549F3060;
  P x_1547F3059;
  P x_1546F3058;
  P x_1545F3057;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
LINK_STACK();
loop:
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXVAL(FREEREF(0)) = T0;
  T1 = BOXVAL(FREEREF(0));
  x_1545F3057 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_1545F3057,LITREF(lit_76));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1545F3057,FREEREF(2));
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_1545F3057,LITREF(lit_77));
  T3 = BOXVAL(FREEREF(0));
  x_1546F3058 = T3;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3058,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3058,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_1546F3058,LITREF(lit_78));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1546F3058,FREEREF(2));
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1546F3058,LITREF(lit_79));
  T5 = BOXVAL(FREEREF(0));
  x_1547F3059 = T5;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1547F3059,LITREF(lit_80));
  T7 = FUNFAB(fun_45,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T8 = BOXVAL(FREEREF(0));
  x_1549F3060 = T8;
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1549F3060,LITREF(lit_84));
  T10 = BOXVAL(FREEREF(0));
  x_1550F3061 = T10;
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1550F3061,LITREF(lit_85));
  T12 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T13 = BOXVAL(FREEREF(0));
  x_1552F3062 = T13;
  CALL2(1,VARREF(YgooSioSportYputs),x_1552F3062,LITREF(lit_90));
  T14 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1552F3062,T14);
  T15 = CALL2(1,VARREF(YgooSioSportYputs),x_1552F3062,LITREF(lit_91));
  T16 = BOXVAL(FREEREF(0));
  x_1553F3063 = T16;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1553F3063,FREEREF(5));
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1553F3063,LITREF(lit_92));
  T18 = BOXVAL(FREEREF(0));
  x_1554F3064 = T18;
  CALL2(1,VARREF(YgooSioSportYputs),x_1554F3064,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1554F3064,FREEREF(5));
  T19 = CALL2(1,VARREF(YgooSioSportYputs),x_1554F3064,LITREF(lit_94));
  T20 = FUNFAB(fun_51,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXVAL(FREEREF(0));
  x_1556F3065 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_1556F3065,LITREF(lit_97));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1556F3065,FREEREF(5));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),x_1556F3065,LITREF(lit_98));
  T21 = T23;
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_53) {
  P tmpF3066;
  P T0,T1,T2,T3,T4;
LINK_STACK();
loop:
  T1 = BOXVAL(FREEREF(0));
  tmpF3066 = T1;
  if (tmpF3066 != YPfalse) {
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

FUNCODEDEF(fun_generate_makefile_54) {
  P loader_;
  P code_outF3072;
  P out_nameF3071;
  P sepF3070;
  P exe_nameF3069;
  P init_nameF3068;
  P appnameF3067;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1;
LINK_STACK();
  ARG(loader_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF3067 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF3067,LITREF(lit_74));
  init_nameF3068 = T3;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF3067);
  exe_nameF3069 = T5;
  sepF3070 = VARREF(YgooSsystemYTpath_separatorT);
  T8 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF3067,LITREF(lit_75));
  out_nameF3071 = T8;
  code_outF3072 = YPfalse;
  code_outF3072 = BOXFAB(code_outF3072);
  T12 = FUNFAB(fun_52,6,code_outF3072,out_nameF3071,sepF3070,loader_,init_nameF3068,exe_nameF3069);
  T13 = FUNFAB(fun_53,1,code_outF3072);
  T11 = with_cleanup(T12,T13);
  T9 = T11;
  T7 = T9;
  T6 = T7;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_pp_55) {
  P e_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),code_out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_56) {
  P code_out_,e_;
  P x_1559F3075;
  P x_1558F3074;
  P x_1557F3073;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1557F3073 = code_out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_1557F3073,LITREF(lit_101));
  x_1558F3074 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1558F3074,LITREF(lit_102));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_1559F3075 = code_out_;
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1559F3075,LITREF(lit_103));
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_trailer_57) {
  P code_out_;
  P x_1560F3076;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(code_out_, 0);
loop:
  x_1560F3076 = code_out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1560F3076,LITREF(lit_105));
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P binding_;
  P T0,T1,T2;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_59) {
  P code_out_,mod_;
  P x_1561F3077;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  x_1561F3077 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1561F3077,LITREF(lit_107));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1561F3077,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1561F3077,LITREF(lit_108));
  T3 = FUNFAB(fun_58,2,code_out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_60) {
  P code_out_,importedQ_,gb_;
  P x_1564F3084;
  P x_1563F3083;
  P x_1562F3082;
  P nameF3081;
  P tmpF3080;
  P tmpF3079;
  P kindF3078;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF3078 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3078,LITREF(lit_113));
  tmpF3079 = T4;
  if (tmpF3079 != YPfalse) {
    T5 = tmpF3079;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3078,LITREF(lit_114));
    tmpF3080 = T7;
    if (tmpF3080 != YPfalse) {
      T8 = tmpF3080;
    } else {
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),kindF3078,LITREF(lit_115));
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF3081 = T11;
    x_1562F3082 = kindF3078;
    x_1563F3083 = VARREF(YgooSmacrosYEE);
    T15 = CALL2(1,x_1563F3083,x_1562F3082,LITREF(lit_114));
    if (T15 != YPfalse) {
      T14 = LITREF(lit_116);
    } else {
      T17 = CALL2(1,x_1563F3083,x_1562F3082,LITREF(lit_115));
      if (T17 != YPfalse) {
        T16 = LITREF(lit_117);
      } else {
        T16 = LITREF(lit_118);
      }
      T14 = T16;
    }
    T13 = T14;
    T12 = T13;
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T12);
    x_1564F3084 = code_out_;
    if (importedQ_ != YPfalse) {
      T19 = LITREF(lit_119);
    } else {
      T19 = LITREF(lit_120);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3084,T19);
    CALL2(1,VARREF(YgooSioSportYputs),x_1564F3084,LITREF(lit_121));
    T20 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3084,T20);
    CALL2(1,VARREF(YgooSioSportYputs),x_1564F3084,LITREF(lit_122));
    T22 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T22);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3084,T21);
    CALL2(1,VARREF(YgooSioSportYputs),x_1564F3084,LITREF(lit_123));
    T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3081);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1564F3084,T23);
    T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1564F3084,LITREF(lit_124));
    T18 = T24;
    T10 = T18;
    T2 = T10;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_61) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(1),i_);
    CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,FREEREF(2),i_);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P loopF3087;
  P stringF3086;
  P buffer_sizeF3085;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T1,VARREF(YLintG));
  buffer_sizeF3085 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF3085);
  check_type(T3,VARREF(YLstrG));
  stringF3086 = T3;
  T4 = FUNSHELL(1,fun_loop_61,4);
  loopF3087 = T4;
  FUNINIT(loopF3087, 4,buffer_sizeF3085,buffer_,stringF3086,loopF3087);
  T5 = CALL1(0,loopF3087,YPint((P)0));
  T2 = stringF3086;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_loop_63) {
  P i_;
  P encF3089;
  P cF3088;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
    T0 = T2;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(1),i_);
    cF3088 = T4;
    T7 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF3088);
    T6 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T7);
    encF3089 = T6;
    T8 = CALL2(1,VARREF(YgooSmathYE),encF3089,YPfalse);
    if (T8 != YPfalse) {
      T9 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF3088);
    } else {
      T10 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF3089);
    }
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T12;
    i_ = a1;
    goto loop;
    T5 = T11;
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_64) {
  P str_;
  P loopF3091;
  P lenF3090;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(str_, 0);
loop:
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T1 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF3090 = T1;
  T3 = FUNSHELL(1,fun_loop_63,3);
  loopF3091 = T3;
  FUNINIT(loopF3091, 3,lenF3090,str_,loopF3091);
  T4 = CALL1(0,loopF3091,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_65) {
  P sym_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(sym_, 0);
loop:
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_66) {
  P number_,index_;
  P resultF3097;
  P resultF3096;
  P digitF3095;
  P remainderF3094;
  P quotientF3093;
  P tup32F3092;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup32F3092 = T1;
  T3 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3092,YPint((P)0));
  check_type(T3,VARREF(YLintG));
  quotientF3093 = T3;
  T5 = CALL2(1,VARREF(YgooSmacrosYelt),tup32F3092,YPint((P)1));
  check_type(T5,VARREF(YLintG));
  remainderF3094 = T5;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF3094);
  check_type(T7,VARREF(YLchrG));
  digitF3095 = T7;
  T9 = CALL2(1,VARREF(YgooSmathYE),quotientF3093,YPint((P)0));
  if (T9 != YPfalse) {
    T11 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T11,VARREF(YgooScolsSvecYLvecG));
    resultF3096 = T11;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3095,resultF3096,YPint((P)0));
    T10 = resultF3096;
    T8 = T10;
  } else {
    T14 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T13 = CALL2(1,FREEREF(0),quotientF3093,T14);
    check_type(T13,VARREF(YgooScolsSvecYLvecG));
    resultF3097 = T13;
    T16 = CALL1(1,VARREF(YgooStypesYlen),resultF3097);
    T15 = CALL2(1,VARREF(YgooSmathY_),T16,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF3095,resultF3097,T15);
    T12 = resultF3097;
    T8 = T12;
  }
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_67) {
  P number_;
  P process_integerF3098;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(number_, 0);
loop:
  T2 = FUNSHELL(1,fun_process_integer_66,1);
  process_integerF3098 = T2;
  FUNINIT(process_integerF3098, 1,process_integerF3098);
  T3 = CALL2(1,process_integerF3098,number_,YPint((P)1));
  T1 = T3;
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1566_68) {
  P x_1565_;
  P iF3099;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1565_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1565_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1565_);
    iF3099 = T4;
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_integer),iF3099);
    T5 = CALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T6,VARREF(YevalSg2cYDescape_separator));
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3099);
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1565_);
    a1 = T8;
    x_1565_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1568_69) {
  P x_1567_;
  P mangleF3100;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1567_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1567_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1567_);
    mangleF3100 = T4;
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3100,YPint((P)1));
    T7 = CALL2(1,VARREF(YgooSmacrosYelt),mangleF3100,YPint((P)0));
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),T6);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1567_);
    a1 = T9;
    x_1567_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1570_70) {
  P x_1569_;
  P iF3101;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1569_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1569_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1569_);
    iF3101 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3101);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3101);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1569_);
    a1 = T7;
    x_1569_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1572_71) {
  P x_1571_;
  P iF3102;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(x_1571_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1571_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1571_);
    iF3102 = T4;
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF3102);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),T5,FREEREF(0),iF3102);
    T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1571_);
    a1 = T7;
    x_1571_ = a1;
    goto loop;
    T3 = T6;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
  P a1;
LINK_STACK();
  ARG(buffer_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1574_73) {
  P x_1573_;
  P cF3103;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1573_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1573_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1573_);
    cF3103 = T4;
    T7 = CALL1(1,VARREF(YgooSmathYto_lower),cF3103);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T7);
    T5 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T6);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(0),T5);
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1573_);
    a1 = T9;
    x_1573_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P x_1574F3104;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T0 = FUNSHELL(1,fun_x_1574_73,2);
  x_1574F3104 = T0;
  FUNINIT(x_1574F3104, 2,buf_,x_1574F3104);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  T1 = CALL1(0,x_1574F3104,T2);
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_75) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_76) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_77) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_78) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1578_79) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_182));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_80) {
  P return_;
  P x_1577F3111;
  P x_1577F3110;
  P x_1577F3109;
  P valueF3108;
  P placeF3107;
  P x_1577F3106;
  P x_1578F3105;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1578_79,1);
  x_1578F3105 = T1;
  FUNINIT(x_1578F3105, 1,return_);
  x_1577F3106 = FREEREF(0);
  placeF3107 = YPfalse;
  placeF3107 = BOXFAB(placeF3107);
  valueF3108 = YPfalse;
  valueF3108 = BOXFAB(valueF3108);
  T7 = CALL2(1,VARREF(YisaQ),x_1577F3106,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1577F3106,LITREF(lit_182),x_1578F3105);
    x_1577F3109 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1577F3109,x_1578F3105);
    BOXVAL(placeF3107) = T11;
    T12 = CALL1(1,VARREF(Ytail),x_1577F3109);
    x_1577F3110 = T12;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1577F3110,x_1578F3105);
    BOXVAL(valueF3108) = T14;
    T15 = CALL1(1,VARREF(Ytail),x_1577F3110);
    x_1577F3111 = T15;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1577F3111,x_1578F3105);
    T13 = T16;
    T10 = T13;
    T8 = T10;
  } else {
    T17 = CALL2(1,x_1578F3105,LITREF(lit_70),x_1577F3106);
  }
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_183));
  T21 = BOXVAL(placeF3107);
  T20 = CALL1(1,VARREF(Ylst),T21);
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_184));
  T26 = BOXVAL(placeF3107);
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = BOXVAL(valueF3108);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,Ynil);
  T22 = CALL1(1,VARREF(Ylst),T23);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T22,Ynil);
  T5 = T18;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_80,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_82) {
  P i_;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),i_,FREEREF(0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),FREEREF(2),i_);
    CALL2(1,VARREF(YgooScolsScolxYaddX),FREEREF(1),T2);
    T4 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T4;
    i_ = a1;
    goto loop;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P loopF3113;
  P lenF3112;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF3112 = T1;
  T3 = FUNSHELL(1,fun_loop_82,4);
  loopF3113 = T3;
  FUNINIT(loopF3113, 4,lenF3112,buf_,name_,loopF3113);
  T4 = CALL1(0,loopF3113,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_84) {
  P buf_,mod_;
  P nameF3115;
  P tmpF3114;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),mod_);
  tmpF3114 = T2;
  if (tmpF3114 != YPfalse) {
    T3 = tmpF3114;
  } else {
    T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T9 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T9);
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T7,T8);
    T5 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T6);
    T4 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T5,mod_);
    T3 = T4;
  }
  T1 = T3;
  nameF3115 = T1;
  T10 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF3115);
  T0 = T10;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_85) {
  P mod_,name_;
  P tmpF3116;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF3116 = T2;
  if (tmpF3116 != YPfalse) {
    T3 = tmpF3116;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,VARREF(YevalSastYDgoo_boot_module_name));
    T3 = T4;
  }
  T1 = T3;
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T6 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T7 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T7);
}

FUNCODEDEF(fun_mangle_global_name_86) {
  P mod_,name_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_190));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_89) {
  P binding_;
  P tmpF3117;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3117 = T1;
  if (tmpF3117 != YPfalse) {
    T2 = tmpF3117;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T5 = CALL2(1,VARREF(YgooSmacrosYEE),T6,LITREF(lit_192));
    if (T5 != YPfalse) {
      T8 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T8);
      T4 = T7;
    } else {
      T10 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T11 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T9 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T10,T11);
      T4 = T9;
    }
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
loop:
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_91) {
  P binding_;
  P tmpF3118;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3118 = T1;
  if (tmpF3118 != YPfalse) {
    T2 = tmpF3118;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T5);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_92) {
  P binding_;
  P tmpF3119;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),binding_);
  tmpF3119 = T1;
  if (tmpF3119 != YPfalse) {
    T2 = tmpF3119;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T5 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T6);
    T7 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T5,T7);
    T3 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T4,binding_);
    T2 = T3;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1582_93) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_196));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_94) {
  P return_;
  P out_varF3131;
  P x_1581F3130;
  P x_1581F3129;
  P x_1581F3128;
  P x_1581F3127;
  P x_1581F3126;
  P x_1581F3125;
  P bodyF3124;
  P clausesF3123;
  P out_valF3122;
  P x_1581F3121;
  P x_1582F3120;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1582_93,1);
  x_1582F3120 = T1;
  FUNINIT(x_1582F3120, 1,return_);
  x_1581F3121 = FREEREF(0);
  out_valF3122 = YPfalse;
  out_valF3122 = BOXFAB(out_valF3122);
  clausesF3123 = YPfalse;
  clausesF3123 = BOXFAB(clausesF3123);
  bodyF3124 = YPfalse;
  bodyF3124 = BOXFAB(bodyF3124);
  T9 = CALL2(1,VARREF(YisaQ),x_1581F3121,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1581F3121,LITREF(lit_196),x_1582F3120);
    x_1581F3125 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1581F3125,x_1582F3120);
    BOXVAL(out_valF3122) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1581F3125);
    x_1581F3126 = T14;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1581F3126,x_1582F3120);
    x_1581F3127 = T16;
    BOXVAL(clausesF3123) = x_1581F3127;
    x_1581F3128 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1581F3128,x_1582F3120);
    T17 = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1581F3126);
    x_1581F3129 = T19;
    BOXVAL(bodyF3124) = x_1581F3129;
    x_1581F3130 = Ynil;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1581F3130,x_1582F3120);
    T20 = T21;
    T15 = T20;
    T12 = T15;
    T10 = T12;
  } else {
    T22 = CALL2(1,x_1582F3120,LITREF(lit_70),x_1581F3121);
  }
  T24 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3131 = T24;
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T31 = CALL1(1,VARREF(Ylst),out_varF3131);
  T33 = BOXVAL(out_valF3122);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,Ynil);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_198));
  T39 = BOXVAL(clausesF3123);
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_200));
  T48 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T49 = CALL1(1,VARREF(Ylst),YPtrue);
  T47 = CALL3(1,VARREF(YgooSmacrosYcat),T48,T49,Ynil);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T52 = CALL1(1,VARREF(Ylst),LITREF(lit_201));
  T53 = CALL1(1,VARREF(Ylst),YPfalse);
  T51 = CALL3(1,VARREF(YgooSmacrosYcat),T52,T53,Ynil);
  T50 = CALL1(1,VARREF(Ylst),T51);
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T50,Ynil);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T41 = CALL3(1,VARREF(YgooSmacrosYcat),T42,T43,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T38 = CALL3(1,VARREF(YgooSmacrosYcat),T39,T40,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T56 = CALL1(1,VARREF(Ylst),LITREF(lit_202));
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_199));
  T60 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T61 = CALL1(1,VARREF(Ylst),out_varF3131);
  T62 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T59 = CALL4(1,VARREF(YgooSmacrosYcat),T60,T61,T62,Ynil);
  T58 = CALL1(1,VARREF(Ylst),T59);
  T55 = CALL4(1,VARREF(YgooSmacrosYcat),T56,T57,T58,Ynil);
  T54 = CALL1(1,VARREF(Ylst),T55);
  T63 = BOXVAL(bodyF3124);
  T35 = CALL5(1,VARREF(YgooSmacrosYcat),T36,T37,T54,T63,Ynil);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T25 = CALL4(1,VARREF(YgooSmacrosYcat),T26,T27,T34,Ynil);
  T23 = T25;
  T7 = T23;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_94,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1586_96) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_205));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_97) {
  P return_;
  P out_varF3141;
  P x_1585F3140;
  P x_1585F3139;
  P x_1585F3138;
  P x_1585F3137;
  P x_1585F3136;
  P bodyF3135;
  P out_valF3134;
  P x_1585F3133;
  P x_1586F3132;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1586_96,1);
  x_1586F3132 = T1;
  FUNINIT(x_1586F3132, 1,return_);
  x_1585F3133 = FREEREF(0);
  out_valF3134 = YPfalse;
  out_valF3134 = BOXFAB(out_valF3134);
  bodyF3135 = YPfalse;
  bodyF3135 = BOXFAB(bodyF3135);
  T7 = CALL2(1,VARREF(YisaQ),x_1585F3133,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1585F3133,LITREF(lit_205),x_1586F3132);
    x_1585F3136 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1585F3136,x_1586F3132);
    x_1585F3137 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1585F3137,x_1586F3132);
    BOXVAL(out_valF3134) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1585F3137);
    x_1585F3138 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1585F3138,x_1586F3132);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1585F3136);
    x_1585F3139 = T16;
    BOXVAL(bodyF3135) = x_1585F3139;
    x_1585F3140 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1585F3140,x_1586F3132);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1586F3132,LITREF(lit_70),x_1585F3133);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3141 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T28 = CALL1(1,VARREF(Ylst),out_varF3141);
  T30 = BOXVAL(out_valF3134);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T34 = CALL1(1,VARREF(Ylst),out_varF3141);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T36 = BOXVAL(bodyF3135);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T40 = CALL1(1,VARREF(Ylst),out_varF3141);
  T41 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T41,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T37,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_97,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1590_99) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_207));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_100) {
  P forms_,body_,firstQ_;
  P tmpF3142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3;
LINK_STACK();
  ARG(forms_, 0);
  ARG(body_, 1);
  ARG(firstQ_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),body_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),forms_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),body_);
    tmpF3142 = firstQ_;
    if (tmpF3142 != YPfalse) {
      T8 = tmpF3142;
    } else {
      T10 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
      T11 = CALL1(1,VARREF(Ylst),FREEREF(0));
      T12 = CALL1(1,VARREF(Ylst),YPchr((P)44));
      T9 = CALL4(1,VARREF(YgooSmacrosYcat),T10,T11,T12,Ynil);
      T8 = T9;
    }
    T7 = T8;
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,forms_);
    T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,T6);
    T13 = CALL1(1,VARREF(Ytail),body_);
    a1 = T4;
    a2 = T13;
    a3 = YPfalse;
    forms_ = a1;
    body_ = a2;
    firstQ_ = a3;
    goto loop;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_101) {
  P return_;
  P loopF3153;
  P out_varF3152;
  P x_1589F3151;
  P x_1589F3150;
  P x_1589F3149;
  P x_1589F3148;
  P x_1589F3147;
  P bodyF3146;
  P out_valF3145;
  P x_1589F3144;
  P x_1590F3143;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1590_99,1);
  x_1590F3143 = T1;
  FUNINIT(x_1590F3143, 1,return_);
  x_1589F3144 = FREEREF(0);
  out_valF3145 = YPfalse;
  out_valF3145 = BOXFAB(out_valF3145);
  bodyF3146 = YPfalse;
  bodyF3146 = BOXFAB(bodyF3146);
  T7 = CALL2(1,VARREF(YisaQ),x_1589F3144,VARREF(YLlstG));
  if (T7 != YPfalse) {
    T9 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1589F3144,LITREF(lit_207),x_1590F3143);
    x_1589F3147 = T9;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1589F3147,x_1590F3143);
    x_1589F3148 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1589F3148,x_1590F3143);
    BOXVAL(out_valF3145) = T13;
    T14 = CALL1(1,VARREF(Ytail),x_1589F3148);
    x_1589F3149 = T14;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1589F3149,x_1590F3143);
    T12 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1589F3147);
    x_1589F3150 = T16;
    BOXVAL(bodyF3146) = x_1589F3150;
    x_1589F3151 = Ynil;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1589F3151,x_1590F3143);
    T17 = T18;
    T10 = T17;
    T8 = T10;
  } else {
    T19 = CALL2(1,x_1590F3143,LITREF(lit_70),x_1589F3144);
  }
  T21 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF3152 = T21;
  T23 = CALL1(1,VARREF(Ylst),LITREF(lit_197));
  T28 = CALL1(1,VARREF(Ylst),out_varF3152);
  T30 = BOXVAL(out_valF3145);
  T29 = CALL1(1,VARREF(Ylst),T30);
  T27 = CALL3(1,VARREF(YgooSmacrosYcat),T28,T29,Ynil);
  T26 = CALL1(1,VARREF(Ylst),T27);
  T25 = CALL2(1,VARREF(YgooSmacrosYcat),T26,Ynil);
  T24 = CALL1(1,VARREF(Ylst),T25);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T34 = CALL1(1,VARREF(Ylst),out_varF3152);
  T35 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T32 = CALL4(1,VARREF(YgooSmacrosYcat),T33,T34,T35,Ynil);
  T31 = CALL1(1,VARREF(Ylst),T32);
  T37 = FUNSHELL(1,fun_loop_100,2);
  loopF3153 = T37;
  FUNINIT(loopF3153, 2,out_varF3152,loopF3153);
  T39 = BOXVAL(bodyF3146);
  T38 = CALL3(0,loopF3153,Ynil,T39,YPtrue);
  T36 = T38;
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_203));
  T43 = CALL1(1,VARREF(Ylst),out_varF3152);
  T44 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T43,T44,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T22 = CALLN(1,VARREF(YgooSmacrosYcat),6,T23,T24,T31,T36,T40,Ynil);
  T20 = T22;
  T5 = T20;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_102) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_101,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_103) {
  P e_,d_,code_out_;
  P tmpF3157;
  P x_1591F3156;
  P tmpF3155;
  P regF3154;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3154 = T1;
  tmpF3155 = regF3154;
  if (tmpF3155 != YPfalse) {
    x_1591F3156 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1591F3156,LITREF(lit_212));
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3154);
    CALL2(1,VARREF(YgooSioSportYputs),x_1591F3156,T6);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1591F3156,LITREF(lit_213));
    T5 = T7;
    tmpF3157 = T5;
    if (tmpF3157 != YPfalse) {
      T8 = YPtrue;
    } else {
      T8 = YPfalse;
    }
    T4 = T8;
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_1593_104) {
  P x_1592_;
  P iF3158;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1592_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1592_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1592_);
    iF3158 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_217));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1592_);
    a1 = T6;
    x_1592_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_depth_105) {
  P d_,code_out_;
  P x_1593F3159;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(d_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1593_104,2);
  x_1593F3159 = T1;
  FUNINIT(x_1593F3159, 2,code_out_,x_1593F3159);
  T4 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1593F3159,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1597_106) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_219));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_107) {
  P return_;
  P x_1596F3170;
  P x_1596F3169;
  P x_1596F3168;
  P x_1596F3167;
  P x_1596F3166;
  P x_1596F3165;
  P bodyF3164;
  P code_outF3163;
  P dF3162;
  P x_1596F3161;
  P x_1597F3160;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1597_106,1);
  x_1597F3160 = T1;
  FUNINIT(x_1597F3160, 1,return_);
  x_1596F3161 = FREEREF(0);
  dF3162 = YPfalse;
  dF3162 = BOXFAB(dF3162);
  code_outF3163 = YPfalse;
  code_outF3163 = BOXFAB(code_outF3163);
  bodyF3164 = YPfalse;
  bodyF3164 = BOXFAB(bodyF3164);
  T9 = CALL2(1,VARREF(YisaQ),x_1596F3161,VARREF(YLlstG));
  if (T9 != YPfalse) {
    T11 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1596F3161,LITREF(lit_219),x_1597F3160);
    x_1596F3165 = T11;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1596F3165,x_1597F3160);
    x_1596F3166 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1596F3166,x_1597F3160);
    BOXVAL(dF3162) = T15;
    T16 = CALL1(1,VARREF(Ytail),x_1596F3166);
    x_1596F3167 = T16;
    T18 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1596F3167,x_1597F3160);
    BOXVAL(code_outF3163) = T18;
    T19 = CALL1(1,VARREF(Ytail),x_1596F3167);
    x_1596F3168 = T19;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1596F3168,x_1597F3160);
    T17 = T20;
    T14 = T17;
    T21 = CALL1(1,VARREF(Ytail),x_1596F3165);
    x_1596F3169 = T21;
    BOXVAL(bodyF3164) = x_1596F3169;
    x_1596F3170 = Ynil;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1596F3170,x_1597F3160);
    T22 = T23;
    T12 = T22;
    T10 = T12;
  } else {
    T24 = CALL2(1,x_1597F3160,LITREF(lit_70),x_1596F3161);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_220));
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_214));
  T31 = BOXVAL(dF3162);
  T30 = CALL1(1,VARREF(Ylst),T31);
  T33 = BOXVAL(code_outF3163);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T28 = CALL4(1,VARREF(YgooSmacrosYcat),T29,T30,T32,Ynil);
  T27 = CALL1(1,VARREF(Ylst),T28);
  T34 = BOXVAL(bodyF3164);
  T37 = CALL1(1,VARREF(Ylst),LITREF(lit_221));
  T39 = BOXVAL(code_outF3163);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_222));
  T36 = CALL4(1,VARREF(YgooSmacrosYcat),T37,T38,T40,Ynil);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T25 = CALL5(1,VARREF(YgooSmacrosYcat),T26,T27,T34,T35,Ynil);
  T7 = T25;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_108) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_107,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1601_109) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_224));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P return_;
  P x_1600F3183;
  P x_1600F3182;
  P x_1600F3181;
  P x_1600F3180;
  P x_1600F3179;
  P x_1600F3178;
  P x_1600F3177;
  P bodyF3176;
  P code_outF3175;
  P dF3174;
  P eF3173;
  P x_1600F3172;
  P x_1601F3171;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1601_109,1);
  x_1601F3171 = T1;
  FUNINIT(x_1601F3171, 1,return_);
  x_1600F3172 = FREEREF(0);
  eF3173 = YPfalse;
  eF3173 = BOXFAB(eF3173);
  dF3174 = YPfalse;
  dF3174 = BOXFAB(dF3174);
  code_outF3175 = YPfalse;
  code_outF3175 = BOXFAB(code_outF3175);
  bodyF3176 = YPfalse;
  bodyF3176 = BOXFAB(bodyF3176);
  T11 = CALL2(1,VARREF(YisaQ),x_1600F3172,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1600F3172,LITREF(lit_224),x_1601F3171);
    x_1600F3177 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1600F3177,x_1601F3171);
    x_1600F3178 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1600F3178,x_1601F3171);
    BOXVAL(eF3173) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1600F3178);
    x_1600F3179 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1600F3179,x_1601F3171);
    BOXVAL(dF3174) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1600F3179);
    x_1600F3180 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1600F3180,x_1601F3171);
    BOXVAL(code_outF3175) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1600F3180);
    x_1600F3181 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1600F3181,x_1601F3171);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1600F3177);
    x_1600F3182 = T26;
    BOXVAL(bodyF3176) = x_1600F3182;
    x_1600F3183 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1600F3183,x_1601F3171);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1601F3171,LITREF(lit_70),x_1600F3172);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_219));
  T35 = BOXVAL(dF3174);
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = BOXVAL(code_outF3175);
  T36 = CALL1(1,VARREF(Ylst),T37);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T36,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_210));
  T42 = BOXVAL(eF3173);
  T41 = CALL1(1,VARREF(Ylst),T42);
  T44 = BOXVAL(dF3174);
  T43 = CALL1(1,VARREF(Ylst),T44);
  T46 = BOXVAL(code_outF3175);
  T45 = CALL1(1,VARREF(Ylst),T46);
  T39 = CALL5(1,VARREF(YgooSmacrosYcat),T40,T41,T43,T45,Ynil);
  T38 = CALL1(1,VARREF(Ylst),T39);
  T47 = BOXVAL(bodyF3176);
  T30 = CALL5(1,VARREF(YgooSmacrosYcat),T31,T32,T38,T47,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_110,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1605_112) {
  P msg_,args_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_226));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_113) {
  P return_;
  P x_1604F3196;
  P x_1604F3195;
  P x_1604F3194;
  P x_1604F3193;
  P x_1604F3192;
  P x_1604F3191;
  P x_1604F3190;
  P bodyF3189;
  P code_outF3188;
  P dF3187;
  P eF3186;
  P x_1604F3185;
  P x_1605F3184;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T1 = FUNSHELL(0,fun_x_1605_112,1);
  x_1605F3184 = T1;
  FUNINIT(x_1605F3184, 1,return_);
  x_1604F3185 = FREEREF(0);
  eF3186 = YPfalse;
  eF3186 = BOXFAB(eF3186);
  dF3187 = YPfalse;
  dF3187 = BOXFAB(dF3187);
  code_outF3188 = YPfalse;
  code_outF3188 = BOXFAB(code_outF3188);
  bodyF3189 = YPfalse;
  bodyF3189 = BOXFAB(bodyF3189);
  T11 = CALL2(1,VARREF(YisaQ),x_1604F3185,VARREF(YLlstG));
  if (T11 != YPfalse) {
    T13 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_1604F3185,LITREF(lit_226),x_1605F3184);
    x_1604F3190 = T13;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_1604F3190,x_1605F3184);
    x_1604F3191 = T15;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1604F3191,x_1605F3184);
    BOXVAL(eF3186) = T17;
    T18 = CALL1(1,VARREF(Ytail),x_1604F3191);
    x_1604F3192 = T18;
    T20 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1604F3192,x_1605F3184);
    BOXVAL(dF3187) = T20;
    T21 = CALL1(1,VARREF(Ytail),x_1604F3192);
    x_1604F3193 = T21;
    T23 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_1604F3193,x_1605F3184);
    BOXVAL(code_outF3188) = T23;
    T24 = CALL1(1,VARREF(Ytail),x_1604F3193);
    x_1604F3194 = T24;
    T25 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1604F3194,x_1605F3184);
    T22 = T25;
    T19 = T22;
    T16 = T19;
    T26 = CALL1(1,VARREF(Ytail),x_1604F3190);
    x_1604F3195 = T26;
    BOXVAL(bodyF3189) = x_1604F3195;
    x_1604F3196 = Ynil;
    T28 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_1604F3196,x_1605F3184);
    T27 = T28;
    T14 = T27;
    T12 = T14;
  } else {
    T29 = CALL2(1,x_1605F3184,LITREF(lit_70),x_1604F3185);
  }
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_227));
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_228));
  T36 = BOXVAL(eF3186);
  T35 = CALL1(1,VARREF(Ylst),T36);
  T33 = CALL3(1,VARREF(YgooSmacrosYcat),T34,T35,Ynil);
  T32 = CALL1(1,VARREF(Ylst),T33);
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_224));
  T43 = BOXVAL(eF3186);
  T42 = CALL1(1,VARREF(Ylst),T43);
  T45 = BOXVAL(dF3187);
  T44 = CALL1(1,VARREF(Ylst),T45);
  T47 = BOXVAL(code_outF3188);
  T46 = CALL1(1,VARREF(Ylst),T47);
  T41 = CALL4(1,VARREF(YgooSmacrosYcat),T42,T44,T46,Ynil);
  T40 = CALL1(1,VARREF(Ylst),T41);
  T48 = BOXVAL(bodyF3189);
  T38 = CALL4(1,VARREF(YgooSmacrosYcat),T39,T40,T48,Ynil);
  T37 = CALL1(1,VARREF(Ylst),T38);
  T30 = CALL4(1,VARREF(YgooSmacrosYcat),T31,T32,T37,Ynil);
  T9 = T30;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T2 = T3;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_114) {
  P exp_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(exp_, 0);
loop:
  T1 = FUNFAB(fun_113,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1607_115) {
  P x_1606_;
  P x_1608F3198;
  P qbF3197;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1606_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1606_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1606_);
    qbF3197 = T4;
    x_1608F3198 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1608F3198,LITREF(lit_234));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3197);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1608F3198,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1608F3198,LITREF(lit_235));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1606_);
    a1 = T8;
    x_1606_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_116) {
  P code_out_,qbT_;
  P x_1607F3199;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_231));
  T1 = FUNSHELL(1,fun_x_1607_115,2);
  x_1607F3199 = T1;
  FUNINIT(x_1607F3199, 2,code_out_,x_1607F3199);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  T2 = CALL1(0,x_1607F3199,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1610_117) {
  P x_1609_;
  P x_1611F3201;
  P qbF3200;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1;
LINK_STACK();
  ARG(x_1609_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1609_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1609_);
    qbF3200 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    x_1611F3201 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1611F3201,LITREF(lit_239));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),qbF3200);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1611F3201,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1611F3201,LITREF(lit_240));
    T7 = CALL1(1,VARREF(YevalSastYbinding_info),qbF3200);
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),T7);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_222));
    T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1609_);
    a1 = T9;
    x_1609_ = a1;
    goto loop;
    T3 = T8;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_118) {
  P code_out_,qbT_;
  P x_1610F3202;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qbT_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1610_117,2);
  x_1610F3202 = T1;
  FUNINIT(x_1610F3202, 2,code_out_,x_1610F3202);
  T4 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),T4);
  T2 = CALL1(0,x_1610F3202,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_119) {
  P T0;
LINK_STACK();
loop:
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_242));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_120) {
  P code_out_,qb_;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_245);
  } else {
    T2 = LITREF(lit_246);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_121) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_247));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_122) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_123) {
  P code_out_,qb_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(qb_, 1);
loop:
  T1 = FUNFAB(fun_122,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_124) {
  P code_out_,x_;
  P x_1612F3203;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1612F3203 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_248));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1612F3203,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1612F3203,LITREF(lit_249));
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_1612F3203,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1612F3203,LITREF(lit_250));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_125) {
  P code_out_,x_;
  P x_1613F3204;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1613F3204 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_251));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1613F3204,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1613F3204,LITREF(lit_252));
  T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  CALL2(1,VARREF(YgooSioSportYputs),x_1613F3204,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1613F3204,LITREF(lit_253));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_126) {
  P i_;
  P x_1615F3206;
  P x_1614F3205;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(i_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
  T1 = CALL2(1,VARREF(YgooSmagYG),i_,T2);
  if (T1 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),i_);
    x_1614F3205 = T4;
    x_1615F3206 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_1615F3206,x_1614F3205,YPchr((P)115));
    if (T7 != YPfalse) {
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
      T8 = CALL1(1,FREEREF(1),YPfalse);
      T6 = T8;
    } else {
      T10 = CALL2(1,x_1615F3206,x_1614F3205,YPchr((P)100));
      if (T10 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
        T11 = CALL1(1,FREEREF(1),YPfalse);
        T9 = T11;
      } else {
        T13 = CALL2(1,x_1615F3206,x_1614F3205,YPchr((P)120));
        if (T13 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),i_);
          T14 = CALL1(1,FREEREF(1),YPfalse);
          T12 = T14;
        } else {
          T16 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
          a1 = T16;
          i_ = a1;
          goto loop;
          T12 = T15;
        }
        T9 = T12;
      }
      T6 = T9;
    }
    T5 = T6;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = FREEREF(0);
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_127) {
  P done_;
  P loopF3207;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(done_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_126,3);
  loopF3207 = T1;
  FUNINIT(loopF3207, 3,FREEREF(0),done_,loopF3207);
  T4 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T3 = CALL2(1,VARREF(YgooSmathY_),T4,YPint((P)1));
  T2 = CALL1(0,loopF3207,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_128) {
  P o_;
  P sF3208;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF3208 = T1;
  T3 = FUNFAB(fun_127,1,sF3208);
  T2 = with_exit(T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_129) {
  P code_out_,x_;
  P x_1616F3209;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1616F3209 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_257));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1616F3209,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1616F3209,LITREF(lit_258));
  T2 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1616F3209,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1616F3209,LITREF(lit_259));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_130) {
  P code_out_,x_;
  P x_1617F3210;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1617F3210 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_260));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1617F3210,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1617F3210,LITREF(lit_261));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1617F3210,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1617F3210,LITREF(lit_262));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1620_131) {
  P x_1619_;
  P eF3211;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1619_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1619_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1619_);
    eF3211 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_268));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3211);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1619_);
    a1 = T6;
    x_1619_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_132) {
  P code_out_,x_;
  P x_1620F3213;
  P x_1618F3212;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1618F3212 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3212,LITREF(lit_263));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_264));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1618F3212,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1618F3212,LITREF(lit_265));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1618F3212,T2);
  T3 = FUNSHELL(1,fun_x_1620_131,2);
  x_1620F3213 = T3;
  FUNINIT(x_1620F3213, 2,code_out_,x_1620F3213);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1620F3213,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_269));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_x_1623_133) {
  P x_1622_;
  P eF3214;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1622_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1622_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1622_);
    eF3214 = T4;
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_275));
    CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),eF3214);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1622_);
    a1 = T6;
    x_1622_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_134) {
  P code_out_,x_;
  P x_1623F3216;
  P x_1621F3215;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1621F3215 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1621F3215,LITREF(lit_270));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_271));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1621F3215,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1621F3215,LITREF(lit_272));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1621F3215,T2);
  T3 = FUNSHELL(1,fun_x_1623_133,2);
  x_1623F3216 = T3;
  FUNINIT(x_1623F3216, 2,code_out_,x_1623F3216);
  T5 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  T4 = CALL1(0,x_1623F3216,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_276));
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_generate_quotation_135) {
  P code_out_,x_;
  P x_1624F3217;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(x_, 1);
loop:
  x_1624F3217 = code_out_;
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_277));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3217,T1);
  CALL2(1,VARREF(YgooSioSportYputs),x_1624F3217,LITREF(lit_278));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1624F3217,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1624F3217,LITREF(lit_279));
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(binding_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_137) {
  P v_,code_out_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_138) {
  P v_,code_out_;
  P x_1627F3220;
  P x_1626F3219;
  P x_1625F3218;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(v_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_1625F3218 = T1;
  x_1626F3219 = VARREF(YgooSmacrosYEE);
  T4 = CALL2(1,x_1626F3219,x_1625F3218,LITREF(lit_192));
  if (T4 != YPfalse) {
    T3 = LITREF(lit_283);
  } else {
    T6 = CALL2(1,x_1626F3219,x_1625F3218,LITREF(lit_114));
    if (T6 != YPfalse) {
      T5 = LITREF(lit_284);
    } else {
      T8 = CALL2(1,x_1626F3219,x_1625F3218,LITREF(lit_115));
      if (T8 != YPfalse) {
        T7 = LITREF(lit_285);
      } else {
        T7 = LITREF(lit_286);
      }
      T5 = T7;
    }
    T3 = T5;
  }
  T2 = T3;
  T0 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T0);
  x_1627F3220 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1627F3220,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,code_out_);
  T10 = CALL2(1,VARREF(YgooSioSportYput),x_1627F3220,YPchr((P)41));
  T9 = T10;
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_to_c_139) {
  P e_,f_,d_,code_out_;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),code_out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,code_out_;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_141) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_142) {
  P e_,code_out_;
  P x_1629F3222;
  P x_1628F3221;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_290));
  x_1628F3221 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1628F3221,YPchr((P)40));
  x_1629F3222 = code_out_;
  T3 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),T3);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_1629F3222,T2);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1628F3221,YPchr((P)41));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_143) {
  P e_,code_out_;
  P x_1630F3224;
  P regF3223;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF3223 = T1;
  if (regF3223 != YPfalse) {
    x_1630F3224 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1630F3224,LITREF(lit_291));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF3223);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1630F3224,T5);
    T3 = T4;
    T2 = T3;
  } else {
    T6 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_292));
    T2 = T6;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_144) {
  P e_,code_out_;
  P x_1631F3225;
  P T0,T1,T2;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  x_1631F3225 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1631F3225,LITREF(lit_293));
  T2 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1631F3225,T2);
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_145) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_146) {
  P e_,code_out_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(e_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_147) {
  P e_,f_,d_,code_out_;
  P x_1633F3227;
  P x_1632F3226;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_kind),T3);
  x_1632F3226 = T2;
  x_1633F3227 = VARREF(YgooSmacrosYEE);
  T6 = CALL2(1,x_1633F3227,x_1632F3226,LITREF(lit_114));
  if (T6 != YPfalse) {
    T5 = LITREF(lit_294);
  } else {
    T8 = CALL2(1,x_1633F3227,x_1632F3226,LITREF(lit_115));
    if (T8 != YPfalse) {
      T10 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T10 != YPfalse) {
        T9 = LITREF(lit_295);
      } else {
        T9 = LITREF(lit_296);
      }
      T7 = T9;
    } else {
      T7 = LITREF(lit_297);
    }
    T5 = T7;
  }
  T4 = T5;
  T1 = T4;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  T11 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T11,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_298));
  T12 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_299));
  T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T13);
}

FUNCODEDEF(fun_to_c_148) {
  P e_,f_,d_,code_out_;
  P x_1634F3228;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T3 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSastYLruntime_referenceG));
    if (T2 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_300));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_301));
    x_1634F3228 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1634F3228,YPchr((P)40));
    T6 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T5 = CALL1(1,VARREF(YevalSastYreference_binding),T6);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T5,code_out_);
    T7 = CALL2(1,VARREF(YgooSioSportYput),x_1634F3228,YPchr((P)41));
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,code_out_;
  P x_1635F3229;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_302));
    x_1635F3229 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1635F3229,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_1635F3229,YPchr((P)41));
    T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T1 = T5;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,code_out_;
  P x_1636F3230;
  P T0,T1,T2,T3,T4;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_303));
  x_1636F3230 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1636F3230,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1636F3230,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_304));
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,code_out_;
  P x_1637F3232;
  P bindingF3231;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T3);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  bindingF3231 = T1;
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3231,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_305));
  x_1637F3232 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1637F3232,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3231,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1637F3232,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  T0 = T5;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,code_out_;
  P x_1638F3233;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_306));
  T1 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  x_1638F3233 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1638F3233,LITREF(lit_307));
  T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1638F3233,T2);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1638F3233,LITREF(lit_308));
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,code_out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,code_out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,code_out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_309));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,code_out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,code_out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,code_out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,code_out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_310));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_153) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_154) {
  P e_,f_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_153,3,f_,d_,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1640_155) {
  P x_1639_;
  P argF3234;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1639_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1639_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1639_);
    argF3234 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3234,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1639_);
    a1 = T6;
    x_1639_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1643_156) {
  P x_1642_,x_1641_;
  P x_1644F3238;
  P argF3237;
  P iF3236;
  P tmpF3235;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1642_, 0);
  ARG(x_1641_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1642_);
  tmpF3235 = T3;
  if (tmpF3235 != YPfalse) {
    T4 = tmpF3235;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1641_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1642_);
    iF3236 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1641_);
    argF3237 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    x_1644F3238 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1644F3238,LITREF(lit_317));
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3236);
    CALL2(1,VARREF(YgooSioSportYputs),x_1644F3238,T10);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1644F3238,LITREF(lit_318));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3237,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_222));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1642_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1641_);
    a1 = T13;
    a2 = T14;
    x_1642_ = a1;
    x_1641_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1647_157) {
  P x_1646_,x_1645_;
  P x_1648F3242;
  P bindingF3241;
  P iF3240;
  P tmpF3239;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1646_, 0);
  ARG(x_1645_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1646_);
  tmpF3239 = T3;
  if (tmpF3239 != YPfalse) {
    T4 = tmpF3239;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1645_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1646_);
    iF3240 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1645_);
    bindingF3241 = T9;
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3241,FREEREF(1));
    x_1648F3242 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1648F3242,LITREF(lit_322));
    T11 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3240);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),x_1648F3242,T11);
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_222));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1646_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1645_);
    a1 = T13;
    a2 = T14;
    x_1646_ = a1;
    x_1645_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_self_recursive_call_158) {
  P e_,f_,d_,code_out_;
  P x_1647F3245;
  P x_1643F3244;
  P x_1640F3243;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1640_155,4);
  x_1640F3243 = T0;
  FUNINIT(x_1640F3243, 4,f_,d_,code_out_,x_1640F3243);
  T3 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1640F3243,T2);
  T4 = FUNSHELL(1,fun_x_1643_156,3);
  x_1643F3244 = T4;
  FUNINIT(x_1643F3244, 3,d_,code_out_,x_1643F3244);
  T7 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T5 = CALL2(0,x_1643F3244,T6,T8);
  T10 = FUNSHELL(1,fun_x_1647_157,3);
  x_1647F3245 = T10;
  FUNINIT(x_1647F3245, 3,d_,code_out_,x_1647F3245);
  T13 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T15 = CALL1(1,VARREF(YevalSastYfunction_bindings),f_);
  T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
  T11 = CALL2(0,x_1647F3245,T12,T14);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_323));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T16);
}

FUNCODEDEF(fun_x_1650_159) {
  P x_1649_;
  P argF3246;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1649_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1649_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1649_);
    argF3246 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3246,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1649_);
    a1 = T6;
    x_1649_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1655_160) {
  P x_1654_;
  P argF3247;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1654_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1654_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1654_);
    argF3247 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3247,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1654_);
    a1 = T6;
    x_1654_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_161) {
  P e_,f_,d_,code_out_;
  P x_1655F3259;
  P x_1653F3258;
  P x_1652F3257;
  P tmpF3256;
  P x_1651F3255;
  P x_1650F3254;
  P nF3253;
  P tmpF3252;
  P tmpF3251;
  P tmpF3250;
  P tmpF3249;
  P functionF3248;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF3248 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3249 = T4;
  if (tmpF3249 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_methodG));
    tmpF3250 = T7;
    if (tmpF3250 != YPfalse) {
      T11 = CALL1(1,VARREF(YevalSastYfunction_naryQ),f_);
      T10 = CALL1(1,VARREF(Ynot),T11);
      tmpF3251 = T10;
      if (tmpF3251 != YPfalse) {
        T14 = CALL2(1,VARREF(YisaQ),functionF3248,VARREF(YevalSast_linearizeYLfree_referenceG));
        tmpF3252 = T14;
        if (tmpF3252 != YPfalse) {
          T16 = CALL1(1,VARREF(YevalSast_linearizeYreference_selfQ),functionF3248);
          T15 = T16;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T9 = T12;
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T17 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T17;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T19 = CALL1(1,VARREF(YgooStypesYlen),T20);
    nF3253 = T19;
    T21 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL4(1,VARREF(YevalSg2cYto_c),T21,f_,d_,code_out_);
    T22 = FUNSHELL(1,fun_x_1650_159,4);
    x_1650F3254 = T22;
    FUNINIT(x_1650F3254, 4,f_,d_,code_out_,x_1650F3254);
    T25 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    T23 = CALL1(0,x_1650F3254,T24);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1651F3255 = code_out_;
    T28 = CALL1(1,VARREF(Ynot),f_);
    tmpF3256 = T28;
    if (tmpF3256 != YPfalse) {
      T29 = tmpF3256;
    } else {
      T30 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
      T29 = T30;
    }
    T27 = T29;
    if (T27 != YPfalse) {
      T26 = LITREF(lit_326);
    } else {
      T26 = LITREF(lit_118);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1651F3255,T26);
    CALL2(1,VARREF(YgooSioSportYputs),x_1651F3255,LITREF(lit_327));
    T33 = CALL2(1,VARREF(YgooSmagYG),nF3253,VARREF(YevalSg2cYDnumber_call_templates));
    if (T33 != YPfalse) {
      T32 = LITREF(lit_328);
    } else {
      T32 = nF3253;
    }
    T31 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1651F3255,T32);
    x_1652F3257 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1652F3257,YPchr((P)40));
    T35 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
    if (T35 != YPfalse) {
      T34 = LITREF(lit_329);
    } else {
      T34 = LITREF(lit_330);
    }
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T34);
    T36 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T36,code_out_);
    T37 = CALL2(1,VARREF(YgooSmagYG),nF3253,VARREF(YevalSg2cYDnumber_call_templates));
    if (T37 != YPfalse) {
      x_1653F3258 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1653F3258,LITREF(lit_331));
      T39 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1653F3258,nF3253);
      T38 = T39;
    } else {
    }
    T40 = FUNSHELL(1,fun_x_1655_160,2);
    x_1655F3259 = T40;
    FUNINIT(x_1655F3259, 2,code_out_,x_1655F3259);
    T43 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T42 = CALL1(1,VARREF(YgooScolsScolYenum),T43);
    T41 = CALL1(0,x_1655F3259,T42);
    T44 = CALL2(1,VARREF(YgooSioSportYput),x_1652F3257,YPchr((P)41));
    T45 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T18 = T45;
    T2 = T18;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1659_162) {
  P x_1658_,x_1657_;
  P xF3262;
  P firstQF3261;
  P tmpF3260;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1658_, 0);
  ARG(x_1657_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1658_);
  tmpF3260 = T3;
  if (tmpF3260 != YPfalse) {
    T4 = tmpF3260;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1657_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1658_);
    firstQF3261 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1657_);
    xF3262 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3261);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3262,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1658_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1657_);
    a1 = T13;
    a2 = T14;
    x_1658_ = a1;
    x_1657_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_163) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_164) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_165) {
  P e_,f_,d_,code_out_;
  P x_1659F3264;
  P x_1656F3263;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  x_1656F3263 = code_out_;
  T2 = FUNSHELL(1,fun_x_1659_162,3);
  x_1659F3264 = T2;
  FUNINIT(x_1659F3264, 3,x_1656F3263,code_out_,x_1659F3264);
  T6 = fun_163;
  T7 = fun_164;
  T5 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T6,T7);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  T3 = CALL2(0,x_1659F3264,T4,T8);
  T1 = T3;
  T0 = T1;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1663_166) {
  P x_1662_,x_1661_,x_1660_;
  P x_1664F3271;
  P tmpF3270;
  P bindingF3269;
  P typeF3268;
  P initF3267;
  P tmpF3266;
  P tmpF3265;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1662_, 0);
  ARG(x_1661_, 1);
  ARG(x_1660_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1662_);
  tmpF3265 = T3;
  if (tmpF3265 != YPfalse) {
    T4 = tmpF3265;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1661_);
    tmpF3266 = T6;
    if (tmpF3266 != YPfalse) {
      T7 = tmpF3266;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1660_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1662_);
    initF3267 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1661_);
    typeF3268 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1660_);
    bindingF3269 = T14;
    CALL4(1,VARREF(YevalSg2cYto_c),initF3267,FREEREF(0),FREEREF(1),FREEREF(2));
    T17 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),typeF3268);
    tmpF3270 = T17;
    if (tmpF3270 != YPfalse) {
      T18 = tmpF3270;
    } else {
      T18 = FREEREF(3);
    }
    T16 = T18;
    T15 = CALL1(1,VARREF(Ynot),T16);
    if (T15 != YPfalse) {
      CALL4(1,VARREF(YevalSg2cYto_c),typeF3268,FREEREF(0),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_341));
      x_1664F3271 = FREEREF(2);
      CALL2(1,VARREF(YgooSioSportYput),x_1664F3271,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF3267,FREEREF(2));
      CALL2(1,VARREF(YgooSioSportYput),x_1664F3271,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),typeF3268,FREEREF(2));
      T19 = CALL2(1,VARREF(YgooSioSportYput),x_1664F3271,YPchr((P)41));
      T20 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_222));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(1),FREEREF(2));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3269,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_342));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3267,FREEREF(2));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(2),LITREF(lit_222));
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1662_);
    T23 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1661_);
    T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1660_);
    a1 = T22;
    a2 = T23;
    a3 = T24;
    x_1662_ = a1;
    x_1661_ = a2;
    x_1660_ = a3;
    goto loop;
    T13 = T21;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_167) {
  P e_,f_,d_,code_out_;
  P x_1663F3273;
  P low_letQF3272;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF3272 = T1;
  T2 = FUNSHELL(1,fun_x_1663_166,5);
  x_1663F3273 = T2;
  FUNINIT(x_1663F3273, 5,f_,d_,code_out_,low_letQF3272,x_1663F3273);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  T9 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T3 = CALL3(0,x_1663F3273,T4,T6,T8);
  T10 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T10,f_,d_,code_out_);
  T12 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T12 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T13 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T13,code_out_);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T11 = T14;
  } else {
    T11 = YPfalse;
  }
  T0 = T11;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1667_168) {
  P x_1666_,x_1665_;
  P bindingF3276;
  P initF3275;
  P tmpF3274;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(x_1666_, 0);
  ARG(x_1665_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1666_);
  tmpF3274 = T3;
  if (tmpF3274 != YPfalse) {
    T4 = tmpF3274;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1665_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1666_);
    initF3275 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1665_);
    bindingF3276 = T9;
    CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF3276,initF3275,YPfalse,FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),FREEREF(0),FREEREF(1));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3276,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_346));
    CALL2(1,VARREF(YevalSg2cYgen_ref),initF3275,FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_222));
    T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1666_);
    T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1665_);
    a1 = T11;
    a2 = T12;
    x_1666_ = a1;
    x_1665_ = a2;
    goto loop;
    T8 = T10;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,code_out_;
  P x_1667F3277;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNSHELL(1,fun_x_1667_168,3);
  x_1667F3277 = T0;
  FUNINIT(x_1667F3277, 3,d_,code_out_,x_1667F3277);
  T3 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T4 = CALL1(1,VARREF(YgooScolsScolYenum),T5);
  T1 = CALL2(0,x_1667F3277,T2,T4);
  T6 = CALL4(1,VARREF(YgooSruntimeYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T8 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T6,T7,T8);
  T9 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T9,f_,d_,code_out_);
  T11 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T12,code_out_);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T10 = T13;
  } else {
    T10 = YPfalse;
  }
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_170) {
  P e_,f_,d_,code_out_;
  P x_1668F3278;
  P T0,T1,T2,T3;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_347));
  x_1668F3278 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1668F3278,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,code_out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_1668F3278,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_171) {
  P e_,f_,d_,code_out_;
  P x_1669F3279;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_348));
  x_1669F3279 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1669F3279,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1669F3279,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1669F3279,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_172) {
  P e_,f_,d_,code_out_;
  P x_1670F3280;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,code_out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_349));
  x_1670F3280 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_350));
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_351));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_352));
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,code_out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_1670F3280,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_x_1672_173) {
  P x_1671_;
  P argF3281;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1671_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1671_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1671_);
    argF3281 = T4;
    CALL4(1,VARREF(YevalSg2cYto_c),argF3281,FREEREF(0),FREEREF(1),FREEREF(2));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1671_);
    a1 = T6;
    x_1671_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1678_174) {
  P x_1677_,x_1676_;
  P argF3284;
  P firstQF3283;
  P tmpF3282;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1677_, 0);
  ARG(x_1676_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1677_);
  tmpF3282 = T3;
  if (tmpF3282 != YPfalse) {
    T4 = tmpF3282;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1676_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1677_);
    firstQF3283 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1676_);
    argF3284 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3283);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYgen_ref),argF3284,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1677_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1676_);
    a1 = T13;
    a2 = T14;
    x_1677_ = a1;
    x_1676_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_175) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_176) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_177) {
  P e_,f_,d_,code_out_;
  P x_1678F3292;
  P x_1675F3291;
  P x_1674F3290;
  P x_1673F3289;
  P x_1672F3288;
  P tmpF3287;
  P tmpF3286;
  P bindingF3285;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF3285 = T1;
  T4 = CALL1(1,VARREF(YevalSastYapplication_tailQ),e_);
  tmpF3286 = T4;
  if (tmpF3286 != YPfalse) {
    T7 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    tmpF3287 = T7;
    if (tmpF3287 != YPfalse) {
      T10 = CALL1(1,VARREF(YevalSastYfunction_binding),f_);
      T9 = CALL2(1,VARREF(YgooSmacrosYEE),bindingF3285,T10);
      T8 = T9;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T11 = CALL4(1,VARREF(YevalSg2cYgenerate_self_recursive_call),e_,f_,d_,code_out_);
    T2 = T11;
  } else {
    T12 = FUNSHELL(1,fun_x_1672_173,4);
    x_1672F3288 = T12;
    FUNINIT(x_1672F3288, 4,f_,d_,code_out_,x_1672F3288);
    T15 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),T15);
    T13 = CALL1(0,x_1672F3288,T14);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    x_1673F3289 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1673F3289,LITREF(lit_355));
    T18 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
    T17 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T18);
    T16 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1673F3289,T17);
    x_1674F3290 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1674F3290,YPchr((P)40));
    x_1675F3291 = code_out_;
    T20 = FUNSHELL(1,fun_x_1678_174,3);
    x_1678F3292 = T20;
    FUNINIT(x_1678F3292, 3,x_1675F3291,code_out_,x_1678F3292);
    T24 = fun_175;
    T25 = fun_176;
    T23 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T24,T25);
    T22 = CALL1(1,VARREF(YgooScolsScolYenum),T23);
    T27 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T26 = CALL1(1,VARREF(YgooScolsScolYenum),T27);
    T21 = CALL2(0,x_1678F3292,T22,T26);
    T19 = T21;
    T28 = CALL2(1,VARREF(YgooSioSportYput),x_1674F3290,YPchr((P)41));
    T29 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T2 = T29;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1682_179) {
  P x_1681_;
  P xF3293;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1681_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1681_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1681_);
    xF3293 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3293,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1681_);
    a1 = T6;
    x_1681_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_180) {
  P e_,f_,d_,code_out_;
  P x_1682F3298;
  P x_1680F3297;
  P x_1679F3296;
  P fF3295;
  P nF3294;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3294 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3295 = T4;
  T7 = CALL2(1,VARREF(YgooSmacrosYEE),nF3294,YPint((P)0));
  if (T7 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T9 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3295);
      T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
      T8 = T10;
    } else {
      T8 = YPfalse;
    }
    T6 = T8;
  } else {
    T11 = FUNFAB(fun_178,3,fF3295,d_,code_out_);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T11,T12);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_359));
    x_1679F3296 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1679F3296,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3295);
    x_1680F3297 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1680F3297,LITREF(lit_360));
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3294);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1680F3297,T14);
    T15 = FUNSHELL(1,fun_x_1682_179,2);
    x_1682F3298 = T15;
    FUNINIT(x_1682F3298, 2,code_out_,x_1682F3298);
    T18 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
    T16 = CALL1(0,x_1682F3298,T17);
    T19 = CALL2(1,VARREF(YgooSioSportYput),x_1679F3296,YPchr((P)41));
    T20 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T6 = T20;
  }
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_181) {
  P b_,e_,f_,d_,code_out_;
  P x_1685F3303;
  P x_1684F3302;
  P x_1683F3301;
  P fF3300;
  P nF3299;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3299 = T1;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T4 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T5);
  fF3300 = T4;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T6 = CALL2(1,VARREF(YgooSmacrosYEE),nF3299,YPint((P)0));
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3300);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_365));
    x_1683F3301 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1683F3301,YPchr((P)40));
    x_1684F3302 = code_out_;
    T12 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T12 != YPfalse) {
      T11 = YPint((P)1);
    } else {
      T11 = YPint((P)0);
    }
    T10 = CALL1(1,VARREF(YgooSmathYnum_to_str),T11);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1684F3302,T10);
    CALL2(1,VARREF(YgooSioSportYput),x_1683F3301,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,fF3300);
    CALL2(1,VARREF(YgooSioSportYput),x_1683F3301,YPchr((P)44));
    x_1685F3303 = code_out_;
    T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF3299);
    T13 = CALL2(1,VARREF(YgooSioSportYputs),x_1685F3303,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_1683F3301,YPchr((P)41));
    T8 = T15;
  }
  T16 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  T3 = T16;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_182) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1689_183) {
  P x_1688_;
  P xF3304;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1688_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1688_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1688_);
    xF3304 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),xF3304,FREEREF(0));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1688_);
    a1 = T6;
    x_1688_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_184) {
  P b_,e_,f_,d_,code_out_;
  P x_1689F3308;
  P x_1687F3307;
  P x_1686F3306;
  P nF3305;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2,a3,a4,a5;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(code_out_, 4);
loop:
  T2 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  nF3305 = T1;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),nF3305,YPint((P)0));
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    T6 = FUNFAB(fun_182,3,f_,d_,code_out_);
    T7 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_367));
    x_1686F3306 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1686F3306,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,code_out_);
    x_1687F3307 = code_out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_1687F3307,LITREF(lit_368));
    T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1687F3307,nF3305);
    T9 = FUNSHELL(1,fun_x_1689_183,2);
    x_1689F3308 = T9;
    FUNINIT(x_1689F3308, 2,code_out_,x_1689F3308);
    T12 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
    T10 = CALL1(0,x_1689F3308,T11);
    T13 = CALL2(1,VARREF(YgooSioSportYput),x_1686F3306,YPchr((P)41));
    T14 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T3 = T14;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_185) {
  P e_,f_,d_,code_out_;
  P x_1690F3309;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_371));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1690F3309 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1690F3309,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_1690F3309,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1690F3309,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_1690F3309,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_x_1694_186) {
  P x_1693_;
  P eF3310;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1693_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1693_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1693_);
    eF3310 = T4;
    CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    CALL1(1,FREEREF(1),eF3310);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1693_);
    a1 = T6;
    x_1693_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_out_list_builder_187) {
  P f_,code_out_,elts_;
  P x_1694F3313;
  P x_1692F3312;
  P x_1691F3311;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2,a3;
LINK_STACK();
  ARG(f_, 0);
  ARG(code_out_, 1);
  ARG(elts_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_374));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_375));
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
    x_1691F3311 = code_out_;
    CALL2(1,VARREF(YgooSioSportYput),x_1691F3311,YPchr((P)40));
    x_1692F3312 = code_out_;
    T8 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),T8);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1692F3312,T7);
    T9 = FUNSHELL(1,fun_x_1694_186,3);
    x_1694F3313 = T9;
    FUNINIT(x_1694F3313, 3,code_out_,f_,x_1694F3313);
    T11 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    T10 = CALL1(0,x_1694F3313,T11);
    T12 = CALL2(1,VARREF(YgooSioSportYput),x_1691F3311,YPchr((P)41));
    T5 = T12;
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_188) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_189) {
  P code_out_,refs_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(refs_, 1);
loop:
  T1 = FUNFAB(fun_188,1,code_out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,code_out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_190) {
  P code_out_,sig_;
  P specsF3315;
  P typesF3314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(sig_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),sig_);
  typesF3314 = T1;
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),sig_);
  T4 = CALL1(1,VARREF(YevalSastYconstant_value),T5);
  if (T4 != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),typesF3314);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = CALL3(1,VARREF(YgooScolsSseqYsub),typesF3314,YPint((P)0),T7);
    T3 = T6;
  } else {
    T3 = typesF3314;
  }
  specsF3315 = T3;
  T9 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,specsF3315);
  T2 = T9;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_191) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_192) {
  P e_,f_,d_,code_out_;
  P x_1695F3316;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = FUNFAB(fun_191,3,f_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_382));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  x_1695F3316 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_fab_list),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),code_out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_383));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_1695F3316,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_193) {
  P e_,f_,d_,code_out_;
  P x_1696F3317;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_384));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T1);
  x_1696F3317 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_385));
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_386));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_387));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_388));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_389));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_1696F3317,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_x_1698_194) {
  P x_1697_;
  P defF3318;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1697_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1697_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1697_);
    defF3318 = T4;
    CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),FREEREF(0),defF3318);
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1697_);
    a1 = T6;
    x_1697_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forwards_195) {
  P code_out_,definitions_;
  P x_1698F3319;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_392));
  T1 = FUNSHELL(1,fun_x_1698_194,2);
  x_1698F3319 = T1;
  FUNINIT(x_1698F3319, 2,code_out_,x_1698F3319);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  T2 = CALL1(0,x_1698F3319,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1703_196) {
  P x_1702_,x_1701_;
  P iF3322;
  P firstQF3321;
  P tmpF3320;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1702_, 0);
  ARG(x_1701_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1702_);
  tmpF3320 = T3;
  if (tmpF3320 != YPfalse) {
    T4 = tmpF3320;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1701_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1702_);
    firstQF3321 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1701_);
    iF3322 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3321);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_404));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1702_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1701_);
    a1 = T13;
    a2 = T14;
    x_1702_ = a1;
    x_1701_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_198) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_199) {
  P code_out_,defn_;
  P x_1703F3325;
  P x_1700F3324;
  P x_1699F3323;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  x_1699F3323 = code_out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_397);
  } else {
    T0 = LITREF(lit_398);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1699F3323,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_1699F3323,LITREF(lit_399));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1699F3323,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1699F3323,LITREF(lit_400));
  x_1700F3324 = code_out_;
  T5 = FUNSHELL(1,fun_x_1703_196,3);
  x_1703F3325 = T5;
  FUNINIT(x_1703F3325, 3,x_1700F3324,code_out_,x_1703F3325);
  T9 = fun_197;
  T10 = fun_198;
  T8 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T9,T10);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T13 = CALL1(1,VARREF(YgooStypesYlen),T14);
  T12 = CALL1(1,VARREF(YgooScolsSseqYbelow),T13);
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),T12);
  T6 = CALL2(0,x_1703F3325,T7,T11);
  T4 = T6;
  T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_405));
UNLINK_STACK();
  QRET(T15);
}

FUNCODEDEF(fun_generate_function_binding_200) {
  P code_out_,defn_;
  P x_1705F3330;
  P nameF3329;
  P x_1704F3328;
  P tmpF3327;
  P nameF3326;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF3326 = T1;
  T4 = CALL2(1,VARREF(YisaQ),nameF3326,VARREF(YevalSastYLmodule_bindingG));
  tmpF3327 = T4;
  if (tmpF3327 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF3326);
    T6 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_407),T7);
    T5 = T6;
  } else {
    T5 = YPfalse;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF3326);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,T9);
    T2 = T8;
  } else {
    T11 = CALL2(1,VARREF(YgooSmacrosYEE),nameF3326,YPfalse);
    if (T11 != YPfalse) {
      x_1704F3328 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1704F3328,LITREF(lit_408));
      T14 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1704F3328,T14);
      T12 = T13;
      T10 = T12;
    } else {
      T17 = CALL2(1,VARREF(YisaQ),nameF3326,VARREF(YevalSastYLlocal_bindingG));
      if (T17 != YPfalse) {
        T18 = CALL1(1,VARREF(YevalSastYbinding_name),nameF3326);
        T16 = T18;
      } else {
        T16 = nameF3326;
      }
      nameF3329 = T16;
      x_1705F3330 = code_out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_1705F3330,LITREF(lit_409));
      T20 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF3329);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3330,T20);
      CALL2(1,VARREF(YgooSioSportYputs),x_1705F3330,LITREF(lit_410));
      T22 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T21 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1705F3330,T22);
      T19 = T21;
      T15 = T19;
      T10 = T15;
    }
    T2 = T10;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_201) {
  P code_out_,defn_;
  P boundQF3331;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(defn_, 1);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL2(1,VARREF(YisaQ),T2,VARREF(YevalSastYLmodule_bindingG));
  boundQF3331 = T1;
  if (boundQF3331 != YPfalse) {
    T3 = LITREF(lit_411);
  } else {
    T3 = LITREF(lit_412);
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,defn_);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_413));
  T0 = T4;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_202) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_203) {
  P code_out_,definitions_;
  P T0,T1;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definitions_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_415));
  T1 = FUNFAB(fun_202,1,code_out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_204) {
  P def_;
  P T0,T1,T2,T3;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T2 = CALL2(1,VARREF(YisaQ),def_,VARREF(YevalSastYLast_primitiveG));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL4(1,VARREF(YevalSg2cYgenerate_closure_structure),def_,FREEREF(0),FREEREF(1),FREEREF(2));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_functions_205) {
  P definitions_,f_,d_,code_out_;
  P T0,T1,T2;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T1 = FUNFAB(fun_204,3,f_,d_,code_out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_206) {
  P definition_,f_,d_,code_out_;
  P x_1707F3333;
  P x_1706F3332;
  P T0,T1,T2,T3,T4,T5,T6,T7;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(code_out_, 3);
loop:
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,code_out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  x_1706F3332 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1706F3332,LITREF(lit_420));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_421));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_1706F3332,T2);
  x_1707F3333 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,code_out_);
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_422));
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_423));
  CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,code_out_);
  T6 = CALL2(1,VARREF(YgooSioSportYput),x_1707F3333,YPchr((P)41));
  T7 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_generate_function_body_reference_207) {
  P code_out_,definition_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_425));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_426));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1712_208) {
  P x_1711_,x_1710_,x_1709_;
  P x_1713F3339;
  P bF3338;
  P iF3337;
  P firstQF3336;
  P tmpF3335;
  P tmpF3334;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
  P a1,a2,a3;
LINK_STACK();
  ARG(x_1711_, 0);
  ARG(x_1710_, 1);
  ARG(x_1709_, 2);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1711_);
  tmpF3334 = T3;
  if (tmpF3334 != YPfalse) {
    T4 = tmpF3334;
  } else {
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1710_);
    tmpF3335 = T6;
    if (tmpF3335 != YPfalse) {
      T7 = tmpF3335;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1709_);
      T7 = T8;
    }
    T5 = T7;
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_1711_);
    firstQF3336 = T10;
    T12 = CALL1(1,VARREF(YgooScolsScolYnow),x_1710_);
    iF3337 = T12;
    T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_1709_);
    bF3338 = T14;
    T15 = CALL1(1,VARREF(Ynot),firstQF3336);
    if (T15 != YPfalse) {
      T16 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    x_1713F3339 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1713F3339,LITREF(lit_434));
    T18 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF3337);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1713F3339,T18);
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1711_);
    T21 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1710_);
    T22 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1709_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    x_1711_ = a1;
    x_1710_ = a2;
    x_1709_ = a3;
    goto loop;
    T13 = T19;
    T11 = T13;
    T9 = T11;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_209) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_210) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_shadow_args_211) {
  P bindings_,code_out_;
  P x_1712F3341;
  P x_1708F3340;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
  P a1,a2;
LINK_STACK();
  ARG(bindings_, 0);
  ARG(code_out_, 1);
loop:
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_429));
    x_1708F3340 = code_out_;
    T4 = FUNSHELL(1,fun_x_1712_208,3);
    x_1712F3341 = T4;
    FUNINIT(x_1712F3341, 3,x_1708F3340,code_out_,x_1712F3341);
    T8 = fun_209;
    T9 = fun_210;
    T7 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T8,T9);
    T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
    T11 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)1));
    T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),bindings_);
    T5 = CALL3(0,x_1712F3341,T6,T10,T12);
    T3 = T5;
    T13 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
    T0 = T13;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_212) {
  P defn_,d_,code_out_;
  P T0,T1;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_436));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,code_out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_213) {
  P defn_,d_,code_out_;
  P x_1714F3342;
  P T0,T1,T2,T3,T4,T5;
  P a1,a2,a3;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(code_out_, 2);
loop:
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,code_out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),code_out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_437));
  x_1714F3342 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1714F3342,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,code_out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_1714F3342,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_214) {
  P e_;
  P tmpF3343;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(e_, 0);
loop:
  T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_439));
  tmpF3343 = T1;
  if (tmpF3343 != YPfalse) {
    T3 = tmpF3343;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),T5,LITREF(lit_440));
    T3 = T4;
  }
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1720_215) {
  P x_1719_,x_1718_;
  P bindingF3346;
  P firstQF3345;
  P tmpF3344;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1719_, 0);
  ARG(x_1718_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1719_);
  tmpF3344 = T3;
  if (tmpF3344 != YPfalse) {
    T4 = tmpF3344;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1718_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1719_);
    firstQF3345 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1718_);
    bindingF3346 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3345);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_449));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF3346,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1719_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1718_);
    a1 = T13;
    a2 = T14;
    x_1719_ = a1;
    x_1718_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_216) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_217) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_218) {
  P code_out_,e_;
  P x_1720F3350;
  P x_1717F3349;
  P x_1716F3348;
  P x_1715F3347;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(e_, 1);
loop:
  x_1715F3347 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1715F3347,LITREF(lit_442));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_443);
  } else {
    T0 = LITREF(lit_118);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1715F3347,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_444);
  } else {
    T1 = LITREF(lit_118);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1715F3347,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_1715F3347,LITREF(lit_445));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,code_out_);
  x_1716F3348 = code_out_;
  CALL2(1,VARREF(YgooSioSportYput),x_1716F3348,YPchr((P)40));
  x_1717F3349 = code_out_;
  T6 = FUNSHELL(1,fun_x_1720_215,3);
  x_1720F3350 = T6;
  FUNINIT(x_1720F3350, 3,x_1717F3349,code_out_,x_1720F3350);
  T10 = fun_216;
  T11 = fun_217;
  T9 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T10,T11);
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),T9);
  T13 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  T7 = CALL2(0,x_1720F3350,T8,T12);
  T5 = T7;
  T14 = CALL2(1,VARREF(YgooSioSportYput),x_1716F3348,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_450));
  T15 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T15,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T17,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_451));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_452));
  T18 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T18,e_,YPint((P)1),code_out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),code_out_);
  T19 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_453));
UNLINK_STACK();
  QRET(T19);
}

FUNCODEDEF(fun_dispatcherQ_219) {
  P definition_;
  P tmpF3354;
  P nameF3353;
  P tmpF3352;
  P bindingF3351;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P a1;
LINK_STACK();
  ARG(definition_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF3351 = T1;
  T3 = CALL2(1,VARREF(YisaQ),bindingF3351,VARREF(YevalSastYLmodule_bindingG));
  tmpF3352 = T3;
  if (tmpF3352 != YPfalse) {
    T7 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3351);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    nameF3353 = T6;
    T9 = CALL2(1,VARREF(YgooSmathYE),nameF3353,LITREF(lit_455));
    tmpF3354 = T9;
    if (tmpF3354 != YPfalse) {
      T10 = tmpF3354;
    } else {
      T12 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF3353,LITREF(lit_456));
      T14 = CALL1(1,VARREF(YgooStypesYlen),nameF3353);
      T15 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_457));
      T13 = CALL2(1,VARREF(YgooSmathY_),T14,T15);
      T11 = CALL2(1,VARREF(YgooSmathYE),T12,T13);
      T10 = T11;
    }
    T8 = T10;
    T5 = T8;
    T4 = T5;
  } else {
    T4 = YPfalse;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1724_220) {
  P x_1723_,x_1722_;
  P bF3357;
  P firstQF3356;
  P tmpF3355;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
  P a1,a2;
LINK_STACK();
  ARG(x_1723_, 0);
  ARG(x_1722_, 1);
loop:
  T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1723_);
  tmpF3355 = T3;
  if (tmpF3355 != YPfalse) {
    T4 = tmpF3355;
  } else {
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1722_);
    T4 = T5;
  }
  T2 = T4;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_1723_);
    firstQF3356 = T7;
    T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_1722_);
    bF3357 = T9;
    T10 = CALL1(1,VARREF(Ynot),firstQF3356);
    if (T10 != YPfalse) {
      T11 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(0),YPchr((P)44));
    } else {
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF3357,FREEREF(1));
    T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1723_);
    T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1722_);
    a1 = T13;
    a2 = T14;
    x_1723_ = a1;
    x_1722_ = a2;
    goto loop;
    T8 = T12;
    T6 = T8;
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_221) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_222) {
  P x_;
  P a1;
LINK_STACK();
  NARGS(x_, 0);
loop:
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_223) {
  P b_;
  P x_1725F3358;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_465));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_466));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_1725F3358 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1725F3358,LITREF(lit_467));
    T6 = BOXVAL(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1725F3358,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1725F3358,LITREF(lit_468));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_222));
    T10 = BOXVAL(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXVAL(FREEREF(1)) = T9;
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_224) {
  P code_out_,definition_;
  P x_1724F3362;
  P x_1721F3361;
  P bindingsF3360;
  P offsetF3359;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(definition_, 1);
loop:
  offsetF3359 = YPint((P)0);
  offsetF3359 = BOXFAB(offsetF3359);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF3360 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_458));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),code_out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_459));
  T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF3360);
  T4 = CALL1(1,VARREF(Ynot),T5);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),code_out_);
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_460));
    x_1721F3361 = code_out_;
    T7 = FUNSHELL(1,fun_x_1724_220,3);
    x_1724F3362 = T7;
    FUNINIT(x_1724F3362, 3,x_1721F3361,code_out_,x_1724F3362);
    T11 = fun_221;
    T12 = fun_222;
    T10 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T11,T12);
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
    T14 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T13 = CALL1(1,VARREF(YgooScolsScolYenum),T14);
    T8 = CALL2(0,x_1724F3362,T9,T13);
    T6 = T8;
    T15 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_222));
  } else {
  }
  T16 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T16,code_out_);
  T17 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T17,code_out_);
  T18 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_shadow_args),T18,code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_464));
  T19 = FUNFAB(fun_223,2,code_out_,offsetF3359);
  CALL2(1,VARREF(YgooSmacrosYdo),T19,bindingsF3360);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_469));
  T20 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T20,definition_,YPint((P)1),code_out_);
  T22 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T21 = CALL1(1,VARREF(Ynot),T22);
  if (T21 != YPfalse) {
    T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_470));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),code_out_);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_471));
  T2 = T24;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1727_225) {
  P x_1726_;
  P tempF3363;
  P T0,T1,T2,T3,T4,T5,T6;
  P a1;
LINK_STACK();
  ARG(x_1726_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1726_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1726_);
    tempF3363 = T4;
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_476));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF3363,FREEREF(0));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_222));
    T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1726_);
    a1 = T6;
    x_1726_ = a1;
    goto loop;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_local_temporaries_226) {
  P temps_,code_out_;
  P x_1727F3364;
  P T0,T1,T2,T3;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(code_out_, 1);
loop:
  T1 = FUNSHELL(1,fun_x_1727_225,2);
  x_1727F3364 = T1;
  FUNINIT(x_1727F3364, 2,code_out_,x_1727F3364);
  T3 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  T2 = CALL1(0,x_1727F3364,T3);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_reg_227) {
  P j_,i_;
  P tmpF3365;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(j_, 0);
  ARG(i_, 1);
loop:
  T2 = CALL2(1,VARREF(YgooSmathYE),i_,VARREF(YevalSg2cYTregisters_per_lineT));
  tmpF3365 = T2;
  if (tmpF3365 != YPfalse) {
    T3 = tmpF3365;
  } else {
    T4 = CALL2(1,VARREF(YgooSmathYE),j_,FREEREF(0));
    T3 = T4;
  }
  T1 = T3;
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_483));
    T5 = CALL1(0,FREEREF(2),j_);
    T0 = T5;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T8 = CALL2(1,VARREF(YgooSioSportYput),FREEREF(1),YPchr((P)44));
    } else {
    }
    T9 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(3),j_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,FREEREF(1));
    T11 = CALL2(1,VARREF(YgooSmathYA),j_,YPint((P)1));
    T12 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    a1 = T11;
    a2 = T12;
    j_ = a1;
    i_ = a2;
    goto loop;
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_next_line_228) {
  P j_;
  P next_regF3366;
  P T0,T1,T2,T3,T4;
  P a1;
LINK_STACK();
  ARG(j_, 0);
loop:
  T1 = CALL2(1,VARREF(YgooSmagYL),j_,FREEREF(0));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(1));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_481));
    T3 = FUNSHELL(1,fun_next_reg_227,5);
    next_regF3366 = T3;
    FUNINIT(next_regF3366, 5,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3),next_regF3366);
    T4 = CALL2(0,next_regF3366,j_,YPint((P)0));
    T2 = T4;
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_229) {
  P regs_,code_out_;
  P next_lineF3368;
  P nregsF3367;
  P T0,T1,T2,T3,T4;
  P a1,a2;
LINK_STACK();
  ARG(regs_, 0);
  ARG(code_out_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF3367 = T1;
  T3 = FUNSHELL(1,fun_next_line_228,4);
  next_lineF3368 = T3;
  FUNINIT(next_lineF3368, 4,nregsF3367,code_out_,next_lineF3368,regs_);
  T4 = CALL1(0,next_lineF3368,YPint((P)0));
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_230) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_485),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_231) {
  P modname_;
  P x_1728F3369;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(modname_, 0);
loop:
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_1728F3369 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1728F3369,LITREF(lit_488));
    T4 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1728F3369,T4);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_1728F3369,LITREF(lit_489));
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_232) {
  P binding_;
  P home_modF3370;
  P T0,T1,T2,T3,T4,T5;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF3370 = T1;
  T4 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T3 = CALL1(1,VARREF(Ynot),T4);
  if (T3 != YPfalse) {
    T5 = CALL1(0,FREEREF(1),home_modF3370);
    T2 = T5;
  } else {
    T2 = YPfalse;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P code_out_,mod_;
  P maybe_declareF3373;
  P envF3372;
  P seenF3371;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF3371 = T1;
  T3 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3372 = T3;
  T5 = FUNSHELL(0,fun_maybe_declare_231,2);
  maybe_declareF3373 = T5;
  FUNINIT(maybe_declareF3373, 2,seenF3371,code_out_);
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3372);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T7);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF3373,T6);
  T9 = FUNFAB(fun_232,2,mod_,maybe_declareF3373);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T8 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T9,T10);
  T4 = T8;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1730_234) {
  P x_1729_;
  P x_1731F3375;
  P nF3374;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1729_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1729_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1729_);
    nF3374 = T4;
    x_1731F3375 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1731F3375,LITREF(lit_495));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF3374);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1731F3375,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1731F3375,LITREF(lit_496));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1729_);
    a1 = T8;
    x_1729_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_235) {
  P local_name_,binding_;
  P x_1732F3376;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
  P a1,a2;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
loop:
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_1732F3376 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3376,LITREF(lit_500));
    T5 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T5);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3376,T4);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3376,LITREF(lit_501));
    T7 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T6 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T7);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3376,T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_1732F3376,LITREF(lit_502));
    T8 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1732F3376,T8);
    T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1732F3376,LITREF(lit_503));
    T3 = T9;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_236) {
  P binding_;
  P x_1737F3381;
  P x_1736F3380;
  P x_1735F3379;
  P x_1734F3378;
  P x_1733F3377;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_1733F3377 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_1733F3377,LITREF(lit_506));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1733F3377,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1733F3377,LITREF(lit_507));
    T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_1734F3378 = T6;
    x_1735F3379 = VARREF(YgooSmacrosYEE);
    T9 = CALL2(1,x_1735F3379,x_1734F3378,LITREF(lit_113));
    if (T9 != YPfalse) {
      x_1736F3380 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_1736F3380,LITREF(lit_508));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_1736F3380,T11);
      T12 = CALL2(1,VARREF(YgooSioSportYputs),x_1736F3380,LITREF(lit_509));
      T10 = T12;
      T8 = T10;
    } else {
      T14 = CALL2(1,x_1735F3379,x_1734F3378,LITREF(lit_115));
      if (T14 != YPfalse) {
        x_1737F3381 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_1737F3381,LITREF(lit_510));
        T16 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_1737F3381,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1737F3381,LITREF(lit_511));
        T15 = T17;
        T13 = T15;
      } else {
        T18 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_512));
        T13 = T18;
      }
      T8 = T13;
    }
    T7 = T8;
    T5 = T7;
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1739_237) {
  P x_1738_;
  P x_1740F3385;
  P bindingF3384;
  P exported_asF3383;
  P tup33F3382;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
  P a1;
LINK_STACK();
  ARG(x_1738_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1738_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_1738_);
    T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_1738_);
    T4 = CALL2(1,VARREF(Ytup),T5,T6);
    tup33F3382 = T4;
    T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3382,YPint((P)0));
    exported_asF3383 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYelt),tup33F3382,YPint((P)1));
    bindingF3384 = T10;
    x_1740F3385 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1740F3385,LITREF(lit_517));
    T12 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF3384);
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T12);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1740F3385,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_1740F3385,LITREF(lit_518));
    T13 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF3383);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1740F3385,T13);
    T14 = CALL2(1,VARREF(YgooSioSportYputs),x_1740F3385,LITREF(lit_519));
    T16 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1738_);
    a1 = T16;
    x_1738_ = a1;
    goto loop;
    T9 = T15;
    T7 = T9;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P code_out_,mod_;
  P x_1743F3395;
  P x_1742F3394;
  P x_1741F3393;
  P x_1739F3392;
  P x_1730F3391;
  P uses_namesF3390;
  P usesF3389;
  P envF3388;
  P info_nameF3387;
  P nameF3386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3386 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3386);
  info_nameF3387 = T3;
  T5 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3388 = T5;
  T7 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3388);
  usesF3389 = T7;
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3389);
  uses_namesF3390 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_491));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),code_out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_492));
  T10 = FUNSHELL(1,fun_x_1730_234,2);
  x_1730F3391 = T10;
  FUNINIT(x_1730F3391, 2,code_out_,x_1730F3391);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3390);
  T11 = CALL1(0,x_1730F3391,T12);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_497));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_498));
  T13 = FUNFAB(fun_235,2,mod_,code_out_);
  T14 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T13,T14);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_504));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_505));
  T15 = FUNFAB(fun_236,2,mod_,code_out_);
  T16 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T15,T16);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_513));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_514));
  T17 = FUNSHELL(1,fun_x_1739_237,2);
  x_1739F3392 = T17;
  FUNINIT(x_1739F3392, 2,code_out_,x_1739F3392);
  T20 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  T18 = CALL1(0,x_1739F3392,T19);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_520));
  x_1741F3393 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1741F3393,LITREF(lit_521));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1741F3393,info_nameF3387);
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_1741F3393,LITREF(lit_522));
  x_1742F3394 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1742F3394,LITREF(lit_523));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1742F3394,info_nameF3387);
  T22 = CALL2(1,VARREF(YgooSioSportYputs),x_1742F3394,LITREF(lit_524));
  x_1743F3395 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1743F3395,LITREF(lit_525));
  T23 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF3386);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1743F3395,T23);
  T24 = CALL2(1,VARREF(YgooSioSportYputs),x_1743F3395,LITREF(lit_526));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_527));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_528));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_529));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_530));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_531));
  T25 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_532));
  T8 = T25;
  T6 = T8;
  T4 = T6;
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_name_239) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_534),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_240) {
  P name_;
  P T0,T1;
  P a1;
LINK_STACK();
  ARG(name_, 0);
loop:
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_536),T1,LITREF(lit_537));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1745_241) {
  P x_1744_;
  P x_1746F3397;
  P nF3396;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1744_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1744_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1744_);
    nF3396 = T4;
    x_1746F3397 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1746F3397,LITREF(lit_544));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF3396);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1746F3397,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1746F3397,LITREF(lit_545));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1744_);
    a1 = T8;
    x_1744_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1750_242) {
  P x_1749_;
  P x_1751F3399;
  P nF3398;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
  P a1;
LINK_STACK();
  ARG(x_1749_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1749_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1749_);
    nF3398 = T4;
    x_1751F3399 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_1751F3399,LITREF(lit_555));
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF3398);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_1751F3399,T5);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1751F3399,LITREF(lit_556));
    T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1749_);
    a1 = T8;
    x_1749_ = a1;
    goto loop;
    T3 = T7;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_243) {
  P code_out_,mod_,form_;
  P x_1750F3408;
  P x_1748F3407;
  P x_1747F3406;
  P x_1745F3405;
  P uses_namesF3404;
  P usesF3403;
  P envF3402;
  P init_declF3401;
  P nameF3400;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23;
  P a1,a2,a3;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
loop:
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T1 = LITREF(lit_540);
  } else {
    T2 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T1 = T2;
  }
  nameF3400 = T1;
  T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3400);
  init_declF3401 = T4;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF3402 = T6;
  T8 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF3402);
  usesF3403 = T8;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF3403);
  uses_namesF3404 = T10;
  T11 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T11 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_541));
    T13 = FUNSHELL(1,fun_x_1745_241,2);
    x_1745F3405 = T13;
    FUNINIT(x_1745F3405, 2,code_out_,x_1745F3405);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3404);
    T14 = CALL1(0,x_1745F3405,T15);
    T12 = T14;
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_546));
  x_1747F3406 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1747F3406,LITREF(lit_547));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1747F3406,init_declF3401);
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_1747F3406,LITREF(lit_548));
  x_1748F3407 = code_out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1748F3407,init_declF3401);
  T17 = CALL2(1,VARREF(YgooSioSportYputs),x_1748F3407,LITREF(lit_549));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_550));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_551));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_552));
  T18 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T18 != YPfalse) {
    T19 = FUNSHELL(1,fun_x_1750_242,2);
    x_1750F3408 = T19;
    FUNINIT(x_1750F3408, 2,code_out_,x_1750F3408);
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF3404);
    T20 = CALL1(0,x_1750F3408,T21);
    T22 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_557));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),code_out_);
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_558));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_559));
  T9 = T23;
  T7 = T9;
  T5 = T7;
  T3 = T5;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_main_244) {
  P code_out_,mod_;
  P x_1756F3415;
  P x_1755F3414;
  P x_1754F3413;
  P x_1753F3412;
  P x_1752F3411;
  P info_nameF3410;
  P nameF3409;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
  P a1,a2;
LINK_STACK();
  ARG(code_out_, 0);
  ARG(mod_, 1);
loop:
  T1 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF3409 = T1;
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF3409);
  info_nameF3410 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_561));
  x_1752F3411 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1752F3411,LITREF(lit_562));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1752F3411,info_nameF3410);
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_1752F3411,LITREF(lit_563));
  x_1753F3412 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1753F3412,LITREF(lit_564));
  T5 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF3409);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1753F3412,T5);
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_1753F3412,LITREF(lit_565));
  x_1754F3413 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1754F3413,LITREF(lit_566));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1754F3413,info_nameF3410);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_1754F3413,LITREF(lit_567));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_568));
  x_1755F3414 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1755F3414,LITREF(lit_569));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_570));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1755F3414,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_1755F3414,LITREF(lit_571));
  x_1756F3415 = code_out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_1756F3415,LITREF(lit_572));
  T10 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF3409);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_1756F3415,T10);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_1756F3415,LITREF(lit_573));
  CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_574));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),code_out_,LITREF(lit_575));
  T2 = T12;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

P YevalSg2cY___main_0___() {
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
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(YevalSg2cYmodule_loader_appname);
  if (T5 != YPfalse) {
    T4 = VARREF(YevalSg2cYmodule_loader_appname);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  lit_3 = YPPsym((P)"module-loader-appname-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_setter_1 = YPmet(FUNCODEREF(fun_module_loader_appname_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(YevalSg2cYmodule_loader_appname_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(YevalSg2cYmodule_loader_appname_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_module_loader_appname_setter_1;
  T8 = XCALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(YevalSg2cYmodule_loader_appname_setter,T8);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),VARREF(YevalSg2cYmodule_loader_appname_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"module-loader-app-modname");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_2 = YPmet(FUNCODEREF(fun_module_loader_app_modname_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(YevalSg2cYmodule_loader_app_modname);
  if (T15 != YPfalse) {
    T14 = VARREF(YevalSg2cYmodule_loader_app_modname);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_module_loader_app_modname_2;
  T13 = XCALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(YevalSg2cYmodule_loader_app_modname,T13);
  lit_6 = YPPsym((P)"module-loader-app-modname-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLsymG),VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_setter_3 = YPmet(FUNCODEREF(fun_module_loader_app_modname_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(YevalSg2cYmodule_loader_app_modname_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(YevalSg2cYmodule_loader_app_modname_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_module_loader_app_modname_setter_3;
  T18 = XCALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(YevalSg2cYmodule_loader_app_modname_setter,T18);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),VARREF(YevalSg2cYmodule_loader_app_modname_setter),VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"<g2c-module>");
  T23 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T22 = XCALL2(1,VARREF(Yfab_class),LITREF(lit_7),T23);
  VARSET(YevalSg2cYLg2c_moduleG,T22);
  lit_8 = YPPsym((P)"module-src-file");
  T24 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_4 = YPmet(FUNCODEREF(fun_module_src_file_4),LITREF(lit_8),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(YevalSg2cYmodule_src_file);
  if (T27 != YPfalse) {
    T26 = VARREF(YevalSg2cYmodule_src_file);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_module_src_file_4;
  T25 = XCALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(YevalSg2cYmodule_src_file,T25);
  lit_9 = YPPsym((P)"module-src-file-setter");
  T29 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_5 = YPmet(FUNCODEREF(fun_module_src_file_setter_5),LITREF(lit_9),T29,ENVNUL,PNUL,YPfalse);
  T32 = BOUNDP(YevalSg2cYmodule_src_file_setter);
  if (T32 != YPfalse) {
    T31 = VARREF(YevalSg2cYmodule_src_file_setter);
  } else {
    T31 = YPfalse;
  }
  T33 = fun_module_src_file_setter_5;
  T30 = XCALL2(1,VARREF(YPdefine_method),T31,T33);
  VARSET(YevalSg2cYmodule_src_file_setter,T30);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  T34 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_6 = YPmet(FUNCODEREF(fun_module_mtime_6),LITREF(lit_10),T34,ENVNUL,PNUL,YPfalse);
  T37 = BOUNDP(YevalSg2cYmodule_mtime);
  if (T37 != YPfalse) {
    T36 = VARREF(YevalSg2cYmodule_mtime);
  } else {
    T36 = YPfalse;
  }
  T38 = fun_module_mtime_6;
  T35 = XCALL2(1,VARREF(YPdefine_method),T36,T38);
  VARSET(YevalSg2cYmodule_mtime,T35);
  lit_11 = YPPsym((P)"module-mtime-setter");
  T39 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_7 = YPmet(FUNCODEREF(fun_module_mtime_setter_7),LITREF(lit_11),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(YevalSg2cYmodule_mtime_setter);
  if (T42 != YPfalse) {
    T41 = VARREF(YevalSg2cYmodule_mtime_setter);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_module_mtime_setter_7;
  T40 = XCALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(YevalSg2cYmodule_mtime_setter,T40);
  XCALL5(1,VARREF(YPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"module-loader-module-type");
  lit_13 = YPPsym((P)"loader");
  T44 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_8 = YPmet(FUNCODEREF(fun_module_loader_module_type_8),LITREF(lit_12),T44,ENVNUL,PNUL,YPfalse);
  T47 = BOUNDP(YevalSastYmodule_loader_module_type);
  if (T47 != YPfalse) {
    T46 = VARREF(YevalSastYmodule_loader_module_type);
  } else {
    T46 = YPfalse;
  }
  T48 = fun_module_loader_module_type_8;
  T45 = XCALL2(1,VARREF(YPdefine_method),T46,T48);
  VARSET(YevalSastYmodule_loader_module_type,T45);
  lit_14 = YPPsym((P)"load-module");
  lit_15 = YPPsym((P)"name");
  lit_16 = YPsb((P)"START");
  lit_17 = YPsb((P)"OPTIMIZE");
  lit_18 = YPsb((P)"EMIT");
  T54 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T54,ENVNUL,PNUL,YPfalse);
  T53 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T53,ENVNUL,PNUL,YPfalse);
  T52 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T52,ENVNUL,PNUL,YPfalse);
  T51 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T51,ENVNUL,PNUL,YPfalse);
  T50 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_13 = YPmet(FUNCODEREF(fun_13),YPfalse,T50,ENVNUL,PNUL,YPfalse);
  T49 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_15)),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_14 = YPmet(FUNCODEREF(fun_load_module_14),LITREF(lit_14),T49,ENVNUL,PNUL,YPfalse);
  T57 = BOUNDP(YevalSastYload_module);
  if (T57 != YPfalse) {
    T56 = VARREF(YevalSastYload_module);
  } else {
    T56 = YPfalse;
  }
  T58 = fun_load_module_14;
  T55 = XCALL2(1,VARREF(YPdefine_method),T56,T58);
  VARSET(YevalSastYload_module,T55);
  lit_19 = YPPsym((P)"module-up-to-date?");
  lit_20 = YPPsym((P)"mod");
  T59 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_19),T59,ENVNUL,PNUL,YPfalse);
  T60 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T60);
  lit_21 = YPPsym((P)"purge-outdated-modules");
  lit_22 = YPsb((P)" has changed.\n");
  T63 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_16 = YPmet(FUNCODEREF(fun_16),YPfalse,T63,ENVNUL,PNUL,YPfalse);
  T62 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_17 = YPmet(FUNCODEREF(fun_17),YPfalse,T62,ENVNUL,PNUL,YPfalse);
  T61 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_21),T61,ENVNUL,PNUL,YPfalse);
  T64 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T64);
  lit_23 = YPPsym((P)"g2c-def-app");
  lit_24 = YPPsym((P)"appname");
  lit_25 = YPPsym((P)"modname");
  T65 = YPsig(YPPlist(2,LITREF(lit_24),LITREF(lit_25)),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_23),T65,ENVNUL,PNUL,YPfalse);
  T66 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T66);
  lit_26 = YPPsym((P)"g2c-build-app");
  lit_27 = YPsb((P)"Searching for undefined global bindings.\n");
  T67 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_26),T67,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T68);
  lit_28 = YPPsym((P)"g2c-test");
  lit_29 = YPPsym((P)"x");
  lit_30 = YPsb((P)"g2c-");
  lit_31 = YPPsym((P)"eval/main");
  T69 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_28),T69,ENVNUL,PNUL,YPfalse);
  T70 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T70);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_32 = YPPsym((P)"g2c-ast");
  lit_33 = YPPsym((P)"ast");
  lit_34 = YPPsym((P)"env");
  lit_35 = YPsb((P)"exp-%d-%d");
  T77 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T77,ENVNUL,PNUL,YPfalse);
  T76 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T74,ENVNUL,PNUL,YPfalse);
  T73 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T72 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T72,ENVNUL,PNUL,YPfalse);
  T71 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_28 = YPmet(FUNCODEREF(fun_g2c_ast_28),LITREF(lit_32),T71,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(YevalSg2cYg2c_ast);
  if (T80 != YPfalse) {
    T79 = VARREF(YevalSg2cYg2c_ast);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_g2c_ast_28;
  T78 = XCALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(YevalSg2cYg2c_ast,T78);
  lit_36 = YPPsym((P)"g2c-exp");
  lit_37 = YPPsym((P)"exp");
  T82 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_29 = YPmet(FUNCODEREF(fun_g2c_exp_29),LITREF(lit_36),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(YevalSg2cYg2c_exp);
  if (T85 != YPfalse) {
    T84 = VARREF(YevalSg2cYg2c_exp);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_g2c_exp_29;
  T83 = XCALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(YevalSg2cYg2c_exp,T83);
  lit_38 = YPPsym((P)"compile-load");
  lit_39 = YPsb((P)".so");
  lit_40 = YPsb((P)".so");
  T87 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_30 = YPmet(FUNCODEREF(fun_compile_load_30),LITREF(lit_38),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(YevalSg2cYcompile_load);
  if (T90 != YPfalse) {
    T89 = VARREF(YevalSg2cYcompile_load);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_compile_load_30;
  T88 = XCALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(YevalSg2cYcompile_load,T88);
  lit_41 = YPPsym((P)"g2c-eval");
  T92 = YPsig(YPPlist(2,LITREF(lit_37),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_31 = YPmet(FUNCODEREF(fun_g2c_eval_31),LITREF(lit_41),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(YevalStopYg2c_eval);
  if (T95 != YPfalse) {
    T94 = VARREF(YevalStopYg2c_eval);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_g2c_eval_31;
  T93 = XCALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(YevalStopYg2c_eval,T93);
  T97 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_34)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_32 = YPmet(FUNCODEREF(fun_g2c_eval_32),LITREF(lit_41),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(YevalStopYg2c_eval);
  if (T100 != YPfalse) {
    T99 = VARREF(YevalStopYg2c_eval);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_g2c_eval_32;
  T98 = XCALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(YevalStopYg2c_eval,T98);
  lit_42 = YPsb((P)"g2c");
  T102 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_42),LITREF(lit_31));
  VARSET(YevalSg2cYTg2c_appT,T102);
  lit_43 = YPPsym((P)"g2c-top");
  T103 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_33 = YPmet(FUNCODEREF(fun_g2c_top_33),LITREF(lit_43),T103,ENVNUL,PNUL,YPfalse);
  T106 = BOUNDP(YevalSg2cYg2c_top);
  if (T106 != YPfalse) {
    T105 = VARREF(YevalSg2cYg2c_top);
  } else {
    T105 = YPfalse;
  }
  T107 = fun_g2c_top_33;
  T104 = XCALL2(1,VARREF(YPdefine_method),T105,T107);
  VARSET(YevalSg2cYg2c_top,T104);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_44 = YPPsym((P)"g2c-clean");
  lit_45 = YPsb((P)"g2c");
  T108 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_34 = YPmet(FUNCODEREF(fun_g2c_clean_34),LITREF(lit_44),T108,ENVNUL,PNUL,YPfalse);
  T111 = BOUNDP(YevalSg2cYg2c_clean);
  if (T111 != YPfalse) {
    T110 = VARREF(YevalSg2cYg2c_clean);
  } else {
    T110 = YPfalse;
  }
  T112 = fun_g2c_clean_34;
  T109 = XCALL2(1,VARREF(YPdefine_method),T110,T112);
  VARSET(YevalSg2cYg2c_clean,T109);
  lit_46 = YPPsym((P)"compute-ast");
  lit_47 = YPPsym((P)"filename");
  lit_48 = YPPsym((P)"ct-env");
  lit_49 = YPsb((P)"READ");
  lit_50 = YPsb((P)"AST");
  T113 = YPsig(YPPlist(2,LITREF(lit_47),LITREF(lit_48)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_35 = YPmet(FUNCODEREF(fun_compute_ast_35),LITREF(lit_46),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(YevalSg2cYcompute_ast);
  if (T116 != YPfalse) {
    T115 = VARREF(YevalSg2cYcompute_ast);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_compute_ast_35;
  T114 = XCALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(YevalSg2cYcompute_ast,T114);
  lit_51 = YPPsym((P)"compute-program");
  lit_52 = YPPsym((P)"e");
  lit_53 = YPsb((P)"BOX");
  lit_54 = YPsb((P)"ANA");
  lit_55 = YPsb((P)"LFT");
  lit_56 = YPsb((P)"EXT");
  lit_57 = YPsb((P)"CLO");
  lit_58 = YPsb((P)"TMP");
  lit_59 = YPsb((P)"REG");
  T118 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_34)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_36 = YPmet(FUNCODEREF(fun_compute_program_36),LITREF(lit_51),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(YevalSg2cYcompute_program);
  if (T121 != YPfalse) {
    T120 = VARREF(YevalSg2cYcompute_program);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_compute_program_36;
  T119 = XCALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(YevalSg2cYcompute_program,T119);
  lit_60 = YPPsym((P)"generate-c-module");
  lit_61 = YPPsym((P)"code-out");
  lit_62 = YPPsym((P)"prg");
  T123 = YPsig(YPPlist(4,LITREF(lit_61),LITREF(lit_52),LITREF(lit_62),LITREF(lit_20)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_37 = YPmet(FUNCODEREF(fun_generate_c_module_37),LITREF(lit_60),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(YevalSg2cYgenerate_c_module);
  if (T126 != YPfalse) {
    T125 = VARREF(YevalSg2cYgenerate_c_module);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_generate_c_module_37;
  T124 = XCALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(YevalSg2cYgenerate_c_module,T124);
  lit_63 = YPPsym((P)"generate-c-application");
  lit_64 = YPsb((P)"-init");
  T130 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_38 = YPmet(FUNCODEREF(fun_38),YPfalse,T130,ENVNUL,PNUL,YPfalse);
  T129 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T129,ENVNUL,PNUL,YPfalse);
  T128 = YPsig(YPPlist(2,LITREF(lit_13),LITREF(lit_20)),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_c_application_40 = YPmet(FUNCODEREF(fun_generate_c_application_40),LITREF(lit_63),T128,ENVNUL,PNUL,YPfalse);
  T133 = BOUNDP(YevalSg2cYgenerate_c_application);
  if (T133 != YPfalse) {
    T132 = VARREF(YevalSg2cYgenerate_c_application);
  } else {
    T132 = YPfalse;
  }
  T134 = fun_generate_c_application_40;
  T131 = XCALL2(1,VARREF(YPdefine_method),T132,T134);
  VARSET(YevalSg2cYgenerate_c_application,T131);
  lit_65 = YPPsym((P)"return");
  lit_66 = YPPsym((P)"x-1544");
  lit_67 = YPPsym((P)"msg");
  lit_68 = YPPsym((P)"args");
  lit_69 = YPPsym((P)"for-mods");
  lit_70 = YPsb((P)"Match Pattern Failure");
  lit_71 = YPPsym((P)"do-module-loader-modules");
  lit_72 = YPPsym((P)"fun");
  T137 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1544_41 = YPmet(FUNCODEREF(fun_x_1544_41),LITREF(lit_66),T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T135 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T135,ENVNUL,PNUL,YPfalse);
  T138 = fun_43;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T138);
  lit_73 = YPPsym((P)"generate-makefile");
  lit_74 = YPsb((P)"-init");
  lit_75 = YPsb((P)"Makefile");
  lit_76 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_77 = YPsb((P)"%,$(C_OBJS))\n");
  lit_78 = YPsb((P)": ..");
  lit_79 = YPsb((P)"grt.h\n");
  lit_80 = YPsb((P)"\t$(CC) -I.. ");
  lit_81 = YPPsym((P)"i");
  lit_82 = YPsb((P)"-I");
  lit_83 = YPsb((P)" ");
  lit_84 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_85 = YPsb((P)"OBJS = \\\n");
  lit_86 = YPPsym((P)"put-obj");
  lit_87 = YPsb((P)"\t");
  lit_88 = YPsb((P)" \\\n");
  lit_89 = YPPsym((P)"n");
  lit_90 = YPsb((P)"\t");
  lit_91 = YPsb((P)"\n\n");
  lit_92 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_93 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_94 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_95 = YPPsym((P)"l");
  lit_96 = YPsb((P)" ");
  lit_97 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_98 = YPsb((P)" $(OBJS)\n");
  T149 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T149,ENVNUL,PNUL,YPfalse);
  T148 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T148,ENVNUL,PNUL,YPfalse);
  T147 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_46 = YPmet(FUNCODEREF(fun_put_obj_46),LITREF(lit_86),T147,ENVNUL,PNUL,YPfalse);
  T146 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_89)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T145,ENVNUL,PNUL,YPfalse);
  T144 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T144,ENVNUL,PNUL,YPfalse);
  T143 = YPsig(YPPlist(1,LITREF(lit_95)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_52 = YPmet(FUNCODEREF(fun_52),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_53 = YPmet(FUNCODEREF(fun_53),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(1,LITREF(lit_13)),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_54 = YPmet(FUNCODEREF(fun_generate_makefile_54),LITREF(lit_73),T139,ENVNUL,PNUL,YPfalse);
  T152 = BOUNDP(YevalSg2cYgenerate_makefile);
  if (T152 != YPfalse) {
    T151 = VARREF(YevalSg2cYgenerate_makefile);
  } else {
    T151 = YPfalse;
  }
  T153 = fun_generate_makefile_54;
  T150 = XCALL2(1,VARREF(YPdefine_method),T151,T153);
  VARSET(YevalSg2cYgenerate_makefile,T150);
  lit_99 = YPPsym((P)"pp");
  T154 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_55 = YPmet(FUNCODEREF(fun_pp_55),LITREF(lit_99),T154,ENVNUL,PNUL,YPfalse);
  T157 = BOUNDP(YevalSg2cYpp);
  if (T157 != YPfalse) {
    T156 = VARREF(YevalSg2cYpp);
  } else {
    T156 = YPfalse;
  }
  T158 = fun_pp_55;
  T155 = XCALL2(1,VARREF(YPdefine_method),T156,T158);
  VARSET(YevalSg2cYpp,T155);
  lit_100 = YPPsym((P)"generate-header");
  lit_101 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_102 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_103 = YPsb((P)"#include \"dlgrt.h\"\n");
  T159 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_56 = YPmet(FUNCODEREF(fun_generate_header_56),LITREF(lit_100),T159,ENVNUL,PNUL,YPfalse);
  T162 = BOUNDP(YevalSg2cYgenerate_header);
  if (T162 != YPfalse) {
    T161 = VARREF(YevalSg2cYgenerate_header);
  } else {
    T161 = YPfalse;
  }
  T163 = fun_generate_header_56;
  T160 = XCALL2(1,VARREF(YPdefine_method),T161,T163);
  VARSET(YevalSg2cYgenerate_header,T160);
  lit_104 = YPPsym((P)"generate-trailer");
  lit_105 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T164 = YPsig(YPPlist(1,LITREF(lit_61)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_57 = YPmet(FUNCODEREF(fun_generate_trailer_57),LITREF(lit_104),T164,ENVNUL,PNUL,YPfalse);
  T167 = BOUNDP(YevalSg2cYgenerate_trailer);
  if (T167 != YPfalse) {
    T166 = VARREF(YevalSg2cYgenerate_trailer);
  } else {
    T166 = YPfalse;
  }
  T168 = fun_generate_trailer_57;
  T165 = XCALL2(1,VARREF(YPdefine_method),T166,T168);
  VARSET(YevalSg2cYgenerate_trailer,T165);
  lit_106 = YPPsym((P)"generate-global-environment");
  lit_107 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_108 = YPsb((P)" */\n\n");
  lit_109 = YPPsym((P)"binding");
  T170 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T170,ENVNUL,PNUL,YPfalse);
  T169 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_59 = YPmet(FUNCODEREF(fun_generate_global_environment_59),LITREF(lit_106),T169,ENVNUL,PNUL,YPfalse);
  T173 = BOUNDP(YevalSg2cYgenerate_global_environment);
  if (T173 != YPfalse) {
    T172 = VARREF(YevalSg2cYgenerate_global_environment);
  } else {
    T172 = YPfalse;
  }
  T174 = fun_generate_global_environment_59;
  T171 = XCALL2(1,VARREF(YPdefine_method),T172,T174);
  VARSET(YevalSg2cYgenerate_global_environment,T171);
  lit_110 = YPPsym((P)"generate-global-binding");
  lit_111 = YPPsym((P)"imported?");
  lit_112 = YPPsym((P)"gb");
  lit_113 = YPPsym((P)"global");
  lit_114 = YPPsym((P)"runtime");
  lit_115 = YPPsym((P)"dynamic");
  lit_116 = YPsb((P)"RTV");
  lit_117 = YPsb((P)"DYN");
  lit_118 = YPsb((P)"");
  lit_119 = YPsb((P)"EXT");
  lit_120 = YPsb((P)"DEF");
  lit_121 = YPsb((P)"(");
  lit_122 = YPsb((P)",\"");
  lit_123 = YPsb((P)"\",\"");
  lit_124 = YPsb((P)"\");\n");
  T175 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_111),LITREF(lit_112)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_60 = YPmet(FUNCODEREF(fun_generate_global_binding_60),LITREF(lit_110),T175,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSg2cYgenerate_global_binding);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_global_binding);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_global_binding_60;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_global_binding,T176);
  lit_125 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_125));
  lit_126 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_126));
  lit_127 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_127));
  lit_128 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_128));
  lit_129 = YPsb((P)"I");
  T181 = VARSET(YevalSg2cYDiep_suffix,LITREF(lit_129));
  T180 = T181;
  return T180;
}

P YevalSg2cY___main_1___() {
  P x_1572F3421;
  P x_1570F3420;
  P x_1568F3419;
  P x_1566F3418;
  P tableF3417;
  P vecF3416;
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
  P T272,T273,T274;
DEFCREGS();
loop:
  lit_130 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_130));
  T0 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T0);
  T1 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T1);
  T2 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T2);
  T3 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T3);
  T4 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T4);
  T5 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T5);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T6 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T6);
  lit_131 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_132 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_133 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_134 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_135 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_136 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_137 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_138 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_139 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_140 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_141 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_142 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_143 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_144 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_145 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_146 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_147 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_148 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T7 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_131),LITREF(lit_132),LITREF(lit_133),LITREF(lit_134),LITREF(lit_135),LITREF(lit_136),LITREF(lit_137),LITREF(lit_138),LITREF(lit_139),LITREF(lit_140),LITREF(lit_141),LITREF(lit_142),LITREF(lit_143),LITREF(lit_144),LITREF(lit_145),LITREF(lit_146),LITREF(lit_147),LITREF(lit_148));
  VARSET(YevalSg2cYDmangles_data,T7);
  lit_149 = YPPsym((P)"char-buffer-as-string");
  lit_150 = YPPsym((P)"buffer");
  lit_151 = YPPsym((P)"loop");
  T9 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_61 = YPmet(FUNCODEREF(fun_loop_61),LITREF(lit_151),T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_149),T8,ENVNUL,PNUL,YPfalse);
  T10 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T10);
  lit_152 = YPsb((P)"\\t");
  lit_153 = YPsb((P)"\\f");
  lit_154 = YPsb((P)"\\r");
  lit_155 = YPsb((P)"\\n");
  lit_156 = YPsb((P)"\\\"");
  lit_157 = YPsb((P)"\\\\");
  T13 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T12 = XCALL2(1,VARREF(YgooScolsScolYfill),T13,YPfalse);
  vecF3416 = T12;
  T14 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_152),vecF3416,T14);
  T15 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_153),vecF3416,T15);
  T16 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_154),vecF3416,T16);
  T17 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_155),vecF3416,T17);
  T18 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_156),vecF3416,T18);
  T19 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_157),vecF3416,T19);
  T20 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF3416);
  T11 = T20;
  VARSET(YevalSg2cYDc_escapes,T11);
  lit_158 = YPPsym((P)"mangle-string-literal");
  lit_159 = YPPsym((P)"str");
  T22 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_63 = YPmet(FUNCODEREF(fun_loop_63),LITREF(lit_151),T22,ENVNUL,PNUL,YPfalse);
  T21 = YPsig(YPPlist(1,LITREF(lit_159)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_64 = YPmet(FUNCODEREF(fun_mangle_string_literal_64),LITREF(lit_158),T21,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T25 != YPfalse) {
    T24 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_mangle_string_literal_64;
  T23 = XCALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(YevalSg2cYmangle_string_literal,T23);
  lit_160 = YPPsym((P)"sym");
  T27 = YPsig(YPPlist(1,LITREF(lit_160)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_65 = YPmet(FUNCODEREF(fun_mangle_string_literal_65),LITREF(lit_158),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(YevalSg2cYmangle_string_literal);
  if (T30 != YPfalse) {
    T29 = VARREF(YevalSg2cYmangle_string_literal);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_mangle_string_literal_65;
  T28 = XCALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(YevalSg2cYmangle_string_literal,T28);
  lit_161 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_161));
  lit_162 = YPPsym((P)"mangle-integer");
  lit_163 = YPPsym((P)"number");
  lit_164 = YPPsym((P)"process-integer");
  lit_165 = YPPsym((P)"index");
  T33 = YPsig(YPPlist(2,LITREF(lit_163),LITREF(lit_165)),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_66 = YPmet(FUNCODEREF(fun_process_integer_66),LITREF(lit_164),T33,ENVNUL,PNUL,YPfalse);
  T32 = YPsig(YPPlist(1,LITREF(lit_163)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_67 = YPmet(FUNCODEREF(fun_mangle_integer_67),LITREF(lit_162),T32,ENVNUL,PNUL,YPfalse);
  T36 = BOUNDP(YevalSg2cYmangle_integer);
  if (T36 != YPfalse) {
    T35 = VARREF(YevalSg2cYmangle_integer);
  } else {
    T35 = YPfalse;
  }
  T37 = fun_mangle_integer_67;
  T34 = XCALL2(1,VARREF(YPdefine_method),T35,T37);
  VARSET(YevalSg2cYmangle_integer,T34);
  lit_166 = YPPsym((P)"x-1566");
  lit_167 = YPPsym((P)"x-1565");
  lit_168 = YPPsym((P)"x-1568");
  lit_169 = YPPsym((P)"x-1567");
  lit_170 = YPPsym((P)"x-1570");
  lit_171 = YPPsym((P)"x-1569");
  lit_172 = YPPsym((P)"x-1572");
  lit_173 = YPPsym((P)"x-1571");
  T41 = YPsig(YPPlist(1,LITREF(lit_167)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1566_68 = YPmet(FUNCODEREF(fun_x_1566_68),LITREF(lit_166),T41,ENVNUL,PNUL,YPfalse);
  T40 = YPsig(YPPlist(1,LITREF(lit_169)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1568_69 = YPmet(FUNCODEREF(fun_x_1568_69),LITREF(lit_168),T40,ENVNUL,PNUL,YPfalse);
  T39 = YPsig(YPPlist(1,LITREF(lit_171)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1570_70 = YPmet(FUNCODEREF(fun_x_1570_70),LITREF(lit_170),T39,ENVNUL,PNUL,YPfalse);
  T38 = YPsig(YPPlist(1,LITREF(lit_173)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1572_71 = YPmet(FUNCODEREF(fun_x_1572_71),LITREF(lit_172),T38,ENVNUL,PNUL,YPfalse);
  T44 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T43 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T44);
  tableF3417 = T43;
  T45 = FUNSHELL(1,fun_x_1566_68,2);
  x_1566F3418 = T45;
  FUNINIT(x_1566F3418, 2,tableF3417,x_1566F3418);
  T48 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T47 = XCALL1(1,VARREF(YgooScolsScolYenum),T48);
  T46 = XCALL1(0,x_1566F3418,T47);
  T49 = FUNSHELL(1,fun_x_1568_69,2);
  x_1568F3419 = T49;
  FUNINIT(x_1568F3419, 2,tableF3417,x_1568F3419);
  T51 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  T50 = XCALL1(0,x_1568F3419,T51);
  T52 = FUNSHELL(1,fun_x_1570_70,2);
  x_1570F3420 = T52;
  FUNINIT(x_1570F3420, 2,tableF3417,x_1570F3420);
  T56 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T57 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T55 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T56,VARREF(YgooSmagYLE),T57);
  T54 = XCALL1(1,VARREF(YgooScolsScolYenum),T55);
  T53 = XCALL1(0,x_1570F3420,T54);
  T58 = FUNSHELL(1,fun_x_1572_71,2);
  x_1572F3421 = T58;
  FUNINIT(x_1572F3421, 2,tableF3417,x_1572F3421);
  T62 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T63 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T61 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T62,VARREF(YgooSmagYLE),T63);
  T60 = XCALL1(1,VARREF(YgooScolsScolYenum),T61);
  T59 = XCALL1(0,x_1572F3421,T60);
  T42 = tableF3417;
  VARSET(YevalSg2cYDname_mangler_table,T42);
  lit_174 = YPPsym((P)"mangler-reset");
  T64 = YPsig(YPPlist(1,LITREF(lit_150)),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_174),T64,ENVNUL,PNUL,YPfalse);
  T65 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T65);
  lit_175 = YPPsym((P)"mangle-name-into");
  lit_176 = YPPsym((P)"buf");
  lit_177 = YPPsym((P)"x-1574");
  lit_178 = YPPsym((P)"x-1573");
  T67 = YPsig(YPPlist(1,LITREF(lit_178)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1574_73 = YPmet(FUNCODEREF(fun_x_1574_73),LITREF(lit_177),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_175),T66,ENVNUL,PNUL,YPfalse);
  T68 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T68);
  lit_179 = YPPsym((P)"mangle-raw-name");
  T69 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_75 = YPmet(FUNCODEREF(fun_mangle_raw_name_75),LITREF(lit_179),T69,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_mangle_raw_name_75;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYmangle_raw_name,T70);
  T74 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_76 = YPmet(FUNCODEREF(fun_mangle_raw_name_76),LITREF(lit_179),T74,ENVNUL,PNUL,YPfalse);
  T77 = BOUNDP(YevalSg2cYmangle_raw_name);
  if (T77 != YPfalse) {
    T76 = VARREF(YevalSg2cYmangle_raw_name);
  } else {
    T76 = YPfalse;
  }
  T78 = fun_mangle_raw_name_76;
  T75 = XCALL2(1,VARREF(YPdefine_method),T76,T78);
  VARSET(YevalSg2cYmangle_raw_name,T75);
  lit_180 = YPPsym((P)"mangle-local-name");
  T79 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_77 = YPmet(FUNCODEREF(fun_mangle_local_name_77),LITREF(lit_180),T79,ENVNUL,PNUL,YPfalse);
  T82 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T82 != YPfalse) {
    T81 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T81 = YPfalse;
  }
  T83 = fun_mangle_local_name_77;
  T80 = XCALL2(1,VARREF(YPdefine_method),T81,T83);
  VARSET(YevalSg2cYmangle_local_name,T80);
  T84 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_78 = YPmet(FUNCODEREF(fun_mangle_local_name_78),LITREF(lit_180),T84,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYmangle_local_name);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYmangle_local_name);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_mangle_local_name_78;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYmangle_local_name,T85);
  lit_181 = YPPsym((P)"x-1578");
  lit_182 = YPPsym((P)"or/set");
  lit_183 = YPPsym((P)"or");
  lit_184 = YPPsym((P)"set");
  T91 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1578_79 = YPmet(FUNCODEREF(fun_x_1578_79),LITREF(lit_181),T91,ENVNUL,PNUL,YPfalse);
  T90 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T89,ENVNUL,PNUL,YPfalse);
  T92 = fun_81;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"or/set"),T92);
  lit_185 = YPPsym((P)"buf-cat2!");
  T94 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_82 = YPmet(FUNCODEREF(fun_loop_82),LITREF(lit_151),T94,ENVNUL,PNUL,YPfalse);
  T93 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_15)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_185),T93,ENVNUL,PNUL,YPfalse);
  T95 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T95);
  lit_186 = YPPsym((P)"mangle-module-into");
  T96 = YPsig(YPPlist(2,LITREF(lit_176),LITREF(lit_20)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_84 = YPmet(FUNCODEREF(fun_mangle_module_into_84),LITREF(lit_186),T96,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYmangle_module_into);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYmangle_module_into);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_mangle_module_into_84;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYmangle_module_into,T97);
  lit_187 = YPPsym((P)"mangle-global-name");
  T101 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_85 = YPmet(FUNCODEREF(fun_mangle_global_name_85),LITREF(lit_187),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_mangle_global_name_85;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYmangle_global_name,T102);
  T106 = YPsig(YPPlist(2,LITREF(lit_20),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_86 = YPmet(FUNCODEREF(fun_mangle_global_name_86),LITREF(lit_187),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYmangle_global_name);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYmangle_global_name);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_mangle_global_name_86;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYmangle_global_name,T107);
  lit_188 = YPPsym((P)"mangle-boot-name");
  T111 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_188),T111,ENVNUL,PNUL,YPfalse);
  T112 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T112);
  lit_189 = YPPsym((P)"mangle-quotation-name");
  lit_190 = YPsb((P)"lit_");
  T113 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_189),T113,ENVNUL,PNUL,YPfalse);
  T114 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T114);
  lit_191 = YPPsym((P)"mangle-binding");
  lit_192 = YPPsym((P)"quotation");
  T115 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_89 = YPmet(FUNCODEREF(fun_mangle_binding_89),LITREF(lit_191),T115,ENVNUL,PNUL,YPfalse);
  T118 = BOUNDP(YevalSg2cYmangle_binding);
  if (T118 != YPfalse) {
    T117 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T117 = YPfalse;
  }
  T119 = fun_mangle_binding_89;
  T116 = XCALL2(1,VARREF(YPdefine_method),T117,T119);
  VARSET(YevalSg2cYmangle_binding,T116);
  lit_193 = YPPsym((P)"mangle-local-marked-name");
  lit_194 = YPPsym((P)"marker");
  T120 = YPsig(YPPlist(2,LITREF(lit_15),LITREF(lit_194)),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_193),T120,ENVNUL,PNUL,YPfalse);
  T121 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T121);
  T122 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_91 = YPmet(FUNCODEREF(fun_mangle_binding_91),LITREF(lit_191),T122,ENVNUL,PNUL,YPfalse);
  T125 = BOUNDP(YevalSg2cYmangle_binding);
  if (T125 != YPfalse) {
    T124 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T124 = YPfalse;
  }
  T126 = fun_mangle_binding_91;
  T123 = XCALL2(1,VARREF(YPdefine_method),T124,T126);
  VARSET(YevalSg2cYmangle_binding,T123);
  T127 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_92 = YPmet(FUNCODEREF(fun_mangle_binding_92),LITREF(lit_191),T127,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYmangle_binding);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYmangle_binding);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_mangle_binding_92;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYmangle_binding,T128);
  lit_195 = YPPsym((P)"x-1582");
  lit_196 = YPPsym((P)"for-commas");
  lit_197 = YPPsym((P)"let");
  lit_198 = YPPsym((P)"for");
  lit_199 = YPPsym((P)"first?");
  lit_200 = YPPsym((P)"first-then");
  lit_201 = YPPsym((P)"op");
  lit_202 = YPPsym((P)"unless");
  lit_203 = YPPsym((P)"put");
  T134 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1582_93 = YPmet(FUNCODEREF(fun_x_1582_93),LITREF(lit_195),T134,ENVNUL,PNUL,YPfalse);
  T133 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_94 = YPmet(FUNCODEREF(fun_94),YPfalse,T133,ENVNUL,PNUL,YPfalse);
  T132 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T132,ENVNUL,PNUL,YPfalse);
  T135 = fun_95;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T135);
  lit_204 = YPPsym((P)"x-1586");
  lit_205 = YPPsym((P)"between-parentheses");
  T138 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1586_96 = YPmet(FUNCODEREF(fun_x_1586_96),LITREF(lit_204),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_97 = YPmet(FUNCODEREF(fun_97),YPfalse,T137,ENVNUL,PNUL,YPfalse);
  T136 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T136,ENVNUL,PNUL,YPfalse);
  T139 = fun_98;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T139);
  lit_206 = YPPsym((P)"x-1590");
  lit_207 = YPPsym((P)"between-parentheses-comma-separated");
  lit_208 = YPPsym((P)"forms");
  lit_209 = YPPsym((P)"body");
  T143 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1590_99 = YPmet(FUNCODEREF(fun_x_1590_99),LITREF(lit_206),T143,ENVNUL,PNUL,YPfalse);
  T142 = YPsig(YPPlist(3,LITREF(lit_208),LITREF(lit_209),LITREF(lit_199)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_loop_100 = YPmet(FUNCODEREF(fun_loop_100),LITREF(lit_151),T142,ENVNUL,PNUL,YPfalse);
  T141 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_101 = YPmet(FUNCODEREF(fun_101),YPfalse,T141,ENVNUL,PNUL,YPfalse);
  T140 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_102 = YPmet(FUNCODEREF(fun_102),YPfalse,T140,ENVNUL,PNUL,YPfalse);
  T144 = fun_102;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T144);
  lit_210 = YPPsym((P)"gen-result");
  lit_211 = YPPsym((P)"d");
  lit_212 = YPsb((P)"T");
  lit_213 = YPsb((P)" = ");
  T145 = YPsig(YPPlist(3,LITREF(lit_52),LITREF(lit_211),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_103 = YPmet(FUNCODEREF(fun_gen_result_103),LITREF(lit_210),T145,ENVNUL,PNUL,YPfalse);
  T148 = BOUNDP(YevalSg2cYgen_result);
  if (T148 != YPfalse) {
    T147 = VARREF(YevalSg2cYgen_result);
  } else {
    T147 = YPfalse;
  }
  T149 = fun_gen_result_103;
  T146 = XCALL2(1,VARREF(YPdefine_method),T147,T149);
  VARSET(YevalSg2cYgen_result,T146);
  lit_214 = YPPsym((P)"gen-depth");
  lit_215 = YPPsym((P)"x-1593");
  lit_216 = YPPsym((P)"x-1592");
  lit_217 = YPsb((P)"  ");
  T151 = YPsig(YPPlist(1,LITREF(lit_216)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1593_104 = YPmet(FUNCODEREF(fun_x_1593_104),LITREF(lit_215),T151,ENVNUL,PNUL,YPfalse);
  T150 = YPsig(YPPlist(2,LITREF(lit_211),LITREF(lit_61)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_105 = YPmet(FUNCODEREF(fun_gen_depth_105),LITREF(lit_214),T150,ENVNUL,PNUL,YPfalse);
  T154 = BOUNDP(YevalSg2cYgen_depth);
  if (T154 != YPfalse) {
    T153 = VARREF(YevalSg2cYgen_depth);
  } else {
    T153 = YPfalse;
  }
  T155 = fun_gen_depth_105;
  T152 = XCALL2(1,VARREF(YPdefine_method),T153,T155);
  VARSET(YevalSg2cYgen_depth,T152);
  lit_218 = YPPsym((P)"x-1597");
  lit_219 = YPPsym((P)"with-statement");
  lit_220 = YPPsym((P)"seq");
  lit_221 = YPPsym((P)"puts");
  lit_222 = YPsb((P)";\n");
  T158 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1597_106 = YPmet(FUNCODEREF(fun_x_1597_106),LITREF(lit_218),T158,ENVNUL,PNUL,YPfalse);
  T157 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_107 = YPmet(FUNCODEREF(fun_107),YPfalse,T157,ENVNUL,PNUL,YPfalse);
  T156 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_108 = YPmet(FUNCODEREF(fun_108),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T159 = fun_108;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T159);
  lit_223 = YPPsym((P)"x-1601");
  lit_224 = YPPsym((P)"with-expression");
  T162 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1601_109 = YPmet(FUNCODEREF(fun_x_1601_109),LITREF(lit_223),T162,ENVNUL,PNUL,YPfalse);
  T161 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T161,ENVNUL,PNUL,YPfalse);
  T160 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T160,ENVNUL,PNUL,YPfalse);
  T163 = fun_111;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T163);
  lit_225 = YPPsym((P)"x-1605");
  lit_226 = YPPsym((P)"with-used-expression");
  lit_227 = YPPsym((P)"when");
  lit_228 = YPPsym((P)"program-register");
  T166 = YPsig(YPPlist(2,LITREF(lit_67),LITREF(lit_68)),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1605_112 = YPmet(FUNCODEREF(fun_x_1605_112),LITREF(lit_225),T166,ENVNUL,PNUL,YPfalse);
  T165 = YPsig(YPPlist(1,LITREF(lit_65)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_113 = YPmet(FUNCODEREF(fun_113),YPfalse,T165,ENVNUL,PNUL,YPfalse);
  T164 = YPsig(YPPlist(1,LITREF(lit_37)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_114 = YPmet(FUNCODEREF(fun_114),YPfalse,T164,ENVNUL,PNUL,YPfalse);
  T167 = fun_114;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T167);
  lit_229 = YPPsym((P)"generate-quotation-forwards");
  lit_230 = YPPsym((P)"qb*");
  lit_231 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_232 = YPPsym((P)"x-1607");
  lit_233 = YPPsym((P)"x-1606");
  lit_234 = YPsb((P)"DEFLIT(lit_");
  lit_235 = YPsb((P)");\n");
  T169 = YPsig(YPPlist(1,LITREF(lit_233)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1607_115 = YPmet(FUNCODEREF(fun_x_1607_115),LITREF(lit_232),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_116 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_116),LITREF(lit_229),T168,ENVNUL,PNUL,YPfalse);
  T172 = BOUNDP(YevalSg2cYgenerate_quotation_forwards);
  if (T172 != YPfalse) {
    T171 = VARREF(YevalSg2cYgenerate_quotation_forwards);
  } else {
    T171 = YPfalse;
  }
  T173 = fun_generate_quotation_forwards_116;
  T170 = XCALL2(1,VARREF(YPdefine_method),T171,T173);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T170);
  lit_236 = YPPsym((P)"generate-quotations");
  lit_237 = YPPsym((P)"x-1610");
  lit_238 = YPPsym((P)"x-1609");
  lit_239 = YPsb((P)"lit_");
  lit_240 = YPsb((P)" = ");
  T175 = YPsig(YPPlist(1,LITREF(lit_238)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1610_117 = YPmet(FUNCODEREF(fun_x_1610_117),LITREF(lit_237),T175,ENVNUL,PNUL,YPfalse);
  T174 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_230)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_118 = YPmet(FUNCODEREF(fun_generate_quotations_118),LITREF(lit_236),T174,ENVNUL,PNUL,YPfalse);
  T178 = BOUNDP(YevalSg2cYgenerate_quotations);
  if (T178 != YPfalse) {
    T177 = VARREF(YevalSg2cYgenerate_quotations);
  } else {
    T177 = YPfalse;
  }
  T179 = fun_generate_quotations_118;
  T176 = XCALL2(1,VARREF(YPdefine_method),T177,T179);
  VARSET(YevalSg2cYgenerate_quotations,T176);
  lit_241 = YPPsym((P)"false-name");
  lit_242 = YPsb((P)"%false");
  T180 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_119 = YPmet(FUNCODEREF(fun_false_name_119),LITREF(lit_241),T180,ENVNUL,PNUL,YPfalse);
  T183 = BOUNDP(YevalSg2cYfalse_name);
  if (T183 != YPfalse) {
    T182 = VARREF(YevalSg2cYfalse_name);
  } else {
    T182 = YPfalse;
  }
  T184 = fun_false_name_119;
  T181 = XCALL2(1,VARREF(YPdefine_method),T182,T184);
  VARSET(YevalSg2cYfalse_name,T181);
  lit_243 = YPPsym((P)"generate-quotation");
  lit_244 = YPPsym((P)"qb");
  lit_245 = YPsb((P)"%true");
  lit_246 = YPsb((P)"%false");
  T185 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_244)),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_120 = YPmet(FUNCODEREF(fun_generate_quotation_120),LITREF(lit_243),T185,ENVNUL,PNUL,YPfalse);
  T188 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T188 != YPfalse) {
    T187 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T187 = YPfalse;
  }
  T189 = fun_generate_quotation_120;
  T186 = XCALL2(1,VARREF(YPdefine_method),T187,T189);
  VARSET(YevalSg2cYgenerate_quotation,T186);
  lit_247 = YPsb((P)"nil");
  T191 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T190 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_244)),YPPlist(2,VARREF(YLanyG),T191),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_121 = YPmet(FUNCODEREF(fun_generate_quotation_121),LITREF(lit_243),T190,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_quotation_121;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_quotation,T192);
  T197 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_122 = YPmet(FUNCODEREF(fun_122),YPfalse,T197,ENVNUL,PNUL,YPfalse);
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_244)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_123 = YPmet(FUNCODEREF(fun_generate_quotation_123),LITREF(lit_243),T196,ENVNUL,PNUL,YPfalse);
  T200 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T200 != YPfalse) {
    T199 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T199 = YPfalse;
  }
  T201 = fun_generate_quotation_123;
  T198 = XCALL2(1,VARREF(YPdefine_method),T199,T201);
  VARSET(YevalSg2cYgenerate_quotation,T198);
  lit_248 = YPsb((P)"%int");
  lit_249 = YPsb((P)"((P)");
  lit_250 = YPsb((P)")");
  T202 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_124 = YPmet(FUNCODEREF(fun_generate_quotation_124),LITREF(lit_243),T202,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_generate_quotation_124;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSg2cYgenerate_quotation,T203);
  lit_251 = YPsb((P)"%chr");
  lit_252 = YPsb((P)"((P)");
  lit_253 = YPsb((P)")");
  T207 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_125 = YPmet(FUNCODEREF(fun_generate_quotation_125),LITREF(lit_243),T207,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T210 != YPfalse) {
    T209 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_generate_quotation_125;
  T208 = XCALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(YevalSg2cYgenerate_quotation,T208);
  lit_254 = YPPsym((P)"float-to-c-string");
  lit_255 = YPPsym((P)"o");
  lit_256 = YPPsym((P)"done");
  T214 = YPsig(YPPlist(1,LITREF(lit_81)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_loop_126 = YPmet(FUNCODEREF(fun_loop_126),LITREF(lit_151),T214,ENVNUL,PNUL,YPfalse);
  T213 = YPsig(YPPlist(1,LITREF(lit_256)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_127 = YPmet(FUNCODEREF(fun_127),YPfalse,T213,ENVNUL,PNUL,YPfalse);
  T212 = YPsig(YPPlist(1,LITREF(lit_255)),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_128 = YPmet(FUNCODEREF(fun_float_to_c_string_128),LITREF(lit_254),T212,ENVNUL,PNUL,YPfalse);
  T217 = BOUNDP(YevalSg2cYfloat_to_c_string);
  if (T217 != YPfalse) {
    T216 = VARREF(YevalSg2cYfloat_to_c_string);
  } else {
    T216 = YPfalse;
  }
  T218 = fun_float_to_c_string_128;
  T215 = XCALL2(1,VARREF(YPdefine_method),T216,T218);
  VARSET(YevalSg2cYfloat_to_c_string,T215);
  lit_257 = YPsb((P)"%flo");
  lit_258 = YPsb((P)"(FLOINT(");
  lit_259 = YPsb((P)"))");
  T219 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_129 = YPmet(FUNCODEREF(fun_generate_quotation_129),LITREF(lit_243),T219,ENVNUL,PNUL,YPfalse);
  T222 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T222 != YPfalse) {
    T221 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T221 = YPfalse;
  }
  T223 = fun_generate_quotation_129;
  T220 = XCALL2(1,VARREF(YPdefine_method),T221,T223);
  VARSET(YevalSg2cYgenerate_quotation,T220);
  lit_260 = YPsb((P)"%sb");
  lit_261 = YPsb((P)"((P)\"");
  lit_262 = YPsb((P)"\")");
  T224 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_130 = YPmet(FUNCODEREF(fun_generate_quotation_130),LITREF(lit_243),T224,ENVNUL,PNUL,YPfalse);
  T227 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T227 != YPfalse) {
    T226 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T226 = YPfalse;
  }
  T228 = fun_generate_quotation_130;
  T225 = XCALL2(1,VARREF(YPdefine_method),T226,T228);
  VARSET(YevalSg2cYgenerate_quotation,T225);
  lit_263 = YPsb((P)"XCALLN(1, ");
  lit_264 = YPsb((P)"vec");
  lit_265 = YPsb((P)", ");
  lit_266 = YPPsym((P)"x-1620");
  lit_267 = YPPsym((P)"x-1619");
  lit_268 = YPsb((P)", ");
  lit_269 = YPsb((P)")");
  T230 = YPsig(YPPlist(1,LITREF(lit_267)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1620_131 = YPmet(FUNCODEREF(fun_x_1620_131),LITREF(lit_266),T230,ENVNUL,PNUL,YPfalse);
  T229 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_132 = YPmet(FUNCODEREF(fun_generate_quotation_132),LITREF(lit_243),T229,ENVNUL,PNUL,YPfalse);
  T233 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T233 != YPfalse) {
    T232 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T232 = YPfalse;
  }
  T234 = fun_generate_quotation_132;
  T231 = XCALL2(1,VARREF(YPdefine_method),T232,T234);
  VARSET(YevalSg2cYgenerate_quotation,T231);
  lit_270 = YPsb((P)"XCALLN(1, ");
  lit_271 = YPsb((P)"tup");
  lit_272 = YPsb((P)", ");
  lit_273 = YPPsym((P)"x-1623");
  lit_274 = YPPsym((P)"x-1622");
  lit_275 = YPsb((P)", ");
  lit_276 = YPsb((P)")");
  T236 = YPsig(YPPlist(1,LITREF(lit_274)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1623_133 = YPmet(FUNCODEREF(fun_x_1623_133),LITREF(lit_273),T236,ENVNUL,PNUL,YPfalse);
  T235 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_134 = YPmet(FUNCODEREF(fun_generate_quotation_134),LITREF(lit_243),T235,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_generate_quotation_134;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYgenerate_quotation,T237);
  lit_277 = YPsb((P)"%%sym");
  lit_278 = YPsb((P)"((P)\"");
  lit_279 = YPsb((P)"\")");
  T241 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_29)),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_135 = YPmet(FUNCODEREF(fun_generate_quotation_135),LITREF(lit_243),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSg2cYgenerate_quotation);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSg2cYgenerate_quotation);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_generate_quotation_135;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSg2cYgenerate_quotation,T242);
  lit_280 = YPPsym((P)"binding->c");
  T246 = YPsig(YPPlist(2,LITREF(lit_109),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_280),T246,ENVNUL,PNUL,YPfalse);
  T247 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T247);
  lit_281 = YPPsym((P)"reference->c");
  lit_282 = YPPsym((P)"v");
  T249 = YPsig(YPPlist(2,LITREF(lit_282),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T248 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_281),T249,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T248);
  T250 = YPsig(YPPlist(2,LITREF(lit_282),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_137 = YPmet(FUNCODEREF(fun_reference_Gc_137),LITREF(lit_281),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(YevalSg2cYreference_Gc);
  if (T253 != YPfalse) {
    T252 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_reference_Gc_137;
  T251 = XCALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(YevalSg2cYreference_Gc,T251);
  lit_283 = YPsb((P)"LITREF");
  lit_284 = YPsb((P)"RTVREF");
  lit_285 = YPsb((P)"DYNREF");
  lit_286 = YPsb((P)"VARREF");
  T255 = YPsig(YPPlist(2,LITREF(lit_282),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_138 = YPmet(FUNCODEREF(fun_reference_Gc_138),LITREF(lit_281),T255,ENVNUL,PNUL,YPfalse);
  T258 = BOUNDP(YevalSg2cYreference_Gc);
  if (T258 != YPfalse) {
    T257 = VARREF(YevalSg2cYreference_Gc);
  } else {
    T257 = YPfalse;
  }
  T259 = fun_reference_Gc_138;
  T256 = XCALL2(1,VARREF(YPdefine_method),T257,T259);
  VARSET(YevalSg2cYreference_Gc,T256);
  lit_287 = YPPsym((P)"to-c");
  lit_288 = YPPsym((P)"f");
  T261 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T260 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_287),T261,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T260);
  T262 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_139 = YPmet(FUNCODEREF(fun_to_c_139),LITREF(lit_287),T262,ENVNUL,PNUL,YPfalse);
  T265 = BOUNDP(YevalSg2cYto_c);
  if (T265 != YPfalse) {
    T264 = VARREF(YevalSg2cYto_c);
  } else {
    T264 = YPfalse;
  }
  T266 = fun_to_c_139;
  T263 = XCALL2(1,VARREF(YPdefine_method),T264,T266);
  VARSET(YevalSg2cYto_c,T263);
  T269 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T268 = fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_287),T269,ENVNUL,PNUL,YPfalse);
  T273 = BOUNDP(YevalSg2cYto_c);
  if (T273 != YPfalse) {
    T272 = VARREF(YevalSg2cYto_c);
  } else {
    T272 = YPfalse;
  }
  T274 = fun_to_c_140;
  T271 = XCALL2(1,VARREF(YPdefine_method),T272,T274);
  T270 = VARSET(YevalSg2cYto_c,T271);
  T267 = T270;
  return T267;
}

P YevalSg2cY___main_2___() {
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
  P T272,T273,T274,T275,T276,T277,T278,T279,T280,T281,T282,T283,T284,T285,T286,T287;
  P T288,T289,T290,T291,T292,T293,T294,T295,T296,T297,T298,T299,T300,T301,T302,T303;
  P T304,T305,T306,T307,T308,T309,T310,T311,T312,T313,T314,T315,T316,T317,T318;
DEFCREGS();
loop:
  lit_289 = YPPsym((P)"gen-ref");
  T0 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_141 = YPmet(FUNCODEREF(fun_gen_ref_141),LITREF(lit_289),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(YevalSg2cYgen_ref);
  if (T3 != YPfalse) {
    T2 = VARREF(YevalSg2cYgen_ref);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_gen_ref_141;
  T1 = XCALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(YevalSg2cYgen_ref,T1);
  lit_290 = YPsb((P)"FREEREF");
  T5 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_142 = YPmet(FUNCODEREF(fun_gen_ref_142),LITREF(lit_289),T5,ENVNUL,PNUL,YPfalse);
  T8 = BOUNDP(YevalSg2cYgen_ref);
  if (T8 != YPfalse) {
    T7 = VARREF(YevalSg2cYgen_ref);
  } else {
    T7 = YPfalse;
  }
  T9 = fun_gen_ref_142;
  T6 = XCALL2(1,VARREF(YPdefine_method),T7,T9);
  VARSET(YevalSg2cYgen_ref,T6);
  lit_291 = YPsb((P)"T");
  lit_292 = YPsb((P)"T_1");
  T10 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_143 = YPmet(FUNCODEREF(fun_gen_ref_143),LITREF(lit_289),T10,ENVNUL,PNUL,YPfalse);
  T13 = BOUNDP(YevalSg2cYgen_ref);
  if (T13 != YPfalse) {
    T12 = VARREF(YevalSg2cYgen_ref);
  } else {
    T12 = YPfalse;
  }
  T14 = fun_gen_ref_143;
  T11 = XCALL2(1,VARREF(YPdefine_method),T12,T14);
  VARSET(YevalSg2cYgen_ref,T11);
  lit_293 = YPsb((P)"(P)");
  T15 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_144 = YPmet(FUNCODEREF(fun_gen_ref_144),LITREF(lit_289),T15,ENVNUL,PNUL,YPfalse);
  T18 = BOUNDP(YevalSg2cYgen_ref);
  if (T18 != YPfalse) {
    T17 = VARREF(YevalSg2cYgen_ref);
  } else {
    T17 = YPfalse;
  }
  T19 = fun_gen_ref_144;
  T16 = XCALL2(1,VARREF(YPdefine_method),T17,T19);
  VARSET(YevalSg2cYgen_ref,T16);
  T20 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_145 = YPmet(FUNCODEREF(fun_gen_ref_145),LITREF(lit_289),T20,ENVNUL,PNUL,YPfalse);
  T23 = BOUNDP(YevalSg2cYgen_ref);
  if (T23 != YPfalse) {
    T22 = VARREF(YevalSg2cYgen_ref);
  } else {
    T22 = YPfalse;
  }
  T24 = fun_gen_ref_145;
  T21 = XCALL2(1,VARREF(YPdefine_method),T22,T24);
  VARSET(YevalSg2cYgen_ref,T21);
  T25 = YPsig(YPPlist(2,LITREF(lit_52),LITREF(lit_61)),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_146 = YPmet(FUNCODEREF(fun_gen_ref_146),LITREF(lit_289),T25,ENVNUL,PNUL,YPfalse);
  T28 = BOUNDP(YevalSg2cYgen_ref);
  if (T28 != YPfalse) {
    T27 = VARREF(YevalSg2cYgen_ref);
  } else {
    T27 = YPfalse;
  }
  T29 = fun_gen_ref_146;
  T26 = XCALL2(1,VARREF(YPdefine_method),T27,T29);
  VARSET(YevalSg2cYgen_ref,T26);
  lit_294 = YPsb((P)"RTVSET(");
  lit_295 = YPsb((P)"DYNDEFSET(");
  lit_296 = YPsb((P)"DYNSET(");
  lit_297 = YPsb((P)"VARSET(");
  lit_298 = YPsb((P)",");
  lit_299 = YPsb((P)")");
  T30 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_147 = YPmet(FUNCODEREF(fun_to_c_147),LITREF(lit_287),T30,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(YevalSg2cYto_c);
  if (T33 != YPfalse) {
    T32 = VARREF(YevalSg2cYto_c);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_to_c_147;
  T31 = XCALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(YevalSg2cYto_c,T31);
  lit_300 = YPsb((P)"RTV");
  lit_301 = YPsb((P)"BOUNDP");
  T35 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_148 = YPmet(FUNCODEREF(fun_to_c_148),LITREF(lit_287),T35,ENVNUL,PNUL,YPfalse);
  T38 = BOUNDP(YevalSg2cYto_c);
  if (T38 != YPfalse) {
    T37 = VARREF(YevalSg2cYto_c);
  } else {
    T37 = YPfalse;
  }
  T39 = fun_to_c_148;
  T36 = XCALL2(1,VARREF(YPdefine_method),T37,T39);
  VARSET(YevalSg2cYto_c,T36);
  lit_302 = YPsb((P)"BOXVAL");
  T40 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_287),T40,ENVNUL,PNUL,YPfalse);
  T43 = BOUNDP(YevalSg2cYto_c);
  if (T43 != YPfalse) {
    T42 = VARREF(YevalSg2cYto_c);
  } else {
    T42 = YPfalse;
  }
  T44 = fun_to_c_149;
  T41 = XCALL2(1,VARREF(YPdefine_method),T42,T44);
  VARSET(YevalSg2cYto_c,T41);
  lit_303 = YPsb((P)"BOXVAL");
  lit_304 = YPsb((P)" = ");
  T45 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_287),T45,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(YevalSg2cYto_c);
  if (T48 != YPfalse) {
    T47 = VARREF(YevalSg2cYto_c);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_to_c_150;
  T46 = XCALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(YevalSg2cYto_c,T46);
  lit_305 = YPsb((P)" = BOXFAB");
  T50 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_287),T50,ENVNUL,PNUL,YPfalse);
  T53 = BOUNDP(YevalSg2cYto_c);
  if (T53 != YPfalse) {
    T52 = VARREF(YevalSg2cYto_c);
  } else {
    T52 = YPfalse;
  }
  T54 = fun_to_c_151;
  T51 = XCALL2(1,VARREF(YPdefine_method),T52,T54);
  VARSET(YevalSg2cYto_c,T51);
  lit_306 = YPsb((P)"if (");
  lit_307 = YPsb((P)" != ");
  lit_308 = YPsb((P)") {\n");
  lit_309 = YPsb((P)"} else {\n");
  lit_310 = YPsb((P)"}\n");
  T55 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_287),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(YevalSg2cYto_c);
  if (T58 != YPfalse) {
    T57 = VARREF(YevalSg2cYto_c);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_to_c_152;
  T56 = XCALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(YevalSg2cYto_c,T56);
  T61 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_153 = YPmet(FUNCODEREF(fun_153),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T60 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_154 = YPmet(FUNCODEREF(fun_to_c_154),LITREF(lit_287),T60,ENVNUL,PNUL,YPfalse);
  T64 = BOUNDP(YevalSg2cYto_c);
  if (T64 != YPfalse) {
    T63 = VARREF(YevalSg2cYto_c);
  } else {
    T63 = YPfalse;
  }
  T65 = fun_to_c_154;
  T62 = XCALL2(1,VARREF(YPdefine_method),T63,T65);
  VARSET(YevalSg2cYto_c,T62);
  lit_311 = YPPsym((P)"generate-self-recursive-call");
  lit_312 = YPPsym((P)"x-1640");
  lit_313 = YPPsym((P)"x-1639");
  lit_314 = YPPsym((P)"x-1643");
  lit_315 = YPPsym((P)"x-1642");
  lit_316 = YPPsym((P)"x-1641");
  lit_317 = YPsb((P)"a");
  lit_318 = YPsb((P)" = ");
  lit_319 = YPPsym((P)"x-1647");
  lit_320 = YPPsym((P)"x-1646");
  lit_321 = YPPsym((P)"x-1645");
  lit_322 = YPsb((P)" = a");
  lit_323 = YPsb((P)"goto loop");
  T69 = YPsig(YPPlist(1,LITREF(lit_313)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1640_155 = YPmet(FUNCODEREF(fun_x_1640_155),LITREF(lit_312),T69,ENVNUL,PNUL,YPfalse);
  T68 = YPsig(YPPlist(2,LITREF(lit_315),LITREF(lit_316)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1643_156 = YPmet(FUNCODEREF(fun_x_1643_156),LITREF(lit_314),T68,ENVNUL,PNUL,YPfalse);
  T67 = YPsig(YPPlist(2,LITREF(lit_320),LITREF(lit_321)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1647_157 = YPmet(FUNCODEREF(fun_x_1647_157),LITREF(lit_319),T67,ENVNUL,PNUL,YPfalse);
  T66 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLapplicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_self_recursive_call_158 = YPmet(FUNCODEREF(fun_generate_self_recursive_call_158),LITREF(lit_311),T66,ENVNUL,PNUL,YPfalse);
  T72 = BOUNDP(YevalSg2cYgenerate_self_recursive_call);
  if (T72 != YPfalse) {
    T71 = VARREF(YevalSg2cYgenerate_self_recursive_call);
  } else {
    T71 = YPfalse;
  }
  T73 = fun_generate_self_recursive_call_158;
  T70 = XCALL2(1,VARREF(YPdefine_method),T71,T73);
  VARSET(YevalSg2cYgenerate_self_recursive_call,T70);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_324 = YPPsym((P)"x-1650");
  lit_325 = YPPsym((P)"x-1649");
  lit_326 = YPsb((P)"X");
  lit_327 = YPsb((P)"CALL");
  lit_328 = YPsb((P)"N");
  lit_329 = YPsb((P)"0,");
  lit_330 = YPsb((P)"1,");
  lit_331 = YPsb((P)",");
  lit_332 = YPPsym((P)"x-1655");
  lit_333 = YPPsym((P)"x-1654");
  T76 = YPsig(YPPlist(1,LITREF(lit_325)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1650_159 = YPmet(FUNCODEREF(fun_x_1650_159),LITREF(lit_324),T76,ENVNUL,PNUL,YPfalse);
  T75 = YPsig(YPPlist(1,LITREF(lit_333)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1655_160 = YPmet(FUNCODEREF(fun_x_1655_160),LITREF(lit_332),T75,ENVNUL,PNUL,YPfalse);
  T74 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_161 = YPmet(FUNCODEREF(fun_to_c_161),LITREF(lit_287),T74,ENVNUL,PNUL,YPfalse);
  T79 = BOUNDP(YevalSg2cYto_c);
  if (T79 != YPfalse) {
    T78 = VARREF(YevalSg2cYto_c);
  } else {
    T78 = YPfalse;
  }
  T80 = fun_to_c_161;
  T77 = XCALL2(1,VARREF(YPdefine_method),T78,T80);
  VARSET(YevalSg2cYto_c,T77);
  lit_334 = YPPsym((P)"x-1659");
  lit_335 = YPPsym((P)"x-1658");
  lit_336 = YPPsym((P)"x-1657");
  T84 = YPsig(YPPlist(2,LITREF(lit_335),LITREF(lit_336)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1659_162 = YPmet(FUNCODEREF(fun_x_1659_162),LITREF(lit_334),T84,ENVNUL,PNUL,YPfalse);
  T83 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_163 = YPmet(FUNCODEREF(fun_163),YPfalse,T83,ENVNUL,PNUL,YPfalse);
  T82 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T82,ENVNUL,PNUL,YPfalse);
  T81 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_165 = YPmet(FUNCODEREF(fun_to_c_165),LITREF(lit_287),T81,ENVNUL,PNUL,YPfalse);
  T87 = BOUNDP(YevalSg2cYto_c);
  if (T87 != YPfalse) {
    T86 = VARREF(YevalSg2cYto_c);
  } else {
    T86 = YPfalse;
  }
  T88 = fun_to_c_165;
  T85 = XCALL2(1,VARREF(YPdefine_method),T86,T88);
  VARSET(YevalSg2cYto_c,T85);
  lit_337 = YPPsym((P)"x-1663");
  lit_338 = YPPsym((P)"x-1662");
  lit_339 = YPPsym((P)"x-1661");
  lit_340 = YPPsym((P)"x-1660");
  lit_341 = YPsb((P)"check_type");
  lit_342 = YPsb((P)" = ");
  T90 = YPsig(YPPlist(3,LITREF(lit_338),LITREF(lit_339),LITREF(lit_340)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1663_166 = YPmet(FUNCODEREF(fun_x_1663_166),LITREF(lit_337),T90,ENVNUL,PNUL,YPfalse);
  T89 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_167 = YPmet(FUNCODEREF(fun_to_c_167),LITREF(lit_287),T89,ENVNUL,PNUL,YPfalse);
  T93 = BOUNDP(YevalSg2cYto_c);
  if (T93 != YPfalse) {
    T92 = VARREF(YevalSg2cYto_c);
  } else {
    T92 = YPfalse;
  }
  T94 = fun_to_c_167;
  T91 = XCALL2(1,VARREF(YPdefine_method),T92,T94);
  VARSET(YevalSg2cYto_c,T91);
  lit_343 = YPPsym((P)"x-1667");
  lit_344 = YPPsym((P)"x-1666");
  lit_345 = YPPsym((P)"x-1665");
  lit_346 = YPsb((P)" = ");
  T96 = YPsig(YPPlist(2,LITREF(lit_344),LITREF(lit_345)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1667_168 = YPmet(FUNCODEREF(fun_x_1667_168),LITREF(lit_343),T96,ENVNUL,PNUL,YPfalse);
  T95 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_287),T95,ENVNUL,PNUL,YPfalse);
  T99 = BOUNDP(YevalSg2cYto_c);
  if (T99 != YPfalse) {
    T98 = VARREF(YevalSg2cYto_c);
  } else {
    T98 = YPfalse;
  }
  T100 = fun_to_c_169;
  T97 = XCALL2(1,VARREF(YPdefine_method),T98,T100);
  VARSET(YevalSg2cYto_c,T97);
  lit_347 = YPsb((P)"with_exit");
  T101 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_170 = YPmet(FUNCODEREF(fun_to_c_170),LITREF(lit_287),T101,ENVNUL,PNUL,YPfalse);
  T104 = BOUNDP(YevalSg2cYto_c);
  if (T104 != YPfalse) {
    T103 = VARREF(YevalSg2cYto_c);
  } else {
    T103 = YPfalse;
  }
  T105 = fun_to_c_170;
  T102 = XCALL2(1,VARREF(YPdefine_method),T103,T105);
  VARSET(YevalSg2cYto_c,T102);
  lit_348 = YPsb((P)"with_cleanup");
  T106 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_171 = YPmet(FUNCODEREF(fun_to_c_171),LITREF(lit_287),T106,ENVNUL,PNUL,YPfalse);
  T109 = BOUNDP(YevalSg2cYto_c);
  if (T109 != YPfalse) {
    T108 = VARREF(YevalSg2cYto_c);
  } else {
    T108 = YPfalse;
  }
  T110 = fun_to_c_171;
  T107 = XCALL2(1,VARREF(YPdefine_method),T108,T110);
  VARSET(YevalSg2cYto_c,T107);
  lit_349 = YPsb((P)"CALLN");
  lit_350 = YPsb((P)"1");
  lit_351 = YPsb((P)"%with-monitor");
  lit_352 = YPsb((P)"5");
  T111 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_172 = YPmet(FUNCODEREF(fun_to_c_172),LITREF(lit_287),T111,ENVNUL,PNUL,YPfalse);
  T114 = BOUNDP(YevalSg2cYto_c);
  if (T114 != YPfalse) {
    T113 = VARREF(YevalSg2cYto_c);
  } else {
    T113 = YPfalse;
  }
  T115 = fun_to_c_172;
  T112 = XCALL2(1,VARREF(YPdefine_method),T113,T115);
  VARSET(YevalSg2cYto_c,T112);
  lit_353 = YPPsym((P)"x-1672");
  lit_354 = YPPsym((P)"x-1671");
  lit_355 = YPsb((P)"(P)");
  lit_356 = YPPsym((P)"x-1678");
  lit_357 = YPPsym((P)"x-1677");
  lit_358 = YPPsym((P)"x-1676");
  T120 = YPsig(YPPlist(1,LITREF(lit_354)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1672_173 = YPmet(FUNCODEREF(fun_x_1672_173),LITREF(lit_353),T120,ENVNUL,PNUL,YPfalse);
  T119 = YPsig(YPPlist(2,LITREF(lit_357),LITREF(lit_358)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1678_174 = YPmet(FUNCODEREF(fun_x_1678_174),LITREF(lit_356),T119,ENVNUL,PNUL,YPfalse);
  T118 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_175 = YPmet(FUNCODEREF(fun_175),YPfalse,T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T117,ENVNUL,PNUL,YPfalse);
  T116 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_177 = YPmet(FUNCODEREF(fun_to_c_177),LITREF(lit_287),T116,ENVNUL,PNUL,YPfalse);
  T123 = BOUNDP(YevalSg2cYto_c);
  if (T123 != YPfalse) {
    T122 = VARREF(YevalSg2cYto_c);
  } else {
    T122 = YPfalse;
  }
  T124 = fun_to_c_177;
  T121 = XCALL2(1,VARREF(YPdefine_method),T122,T124);
  VARSET(YevalSg2cYto_c,T121);
  lit_359 = YPsb((P)"FUNFAB");
  lit_360 = YPsb((P)",");
  lit_361 = YPPsym((P)"x-1682");
  lit_362 = YPPsym((P)"x-1681");
  T127 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T127,ENVNUL,PNUL,YPfalse);
  T126 = YPsig(YPPlist(1,LITREF(lit_362)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1682_179 = YPmet(FUNCODEREF(fun_x_1682_179),LITREF(lit_361),T126,ENVNUL,PNUL,YPfalse);
  T125 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_180 = YPmet(FUNCODEREF(fun_to_c_180),LITREF(lit_287),T125,ENVNUL,PNUL,YPfalse);
  T130 = BOUNDP(YevalSg2cYto_c);
  if (T130 != YPfalse) {
    T129 = VARREF(YevalSg2cYto_c);
  } else {
    T129 = YPfalse;
  }
  T131 = fun_to_c_180;
  T128 = XCALL2(1,VARREF(YPdefine_method),T129,T131);
  VARSET(YevalSg2cYto_c,T128);
  lit_363 = YPPsym((P)"funshell-to-c");
  lit_364 = YPPsym((P)"b");
  lit_365 = YPsb((P)"FUNSHELL");
  T132 = YPsig(YPPlist(5,LITREF(lit_364),LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_181 = YPmet(FUNCODEREF(fun_funshell_to_c_181),LITREF(lit_363),T132,ENVNUL,PNUL,YPfalse);
  T135 = BOUNDP(YevalSg2cYfunshell_to_c);
  if (T135 != YPfalse) {
    T134 = VARREF(YevalSg2cYfunshell_to_c);
  } else {
    T134 = YPfalse;
  }
  T136 = fun_funshell_to_c_181;
  T133 = XCALL2(1,VARREF(YPdefine_method),T134,T136);
  VARSET(YevalSg2cYfunshell_to_c,T133);
  lit_366 = YPPsym((P)"funinit-to-c");
  lit_367 = YPsb((P)"FUNINIT");
  lit_368 = YPsb((P)", ");
  lit_369 = YPPsym((P)"x-1689");
  lit_370 = YPPsym((P)"x-1688");
  T139 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_182 = YPmet(FUNCODEREF(fun_182),YPfalse,T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_370)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1689_183 = YPmet(FUNCODEREF(fun_x_1689_183),LITREF(lit_369),T138,ENVNUL,PNUL,YPfalse);
  T137 = YPsig(YPPlist(5,LITREF(lit_364),LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_184 = YPmet(FUNCODEREF(fun_funinit_to_c_184),LITREF(lit_366),T137,ENVNUL,PNUL,YPfalse);
  T142 = BOUNDP(YevalSg2cYfuninit_to_c);
  if (T142 != YPfalse) {
    T141 = VARREF(YevalSg2cYfuninit_to_c);
  } else {
    T141 = YPfalse;
  }
  T143 = fun_funinit_to_c_184;
  T140 = XCALL2(1,VARREF(YPdefine_method),T141,T143);
  VARSET(YevalSg2cYfuninit_to_c,T140);
  lit_371 = YPsb((P)"%macro");
  T144 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_185 = YPmet(FUNCODEREF(fun_to_c_185),LITREF(lit_287),T144,ENVNUL,PNUL,YPfalse);
  T147 = BOUNDP(YevalSg2cYto_c);
  if (T147 != YPfalse) {
    T146 = VARREF(YevalSg2cYto_c);
  } else {
    T146 = YPfalse;
  }
  T148 = fun_to_c_185;
  T145 = XCALL2(1,VARREF(YPdefine_method),T146,T148);
  VARSET(YevalSg2cYto_c,T145);
  lit_372 = YPPsym((P)"out-list-builder");
  lit_373 = YPPsym((P)"elts");
  lit_374 = YPsb((P)"nil");
  lit_375 = YPsb((P)"%%list");
  lit_376 = YPPsym((P)"x-1694");
  lit_377 = YPPsym((P)"x-1693");
  T150 = YPsig(YPPlist(1,LITREF(lit_377)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1694_186 = YPmet(FUNCODEREF(fun_x_1694_186),LITREF(lit_376),T150,ENVNUL,PNUL,YPfalse);
  T149 = YPsig(YPPlist(3,LITREF(lit_288),LITREF(lit_61),LITREF(lit_373)),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_187 = YPmet(FUNCODEREF(fun_out_list_builder_187),LITREF(lit_372),T149,ENVNUL,PNUL,YPfalse);
  T153 = BOUNDP(YevalSg2cYout_list_builder);
  if (T153 != YPfalse) {
    T152 = VARREF(YevalSg2cYout_list_builder);
  } else {
    T152 = YPfalse;
  }
  T154 = fun_out_list_builder_187;
  T151 = XCALL2(1,VARREF(YPdefine_method),T152,T154);
  VARSET(YevalSg2cYout_list_builder,T151);
  lit_378 = YPPsym((P)"gen-fab-list");
  lit_379 = YPPsym((P)"refs");
  T156 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_188 = YPmet(FUNCODEREF(fun_188),YPfalse,T156,ENVNUL,PNUL,YPfalse);
  T155 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_379)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_189 = YPmet(FUNCODEREF(fun_gen_fab_list_189),LITREF(lit_378),T155,ENVNUL,PNUL,YPfalse);
  T159 = BOUNDP(YevalSg2cYgen_fab_list);
  if (T159 != YPfalse) {
    T158 = VARREF(YevalSg2cYgen_fab_list);
  } else {
    T158 = YPfalse;
  }
  T160 = fun_gen_fab_list_189;
  T157 = XCALL2(1,VARREF(YPdefine_method),T158,T160);
  VARSET(YevalSg2cYgen_fab_list,T157);
  lit_380 = YPPsym((P)"generate-function-specs");
  lit_381 = YPPsym((P)"sig");
  T161 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_381)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_190 = YPmet(FUNCODEREF(fun_generate_function_specs_190),LITREF(lit_380),T161,ENVNUL,PNUL,YPfalse);
  T164 = BOUNDP(YevalSg2cYgenerate_function_specs);
  if (T164 != YPfalse) {
    T163 = VARREF(YevalSg2cYgenerate_function_specs);
  } else {
    T163 = YPfalse;
  }
  T165 = fun_generate_function_specs_190;
  T162 = XCALL2(1,VARREF(YPdefine_method),T163,T165);
  VARSET(YevalSg2cYgenerate_function_specs,T162);
  lit_382 = YPsb((P)"%sig");
  lit_383 = YPsb((P)"nil");
  T167 = YPsig(YPPlist(1,LITREF(lit_29)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T166 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_192 = YPmet(FUNCODEREF(fun_to_c_192),LITREF(lit_287),T166,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(YevalSg2cYto_c);
  if (T170 != YPfalse) {
    T169 = VARREF(YevalSg2cYto_c);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_to_c_192;
  T168 = XCALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(YevalSg2cYto_c,T168);
  lit_384 = YPsb((P)"%gen");
  lit_385 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_386 = YPsb((P)"nil");
  lit_387 = YPsb((P)"%false");
  lit_388 = YPsb((P)"%false");
  lit_389 = YPsb((P)"%false");
  T172 = YPsig(YPPlist(4,LITREF(lit_52),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_193 = YPmet(FUNCODEREF(fun_to_c_193),LITREF(lit_287),T172,ENVNUL,PNUL,YPfalse);
  T175 = BOUNDP(YevalSg2cYto_c);
  if (T175 != YPfalse) {
    T174 = VARREF(YevalSg2cYto_c);
  } else {
    T174 = YPfalse;
  }
  T176 = fun_to_c_193;
  T173 = XCALL2(1,VARREF(YPdefine_method),T174,T176);
  VARSET(YevalSg2cYto_c,T173);
  lit_390 = YPPsym((P)"generate-function-forwards");
  lit_391 = YPPsym((P)"definitions");
  lit_392 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  lit_393 = YPPsym((P)"x-1698");
  lit_394 = YPPsym((P)"x-1697");
  T178 = YPsig(YPPlist(1,LITREF(lit_394)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1698_194 = YPmet(FUNCODEREF(fun_x_1698_194),LITREF(lit_393),T178,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_391)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_195 = YPmet(FUNCODEREF(fun_generate_function_forwards_195),LITREF(lit_390),T177,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(YevalSg2cYgenerate_function_forwards);
  if (T181 != YPfalse) {
    T180 = VARREF(YevalSg2cYgenerate_function_forwards);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_generate_function_forwards_195;
  T179 = XCALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(YevalSg2cYgenerate_function_forwards,T179);
  lit_395 = YPPsym((P)"generate-function-forward");
  lit_396 = YPPsym((P)"defn");
  lit_397 = YPsb((P)"static");
  lit_398 = YPsb((P)"extern");
  lit_399 = YPsb((P)" P ");
  lit_400 = YPsb((P)" (");
  lit_401 = YPPsym((P)"x-1703");
  lit_402 = YPPsym((P)"x-1702");
  lit_403 = YPPsym((P)"x-1701");
  lit_404 = YPsb((P)"P");
  lit_405 = YPsb((P)");\n");
  T186 = YPsig(YPPlist(2,LITREF(lit_402),LITREF(lit_403)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1703_196 = YPmet(FUNCODEREF(fun_x_1703_196),LITREF(lit_401),T186,ENVNUL,PNUL,YPfalse);
  T185 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T185,ENVNUL,PNUL,YPfalse);
  T184 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_198 = YPmet(FUNCODEREF(fun_198),YPfalse,T184,ENVNUL,PNUL,YPfalse);
  T183 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_396)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_199 = YPmet(FUNCODEREF(fun_generate_function_forward_199),LITREF(lit_395),T183,ENVNUL,PNUL,YPfalse);
  T189 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T189 != YPfalse) {
    T188 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T188 = YPfalse;
  }
  T190 = fun_generate_function_forward_199;
  T187 = XCALL2(1,VARREF(YPdefine_method),T188,T190);
  VARSET(YevalSg2cYgenerate_function_forward,T187);
  lit_406 = YPPsym((P)"generate-function-binding");
  lit_407 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_408 = YPsb((P)"fun_");
  lit_409 = YPsb((P)"fun_");
  lit_410 = YPsb((P)"_");
  T191 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_396)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_200 = YPmet(FUNCODEREF(fun_generate_function_binding_200),LITREF(lit_406),T191,ENVNUL,PNUL,YPfalse);
  T194 = BOUNDP(YevalSg2cYgenerate_function_binding);
  if (T194 != YPfalse) {
    T193 = VARREF(YevalSg2cYgenerate_function_binding);
  } else {
    T193 = YPfalse;
  }
  T195 = fun_generate_function_binding_200;
  T192 = XCALL2(1,VARREF(YPdefine_method),T193,T195);
  VARSET(YevalSg2cYgenerate_function_binding,T192);
  lit_411 = YPsb((P)"FUNFOR(");
  lit_412 = YPsb((P)"LOCFOR(");
  lit_413 = YPsb((P)");\n");
  T196 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_396)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_201 = YPmet(FUNCODEREF(fun_generate_function_forward_201),LITREF(lit_395),T196,ENVNUL,PNUL,YPfalse);
  T199 = BOUNDP(YevalSg2cYgenerate_function_forward);
  if (T199 != YPfalse) {
    T198 = VARREF(YevalSg2cYgenerate_function_forward);
  } else {
    T198 = YPfalse;
  }
  T200 = fun_generate_function_forward_201;
  T197 = XCALL2(1,VARREF(YPdefine_method),T198,T200);
  VARSET(YevalSg2cYgenerate_function_forward,T197);
  lit_414 = YPPsym((P)"generate-function-bodies");
  lit_415 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_416 = YPPsym((P)"def");
  T202 = YPsig(YPPlist(1,LITREF(lit_416)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_202 = YPmet(FUNCODEREF(fun_202),YPfalse,T202,ENVNUL,PNUL,YPfalse);
  T201 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_391)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_203 = YPmet(FUNCODEREF(fun_generate_function_bodies_203),LITREF(lit_414),T201,ENVNUL,PNUL,YPfalse);
  T205 = BOUNDP(YevalSg2cYgenerate_function_bodies);
  if (T205 != YPfalse) {
    T204 = VARREF(YevalSg2cYgenerate_function_bodies);
  } else {
    T204 = YPfalse;
  }
  T206 = fun_generate_function_bodies_203;
  T203 = XCALL2(1,VARREF(YPdefine_method),T204,T206);
  VARSET(YevalSg2cYgenerate_function_bodies,T203);
  lit_417 = YPPsym((P)"generate-functions");
  T208 = YPsig(YPPlist(1,LITREF(lit_416)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_204 = YPmet(FUNCODEREF(fun_204),YPfalse,T208,ENVNUL,PNUL,YPfalse);
  T207 = YPsig(YPPlist(4,LITREF(lit_391),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_205 = YPmet(FUNCODEREF(fun_generate_functions_205),LITREF(lit_417),T207,ENVNUL,PNUL,YPfalse);
  T211 = BOUNDP(YevalSg2cYgenerate_functions);
  if (T211 != YPfalse) {
    T210 = VARREF(YevalSg2cYgenerate_functions);
  } else {
    T210 = YPfalse;
  }
  T212 = fun_generate_functions_205;
  T209 = XCALL2(1,VARREF(YPdefine_method),T210,T212);
  VARSET(YevalSg2cYgenerate_functions,T209);
  lit_418 = YPPsym((P)"generate-closure-structure");
  lit_419 = YPPsym((P)"definition");
  lit_420 = YPsb((P)" = ");
  lit_421 = YPsb((P)"%met");
  lit_422 = YPsb((P)"ENVNUL");
  lit_423 = YPsb((P)"PNUL");
  T213 = YPsig(YPPlist(4,LITREF(lit_419),LITREF(lit_288),LITREF(lit_211),LITREF(lit_61)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_206 = YPmet(FUNCODEREF(fun_generate_closure_structure_206),LITREF(lit_418),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(YevalSg2cYgenerate_closure_structure);
  if (T216 != YPfalse) {
    T215 = VARREF(YevalSg2cYgenerate_closure_structure);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_generate_closure_structure_206;
  T214 = XCALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(YevalSg2cYgenerate_closure_structure,T214);
  lit_424 = YPPsym((P)"generate-function-body-reference");
  lit_425 = YPsb((P)"FUNCODEREF(");
  lit_426 = YPsb((P)")");
  T218 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_419)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_207 = YPmet(FUNCODEREF(fun_generate_function_body_reference_207),LITREF(lit_424),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(YevalSg2cYgenerate_function_body_reference);
  if (T221 != YPfalse) {
    T220 = VARREF(YevalSg2cYgenerate_function_body_reference);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_generate_function_body_reference_207;
  T219 = XCALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(YevalSg2cYgenerate_function_body_reference,T219);
  lit_427 = YPPsym((P)"generate-shadow-args");
  lit_428 = YPPsym((P)"bindings");
  lit_429 = YPsb((P)"P ");
  lit_430 = YPPsym((P)"x-1712");
  lit_431 = YPPsym((P)"x-1711");
  lit_432 = YPPsym((P)"x-1710");
  lit_433 = YPPsym((P)"x-1709");
  lit_434 = YPsb((P)"a");
  T226 = YPsig(YPPlist(3,LITREF(lit_431),LITREF(lit_432),LITREF(lit_433)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_x_1712_208 = YPmet(FUNCODEREF(fun_x_1712_208),LITREF(lit_430),T226,ENVNUL,PNUL,YPfalse);
  T225 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_209 = YPmet(FUNCODEREF(fun_209),YPfalse,T225,ENVNUL,PNUL,YPfalse);
  T224 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_210 = YPmet(FUNCODEREF(fun_210),YPfalse,T224,ENVNUL,PNUL,YPfalse);
  T223 = YPsig(YPPlist(2,LITREF(lit_428),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_shadow_args_211 = YPmet(FUNCODEREF(fun_generate_shadow_args_211),LITREF(lit_427),T223,ENVNUL,PNUL,YPfalse);
  T229 = BOUNDP(YevalSg2cYgenerate_shadow_args);
  if (T229 != YPfalse) {
    T228 = VARREF(YevalSg2cYgenerate_shadow_args);
  } else {
    T228 = YPfalse;
  }
  T230 = fun_generate_shadow_args_211;
  T227 = XCALL2(1,VARREF(YPdefine_method),T228,T230);
  VARSET(YevalSg2cYgenerate_shadow_args,T227);
  lit_435 = YPPsym((P)"generate-return");
  lit_436 = YPsb((P)"return ");
  T231 = YPsig(YPPlist(3,LITREF(lit_396),LITREF(lit_211),LITREF(lit_61)),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_212 = YPmet(FUNCODEREF(fun_generate_return_212),LITREF(lit_435),T231,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(YevalSg2cYgenerate_return);
  if (T234 != YPfalse) {
    T233 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_generate_return_212;
  T232 = XCALL2(1,VARREF(YPdefine_method),T233,T235);
  VARSET(YevalSg2cYgenerate_return,T232);
  lit_437 = YPsb((P)"RET");
  T236 = YPsig(YPPlist(3,LITREF(lit_396),LITREF(lit_211),LITREF(lit_61)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_213 = YPmet(FUNCODEREF(fun_generate_return_213),LITREF(lit_435),T236,ENVNUL,PNUL,YPfalse);
  T239 = BOUNDP(YevalSg2cYgenerate_return);
  if (T239 != YPfalse) {
    T238 = VARREF(YevalSg2cYgenerate_return);
  } else {
    T238 = YPfalse;
  }
  T240 = fun_generate_return_213;
  T237 = XCALL2(1,VARREF(YPdefine_method),T238,T240);
  VARSET(YevalSg2cYgenerate_return,T237);
  lit_438 = YPPsym((P)"primitive-inlinable?");
  lit_439 = YPPsym((P)"inline");
  lit_440 = YPPsym((P)"inline-c");
  T241 = YPsig(YPPlist(1,LITREF(lit_52)),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_214 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_214),LITREF(lit_438),T241,ENVNUL,PNUL,YPfalse);
  T244 = BOUNDP(YevalSg2cYprimitive_inlinableQ);
  if (T244 != YPfalse) {
    T243 = VARREF(YevalSg2cYprimitive_inlinableQ);
  } else {
    T243 = YPfalse;
  }
  T245 = fun_primitive_inlinableQ_214;
  T242 = XCALL2(1,VARREF(YPdefine_method),T243,T245);
  VARSET(YevalSg2cYprimitive_inlinableQ,T242);
  lit_441 = YPPsym((P)"generate-function-code");
  lit_442 = YPsb((P)"\n");
  lit_443 = YPsb((P)"static ");
  lit_444 = YPsb((P)"INLINE ");
  lit_445 = YPsb((P)"P ");
  lit_446 = YPPsym((P)"x-1720");
  lit_447 = YPPsym((P)"x-1719");
  lit_448 = YPPsym((P)"x-1718");
  lit_449 = YPsb((P)"P ");
  lit_450 = YPsb((P)" {\n");
  lit_451 = YPsb((P)"DEFCREGS();\n");
  lit_452 = YPsb((P)"loop:\n");
  lit_453 = YPsb((P)"}\n");
  T249 = YPsig(YPPlist(2,LITREF(lit_447),LITREF(lit_448)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1720_215 = YPmet(FUNCODEREF(fun_x_1720_215),LITREF(lit_446),T249,ENVNUL,PNUL,YPfalse);
  T248 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_216 = YPmet(FUNCODEREF(fun_216),YPfalse,T248,ENVNUL,PNUL,YPfalse);
  T247 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_217 = YPmet(FUNCODEREF(fun_217),YPfalse,T247,ENVNUL,PNUL,YPfalse);
  T246 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_52)),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_218 = YPmet(FUNCODEREF(fun_generate_function_code_218),LITREF(lit_441),T246,ENVNUL,PNUL,YPfalse);
  T252 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T252 != YPfalse) {
    T251 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T251 = YPfalse;
  }
  T253 = fun_generate_function_code_218;
  T250 = XCALL2(1,VARREF(YPdefine_method),T251,T253);
  VARSET(YevalSg2cYgenerate_function_code,T250);
  lit_454 = YPPsym((P)"dispatcher?");
  lit_455 = YPsb((P)"%dispatch");
  lit_456 = YPsb((P)"-dispatch");
  lit_457 = YPsb((P)"-dispatch");
  T254 = YPsig(YPPlist(1,LITREF(lit_419)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_219 = YPmet(FUNCODEREF(fun_dispatcherQ_219),LITREF(lit_454),T254,ENVNUL,PNUL,YPfalse);
  T257 = BOUNDP(YevalSg2cYdispatcherQ);
  if (T257 != YPfalse) {
    T256 = VARREF(YevalSg2cYdispatcherQ);
  } else {
    T256 = YPfalse;
  }
  T258 = fun_dispatcherQ_219;
  T255 = XCALL2(1,VARREF(YPdefine_method),T256,T258);
  VARSET(YevalSg2cYdispatcherQ,T255);
  lit_458 = YPsb((P)"\nFUNCODEDEF(");
  lit_459 = YPsb((P)") {\n");
  lit_460 = YPsb((P)"P ");
  lit_461 = YPPsym((P)"x-1724");
  lit_462 = YPPsym((P)"x-1723");
  lit_463 = YPPsym((P)"x-1722");
  lit_464 = YPsb((P)"LINK_STACK();\n");
  lit_465 = YPsb((P)"NARGS(");
  lit_466 = YPsb((P)"ARG(");
  lit_467 = YPsb((P)", ");
  lit_468 = YPsb((P)")");
  lit_469 = YPsb((P)"loop:\n");
  lit_470 = YPsb((P)"UNLINK_STACK();\n");
  lit_471 = YPsb((P)"}\n");
  T263 = YPsig(YPPlist(2,LITREF(lit_462),LITREF(lit_463)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_x_1724_220 = YPmet(FUNCODEREF(fun_x_1724_220),LITREF(lit_461),T263,ENVNUL,PNUL,YPfalse);
  T262 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_221 = YPmet(FUNCODEREF(fun_221),YPfalse,T262,ENVNUL,PNUL,YPfalse);
  T261 = YPsig(YPPlist(1,LITREF(lit_29)),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_222 = YPmet(FUNCODEREF(fun_222),YPfalse,T261,ENVNUL,PNUL,YPfalse);
  T260 = YPsig(YPPlist(1,LITREF(lit_364)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_223 = YPmet(FUNCODEREF(fun_223),YPfalse,T260,ENVNUL,PNUL,YPfalse);
  T259 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_419)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_224 = YPmet(FUNCODEREF(fun_generate_function_code_224),LITREF(lit_441),T259,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(YevalSg2cYgenerate_function_code);
  if (T266 != YPfalse) {
    T265 = VARREF(YevalSg2cYgenerate_function_code);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_generate_function_code_224;
  T264 = XCALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(YevalSg2cYgenerate_function_code,T264);
  lit_472 = YPPsym((P)"generate-local-temporaries");
  lit_473 = YPPsym((P)"temps");
  lit_474 = YPPsym((P)"x-1727");
  lit_475 = YPPsym((P)"x-1726");
  lit_476 = YPsb((P)"P ");
  T269 = YPsig(YPPlist(1,LITREF(lit_475)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1727_225 = YPmet(FUNCODEREF(fun_x_1727_225),LITREF(lit_474),T269,ENVNUL,PNUL,YPfalse);
  T268 = YPsig(YPPlist(2,LITREF(lit_473),LITREF(lit_61)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_226 = YPmet(FUNCODEREF(fun_generate_local_temporaries_226),LITREF(lit_472),T268,ENVNUL,PNUL,YPfalse);
  T272 = BOUNDP(YevalSg2cYgenerate_local_temporaries);
  if (T272 != YPfalse) {
    T271 = VARREF(YevalSg2cYgenerate_local_temporaries);
  } else {
    T271 = YPfalse;
  }
  T273 = fun_generate_local_temporaries_226;
  T270 = XCALL2(1,VARREF(YPdefine_method),T271,T273);
  VARSET(YevalSg2cYgenerate_local_temporaries,T270);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_477 = YPPsym((P)"generate-registers");
  lit_478 = YPPsym((P)"regs");
  lit_479 = YPPsym((P)"next-line");
  lit_480 = YPPsym((P)"j");
  lit_481 = YPsb((P)"P ");
  lit_482 = YPPsym((P)"next-reg");
  lit_483 = YPsb((P)";\n");
  T276 = YPsig(YPPlist(2,LITREF(lit_480),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_next_reg_227 = YPmet(FUNCODEREF(fun_next_reg_227),LITREF(lit_482),T276,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(1,LITREF(lit_480)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_next_line_228 = YPmet(FUNCODEREF(fun_next_line_228),LITREF(lit_479),T275,ENVNUL,PNUL,YPfalse);
  T274 = YPsig(YPPlist(2,LITREF(lit_478),LITREF(lit_61)),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_229 = YPmet(FUNCODEREF(fun_generate_registers_229),LITREF(lit_477),T274,ENVNUL,PNUL,YPfalse);
  T279 = BOUNDP(YevalSg2cYgenerate_registers);
  if (T279 != YPfalse) {
    T278 = VARREF(YevalSg2cYgenerate_registers);
  } else {
    T278 = YPfalse;
  }
  T280 = fun_generate_registers_229;
  T277 = XCALL2(1,VARREF(YPdefine_method),T278,T280);
  VARSET(YevalSg2cYgenerate_registers,T277);
  lit_484 = YPPsym((P)"module-info-name");
  lit_485 = YPsb((P)"module_info_");
  T281 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_230 = YPmet(FUNCODEREF(fun_module_info_name_230),LITREF(lit_484),T281,ENVNUL,PNUL,YPfalse);
  T284 = BOUNDP(YevalSg2cYmodule_info_name);
  if (T284 != YPfalse) {
    T283 = VARREF(YevalSg2cYmodule_info_name);
  } else {
    T283 = YPfalse;
  }
  T285 = fun_module_info_name_230;
  T282 = XCALL2(1,VARREF(YPdefine_method),T283,T285);
  VARSET(YevalSg2cYmodule_info_name,T282);
  lit_486 = YPPsym((P)"declare-imported-module-infos");
  lit_487 = YPPsym((P)"maybe-declare");
  lit_488 = YPsb((P)"extern MODULE_INFO ");
  lit_489 = YPsb((P)";\n");
  T288 = YPsig(YPPlist(1,LITREF(lit_25)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_231 = YPmet(FUNCODEREF(fun_maybe_declare_231),LITREF(lit_487),T288,ENVNUL,PNUL,YPfalse);
  T287 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_232 = YPmet(FUNCODEREF(fun_232),YPfalse,T287,ENVNUL,PNUL,YPfalse);
  T286 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_486),T286,ENVNUL,PNUL,YPfalse);
  T289 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T289);
  lit_490 = YPPsym((P)"generate-module-info");
  lit_491 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_492 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_493 = YPPsym((P)"x-1730");
  lit_494 = YPPsym((P)"x-1729");
  lit_495 = YPsb((P)"  {&");
  lit_496 = YPsb((P)"},\n");
  lit_497 = YPsb((P)"  {NULL}\n};\n");
  lit_498 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_499 = YPPsym((P)"local-name");
  lit_500 = YPsb((P)"  {\"");
  lit_501 = YPsb((P)"\", &");
  lit_502 = YPsb((P)", \"");
  lit_503 = YPsb((P)"\"},\n");
  lit_504 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_505 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_506 = YPsb((P)"  {\"");
  lit_507 = YPsb((P)"\", ");
  lit_508 = YPsb((P)"CVAR, &");
  lit_509 = YPsb((P)"},\n");
  lit_510 = YPsb((P)"DVAR, &");
  lit_511 = YPsb((P)"},\n");
  lit_512 = YPsb((P)"PVAR, NULL},\n");
  lit_513 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_514 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_515 = YPPsym((P)"x-1739");
  lit_516 = YPPsym((P)"x-1738");
  lit_517 = YPsb((P)"  {\"");
  lit_518 = YPsb((P)"\", \"");
  lit_519 = YPsb((P)"\"},\n");
  lit_520 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_521 = YPsb((P)"\nextern MODULE_INFO ");
  lit_522 = YPsb((P)";\n");
  lit_523 = YPsb((P)"MODULE_INFO ");
  lit_524 = YPsb((P)" = {\n");
  lit_525 = YPsb((P)"  \"");
  lit_526 = YPsb((P)"\",\n");
  lit_527 = YPsb((P)"  NULL,\n");
  lit_528 = YPsb((P)"  use_infos,\n");
  lit_529 = YPsb((P)"  import_infos,\n");
  lit_530 = YPsb((P)"  binding_infos,\n");
  lit_531 = YPsb((P)"  export_infos,\n");
  lit_532 = YPsb((P)"};\n");
  T294 = YPsig(YPPlist(1,LITREF(lit_494)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1730_234 = YPmet(FUNCODEREF(fun_x_1730_234),LITREF(lit_493),T294,ENVNUL,PNUL,YPfalse);
  T293 = YPsig(YPPlist(2,LITREF(lit_499),LITREF(lit_109)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_235 = YPmet(FUNCODEREF(fun_235),YPfalse,T293,ENVNUL,PNUL,YPfalse);
  T292 = YPsig(YPPlist(1,LITREF(lit_109)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_236 = YPmet(FUNCODEREF(fun_236),YPfalse,T292,ENVNUL,PNUL,YPfalse);
  T291 = YPsig(YPPlist(1,LITREF(lit_516)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1739_237 = YPmet(FUNCODEREF(fun_x_1739_237),LITREF(lit_515),T291,ENVNUL,PNUL,YPfalse);
  T290 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_490),T290,ENVNUL,PNUL,YPfalse);
  T295 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T295);
  lit_533 = YPPsym((P)"module-init-name");
  lit_534 = YPsb((P)"load_module_");
  T296 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_239 = YPmet(FUNCODEREF(fun_module_init_name_239),LITREF(lit_533),T296,ENVNUL,PNUL,YPfalse);
  T299 = BOUNDP(YevalSg2cYmodule_init_name);
  if (T299 != YPfalse) {
    T298 = VARREF(YevalSg2cYmodule_init_name);
  } else {
    T298 = YPfalse;
  }
  T300 = fun_module_init_name_239;
  T297 = XCALL2(1,VARREF(YPdefine_method),T298,T300);
  VARSET(YevalSg2cYmodule_init_name,T297);
  lit_535 = YPPsym((P)"module-init-decl");
  lit_536 = YPsb((P)"void ");
  lit_537 = YPsb((P)" (void)");
  T301 = YPsig(YPPlist(1,LITREF(lit_15)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_240 = YPmet(FUNCODEREF(fun_module_init_decl_240),LITREF(lit_535),T301,ENVNUL,PNUL,YPfalse);
  T304 = BOUNDP(YevalSg2cYmodule_init_decl);
  if (T304 != YPfalse) {
    T303 = VARREF(YevalSg2cYmodule_init_decl);
  } else {
    T303 = YPfalse;
  }
  T305 = fun_module_init_decl_240;
  T302 = XCALL2(1,VARREF(YPdefine_method),T303,T305);
  VARSET(YevalSg2cYmodule_init_decl,T302);
  lit_538 = YPPsym((P)"generate-module-init");
  lit_539 = YPPsym((P)"form");
  lit_540 = YPsb((P)"dl");
  lit_541 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_542 = YPPsym((P)"x-1745");
  lit_543 = YPPsym((P)"x-1744");
  lit_544 = YPsb((P)"extern ");
  lit_545 = YPsb((P)";\n");
  lit_546 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_547 = YPsb((P)"extern ");
  lit_548 = YPsb((P)";\n\n");
  lit_549 = YPsb((P)" {\n");
  lit_550 = YPsb((P)"  static int need_init = 1;\n");
  lit_551 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_552 = YPsb((P)"  need_init = 0;\n");
  lit_553 = YPPsym((P)"x-1750");
  lit_554 = YPPsym((P)"x-1749");
  lit_555 = YPsb((P)"  ");
  lit_556 = YPsb((P)"();\n");
  lit_557 = YPsb((P)"\n");
  lit_558 = YPsb((P)"\n");
  lit_559 = YPsb((P)"}\n");
  T308 = YPsig(YPPlist(1,LITREF(lit_543)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1745_241 = YPmet(FUNCODEREF(fun_x_1745_241),LITREF(lit_542),T308,ENVNUL,PNUL,YPfalse);
  T307 = YPsig(YPPlist(1,LITREF(lit_554)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1750_242 = YPmet(FUNCODEREF(fun_x_1750_242),LITREF(lit_553),T307,ENVNUL,PNUL,YPfalse);
  T306 = YPsig(YPPlist(3,LITREF(lit_61),LITREF(lit_20),LITREF(lit_539)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_243 = YPmet(FUNCODEREF(fun_generate_module_init_243),LITREF(lit_538),T306,ENVNUL,PNUL,YPfalse);
  T311 = BOUNDP(YevalSg2cYgenerate_module_init);
  if (T311 != YPfalse) {
    T310 = VARREF(YevalSg2cYgenerate_module_init);
  } else {
    T310 = YPfalse;
  }
  T312 = fun_generate_module_init_243;
  T309 = XCALL2(1,VARREF(YPdefine_method),T310,T312);
  VARSET(YevalSg2cYgenerate_module_init,T309);
  lit_560 = YPPsym((P)"generate-main");
  lit_561 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_562 = YPsb((P)"extern MODULE_INFO ");
  lit_563 = YPsb((P)";\n");
  lit_564 = YPsb((P)"extern ");
  lit_565 = YPsb((P)";\n\n");
  lit_566 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_567 = YPsb((P)";\n\n");
  lit_568 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_569 = YPsb((P)"  ");
  lit_570 = YPsb((P)"%init-world");
  lit_571 = YPsb((P)"(argc, argv);\n");
  lit_572 = YPsb((P)"  ");
  lit_573 = YPsb((P)"();\n");
  lit_574 = YPsb((P)"  return 0;\n");
  lit_575 = YPsb((P)"}\n");
  T313 = YPsig(YPPlist(2,LITREF(lit_61),LITREF(lit_20)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_244 = YPmet(FUNCODEREF(fun_generate_main_244),LITREF(lit_560),T313,ENVNUL,PNUL,YPfalse);
  T316 = BOUNDP(YevalSg2cYgenerate_main);
  if (T316 != YPfalse) {
    T315 = VARREF(YevalSg2cYgenerate_main);
  } else {
    T315 = YPfalse;
  }
  T317 = fun_generate_main_244;
  T314 = XCALL2(1,VARREF(YPdefine_method),T315,T317);
  VARSET(YevalSg2cYgenerate_main,T314);
  T318 = YPfalse;
  return T318;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_gooSioSwrite},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_gooScolsSstr},
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
  {"recurring-write", &module_info_gooSioSwrite, "recurring-write"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"min", &module_info_gooSmag, "min"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"%str", &module_info_gooSboot, "%str"},
  {"objectify-quotation", &module_info_evalSast, "objectify-quotation"},
  {"frame", &module_info_evalStop, "frame"},
  {"binding-inferred-type-setter", &module_info_evalSast, "binding-inferred-type-setter"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"each", &module_info_gooScolsSstep, "each"},
  {"%flog", &module_info_gooSboot, "%flog"},
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
  {"cosh", &module_info_gooSmath, "cosh"},
  {"sequentialize", &module_info_evalSast, "sequentialize"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"probe-module", &module_info_evalSast, "probe-module"},
  {"rep-elt-setter", &module_info_gooScolsSrep, "rep-elt-setter"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"ct", &module_info_gooSboot, "ct"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"<macro-reference>", &module_info_evalSast, "<macro-reference>"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"<ast-method>", &module_info_evalSast, "<ast-method>"},
  {"do", &module_info_gooSmacros, "do"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"<unwind-protect>", &module_info_evalSast, "<unwind-protect>"},
  {"msg*", &module_info_gooSioSwrite, "msg*"},
  {"exe-filename", &module_info_gooSsystem, "exe-filename"},
  {"join", &module_info_gooScolsSseq, "join"},
  {"packer", &module_info_gooSpacker, "packer"},
  {"pack-in", &module_info_gooSpacker, "pack-in"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"<runtime-reference>", &module_info_evalSast, "<runtime-reference>"},
  {"module-syntax-environment", &module_info_evalSast, "module-syntax-environment"},
  {"@+", &module_info_gooSboot, "@+"},
  {"rem", &module_info_gooSmath, "rem"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"^", &module_info_gooSmath, "^"},
  {"process-id", &module_info_gooSsystem, "process-id"},
  {">", &module_info_gooSmag, ">"},
  {"<global-reference>", &module_info_evalSast, "<global-reference>"},
  {"*goo-extension*", &module_info_gooSsystem, "*goo-extension*"},
  {"reference-called-function?-setter", &module_info_evalSast, "reference-called-function?-setter"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"components-to-pathname", &module_info_gooSsystem, "components-to-pathname"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"<box-creation>", &module_info_evalSast_linearize, "<box-creation>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"app", &module_info_gooSmacros, "app"},
  {"<runtime-assignment>", &module_info_evalSast, "<runtime-assignment>"},
  {"<application>", &module_info_evalSast, "<application>"},
  {"post", &module_info_gooSioSwrite, "post"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"esc", &module_info_gooSboot, "esc"},
  {"assignment-form", &module_info_evalSast, "assignment-form"},
  {"neg", &module_info_gooSmath, "neg"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"port-handle", &module_info_gooSioSport, "port-handle"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"<fix-let>", &module_info_evalSast, "<fix-let>"},
  {"reference-self?", &module_info_evalSast_linearize, "reference-self?"},
  {"del-dups!", &module_info_gooScolsSseqx, "del-dups!"},
  {"binding-global-box", &module_info_evalSast, "binding-global-box"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"function-registers", &module_info_evalSast, "function-registers"},
  {"<", &module_info_gooSmag, "<"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"writeln", &module_info_gooSioSwrite, "writeln"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"function-source-setter", &module_info_evalSast, "function-source-setter"},
  {">=", &module_info_gooSmag, ">="},
  {"application-binding", &module_info_evalSast, "application-binding"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"port-index", &module_info_gooSioSport, "port-index"},
  {"eval", &module_info_evalSsyntax, "eval"},
  {"binding-module-name", &module_info_evalSast, "binding-module-name"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"function-body", &module_info_evalSast, "function-body"},
  {"fix-let-types-setter", &module_info_evalSast, "fix-let-types-setter"},
  {"program-register-setter", &module_info_evalSast, "program-register-setter"},
  {"%su", &module_info_gooSboot, "%su"},
  {"round/", &module_info_gooSmath, "round/"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
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
  {"sin", &module_info_gooSmath, "sin"},
  {"assignment-reference", &module_info_evalSast, "assignment-reference"},
  {"constant-index-setter", &module_info_evalSast, "constant-index-setter"},
  {"~==", &module_info_gooSmath, "~=="},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"binding-mangled-name", &module_info_evalSast, "binding-mangled-name"},
  {"sexpr-signature-parameters", &module_info_evalSsyntax, "sexpr-signature-parameters"},
  {"binding-type", &module_info_evalSast, "binding-type"},
  {"module-mangled-string-name", &module_info_evalSast, "module-mangled-string-name"},
  {"sort!", &module_info_gooScolsSseqx, "sort!"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"map2", &module_info_gooSmacros, "map2"},
  {"%rnul", &module_info_gooSboot, "%rnul"},
  {"remove-modules-by-name!", &module_info_evalSast, "remove-modules-by-name!"},
  {"unwind-protect-protected-thunk", &module_info_evalSast, "unwind-protect-protected-thunk"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"reference-frame-offset", &module_info_evalSast, "reference-frame-offset"},
  {"mod+", &module_info_gooSmath, "mod+"},
  {"stack-overflow-error", &module_info_gooSruntime, "stack-overflow-error"},
  {"<global-assignment>", &module_info_evalSast, "<global-assignment>"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"do-stack-frames", &module_info_evalStop, "do-stack-frames"},
  {"fab-into", &module_info_gooScolsScol, "fab-into"},
  {"esctst", &module_info_evalStop, "esctst"},
  {"backtrace", &module_info_evalStop, "backtrace"},
  {"parse-in", &module_info_evalStop, "parse-in"},
  {"g2c-eval", &module_info_evalStop, "g2c-eval"},
  {"<packer>", &module_info_gooSpacker, "<packer>"},
  {"low-elt-setter", &module_info_gooScolsScolx, "low-elt-setter"},
  {"power-of-two-ceil", &module_info_gooSmath, "power-of-two-ceil"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"split", &module_info_gooScolsSseq, "split"},
  {"<box-read>", &module_info_evalSast_linearize, "<box-read>"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"acos", &module_info_gooSmath, "acos"},
  {"fab-g2c-module", &module_info_evalSast, "fab-g2c-module"},
  {"parent-directory", &module_info_gooSsystem, "parent-directory"},
  {"%tlen", &module_info_gooSboot, "%tlen"},
  {"find-goo-file-in-path", &module_info_gooSsystem, "find-goo-file-in-path"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"del-vals!", &module_info_gooScolsSseqx, "del-vals!"},
  {"product-elts", &module_info_gooSboot, "product-elts"},
  {"seq", &module_info_gooSboot, "seq"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"add", &module_info_gooScolsScol, "add"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"for", &module_info_gooSmacros, "for"},
  {"unconstrained-type?", &module_info_evalSast_linearize, "unconstrained-type?"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"application-known?", &module_info_evalSast, "application-known?"},
  {"<=", &module_info_gooSmag, "<="},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"goo-filename", &module_info_gooSsystem, "goo-filename"},
  {"even?", &module_info_gooSmath, "even?"},
  {"fix-let-bindings", &module_info_evalSast, "fix-let-bindings"},
  {"obj-filename", &module_info_gooSsystem, "obj-filename"},
  {"create-directory", &module_info_gooSsystem, "create-directory"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"pathname-to-components", &module_info_gooSsystem, "pathname-to-components"},
  {"<arguments>", &module_info_evalSast, "<arguments>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"fill!", &module_info_gooScolsScolx, "fill!"},
  {"tail", &module_info_gooSboot, "tail"},
  {"objectify-signature", &module_info_evalSast, "objectify-signature"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"fix-let-arguments-setter", &module_info_evalSast, "fix-let-arguments-setter"},
  {"add-goo-root-path", &module_info_gooSsystem, "add-goo-root-path"},
  {"load-in", &module_info_evalSast, "load-in"},
  {"dss", &module_info_gooSboot, "dss"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"constant-value", &module_info_evalSast, "constant-value"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"%put", &module_info_gooSboot, "%put"},
  {"%enable-stack-checks", &module_info_gooSboot, "%enable-stack-checks"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"<str-out-port>", &module_info_gooSioSport, "<str-out-port>"},
  {"find-binding", &module_info_evalSast, "find-binding"},
  {"ast-walk", &module_info_evalSast, "ast-walk"},
  {"signature-value-setter", &module_info_evalSast, "signature-value-setter"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"rep-fab", &module_info_gooScolsSrep, "rep-fab"},
  {"macro-error", &module_info_gooSmacros, "macro-error"},
  {"fun", &module_info_gooSboot, "fun"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"environment-uses-modules", &module_info_evalSast, "environment-uses-modules"},
  {"add-build-path", &module_info_gooSsystem, "add-build-path"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"with-port", &module_info_gooSioSport, "with-port"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"dp", &module_info_gooSboot, "dp"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"+", &module_info_gooSmath, "+"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"os-val-setter", &module_info_gooSsystem, "os-val-setter"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"use", &module_info_gooSboot, "use"},
  {"$", &module_info_evalStop, "$"},
  {"fab-elt-setter", &module_info_gooScolsScol, "fab-elt-setter"},
  {"locals-bindings-setter", &module_info_evalSast, "locals-bindings-setter"},
  {"$$", &module_info_evalStop, "$$"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"<dynamic-definition>", &module_info_evalSast, "<dynamic-definition>"},
  {"*goo-personal-root*", &module_info_gooSsystem, "*goo-personal-root*"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, "<renamed-local-binding>"},
  {"binding-inferred-type", &module_info_evalSast, "binding-inferred-type"},
  {"function-temporaries-setter", &module_info_evalSast, "function-temporaries-setter"},
  {"components-parent-directory", &module_info_gooSsystem, "components-parent-directory"},
  {"dm", &module_info_gooSboot, "dm"},
  {"use/library", &module_info_gooSboot, "use/library"},
  {"file-copy", &module_info_gooSsystem, "file-copy"},
  {"def", &module_info_gooSboot, "def"},
  {"while", &module_info_gooSmacros, "while"},
  {"extract-things!", &module_info_evalSast_linearize, "extract-things!"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"module-loader-module-type", &module_info_evalSast, "module-loader-module-type"},
  {"<binding>", &module_info_evalSast, "<binding>"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"<definition>", &module_info_evalSast, "<definition>"},
  {"module-binding", &module_info_evalSast, "module-binding"},
  {"fix-let-body-setter", &module_info_evalSast, "fix-let-body-setter"},
  {"%@subclass?", &module_info_gooSboot, "%@subclass?"},
  {"df", &module_info_gooSboot, "df"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"not", &module_info_gooSboot, "not"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"repeat", &module_info_gooScolsSseq, "repeat"},
  {"packed", &module_info_gooSpacker, "packed"},
  {"fun-src-setter", &module_info_gooSboot, "fun-src-setter"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"binding-index-setter", &module_info_evalSast, "binding-index-setter"},
  {"def-list", &module_info_evalSast, "def-list"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"col-res", &module_info_gooScolsScol, "col-res"},
  {"<local-assignment>", &module_info_evalSast, "<local-assignment>"},
  {"dc", &module_info_gooSboot, "dc"},
  {"and", &module_info_gooSmacros, "and"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"dv", &module_info_gooSboot, "dv"},
  {"form-quotations", &module_info_evalSast_linearize, "form-quotations"},
  {"%telt", &module_info_gooSboot, "%telt"},
  {"box-reference", &module_info_evalSast_linearize, "box-reference"},
  {"set-module-environments", &module_info_evalSast, "set-module-environments"},
  {"<immediate-constant>", &module_info_evalSast, "<immediate-constant>"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"port-line", &module_info_gooSioSport, "port-line"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-data-refs-setter", &module_info_evalSast, "function-data-refs-setter"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"|", &module_info_gooSmath, "|"},
  {"module-uses-c-includes", &module_info_evalSast, "module-uses-c-includes"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"binding-native-to?", &module_info_evalSast, "binding-native-to?"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"%to-tup", &module_info_gooSboot, "%to-tup"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"program-definitions", &module_info_evalSast_linearize, "program-definitions"},
  {"moddecf", &module_info_gooSmath, "moddecf"},
  {"fun-src", &module_info_gooSboot, "fun-src"},
  {"do3", &module_info_gooScolsSseq, "do3"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, "unwind-protect-cleanup-thunk"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"<predefined-application>", &module_info_evalSast, "<predefined-application>"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"module-name", &module_info_evalSast, "module-name"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"%tup", &module_info_gooSboot, "%tup"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"program-quotations", &module_info_evalSast_linearize, "program-quotations"},
  {"<compile-time>", &module_info_evalSast, "<compile-time>"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"signature-names-setter", &module_info_evalSast, "signature-names-setter"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"init-environment-for-eval", &module_info_evalSast, "init-environment-for-eval"},
  {"<ast-signature>", &module_info_evalSast, "<ast-signature>"},
  {"function-value", &module_info_evalSast, "function-value"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"ast-evaluate", &module_info_evalSast, "ast-evaluate"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"c-filename", &module_info_gooSsystem, "c-filename"},
  {"packing", &module_info_gooSpacker, "packing"},
  {"function-source", &module_info_evalSast, "function-source"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"ast-define-binding", &module_info_evalSast, "ast-define-binding"},
  {"$goo-boot-module-name", &module_info_evalSast, "$goo-boot-module-name"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"<port>", &module_info_gooSioSport, "<port>"},
  {"environment-bindings", &module_info_evalSast, "environment-bindings"},
  {"<module-binding>", &module_info_evalSast, "<module-binding>"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"reference-frame-number", &module_info_evalSast, "reference-frame-number"},
  {"<str-in-port>", &module_info_gooSioSport, "<str-in-port>"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"signature-arity-setter", &module_info_evalSast, "signature-arity-setter"},
  {"1+", &module_info_gooSmath, "1+"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"analyze-ast", &module_info_evalSast_linearize, "analyze-ast"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"fix-let-types", &module_info_evalSast, "fix-let-types"},
  {"packing-with", &module_info_gooSpacker, "packing-with"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"unchecked-runtime-environment", &module_info_evalSast, "unchecked-runtime-environment"},
  {"<top-level-form>", &module_info_evalSast_linearize, "<top-level-form>"},
  {"module-mangled-name-setter", &module_info_evalSast, "module-mangled-name-setter"},
  {"free-environment", &module_info_evalSast, "free-environment"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"closurize-main!", &module_info_evalSast_linearize, "closurize-main!"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"constant-index", &module_info_evalSast, "constant-index"},
  {"<locals>", &module_info_evalSast, "<locals>"},
  {"components-basename", &module_info_gooSsystem, "components-basename"},
  {"ceil/", &module_info_gooSmath, "ceil/"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"add-tmp-path", &module_info_gooSsystem, "add-tmp-path"},
  {"binding-info-setter", &module_info_evalSast, "binding-info-setter"},
  {"signature-specs-setter", &module_info_evalSast, "signature-specs-setter"},
  {"dl", &module_info_gooSboot, "dl"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"<out-port>", &module_info_gooSioSport, "<out-port>"},
  {"%relt-setter", &module_info_gooSboot, "%relt-setter"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"binding-value-setter", &module_info_evalSast, "binding-value-setter"},
  {"*obj-extension*", &module_info_gooSsystem, "*obj-extension*"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"len/fill-setter", &module_info_gooScolsScolx, "len/fill-setter"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"do-named-static-global-bindings", &module_info_evalSast, "do-named-static-global-bindings"},
  {"mod", &module_info_gooSmath, "mod"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"frame-var", &module_info_evalStop, "frame-var"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"locals-functions-setter", &module_info_evalSast, "locals-functions-setter"},
  {"prefix?", &module_info_gooScolsSseq, "prefix?"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<global-box>", &module_info_evalSast, "<global-box>"},
  {"<program>", &module_info_evalSast, "<program>"},
  {"binding-dotted?-setter", &module_info_evalSast, "binding-dotted?-setter"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"function-adjectives", &module_info_evalSast, "function-adjectives"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"<<", &module_info_gooSmath, "<<"},
  {"port-contents", &module_info_gooSioSport, "port-contents"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"reference-called-function?", &module_info_evalSast, "reference-called-function?"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"rep-fill!", &module_info_gooScolsSrep, "rep-fill!"},
  {"col", &module_info_gooScolsScol, "col"},
  {"signature-nary?-setter", &module_info_evalSast, "signature-nary?-setter"},
  {"log", &module_info_gooSmath, "log"},
  {"read", &module_info_gooSruntime, "read"},
  {"%raw-met-call", &module_info_gooSboot, "%raw-met-call"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"@tlen", &module_info_gooSboot, "@tlen"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"program-bindings", &module_info_evalSast_linearize, "program-bindings"},
  {"compile-time-program", &module_info_evalSast, "compile-time-program"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"do2", &module_info_gooScolsSseq, "do2"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"<magic-reference>", &module_info_evalSast, "<magic-reference>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"<regular-application>", &module_info_evalSast, "<regular-application>"},
  {"function-frame-len-setter", &module_info_evalSast, "function-frame-len-setter"},
  {"<box-write>", &module_info_evalSast_linearize, "<box-write>"},
  {"write", &module_info_gooSioSwrite, "write"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, "binding-dynamic-extent?-setter"},
  {"ready?", &module_info_gooSioSport, "ready?"},
  {"pop", &module_info_gooScolsSseq, "pop"},
  {"lst", &module_info_gooSboot, "lst"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"ds", &module_info_gooSboot, "ds"},
  {"<seq.>", &module_info_gooSboot, "<seq.>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"find-environment-module", &module_info_evalSast, "find-environment-module"},
  {"<local-binding>", &module_info_evalSast, "<local-binding>"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"signature-value", &module_info_evalSast, "signature-value"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"%tnul", &module_info_gooSboot, "%tnul"},
  {"<low-let>", &module_info_evalSast, "<low-let>"},
  {"form-program", &module_info_evalSast_linearize, "form-program"},
  {"asin", &module_info_gooSmath, "asin"},
  {"*goo-root*", &module_info_gooSsystem, "*goo-root*"},
  {"$$$", &module_info_evalStop, "$$$"},
  {"%rep", &module_info_gooSboot, "%rep"},
  {"function-nary?", &module_info_evalSast, "function-nary?"},
  {"module-mangled-name", &module_info_evalSast, "module-mangled-name"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"union-elts", &module_info_gooSboot, "union-elts"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"gooc-filename", &module_info_gooSsystem, "gooc-filename"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"module-exports", &module_info_evalSast, "module-exports"},
  {"locals-bindings", &module_info_evalSast, "locals-bindings"},
  {"read-file", &module_info_evalStop, "read-file"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"in", &module_info_gooSioSport, "in"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"function-temporaries", &module_info_evalSast, "function-temporaries"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"locals-body-setter", &module_info_evalSast, "locals-body-setter"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"modincf", &module_info_gooSmath, "modincf"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"read-from-string", &module_info_gooSioSread, "read-from-string"},
  {"vec", &module_info_gooScolsSvec, "vec"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"clone", &module_info_gooSboot, "clone"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"peek", &module_info_gooSioSport, "peek"},
  {"as", &module_info_gooStypes, "as"},
  {"binding-index", &module_info_evalSast, "binding-index"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"components-last", &module_info_gooSsystem, "components-last"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"len-setter", &module_info_gooScolsScolx, "len-setter"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"reference-offset", &module_info_evalSast_linearize, "reference-offset"},
  {"fun-refs-setter", &module_info_gooSboot, "fun-refs-setter"},
  {"head", &module_info_gooSboot, "head"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%telt-setter", &module_info_gooSboot, "%telt-setter"},
  {"suffix?", &module_info_gooScolsSseq, "suffix?"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"monitor-type", &module_info_evalSast, "monitor-type"},
  {"function-data-refs", &module_info_evalSast, "function-data-refs"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"*current-handlers*", &module_info_gooSruntime, "*current-handlers*"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"@<", &module_info_gooSboot, "@<"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"@telt", &module_info_gooSboot, "@telt"},
  {"push", &module_info_gooScolsSseq, "push"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"packer-res", &module_info_gooSpacker, "packer-res"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"<dynamic-reference>", &module_info_evalSast, "<dynamic-reference>"},
  {"top", &module_info_evalStop, "top"},
  {"push!", &module_info_gooScolsSseqx, "push!"},
  {"<col.>", &module_info_gooSboot, "<col.>"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"round", &module_info_gooSmath, "round"},
  {"add-goo-personal-root-path", &module_info_gooSsystem, "add-goo-personal-root-path"},
  {"lift-place-subforms", &module_info_gooSmacros, "lift-place-subforms"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"error", &module_info_gooSboot, "error"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"say", &module_info_gooSioSwrite, "say"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"function-free-setter", &module_info_evalSast, "function-free-setter"},
  {"out", &module_info_gooSioSport, "out"},
  {"program-form", &module_info_evalSast_linearize, "program-form"},
  {"signature-names", &module_info_evalSast, "signature-names"},
  {"gather-temporaries!", &module_info_evalSast_linearize, "gather-temporaries!"},
  {"into", &module_info_gooScolsScol, "into"},
  {"insert-box!", &module_info_evalSast_linearize, "insert-box!"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"<static-global-environment>", &module_info_evalSast, "<static-global-environment>"},
  {"find-goo-file-at", &module_info_gooSsystem, "find-goo-file-at"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"program-type-setter", &module_info_evalSast, "program-type-setter"},
  {"<ast-primitive-definition>", &module_info_evalSast, "<ast-primitive-definition>"},
  {"module-uses-c-files", &module_info_evalSast, "module-uses-c-files"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"gets", &module_info_gooSioSport, "gets"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"zipped", &module_info_gooSruntime, "zipped"},
  {"<programs>", &module_info_evalSast, "<programs>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"use/include", &module_info_gooSboot, "use/include"},
  {"@subclass?", &module_info_gooSboot, "@subclass?"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"quote", &module_info_gooSboot, "quote"},
  {"signature-arity", &module_info_evalSast, "signature-arity"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"os-val", &module_info_gooSsystem, "os-val"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"~", &module_info_gooSmath, "~"},
  {"<file-port>", &module_info_gooSioSport, "<file-port>"},
  {"tan", &module_info_gooSmath, "tan"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"function-index-setter", &module_info_evalSast, "function-index-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"t*", &module_info_gooSboot, "t*"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {"<reference>", &module_info_evalSast, "<reference>"},
  {"div", &module_info_gooSmath, "div"},
  {"op", &module_info_gooSmacros, "op"},
  {"function-signature-setter", &module_info_evalSast, "function-signature-setter"},
  {"port-index-setter", &module_info_gooSioSport, "port-index-setter"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"<rep>", &module_info_gooSboot, "<rep>"},
  {"*path-separator*", &module_info_gooSsystem, "*path-separator*"},
  {"%dyn-var-val-setter", &module_info_gooSboot, "%dyn-var-val-setter"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"signature-nary?", &module_info_evalSast, "signature-nary?"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"<closure-creation>", &module_info_evalSast_linearize, "<closure-creation>"},
  {"binding-info", &module_info_evalSast, "binding-info"},
  {"<alternative>", &module_info_evalSast, "<alternative>"},
  {"write-to-string", &module_info_gooSioSwrite, "write-to-string"},
  {"sort-by", &module_info_gooScolsSseq, "sort-by"},
  {"load", &module_info_evalStop, "load"},
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
  {"packer-add", &module_info_gooSpacker, "packer-add"},
  {"runtime-environment", &module_info_evalSast, "runtime-environment"},
  {"binding-dotted?", &module_info_evalSast, "binding-dotted?"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"*module-search-path*", &module_info_gooSsystem, "*module-search-path*"},
  {"any?", &module_info_gooStypes, "any?"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"if", &module_info_gooSboot, "if"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"time", &module_info_gooSsystem, "time"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"environment-module", &module_info_evalSast, "environment-module"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"hierarchical-components", &module_info_gooSsystem, "hierarchical-components"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"%fab-dyn-var", &module_info_gooSboot, "%fab-dyn-var"},
  {"binding-global-box-setter", &module_info_evalSast, "binding-global-box-setter"},
  {"<str-port>", &module_info_gooSioSport, "<str-port>"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"function-self-recursive?-setter", &module_info_evalSast, "function-self-recursive?-setter"},
  {"get", &module_info_gooSioSport, "get"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<module-loader>", &module_info_evalSast, "<module-loader>"},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"<dynamic-assignment>", &module_info_evalSast, "<dynamic-assignment>"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%rlen", &module_info_gooSboot, "%rlen"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"function-frame-len", &module_info_evalSast, "function-frame-len"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"<static-module-binding-reference>", &module_info_evalSast, "<static-module-binding-reference>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"sort", &module_info_gooScolsSseq, "sort"},
  {"<monitor>", &module_info_evalSast, "<monitor>"},
  {"binding-dynamic-extent?", &module_info_evalSast, "binding-dynamic-extent?"},
  {"monitor-info", &module_info_evalSast, "monitor-info"},
  {"%@class-of", &module_info_gooSboot, "%@class-of"},
  {"as-lst", &module_info_evalSast, "as-lst"},
  {"binding-mutable?", &module_info_evalSast, "binding-mutable?"},
  {"always", &module_info_gooSruntime, "always"},
  {"fab-fill!", &module_info_gooScolsScol, "fab-fill!"},
  {"<bind-exit>", &module_info_evalSast, "<bind-exit>"},
  {"puts", &module_info_gooSioSport, "puts"},
  {"function-debug-name-setter", &module_info_evalSast, "function-debug-name-setter"},
  {"%relt", &module_info_gooSboot, "%relt"},
  {"fin", &module_info_gooSboot, "fin"},
  {"load-module", &module_info_evalSast, "load-module"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"pop!", &module_info_gooScolsSseqx, "pop!"},
  {"*exe-extension*", &module_info_gooSsystem, "*exe-extension*"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"init-ast", &module_info_evalSast, "init-ast"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"$e", &module_info_gooSmath, "$e"},
  {"packer-fab", &module_info_gooSpacker, "packer-fab"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"<fixnum>", &module_info_gooSboot, "<fixnum>"},
  {"env-object-name", &module_info_evalSast, "env-object-name"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"ast-walk!", &module_info_evalSast, "ast-walk!"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%get", &module_info_gooSboot, "%get"},
  {"msg-to-str", &module_info_gooSruntime, "msg-to-str"},
  {"<real-reference>", &module_info_evalSast, "<real-reference>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"try", &module_info_gooSboot, "try"},
  {"ast-contains-fun?", &module_info_evalSast_linearize, "ast-contains-fun?"},
  {"export", &module_info_gooSboot, "export"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"col-res-type", &module_info_gooScolsScol, "col-res-type"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"<local-reference>", &module_info_evalSast, "<local-reference>"},
  {"<bound?>", &module_info_evalSast, "<bound?>"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"closure-creation-index", &module_info_evalSast_linearize, "closure-creation-index"},
  {"tup", &module_info_gooSboot, "tup"},
  {"locals-body", &module_info_evalSast, "locals-body"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"<file-out-port>", &module_info_gooSioSport, "<file-out-port>"},
  {"auto-eval", &module_info_evalStop, "auto-eval"},
  {"file-exists?", &module_info_gooSsystem, "file-exists?"},
  {"function-bindings", &module_info_evalSast, "function-bindings"},
  {"signature-bindings-setter", &module_info_evalSast, "signature-bindings-setter"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"@not", &module_info_gooSboot, "@not"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"%dyn-var-val", &module_info_gooSboot, "%dyn-var-val"},
  {"fun-refs", &module_info_gooSboot, "fun-refs"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"<module>", &module_info_evalSast, "<module>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"let", &module_info_gooSboot, "let"},
  {"binding-name", &module_info_evalSast, "binding-name"},
  {"fun-cache", &module_info_gooSboot, "fun-cache"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"fix-let-arguments", &module_info_evalSast, "fix-let-arguments"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"or", &module_info_gooSmacros, "or"},
  {"<each>", &module_info_gooScolsSstep, "<each>"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"os-name", &module_info_gooSsystem, "os-name"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"ddv", &module_info_gooSboot, "ddv"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"global-box-value-setter", &module_info_evalSast, "global-box-value-setter"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"monitor-test", &module_info_evalSast, "monitor-test"},
  {"last", &module_info_gooSmacros, "last"},
  {"application-function", &module_info_evalSast, "application-function"},
  {"*c-extension*", &module_info_gooSsystem, "*c-extension*"},
  {"application-known?-setter", &module_info_evalSast, "application-known?-setter"},
  {"<product>", &module_info_gooSboot, "<product>"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"put", &module_info_gooSioSport, "put"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"items", &module_info_gooScolsScol, "items"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"t?", &module_info_gooStypes, "t?"},
  {"find", &module_info_gooScolsScol, "find"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"function-free", &module_info_evalSast, "function-free"},
  {"mif", &module_info_gooSboot, "mif"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"port-handle-setter", &module_info_gooSioSport, "port-handle-setter"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"application-arguments", &module_info_evalSast, "application-arguments"},
  {"install-initial-bindings", &module_info_evalSast, "install-initial-bindings"},
  {"<in-port>", &module_info_gooSioSport, "<in-port>"},
  {"label-components", &module_info_gooSsystem, "label-components"},
  {"application-tail?", &module_info_evalSast, "application-tail?"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"set", &module_info_gooSboot, "set"},
  {"msg", &module_info_gooSruntime, "msg"},
  {"port-line-setter", &module_info_gooSioSport, "port-line-setter"},
  {"monitor-main-thunk", &module_info_evalSast, "monitor-main-thunk"},
  {"<constant>", &module_info_evalSast, "<constant>"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"<raw-constant>", &module_info_evalSast, "<raw-constant>"},
  {"binding-locative", &module_info_evalSast, "binding-locative"},
  {"*goo-build-root*", &module_info_gooSsystem, "*goo-build-root*"},
  {"<free-reference>", &module_info_evalSast_linearize, "<free-reference>"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"@==", &module_info_gooSboot, "@=="},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"==", &module_info_gooSmacros, "=="},
  {"pow", &module_info_gooSmath, "pow"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"&", &module_info_gooSmath, "&"},
  {"bound?-reference", &module_info_evalSast, "bound?-reference"},
  {"%load", &module_info_gooSsystem, "%load"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"<ast-generic>", &module_info_evalSast, "<ast-generic>"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"*", &module_info_gooSmath, "*"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"*max-print-length*", &module_info_gooSioSwrite, "*max-print-length*"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"pack", &module_info_gooSpacker, "pack"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"monitor-handler", &module_info_evalSast, "monitor-handler"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"loc", &module_info_gooSboot, "loc"},
  {"function-signature", &module_info_evalSast, "function-signature"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"force-out", &module_info_gooSioSport, "force-out"},
  {"<ast-primitive>", &module_info_evalSast, "<ast-primitive>"},
  {"mod-", &module_info_gooSmath, "mod-"},
  {"bt", &module_info_evalStop, "bt"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"now", &module_info_gooScolsScol, "now"},
  {"rep-len", &module_info_gooScolsSrep, "rep-len"},
  {"t<", &module_info_gooStypes, "t<"},
  {"cos", &module_info_gooSmath, "cos"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"assignment-form-setter", &module_info_evalSast, "assignment-form-setter"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"case", &module_info_gooSmacros, "case"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"close", &module_info_gooSioSport, "close"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"binding-type-setter", &module_info_evalSast, "binding-type-setter"},
  {"floor", &module_info_gooSmath, "floor"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"function-registers-setter", &module_info_evalSast, "function-registers-setter"},
  {"do-module-loader-modules", &module_info_evalSast, "do-module-loader-modules"},
  {"file-type", &module_info_gooSsystem, "file-type"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"objectify-with-subtransaction", &module_info_evalSast, "objectify-with-subtransaction"},
  {"register-allocate!", &module_info_evalSast_linearize, "register-allocate!"},
  {"map", &module_info_gooSmacros, "map"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"-", &module_info_gooSmath, "-"},
  {"closure-creation-free", &module_info_evalSast_linearize, "closure-creation-free"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"alternative-consequent", &module_info_evalSast, "alternative-consequent"},
  {"probe-directory", &module_info_gooSsystem, "probe-directory"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"*register-passive?*", &module_info_evalSast_linearize, "*register-passive?*"},
  {"rep-nul", &module_info_gooScolsSrep, "rep-nul"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"binding-locative-setter", &module_info_evalSast, "binding-locative-setter"},
  {"%im", &module_info_gooSboot, "%im"},
  {"match", &module_info_gooSmacros, "match"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"packing-in", &module_info_gooSpacker, "packing-in"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {">>", &module_info_gooSmath, ">>"},
  {"%time", &module_info_gooSboot, "%time"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"bind-exit-main-fun", &module_info_evalSast, "bind-exit-main-fun"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"def-programs", &module_info_evalSast, "def-programs"},
  {"<file-in-port>", &module_info_gooSioSport, "<file-in-port>"},
  {"atan", &module_info_gooSmath, "atan"},
  {"2nd", &module_info_gooSmacros, "2nd"},
  {"lift!", &module_info_evalSast_linearize, "lift!"},
  {"newline", &module_info_gooSioSport, "newline"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"module-mangled-string-name-setter", &module_info_evalSast, "module-mangled-string-name-setter"},
  {"<vec>", &module_info_gooScolsSvec, "<vec>"},
  {"use/mangle", &module_info_gooSboot, "use/mangle"},
  {"file-mtime", &module_info_gooSsystem, "file-mtime"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"t=", &module_info_gooStypes, "t="},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"function-self-recursive?", &module_info_evalSast, "function-self-recursive?"},
  {"max", &module_info_gooSmag, "max"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"function-body-setter", &module_info_evalSast, "function-body-setter"},
  {"module-uses-c-libraries", &module_info_evalSast, "module-uses-c-libraries"},
  {"function-index", &module_info_evalSast, "function-index"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"function-debug-name", &module_info_evalSast, "function-debug-name"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"~=", &module_info_gooSmath, "~="},
  {"<module-binding-reference>", &module_info_evalSast, "<module-binding-reference>"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"%class-of", &module_info_gooSboot, "%class-of"},
  {"<passive-program>", &module_info_evalSast, "<passive-program>"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"load-file", &module_info_evalStop, "load-file"},
  {"abs", &module_info_gooSmath, "abs"},
  {"module-name-to-relpath", &module_info_evalSast, "module-name-to-relpath"},
  {"<ast-macro-definition>", &module_info_evalSast, "<ast-macro-definition>"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"so-load", &module_info_gooSsystem, "so-load"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"function-binding", &module_info_evalSast, "function-binding"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"nil", &module_info_gooSboot, "nil"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"*max-print-depth*", &module_info_gooSioSwrite, "*max-print-depth*"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"alternative-condition", &module_info_evalSast, "alternative-condition"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"class-children", &module_info_gooSboot, "class-children"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"<ast-function>", &module_info_evalSast, "<ast-function>"},
  {"elt-setter", &module_info_gooScolsScolx, "elt-setter"},
  {"program-register", &module_info_evalSast, "program-register"},
  {"save-image", &module_info_evalStop, "save-image"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"t+", &module_info_gooStypes, "t+"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"emit", &module_info_gooSioSwrite, "emit"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"binding-module", &module_info_evalSast, "binding-module"},
  {"1st", &module_info_gooSmacros, "1st"},
  {"signature-bindings", &module_info_evalSast, "signature-bindings"},
  {"fix-let-bindings-setter", &module_info_evalSast, "fix-let-bindings-setter"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"signature-specs", &module_info_evalSast, "signature-specs"},
  {"module-target-environment", &module_info_evalSast, "module-target-environment"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"sort-by!", &module_info_gooScolsSseq, "sort-by!"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"when", &module_info_gooSmacros, "when"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {"fix-let-body", &module_info_evalSast, "fix-let-body"},
  {"binding-mangled-name-setter", &module_info_evalSast, "binding-mangled-name-setter"},
  {"rep-into!", &module_info_gooScolsSrep, "rep-into!"},
  {"<free-environment>", &module_info_evalSast, "<free-environment>"},
  {"%compile", &module_info_gooSsystem, "%compile"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"program-type", &module_info_evalSast, "program-type"},
  {"<assignment>", &module_info_evalSast, "<assignment>"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"pe-msg", &module_info_gooSioSwrite, "pe-msg"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"box-form", &module_info_evalSast_linearize, "box-form"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"1-", &module_info_gooSmath, "1-"},
  {"flatten-seqs", &module_info_evalSast_linearize, "flatten-seqs"},
  {"len", &module_info_gooStypes, "len"},
  {"alternative-alternant", &module_info_evalSast, "alternative-alternant"},
  {"do-static-global-bindings", &module_info_evalSast, "do-static-global-bindings"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%print-cpu-usage", PVAR, NULL},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"between-parentheses", PVAR, NULL},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"pp", CVAR, &YevalSg2cYpp},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"module-loader-appname-setter", CVAR, &YevalSg2cYmodule_loader_appname_setter},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"module-loader-app-modname-setter", CVAR, &YevalSg2cYmodule_loader_app_modname_setter},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"---main-1---", PVAR, NULL},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"for-mods", PVAR, NULL},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"with-statement", PVAR, NULL},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"generate-self-recursive-call", CVAR, &YevalSg2cYgenerate_self_recursive_call},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"generate-shadow-args", CVAR, &YevalSg2cYgenerate_shadow_args},
  {"---main-2---", PVAR, NULL},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"with-used-expression", PVAR, NULL},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"or/set", PVAR, NULL},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"---main-0---", PVAR, NULL},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"for-commas", PVAR, NULL},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"with-expression", PVAR, NULL},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-build-app", "g2c-build-app"},
  {"g2c-goo", "g2c-goo"},
  {"g2c-def-app", "g2c-def-app"},
  {"g2c-exp", "g2c-exp"},
  {"g2c-ast", "g2c-ast"},
  {"g2c-clean", "g2c-clean"},
  {"g2c-eval", "g2c-eval"},
  {"g2c-top", "g2c-top"},
  {"g2c-test", "g2c-test"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSg2c;
MODULE_INFO module_info_evalSg2c = {
  "eval/g2c",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSruntime (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_gooSsystem (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);
extern void load_module_gooSioSport (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_gooSioSwrite();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_gooScolsSstr();
  load_module_gooSsystem();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();
  load_module_gooSioSport();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();

}

/* END OF GENERATED CODE. */
