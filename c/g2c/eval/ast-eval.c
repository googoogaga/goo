/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-eval");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-eval */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(YgooSmathYatan,"goo/math","atan");
EXT(YgooSioSportYLstr_portG,"goo/io/port","<str-port>");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(Ysrc_loc_line,"goo/boot","src-loc-line");
EXT(YgooSclassYfind_setter,"goo/class","find-setter");
EXT(YevalSastYbinding_type_setter,"eval/ast","binding-type-setter");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YevalSastYLapplicationG,"eval/ast","<application>");
EXT(Yclass_children,"goo/boot","class-children");
EXT(YevalSastYmonitor_main_thunk,"eval/ast","monitor-main-thunk");
EXT(YgooSioSwriteYwriteln,"goo/io/write","writeln");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YevalSastYLloop_applicationG,"eval/ast","<loop-application>");
EXT(YgooSfunYLreplace_generic_restartG,"goo/fun","<replace-generic-restart>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YPdispatch,"goo/boot","%dispatch");
EXT(YgooSconditionsYLassert_errorG,"goo/conditions","<assert-error>");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
DEF(YevalSast_evalYenv_local_value,"eval/ast-eval","env-local-value");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
EXT(YLgenG,"goo/boot","<gen>");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Yas_error,"goo/boot","as-error");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
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
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooSconditionsYLargument_type_errorG,"goo/conditions","<argument-type-error>");
DEF(YevalSast_evalYDnul_loc_env,"eval/ast-eval","$nul-loc-env");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YgooScolsSrepYrep_len,"goo/cols/rep","rep-len");
EXT(YgooScolsSrepYrep_intoX,"goo/cols/rep","rep-into!");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSast_evalYenv_frameX,"eval/ast-eval","env-frame!");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSast_evalYenv_global_binding_boundQ,"eval/ast-eval","env-global-binding-bound?");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YevalSastYmonitor_handler,"eval/ast","monitor-handler");
EXT(YgooSconditionsYtype_error_value,"goo/conditions","type-error-value");
EXT(YevalSastYLunwind_protectG,"eval/ast","<unwind-protect>");
EXT(YOtanyQ,"goo/boot","@tany?");
EXT(Yrange_error,"goo/boot","range-error");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
EXT(YgooScolsSrepYrep_fillX,"goo/cols/rep","rep-fill!");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(YevalSastYLast_primitiveG,"eval/ast","<ast-primitive>");
EXT(YgooSconditionsYread,"goo/conditions","read");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(YevalSastYbinding_native_toQ,"eval/ast","binding-native-to?");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(YevalSastYbinding_info_setter,"eval/ast","binding-info-setter");
EXT(YevalSastYfix_let_types,"eval/ast","fix-let-types");
EXT(YLmetG,"goo/boot","<met>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YgooSfunYfun_spec,"goo/fun","fun-spec");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(Yfun_cache,"goo/boot","fun-cache");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
DEF(YevalSast_evalYenv_binding_value,"eval/ast-eval","env-binding-value");
DEF(YevalSast_evalYexport_goo_method,"eval/ast-eval","export-goo-method");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YgooSioSportYLstr_out_portG,"goo/io/port","<str-out-port>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YPtnul,"goo/boot","%tnul");
EXT(YgooSconditionsYLsyntax_errorG,"goo/conditions","<syntax-error>");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmacrosYEE,"goo/macros","==");
EXT(YOlst,"goo/boot","@lst");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YevalSastYmodule_target_environment,"eval/ast","module-target-environment");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YevalSastYboundQ_reference,"eval/ast","bound?-reference");
EXT(YgooSmathYcosh,"goo/math","cosh");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
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
EXT(YgooSconditionsYLcall_errorG,"goo/conditions","<call-error>");
EXT(YevalSastYmonitor_type,"eval/ast","monitor-type");
EXT(YgooSconditionsYLas_errorG,"goo/conditions","<as-error>");
EXT(YevalSastYreference_binding,"eval/ast","reference-binding");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(YgooScolsSseqYsort_byX,"goo/cols/seq","sort-by!");
EXT(YgooSconditionsYsig,"goo/conditions","sig");
DYNEXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSclassYprop_value_setter,"goo/class","prop-value-setter");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSioSportYport_index,"goo/io/port","port-index");
EXT(YevalSastYapplication_binding,"eval/ast","application-binding");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YevalSastYmodule_syntax_environment,"eval/ast","module-syntax-environment");
EXT(YLseqXG,"goo/boot","<seq!>");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YgooScolsSseqYprefixQ,"goo/cols/seq","prefix?");
EXT(YgooScolsSseqYdo3,"goo/cols/seq","do3");
EXT(YgooSioSportYLfile_out_portG,"goo/io/port","<file-out-port>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YevalSastYLimmediate_constantG,"eval/ast","<immediate-constant>");
EXT(YevalSastYdo_static_global_bindings,"eval/ast","do-static-global-bindings");
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
EXT(YgooSconditionsYrange_error_collection,"goo/conditions","range-error-collection");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YevalSastYLlocalsG,"eval/ast","<locals>");
DEF(YevalSast_evalYenv_local_reference_value_setter,"eval/ast-eval","env-local-reference-value-setter");
EXT(YevalSastYfind_environment_module,"eval/ast","find-environment-module");
EXT(Ysig_naryQ_setter,"goo/boot","sig-nary?-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YOopts_as_lst,"goo/boot","@opts-as-lst");
EXT(YevalSastYmodule_binding,"eval/ast","module-binding");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YgooSconditionsYLsimple_errorG,"goo/conditions","<simple-error>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YgooSioSportYport_line,"goo/io/port","port-line");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooSfunYOorder_specs_class,"goo/fun","@order-specs-class");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooScolsSrepYrep_nul,"goo/cols/rep","rep-nul");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooSmacrosYlift_place_subforms,"goo/macros","lift-place-subforms");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLanyG,"goo/boot","<any>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSconditionsYcall_error_function,"goo/conditions","call-error-function");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YevalSastYbinding_type,"eval/ast","binding-type");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YgooSfunYOfun_mets,"goo/fun","@fun-mets");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
DEF(YevalSast_evalYenv_dynamic_value_setter,"eval/ast-eval","env-dynamic-value-setter");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSfunctionalYalways,"goo/functional","always");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YgooScolsSseqxYdel_dupsX,"goo/cols/seqx","del-dups!");
EXT(YevalSastYsignature_specs_setter,"eval/ast","signature-specs-setter");
EXT(YOallQ,"goo/boot","@all?");
EXT(YevalSastYbinding_index_setter,"eval/ast","binding-index-setter");
EXT(YOsubtypeQ,"goo/boot","@subtype?");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YevalSastYfunction_loop_setter,"eval/ast","function-loop-setter");
EXT(YevalSastYfunction_bindings,"eval/ast","function-bindings");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YLcolIG,"goo/boot","<col.>");
EXT(YevalSastYinstall_initial_bindings,"eval/ast","install-initial-bindings");
EXT(YgooScolsSseqYsuffixQ,"goo/cols/seq","suffix?");
EXT(YgooSconditionsYLfile_opening_errorG,"goo/conditions","<file-opening-error>");
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YevalSastYLreal_referenceG,"eval/ast","<real-reference>");
EXT(YDdirect_object_class,"goo/boot","$direct-object-class");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YgooStypesYas,"goo/types","as");
EXT(YevalSastYLast_macro_definitionG,"eval/ast","<ast-macro-definition>");
DEF(YevalSast_evalYast_eval_specs,"eval/ast-eval","ast-eval-specs");
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSfunYincongruent_method_error,"goo/fun","incongruent-method-error");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSclassYclass_of,"goo/class","class-of");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YevalSastYsignature_names_setter,"eval/ast","signature-names-setter");
EXT(YevalSastYprobe_module,"eval/ast","probe-module");
EXT(YevalSastYbind_exit_main_fun,"eval/ast","bind-exit-main-fun");
EXT(YgooScolsScolxYlow_elt_setter,"goo/cols/colx","low-elt-setter");
EXT(YOrevX,"goo/boot","@rev!");
EXT(YgooSconditionsYfab_handler,"goo/conditions","fab-handler");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YLgen_cacheG,"goo/boot","<gen-cache>");
EXT(YevalSastYmodule_loader_module_type,"eval/ast","module-loader-module-type");
EXT(YgooScolsSseqYpush,"goo/cols/seq","push");
EXT(YgooStypesYtL,"goo/types","t<");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YgooSfunYOclassL,"goo/fun","@class<");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Ylst,"goo/boot","lst");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(YevalSastYDgoo_boot_module_name,"eval/ast","$goo-boot-module-name");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(YgooSmathYN,"goo/math","~");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
EXT(YevalSastYfab_g2c_module,"eval/ast","fab-g2c-module");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yapp_args,"goo/boot","app-args");
EXT(YevalSastYmodule_exports,"eval/ast","module-exports");
EXT(YevalSastYsignature_value,"eval/ast","signature-value");
EXT(Yclass_name,"goo/boot","class-name");
EXT(YevalSastYloop_continue_setter,"eval/ast","loop-continue-setter");
DEF(YevalSast_evalYenv_function,"eval/ast-eval","env-function");
EXT(YgooSmathY_,"goo/math","-");
EXT(YevalSastYLfab_listG,"eval/ast","<fab-list>");
DEF(YevalSast_evalYenv_define_bindingX,"eval/ast-eval","env-define-binding!");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(YgooSconditionsYLio_errorG,"goo/conditions","<io-error>");
EXT(YevalSastYLpassive_programG,"eval/ast","<passive-program>");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSconditionsYdescribe_condition,"goo/conditions","describe-condition");
EXT(YLfloG,"goo/boot","<flo>");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(Yfun_sig,"goo/boot","fun-sig");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSast_evalYast_eval_boundQ,"eval/ast-eval","ast-eval-bound?");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YevalSastYfunction_free_setter,"eval/ast","function-free-setter");
EXT(YgooSconditionsYLproperty_errorG,"goo/conditions","<property-error>");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YevalSastYast_walk,"eval/ast","ast-walk");
EXT(YevalSastYloop_body_setter,"eval/ast","loop-body-setter");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(YgooSioSwriteYsay,"goo/io/write","say");
EXT(Yapp_filename,"goo/boot","app-filename");
EXT(YevalSastYapplication_knownQ_setter,"eval/ast","application-known?-setter");
EXT(YLfixnumG,"goo/boot","<fixnum>");
EXT(YgooSioSportYput,"goo/io/port","put");
EXT(YgooScolsSseqYsort,"goo/cols/seq","sort");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooSioSportYreadyQ,"goo/io/port","ready?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(YevalSastYbinding_mangled_name,"eval/ast","binding-mangled-name");
EXT(YgooScolsScolxYfillX,"goo/cols/colx","fill!");
EXT(YevalSastYLstatic_module_binding_referenceG,"eval/ast","<static-module-binding-reference>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(YOtype_equalQ,"goo/boot","@type-equal?");
EXT(Yprop_owner,"goo/boot","prop-owner");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
EXT(YevalSastYLpredefined_applicationG,"eval/ast","<predefined-application>");
EXT(YOdo,"goo/boot","@do");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSclassYfab_class,"goo/class","fab-class");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYanyQ,"goo/types","any?");
DEF(YevalSast_evalYas_fun_name,"eval/ast-eval","as-fun-name");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
EXT(YLnumG,"goo/boot","<num>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(YLproductG,"goo/boot","<product>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
DEF(YevalSast_evalYenv_global_binding_value_or,"eval/ast-eval","env-global-binding-value-or");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
DEF(YevalSast_evalYenv_names,"eval/ast-eval","env-names");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
DEF(YevalSast_evalYenv_global_binding_value_setter,"eval/ast-eval","env-global-binding-value-setter");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
EXT(Yhead,"goo/boot","head");
EXT(YgooScolsSrepYrep_elt,"goo/cols/rep","rep-elt");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSast_evalYenv_local_reference_value,"eval/ast-eval","env-local-reference-value");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooScolsSrepYrep_fab,"goo/cols/rep","rep-fab");
EXT(YPsnul,"goo/boot","%snul");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yprop_offset,"goo/boot","prop-offset");
EXT(YevalSastYfunction_frame_len_setter,"eval/ast","function-frame-len-setter");
EXT(YevalSastYbinding_locative_setter,"eval/ast","binding-locative-setter");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSfunctionalYrcurry,"goo/functional","rcurry");
EXT(YgooSfunctionalYcurry,"goo/functional","curry");
EXT(YLchrG,"goo/boot","<chr>");
EXT(YevalSastYsignature_bindings,"eval/ast","signature-bindings");
EXT(YevalSastYprogram_register_setter,"eval/ast","program-register-setter");
EXT(YgooSclassYclone,"goo/class","clone");
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
DEF(YevalSast_evalYLloc_envG,"eval/ast-eval","<loc-env>");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
DEF(YevalSast_evalYarrange_arguments,"eval/ast-eval","arrange-arguments");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(YevalSastYsignature_value_setter,"eval/ast","signature-value-setter");
EXT(YgooSconditionsYLcompiler_errorG,"goo/conditions","<compiler-error>");
EXT(Yproduct_elts,"goo/boot","product-elts");
EXT(YgooSlocYloc_val,"goo/loc","loc-val");
EXT(YgooSconditionsYLnarity_errorG,"goo/conditions","<narity-error>");
EXT(YgooSioSwriteYwrite_to_string,"goo/io/write","write-to-string");
EXT(YevalSastYLloopG,"eval/ast","<loop>");
EXT(YLmagG,"goo/boot","<mag>");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(YgooSioSportYclose,"goo/io/port","close");
EXT(YevalSastYfunction_temporaries,"eval/ast","function-temporaries");
EXT(YgooSmacrosYlast,"goo/macros","last");
EXT(YevalSastYfunction_temporaries_setter,"eval/ast","function-temporaries-setter");
EXT(YgooSmathYpow,"goo/math","pow");
DEF(YevalSast_evalYast_eval,"eval/ast-eval","ast-eval");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
DEF(YevalSast_evalYenv_parent,"eval/ast-eval","env-parent");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
EXT(YOOEE,"goo/boot","@@==");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YevalSastYloop_bindings,"eval/ast","loop-bindings");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YevalSastYmodule_uses_c_includes,"eval/ast","module-uses-c-includes");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(YgooScolsSstepYLeachG,"goo/cols/step","<each>");
EXT(Yno_next_methods_error,"goo/boot","no-next-methods-error");
EXT(YevalSastYassignment_form_setter,"eval/ast","assignment-form-setter");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YgooSfunYhandler_info_arguments,"goo/fun","handler-info-arguments");
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooScolsSrepYrep_elt_setter,"goo/cols/rep","rep-elt-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
EXT(YgooSioSreadYread_from_string,"goo/io/read","read-from-string");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYDe,"goo/math","$e");
EXT(YOmap,"goo/boot","@map");
EXT(YevalSastYreference_frame_offset,"eval/ast","reference-frame-offset");
EXT(YgooSmathYceil,"goo/math","ceil");
DEF(YevalSast_evalYenv_values,"eval/ast-eval","env-values");
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
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
DEF(YevalSast_evalYenv_runtime_value,"eval/ast-eval","env-runtime-value");
DEF(YevalSast_evalYenv_runtime_value_setter,"eval/ast-eval","env-runtime-value-setter");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
DEF(YevalSast_evalYenv_global_binding_value,"eval/ast-eval","env-global-binding-value");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(YgooSfunYfab_gen,"goo/fun","fab-gen");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
DEF(YevalSast_evalYenv_binding_value_setter,"eval/ast-eval","env-binding-value-setter");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YOcat2,"goo/boot","@cat2");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YevalSastYLassignmentG,"eval/ast","<assignment>");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(YevalSastYfunction_debug_name,"eval/ast","function-debug-name");
EXT(YevalSastYfix_let_arguments_setter,"eval/ast","fix-let-arguments-setter");
EXT(YgooSconditionsYLkeyboard_interruptG,"goo/conditions","<keyboard-interrupt>");
EXT(YOnew,"goo/boot","@new");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(YgooSmathYLL,"goo/math","<<");
EXT(YevalSastYfix_let_bindings_setter,"eval/ast","fix-let-bindings-setter");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(YevalSastYbinding_closed_overQ,"eval/ast","binding-closed-over?");
EXT(YevalSastYfind_binding,"eval/ast","find-binding");
EXT(YevalSastYLglobal_referenceG,"eval/ast","<global-reference>");
EXT(YevalSastYobjectify_quotation,"eval/ast","objectify-quotation");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSast_evalYenv_dynamic_value,"eval/ast-eval","env-dynamic-value");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
EXT(YgooSmathYtanh,"goo/math","tanh");
EXT(YevalSastYremove_modules_by_nameX,"eval/ast","remove-modules-by-name!");
EXT(YevalSastYLlow_letG,"eval/ast","<low-let>");
EXT(YevalSastYmodule_mangled_name,"eval/ast","module-mangled-name");
EXT(YevalSastYfunction_ref_count,"eval/ast","function-ref-count");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YevalSastYfunction_value,"eval/ast","function-value");
DEF(YevalSast_evalYenv_local_value_setter,"eval/ast-eval","env-local-value-setter");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(YgooScolsScolYcol,"goo/cols/col","col");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YevalSastYbinding_name,"eval/ast","binding-name");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
EXT(YOrev,"goo/boot","@rev");
EXT(YgooSmathYK,"goo/math","|");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
EXT(YgooSmathYA,"goo/math","+");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
EXT(YgooSconditionsYhandler_matchesQ,"goo/conditions","handler-matches?");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(YevalSastYPPPmacro,"eval/ast","%%%macro");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(YgooScolsSseqYany2Q,"goo/cols/seq","any2?");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(YevalSastYbinding_value_setter,"eval/ast","binding-value-setter");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYT,"goo/math","*");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_71);
DEFLIT(lit_35);
DEFLIT(lit_7);
DEFLIT(lit_124);
DEFLIT(lit_70);
DEFLIT(lit_126);
DEFLIT(lit_85);
DEFLIT(lit_30);
DEFLIT(lit_63);
DEFLIT(lit_37);
DEFLIT(lit_41);
DEFLIT(lit_90);
DEFLIT(lit_56);
DEFLIT(lit_129);
DEFLIT(lit_0);
DEFLIT(lit_101);
DEFLIT(lit_74);
DEFLIT(lit_1);
DEFLIT(lit_78);
DEFLIT(lit_117);
DEFLIT(lit_83);
DEFLIT(lit_128);
DEFLIT(lit_105);
DEFLIT(lit_46);
DEFLIT(lit_16);
DEFLIT(lit_34);
DEFLIT(lit_65);
DEFLIT(lit_82);
DEFLIT(lit_6);
DEFLIT(lit_121);
DEFLIT(lit_55);
DEFLIT(lit_13);
DEFLIT(lit_47);
DEFLIT(lit_91);
DEFLIT(lit_48);
DEFLIT(lit_49);
DEFLIT(lit_67);
DEFLIT(lit_94);
DEFLIT(lit_100);
DEFLIT(lit_64);
DEFLIT(lit_111);
DEFLIT(lit_33);
DEFLIT(lit_88);
DEFLIT(lit_4);
DEFLIT(lit_8);
DEFLIT(lit_122);
DEFLIT(lit_132);
DEFLIT(lit_95);
DEFLIT(lit_81);
DEFLIT(lit_103);
DEFLIT(lit_5);
DEFLIT(lit_51);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_26);
DEFLIT(lit_42);
DEFLIT(lit_61);
DEFLIT(lit_18);
DEFLIT(lit_12);
DEFLIT(lit_115);
DEFLIT(lit_75);
DEFLIT(lit_19);
DEFLIT(lit_112);
DEFLIT(lit_36);
DEFLIT(lit_99);
DEFLIT(lit_38);
DEFLIT(lit_29);
DEFLIT(lit_14);
DEFLIT(lit_39);
DEFLIT(lit_77);
DEFLIT(lit_17);
DEFLIT(lit_15);
DEFLIT(lit_87);
DEFLIT(lit_86);
DEFLIT(lit_130);
DEFLIT(lit_106);
DEFLIT(lit_58);
DEFLIT(lit_120);
DEFLIT(lit_92);
DEFLIT(lit_2);
DEFLIT(lit_72);
DEFLIT(lit_125);
DEFLIT(lit_76);
DEFLIT(lit_84);
DEFLIT(lit_22);
DEFLIT(lit_28);
DEFLIT(lit_54);
DEFLIT(lit_44);
DEFLIT(lit_21);
DEFLIT(lit_20);
DEFLIT(lit_108);
DEFLIT(lit_93);
DEFLIT(lit_97);
DEFLIT(lit_25);
DEFLIT(lit_9);
DEFLIT(lit_73);
DEFLIT(lit_23);
DEFLIT(lit_66);
DEFLIT(lit_60);
DEFLIT(lit_113);
DEFLIT(lit_127);
DEFLIT(lit_80);
DEFLIT(lit_27);
DEFLIT(lit_62);
DEFLIT(lit_40);
DEFLIT(lit_107);
DEFLIT(lit_11);
DEFLIT(lit_57);
DEFLIT(lit_10);
DEFLIT(lit_45);
DEFLIT(lit_32);
DEFLIT(lit_98);
DEFLIT(lit_104);
DEFLIT(lit_79);
DEFLIT(lit_50);
DEFLIT(lit_3);
DEFLIT(lit_89);
DEFLIT(lit_123);
DEFLIT(lit_131);
DEFLIT(lit_110);
DEFLIT(lit_109);
DEFLIT(lit_68);
DEFLIT(lit_119);
DEFLIT(lit_116);
DEFLIT(lit_43);
DEFLIT(lit_118);
DEFLIT(lit_69);
DEFLIT(lit_102);
DEFLIT(lit_59);
DEFLIT(lit_53);
DEFLIT(lit_114);
DEFLIT(lit_24);
DEFLIT(lit_31);

/* FUNCTIONS: */

LOCFOR(fun_env_global_binding_value_0);
LOCFOR(fun_env_global_binding_value_setter_1);
LOCFOR(fun_env_global_binding_boundQ_2);
LOCFOR(fun_env_runtime_value_3);
LOCFOR(fun_env_runtime_value_setter_4);
LOCFOR(fun_env_dynamic_value_5);
LOCFOR(fun_env_dynamic_value_setter_6);
LOCFOR(fun_env_parent_7);
LOCFOR(fun_8);
LOCFOR(fun_env_function_9);
LOCFOR(fun_10);
LOCFOR(fun_env_names_11);
LOCFOR(fun_12);
LOCFOR(fun_env_values_13);
LOCFOR(fun_env_frameX_14);
LOCFOR(fun_env_local_value_15);
LOCFOR(fun_env_local_value_setter_16);
LOCFOR(fun_env_binding_value_17);
LOCFOR(fun_env_binding_value_setter_18);
LOCFOR(fun_ast_evaluate_19);
LOCFOR(fun_ast_eval_20);
LOCFOR(fun_ast_eval_21);
LOCFOR(fun_ast_eval_22);
LOCFOR(fun_ast_eval_specs_23);
FUNFOR(YevalSast_evalYarrange_arguments);
LOCFOR(fun_x_2368_25);
LOCFOR(fun_26);
LOCFOR(fun_27);
LOCFOR(fun_as_fun_name_28);
LOCFOR(fun_as_fun_name_29);
LOCFOR(fun_as_fun_name_30);
LOCFOR(fun_as_fun_name_31);
LOCFOR(fun_as_fun_name_32);
LOCFOR(fun_as_fun_name_33);
LOCFOR(fun_34);
LOCFOR(fun_export_goo_method_35);
LOCFOR(fun_36);
LOCFOR(fun_ast_eval_37);
LOCFOR(fun_ast_eval_38);
LOCFOR(fun_env_local_reference_value_39);
LOCFOR(fun_env_local_reference_value_setter_40);
LOCFOR(fun_ast_eval_41);
LOCFOR(fun_ast_eval_42);
LOCFOR(fun_ast_eval_43);
LOCFOR(fun_ast_eval_44);
LOCFOR(fun_ast_eval_45);
LOCFOR(fun_ast_eval_46);
LOCFOR(fun_env_global_binding_value_or_47);
LOCFOR(fun_ast_eval_boundQ_48);
LOCFOR(fun_ast_eval_boundQ_49);
LOCFOR(fun_ast_eval_50);
LOCFOR(fun_ast_eval_51);
LOCFOR(fun_ast_eval_52);
LOCFOR(fun_ast_eval_53);
LOCFOR(fun_ast_eval_54);
LOCFOR(fun_env_define_bindingX_55);
LOCFOR(fun_ast_eval_56);
LOCFOR(fun_ast_eval_57);
LOCFOR(fun_58);
LOCFOR(fun_59);
LOCFOR(fun_ast_eval_60);
LOCFOR(fun_ast_eval_61);
LOCFOR(fun_ast_eval_62);
LOCFOR(fun_ast_eval_63);
LOCFOR(fun_ast_eval_64);
LOCFOR(fun_ast_eval_65);
LOCFOR(fun_ast_eval_66);
LOCFOR(fun_67);
LOCFOR(fun_ast_eval_68);
LOCFOR(fun_69);
LOCFOR(fun_70);
LOCFOR(fun_ast_eval_71);
LOCFOR(fun_72);
LOCFOR(fun_73);
LOCFOR(fun_ast_eval_74);
LOCFOR(fun_ast_eval_75);
FUNFOR(YevalSastYinit_environment_for_eval);
extern P YevalSast_evalYPdefine_binding (P,P);
extern P YevalSast_evalYPlookup_binding (P,P);
extern P YevalSast_evalYPensure_binding (P,P);
extern P YevalSast_evalYPdlvar_binding (P);
extern P YevalSast_evalYPbinding_value_of (P);
extern P YevalSast_evalYPbinding_value (P);
extern P YevalSast_evalYPbinding_value_of_setter (P,P);
extern P YevalSast_evalYPbinding_value_setter (P,P);
extern P YevalSast_evalYPbinding_value_or_of (P,P);
extern P YevalSast_evalYPbinding_value_or (P,P);
extern P YevalSast_evalY___main_0___ ();
extern P YevalSast_evalY___main_1___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_env_global_binding_value_0) {
  P b_;
  P boxF9300;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(b_, 0);
  T5 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF9300 = T5;
  if (boxF9300 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSastYglobal_box_value),boxF9300);
    T0 = T1;
  } else {
    T4 = CALL1(1,VARREF(YevalSastYbinding_name),b_);
    T3 = CALL3(1,VARREF(Ynew),VARREF(YgooSconditionsYLunbound_variable_errorG),VARREF(YgooSconditionsYunbound_variable_error_variable),T4);
    T2 = CALL1(1,VARREF(YgooSconditionsYsig),T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_setter_1) {
  P value_,b_;
  P boxF9301;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(value_, 0);
  ARG(b_, 1);
  T8 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF9301 = T8;
  T2 = boxF9301;
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(Ynew),VARREF(YevalSastYLglobal_boxG));
    T4 = CALL2(1,VARREF(YevalSastYbinding_global_box_setter),T5,b_);
    T3 = boxF9301 = T4;
  } else {
  }
  T7 = boxF9301;
  T6 = CALL2(1,VARREF(YevalSastYglobal_box_value_setter),value_,T7);
UNLINK_STACK();
  QRET(T6);
}

FUNCODEDEF(fun_env_global_binding_boundQ_2) {
  P b_;
  P boxF9302;
  P T0,T1;
LINK_STACK();
  ARG(b_, 0);
  T1 = CALL1(1,VARREF(YevalSastYbinding_global_box),b_);
  boxF9302 = T1;
  if (boxF9302 != YPfalse) {
    T0 = YPtrue;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_runtime_value_3) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_runtime_value_setter_4) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL2(1,VARREF(YgooSlocYloc_val_setter),v_,x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_5) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
  T0 = (P)YPdyn_var_val(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_dynamic_value_setter_6) {
  P v_,x_;
  P T0;
LINK_STACK();
  ARG(v_, 0);
  ARG(x_, 1);
  T0 = CALL1(1,VARREF(YgooSlocYloc_val),x_);
  (P)YPdyn_var_val_setter(v_,T0);
UNLINK_STACK();
  QRET(v_);
}

FUNCODEDEF(fun_env_parent_7) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_parent));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_8) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_function_9) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_function));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_10) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_env_names_11) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_names));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_12) {
  P Ux_;
LINK_STACK();
  ARG(Ux_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_env_values_13) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_evalYenv_values));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_frameX_14) {
  P env_,function_,names_,args_;
  P valuesF9303;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(env_, 0);
  ARG(function_, 1);
  ARG(names_, 2);
  ARG(args_, 3);
  T3 = CALL1(1,VARREF(YgooStypesYlen),args_);
  T2 = CALL2(1,VARREF(YgooScolsSrepYrep_fab),T3,VARREF(Ynul));
  T1 = CALL2(1,VARREF(YgooScolsSrepYrep_intoX),T2,args_);
  valuesF9303 = T1;
  T0 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),env_,VARREF(YevalSast_evalYenv_function),function_,VARREF(YevalSast_evalYenv_values),valuesF9303,VARREF(YevalSast_evalYenv_names),names_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_env_local_value_15) {
  P env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(env_, 0);
  ARG(i_, 1);
  ARG(j_, 2);
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_value_setter_16) {
  P v_,env_,i_,j_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(i_, 2);
  ARG(j_, 3);
  T1 = CALL2(1,VARREF(YgooSmathYE),i_,YPint((P)0));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
    T2 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T3,j_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
    T6 = CALL2(1,VARREF(YgooSmathY_),i_,YPint((P)1));
    T4 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),v_,T5,T6,j_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_17) {
  P env_,name_;
  P iF9305;
  P namesF9304;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(env_, 0);
  ARG(name_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),env_,VARREF(YevalSast_evalYDnul_loc_env));
  if (T1 != YPfalse) {
    T0 = VARREF(Ynul);
  } else {
    T14 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
    namesF9304 = T14;
    iF9305 = YPint((P)0);
    LOOP_434: {
      P a434_0,a434_1;
      T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF9304);
      if (T3 != YPfalse) {
        T5 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
        T4 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),T5,name_);
        T2 = T4;
      } else {
        T8 = CALL1(1,VARREF(Yhead),namesF9304);
        T7 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T8);
        if (T7 != YPfalse) {
          T10 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
          T9 = CALL2(1,VARREF(YgooScolsSrepYrep_elt),T10,iF9305);
          T6 = T9;
        } else {
          T12 = CALL1(1,VARREF(Ytail),namesF9304);
          T13 = CALL2(1,VARREF(YgooSmathYA),iF9305,YPint((P)1));
          a434_0 = T12;
          a434_1 = T13;
          namesF9304 = a434_0;
          iF9305 = a434_1;
          goto LOOP_434;
          T6 = T11;
        }
        T2 = T6;
      }
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_binding_value_setter_18) {
  P v_,env_,name_;
  P iF9307;
  P namesF9306;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(v_, 0);
  ARG(env_, 1);
  ARG(name_, 2);
  T12 = CALL1(1,VARREF(YevalSast_evalYenv_names),env_);
  namesF9306 = T12;
  iF9307 = YPint((P)0);
  LOOP_435: {
    P a435_0,a435_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),namesF9306);
    if (T1 != YPfalse) {
      T3 = CALL1(1,VARREF(YevalSast_evalYenv_parent),env_);
      T2 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),v_,T3,name_);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),namesF9306);
      T5 = CALL2(1,VARREF(YgooSmacrosYEE),name_,T6);
      if (T5 != YPfalse) {
        T8 = CALL1(1,VARREF(YevalSast_evalYenv_values),env_);
        T7 = CALL3(1,VARREF(YgooScolsSrepYrep_elt_setter),v_,T8,iF9307);
        T4 = T7;
      } else {
        T10 = CALL1(1,VARREF(Ytail),namesF9306);
        T11 = CALL2(1,VARREF(YgooSmathYA),iF9307,YPint((P)1));
        a435_0 = T10;
        a435_1 = T11;
        namesF9306 = a435_0;
        iF9307 = a435_1;
        goto LOOP_435;
        T4 = T9;
      }
      T0 = T4;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_evaluate_19) {
  P e_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),e_,VARREF(YevalSast_evalYDnul_loc_env));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_20) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_21) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL1(1,VARREF(YevalSastYconstant_value),e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_22) {
  P e_,ee_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(ee_, 1);
  T1 = CALL1(1,VARREF(YevalSastYcompile_time_program),e_);
  T0 = CALL1(1,VARREF(YevalSastYast_evaluate),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_specs_23) {
  P specs_,naryQ_,env_;
  P typeF9313;
  P specF9312;
  P iF9311;
  P specsF9310;
  P resF9309;
  P nreqF9308;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13;
LINK_STACK();
  ARG(specs_, 0);
  ARG(naryQ_, 1);
  ARG(env_, 2);
  if (naryQ_ != YPfalse) {
    T12 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T11 = CALL2(1,VARREF(YgooSmathY_),T12,YPint((P)1));
    T10 = T11;
  } else {
    T13 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T10 = T13;
  }
  nreqF9308 = T10;
  resF9309 = Ynil;
  specsF9310 = specs_;
  iF9311 = YPint((P)0);
  LOOP_436: {
    P a436_0,a436_1,a436_2;
    T1 = CALL2(1,VARREF(YgooSmathYE),iF9311,nreqF9308);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF9309);
      T0 = T2;
    } else {
      T9 = CALL1(1,VARREF(Yhead),specsF9310);
      specF9312 = T9;
      if (specF9312 != YPfalse) {
        T8 = CALL2(1,VARREF(YevalSast_evalYast_eval),specF9312,env_);
        T7 = T8;
      } else {
        T7 = VARREF(YLanyG);
      }
      typeF9313 = T7;
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),typeF9313,resF9309);
      T5 = CALL1(1,VARREF(Ytail),specsF9310);
      T6 = CALL2(1,VARREF(YgooSmathYA),iF9311,YPint((P)1));
      a436_0 = T4;
      a436_1 = T5;
      a436_2 = T6;
      resF9309 = a436_0;
      specsF9310 = a436_1;
      iF9311 = a436_2;
      goto LOOP_436;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_evalYarrange_arguments) {
  P f_,naryQ_,arity_,args_;
  P countF9314;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(f_, 0);
  ARG(naryQ_, 1);
  ARG(arity_, 2);
  ARG(args_, 3);
  T11 = CALL1(1,VARREF(YgooStypesYlen),args_);
  countF9314 = T11;
  if (naryQ_ != YPfalse) {
    T2 = CALL2(1,VARREF(YgooSmagYL),countF9314,arity_);
    if (T2 != YPfalse) {
      T3 = CALL2(1,VARREF(Ynarity_error),f_,args_);
      T1 = T3;
    } else {
      T5 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,YPint((P)0),arity_);
      T7 = CALL3(1,VARREF(YgooScolsSseqYsub),args_,arity_,countF9314);
      T6 = CALL1(1,VARREF(Ylst),T7);
      T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),T5,T6);
      T1 = T4;
    }
    T0 = T1;
  } else {
    T9 = CALL2(1,VARREF(YgooSmathYNEE),countF9314,arity_);
    if (T9 != YPfalse) {
      T10 = CALL2(1,VARREF(Yarity_error),f_,args_);
      T8 = T10;
    } else {
      T8 = args_;
    }
    T0 = T8;
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_x_2368_25) {
  P msg_,args_;
  P T0,T1;
LINK_STACK();
  ARG(msg_, 0);
  NARGS(args_, 1);
  T1 = CALL2(1,VARREF(YgooSmacrosYmacro_error),LITREF(lit_51),FREEREF(0));
  T0 = CALL1(1,FREEREF(1),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_26) {
  P return_;
  P x_2367F9331;
  P x_2367F9330;
  P x_2367F9329;
  P x_2367F9328;
  P x_2367F9327;
  P x_2367F9326;
  P x_2367F9325;
  P x_2367F9324;
  P x_2367F9323;
  P bodyF9322;
  P namesF9321;
  P arityF9320;
  P naryQF9319;
  P fF9318;
  P envF9317;
  P x_2367F9316;
  P x_2368F9315;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91;
LINK_STACK();
  ARG(return_, 0);
  T91 = FUNSHELL(0,fun_x_2368_25,2);
  x_2368F9315 = T91;
  FUNINIT(x_2368F9315, 2,FREEREF(0),return_);
  x_2367F9316 = FREEREF(0);
  envF9317 = YPfalse;
  fF9318 = YPfalse;
  naryQF9319 = YPfalse;
  arityF9320 = YPfalse;
  namesF9321 = YPfalse;
  bodyF9322 = YPfalse;
  T6 = CALL2(1,VARREF(YisaQ),x_2367F9316,VARREF(YLlstG));
  if (T6 != YPfalse) {
    T23 = CALL3(1,VARREF(YgooSmacrosYmatch_atom),x_2367F9316,LITREF(lit_51),x_2368F9315);
    x_2367F9323 = T23;
    T21 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9323,x_2368F9315);
    envF9317 = T21;
    T22 = CALL1(1,VARREF(Ytail),x_2367F9323);
    x_2367F9324 = T22;
    T19 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9324,x_2368F9315);
    fF9318 = T19;
    T20 = CALL1(1,VARREF(Ytail),x_2367F9324);
    x_2367F9325 = T20;
    T17 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9325,x_2368F9315);
    naryQF9319 = T17;
    T18 = CALL1(1,VARREF(Ytail),x_2367F9325);
    x_2367F9326 = T18;
    T15 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9326,x_2368F9315);
    arityF9320 = T15;
    T16 = CALL1(1,VARREF(Ytail),x_2367F9326);
    x_2367F9327 = T16;
    T13 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9327,x_2368F9315);
    namesF9321 = T13;
    T14 = CALL1(1,VARREF(Ytail),x_2367F9327);
    x_2367F9328 = T14;
    T11 = CALL2(1,VARREF(YgooSmacrosYmatch_unquote),x_2367F9328,x_2368F9315);
    bodyF9322 = T11;
    T12 = CALL1(1,VARREF(Ytail),x_2367F9328);
    x_2367F9329 = T12;
    T9 = CALL2(1,VARREF(YgooSmacrosYmatch_sublist),x_2367F9329,x_2368F9315);
    x_2367F9330 = T9;
    T8 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2367F9330,x_2368F9315);
    T10 = CALL1(1,VARREF(Ytail),x_2367F9329);
    x_2367F9331 = T10;
    T7 = CALL2(1,VARREF(YgooSmacrosYmatch_empty_list),x_2367F9331,x_2368F9315);
  } else {
    T24 = CALL2(1,x_2368F9315,LITREF(lit_52),x_2367F9316);
  }
  T26 = CALL1(1,VARREF(Ylst),LITREF(lit_53));
  T31 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T32 = CALL1(1,VARREF(Ylst),LITREF(lit_55));
  T30 = CALL3(1,VARREF(YgooSmacrosYcat),T31,T32,LITREF(lit_56));
  T29 = CALL1(1,VARREF(Ylst),T30);
  T28 = CALL2(1,VARREF(YgooSmacrosYcat),T29,LITREF(lit_56));
  T27 = CALL1(1,VARREF(Ylst),T28);
  T35 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T36 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T39 = CALL1(1,VARREF(Ylst),LITREF(lit_45));
  T40 = CALL1(1,VARREF(Ylst),LITREF(lit_59));
  T41 = CALL1(1,VARREF(Ylst),LITREF(lit_60));
  T42 = CALL1(1,VARREF(Ylst),LITREF(lit_61));
  T45 = CALL1(1,VARREF(Ylst),LITREF(lit_62));
  T46 = CALL1(1,VARREF(Ylst),LITREF(lit_63));
  T47 = CALL1(1,VARREF(Ylst),LITREF(lit_54));
  T44 = CALL4(1,VARREF(YgooSmacrosYcat),T45,T46,T47,LITREF(lit_56));
  T43 = CALL1(1,VARREF(Ylst),T44);
  T38 = CALLN(1,VARREF(YgooSmacrosYcat),6,T39,T40,T41,T42,T43,LITREF(lit_56));
  T37 = CALL1(1,VARREF(Ylst),T38);
  T34 = CALL4(1,VARREF(YgooSmacrosYcat),T35,T36,T37,LITREF(lit_56));
  T33 = CALL1(1,VARREF(Ylst),T34);
  T50 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T51 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T54 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T53 = CALL2(1,VARREF(YgooSmacrosYcat),T54,LITREF(lit_56));
  T52 = CALL1(1,VARREF(Ylst),T53);
  T49 = CALL4(1,VARREF(YgooSmacrosYcat),T50,T51,T52,LITREF(lit_56));
  T48 = CALL1(1,VARREF(Ylst),T49);
  T57 = CALL1(1,VARREF(Ylst),LITREF(lit_57));
  T58 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T61 = CALL1(1,VARREF(Ylst),LITREF(lit_26));
  T63 = envF9317;
  T62 = CALL1(1,VARREF(Ylst),T63);
  T65 = fF9318;
  T64 = CALL1(1,VARREF(Ylst),T65);
  T68 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T70 = namesF9321;
  T69 = CALL1(1,VARREF(Ylst),T70);
  T73 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T76 = CALL1(1,VARREF(Ylst),LITREF(lit_69));
  T77 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T75 = CALL3(1,VARREF(YgooSmacrosYcat),T76,T77,Ynil);
  T74 = CALL1(1,VARREF(Ylst),T75);
  T72 = CALL3(1,VARREF(YgooSmacrosYcat),T73,T74,LITREF(lit_56));
  T71 = CALL1(1,VARREF(Ylst),T72);
  T67 = CALL4(1,VARREF(YgooSmacrosYcat),T68,T69,T71,LITREF(lit_56));
  T66 = CALL1(1,VARREF(Ylst),T67);
  T80 = CALL1(1,VARREF(Ylst),LITREF(lit_67));
  T81 = CALL1(1,VARREF(Ylst),LITREF(lit_58));
  T84 = CALL1(1,VARREF(Ylst),LITREF(lit_68));
  T85 = CALL1(1,VARREF(Ylst),LITREF(lit_64));
  T83 = CALL3(1,VARREF(YgooSmacrosYcat),T84,T85,LITREF(lit_56));
  T82 = CALL1(1,VARREF(Ylst),T83);
  T79 = CALL4(1,VARREF(YgooSmacrosYcat),T80,T81,T82,LITREF(lit_56));
  T78 = CALL1(1,VARREF(Ylst),T79);
  T60 = CALLN(1,VARREF(YgooSmacrosYcat),6,T61,T62,T64,T66,T78,LITREF(lit_56));
  T59 = CALL1(1,VARREF(Ylst),T60);
  T56 = CALL4(1,VARREF(YgooSmacrosYcat),T57,T58,T59,LITREF(lit_56));
  T55 = CALL1(1,VARREF(Ylst),T56);
  T89 = bodyF9322;
  T88 = CALL1(1,VARREF(Ylst),T89);
  T90 = CALL1(1,VARREF(Ylst),LITREF(lit_66));
  T87 = CALL3(1,VARREF(YgooSmacrosYcat),T88,T90,LITREF(lit_56));
  T86 = CALL1(1,VARREF(Ylst),T87);
  T25 = CALLN(1,VARREF(YgooSmacrosYcat),7,T26,T27,T33,T48,T55,T86,LITREF(lit_56));
UNLINK_STACK();
  QRET(T25);
}

FUNCODEDEF(fun_27) {
  P exp_;
  P T0,T1;
LINK_STACK();
  ARG(exp_, 0);
  T1 = FUNFAB(fun_26,1,exp_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_28) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(Yfun_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_29) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_30) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL1(1,VARREF(YevalSastYbinding_name),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_31) {
  P x_;
  P T0,T1;
LINK_STACK();
  ARG(x_, 0);
  T1 = CALL1(1,VARREF(YevalSastYconstant_value),x_);
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_fun_name_32) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  RET(x_);
}

FUNCODEDEF(fun_as_fun_name_33) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_34) {
  P arg_vector_;
  P frameF9334;
  P nmsF9333;
  P argsF9332;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  NARGS(arg_vector_, 0);
  T8 = CALL2(1,VARREF(YgooStypesYas),VARREF(YLlstG),arg_vector_);
  T7 = CALL4(1,VARREF(YevalSast_evalYarrange_arguments),FREEREF(0),FREEREF(1),FREEREF(2),T8);
  argsF9332 = T7;
  T6 = (P)YPnext_methods();
  nmsF9333 = T6;
  T3 = CALL1(1,VARREF(Ylst),LITREF(lit_65));
  T2 = CALL2(1,VARREF(YgooScolsSseqYcat2),FREEREF(4),T3);
  T5 = CALL1(1,VARREF(Ylst),nmsF9333);
  T4 = CALL2(1,VARREF(YgooScolsSseqYcat2),argsF9332,T5);
  T1 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),FREEREF(3),FREEREF(0),T2,T4);
  frameF9334 = T1;
  T0 = CALL1(1,FREEREF(5),frameF9334);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_export_goo_method_35) {
  P f_,names_,specs_,naryQ_,value_,body_,env_;
  P efunF9336;
  P arityF9335;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
LINK_STACK();
  ARG(f_, 0);
  ARG(names_, 1);
  ARG(specs_, 2);
  ARG(naryQ_, 3);
  ARG(value_, 4);
  ARG(body_, 5);
  ARG(env_, 6);
  if (naryQ_ != YPfalse) {
    T8 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T7 = CALL2(1,VARREF(YgooSmathY_),T8,YPint((P)1));
    T6 = T7;
  } else {
    T9 = CALL1(1,VARREF(YgooStypesYlen),specs_);
    T6 = T9;
  }
  arityF9335 = T6;
  T5 = FUNFAB(fun_34,6,f_,naryQ_,arityF9335,env_,names_,body_);
  efunF9336 = T5;
  T0 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),f_);
  CALL2(1,VARREF(Yfun_name_setter),T0,efunF9336);
  T2 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),specs_,naryQ_,env_);
  if (value_ != YPfalse) {
    T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),value_,env_);
    T3 = T4;
  } else {
    T3 = VARREF(YLanyG);
  }
  T1 = CALLN(1,VARREF(Ynew),13,VARREF(YLsigG),VARREF(Ysig_names),names_,VARREF(Ysig_specs),T2,VARREF(Ysig_naryQ),naryQ_,VARREF(Ysig_arity),arityF9335,VARREF(Ysig_val),T3,VARREF(Ysig_unification_vars),Ynil);
  CALL2(1,VARREF(Yfun_sig_setter),T1,efunF9336);
UNLINK_STACK();
  QRET(efunF9336);
}

FUNCODEDEF(fun_36) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),FREEREF(0));
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_37) {
  P e_,env_;
  P evalF9338;
  P paramsF9337;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF9337 = T6;
  T5 = FUNFAB(fun_36,1,e_);
  evalF9338 = T5;
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF9337);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF9337);
  T3 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_value),e_);
  T0 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,e_,T1,T2,T3,T4,evalF9338,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_38) {
  P e_,env_;
  P specsF9342;
  P namesF9341;
  P naryQF9340;
  P paramsF9339;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfunction_bindings),e_);
  paramsF9339 = T6;
  T5 = CALL1(1,VARREF(YevalSastYfunction_naryQ),e_);
  naryQF9340 = T5;
  T4 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),paramsF9339);
  namesF9341 = T4;
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_type),paramsF9339);
  T2 = CALL3(1,VARREF(YevalSast_evalYast_eval_specs),T3,naryQF9340,env_);
  specsF9342 = T2;
  T1 = CALL1(1,VARREF(YevalSast_evalYas_fun_name),e_);
  T0 = CALLN(1,VARREF(YgooSfunYfab_gen),6,T1,namesF9341,specsF9342,naryQF9340,VARREF(YLanyG),Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_39) {
  P env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(env_, 0);
  ARG(ref_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_value),env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_local_reference_value_setter_40) {
  P val_,env_,ref_;
  P T0,T1,T2;
LINK_STACK();
  ARG(val_, 0);
  ARG(env_, 1);
  ARG(ref_, 2);
  T1 = CALL1(1,VARREF(YevalSastYreference_frame_number),ref_);
  T2 = CALL1(1,VARREF(YevalSastYreference_frame_offset),ref_);
  T0 = CALL4(1,VARREF(YevalSast_evalYenv_local_value_setter),val_,env_,T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_41) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_42) {
  P e_,env_;
  P T0;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_local_reference_value),env_,e_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_43) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_44) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_45) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_46) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T1 = CALL1(1,VARREF(YevalSastYreference_binding),T2);
  T0 = CALL3(1,VARREF(YevalSast_evalYast_eval_boundQ),e_,T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_global_binding_value_or_47) {
  P b_,default_,env_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(b_, 0);
  ARG(default_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_boundQ),b_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),b_);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),default_,env_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_48) {
  P e_,binding_,env_;
  P x_2370F9344;
  P x_2369F9343;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T6 = CALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_2369F9343 = T6;
  x_2370F9344 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2370F9344,x_2369F9343,LITREF(lit_97));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYboundQ_default),e_);
    T2 = CALL3(1,VARREF(YevalSast_evalYenv_global_binding_value_or),binding_,T3,env_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
    T4 = CALL2(1,VARREF(YevalSast_evalYast_eval),T5,env_);
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_boundQ_49) {
  P e_,binding_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(binding_, 1);
  ARG(env_, 2);
  T1 = CALL1(1,VARREF(YevalSastYboundQ_reference),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,env_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_50) {
  P e_,env_;
  P valueF9345;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF9345 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),valueF9345,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_51) {
  P e_,env_;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_52) {
  P e_,env_;
  P valueF9346;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF9346 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),valueF9346,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_53) {
  P e_,env_;
  P valueF9347;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  valueF9347 = T3;
  T2 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_locative),T2);
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),valueF9347,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_54) {
  P e_,env_;
  P valueF9348;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T2 = CALL2(1,VARREF(YevalSast_evalYast_eval),T3,env_);
  valueF9348 = T2;
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),e_);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_local_reference_value_setter),valueF9348,env_,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_env_define_bindingX_55) {
  P b_,v_;
  P xF9351;
  P x_2372F9350;
  P x_2371F9349;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
LINK_STACK();
  ARG(b_, 0);
  ARG(v_, 1);
  T15 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
  x_2371F9349 = T15;
  x_2372F9350 = VARREF(YgooSmacrosYEE);
  T1 = CALL2(1,x_2372F9350,x_2371F9349,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
    T2 = CALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),v_,T3);
    T0 = T2;
  } else {
    T5 = CALL2(1,x_2372F9350,x_2371F9349,LITREF(lit_97));
    if (T5 != YPfalse) {
      T6 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),v_,b_);
      T4 = T6;
    } else {
      T8 = CALL2(1,x_2372F9350,x_2371F9349,LITREF(lit_107));
      if (T8 != YPfalse) {
        T10 = (P)YPfab_dyn_var();
        xF9351 = T10;
        T9 = (P)YPtag_into(xF9351,(P)3);
        CALL2(1,VARREF(YevalSastYbinding_locative_setter),T9,b_);
        T12 = CALL1(1,VARREF(YevalSastYbinding_locative),b_);
        T11 = CALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),v_,T12);
        T7 = T11;
      } else {
        T14 = CALL1(1,VARREF(YevalSastYbinding_kind),b_);
        T13 = CALL2(1,VARREF(Yinternal_error),LITREF(lit_108),T14);
        T7 = T13;
      }
      T4 = T7;
    }
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_56) {
  P e_,env_;
  P valueF9352;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYassignment_form),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  valueF9352 = T1;
  T0 = CALL1(1,VARREF(YevalSastYassignment_binding),e_);
  CALL2(1,VARREF(YevalSast_evalYenv_define_bindingX),T0,valueF9352);
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_eval_57) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYalternative_condition),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YevalSastYalternative_consequent),e_);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    T0 = T3;
  } else {
    T6 = CALL1(1,VARREF(YevalSastYalternative_alternant),e_);
    T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
    T0 = T5;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_58) {
  P continue_;
  P T0,T1,T2;
LINK_STACK();
  ARG(continue_, 0);
  CALL2(1,VARREF(YevalSastYloop_continue_setter),continue_,FREEREF(0));
  T2 = CALL1(1,VARREF(YevalSastYloop_body),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL1(0,FREEREF(2),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_59) {
  P return_;
  P T0,T1;
LINK_STACK();
  ARG(return_, 0);
  LOOP_437: {
    T0 = FUNFAB(fun_58,3,FREEREF(0),FREEREF(1),return_);
    with_exit(T0);
    goto LOOP_437;
  }
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_ast_eval_60) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_59,2,e_,env_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_61) {
  P e_,env_;
  P valF9355;
  P nxtF9354;
  P eF9353;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  eF9353 = e_;
  LOOP_438: {
    P a438_0;
    T5 = CALL1(1,VARREF(Ytail),eF9353);
    nxtF9354 = T5;
    T4 = CALL1(1,VARREF(Yhead),eF9353);
    T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
    valF9355 = T3;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),nxtF9354);
    if (T1 != YPfalse) {
      T0 = valF9355;
    } else {
      a438_0 = nxtF9354;
      eF9353 = a438_0;
      goto LOOP_438;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_62) {
  P e_,env_;
  P argsF9357;
  P resF9356;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  resF9356 = Ynil;
  argsF9357 = e_;
  LOOP_439: {
    P a439_0,a439_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),argsF9357);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),resF9356);
      T0 = T2;
    } else {
      T6 = CALL1(1,VARREF(Yhead),argsF9357);
      T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),T5,resF9356);
      T7 = CALL1(1,VARREF(Ytail),argsF9357);
      a439_0 = T4;
      a439_1 = T7;
      resF9356 = a439_0;
      argsF9357 = a439_1;
      goto LOOP_439;
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_63) {
  P e_,env_;
  P argsF9359;
  P fF9358;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T4 = CALL1(1,VARREF(YevalSastYapplication_function),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  fF9358 = T3;
  T2 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  argsF9359 = T1;
  T0 = CALL3(1,VARREF(YgooSmacrosYnapp),fF9358,YPfalse,argsF9359);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_64) {
  P e_,env_;
  P bindingF9366;
  P argF9365;
  P tmpF9364;
  P x_2373F9363;
  P x_2374F9362;
  P argsF9361;
  P loopF9360;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T18 = CALL1(1,VARREF(YevalSastYapplication_loop),e_);
  loopF9360 = T18;
  T17 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
  T16 = CALL2(1,VARREF(YevalSast_evalYast_eval),T17,env_);
  argsF9361 = T16;
  T11 = CALL1(1,VARREF(YgooScolsScolYenum),argsF9361);
  x_2374F9362 = T11;
  T13 = CALL1(1,VARREF(YevalSastYloop_bindings),loopF9360);
  T12 = CALL1(1,VARREF(YgooScolsScolYenum),T13);
  x_2373F9363 = T12;
  LOOP_440: {
    P a440_0,a440_1;
    T4 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2374F9362);
    tmpF9364 = T4;
    if (tmpF9364 != YPfalse) {
      T2 = tmpF9364;
    } else {
      T3 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_2373F9363);
      T2 = T3;
    }
    T1 = CALL1(1,VARREF(Ynot),T2);
    if (T1 != YPfalse) {
      T10 = CALL1(1,VARREF(YgooScolsScolYnow),x_2374F9362);
      argF9365 = T10;
      T9 = CALL1(1,VARREF(YgooScolsScolYnow),x_2373F9363);
      bindingF9366 = T9;
      T5 = CALL1(1,VARREF(YevalSastYbinding_name),bindingF9366);
      CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),argF9365,env_,T5);
      T7 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2374F9362);
      T8 = CALL1(1,VARREF(YgooScolsScolYnxt),x_2373F9363);
      a440_0 = T7;
      a440_1 = T8;
      x_2374F9362 = a440_0;
      x_2373F9363 = a440_1;
      goto LOOP_440;
      T0 = T6;
    } else {
      T0 = YPfalse;
    }
  }
  T15 = CALL1(1,VARREF(YevalSastYloop_continue),loopF9360);
  T14 = CALL1(1,T15,YPfalse);
UNLINK_STACK();
  QRET(T14);
}

FUNCODEDEF(fun_ast_eval_65) {
  P e_,env_;
  P argsF9370;
  P fF9369;
  P nmsF9368;
  P bF9367;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T10 = CALL1(1,VARREF(YevalSastYapplication_binding),e_);
  bF9367 = T10;
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),bF9367);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_65));
  if (T1 != YPfalse) {
    T5 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_65));
    nmsF9368 = T5;
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),nmsF9368,VARREF(Ynul));
    if (T4 != YPfalse) {
      T3 = YPfalse;
    } else {
      T3 = nmsF9368;
    }
    T0 = T3;
  } else {
    T9 = CALL1(1,VARREF(YevalSastYbinding_info),bF9367);
    fF9369 = T9;
    T8 = CALL1(1,VARREF(YevalSastYapplication_arguments),e_);
    T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
    argsF9370 = T7;
    T6 = CALL3(1,VARREF(YgooSmacrosYnapp),fF9369,YPfalse,argsF9370);
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_66) {
  P e_,env_;
  P nenvF9372;
  P argsF9371;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T6 = CALL1(1,VARREF(YevalSastYfix_let_arguments),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  argsF9371 = T5;
  T4 = CALL1(1,VARREF(YevalSastYfix_let_bindings),e_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),T4);
  T2 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T3,argsF9371);
  nenvF9372 = T2;
  T1 = CALL1(1,VARREF(YevalSastYfix_let_body),e_);
  T0 = CALL2(1,VARREF(YevalSast_evalYast_eval),T1,nenvF9372);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_67) {
  P name_,value_;
  P T0;
LINK_STACK();
  ARG(name_, 0);
  ARG(value_, 1);
  T0 = CALL3(1,VARREF(YevalSast_evalYenv_binding_value_setter),value_,FREEREF(0),name_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_68) {
  P e_,env_;
  P new_envF9374;
  P bindingsF9373;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T11 = CALL1(1,VARREF(YevalSastYlocals_bindings),e_);
  bindingsF9373 = T11;
  T8 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF9373);
  T10 = CALL1(1,VARREF(YgooSfunctionalYalways),VARREF(Ynul));
  T9 = CALL2(1,VARREF(YgooSmacrosYmap),T10,bindingsF9373);
  T7 = CALL4(1,VARREF(YevalSast_evalYenv_frameX),env_,YPfalse,T8,T9);
  new_envF9374 = T7;
  T0 = FUNFAB(fun_67,1,new_envF9374);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYbinding_name),bindingsF9373);
  T3 = CALL2(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_evalYast_eval),new_envF9374);
  T4 = CALL1(1,VARREF(YevalSastYlocals_functions),e_);
  T2 = CALL2(1,VARREF(YgooSmacrosYmap),T3,T4);
  CALL3(1,VARREF(YgooScolsSseqYdo2),T0,T1,T2);
  T6 = CALL1(1,VARREF(YevalSastYlocals_body),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,new_envF9374);
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_69) {
  P env_;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  T1 = CALL2(1,VARREF(YevalSast_evalYenv_binding_value),env_,LITREF(lit_125));
  T0 = CALL1(1,FREEREF(0),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_70) {
  P return_;
  P exitF9376;
  P rprocF9375;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(return_, 0);
  T6 = FUNFAB(fun_69,1,return_);
  rprocF9375 = T6;
  T4 = CALL1(1,VARREF(Ylst),LITREF(lit_125));
  T5 = CALL1(1,VARREF(Ylst),YPfalse);
  T3 = CALLN(1,VARREF(YevalSast_evalYexport_goo_method),7,rprocF9375,T4,T5,YPfalse,YPfalse,rprocF9375,FREEREF(0));
  exitF9376 = T3;
  T2 = CALL1(1,VARREF(YevalSastYbind_exit_main_fun),FREEREF(1));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(0));
  T0 = CALL1(1,T1,exitF9376);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_71) {
  P e_,env_;
  P T0,T1;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_70,2,env_,e_);
  T0 = with_exit(T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_protected_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_73) {
  P T0,T1,T2;
LINK_STACK();
  T2 = CALL1(1,VARREF(YevalSastYunwind_protect_cleanup_thunk),FREEREF(0));
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,FREEREF(1));
  T0 = CALL0(1,T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_74) {
  P e_,env_;
  P T0,T1,T2;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T1 = FUNFAB(fun_72,2,e_,env_);
  T2 = FUNFAB(fun_73,2,e_,env_);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_eval_75) {
  P e_,env_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10;
LINK_STACK();
  ARG(e_, 0);
  ARG(env_, 1);
  T2 = CALL1(1,VARREF(YevalSastYmonitor_type),e_);
  T1 = CALL2(1,VARREF(YevalSast_evalYast_eval),T2,env_);
  T4 = CALL1(1,VARREF(YevalSastYmonitor_info),e_);
  T3 = CALL2(1,VARREF(YevalSast_evalYast_eval),T4,env_);
  T6 = CALL1(1,VARREF(YevalSastYmonitor_test),e_);
  T5 = CALL2(1,VARREF(YevalSast_evalYast_eval),T6,env_);
  T8 = CALL1(1,VARREF(YevalSastYmonitor_handler),e_);
  T7 = CALL2(1,VARREF(YevalSast_evalYast_eval),T8,env_);
  T10 = CALL1(1,VARREF(YevalSastYmonitor_main_thunk),e_);
  T9 = CALL2(1,VARREF(YevalSast_evalYast_eval),T10,env_);
  T0 = CALL5(1,VARREF(YPwith_monitor),T1,T3,T5,T7,T9);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSastYinit_environment_for_eval) {
  P env_;
  P bF9377;
  P T0,T1;
LINK_STACK();
  ARG(env_, 0);
  CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_65),YPfalse,LITREF(lit_131));
  T1 = CALL4(1,VARREF(YevalSastYast_define_binding),env_,LITREF(lit_132),YPfalse,LITREF(lit_97));
  bF9377 = T1;
  T0 = CALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),VARREF(YgooSmacrosYpair),bF9377);
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_evalYPdefine_binding(P raw_mod_,P raw_nam_) {
  P eF9378;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T3);
  eF9378 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL4(1,VARREF(YevalSastYast_define_binding),eF9378,T1,YPfalse,LITREF(lit_97));
  return T0;
}

P YevalSast_evalYPlookup_binding(P raw_mod_,P raw_nam_) {
  P eF9379;
  P T0,T1,T2,T3;
DEFCREGS();
  T3 = (P)YPPsym(raw_mod_);
  T2 = XCALL1(1,VARREF(YevalSastYunchecked_runtime_environment),T3);
  eF9379 = T2;
  T1 = (P)YPPsym(raw_nam_);
  T0 = XCALL2(1,VARREF(YevalSastYfind_binding),T1,eF9379);
  return T0;
}

P YevalSast_evalYPensure_binding(P raw_mod_,P raw_nam_) {
  P tmpF9380;
  P T0,T1,T2;
DEFCREGS();
  T2 = (P)YevalSast_evalYPlookup_binding(raw_mod_,raw_nam_);
  tmpF9380 = T2;
  if (tmpF9380 != YPfalse) {
    T0 = tmpF9380;
  } else {
    T1 = (P)YevalSast_evalYPdefine_binding(raw_mod_,raw_nam_);
    T0 = T1;
  }
  return T0;
}

P YevalSast_evalYPdlvar_binding(P dlvar_) {
  P yF9385;
  P xF9384;
  P xF9383;
  P xF9382;
  P bF9381;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
DEFCREGS();
  T8 = (P)YevalSast_evalYPdlvar(dlvar_);
  bF9381 = T8;
  xF9384 = bF9381;
  xF9382 = YPint((P)0);
  xF9383 = xF9382;
  T3 = (P)YPiGG(xF9383,(P)2);
  yF9385 = T3;
  T2 = (P)YPeqQ(xF9384,yF9385);
  T1 = (P)YPbb(T2);
  if (T2) {
    T6 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
    T7 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
    T5 = (P)YevalSast_evalYPensure_binding(T6,T7);
    T4 = (P)YevalSast_evalYPdlvar_setter(T5,dlvar_);
    T0 = T4;
  } else {
    T0 = bF9381;
  }
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of(P binding_) {
  P x_2377F9387;
  P x_2376F9386;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_2376F9386 = T9;
  x_2377F9387 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(1,x_2377F9387,x_2376F9386,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T2 = XCALL1(1,VARREF(YevalSast_evalYenv_runtime_value),T3);
    T0 = T2;
  } else {
    T5 = XCALL2(1,x_2377F9387,x_2376F9386,LITREF(lit_107));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T6 = XCALL1(1,VARREF(YevalSast_evalYenv_dynamic_value),T7);
      T4 = T6;
    } else {
      T8 = XCALL1(1,VARREF(YevalSast_evalYenv_global_binding_value),binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value(P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of(T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_of_setter(P val_,P binding_) {
  P x_2379F9389;
  P x_2378F9388;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9;
DEFCREGS();
  T9 = XCALL1(1,VARREF(YevalSastYbinding_kind),binding_);
  x_2378F9388 = T9;
  x_2379F9389 = VARREF(YgooSmacrosYEE);
  T1 = XCALL2(0,x_2379F9389,x_2378F9388,LITREF(lit_106));
  if (T1 != YPfalse) {
    T3 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
    T2 = XCALL2(1,VARREF(YevalSast_evalYenv_runtime_value_setter),val_,T3);
    T0 = T2;
  } else {
    T5 = XCALL2(0,x_2379F9389,x_2378F9388,LITREF(lit_107));
    if (T5 != YPfalse) {
      T7 = XCALL1(1,VARREF(YevalSastYbinding_locative),binding_);
      T6 = XCALL2(1,VARREF(YevalSast_evalYenv_dynamic_value_setter),val_,T7);
      T4 = T6;
    } else {
      T8 = XCALL2(1,VARREF(YevalSast_evalYenv_global_binding_value_setter),val_,binding_);
      T4 = T8;
    }
    T0 = T4;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_setter(P val_,P dlvar_) {
  P T0,T1;
DEFCREGS();
  T1 = (P)YevalSast_evalYPdlvar_binding(dlvar_);
  T0 = (P)YevalSast_evalYPbinding_value_of_setter(val_,T1);
  return T0;
}

INLINE P YevalSast_evalYPbinding_value_or_of(P b_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  if (b_ != YPfalse) {
    T2 = XCALL1(1,VARREF(YevalSastYbinding_info),b_);
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T3 = (P)YevalSast_evalYPbinding_value_of(b_);
    T0 = T3;
  } else {
    T0 = default_;
  }
  return T0;
}

P YevalSast_evalYPbinding_value_or(P dlvar_,P default_) {
  P T0,T1,T2,T3;
DEFCREGS();
  T2 = (P)YevalSast_evalYPdlvar_mod(dlvar_);
  T3 = (P)YevalSast_evalYPdlvar_nam(dlvar_);
  T1 = (P)YevalSast_evalYPlookup_binding(T2,T3);
  T0 = (P)YevalSast_evalYPbinding_value_or_of(T1,default_);
  return T0;
}

P YevalSast_evalY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141;
DEFCREGS();
  lit_0 = YPPsym((P)"env-global-binding-value");
  lit_1 = YPPlist(1,YPPsym((P)"b"));
  T0 = YPsig(LITREF(lit_1),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_0 = YPmet(FUNCODEREF(fun_env_global_binding_value_0),LITREF(lit_0),T0,ENVNUL,PNUL,sloc(18));
  T2 = VARREF_OR(YevalSast_evalYenv_global_binding_value,YPfalse);
  T3 = fun_env_global_binding_value_0;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_global_binding_value,T1);
  lit_2 = YPPsym((P)"env-global-binding-value-setter");
  lit_3 = YPPlist(2,YPPsym((P)"value"),YPPsym((P)"b"));
  T4 = YPsig(LITREF(lit_3),YPPlist(2,VARREF(YLanyG),VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_setter_1 = YPmet(FUNCODEREF(fun_env_global_binding_value_setter_1),LITREF(lit_2),T4,ENVNUL,PNUL,sloc(25));
  T6 = VARREF_OR(YevalSast_evalYenv_global_binding_value_setter,YPfalse);
  T7 = fun_env_global_binding_value_setter_1;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_global_binding_value_setter,T5);
  lit_4 = YPPsym((P)"env-global-binding-bound?");
  lit_5 = YPPlist(1,YPPsym((P)"b"));
  T8 = YPsig(LITREF(lit_5),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_env_global_binding_boundQ_2 = YPmet(FUNCODEREF(fun_env_global_binding_boundQ_2),LITREF(lit_4),T8,ENVNUL,PNUL,sloc(33));
  T10 = VARREF_OR(YevalSast_evalYenv_global_binding_boundQ,YPfalse);
  T11 = fun_env_global_binding_boundQ_2;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSast_evalYenv_global_binding_boundQ,T9);
  lit_6 = YPPsym((P)"env-runtime-value");
  lit_7 = YPPlist(1,YPPsym((P)"x"));
  T12 = YPsig(LITREF(lit_7),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_3 = YPmet(FUNCODEREF(fun_env_runtime_value_3),LITREF(lit_6),T12,ENVNUL,PNUL,sloc(39));
  T14 = VARREF_OR(YevalSast_evalYenv_runtime_value,YPfalse);
  T15 = fun_env_runtime_value_3;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_evalYenv_runtime_value,T13);
  lit_8 = YPPsym((P)"env-runtime-value-setter");
  lit_9 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T16 = YPsig(LITREF(lit_9),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_runtime_value_setter_4 = YPmet(FUNCODEREF(fun_env_runtime_value_setter_4),LITREF(lit_8),T16,ENVNUL,PNUL,sloc(42));
  T18 = VARREF_OR(YevalSast_evalYenv_runtime_value_setter,YPfalse);
  T19 = fun_env_runtime_value_setter_4;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_evalYenv_runtime_value_setter,T17);
  lit_10 = YPPsym((P)"env-dynamic-value");
  lit_11 = YPPlist(1,YPPsym((P)"x"));
  T20 = YPsig(LITREF(lit_11),YPPlist(1,VARREF(YLlocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_5 = YPmet(FUNCODEREF(fun_env_dynamic_value_5),LITREF(lit_10),T20,ENVNUL,PNUL,sloc(47));
  T22 = VARREF_OR(YevalSast_evalYenv_dynamic_value,YPfalse);
  T23 = fun_env_dynamic_value_5;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_evalYenv_dynamic_value,T21);
  lit_12 = YPPsym((P)"env-dynamic-value-setter");
  lit_13 = YPPlist(2,YPPsym((P)"v"),YPPsym((P)"x"));
  T24 = YPsig(LITREF(lit_13),YPPlist(2,VARREF(YLanyG),VARREF(YLlocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_dynamic_value_setter_6 = YPmet(FUNCODEREF(fun_env_dynamic_value_setter_6),LITREF(lit_12),T24,ENVNUL,PNUL,sloc(50));
  T26 = VARREF_OR(YevalSast_evalYenv_dynamic_value_setter,YPfalse);
  T27 = fun_env_dynamic_value_setter_6;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_evalYenv_dynamic_value_setter,T25);
  lit_14 = YPPsym((P)"<loc-env>");
  T29 = (P)YPpair(VARREF(YLanyG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_14),T29);
  VARSET(YevalSast_evalYLloc_envG,T28);
  lit_15 = YPPsym((P)"env-parent");
  lit_16 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_parent_7 = YPmet(FUNCODEREF(fun_env_parent_7),LITREF(lit_15),T30,ENVNUL,PNUL,sloc(54));
  T32 = VARREF_OR(YevalSast_evalYenv_parent,YPfalse);
  T33 = fun_env_parent_7;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_evalYenv_parent,T31);
  lit_17 = YPPlist(1,YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_8 = YPmet(FUNCODEREF(fun_8),YPfalse,T34,ENVNUL,PNUL,sloc(54));
  T35 = fun_8;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_parent),YPfalse,VARREF(YLanyG),T35);
  lit_18 = YPPsym((P)"env-function");
  lit_19 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_function_9 = YPmet(FUNCODEREF(fun_env_function_9),LITREF(lit_18),T36,ENVNUL,PNUL,sloc(55));
  T38 = VARREF_OR(YevalSast_evalYenv_function,YPfalse);
  T39 = fun_env_function_9;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_evalYenv_function,T37);
  lit_20 = YPPlist(1,YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_10 = YPmet(FUNCODEREF(fun_10),YPfalse,T40,ENVNUL,PNUL,sloc(55));
  T41 = fun_10;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_function),YPfalse,VARREF(YLanyG),T41);
  lit_21 = YPPsym((P)"env-names");
  lit_22 = YPPlist(1,YPPsym((P)"_x"));
  T42 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_names_11 = YPmet(FUNCODEREF(fun_env_names_11),LITREF(lit_21),T42,ENVNUL,PNUL,sloc(56));
  T44 = VARREF_OR(YevalSast_evalYenv_names,YPfalse);
  T45 = fun_env_names_11;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSast_evalYenv_names,T43);
  lit_23 = YPPlist(1,YPPsym((P)"_x"));
  T46 = YPsig(LITREF(lit_23),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_12 = YPmet(FUNCODEREF(fun_12),YPfalse,T46,ENVNUL,PNUL,sloc(56));
  T47 = fun_12;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_names),YPfalse,VARREF(YLlstG),T47);
  lit_24 = YPPsym((P)"env-values");
  lit_25 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_25),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_env_values_13 = YPmet(FUNCODEREF(fun_env_values_13),LITREF(lit_24),T48,ENVNUL,PNUL,sloc(57));
  T50 = VARREF_OR(YevalSast_evalYenv_values,YPfalse);
  T51 = fun_env_values_13;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_evalYenv_values,T49);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSast_evalYenv_values),YPfalse,VARREF(YLrepG),VARREF(YPprop_unbound_error));
  T52 = XCALL1(1,VARREF(Ynew),VARREF(YevalSast_evalYLloc_envG));
  VARSET(YevalSast_evalYDnul_loc_env,T52);
  lit_26 = YPPsym((P)"env-frame!");
  lit_27 = YPPlist(4,YPPsym((P)"env"),YPPsym((P)"function"),YPPsym((P)"names"),YPPsym((P)"args"));
  T53 = YPsig(LITREF(lit_27),YPPlist(4,VARREF(YevalSast_evalYLloc_envG),VARREF(YLanyG),VARREF(YLlstG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YevalSast_evalYLloc_envG),Ynil);
  fun_env_frameX_14 = YPmet(FUNCODEREF(fun_env_frameX_14),LITREF(lit_26),T53,ENVNUL,PNUL,sloc(61));
  T55 = VARREF_OR(YevalSast_evalYenv_frameX,YPfalse);
  T56 = fun_env_frameX_14;
  T54 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T55,T56);
  VARSET(YevalSast_evalYenv_frameX,T54);
  lit_28 = YPPsym((P)"env-local-value");
  lit_29 = YPPlist(3,YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T57 = YPsig(LITREF(lit_29),YPPlist(3,VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_value_15 = YPmet(FUNCODEREF(fun_env_local_value_15),LITREF(lit_28),T57,ENVNUL,PNUL,sloc(69));
  T59 = VARREF_OR(YevalSast_evalYenv_local_value,YPfalse);
  T60 = fun_env_local_value_15;
  T58 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T59,T60);
  VARSET(YevalSast_evalYenv_local_value,T58);
  lit_30 = YPPsym((P)"env-local-value-setter");
  lit_31 = YPPlist(4,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"i"),YPPsym((P)"j"));
  T61 = YPsig(LITREF(lit_31),YPPlist(4,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLintG),VARREF(YLintG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_env_local_value_setter_16 = YPmet(FUNCODEREF(fun_env_local_value_setter_16),LITREF(lit_30),T61,ENVNUL,PNUL,sloc(74));
  T63 = VARREF_OR(YevalSast_evalYenv_local_value_setter,YPfalse);
  T64 = fun_env_local_value_setter_16;
  T62 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T63,T64);
  VARSET(YevalSast_evalYenv_local_value_setter,T62);
  lit_32 = YPPsym((P)"env-binding-value");
  lit_33 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"name"));
  T65 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_binding_value_17 = YPmet(FUNCODEREF(fun_env_binding_value_17),LITREF(lit_32),T65,ENVNUL,PNUL,sloc(80));
  T67 = VARREF_OR(YevalSast_evalYenv_binding_value,YPfalse);
  T68 = fun_env_binding_value_17;
  T66 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T67,T68);
  VARSET(YevalSast_evalYenv_binding_value,T66);
  lit_34 = YPPsym((P)"env-binding-value-setter");
  lit_35 = YPPlist(3,YPPsym((P)"v"),YPPsym((P)"env"),YPPsym((P)"name"));
  T69 = YPsig(LITREF(lit_35),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YLsymG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_binding_value_setter_18 = YPmet(FUNCODEREF(fun_env_binding_value_setter_18),LITREF(lit_34),T69,ENVNUL,PNUL,sloc(90));
  T71 = VARREF_OR(YevalSast_evalYenv_binding_value_setter,YPfalse);
  T72 = fun_env_binding_value_setter_18;
  T70 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T71,T72);
  VARSET(YevalSast_evalYenv_binding_value_setter,T70);
  lit_36 = YPPsym((P)"ast-evaluate");
  lit_37 = YPPlist(1,YPPsym((P)"e"));
  T73 = YPsig(LITREF(lit_37),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_ast_evaluate_19 = YPmet(FUNCODEREF(fun_ast_evaluate_19),LITREF(lit_36),T73,ENVNUL,PNUL,sloc(102));
  T75 = VARREF_OR(YevalSastYast_evaluate,YPfalse);
  T76 = fun_ast_evaluate_19;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSastYast_evaluate,T74);
  lit_38 = YPPsym((P)"ast-eval");
  lit_39 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T78 = YPsig(LITREF(lit_39),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T77 = YPgen((P)YPgen_code((P)YPdispatch),LITREF(lit_38),T78,Ynil,YPfalse,YPfalse,YPfalse);
  VARSET(YevalSast_evalYast_eval,T77);
  lit_40 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T79 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YevalSastYLconstantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_20 = YPmet(FUNCODEREF(fun_ast_eval_20),LITREF(lit_38),T79,ENVNUL,PNUL,sloc(107));
  T81 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T82 = fun_ast_eval_20;
  T80 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T81,T82);
  VARSET(YevalSast_evalYast_eval,T80);
  lit_41 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T83 = YPsig(LITREF(lit_41),YPPlist(2,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_21 = YPmet(FUNCODEREF(fun_ast_eval_21),LITREF(lit_38),T83,ENVNUL,PNUL,sloc(110));
  T85 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T86 = fun_ast_eval_21;
  T84 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T85,T86);
  VARSET(YevalSast_evalYast_eval,T84);
  lit_42 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"ee"));
  T87 = YPsig(LITREF(lit_42),YPPlist(2,VARREF(YevalSastYLcompile_timeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_22 = YPmet(FUNCODEREF(fun_ast_eval_22),LITREF(lit_38),T87,ENVNUL,PNUL,sloc(113));
  T89 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T90 = fun_ast_eval_22;
  T88 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T89,T90);
  VARSET(YevalSast_evalYast_eval,T88);
  lit_43 = YPPsym((P)"ast-eval-specs");
  lit_44 = YPPlist(3,YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"env"));
  T91 = YPsig(LITREF(lit_44),YPPlist(3,VARREF(YLlstG),VARREF(YLlogG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_specs_23 = YPmet(FUNCODEREF(fun_ast_eval_specs_23),LITREF(lit_43),T91,ENVNUL,PNUL,sloc(116));
  T93 = VARREF_OR(YevalSast_evalYast_eval_specs,YPfalse);
  T94 = fun_ast_eval_specs_23;
  T92 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T93,T94);
  VARSET(YevalSast_evalYast_eval_specs,T92);
  lit_45 = YPPsym((P)"arrange-arguments");
  lit_46 = YPPlist(4,YPPsym((P)"f"),YPPsym((P)"nary?"),YPPsym((P)"arity"),YPPsym((P)"args"));
  T95 = YPsig(LITREF(lit_46),YPPlist(4,VARREF(YLanyG),VARREF(YLlogG),VARREF(YLintG),VARREF(YLlstG)),YPfalse,YPint((P)4),VARREF(YLlstG),Ynil);
  YevalSast_evalYarrange_arguments = YPmet(FUNCODEREF(YevalSast_evalYarrange_arguments),LITREF(lit_45),T95,ENVNUL,PNUL,sloc(131));
  T96 = YevalSast_evalYarrange_arguments;
  VARSET(YevalSast_evalYarrange_arguments,T96);
  lit_47 = YPPlist(1,YPPsym((P)"exp"));
  lit_48 = YPPlist(1,YPPsym((P)"return"));
  lit_49 = YPPsym((P)"x-2368");
  lit_50 = YPPlist(2,YPPsym((P)"msg"),YPPsym((P)"args"));
  lit_51 = YPPsym((P)"ifun");
  lit_52 = YPsb((P)"Match Pattern Failure");
  lit_53 = YPPsym((P)"fun");
  lit_54 = YPPsym((P)"arg-vector");
  lit_55 = YPPsym((P)"...");
  lit_56 = Ynil;
  lit_57 = YPPsym((P)"def");
  lit_58 = YPPsym((P)"args");
  lit_59 = YPPsym((P)"f");
  lit_60 = YPPsym((P)"nary?");
  lit_61 = YPPsym((P)"arity");
  lit_62 = YPPsym((P)"as");
  lit_63 = YPPsym((P)"<lst>");
  lit_64 = YPPsym((P)"nms");
  lit_65 = YPPsym((P)"%next-methods");
  lit_66 = YPPsym((P)"frame");
  lit_67 = YPPsym((P)"cat2");
  lit_68 = YPPsym((P)"lst");
  lit_69 = YPPsym((P)"quote");
  T99 = YPsig(LITREF(lit_50),YPPlist(1,VARREF(YLstrG)),YPtrue,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_2368_25 = YPmet(FUNCODEREF(fun_x_2368_25),LITREF(lit_49),T99,ENVNUL,PNUL,YPfalse);
  T98 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_26 = YPmet(FUNCODEREF(fun_26),YPfalse,T98,ENVNUL,PNUL,YPfalse);
  T97 = YPsig(LITREF(lit_47),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_27 = YPmet(FUNCODEREF(fun_27),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T100 = fun_27;
  YPmacro(YPPsym((P)"eval/ast-eval"),YPPsym((P)"ifun"),T100);
  lit_70 = YPPsym((P)"as-fun-name");
  lit_71 = YPPlist(1,YPPsym((P)"x"));
  T101 = YPsig(LITREF(lit_71),YPPlist(1,VARREF(YLfunG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_28 = YPmet(FUNCODEREF(fun_as_fun_name_28),LITREF(lit_70),T101,ENVNUL,PNUL,sloc(151));
  T103 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T104 = fun_as_fun_name_28;
  T102 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T103,T104);
  VARSET(YevalSast_evalYas_fun_name,T102);
  lit_72 = YPPlist(1,YPPsym((P)"x"));
  T105 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YevalSastYLast_functionG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_29 = YPmet(FUNCODEREF(fun_as_fun_name_29),LITREF(lit_70),T105,ENVNUL,PNUL,sloc(153));
  T107 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T108 = fun_as_fun_name_29;
  T106 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T107,T108);
  VARSET(YevalSast_evalYas_fun_name,T106);
  lit_73 = YPPlist(1,YPPsym((P)"x"));
  T109 = YPsig(LITREF(lit_73),YPPlist(1,VARREF(YevalSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_30 = YPmet(FUNCODEREF(fun_as_fun_name_30),LITREF(lit_70),T109,ENVNUL,PNUL,sloc(155));
  T111 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T112 = fun_as_fun_name_30;
  T110 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T111,T112);
  VARSET(YevalSast_evalYas_fun_name,T110);
  lit_74 = YPPlist(1,YPPsym((P)"x"));
  T113 = YPsig(LITREF(lit_74),YPPlist(1,VARREF(YevalSastYLconstantG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_31 = YPmet(FUNCODEREF(fun_as_fun_name_31),LITREF(lit_70),T113,ENVNUL,PNUL,sloc(157));
  T115 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T116 = fun_as_fun_name_31;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSast_evalYas_fun_name,T114);
  lit_75 = YPPlist(1,YPPsym((P)"x"));
  T117 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLsymG)),YPfalse,YPint((P)1),VARREF(YLsymG),Ynil);
  fun_as_fun_name_32 = YPmet(FUNCODEREF(fun_as_fun_name_32),LITREF(lit_70),T117,ENVNUL,PNUL,sloc(159));
  T119 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T120 = fun_as_fun_name_32;
  T118 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T119,T120);
  VARSET(YevalSast_evalYas_fun_name,T118);
  lit_76 = YPPlist(1,YPPsym((P)"x"));
  T121 = YPsig(LITREF(lit_76),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_fun_name_33 = YPmet(FUNCODEREF(fun_as_fun_name_33),LITREF(lit_70),T121,ENVNUL,PNUL,sloc(161));
  T123 = VARREF_OR(YevalSast_evalYas_fun_name,YPfalse);
  T124 = fun_as_fun_name_33;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSast_evalYas_fun_name,T122);
  lit_77 = YPPsym((P)"export-goo-method");
  lit_78 = YPPlist(7,YPPsym((P)"f"),YPPsym((P)"names"),YPPsym((P)"specs"),YPPsym((P)"nary?"),YPPsym((P)"value"),YPPsym((P)"body"),YPPsym((P)"env"));
  lit_79 = YPPlist(1,YPPsym((P)"arg-vector"));
  T126 = YPsig(LITREF(lit_79),Ynil,YPtrue,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_34 = YPmet(FUNCODEREF(fun_34),YPfalse,T126,ENVNUL,PNUL,sloc(166));
  T125 = YPsig(LITREF(lit_78),YPPlist(7,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)7),VARREF(YLanyG),Ynil);
  fun_export_goo_method_35 = YPmet(FUNCODEREF(fun_export_goo_method_35),LITREF(lit_77),T125,ENVNUL,PNUL,sloc(164));
  T128 = VARREF_OR(YevalSast_evalYexport_goo_method,YPfalse);
  T129 = fun_export_goo_method_35;
  T127 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T128,T129);
  VARSET(YevalSast_evalYexport_goo_method,T127);
  lit_80 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_81 = YPPlist(1,YPPsym((P)"env"));
  T131 = YPsig(LITREF(lit_81),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T131,ENVNUL,PNUL,sloc(180));
  T130 = YPsig(LITREF(lit_80),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_37 = YPmet(FUNCODEREF(fun_ast_eval_37),LITREF(lit_38),T130,ENVNUL,PNUL,sloc(178));
  T133 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T134 = fun_ast_eval_37;
  T132 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T133,T134);
  VARSET(YevalSast_evalYast_eval,T132);
  lit_82 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T137 = YPsig(LITREF(lit_82),YPPlist(2,VARREF(YevalSastYLast_genericG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  T136 = fun_ast_eval_38 = YPmet(FUNCODEREF(fun_ast_eval_38),LITREF(lit_38),T137,ENVNUL,PNUL,sloc(190));
  T140 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T141 = fun_ast_eval_38;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  T138 = VARSET(YevalSast_evalYast_eval,T139);
  T135 = T138;
  return T135;
}

P YevalSast_evalY___main_1___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129;
DEFCREGS();
  lit_83 = YPPsym((P)"env-local-reference-value");
  lit_84 = YPPlist(2,YPPsym((P)"env"),YPPsym((P)"ref"));
  T0 = YPsig(LITREF(lit_84),YPPlist(2,VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_39 = YPmet(FUNCODEREF(fun_env_local_reference_value_39),LITREF(lit_83),T0,ENVNUL,PNUL,sloc(197));
  T2 = VARREF_OR(YevalSast_evalYenv_local_reference_value,YPfalse);
  T3 = fun_env_local_reference_value_39;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_evalYenv_local_reference_value,T1);
  lit_85 = YPPsym((P)"env-local-reference-value-setter");
  lit_86 = YPPlist(3,YPPsym((P)"val"),YPPsym((P)"env"),YPPsym((P)"ref"));
  T4 = YPsig(LITREF(lit_86),YPPlist(3,VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG),VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_local_reference_value_setter_40 = YPmet(FUNCODEREF(fun_env_local_reference_value_setter_40),LITREF(lit_85),T4,ENVNUL,PNUL,sloc(201));
  T6 = VARREF_OR(YevalSast_evalYenv_local_reference_value_setter,YPfalse);
  T7 = fun_env_local_reference_value_setter_40;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_evalYenv_local_reference_value_setter,T5);
  lit_87 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T8 = YPsig(LITREF(lit_87),YPPlist(2,VARREF(YevalSastYLstatic_module_binding_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_41 = YPmet(FUNCODEREF(fun_ast_eval_41),LITREF(lit_38),T8,ENVNUL,PNUL,sloc(206));
  T10 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T11 = fun_ast_eval_41;
  T9 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T10,T11);
  VARSET(YevalSast_evalYast_eval,T9);
  lit_88 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T12 = YPsig(LITREF(lit_88),YPPlist(2,VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_42 = YPmet(FUNCODEREF(fun_ast_eval_42),LITREF(lit_38),T12,ENVNUL,PNUL,sloc(208));
  T14 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T15 = fun_ast_eval_42;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_evalYast_eval,T13);
  lit_89 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T16 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_43 = YPmet(FUNCODEREF(fun_ast_eval_43),LITREF(lit_38),T16,ENVNUL,PNUL,sloc(211));
  T18 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T19 = fun_ast_eval_43;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_evalYast_eval,T17);
  lit_90 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T20 = YPsig(LITREF(lit_90),YPPlist(2,VARREF(YevalSastYLdynamic_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_44 = YPmet(FUNCODEREF(fun_ast_eval_44),LITREF(lit_38),T20,ENVNUL,PNUL,sloc(214));
  T22 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T23 = fun_ast_eval_44;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_evalYast_eval,T21);
  lit_91 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T24 = YPsig(LITREF(lit_91),YPPlist(2,VARREF(YevalSastYLruntime_referenceG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_45 = YPmet(FUNCODEREF(fun_ast_eval_45),LITREF(lit_38),T24,ENVNUL,PNUL,sloc(217));
  T26 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T27 = fun_ast_eval_45;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_evalYast_eval,T25);
  lit_92 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T28 = YPsig(LITREF(lit_92),YPPlist(2,VARREF(YevalSastYLboundQG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_46 = YPmet(FUNCODEREF(fun_ast_eval_46),LITREF(lit_38),T28,ENVNUL,PNUL,sloc(220));
  T30 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T31 = fun_ast_eval_46;
  T29 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T30,T31);
  VARSET(YevalSast_evalYast_eval,T29);
  lit_93 = YPPsym((P)"env-global-binding-value-or");
  lit_94 = YPPlist(3,YPPsym((P)"b"),YPPsym((P)"default"),YPPsym((P)"env"));
  T32 = YPsig(LITREF(lit_94),YPPlist(3,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_env_global_binding_value_or_47 = YPmet(FUNCODEREF(fun_env_global_binding_value_or_47),LITREF(lit_93),T32,ENVNUL,PNUL,sloc(223));
  T34 = VARREF_OR(YevalSast_evalYenv_global_binding_value_or,YPfalse);
  T35 = fun_env_global_binding_value_or_47;
  T33 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T34,T35);
  VARSET(YevalSast_evalYenv_global_binding_value_or,T33);
  lit_95 = YPPsym((P)"ast-eval-bound?");
  lit_96 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  lit_97 = YPPsym((P)"global");
  T36 = YPsig(LITREF(lit_96),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_48 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_48),LITREF(lit_95),T36,ENVNUL,PNUL,sloc(228));
  T38 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T39 = fun_ast_eval_boundQ_48;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_evalYast_eval_boundQ,T37);
  lit_98 = YPPlist(3,YPPsym((P)"e"),YPPsym((P)"binding"),YPPsym((P)"env"));
  T40 = YPsig(LITREF(lit_98),YPPlist(3,VARREF(YevalSastYLboundQG),VARREF(YevalSastYLlocal_bindingG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_ast_eval_boundQ_49 = YPmet(FUNCODEREF(fun_ast_eval_boundQ_49),LITREF(lit_95),T40,ENVNUL,PNUL,sloc(233));
  T42 = VARREF_OR(YevalSast_evalYast_eval_boundQ,YPfalse);
  T43 = fun_ast_eval_boundQ_49;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSast_evalYast_eval_boundQ,T41);
  lit_99 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T44 = YPsig(LITREF(lit_99),YPPlist(2,VARREF(YevalSastYLglobal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_50 = YPmet(FUNCODEREF(fun_ast_eval_50),LITREF(lit_38),T44,ENVNUL,PNUL,sloc(236));
  T46 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T47 = fun_ast_eval_50;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSast_evalYast_eval,T45);
  lit_100 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T48 = YPsig(LITREF(lit_100),YPPlist(2,VARREF(YevalSastYLast_macro_definitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_51 = YPmet(FUNCODEREF(fun_ast_eval_51),LITREF(lit_38),T48,ENVNUL,PNUL,sloc(240));
  T50 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T51 = fun_ast_eval_51;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_evalYast_eval,T49);
  lit_101 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T52 = YPsig(LITREF(lit_101),YPPlist(2,VARREF(YevalSastYLruntime_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_52 = YPmet(FUNCODEREF(fun_ast_eval_52),LITREF(lit_38),T52,ENVNUL,PNUL,sloc(243));
  T54 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T55 = fun_ast_eval_52;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_evalYast_eval,T53);
  lit_102 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T56 = YPsig(LITREF(lit_102),YPPlist(2,VARREF(YevalSastYLdynamic_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_53 = YPmet(FUNCODEREF(fun_ast_eval_53),LITREF(lit_38),T56,ENVNUL,PNUL,sloc(247));
  T58 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T59 = fun_ast_eval_53;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_evalYast_eval,T57);
  lit_103 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T60 = YPsig(LITREF(lit_103),YPPlist(2,VARREF(YevalSastYLlocal_assignmentG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_54 = YPmet(FUNCODEREF(fun_ast_eval_54),LITREF(lit_38),T60,ENVNUL,PNUL,sloc(251));
  T62 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T63 = fun_ast_eval_54;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_evalYast_eval,T61);
  lit_104 = YPPsym((P)"env-define-binding!");
  lit_105 = YPPlist(2,YPPsym((P)"b"),YPPsym((P)"v"));
  lit_106 = YPPsym((P)"runtime");
  lit_107 = YPPsym((P)"dynamic");
  lit_108 = YPsb((P)"Defining invalid binding kind %=");
  T64 = YPsig(LITREF(lit_105),YPPlist(2,VARREF(YevalSastYLmodule_bindingG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_env_define_bindingX_55 = YPmet(FUNCODEREF(fun_env_define_bindingX_55),LITREF(lit_104),T64,ENVNUL,PNUL,sloc(255));
  T66 = VARREF_OR(YevalSast_evalYenv_define_bindingX,YPfalse);
  T67 = fun_env_define_bindingX_55;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_evalYenv_define_bindingX,T65);
  lit_109 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T68 = YPsig(LITREF(lit_109),YPPlist(2,VARREF(YevalSastYLdefinitionG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_56 = YPmet(FUNCODEREF(fun_ast_eval_56),LITREF(lit_38),T68,ENVNUL,PNUL,sloc(264));
  T70 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T71 = fun_ast_eval_56;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSast_evalYast_eval,T69);
  lit_110 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T72 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YevalSastYLalternativeG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_57 = YPmet(FUNCODEREF(fun_ast_eval_57),LITREF(lit_38),T72,ENVNUL,PNUL,sloc(284));
  T74 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T75 = fun_ast_eval_57;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSast_evalYast_eval,T73);
  lit_111 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_112 = YPPlist(1,YPPsym((P)"return"));
  lit_113 = YPPlist(1,YPPsym((P)"continue"));
  T78 = YPsig(LITREF(lit_113),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_58 = YPmet(FUNCODEREF(fun_58),YPfalse,T78,ENVNUL,PNUL,sloc(292));
  T77 = YPsig(LITREF(lit_112),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_59 = YPmet(FUNCODEREF(fun_59),YPfalse,T77,ENVNUL,PNUL,sloc(290));
  T76 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YevalSastYLloopG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_60 = YPmet(FUNCODEREF(fun_ast_eval_60),LITREF(lit_38),T76,ENVNUL,PNUL,sloc(289));
  T80 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T81 = fun_ast_eval_60;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSast_evalYast_eval,T79);
  lit_114 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T82 = YPsig(LITREF(lit_114),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_61 = YPmet(FUNCODEREF(fun_ast_eval_61),LITREF(lit_38),T82,ENVNUL,PNUL,sloc(297));
  T84 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T85 = fun_ast_eval_61;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_evalYast_eval,T83);
  lit_115 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T86 = YPsig(LITREF(lit_115),YPPlist(2,VARREF(YevalSastYLargumentsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_62 = YPmet(FUNCODEREF(fun_ast_eval_62),LITREF(lit_38),T86,ENVNUL,PNUL,sloc(305));
  T88 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T89 = fun_ast_eval_62;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_evalYast_eval,T87);
  lit_116 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T90 = YPsig(LITREF(lit_116),YPPlist(2,VARREF(YevalSastYLregular_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_63 = YPmet(FUNCODEREF(fun_ast_eval_63),LITREF(lit_38),T90,ENVNUL,PNUL,sloc(311));
  T92 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T93 = fun_ast_eval_63;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_evalYast_eval,T91);
  lit_117 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T94 = YPsig(LITREF(lit_117),YPPlist(2,VARREF(YevalSastYLloop_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_64 = YPmet(FUNCODEREF(fun_ast_eval_64),LITREF(lit_38),T94,ENVNUL,PNUL,sloc(316));
  T96 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T97 = fun_ast_eval_64;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSast_evalYast_eval,T95);
  lit_118 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T98 = YPsig(LITREF(lit_118),YPPlist(2,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_65 = YPmet(FUNCODEREF(fun_ast_eval_65),LITREF(lit_38),T98,ENVNUL,PNUL,sloc(323));
  T100 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T101 = fun_ast_eval_65;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSast_evalYast_eval,T99);
  lit_119 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T102 = YPsig(LITREF(lit_119),YPPlist(2,VARREF(YevalSastYLfix_letG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_66 = YPmet(FUNCODEREF(fun_ast_eval_66),LITREF(lit_38),T102,ENVNUL,PNUL,sloc(332));
  T104 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T105 = fun_ast_eval_66;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSast_evalYast_eval,T103);
  lit_120 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_121 = YPPlist(2,YPPsym((P)"name"),YPPsym((P)"value"));
  T107 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_67 = YPmet(FUNCODEREF(fun_67),YPfalse,T107,ENVNUL,PNUL,sloc(342));
  T106 = YPsig(LITREF(lit_120),YPPlist(2,VARREF(YevalSastYLlocalsG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_68 = YPmet(FUNCODEREF(fun_ast_eval_68),LITREF(lit_38),T106,ENVNUL,PNUL,sloc(337));
  T109 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T110 = fun_ast_eval_68;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSast_evalYast_eval,T108);
  lit_122 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_123 = YPPlist(1,YPPsym((P)"return"));
  lit_124 = YPPlist(1,YPPsym((P)"env"));
  lit_125 = YPPsym((P)"x");
  T113 = YPsig(LITREF(lit_124),YPPlist(1,VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T113,ENVNUL,PNUL,sloc(355));
  T112 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_70 = YPmet(FUNCODEREF(fun_70),YPfalse,T112,ENVNUL,PNUL,sloc(354));
  T111 = YPsig(LITREF(lit_122),YPPlist(2,VARREF(YevalSastYLbind_exitG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_71 = YPmet(FUNCODEREF(fun_ast_eval_71),LITREF(lit_38),T111,ENVNUL,PNUL,sloc(353));
  T115 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T116 = fun_ast_eval_71;
  T114 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T115,T116);
  VARSET(YevalSast_evalYast_eval,T114);
  lit_126 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  lit_127 = Ynil;
  T119 = YPsig(LITREF(lit_127),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T119,ENVNUL,PNUL,sloc(360));
  T118 = YPsig(LITREF(lit_127),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_73 = YPmet(FUNCODEREF(fun_73),YPfalse,T118,ENVNUL,PNUL,sloc(361));
  T117 = YPsig(LITREF(lit_126),YPPlist(2,VARREF(YevalSastYLunwind_protectG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_74 = YPmet(FUNCODEREF(fun_ast_eval_74),LITREF(lit_38),T117,ENVNUL,PNUL,sloc(359));
  T121 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T122 = fun_ast_eval_74;
  T120 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T121,T122);
  VARSET(YevalSast_evalYast_eval,T120);
  lit_128 = YPPlist(2,YPPsym((P)"e"),YPPsym((P)"env"));
  T123 = YPsig(LITREF(lit_128),YPPlist(2,VARREF(YevalSastYLmonitorG),VARREF(YevalSast_evalYLloc_envG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_eval_75 = YPmet(FUNCODEREF(fun_ast_eval_75),LITREF(lit_38),T123,ENVNUL,PNUL,sloc(363));
  T125 = VARREF_OR(YevalSast_evalYast_eval,YPfalse);
  T126 = fun_ast_eval_75;
  T124 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T125,T126);
  VARSET(YevalSast_evalYast_eval,T124);
  lit_129 = YPPsym((P)"init-environment-for-eval");
  lit_130 = YPPlist(1,YPPsym((P)"env"));
  lit_131 = YPPsym((P)"predefined");
  lit_132 = YPPsym((P)"%pair");
  T127 = YPsig(LITREF(lit_130),YPPlist(1,VARREF(YevalSastYLstatic_global_environmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  YevalSastYinit_environment_for_eval = YPmet(FUNCODEREF(YevalSastYinit_environment_for_eval),LITREF(lit_129),T127,ENVNUL,PNUL,sloc(378));
  T128 = YevalSastYinit_environment_for_eval;
  VARSET(YevalSastYinit_environment_for_eval,T128);
  T129 = YPfalse;
  return T129;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSfun;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooScolsSrep;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSclass;
extern MODULE_INFO module_info_gooSpacker;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooSioSport;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooSioSwrite;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooSconditions;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_evalSdependency;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSvec;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSfunctional;
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSfun},
  {&module_info_gooSmacros},
  {&module_info_gooSloc},
  {&module_info_goo},
  {&module_info_gooScolsSrep},
  {&module_info_evalSast},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"match", &module_info_gooSmacros, NULL},
  {"add-prop", &module_info_gooSclass, NULL},
  {"%raw", &module_info_gooSboot, NULL},
  {"<class>", &module_info_gooSboot, NULL},
  {"class-direct-props", &module_info_gooSboot, NULL},
  {"packer", &module_info_gooSpacker, NULL},
  {"<module-binding-reference>", &module_info_evalSast, NULL},
  {"sym-name", &module_info_gooSboot, NULL},
  {"atan", &module_info_gooSmath, NULL},
  {"<str-port>", &module_info_gooSioSport, NULL},
  {"range", &module_info_gooScolsSrange, NULL},
  {"src-loc-line", &module_info_gooSboot, NULL},
  {"find-setter", &module_info_gooSclass, NULL},
  {"binding-type-setter", &module_info_evalSast, NULL},
  {"%gen-sig", &module_info_gooSboot, NULL},
  {"swapf", &module_info_gooSmacros, NULL},
  {"sig-arity", &module_info_gooSboot, NULL},
  {"<application>", &module_info_evalSast, NULL},
  {"class-children", &module_info_gooSboot, NULL},
  {"monitor-main-thunk", &module_info_evalSast, NULL},
  {"writeln", &module_info_gooSioSwrite, NULL},
  {"ins", &module_info_gooScolsSseq, NULL},
  {"gen-refs", &module_info_gooSboot, NULL},
  {"bit?", &module_info_gooSmath, NULL},
  {"@tail", &module_info_gooSboot, NULL},
  {"<functions>", &module_info_evalSast, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"<loop-application>", &module_info_evalSast, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"prop-bound-at?", &module_info_gooSfun, NULL},
  {"<replace-generic-restart>", &module_info_gooSfun, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"<internal-error>", &module_info_gooSconditions, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"<assert-error>", &module_info_gooSconditions, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"file-opening-error", &module_info_gooSboot, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"macro-error", &module_info_gooSmacros, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
  {"ddv", &module_info_gooSboot, NULL},
  {"<gen>", &module_info_gooSboot, NULL},
  {"prop-type", &module_info_gooSboot, NULL},
  {"@tall2?", &module_info_gooSboot, NULL},
  {"<type-error>", &module_info_gooSconditions, NULL},
  {"split", &module_info_gooScolsSseq, NULL},
  {"binding-locative", &module_info_evalSast, NULL},
  {"%macro", &module_info_gooSboot, NULL},
  {"@==", &module_info_gooSboot, NULL},
  {"<magic-reference>", &module_info_evalSast, NULL},
  {"@len", &module_info_gooSboot, NULL},
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"*boot-macro-expanders*", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"%sp-reg", &module_info_gooSboot, NULL},
  {"program-type-setter", &module_info_evalSast, NULL},
  {"update-instance-for-changed-class", &module_info_gooSboot, NULL},
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
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"<argument-type-error>", &module_info_gooSconditions, NULL},
  {"key-test", &module_info_gooScolsScol, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"rep-len", &module_info_gooScolsSrep, NULL},
  {"rep-into!", &module_info_gooScolsSrep, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"def-fun-var", &module_info_gooSmacros, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"<unknown-function-error>", &module_info_gooSconditions, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
  {"use/mangle", &module_info_gooSboot, NULL},
  {"function-registers-setter", &module_info_evalSast, NULL},
  {"<handler-info>", &module_info_gooSconditions, NULL},
  {"<range-error>", &module_info_gooSconditions, NULL},
  {"function-signature-setter", &module_info_evalSast, NULL},
  {"%vsp", &module_info_gooSboot, NULL},
  {"rev!", &module_info_gooSmacros, NULL},
  {"elt-type", &module_info_gooScolsScol, NULL},
  {"fix-let-arguments", &module_info_evalSast, NULL},
  {">", &module_info_gooSmag, NULL},
  {"%gen-mets-setter", &module_info_gooSboot, NULL},
  {"<arity-error>", &module_info_gooSconditions, NULL},
  {"%class-children-setter", &module_info_gooSboot, NULL},
  {">>>", &module_info_gooSmath, NULL},
  {"fix-let-bindings", &module_info_evalSast, NULL},
  {"<tup>", &module_info_gooSboot, NULL},
  {"<ambiguous-method-error>", &module_info_gooSconditions, NULL},
  {"%clone", &module_info_gooSboot, NULL},
  {"repeat", &module_info_gooScolsSseq, NULL},
  {"@fold", &module_info_gooSboot, NULL},
  {"environment-module", &module_info_evalSast, NULL},
  {"ast-error", &module_info_evalSdependency, NULL},
  {"napp", &module_info_gooSmacros, NULL},
  {"add!", &module_info_gooScolsScolx, NULL},
  {"neg?", &module_info_gooSmath, NULL},
  {"monitor-handler", &module_info_evalSast, NULL},
  {"type-error-value", &module_info_gooSconditions, NULL},
  {"%met-code", &module_info_gooSboot, NULL},
  {"<unwind-protect>", &module_info_evalSast, NULL},
  {"@tany?", &module_info_gooSboot, NULL},
  {"range-error", &module_info_gooSboot, NULL},
  {"tab-growth-factor", &module_info_gooScolsStab, NULL},
  {"to-digit", &module_info_gooSmath, NULL},
  {"rep-fill!", &module_info_gooScolsSrep, NULL},
  {"tab-hash", &module_info_gooScolsStab, NULL},
  {"with-port", &module_info_gooSioSport, NULL},
  {"<ast-primitive>", &module_info_evalSast, NULL},
  {"read", &module_info_gooSconditions, NULL},
  {"%%check-call-types", &module_info_gooSboot, NULL},
  {"cos", &module_info_gooSmath, NULL},
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
  {"<monitor>", &module_info_evalSast, NULL},
  {"%next-methods", &module_info_gooSboot, NULL},
  {"fun-spec", &module_info_gooSfun, NULL},
  {"binding-info", &module_info_evalSast, NULL},
  {"unwind-protect-protected-thunk", &module_info_evalSast, NULL},
  {"%vm-fun-env-elt-setter", &module_info_gooSboot, NULL},
  {"set-module-environments", &module_info_evalSast, NULL},
  {"add", &module_info_gooScolsScol, NULL},
  {"to-str", &module_info_gooSmath, NULL},
  {"<global-box>", &module_info_evalSast, NULL},
  {"fun-cache", &module_info_gooSboot, NULL},
  {"%class-ancestors", &module_info_gooSboot, NULL},
  {"macro-expand", &module_info_gooSboot, NULL},
  {"*max-print-depth*", &module_info_gooSioSwrite, NULL},
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%stack-check-reg?", &module_info_gooSboot, NULL},
  {"<program>", &module_info_evalSast, NULL},
  {"function-frame-len", &module_info_evalSast, NULL},
  {"application-known?", &module_info_evalSast, NULL},
  {"%fun-reg", &module_info_gooSboot, NULL},
  {"fun-val", &module_info_gooSfun, NULL},
  {"<str-out-port>", &module_info_gooSioSport, NULL},
  {"elt-or", &module_info_gooScolsScol, NULL},
  {"%fun-val-check-type", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"%tnul", &module_info_gooSboot, NULL},
  {"<syntax-error>", &module_info_gooSconditions, NULL},
  {"prop-setter", &module_info_gooSboot, NULL},
  {"%gen-mets", &module_info_gooSboot, NULL},
  {"==", &module_info_gooSmacros, NULL},
  {"@lst", &module_info_gooSboot, NULL},
  {"sub", &module_info_gooScolsSseq, NULL},
  {"module-target-environment", &module_info_evalSast, NULL},
  {"num-to-str-base", &module_info_gooScolsSstr, NULL},
  {"bound?-reference", &module_info_evalSast, NULL},
  {"cosh", &module_info_gooSmath, NULL},
  {"@olen", &module_info_gooSboot, NULL},
  {"module-mangled-name-setter", &module_info_evalSast, NULL},
  {"list", &module_info_gooScolsSlst, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"unzip", &module_info_gooScolsSzip, NULL},
  {"%fu", &module_info_gooSboot, NULL},
  {"push!", &module_info_gooScolsSseqx, NULL},
  {"<lst>", &module_info_gooSboot, NULL},
  {"from", &module_info_gooScolsSrange, NULL},
  {"fab-sym", &module_info_gooSboot, NULL},
  {"%app-args", &module_info_gooSboot, NULL},
  {"object-class", &module_info_gooSclass, NULL},
  {"binding-mutable?", &module_info_evalSast, NULL},
  {"col-res", &module_info_gooScolsScol, NULL},
  {"%met-env-setter", &module_info_gooSboot, NULL},
  {"handler-info-message", &module_info_gooSfun, NULL},
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
  {"%class-gens", &module_info_gooSboot, NULL},
  {"cond", &module_info_gooSmacros, NULL},
  {"<call-error>", &module_info_gooSconditions, NULL},
  {"monitor-type", &module_info_evalSast, NULL},
  {"<as-error>", &module_info_gooSconditions, NULL},
  {"reference-binding", &module_info_evalSast, NULL},
  {"var-type", &module_info_gooSmacros, NULL},
  {"sort-by!", &module_info_gooScolsSseq, NULL},
  {"@empty?", &module_info_gooSboot, NULL},
  {"sig", &module_info_gooSconditions, NULL},
  {"*print-base*", &module_info_gooScolsSstr, NULL},
  {"prop-value-setter", &module_info_gooSclass, NULL},
  {"%gen-cache", &module_info_gooSboot, NULL},
  {"cat", &module_info_gooSmacros, NULL},
  {"%class-of", &module_info_gooSboot, NULL},
  {"%fb", &module_info_gooSboot, NULL},
  {"pushf", &module_info_gooSmacros, NULL},
  {"port-index", &module_info_gooSioSport, NULL},
  {"application-binding", &module_info_evalSast, NULL},
  {"empty", &module_info_gooScolsScol, NULL},
  {"module-syntax-environment", &module_info_evalSast, NULL},
  {"<seq!>", &module_info_gooSboot, NULL},
  {"below", &module_info_gooScolsSseq, NULL},
  {"prefix?", &module_info_gooScolsSseq, NULL},
  {"%i?", &module_info_gooSboot, NULL},
  {"%vfp", &module_info_gooSboot, NULL},
  {"do3", &module_info_gooScolsSseq, NULL},
  {"%i>>>", &module_info_gooSboot, NULL},
  {"<file-out-port>", &module_info_gooSioSport, NULL},
  {"let", &module_info_gooSboot, NULL},
  {"write", &module_info_gooSioSwrite, NULL},
  {"<immediate-constant>", &module_info_evalSast, NULL},
  {"do-static-global-bindings", &module_info_evalSast, NULL},
  {"function-index-setter", &module_info_evalSast, NULL},
  {"%classes-ready?", &module_info_gooSboot, NULL},
  {"@may-isa?", &module_info_gooSboot, NULL},
  {"%raw-call", &module_info_gooSboot, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"signature-arity", &module_info_evalSast, NULL},
  {"monitor-info", &module_info_evalSast, NULL},
  {"ds", &module_info_gooSboot, NULL},
  {"@int?", &module_info_gooSboot, NULL},
  {"range-error-collection", &module_info_gooSconditions, NULL},
  {"%cb", &module_info_gooSboot, NULL},
  {"tail-setter", &module_info_gooSboot, NULL},
  {"<locals>", &module_info_evalSast, NULL},
  {"%vm-box-val", &module_info_gooSboot, NULL},
  {"find-environment-module", &module_info_evalSast, NULL},
  {"sig-nary?-setter", &module_info_gooSboot, NULL},
  {"gets", &module_info_gooSioSport, NULL},
  {"%gen-cache-missable?", &module_info_gooSboot, NULL},
  {"fold+", &module_info_gooScolsScol, NULL},
  {"force-out", &module_info_gooSioSport, NULL},
  {"@opts-as-lst", &module_info_gooSboot, NULL},
  {"module-binding", &module_info_evalSast, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<simple-error>", &module_info_gooSconditions, NULL},
  {"<condition>", &module_info_gooSconditions, NULL},
  {"$default-handler-info", &module_info_gooSconditions, NULL},
  {"%fun-cache", &module_info_gooSboot, NULL},
  {"when", &module_info_gooSmacros, NULL},
  {"pop!", &module_info_gooScolsSseqx, NULL},
  {"sig-unification-vars-setter", &module_info_gooSboot, NULL},
  {"sup", &module_info_gooSmacros, NULL},
  {"port-line", &module_info_gooSioSport, NULL},
  {"bind-exit-light?", &module_info_evalSast, NULL},
  {"%gen-cache-singletons-setter", &module_info_gooSboot, NULL},
  {"@order-specs-class", &module_info_gooSfun, NULL},
  {"prop-value-at", &module_info_gooSfun, NULL},
  {"<vec>", &module_info_gooScolsSvec, NULL},
  {"len", &module_info_gooStypes, NULL},
  {"match-unquote", &module_info_gooSmacros, NULL},
  {"<module-binding>", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"rep-nul", &module_info_gooScolsSrep, NULL},
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
  {"%gen-code-setter", &module_info_gooSboot, NULL},
  {"sort!", &module_info_gooScolsSseqx, NULL},
  {"%im", &module_info_gooSboot, NULL},
  {"acos", &module_info_gooSmath, NULL},
  {"<compile-time>", &module_info_evalSast, NULL},
  {"zero?", &module_info_gooSmath, NULL},
  {"%type-class", &module_info_gooSboot, NULL},
  {"%i<<", &module_info_gooSboot, NULL},
  {"lift-place-subforms", &module_info_gooSmacros, NULL},
  {"tab-growth-threshold", &module_info_gooScolsStab, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"~==", &module_info_gooSmath, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"*boot-macro-module-names*", &module_info_gooSboot, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"function-free", &module_info_evalSast, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"prop-value-at-setter", &module_info_gooSfun, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<any>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"call-error-function", &module_info_gooSconditions, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"fin?", &module_info_gooScolsScol, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"binding-type", &module_info_evalSast, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"%cu", &module_info_gooSboot, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"@fun-mets", &module_info_gooSfun, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
  {"<free-environment>", &module_info_evalSast, NULL},
  {"%untag", &module_info_gooSboot, NULL},
  {"pop", &module_info_gooScolsSseq, NULL},
  {"always", &module_info_gooSfunctional, NULL},
  {"ct", &module_info_gooSboot, NULL},
  {"puts", &module_info_gooSioSport, NULL},
  {"sequentialize", &module_info_evalSast, NULL},
  {"str-to-num", &module_info_gooScolsSstr, NULL},
  {"function-registers", &module_info_evalSast, NULL},
  {"del-dups!", &module_info_gooScolsSseqx, NULL},
  {"signature-specs-setter", &module_info_evalSast, NULL},
  {"%c=", &module_info_gooSboot, NULL},
  {"%class-forward", &module_info_gooSboot, NULL},
  {"packing-in", &module_info_gooSpacker, NULL},
  {"@all?", &module_info_gooSboot, NULL},
  {"binding-index-setter", &module_info_evalSast, NULL},
  {"@subtype?", &module_info_gooSboot, NULL},
  {"prop-getter", &module_info_gooSboot, NULL},
  {"function-loop-setter", &module_info_evalSast, NULL},
  {"@subclass?", &module_info_gooSboot, NULL},
  {"function-bindings", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"<col.>", &module_info_gooSboot, NULL},
  {"install-initial-bindings", &module_info_evalSast, NULL},
  {"suffix?", &module_info_gooScolsSseq, NULL},
  {"<file-opening-error>", &module_info_gooSconditions, NULL},
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%i+", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"without-prop-unbound-errors", &module_info_gooSmacros, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"decf", &module_info_gooSmacros, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
  {"%i<<<", &module_info_gooSboot, NULL},
  {"keys", &module_info_gooScolsScol, NULL},
  {">>", &module_info_gooSmath, NULL},
  {"<col>", &module_info_gooSboot, NULL},
  {"or/set", &module_info_gooSmacros, NULL},
  {"%vfn-setter", &module_info_gooSboot, NULL},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, NULL},
  {"alpha?", &module_info_gooSmath, NULL},
  {"%class-prop-len", &module_info_gooSboot, NULL},
  {"set", &module_info_gooSboot, NULL},
  {"eof-object?", &module_info_gooSmath, NULL},
  {"<real-reference>", &module_info_evalSast, NULL},
  {"$direct-object-class", &module_info_gooSboot, NULL},
  {"%i-", &module_info_gooSboot, NULL},
  {"%sig-unification-vars", &module_info_gooSboot, NULL},
  {"@checked-next-methods", &module_info_gooSmacros, NULL},
  {"as", &module_info_gooStypes, NULL},
  {"<ast-macro-definition>", &module_info_evalSast, NULL},
  {"ceil/", &module_info_gooSmath, NULL},
  {"<str-in-port>", &module_info_gooSioSport, NULL},
  {"use/library", &module_info_gooSboot, NULL},
  {"incongruent-method-error", &module_info_gooSfun, NULL},
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
  {"%dyn-var-val-setter", &module_info_gooSboot, NULL},
  {"<property-unbound-error>", &module_info_gooSconditions, NULL},
  {"lower?", &module_info_gooSmath, NULL},
  {"to-lower", &module_info_gooSmath, NULL},
  {"max", &module_info_gooSmag, NULL},
  {"renew", &module_info_gooSmacros, NULL},
  {"%c<", &module_info_gooSboot, NULL},
  {"low-elt", &module_info_gooScolsScol, NULL},
  {"signature-names-setter", &module_info_evalSast, NULL},
  {"probe-module", &module_info_evalSast, NULL},
  {"bind-exit-main-fun", &module_info_evalSast, NULL},
  {"dss", &module_info_gooSboot, NULL},
  {"low-elt-setter", &module_info_gooScolsScolx, NULL},
  {"@rev!", &module_info_gooSboot, NULL},
  {"%class-mets", &module_info_gooSboot, NULL},
  {"fab-handler", &module_info_gooSconditions, NULL},
  {"flo-bits", &module_info_gooSmath, NULL},
  {"<gen-cache>", &module_info_gooSboot, NULL},
  {"module-loader-module-type", &module_info_evalSast, NULL},
  {"case-by", &module_info_gooSmacros, NULL},
  {"push", &module_info_gooScolsSseq, NULL},
  {"t<", &module_info_gooStypes, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"use", &module_info_gooSboot, NULL},
  {"del-vals!", &module_info_gooScolsSseqx, NULL},
  {"fun-sig-setter", &module_info_gooSboot, NULL},
  {"unbound-variable-error-variable", &module_info_gooSconditions, NULL},
  {"alternative-alternant", &module_info_evalSast, NULL},
  {"sin", &module_info_gooSmath, NULL},
  {"prop-value", &module_info_gooSclass, NULL},
  {"locals-bindings", &module_info_evalSast, NULL},
  {"@class<", &module_info_gooSfun, NULL},
  {"locals-functions", &module_info_evalSast, NULL},
  {"$max-int", &module_info_gooSboot, NULL},
  {"locals-body", &module_info_evalSast, NULL},
  {"%dyn-var-val", &module_info_gooSboot, NULL},
  {"@del-dups", &module_info_gooSboot, NULL},
  {"match-empty-list", &module_info_gooSmacros, NULL},
  {"%rep", &module_info_gooSboot, NULL},
  {"<loc>", &module_info_gooSboot, NULL},
  {"%su", &module_info_gooSboot, NULL},
  {"sort-by", &module_info_gooScolsSseq, NULL},
  {"%%macro", &module_info_gooSboot, NULL},
  {"<module-loader>", &module_info_evalSast, NULL},
  {"lst", &module_info_gooSboot, NULL},
  {"%class-prop-len-setter", &module_info_gooSboot, NULL},
  {"atan2", &module_info_gooSmath, NULL},
  {"$goo-boot-module-name", &module_info_evalSast, NULL},
  {"pos?", &module_info_gooSmath, NULL},
  {"~", &module_info_gooSmath, NULL},
  {"<cycle>", &module_info_gooScolsScycle, NULL},
  {"fab-g2c-module", &module_info_evalSast, NULL},
  {"isa?", &module_info_gooSboot, NULL},
  {"app-args", &module_info_gooSboot, NULL},
  {"module-exports", &module_info_evalSast, NULL},
  {"signature-value", &module_info_evalSast, NULL},
  {"class-name", &module_info_gooSboot, NULL},
  {"pub", &module_info_gooSmacros, NULL},
  {"%i<", &module_info_gooSboot, NULL},
  {"port-to-str", &module_info_gooSioSport, NULL},
  {"loop-continue-setter", &module_info_evalSast, NULL},
  {"-", &module_info_gooSmath, NULL},
  {"<fab-list>", &module_info_evalSast, NULL},
  {"all?", &module_info_gooScolsScol, NULL},
  {"<zip>", &module_info_gooScolsSzip, NULL},
  {"<io-error>", &module_info_gooSconditions, NULL},
  {"<passive-program>", &module_info_evalSast, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"describe-condition", &module_info_gooSconditions, NULL},
  {"<flo>", &module_info_gooSboot, NULL},
  {"%set-regs", &module_info_gooSboot, NULL},
  {"fun-mets", &module_info_gooSboot, NULL},
  {"str", &module_info_gooScolsSstr, NULL},
  {"seq", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
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
  {"%i>>", &module_info_gooSboot, NULL},
  {"%sig-arity", &module_info_gooSboot, NULL},
  {"pos", &module_info_gooScolsSseq, NULL},
  {"function-free-setter", &module_info_evalSast, NULL},
  {"<property-error>", &module_info_gooSconditions, NULL},
  {"%vm-box-fab", &module_info_gooSboot, NULL},
  {"sinh", &module_info_gooSmath, NULL},
  {"function-binding", &module_info_evalSast, NULL},
  {"ast-walk", &module_info_evalSast, NULL},
  {"%sig-names", &module_info_gooSboot, NULL},
  {"loop-body-setter", &module_info_evalSast, NULL},
  {"%vfn", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%vpc-setter", &module_info_gooSboot, NULL},
  {"say", &module_info_gooSioSwrite, NULL},
  {"app-filename", &module_info_gooSboot, NULL},
  {"application-known?-setter", &module_info_evalSast, NULL},
  {"<fixnum>", &module_info_gooSboot, NULL},
  {"put", &module_info_gooSioSport, NULL},
  {"sort", &module_info_gooScolsSseq, NULL},
  {"finds", &module_info_gooScolsSseq, NULL},
  {"if", &module_info_gooSboot, NULL},
  {"ready?", &module_info_gooSioSport, NULL},
  {"%vsp-setter", &module_info_gooSboot, NULL},
  {"%tail", &module_info_gooSboot, NULL},
  {"pack-in", &module_info_gooSpacker, NULL},
  {"%prop-unbound-error", &module_info_gooSboot, NULL},
  {"binding-mangled-name", &module_info_evalSast, NULL},
  {"fill!", &module_info_gooScolsScolx, NULL},
  {"<static-module-binding-reference>", &module_info_evalSast, NULL},
  {"isqrt", &module_info_gooSmath, NULL},
  {"1+", &module_info_gooSmath, NULL},
  {"@type-equal?", &module_info_gooSboot, NULL},
  {"prop-owner", &module_info_gooSboot, NULL},
  {"@<", &module_info_gooSboot, NULL},
  {"digit?", &module_info_gooSmath, NULL},
  {"cat2", &module_info_gooScolsSseq, NULL},
  {"<predefined-application>", &module_info_evalSast, NULL},
  {"@do", &module_info_gooSboot, NULL},
  {"<regular-application>", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"@class-isa?", &module_info_gooSboot, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"order-specs", &module_info_gooSboot, NULL},
  {"<prop>", &module_info_gooSboot, NULL},
  {"%i^", &module_info_gooSboot, NULL},
  {"fab-class", &module_info_gooSclass, NULL},
  {"port-contents", &module_info_gooSioSport, NULL},
  {"key-type", &module_info_gooScolsScol, NULL},
  {"<int>", &module_info_gooSboot, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"%prop", &module_info_gooSclass, NULL},
  {"%prop-type", &module_info_gooSboot, NULL},
  {"range-by", &module_info_gooScolsSrange, NULL},
  {"unless", &module_info_gooSmacros, NULL},
  {"%prop-elt-setter", &module_info_gooSboot, NULL},
  {"fun-nary?", &module_info_gooSfun, NULL},
  {"col-res-type", &module_info_gooScolsScol, NULL},
  {"%vm-fun-env-fab", &module_info_gooSboot, NULL},
  {"%sb", &module_info_gooSboot, NULL},
  {"constant-value", &module_info_evalSast, NULL},
  {"constant-index", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"<in-port>", &module_info_gooSioSport, NULL},
  {"<raw-constant>", &module_info_evalSast, NULL},
  {"%object-class", &module_info_gooSboot, NULL},
  {"<sequential>", &module_info_evalSast, NULL},
  {"<property-type-error>", &module_info_gooSconditions, NULL},
  {"items", &module_info_gooScolsScol, NULL},
  {"binding-global-box", &module_info_evalSast, NULL},
  {"any?", &module_info_gooStypes, NULL},
  {"free-environment", &module_info_evalSast, NULL},
  {"<num>", &module_info_gooSboot, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
  {"del-dups", &module_info_gooScolsSseq, NULL},
  {"<computed-program>", &module_info_evalSast, NULL},
  {"<definition>", &module_info_evalSast, NULL},
  {"head-setter", &module_info_gooSboot, NULL},
  {"round", &module_info_gooSmath, NULL},
  {"loop-bindings-setter", &module_info_evalSast, NULL},
  {"<runtime-assignment>", &module_info_evalSast, NULL},
  {"type-error-type", &module_info_gooSconditions, NULL},
  {"not", &module_info_gooSboot, NULL},
  {"%rlen", &module_info_gooSboot, NULL},
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"div", &module_info_gooSmath, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
  {"binding-global-box-setter", &module_info_evalSast, NULL},
  {"return-type-error", &module_info_gooSboot, NULL},
  {"*max-print-length*", &module_info_gooSioSwrite, NULL},
  {"signature-specs", &module_info_evalSast, NULL},
  {"objectify-signature", &module_info_evalSast, NULL},
  {"alternative-condition", &module_info_evalSast, NULL},
  {"binding-dotted?", &module_info_evalSast, NULL},
  {"sig-val-setter", &module_info_gooSboot, NULL},
  {"process-closed-application", &module_info_evalSast, NULL},
  {"<dynamic-reference>", &module_info_evalSast, NULL},
  {"binding-index", &module_info_evalSast, NULL},
  {"binding-closed-over?-setter", &module_info_evalSast, NULL},
  {"function-loop", &module_info_evalSast, NULL},
  {"esc", &module_info_gooSboot, NULL},
  {"@mem?", &module_info_gooSboot, NULL},
  {"elt-default", &module_info_gooScolsScol, NULL},
  {"module-name-to-relpath", &module_info_evalSast, NULL},
  {"and", &module_info_gooSmacros, NULL},
  {"function-signature", &module_info_evalSast, NULL},
  {"environment-bindings", &module_info_evalSast, NULL},
  {"$min-int", &module_info_gooSboot, NULL},
  {"len/fill-setter", &module_info_gooScolsScolx, NULL},
  {"dp", &module_info_gooSboot, NULL},
  {"%object-of", &module_info_gooSboot, NULL},
  {"%class-children", &module_info_gooSboot, NULL},
  {"@singleton-isa?", &module_info_gooSboot, NULL},
  {"%patch-early-generics", &module_info_gooSboot, NULL},
  {"%sp-elt", &module_info_gooSboot, NULL},
  {"function-body-setter", &module_info_evalSast, NULL},
  {"%i*", &module_info_gooSboot, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"rep-elt", &module_info_gooScolsSrep, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"rep-fab", &module_info_gooScolsSrep, NULL},
  {"%snul", &module_info_gooSboot, NULL},
  {"<src-loc>", &module_info_gooSboot, NULL},
  {"until", &module_info_gooSmacros, NULL},
  {"upper?", &module_info_gooSmath, NULL},
  {"@pick", &module_info_gooSboot, NULL},
  {"%break", &module_info_gooSboot, NULL},
  {">=", &module_info_gooSmag, NULL},
  {"module-uses-c-libraries", &module_info_evalSast, NULL},
  {"fin", &module_info_gooSboot, NULL},
  {"property-error-owner", &module_info_gooSconditions, NULL},
  {"%singleton", &module_info_gooSboot, NULL},
  {"app", &module_info_gooSmacros, NULL},
  {"dp!", &module_info_gooSboot, NULL},
  {"sig-val", &module_info_gooSboot, NULL},
  {"%with-monitor", &module_info_gooSboot, NULL},
  {"%@subclass?", &module_info_gooSboot, NULL},
  {"%unlink-stack", &module_info_gooSboot, NULL},
  {"nxt", &module_info_gooScolsScol, NULL},
  {"@add", &module_info_gooSboot, NULL},
  {"dl", &module_info_gooSboot, NULL},
  {"packer-res", &module_info_gooSpacker, NULL},
  {"ast-define-binding", &module_info_evalSast, NULL},
  {"%vfp-setter", &module_info_gooSboot, NULL},
  {"@adr?", &module_info_gooSboot, NULL},
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
  {"fab-setter-name", &module_info_gooSmacros, NULL},
  {"fill", &module_info_gooScolsScol, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
  {"rcurry", &module_info_gooSfunctional, NULL},
  {"curry", &module_info_gooSfunctional, NULL},
  {"<chr>", &module_info_gooSboot, NULL},
  {"signature-bindings", &module_info_evalSast, NULL},
  {"program-register-setter", &module_info_evalSast, NULL},
  {"clone", &module_info_gooSclass, NULL},
  {"df", &module_info_gooSboot, NULL},
  {"signature-names", &module_info_evalSast, NULL},
  {"*macros-ok?*", &module_info_gooSboot, NULL},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, NULL},
  {"<binding>", &module_info_evalSast, NULL},
  {"in", &module_info_gooSioSport, NULL},
  {"<subclass>", &module_info_gooSboot, NULL},
  {"%relt", &module_info_gooSboot, NULL},
  {"application-loop", &module_info_evalSast, NULL},
  {"sub*-setter", &module_info_gooScolsSseqx, NULL},
  {"objectify-with-subtransaction", &module_info_evalSast, NULL},
  {"function-source-setter", &module_info_evalSast, NULL},
  {"mem?", &module_info_gooScolsScol, NULL},
  {"signature-value-setter", &module_info_evalSast, NULL},
  {"%check-call-types", &module_info_gooSboot, NULL},
  {"<compiler-error>", &module_info_gooSconditions, NULL},
  {"%opts-tup", &module_info_gooSboot, NULL},
  {"product-elts", &module_info_gooSboot, NULL},
  {"loc-val", &module_info_gooSloc, NULL},
  {"<narity-error>", &module_info_gooSconditions, NULL},
  {"write-to-string", &module_info_gooSioSwrite, NULL},
  {"<loop>", &module_info_evalSast, NULL},
  {"<mag>", &module_info_gooSboot, NULL},
  {"rev", &module_info_gooScolsSseq, NULL},
  {"export", &module_info_gooSboot, NULL},
  {"%class-props-setter", &module_info_gooSboot, NULL},
  {"close", &module_info_gooSioSport, NULL},
  {"function-temporaries", &module_info_evalSast, NULL},
  {"%prop-init", &module_info_gooSboot, NULL},
  {"last", &module_info_gooSmacros, NULL},
  {"function-temporaries-setter", &module_info_evalSast, NULL},
  {"pow", &module_info_gooSmath, NULL},
  {"d.", &module_info_gooSboot, NULL},
  {"map", &module_info_gooSmacros, NULL},
  {"@oelt", &module_info_gooSboot, NULL},
  {"~=", &module_info_gooSmath, NULL},
  {"%class-props", &module_info_gooSboot, NULL},
  {"/", &module_info_gooSmath, NULL},
  {"*restarts-ok?*", &module_info_gooSboot, NULL},
  {"<programs>", &module_info_evalSast, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"reject", &module_info_gooScolsSseq, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
  {"@@==", &module_info_gooSboot, NULL},
  {"now-key", &module_info_gooScolsScol, NULL},
  {"%gen-code", &module_info_gooSboot, NULL},
  {"gensym", &module_info_gooSmacros, NULL},
  {"loop-bindings", &module_info_evalSast, NULL},
  {"<singleton>", &module_info_gooSboot, NULL},
  {"%fab-dyn-var", &module_info_gooSboot, NULL},
  {"module-uses-c-includes", &module_info_evalSast, NULL},
  {"even?", &module_info_gooSmath, NULL},
  {"<each>", &module_info_gooScolsSstep, NULL},
  {"%prop-dat-at", &module_info_gooSboot, NULL},
  {"no-next-methods-error", &module_info_gooSboot, NULL},
  {"assignment-form-setter", &module_info_evalSast, NULL},
  {"<=", &module_info_gooSmag, NULL},
  {"handler-info-arguments", &module_info_gooSfun, NULL},
  {"len-setter", &module_info_gooScolsScolx, NULL},
  {"cycle", &module_info_gooScolsScycle, NULL},
  {"dg", &module_info_gooSboot, NULL},
  {"packed", &module_info_gooSpacker, NULL},
  {"rep-elt-setter", &module_info_gooScolsSrep, NULL},
  {"<alternative>", &module_info_evalSast, NULL},
  {"fun-specs", &module_info_gooSfun, NULL},
  {"condition-message", &module_info_gooSconditions, NULL},
  {"<ast-function>", &module_info_evalSast, NULL},
  {"req-sig-specs", &module_info_evalSast, NULL},
  {"syntax-error", &module_info_gooSboot, NULL},
  {"%vm-with-cleanup", &module_info_gooSboot, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"msg-to-str", &module_info_gooSconditions, NULL},
  {"packer-add", &module_info_gooSpacker, NULL},
  {"read-from-string", &module_info_gooSioSread, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"use/include", &module_info_gooSboot, NULL},
  {"need-implementation", &module_info_gooSmacros, NULL},
  {"$e", &module_info_gooSmath, NULL},
  {"@map", &module_info_gooSboot, NULL},
  {"%lu", &module_info_gooSboot, NULL},
  {"reference-frame-offset", &module_info_evalSast, NULL},
  {"ceil", &module_info_gooSmath, NULL},
  {"<range>", &module_info_gooScolsSrange, NULL},
  {"rotf", &module_info_gooSmacros, NULL},
  {"log", &module_info_gooSmath, NULL},
  {"ast-walk!", &module_info_evalSast, NULL},
  {"<local-reference>", &module_info_evalSast, NULL},
  {"loop-body", &module_info_evalSast, NULL},
  {"<stack-overflow>", &module_info_gooSconditions, NULL},
  {"signature-nary?-setter", &module_info_evalSast, NULL},
  {"op", &module_info_gooSlate_macros, NULL},
  {"into", &module_info_gooScolsScol, NULL},
  {"fabs", &module_info_gooSmath, NULL},
  {"%type-object", &module_info_gooSboot, NULL},
  {"%gen-refs", &module_info_gooSboot, NULL},
  {"<simple-handler-info>", &module_info_gooSfun, NULL},
  {"runtime-environment", &module_info_evalSast, NULL},
  {"fun-src-setter", &module_info_gooSboot, NULL},
  {"<ast-signature>", &module_info_evalSast, NULL},
  {"may-isa?", &module_info_gooSboot, NULL},
  {"3rd", &module_info_gooScolsSseq, NULL},
  {"or", &module_info_gooSmacros, NULL},
  {"signature-bindings-setter", &module_info_evalSast, NULL},
  {"fun-name-setter", &module_info_gooSboot, NULL},
  {"dc", &module_info_gooSboot, NULL},
  {"abs", &module_info_gooSmath, NULL},
  {"mif", &module_info_gooSboot, NULL},
  {"do-module-loader-modules", &module_info_evalSast, NULL},
  {"argument-type-error", &module_info_gooSboot, NULL},
  {"%class", &module_info_gooSboot, NULL},
  {"<log>", &module_info_gooSboot, NULL},
  {"module-uses-c-files", &module_info_evalSast, NULL},
  {"t+", &module_info_gooStypes, NULL},
  {"%app-filename", &module_info_gooSboot, NULL},
  {"fix-let-body-setter", &module_info_evalSast, NULL},
  {"<list>", &module_info_gooScolsSlst, NULL},
  {"do", &module_info_gooSmacros, NULL},
  {"packing-with", &module_info_gooSpacker, NULL},
  {"<ast-primitive-definition>", &module_info_evalSast, NULL},
  {"ast-contains-fun?", &module_info_evalSast, NULL},
  {"out", &module_info_gooSioSport, NULL},
  {"assert-error", &module_info_gooSboot, NULL},
  {"binding-dotted?-setter", &module_info_evalSast, NULL},
  {"newline", &module_info_gooSioSport, NULL},
  {"alternative-consequent", &module_info_evalSast, NULL},
  {"$pi", &module_info_gooSmath, NULL},
  {"gen-src-setter", &module_info_gooSboot, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%selt", &module_info_gooSboot, NULL},
  {"fab-gen", &module_info_gooSfun, NULL},
  {"zap!", &module_info_gooScolsScolx, NULL},
  {"map-keyed", &module_info_gooScolsScol, NULL},
  {"packing", &module_info_gooSpacker, NULL},
  {"%invoke-debugger", &module_info_gooSboot, NULL},
  {"now", &module_info_gooScolsScol, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"each", &module_info_gooScolsSstep, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
  {"@add-new", &module_info_gooSboot, NULL},
  {"%vm-fun-env-elt", &module_info_gooSboot, NULL},
  {"compose", &module_info_gooSfunctional, NULL},
  {"error", &module_info_gooSboot, NULL},
  {"fun-src", &module_info_gooSboot, NULL},
  {"<static-global-environment>", &module_info_evalSast, NULL},
  {"call-error-arguments", &module_info_gooSconditions, NULL},
  {"tan", &module_info_gooSmath, NULL},
  {"fun-name", &module_info_gooSboot, NULL},
  {"%@class-of", &module_info_gooSboot, NULL},
  {"%str", &module_info_gooSboot, NULL},
  {"gen-add-met", &module_info_gooSfun, NULL},
  {"assert", &module_info_gooSmacros, NULL},
  {"pick", &module_info_gooScolsSseq, NULL},
  {"%iv", &module_info_gooSboot, NULL},
  {"assignment-binding", &module_info_evalSast, NULL},
  {"@cat2", &module_info_gooSboot, NULL},
  {"property-type-error", &module_info_gooSboot, NULL},
  {"all2?", &module_info_gooStypes, NULL},
  {"program-type", &module_info_evalSast, NULL},
  {"2nd", &module_info_gooSmacros, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"prop-init", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
  {"default-handler", &module_info_gooSconditions, NULL},
  {"bound?-default", &module_info_evalSast, NULL},
  {"first-then", &module_info_gooScolsSstep, NULL},
  {"<assignment>", &module_info_evalSast, NULL},
  {"gen-src", &module_info_gooSboot, NULL},
  {"sub-setter", &module_info_gooScolsSseqx, NULL},
  {"function-debug-name", &module_info_evalSast, NULL},
  {"%met-sig", &module_info_gooSboot, NULL},
  {"fix-let-arguments-setter", &module_info_evalSast, NULL},
  {"<keyboard-interrupt>", &module_info_gooSconditions, NULL},
  {"%telt", &module_info_gooSboot, NULL},
  {"@new", &module_info_gooSboot, NULL},
  {"zap", &module_info_gooScolsScol, NULL},
  {"trunc/", &module_info_gooSmath, NULL},
  {"<<", &module_info_gooSmath, NULL},
  {"fix-let-bindings-setter", &module_info_evalSast, NULL},
  {"subtype?", &module_info_gooSboot, NULL},
  {"binding-closed-over?", &module_info_evalSast, NULL},
  {"find-binding", &module_info_evalSast, NULL},
  {"<global-reference>", &module_info_evalSast, NULL},
  {"%eq?", &module_info_gooSboot, NULL},
  {"objectify-quotation", &module_info_evalSast, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"try", &module_info_gooSboot, NULL},
  {"<opts>", &module_info_gooSboot, NULL},
  {"binding-module", &module_info_evalSast, NULL},
  {"cpl-error", &module_info_gooSboot, NULL},
  {"function-body", &module_info_evalSast, NULL},
  {"%stack-check-reg?-setter", &module_info_gooSboot, NULL},
  {"macro-error-name", &module_info_gooSconditions, NULL},
  {"union-elts", &module_info_gooSboot, NULL},
  {"load-module", &module_info_evalSast, NULL},
  {"<runtime-reference>", &module_info_evalSast, NULL},
  {"tanh", &module_info_gooSmath, NULL},
  {"remove-modules-by-name!", &module_info_evalSast, NULL},
  {"%lb", &module_info_gooSboot, NULL},
  {"<low-let>", &module_info_evalSast, NULL},
  {"module-mangled-name", &module_info_evalSast, NULL},
  {"function-ref-count", &module_info_evalSast, NULL},
  {"%class-row-setter", &module_info_gooSboot, NULL},
  {"%eof-object?", &module_info_gooSboot, NULL},
  {"@+", &module_info_gooSboot, NULL},
  {"enum", &module_info_gooScolsScol, NULL},
  {"function-value", &module_info_evalSast, NULL},
  {"cat-sym", &module_info_gooSmacros, NULL},
  {"col", &module_info_gooScolsScol, NULL},
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
  {"1st", &module_info_gooSmacros, NULL},
  {"binding-name", &module_info_evalSast, NULL},
  {"t=", &module_info_gooStypes, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"del!", &module_info_gooScolsScolx, NULL},
  {"binding-mangled-name-setter", &module_info_evalSast, NULL},
  {"condition-arguments", &module_info_gooSconditions, NULL},
  {"do-keyed", &module_info_gooScolsScol, NULL},
  {"object-props", &module_info_gooSboot, NULL},
  {"init-environment-for-eval", &module_info_evalSast, NULL},
  {"%gen-cache-arg-pos", &module_info_gooSboot, NULL},
  {"pe-msg", &module_info_gooSioSwrite, NULL},
  {"program-register", &module_info_evalSast, NULL},
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"%sig-nary?", &module_info_gooSboot, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%pair", &module_info_gooSboot, NULL},
  {"<global-assignment>", &module_info_evalSast, NULL},
  {"%gen-src", &module_info_gooSboot, NULL},
  {"%tlen", &module_info_gooSboot, NULL},
  {"%telt-setter", &module_info_gooSboot, NULL},
  {"%gen-cache-classes", &module_info_gooSboot, NULL},
  {"sig-names-setter", &module_info_gooSboot, NULL},
  {"@not", &module_info_gooSboot, NULL},
  {"<property-not-found-error>", &module_info_gooSconditions, NULL},
  {"elt", &module_info_gooSmacros, NULL},
  {"%gen-cache-singletons", &module_info_gooSboot, NULL},
  {"dm", &module_info_gooSboot, NULL},
  {"floor", &module_info_gooSmath, NULL},
  {"sig-names", &module_info_gooSboot, NULL},
  {"sig-arity-setter", &module_info_gooSboot, NULL},
  {"fun-names", &module_info_gooSfun, NULL},
  {"ambiguous-method-error", &module_info_gooSboot, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"%prop-getter", &module_info_gooSboot, NULL},
  {"%class-id", &module_info_gooSboot, NULL},
  {"module-name", &module_info_evalSast, NULL},
  {"neg", &module_info_gooSmath, NULL},
  {"while", &module_info_gooSmacros, NULL},
  {"function-source", &module_info_evalSast, NULL},
  {"handler-matches?", &module_info_gooSconditions, NULL},
  {"<step>", &module_info_gooScolsSstep, NULL},
  {"del", &module_info_gooScolsScol, NULL},
  {"incf", &module_info_gooSmacros, NULL},
  {"%%%macro", &module_info_evalSast, NULL},
  {"%vm-with-exit", &module_info_gooSboot, NULL},
  {"t?", &module_info_gooStypes, NULL},
  {"%stack-reg", &module_info_gooSboot, NULL},
  {"any2?", &module_info_gooScolsSseq, NULL},
  {"%union-elts", &module_info_gooSboot, NULL},
  {"%src-loc", &module_info_gooSboot, NULL},
  {"rem", &module_info_gooSmath, NULL},
  {"binding-value-setter", &module_info_evalSast, NULL},
  {"%class-gens-setter", &module_info_gooSboot, NULL},
  {"%vnm", &module_info_gooSboot, NULL},
  {"new", &module_info_gooSboot, NULL},
  {"*", &module_info_gooSmath, NULL},
  {"%slen", &module_info_gooSboot, NULL},
  {"bound?", &module_info_gooSboot, NULL},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"%dlvar-mod", PVAR, NULL},
  {"env-local-value", CVAR, &YevalSast_evalYenv_local_value},
  {"$nul-loc-env", CVAR, &YevalSast_evalYDnul_loc_env},
  {"env-frame!", CVAR, &YevalSast_evalYenv_frameX},
  {"env-global-binding-bound?", CVAR, &YevalSast_evalYenv_global_binding_boundQ},
  {"%dlvar", PVAR, NULL},
  {"%dlvar-binding", PVAR, NULL},
  {"env-binding-value", CVAR, &YevalSast_evalYenv_binding_value},
  {"export-goo-method", CVAR, &YevalSast_evalYexport_goo_method},
  {"ifun", PVAR, NULL},
  {"env-local-reference-value-setter", CVAR, &YevalSast_evalYenv_local_reference_value_setter},
  {"%dlvar-setter", PVAR, NULL},
  {"---main-0---", PVAR, NULL},
  {"env-dynamic-value-setter", CVAR, &YevalSast_evalYenv_dynamic_value_setter},
  {"%binding-value-or-of", PVAR, NULL},
  {"ast-eval-specs", CVAR, &YevalSast_evalYast_eval_specs},
  {"%dlvar-nam", PVAR, NULL},
  {"env-function", CVAR, &YevalSast_evalYenv_function},
  {"env-define-binding!", CVAR, &YevalSast_evalYenv_define_bindingX},
  {"ast-eval-bound?", CVAR, &YevalSast_evalYast_eval_boundQ},
  {"%define-binding", PVAR, NULL},
  {"as-fun-name", CVAR, &YevalSast_evalYas_fun_name},
  {"env-global-binding-value-or", CVAR, &YevalSast_evalYenv_global_binding_value_or},
  {"env-names", CVAR, &YevalSast_evalYenv_names},
  {"env-global-binding-value-setter", CVAR, &YevalSast_evalYenv_global_binding_value_setter},
  {"env-local-reference-value", CVAR, &YevalSast_evalYenv_local_reference_value},
  {"%lookup-binding", PVAR, NULL},
  {"%binding-value-setter", PVAR, NULL},
  {"<loc-env>", CVAR, &YevalSast_evalYLloc_envG},
  {"arrange-arguments", CVAR, &YevalSast_evalYarrange_arguments},
  {"ast-eval", CVAR, &YevalSast_evalYast_eval},
  {"env-parent", CVAR, &YevalSast_evalYenv_parent},
  {"%binding-value", PVAR, NULL},
  {"%binding-value-of", PVAR, NULL},
  {"env-values", CVAR, &YevalSast_evalYenv_values},
  {"env-runtime-value", CVAR, &YevalSast_evalYenv_runtime_value},
  {"env-runtime-value-setter", CVAR, &YevalSast_evalYenv_runtime_value_setter},
  {"---main-1---", PVAR, NULL},
  {"env-global-binding-value", CVAR, &YevalSast_evalYenv_global_binding_value},
  {"env-binding-value-setter", CVAR, &YevalSast_evalYenv_binding_value_setter},
  {"%binding-value-of-setter", PVAR, NULL},
  {"%ensure-binding", PVAR, NULL},
  {"%binding-value-or", PVAR, NULL},
  {"env-dynamic-value", CVAR, &YevalSast_evalYenv_dynamic_value},
  {"env-local-value-setter", CVAR, &YevalSast_evalYenv_local_value_setter},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"%binding-value-of-setter", NULL},
  {"%binding-value-or-of", NULL},
  {"ast-evaluate", NULL},
  {"%binding-value-setter", NULL},
  {"%binding-value", NULL},
  {"%binding-value-of", NULL},
  {"%binding-value-or", NULL},
  {"init-environment-for-eval", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_eval;
MODULE_INFO module_info_evalSast_eval = {
  "eval/ast-eval",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_gooSboot (void);
extern void load_module_gooSfun (void);
extern void load_module_gooSmacros (void);
extern void load_module_gooSloc (void);
extern void load_module_goo (void);
extern void load_module_gooScolsSrep (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_eval (void);

void load_module_evalSast_eval (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSfun();
  load_module_gooSmacros();
  load_module_gooSloc();
  load_module_goo();
  load_module_gooScolsSrep();
  load_module_evalSast();

  (P)YevalSast_evalY___main_0___();
  (P)YevalSast_evalY___main_1___();

}

/* END OF GENERATED CODE. */
