/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/g2c");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/g2c */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
DEF(YevalSg2cYmangle_string_literal,"eval/g2c","mangle-string-literal");
EXT(Yrange_error,"goo/boot","range-error");
DEF(YevalSg2cYgenerate_quotation,"eval/g2c","generate-quotation");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSg2cYgenerate_c_application,"eval/g2c","generate-c-application");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalStypistYtype_infer,"eval/typist","type-infer");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
DEF(YevalSg2cYDlocal_marker,"eval/g2c","$local-marker");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
DEF(YevalSg2cYpurge_outdated_modules,"eval/g2c","purge-outdated-modules");
DEF(YevalSg2cYmangle_quotation_name,"eval/g2c","mangle-quotation-name");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSg2cYgen_result,"eval/g2c","gen-result");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
DEF(YevalSg2cYgenerate_local_temporaries,"eval/g2c","generate-local-temporaries");
DEF(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
DEF(YevalSg2cYmodule_init_decl,"eval/g2c","module-init-decl");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
DEF(YevalSg2cYto_c,"eval/g2c","to-c");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
DEF(YevalSg2cYgenerate_quotations,"eval/g2c","generate-quotations");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
DEF(YevalSg2cYDiep_suffix,"eval/g2c","$iep-suffix");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
DEF(YevalSg2cYfloat_to_c_string,"eval/g2c","float-to-c-string");
DYNDEF(YevalSg2cYTdynamic_linkingQT,"eval/g2c","*dynamic-linking?*");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
DEF(YevalSg2cYmangle_integer,"eval/g2c","mangle-integer");
DEF(YevalSg2cYDname_mangler_table,"eval/g2c","$name-mangler-table");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmagYL,"goo/mag","<");
DEF(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmathY1_,"goo/math","1-");
DEF(YevalSg2cYcompute_ast,"eval/g2c","compute-ast");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
DEF(YevalSg2cYLg2c_module_loaderG,"eval/g2c","<g2c-module-loader>");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_cache,"goo/boot","fun-cache");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
DEF(YevalSg2cYDnumber_characters,"eval/g2c","$number-characters");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
DEF(YevalSg2cYmangle_local_name,"eval/g2c","mangle-local-name");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YPtnul,"goo/boot","%tnul");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSg2cYTg2c_appT,"eval/g2c","*g2c-app*");
DEF(YevalSg2cYDc_escapes,"eval/g2c","$c-escapes");
EXT(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
DEF(YevalSg2cYgenerate_function_forward,"eval/g2c","generate-function-forward");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
DEF(YevalSg2cYmangle_boot_name,"eval/g2c","mangle-boot-name");
DEF(YevalSg2cYout_list_builder,"eval/g2c","out-list-builder");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
DEF(YevalSg2cYDmangles_data,"eval/g2c","$mangles-data");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSg2cYmangle_module_into,"eval/g2c","mangle-module-into");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
DEF(YevalSg2cYDmax_character_code,"eval/g2c","$max-character-code");
DEF(YevalSg2cYTtrace_registersQT,"eval/g2c","*trace-registers?*");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DEF(YevalSg2cYgenerate_trailer,"eval/g2c","generate-trailer");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalStopYD,"eval/top","$");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
DEF(YevalSg2cYDhygiene_marker,"eval/g2c","$hygiene-marker");
DYNDEF(YevalSg2cYTtmp_file_counterT,"eval/g2c","*tmp-file-counter*");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
DYNDEF(YevalSg2cYTloop_arg_counterT,"eval/g2c","*loop-arg-counter*");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
DEF(YevalSg2cYmodule_mtime_setter,"eval/g2c","module-mtime-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
DEF(YevalSg2cYDhygiene_char,"eval/g2c","$hygiene-char");
EXT(Ytail,"goo/boot","tail");
EXT(YevalStopYtop,"eval/top","top");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
DEF(YevalSg2cYbuf_cat2X,"eval/g2c","buf-cat2!");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
DEF(YevalSg2cYdeclare_imported_module_infos,"eval/g2c","declare-imported-module-infos");
EXT(YevalStopYload,"eval/top","load");
DEF(YevalSg2cYmangle_local_marked_name,"eval/g2c","mangle-local-marked-name");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSg2cYmodule_loader_appname,"eval/g2c","module-loader-appname");
EXT(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
DEF(YevalSg2cYDescape_marker,"eval/g2c","$escape-marker");
DEF(YevalSg2cYgenerate_closure_structure,"eval/g2c","generate-closure-structure");
DEF(YevalSg2cYDmodule_marker,"eval/g2c","$module-marker");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YOOemptyQ,"goo/boot","@@empty?");
DEF(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YOall2Q,"goo/boot","@all2?");
DEF(YevalSg2cYmodule_src_file,"eval/g2c","module-src-file");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooScolsScolYfab_elt_setter,"goo/cols/col","fab-elt-setter");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
DEF(YevalSg2cYgenerate_module_info,"eval/g2c","generate-module-info");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
DEF(YevalSg2cYgenerate_module_init,"eval/g2c","generate-module-init");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
DEF(YevalSg2cYgenerate_return,"eval/g2c","generate-return");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
DEF(YevalSg2cYDescape_separator,"eval/g2c","$escape-separator");
DEF(YevalSg2cYprimitive_inlinableQ,"eval/g2c","primitive-inlinable?");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
DEF(YevalSg2cYgenerate_function_bodies,"eval/g2c","generate-function-bodies");
DEF(YevalSg2cYgenerate_function_body_reference,"eval/g2c","generate-function-body-reference");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSg2cYreference_Gc,"eval/g2c","reference->c");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
DEF(YevalSg2cYgen_fab_list,"eval/g2c","gen-fab-list");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YOnew,"goo/boot","@new");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYB,"goo/math","&");
DEF(YevalSg2cYTmangle_bufferT,"eval/g2c","*mangle-buffer*");
EXT(YgooSmacrosYpair,"goo/macros","pair");
DEF(YevalSg2cYmangle_global_name,"eval/g2c","mangle-global-name");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
DEF(YevalSg2cYbbQ,"eval/g2c","bb?");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
DEF(YevalSg2cYgen_ref,"eval/g2c","gen-ref");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
DEF(YevalSg2cYmangle_binding,"eval/g2c","mangle-binding");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
DEF(YevalSg2cYDmethod_mangled_marker,"eval/g2c","$method-mangled-marker");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
DEF(YevalSg2cYmangler_reset,"eval/g2c","mangler-reset");
DEF(YevalSg2cYmangle_name_into,"eval/g2c","mangle-name-into");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
DEF(YevalSg2cYfunshell_to_c,"eval/g2c","funshell-to-c");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
DEF(YevalSg2cYcompute_program,"eval/g2c","compute-program");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
DEF(YevalSg2cYDnumber_call_templates,"eval/g2c","$number-call-templates");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YOdo,"goo/boot","@do");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
DEF(YevalSg2cYgenerate_global_binding,"eval/g2c","generate-global-binding");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
DEF(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
DEF(YevalSg2cYmodule_mtime,"eval/g2c","module-mtime");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
DEF(YevalSg2cYDmethod_mangled_marker_string,"eval/g2c","$method-mangled-marker-string");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
DEF(YevalSg2cYmodule_src_file_setter,"eval/g2c","module-src-file-setter");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
DEF(YevalSg2cYfalse_name,"eval/g2c","false-name");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSg2cYfuninit_to_c,"eval/g2c","funinit-to-c");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
DEF(YevalSg2cYgenerate_main,"eval/g2c","generate-main");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
DEF(YevalSg2cYmodule_loader_app_modname,"eval/g2c","module-loader-app-modname");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSg2cYgenerate_function_forwards,"eval/g2c","generate-function-forwards");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DEF(YevalSg2cYDmin_character_code,"eval/g2c","$min-character-code");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
DEF(YevalSg2cYgenerate_header,"eval/g2c","generate-header");
DEF(YevalSg2cYdispatcherQ,"eval/g2c","dispatcher?");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YDmin_int,"goo/boot","$min-int");
DEF(YevalSg2cYTregisters_per_lineT,"eval/g2c","*registers-per-line*");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DYNDEF(YevalSg2cYTdefinitionsT,"eval/g2c","*definitions*");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
DEF(YevalSg2cYmodule_init_name,"eval/g2c","module-init-name");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YPsnul,"goo/boot","%snul");
EXT(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YevalSg2cYmodule_info_name,"eval/g2c","module-info-name");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSioSwriteYrecurring_write,"goo/io/write","recurring-write");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
DEF(YevalSg2cYcompile_load,"eval/g2c","compile-load");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
DEF(YevalSg2cYgenerate_registers,"eval/g2c","generate-registers");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
DEF(YevalSg2cYgen_depth,"eval/g2c","gen-depth");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSg2cYgenerate_function_specs,"eval/g2c","generate-function-specs");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YgooScolsScolYfab_fillX,"goo/cols/col","fab-fill!");
DEF(YevalSg2cYgenerate_functions,"eval/g2c","generate-functions");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
DEF(YevalSg2cYgenerate_global_environment,"eval/g2c","generate-global-environment");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
DEF(YevalSg2cYgenerate_quotation_forwards,"eval/g2c","generate-quotation-forwards");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
DEF(YevalSg2cYgenerate_function_binding,"eval/g2c","generate-function-binding");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
DEF(YevalSg2cYLg2c_moduleG,"eval/g2c","<g2c-module>");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
DEF(YevalSg2cYbinding_Gc,"eval/g2c","binding->c");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSg2cYDnow_mod_var_name,"eval/g2c","$now-mod-var-name");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalStypistYunconstrained_typeQ,"eval/typist","unconstrained-type?");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(YevalSg2cYmangle_raw_name,"eval/g2c","mangle-raw-name");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
DEF(YevalSg2cYDmodule_separator,"eval/g2c","$module-separator");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
DEF(YevalSg2cYpp,"eval/g2c","pp");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
DEF(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
DEF(YevalSg2cYgenerate_c_module,"eval/g2c","generate-c-module");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSsystemYso_load,"goo/system","so-load");
DEF(YevalSg2cYgenerate_makefile,"eval/g2c","generate-makefile");
EXT(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
DEF(YevalSg2cYmodule_up_to_dateQ,"eval/g2c","module-up-to-date?");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YevalSoptimizeYanalyze_calls,"eval/optimize","analyze-calls");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
DEF(YevalSg2cYDlocal_suffix,"eval/g2c","$local-suffix");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooScolsScolYfab_into,"goo/cols/col","fab-into");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSioSwriteYwrite_type,"goo/io/write","write-type");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YOrev,"goo/boot","@rev");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
DEF(YevalSg2cYchar_buffer_as_string,"eval/g2c","char-buffer-as-string");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalStopYDD,"eval/top","$$");
DEF(YevalSg2cYDiep_marker,"eval/g2c","$iep-marker");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSg2cYgenerate_function_code,"eval/g2c","generate-function-code");
DEF(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_36);
DEFLIT(lit_414);
DEFLIT(lit_573);
DEFLIT(lit_191);
DEFLIT(lit_558);
DEFLIT(lit_345);
DEFLIT(lit_539);
DEFLIT(lit_270);
DEFLIT(lit_478);
DEFLIT(lit_481);
DEFLIT(lit_606);
DEFLIT(lit_193);
DEFLIT(lit_397);
DEFLIT(lit_247);
DEFLIT(lit_570);
DEFLIT(lit_285);
DEFLIT(lit_205);
DEFLIT(lit_546);
DEFLIT(lit_294);
DEFLIT(lit_162);
DEFLIT(lit_597);
DEFLIT(lit_596);
DEFLIT(lit_45);
DEFLIT(lit_580);
DEFLIT(lit_396);
DEFLIT(lit_551);
DEFLIT(lit_107);
DEFLIT(lit_8);
DEFLIT(lit_136);
DEFLIT(lit_284);
DEFLIT(lit_644);
DEFLIT(lit_520);
DEFLIT(lit_48);
DEFLIT(lit_594);
DEFLIT(lit_230);
DEFLIT(lit_174);
DEFLIT(lit_457);
DEFLIT(lit_529);
DEFLIT(lit_307);
DEFLIT(lit_381);
DEFLIT(lit_566);
DEFLIT(lit_161);
DEFLIT(lit_593);
DEFLIT(lit_95);
DEFLIT(lit_347);
DEFLIT(lit_454);
DEFLIT(lit_62);
DEFLIT(lit_490);
DEFLIT(lit_253);
DEFLIT(lit_86);
DEFLIT(lit_475);
DEFLIT(lit_292);
DEFLIT(lit_485);
DEFLIT(lit_592);
DEFLIT(lit_547);
DEFLIT(lit_84);
DEFLIT(lit_571);
DEFLIT(lit_449);
DEFLIT(lit_94);
DEFLIT(lit_356);
DEFLIT(lit_218);
DEFLIT(lit_160);
DEFLIT(lit_80);
DEFLIT(lit_380);
DEFLIT(lit_250);
DEFLIT(lit_499);
DEFLIT(lit_503);
DEFLIT(lit_135);
DEFLIT(lit_146);
DEFLIT(lit_283);
DEFLIT(lit_455);
DEFLIT(lit_171);
DEFLIT(lit_363);
DEFLIT(lit_52);
DEFLIT(lit_134);
DEFLIT(lit_83);
DEFLIT(lit_34);
DEFLIT(lit_132);
DEFLIT(lit_323);
DEFLIT(lit_255);
DEFLIT(lit_159);
DEFLIT(lit_595);
DEFLIT(lit_19);
DEFLIT(lit_91);
DEFLIT(lit_342);
DEFLIT(lit_287);
DEFLIT(lit_278);
DEFLIT(lit_362);
DEFLIT(lit_619);
DEFLIT(lit_271);
DEFLIT(lit_167);
DEFLIT(lit_168);
DEFLIT(lit_488);
DEFLIT(lit_177);
DEFLIT(lit_163);
DEFLIT(lit_533);
DEFLIT(lit_559);
DEFLIT(lit_61);
DEFLIT(lit_377);
DEFLIT(lit_49);
DEFLIT(lit_378);
DEFLIT(lit_211);
DEFLIT(lit_635);
DEFLIT(lit_361);
DEFLIT(lit_437);
DEFLIT(lit_72);
DEFLIT(lit_231);
DEFLIT(lit_355);
DEFLIT(lit_330);
DEFLIT(lit_615);
DEFLIT(lit_574);
DEFLIT(lit_120);
DEFLIT(lit_576);
DEFLIT(lit_42);
DEFLIT(lit_465);
DEFLIT(lit_607);
DEFLIT(lit_81);
DEFLIT(lit_647);
DEFLIT(lit_187);
DEFLIT(lit_329);
DEFLIT(lit_129);
DEFLIT(lit_0);
DEFLIT(lit_555);
DEFLIT(lit_408);
DEFLIT(lit_494);
DEFLIT(lit_79);
DEFLIT(lit_611);
DEFLIT(lit_487);
DEFLIT(lit_281);
DEFLIT(lit_432);
DEFLIT(lit_640);
DEFLIT(lit_154);
DEFLIT(lit_296);
DEFLIT(lit_513);
DEFLIT(lit_360);
DEFLIT(lit_549);
DEFLIT(lit_334);
DEFLIT(lit_543);
DEFLIT(lit_59);
DEFLIT(lit_89);
DEFLIT(lit_263);
DEFLIT(lit_641);
DEFLIT(lit_153);
DEFLIT(lit_149);
DEFLIT(lit_532);
DEFLIT(lit_624);
DEFLIT(lit_277);
DEFLIT(lit_176);
DEFLIT(lit_173);
DEFLIT(lit_261);
DEFLIT(lit_210);
DEFLIT(lit_525);
DEFLIT(lit_82);
DEFLIT(lit_31);
DEFLIT(lit_387);
DEFLIT(lit_610);
DEFLIT(lit_71);
DEFLIT(lit_293);
DEFLIT(lit_272);
DEFLIT(lit_204);
DEFLIT(lit_621);
DEFLIT(lit_216);
DEFLIT(lit_448);
DEFLIT(lit_139);
DEFLIT(lit_425);
DEFLIT(lit_288);
DEFLIT(lit_103);
DEFLIT(lit_508);
DEFLIT(lit_394);
DEFLIT(lit_126);
DEFLIT(lit_30);
DEFLIT(lit_170);
DEFLIT(lit_439);
DEFLIT(lit_608);
DEFLIT(lit_243);
DEFLIT(lit_446);
DEFLIT(lit_138);
DEFLIT(lit_315);
DEFLIT(lit_233);
DEFLIT(lit_639);
DEFLIT(lit_11);
DEFLIT(lit_195);
DEFLIT(lit_583);
DEFLIT(lit_386);
DEFLIT(lit_344);
DEFLIT(lit_491);
DEFLIT(lit_581);
DEFLIT(lit_428);
DEFLIT(lit_235);
DEFLIT(lit_349);
DEFLIT(lit_150);
DEFLIT(lit_246);
DEFLIT(lit_351);
DEFLIT(lit_141);
DEFLIT(lit_251);
DEFLIT(lit_370);
DEFLIT(lit_443);
DEFLIT(lit_501);
DEFLIT(lit_222);
DEFLIT(lit_633);
DEFLIT(lit_254);
DEFLIT(lit_40);
DEFLIT(lit_424);
DEFLIT(lit_97);
DEFLIT(lit_586);
DEFLIT(lit_58);
DEFLIT(lit_556);
DEFLIT(lit_12);
DEFLIT(lit_346);
DEFLIT(lit_464);
DEFLIT(lit_130);
DEFLIT(lit_365);
DEFLIT(lit_85);
DEFLIT(lit_534);
DEFLIT(lit_209);
DEFLIT(lit_179);
DEFLIT(lit_226);
DEFLIT(lit_301);
DEFLIT(lit_166);
DEFLIT(lit_518);
DEFLIT(lit_202);
DEFLIT(lit_418);
DEFLIT(lit_324);
DEFLIT(lit_560);
DEFLIT(lit_306);
DEFLIT(lit_127);
DEFLIT(lit_630);
DEFLIT(lit_406);
DEFLIT(lit_203);
DEFLIT(lit_498);
DEFLIT(lit_497);
DEFLIT(lit_535);
DEFLIT(lit_392);
DEFLIT(lit_28);
DEFLIT(lit_6);
DEFLIT(lit_260);
DEFLIT(lit_493);
DEFLIT(lit_569);
DEFLIT(lit_567);
DEFLIT(lit_371);
DEFLIT(lit_319);
DEFLIT(lit_617);
DEFLIT(lit_124);
DEFLIT(lit_510);
DEFLIT(lit_375);
DEFLIT(lit_422);
DEFLIT(lit_194);
DEFLIT(lit_376);
DEFLIT(lit_601);
DEFLIT(lit_404);
DEFLIT(lit_420);
DEFLIT(lit_410);
DEFLIT(lit_249);
DEFLIT(lit_217);
DEFLIT(lit_186);
DEFLIT(lit_515);
DEFLIT(lit_229);
DEFLIT(lit_519);
DEFLIT(lit_220);
DEFLIT(lit_550);
DEFLIT(lit_123);
DEFLIT(lit_557);
DEFLIT(lit_536);
DEFLIT(lit_638);
DEFLIT(lit_541);
DEFLIT(lit_403);
DEFLIT(lit_435);
DEFLIT(lit_286);
DEFLIT(lit_322);
DEFLIT(lit_172);
DEFLIT(lit_57);
DEFLIT(lit_232);
DEFLIT(lit_632);
DEFLIT(lit_333);
DEFLIT(lit_523);
DEFLIT(lit_423);
DEFLIT(lit_320);
DEFLIT(lit_234);
DEFLIT(lit_238);
DEFLIT(lit_114);
DEFLIT(lit_275);
DEFLIT(lit_274);
DEFLIT(lit_328);
DEFLIT(lit_636);
DEFLIT(lit_223);
DEFLIT(lit_316);
DEFLIT(lit_438);
DEFLIT(lit_588);
DEFLIT(lit_76);
DEFLIT(lit_579);
DEFLIT(lit_447);
DEFLIT(lit_522);
DEFLIT(lit_385);
DEFLIT(lit_335);
DEFLIT(lit_96);
DEFLIT(lit_388);
DEFLIT(lit_374);
DEFLIT(lit_389);
DEFLIT(lit_117);
DEFLIT(lit_364);
DEFLIT(lit_309);
DEFLIT(lit_383);
DEFLIT(lit_631);
DEFLIT(lit_456);
DEFLIT(lit_60);
DEFLIT(lit_131);
DEFLIT(lit_379);
DEFLIT(lit_297);
DEFLIT(lit_479);
DEFLIT(lit_90);
DEFLIT(lit_119);
DEFLIT(lit_492);
DEFLIT(lit_598);
DEFLIT(lit_582);
DEFLIT(lit_17);
DEFLIT(lit_245);
DEFLIT(lit_587);
DEFLIT(lit_242);
DEFLIT(lit_634);
DEFLIT(lit_412);
DEFLIT(lit_20);
DEFLIT(lit_343);
DEFLIT(lit_98);
DEFLIT(lit_496);
DEFLIT(lit_87);
DEFLIT(lit_572);
DEFLIT(lit_585);
DEFLIT(lit_431);
DEFLIT(lit_148);
DEFLIT(lit_54);
DEFLIT(lit_318);
DEFLIT(lit_224);
DEFLIT(lit_22);
DEFLIT(lit_39);
DEFLIT(lit_584);
DEFLIT(lit_29);
DEFLIT(lit_289);
DEFLIT(lit_442);
DEFLIT(lit_262);
DEFLIT(lit_199);
DEFLIT(lit_440);
DEFLIT(lit_321);
DEFLIT(lit_213);
DEFLIT(lit_92);
DEFLIT(lit_516);
DEFLIT(lit_407);
DEFLIT(lit_486);
DEFLIT(lit_264);
DEFLIT(lit_69);
DEFLIT(lit_200);
DEFLIT(lit_626);
DEFLIT(lit_507);
DEFLIT(lit_75);
DEFLIT(lit_589);
DEFLIT(lit_482);
DEFLIT(lit_239);
DEFLIT(lit_15);
DEFLIT(lit_185);
DEFLIT(lit_3);
DEFLIT(lit_258);
DEFLIT(lit_474);
DEFLIT(lit_391);
DEFLIT(lit_629);
DEFLIT(lit_279);
DEFLIT(lit_327);
DEFLIT(lit_268);
DEFLIT(lit_151);
DEFLIT(lit_314);
DEFLIT(lit_542);
DEFLIT(lit_145);
DEFLIT(lit_471);
DEFLIT(lit_182);
DEFLIT(lit_552);
DEFLIT(lit_421);
DEFLIT(lit_10);
DEFLIT(lit_382);
DEFLIT(lit_313);
DEFLIT(lit_506);
DEFLIT(lit_110);
DEFLIT(lit_578);
DEFLIT(lit_623);
DEFLIT(lit_480);
DEFLIT(lit_51);
DEFLIT(lit_521);
DEFLIT(lit_112);
DEFLIT(lit_441);
DEFLIT(lit_93);
DEFLIT(lit_405);
DEFLIT(lit_128);
DEFLIT(lit_625);
DEFLIT(lit_165);
DEFLIT(lit_577);
DEFLIT(lit_402);
DEFLIT(lit_433);
DEFLIT(lit_50);
DEFLIT(lit_530);
DEFLIT(lit_468);
DEFLIT(lit_524);
DEFLIT(lit_181);
DEFLIT(lit_540);
DEFLIT(lit_637);
DEFLIT(lit_147);
DEFLIT(lit_401);
DEFLIT(lit_511);
DEFLIT(lit_27);
DEFLIT(lit_326);
DEFLIT(lit_56);
DEFLIT(lit_463);
DEFLIT(lit_208);
DEFLIT(lit_228);
DEFLIT(lit_118);
DEFLIT(lit_531);
DEFLIT(lit_613);
DEFLIT(lit_400);
DEFLIT(lit_219);
DEFLIT(lit_43);
DEFLIT(lit_476);
DEFLIT(lit_643);
DEFLIT(lit_265);
DEFLIT(lit_527);
DEFLIT(lit_500);
DEFLIT(lit_38);
DEFLIT(lit_201);
DEFLIT(lit_267);
DEFLIT(lit_436);
DEFLIT(lit_461);
DEFLIT(lit_310);
DEFLIT(lit_273);
DEFLIT(lit_180);
DEFLIT(lit_609);
DEFLIT(lit_225);
DEFLIT(lit_622);
DEFLIT(lit_473);
DEFLIT(lit_25);
DEFLIT(lit_280);
DEFLIT(lit_469);
DEFLIT(lit_67);
DEFLIT(lit_336);
DEFLIT(lit_111);
DEFLIT(lit_538);
DEFLIT(lit_409);
DEFLIT(lit_317);
DEFLIT(lit_504);
DEFLIT(lit_4);
DEFLIT(lit_366);
DEFLIT(lit_502);
DEFLIT(lit_453);
DEFLIT(lit_451);
DEFLIT(lit_37);
DEFLIT(lit_512);
DEFLIT(lit_122);
DEFLIT(lit_411);
DEFLIT(lit_18);
DEFLIT(lit_47);
DEFLIT(lit_489);
DEFLIT(lit_645);
DEFLIT(lit_215);
DEFLIT(lit_614);
DEFLIT(lit_190);
DEFLIT(lit_70);
DEFLIT(lit_78);
DEFLIT(lit_175);
DEFLIT(lit_73);
DEFLIT(lit_66);
DEFLIT(lit_158);
DEFLIT(lit_650);
DEFLIT(lit_256);
DEFLIT(lit_212);
DEFLIT(lit_113);
DEFLIT(lit_419);
DEFLIT(lit_517);
DEFLIT(lit_348);
DEFLIT(lit_340);
DEFLIT(lit_157);
DEFLIT(lit_198);
DEFLIT(lit_214);
DEFLIT(lit_628);
DEFLIT(lit_526);
DEFLIT(lit_472);
DEFLIT(lit_495);
DEFLIT(lit_373);
DEFLIT(lit_339);
DEFLIT(lit_156);
DEFLIT(lit_367);
DEFLIT(lit_399);
DEFLIT(lit_227);
DEFLIT(lit_452);
DEFLIT(lit_108);
DEFLIT(lit_429);
DEFLIT(lit_444);
DEFLIT(lit_467);
DEFLIT(lit_338);
DEFLIT(lit_155);
DEFLIT(lit_23);
DEFLIT(lit_648);
DEFLIT(lit_563);
DEFLIT(lit_528);
DEFLIT(lit_620);
DEFLIT(lit_466);
DEFLIT(lit_393);
DEFLIT(lit_483);
DEFLIT(lit_26);
DEFLIT(lit_240);
DEFLIT(lit_65);
DEFLIT(lit_337);
DEFLIT(lit_257);
DEFLIT(lit_450);
DEFLIT(lit_106);
DEFLIT(lit_514);
DEFLIT(lit_221);
DEFLIT(lit_74);
DEFLIT(lit_196);
DEFLIT(lit_35);
DEFLIT(lit_237);
DEFLIT(lit_55);
DEFLIT(lit_618);
DEFLIT(lit_359);
DEFLIT(lit_358);
DEFLIT(lit_353);
DEFLIT(lit_651);
DEFLIT(lit_553);
DEFLIT(lit_470);
DEFLIT(lit_105);
DEFLIT(lit_312);
DEFLIT(lit_545);
DEFLIT(lit_192);
DEFLIT(lit_445);
DEFLIT(lit_116);
DEFLIT(lit_426);
DEFLIT(lit_357);
DEFLIT(lit_537);
DEFLIT(lit_269);
DEFLIT(lit_7);
DEFLIT(lit_568);
DEFLIT(lit_331);
DEFLIT(lit_458);
DEFLIT(lit_603);
DEFLIT(lit_266);
DEFLIT(lit_599);
DEFLIT(lit_41);
DEFLIT(lit_509);
DEFLIT(lit_352);
DEFLIT(lit_341);
DEFLIT(lit_369);
DEFLIT(lit_565);
DEFLIT(lit_142);
DEFLIT(lit_206);
DEFLIT(lit_602);
DEFLIT(lit_290);
DEFLIT(lit_197);
DEFLIT(lit_416);
DEFLIT(lit_9);
DEFLIT(lit_460);
DEFLIT(lit_616);
DEFLIT(lit_575);
DEFLIT(lit_305);
DEFLIT(lit_152);
DEFLIT(lit_189);
DEFLIT(lit_248);
DEFLIT(lit_2);
DEFLIT(lit_291);
DEFLIT(lit_137);
DEFLIT(lit_104);
DEFLIT(lit_627);
DEFLIT(lit_350);
DEFLIT(lit_300);
DEFLIT(lit_241);
DEFLIT(lit_44);
DEFLIT(lit_304);
DEFLIT(lit_68);
DEFLIT(lit_354);
DEFLIT(lit_77);
DEFLIT(lit_325);
DEFLIT(lit_184);
DEFLIT(lit_115);
DEFLIT(lit_544);
DEFLIT(lit_282);
DEFLIT(lit_236);
DEFLIT(lit_99);
DEFLIT(lit_302);
DEFLIT(lit_372);
DEFLIT(lit_144);
DEFLIT(lit_590);
DEFLIT(lit_600);
DEFLIT(lit_646);
DEFLIT(lit_477);
DEFLIT(lit_427);
DEFLIT(lit_64);
DEFLIT(lit_244);
DEFLIT(lit_562);
DEFLIT(lit_430);
DEFLIT(lit_101);
DEFLIT(lit_505);
DEFLIT(lit_1);
DEFLIT(lit_5);
DEFLIT(lit_14);
DEFLIT(lit_395);
DEFLIT(lit_259);
DEFLIT(lit_125);
DEFLIT(lit_16);
DEFLIT(lit_612);
DEFLIT(lit_311);
DEFLIT(lit_178);
DEFLIT(lit_188);
DEFLIT(lit_564);
DEFLIT(lit_143);
DEFLIT(lit_100);
DEFLIT(lit_169);
DEFLIT(lit_332);
DEFLIT(lit_434);
DEFLIT(lit_484);
DEFLIT(lit_561);
DEFLIT(lit_398);
DEFLIT(lit_415);
DEFLIT(lit_459);
DEFLIT(lit_642);
DEFLIT(lit_462);
DEFLIT(lit_605);
DEFLIT(lit_299);
DEFLIT(lit_183);
DEFLIT(lit_591);
DEFLIT(lit_140);
DEFLIT(lit_53);
DEFLIT(lit_295);
DEFLIT(lit_649);
DEFLIT(lit_121);
DEFLIT(lit_46);
DEFLIT(lit_298);
DEFLIT(lit_252);
DEFLIT(lit_308);
DEFLIT(lit_164);
DEFLIT(lit_303);
DEFLIT(lit_368);
DEFLIT(lit_384);
DEFLIT(lit_417);
DEFLIT(lit_21);
DEFLIT(lit_63);
DEFLIT(lit_548);
DEFLIT(lit_88);
DEFLIT(lit_554);
DEFLIT(lit_390);
DEFLIT(lit_33);
DEFLIT(lit_32);
DEFLIT(lit_133);
DEFLIT(lit_207);
DEFLIT(lit_102);
DEFLIT(lit_413);
DEFLIT(lit_604);
DEFLIT(lit_13);
DEFLIT(lit_24);
DEFLIT(lit_109);
DEFLIT(lit_276);

/* FUNCTIONS: */

LOCFOR(fun_module_loader_appname_0);
LOCFOR(fun_module_loader_app_modname_1);
LOCFOR(fun_module_src_file_2);
LOCFOR(fun_module_src_file_setter_3);
LOCFOR(fun_module_mtime_4);
LOCFOR(fun_module_mtime_setter_5);
LOCFOR(fun_module_loader_module_type_6);
LOCFOR(fun_7);
LOCFOR(fun_8);
LOCFOR(fun_9);
LOCFOR(fun_10);
LOCFOR(fun_11);
LOCFOR(fun_load_module_12);
FUNFOR(YevalSg2cYmodule_up_to_dateQ);
LOCFOR(fun_14);
LOCFOR(fun_15);
FUNFOR(YevalSg2cYpurge_outdated_modules);
FUNFOR(YevalSg2cYg2c_def_app);
FUNFOR(YevalSg2cYg2c_build_app);
FUNFOR(YevalSg2cYg2c_test);
LOCFOR(fun_20);
LOCFOR(fun_21);
LOCFOR(fun_22);
LOCFOR(fun_23);
LOCFOR(fun_24);
LOCFOR(fun_25);
LOCFOR(fun_g2c_ast_26);
LOCFOR(fun_g2c_exp_27);
LOCFOR(fun_compile_load_28);
LOCFOR(fun_g2c_eval_29);
LOCFOR(fun_g2c_eval_30);
LOCFOR(fun_g2c_top_31);
LOCFOR(fun_g2c_clean_32);
LOCFOR(fun_compute_ast_33);
LOCFOR(fun_compute_program_34);
LOCFOR(fun_generate_c_module_35);
LOCFOR(fun_36);
LOCFOR(fun_37);
LOCFOR(fun_generate_c_application_38);
LOCFOR(fun_x_2468_39);
LOCFOR(fun_40);
LOCFOR(fun_41);
LOCFOR(fun_42);
LOCFOR(fun_43);
LOCFOR(fun_put_obj_44);
LOCFOR(fun_45);
LOCFOR(fun_46);
LOCFOR(fun_47);
LOCFOR(fun_48);
LOCFOR(fun_49);
LOCFOR(fun_50);
LOCFOR(fun_51);
LOCFOR(fun_generate_makefile_52);
LOCFOR(fun_pp_53);
LOCFOR(fun_generate_header_54);
LOCFOR(fun_generate_trailer_55);
LOCFOR(fun_56);
LOCFOR(fun_generate_global_environment_57);
LOCFOR(fun_generate_global_binding_58);
FUNFOR(YevalSg2cYchar_buffer_as_string);
LOCFOR(fun_mangle_string_literal_60);
LOCFOR(fun_mangle_string_literal_61);
LOCFOR(fun_process_integer_62);
LOCFOR(fun_mangle_integer_63);
FUNFOR(YevalSg2cYmangler_reset);
FUNFOR(YevalSg2cYmangle_name_into);
LOCFOR(fun_mangle_raw_name_66);
LOCFOR(fun_mangle_raw_name_67);
LOCFOR(fun_mangle_local_name_68);
LOCFOR(fun_mangle_local_name_69);
FUNFOR(YevalSg2cYbuf_cat2X);
LOCFOR(fun_mangle_module_into_71);
LOCFOR(fun_mangle_global_name_72);
LOCFOR(fun_mangle_global_name_73);
FUNFOR(YevalSg2cYmangle_boot_name);
FUNFOR(YevalSg2cYmangle_quotation_name);
LOCFOR(fun_mangle_binding_76);
FUNFOR(YevalSg2cYmangle_local_marked_name);
LOCFOR(fun_mangle_binding_78);
LOCFOR(fun_mangle_binding_79);
LOCFOR(fun_x_2512_80);
LOCFOR(fun_81);
LOCFOR(fun_82);
LOCFOR(fun_x_2516_83);
LOCFOR(fun_84);
LOCFOR(fun_85);
LOCFOR(fun_x_2520_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_gen_result_89);
LOCFOR(fun_gen_depth_90);
LOCFOR(fun_x_2527_91);
LOCFOR(fun_92);
LOCFOR(fun_93);
LOCFOR(fun_x_2531_94);
LOCFOR(fun_95);
LOCFOR(fun_96);
LOCFOR(fun_x_2535_97);
LOCFOR(fun_98);
LOCFOR(fun_99);
LOCFOR(fun_generate_quotation_forwards_100);
LOCFOR(fun_generate_quotations_101);
LOCFOR(fun_false_name_102);
LOCFOR(fun_generate_quotation_103);
LOCFOR(fun_generate_quotation_104);
LOCFOR(fun_105);
LOCFOR(fun_generate_quotation_106);
LOCFOR(fun_generate_quotation_107);
LOCFOR(fun_generate_quotation_108);
LOCFOR(fun_109);
LOCFOR(fun_float_to_c_string_110);
LOCFOR(fun_generate_quotation_111);
LOCFOR(fun_generate_quotation_112);
LOCFOR(fun_generate_quotation_113);
LOCFOR(fun_generate_quotation_114);
LOCFOR(fun_generate_quotation_115);
FUNFOR(YevalSg2cYbinding_Gc);
LOCFOR(fun_reference_Gc_117);
LOCFOR(fun_reference_Gc_118);
LOCFOR(fun_to_c_119);
LOCFOR(fun_to_c_120);
LOCFOR(fun_gen_ref_121);
LOCFOR(fun_gen_ref_122);
LOCFOR(fun_gen_ref_123);
LOCFOR(fun_gen_ref_124);
LOCFOR(fun_gen_ref_125);
LOCFOR(fun_gen_ref_126);
LOCFOR(fun_gen_ref_127);
LOCFOR(fun_gen_ref_128);
LOCFOR(fun_gen_ref_129);
LOCFOR(fun_to_c_130);
LOCFOR(fun_to_c_131);
LOCFOR(fun_to_c_132);
LOCFOR(fun_to_c_133);
LOCFOR(fun_to_c_134);
LOCFOR(fun_bbQ_135);
LOCFOR(fun_bbQ_136);
LOCFOR(fun_bbQ_137);
LOCFOR(fun_to_c_138);
LOCFOR(fun_139);
LOCFOR(fun_to_c_140);
LOCFOR(fun_141);
LOCFOR(fun_142);
LOCFOR(fun_to_c_143);
LOCFOR(fun_to_c_144);
LOCFOR(fun_to_c_145);
LOCFOR(fun_146);
LOCFOR(fun_147);
LOCFOR(fun_to_c_148);
LOCFOR(fun_to_c_149);
LOCFOR(fun_to_c_150);
LOCFOR(fun_to_c_151);
LOCFOR(fun_to_c_152);
LOCFOR(fun_to_c_153);
LOCFOR(fun_154);
LOCFOR(fun_155);
LOCFOR(fun_to_c_156);
LOCFOR(fun_157);
LOCFOR(fun_to_c_158);
LOCFOR(fun_funshell_to_c_159);
LOCFOR(fun_160);
LOCFOR(fun_funinit_to_c_161);
LOCFOR(fun_to_c_162);
LOCFOR(fun_out_list_builder_163);
LOCFOR(fun_164);
LOCFOR(fun_gen_fab_list_165);
LOCFOR(fun_generate_function_specs_166);
LOCFOR(fun_167);
LOCFOR(fun_to_c_168);
LOCFOR(fun_to_c_169);
LOCFOR(fun_generate_function_forwards_170);
LOCFOR(fun_171);
LOCFOR(fun_172);
LOCFOR(fun_generate_function_forward_173);
LOCFOR(fun_generate_function_binding_174);
LOCFOR(fun_generate_function_forward_175);
LOCFOR(fun_176);
LOCFOR(fun_generate_function_bodies_177);
LOCFOR(fun_178);
LOCFOR(fun_generate_functions_179);
LOCFOR(fun_generate_closure_structure_180);
LOCFOR(fun_generate_function_body_reference_181);
LOCFOR(fun_generate_return_182);
LOCFOR(fun_generate_return_183);
LOCFOR(fun_primitive_inlinableQ_184);
LOCFOR(fun_185);
LOCFOR(fun_186);
LOCFOR(fun_generate_function_code_187);
LOCFOR(fun_dispatcherQ_188);
LOCFOR(fun_189);
LOCFOR(fun_190);
LOCFOR(fun_191);
LOCFOR(fun_generate_function_code_192);
LOCFOR(fun_generate_local_temporaries_193);
LOCFOR(fun_generate_registers_194);
LOCFOR(fun_module_info_name_195);
LOCFOR(fun_maybe_declare_196);
LOCFOR(fun_197);
FUNFOR(YevalSg2cYdeclare_imported_module_infos);
LOCFOR(fun_199);
LOCFOR(fun_200);
FUNFOR(YevalSg2cYgenerate_module_info);
LOCFOR(fun_module_init_name_202);
LOCFOR(fun_module_init_decl_203);
LOCFOR(fun_generate_module_init_204);
LOCFOR(fun_generate_main_205);
extern P YevalSg2cY___main_0___ ();
extern P YevalSg2cY___main_1___ ();
extern P YevalSg2cY___main_2___ ();
extern P YevalSg2cY___main_3___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_module_loader_appname_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_appname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_app_modname_1) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_loader_app_modname));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_src_file_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_src_file));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_mtime_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSg2cYmodule_mtime));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_loader_module_type_6) {
  P loader_;
LINK_STACK();
  ARG(loader_, 0);
UNLINK_STACK();
  RET(VARREF(YevalSg2cYLg2c_moduleG));
}

FUNCODEDEF(fun_7) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_8) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_9) {
  P x_2461F9689;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_2461F9689 = DYNREF(YevalSg2cYTdefinitionsT);
  T2 = FUNFAB(fun_7,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_8,1,x_2461F9689);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_10) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_11) {
  P name_;
  P tmpF9693;
  P src_fileF9692;
  P build_fileF9691;
  P fileF9690;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(name_, 0);
  T10 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF9690 = T10;
  T9 = CALL2(1,VARREF(YgooSsystemYadd_build_path),FREEREF(0),fileF9690);
  build_fileF9691 = T9;
  T8 = CALL1(1,VARREF(YgooSsystemYadd_src_path),fileF9690);
  src_fileF9692 = T8;
  T6 = CALL1(1,VARREF(YgooSsystemYfile_existsQ),build_fileF9691);
  T5 = CALL1(1,VARREF(Ynot),T6);
  tmpF9693 = T5;
  if (tmpF9693 != YPfalse) {
    T1 = tmpF9693;
  } else {
    T3 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF9692);
    T4 = CALL1(1,VARREF(YgooSsystemYfile_mtime),build_fileF9691);
    T2 = CALL2(1,VARREF(YgooSmagYGE),T3,T4);
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSsystemYfile_copy),src_fileF9692,build_fileF9691);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_load_module_12) {
  P loader_,name_;
  P out_portF9703;
  P prgF9702;
  P astF9701;
  P out_fileF9700;
  P appnameF9699;
  P src_fileF9698;
  P fileF9697;
  P envF9696;
  P keepmodQF9695;
  P modF9694;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(loader_, 0);
  ARG(name_, 1);
  T20 = CALL2(1,VARREF(YevalSastYfab_g2c_module),loader_,name_);
  modF9694 = T20;
  keepmodQF9695 = YPfalse;
  T19 = CALL1(1,VARREF(YevalSastYmodule_target_environment),modF9694);
  envF9696 = T19;
  T18 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  fileF9697 = T18;
  T17 = CALL1(1,VARREF(YgooSsystemYgoo_filename),fileF9697);
  T16 = CALL1(1,VARREF(YgooSsystemYadd_src_path),T17);
  src_fileF9698 = T16;
  T15 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF9699 = T15;
  T14 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF9697);
  T13 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF9699,T14);
  out_fileF9700 = T13;
  CALL2(1,VARREF(YevalSg2cYmodule_src_file_setter),src_fileF9698,modF9694);
  T0 = CALL1(1,VARREF(YgooSsystemYfile_mtime),src_fileF9698);
  CALL2(1,VARREF(YevalSg2cYmodule_mtime_setter),T0,modF9694);
  T1 = (P)YPsu(LITREF(lit_18));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T12 = CALL2(1,VARREF(YevalSg2cYcompute_ast),src_fileF9698,envF9696);
  astF9701 = T12;
  T11 = CALL2(1,VARREF(YevalSg2cYcompute_program),astF9701,envF9696);
  prgF9702 = T11;
  T2 = (P)YPsu(LITREF(lit_19));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T3 = CALL1(1,VARREF(YgooSsystemYparent_directory),out_fileF9700);
  CALL1(1,VARREF(YgooSsystemYprobe_directory),T3);
  out_portF9703 = YPfalse;
  out_portF9703 = BOXFAB(out_portF9703);
  T6 = FUNFAB(fun_9,5,out_portF9703,out_fileF9700,prgF9702,astF9701,modF9694);
  T7 = FUNFAB(fun_10,1,out_portF9703);
  T5 = with_cleanup(T6,T7);
  T8 = FUNFAB(fun_11,1,appnameF9699);
  T9 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),modF9694);
  CALL2(1,VARREF(YgooSmacrosYdo),T8,T9);
  T10 = (P)YPsu(LITREF(lit_22));
  (P)YevalSg2cYPprint_cpu_usage(T10);
UNLINK_STACK();
  RET(modF9694);
}

FUNCODEDEF(YevalSg2cYmodule_up_to_dateQ) {
  P mod_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(mod_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_mtime),mod_);
  T3 = CALL1(1,VARREF(YevalSg2cYmodule_src_file),mod_);
  T2 = CALL1(1,VARREF(YgooSsystemYfile_mtime),T3);
  T0 = CALL2(1,VARREF(YgooSmagYGE),T1,T2);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_14) {
  P mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T2 = CALL1(1,VARREF(YevalSg2cYmodule_up_to_dateQ),mod_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = BOXGET(FREEREF(0));
    T6 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,T6);
    T3 = BOXPUT(T4,FREEREF(0));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_15) {
  P name_;
  P x_2462F9704;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  x_2462F9704 = VARREF(YgooSioSportYout);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2462F9704,name_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2462F9704,LITREF(lit_29));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYpurge_outdated_modules) {
  P loader_;
  P changedF9705;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(loader_, 0);
  changedF9705 = Ynil;
  changedF9705 = BOXFAB(changedF9705);
  T1 = FUNFAB(fun_14,1,changedF9705);
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T1,loader_);
  T2 = fun_15;
  T3 = BOXGET(changedF9705);
  CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
  T5 = BOXGET(changedF9705);
  T4 = CALL2(1,VARREF(YevalSastYremove_modules_by_nameX),loader_,T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(YevalSg2cYg2c_def_app) {
  P appname_,modname_;
  P T0;
LINK_STACK();
  ARG(appname_, 0);
  ARG(modname_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),appname_,VARREF(YevalSg2cYmodule_loader_app_modname),modname_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYg2c_build_app) {
  P loader_;
  P modF9706;
  P T0,T1;
LINK_STACK();
  ARG(loader_, 0);
  CALL1(1,VARREF(YevalSg2cYpurge_outdated_modules),loader_);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_loader_app_modname),loader_);
  T0 = CALL2(1,VARREF(YevalSastYprobe_module),loader_,T1);
  modF9706 = T0;
  CALL2(1,VARREF(YgooSioSportYputs),VARREF(YgooSioSportYout),LITREF(lit_34));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),VARREF(YevalSastYreport_undefined_global_bindings),loader_);
  CALL2(1,VARREF(YevalSg2cYgenerate_c_application),loader_,modF9706);
  CALL1(1,VARREF(YevalSg2cYgenerate_makefile),loader_);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(YevalSg2cYg2c_test) {
  P x_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YgooSmathYto_str),x_);
  T2 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_37),T3);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),T2,LITREF(lit_38));
  T0 = VARSET(YevalSg2cYTg2c_appT,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_20) {
  P T0,T1,T2;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(0));
  DYNSET(YevalSg2cYTdefinitionsT,T0);
  T2 = BOXGET(FREEREF(1));
  T1 = CALL4(1,VARREF(YevalSg2cYgenerate_c_module),T2,FREEREF(2),FREEREF(0),FREEREF(3));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_21) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdefinitionsT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_22) {
  P x_2464F9707;
  P T0,T1,T2;
LINK_STACK();
  DYNSET(YevalSg2cYTdynamic_linkingQT,YPtrue);
  x_2464F9707 = DYNREF(YevalSg2cYTdefinitionsT);
  T1 = FUNFAB(fun_20,4,FREEREF(0),FREEREF(1),FREEREF(2),FREEREF(3));
  T2 = FUNFAB(fun_21,1,x_2464F9707);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_23) {
  P T0;
LINK_STACK();
  T0 = DYNSET(YevalSg2cYTdynamic_linkingQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_24) {
  P x_2463F9708;
  P T0,T1,T2,T3;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  x_2463F9708 = DYNREF(YevalSg2cYTdynamic_linkingQT);
  T2 = FUNFAB(fun_22,4,FREEREF(2),FREEREF(0),FREEREF(3),FREEREF(4));
  T3 = FUNFAB(fun_23,1,x_2463F9708);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_25) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_ast_26) {
  P ast_,env_;
  P out_portF9714;
  P prgF9713;
  P out_fileF9712;
  P fileF9711;
  P nameF9710;
  P modF9709;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSastYenvironment_module),env_);
  modF9709 = T11;
  T8 = CALL0(1,VARREF(YgooSsystemYprocess_id));
  T10 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTtmp_file_counterT),YPint((P)1));
  T9 = DYNSET(YevalSg2cYTtmp_file_counterT,T10);
  T7 = CALL3(1,VARREF(YgooSconditionsYmsg_to_str),LITREF(lit_41),T8,T9);
  nameF9710 = T7;
  T6 = CALL1(1,VARREF(YgooSsystemYadd_tmp_path),nameF9710);
  fileF9711 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),fileF9711);
  out_fileF9712 = T5;
  T4 = CALL2(1,VARREF(YevalSg2cYcompute_program),ast_,env_);
  prgF9713 = T4;
  out_portF9714 = YPfalse;
  out_portF9714 = BOXFAB(out_portF9714);
  T2 = FUNFAB(fun_24,5,out_portF9714,out_fileF9712,prgF9713,ast_,modF9709);
  T3 = FUNFAB(fun_25,1,out_portF9714);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(fileF9711);
}

FUNCODEDEF(fun_g2c_exp_27) {
  P exp_,env_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),exp_,env_,YPfalse);
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_ast),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_compile_load_28) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),name_,VARREF(YgooSsystemYTc_extensionT));
  T0 = (P)YPsu(T1);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_46));
  T2 = (P)YPsu(T3);
  (P)YgooSsystemYPcompile(T0,T2);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),name_,LITREF(lit_47));
  T5 = (P)YPsu(T6);
  T4 = (P)YgooSsystemYPload(T5);
UNLINK_STACK();
  QRET(T4);
}

FUNCODEDEF(fun_g2c_eval_29) {
  P exp_,env_;
  P nameF9715;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_exp),exp_,env_);
  nameF9715 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF9715);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_eval_30) {
  P ast_,env_;
  P nameF9716;
  P T0,T1;
LINK_STACK();
  ARG(ast_, 0);
  ARG(env_, 1);
  T1 = CALL2(1,VARREF(YevalSg2cYg2c_ast),ast_,env_);
  nameF9716 = T1;
  T0 = CALL1(1,VARREF(YevalSg2cYcompile_load),nameF9716);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_top_31) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYg2c_build_app),VARREF(YevalSg2cYTg2c_appT));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_g2c_clean_32) {
  P T0;
LINK_STACK();
  T0 = CALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_54),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_compute_ast_33) {
  P filename_,ct_env_;
  P astF9718;
  P sexprF9717;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(filename_, 0);
  ARG(ct_env_, 1);
  T3 = CALL1(1,VARREF(YevalStopYread_file),filename_);
  sexprF9717 = T3;
  T0 = (P)YPsu(LITREF(lit_57));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T2 = CALL3(1,VARREF(YevalSastYobjectify_with_subtransaction),sexprF9717,ct_env_,YPfalse);
  astF9718 = T2;
  T1 = (P)YPsu(LITREF(lit_58));
  (P)YevalSg2cYPprint_cpu_usage(T1);
UNLINK_STACK();
  QRET(astF9718);
}

FUNCODEDEF(fun_compute_program_34) {
  P e_,env_;
  P fltF9723;
  P prgF9722;
  P lftF9721;
  P boxF9720;
  P anaF9719;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL2(1,VARREF(YevalSoptimizeYanalyze_calls),e_,env_);
  anaF9719 = T11;
  T0 = (P)YPsu(LITREF(lit_61));
  (P)YevalSg2cYPprint_cpu_usage(T0);
  T10 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),anaF9719);
  boxF9720 = T10;
  T1 = (P)YPsu(LITREF(lit_62));
  (P)YevalSg2cYPprint_cpu_usage(T1);
  T9 = CALL1(1,VARREF(YevalSast_linearizeYliftX),boxF9720);
  lftF9721 = T9;
  T2 = (P)YPsu(LITREF(lit_63));
  (P)YevalSg2cYPprint_cpu_usage(T2);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYextract_thingsX),lftF9721);
  prgF9722 = T8;
  T3 = (P)YPsu(LITREF(lit_64));
  (P)YevalSg2cYPprint_cpu_usage(T3);
  T7 = CALL3(1,VARREF(YevalSast_linearizeYclosurize_mainX),prgF9722,env_,YPint((P)50));
  fltF9723 = T7;
  T4 = (P)YPsu(LITREF(lit_65));
  (P)YevalSg2cYPprint_cpu_usage(T4);
  CALL1(1,VARREF(YevalSast_linearizeYgather_temporariesX),fltF9723);
  T5 = (P)YPsu(LITREF(lit_66));
  (P)YevalSg2cYPprint_cpu_usage(T5);
  CALL2(1,VARREF(YevalSast_linearizeYregister_allocateX),fltF9723,YPfalse);
  T6 = (P)YPsu(LITREF(lit_67));
  (P)YevalSg2cYPprint_cpu_usage(T6);
UNLINK_STACK();
  QRET(prgF9722);
}

FUNCODEDEF(fun_generate_c_module_35) {
  P out_,e_,prg_,mod_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  ARG(prg_, 2);
  ARG(mod_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YevalSg2cYgenerate_header),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_global_environment),out_,mod_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation_forwards),out_,T1);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_forwards),out_,T2);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),prg_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_bodies),out_,T3);
  T4 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T4 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSg2cYgenerate_module_info),out_,mod_);
  } else {
  }
  T6 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),prg_);
  CALL3(1,VARREF(YevalSg2cYgenerate_module_init),out_,mod_,T6);
  CALL1(1,VARREF(YevalSg2cYgenerate_trailer),out_);
UNLINK_STACK();
  QRET(prg_);
}

FUNCODEDEF(fun_36) {
  P T0,T1,T2,T3,T4;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T1 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_header),T1,FREEREF(2));
  T2 = BOXGET(FREEREF(0));
  CALL2(1,VARREF(YevalSg2cYgenerate_main),T2,FREEREF(3));
  T4 = BOXGET(FREEREF(0));
  T3 = CALL1(1,VARREF(YevalSg2cYgenerate_trailer),T4);
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_37) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_c_application_38) {
  P loader_,mod_;
  P out_portF9727;
  P out_nameF9726;
  P init_nameF9725;
  P appnameF9724;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  ARG(mod_, 1);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF9724 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF9724,LITREF(lit_72));
  init_nameF9725 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYc_filename),init_nameF9725);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF9724,T5);
  out_nameF9726 = T4;
  out_portF9727 = YPfalse;
  out_portF9727 = BOXFAB(out_portF9727);
  T2 = FUNFAB(fun_36,4,out_portF9727,out_nameF9726,appnameF9724,mod_);
  T3 = FUNFAB(fun_37,1,out_portF9727);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_x_2468_39) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_77),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_40) {
  P return_;
  P x_2467F9742;
  P x_2467F9741;
  P x_2467F9740;
  P x_2467F9739;
  P x_2467F9738;
  P x_2467F9737;
  P x_2467F9736;
  P x_2467F9735;
  P x_2467F9734;
  P x_2467F9733;
  P bodyF9732;
  P loaderF9731;
  P modF9730;
  P x_2467F9729;
  P x_2468F9728;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32;
LINK_STACK();
  ARG(return_, 0);
  T32 = FUNSHELL(0,fun_x_2468_39,2);
  x_2468F9728 = T32;
  FUNINIT(x_2468F9728, 2,FREEREF(0),return_);
  x_2467F9729 = FREEREF(0);
  modF9730 = YPfalse;
  loaderF9731 = YPfalse;
  bodyF9732 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2467F9729,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2467F9729,LITREF(lit_77),x_2468F9728);
    x_2467F9733 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2467F9733,x_2468F9728);
    x_2467F9734 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2467F9734,x_2468F9728);
    modF9730 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2467F9734);
    x_2467F9735 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2467F9735,x_2468F9728);
    loaderF9731 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2467F9735);
    x_2467F9736 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2467F9736,x_2468F9728);
    x_2467F9737 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2467F9737,x_2468F9728);
    T11 = CALL1(1,VARREF(Ytail),x_2467F9736);
    x_2467F9738 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2467F9738,x_2468F9728);
    T17 = CALL1(1,VARREF(Ytail),x_2467F9733);
    x_2467F9739 = T17;
    bodyF9732 = x_2467F9739;
    x_2467F9740 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2467F9740,x_2468F9728);
    x_2467F9741 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2467F9741,x_2468F9728);
    T7 = CALL1(1,VARREF(Ytail),x_2467F9740);
    x_2467F9742 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2467F9742,x_2468F9728);
  } else {
    T19 = CALL2(1,x_2468F9728,LITREF(lit_78),x_2467F9729);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_79));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_80));
  T28 = modF9730;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T26 = CALL2(1,VARREF(YgooSmacrosYcat),T27,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T29 = bodyF9732;
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T29,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T31 = loaderF9731;
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL4(1,VARREF(YgooSmacrosYcat),T21,T22,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

FUNCODEDEF(fun_41) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_40,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_42) {
  P i_;
  P x_2472F9743;
  P T0,T1;
LINK_STACK();
  ARG(i_, 0);
  T1 = BOXGET(FREEREF(0));
  x_2472F9743 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_2472F9743,LITREF(lit_93));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2472F9743,i_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2472F9743,LITREF(lit_94));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_43) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_42,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_includes),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_put_obj_44) {
  P name_;
  P x_2475F9744;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(name_, 0);
  T3 = BOXGET(FREEREF(0));
  x_2475F9744 = T3;
  CALL2(1,VARREF(YgooSioSportYputs),x_2475F9744,LITREF(lit_100));
  T1 = CALL1(1,VARREF(YevalSastYmodule_name_to_relpath),name_);
  T0 = CALL1(1,VARREF(YgooSsystemYobj_filename),T1);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2475F9744,T0);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2475F9744,LITREF(lit_101));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_45) {
  P name_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooScolsSseqYsuffixQ),name_,LITREF(lit_103));
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YgooStypesYlen),name_);
    T5 = CALL2(1,VARREF(YgooSmathY_),T6,YPint((P)2));
    T4 = CALL3(1,VARREF(YgooScolsSseqYsub),name_,YPint((P)0),T5);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLsymG),T4);
    T2 = CALL1(0,FREEREF(0),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_46) {
  P n_;
  P T0;
LINK_STACK();
  ARG(n_, 0);
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),n_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P mod_;
  P put_objF9745;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  T6 = FUNSHELL(1,fun_put_obj_44,1);
  put_objF9745 = T6;
  FUNINIT(put_objF9745, 1,FREEREF(0));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL1(0,put_objF9745,T0);
  T2 = FUNFAB(fun_45,1,put_objF9745);
  T4 = fun_46;
  T5 = CALL1(1,VARREF(YevalSastYmodule_uses_c_files),mod_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  T1 = CALL2(1,VARREF(YgooSmacrosYdo),T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_48) {
  P l_;
  P x_2479F9746;
  P T0,T1;
LINK_STACK();
  ARG(l_, 0);
  T1 = BOXGET(FREEREF(0));
  x_2479F9746 = T1;
  CALL2(1,VARREF(YgooSioSportYputs),x_2479F9746,LITREF(lit_112));
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2479F9746,l_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_49) {
  P mod_;
  P T0,T1,T2;
LINK_STACK();
  ARG(mod_, 0);
  T1 = FUNFAB(fun_48,1,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYmodule_uses_c_libraries),mod_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_50) {
  P x_2480F9755;
  P x_2478F9754;
  P x_2477F9753;
  P x_2476F9752;
  P x_2474F9751;
  P x_2473F9750;
  P x_2471F9749;
  P x_2470F9748;
  P x_2469F9747;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  T0 = CALL2(1,VARREF(YgooSioSportYopen),VARREF(YgooSioSportYLfile_out_portG),FREEREF(1));
  BOXPUT(T0,FREEREF(0));
  T2 = BOXGET(FREEREF(0));
  x_2469F9747 = T2;
  CALL2(1,VARREF(YgooSioSportYputs),x_2469F9747,LITREF(lit_86));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2469F9747,FREEREF(2));
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2469F9747,LITREF(lit_87));
  T4 = BOXGET(FREEREF(0));
  x_2470F9748 = T4;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2470F9748,VARREF(YgooSsystemYTc_extensionT));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2470F9748,VARREF(YgooSsystemYTobj_extensionT));
  CALL2(1,VARREF(YgooSioSportYputs),x_2470F9748,LITREF(lit_88));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2470F9748,FREEREF(2));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2470F9748,LITREF(lit_89));
  T6 = BOXGET(FREEREF(0));
  x_2471F9749 = T6;
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2471F9749,LITREF(lit_90));
  T7 = FUNFAB(fun_43,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T7,FREEREF(3));
  T9 = BOXGET(FREEREF(0));
  x_2473F9750 = T9;
  T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2473F9750,LITREF(lit_95));
  T11 = BOXGET(FREEREF(0));
  x_2474F9751 = T11;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2474F9751,LITREF(lit_96));
  T12 = FUNFAB(fun_47,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T12,FREEREF(3));
  T15 = BOXGET(FREEREF(0));
  x_2476F9752 = T15;
  CALL2(1,VARREF(YgooSioSportYputs),x_2476F9752,LITREF(lit_105));
  T13 = CALL1(1,VARREF(YgooSsystemYobj_filename),FREEREF(4));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2476F9752,T13);
  T14 = CALL2(1,VARREF(YgooSioSportYputs),x_2476F9752,LITREF(lit_106));
  T17 = BOXGET(FREEREF(0));
  x_2477F9753 = T17;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2477F9753,FREEREF(5));
  T16 = CALL2(1,VARREF(YgooSioSportYputs),x_2477F9753,LITREF(lit_107));
  T19 = BOXGET(FREEREF(0));
  x_2478F9754 = T19;
  CALL2(1,VARREF(YgooSioSportYputs),x_2478F9754,LITREF(lit_108));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2478F9754,FREEREF(5));
  T18 = CALL2(1,VARREF(YgooSioSportYputs),x_2478F9754,LITREF(lit_109));
  T20 = FUNFAB(fun_49,1,FREEREF(0));
  CALL2(1,VARREF(YevalSastYdo_module_loader_modules),T20,FREEREF(3));
  T22 = BOXGET(FREEREF(0));
  x_2480F9755 = T22;
  CALL2(1,VARREF(YgooSioSportYputs),x_2480F9755,LITREF(lit_113));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2480F9755,FREEREF(5));
  T21 = CALL2(1,VARREF(YgooSioSportYputs),x_2480F9755,LITREF(lit_114));
UNLINK_STACK();
  QRET(T21);
}

FUNCODEDEF(fun_51) {
  P T0,T1,T2,T3;
LINK_STACK();
  T1 = BOXGET(FREEREF(0));
  if (T1 != YPfalse) {
    T3 = BOXGET(FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSioSportYclose),T3);
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_makefile_52) {
  P loader_;
  P outF9761;
  P out_nameF9760;
  P sepF9759;
  P exe_nameF9758;
  P init_nameF9757;
  P appnameF9756;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(loader_, 0);
  T7 = CALL1(1,VARREF(YevalSg2cYmodule_loader_appname),loader_);
  appnameF9756 = T7;
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),appnameF9756,LITREF(lit_84));
  init_nameF9757 = T6;
  T5 = CALL1(1,VARREF(YgooSsystemYexe_filename),appnameF9756);
  exe_nameF9758 = T5;
  sepF9759 = VARREF(YgooSsystemYTpath_separatorT);
  T4 = CALL2(1,VARREF(YgooSsystemYadd_build_path),appnameF9756,LITREF(lit_85));
  out_nameF9760 = T4;
  outF9761 = YPfalse;
  outF9761 = BOXFAB(outF9761);
  T2 = FUNFAB(fun_50,6,outF9761,out_nameF9760,sepF9759,loader_,init_nameF9757,exe_nameF9758);
  T3 = FUNFAB(fun_51,1,outF9761);
  T1 = with_cleanup(T2,T3);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_pp_53) {
  P e_,out_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YgooSioSwriteYwrite),out_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_header_54) {
  P out_,modname_;
  P x_2489F9771;
  P x_2488F9770;
  P x_2487F9769;
  P x_2486F9768;
  P x_2485F9767;
  P x_2484F9766;
  P x_2483F9765;
  P x_2482F9764;
  P x_2481F9763;
  P modvarF9762;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(modname_, 1);
  modvarF9762 = VARREF(YevalSg2cYDnow_mod_var_name);
  x_2481F9763 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2481F9763,LITREF(lit_120));
  x_2482F9764 = out_;
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2482F9764,LITREF(lit_121));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    x_2483F9765 = out_;
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2483F9765,LITREF(lit_122));
  } else {
  }
  x_2484F9766 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2484F9766,LITREF(lit_123));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2484F9766,modvarF9762);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2484F9766,LITREF(lit_124));
  x_2485F9767 = out_;
  T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2485F9767,LITREF(lit_125));
  x_2486F9768 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2486F9768,LITREF(lit_126));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2486F9768,modvarF9762);
  CALL2(1,VARREF(YgooSioSportYputs),x_2486F9768,LITREF(lit_127));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2486F9768,modvarF9762);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2486F9768,LITREF(lit_128));
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,modname_);
  x_2487F9769 = out_;
  T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2487F9769,LITREF(lit_129));
  x_2488F9770 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2488F9770,LITREF(lit_130));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_131));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2488F9770,T7);
  CALL2(1,VARREF(YgooSioSportYputs),x_2488F9770,LITREF(lit_132));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_133));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2488F9770,T8);
  CALL2(1,VARREF(YgooSioSportYputs),x_2488F9770,LITREF(lit_134));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2488F9770,modvarF9762);
  T9 = CALL2(1,VARREF(YgooSioSportYputs),x_2488F9770,LITREF(lit_135));
  x_2489F9771 = out_;
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2489F9771,LITREF(lit_136));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_trailer_55) {
  P out_;
  P x_2490F9772;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  x_2490F9772 = out_;
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2490F9772,LITREF(lit_139));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P binding_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(1));
  T1 = CALL1(1,VARREF(Ynot),T2);
  T0 = CALL3(1,VARREF(YevalSg2cYgenerate_global_binding),FREEREF(0),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_global_environment_57) {
  P out_,mod_;
  P x_2491F9773;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  x_2491F9773 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2491F9773,LITREF(lit_142));
  T0 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2491F9773,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2491F9773,LITREF(lit_143));
  T3 = FUNFAB(fun_56,2,out_,mod_);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_global_binding_58) {
  P out_,importedQ_,gb_;
  P x_2494F9780;
  P x_2493F9779;
  P x_2492F9778;
  P nameF9777;
  P tmpF9776;
  P tmpF9775;
  P kindF9774;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(importedQ_, 1);
  ARG(gb_, 2);
  T17 = CALL1(1,VARREF(YevalSastYbinding_kind),gb_);
  kindF9774 = T17;
  T5 = CALL2(1,VARREF(YgooSmacrosYEE),kindF9774,LITREF(lit_147));
  tmpF9775 = T5;
  if (tmpF9775 != YPfalse) {
    T1 = tmpF9775;
  } else {
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),kindF9774,LITREF(lit_148));
    tmpF9776 = T4;
    if (tmpF9776 != YPfalse) {
      T2 = tmpF9776;
    } else {
      T3 = CALL2(1,VARREF(YgooSmacrosYEE),kindF9774,LITREF(lit_149));
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T16 = CALL1(1,VARREF(YevalSastYbinding_name),gb_);
    nameF9777 = T16;
    x_2492F9778 = kindF9774;
    x_2493F9779 = VARREF(YgooSmacrosYEE);
    T7 = CALL2(1,x_2493F9779,x_2492F9778,LITREF(lit_148));
    if (T7 != YPfalse) {
      T6 = LITREF(lit_150);
    } else {
      T9 = CALL2(1,x_2493F9779,x_2492F9778,LITREF(lit_149));
      if (T9 != YPfalse) {
        T8 = LITREF(lit_151);
      } else {
        T8 = LITREF(lit_152);
      }
      T6 = T8;
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    x_2494F9780 = out_;
    if (importedQ_ != YPfalse) {
      T10 = LITREF(lit_153);
    } else {
      T10 = LITREF(lit_154);
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2494F9780,T10);
    CALL2(1,VARREF(YgooSioSportYputs),x_2494F9780,LITREF(lit_155));
    T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),gb_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2494F9780,T11);
    CALL2(1,VARREF(YgooSioSportYputs),x_2494F9780,LITREF(lit_156));
    T13 = CALL1(1,VARREF(YevalSastYbinding_module_name),gb_);
    T12 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T13);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2494F9780,T12);
    CALL2(1,VARREF(YgooSioSportYputs),x_2494F9780,LITREF(lit_157));
    T14 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF9777);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2494F9780,T14);
    T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2494F9780,LITREF(lit_158));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYchar_buffer_as_string) {
  P buffer_;
  P iF9783;
  P stringF9782;
  P buffer_sizeF9781;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(buffer_, 0);
  T6 = CALL1(1,VARREF(YgooStypesYlen),buffer_);
  check_type(T6,VARREF(YLintG));
  buffer_sizeF9781 = T6;
  T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YLstrG),buffer_sizeF9781);
  check_type(T5,VARREF(YLstrG));
  stringF9782 = T5;
  iF9783 = YPint((P)0);
  LOOP_458: {
    P a458_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF9783,buffer_sizeF9781);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),buffer_,iF9783);
      CALL3(1,VARREF(YgooScolsScolYfab_elt_setter),T2,stringF9782,iF9783);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF9783,YPint((P)1));
      a458_0 = T4;
      iF9783 = a458_0;
      goto LOOP_458;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  RET(stringF9782);
}

FUNCODEDEF(fun_mangle_string_literal_60) {
  P str_;
  P encF9787;
  P cF9786;
  P iF9785;
  P lenF9784;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(str_, 0);
  CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),VARREF(YevalSg2cYTmangle_bufferT));
  T11 = CALL1(1,VARREF(YgooStypesYlen),str_);
  lenF9784 = T11;
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
  iF9785 = YPint((P)0);
  LOOP_459: {
    P a459_0;
    T1 = CALL2(1,VARREF(YgooSmathYE),iF9785,lenF9784);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),YPchr((P)34));
      T2 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
      T0 = T2;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYelt),str_,iF9785);
      cF9786 = T10;
      T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),cF9786);
      T8 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDc_escapes),T9);
      encF9787 = T8;
      T3 = CALL2(1,VARREF(YgooSmathYE),encF9787,YPfalse);
      if (T3 != YPfalse) {
        T4 = CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),cF9786);
      } else {
        T5 = CALL2(1,VARREF(YgooScolsSseqxYcatX),VARREF(YevalSg2cYTmangle_bufferT),encF9787);
      }
      T7 = CALL2(1,VARREF(YgooSmathYA),iF9785,YPint((P)1));
      a459_0 = T7;
      iF9785 = a459_0;
      goto LOOP_459;
      T0 = T6;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_string_literal_61) {
  P sym_;
  P T0,T1;
LINK_STACK();
  ARG(sym_, 0);
  T1 = CALL1(1,VARREF(Ysym_name),sym_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_process_integer_62) {
  P number_,index_;
  P resultF9793;
  P resultF9792;
  P digitF9791;
  P remainderF9790;
  P quotientF9789;
  P tup69F9788;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(number_, 0);
  ARG(index_, 1);
  T10 = CALL2(1,VARREF(YgooSmathYtruncS),number_,YPint((P)10));
  tup69F9788 = T10;
  T9 = CALL2(1,VARREF(YgooSmacrosYelt),tup69F9788,YPint((P)0));
  check_type(T9,VARREF(YLintG));
  quotientF9789 = T9;
  T8 = CALL2(1,VARREF(YgooSmacrosYelt),tup69F9788,YPint((P)1));
  check_type(T8,VARREF(YLintG));
  remainderF9790 = T8;
  T7 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDnumber_characters),remainderF9790);
  check_type(T7,VARREF(YLchrG));
  digitF9791 = T7;
  T1 = CALL2(1,VARREF(YgooSmathYE),quotientF9789,YPint((P)0));
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),index_);
    check_type(T2,VARREF(YgooScolsSvecYLvecG));
    resultF9792 = T2;
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF9791,resultF9792,YPint((P)0));
    T0 = resultF9792;
  } else {
    T6 = CALL2(1,VARREF(YgooSmathYA),index_,YPint((P)1));
    T5 = CALL2(1,FREEREF(0),quotientF9789,T6);
    check_type(T5,VARREF(YgooScolsSvecYLvecG));
    resultF9793 = T5;
    T4 = CALL1(1,VARREF(YgooStypesYlen),resultF9793);
    T3 = CALL2(1,VARREF(YgooSmathY_),T4,index_);
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),digitF9791,resultF9793,T3);
    T0 = resultF9793;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_integer_63) {
  P number_;
  P process_integerF9794;
  P T0,T1,T2;
LINK_STACK();
  ARG(number_, 0);
  T2 = FUNSHELL(1,fun_process_integer_62,1);
  process_integerF9794 = T2;
  FUNINIT(process_integerF9794, 1,process_integerF9794);
  T1 = CALL2(1,process_integerF9794,number_,YPint((P)1));
  T0 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangler_reset) {
  P buffer_;
  P T0;
LINK_STACK();
  ARG(buffer_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolxYlen_setter),YPint((P)0),buffer_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_name_into) {
  P buf_,name_;
  P cF9796;
  P x_2503F9795;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),name_);
  x_2503F9795 = T9;
  LOOP_460: {
    P a460_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2503F9795);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2503F9795);
      cF9796 = T8;
      T5 = CALL1(1,VARREF(YgooSmathYto_lower),cF9796);
      T4 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T5);
      T3 = CALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDname_mangler_table),T4);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T3);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2503F9795);
      a460_0 = T7;
      x_2503F9795 = a460_0;
      goto LOOP_460;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(buf_);
}

FUNCODEDEF(fun_mangle_raw_name_66) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_raw_name_67) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_68) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDlocal_marker));
  T0 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_mangle_local_name_69) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYbuf_cat2X) {
  P buf_,name_;
  P iF9798;
  P lenF9797;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(buf_, 0);
  ARG(name_, 1);
  T5 = CALL1(1,VARREF(YgooStypesYlen),name_);
  lenF9797 = T5;
  iF9798 = YPint((P)0);
  LOOP_461: {
    P a461_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),iF9798,lenF9797);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YgooScolsScolYlow_elt),name_,iF9798);
      CALL2(1,VARREF(YgooScolsScolxYaddX),buf_,T2);
      T4 = CALL2(1,VARREF(YgooSmathYA),iF9798,YPint((P)1));
      a461_0 = T4;
      iF9798 = a461_0;
      goto LOOP_461;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_module_into_71) {
  P buf_,mod_;
  P nameF9802;
  P tmpF9801;
  P UF9800;
  P x_2505F9799;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(buf_, 0);
  ARG(mod_, 1);
  x_2505F9799 = mod_;
  T9 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_2505F9799);
  UF9800 = T9;
  T8 = CALL1(1,VARREF(YevalSastYmodule_mangled_name),x_2505F9799);
  tmpF9801 = T8;
  if (tmpF9801 != YPfalse) {
    T1 = tmpF9801;
  } else {
    T5 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),YPint((P)0));
    T7 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T6 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T7);
    T4 = CALL2(1,VARREF(YevalSg2cYmangle_name_into),T5,T6);
    T3 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),T4);
    T2 = CALL2(1,VARREF(YevalSastYmodule_mangled_name_setter),T3,x_2505F9799);
    T1 = T2;
  }
  nameF9802 = T1;
  T0 = CALL2(1,VARREF(YevalSg2cYbuf_cat2X),buf_,nameF9802);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_global_name_72) {
  P mod_,name_;
  P tmpF9803;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),mod_,VARREF(YevalSastYDgoo_boot_module_name));
  tmpF9803 = T4;
  if (tmpF9803 != YPfalse) {
    T1 = tmpF9803;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T2 = CALL2(1,VARREF(YgooSmacrosYEE),T3,VARREF(YevalSastYDgoo_boot_module_name));
    T1 = T2;
  }
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
    T5 = CALL2(1,VARREF(YevalSg2cYmangle_module_into),VARREF(YevalSg2cYTmangle_bufferT),mod_);
  } else {
  }
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDmodule_marker));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  T6 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  RET(T6);
}

FUNCODEDEF(fun_mangle_global_name_73) {
  P mod_,name_;
  P T0,T1;
LINK_STACK();
  ARG(mod_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),name_);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),mod_,T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_boot_name) {
  P name_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),VARREF(YevalSastYDgoo_boot_module_name),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_quotation_name) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),LITREF(lit_220));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),name_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_76) {
  P binding_;
  P tmpF9806;
  P UF9805;
  P x_2506F9804;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(binding_, 0);
  x_2506F9804 = binding_;
  T11 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2506F9804);
  UF9805 = T11;
  T10 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2506F9804);
  tmpF9806 = T10;
  if (tmpF9806 != YPfalse) {
    T0 = tmpF9806;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,LITREF(lit_223));
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T5 = CALL1(1,VARREF(YevalSg2cYmangle_quotation_name),T6);
      T2 = T5;
    } else {
      T8 = CALL1(1,VARREF(YevalSastYbinding_module),binding_);
      T9 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
      T7 = CALL2(1,VARREF(YevalSg2cYmangle_global_name),T8,T9);
      T2 = T7;
    }
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_2506F9804);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYmangle_local_marked_name) {
  P name_,marker_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  ARG(marker_, 1);
  CALL1(1,VARREF(YevalSg2cYmangler_reset),VARREF(YevalSg2cYTmangle_bufferT));
  CALL2(1,VARREF(YevalSg2cYmangle_name_into),VARREF(YevalSg2cYTmangle_bufferT),name_);
  CALL2(1,VARREF(YgooScolsScolxYaddX),VARREF(YevalSg2cYTmangle_bufferT),VARREF(YevalSg2cYDhygiene_char));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_integer),marker_);
  CALL2(1,VARREF(YevalSg2cYbuf_cat2X),VARREF(YevalSg2cYTmangle_bufferT),T0);
  T1 = CALL1(1,VARREF(YevalSg2cYchar_buffer_as_string),VARREF(YevalSg2cYTmangle_bufferT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_mangle_binding_78) {
  P binding_;
  P tmpF9809;
  P UF9808;
  P x_2507F9807;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  x_2507F9807 = binding_;
  T5 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2507F9807);
  UF9808 = T5;
  T4 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2507F9807);
  tmpF9809 = T4;
  if (tmpF9809 != YPfalse) {
    T0 = tmpF9809;
  } else {
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_local_name),T3);
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_2507F9807);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_mangle_binding_79) {
  P binding_;
  P tmpF9812;
  P UF9811;
  P x_2508F9810;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(binding_, 0);
  x_2508F9810 = binding_;
  T7 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2508F9810);
  UF9811 = T7;
  T6 = CALL1(1,VARREF(YevalSastYbinding_mangled_name),x_2508F9810);
  tmpF9812 = T6;
  if (tmpF9812 != YPfalse) {
    T0 = tmpF9812;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T3 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T4);
    T5 = CALL1(1,VARREF(YevalSastYbinding_index),binding_);
    T2 = CALL2(1,VARREF(YevalSg2cYmangle_local_marked_name),T3,T5);
    T1 = CALL2(1,VARREF(YevalSastYbinding_mangled_name_setter),T2,x_2508F9810);
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2512_80) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_232),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P return_;
  P out_varF9828;
  P x_2511F9827;
  P x_2511F9826;
  P x_2511F9825;
  P x_2511F9824;
  P x_2511F9823;
  P x_2511F9822;
  P x_2511F9821;
  P x_2511F9820;
  P x_2511F9819;
  P x_2511F9818;
  P bodyF9817;
  P clausesF9816;
  P out_valF9815;
  P x_2511F9814;
  P x_2512F9813;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58;
LINK_STACK();
  ARG(return_, 0);
  T58 = FUNSHELL(0,fun_x_2512_80,2);
  x_2512F9813 = T58;
  FUNINIT(x_2512F9813, 2,FREEREF(0),return_);
  x_2511F9814 = FREEREF(0);
  out_valF9815 = YPfalse;
  clausesF9816 = YPfalse;
  bodyF9817 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2511F9814,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T16 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2511F9814,LITREF(lit_232),x_2512F9813);
    x_2511F9818 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2511F9818,x_2512F9813);
    out_valF9815 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2511F9818);
    x_2511F9819 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2511F9819,x_2512F9813);
    x_2511F9820 = T12;
    clausesF9816 = x_2511F9820;
    x_2511F9821 = Ynil;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2511F9821,x_2512F9813);
    x_2511F9822 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2511F9822,x_2512F9813);
    T11 = CALL1(1,VARREF(Ytail),x_2511F9821);
    x_2511F9823 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2511F9823,x_2512F9813);
    T13 = CALL1(1,VARREF(Ytail),x_2511F9819);
    x_2511F9824 = T13;
    bodyF9817 = x_2511F9824;
    x_2511F9825 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2511F9825,x_2512F9813);
    x_2511F9826 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2511F9826,x_2512F9813);
    T7 = CALL1(1,VARREF(Ytail),x_2511F9825);
    x_2511F9827 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2511F9827,x_2512F9813);
  } else {
    T17 = CALL2(1,x_2512F9813,LITREF(lit_78),x_2511F9814);
  }
  T57 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF9828 = T57;
  T19 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T24 = CALL1(1,VARREF(Ylst),out_varF9828);
  T26 = out_valF9815;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T23 = CALL3(1,VARREF(YgooSmacrosYcat),T24,T25,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T21 = CALL2(1,VARREF(YgooSmacrosYcat),T22,LITREF(lit_81));
  T20 = CALL1(1,VARREF(Ylst),T21);
  T29 = CALL1(1,VARREF(Ylst),LITREF(lit_234));
  T32 = clausesF9816;
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T38 = CALL1(1,VARREF(Ylst),LITREF(lit_236));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T42 = CALL1(1,VARREF(Ylst),YPtrue);
  T40 = CALL3(1,VARREF(YgooSmacrosYcat),T41,T42,LITREF(lit_81));
  T39 = CALL1(1,VARREF(Ylst),T40);
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_237));
  T46 = CALL1(1,VARREF(Ylst),YPfalse);
  T44 = CALL3(1,VARREF(YgooSmacrosYcat),T45,T46,LITREF(lit_81));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T37 = CALL4(1,VARREF(YgooSmacrosYcat),T38,T39,T43,LITREF(lit_81));
  T36 = CALL1(1,VARREF(Ylst),T37);
  T34 = CALL3(1,VARREF(YgooSmacrosYcat),T35,T36,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T31 = CALL3(1,VARREF(YgooSmacrosYcat),T32,T33,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T49 = CALL1(1,VARREF(Ylst),LITREF(lit_238));
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_235));
  T53 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T54 = CALL1(1,VARREF(Ylst),out_varF9828);
  T55 = CALL1(1,VARREF(Ylst),YPchr((P)44));
  T52 = CALL4(1,VARREF(YgooSmacrosYcat),T53,T54,T55,LITREF(lit_81));
  T51 = CALL1(1,VARREF(Ylst),T52);
  T48 = CALL4(1,VARREF(YgooSmacrosYcat),T49,T50,T51,LITREF(lit_81));
  T47 = CALL1(1,VARREF(Ylst),T48);
  T56 = bodyF9817;
  T28 = CALL5(1,VARREF(YgooSmacrosYcat),T29,T30,T47,T56,LITREF(lit_81));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T18 = CALL4(1,VARREF(YgooSmacrosYcat),T19,T20,T27,LITREF(lit_81));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_82) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_81,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2516_83) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_244),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_84) {
  P return_;
  P out_varF9842;
  P x_2515F9841;
  P x_2515F9840;
  P x_2515F9839;
  P x_2515F9838;
  P x_2515F9837;
  P x_2515F9836;
  P x_2515F9835;
  P x_2515F9834;
  P x_2515F9833;
  P bodyF9832;
  P out_valF9831;
  P x_2515F9830;
  P x_2516F9829;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(return_, 0);
  T38 = FUNSHELL(0,fun_x_2516_83,2);
  x_2516F9829 = T38;
  FUNINIT(x_2516F9829, 2,FREEREF(0),return_);
  x_2515F9830 = FREEREF(0);
  out_valF9831 = YPfalse;
  bodyF9832 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2515F9830,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2515F9830,LITREF(lit_244),x_2516F9829);
    x_2515F9833 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2515F9833,x_2516F9829);
    x_2515F9834 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2515F9834,x_2516F9829);
    out_valF9831 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2515F9834);
    x_2515F9835 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2515F9835,x_2516F9829);
    x_2515F9836 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2515F9836,x_2516F9829);
    T10 = CALL1(1,VARREF(Ytail),x_2515F9835);
    x_2515F9837 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2515F9837,x_2516F9829);
    T14 = CALL1(1,VARREF(Ytail),x_2515F9833);
    x_2515F9838 = T14;
    bodyF9832 = x_2515F9838;
    x_2515F9839 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2515F9839,x_2516F9829);
    x_2515F9840 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2515F9840,x_2516F9829);
    T6 = CALL1(1,VARREF(Ytail),x_2515F9839);
    x_2515F9841 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2515F9841,x_2516F9829);
  } else {
    T16 = CALL2(1,x_2516F9829,LITREF(lit_78),x_2515F9830);
  }
  T37 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF9842 = T37;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T23 = CALL1(1,VARREF(Ylst),out_varF9842);
  T25 = out_valF9831;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T29 = CALL1(1,VARREF(Ylst),out_varF9842);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  T31 = bodyF9832;
  T34 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T35 = CALL1(1,VARREF(Ylst),out_varF9842);
  T36 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T33 = CALL4(1,VARREF(YgooSmacrosYcat),T34,T35,T36,LITREF(lit_81));
  T32 = CALL1(1,VARREF(Ylst),T33);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T32,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_85) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_84,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2520_86) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_249),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_87) {
  P return_;
  P tmpF9860;
  P firstQF9859;
  P bodyF9858;
  P formsF9857;
  P out_varF9856;
  P x_2519F9855;
  P x_2519F9854;
  P x_2519F9853;
  P x_2519F9852;
  P x_2519F9851;
  P x_2519F9850;
  P x_2519F9849;
  P x_2519F9848;
  P x_2519F9847;
  P bodyF9846;
  P out_valF9845;
  P x_2519F9844;
  P x_2520F9843;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51;
LINK_STACK();
  ARG(return_, 0);
  T51 = FUNSHELL(0,fun_x_2520_86,2);
  x_2520F9843 = T51;
  FUNINIT(x_2520F9843, 2,FREEREF(0),return_);
  x_2519F9844 = FREEREF(0);
  out_valF9845 = YPfalse;
  bodyF9846 = YPfalse;
  T2 = CALL2(1,VARREF(YisaQ),x_2519F9844,VARREF(YLlstG));
  if (T2 != YPfalse) {
    T15 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2519F9844,LITREF(lit_249),x_2520F9843);
    x_2519F9847 = T15;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2519F9847,x_2520F9843);
    x_2519F9848 = T13;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2519F9848,x_2520F9843);
    out_valF9845 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2519F9848);
    x_2519F9849 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2519F9849,x_2520F9843);
    x_2519F9850 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2519F9850,x_2520F9843);
    T10 = CALL1(1,VARREF(Ytail),x_2519F9849);
    x_2519F9851 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2519F9851,x_2520F9843);
    T14 = CALL1(1,VARREF(Ytail),x_2519F9847);
    x_2519F9852 = T14;
    bodyF9846 = x_2519F9852;
    x_2519F9853 = Ynil;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2519F9853,x_2520F9843);
    x_2519F9854 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2519F9854,x_2520F9843);
    T6 = CALL1(1,VARREF(Ytail),x_2519F9853);
    x_2519F9855 = T6;
    T3 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2519F9855,x_2520F9843);
  } else {
    T16 = CALL2(1,x_2520F9843,LITREF(lit_78),x_2519F9844);
  }
  T50 = CALL0(1,VARREF(YgooSmacrosYgensym));
  out_varF9856 = T50;
  T18 = CALL1(1,VARREF(Ylst),LITREF(lit_233));
  T23 = CALL1(1,VARREF(Ylst),out_varF9856);
  T25 = out_valF9845;
  T24 = CALL1(1,VARREF(Ylst),T25);
  T22 = CALL3(1,VARREF(YgooSmacrosYcat),T23,T24,LITREF(lit_81));
  T21 = CALL1(1,VARREF(Ylst),T22);
  T20 = CALL2(1,VARREF(YgooSmacrosYcat),T21,LITREF(lit_81));
  T19 = CALL1(1,VARREF(Ylst),T20);
  T28 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T29 = CALL1(1,VARREF(Ylst),out_varF9856);
  T30 = CALL1(1,VARREF(Ylst),YPchr((P)40));
  T27 = CALL4(1,VARREF(YgooSmacrosYcat),T28,T29,T30,LITREF(lit_81));
  T26 = CALL1(1,VARREF(Ylst),T27);
  formsF9857 = Ynil;
  T44 = bodyF9846;
  bodyF9858 = T44;
  firstQF9859 = YPtrue;
  LOOP_462: {
    P a462_0,a462_1,a462_2;
    T32 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bodyF9858);
    if (T32 != YPfalse) {
      T33 = CALL1(1,VARREF(YgooSmacrosYrevX),formsF9857);
      T31 = T33;
    } else {
      T36 = CALL1(1,VARREF(Yhead),bodyF9858);
      tmpF9860 = firstQF9859;
      if (tmpF9860 != YPfalse) {
        T38 = tmpF9860;
      } else {
        T40 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
        T41 = CALL1(1,VARREF(Ylst),out_varF9856);
        T42 = CALL1(1,VARREF(Ylst),YPchr((P)44));
        T39 = CALL4(1,VARREF(YgooSmacrosYcat),T40,T41,T42,LITREF(lit_81));
        T38 = T39;
      }
      T37 = CALL2(1,VARREF(YgooSmacrosYpair),T38,formsF9857);
      T35 = CALL2(1,VARREF(YgooSmacrosYpair),T36,T37);
      T43 = CALL1(1,VARREF(Ytail),bodyF9858);
      a462_0 = T35;
      a462_1 = T43;
      a462_2 = YPfalse;
      formsF9857 = a462_0;
      bodyF9858 = a462_1;
      firstQF9859 = a462_2;
      goto LOOP_462;
      T31 = T34;
    }
  }
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_239));
  T48 = CALL1(1,VARREF(Ylst),out_varF9856);
  T49 = CALL1(1,VARREF(Ylst),YPchr((P)41));
  T46 = CALL4(1,VARREF(YgooSmacrosYcat),T47,T48,T49,LITREF(lit_81));
  T45 = CALL1(1,VARREF(Ylst),T46);
  T17 = CALLN(1,VARREF(YgooSmacrosYcat),6,T18,T19,T26,T31,T45,LITREF(lit_81));
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_88) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_87,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_result_89) {
  P e_,d_,out_;
  P x_2521F9862;
  P regF9861;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF9861 = T4;
  if (regF9861 != YPfalse) {
    x_2521F9862 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2521F9862,LITREF(lit_252));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF9861);
    CALL2(1,VARREF(YgooSioSportYputs),x_2521F9862,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2521F9862,LITREF(lit_253));
    if (T3 != YPfalse) {
      T1 = YPtrue;
    } else {
      T1 = YPfalse;
    }
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_gen_depth_90) {
  P d_,out_;
  P iF9864;
  P x_2522F9863;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(d_, 0);
  ARG(out_, 1);
  T7 = CALL1(1,VARREF(YgooScolsSseqYbelow),d_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2522F9863 = T6;
  LOOP_463: {
    P a463_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2522F9863);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2522F9863);
      iF9864 = T5;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_256));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2522F9863);
      a463_0 = T4;
      x_2522F9863 = a463_0;
      goto LOOP_463;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2527_91) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_261),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_92) {
  P return_;
  P x_2526F9879;
  P x_2526F9878;
  P x_2526F9877;
  P x_2526F9876;
  P x_2526F9875;
  P x_2526F9874;
  P x_2526F9873;
  P x_2526F9872;
  P x_2526F9871;
  P x_2526F9870;
  P bodyF9869;
  P outF9868;
  P dF9867;
  P x_2526F9866;
  P x_2527F9865;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36;
LINK_STACK();
  ARG(return_, 0);
  T36 = FUNSHELL(0,fun_x_2527_91,2);
  x_2527F9865 = T36;
  FUNINIT(x_2527F9865, 2,FREEREF(0),return_);
  x_2526F9866 = FREEREF(0);
  dF9867 = YPfalse;
  outF9868 = YPfalse;
  bodyF9869 = YPfalse;
  T3 = CALL2(1,VARREF(YisaQ),x_2526F9866,VARREF(YLlstG));
  if (T3 != YPfalse) {
    T18 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2526F9866,LITREF(lit_261),x_2527F9865);
    x_2526F9870 = T18;
    T16 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2526F9870,x_2527F9865);
    x_2526F9871 = T16;
    T14 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2526F9871,x_2527F9865);
    dF9867 = T14;
    T15 = CALL1(1,VARREF(Ytail),x_2526F9871);
    x_2526F9872 = T15;
    T12 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2526F9872,x_2527F9865);
    outF9868 = T12;
    T13 = CALL1(1,VARREF(Ytail),x_2526F9872);
    x_2526F9873 = T13;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2526F9873,x_2527F9865);
    x_2526F9874 = T10;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2526F9874,x_2527F9865);
    T11 = CALL1(1,VARREF(Ytail),x_2526F9873);
    x_2526F9875 = T11;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2526F9875,x_2527F9865);
    T17 = CALL1(1,VARREF(Ytail),x_2526F9870);
    x_2526F9876 = T17;
    bodyF9869 = x_2526F9876;
    x_2526F9877 = Ynil;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2526F9877,x_2527F9865);
    x_2526F9878 = T6;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2526F9878,x_2527F9865);
    T7 = CALL1(1,VARREF(Ytail),x_2526F9877);
    x_2526F9879 = T7;
    T4 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2526F9879,x_2527F9865);
  } else {
    T19 = CALL2(1,x_2527F9865,LITREF(lit_78),x_2526F9866);
  }
  T21 = CALL1(1,VARREF(Ylst),LITREF(lit_262));
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_254));
  T26 = dF9867;
  T25 = CALL1(1,VARREF(Ylst),T26);
  T28 = outF9868;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T27,LITREF(lit_81));
  T22 = CALL1(1,VARREF(Ylst),T23);
  T29 = bodyF9869;
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_263));
  T34 = outF9868;
  T33 = CALL1(1,VARREF(Ylst),T34);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_264));
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T35,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T20 = CALL5(1,VARREF(YgooSmacrosYcat),T21,T22,T29,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T20);
}

FUNCODEDEF(fun_93) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_92,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2531_94) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_269),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_95) {
  P return_;
  P x_2530F9896;
  P x_2530F9895;
  P x_2530F9894;
  P x_2530F9893;
  P x_2530F9892;
  P x_2530F9891;
  P x_2530F9890;
  P x_2530F9889;
  P x_2530F9888;
  P x_2530F9887;
  P x_2530F9886;
  P bodyF9885;
  P outF9884;
  P dF9883;
  P eF9882;
  P x_2530F9881;
  P x_2531F9880;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(return_, 0);
  T41 = FUNSHELL(0,fun_x_2531_94,2);
  x_2531F9880 = T41;
  FUNINIT(x_2531F9880, 2,FREEREF(0),return_);
  x_2530F9881 = FREEREF(0);
  eF9882 = YPfalse;
  dF9883 = YPfalse;
  outF9884 = YPfalse;
  bodyF9885 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2530F9881,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2530F9881,LITREF(lit_269),x_2531F9880);
    x_2530F9886 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2530F9886,x_2531F9880);
    x_2530F9887 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2530F9887,x_2531F9880);
    eF9882 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2530F9887);
    x_2530F9888 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2530F9888,x_2531F9880);
    dF9883 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2530F9888);
    x_2530F9889 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2530F9889,x_2531F9880);
    outF9884 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2530F9889);
    x_2530F9890 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2530F9890,x_2531F9880);
    x_2530F9891 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2530F9891,x_2531F9880);
    T12 = CALL1(1,VARREF(Ytail),x_2530F9890);
    x_2530F9892 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2530F9892,x_2531F9880);
    T20 = CALL1(1,VARREF(Ytail),x_2530F9886);
    x_2530F9893 = T20;
    bodyF9885 = x_2530F9893;
    x_2530F9894 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2530F9894,x_2531F9880);
    x_2530F9895 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2530F9895,x_2531F9880);
    T8 = CALL1(1,VARREF(Ytail),x_2530F9894);
    x_2530F9896 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2530F9896,x_2531F9880);
  } else {
    T22 = CALL2(1,x_2531F9880,LITREF(lit_78),x_2530F9881);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_261));
  T28 = dF9883;
  T27 = CALL1(1,VARREF(Ylst),T28);
  T30 = outF9884;
  T29 = CALL1(1,VARREF(Ylst),T30);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T29,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T33 = CALL1(1,VARREF(Ylst),LITREF(lit_250));
  T35 = eF9882;
  T34 = CALL1(1,VARREF(Ylst),T35);
  T37 = dF9883;
  T36 = CALL1(1,VARREF(Ylst),T37);
  T39 = outF9884;
  T38 = CALL1(1,VARREF(Ylst),T39);
  T32 = CALL5(1,VARREF(YgooSmacrosYcat),T33,T34,T36,T38,LITREF(lit_81));
  T31 = CALL1(1,VARREF(Ylst),T32);
  T40 = bodyF9885;
  T23 = CALL5(1,VARREF(YgooSmacrosYcat),T24,T25,T31,T40,LITREF(lit_81));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_96) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_95,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_2535_97) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_274),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_98) {
  P return_;
  P x_2534F9913;
  P x_2534F9912;
  P x_2534F9911;
  P x_2534F9910;
  P x_2534F9909;
  P x_2534F9908;
  P x_2534F9907;
  P x_2534F9906;
  P x_2534F9905;
  P x_2534F9904;
  P x_2534F9903;
  P bodyF9902;
  P outF9901;
  P dF9900;
  P eF9899;
  P x_2534F9898;
  P x_2535F9897;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42;
LINK_STACK();
  ARG(return_, 0);
  T42 = FUNSHELL(0,fun_x_2535_97,2);
  x_2535F9897 = T42;
  FUNINIT(x_2535F9897, 2,FREEREF(0),return_);
  x_2534F9898 = FREEREF(0);
  eF9899 = YPfalse;
  dF9900 = YPfalse;
  outF9901 = YPfalse;
  bodyF9902 = YPfalse;
  T4 = CALL2(1,VARREF(YisaQ),x_2534F9898,VARREF(YLlstG));
  if (T4 != YPfalse) {
    T21 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2534F9898,LITREF(lit_274),x_2535F9897);
    x_2534F9903 = T21;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2534F9903,x_2535F9897);
    x_2534F9904 = T19;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2534F9904,x_2535F9897);
    eF9899 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2534F9904);
    x_2534F9905 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2534F9905,x_2535F9897);
    dF9900 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2534F9905);
    x_2534F9906 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2534F9906,x_2535F9897);
    outF9901 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2534F9906);
    x_2534F9907 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2534F9907,x_2535F9897);
    x_2534F9908 = T11;
    T10 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2534F9908,x_2535F9897);
    T12 = CALL1(1,VARREF(Ytail),x_2534F9907);
    x_2534F9909 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2534F9909,x_2535F9897);
    T20 = CALL1(1,VARREF(Ytail),x_2534F9903);
    x_2534F9910 = T20;
    bodyF9902 = x_2534F9910;
    x_2534F9911 = Ynil;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2534F9911,x_2535F9897);
    x_2534F9912 = T7;
    T6 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2534F9912,x_2535F9897);
    T8 = CALL1(1,VARREF(Ytail),x_2534F9911);
    x_2534F9913 = T8;
    T5 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2534F9913,x_2535F9897);
  } else {
    T22 = CALL2(1,x_2535F9897,LITREF(lit_78),x_2534F9898);
  }
  T24 = CALL1(1,VARREF(Ylst),LITREF(lit_275));
  T27 = CALL1(1,VARREF(Ylst),LITREF(lit_276));
  T29 = eF9899;
  T28 = CALL1(1,VARREF(Ylst),T29);
  T26 = CALL3(1,VARREF(YgooSmacrosYcat),T27,T28,LITREF(lit_81));
  T25 = CALL1(1,VARREF(Ylst),T26);
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_269));
  T36 = eF9899;
  T35 = CALL1(1,VARREF(Ylst),T36);
  T38 = dF9900;
  T37 = CALL1(1,VARREF(Ylst),T38);
  T40 = outF9901;
  T39 = CALL1(1,VARREF(Ylst),T40);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T37,T39,LITREF(lit_81));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T41 = bodyF9902;
  T31 = CALL4(1,VARREF(YgooSmacrosYcat),T32,T33,T41,LITREF(lit_81));
  T30 = CALL1(1,VARREF(Ylst),T31);
  T23 = CALL4(1,VARREF(YgooSmacrosYcat),T24,T25,T30,LITREF(lit_81));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_99) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_98,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_forwards_100) {
  P out_,qbT_;
  P x_2538F9916;
  P qbF9915;
  P x_2536F9914;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_279));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),qbT_);
  x_2536F9914 = T8;
  LOOP_464: {
    P a464_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2536F9914);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2536F9914);
      qbF9915 = T7;
      x_2538F9916 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2538F9916,LITREF(lit_280));
      T3 = CALL1(1,VARREF(YevalSastYbinding_name),qbF9915);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2538F9916,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2538F9916,LITREF(lit_281));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2536F9914);
      a464_0 = T6;
      x_2536F9914 = a464_0;
      goto LOOP_464;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotations_101) {
  P out_,qbT_;
  P x_2541F9919;
  P qbF9918;
  P x_2539F9917;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(qbT_, 1);
  T10 = CALL1(1,VARREF(YgooScolsSseqYrev),qbT_);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),T10);
  x_2539F9917 = T9;
  LOOP_465: {
    P a465_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2539F9917);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2539F9917);
      qbF9918 = T8;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      x_2541F9919 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2541F9919,LITREF(lit_284));
      T3 = CALL1(1,VARREF(YevalSastYbinding_name),qbF9918);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2541F9919,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2541F9919,LITREF(lit_285));
      T5 = CALL1(1,VARREF(YevalSastYbinding_info),qbF9918);
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T5);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2539F9917);
      a465_0 = T7;
      x_2539F9917 = a465_0;
      goto LOOP_465;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_false_name_102) {
  P T0;
LINK_STACK();
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_287));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_103) {
  P out_,qb_;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  if (qb_ != YPfalse) {
    T2 = LITREF(lit_290);
  } else {
    T2 = LITREF(lit_291);
  }
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_104) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_293));
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_105) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),FREEREF(0),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_106) {
  P out_,qb_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(qb_, 1);
  T1 = FUNFAB(fun_105,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,qb_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_quotation_107) {
  P out_,x_;
  P x_2542F9920;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2542F9920 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_297));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2542F9920,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2542F9920,LITREF(lit_298));
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),x_);
  CALL2(1,VARREF(YgooSioSportYputs),x_2542F9920,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2542F9920,LITREF(lit_299));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_108) {
  P out_,x_;
  P x_2543F9921;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2543F9921 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_301));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2543F9921,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2543F9921,LITREF(lit_302));
  T2 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),x_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  CALL2(1,VARREF(YgooSioSportYputs),x_2543F9921,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2543F9921,LITREF(lit_303));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_109) {
  P done_;
  P x_2545F9924;
  P x_2544F9923;
  P iF9922;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(done_, 0);
  T16 = CALL1(1,VARREF(YgooStypesYlen),FREEREF(0));
  T15 = CALL2(1,VARREF(YgooSmathY_),T16,YPint((P)1));
  iF9922 = T15;
  LOOP_466: {
    P a466_0;
    T2 = CALL1(1,VARREF(YgooSmathYneg),YPint((P)1));
    T1 = CALL2(1,VARREF(YgooSmagYG),iF9922,T2);
    if (T1 != YPfalse) {
      T14 = CALL2(1,VARREF(YgooSmacrosYelt),FREEREF(0),iF9922);
      x_2544F9923 = T14;
      x_2545F9924 = VARREF(YgooSmacrosYEE);
      T4 = CALL2(1,x_2545F9924,x_2544F9923,YPchr((P)115));
      if (T4 != YPfalse) {
        CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF9922);
        T5 = CALL1(0,done_,YPfalse);
        T3 = T5;
      } else {
        T7 = CALL2(1,x_2545F9924,x_2544F9923,YPchr((P)100));
        if (T7 != YPfalse) {
          CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF9922);
          T8 = CALL1(0,done_,YPfalse);
          T6 = T8;
        } else {
          T10 = CALL2(1,x_2545F9924,x_2544F9923,YPchr((P)120));
          if (T10 != YPfalse) {
            CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPchr((P)101),FREEREF(0),iF9922);
            T11 = CALL1(0,done_,YPfalse);
            T9 = T11;
          } else {
            T13 = CALL2(1,VARREF(YgooSmathY_),iF9922,YPint((P)1));
            a466_0 = T13;
            iF9922 = a466_0;
            goto LOOP_466;
            T9 = T12;
          }
          T6 = T9;
        }
        T3 = T6;
      }
      T0 = T3;
    } else {
      T0 = FREEREF(0);
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_float_to_c_string_110) {
  P o_;
  P sF9925;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),o_);
  sF9925 = T2;
  T1 = FUNFAB(fun_109,1,sF9925);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_generate_quotation_111) {
  P out_,x_;
  P x_2546F9926;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2546F9926 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_308));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2546F9926,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2546F9926,LITREF(lit_309));
  T1 = CALL1(1,VARREF(YevalSg2cYfloat_to_c_string),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2546F9926,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2546F9926,LITREF(lit_310));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_112) {
  P out_,x_;
  P x_2547F9927;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2547F9927 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_312));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2547F9927,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2547F9927,LITREF(lit_313));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2547F9927,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2547F9927,LITREF(lit_314));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_generate_quotation_113) {
  P out_,x_;
  P eF9930;
  P x_2549F9929;
  P x_2548F9928;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2548F9928 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2548F9928,LITREF(lit_316));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_317));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2548F9928,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2548F9928,LITREF(lit_318));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2548F9928,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2549F9929 = T9;
  LOOP_467: {
    P a467_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2549F9929);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2549F9929);
      eF9930 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_319));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF9930);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2549F9929);
      a467_0 = T7;
      x_2549F9929 = a467_0;
      goto LOOP_467;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_320));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_quotation_114) {
  P out_,x_;
  P eF9933;
  P x_2552F9932;
  P x_2551F9931;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2551F9931 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2551F9931,LITREF(lit_322));
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_323));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2551F9931,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2551F9931,LITREF(lit_324));
  T2 = CALL1(1,VARREF(YgooStypesYlen),x_);
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2551F9931,T2);
  T9 = CALL1(1,VARREF(YgooScolsScolYenum),x_);
  x_2552F9932 = T9;
  LOOP_468: {
    P a468_0;
    T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2552F9932);
    T4 = CALL1(1,VARREF(Ynot),T5);
    if (T4 != YPfalse) {
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2552F9932);
      eF9933 = T8;
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_325));
      CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,eF9933);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2552F9932);
      a468_0 = T7;
      x_2552F9932 = a468_0;
      goto LOOP_468;
      T3 = T6;
    } else {
      T3 = YPfalse;
    }
  }
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_326));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_generate_quotation_115) {
  P out_,x_;
  P x_2554F9934;
  P T0,T1,T2;
LINK_STACK();
  ARG(out_, 0);
  ARG(x_, 1);
  x_2554F9934 = out_;
  T0 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_328));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2554F9934,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2554F9934,LITREF(lit_329));
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),x_);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2554F9934,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2554F9934,LITREF(lit_330));
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(YevalSg2cYbinding_Gc) {
  P binding_,out_;
  P T0,T1;
LINK_STACK();
  ARG(binding_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_117) {
  P v_,out_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T0 = CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_Gc_118) {
  P v_,out_;
  P x_2557F9937;
  P x_2556F9936;
  P x_2555F9935;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(v_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YevalSastYbinding_kind),v_);
  x_2555F9935 = T6;
  x_2556F9936 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2556F9936,x_2555F9935,LITREF(lit_223));
  if (T1 != YPfalse) {
    T0 = LITREF(lit_337);
  } else {
    T3 = CALL2(1,x_2556F9936,x_2555F9935,LITREF(lit_148));
    if (T3 != YPfalse) {
      T2 = LITREF(lit_338);
    } else {
      T5 = CALL2(1,x_2556F9936,x_2555F9935,LITREF(lit_149));
      if (T5 != YPfalse) {
        T4 = LITREF(lit_339);
      } else {
        T4 = LITREF(lit_340);
      }
      T2 = T4;
    }
    T0 = T2;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  x_2557F9937 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2557F9937,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),v_,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2557F9937,YPchr((P)41));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_to_c_119) {
  P e_,f_,d_,out_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotations),out_,T0);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),e_);
  CALL4(1,VARREF(YevalSg2cYgenerate_functions),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T4 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T5 = CALL1(1,VARREF(YevalSast_linearizeYform_program),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T3 = T6;
  } else {
    T3 = YPfalse;
  }
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_120) {
  P e_,f_,d_,out_;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_gen_ref_121) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYreference_Gc),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_122) {
  P e_,out_;
  P x_2559F9939;
  P x_2558F9938;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_348));
  x_2558F9938 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2558F9938,YPchr((P)40));
  x_2559F9939 = out_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYreference_offset),e_);
  T1 = CALL1(1,VARREF(YgooSmathYnum_to_str),T2);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2559F9939,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYput),x_2558F9938,YPchr((P)41));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_gen_ref_123) {
  P e_,out_;
  P x_2560F9941;
  P regF9940;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T4 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  regF9940 = T4;
  if (regF9940 != YPfalse) {
    x_2560F9941 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2560F9941,LITREF(lit_350));
    T2 = CALL1(1,VARREF(YgooSmathYnum_to_str),regF9940);
    T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2560F9941,T2);
    T0 = T1;
  } else {
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_351));
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_124) {
  P e_,out_;
  P x_2561F9942;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  x_2561F9942 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2561F9942,LITREF(lit_353));
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2561F9942,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_125) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_126) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYlast),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_127) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_128) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_ref_129) {
  P e_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(out_, 1);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_130) {
  P e_,f_,d_,out_;
  P x_2563F9944;
  P x_2562F9943;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T7 = CALL1(1,VARREF(YevalSastYbinding_kind),T8);
  x_2562F9943 = T7;
  x_2563F9944 = VARREF(YgooSmacrosYEE);
  T2 = CALL2(1,x_2563F9944,x_2562F9943,LITREF(lit_148));
  if (T2 != YPfalse) {
    T1 = LITREF(lit_360);
  } else {
    T4 = CALL2(1,x_2563F9944,x_2562F9943,LITREF(lit_149));
    if (T4 != YPfalse) {
      T6 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLdynamic_definitionG));
      if (T6 != YPfalse) {
        T5 = LITREF(lit_361);
      } else {
        T5 = LITREF(lit_362);
      }
      T3 = T5;
    } else {
      T3 = LITREF(lit_363);
    }
    T1 = T3;
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  T9 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T9,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_364));
  T10 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_365));
  T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T11);
}

FUNCODEDEF(fun_to_c_131) {
  P e_,f_,d_,out_;
  P x_2564F9945;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T2 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T3 = CALL2(1,VARREF(YisaQ),T4,VARREF(YevalSastYLruntime_referenceG));
    if (T3 != YPfalse) {
      T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_367));
    } else {
    }
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_368));
    x_2564F9945 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2564F9945,YPchr((P)40));
    T7 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T6 = CALL1(1,VARREF(YevalSastYreference_binding),T7);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),T6,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2564F9945,YPchr((P)44));
    T8 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
    T9 = CALL2(1,VARREF(YgooSioSportYput),x_2564F9945,YPchr((P)41));
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T1 = T10;
  } else {
    T1 = YPfalse;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_to_c_132) {
  P e_,f_,d_,out_;
  P x_2565F9947;
  P refF9946;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF9946 = T7;
  T1 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    T3 = CALL1(1,VARREF(YevalSastYreference_binding),refF9946);
    T2 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T3);
    if (T2 != YPfalse) {
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_370));
      x_2565F9947 = out_;
      CALL2(1,VARREF(YgooSioSportYput),x_2565F9947,YPchr((P)40));
      CALL2(1,VARREF(YevalSg2cYgen_ref),refF9946,out_);
      T4 = CALL2(1,VARREF(YgooSioSportYput),x_2565F9947,YPchr((P)41));
    } else {
      T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),refF9946,out_);
    }
    T6 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T0 = T6;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_133) {
  P e_,f_,d_,out_;
  P x_2566F9949;
  P refF9948;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T8 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  refF9948 = T8;
  T0 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),refF9948);
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_372));
    x_2566F9949 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2566F9949,YPchr((P)40));
    T3 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
    CALL2(1,VARREF(YgooSioSportYput),x_2566F9949,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF9948,out_);
    T4 = CALL2(1,VARREF(YgooSioSportYput),x_2566F9949,YPchr((P)41));
  } else {
    CALL2(1,VARREF(YevalSg2cYgen_ref),refF9948,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_373));
    T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_form),e_);
    T5 = CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  }
  T7 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T7);
}

FUNCODEDEF(fun_to_c_134) {
  P e_,f_,d_,out_;
  P x_2567F9951;
  P bindingF9950;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T6 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),e_);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYbox_reference),T6);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),T5);
  bindingF9950 = T4;
  T1 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),bindingF9950);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF9950,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_375));
    x_2567F9951 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2567F9951,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF9950,out_);
    T2 = CALL2(1,VARREF(YgooSioSportYput),x_2567F9951,YPchr((P)41));
    T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bbQ_135) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_bbQ_136) {
  P x_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(x_, 0);
  T3 = CALL1(1,VARREF(YevalSastYapplication_binding),x_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),T3);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_379));
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YevalSastYapplication_arguments),x_);
    T4 = CALL1(1,VARREF(YgooSmacrosY1st),T5);
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_bbQ_137) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),x_);
  T0 = CALL1(1,VARREF(YevalSg2cYbbQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_138) {
  P e_,f_,d_,out_;
  P x_2568F9955;
  P tstF9954;
  P tmpF9953;
  P bb_tstF9952;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T21 = CALL1(1,VARREF(YevalSg2cYbbQ),T22);
  bb_tstF9952 = T21;
  tmpF9953 = bb_tstF9952;
  if (tmpF9953 != YPfalse) {
    T19 = tmpF9953;
  } else {
    T20 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
    T19 = T20;
  }
  tstF9954 = T19;
  T0 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_382));
  CALL2(1,VARREF(YevalSg2cYgen_ref),tstF9954,out_);
  if (bb_tstF9952 != YPfalse) {
    T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_383));
  } else {
    x_2568F9955 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2568F9955,LITREF(lit_384));
    T2 = CALL0(1,VARREF(YevalSg2cYfalse_name));
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2568F9955,T2);
    T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2568F9955,LITREF(lit_385));
  }
  T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
  T5 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,T5,out_);
  T6 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T6 != YPfalse) {
    T7 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T7,out_);
    T8 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T8,out_);
    T9 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
    T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_386));
  T11 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
  T12 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T11,f_,T12,out_);
  T13 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
  if (T13 != YPfalse) {
    T14 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T14,out_);
    T15 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,T15,out_);
    T16 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    CALL2(1,VARREF(YevalSg2cYgen_ref),T16,out_);
    T17 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
  } else {
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_387));
UNLINK_STACK();
  QRET(T18);
}

FUNCODEDEF(fun_139) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_140) {
  P e_,f_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_139,3,f_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_141) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_142) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_143) {
  P e_,f_,d_,out_;
  P x_2576F9969;
  P x_2575F9968;
  P bF9967;
  P iF9966;
  P firstQF9965;
  P tmpF9964;
  P tmpF9963;
  P x_2571F9962;
  P x_2572F9961;
  P x_2573F9960;
  P x_2570F9959;
  P bindingsF9958;
  P x_2569F9957;
  P nF9956;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T38 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSg2cYTloop_arg_counterT),YPint((P)1));
  T37 = DYNSET(YevalSg2cYTloop_arg_counterT,T38);
  T36 = CALL2(1,VARREF(YevalSastYloop_continue_setter),T37,e_);
  nF9956 = T36;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2569F9957 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2569F9957,LITREF(lit_391));
  T0 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF9956);
  CALL2(1,VARREF(YgooSioSportYputs),x_2569F9957,T0);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),x_2569F9957,LITREF(lit_392));
  T35 = CALL1(1,VARREF(YevalSastYloop_bindings),e_);
  bindingsF9958 = T35;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF9958);
  T2 = CALL1(1,VARREF(Ynot),T3);
  if (T2 != YPfalse) {
    T4 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
    CALL2(1,VARREF(YevalSg2cYgen_depth),T4,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_393));
    x_2570F9959 = out_;
    T26 = fun_141;
    T27 = fun_142;
    T25 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T26,T27);
    T24 = CALL1(1,VARREF(YgooScolsScolYenum),T25);
    x_2573F9960 = T24;
    T29 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
    T28 = CALL1(1,VARREF(YgooScolsScolYenum),T29);
    x_2572F9961 = T28;
    T30 = CALL1(1,VARREF(YgooScolsScolYenum),bindingsF9958);
    x_2571F9962 = T30;
    LOOP_469: {
      P a469_0,a469_1,a469_2;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2573F9960);
      tmpF9963 = T11;
      if (tmpF9963 != YPfalse) {
        T7 = tmpF9963;
      } else {
        T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2572F9961);
        tmpF9964 = T10;
        if (tmpF9964 != YPfalse) {
          T8 = tmpF9964;
        } else {
          T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2571F9962);
          T8 = T9;
        }
        T7 = T8;
      }
      T6 = CALL1(1,VARREF(Ynot),T7);
      if (T6 != YPfalse) {
        T23 = CALL1(1,VARREF(YgooScolsScolYnow),x_2573F9960);
        firstQF9965 = T23;
        T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2572F9961);
        iF9966 = T22;
        T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2571F9962);
        bF9967 = T21;
        T12 = CALL1(1,VARREF(Ynot),firstQF9965);
        if (T12 != YPfalse) {
          T13 = CALL2(1,VARREF(YgooSioSportYput),x_2570F9959,YPchr((P)44));
        } else {
        }
        x_2575F9968 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2575F9968,LITREF(lit_396));
        T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF9956);
        CALL2(1,VARREF(YgooSioSportYputs),x_2575F9968,T14);
        CALL2(1,VARREF(YgooSioSportYputs),x_2575F9968,LITREF(lit_397));
        T16 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF9966);
        T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2575F9968,T16);
        T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2573F9960);
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2572F9961);
        T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2571F9962);
        a469_0 = T18;
        a469_1 = T19;
        a469_2 = T20;
        x_2573F9960 = a469_0;
        x_2572F9961 = a469_1;
        x_2571F9962 = a469_2;
        goto LOOP_469;
        T5 = T17;
      } else {
        T5 = YPfalse;
      }
    }
    T31 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
  } else {
  }
  T32 = CALL1(1,VARREF(YevalSastYloop_body),e_);
  T33 = CALL2(1,VARREF(YgooSmathYA),d_,YPint((P)1));
  CALL4(1,VARREF(YevalSg2cYto_c),T32,f_,T33,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2576F9969 = out_;
  T34 = CALL2(1,VARREF(YgooSioSportYputs),x_2576F9969,LITREF(lit_398));
UNLINK_STACK();
  QRET(T34);
}

FUNCODEDEF(fun_to_c_144) {
  P e_,f_,d_,out_;
  P x_2587F9986;
  P x_2586F9985;
  P bindingF9984;
  P iF9983;
  P tmpF9982;
  P x_2583F9981;
  P x_2584F9980;
  P x_2582F9979;
  P argF9978;
  P iF9977;
  P tmpF9976;
  P x_2579F9975;
  P x_2580F9974;
  P argF9973;
  P x_2577F9972;
  P nF9971;
  P loopF9970;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T46 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF9970 = T46;
  T45 = CALL1(1,VARREF(YevalSastYloop_continue),loopF9970);
  nF9971 = T45;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2577F9972 = T6;
  LOOP_470: {
    P a470_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2577F9972);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2577F9972);
      argF9973 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF9973,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2577F9972);
      a470_0 = T4;
      x_2577F9972 = a470_0;
      goto LOOP_470;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  T22 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2580F9974 = T21;
  T24 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2579F9975 = T23;
  LOOP_471: {
    P a471_0,a471_1;
    T12 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2580F9974);
    tmpF9976 = T12;
    if (tmpF9976 != YPfalse) {
      T10 = tmpF9976;
    } else {
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2579F9975);
      T10 = T11;
    }
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2580F9974);
      iF9977 = T20;
      T19 = CALL1(1,VARREF(YgooScolsScolYnow),x_2579F9975);
      argF9978 = T19;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      x_2582F9979 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2582F9979,LITREF(lit_400));
      T13 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF9971);
      CALL2(1,VARREF(YgooSioSportYputs),x_2582F9979,T13);
      CALL2(1,VARREF(YgooSioSportYputs),x_2582F9979,LITREF(lit_401));
      T14 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF9977);
      CALL2(1,VARREF(YgooSioSportYputs),x_2582F9979,T14);
      T15 = CALL2(1,VARREF(YgooSioSportYputs),x_2582F9979,LITREF(lit_402));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF9978,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2580F9974);
      T18 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2579F9975);
      a471_0 = T17;
      a471_1 = T18;
      x_2580F9974 = a471_0;
      x_2579F9975 = a471_1;
      goto LOOP_471;
      T8 = T16;
    } else {
      T8 = YPfalse;
    }
  }
  T39 = CALL1(1,VARREF(YgooScolsSrangeYfrom),YPint((P)0));
  T38 = CALL1(1,VARREF(YgooScolsScolYenum),T39);
  x_2584F9980 = T38;
  T41 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF9970);
  T40 = CALL1(1,VARREF(YgooScolsScolYenum),T41);
  x_2583F9981 = T40;
  LOOP_472: {
    P a472_0,a472_1;
    T29 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2584F9980);
    tmpF9982 = T29;
    if (tmpF9982 != YPfalse) {
      T27 = tmpF9982;
    } else {
      T28 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2583F9981);
      T27 = T28;
    }
    T26 = CALL1(1,VARREF(Ynot),T27);
    if (T26 != YPfalse) {
      T37 = CALL1(1,VARREF(YgooScolsScolYnow),x_2584F9980);
      iF9983 = T37;
      T36 = CALL1(1,VARREF(YgooScolsScolYnow),x_2583F9981);
      bindingF9984 = T36;
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF9984,out_);
      x_2586F9985 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2586F9985,LITREF(lit_403));
      T30 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF9971);
      CALL2(1,VARREF(YgooSioSportYputs),x_2586F9985,T30);
      CALL2(1,VARREF(YgooSioSportYputs),x_2586F9985,LITREF(lit_404));
      T32 = CALL1(1,VARREF(YgooSmathYnum_to_str),iF9983);
      T31 = CALL2(1,VARREF(YgooSioSportYputs),x_2586F9985,T32);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T34 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2584F9980);
      T35 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2583F9981);
      a472_0 = T34;
      a472_1 = T35;
      x_2584F9980 = a472_0;
      x_2583F9981 = a472_1;
      goto LOOP_472;
      T25 = T33;
    } else {
      T25 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  x_2587F9986 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2587F9986,LITREF(lit_405));
  T43 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF9971);
  T42 = CALL2(1,VARREF(YgooSioSportYputs),x_2587F9986,T43);
  T44 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T44);
}

FUNCODEDEF(fun_to_c_145) {
  P e_,f_,d_,out_;
  P argF9996;
  P x_2593F9995;
  P x_2592F9994;
  P x_2591F9993;
  P tmpF9992;
  P x_2590F9991;
  P argF9990;
  P x_2588F9989;
  P nF9988;
  P functionF9987;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T33 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  functionF9987 = T33;
  T32 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T31 = CALL1(1,VARREF(YgooStypesYlen),T32);
  nF9988 = T31;
  T0 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T7 = CALL1(1,VARREF(YgooScolsScolYenum),T8);
  x_2588F9989 = T7;
  LOOP_473: {
    P a473_0;
    T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2588F9989);
    T2 = CALL1(1,VARREF(Ynot),T3);
    if (T2 != YPfalse) {
      T6 = CALL1(1,VARREF(YgooScolsScolYnow),x_2588F9989);
      argF9990 = T6;
      CALL4(1,VARREF(YevalSg2cYto_c),argF9990,f_,d_,out_);
      T5 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2588F9989);
      a473_0 = T5;
      x_2588F9989 = a473_0;
      goto LOOP_473;
      T1 = T4;
    } else {
      T1 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2590F9991 = out_;
  T12 = CALL1(1,VARREF(Ynot),f_);
  tmpF9992 = T12;
  if (tmpF9992 != YPfalse) {
    T10 = tmpF9992;
  } else {
    T11 = CALL2(1,VARREF(YisaQ),f_,VARREF(YevalSastYLast_primitiveG));
    T10 = T11;
  }
  if (T10 != YPfalse) {
    T9 = LITREF(lit_407);
  } else {
    T9 = LITREF(lit_152);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2590F9991,T9);
  CALL2(1,VARREF(YgooSioSportYputs),x_2590F9991,LITREF(lit_408));
  T15 = CALL2(1,VARREF(YgooSmagYG),nF9988,VARREF(YevalSg2cYDnumber_call_templates));
  if (T15 != YPfalse) {
    T14 = LITREF(lit_409);
  } else {
    T14 = nF9988;
  }
  T13 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2590F9991,T14);
  x_2591F9993 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2591F9993,YPchr((P)40));
  T17 = CALL1(1,VARREF(YevalSastYapplication_knownQ),e_);
  if (T17 != YPfalse) {
    T16 = LITREF(lit_410);
  } else {
    T16 = LITREF(lit_411);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T16);
  T18 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T18,out_);
  T19 = CALL2(1,VARREF(YgooSmagYG),nF9988,VARREF(YevalSg2cYDnumber_call_templates));
  if (T19 != YPfalse) {
    x_2592F9994 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2592F9994,LITREF(lit_412));
    T20 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2592F9994,nF9988);
  } else {
  }
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2593F9995 = T27;
  LOOP_474: {
    P a474_0;
    T23 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2593F9995);
    T22 = CALL1(1,VARREF(Ynot),T23);
    if (T22 != YPfalse) {
      T26 = CALL1(1,VARREF(YgooScolsScolYnow),x_2593F9995);
      argF9996 = T26;
      CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF9996,out_);
      T25 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2593F9995);
      a474_0 = T25;
      x_2593F9995 = a474_0;
      goto LOOP_474;
      T21 = T24;
    } else {
      T21 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2591F9993,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T30);
}

FUNCODEDEF(fun_146) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_147) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_148) {
  P e_,f_,d_,out_;
  P xF10002;
  P firstQF10001;
  P tmpF10000;
  P x_2596F9999;
  P x_2597F9998;
  P x_2595F9997;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  x_2595F9997 = out_;
  T14 = fun_146;
  T15 = fun_147;
  T13 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T14,T15);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2597F9998 = T12;
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),e_);
  x_2596F9999 = T16;
  LOOP_475: {
    P a475_0,a475_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2597F9998);
    tmpF10000 = T4;
    if (tmpF10000 != YPfalse) {
      T2 = tmpF10000;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2596F9999);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2597F9998);
      firstQF10001 = T11;
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_2596F9999);
      xF10002 = T10;
      T5 = CALL1(1,VARREF(Ynot),firstQF10001);
      if (T5 != YPfalse) {
        T6 = CALL2(1,VARREF(YgooSioSportYput),x_2595F9997,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),xF10002,out_);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2597F9998);
      T9 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2596F9999);
      a475_0 = T8;
      a475_1 = T9;
      x_2597F9998 = a475_0;
      x_2596F9999 = a475_1;
      goto LOOP_475;
      T0 = T7;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_149) {
  P e_,f_,d_,out_;
  P x_2603F10013;
  P tmpF10012;
  P bindingF10011;
  P typeF10010;
  P initF10009;
  P tmpF10008;
  P tmpF10007;
  P x_2599F10006;
  P x_2600F10005;
  P x_2601F10004;
  P low_letQF10003;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T27 = CALL2(1,VARREF(YisaQ),e_,VARREF(YevalSastYLlow_letG));
  low_letQF10003 = T27;
  T20 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
  x_2601F10004 = T19;
  T22 = CALL1(1,VARREF(YevalSastYfix_let_types),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2600F10005 = T21;
  T24 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2599F10006 = T23;
  LOOP_476: {
    P a476_0,a476_1,a476_2;
    T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2601F10004);
    tmpF10007 = T6;
    if (tmpF10007 != YPfalse) {
      T2 = tmpF10007;
    } else {
      T5 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2600F10005);
      tmpF10008 = T5;
      if (tmpF10008 != YPfalse) {
        T3 = tmpF10008;
      } else {
        T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2599F10006);
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T18 = CALL1(1,VARREF(YgooScolsScolYnow),x_2601F10004);
      initF10009 = T18;
      T17 = CALL1(1,VARREF(YgooScolsScolYnow),x_2600F10005);
      typeF10010 = T17;
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2599F10006);
      bindingF10011 = T16;
      CALL4(1,VARREF(YevalSg2cYto_c),initF10009,f_,d_,out_);
      T9 = CALL1(1,VARREF(YevalStypistYunconstrained_typeQ),typeF10010);
      tmpF10012 = T9;
      if (tmpF10012 != YPfalse) {
        T8 = tmpF10012;
      } else {
        T8 = low_letQF10003;
      }
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        CALL4(1,VARREF(YevalSg2cYto_c),typeF10010,f_,d_,out_);
        CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
        CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_417));
        x_2603F10013 = out_;
        CALL2(1,VARREF(YgooSioSportYput),x_2603F10013,YPchr((P)40));
        CALL2(1,VARREF(YevalSg2cYgen_ref),initF10009,out_);
        CALL2(1,VARREF(YgooSioSportYput),x_2603F10013,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),typeF10010,out_);
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2603F10013,YPchr((P)41));
        T11 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF10011,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_418));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF10009,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2601F10004);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2600F10005);
      T15 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2599F10006);
      a476_0 = T13;
      a476_1 = T14;
      a476_2 = T15;
      x_2601F10004 = a476_0;
      x_2600F10005 = a476_1;
      x_2599F10006 = a476_2;
      goto LOOP_476;
      T0 = T12;
    } else {
      T0 = YPfalse;
    }
  }
  T26 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T25 = CALL4(1,VARREF(YevalSg2cYto_c),T26,f_,d_,out_);
UNLINK_STACK();
  QRET(T25);
}

FUNCODEDEF(fun_to_c_150) {
  P e_,f_,d_,out_;
  P bindingF10018;
  P initF10017;
  P tmpF10016;
  P x_2604F10015;
  P x_2605F10014;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T11 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T10 = CALL1(1,VARREF(YgooScolsScolYenum),T11);
  x_2605F10014 = T10;
  T13 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2604F10015 = T12;
  LOOP_477: {
    P a477_0,a477_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2605F10014);
    tmpF10016 = T4;
    if (tmpF10016 != YPfalse) {
      T2 = tmpF10016;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2604F10015);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_2605F10014);
      initF10017 = T9;
      T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2604F10015);
      bindingF10018 = T8;
      CALL5(1,VARREF(YevalSg2cYfunshell_to_c),bindingF10018,initF10017,YPfalse,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF10018,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_420));
      CALL2(1,VARREF(YevalSg2cYgen_ref),initF10017,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2605F10014);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2604F10015);
      a477_0 = T6;
      a477_1 = T7;
      x_2605F10014 = a477_0;
      x_2604F10015 = a477_1;
      goto LOOP_477;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  T14 = CALL4(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSg2cYfuninit_to_c),f_,d_,out_);
  T15 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  T16 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T14,T15,T16);
  T18 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T17 = CALL4(1,VARREF(YevalSg2cYto_c),T18,f_,d_,out_);
UNLINK_STACK();
  QRET(T17);
}

FUNCODEDEF(fun_to_c_151) {
  P e_,f_,d_,out_;
  P x_2607F10019;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_422));
  x_2607F10019 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2607F10019,YPchr((P)40));
  T1 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T1,out_);
  T2 = CALL2(1,VARREF(YgooSioSportYput),x_2607F10019,YPchr((P)41));
  T3 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T3);
}

FUNCODEDEF(fun_to_c_152) {
  P e_,f_,d_,out_;
  P x_2608F10020;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_424));
  x_2608F10020 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2608F10020,YPchr((P)40));
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2608F10020,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2608F10020,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_to_c_153) {
  P e_,f_,d_,out_;
  P x_2609F10021;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T1,f_,d_,out_);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T3,f_,d_,out_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T4,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_426));
  x_2609F10021 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_427));
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_428));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_429));
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T8,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T9 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T9,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)44));
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_2609F10021,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_154) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_155) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_to_c_156) {
  P e_,f_,d_,out_;
  P argF10032;
  P firstQF10031;
  P tmpF10030;
  P x_2615F10029;
  P x_2616F10028;
  P x_2614F10027;
  P x_2613F10026;
  P x_2612F10025;
  P argF10024;
  P x_2610F10023;
  P bindingF10022;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T31 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bindingF10022 = T31;
  T7 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),T7);
  x_2610F10023 = T6;
  LOOP_478: {
    P a478_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2610F10023);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2610F10023);
      argF10024 = T5;
      CALL4(1,VARREF(YevalSg2cYto_c),argF10024,f_,d_,out_);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2610F10023);
      a478_0 = T4;
      x_2610F10023 = a478_0;
      goto LOOP_478;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  x_2612F10025 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2612F10025,LITREF(lit_431));
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  T9 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T10);
  T8 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2612F10025,T9);
  x_2613F10026 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2613F10026,YPchr((P)40));
  x_2614F10027 = out_;
  T25 = fun_154;
  T26 = fun_155;
  T24 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T25,T26);
  T23 = CALL1(1,VARREF(YgooScolsScolYenum),T24);
  x_2616F10028 = T23;
  T28 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T27 = CALL1(1,VARREF(YgooScolsScolYenum),T28);
  x_2615F10029 = T27;
  LOOP_479: {
    P a479_0,a479_1;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2616F10028);
    tmpF10030 = T15;
    if (tmpF10030 != YPfalse) {
      T13 = tmpF10030;
    } else {
      T14 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2615F10029);
      T13 = T14;
    }
    T12 = CALL1(1,VARREF(Ynot),T13);
    if (T12 != YPfalse) {
      T22 = CALL1(1,VARREF(YgooScolsScolYnow),x_2616F10028);
      firstQF10031 = T22;
      T21 = CALL1(1,VARREF(YgooScolsScolYnow),x_2615F10029);
      argF10032 = T21;
      T16 = CALL1(1,VARREF(Ynot),firstQF10031);
      if (T16 != YPfalse) {
        T17 = CALL2(1,VARREF(YgooSioSportYput),x_2614F10027,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YevalSg2cYgen_ref),argF10032,out_);
      T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2616F10028);
      T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2615F10029);
      a479_0 = T19;
      a479_1 = T20;
      x_2616F10028 = a479_0;
      x_2615F10029 = a479_1;
      goto LOOP_479;
      T11 = T18;
    } else {
      T11 = YPfalse;
    }
  }
  T29 = CALL2(1,VARREF(YgooSioSportYput),x_2613F10026,YPchr((P)41));
  T30 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T30);
}

FUNCODEDEF(fun_157) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_158) {
  P e_,f_,d_,out_;
  P xF10038;
  P x_2620F10037;
  P x_2619F10036;
  P x_2618F10035;
  P fF10034;
  P nF10033;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T22 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  nF10033 = T21;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T19 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T20);
  fF10034 = T19;
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),nF10033,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYprogram_register),e_);
    if (T3 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
      CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
      CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF10034);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T2 = T4;
    } else {
      T2 = YPfalse;
    }
    T0 = T2;
  } else {
    T5 = FUNFAB(fun_157,3,fF10034,d_,out_);
    T6 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T5,T6);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_436));
    x_2618F10035 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2618F10035,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF10034);
    x_2619F10036 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2619F10036,LITREF(lit_437));
    T8 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF10033);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2619F10036,T8);
    T16 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_2620F10037 = T15;
    LOOP_480: {
      P a480_0;
      T11 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2620F10037);
      T10 = CALL1(1,VARREF(Ynot),T11);
      if (T10 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2620F10037);
        xF10038 = T14;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF10038,out_);
        T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2620F10037);
        a480_0 = T13;
        x_2620F10037 = a480_0;
        goto LOOP_480;
        T9 = T12;
      } else {
        T9 = YPfalse;
      }
    }
    T17 = CALL2(1,VARREF(YgooSioSportYput),x_2618F10035,YPchr((P)41));
    T18 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T0 = T18;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funshell_to_c_159) {
  P b_,e_,f_,d_,out_;
  P x_2624F10043;
  P x_2623F10042;
  P x_2622F10041;
  P fF10040;
  P nF10039;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T12 = CALL1(1,VARREF(YgooStypesYlen),T13);
  nF10039 = T12;
  T11 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_index),e_);
  T10 = CALL2(1,VARREF(YgooSmacrosYelt),DYNREF(YevalSg2cYTdefinitionsT),T11);
  fF10040 = T10;
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYEE),nF10039,YPint((P)0));
  if (T0 != YPfalse) {
    T1 = CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF10040);
  } else {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_440));
    x_2622F10041 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2622F10041,YPchr((P)40));
    x_2623F10042 = out_;
    T5 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),b_);
    if (T5 != YPfalse) {
      T4 = YPint((P)1);
    } else {
      T4 = YPint((P)0);
    }
    T3 = CALL1(1,VARREF(YgooSmathYnum_to_str),T4);
    T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2623F10042,T3);
    CALL2(1,VARREF(YgooSioSportYput),x_2622F10041,YPchr((P)44));
    CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,fF10040);
    CALL2(1,VARREF(YgooSioSportYput),x_2622F10041,YPchr((P)44));
    x_2624F10043 = out_;
    T7 = CALL1(1,VARREF(YgooSmathYnum_to_str),nF10039);
    T6 = CALL2(1,VARREF(YgooSioSportYputs),x_2624F10043,T7);
    T8 = CALL2(1,VARREF(YgooSioSportYput),x_2622F10041,YPchr((P)41));
  }
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_160) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_funinit_to_c_161) {
  P b_,e_,f_,d_,out_;
  P xF10048;
  P x_2627F10047;
  P x_2626F10046;
  P x_2625F10045;
  P nF10044;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(b_, 0);
  ARG(e_, 1);
  ARG(f_, 2);
  ARG(d_, 3);
  ARG(out_, 4);
  T17 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
  T16 = CALL1(1,VARREF(YgooStypesYlen),T17);
  nF10044 = T16;
  T2 = CALL2(1,VARREF(YgooSmacrosYEE),nF10044,YPint((P)0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = FUNFAB(fun_160,3,f_,d_,out_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    CALL2(1,VARREF(YgooSmacrosYdo),T3,T4);
    CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_444));
    x_2625F10045 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2625F10045,YPchr((P)40));
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,out_);
    x_2626F10046 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2626F10046,LITREF(lit_445));
    T5 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2626F10046,nF10044);
    T13 = CALL1(1,VARREF(YevalSast_linearizeYclosure_creation_free),e_);
    T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
    x_2627F10047 = T12;
    LOOP_481: {
      P a481_0;
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2627F10047);
      T7 = CALL1(1,VARREF(Ynot),T8);
      if (T7 != YPfalse) {
        T11 = CALL1(1,VARREF(YgooScolsScolYnow),x_2627F10047);
        xF10048 = T11;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL2(1,VARREF(YevalSg2cYgen_ref),xF10048,out_);
        T10 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2627F10047);
        a481_0 = T10;
        x_2627F10047 = a481_0;
        goto LOOP_481;
        T6 = T9;
      } else {
        T6 = YPfalse;
      }
    }
    T14 = CALL2(1,VARREF(YgooSioSportYput),x_2625F10045,YPchr((P)41));
    T15 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
    T0 = T15;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_162) {
  P e_,f_,d_,out_;
  P x_2629F10049;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,YPfalse,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_447));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2629F10049 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2629F10049,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T2 = CALL1(1,VARREF(YevalSastYbinding_module_name),T3);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T2);
  CALL2(1,VARREF(YgooSioSportYput),x_2629F10049,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_name),T5);
  CALL2(1,VARREF(YevalSg2cYgenerate_quotation),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_2629F10049,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  T7 = CALL2(1,VARREF(YgooSioSportYput),x_2629F10049,YPchr((P)41));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_out_list_builder_163) {
  P f_,out_,elts_;
  P eF10053;
  P x_2632F10052;
  P x_2631F10051;
  P x_2630F10050;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(f_, 0);
  ARG(out_, 1);
  ARG(elts_, 2);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),elts_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_450));
    T2 = CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
    T0 = T2;
  } else {
    T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_451));
    CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
    x_2630F10050 = out_;
    CALL2(1,VARREF(YgooSioSportYput),x_2630F10050,YPchr((P)40));
    x_2631F10051 = out_;
    T7 = CALL1(1,VARREF(YgooStypesYlen),elts_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2631F10051,T6);
    T14 = CALL1(1,VARREF(YgooScolsScolYenum),elts_);
    x_2632F10052 = T14;
    LOOP_482: {
      P a482_0;
      T10 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2632F10052);
      T9 = CALL1(1,VARREF(Ynot),T10);
      if (T9 != YPfalse) {
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_2632F10052);
        eF10053 = T13;
        CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
        CALL1(0,f_,eF10053);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2632F10052);
        a482_0 = T12;
        x_2632F10052 = a482_0;
        goto LOOP_482;
        T8 = T11;
      } else {
        T8 = YPfalse;
      }
    }
    T15 = CALL2(1,VARREF(YgooSioSportYput),x_2630F10050,YPchr((P)41));
    T0 = T15;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_164) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_ref),x_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gen_fab_list_165) {
  P out_,refs_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(refs_, 1);
  T1 = FUNFAB(fun_164,1,out_);
  T0 = CALL3(1,VARREF(YevalSg2cYout_list_builder),T1,out_,refs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_specs_166) {
  P out_,sig_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(sig_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreq_sig_specs),sig_);
  T0 = CALL2(1,VARREF(YevalSg2cYgen_fab_list),out_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_167) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL4(1,VARREF(YevalSg2cYto_c),x_,FREEREF(0),FREEREF(1),FREEREF(2));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_to_c_168) {
  P e_,f_,d_,out_;
  P x_2634F10054;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = FUNFAB(fun_167,3,f_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYsignature_specs),e_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T2,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T3 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_459));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T3);
  x_2634F10054 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)40));
  T4 = CALL1(1,VARREF(YevalSastYsignature_names),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)44));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_specs),out_,e_);
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYsignature_naryQ),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T5,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSastYsignature_arity),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T6,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSastYsignature_value),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T7,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)44));
  T8 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_460));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T8);
  T9 = CALL2(1,VARREF(YgooSioSportYput),x_2634F10054,YPchr((P)41));
  T10 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T10);
}

FUNCODEDEF(fun_to_c_169) {
  P e_,f_,d_,out_;
  P x_2635F10055;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(e_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),e_,d_,out_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_462));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T1);
  x_2635F10055 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)40));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_463));
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T2 = CALL1(1,VARREF(YevalSastYfunction_debug_name),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T2,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),e_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_464));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T4);
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_465));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T5);
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T6 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_466));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
  CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)44));
  T7 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_467));
  CALL2(1,VARREF(YgooSioSportYputs),out_,T7);
  T8 = CALL2(1,VARREF(YgooSioSportYput),x_2635F10055,YPchr((P)41));
  T9 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T9);
}

FUNCODEDEF(fun_generate_function_forwards_170) {
  P out_,definitions_;
  P defF10057;
  P x_2636F10056;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_470));
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),definitions_);
  x_2636F10056 = T6;
  LOOP_483: {
    P a483_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2636F10056);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2636F10056);
      defF10057 = T5;
      CALL2(1,VARREF(YevalSg2cYgenerate_function_forward),out_,defF10057);
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2636F10056);
      a483_0 = T4;
      x_2636F10056 = a483_0;
      goto LOOP_483;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_171) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_172) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_forward_173) {
  P out_,defn_;
  P iF10064;
  P firstQF10063;
  P tmpF10062;
  P x_2640F10061;
  P x_2641F10060;
  P x_2639F10059;
  P x_2638F10058;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  x_2638F10058 = out_;
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_473);
  } else {
    T0 = LITREF(lit_474);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2638F10058,T0);
  CALL2(1,VARREF(YgooSioSportYputs),x_2638F10058,LITREF(lit_475));
  T2 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_binding),T2);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2638F10058,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2638F10058,LITREF(lit_476));
  x_2639F10059 = out_;
  T18 = fun_171;
  T19 = fun_172;
  T17 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T18,T19);
  T16 = CALL1(1,VARREF(YgooScolsScolYenum),T17);
  x_2641F10060 = T16;
  T23 = CALL1(1,VARREF(YevalSastYfunction_bindings),defn_);
  T22 = CALL1(1,VARREF(YgooStypesYlen),T23);
  T21 = CALL1(1,VARREF(YgooScolsSseqYbelow),T22);
  T20 = CALL1(1,VARREF(YgooScolsScolYenum),T21);
  x_2640F10061 = T20;
  LOOP_484: {
    P a484_0,a484_1;
    T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2641F10060);
    tmpF10062 = T8;
    if (tmpF10062 != YPfalse) {
      T6 = tmpF10062;
    } else {
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2640F10061);
      T6 = T7;
    }
    T5 = CALL1(1,VARREF(Ynot),T6);
    if (T5 != YPfalse) {
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2641F10060);
      firstQF10063 = T15;
      T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2640F10061);
      iF10064 = T14;
      T9 = CALL1(1,VARREF(Ynot),firstQF10063);
      if (T9 != YPfalse) {
        T10 = CALL2(1,VARREF(YgooSioSportYput),x_2639F10059,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_479));
      T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2641F10060);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2640F10061);
      a484_0 = T12;
      a484_1 = T13;
      x_2641F10060 = a484_0;
      x_2640F10061 = a484_1;
      goto LOOP_484;
      T4 = T11;
    } else {
      T4 = YPfalse;
    }
  }
  T24 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_480));
UNLINK_STACK();
  QRET(T24);
}

FUNCODEDEF(fun_generate_function_binding_174) {
  P out_,defn_;
  P x_2644F10068;
  P nameF10067;
  P x_2643F10066;
  P nameF10065;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T17 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  nameF10065 = T17;
  T2 = CALL2(1,VARREF(YisaQ),nameF10065,VARREF(YevalSastYLmodule_bindingG));
  if (T2 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYbinding_kind),nameF10065);
    T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),LITREF(lit_483),T4);
    T1 = T3;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSg2cYmangle_binding),nameF10065);
    T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,T6);
    T0 = T5;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),nameF10065,YPfalse);
    if (T8 != YPfalse) {
      x_2643F10066 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2643F10066,LITREF(lit_484));
      T10 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T9 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2643F10066,T10);
      T7 = T9;
    } else {
      T15 = CALL2(1,VARREF(YisaQ),nameF10065,VARREF(YevalSastYLlocal_bindingG));
      if (T15 != YPfalse) {
        T16 = CALL1(1,VARREF(YevalSastYbinding_name),nameF10065);
        T14 = T16;
      } else {
        T14 = nameF10065;
      }
      nameF10067 = T14;
      x_2644F10068 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2644F10068,LITREF(lit_485));
      T11 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),nameF10067);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2644F10068,T11);
      CALL2(1,VARREF(YgooSioSportYputs),x_2644F10068,LITREF(lit_486));
      T13 = CALL1(1,VARREF(YevalSastYfunction_index),defn_);
      T12 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2644F10068,T13);
      T7 = T12;
    }
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_forward_175) {
  P out_,defn_;
  P boundQF10069;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(out_, 0);
  ARG(defn_, 1);
  T3 = CALL1(1,VARREF(YevalSastYfunction_binding),defn_);
  T2 = CALL2(1,VARREF(YisaQ),T3,VARREF(YevalSastYLmodule_bindingG));
  boundQF10069 = T2;
  if (boundQF10069 != YPfalse) {
    T0 = LITREF(lit_488);
  } else {
    T0 = LITREF(lit_489);
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,T0);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,defn_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_490));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_176) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL2(1,VARREF(YevalSg2cYgenerate_function_code),FREEREF(0),def_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_bodies_177) {
  P out_,definitions_;
  P T0,T1;
LINK_STACK();
  ARG(out_, 0);
  ARG(definitions_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_493));
  T1 = FUNFAB(fun_176,1,out_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,definitions_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_178) {
  P def_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(def_, 0);
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

FUNCODEDEF(fun_generate_functions_179) {
  P definitions_,f_,d_,out_;
  P T0,T1,T2;
LINK_STACK();
  ARG(definitions_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T1 = FUNFAB(fun_178,3,f_,d_,out_);
  T2 = CALL1(1,VARREF(YgooScolsSseqYrev),definitions_);
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_closure_structure_180) {
  P definition_,f_,d_,out_;
  P x_2647F10072;
  P x_2646F10071;
  P x_2645F10070;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(definition_, 0);
  ARG(f_, 1);
  ARG(d_, 2);
  ARG(out_, 3);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T0,f_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL3(1,VARREF(YevalSg2cYgen_result),definition_,d_,out_);
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  x_2645F10070 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2645F10070,LITREF(lit_500));
  T2 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_501));
  T1 = CALL2(1,VARREF(YgooSioSwriteYemit),x_2645F10070,T2);
  x_2646F10071 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)40));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_body_reference),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)44));
  T3 = CALL1(1,VARREF(YevalSastYfunction_debug_name),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)44));
  T4 = CALL1(1,VARREF(YevalSastYfunction_signature),definition_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T4,out_);
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_502));
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)44));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_503));
  CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)44));
  T5 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
  if (T5 != YPfalse) {
    x_2647F10072 = out_;
    CALL2(1,VARREF(YgooSioSportYputs),x_2647F10072,LITREF(lit_504));
    T7 = CALL1(1,VARREF(YevalSastYprogram_line),definition_);
    T6 = CALL1(1,VARREF(YgooSmathYnum_to_str),T7);
    CALL2(1,VARREF(YgooSioSportYputs),x_2647F10072,T6);
    T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2647F10072,LITREF(lit_505));
  } else {
    T10 = CALL1(1,VARREF(YevalSastYfunction_source),definition_);
    T9 = CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
  }
  T11 = CALL2(1,VARREF(YgooSioSportYput),x_2646F10071,YPchr((P)41));
  T12 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T12);
}

FUNCODEDEF(fun_generate_function_body_reference_181) {
  P out_,definition_;
  P T0;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_508));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_509));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_return_182) {
  P defn_,d_,out_;
  P T0,T1;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_512));
  T0 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T0,out_);
  T1 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_generate_return_183) {
  P defn_,d_,out_;
  P x_2648F10073;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(defn_, 0);
  ARG(d_, 1);
  ARG(out_, 2);
  CALL2(1,VARREF(YevalSg2cYgen_depth),d_,out_);
  T1 = CALL1(1,VARREF(YevalSastYfunction_value),defn_);
  T0 = CALL1(1,VARREF(YevalStypistYunconstrained_typeQ),T1);
  if (T0 != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)81));
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_514));
  x_2648F10073 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2648F10073,YPchr((P)40));
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),defn_);
  CALL2(1,VARREF(YevalSg2cYgen_ref),T3,out_);
  T4 = CALL2(1,VARREF(YgooSioSportYput),x_2648F10073,YPchr((P)41));
  T5 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_primitive_inlinableQ_184) {
  P e_;
  P tmpF10074;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  T4 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),T4,LITREF(lit_517));
  tmpF10074 = T3;
  if (tmpF10074 != YPfalse) {
    T0 = tmpF10074;
  } else {
    T2 = CALL1(1,VARREF(YevalSastYfunction_adjectives),e_);
    T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),T2,LITREF(lit_518));
    T0 = T1;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_185) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_186) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_generate_function_code_187) {
  P out_,e_;
  P bindingF10082;
  P firstQF10081;
  P tmpF10080;
  P x_2652F10079;
  P x_2653F10078;
  P x_2651F10077;
  P x_2650F10076;
  P x_2649F10075;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27;
LINK_STACK();
  ARG(out_, 0);
  ARG(e_, 1);
  x_2649F10075 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2649F10075,LITREF(lit_521));
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T0 = LITREF(lit_522);
  } else {
    T0 = LITREF(lit_152);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2649F10075,T0);
  T2 = CALL1(1,VARREF(YevalSg2cYprimitive_inlinableQ),e_);
  if (T2 != YPfalse) {
    T1 = LITREF(lit_523);
  } else {
    T1 = LITREF(lit_152);
  }
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2649F10075,T1);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2649F10075,LITREF(lit_524));
  T4 = CALL1(1,VARREF(YevalSastYfunction_binding),e_);
  CALL2(1,VARREF(YevalSg2cYbinding_Gc),T4,out_);
  x_2650F10076 = out_;
  CALL2(1,VARREF(YgooSioSportYput),x_2650F10076,YPchr((P)40));
  x_2651F10077 = out_;
  T19 = fun_185;
  T20 = fun_186;
  T18 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T19,T20);
  T17 = CALL1(1,VARREF(YgooScolsScolYenum),T18);
  x_2653F10078 = T17;
  T22 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  T21 = CALL1(1,VARREF(YgooScolsScolYenum),T22);
  x_2652F10079 = T21;
  LOOP_485: {
    P a485_0,a485_1;
    T9 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2653F10078);
    tmpF10080 = T9;
    if (tmpF10080 != YPfalse) {
      T7 = tmpF10080;
    } else {
      T8 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2652F10079);
      T7 = T8;
    }
    T6 = CALL1(1,VARREF(Ynot),T7);
    if (T6 != YPfalse) {
      T16 = CALL1(1,VARREF(YgooScolsScolYnow),x_2653F10078);
      firstQF10081 = T16;
      T15 = CALL1(1,VARREF(YgooScolsScolYnow),x_2652F10079);
      bindingF10082 = T15;
      T10 = CALL1(1,VARREF(Ynot),firstQF10081);
      if (T10 != YPfalse) {
        T11 = CALL2(1,VARREF(YgooSioSportYput),x_2651F10077,YPchr((P)44));
      } else {
      }
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_527));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),bindingF10082,out_);
      T13 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2653F10078);
      T14 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2652F10079);
      a485_0 = T13;
      a485_1 = T14;
      x_2653F10078 = a485_0;
      x_2652F10079 = a485_1;
      goto LOOP_485;
      T5 = T12;
    } else {
      T5 = YPfalse;
    }
  }
  T23 = CALL2(1,VARREF(YgooSioSportYput),x_2650F10076,YPchr((P)41));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_528));
  T24 = CALL1(1,VARREF(YevalSastYfunction_temporaries),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T24,out_);
  T25 = CALL1(1,VARREF(YevalSastYfunction_registers),e_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T25,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_529));
  T26 = CALL1(1,VARREF(YevalSastYfunction_body),e_);
  CALL4(1,VARREF(YevalSg2cYto_c),T26,e_,YPint((P)1),out_);
  CALL3(1,VARREF(YevalSg2cYgenerate_return),e_,YPint((P)1),out_);
  T27 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_530));
UNLINK_STACK();
  QRET(T27);
}

FUNCODEDEF(fun_dispatcherQ_188) {
  P definition_;
  P tmpF10085;
  P nameF10084;
  P bindingF10083;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(definition_, 0);
  T11 = CALL1(1,VARREF(YevalSastYfunction_binding),definition_);
  bindingF10083 = T11;
  T1 = CALL2(1,VARREF(YisaQ),bindingF10083,VARREF(YevalSastYLmodule_bindingG));
  if (T1 != YPfalse) {
    T10 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF10083);
    T9 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLstrG),T10);
    nameF10084 = T9;
    T8 = CALL2(1,VARREF(YgooSmathYE),nameF10084,LITREF(lit_533));
    tmpF10085 = T8;
    if (tmpF10085 != YPfalse) {
      T2 = tmpF10085;
    } else {
      T4 = CALL2(1,VARREF(YgooScolsSseqYfinds),nameF10084,LITREF(lit_534));
      T6 = CALL1(1,VARREF(YgooStypesYlen),nameF10084);
      T7 = CALL1(1,VARREF(YgooStypesYlen),LITREF(lit_535));
      T5 = CALL2(1,VARREF(YgooSmathY_),T6,T7);
      T3 = CALL2(1,VARREF(YgooSmathYE),T4,T5);
      T2 = T3;
    }
    T0 = T2;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_189) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPtrue);
}

FUNCODEDEF(fun_190) {
  P x_;
LINK_STACK();
  NARGS(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_191) {
  P b_;
  P x_2659F10086;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL2(1,VARREF(YisaQ),b_,VARREF(YevalSastYLbindingG));
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),FREEREF(0));
    T2 = CALL1(1,VARREF(YevalSastYbinding_dottedQ),b_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_544));
    } else {
      T4 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_545));
    }
    CALL2(1,VARREF(YevalSg2cYbinding_Gc),b_,FREEREF(0));
    x_2659F10086 = FREEREF(0);
    CALL2(1,VARREF(YgooSioSportYputs),x_2659F10086,LITREF(lit_546));
    T6 = BOXGET(FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmathYnum_to_str),T6);
    CALL2(1,VARREF(YgooSioSportYputs),x_2659F10086,T5);
    T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2659F10086,LITREF(lit_547));
    CALL2(1,VARREF(YgooSioSportYputs),FREEREF(0),LITREF(lit_264));
    T10 = BOXGET(FREEREF(1));
    T9 = CALL2(1,VARREF(YgooSmathYA),T10,YPint((P)1));
    T8 = BOXPUT(T9,FREEREF(1));
    T0 = T8;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_function_code_192) {
  P out_,definition_;
  P bF10094;
  P firstQF10093;
  P tmpF10092;
  P x_2656F10091;
  P x_2657F10090;
  P x_2655F10089;
  P bindingsF10088;
  P offsetF10087;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30;
LINK_STACK();
  ARG(out_, 0);
  ARG(definition_, 1);
  offsetF10087 = YPint((P)0);
  offsetF10087 = BOXFAB(offsetF10087);
  T30 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
  bindingsF10088 = T30;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_537));
  CALL2(1,VARREF(YevalSg2cYgenerate_function_binding),out_,definition_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_538));
  T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF10088);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_539));
    x_2655F10089 = out_;
    T17 = fun_189;
    T18 = fun_190;
    T16 = CALL2(1,VARREF(YgooScolsSstepYfirst_then),T17,T18);
    T15 = CALL1(1,VARREF(YgooScolsScolYenum),T16);
    x_2657F10090 = T15;
    T20 = CALL1(1,VARREF(YevalSastYfunction_bindings),definition_);
    T19 = CALL1(1,VARREF(YgooScolsScolYenum),T20);
    x_2656F10091 = T19;
    LOOP_486: {
      P a486_0,a486_1;
      T7 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2657F10090);
      tmpF10092 = T7;
      if (tmpF10092 != YPfalse) {
        T5 = tmpF10092;
      } else {
        T6 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2656F10091);
        T5 = T6;
      }
      T4 = CALL1(1,VARREF(Ynot),T5);
      if (T4 != YPfalse) {
        T14 = CALL1(1,VARREF(YgooScolsScolYnow),x_2657F10090);
        firstQF10093 = T14;
        T13 = CALL1(1,VARREF(YgooScolsScolYnow),x_2656F10091);
        bF10094 = T13;
        T8 = CALL1(1,VARREF(Ynot),firstQF10093);
        if (T8 != YPfalse) {
          T9 = CALL2(1,VARREF(YgooSioSportYput),x_2655F10089,YPchr((P)44));
        } else {
        }
        CALL2(1,VARREF(YevalSg2cYbinding_Gc),bF10094,out_);
        T11 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2657F10090);
        T12 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2656F10091);
        a486_0 = T11;
        a486_1 = T12;
        x_2657F10090 = a486_0;
        x_2656F10091 = a486_1;
        goto LOOP_486;
        T3 = T10;
      } else {
        T3 = YPfalse;
      }
    }
    T21 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
  } else {
  }
  T22 = CALL1(1,VARREF(YevalSastYfunction_temporaries),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_local_temporaries),T22,out_);
  T23 = CALL1(1,VARREF(YevalSastYfunction_registers),definition_);
  CALL2(1,VARREF(YevalSg2cYgenerate_registers),T23,out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_542));
  T24 = FUNFAB(fun_191,2,out_,offsetF10087);
  CALL2(1,VARREF(YgooSmacrosYdo),T24,bindingsF10088);
  T25 = CALL1(1,VARREF(YevalSastYfunction_body),definition_);
  CALL4(1,VARREF(YevalSg2cYto_c),T25,definition_,YPint((P)1),out_);
  T27 = CALL1(1,VARREF(YevalSg2cYdispatcherQ),definition_);
  T26 = CALL1(1,VARREF(Ynot),T27);
  if (T26 != YPfalse) {
    T28 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_548));
  } else {
  }
  CALL3(1,VARREF(YevalSg2cYgenerate_return),definition_,YPint((P)1),out_);
  T29 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_549));
UNLINK_STACK();
  QRET(T29);
}

FUNCODEDEF(fun_generate_local_temporaries_193) {
  P temps_,out_;
  P tempF10096;
  P x_2660F10095;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(temps_, 0);
  ARG(out_, 1);
  T6 = CALL1(1,VARREF(YgooScolsScolYenum),temps_);
  x_2660F10095 = T6;
  LOOP_487: {
    P a487_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2660F10095);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T5 = CALL1(1,VARREF(YgooScolsScolYnow),x_2660F10095);
      tempF10096 = T5;
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_552));
      CALL2(1,VARREF(YevalSg2cYbinding_Gc),tempF10096,out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_264));
      T4 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2660F10095);
      a487_0 = T4;
      x_2660F10095 = a487_0;
      goto LOOP_487;
      T0 = T3;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_registers_194) {
  P regs_,out_;
  P tmpF10101;
  P iF10100;
  P jF10099;
  P jF10098;
  P nregsF10097;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(regs_, 0);
  ARG(out_, 1);
  T14 = CALL1(1,VARREF(YgooStypesYlen),regs_);
  nregsF10097 = T14;
  jF10098 = YPint((P)0);
  LOOP_488: {
    P a488_0;
    T1 = CALL2(1,VARREF(YgooSmagYL),jF10098,nregsF10097);
    if (T1 != YPfalse) {
      CALL2(1,VARREF(YevalSg2cYgen_depth),YPint((P)1),out_);
      CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_555));
      jF10099 = jF10098;
      iF10100 = YPint((P)0);
      LOOP_489: {
        P a489_0,a489_1;
        T5 = CALL2(1,VARREF(YgooSmathYE),iF10100,VARREF(YevalSg2cYTregisters_per_lineT));
        tmpF10101 = T5;
        if (tmpF10101 != YPfalse) {
          T3 = tmpF10101;
        } else {
          T4 = CALL2(1,VARREF(YgooSmathYE),jF10099,nregsF10097);
          T3 = T4;
        }
        if (T3 != YPfalse) {
          CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_556));
          a488_0 = jF10099;
          jF10098 = a488_0;
          goto LOOP_488;
          T2 = T6;
        } else {
          T8 = CALL2(1,VARREF(YgooSmathYE),iF10100,YPint((P)0));
          T7 = CALL1(1,VARREF(Ynot),T8);
          if (T7 != YPfalse) {
            T9 = CALL2(1,VARREF(YgooSioSportYput),out_,YPchr((P)44));
          } else {
          }
          T10 = CALL2(1,VARREF(YgooSmacrosYelt),regs_,jF10099);
          CALL2(1,VARREF(YevalSg2cYgen_ref),T10,out_);
          T12 = CALL2(1,VARREF(YgooSmathYA),jF10099,YPint((P)1));
          T13 = CALL2(1,VARREF(YgooSmathYA),iF10100,YPint((P)1));
          a489_0 = T12;
          a489_1 = T13;
          jF10099 = a489_0;
          iF10100 = a489_1;
          goto LOOP_489;
          T2 = T11;
        }
      }
      T0 = T2;
    } else {
      T0 = YPfalse;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_info_name_195) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_559),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_maybe_declare_196) {
  P modname_;
  P x_2662F10102;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(modname_, 0);
  T2 = CALL3(1,VARREF(YgooScolsScolYelt_or),FREEREF(0),modname_,YPfalse);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    CALL3(1,VARREF(YgooScolsScolxYelt_setter),YPtrue,FREEREF(0),modname_);
    x_2662F10102 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2662F10102,LITREF(lit_564));
    T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),modname_);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2662F10102,T3);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2662F10102,LITREF(lit_565));
    T0 = T4;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_197) {
  P binding_;
  P home_modF10103;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(binding_, 0);
  T4 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
  home_modF10103 = T4;
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T3 = CALL1(0,FREEREF(1),home_modF10103);
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYdeclare_imported_module_infos) {
  P out_,mod_;
  P maybe_declareF10106;
  P envF10105;
  P seenF10104;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T7 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)50));
  seenF10104 = T7;
  T6 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF10105 = T6;
  T5 = FUNSHELL(0,fun_maybe_declare_196,2);
  maybe_declareF10106 = T5;
  FUNINIT(maybe_declareF10106, 2,seenF10104,out_);
  T1 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF10105);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),T1);
  CALL2(1,VARREF(YgooSmacrosYdo),maybe_declareF10106,T0);
  T3 = FUNFAB(fun_197,2,mod_,maybe_declareF10106);
  T4 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  T2 = CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T3,T4);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_199) {
  P local_name_,binding_;
  P x_2666F10107;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(local_name_, 0);
  ARG(binding_, 1);
  T2 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    x_2666F10107 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2666F10107,LITREF(lit_576));
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T3 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T4);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2666F10107,T3);
    CALL2(1,VARREF(YgooSioSportYputs),x_2666F10107,LITREF(lit_577));
    T6 = CALL1(1,VARREF(YevalSastYbinding_module_name),binding_);
    T5 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),T6);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2666F10107,T5);
    CALL2(1,VARREF(YgooSioSportYputs),x_2666F10107,LITREF(lit_578));
    T9 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),T9,local_name_);
    if (T8 != YPfalse) {
      T7 = LITREF(lit_579);
    } else {
      T10 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),local_name_);
      T7 = T10;
    }
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2666F10107,T7);
    T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2666F10107,LITREF(lit_580));
    T0 = T11;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_200) {
  P binding_;
  P x_2671F10112;
  P x_2670F10111;
  P x_2669F10110;
  P x_2668F10109;
  P x_2667F10108;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(binding_, 0);
  T1 = CALL2(1,VARREF(YevalSastYbinding_native_toQ),binding_,FREEREF(0));
  if (T1 != YPfalse) {
    x_2667F10108 = FREEREF(1);
    CALL2(1,VARREF(YgooSioSportYputs),x_2667F10108,LITREF(lit_584));
    T3 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
    T2 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T3);
    CALL2(1,VARREF(YgooSioSwriteYemit),x_2667F10108,T2);
    T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2667F10108,LITREF(lit_585));
    T14 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
    x_2668F10109 = T14;
    x_2669F10110 = VARREF(YgooSmacrosYEE);
    T6 = CALL2(1,x_2669F10110,x_2668F10109,LITREF(lit_147));
    if (T6 != YPfalse) {
      x_2670F10111 = FREEREF(1);
      CALL2(1,VARREF(YgooSioSportYputs),x_2670F10111,LITREF(lit_586));
      T7 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2670F10111,T7);
      T8 = CALL2(1,VARREF(YgooSioSportYputs),x_2670F10111,LITREF(lit_587));
      T5 = T8;
    } else {
      T10 = CALL2(1,x_2669F10110,x_2668F10109,LITREF(lit_149));
      if (T10 != YPfalse) {
        x_2671F10112 = FREEREF(1);
        CALL2(1,VARREF(YgooSioSportYputs),x_2671F10112,LITREF(lit_588));
        T11 = CALL1(1,VARREF(YevalSg2cYmangle_binding),binding_);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2671F10112,T11);
        T12 = CALL2(1,VARREF(YgooSioSportYputs),x_2671F10112,LITREF(lit_589));
        T9 = T12;
      } else {
        T13 = CALL2(1,VARREF(YgooSioSportYputs),FREEREF(1),LITREF(lit_590));
        T9 = T13;
      }
      T5 = T9;
    }
    T0 = T5;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSg2cYgenerate_module_info) {
  P out_,mod_;
  P x_2677F10128;
  P x_2676F10127;
  P x_2675F10126;
  P x_2674F10125;
  P bindingF10124;
  P exported_asF10123;
  P tup70F10122;
  P x_2672F10121;
  P x_2665F10120;
  P nF10119;
  P x_2663F10118;
  P uses_namesF10117;
  P usesF10116;
  P envF10115;
  P info_nameF10114;
  P nameF10113;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T41 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF10113 = T41;
  T40 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF10113);
  info_nameF10114 = T40;
  T39 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF10115 = T39;
  T38 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF10115);
  usesF10116 = T38;
  T37 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF10116);
  uses_namesF10117 = T37;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_569));
  CALL2(1,VARREF(YevalSg2cYdeclare_imported_module_infos),out_,mod_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_570));
  T8 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF10117);
  x_2663F10118 = T8;
  LOOP_490: {
    P a490_0;
    T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2663F10118);
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooScolsScolYnow),x_2663F10118);
      nF10119 = T7;
      x_2665F10120 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2665F10120,LITREF(lit_571));
      T3 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nF10119);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2665F10120,T3);
      T4 = CALL2(1,VARREF(YgooSioSportYputs),x_2665F10120,LITREF(lit_572));
      T6 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2663F10118);
      a490_0 = T6;
      x_2663F10118 = a490_0;
      goto LOOP_490;
      T0 = T5;
    } else {
      T0 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_573));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_574));
  T9 = FUNFAB(fun_199,2,mod_,out_);
  T10 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_named_static_global_bindings),T9,T10);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_581));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_582));
  T11 = FUNFAB(fun_200,2,mod_,out_);
  T12 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  CALL2(1,VARREF(YevalSastYdo_static_global_bindings),T11,T12);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_591));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_592));
  T31 = CALL1(1,VARREF(YevalSastYmodule_exports),mod_);
  T30 = CALL1(1,VARREF(YgooScolsScolYenum),T31);
  x_2672F10121 = T30;
  LOOP_491: {
    P a491_0;
    T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2672F10121);
    T14 = CALL1(1,VARREF(Ynot),T15);
    if (T14 != YPfalse) {
      T28 = CALL1(1,VARREF(YgooScolsScolYnow_key),x_2672F10121);
      T29 = CALL1(1,VARREF(YgooScolsScolYnow),x_2672F10121);
      T27 = CALL2(1,VARREF(Ytup),T28,T29);
      tup70F10122 = T27;
      T26 = CALL2(1,VARREF(YgooSmacrosYelt),tup70F10122,YPint((P)0));
      exported_asF10123 = T26;
      T25 = CALL2(1,VARREF(YgooSmacrosYelt),tup70F10122,YPint((P)1));
      bindingF10124 = T25;
      x_2674F10125 = out_;
      CALL2(1,VARREF(YgooSioSportYputs),x_2674F10125,LITREF(lit_593));
      T17 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF10124);
      T16 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),T17);
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2674F10125,T16);
      CALL2(1,VARREF(YgooSioSportYputs),x_2674F10125,LITREF(lit_594));
      T20 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF10124);
      T19 = CALL2(1,VARREF(YgooSmacrosYEE),T20,exported_asF10123);
      if (T19 != YPfalse) {
        T18 = LITREF(lit_595);
      } else {
        T21 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),exported_asF10123);
        T18 = T21;
      }
      CALL2(1,VARREF(YgooSioSwriteYemit),x_2674F10125,T18);
      T22 = CALL2(1,VARREF(YgooSioSportYputs),x_2674F10125,LITREF(lit_596));
      T24 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2672F10121);
      a491_0 = T24;
      x_2672F10121 = a491_0;
      goto LOOP_491;
      T13 = T23;
    } else {
      T13 = YPfalse;
    }
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_597));
  x_2675F10126 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2675F10126,LITREF(lit_598));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2675F10126,info_nameF10114);
  T32 = CALL2(1,VARREF(YgooSioSportYputs),x_2675F10126,LITREF(lit_599));
  x_2676F10127 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2676F10127,LITREF(lit_600));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2676F10127,info_nameF10114);
  T33 = CALL2(1,VARREF(YgooSioSportYputs),x_2676F10127,LITREF(lit_601));
  x_2677F10128 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2677F10128,LITREF(lit_602));
  T34 = CALL1(1,VARREF(YevalSg2cYmangle_string_literal),nameF10113);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2677F10128,T34);
  T35 = CALL2(1,VARREF(YgooSioSportYputs),x_2677F10128,LITREF(lit_603));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_604));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_605));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_606));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_607));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_608));
  T36 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_609));
UNLINK_STACK();
  QRET(T36);
}

FUNCODEDEF(fun_module_init_name_202) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmangle_raw_name),name_);
  T0 = CALL2(1,VARREF(YgooSmacrosYcat),LITREF(lit_612),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_module_init_decl_203) {
  P name_;
  P T0,T1;
LINK_STACK();
  ARG(name_, 0);
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),name_);
  T0 = CALL3(1,VARREF(YgooSmacrosYcat),LITREF(lit_615),T1,LITREF(lit_616));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_generate_module_init_204) {
  P out_,mod_,form_;
  P x_2685F10141;
  P nF10140;
  P x_2683F10139;
  P x_2682F10138;
  P x_2681F10137;
  P x_2680F10136;
  P nF10135;
  P x_2678F10134;
  P uses_namesF10133;
  P usesF10132;
  P envF10131;
  P init_declF10130;
  P nameF10129;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  ARG(form_, 2);
  if (DYNREF(YevalSg2cYTdynamic_linkingQT) != YPfalse) {
    T28 = LITREF(lit_619);
  } else {
    T29 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
    T28 = T29;
  }
  nameF10129 = T28;
  T27 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF10129);
  init_declF10130 = T27;
  T26 = CALL1(1,VARREF(YevalSastYmodule_target_environment),mod_);
  envF10131 = T26;
  T25 = CALL1(1,VARREF(YevalSastYenvironment_uses_modules),envF10131);
  usesF10132 = T25;
  T24 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYmodule_name),usesF10132);
  uses_namesF10133 = T24;
  T0 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T0 != YPfalse) {
    CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_620));
    T9 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF10133);
    x_2678F10134 = T9;
    LOOP_492: {
      P a492_0;
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2678F10134);
      T2 = CALL1(1,VARREF(Ynot),T3);
      if (T2 != YPfalse) {
        T8 = CALL1(1,VARREF(YgooScolsScolYnow),x_2678F10134);
        nF10135 = T8;
        x_2680F10136 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2680F10136,LITREF(lit_621));
        T4 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nF10135);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2680F10136,T4);
        T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2680F10136,LITREF(lit_622));
        T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2678F10134);
        a492_0 = T7;
        x_2678F10134 = a492_0;
        goto LOOP_492;
        T1 = T6;
      } else {
        T1 = YPfalse;
      }
    }
  } else {
  }
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_623));
  x_2681F10137 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2681F10137,LITREF(lit_624));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2681F10137,init_declF10130);
  T10 = CALL2(1,VARREF(YgooSioSportYputs),x_2681F10137,LITREF(lit_625));
  x_2682F10138 = out_;
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2682F10138,init_declF10130);
  T11 = CALL2(1,VARREF(YgooSioSportYputs),x_2682F10138,LITREF(lit_626));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_627));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_628));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_629));
  T12 = CALL1(1,VARREF(Ynot),DYNREF(YevalSg2cYTdynamic_linkingQT));
  if (T12 != YPfalse) {
    T21 = CALL1(1,VARREF(YgooScolsScolYenum),uses_namesF10133);
    x_2683F10139 = T21;
    LOOP_493: {
      P a493_0;
      T15 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2683F10139);
      T14 = CALL1(1,VARREF(Ynot),T15);
      if (T14 != YPfalse) {
        T20 = CALL1(1,VARREF(YgooScolsScolYnow),x_2683F10139);
        nF10140 = T20;
        x_2685F10141 = out_;
        CALL2(1,VARREF(YgooSioSportYputs),x_2685F10141,LITREF(lit_630));
        T16 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nF10140);
        CALL2(1,VARREF(YgooSioSwriteYemit),x_2685F10141,T16);
        T17 = CALL2(1,VARREF(YgooSioSportYputs),x_2685F10141,LITREF(lit_631));
        T19 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2683F10139);
        a493_0 = T19;
        x_2683F10139 = a493_0;
        goto LOOP_493;
        T13 = T18;
      } else {
        T13 = YPfalse;
      }
    }
    T22 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_632));
  } else {
  }
  CALL4(1,VARREF(YevalSg2cYto_c),form_,YPfalse,YPint((P)1),out_);
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_633));
  T23 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_634));
UNLINK_STACK();
  QRET(T23);
}

FUNCODEDEF(fun_generate_main_205) {
  P out_,mod_;
  P x_2690F10148;
  P x_2689F10147;
  P x_2688F10146;
  P x_2687F10145;
  P x_2686F10144;
  P info_nameF10143;
  P nameF10142;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(out_, 0);
  ARG(mod_, 1);
  T10 = CALL1(1,VARREF(YevalSastYmodule_name),mod_);
  nameF10142 = T10;
  T9 = CALL1(1,VARREF(YevalSg2cYmodule_info_name),nameF10142);
  info_nameF10143 = T9;
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_637));
  x_2686F10144 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2686F10144,LITREF(lit_638));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2686F10144,info_nameF10143);
  T0 = CALL2(1,VARREF(YgooSioSportYputs),x_2686F10144,LITREF(lit_639));
  x_2687F10145 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2687F10145,LITREF(lit_640));
  T1 = CALL1(1,VARREF(YevalSg2cYmodule_init_decl),nameF10142);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2687F10145,T1);
  T2 = CALL2(1,VARREF(YgooSioSportYputs),x_2687F10145,LITREF(lit_641));
  x_2688F10146 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2688F10146,LITREF(lit_642));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2688F10146,info_nameF10143);
  T3 = CALL2(1,VARREF(YgooSioSportYputs),x_2688F10146,LITREF(lit_643));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_644));
  x_2689F10147 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2689F10147,LITREF(lit_645));
  T4 = CALL1(1,VARREF(YevalSg2cYmangle_boot_name),LITREF(lit_646));
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2689F10147,T4);
  T5 = CALL2(1,VARREF(YgooSioSportYputs),x_2689F10147,LITREF(lit_647));
  x_2690F10148 = out_;
  CALL2(1,VARREF(YgooSioSportYputs),x_2690F10148,LITREF(lit_648));
  T6 = CALL1(1,VARREF(YevalSg2cYmodule_init_name),nameF10142);
  CALL2(1,VARREF(YgooSioSwriteYemit),x_2690F10148,T6);
  T7 = CALL2(1,VARREF(YgooSioSportYputs),x_2690F10148,LITREF(lit_649));
  CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_650));
  T8 = CALL2(1,VARREF(YgooSioSportYputs),out_,LITREF(lit_651));
UNLINK_STACK();
  QRET(T8);
}

P YevalSg2cY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110;
DEFCREGS();
  DYNDEFSET(YevalSg2cYTdefinitionsT,YPfalse);
  DYNDEFSET(YevalSg2cYTdynamic_linkingQT,YPfalse);
  lit_0 = YPPsym((P)"<g2c-module-loader>");
  T1 = (P)YPpair(VARREF(YevalSastYLmodule_loaderG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSg2cYLg2c_module_loaderG,T0);
  lit_1 = YPPsym((P)"module-loader-appname");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_appname_0 = YPmet(FUNCODEREF(fun_module_loader_appname_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(30));
  T4 = VARREF_OR(YevalSg2cYmodule_loader_appname,YPfalse);
  T5 = fun_module_loader_appname_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYmodule_loader_appname,T3);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_appname),YPfalse,VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_3 = YPPsym((P)"module-loader-app-modname");
  lit_4 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_loader_app_modname_1 = YPmet(FUNCODEREF(fun_module_loader_app_modname_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(31));
  T8 = VARREF_OR(YevalSg2cYmodule_loader_app_modname,YPfalse);
  T9 = fun_module_loader_app_modname_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYmodule_loader_app_modname,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YevalSg2cYmodule_loader_app_modname),YPfalse,VARREF(YLsymG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<g2c-module>");
  T11 = (P)YPpair(VARREF(YevalSastYLmoduleG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSg2cYLg2c_moduleG,T10);
  lit_6 = YPPsym((P)"module-src-file");
  lit_7 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_src_file_2 = YPmet(FUNCODEREF(fun_module_src_file_2),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(34));
  T14 = VARREF_OR(YevalSg2cYmodule_src_file,YPfalse);
  T15 = fun_module_src_file_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSg2cYmodule_src_file,T13);
  lit_8 = YPPsym((P)"module-src-file-setter");
  lit_9 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLstrG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_src_file_setter_3 = YPmet(FUNCODEREF(fun_module_src_file_setter_3),LITREF(lit_8),T16,ENVNUL,PNUL,sloc(34));
  T18 = VARREF_OR(YevalSg2cYmodule_src_file_setter,YPfalse);
  T19 = fun_module_src_file_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSg2cYmodule_src_file_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_src_file),VARREF(YevalSg2cYmodule_src_file_setter),VARREF(YLstrG),VARREF(YPprop_unbound_error));
  lit_10 = YPPsym((P)"module-mtime");
  lit_11 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_mtime_4 = YPmet(FUNCODEREF(fun_module_mtime_4),LITREF(lit_10),T20,ENVNUL,PNUL,sloc(35));
  T22 = VARREF_OR(YevalSg2cYmodule_mtime,YPfalse);
  T23 = fun_module_mtime_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYmodule_mtime,T21);
  lit_12 = YPPsym((P)"module-mtime-setter");
  lit_13 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLfloG),VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_module_mtime_setter_5 = YPmet(FUNCODEREF(fun_module_mtime_setter_5),LITREF(lit_12),T24,ENVNUL,PNUL,sloc(35));
  T26 = VARREF_OR(YevalSg2cYmodule_mtime_setter,YPfalse);
  T27 = fun_module_mtime_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYmodule_mtime_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSg2cYLg2c_moduleG),VARREF(YevalSg2cYmodule_mtime),VARREF(YevalSg2cYmodule_mtime_setter),VARREF(YLfloG),VARREF(YPprop_unbound_error));
  lit_14 = YPPsym((P)"module-loader-module-type");
  lit_15 = YPPlist(1,YPPsym((P)"loader"));
  T28 = YPsig(LITREF(lit_15),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLtypeG),Ynil);
  fun_module_loader_module_type_6 = YPmet(FUNCODEREF(fun_module_loader_module_type_6),LITREF(lit_14),T28,ENVNUL,PNUL,sloc(37));
  T30 = VARREF_OR(YevalSastYmodule_loader_module_type,YPfalse);
  T31 = fun_module_loader_module_type_6;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSastYmodule_loader_module_type,T29);
  lit_16 = YPPsym((P)"load-module");
  lit_17 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"name"));
  lit_18 = YPsb((P)"START");
  lit_19 = YPsb((P)"OPTIMIZE");
  lit_20 = Ynil;
  lit_21 = YPPlist(1,YPPsym((P)"name"));
  lit_22 = YPsb((P)"EMIT");
  T37 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_7 = YPmet(FUNCODEREF(fun_7),YPfalse,T37,ENVNUL,PNUL,sloc(61));
  T36 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T36,ENVNUL,PNUL,sloc(61));
  T35 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_9 = YPmet(FUNCODEREF(fun_9),YPfalse,T35,ENVNUL,PNUL,sloc(60));
  T34 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T34,ENVNUL,PNUL,sloc(60));
  T33 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_11 = YPmet(FUNCODEREF(fun_11),YPfalse,T33,ENVNUL,PNUL,sloc(63));
  T32 = YPsig(LITREF(lit_17),YPPlist(2,VARREF(YevalSg2cYLg2c_module_loaderG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSastYLmoduleG),Ynil);
  fun_load_module_12 = YPmet(FUNCODEREF(fun_load_module_12),LITREF(lit_16),T32,ENVNUL,PNUL,sloc(42));
  T39 = VARREF_OR(YevalSastYload_module,YPfalse);
  T40 = fun_load_module_12;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSastYload_module,T38);
  lit_23 = YPPsym((P)"module-up-to-date?");
  lit_24 = YPPlist(1,YPPsym((P)"mod"));
  T41 = YPsig(LITREF(lit_24),YPPlist(1,VARREF(YevalSg2cYLg2c_moduleG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  YevalSg2cYmodule_up_to_dateQ = YPmet(FUNCODEREF(YevalSg2cYmodule_up_to_dateQ),LITREF(lit_23),T41,ENVNUL,PNUL,sloc(77));
  T42 = YevalSg2cYmodule_up_to_dateQ;
  VARSET(YevalSg2cYmodule_up_to_dateQ,T42);
  lit_25 = YPPsym((P)"purge-outdated-modules");
  lit_26 = YPPlist(1,YPPsym((P)"loader"));
  lit_27 = YPPlist(1,YPPsym((P)"mod"));
  lit_28 = YPPlist(1,YPPsym((P)"name"));
  lit_29 = YPsb((P)" has changed.\n");
  T45 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_14 = YPmet(FUNCODEREF(fun_14),YPfalse,T45,ENVNUL,PNUL,sloc(85));
  T44 = YPsig(LITREF(lit_28),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_15 = YPmet(FUNCODEREF(fun_15),YPfalse,T44,ENVNUL,PNUL,sloc(91));
  T43 = YPsig(LITREF(lit_26),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYpurge_outdated_modules = YPmet(FUNCODEREF(YevalSg2cYpurge_outdated_modules),LITREF(lit_25),T43,ENVNUL,PNUL,sloc(80));
  T46 = YevalSg2cYpurge_outdated_modules;
  VARSET(YevalSg2cYpurge_outdated_modules,T46);
  lit_30 = YPPsym((P)"g2c-def-app");
  lit_31 = YPPlist(2,YPPsym((P)"appname"),YPPsym((P)"modname"));
  T47 = YPsig(LITREF(lit_31),YPPlist(2,VARREF(YLstrG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YevalSg2cYLg2c_module_loaderG),Ynil);
  YevalSg2cYg2c_def_app = YPmet(FUNCODEREF(YevalSg2cYg2c_def_app),LITREF(lit_30),T47,ENVNUL,PNUL,sloc(104));
  T48 = YevalSg2cYg2c_def_app;
  VARSET(YevalSg2cYg2c_def_app,T48);
  lit_32 = YPPsym((P)"g2c-build-app");
  lit_33 = YPPlist(1,YPPsym((P)"loader"));
  lit_34 = YPsb((P)"Searching for undefined global bindings.\n");
  T49 = YPsig(LITREF(lit_33),YPPlist(1,VARREF(YevalSg2cYLg2c_module_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_build_app = YPmet(FUNCODEREF(YevalSg2cYg2c_build_app),LITREF(lit_32),T49,ENVNUL,PNUL,sloc(110));
  T50 = YevalSg2cYg2c_build_app;
  VARSET(YevalSg2cYg2c_build_app,T50);
  lit_35 = YPPsym((P)"g2c-test");
  lit_36 = YPPlist(1,YPPsym((P)"x"));
  lit_37 = YPsb((P)"g2c-");
  lit_38 = YPPsym((P)"eval/main");
  T51 = YPsig(LITREF(lit_36),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYg2c_test = YPmet(FUNCODEREF(YevalSg2cYg2c_test),LITREF(lit_35),T51,ENVNUL,PNUL,sloc(119));
  T52 = YevalSg2cYg2c_test;
  VARSET(YevalSg2cYg2c_test,T52);
  DYNDEFSET(YevalSg2cYTtmp_file_counterT,YPint((P)-1));
  lit_39 = YPPsym((P)"g2c-ast");
  lit_40 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  lit_41 = YPsb((P)"exp-%d-%d");
  T59 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_20 = YPmet(FUNCODEREF(fun_20),YPfalse,T59,ENVNUL,PNUL,sloc(131));
  T58 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_21 = YPmet(FUNCODEREF(fun_21),YPfalse,T58,ENVNUL,PNUL,sloc(131));
  T57 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_22 = YPmet(FUNCODEREF(fun_22),YPfalse,T57,ENVNUL,PNUL,sloc(131));
  T56 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_23 = YPmet(FUNCODEREF(fun_23),YPfalse,T56,ENVNUL,PNUL,sloc(131));
  T55 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_24 = YPmet(FUNCODEREF(fun_24),YPfalse,T55,ENVNUL,PNUL,sloc(130));
  T54 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_25 = YPmet(FUNCODEREF(fun_25),YPfalse,T54,ENVNUL,PNUL,sloc(130));
  T53 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_ast_26 = YPmet(FUNCODEREF(fun_g2c_ast_26),LITREF(lit_39),T53,ENVNUL,PNUL,sloc(124));
  T61 = VARREF_OR(YevalSg2cYg2c_ast,YPfalse);
  T62 = fun_g2c_ast_26;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSg2cYg2c_ast,T60);
  lit_42 = YPPsym((P)"g2c-exp");
  lit_43 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T63 = YPsig(LITREF(lit_43),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_exp_27 = YPmet(FUNCODEREF(fun_g2c_exp_27),LITREF(lit_42),T63,ENVNUL,PNUL,sloc(136));
  T65 = VARREF_OR(YevalSg2cYg2c_exp,YPfalse);
  T66 = fun_g2c_exp_27;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSg2cYg2c_exp,T64);
  lit_44 = YPPsym((P)"compile-load");
  lit_45 = YPPlist(1,YPPsym((P)"name"));
  lit_46 = YPsb((P)".so");
  lit_47 = YPsb((P)".so");
  T67 = YPsig(LITREF(lit_45),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_compile_load_28 = YPmet(FUNCODEREF(fun_compile_load_28),LITREF(lit_44),T67,ENVNUL,PNUL,sloc(139));
  T69 = VARREF_OR(YevalSg2cYcompile_load,YPfalse);
  T70 = fun_compile_load_28;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSg2cYcompile_load,T68);
  lit_48 = YPPsym((P)"g2c-eval");
  lit_49 = YPPlist(2,YPPsym((P)"exp"),YPPsym((P)"env"));
  T71 = YPsig(LITREF(lit_49),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_29 = YPmet(FUNCODEREF(fun_g2c_eval_29),LITREF(lit_48),T71,ENVNUL,PNUL,sloc(143));
  T73 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T74 = fun_g2c_eval_29;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalStopYg2c_eval,T72);
  lit_50 = YPPlist(2,YPPsym((P)"ast"),YPPsym((P)"env"));
  T75 = YPsig(LITREF(lit_50),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_g2c_eval_30 = YPmet(FUNCODEREF(fun_g2c_eval_30),LITREF(lit_48),T75,ENVNUL,PNUL,sloc(147));
  T77 = VARREF_OR(YevalStopYg2c_eval,YPfalse);
  T78 = fun_g2c_eval_30;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalStopYg2c_eval,T76);
  lit_51 = YPsb((P)"g2c");
  T79 = XCALL2(1,VARREF(YevalSg2cYg2c_def_app),LITREF(lit_51),LITREF(lit_38));
  VARSET(YevalSg2cYTg2c_appT,T79);
  lit_52 = YPPsym((P)"g2c-top");
  T80 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_top_31 = YPmet(FUNCODEREF(fun_g2c_top_31),LITREF(lit_52),T80,ENVNUL,PNUL,sloc(153));
  T82 = VARREF_OR(YevalSg2cYg2c_top,YPfalse);
  T83 = fun_g2c_top_31;
  T81 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T82,T83);
  VARSET(YevalSg2cYg2c_top,T81);
  VARSET(YevalSg2cYg2c_goo,VARREF(YevalSg2cYg2c_top));
  lit_53 = YPPsym((P)"g2c-clean");
  lit_54 = YPsb((P)"g2c");
  T84 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_g2c_clean_32 = YPmet(FUNCODEREF(fun_g2c_clean_32),LITREF(lit_53),T84,ENVNUL,PNUL,sloc(155));
  T86 = VARREF_OR(YevalSg2cYg2c_clean,YPfalse);
  T87 = fun_g2c_clean_32;
  T85 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T86,T87);
  VARSET(YevalSg2cYg2c_clean,T85);
  lit_55 = YPPsym((P)"compute-ast");
  lit_56 = YPPlist(2,YPPsym((P)"filename"),YPPsym((P)"ct-env"));
  lit_57 = YPsb((P)"READ");
  lit_58 = YPsb((P)"AST");
  T88 = YPsig(LITREF(lit_56),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_ast_33 = YPmet(FUNCODEREF(fun_compute_ast_33),LITREF(lit_55),T88,ENVNUL,PNUL,sloc(161));
  T90 = VARREF_OR(YevalSg2cYcompute_ast,YPfalse);
  T91 = fun_compute_ast_33;
  T89 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T90,T91);
  VARSET(YevalSg2cYcompute_ast,T89);
  lit_59 = YPPsym((P)"compute-program");
  lit_60 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_61 = YPsb((P)"ANA");
  lit_62 = YPsb((P)"BOX");
  lit_63 = YPsb((P)"LFT");
  lit_64 = YPsb((P)"EXT");
  lit_65 = YPsb((P)"CLO");
  lit_66 = YPsb((P)"TMP");
  lit_67 = YPsb((P)"REG");
  T92 = YPsig(LITREF(lit_60),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_compute_program_34 = YPmet(FUNCODEREF(fun_compute_program_34),LITREF(lit_59),T92,ENVNUL,PNUL,sloc(170));
  T94 = VARREF_OR(YevalSg2cYcompute_program,YPfalse);
  T95 = fun_compute_program_34;
  T93 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T94,T95);
  VARSET(YevalSg2cYcompute_program,T93);
  lit_68 = YPPsym((P)"generate-c-module");
  lit_69 = YPPlist(4,YPPsym((P)"out"),YPPsym((P)"e"),YPPsym((P)"prg"),YPPsym((P)"mod"));
  T96 = YPsig(LITREF(lit_69),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_c_module_35 = YPmet(FUNCODEREF(fun_generate_c_module_35),LITREF(lit_68),T96,ENVNUL,PNUL,sloc(196));
  T98 = VARREF_OR(YevalSg2cYgenerate_c_module,YPfalse);
  T99 = fun_generate_c_module_35;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYgenerate_c_module,T97);
  lit_70 = YPPsym((P)"generate-c-application");
  lit_71 = YPPlist(2,YPPsym((P)"loader"),YPPsym((P)"mod"));
  lit_72 = YPsb((P)"-init");
  T106 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T105 = fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T106,ENVNUL,PNUL,sloc(212));
  T104 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  T103 = fun_37 = YPmet(FUNCODEREF(fun_37),YPfalse,T104,ENVNUL,PNUL,sloc(212));
  T102 = YPsig(LITREF(lit_71),YPPlist(2,VARREF(YevalSastYLmodule_loaderG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T101 = fun_generate_c_application_38 = YPmet(FUNCODEREF(fun_generate_c_application_38),LITREF(lit_70),T102,ENVNUL,PNUL,sloc(208));
  T109 = VARREF_OR(YevalSg2cYgenerate_c_application,YPfalse);
  T110 = fun_generate_c_application_38;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  T107 = VARSET(YevalSg2cYgenerate_c_application,T108);
  T100 = T107;
  return T100;
}

P YevalSg2cY___main_1___() {
  P iF10158;
  P x_2501F10157;
  P iF10156;
  P x_2499F10155;
  P mangleF10154;
  P x_2497F10153;
  P iF10152;
  P x_2495F10151;
  P tableF10150;
  P vecF10149;
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
  P T176,T177,T178,T179,T180,T181,T182,T183;
DEFCREGS();
  lit_73 = YPPlist(1,YPPsym((P)"exp"));
  lit_74 = YPPlist(1,YPPsym((P)"return"));
  lit_75 = YPPsym((P)"x-2468");
  lit_76 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_77 = YPPsym((P)"for-mods");
  lit_78 = YPsb((P)"Match Pattern Failure");
  lit_79 = YPPsym((P)"do-module-loader-modules");
  lit_80 = YPPsym((P)"fun");
  lit_81 = Ynil;
  T2 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2468_39 = YPmet(FUNCODEREF(fun_x_2468_39),LITREF(lit_75),T2,ENVNUL,PNUL,YPfalse);
  T1 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_40 = YPmet(FUNCODEREF(fun_40),YPfalse,T1,ENVNUL,PNUL,YPfalse);
  T0 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_41 = YPmet(FUNCODEREF(fun_41),YPfalse,T0,ENVNUL,PNUL,YPfalse);
  T3 = fun_41;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-mods"),T3);
  lit_82 = YPPsym((P)"generate-makefile");
  lit_83 = YPPlist(1,YPPsym((P)"loader"));
  lit_84 = YPsb((P)"-init");
  lit_85 = YPsb((P)"Makefile");
  lit_86 = YPsb((P)"C_OBJS_DD = $(patsubst %,..");
  lit_87 = YPsb((P)"%,$(C_OBJS))\n");
  lit_88 = YPsb((P)": ..");
  lit_89 = YPsb((P)"grt.h\n");
  lit_90 = YPsb((P)"\t$(CC) -I.. ");
  lit_91 = YPPlist(1,YPPsym((P)"mod"));
  lit_92 = YPPlist(1,YPPsym((P)"i"));
  lit_93 = YPsb((P)"-I");
  lit_94 = YPsb((P)" ");
  lit_95 = YPsb((P)"$(CFLAGS) -DDEFAULT_GOO_ROOT=\\\"$(GOO_ROOT)\\\" -c -o $@ $<\n\n");
  lit_96 = YPsb((P)"OBJS = \\\n");
  lit_97 = YPPlist(1,YPPsym((P)"mod"));
  lit_98 = YPPsym((P)"put-obj");
  lit_99 = YPPlist(1,YPPsym((P)"name"));
  lit_100 = YPsb((P)"\t");
  lit_101 = YPsb((P)" \\\n");
  lit_102 = YPPlist(1,YPPsym((P)"name"));
  lit_103 = YPsb((P)".c");
  lit_104 = YPPlist(1,YPPsym((P)"n"));
  lit_105 = YPsb((P)"\t");
  lit_106 = YPsb((P)"\n\n");
  lit_107 = YPsb((P)": $(C_OBJS_DD) $(OBJS)\n");
  lit_108 = YPsb((P)"\t$(CC) $(LDFLAGS) -o ");
  lit_109 = YPsb((P)" $(C_OBJS_DD) $(OBJS) $(LIBS)");
  lit_110 = YPPlist(1,YPPsym((P)"mod"));
  lit_111 = YPPlist(1,YPPsym((P)"l"));
  lit_112 = YPsb((P)" -l");
  lit_113 = YPsb((P)"\n\nclean:\n\trm -f ");
  lit_114 = YPsb((P)" $(OBJS)\n");
  T14 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_42 = YPmet(FUNCODEREF(fun_42),YPfalse,T14,ENVNUL,PNUL,sloc(232));
  T13 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_43 = YPmet(FUNCODEREF(fun_43),YPfalse,T13,ENVNUL,PNUL,sloc(231));
  T12 = YPsig(LITREF(lit_99),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_put_obj_44 = YPmet(FUNCODEREF(fun_put_obj_44),LITREF(lit_98),T12,ENVNUL,PNUL,sloc(236));
  T11 = YPsig(LITREF(lit_102),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_45 = YPmet(FUNCODEREF(fun_45),YPfalse,T11,ENVNUL,PNUL,sloc(240));
  T10 = YPsig(LITREF(lit_104),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_46 = YPmet(FUNCODEREF(fun_46),YPfalse,T10,ENVNUL,PNUL,sloc(241));
  T9 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T9,ENVNUL,PNUL,sloc(235));
  T8 = YPsig(LITREF(lit_111),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_48 = YPmet(FUNCODEREF(fun_48),YPfalse,T8,ENVNUL,PNUL,sloc(247));
  T7 = YPsig(LITREF(lit_110),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_49 = YPmet(FUNCODEREF(fun_49),YPfalse,T7,ENVNUL,PNUL,sloc(246));
  T6 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_50 = YPmet(FUNCODEREF(fun_50),YPfalse,T6,ENVNUL,PNUL,sloc(227));
  T5 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_51 = YPmet(FUNCODEREF(fun_51),YPfalse,T5,ENVNUL,PNUL,sloc(227));
  T4 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSastYLmodule_loaderG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_makefile_52 = YPmet(FUNCODEREF(fun_generate_makefile_52),LITREF(lit_82),T4,ENVNUL,PNUL,sloc(221));
  T16 = VARREF_OR(YevalSg2cYgenerate_makefile,YPfalse);
  T17 = fun_generate_makefile_52;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYgenerate_makefile,T15);
  lit_115 = YPPsym((P)"pp");
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T18 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_pp_53 = YPmet(FUNCODEREF(fun_pp_53),LITREF(lit_115),T18,ENVNUL,PNUL,sloc(256));
  T20 = VARREF_OR(YevalSg2cYpp,YPfalse);
  T21 = fun_pp_53;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSg2cYpp,T19);
  lit_117 = YPsb((P)"_mod");
  VARSET(YevalSg2cYDnow_mod_var_name,LITREF(lit_117));
  lit_118 = YPPsym((P)"generate-header");
  lit_119 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"modname"));
  lit_120 = YPsb((P)"/* GOO 2 C $REVISION: 0.120 $ \n");
  lit_121 = YPsb((P)"  */\n\n#include \"grt.h\"\n");
  lit_122 = YPsb((P)"#include \"dlgrt.h\"\n");
  lit_123 = YPsb((P)"\nstatic PSTR ");
  lit_124 = YPsb((P)" = PNUL;\n");
  lit_125 = YPsb((P)"\nstatic P sloc (int line) {\n");
  lit_126 = YPsb((P)"  if (");
  lit_127 = YPsb((P)" == PNUL) ");
  lit_128 = YPsb((P)" = ");
  lit_129 = YPsb((P)";\n");
  lit_130 = YPsb((P)"  return ");
  lit_131 = YPsb((P)"%src-loc");
  lit_132 = YPsb((P)"(");
  lit_133 = YPsb((P)"%ib");
  lit_134 = YPsb((P)"((P)line), ");
  lit_135 = YPsb((P)");\n");
  lit_136 = YPsb((P)"}\n");
  T22 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_header_54 = YPmet(FUNCODEREF(fun_generate_header_54),LITREF(lit_118),T22,ENVNUL,PNUL,sloc(262));
  T24 = VARREF_OR(YevalSg2cYgenerate_header,YPfalse);
  T25 = fun_generate_header_54;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSg2cYgenerate_header,T23);
  lit_137 = YPPsym((P)"generate-trailer");
  lit_138 = YPPlist(1,YPPsym((P)"out"));
  lit_139 = YPsb((P)"\n/* END OF GENERATED CODE. */\n");
  T26 = YPsig(LITREF(lit_138),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_generate_trailer_55 = YPmet(FUNCODEREF(fun_generate_trailer_55),LITREF(lit_137),T26,ENVNUL,PNUL,sloc(277));
  T28 = VARREF_OR(YevalSg2cYgenerate_trailer,YPfalse);
  T29 = fun_generate_trailer_55;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSg2cYgenerate_trailer,T27);
  lit_140 = YPPsym((P)"generate-global-environment");
  lit_141 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_142 = YPsb((P)"\n/* MODULE ENVIRONMENT: ");
  lit_143 = YPsb((P)" */\n\n");
  lit_144 = YPPlist(1,YPPsym((P)"binding"));
  T31 = YPsig(LITREF(lit_144),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T31,ENVNUL,PNUL,sloc(290));
  T30 = YPsig(LITREF(lit_141),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_global_environment_57 = YPmet(FUNCODEREF(fun_generate_global_environment_57),LITREF(lit_140),T30,ENVNUL,PNUL,sloc(287));
  T33 = VARREF_OR(YevalSg2cYgenerate_global_environment,YPfalse);
  T34 = fun_generate_global_environment_57;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSg2cYgenerate_global_environment,T32);
  lit_145 = YPPsym((P)"generate-global-binding");
  lit_146 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"imported?"),YPPsym((P)"gb"));
  lit_147 = YPPsym((P)"global");
  lit_148 = YPPsym((P)"runtime");
  lit_149 = YPPsym((P)"dynamic");
  lit_150 = YPsb((P)"RTV");
  lit_151 = YPsb((P)"DYN");
  lit_152 = YPsb((P)"");
  lit_153 = YPsb((P)"EXT");
  lit_154 = YPsb((P)"DEF");
  lit_155 = YPsb((P)"(");
  lit_156 = YPsb((P)",");
  lit_157 = YPsb((P)",");
  lit_158 = YPsb((P)");\n");
  T35 = YPsig(LITREF(lit_146),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_global_binding_58 = YPmet(FUNCODEREF(fun_generate_global_binding_58),LITREF(lit_145),T35,ENVNUL,PNUL,sloc(295));
  T37 = VARREF_OR(YevalSg2cYgenerate_global_binding,YPfalse);
  T38 = fun_generate_global_binding_58;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YevalSg2cYgenerate_global_binding,T36);
  lit_159 = YPsb((P)"Y");
  VARSET(YevalSg2cYDmodule_separator,LITREF(lit_159));
  lit_160 = YPsb((P)"_");
  VARSET(YevalSg2cYDlocal_suffix,LITREF(lit_160));
  lit_161 = YPsb((P)"F");
  VARSET(YevalSg2cYDhygiene_marker,LITREF(lit_161));
  lit_162 = YPsb((P)"Z");
  VARSET(YevalSg2cYDescape_separator,LITREF(lit_162));
  lit_163 = YPsb((P)"I");
  VARSET(YevalSg2cYDiep_suffix,LITREF(lit_163));
  lit_164 = YPsb((P)"M");
  VARSET(YevalSg2cYDmethod_mangled_marker_string,LITREF(lit_164));
  T39 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmodule_separator),YPint((P)0));
  VARSET(YevalSg2cYDmodule_marker,T39);
  T40 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDlocal_suffix),YPint((P)0));
  VARSET(YevalSg2cYDlocal_marker,T40);
  T41 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDhygiene_marker),YPint((P)0));
  VARSET(YevalSg2cYDhygiene_char,T41);
  T42 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDescape_separator),YPint((P)0));
  VARSET(YevalSg2cYDescape_marker,T42);
  T43 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDiep_suffix),YPint((P)0));
  VARSET(YevalSg2cYDiep_marker,T43);
  T44 = XCALL2(1,VARREF(YgooSmacrosYelt),VARREF(YevalSg2cYDmethod_mangled_marker_string),YPint((P)0));
  VARSET(YevalSg2cYDmethod_mangled_marker,T44);
  VARSET(YevalSg2cYDmin_character_code,YPint((P)0));
  VARSET(YevalSg2cYDmax_character_code,YPint((P)255));
  T45 = XCALL1(1,VARREF(Ynew),VARREF(YgooScolsSvecYLvecG));
  VARSET(YevalSg2cYTmangle_bufferT,T45);
  lit_165 = XCALLN(1, Ytup, 2, YPchr((P)45), YPchr((P)95));
  lit_166 = XCALLN(1, Ytup, 2, YPchr((P)33), YPchr((P)88));
  lit_167 = XCALLN(1, Ytup, 2, YPchr((P)36), YPchr((P)68));
  lit_168 = XCALLN(1, Ytup, 2, YPchr((P)37), YPchr((P)80));
  lit_169 = XCALLN(1, Ytup, 2, YPchr((P)42), YPchr((P)84));
  lit_170 = XCALLN(1, Ytup, 2, YPchr((P)47), YPchr((P)83));
  lit_171 = XCALLN(1, Ytup, 2, YPchr((P)60), YPchr((P)76));
  lit_172 = XCALLN(1, Ytup, 2, YPchr((P)62), YPchr((P)71));
  lit_173 = XCALLN(1, Ytup, 2, YPchr((P)63), YPchr((P)81));
  lit_174 = XCALLN(1, Ytup, 2, YPchr((P)43), YPchr((P)65));
  lit_175 = XCALLN(1, Ytup, 2, YPchr((P)38), YPchr((P)66));
  lit_176 = XCALLN(1, Ytup, 2, YPchr((P)94), YPchr((P)67));
  lit_177 = XCALLN(1, Ytup, 2, YPchr((P)95), YPchr((P)85));
  lit_178 = XCALLN(1, Ytup, 2, YPchr((P)64), YPchr((P)79));
  lit_179 = XCALLN(1, Ytup, 2, YPchr((P)61), YPchr((P)69));
  lit_180 = XCALLN(1, Ytup, 2, YPchr((P)126), YPchr((P)78));
  lit_181 = XCALLN(1, Ytup, 2, YPchr((P)124), YPchr((P)75));
  lit_182 = XCALLN(1, Ytup, 2, YPchr((P)46), YPchr((P)73));
  T46 = XCALLN(1,VARREF(Ytup),18,LITREF(lit_165),LITREF(lit_166),LITREF(lit_167),LITREF(lit_168),LITREF(lit_169),LITREF(lit_170),LITREF(lit_171),LITREF(lit_172),LITREF(lit_173),LITREF(lit_174),LITREF(lit_175),LITREF(lit_176),LITREF(lit_177),LITREF(lit_178),LITREF(lit_179),LITREF(lit_180),LITREF(lit_181),LITREF(lit_182));
  VARSET(YevalSg2cYDmangles_data,T46);
  lit_183 = YPPsym((P)"char-buffer-as-string");
  lit_184 = YPPlist(1,YPPsym((P)"buffer"));
  T47 = YPsig(LITREF(lit_184),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  YevalSg2cYchar_buffer_as_string = YPmet(FUNCODEREF(YevalSg2cYchar_buffer_as_string),LITREF(lit_183),T47,ENVNUL,PNUL,sloc(338));
  T48 = YevalSg2cYchar_buffer_as_string;
  VARSET(YevalSg2cYchar_buffer_as_string,T48);
  lit_185 = YPsb((P)"\\t");
  lit_186 = YPsb((P)"\\f");
  lit_187 = YPsb((P)"\\r");
  lit_188 = YPsb((P)"\\n");
  lit_189 = YPsb((P)"\\\"");
  lit_190 = YPsb((P)"\\\\");
  T57 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),VARREF(YgooScolsSstrYascii_limit));
  T56 = XCALL2(1,VARREF(YgooScolsScolYfill),T57,YPfalse);
  vecF10149 = T56;
  T49 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)9));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_185),vecF10149,T49);
  T50 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)12));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_186),vecF10149,T50);
  T51 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)13));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_187),vecF10149,T51);
  T52 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)10));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_188),vecF10149,T52);
  T53 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)34));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_189),vecF10149,T53);
  T54 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)92));
  XCALL3(1,VARREF(YgooScolsScolxYelt_setter),LITREF(lit_190),vecF10149,T54);
  T55 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLtupG),vecF10149);
  VARSET(YevalSg2cYDc_escapes,T55);
  lit_191 = YPPsym((P)"mangle-string-literal");
  lit_192 = YPPlist(1,YPPsym((P)"str"));
  T58 = YPsig(LITREF(lit_192),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_60 = YPmet(FUNCODEREF(fun_mangle_string_literal_60),LITREF(lit_191),T58,ENVNUL,PNUL,sloc(359));
  T60 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T61 = fun_mangle_string_literal_60;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSg2cYmangle_string_literal,T59);
  lit_193 = YPPlist(1,YPPsym((P)"sym"));
  T62 = YPsig(LITREF(lit_193),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_string_literal_61 = YPmet(FUNCODEREF(fun_mangle_string_literal_61),LITREF(lit_191),T62,ENVNUL,PNUL,sloc(374));
  T64 = VARREF_OR(YevalSg2cYmangle_string_literal,YPfalse);
  T65 = fun_mangle_string_literal_61;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSg2cYmangle_string_literal,T63);
  lit_194 = YPsb((P)"0123456789");
  VARSET(YevalSg2cYDnumber_characters,LITREF(lit_194));
  lit_195 = YPPsym((P)"mangle-integer");
  lit_196 = YPPlist(1,YPPsym((P)"number"));
  lit_197 = YPPsym((P)"process-integer");
  lit_198 = YPPlist(2,YPPsym((P)"number"),YPPsym((P)"index"));
  T67 = YPsig(LITREF(lit_198),YPPlist(2,VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_process_integer_62 = YPmet(FUNCODEREF(fun_process_integer_62),LITREF(lit_197),T67,ENVNUL,PNUL,sloc(381));
  T66 = YPsig(LITREF(lit_196),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_integer_63 = YPmet(FUNCODEREF(fun_mangle_integer_63),LITREF(lit_195),T66,ENVNUL,PNUL,sloc(379));
  T69 = VARREF_OR(YevalSg2cYmangle_integer,YPfalse);
  T70 = fun_mangle_integer_63;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSg2cYmangle_integer,T68);
  T114 = XCALL2(1,VARREF(YgooSmathYA),VARREF(YevalSg2cYDmax_character_code),YPint((P)1));
  T113 = XCALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsSvecYLvecG),T114);
  tableF10150 = T113;
  T80 = XCALL3(1,VARREF(YgooScolsSrangeYrange),VARREF(YevalSg2cYDmin_character_code),VARREF(YgooSmagYLE),VARREF(YevalSg2cYDmax_character_code));
  T79 = XCALL1(1,VARREF(YgooScolsScolYenum),T80);
  x_2495F10151 = T79;
  LOOP_494: {
    P a494_0;
    T73 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2495F10151);
    T72 = XCALL1(1,VARREF(Ynot),T73);
    if (T72 != YPfalse) {
      T78 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2495F10151);
      iF10152 = T78;
      T75 = XCALL1(1,VARREF(YevalSg2cYmangle_integer),iF10152);
      T74 = XCALL3(1,VARREF(YgooSmacrosYcat),VARREF(YevalSg2cYDescape_separator),T75,VARREF(YevalSg2cYDescape_separator));
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T74,tableF10150,iF10152);
      T77 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2495F10151);
      a494_0 = T77;
      x_2495F10151 = a494_0;
      goto LOOP_494;
      T71 = T76;
    } else {
      T71 = YPfalse;
    }
  }
  T90 = XCALL1(1,VARREF(YgooScolsScolYenum),VARREF(YevalSg2cYDmangles_data));
  x_2497F10153 = T90;
  LOOP_495: {
    P a495_0;
    T83 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2497F10153);
    T82 = XCALL1(1,VARREF(Ynot),T83);
    if (T82 != YPfalse) {
      T89 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2497F10153);
      mangleF10154 = T89;
      T84 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF10154,YPint((P)1));
      T86 = XCALL2(1,VARREF(YgooSmacrosYelt),mangleF10154,YPint((P)0));
      T85 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),T86);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T84,tableF10150,T85);
      T88 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2497F10153);
      a495_0 = T88;
      x_2497F10153 = a495_0;
      goto LOOP_495;
      T81 = T87;
    } else {
      T81 = YPfalse;
    }
  }
  T100 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)97));
  T101 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)122));
  T99 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T100,VARREF(YgooSmagYLE),T101);
  T98 = XCALL1(1,VARREF(YgooScolsScolYenum),T99);
  x_2499F10155 = T98;
  LOOP_496: {
    P a496_0;
    T93 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2499F10155);
    T92 = XCALL1(1,VARREF(Ynot),T93);
    if (T92 != YPfalse) {
      T97 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2499F10155);
      iF10156 = T97;
      T94 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF10156);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T94,tableF10150,iF10156);
      T96 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2499F10155);
      a496_0 = T96;
      x_2499F10155 = a496_0;
      goto LOOP_496;
      T91 = T95;
    } else {
      T91 = YPfalse;
    }
  }
  T111 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)48));
  T112 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLintG),YPchr((P)57));
  T110 = XCALL3(1,VARREF(YgooScolsSrangeYrange),T111,VARREF(YgooSmagYLE),T112);
  T109 = XCALL1(1,VARREF(YgooScolsScolYenum),T110);
  x_2501F10157 = T109;
  LOOP_497: {
    P a497_0;
    T104 = XCALL1(1,VARREF(YgooScolsScolYfinQ),x_2501F10157);
    T103 = XCALL1(1,VARREF(Ynot),T104);
    if (T103 != YPfalse) {
      T108 = XCALL1(1,VARREF(YgooScolsScolYnow),x_2501F10157);
      iF10158 = T108;
      T105 = XCALL2(1,VARREF(YgooStypesYas),VARREF(YLchrG),iF10158);
      XCALL3(1,VARREF(YgooScolsScolxYelt_setter),T105,tableF10150,iF10158);
      T107 = XCALL1(1,VARREF(YgooScolsScolYnxt),x_2501F10157);
      a497_0 = T107;
      x_2501F10157 = a497_0;
      goto LOOP_497;
      T102 = T106;
    } else {
      T102 = YPfalse;
    }
  }
  VARSET(YevalSg2cYDname_mangler_table,tableF10150);
  lit_199 = YPPsym((P)"mangler-reset");
  lit_200 = YPPlist(1,YPPsym((P)"buffer"));
  T115 = YPsig(LITREF(lit_200),YPPlist(1,VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangler_reset = YPmet(FUNCODEREF(YevalSg2cYmangler_reset),LITREF(lit_199),T115,ENVNUL,PNUL,sloc(410));
  T116 = YevalSg2cYmangler_reset;
  VARSET(YevalSg2cYmangler_reset,T116);
  lit_201 = YPPsym((P)"mangle-name-into");
  lit_202 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T117 = YPsig(LITREF(lit_202),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_name_into = YPmet(FUNCODEREF(YevalSg2cYmangle_name_into),LITREF(lit_201),T117,ENVNUL,PNUL,sloc(413));
  T118 = YevalSg2cYmangle_name_into;
  VARSET(YevalSg2cYmangle_name_into,T118);
  lit_203 = YPPsym((P)"mangle-raw-name");
  lit_204 = YPPlist(1,YPPsym((P)"name"));
  T119 = YPsig(LITREF(lit_204),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_66 = YPmet(FUNCODEREF(fun_mangle_raw_name_66),LITREF(lit_203),T119,ENVNUL,PNUL,sloc(418));
  T121 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T122 = fun_mangle_raw_name_66;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSg2cYmangle_raw_name,T120);
  lit_205 = YPPlist(1,YPPsym((P)"name"));
  T123 = YPsig(LITREF(lit_205),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_raw_name_67 = YPmet(FUNCODEREF(fun_mangle_raw_name_67),LITREF(lit_203),T123,ENVNUL,PNUL,sloc(423));
  T125 = VARREF_OR(YevalSg2cYmangle_raw_name,YPfalse);
  T126 = fun_mangle_raw_name_67;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSg2cYmangle_raw_name,T124);
  lit_206 = YPPsym((P)"mangle-local-name");
  lit_207 = YPPlist(1,YPPsym((P)"name"));
  T127 = YPsig(LITREF(lit_207),YPPlist(1,VARREF(YLstrG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_68 = YPmet(FUNCODEREF(fun_mangle_local_name_68),LITREF(lit_206),T127,ENVNUL,PNUL,sloc(426));
  T129 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T130 = fun_mangle_local_name_68;
  T128 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T129,T130);
  VARSET(YevalSg2cYmangle_local_name,T128);
  lit_208 = YPPlist(1,YPPsym((P)"name"));
  T131 = YPsig(LITREF(lit_208),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_mangle_local_name_69 = YPmet(FUNCODEREF(fun_mangle_local_name_69),LITREF(lit_206),T131,ENVNUL,PNUL,sloc(432));
  T133 = VARREF_OR(YevalSg2cYmangle_local_name,YPfalse);
  T134 = fun_mangle_local_name_69;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSg2cYmangle_local_name,T132);
  lit_209 = YPPsym((P)"buf-cat2!");
  lit_210 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"name"));
  T135 = YPsig(LITREF(lit_210),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbuf_cat2X = YPmet(FUNCODEREF(YevalSg2cYbuf_cat2X),LITREF(lit_209),T135,ENVNUL,PNUL,sloc(436));
  T136 = YevalSg2cYbuf_cat2X;
  VARSET(YevalSg2cYbuf_cat2X,T136);
  lit_211 = YPPsym((P)"mangle-module-into");
  lit_212 = YPPlist(2,YPPsym((P)"buf"),YPPsym((P)"mod"));
  T137 = YPsig(LITREF(lit_212),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YevalSastYLmoduleG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_mangle_module_into_71 = YPmet(FUNCODEREF(fun_mangle_module_into_71),LITREF(lit_211),T137,ENVNUL,PNUL,sloc(443));
  T139 = VARREF_OR(YevalSg2cYmangle_module_into,YPfalse);
  T140 = fun_mangle_module_into_71;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSg2cYmangle_module_into,T138);
  lit_213 = YPPsym((P)"mangle-global-name");
  lit_214 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T141 = YPsig(LITREF(lit_214),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_72 = YPmet(FUNCODEREF(fun_mangle_global_name_72),LITREF(lit_213),T141,ENVNUL,PNUL,sloc(450));
  T143 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T144 = fun_mangle_global_name_72;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYmangle_global_name,T142);
  lit_215 = YPPlist(2,YPPsym((P)"mod"),YPPsym((P)"name"));
  T145 = YPsig(LITREF(lit_215),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLstrG),Ynil);
  fun_mangle_global_name_73 = YPmet(FUNCODEREF(fun_mangle_global_name_73),LITREF(lit_213),T145,ENVNUL,PNUL,sloc(461));
  T147 = VARREF_OR(YevalSg2cYmangle_global_name,YPfalse);
  T148 = fun_mangle_global_name_73;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSg2cYmangle_global_name,T146);
  lit_216 = YPPsym((P)"mangle-boot-name");
  lit_217 = YPPlist(1,YPPsym((P)"name"));
  T149 = YPsig(LITREF(lit_217),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_boot_name = YPmet(FUNCODEREF(YevalSg2cYmangle_boot_name),LITREF(lit_216),T149,ENVNUL,PNUL,sloc(466));
  T150 = YevalSg2cYmangle_boot_name;
  VARSET(YevalSg2cYmangle_boot_name,T150);
  lit_218 = YPPsym((P)"mangle-quotation-name");
  lit_219 = YPPlist(1,YPPsym((P)"name"));
  lit_220 = YPsb((P)"lit_");
  T151 = YPsig(LITREF(lit_219),YPPlist(1,VARREF(YLintG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_quotation_name = YPmet(FUNCODEREF(YevalSg2cYmangle_quotation_name),LITREF(lit_218),T151,ENVNUL,PNUL,sloc(469));
  T152 = YevalSg2cYmangle_quotation_name;
  VARSET(YevalSg2cYmangle_quotation_name,T152);
  lit_221 = YPPsym((P)"mangle-binding");
  lit_222 = YPPlist(1,YPPsym((P)"binding"));
  lit_223 = YPPsym((P)"quotation");
  T153 = YPsig(LITREF(lit_222),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_76 = YPmet(FUNCODEREF(fun_mangle_binding_76),LITREF(lit_221),T153,ENVNUL,PNUL,sloc(475));
  T155 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T156 = fun_mangle_binding_76;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSg2cYmangle_binding,T154);
  lit_224 = YPPsym((P)"mangle-local-marked-name");
  lit_225 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"marker"));
  T157 = YPsig(LITREF(lit_225),YPPlist(2,VARREF(YLstrG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYmangle_local_marked_name = YPmet(FUNCODEREF(YevalSg2cYmangle_local_marked_name),LITREF(lit_224),T157,ENVNUL,PNUL,sloc(482));
  T158 = YevalSg2cYmangle_local_marked_name;
  VARSET(YevalSg2cYmangle_local_marked_name,T158);
  lit_226 = YPPlist(1,YPPsym((P)"binding"));
  T159 = YPsig(LITREF(lit_226),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_78 = YPmet(FUNCODEREF(fun_mangle_binding_78),LITREF(lit_221),T159,ENVNUL,PNUL,sloc(489));
  T161 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T162 = fun_mangle_binding_78;
  T160 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T161,T162);
  VARSET(YevalSg2cYmangle_binding,T160);
  lit_227 = YPPlist(1,YPPsym((P)"binding"));
  T163 = YPsig(LITREF(lit_227),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_mangle_binding_79 = YPmet(FUNCODEREF(fun_mangle_binding_79),LITREF(lit_221),T163,ENVNUL,PNUL,sloc(493));
  T165 = VARREF_OR(YevalSg2cYmangle_binding,YPfalse);
  T166 = fun_mangle_binding_79;
  T164 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T165,T166);
  VARSET(YevalSg2cYmangle_binding,T164);
  lit_228 = YPPlist(1,YPPsym((P)"exp"));
  lit_229 = YPPlist(1,YPPsym((P)"return"));
  lit_230 = YPPsym((P)"x-2512");
  lit_231 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_232 = YPPsym((P)"for-commas");
  lit_233 = YPPsym((P)"let");
  lit_234 = YPPsym((P)"for");
  lit_235 = YPPsym((P)"first?");
  lit_236 = YPPsym((P)"first-then");
  lit_237 = YPPsym((P)"op");
  lit_238 = YPPsym((P)"unless");
  lit_239 = YPPsym((P)"put");
  T169 = YPsig(LITREF(lit_231),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2512_80 = YPmet(FUNCODEREF(fun_x_2512_80),LITREF(lit_230),T169,ENVNUL,PNUL,YPfalse);
  T168 = YPsig(LITREF(lit_229),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T168,ENVNUL,PNUL,YPfalse);
  T167 = YPsig(LITREF(lit_228),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_82 = YPmet(FUNCODEREF(fun_82),YPfalse,T167,ENVNUL,PNUL,YPfalse);
  T170 = fun_82;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"for-commas"),T170);
  lit_240 = YPPlist(1,YPPsym((P)"exp"));
  lit_241 = YPPlist(1,YPPsym((P)"return"));
  lit_242 = YPPsym((P)"x-2516");
  lit_243 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_244 = YPPsym((P)"between-parentheses");
  T173 = YPsig(LITREF(lit_243),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2516_83 = YPmet(FUNCODEREF(fun_x_2516_83),LITREF(lit_242),T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(LITREF(lit_241),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_84 = YPmet(FUNCODEREF(fun_84),YPfalse,T172,ENVNUL,PNUL,YPfalse);
  T171 = YPsig(LITREF(lit_240),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_85 = YPmet(FUNCODEREF(fun_85),YPfalse,T171,ENVNUL,PNUL,YPfalse);
  T174 = fun_85;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses"),T174);
  lit_245 = YPPlist(1,YPPsym((P)"exp"));
  lit_246 = YPPlist(1,YPPsym((P)"return"));
  lit_247 = YPPsym((P)"x-2520");
  lit_248 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_249 = YPPsym((P)"between-parentheses-comma-separated");
  T181 = YPsig(LITREF(lit_248),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  T180 = fun_x_2520_86 = YPmet(FUNCODEREF(fun_x_2520_86),LITREF(lit_247),T181,ENVNUL,PNUL,YPfalse);
  T179 = YPsig(LITREF(lit_246),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T178 = fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T179,ENVNUL,PNUL,YPfalse);
  T177 = YPsig(LITREF(lit_245),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T176 = fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T177,ENVNUL,PNUL,YPfalse);
  T183 = fun_88;
  T182 = YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"between-parentheses-comma-separated"),T183);
  T175 = T182;
  return T175;
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
  P T192,T193,T194;
DEFCREGS();
  lit_250 = YPPsym((P)"gen-result");
  lit_251 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_252 = YPsb((P)"T");
  lit_253 = YPsb((P)" = ");
  T0 = YPsig(LITREF(lit_251),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLlogG),Ynil);
  fun_gen_result_89 = YPmet(FUNCODEREF(fun_gen_result_89),LITREF(lit_250),T0,ENVNUL,PNUL,sloc(525));
  T2 = VARREF_OR(YevalSg2cYgen_result,YPfalse);
  T3 = fun_gen_result_89;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSg2cYgen_result,T1);
  lit_254 = YPPsym((P)"gen-depth");
  lit_255 = YPPlist(2,YPPsym((P)"d"),YPPsym((P)"out"));
  lit_256 = YPsb((P)"  ");
  T4 = YPsig(LITREF(lit_255),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_depth_90 = YPmet(FUNCODEREF(fun_gen_depth_90),LITREF(lit_254),T4,ENVNUL,PNUL,sloc(529));
  T6 = VARREF_OR(YevalSg2cYgen_depth,YPfalse);
  T7 = fun_gen_depth_90;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSg2cYgen_depth,T5);
  lit_257 = YPPlist(1,YPPsym((P)"exp"));
  lit_258 = YPPlist(1,YPPsym((P)"return"));
  lit_259 = YPPsym((P)"x-2527");
  lit_260 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_261 = YPPsym((P)"with-statement");
  lit_262 = YPPsym((P)"seq");
  lit_263 = YPPsym((P)"puts");
  lit_264 = YPsb((P)";\n");
  T10 = YPsig(LITREF(lit_260),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2527_91 = YPmet(FUNCODEREF(fun_x_2527_91),LITREF(lit_259),T10,ENVNUL,PNUL,YPfalse);
  T9 = YPsig(LITREF(lit_258),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_92 = YPmet(FUNCODEREF(fun_92),YPfalse,T9,ENVNUL,PNUL,YPfalse);
  T8 = YPsig(LITREF(lit_257),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_93 = YPmet(FUNCODEREF(fun_93),YPfalse,T8,ENVNUL,PNUL,YPfalse);
  T11 = fun_93;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-statement"),T11);
  lit_265 = YPPlist(1,YPPsym((P)"exp"));
  lit_266 = YPPlist(1,YPPsym((P)"return"));
  lit_267 = YPPsym((P)"x-2531");
  lit_268 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_269 = YPPsym((P)"with-expression");
  T14 = YPsig(LITREF(lit_268),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2531_94 = YPmet(FUNCODEREF(fun_x_2531_94),LITREF(lit_267),T14,ENVNUL,PNUL,YPfalse);
  T13 = YPsig(LITREF(lit_266),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T13,ENVNUL,PNUL,YPfalse);
  T12 = YPsig(LITREF(lit_265),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_96 = YPmet(FUNCODEREF(fun_96),YPfalse,T12,ENVNUL,PNUL,YPfalse);
  T15 = fun_96;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-expression"),T15);
  lit_270 = YPPlist(1,YPPsym((P)"exp"));
  lit_271 = YPPlist(1,YPPsym((P)"return"));
  lit_272 = YPPsym((P)"x-2535");
  lit_273 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_274 = YPPsym((P)"with-used-expression");
  lit_275 = YPPsym((P)"when");
  lit_276 = YPPsym((P)"program-register");
  T18 = YPsig(LITREF(lit_273),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2535_97 = YPmet(FUNCODEREF(fun_x_2535_97),LITREF(lit_272),T18,ENVNUL,PNUL,YPfalse);
  T17 = YPsig(LITREF(lit_271),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T17,ENVNUL,PNUL,YPfalse);
  T16 = YPsig(LITREF(lit_270),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_99 = YPmet(FUNCODEREF(fun_99),YPfalse,T16,ENVNUL,PNUL,YPfalse);
  T19 = fun_99;
  YPmacro(YPPsym((P)"eval/g2c"),YPPsym((P)"with-used-expression"),T19);
  lit_277 = YPPsym((P)"generate-quotation-forwards");
  lit_278 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_279 = YPsb((P)"\n/* FORWARD QUOTATIONS: */\n\n");
  lit_280 = YPsb((P)"DEFLIT(lit_");
  lit_281 = YPsb((P)");\n");
  T20 = YPsig(LITREF(lit_278),YPPlist(2,VARREF(YLanyG),VARREF(YLcolG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_forwards_100 = YPmet(FUNCODEREF(fun_generate_quotation_forwards_100),LITREF(lit_277),T20,ENVNUL,PNUL,sloc(549));
  T22 = VARREF_OR(YevalSg2cYgenerate_quotation_forwards,YPfalse);
  T23 = fun_generate_quotation_forwards_100;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSg2cYgenerate_quotation_forwards,T21);
  lit_282 = YPPsym((P)"generate-quotations");
  lit_283 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb*"));
  lit_284 = YPsb((P)"lit_");
  lit_285 = YPsb((P)" = ");
  T24 = YPsig(LITREF(lit_283),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotations_101 = YPmet(FUNCODEREF(fun_generate_quotations_101),LITREF(lit_282),T24,ENVNUL,PNUL,sloc(554));
  T26 = VARREF_OR(YevalSg2cYgenerate_quotations,YPfalse);
  T27 = fun_generate_quotations_101;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSg2cYgenerate_quotations,T25);
  lit_286 = YPPsym((P)"false-name");
  lit_287 = YPsb((P)"%false");
  T28 = YPsig(LITREF(lit_20),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_false_name_102 = YPmet(FUNCODEREF(fun_false_name_102),LITREF(lit_286),T28,ENVNUL,PNUL,sloc(560));
  T30 = VARREF_OR(YevalSg2cYfalse_name,YPfalse);
  T31 = fun_false_name_102;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSg2cYfalse_name,T29);
  lit_288 = YPPsym((P)"generate-quotation");
  lit_289 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_290 = YPsb((P)"%true");
  lit_291 = YPsb((P)"%false");
  T32 = YPsig(LITREF(lit_289),YPPlist(2,VARREF(YLanyG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_103 = YPmet(FUNCODEREF(fun_generate_quotation_103),LITREF(lit_288),T32,ENVNUL,PNUL,sloc(563));
  T34 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T35 = fun_generate_quotation_103;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSg2cYgenerate_quotation,T33);
  lit_292 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_293 = YPsb((P)"nil");
  T37 = XCALL1(1,VARREF(YgooStypesYtE),Ynil);
  T36 = YPsig(LITREF(lit_292),YPPlist(2,VARREF(YLanyG),T37),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_104 = YPmet(FUNCODEREF(fun_generate_quotation_104),LITREF(lit_288),T36,ENVNUL,PNUL,sloc(566));
  T39 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T40 = fun_generate_quotation_104;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYgenerate_quotation,T38);
  lit_294 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"qb"));
  lit_295 = YPPlist(1,YPPsym((P)"x"));
  T42 = YPsig(LITREF(lit_295),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_105 = YPmet(FUNCODEREF(fun_105),YPfalse,T42,ENVNUL,PNUL,sloc(570));
  T41 = YPsig(LITREF(lit_294),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_106 = YPmet(FUNCODEREF(fun_generate_quotation_106),LITREF(lit_288),T41,ENVNUL,PNUL,sloc(569));
  T44 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T45 = fun_generate_quotation_106;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSg2cYgenerate_quotation,T43);
  lit_296 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_297 = YPsb((P)"%int");
  lit_298 = YPsb((P)"((P)");
  lit_299 = YPsb((P)")");
  T46 = YPsig(LITREF(lit_296),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_107 = YPmet(FUNCODEREF(fun_generate_quotation_107),LITREF(lit_288),T46,ENVNUL,PNUL,sloc(572));
  T48 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T49 = fun_generate_quotation_107;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYgenerate_quotation,T47);
  lit_300 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_301 = YPsb((P)"%chr");
  lit_302 = YPsb((P)"((P)");
  lit_303 = YPsb((P)")");
  T50 = YPsig(LITREF(lit_300),YPPlist(2,VARREF(YLanyG),VARREF(YLchrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_108 = YPmet(FUNCODEREF(fun_generate_quotation_108),LITREF(lit_288),T50,ENVNUL,PNUL,sloc(575));
  T52 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T53 = fun_generate_quotation_108;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSg2cYgenerate_quotation,T51);
  lit_304 = YPPsym((P)"float-to-c-string");
  lit_305 = YPPlist(1,YPPsym((P)"o"));
  lit_306 = YPPlist(1,YPPsym((P)"done"));
  T55 = YPsig(LITREF(lit_306),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T55,ENVNUL,PNUL,sloc(581));
  T54 = YPsig(LITREF(lit_305),YPPlist(1,VARREF(YLfloG)),YPfalse,YPint((P)1),VARREF(YLstrG),Ynil);
  fun_float_to_c_string_110 = YPmet(FUNCODEREF(fun_float_to_c_string_110),LITREF(lit_304),T54,ENVNUL,PNUL,sloc(578));
  T57 = VARREF_OR(YevalSg2cYfloat_to_c_string,YPfalse);
  T58 = fun_float_to_c_string_110;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYfloat_to_c_string,T56);
  lit_307 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_308 = YPsb((P)"%flo");
  lit_309 = YPsb((P)"(FLOINT(");
  lit_310 = YPsb((P)"))");
  T59 = YPsig(LITREF(lit_307),YPPlist(2,VARREF(YLanyG),VARREF(YLfloG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_111 = YPmet(FUNCODEREF(fun_generate_quotation_111),LITREF(lit_288),T59,ENVNUL,PNUL,sloc(593));
  T61 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T62 = fun_generate_quotation_111;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSg2cYgenerate_quotation,T60);
  lit_311 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_312 = YPsb((P)"%sb");
  lit_313 = YPsb((P)"((P)");
  lit_314 = YPsb((P)")");
  T63 = YPsig(LITREF(lit_311),YPPlist(2,VARREF(YLanyG),VARREF(YLstrG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_112 = YPmet(FUNCODEREF(fun_generate_quotation_112),LITREF(lit_288),T63,ENVNUL,PNUL,sloc(597));
  T65 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T66 = fun_generate_quotation_112;
  T64 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T65,T66);
  VARSET(YevalSg2cYgenerate_quotation,T64);
  lit_315 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_316 = YPsb((P)"XCALLN(1, ");
  lit_317 = YPsb((P)"vec");
  lit_318 = YPsb((P)", ");
  lit_319 = YPsb((P)", ");
  lit_320 = YPsb((P)")");
  T67 = YPsig(LITREF(lit_315),YPPlist(2,VARREF(YLanyG),VARREF(YgooScolsSvecYLvecG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_113 = YPmet(FUNCODEREF(fun_generate_quotation_113),LITREF(lit_288),T67,ENVNUL,PNUL,sloc(601));
  T69 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T70 = fun_generate_quotation_113;
  T68 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T69,T70);
  VARSET(YevalSg2cYgenerate_quotation,T68);
  lit_321 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_322 = YPsb((P)"XCALLN(1, ");
  lit_323 = YPsb((P)"tup");
  lit_324 = YPsb((P)", ");
  lit_325 = YPsb((P)", ");
  lit_326 = YPsb((P)")");
  T71 = YPsig(LITREF(lit_321),YPPlist(2,VARREF(YLanyG),VARREF(YLtupG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_114 = YPmet(FUNCODEREF(fun_generate_quotation_114),LITREF(lit_288),T71,ENVNUL,PNUL,sloc(609));
  T73 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T74 = fun_generate_quotation_114;
  T72 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T73,T74);
  VARSET(YevalSg2cYgenerate_quotation,T72);
  lit_327 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"x"));
  lit_328 = YPsb((P)"%%sym");
  lit_329 = YPsb((P)"((P)");
  lit_330 = YPsb((P)")");
  T75 = YPsig(LITREF(lit_327),YPPlist(2,VARREF(YLanyG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_quotation_115 = YPmet(FUNCODEREF(fun_generate_quotation_115),LITREF(lit_288),T75,ENVNUL,PNUL,sloc(617));
  T77 = VARREF_OR(YevalSg2cYgenerate_quotation,YPfalse);
  T78 = fun_generate_quotation_115;
  T76 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T77,T78);
  VARSET(YevalSg2cYgenerate_quotation,T76);
  lit_331 = YPPsym((P)"binding->c");
  lit_332 = YPPlist(2,YPPsym((P)"binding"),YPPsym((P)"out"));
  T79 = YPsig(LITREF(lit_332),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYbinding_Gc = YPmet(FUNCODEREF(YevalSg2cYbinding_Gc),LITREF(lit_331),T79,ENVNUL,PNUL,sloc(626));
  T80 = YevalSg2cYbinding_Gc;
  VARSET(YevalSg2cYbinding_Gc,T80);
  lit_333 = YPPsym((P)"reference->c");
  lit_334 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T82 = YPsig(LITREF(lit_334),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T81 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_333),T82,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYreference_Gc,T81);
  lit_335 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  T83 = YPsig(LITREF(lit_335),YPPlist(2,VARREF(YevalSastYLbindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_117 = YPmet(FUNCODEREF(fun_reference_Gc_117),LITREF(lit_333),T83,ENVNUL,PNUL,sloc(633));
  T85 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T86 = fun_reference_Gc_117;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSg2cYreference_Gc,T84);
  lit_336 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"out"));
  lit_337 = YPsb((P)"LITREF");
  lit_338 = YPsb((P)"RTVREF");
  lit_339 = YPsb((P)"DYNREF");
  lit_340 = YPsb((P)"VARREF");
  T87 = YPsig(LITREF(lit_336),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_Gc_118 = YPmet(FUNCODEREF(fun_reference_Gc_118),LITREF(lit_333),T87,ENVNUL,PNUL,sloc(636));
  T89 = VARREF_OR(YevalSg2cYreference_Gc,YPfalse);
  T90 = fun_reference_Gc_118;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSg2cYreference_Gc,T88);
  lit_341 = YPPsym((P)"to-c");
  lit_342 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T92 = YPsig(LITREF(lit_342),YPPlist(4,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T91 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_341),T92,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSg2cYto_c,T91);
  lit_343 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T93 = YPsig(LITREF(lit_343),YPPlist(4,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_119 = YPmet(FUNCODEREF(fun_to_c_119),LITREF(lit_341),T93,ENVNUL,PNUL,sloc(648));
  T95 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T96 = fun_to_c_119;
  T94 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T95,T96);
  VARSET(YevalSg2cYto_c,T94);
  lit_344 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  T97 = YPsig(LITREF(lit_344),YPPlist(4,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_120 = YPmet(FUNCODEREF(fun_to_c_120),LITREF(lit_341),T97,ENVNUL,PNUL,sloc(654));
  T99 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T100 = fun_to_c_120;
  T98 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T99,T100);
  VARSET(YevalSg2cYto_c,T98);
  lit_345 = YPPsym((P)"gen-ref");
  lit_346 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T101 = YPsig(LITREF(lit_346),YPPlist(2,VARREF(YevalSastYLreferenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_121 = YPmet(FUNCODEREF(fun_gen_ref_121),LITREF(lit_345),T101,ENVNUL,PNUL,sloc(656));
  T103 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T104 = fun_gen_ref_121;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSg2cYgen_ref,T102);
  lit_347 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_348 = YPsb((P)"FREEREF");
  T105 = YPsig(LITREF(lit_347),YPPlist(2,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_122 = YPmet(FUNCODEREF(fun_gen_ref_122),LITREF(lit_345),T105,ENVNUL,PNUL,sloc(659));
  T107 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T108 = fun_gen_ref_122;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSg2cYgen_ref,T106);
  lit_349 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_350 = YPsb((P)"T");
  lit_351 = YPsb((P)"T_1");
  T109 = YPsig(LITREF(lit_349),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_123 = YPmet(FUNCODEREF(fun_gen_ref_123),LITREF(lit_345),T109,ENVNUL,PNUL,sloc(664));
  T111 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T112 = fun_gen_ref_123;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSg2cYgen_ref,T110);
  lit_352 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  lit_353 = YPsb((P)"(P)");
  T113 = YPsig(LITREF(lit_352),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_124 = YPmet(FUNCODEREF(fun_gen_ref_124),LITREF(lit_345),T113,ENVNUL,PNUL,sloc(668));
  T115 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T116 = fun_gen_ref_124;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSg2cYgen_ref,T114);
  lit_354 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T117 = YPsig(LITREF(lit_354),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_125 = YPmet(FUNCODEREF(fun_gen_ref_125),LITREF(lit_345),T117,ENVNUL,PNUL,sloc(671));
  T119 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T120 = fun_gen_ref_125;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSg2cYgen_ref,T118);
  lit_355 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T121 = YPsig(LITREF(lit_355),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_126 = YPmet(FUNCODEREF(fun_gen_ref_126),LITREF(lit_345),T121,ENVNUL,PNUL,sloc(674));
  T123 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T124 = fun_gen_ref_126;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSg2cYgen_ref,T122);
  lit_356 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T125 = YPsig(LITREF(lit_356),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_127 = YPmet(FUNCODEREF(fun_gen_ref_127),LITREF(lit_345),T125,ENVNUL,PNUL,sloc(677));
  T127 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T128 = fun_gen_ref_127;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSg2cYgen_ref,T126);
  lit_357 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T129 = YPsig(LITREF(lit_357),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_128 = YPmet(FUNCODEREF(fun_gen_ref_128),LITREF(lit_345),T129,ENVNUL,PNUL,sloc(680));
  T131 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T132 = fun_gen_ref_128;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSg2cYgen_ref,T130);
  lit_358 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"out"));
  T133 = YPsig(LITREF(lit_358),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_ref_129 = YPmet(FUNCODEREF(fun_gen_ref_129),LITREF(lit_345),T133,ENVNUL,PNUL,sloc(683));
  T135 = VARREF_OR(YevalSg2cYgen_ref,YPfalse);
  T136 = fun_gen_ref_129;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSg2cYgen_ref,T134);
  lit_359 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_360 = YPsb((P)"RTVSET(");
  lit_361 = YPsb((P)"DYNDEFSET(");
  lit_362 = YPsb((P)"DYNSET(");
  lit_363 = YPsb((P)"VARSET(");
  lit_364 = YPsb((P)",");
  lit_365 = YPsb((P)")");
  T137 = YPsig(LITREF(lit_359),YPPlist(4,VARREF(YevalSastYLglobal_assignmentG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_130 = YPmet(FUNCODEREF(fun_to_c_130),LITREF(lit_341),T137,ENVNUL,PNUL,sloc(686));
  T139 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T140 = fun_to_c_130;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSg2cYto_c,T138);
  lit_366 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_367 = YPsb((P)"RTV");
  lit_368 = YPsb((P)"VARREF_OR");
  T141 = YPsig(LITREF(lit_366),YPPlist(4,VARREF(YevalSastYLboundQG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_131 = YPmet(FUNCODEREF(fun_to_c_131),LITREF(lit_341),T141,ENVNUL,PNUL,sloc(700));
  T143 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T144 = fun_to_c_131;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYto_c,T142);
  lit_369 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_370 = YPsb((P)"BOXGET");
  T145 = YPsig(LITREF(lit_369),YPPlist(4,VARREF(YevalSast_linearizeYLbox_readG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_132 = YPmet(FUNCODEREF(fun_to_c_132),LITREF(lit_341),T145,ENVNUL,PNUL,sloc(711));
  T147 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T148 = fun_to_c_132;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSg2cYto_c,T146);
  lit_371 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_372 = YPsb((P)"BOXPUT");
  lit_373 = YPsb((P)" = ");
  T149 = YPsig(LITREF(lit_371),YPPlist(4,VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_133 = YPmet(FUNCODEREF(fun_to_c_133),LITREF(lit_341),T149,ENVNUL,PNUL,sloc(719));
  T151 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T152 = fun_to_c_133;
  T150 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T151,T152);
  VARSET(YevalSg2cYto_c,T150);
  lit_374 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_375 = YPsb((P)" = BOXFAB");
  T153 = YPsig(LITREF(lit_374),YPPlist(4,VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_134 = YPmet(FUNCODEREF(fun_to_c_134),LITREF(lit_341),T153,ENVNUL,PNUL,sloc(730));
  T155 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T156 = fun_to_c_134;
  T154 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T155,T156);
  VARSET(YevalSg2cYto_c,T154);
  lit_376 = YPPsym((P)"bb?");
  lit_377 = YPPlist(1,YPPsym((P)"x"));
  T157 = YPsig(LITREF(lit_377),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_135 = YPmet(FUNCODEREF(fun_bbQ_135),LITREF(lit_376),T157,ENVNUL,PNUL,sloc(738));
  T159 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T160 = fun_bbQ_135;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YevalSg2cYbbQ,T158);
  lit_378 = YPPlist(1,YPPsym((P)"x"));
  lit_379 = YPPsym((P)"%bb");
  T161 = YPsig(LITREF(lit_378),YPPlist(1,VARREF(YevalSastYLpredefined_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_136 = YPmet(FUNCODEREF(fun_bbQ_136),LITREF(lit_376),T161,ENVNUL,PNUL,sloc(740));
  T163 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T164 = fun_bbQ_136;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YevalSg2cYbbQ,T162);
  lit_380 = YPPlist(1,YPPsym((P)"x"));
  T165 = YPsig(LITREF(lit_380),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_bbQ_137 = YPmet(FUNCODEREF(fun_bbQ_137),LITREF(lit_376),T165,ENVNUL,PNUL,sloc(744));
  T167 = VARREF_OR(YevalSg2cYbbQ,YPfalse);
  T168 = fun_bbQ_137;
  T166 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T167,T168);
  VARSET(YevalSg2cYbbQ,T166);
  lit_381 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_382 = YPsb((P)"if (");
  lit_383 = YPsb((P)") {\n");
  lit_384 = YPsb((P)" != ");
  lit_385 = YPsb((P)") {\n");
  lit_386 = YPsb((P)"} else {\n");
  lit_387 = YPsb((P)"}\n");
  T169 = YPsig(LITREF(lit_381),YPPlist(4,VARREF(YevalSastYLalternativeG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_138 = YPmet(FUNCODEREF(fun_to_c_138),LITREF(lit_341),T169,ENVNUL,PNUL,sloc(747));
  T171 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T172 = fun_to_c_138;
  T170 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T171,T172);
  VARSET(YevalSg2cYto_c,T170);
  lit_388 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_389 = YPPlist(1,YPPsym((P)"x"));
  T174 = YPsig(LITREF(lit_389),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_139 = YPmet(FUNCODEREF(fun_139),YPfalse,T174,ENVNUL,PNUL,sloc(766));
  T173 = YPsig(LITREF(lit_388),YPPlist(4,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_140 = YPmet(FUNCODEREF(fun_to_c_140),LITREF(lit_341),T173,ENVNUL,PNUL,sloc(765));
  T176 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T177 = fun_to_c_140;
  T175 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T176,T177);
  VARSET(YevalSg2cYto_c,T175);
  DYNDEFSET(YevalSg2cYTloop_arg_counterT,YPint((P)-1));
  lit_390 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_391 = YPsb((P)"LOOP_");
  lit_392 = YPsb((P)": {\n");
  lit_393 = YPsb((P)"P ");
  lit_394 = YPPlist(1,YPPsym((P)"x"));
  lit_395 = YPPlist(1,YPPsym((P)"x"));
  lit_396 = YPsb((P)"a");
  lit_397 = YPsb((P)"_");
  lit_398 = YPsb((P)"}\n");
  T180 = YPsig(LITREF(lit_394),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_141 = YPmet(FUNCODEREF(fun_141),YPfalse,T180,ENVNUL,PNUL,sloc(777));
  T179 = YPsig(LITREF(lit_395),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_142 = YPmet(FUNCODEREF(fun_142),YPfalse,T179,ENVNUL,PNUL,sloc(777));
  T178 = YPsig(LITREF(lit_390),YPPlist(4,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_143 = YPmet(FUNCODEREF(fun_to_c_143),LITREF(lit_341),T178,ENVNUL,PNUL,sloc(770));
  T182 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T183 = fun_to_c_143;
  T181 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T182,T183);
  VARSET(YevalSg2cYto_c,T181);
  lit_399 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_400 = YPsb((P)"a");
  lit_401 = YPsb((P)"_");
  lit_402 = YPsb((P)" = ");
  lit_403 = YPsb((P)" = a");
  lit_404 = YPsb((P)"_");
  lit_405 = YPsb((P)"goto LOOP_");
  T184 = YPsig(LITREF(lit_399),YPPlist(4,VARREF(YevalSastYLloop_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_144 = YPmet(FUNCODEREF(fun_to_c_144),LITREF(lit_341),T184,ENVNUL,PNUL,sloc(783));
  T186 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T187 = fun_to_c_144;
  T185 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T186,T187);
  VARSET(YevalSg2cYto_c,T185);
  VARSET(YevalSg2cYDnumber_call_templates,YPint((P)5));
  lit_406 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_407 = YPsb((P)"X");
  lit_408 = YPsb((P)"CALL");
  lit_409 = YPsb((P)"N");
  lit_410 = YPsb((P)"0,");
  lit_411 = YPsb((P)"1,");
  lit_412 = YPsb((P)",");
  T190 = YPsig(LITREF(lit_406),YPPlist(4,VARREF(YevalSastYLregular_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  T189 = fun_to_c_145 = YPmet(FUNCODEREF(fun_to_c_145),LITREF(lit_341),T190,ENVNUL,PNUL,sloc(801));
  T193 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T194 = fun_to_c_145;
  T192 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T193,T194);
  T191 = VARSET(YevalSg2cYto_c,T192);
  T188 = T191;
  return T188;
}

P YevalSg2cY___main_3___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170,T171,T172,T173;
DEFCREGS();
  lit_413 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_414 = YPPlist(1,YPPsym((P)"x"));
  lit_415 = YPPlist(1,YPPsym((P)"x"));
  T2 = YPsig(LITREF(lit_414),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_146 = YPmet(FUNCODEREF(fun_146),YPfalse,T2,ENVNUL,PNUL,sloc(819));
  T1 = YPsig(LITREF(lit_415),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_147 = YPmet(FUNCODEREF(fun_147),YPfalse,T1,ENVNUL,PNUL,sloc(819));
  T0 = YPsig(LITREF(lit_413),YPPlist(4,VARREF(YevalSastYLargumentsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_148 = YPmet(FUNCODEREF(fun_to_c_148),LITREF(lit_341),T0,ENVNUL,PNUL,sloc(818));
  T4 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T5 = fun_to_c_148;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSg2cYto_c,T3);
  lit_416 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_417 = YPsb((P)"check_type");
  lit_418 = YPsb((P)" = ");
  T6 = YPsig(LITREF(lit_416),YPPlist(4,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_149 = YPmet(FUNCODEREF(fun_to_c_149),LITREF(lit_341),T6,ENVNUL,PNUL,sloc(822));
  T8 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T9 = fun_to_c_149;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSg2cYto_c,T7);
  lit_419 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_420 = YPsb((P)" = ");
  T10 = YPsig(LITREF(lit_419),YPPlist(4,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_150 = YPmet(FUNCODEREF(fun_to_c_150),LITREF(lit_341),T10,ENVNUL,PNUL,sloc(839));
  T12 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T13 = fun_to_c_150;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSg2cYto_c,T11);
  lit_421 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_422 = YPsb((P)"with_exit");
  T14 = YPsig(LITREF(lit_421),YPPlist(4,VARREF(YevalSastYLbind_exitG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_151 = YPmet(FUNCODEREF(fun_to_c_151),LITREF(lit_341),T14,ENVNUL,PNUL,sloc(849));
  T16 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T17 = fun_to_c_151;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSg2cYto_c,T15);
  lit_423 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_424 = YPsb((P)"with_cleanup");
  T18 = YPsig(LITREF(lit_423),YPPlist(4,VARREF(YevalSastYLunwind_protectG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_152 = YPmet(FUNCODEREF(fun_to_c_152),LITREF(lit_341),T18,ENVNUL,PNUL,sloc(855));
  T20 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T21 = fun_to_c_152;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSg2cYto_c,T19);
  lit_425 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_426 = YPsb((P)"XCALLN");
  lit_427 = YPsb((P)"1");
  lit_428 = YPsb((P)"%with-monitor");
  lit_429 = YPsb((P)"5");
  T22 = YPsig(LITREF(lit_425),YPPlist(4,VARREF(YevalSastYLmonitorG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_153 = YPmet(FUNCODEREF(fun_to_c_153),LITREF(lit_341),T22,ENVNUL,PNUL,sloc(864));
  T24 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T25 = fun_to_c_153;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSg2cYto_c,T23);
  lit_430 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_431 = YPsb((P)"(P)");
  lit_432 = YPPlist(1,YPPsym((P)"x"));
  lit_433 = YPPlist(1,YPPsym((P)"x"));
  T28 = YPsig(LITREF(lit_432),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_154 = YPmet(FUNCODEREF(fun_154),YPfalse,T28,ENVNUL,PNUL,sloc(889));
  T27 = YPsig(LITREF(lit_433),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_155 = YPmet(FUNCODEREF(fun_155),YPfalse,T27,ENVNUL,PNUL,sloc(889));
  T26 = YPsig(LITREF(lit_430),YPPlist(4,VARREF(YevalSastYLpredefined_applicationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_156 = YPmet(FUNCODEREF(fun_to_c_156),LITREF(lit_341),T26,ENVNUL,PNUL,sloc(882));
  T30 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T31 = fun_to_c_156;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSg2cYto_c,T29);
  lit_434 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_435 = YPPlist(1,YPPsym((P)"x"));
  lit_436 = YPsb((P)"FUNFAB");
  lit_437 = YPsb((P)",");
  T33 = YPsig(LITREF(lit_435),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_157 = YPmet(FUNCODEREF(fun_157),YPfalse,T33,ENVNUL,PNUL,sloc(898));
  T32 = YPsig(LITREF(lit_434),YPPlist(4,VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_158 = YPmet(FUNCODEREF(fun_to_c_158),LITREF(lit_341),T32,ENVNUL,PNUL,sloc(892));
  T35 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T36 = fun_to_c_158;
  T34 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T35,T36);
  VARSET(YevalSg2cYto_c,T34);
  lit_438 = YPPsym((P)"funshell-to-c");
  lit_439 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_440 = YPsb((P)"FUNSHELL");
  T37 = YPsig(LITREF(lit_439),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funshell_to_c_159 = YPmet(FUNCODEREF(fun_funshell_to_c_159),LITREF(lit_438),T37,ENVNUL,PNUL,sloc(907));
  T39 = VARREF_OR(YevalSg2cYfunshell_to_c,YPfalse);
  T40 = fun_funshell_to_c_159;
  T38 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T39,T40);
  VARSET(YevalSg2cYfunshell_to_c,T38);
  lit_441 = YPPsym((P)"funinit-to-c");
  lit_442 = YPPlist(5,YPPsym((P)"b"),YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_443 = YPPlist(1,YPPsym((P)"x"));
  lit_444 = YPsb((P)"FUNINIT");
  lit_445 = YPsb((P)", ");
  T42 = YPsig(LITREF(lit_443),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_160 = YPmet(FUNCODEREF(fun_160),YPfalse,T42,ENVNUL,PNUL,sloc(923));
  T41 = YPsig(LITREF(lit_442),YPPlist(5,VARREF(YevalSastYLbindingG),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)5),VARREF(YLanyG),Ynil);
  fun_funinit_to_c_161 = YPmet(FUNCODEREF(fun_funinit_to_c_161),LITREF(lit_441),T41,ENVNUL,PNUL,sloc(920));
  T44 = VARREF_OR(YevalSg2cYfuninit_to_c,YPfalse);
  T45 = fun_funinit_to_c_161;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSg2cYfuninit_to_c,T43);
  lit_446 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_447 = YPsb((P)"%macro");
  T46 = YPsig(LITREF(lit_446),YPPlist(4,VARREF(YevalSastYLast_macro_definitionG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_162 = YPmet(FUNCODEREF(fun_to_c_162),LITREF(lit_341),T46,ENVNUL,PNUL,sloc(932));
  T48 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T49 = fun_to_c_162;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSg2cYto_c,T47);
  lit_448 = YPPsym((P)"out-list-builder");
  lit_449 = YPPlist(3,YPPsym((P)"f"),YPPsym((P)"out"),YPPsym((P)"elts"));
  lit_450 = YPsb((P)"nil");
  lit_451 = YPsb((P)"%%list");
  T50 = YPsig(LITREF(lit_449),YPPlist(3,VARREF(YLfunG),VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_out_list_builder_163 = YPmet(FUNCODEREF(fun_out_list_builder_163),LITREF(lit_448),T50,ENVNUL,PNUL,sloc(941));
  T52 = VARREF_OR(YevalSg2cYout_list_builder,YPfalse);
  T53 = fun_out_list_builder_163;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSg2cYout_list_builder,T51);
  lit_452 = YPPsym((P)"gen-fab-list");
  lit_453 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"refs"));
  lit_454 = YPPlist(1,YPPsym((P)"x"));
  T55 = YPsig(LITREF(lit_454),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_164 = YPmet(FUNCODEREF(fun_164),YPfalse,T55,ENVNUL,PNUL,sloc(954));
  T54 = YPsig(LITREF(lit_453),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLfab_listG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_gen_fab_list_165 = YPmet(FUNCODEREF(fun_gen_fab_list_165),LITREF(lit_452),T54,ENVNUL,PNUL,sloc(953));
  T57 = VARREF_OR(YevalSg2cYgen_fab_list,YPfalse);
  T58 = fun_gen_fab_list_165;
  T56 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T57,T58);
  VARSET(YevalSg2cYgen_fab_list,T56);
  lit_455 = YPPsym((P)"generate-function-specs");
  lit_456 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"sig"));
  T59 = YPsig(LITREF(lit_456),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_specs_166 = YPmet(FUNCODEREF(fun_generate_function_specs_166),LITREF(lit_455),T59,ENVNUL,PNUL,sloc(956));
  T61 = VARREF_OR(YevalSg2cYgenerate_function_specs,YPfalse);
  T62 = fun_generate_function_specs_166;
  T60 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T61,T62);
  VARSET(YevalSg2cYgenerate_function_specs,T60);
  lit_457 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_458 = YPPlist(1,YPPsym((P)"x"));
  lit_459 = YPsb((P)"%sig");
  lit_460 = YPsb((P)"nil");
  T64 = YPsig(LITREF(lit_458),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_167 = YPmet(FUNCODEREF(fun_167),YPfalse,T64,ENVNUL,PNUL,sloc(960));
  T63 = YPsig(LITREF(lit_457),YPPlist(4,VARREF(YevalSastYLast_signatureG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_168 = YPmet(FUNCODEREF(fun_to_c_168),LITREF(lit_341),T63,ENVNUL,PNUL,sloc(959));
  T66 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T67 = fun_to_c_168;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSg2cYto_c,T65);
  lit_461 = YPPlist(4,YPPsym((P)"e"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_462 = YPsb((P)"%gen");
  lit_463 = YPsb((P)"(P)YPgen_code((P)YPdispatch)");
  lit_464 = YPsb((P)"nil");
  lit_465 = YPsb((P)"%false");
  lit_466 = YPsb((P)"%false");
  lit_467 = YPsb((P)"%false");
  T68 = YPsig(LITREF(lit_461),YPPlist(4,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_to_c_169 = YPmet(FUNCODEREF(fun_to_c_169),LITREF(lit_341),T68,ENVNUL,PNUL,sloc(972));
  T70 = VARREF_OR(YevalSg2cYto_c,YPfalse);
  T71 = fun_to_c_169;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSg2cYto_c,T69);
  lit_468 = YPPsym((P)"generate-function-forwards");
  lit_469 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_470 = YPsb((P)"\n/* FUNCTIONS: */\n\n");
  T72 = YPsig(LITREF(lit_469),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forwards_170 = YPmet(FUNCODEREF(fun_generate_function_forwards_170),LITREF(lit_468),T72,ENVNUL,PNUL,sloc(988));
  T74 = VARREF_OR(YevalSg2cYgenerate_function_forwards,YPfalse);
  T75 = fun_generate_function_forwards_170;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSg2cYgenerate_function_forwards,T73);
  lit_471 = YPPsym((P)"generate-function-forward");
  lit_472 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_473 = YPsb((P)"static");
  lit_474 = YPsb((P)"extern");
  lit_475 = YPsb((P)" P ");
  lit_476 = YPsb((P)" (");
  lit_477 = YPPlist(1,YPPsym((P)"x"));
  lit_478 = YPPlist(1,YPPsym((P)"x"));
  lit_479 = YPsb((P)"P");
  lit_480 = YPsb((P)");\n");
  T78 = YPsig(LITREF(lit_477),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_171 = YPmet(FUNCODEREF(fun_171),YPfalse,T78,ENVNUL,PNUL,sloc(997));
  T77 = YPsig(LITREF(lit_478),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_172 = YPmet(FUNCODEREF(fun_172),YPfalse,T77,ENVNUL,PNUL,sloc(997));
  T76 = YPsig(LITREF(lit_472),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_173 = YPmet(FUNCODEREF(fun_generate_function_forward_173),LITREF(lit_471),T76,ENVNUL,PNUL,sloc(993));
  T80 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T81 = fun_generate_function_forward_173;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSg2cYgenerate_function_forward,T79);
  lit_481 = YPPsym((P)"generate-function-binding");
  lit_482 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_483 = YPPlist(2,YPPsym((P)"global"),YPPsym((P)"runtime"));
  lit_484 = YPsb((P)"fun_");
  lit_485 = YPsb((P)"fun_");
  lit_486 = YPsb((P)"_");
  T82 = YPsig(LITREF(lit_482),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_binding_174 = YPmet(FUNCODEREF(fun_generate_function_binding_174),LITREF(lit_481),T82,ENVNUL,PNUL,sloc(1001));
  T84 = VARREF_OR(YevalSg2cYgenerate_function_binding,YPfalse);
  T85 = fun_generate_function_binding_174;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSg2cYgenerate_function_binding,T83);
  lit_487 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"defn"));
  lit_488 = YPsb((P)"FUNFOR(");
  lit_489 = YPsb((P)"LOCFOR(");
  lit_490 = YPsb((P)");\n");
  T86 = YPsig(LITREF(lit_487),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_forward_175 = YPmet(FUNCODEREF(fun_generate_function_forward_175),LITREF(lit_471),T86,ENVNUL,PNUL,sloc(1014));
  T88 = VARREF_OR(YevalSg2cYgenerate_function_forward,YPfalse);
  T89 = fun_generate_function_forward_175;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSg2cYgenerate_function_forward,T87);
  lit_491 = YPPsym((P)"generate-function-bodies");
  lit_492 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definitions"));
  lit_493 = YPsb((P)"\n/* FUNCTION CODES: */\n");
  lit_494 = YPPlist(1,YPPsym((P)"def"));
  T91 = YPsig(LITREF(lit_494),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_176 = YPmet(FUNCODEREF(fun_176),YPfalse,T91,ENVNUL,PNUL,sloc(1022));
  T90 = YPsig(LITREF(lit_492),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_bodies_177 = YPmet(FUNCODEREF(fun_generate_function_bodies_177),LITREF(lit_491),T90,ENVNUL,PNUL,sloc(1020));
  T93 = VARREF_OR(YevalSg2cYgenerate_function_bodies,YPfalse);
  T94 = fun_generate_function_bodies_177;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSg2cYgenerate_function_bodies,T92);
  lit_495 = YPPsym((P)"generate-functions");
  lit_496 = YPPlist(4,YPPsym((P)"definitions"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_497 = YPPlist(1,YPPsym((P)"def"));
  T96 = YPsig(LITREF(lit_497),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_178 = YPmet(FUNCODEREF(fun_178),YPfalse,T96,ENVNUL,PNUL,sloc(1027));
  T95 = YPsig(LITREF(lit_496),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_functions_179 = YPmet(FUNCODEREF(fun_generate_functions_179),LITREF(lit_495),T95,ENVNUL,PNUL,sloc(1026));
  T98 = VARREF_OR(YevalSg2cYgenerate_functions,YPfalse);
  T99 = fun_generate_functions_179;
  T97 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T98,T99);
  VARSET(YevalSg2cYgenerate_functions,T97);
  lit_498 = YPPsym((P)"generate-closure-structure");
  lit_499 = YPPlist(4,YPPsym((P)"definition"),YPPsym((P)"f"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_500 = YPsb((P)" = ");
  lit_501 = YPsb((P)"%met");
  lit_502 = YPsb((P)"ENVNUL");
  lit_503 = YPsb((P)"PNUL");
  lit_504 = YPsb((P)"sloc(");
  lit_505 = YPsb((P)")");
  T100 = YPsig(LITREF(lit_499),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_generate_closure_structure_180 = YPmet(FUNCODEREF(fun_generate_closure_structure_180),LITREF(lit_498),T100,ENVNUL,PNUL,sloc(1032));
  T102 = VARREF_OR(YevalSg2cYgenerate_closure_structure,YPfalse);
  T103 = fun_generate_closure_structure_180;
  T101 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T102,T103);
  VARSET(YevalSg2cYgenerate_closure_structure,T101);
  lit_506 = YPPsym((P)"generate-function-body-reference");
  lit_507 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_508 = YPsb((P)"FUNCODEREF(");
  lit_509 = YPsb((P)")");
  T104 = YPsig(LITREF(lit_507),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_body_reference_181 = YPmet(FUNCODEREF(fun_generate_function_body_reference_181),LITREF(lit_506),T104,ENVNUL,PNUL,sloc(1048));
  T106 = VARREF_OR(YevalSg2cYgenerate_function_body_reference,YPfalse);
  T107 = fun_generate_function_body_reference_181;
  T105 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T106,T107);
  VARSET(YevalSg2cYgenerate_function_body_reference,T105);
  lit_510 = YPPsym((P)"generate-return");
  lit_511 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_512 = YPsb((P)"return ");
  T108 = YPsig(LITREF(lit_511),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_182 = YPmet(FUNCODEREF(fun_generate_return_182),LITREF(lit_510),T108,ENVNUL,PNUL,sloc(1057));
  T110 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T111 = fun_generate_return_182;
  T109 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T110,T111);
  VARSET(YevalSg2cYgenerate_return,T109);
  lit_513 = YPPlist(3,YPPsym((P)"defn"),YPPsym((P)"d"),YPPsym((P)"out"));
  lit_514 = YPsb((P)"RET");
  T112 = YPsig(LITREF(lit_513),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_return_183 = YPmet(FUNCODEREF(fun_generate_return_183),LITREF(lit_510),T112,ENVNUL,PNUL,sloc(1061));
  T114 = VARREF_OR(YevalSg2cYgenerate_return,YPfalse);
  T115 = fun_generate_return_183;
  T113 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T114,T115);
  VARSET(YevalSg2cYgenerate_return,T113);
  lit_515 = YPPsym((P)"primitive-inlinable?");
  lit_516 = YPPlist(1,YPPsym((P)"e"));
  lit_517 = YPPsym((P)"inline");
  lit_518 = YPPsym((P)"inline-c");
  T116 = YPsig(LITREF(lit_516),YPPlist(1,VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_primitive_inlinableQ_184 = YPmet(FUNCODEREF(fun_primitive_inlinableQ_184),LITREF(lit_515),T116,ENVNUL,PNUL,sloc(1068));
  T118 = VARREF_OR(YevalSg2cYprimitive_inlinableQ,YPfalse);
  T119 = fun_primitive_inlinableQ_184;
  T117 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T118,T119);
  VARSET(YevalSg2cYprimitive_inlinableQ,T117);
  lit_519 = YPPsym((P)"generate-function-code");
  lit_520 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"e"));
  lit_521 = YPsb((P)"\n");
  lit_522 = YPsb((P)"static ");
  lit_523 = YPsb((P)"INLINE ");
  lit_524 = YPsb((P)"P ");
  lit_525 = YPPlist(1,YPPsym((P)"x"));
  lit_526 = YPPlist(1,YPPsym((P)"x"));
  lit_527 = YPsb((P)"P ");
  lit_528 = YPsb((P)" {\n");
  lit_529 = YPsb((P)"DEFCREGS();\n");
  lit_530 = YPsb((P)"}\n");
  T122 = YPsig(LITREF(lit_525),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_185 = YPmet(FUNCODEREF(fun_185),YPfalse,T122,ENVNUL,PNUL,sloc(1078));
  T121 = YPsig(LITREF(lit_526),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_186 = YPmet(FUNCODEREF(fun_186),YPfalse,T121,ENVNUL,PNUL,sloc(1078));
  T120 = YPsig(LITREF(lit_520),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLast_primitiveG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_187 = YPmet(FUNCODEREF(fun_generate_function_code_187),LITREF(lit_519),T120,ENVNUL,PNUL,sloc(1072));
  T124 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T125 = fun_generate_function_code_187;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSg2cYgenerate_function_code,T123);
  lit_531 = YPPsym((P)"dispatcher?");
  lit_532 = YPPlist(1,YPPsym((P)"definition"));
  lit_533 = YPsb((P)"%dispatch");
  lit_534 = YPsb((P)"-dispatch");
  lit_535 = YPsb((P)"-dispatch");
  T126 = YPsig(LITREF(lit_532),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_dispatcherQ_188 = YPmet(FUNCODEREF(fun_dispatcherQ_188),LITREF(lit_531),T126,ENVNUL,PNUL,sloc(1088));
  T128 = VARREF_OR(YevalSg2cYdispatcherQ,YPfalse);
  T129 = fun_dispatcherQ_188;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSg2cYdispatcherQ,T127);
  lit_536 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"definition"));
  lit_537 = YPsb((P)"\nFUNCODEDEF(");
  lit_538 = YPsb((P)") {\n");
  lit_539 = YPsb((P)"P ");
  lit_540 = YPPlist(1,YPPsym((P)"x"));
  lit_541 = YPPlist(1,YPPsym((P)"x"));
  lit_542 = YPsb((P)"LINK_STACK();\n");
  lit_543 = YPPlist(1,YPPsym((P)"b"));
  lit_544 = YPsb((P)"NARGS(");
  lit_545 = YPsb((P)"ARG(");
  lit_546 = YPsb((P)", ");
  lit_547 = YPsb((P)")");
  lit_548 = YPsb((P)"UNLINK_STACK();\n");
  lit_549 = YPsb((P)"}\n");
  T133 = YPsig(LITREF(lit_540),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_189 = YPmet(FUNCODEREF(fun_189),YPfalse,T133,ENVNUL,PNUL,sloc(1105));
  T132 = YPsig(LITREF(lit_541),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_190 = YPmet(FUNCODEREF(fun_190),YPfalse,T132,ENVNUL,PNUL,sloc(1105));
  T131 = YPsig(LITREF(lit_543),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_191 = YPmet(FUNCODEREF(fun_191),YPfalse,T131,ENVNUL,PNUL,sloc(1111));
  T130 = YPsig(LITREF(lit_536),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_function_code_192 = YPmet(FUNCODEREF(fun_generate_function_code_192),LITREF(lit_519),T130,ENVNUL,PNUL,sloc(1096));
  T135 = VARREF_OR(YevalSg2cYgenerate_function_code,YPfalse);
  T136 = fun_generate_function_code_192;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSg2cYgenerate_function_code,T134);
  lit_550 = YPPsym((P)"generate-local-temporaries");
  lit_551 = YPPlist(2,YPPsym((P)"temps"),YPPsym((P)"out"));
  lit_552 = YPsb((P)"P ");
  T137 = YPsig(LITREF(lit_551),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_local_temporaries_193 = YPmet(FUNCODEREF(fun_generate_local_temporaries_193),LITREF(lit_550),T137,ENVNUL,PNUL,sloc(1131));
  T139 = VARREF_OR(YevalSg2cYgenerate_local_temporaries,YPfalse);
  T140 = fun_generate_local_temporaries_193;
  T138 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T139,T140);
  VARSET(YevalSg2cYgenerate_local_temporaries,T138);
  VARSET(YevalSg2cYTtrace_registersQT,YPfalse);
  VARSET(YevalSg2cYTregisters_per_lineT,YPint((P)16));
  lit_553 = YPPsym((P)"generate-registers");
  lit_554 = YPPlist(2,YPPsym((P)"regs"),YPPsym((P)"out"));
  lit_555 = YPsb((P)"P ");
  lit_556 = YPsb((P)";\n");
  T141 = YPsig(LITREF(lit_554),YPPlist(2,VARREF(YgooScolsSvecYLvecG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_registers_194 = YPmet(FUNCODEREF(fun_generate_registers_194),LITREF(lit_553),T141,ENVNUL,PNUL,sloc(1140));
  T143 = VARREF_OR(YevalSg2cYgenerate_registers,YPfalse);
  T144 = fun_generate_registers_194;
  T142 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T143,T144);
  VARSET(YevalSg2cYgenerate_registers,T142);
  lit_557 = YPPsym((P)"module-info-name");
  lit_558 = YPPlist(1,YPPsym((P)"name"));
  lit_559 = YPsb((P)"module_info_");
  T145 = YPsig(LITREF(lit_558),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_info_name_195 = YPmet(FUNCODEREF(fun_module_info_name_195),LITREF(lit_557),T145,ENVNUL,PNUL,sloc(1152));
  T147 = VARREF_OR(YevalSg2cYmodule_info_name,YPfalse);
  T148 = fun_module_info_name_195;
  T146 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T147,T148);
  VARSET(YevalSg2cYmodule_info_name,T146);
  lit_560 = YPPsym((P)"declare-imported-module-infos");
  lit_561 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_562 = YPPsym((P)"maybe-declare");
  lit_563 = YPPlist(1,YPPsym((P)"modname"));
  lit_564 = YPsb((P)"extern MODULE_INFO ");
  lit_565 = YPsb((P)";\n");
  lit_566 = YPPlist(1,YPPsym((P)"binding"));
  T151 = YPsig(LITREF(lit_563),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_maybe_declare_196 = YPmet(FUNCODEREF(fun_maybe_declare_196),LITREF(lit_562),T151,ENVNUL,PNUL,sloc(1161));
  T150 = YPsig(LITREF(lit_566),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_197 = YPmet(FUNCODEREF(fun_197),YPfalse,T150,ENVNUL,PNUL,sloc(1168));
  T149 = YPsig(LITREF(lit_561),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYdeclare_imported_module_infos = YPmet(FUNCODEREF(YevalSg2cYdeclare_imported_module_infos),LITREF(lit_560),T149,ENVNUL,PNUL,sloc(1158));
  T152 = YevalSg2cYdeclare_imported_module_infos;
  VARSET(YevalSg2cYdeclare_imported_module_infos,T152);
  lit_567 = YPPsym((P)"generate-module-info");
  lit_568 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_569 = YPsb((P)"\n/* MODULE ENVIRONMENT INFORMATION */\n\n");
  lit_570 = YPsb((P)"\nstatic USE_INFO use_infos[] = {\n");
  lit_571 = YPsb((P)"  {&");
  lit_572 = YPsb((P)"},\n");
  lit_573 = YPsb((P)"  {NULL}\n};\n");
  lit_574 = YPsb((P)"\nstatic IMPORT_INFO import_infos[] = {\n");
  lit_575 = YPPlist(2,YPPsym((P)"local-name"),YPPsym((P)"binding"));
  lit_576 = YPsb((P)"  {");
  lit_577 = YPsb((P)", &");
  lit_578 = YPsb((P)", ");
  lit_579 = YPsb((P)"NULL");
  lit_580 = YPsb((P)"},\n");
  lit_581 = YPsb((P)"  {NULL,NULL,NULL}\n};\n");
  lit_582 = YPsb((P)"\nstatic BINDING_INFO binding_infos[] = {\n");
  lit_583 = YPPlist(1,YPPsym((P)"binding"));
  lit_584 = YPsb((P)"  {");
  lit_585 = YPsb((P)", ");
  lit_586 = YPsb((P)"CVAR, &");
  lit_587 = YPsb((P)"},\n");
  lit_588 = YPsb((P)"DVAR, &");
  lit_589 = YPsb((P)"},\n");
  lit_590 = YPsb((P)"PVAR, NULL},\n");
  lit_591 = YPsb((P)"  {NULL, NVAR, NULL}\n};\n");
  lit_592 = YPsb((P)"\nstatic EXPORT_INFO export_infos[] = {\n");
  lit_593 = YPsb((P)"  {");
  lit_594 = YPsb((P)", ");
  lit_595 = YPsb((P)"NULL");
  lit_596 = YPsb((P)"},\n");
  lit_597 = YPsb((P)"  {NULL, NULL}\n};\n");
  lit_598 = YPsb((P)"\nextern MODULE_INFO ");
  lit_599 = YPsb((P)";\n");
  lit_600 = YPsb((P)"MODULE_INFO ");
  lit_601 = YPsb((P)" = {\n");
  lit_602 = YPsb((P)"  ");
  lit_603 = YPsb((P)",\n");
  lit_604 = YPsb((P)"  NULL,\n");
  lit_605 = YPsb((P)"  use_infos,\n");
  lit_606 = YPsb((P)"  import_infos,\n");
  lit_607 = YPsb((P)"  binding_infos,\n");
  lit_608 = YPsb((P)"  export_infos,\n");
  lit_609 = YPsb((P)"};\n");
  T155 = YPsig(LITREF(lit_575),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_199 = YPmet(FUNCODEREF(fun_199),YPfalse,T155,ENVNUL,PNUL,sloc(1195));
  T154 = YPsig(LITREF(lit_583),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_200 = YPmet(FUNCODEREF(fun_200),YPfalse,T154,ENVNUL,PNUL,sloc(1209));
  T153 = YPsig(LITREF(lit_568),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  YevalSg2cYgenerate_module_info = YPmet(FUNCODEREF(YevalSg2cYgenerate_module_info),LITREF(lit_567),T153,ENVNUL,PNUL,sloc(1177));
  T156 = YevalSg2cYgenerate_module_info;
  VARSET(YevalSg2cYgenerate_module_info,T156);
  lit_610 = YPPsym((P)"module-init-name");
  lit_611 = YPPlist(1,YPPsym((P)"name"));
  lit_612 = YPsb((P)"load_module_");
  T157 = YPsig(LITREF(lit_611),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_name_202 = YPmet(FUNCODEREF(fun_module_init_name_202),LITREF(lit_610),T157,ENVNUL,PNUL,sloc(1240));
  T159 = VARREF_OR(YevalSg2cYmodule_init_name,YPfalse);
  T160 = fun_module_init_name_202;
  T158 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T159,T160);
  VARSET(YevalSg2cYmodule_init_name,T158);
  lit_613 = YPPsym((P)"module-init-decl");
  lit_614 = YPPlist(1,YPPsym((P)"name"));
  lit_615 = YPsb((P)"void ");
  lit_616 = YPsb((P)" (void)");
  T161 = YPsig(LITREF(lit_614),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_module_init_decl_203 = YPmet(FUNCODEREF(fun_module_init_decl_203),LITREF(lit_613),T161,ENVNUL,PNUL,sloc(1243));
  T163 = VARREF_OR(YevalSg2cYmodule_init_decl,YPfalse);
  T164 = fun_module_init_decl_203;
  T162 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T163,T164);
  VARSET(YevalSg2cYmodule_init_decl,T162);
  lit_617 = YPPsym((P)"generate-module-init");
  lit_618 = YPPlist(3,YPPsym((P)"out"),YPPsym((P)"mod"),YPPsym((P)"form"));
  lit_619 = YPsb((P)"dl");
  lit_620 = YPsb((P)"\n/* MODULES USED: */\n\n");
  lit_621 = YPsb((P)"extern ");
  lit_622 = YPsb((P)";\n");
  lit_623 = YPsb((P)"\n/* EXPRESSION: */\n\n");
  lit_624 = YPsb((P)"extern ");
  lit_625 = YPsb((P)";\n\n");
  lit_626 = YPsb((P)" {\n");
  lit_627 = YPsb((P)"  static int need_init = 1;\n");
  lit_628 = YPsb((P)"  if (!need_init) return;\n\n");
  lit_629 = YPsb((P)"  need_init = 0;\n");
  lit_630 = YPsb((P)"  ");
  lit_631 = YPsb((P)"();\n");
  lit_632 = YPsb((P)"\n");
  lit_633 = YPsb((P)"\n");
  lit_634 = YPsb((P)"}\n");
  T165 = YPsig(LITREF(lit_618),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_generate_module_init_204 = YPmet(FUNCODEREF(fun_generate_module_init_204),LITREF(lit_617),T165,ENVNUL,PNUL,sloc(1246));
  T167 = VARREF_OR(YevalSg2cYgenerate_module_init,YPfalse);
  T168 = fun_generate_module_init_204;
  T166 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T167,T168);
  VARSET(YevalSg2cYgenerate_module_init,T166);
  lit_635 = YPPsym((P)"generate-main");
  lit_636 = YPPlist(2,YPPsym((P)"out"),YPPsym((P)"mod"));
  lit_637 = YPsb((P)"\n/* APPLICATION: */\n\n");
  lit_638 = YPsb((P)"extern MODULE_INFO ");
  lit_639 = YPsb((P)";\n");
  lit_640 = YPsb((P)"extern ");
  lit_641 = YPsb((P)";\n\n");
  lit_642 = YPsb((P)"MODULE_INFO *goo_toplevel_module_info = &");
  lit_643 = YPsb((P)";\n\n");
  lit_644 = YPsb((P)"int main(int argc, char* argv[]) {\n");
  lit_645 = YPsb((P)"  ");
  lit_646 = YPsb((P)"%init-world");
  lit_647 = YPsb((P)"(argc, argv);\n");
  lit_648 = YPsb((P)"  ");
  lit_649 = YPsb((P)"();\n");
  lit_650 = YPsb((P)"  return 0;\n");
  lit_651 = YPsb((P)"}\n");
  T169 = YPsig(LITREF(lit_636),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_generate_main_205 = YPmet(FUNCODEREF(fun_generate_main_205),LITREF(lit_635),T169,ENVNUL,PNUL,sloc(1272));
  T171 = VARREF_OR(YevalSg2cYgenerate_main,YPfalse);
  T172 = fun_generate_main_205;
  T170 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T171,T172);
  VARSET(YevalSg2cYgenerate_main,T170);
  T173 = YPfalse;
  return T173;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSast_linearize;
extern MODULE_INFO module_info_evalStypist;
extern MODULE_INFO module_info_evalSoptimize;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSsystem},
  {&module_info_gooSioSwrite},
  {&module_info_gooScolsScol},
  {&module_info_gooScolsSstr},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSast_linearize},
  {&module_info_evalStypist},
  {&module_info_evalSoptimize},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"reference-offset", &module_info_evalSast_linearize, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"closure-creation-free", &module_info_evalSast_linearize, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"program-definitions", &module_info_evalSast_linearize, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"type-infer", &module_info_evalStypist, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"ascii-whitespaces", &module_info_gooScolsSstr, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"ascii-limit", &module_info_gooScolsSstr, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"closure-creation-index", &module_info_evalSast_linearize, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"msg*", &module_info_gooSioSwrite, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"<top-level-form>", &module_info_evalSast_linearize, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"box-form", &module_info_evalSast_linearize, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"%to-tup", &module_info_gooSboot, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"%met-env", &module_info_gooSboot, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"lift!", &module_info_evalSast_linearize, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"register-allocate!", &module_info_evalSast_linearize, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"form-program", &module_info_evalSast_linearize, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"<free-reference>", &module_info_evalSast_linearize, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"%product-elts", &module_info_gooSboot, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<box-creation>", &module_info_evalSast_linearize, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"<box-write>", &module_info_evalSast_linearize, NULL},
  {"$", &module_info_evalStop, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"top", &module_info_evalStop, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"reference-self?", &module_info_evalSast_linearize, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"load", &module_info_evalStop, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"extract-things!", &module_info_evalSast_linearize, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"fab-elt-setter", &module_info_gooScolsScol, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"form-definitions", &module_info_evalSast_linearize, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSclass, NULL},
  {"%class-parents", &module_info_gooSboot, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"%iu", &module_info_gooSboot, NULL},
  {"%allocate-stack", &module_info_gooSboot, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<rep>", &module_info_gooSboot, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"char->ascii", &module_info_gooSmath, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"fun-sig", &module_info_gooSboot, NULL},
  {"*boot-macro-names*", &module_info_gooSboot, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"program-quotations", &module_info_evalSast_linearize, NULL},
  {"%i>>", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"box-reference", &module_info_evalSast_linearize, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"gather-temporaries!", &module_info_evalSast_linearize, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"*register-passive?*", &module_info_evalSast_linearize, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<renamed-local-binding>", &module_info_evalSast_linearize, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"program-form", &module_info_evalSast_linearize, NULL},
  {"recurring-write", &module_info_gooSioSwrite, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"@tail-setter", &module_info_gooSboot, NULL},
  {"%i=", &module_info_gooSboot, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"prop-offset", &module_info_gooSboot, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"%gen-cache-classes-setter", &module_info_gooSboot, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"fab-fill!", &module_info_gooScolsScol, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"<box-read>", &module_info_evalSast_linearize, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"flatten-seqs", &module_info_evalSast_linearize, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"unconstrained-type?", &module_info_evalStypist, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"program-bindings", &module_info_evalSast_linearize, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"closurize-main!", &module_info_evalSast_linearize, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"analyze-calls", &module_info_evalSoptimize, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"%class-gens", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<closure-creation>", &module_info_evalSast_linearize, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"fab-into", &module_info_gooScolsScol, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"write-type", &module_info_gooSioSwrite, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"form-quotations", &module_info_evalSast_linearize, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"insert-box!", &module_info_evalSast_linearize, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"mangle-string-literal", CVAR, &YevalSg2cYmangle_string_literal},
  {"generate-quotation", CVAR, &YevalSg2cYgenerate_quotation},
  {"generate-c-application", CVAR, &YevalSg2cYgenerate_c_application},
  {"$local-marker", CVAR, &YevalSg2cYDlocal_marker},
  {"purge-outdated-modules", CVAR, &YevalSg2cYpurge_outdated_modules},
  {"mangle-quotation-name", CVAR, &YevalSg2cYmangle_quotation_name},
  {"gen-result", CVAR, &YevalSg2cYgen_result},
  {"generate-local-temporaries", CVAR, &YevalSg2cYgenerate_local_temporaries},
  {"g2c-top", CVAR, &YevalSg2cYg2c_top},
  {"module-init-decl", CVAR, &YevalSg2cYmodule_init_decl},
  {"to-c", CVAR, &YevalSg2cYto_c},
  {"generate-quotations", CVAR, &YevalSg2cYgenerate_quotations},
  {"$iep-suffix", CVAR, &YevalSg2cYDiep_suffix},
  {"float-to-c-string", CVAR, &YevalSg2cYfloat_to_c_string},
  {"*dynamic-linking?*", DVAR, &YevalSg2cYTdynamic_linkingQT},
  {"mangle-integer", CVAR, &YevalSg2cYmangle_integer},
  {"$name-mangler-table", CVAR, &YevalSg2cYDname_mangler_table},
  {"g2c-exp", CVAR, &YevalSg2cYg2c_exp},
  {"compute-ast", CVAR, &YevalSg2cYcompute_ast},
  {"<g2c-module-loader>", CVAR, &YevalSg2cYLg2c_module_loaderG},
  {"$number-characters", CVAR, &YevalSg2cYDnumber_characters},
  {"mangle-local-name", CVAR, &YevalSg2cYmangle_local_name},
  {"*g2c-app*", CVAR, &YevalSg2cYTg2c_appT},
  {"$c-escapes", CVAR, &YevalSg2cYDc_escapes},
  {"generate-function-forward", CVAR, &YevalSg2cYgenerate_function_forward},
  {"mangle-boot-name", CVAR, &YevalSg2cYmangle_boot_name},
  {"out-list-builder", CVAR, &YevalSg2cYout_list_builder},
  {"$mangles-data", CVAR, &YevalSg2cYDmangles_data},
  {"mangle-module-into", CVAR, &YevalSg2cYmangle_module_into},
  {"$max-character-code", CVAR, &YevalSg2cYDmax_character_code},
  {"*trace-registers?*", CVAR, &YevalSg2cYTtrace_registersQT},
  {"generate-trailer", CVAR, &YevalSg2cYgenerate_trailer},
  {"$hygiene-marker", CVAR, &YevalSg2cYDhygiene_marker},
  {"*tmp-file-counter*", DVAR, &YevalSg2cYTtmp_file_counterT},
  {"*loop-arg-counter*", DVAR, &YevalSg2cYTloop_arg_counterT},
  {"module-mtime-setter", CVAR, &YevalSg2cYmodule_mtime_setter},
  {"$hygiene-char", CVAR, &YevalSg2cYDhygiene_char},
  {"buf-cat2!", CVAR, &YevalSg2cYbuf_cat2X},
  {"declare-imported-module-infos", CVAR, &YevalSg2cYdeclare_imported_module_infos},
  {"mangle-local-marked-name", CVAR, &YevalSg2cYmangle_local_marked_name},
  {"module-loader-appname", CVAR, &YevalSg2cYmodule_loader_appname},
  {"$escape-marker", CVAR, &YevalSg2cYDescape_marker},
  {"generate-closure-structure", CVAR, &YevalSg2cYgenerate_closure_structure},
  {"$module-marker", CVAR, &YevalSg2cYDmodule_marker},
  {"g2c-ast", CVAR, &YevalSg2cYg2c_ast},
  {"module-src-file", CVAR, &YevalSg2cYmodule_src_file},
  {"generate-module-info", CVAR, &YevalSg2cYgenerate_module_info},
  {"generate-module-init", CVAR, &YevalSg2cYgenerate_module_init},
  {"generate-return", CVAR, &YevalSg2cYgenerate_return},
  {"$escape-separator", CVAR, &YevalSg2cYDescape_separator},
  {"primitive-inlinable?", CVAR, &YevalSg2cYprimitive_inlinableQ},
  {"generate-function-bodies", CVAR, &YevalSg2cYgenerate_function_bodies},
  {"generate-function-body-reference", CVAR, &YevalSg2cYgenerate_function_body_reference},
  {"for-commas", PVAR, NULL},
  {"reference->c", CVAR, &YevalSg2cYreference_Gc},
  {"gen-fab-list", CVAR, &YevalSg2cYgen_fab_list},
  {"with-used-expression", PVAR, NULL},
  {"*mangle-buffer*", CVAR, &YevalSg2cYTmangle_bufferT},
  {"mangle-global-name", CVAR, &YevalSg2cYmangle_global_name},
  {"bb?", CVAR, &YevalSg2cYbbQ},
  {"gen-ref", CVAR, &YevalSg2cYgen_ref},
  {"with-statement", PVAR, NULL},
  {"mangle-binding", CVAR, &YevalSg2cYmangle_binding},
  {"$method-mangled-marker", CVAR, &YevalSg2cYDmethod_mangled_marker},
  {"mangler-reset", CVAR, &YevalSg2cYmangler_reset},
  {"mangle-name-into", CVAR, &YevalSg2cYmangle_name_into},
  {"funshell-to-c", CVAR, &YevalSg2cYfunshell_to_c},
  {"compute-program", CVAR, &YevalSg2cYcompute_program},
  {"$number-call-templates", CVAR, &YevalSg2cYDnumber_call_templates},
  {"generate-global-binding", CVAR, &YevalSg2cYgenerate_global_binding},
  {"g2c-build-app", CVAR, &YevalSg2cYg2c_build_app},
  {"module-mtime", CVAR, &YevalSg2cYmodule_mtime},
  {"%print-cpu-usage", PVAR, NULL},
  {"$method-mangled-marker-string", CVAR, &YevalSg2cYDmethod_mangled_marker_string},
  {"---main-2---", PVAR, NULL},
  {"module-src-file-setter", CVAR, &YevalSg2cYmodule_src_file_setter},
  {"false-name", CVAR, &YevalSg2cYfalse_name},
  {"funinit-to-c", CVAR, &YevalSg2cYfuninit_to_c},
  {"generate-main", CVAR, &YevalSg2cYgenerate_main},
  {"module-loader-app-modname", CVAR, &YevalSg2cYmodule_loader_app_modname},
  {"generate-function-forwards", CVAR, &YevalSg2cYgenerate_function_forwards},
  {"$min-character-code", CVAR, &YevalSg2cYDmin_character_code},
  {"between-parentheses-comma-separated", PVAR, NULL},
  {"generate-header", CVAR, &YevalSg2cYgenerate_header},
  {"dispatcher?", CVAR, &YevalSg2cYdispatcherQ},
  {"*registers-per-line*", CVAR, &YevalSg2cYTregisters_per_lineT},
  {"*definitions*", DVAR, &YevalSg2cYTdefinitionsT},
  {"module-init-name", CVAR, &YevalSg2cYmodule_init_name},
  {"module-info-name", CVAR, &YevalSg2cYmodule_info_name},
  {"compile-load", CVAR, &YevalSg2cYcompile_load},
  {"generate-registers", CVAR, &YevalSg2cYgenerate_registers},
  {"g2c-def-app", CVAR, &YevalSg2cYg2c_def_app},
  {"gen-depth", CVAR, &YevalSg2cYgen_depth},
  {"---main-3---", PVAR, NULL},
  {"generate-function-specs", CVAR, &YevalSg2cYgenerate_function_specs},
  {"generate-functions", CVAR, &YevalSg2cYgenerate_functions},
  {"generate-global-environment", CVAR, &YevalSg2cYgenerate_global_environment},
  {"generate-quotation-forwards", CVAR, &YevalSg2cYgenerate_quotation_forwards},
  {"---main-0---", PVAR, NULL},
  {"generate-function-binding", CVAR, &YevalSg2cYgenerate_function_binding},
  {"<g2c-module>", CVAR, &YevalSg2cYLg2c_moduleG},
  {"with-expression", PVAR, NULL},
  {"binding->c", CVAR, &YevalSg2cYbinding_Gc},
  {"---main-1---", PVAR, NULL},
  {"g2c-goo", CVAR, &YevalSg2cYg2c_goo},
  {"$now-mod-var-name", CVAR, &YevalSg2cYDnow_mod_var_name},
  {"mangle-raw-name", CVAR, &YevalSg2cYmangle_raw_name},
  {"$module-separator", CVAR, &YevalSg2cYDmodule_separator},
  {"pp", CVAR, &YevalSg2cYpp},
  {"g2c-clean", CVAR, &YevalSg2cYg2c_clean},
  {"generate-c-module", CVAR, &YevalSg2cYgenerate_c_module},
  {"generate-makefile", CVAR, &YevalSg2cYgenerate_makefile},
  {"module-up-to-date?", CVAR, &YevalSg2cYmodule_up_to_dateQ},
  {"between-parentheses", PVAR, NULL},
  {"$local-suffix", CVAR, &YevalSg2cYDlocal_suffix},
  {"char-buffer-as-string", CVAR, &YevalSg2cYchar_buffer_as_string},
  {"$iep-marker", CVAR, &YevalSg2cYDiep_marker},
  {"generate-function-code", CVAR, &YevalSg2cYgenerate_function_code},
  {"g2c-test", CVAR, &YevalSg2cYg2c_test},
  {"for-mods", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"g2c-eval", NULL},
  {"g2c-top", NULL},
  {"g2c-exp", NULL},
  {"g2c-def-app", NULL},
  {"g2c-ast", NULL},
  {"g2c-test", NULL},
  {"g2c-goo", NULL},
  {"g2c-clean", NULL},
  {"g2c-build-app", NULL},
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
extern void load_module_gooSsystem (void);
extern void load_module_gooSioSwrite (void);
extern void load_module_gooScolsScol (void);
extern void load_module_gooScolsSstr (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSast_linearize (void);
extern void load_module_evalStypist (void);
extern void load_module_evalSoptimize (void);

/* EXPRESSION: */

extern void load_module_evalSg2c (void);

void load_module_evalSg2c (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSsystem();
  load_module_gooSioSwrite();
  load_module_gooScolsScol();
  load_module_gooScolsSstr();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSast_linearize();
  load_module_evalStypist();
  load_module_evalSoptimize();

  (P)YevalSg2cY___main_0___();
  (P)YevalSg2cY___main_1___();
  (P)YevalSg2cY___main_2___();
  (P)YevalSg2cY___main_3___();

}

/* END OF GENERATED CODE. */
