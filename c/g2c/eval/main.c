/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalStopYbt,"eval/top","bt");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
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
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
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
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YevalStopYload,"eval/top","load");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
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
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
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
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
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
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
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
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YLproductG,"goo/boot","<product>");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YevalStopYvm_evaluate,"eval/top","vm-evaluate");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YevalSastYloop_body,"eval/ast","loop-body");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSfunYLsimple_handler_infoG,"goo/fun","<simple-handler-info>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(Yerror,"goo/boot","error");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
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
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmathYT,"goo/math","*");
EXT(Ynew,"goo/boot","new");
EXT(YevalSastYprogram_register,"eval/ast","program-register");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_0);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_10);
DEFLIT(lit_1);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_6);
DEFLIT(lit_9);
DEFLIT(lit_2);
DEFLIT(lit_7);
DEFLIT(lit_8);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P fileF10160;
  P fileF10159;
  P T0,T1,T2,T3,T4,T5,T6,T7;
DEFCREGS();
  lit_0 = YPsb((P)"0.150");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"SEP 11, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL1(1,VARREF(YgooSioSwriteYpost),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL2(1,VARREF(YgooSioSwriteYpost),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T2 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF10159 = T2;
  if (fileF10159 != YPfalse) {
    T1 = XCALL2(1,VARREF(YevalStopYload_file),fileF10159,LITREF(lit_10));
    T0 = T1;
  } else {
    T0 = YPfalse;
  }
  lit_11 = YPsb((P)"init");
  T5 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF10160 = T5;
  if (fileF10160 != YPfalse) {
    T4 = XCALL2(1,VARREF(YevalStopYload_file),fileF10160,LITREF(lit_10));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T7 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T6 = T7;
  return T6;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSg2c;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstr;
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
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
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
  {"application-arguments", &module_info_evalSast, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {"get", &module_info_gooSioSport, NULL},
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
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"binding-value", &module_info_evalSast, NULL},
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
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"$", &module_info_evalStop, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"load", &module_info_evalStop, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
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
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
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
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"<ast-embodied-function>", &module_info_evalSast, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
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
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"ord-app-mets", &module_info_gooSfun, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"vm-evaluate", &module_info_evalStop, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"top", &module_info_evalStop, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
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
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"---main-0---", PVAR, NULL},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSmain;
MODULE_INFO module_info_evalSmain = {
  "eval/main",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSeval (void);
extern void load_module_gooSsystem (void);
extern void load_module_evalSast (void);
extern void load_module_evalStop (void);
extern void load_module_evalSg2c (void);
extern void load_module_gooSuser (void);

/* EXPRESSION: */

extern void load_module_evalSmain (void);

void load_module_evalSmain (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSeval();
  load_module_gooSsystem();
  load_module_evalSast();
  load_module_evalStop();
  load_module_evalSg2c();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
