/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/main");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/main */

EXT(YgooSsystemYcomponents_parent_directory,"goo/system","components-parent-directory");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Ynew,"goo/boot","new");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSsystemYTexe_extensionT,"goo/system","*exe-extension*");
EXT(YevalStopYframe_var,"eval/top","frame-var");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YevalStopYtop,"eval/top","top");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YtimeSeventYevent_wait_timed,"time/event","event-wait-timed");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YgooSmathYB,"goo/math","&");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YgooSsystemYfind_goo_file_in_path,"goo/system","find-goo-file-in-path");
EXT(YgooSmathYT,"goo/math","*");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSruntimeYalways,"goo/runtime","always");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalStopYload_file,"eval/top","load-file");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSg2cYg2c_def_app,"eval/g2c","g2c-def-app");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooSsystemYos_name,"goo/system","os-name");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(YtimeSeventYevent_signal,"time/event","event-signal");
EXT(YevalStopYframe,"eval/top","frame");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooSsystemYfile_mtime,"goo/system","file-mtime");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(YisaQ,"goo/boot","isa?");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooSsystemYcomponents_basename,"goo/system","components-basename");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(YtimeSlockYLlockG,"time/lock","<lock>");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooSrandomYfab_random,"goo/random","fab-random");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YgooSsystemYprobe_directory,"goo/system","probe-directory");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Ynil,"goo/boot","nil");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
EXT(YtimeSthreadsYthread_current,"time/threads","thread-current");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YtimeSlockYlock_lock,"time/lock","lock-lock");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSsystemYTgoo_build_rootT,"goo/system","*goo-build-root*");
EXT(YLfunG,"goo/boot","<fun>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSg2cYg2c_exp,"eval/g2c","g2c-exp");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(Ylst,"goo/boot","lst");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YgooSsystemYtime,"goo/system","time");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YgooSrandomYrandom_unit_using,"goo/random","random-unit-using");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSrandomYrandom,"goo/random","random");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YgooSsystemYLpathname_errorG,"goo/system","<pathname-error>");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YevalSastYfunction_data_refs_setter,"eval/ast","function-data-refs-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
EXT(Yclass_of,"goo/boot","class-of");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YevalSsyntaxYeval,"eval/syntax","eval");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooSsystemYadd_src_path,"goo/system","add-src-path");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(YgooSsystemYexe_filename,"goo/system","exe-filename");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYsignature_naryQ_setter,"eval/ast","signature-nary?-setter");
EXT(YcolsSpipeYenqX,"cols/pipe","enq!");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSg2cYg2c_test,"eval/g2c","g2c-test");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooSconditionsYLstack_overflowG,"goo/conditions","<stack-overflow>");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YevalStopYD,"eval/top","$");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YevalStopYDDD,"eval/top","$$$");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(Yerror,"goo/boot","error");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSsystemYpathname_to_components,"goo/system","pathname-to-components");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YgooSsystemYcomponents_last,"goo/system","components-last");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(YgooSsystemYso_load,"goo/system","so-load");
EXT(YevalSastYLast_methodG,"eval/ast","<ast-method>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YtimeSlockYlock_handle,"time/lock","lock-handle");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yfun_name,"goo/boot","fun-name");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(Ytup,"goo/boot","tup");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYLbind_exitG,"eval/ast","<bind-exit>");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSsystemYobj_filename,"goo/system","obj-filename");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YevalSg2cYg2c_ast,"eval/g2c","g2c-ast");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YgooSsystemYprocess_id,"goo/system","process-id");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSmathYE,"goo/math","=");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSg2cYg2c_clean,"eval/g2c","g2c-clean");
EXT(YgooSsystemYadd_build_path,"goo/system","add-build-path");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YtimeSthreadsYtest_thread_1,"time/threads","test-thread-1");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YevalSastYfunction_data_refs,"eval/ast","function-data-refs");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(Yhead,"goo/boot","head");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYast_walkX,"eval/ast","ast-walk!");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooSsystemYTgoo_personal_rootT,"goo/system","*goo-personal-root*");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSsystemYTmodule_search_pathT,"goo/system","*module-search-path*");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YtimeSthreadsYthread_name,"time/threads","thread-name");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YLcolG,"goo/boot","<col>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YgooSsystemYTgoo_extensionT,"goo/system","*goo-extension*");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooSmathYK,"goo/math","|");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSsystemYhierarchical_components,"goo/system","hierarchical-components");
EXT(YevalSastYfunction_self_recursiveQ_setter,"eval/ast","function-self-recursive?-setter");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooSsystemYLdirectory_errorG,"goo/system","<directory-error>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYload_module,"eval/ast","load-module");
EXT(YgooSsystemYc_filename,"goo/system","c-filename");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YevalSastYmonitor_test,"eval/ast","monitor-test");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YevalSg2cYg2c_top,"eval/g2c","g2c-top");
EXT(YgooSioSwriteYpost,"goo/io/write","post");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(YtimeSeventYevent_reset,"time/event","event-reset");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YtimeSthreadsYsleep,"time/threads","sleep");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(Ynul,"goo/boot","nul");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YPprop,"goo/boot","%prop");
EXT(YgooSsystemYadd_tmp_path,"goo/system","add-tmp-path");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
DEF(YevalSmainYTgoo_dateT,"eval/main","*goo-date*");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YevalStopYread_file,"eval/top","read-file");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSrandomYrandom_unit,"goo/random","random-unit");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YLintG,"goo/boot","<int>");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSsystemYfind_goo_file_at,"goo/system","find-goo-file-at");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YevalSg2cYg2c_goo,"eval/g2c","g2c-goo");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YgooSsystemYlabel_components,"goo/system","label-components");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YevalSastYLlocal_referenceG,"eval/ast","<local-reference>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalStopYdo_stack_frames,"eval/top","do-stack-frames");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSsystemYfile_copy,"goo/system","file-copy");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSsystemYTgoo_rootT,"goo/system","*goo-root*");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(YgooSsystemYgooc_filename,"goo/system","gooc-filename");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSsystemYparent_directory,"goo/system","parent-directory");
EXT(YgooSsystemYTpath_separatorT,"goo/system","*path-separator*");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYconstant_index_setter,"eval/ast","constant-index-setter");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalStopYparse_in,"eval/top","parse-in");
EXT(YtimeSeventYevent_wait,"time/event","event-wait");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YcolsSpipeYLpipeG,"cols/pipe","<pipe>");
EXT(YtimeSthreadsYtest_thread_2,"time/threads","test-thread-2");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YtimeSeventYevent_name,"time/event","event-name");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooSsystemYos_val_setter,"goo/system","os-val-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YtimeSlockYlock_state,"time/lock","lock-state");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YtimeSlockYlock_destroy,"time/lock","lock-destroy");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YevalSastYfunction_self_recursiveQ,"eval/ast","function-self-recursive?");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YtimeSlockYlock_unlock,"time/lock","lock-unlock");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(Yadd_prop,"goo/boot","add-prop");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YevalStopYesctst,"eval/top","esctst");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YgooSsystemYadd_goo_personal_root_path,"goo/system","add-goo-personal-root-path");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalStopYload,"eval/top","load");
EXT(YevalSg2cYg2c_build_app,"eval/g2c","g2c-build-app");
EXT(YtimeSeventYLeventG,"time/event","<event>");
EXT(YgooSmathYN,"goo/math","~");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YevalStopYbacktrace,"eval/top","backtrace");
EXT(YgooSmathYS,"goo/math","/");
EXT(YtimeSthreadsYthread_yield,"time/threads","thread-yield");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YgooSsystemYcreate_directory,"goo/system","create-directory");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YgooSsystemYTobj_extensionT,"goo/system","*obj-extension*");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YtimeSeventYevent_broadcast,"time/event","event-broadcast");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YgooSrandomYrandom_using,"goo/random","random-using");
EXT(YevalStopYbt,"eval/top","bt");
DEF(YevalSmainYTgoo_versionT,"eval/main","*goo-version*");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YcolsSpipeYdeqX,"cols/pipe","deq!");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YgooSsystemYfile_existsQ,"goo/system","file-exists?");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YevalSastYassignment_form,"eval/ast","assignment-form");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YevalStopYauto_eval,"eval/top","auto-eval");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YtimeSthreadsYthread_function,"time/threads","thread-function");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YtimeSthreadsYthread_priority,"time/threads","thread-priority");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(Yclone,"goo/boot","clone");
EXT(YtimeSthreadsYLthreadG,"time/threads","<thread>");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YtT,"goo/boot","t*");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooSsystemYcomponents_to_pathname,"goo/system","components-to-pathname");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSsystemYadd_goo_root_path,"goo/system","add-goo-root-path");
EXT(YgooSsystemYfile_type,"goo/system","file-type");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YevalStopYDD,"eval/top","$$");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YevalStopYg2c_eval,"eval/top","g2c-eval");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSsystemYos_val,"goo/system","os-val");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YgooSsystemYgoo_filename,"goo/system","goo-filename");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(YevalStopYsave_image,"eval/top","save-image");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSconditionsYmacro_error_arguments,"goo/conditions","macro-error-arguments");
EXT(YgooSsystemYTc_extensionT,"goo/system","*c-extension*");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_2);
DEFLIT(lit_3);
DEFLIT(lit_5);
DEFLIT(lit_6);
DEFLIT(lit_4);
DEFLIT(lit_11);
DEFLIT(lit_1);
DEFLIT(lit_7);
DEFLIT(lit_9);
DEFLIT(lit_0);
DEFLIT(lit_10);
DEFLIT(lit_8);

/* FUNCTIONS: */

extern P YevalSmainY___main_0___ ();

/* FUNCTION CODES: */

P YevalSmainY___main_0___() {
  P tmpF3812;
  P fileF3811;
  P tmpF3810;
  P fileF3809;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
loop:
  lit_0 = YPsb((P)"0.144");
  VARSET(YevalSmainYTgoo_versionT,LITREF(lit_0));
  lit_1 = YPsb((P)"AUG 29, 2002");
  VARSET(YevalSmainYTgoo_dateT,LITREF(lit_1));
  lit_2 = YPsb((P)";;; GOO\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_2));
  lit_3 = YPsb((P)";;; JONATHAN BACHRACH\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_3));
  lit_4 = YPsb((P)";;; MIT AI Lab\n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_4));
  lit_5 = YPsb((P)";;; %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_5),VARREF(YevalSmainYTgoo_dateT));
  lit_6 = YPsb((P)";;; \n");
  XCALL2(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_6));
  lit_7 = YPsb((P)";;; VERSION = %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_7),VARREF(YevalSmainYTgoo_versionT));
  lit_8 = YPsb((P)";;; ROOT    = %s\n");
  XCALL3(1,VARREF(YgooSconditionsYmsg),VARREF(YgooSioSportYout),LITREF(lit_8),VARREF(YgooSsystemYTgoo_rootT));
  XCALL0(1,VARREF(YevalSastYinit_ast));
  lit_9 = YPsb((P)"init");
  lit_10 = YPPsym((P)"goo/user");
  T0 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_9),VARREF(YgooSsystemYTgoo_rootT));
  fileF3809 = T0;
  tmpF3810 = fileF3809;
  if (tmpF3810 != YPfalse) {
    T3 = XCALL2(1,VARREF(YevalStopYload_file),fileF3809,LITREF(lit_10));
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  lit_11 = YPsb((P)"init");
  T4 = XCALL2(1,VARREF(YgooSsystemYfind_goo_file_at),LITREF(lit_11),VARREF(YgooSsystemYTgoo_personal_rootT));
  fileF3811 = T4;
  tmpF3812 = fileF3811;
  if (tmpF3812 != YPfalse) {
    T7 = XCALL2(1,VARREF(YevalStopYload_file),fileF3811,LITREF(lit_10));
    T6 = T7;
  } else {
    T6 = YPfalse;
  }
  T5 = T6;
  T9 = XCALL1(1,VARREF(YevalStopYtop),LITREF(lit_10));
  T8 = T9;
  return T8;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSeval;
extern MODULE_INFO module_info_gooSsystem;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_evalStop;
extern MODULE_INFO module_info_evalSg2c;
extern MODULE_INFO module_info_timeSthreads;
extern MODULE_INFO module_info_timeSlock;
extern MODULE_INFO module_info_timeSevent;
extern MODULE_INFO module_info_colsSpipe;
extern MODULE_INFO module_info_gooSrandom;
extern MODULE_INFO module_info_gooSuser;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_evalSsyntax;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooSlate_macros;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSmap;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSeval},
  {&module_info_gooSsystem},
  {&module_info_evalSast},
  {&module_info_evalStop},
  {&module_info_evalSg2c},
  {&module_info_timeSthreads},
  {&module_info_timeSlock},
  {&module_info_timeSevent},
  {&module_info_colsSpipe},
  {&module_info_gooSrandom},
  {&module_info_gooSuser},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"components-parent-directory", &module_info_gooSsystem, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"type-object", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"*exe-extension*", &module_info_gooSsystem, NULL},
  {"frame-var", &module_info_evalStop, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"spawn", &module_info_timeSthreads, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"top", &module_info_evalStop, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"event-wait-timed", &module_info_timeSevent, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"function-frame-len-setter", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"&", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"find-goo-file-in-path", &module_info_gooSsystem, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"always", &module_info_gooSruntime, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"load-file", &module_info_evalStop, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"g2c-def-app", &module_info_evalSg2c, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"os-name", &module_info_gooSsystem, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"binding-locative-setter", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSboot, NULL},
  {"event-signal", &module_info_timeSevent, NULL},
  {"frame", &module_info_evalStop, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"<met>", &module_info_gooSboot, NULL},
  {"fun", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"cos", &module_info_gooSmath, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"file-mtime", &module_info_gooSsystem, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"opf", &module_info_gooSmacros, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"find-setter", &module_info_gooSboot, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"components-basename", &module_info_gooSsystem, NULL},
  {"binding-native-to?", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"<lock>", &module_info_timeSlock, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"fab-random", &module_info_gooSrandom, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"probe-directory", &module_info_gooSsystem, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"locals-functions-setter", &module_info_evalSast, NULL},
  {"thread-current", &module_info_timeSthreads, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"lock-lock", &module_info_timeSlock, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"*goo-build-root*", &module_info_gooSsystem, NULL},
  {"<fun>", &module_info_gooSboot, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"locals-body-setter", &module_info_evalSast, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"g2c-exp", &module_info_evalSg2c, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"time", &module_info_gooSsystem, NULL},
  {"1-", &module_info_gooSmath, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"random-unit-using", &module_info_gooSrandom, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"random", &module_info_gooSrandom, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"<pathname-error>", &module_info_gooSsystem, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"function-data-refs-setter", &module_info_evalSast, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"handler-info-message", &module_info_gooSboot, NULL},
  {"<constant>", &module_info_evalSast, NULL},
  {"class-of", &module_info_gooSboot, NULL},
  {"%define-method", &module_info_gooSboot, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"dup", &module_info_gooScolsScol, NULL},
  {"<flat>", &module_info_gooSboot, NULL},
  {"id-hash", &module_info_gooScolsStab, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"curry", &module_info_gooSruntime, NULL},
  {"eval", &module_info_evalSsyntax, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"fun-names", &module_info_gooSboot, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"add-src-path", &module_info_gooSsystem, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"exe-filename", &module_info_gooSsystem, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"enq!", &module_info_colsSpipe, NULL},
  {"^", &module_info_gooSmath, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"find-getter", &module_info_gooSboot, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"g2c-test", &module_info_evalSg2c, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"$", &module_info_evalStop, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"$$$", &module_info_evalStop, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"object-class", &module_info_gooSboot, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"match", &module_info_gooSmacros, NULL},
  {"logn", &module_info_gooSmath, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"fab-class", &module_info_gooSboot, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"with-lock", &module_info_timeSlock, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"pathname-to-components", &module_info_gooSsystem, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"<no-applicable-methods-error>", &module_info_gooSconditions, NULL},
  {"components-last", &module_info_gooSsystem, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"so-load", &module_info_gooSsystem, NULL},
  {"<ast-method>", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"<set>", &module_info_gooScolsStab, NULL},
  {"%compile", &module_info_gooSsystem, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"round/", &module_info_gooSmath, NULL},
  {">", &module_info_gooSmag, NULL},
  {"<tab>", &module_info_gooScolsScol, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"elts", &module_info_gooScolsScol, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"lock-handle", &module_info_timeSlock, NULL},
  {"get", &module_info_gooSioSport, NULL},
  {"<enum>", &module_info_gooScolsScol, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"use/export", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"<bind-exit>", &module_info_evalSast, NULL},
  {"<", &module_info_gooSmag, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"var-name", &module_info_gooSmacros, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"obj-filename", &module_info_gooSsystem, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"g2c-ast", &module_info_evalSg2c, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"process-id", &module_info_gooSsystem, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"<serious-condition>", &module_info_gooSconditions, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"<unbound-variable-error>", &module_info_gooSconditions, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"function-index", &module_info_evalSast, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"g2c-clean", &module_info_evalSg2c, NULL},
  {"add-build-path", &module_info_gooSsystem, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"test-thread-1", &module_info_timeSthreads, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"prop-value-setter", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"rcurry", &module_info_gooSruntime, NULL},
  {"function-data-refs", &module_info_evalSast, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"handler-info-arguments", &module_info_gooSboot, NULL},
  {"ast-evaluate", &module_info_evalSast, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"*goo-personal-root*", &module_info_gooSsystem, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"*module-search-path*", &module_info_gooSsystem, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"thread-name", &module_info_timeSthreads, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"*goo-extension*", &module_info_gooSsystem, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"hierarchical-components", &module_info_gooSsystem, NULL},
  {"function-self-recursive?-setter", &module_info_evalSast, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"<directory-error>", &module_info_gooSsystem, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"c-filename", &module_info_gooSsystem, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"prop-bound?", &module_info_gooSboot, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"monitor-test", &module_info_evalSast, NULL},
  {"init-ast", &module_info_evalSast, NULL},
  {"g2c-top", &module_info_evalSg2c, NULL},
  {"post", &module_info_gooSioSwrite, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"event-reset", &module_info_timeSevent, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"sleep", &module_info_timeSthreads, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"<file-in-port>", &module_info_gooSioSport, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"case", &module_info_gooSmacros, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"internal-error", &module_info_gooSboot, NULL},
  {"%prop", &module_info_gooSboot, NULL},
  {"add-tmp-path", &module_info_gooSsystem, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"fun-val", &module_info_gooSboot, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"read-file", &module_info_evalStop, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"app-args", &module_info_gooSruntime, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"random-unit", &module_info_gooSrandom, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"prop-value", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"unwind-protect-cleanup-thunk", &module_info_evalSast, NULL},
  {"find-goo-file-at", &module_info_gooSsystem, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"g2c-goo", &module_info_evalSg2c, NULL},
  {"app-filename", &module_info_gooSruntime, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"<monitor>", &module_info_evalSast, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"label-components", &module_info_gooSsystem, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"do-stack-frames", &module_info_evalStop, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {"file-copy", &module_info_gooSsystem, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"*goo-root*", &module_info_gooSsystem, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"gooc-filename", &module_info_gooSsystem, NULL},
  {"handler-function", &module_info_gooSconditions, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"parent-directory", &module_info_gooSsystem, NULL},
  {"*path-separator*", &module_info_gooSsystem, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"constant-index-setter", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"parse-in", &module_info_evalStop, NULL},
  {"event-wait", &module_info_timeSevent, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"<pipe>", &module_info_colsSpipe, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"test-thread-2", &module_info_timeSthreads, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"event-name", &module_info_timeSevent, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"os-val-setter", &module_info_gooSsystem, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"lock-state", &module_info_timeSlock, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"fix-let-types-setter", &module_info_evalSast, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"lock-destroy", &module_info_timeSlock, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"function-self-recursive?", &module_info_evalSast, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"lock-unlock", &module_info_timeSlock, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"loc-val-setter", &module_info_gooSruntime, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"binding-dynamic-extent?", &module_info_evalSast, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"add-prop", &module_info_gooSboot, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"compose", &module_info_gooSruntime, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"esctst", &module_info_evalStop, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"fun-arity", &module_info_gooSboot, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"add-goo-personal-root-path", &module_info_gooSsystem, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"loc-val", &module_info_gooSruntime, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"load", &module_info_evalStop, NULL},
  {"g2c-build-app", &module_info_evalSg2c, NULL},
  {"<event>", &module_info_timeSevent, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"backtrace", &module_info_evalStop, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"thread-yield", &module_info_timeSthreads, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"<simple-handler-info>", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"create-directory", &module_info_gooSsystem, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"ord-app-mets", &module_info_gooSboot, NULL},
  {"def", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"*obj-extension*", &module_info_gooSsystem, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"event-broadcast", &module_info_timeSevent, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"random-using", &module_info_gooSrandom, NULL},
  {"bt", &module_info_evalStop, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"identity", &module_info_gooSruntime, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"deq!", &module_info_colsSpipe, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"%load", &module_info_gooSsystem, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"file-exists?", &module_info_gooSsystem, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"assignment-form", &module_info_evalSast, NULL},
  {"pair", &module_info_gooSmacros, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"auto-eval", &module_info_evalStop, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"thread-function", &module_info_timeSthreads, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"thread-priority", &module_info_timeSthreads, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"clone", &module_info_gooSboot, NULL},
  {"<thread>", &module_info_timeSthreads, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"fun-nary?", &module_info_gooSboot, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"binding-info-setter", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"<arithmetic-error>", &module_info_gooSconditions, NULL},
  {"components-to-pathname", &module_info_gooSsystem, NULL},
  {"gen-add-met", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"binding-value", &module_info_evalSast, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"add-goo-root-path", &module_info_gooSsystem, NULL},
  {"file-type", &module_info_gooSsystem, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"$$", &module_info_evalStop, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"g2c-eval", &module_info_evalStop, NULL},
  {"<bound?>", &module_info_evalSast, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"os-val", &module_info_gooSsystem, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"goo-filename", &module_info_gooSsystem, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"save-image", &module_info_evalStop, NULL},
  {"fix-let-types", &module_info_evalSast, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"peek", &module_info_gooSioSport, NULL},
  {"report-undefined-global-bindings", &module_info_evalSast, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"macro-error-arguments", &module_info_gooSconditions, NULL},
  {"*c-extension*", &module_info_gooSsystem, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"---main-0---", PVAR, NULL},
  {"*goo-date*", CVAR, &YevalSmainYTgoo_dateT},
  {"*goo-version*", CVAR, &YevalSmainYTgoo_versionT},
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
extern void load_module_timeSthreads (void);
extern void load_module_timeSlock (void);
extern void load_module_timeSevent (void);
extern void load_module_colsSpipe (void);
extern void load_module_gooSrandom (void);
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
  load_module_timeSthreads();
  load_module_timeSlock();
  load_module_timeSevent();
  load_module_colsSpipe();
  load_module_gooSrandom();
  load_module_gooSuser();

  (P)YevalSmainY___main_0___();

}

/* END OF GENERATED CODE. */
