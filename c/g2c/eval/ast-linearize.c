/* GOO 2 C $REVISION: 0.120 $ 
  */

#include "grt.h"

static PSTR _mod = PNUL;

static P sloc (int line) {
  if (_mod == PNUL) _mod = YPPsym((P)"eval/ast-linearize");
  return YPsrc_loc(YPib((P)line), _mod);
}

/* MODULE ENVIRONMENT: eval/ast-linearize */

EXT(YgooSclassYadd_prop,"goo/class","add-prop");
EXT(YLclassG,"goo/boot","<class>");
EXT(YgooSpackerYpacker,"goo/packer","packer");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YevalSastYLmodule_binding_referenceG,"eval/ast","<module-binding-reference>");
EXT(Yrange_error,"goo/boot","range-error");
EXT(Ysym_name,"goo/boot","sym-name");
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
EXT(YevalSastYLfunctionsG,"eval/ast","<functions>");
EXT(Yfun_refs,"goo/boot","fun-refs");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(Ysrc_loc_file,"goo/boot","src-loc-file");
EXT(Ytype_error,"goo/boot","type-error");
EXT(YPdispatch,"goo/boot","%dispatch");
DEF(YevalSast_linearizeYreference_offset,"eval/ast-linearize","reference-offset");
EXT(YevalSastYsignature_arity_setter,"eval/ast","signature-arity-setter");
DEF(YevalSast_linearizeYprogram_bindings_setter,"eval/ast-linearize","program-bindings-setter");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(YevalSastYglobal_box_value,"eval/ast","global-box-value");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooSconditionsYLerrorG,"goo/conditions","<error>");
EXT(YgooSconditionsYLhandlerG,"goo/conditions","<handler>");
DEF(YevalSast_linearizeYassoc_key,"eval/ast-linearize","assoc-key");
EXT(YevalSastYapplication_arguments,"eval/ast","application-arguments");
DEF(YevalSast_linearizeYcollect_temporariesX,"eval/ast-linearize","collect-temporaries!");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSconditionsYLtype_errorG,"goo/conditions","<type-error>");
EXT(YOtall2Q,"goo/boot","@tall2?");
EXT(YgooScolsSseqYsplit,"goo/cols/seq","split");
EXT(YevalSastYbinding_locative,"eval/ast","binding-locative");
EXT(YevalSastYLmagic_referenceG,"eval/ast","<magic-reference>");
DEF(YevalSast_linearizeYclosure_creation_free,"eval/ast-linearize","closure-creation-free");
EXT(YgooScolsScolxYeltX,"goo/cols/colx","elt!");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(Yarithmetic_error,"goo/boot","arithmetic-error");
DEF(YevalSast_linearizeYextractX,"eval/ast-linearize","extract!");
EXT(YevalSastYassignment_reference,"eval/ast","assignment-reference");
DEF(YevalSast_linearizeYprogram_definitions,"eval/ast-linearize","program-definitions");
EXT(YevalSastYapplication_function,"eval/ast","application-function");
EXT(YevalSastYmodule_mangled_string_name,"eval/ast","module-mangled-string-name");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(YevalSastYlocals_bindings_setter,"eval/ast","locals-bindings-setter");
EXT(YevalSastYapplication_tailQ,"eval/ast","application-tail?");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(YOelt,"goo/boot","@elt");
EXT(YevalSastYfix_let_body,"eval/ast","fix-let-body");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YevalSastYfunction_naryQ,"eval/ast","function-nary?");
EXT(Ytype_class,"goo/boot","type-class");
EXT(YgooStypesYtL,"goo/types","t<");
DEF(YevalSast_linearizeYas_top_level_forms,"eval/ast-linearize","as-top-level-forms");
EXT(YevalSastYprogram_type_setter,"eval/ast","program-type-setter");
EXT(Yupdate_instance_for_changed_class,"goo/boot","update-instance-for-changed-class");
EXT(YgooSioSportYget,"goo/io/port","get");
EXT(Yinternal_error,"goo/boot","internal-error");
EXT(YgooSconditionsYhandler_function,"goo/conditions","handler-function");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(YevalSastYlocals_functions_setter,"eval/ast","locals-functions-setter");
DEF(YevalSast_linearizeYform_definitions_setter,"eval/ast-linearize","form-definitions-setter");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(YevalSastYlocals_body_setter,"eval/ast","locals-body-setter");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(YgooSconditionsYproperty_error_generic,"goo/conditions","property-error-generic");
EXT(YevalSastYreference_called_functionQ_setter,"eval/ast","reference-called-function?-setter");
EXT(YevalSastYLdynamic_assignmentG,"eval/ast","<dynamic-assignment>");
EXT(YevalSastYsignature_naryQ,"eval/ast","signature-nary?");
DEF(YevalSast_linearizeYclosure_creation_index,"eval/ast-linearize","closure-creation-index");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(YevalSast_linearizeYform_program_setter,"eval/ast-linearize","form-program-setter");
EXT(YgooScolsSseqYsubT,"goo/cols/seq","sub*");
EXT(YLstrG,"goo/boot","<str>");
EXT(YevalSastYLfix_letG,"eval/ast","<fix-let>");
EXT(YevalSastYreference_frame_number,"eval/ast","reference-frame-number");
EXT(YgooSmacrosYmap2,"goo/macros","map2");
EXT(YevalSastYbinding_inferred_type_setter,"eval/ast","binding-inferred-type-setter");
EXT(YgooSclassYfind_getter,"goo/class","find-getter");
EXT(YgooSmathYmodA,"goo/math","mod+");
EXT(Yunexec,"goo/boot","unexec");
EXT(YevalSastYbinding_kind,"eval/ast","binding-kind");
EXT(YevalSastYunchecked_runtime_environment,"eval/ast","unchecked-runtime-environment");
DEF(YevalSast_linearizeYLtop_level_formG,"eval/ast-linearize","<top-level-form>");
EXT(YevalSastYfunction_registers_setter,"eval/ast","function-registers-setter");
EXT(YgooSconditionsYLhandler_infoG,"goo/conditions","<handler-info>");
EXT(YgooSconditionsYLrange_errorG,"goo/conditions","<range-error>");
EXT(YevalSastYfunction_signature_setter,"eval/ast","function-signature-setter");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(YevalSastYfix_let_arguments,"eval/ast","fix-let-arguments");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooSconditionsYLarity_errorG,"goo/conditions","<arity-error>");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(YevalSastYfix_let_bindings,"eval/ast","fix-let-bindings");
EXT(YgooSconditionsYLambiguous_method_errorG,"goo/conditions","<ambiguous-method-error>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(YgooScolsSseqYrepeat,"goo/cols/seq","repeat");
EXT(YOfold,"goo/boot","@fold");
EXT(YevalSastYenvironment_module,"eval/ast","environment-module");
EXT(YevalSdependencyYast_error,"eval/dependency","ast-error");
DEF(YevalSast_linearizeYbox_form,"eval/ast-linearize","box-form");
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
DEF(YevalSast_linearizeYLflattened_programG,"eval/ast-linearize","<flattened-program>");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YevalSastYLboundQG,"eval/ast","<bound?>");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YevalSastYbinding_dynamic_extentQ,"eval/ast","binding-dynamic-extent?");
DEF(YevalSast_linearizeYliftX,"eval/ast-linearize","lift!");
DEF(YevalSast_linearizeYlift_proceduresX,"eval/ast-linearize","lift-procedures!");
EXT(YevalSastYLmonitorG,"eval/ast","<monitor>");
EXT(YevalSastYbinding_info,"eval/ast","binding-info");
EXT(YevalSastYunwind_protect_protected_thunk,"eval/ast","unwind-protect-protected-thunk");
EXT(YevalSastYset_module_environments,"eval/ast","set-module-environments");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
EXT(YgooSmathYto_str,"goo/math","to-str");
EXT(YgooSmathYN,"goo/math","~");
EXT(Yfun_cache,"goo/boot","fun-cache");
DYNEXT(YgooSioSwriteYTmax_print_depthT,"goo/io/write","*max-print-depth*");
DEF(YevalSast_linearizeYreference_selfQ_setter,"eval/ast-linearize","reference-self?-setter");
EXT(Yproperty_not_found_error,"goo/boot","property-not-found-error");
EXT(YTearly_classesT,"goo/boot","*early-classes*");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(YgooSioSportYLfile_portG,"goo/io/port","<file-port>");
EXT(YevalSastYLprogramG,"eval/ast","<program>");
EXT(YevalSastYfunction_frame_len,"eval/ast","function-frame-len");
EXT(YevalSastYapplication_knownQ,"eval/ast","application-known?");
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
DEF(YevalSast_linearizeYform_program,"eval/ast-linearize","form-program");
EXT(YevalSastYmodule_mangled_name_setter,"eval/ast","module-mangled-name-setter");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSseqxYpushX,"goo/cols/seqx","push!");
DEF(YevalSast_linearizeYprogram_form_setter,"eval/ast-linearize","program-form-setter");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Yfab_sym,"goo/boot","fab-sym");
DEF(YevalSast_linearizeYLfree_referenceG,"eval/ast-linearize","<free-reference>");
EXT(YgooSclassYobject_class,"goo/class","object-class");
EXT(YevalSastYbinding_mutableQ,"eval/ast","binding-mutable?");
EXT(YgooScolsScolYcol_res,"goo/cols/col","col-res");
EXT(YgooSfunYhandler_info_message,"goo/fun","handler-info-message");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(YevalSastYbinding_value,"eval/ast","binding-value");
DEF(YevalSast_linearizeYreference_offset_setter,"eval/ast-linearize","reference-offset-setter");
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
EXT(YevalSastYfunction_index_setter,"eval/ast","function-index-setter");
EXT(YPclasses_readyQ,"goo/boot","%classes-ready?");
EXT(YOmay_isaQ,"goo/boot","@may-isa?");
EXT(YgooSmacrosYmacro_error,"goo/macros","macro-error");
EXT(YevalSastYsignature_arity,"eval/ast","signature-arity");
EXT(YevalSastYmonitor_info,"eval/ast","monitor-info");
DEF(YevalSast_linearizeYassocq,"eval/ast-linearize","assocq");
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
DEF(YevalSast_linearizeYLbox_creationG,"eval/ast-linearize","<box-creation>");
EXT(YgooSconditionsYLconditionG,"goo/conditions","<condition>");
EXT(YgooSconditionsYDdefault_handler_info,"goo/conditions","$default-handler-info");
EXT(YgooScolsSseqxYpopX,"goo/cols/seqx","pop!");
EXT(Ysig_unification_vars_setter,"goo/boot","sig-unification-vars-setter");
EXT(YevalSastYbind_exit_lightQ,"eval/ast","bind-exit-light?");
EXT(YgooScolsSvecYLvecG,"goo/cols/vec","<vec>");
EXT(YgooStypesYlen,"goo/types","len");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YevalSastYLmodule_bindingG,"eval/ast","<module-binding>");
DEF(YevalSast_linearizeYbox_reference_setter,"eval/ast-linearize","box-reference-setter");
DEF(YevalSast_linearizeYLbox_writeG,"eval/ast-linearize","<box-write>");
EXT(YevalSastYmodule_mangled_string_name_setter,"eval/ast","module-mangled-string-name-setter");
EXT(YgooScolsSseqxYsortX,"goo/cols/seqx","sort!");
EXT(YgooSclassYPprop,"goo/class","%prop");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(YevalSastYLcompile_timeG,"eval/ast","<compile-time>");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(YevalSastYLregular_applicationG,"eval/ast","<regular-application>");
EXT(YevalSastYprogram_line,"eval/ast","program-line");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
DEF(YevalSast_linearizeYprogram_quotations_setter,"eval/ast-linearize","program-quotations-setter");
EXT(YLseqG,"goo/boot","<seq>");
EXT(YevalSastYLargumentsG,"eval/ast","<arguments>");
EXT(Yclass_parents,"goo/boot","class-parents");
EXT(Ytail,"goo/boot","tail");
EXT(Ytup,"goo/boot","tup");
EXT(YgooScolsScolxYelt_setter,"goo/cols/colx","elt-setter");
EXT(Ynil,"goo/boot","nil");
EXT(YevalSastYLdynamic_definitionG,"eval/ast","<dynamic-definition>");
EXT(Ynul,"goo/boot","nul");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
DEF(YevalSast_linearizeYreference_selfQ,"eval/ast-linearize","reference-self?");
EXT(YgooSconditionsYLreturn_type_errorG,"goo/conditions","<return-type-error>");
EXT(Yclass_props,"goo/boot","class-props");
EXT(YgooSpackerYLpackerG,"goo/packer","<packer>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
EXT(YevalSastYLlocal_bindingG,"eval/ast","<local-binding>");
EXT(YgooSioSportYLportG,"goo/io/port","<port>");
EXT(YgooSfunYPdefine_method,"goo/fun","%define-method");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
DEF(YevalSast_linearizeYextract_thingsX,"eval/ast-linearize","extract-things!");
EXT(YgooSconditionsYLsimple_conditionG,"goo/conditions","<simple-condition>");
EXT(YLseqIG,"goo/boot","<seq.>");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YLcolXG,"goo/boot","<col!>");
EXT(YOOemptyQ,"goo/boot","@@empty?");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YevalSastYbinding_inferred_type,"eval/ast","binding-inferred-type");
EXT(YgooSclassYprop_boundQ,"goo/class","prop-bound?");
EXT(YgooSconditionsYmsg,"goo/conditions","msg");
EXT(YevalSastYglobal_box_value_setter,"eval/ast","global-box-value-setter");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Ynarity_error,"goo/boot","narity-error");
EXT(YevalSastYcompile_time_program,"eval/ast","compile-time-program");
EXT(YLsigG,"goo/boot","<sig>");
EXT(YevalSastYLfree_environmentG,"eval/ast","<free-environment>");
EXT(YgooScolsSseqYpop,"goo/cols/seq","pop");
EXT(YgooSioSportYputs,"goo/io/port","puts");
EXT(YevalSastYsequentialize,"eval/ast","sequentialize");
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
EXT(YgooScolsSseqYdo2,"goo/cols/seq","do2");
EXT(Yno_applicable_methods_error,"goo/boot","no-applicable-methods-error");
EXT(YevalSastYLmoduleG,"eval/ast","<module>");
EXT(YgooSfunYfun_arity,"goo/fun","fun-arity");
EXT(YevalSastYLreferenceG,"eval/ast","<reference>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
DEF(YevalSast_linearizeYclosure_creation_index_setter,"eval/ast-linearize","closure-creation-index-setter");
DEF(YevalSast_linearizeYform_quotations_setter,"eval/ast-linearize","form-quotations-setter");
EXT(Ynul_prop,"goo/boot","nul-prop");
EXT(YgooSioSportYLout_portG,"goo/io/port","<out-port>");
DEF(YevalSast_linearizeYform_definitions,"eval/ast-linearize","form-definitions");
EXT(YgooSconditionsYLunbound_errorG,"goo/conditions","<unbound-error>");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YevalSastYenvironment_uses_modules,"eval/ast","environment-uses-modules");
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
EXT(YgooSmathYceilS,"goo/math","ceil/");
EXT(YgooSioSportYLstr_in_portG,"goo/io/port","<str-in-port>");
EXT(YgooSmathYB,"goo/math","&");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(YevalSastYast_evaluate,"eval/ast","ast-evaluate");
EXT(YevalSastYfunction_index,"eval/ast","function-index");
EXT(YgooSclassYclass_of,"goo/class","class-of");
DEF(YevalSast_linearizeYprogram_definitions_setter,"eval/ast-linearize","program-definitions-setter");
EXT(YgooSioSportYLfile_in_portG,"goo/io/port","<file-in-port>");
EXT(YgooSconditionsYLarithmetic_errorG,"goo/conditions","<arithmetic-error>");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YLrepG,"goo/boot","<rep>");
EXT(YevalSastYunwind_protect_cleanup_thunk,"eval/ast","unwind-protect-cleanup-thunk");
EXT(YgooSconditionsYLproperty_unbound_errorG,"goo/conditions","<property-unbound-error>");
EXT(YevalSastYLglobal_boxG,"eval/ast","<global-box>");
EXT(YevalSastYsignature_bindings_setter,"eval/ast","signature-bindings-setter");
EXT(YgooSmagYmax,"goo/mag","max");
DEF(YevalSast_linearizeYclosure_creation_free_setter,"eval/ast-linearize","closure-creation-free-setter");
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
EXT(YgooSioSwriteYemit,"goo/io/write","emit");
EXT(YPrnul,"goo/boot","%rnul");
EXT(YgooScolsSseqxYdel_valsX,"goo/cols/seqx","del-vals!");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSconditionsYunbound_variable_error_variable,"goo/conditions","unbound-variable-error-variable");
EXT(YevalSastYalternative_alternant,"eval/ast","alternative-alternant");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSclassYprop_value,"goo/class","prop-value");
EXT(YevalSastYlocals_bindings,"eval/ast","locals-bindings");
EXT(YevalSastYlocals_functions,"eval/ast","locals-functions");
DEF(YevalSast_linearizeYassoc_value_setter,"eval/ast-linearize","assoc-value-setter");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YevalSastYlocals_body,"eval/ast","locals-body");
EXT(YgooSconditionsYLinternal_errorG,"goo/conditions","<internal-error>");
EXT(YgooSioSwriteYwrite,"goo/io/write","write");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSseqYsort_by,"goo/cols/seq","sort-by");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YevalSastYLmodule_loaderG,"eval/ast","<module-loader>");
EXT(Ylst,"goo/boot","lst");
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
EXT(Yfun_mets,"goo/boot","fun-mets");
DEF(YevalSast_linearizeYadjoin_definitionX,"eval/ast-linearize","adjoin-definition!");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
EXT(Yfun_sig,"goo/boot","fun-sig");
DYNDEF(YevalSast_linearizeYTrenaming_bindings_counterT,"eval/ast-linearize","*renaming-bindings-counter*");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(YevalSastYfix_let_types_setter,"eval/ast","fix-let-types-setter");
EXT(YgooSconditionsYLunbound_variable_errorG,"goo/conditions","<unbound-variable-error>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(YgooSconditionsYLno_applicable_methods_errorG,"goo/conditions","<no-applicable-methods-error>");
EXT(YevalSastYinit_ast,"eval/ast","init-ast");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YevalSastYLast_embodied_functionG,"eval/ast","<ast-embodied-function>");
EXT(YevalSastYLconstantG,"eval/ast","<constant>");
DEF(YevalSast_linearizeYprogram_quotations,"eval/ast-linearize","program-quotations");
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
EXT(YLfixnumG,"goo/boot","<fixnum>");
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
EXT(YevalSastYfunction_free,"eval/ast","function-free");
EXT(YgooSmagYmin,"goo/mag","min");
DEF(YevalSast_linearizeYLassocG,"eval/ast-linearize","<assoc>");
EXT(YevalSastYLast_genericG,"eval/ast","<ast-generic>");
EXT(YgooSconditionsYfile_opening_error_filename,"goo/conditions","file-opening-error-filename");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yorder_specs,"goo/boot","order-specs");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSioSportYport_contents,"goo/io/port","port-contents");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooSfunYfun_naryQ,"goo/fun","fun-nary?");
EXT(YgooScolsScolYcol_res_type,"goo/cols/col","col-res-type");
EXT(YgooSfunYfun_val,"goo/fun","fun-val");
EXT(YevalSastYconstant_value,"eval/ast","constant-value");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooSioSportYLin_portG,"goo/io/port","<in-port>");
EXT(YevalSastYLraw_constantG,"eval/ast","<raw-constant>");
EXT(YevalSastYLsequentialG,"eval/ast","<sequential>");
EXT(YgooSconditionsYLproperty_type_errorG,"goo/conditions","<property-type-error>");
DEF(YevalSast_linearizeYsplit_program,"eval/ast-linearize","split-program");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YevalSastYbinding_global_box,"eval/ast","binding-global-box");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YevalSastYfree_environment,"eval/ast","free-environment");
DEF(YevalSast_linearizeYassoc_key_setter,"eval/ast-linearize","assoc-key-setter");
EXT(YLnumG,"goo/boot","<num>");
EXT(YevalSastYconstant_index,"eval/ast","constant-index");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(YevalSastYLcomputed_programG,"eval/ast","<computed-program>");
EXT(YevalSastYLdefinitionG,"eval/ast","<definition>");
DEF(YevalSast_linearizeYboxify_mutable_bindings,"eval/ast-linearize","boxify-mutable-bindings");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(YgooSmathYround,"goo/math","round");
DEF(YevalSast_linearizeYbox_reference,"eval/ast-linearize","box-reference");
EXT(YevalSastYloop_bindings_setter,"eval/ast","loop-bindings-setter");
EXT(YevalSastYLruntime_assignmentG,"eval/ast","<runtime-assignment>");
EXT(YgooSconditionsYtype_error_type,"goo/conditions","type-error-type");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYdiv,"goo/math","div");
EXT(Ysig_specs_setter,"goo/boot","sig-specs-setter");
EXT(YLproductG,"goo/boot","<product>");
EXT(YOdel_dups,"goo/boot","@del-dups");
EXT(Yreturn_type_error,"goo/boot","return-type-error");
DEF(YevalSast_linearizeYnew_renamed_binding,"eval/ast-linearize","new-renamed-binding");
DYNEXT(YgooSioSwriteYTmax_print_lengthT,"goo/io/write","*max-print-length*");
EXT(YevalSastYsignature_specs,"eval/ast","signature-specs");
EXT(YevalSastYobjectify_signature,"eval/ast","objectify-signature");
EXT(YevalSastYbinding_dottedQ,"eval/ast","binding-dotted?");
EXT(Ysig_val_setter,"goo/boot","sig-val-setter");
EXT(YevalSastYprocess_closed_application,"eval/ast","process-closed-application");
EXT(YevalSastYLdynamic_referenceG,"eval/ast","<dynamic-reference>");
EXT(YevalSastYbinding_index,"eval/ast","binding-index");
EXT(YevalSastYbinding_closed_overQ_setter,"eval/ast","binding-closed-over?-setter");
EXT(YevalSastYfunction_loop,"eval/ast","function-loop");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(YOmemQ,"goo/boot","@mem?");
EXT(YevalSastYmodule_name_to_relpath,"eval/ast","module-name-to-relpath");
EXT(YevalSastYfunction_signature,"eval/ast","function-signature");
EXT(YevalSastYenvironment_bindings,"eval/ast","environment-bindings");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YgooScolsScolxYlenSfill_setter,"goo/cols/colx","len/fill-setter");
EXT(YgooSconditionsYLunknown_function_errorG,"goo/conditions","<unknown-function-error>");
EXT(YgooSmacrosYOchecked_next_methods,"goo/macros","@checked-next-methods");
EXT(YevalSastYfunction_body_setter,"eval/ast","function-body-setter");
DEF(YevalSast_linearizeYgather_temporariesX,"eval/ast-linearize","gather-temporaries!");
EXT(YgooSlocYloc_val_setter,"goo/loc","loc-val-setter");
DEF(YevalSast_linearizeYallocate_register,"eval/ast-linearize","allocate-register");
EXT(Yhead,"goo/boot","head");
EXT(YevalSastYfunction_ref_count_setter,"eval/ast","function-ref-count-setter");
DEF(YevalSast_linearizeYTregister_passiveQT,"eval/ast-linearize","*register-passive?*");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(YtT,"goo/boot","t*");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(YLunionG,"goo/boot","<union>");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YPsnul,"goo/boot","%snul");
DEF(YevalSast_linearizeYLrenamed_local_bindingG,"eval/ast-linearize","<renamed-local-binding>");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YLsrc_locG,"goo/boot","<src-loc>");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YOpick,"goo/boot","@pick");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YevalSastYmodule_uses_c_libraries,"eval/ast","module-uses-c-libraries");
EXT(YgooSconditionsYproperty_error_owner,"goo/conditions","property-error-owner");
DEF(YevalSast_linearizeYassoc,"eval/ast-linearize","assoc");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(YevalSast_linearizeYprogram_form,"eval/ast-linearize","program-form");
EXT(YgooSpackerYpacker_res,"goo/packer","packer-res");
EXT(YevalSastYast_define_binding,"eval/ast","ast-define-binding");
DEF(YevalSast_linearizeYadjoin_temporary_variablesX,"eval/ast-linearize","adjoin-temporary-variables!");
EXT(YgooSioSportYforce_out,"goo/io/port","force-out");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSconditionsYLserious_conditionG,"goo/conditions","<serious-condition>");
EXT(YgooSfunYord_app_mets,"goo/fun","ord-app-mets");
EXT(YgooSioSportYpeek,"goo/io/port","peek");
EXT(YevalSastYreport_undefined_global_bindings,"eval/ast","report-undefined-global-bindings");
EXT(Yprop_offset,"goo/boot","prop-offset");
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
EXT(YevalSastYsignature_names,"eval/ast","signature-names");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YevalSastYreq_sig_specs,"eval/ast","req-sig-specs");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(YevalSastYLbindingG,"eval/ast","<binding>");
EXT(YgooSioSportYin,"goo/io/port","in");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(YevalSastYfunction_registers,"eval/ast","function-registers");
EXT(YevalSastYapplication_loop,"eval/ast","application-loop");
EXT(YgooScolsSseqxYsubT_setter,"goo/cols/seqx","sub*-setter");
EXT(YevalSastYobjectify_with_subtransaction,"eval/ast","objectify-with-subtransaction");
EXT(YevalSastYfunction_source_setter,"eval/ast","function-source-setter");
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
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooSmathYS,"goo/math","/");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(YevalSastYLprogramsG,"eval/ast","<programs>");
EXT(YgooSconditionsYrange_error_key,"goo/conditions","range-error-key");
EXT(YevalSastYas_lst,"eval/ast","as-lst");
EXT(YevalSastYbinding_module_name,"eval/ast","binding-module-name");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(YevalSastYloop_continue,"eval/ast","loop-continue");
EXT(YevalSastYfunction_debug_name_setter,"eval/ast","function-debug-name-setter");
EXT(YevalSastYenv_object_name,"eval/ast","env-object-name");
DEF(YevalSast_linearizeYLbox_readG,"eval/ast-linearize","<box-read>");
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
EXT(YgooScolsScolxYlen_setter,"goo/cols/colx","len-setter");
EXT(YevalSastYLalternativeG,"eval/ast","<alternative>");
EXT(YgooSfunYfun_specs,"goo/fun","fun-specs");
EXT(YgooSconditionsYcondition_message,"goo/conditions","condition-message");
EXT(YevalSastYLast_functionG,"eval/ast","<ast-function>");
EXT(YevalSastYbinding_global_box_setter,"eval/ast","binding-global-box-setter");
EXT(Ysyntax_error,"goo/boot","syntax-error");
EXT(YgooSconditionsYmsg_to_str,"goo/conditions","msg-to-str");
EXT(YevalSastYfunction_binding,"eval/ast","function-binding");
EXT(YgooSpackerYpacker_add,"goo/packer","packer-add");
DEF(YevalSast_linearizeYflatten_seqs,"eval/ast-linearize","flatten-seqs");
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
EXT(YevalSastYruntime_environment,"eval/ast","runtime-environment");
DEF(YevalSast_linearizeYbox_form_setter,"eval/ast-linearize","box-form-setter");
EXT(Yfun_src_setter,"goo/boot","fun-src-setter");
EXT(YevalSastYLast_signatureG,"eval/ast","<ast-signature>");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(YevalSastYalternative_condition,"eval/ast","alternative-condition");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YevalSastYdo_module_loader_modules,"eval/ast","do-module-loader-modules");
EXT(Yargument_type_error,"goo/boot","argument-type-error");
EXT(YLlogG,"goo/boot","<log>");
EXT(YevalSastYmodule_uses_c_files,"eval/ast","module-uses-c-files");
EXT(YevalSastYfix_let_body_setter,"eval/ast","fix-let-body-setter");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(YevalSastYLast_primitive_definitionG,"eval/ast","<ast-primitive-definition>");
EXT(YevalSastYast_contains_funQ,"eval/ast","ast-contains-fun?");
EXT(YgooSioSportYout,"goo/io/port","out");
EXT(Yassert_error,"goo/boot","assert-error");
EXT(YevalSastYbinding_dottedQ_setter,"eval/ast","binding-dotted?-setter");
EXT(YgooSioSportYnewline,"goo/io/port","newline");
EXT(YevalSastYalternative_consequent,"eval/ast","alternative-consequent");
EXT(YgooSmathYDpi,"goo/math","$pi");
DEF(YevalSast_linearizeYadjoin_free_bindingX,"eval/ast-linearize","adjoin-free-binding!");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(YgooSioSportYgets,"goo/io/port","gets");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YevalSastYload_in,"eval/ast","load-in");
EXT(YevalSastYfunction_adjectives,"eval/ast","function-adjectives");
EXT(YOtup,"goo/boot","@tup");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooSpackerYpacker_fab,"goo/packer","packer-fab");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooSfunctionalYcompose,"goo/functional","compose");
EXT(Yerror,"goo/boot","error");
EXT(Yfun_src,"goo/boot","fun-src");
EXT(YevalSastYLstatic_global_environmentG,"eval/ast","<static-global-environment>");
EXT(YgooSconditionsYcall_error_arguments,"goo/conditions","call-error-arguments");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(YgooSfunYgen_add_met,"goo/fun","gen-add-met");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(YevalSastYassignment_binding,"eval/ast","assignment-binding");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(YOcat2,"goo/boot","@cat2");
EXT(YgooStypesYall2Q,"goo/types","all2?");
EXT(YevalSastYprogram_type,"eval/ast","program-type");
EXT(YgooSmacrosY2nd,"goo/macros","2nd");
EXT(YevalSastYLlocal_assignmentG,"eval/ast","<local-assignment>");
EXT(YgooScolsSvecYvec,"goo/cols/vec","vec");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooSconditionsYLrestartG,"goo/conditions","<restart>");
EXT(YgooSmathYA,"goo/math","+");
EXT(Yproperty_unbound_error,"goo/boot","property-unbound-error");
DEF(YevalSast_linearizeYprogram_bindings,"eval/ast-linearize","program-bindings");
EXT(YgooSconditionsYdefault_handler,"goo/conditions","default-handler");
EXT(YevalSastYboundQ_default,"eval/ast","bound?-default");
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
DEF(YevalSast_linearizeYclosurize_mainX,"eval/ast-linearize","closurize-main!");
EXT(YgooSconditionsYLmacro_errorG,"goo/conditions","<macro-error>");
EXT(YOanyQ,"goo/boot","@any?");
EXT(YevalSastYLmacro_referenceG,"eval/ast","<macro-reference>");
DEF(YevalSast_linearizeYprepend_renamings,"eval/ast-linearize","prepend-renamings");
EXT(Ystack_overflow_error,"goo/boot","stack-overflow-error");
EXT(YevalSastYdo_named_static_global_bindings,"eval/ast","do-named-static-global-bindings");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(YevalSastYbinding_module,"eval/ast","binding-module");
EXT(Ycpl_error,"goo/boot","cpl-error");
EXT(YevalSastYfunction_body,"eval/ast","function-body");
EXT(YgooSconditionsYmacro_error_name,"goo/conditions","macro-error-name");
EXT(YgooScolsSstepYeach,"goo/cols/step","each");
EXT(Yunion_elts,"goo/boot","union-elts");
EXT(YevalSastYload_module,"eval/ast","load-module");
DEF(YevalSast_linearizeYcollect_registersX,"eval/ast-linearize","collect-registers!");
EXT(YevalSastYLruntime_referenceG,"eval/ast","<runtime-reference>");
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
DEF(YevalSast_linearizeYLclosure_creationG,"eval/ast-linearize","<closure-creation>");
EXT(Yarity_error,"goo/boot","arity-error");
EXT(YgooScolsSseqYjoin,"goo/cols/seq","join");
EXT(YevalSastYbinding_dynamic_extentQ_setter,"eval/ast","binding-dynamic-extent?-setter");
EXT(YPmet_prop_len,"goo/boot","%met-prop-len");
EXT(YgooSioSportYopen,"goo/io/port","open");
EXT(YevalSastYreference_called_functionQ,"eval/ast","reference-called-function?");
EXT(YgooSmacrosY1st,"goo/macros","1st");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YevalSastYbinding_mangled_name_setter,"eval/ast","binding-mangled-name-setter");
EXT(YgooSconditionsYcondition_arguments,"goo/conditions","condition-arguments");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YevalSastYinit_environment_for_eval,"eval/ast","init-environment-for-eval");
EXT(YgooSioSwriteYpe_msg,"goo/io/write","pe-msg");
EXT(YevalSastYprogram_register,"eval/ast","program-register");
DEF(YevalSast_linearizeYform_quotations,"eval/ast-linearize","form-quotations");
EXT(YOrev,"goo/boot","@rev");
EXT(Yas_error,"goo/boot","as-error");
EXT(YgooSmathYK,"goo/math","|");
EXT(YgooSconditionsYLno_next_methods_errorG,"goo/conditions","<no-next-methods-error>");
EXT(YgooSfunYmet_appQ,"goo/fun","met-app?");
EXT(YevalSastYLglobal_assignmentG,"eval/ast","<global-assignment>");
EXT(Ysig_names_setter,"goo/boot","sig-names-setter");
DEF(YevalSast_linearizeYinsert_boxX,"eval/ast-linearize","insert-box!");
EXT(YgooSconditionsYLproperty_not_found_errorG,"goo/conditions","<property-not-found-error>");
EXT(YgooSmacrosYelt,"goo/macros","elt");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooSfunctionalYidentity,"goo/functional","identity");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(Yproperty_type_error,"goo/boot","property-type-error");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(YgooSfunYfun_names,"goo/fun","fun-names");
EXT(Ysig_arity_setter,"goo/boot","sig-arity-setter");
EXT(Yambiguous_method_error,"goo/boot","ambiguous-method-error");
DEF(YevalSast_linearizeYassoc_value,"eval/ast-linearize","assoc-value");
EXT(YevalSastYmodule_name,"eval/ast","module-name");
EXT(YgooSmathYneg,"goo/math","neg");
DEF(YevalSast_linearizeYregister_allocateX,"eval/ast-linearize","register-allocate!");
EXT(YevalSastYfunction_source,"eval/ast","function-source");
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

DEFLIT(lit_159);
DEFLIT(lit_104);
DEFLIT(lit_8);
DEFLIT(lit_138);
DEFLIT(lit_121);
DEFLIT(lit_89);
DEFLIT(lit_25);
DEFLIT(lit_29);
DEFLIT(lit_13);
DEFLIT(lit_106);
DEFLIT(lit_11);
DEFLIT(lit_7);
DEFLIT(lit_50);
DEFLIT(lit_68);
DEFLIT(lit_77);
DEFLIT(lit_158);
DEFLIT(lit_2);
DEFLIT(lit_97);
DEFLIT(lit_84);
DEFLIT(lit_56);
DEFLIT(lit_128);
DEFLIT(lit_150);
DEFLIT(lit_9);
DEFLIT(lit_114);
DEFLIT(lit_46);
DEFLIT(lit_64);
DEFLIT(lit_164);
DEFLIT(lit_95);
DEFLIT(lit_30);
DEFLIT(lit_102);
DEFLIT(lit_14);
DEFLIT(lit_112);
DEFLIT(lit_37);
DEFLIT(lit_6);
DEFLIT(lit_22);
DEFLIT(lit_78);
DEFLIT(lit_161);
DEFLIT(lit_162);
DEFLIT(lit_143);
DEFLIT(lit_59);
DEFLIT(lit_51);
DEFLIT(lit_115);
DEFLIT(lit_92);
DEFLIT(lit_108);
DEFLIT(lit_99);
DEFLIT(lit_63);
DEFLIT(lit_53);
DEFLIT(lit_58);
DEFLIT(lit_96);
DEFLIT(lit_74);
DEFLIT(lit_73);
DEFLIT(lit_122);
DEFLIT(lit_90);
DEFLIT(lit_131);
DEFLIT(lit_142);
DEFLIT(lit_94);
DEFLIT(lit_140);
DEFLIT(lit_32);
DEFLIT(lit_43);
DEFLIT(lit_21);
DEFLIT(lit_129);
DEFLIT(lit_28);
DEFLIT(lit_135);
DEFLIT(lit_79);
DEFLIT(lit_82);
DEFLIT(lit_113);
DEFLIT(lit_87);
DEFLIT(lit_3);
DEFLIT(lit_103);
DEFLIT(lit_100);
DEFLIT(lit_67);
DEFLIT(lit_48);
DEFLIT(lit_47);
DEFLIT(lit_119);
DEFLIT(lit_118);
DEFLIT(lit_34);
DEFLIT(lit_156);
DEFLIT(lit_86);
DEFLIT(lit_44);
DEFLIT(lit_41);
DEFLIT(lit_4);
DEFLIT(lit_62);
DEFLIT(lit_109);
DEFLIT(lit_16);
DEFLIT(lit_10);
DEFLIT(lit_101);
DEFLIT(lit_76);
DEFLIT(lit_19);
DEFLIT(lit_85);
DEFLIT(lit_45);
DEFLIT(lit_120);
DEFLIT(lit_65);
DEFLIT(lit_1);
DEFLIT(lit_24);
DEFLIT(lit_141);
DEFLIT(lit_31);
DEFLIT(lit_144);
DEFLIT(lit_130);
DEFLIT(lit_42);
DEFLIT(lit_132);
DEFLIT(lit_54);
DEFLIT(lit_167);
DEFLIT(lit_151);
DEFLIT(lit_105);
DEFLIT(lit_137);
DEFLIT(lit_126);
DEFLIT(lit_15);
DEFLIT(lit_107);
DEFLIT(lit_160);
DEFLIT(lit_0);
DEFLIT(lit_149);
DEFLIT(lit_91);
DEFLIT(lit_71);
DEFLIT(lit_40);
DEFLIT(lit_33);
DEFLIT(lit_147);
DEFLIT(lit_39);
DEFLIT(lit_152);
DEFLIT(lit_153);
DEFLIT(lit_49);
DEFLIT(lit_72);
DEFLIT(lit_123);
DEFLIT(lit_17);
DEFLIT(lit_98);
DEFLIT(lit_166);
DEFLIT(lit_23);
DEFLIT(lit_88);
DEFLIT(lit_146);
DEFLIT(lit_80);
DEFLIT(lit_36);
DEFLIT(lit_154);
DEFLIT(lit_55);
DEFLIT(lit_52);
DEFLIT(lit_127);
DEFLIT(lit_145);
DEFLIT(lit_125);
DEFLIT(lit_66);
DEFLIT(lit_75);
DEFLIT(lit_148);
DEFLIT(lit_110);
DEFLIT(lit_83);
DEFLIT(lit_27);
DEFLIT(lit_26);
DEFLIT(lit_165);
DEFLIT(lit_134);
DEFLIT(lit_157);
DEFLIT(lit_124);
DEFLIT(lit_81);
DEFLIT(lit_70);
DEFLIT(lit_116);
DEFLIT(lit_155);
DEFLIT(lit_20);
DEFLIT(lit_60);
DEFLIT(lit_163);
DEFLIT(lit_12);
DEFLIT(lit_136);
DEFLIT(lit_133);
DEFLIT(lit_139);
DEFLIT(lit_93);
DEFLIT(lit_18);
DEFLIT(lit_5);
DEFLIT(lit_111);
DEFLIT(lit_117);
DEFLIT(lit_57);
DEFLIT(lit_61);
DEFLIT(lit_69);
DEFLIT(lit_38);
DEFLIT(lit_35);

/* FUNCTIONS: */

LOCFOR(fun_box_reference_0);
LOCFOR(fun_box_reference_setter_1);
LOCFOR(fun_box_reference_2);
LOCFOR(fun_box_reference_setter_3);
LOCFOR(fun_box_form_4);
LOCFOR(fun_box_form_setter_5);
LOCFOR(fun_box_reference_6);
LOCFOR(fun_box_reference_setter_7);
LOCFOR(fun_insert_boxX_8);
LOCFOR(fun_insert_boxX_9);
LOCFOR(fun_insert_boxX_10);
LOCFOR(fun_insert_boxX_11);
LOCFOR(fun_insert_boxX_12);
LOCFOR(fun_insert_boxX_13);
LOCFOR(fun_insert_boxX_14);
LOCFOR(fun_boxify_mutable_bindings_15);
LOCFOR(fun_reference_offset_16);
LOCFOR(fun_reference_offset_setter_17);
LOCFOR(fun_reference_selfQ_18);
LOCFOR(fun_reference_selfQ_setter_19);
LOCFOR(fun_liftX_20);
LOCFOR(fun_lift_proceduresX_21);
LOCFOR(fun_lift_proceduresX_22);
LOCFOR(fun_adjoin_free_bindingX_23);
LOCFOR(fun_lift_proceduresX_24);
LOCFOR(fun_lift_proceduresX_25);
LOCFOR(fun_lift_proceduresX_26);
LOCFOR(fun_lift_proceduresX_27);
LOCFOR(fun_lift_proceduresX_28);
LOCFOR(fun_program_form_29);
LOCFOR(fun_program_form_setter_30);
LOCFOR(fun_program_quotations_31);
LOCFOR(fun_program_quotations_setter_32);
LOCFOR(fun_33);
LOCFOR(fun_program_bindings_34);
LOCFOR(fun_program_bindings_setter_35);
LOCFOR(fun_36);
LOCFOR(fun_program_definitions_37);
LOCFOR(fun_program_definitions_setter_38);
LOCFOR(fun_39);
LOCFOR(fun_form_program_40);
LOCFOR(fun_form_program_setter_41);
LOCFOR(fun_form_quotations_42);
LOCFOR(fun_form_quotations_setter_43);
LOCFOR(fun_44);
LOCFOR(fun_form_definitions_45);
LOCFOR(fun_form_definitions_setter_46);
LOCFOR(fun_47);
LOCFOR(fun_closure_creation_index_48);
LOCFOR(fun_closure_creation_index_setter_49);
LOCFOR(fun_closure_creation_free_50);
LOCFOR(fun_closure_creation_free_setter_51);
LOCFOR(fun_flatten_seqs_52);
LOCFOR(fun_flatten_seqs_53);
LOCFOR(fun_54);
LOCFOR(fun_as_top_level_forms_55);
LOCFOR(fun_56);
LOCFOR(fun_extract_thingsX_57);
LOCFOR(fun_extractX_58);
LOCFOR(fun_extractX_59);
LOCFOR(fun_extractX_60);
LOCFOR(fun_61);
LOCFOR(fun_extractX_62);
LOCFOR(fun_extractX_63);
LOCFOR(fun_adjoin_definitionX_64);
LOCFOR(fun_split_program_65);
LOCFOR(fun_split_program_66);
LOCFOR(fun_closurize_mainX_67);
LOCFOR(fun_assoc_key_68);
LOCFOR(fun_assoc_key_setter_69);
LOCFOR(fun_assoc_value_70);
LOCFOR(fun_assoc_value_setter_71);
FUNFOR(YevalSast_linearizeYassoc);
LOCFOR(fun_assocq_73);
LOCFOR(fun_74);
LOCFOR(fun_gather_temporariesX_75);
LOCFOR(fun_collect_temporariesX_76);
LOCFOR(fun_collect_temporariesX_77);
FUNFOR(YevalSast_linearizeYprepend_renamings);
LOCFOR(fun_collect_temporariesX_79);
LOCFOR(fun_80);
LOCFOR(fun_collect_temporariesX_81);
LOCFOR(fun_collect_temporariesX_82);
LOCFOR(fun_adjoin_temporary_variablesX_83);
LOCFOR(fun_binding_index_84);
LOCFOR(fun_binding_index_setter_85);
LOCFOR(fun_new_renamed_binding_86);
LOCFOR(fun_87);
LOCFOR(fun_88);
LOCFOR(fun_89);
LOCFOR(fun_register_allocateX_90);
FUNFOR(YevalSast_linearizeYallocate_register);
LOCFOR(fun_collect_registersX_92);
LOCFOR(fun_collect_registersX_93);
LOCFOR(fun_collect_registersX_94);
LOCFOR(fun_95);
LOCFOR(fun_collect_registersX_96);
LOCFOR(fun_collect_registersX_97);
LOCFOR(fun_collect_registersX_98);
LOCFOR(fun_collect_registersX_99);
LOCFOR(fun_collect_registersX_100);
LOCFOR(fun_collect_registersX_101);
extern P YevalSast_linearizeY___main_0___ ();
extern P YevalSast_linearizeY___main_1___ ();
extern P YevalSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_box_reference_0) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_1) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_2) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_3) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_4) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_5) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_6) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_7) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_8) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_9) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_10) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  CALL2(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYinsert_boxX),o_);
  T1 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(YevalSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(YevalSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(YevalSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_11) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),T1,VARREF(YevalSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_12) {
  P o_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  T2 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_13) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_14) {
  P o_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T1 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(YevalSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_boxify_mutable_bindings_15) {
  P form_,bindings_;
  P creatorF9576;
  P bindingF9575;
  P bindingsF9574;
  P resF9573;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
  resF9573 = Ynil;
  bindingsF9574 = bindings_;
  LOOP_444: {
    P a444_0,a444_1;
    T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF9574);
    if (T2 != YPfalse) {
      T4 = CALL2(1,VARREF(YgooSmacrosYpair),form_,resF9573);
      T3 = CALL1(1,VARREF(YgooSmacrosYrevX),T4);
      T1 = T3;
    } else {
      T14 = CALL1(1,VARREF(Yhead),bindingsF9574);
      bindingF9575 = T14;
      T6 = CALL1(1,VARREF(YevalSastYbinding_mutableQ),bindingF9575);
      if (T6 != YPfalse) {
        T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),bindingF9575);
        T10 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),T11);
        creatorF9576 = T10;
        T8 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF9576,resF9573);
        T9 = CALL1(1,VARREF(Ytail),bindingsF9574);
        a444_0 = T8;
        a444_1 = T9;
        resF9573 = a444_0;
        bindingsF9574 = a444_1;
        goto LOOP_444;
        T5 = T7;
      } else {
        T13 = CALL1(1,VARREF(Ytail),bindingsF9574);
        a444_0 = resF9573;
        a444_1 = T13;
        resF9573 = a444_0;
        bindingsF9574 = a444_1;
        goto LOOP_444;
        T5 = T12;
      }
      T1 = T5;
    }
  }
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_16) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_17) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_18) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_19) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_20) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_21) {
  P o_,flat_fun_,bindings_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_22) {
  P o_,flat_fun_,bindings_;
  P offsetF9578;
  P bF9577;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T7 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bF9577 = T7;
  T1 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF9577);
  if (T1 != YPfalse) {
    T0 = o_;
  } else {
    T6 = CALL2(1,VARREF(YevalSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF9578 = T6;
    CALL2(1,VARREF(YevalSastYbinding_closed_overQ_setter),YPtrue,bF9577);
    T4 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
    T5 = CALL1(1,VARREF(YevalSastYfunction_binding),flat_fun_);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),T4,T5);
    T2 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSastYreference_binding),bF9577,VARREF(YevalSast_linearizeYreference_offset),offsetF9578,VARREF(YevalSast_linearizeYreference_selfQ),T3);
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_23) {
  P flat_fun_,ref_;
  P tailF9583;
  P freeTF9582;
  P new_envF9581;
  P freeTF9580;
  P iF9579;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
  check_type(YPint((P)0),VARREF(YLintG));
  iF9579 = YPint((P)0);
  T21 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
  freeTF9580 = T21;
  LOOP_445: {
    P a445_0,a445_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeTF9580);
    if (T1 != YPfalse) {
      T12 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLfree_environmentG));
      T11 = CALL2(1,VARREF(YevalSastYfree_environment),ref_,T12);
      new_envF9581 = T11;
      T3 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
      T2 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T3);
      if (T2 != YPfalse) {
        T4 = CALL2(1,VARREF(YevalSastYfunction_free_setter),new_envF9581,flat_fun_);
      } else {
        T10 = CALL1(1,VARREF(YevalSastYfunction_free),flat_fun_);
        freeTF9582 = T10;
        LOOP_446: {
          P a446_0;
          T9 = CALL1(1,VARREF(Ytail),freeTF9582);
          tailF9583 = T9;
          T6 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF9583);
          if (T6 != YPfalse) {
            T7 = CALL2(1,VARREF(Ytail_setter),new_envF9581,freeTF9582);
            T5 = T7;
          } else {
            a446_0 = tailF9583;
            freeTF9582 = a446_0;
            goto LOOP_446;
            T5 = T8;
          }
        }
      }
      T0 = iF9579;
    } else {
      T15 = CALL1(1,VARREF(YevalSastYreference_binding),ref_);
      T17 = CALL1(1,VARREF(Yhead),freeTF9580);
      T16 = CALL1(1,VARREF(YevalSastYreference_binding),T17);
      T14 = CALL2(1,VARREF(YgooSmacrosYEE),T15,T16);
      if (T14 != YPfalse) {
        T13 = iF9579;
      } else {
        T19 = CALL2(1,VARREF(YgooSmathYA),iF9579,YPint((P)1));
        T20 = CALL1(1,VARREF(Ytail),freeTF9580);
        a445_0 = T19;
        a445_1 = T20;
        iF9579 = a445_0;
        freeTF9580 = a445_1;
        goto LOOP_445;
        T13 = T18;
      }
      T0 = T13;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_24) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF9584;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,bindings_);
  new_bindingsF9584 = T4;
  T3 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T3,flat_fun_,new_bindingsF9584);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_25) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF9585;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T6 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T5 = CALL2(1,VARREF(YgooSmacrosYcat),T6,bindings_);
  new_bindingsF9585 = T5;
  T1 = CALL3(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF9585);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,new_bindingsF9585);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_26) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_27) {
  P o_,flat_fun_,bindings_;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_28) {
  P o_,flat_fun_,bindings_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_29) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_30) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_31) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_32) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_33) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_34) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_bindings_setter_35) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_bindings));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_36) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_37) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_38) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_39) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_40) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_41) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_42) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_43) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_44) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_45) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_46) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_47) {
  P x_;
LINK_STACK();
  ARG(x_, 0);
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_48) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_49) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_50) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_51) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_52) {
  P o_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_53) {
  P o_;
  P rF9589;
  P ssF9588;
  P rF9587;
  P sF9586;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(o_, 0);
  sF9586 = o_;
  rF9587 = Ynil;
  LOOP_447: {
    P a447_0,a447_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),sF9586);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),rF9587);
      T0 = T2;
    } else {
      T12 = CALL1(1,VARREF(Yhead),sF9586);
      T11 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),T12);
      ssF9588 = T11;
      rF9589 = rF9587;
      LOOP_448: {
        P a448_0,a448_1;
        T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ssF9588);
        if (T4 != YPfalse) {
          T6 = CALL1(1,VARREF(Ytail),sF9586);
          a447_0 = T6;
          a447_1 = rF9589;
          sF9586 = a447_0;
          rF9587 = a447_1;
          goto LOOP_447;
          T3 = T5;
        } else {
          T8 = CALL1(1,VARREF(Ytail),ssF9588);
          T10 = CALL1(1,VARREF(Yhead),ssF9588);
          T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,rF9589);
          a448_0 = T8;
          a448_1 = T9;
          ssF9588 = a448_0;
          rF9589 = a448_1;
          goto LOOP_448;
          T3 = T7;
        }
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_54) {
  P x_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  T0 = CALL3(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_55) {
  P programs_;
  P T0,T1;
LINK_STACK();
  ARG(programs_, 0);
  T1 = fun_54;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_56) {
  P form_;
  P T0;
LINK_STACK();
  ARG(form_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_57) {
  P o_;
  P resultF9591;
  P formsF9590;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(o_, 0);
  T5 = CALL1(1,VARREF(YevalSast_linearizeYflatten_seqs),o_);
  T4 = CALL1(1,VARREF(YevalSast_linearizeYas_top_level_forms),T5);
  formsF9590 = T4;
  T3 = CALL1(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLflattened_programG));
  resultF9591 = T3;
  T2 = FUNFAB(fun_56,1,resultF9591);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),T2,formsF9590);
  T0 = CALL1(1,VARREF(YevalSastYsequentialize),T1);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T0,resultF9591);
UNLINK_STACK();
  QRET(resultF9591);
}

FUNCODEDEF(fun_extractX_58) {
  P o_,form_,result_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_59) {
  P o_,form_,result_;
  P x_2439F9601;
  P qbF9600;
  P probeF9599;
  P indexF9598;
  P qbTF9597;
  P tmpF9596;
  P tmpF9595;
  P tmpF9594;
  P tmpF9593;
  P valueF9592;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T20 = CALL1(1,VARREF(YevalSastYconstant_value),o_);
  valueF9592 = T20;
  T9 = CALL2(1,VARREF(YgooSmacrosYEE),valueF9592,YPfalse);
  tmpF9593 = T9;
  if (tmpF9593 != YPfalse) {
    T1 = tmpF9593;
  } else {
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),valueF9592,YPtrue);
    tmpF9594 = T8;
    if (tmpF9594 != YPfalse) {
      T2 = tmpF9594;
    } else {
      T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF9592,Ynil);
      tmpF9595 = T7;
      if (tmpF9595 != YPfalse) {
        T3 = tmpF9595;
      } else {
        T6 = CALL2(1,VARREF(YisaQ),valueF9592,VARREF(YLintG));
        tmpF9596 = T6;
        if (tmpF9596 != YPfalse) {
          T4 = tmpF9596;
        } else {
          T5 = CALL2(1,VARREF(YisaQ),valueF9592,VARREF(YLchrG));
          T4 = T5;
        }
        T3 = T4;
      }
      T2 = T3;
    }
    T1 = T2;
  }
  if (T1 != YPfalse) {
    T0 = o_;
  } else {
    T19 = CALL1(1,VARREF(YevalSast_linearizeYprogram_quotations),result_);
    qbTF9597 = T19;
    T18 = CALL1(1,VARREF(YgooStypesYlen),qbTF9597);
    indexF9598 = T18;
    T17 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF9597,valueF9592,YPfalse);
    probeF9599 = T17;
    if (probeF9599 != YPfalse) {
      T11 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),probeF9599);
      T10 = T11;
    } else {
      T16 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLmodule_bindingG),VARREF(YevalSastYbinding_kind),LITREF(lit_102),VARREF(YevalSastYbinding_name),indexF9598,VARREF(YevalSastYbinding_info),valueF9592);
      qbF9600 = T16;
      CALL3(1,VARREF(YgooScolsScolxYelt_setter),qbF9600,qbTF9597,valueF9592);
      x_2439F9601 = form_;
      T14 = CALL1(1,VARREF(YevalSast_linearizeYform_quotations),x_2439F9601);
      T13 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T14,qbF9600);
      T12 = CALL2(1,VARREF(YevalSast_linearizeYform_quotations_setter),T13,x_2439F9601);
      T15 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLglobal_referenceG),VARREF(YevalSastYreference_binding),qbF9600);
      T10 = T15;
    }
    T0 = T10;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_60) {
  P o_,form_,result_;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_61) {
  P binding_;
  P T0,T1,T2;
LINK_STACK();
  ARG(binding_, 0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(YevalSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_62) {
  P o_,form_,result_;
  P indexF9604;
  P free_bindingsF9603;
  P freeF9602;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_61,2,form_,result_);
  T7 = CALL1(1,VARREF(YevalSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T11 = CALL1(1,VARREF(YevalSastYfunction_free),o_);
  freeF9602 = T11;
  T10 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSastYreference_binding),freeF9602);
  free_bindingsF9603 = T10;
  T9 = CALL3(1,VARREF(YevalSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF9604 = T9;
  CALL2(1,VARREF(YevalSastYfunction_index_setter),indexF9604,o_);
  CALL2(1,VARREF(YevalSastYfunction_free_setter),free_bindingsF9603,o_);
  T8 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),indexF9604,VARREF(YevalSast_linearizeYclosure_creation_free),freeF9602);
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_63) {
  P o_,form_,result_;
  P x_2440F9606;
  P primF9605;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
  T7 = CALL1(1,VARREF(YevalSastYassignment_form),o_);
  primF9605 = T7;
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),primF9605);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(YevalSastYfunction_body_setter),T0,primF9605);
  x_2440F9606 = result_;
  T4 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_2440F9606);
  T3 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T4,primF9605);
  T2 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T3,x_2440F9606);
  T6 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLconstantG),VARREF(YevalSastYconstant_value),YPfalse);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYextractX),T6,form_,result_);
UNLINK_STACK();
  QRET(T5);
}

FUNCODEDEF(fun_adjoin_definitionX_64) {
  P form_,result_,x_;
  P x_2442F9609;
  P x_2441F9608;
  P new_indexF9607;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
  T7 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),result_);
  T6 = CALL1(1,VARREF(YgooStypesYlen),T7);
  new_indexF9607 = T6;
  x_2441F9608 = result_;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),x_2441F9608);
  T1 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T2,x_);
  T0 = CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T1,x_2441F9608);
  x_2442F9609 = form_;
  T5 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),x_2442F9609);
  T4 = CALL2(1,VARREF(YgooScolsSseqxYpushX),T5,x_);
  T3 = CALL2(1,VARREF(YevalSast_linearizeYform_definitions_setter),T4,x_2442F9609);
UNLINK_STACK();
  QRET(new_indexF9607);
}

FUNCODEDEF(fun_split_program_65) {
  P o_,max_count_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_66) {
  P o_,max_count_;
  P countF9614;
  P esF9613;
  P resF9612;
  P sF9611;
  P formsF9610;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
  formsF9610 = Ynil;
  sF9611 = o_;
  LOOP_449: {
    P a449_0,a449_1;
    resF9612 = Ynil;
    esF9613 = sF9611;
    countF9614 = YPint((P)0);
    LOOP_450: {
      P a450_0,a450_1,a450_2;
      T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),esF9613);
      if (T1 != YPfalse) {
        T5 = CALL1(1,VARREF(YgooSmacrosYrevX),resF9612);
        T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
        T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,formsF9610);
        T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
        T0 = T2;
      } else {
        T7 = CALL2(1,VARREF(YgooSmathYE),countF9614,max_count_);
        if (T7 != YPfalse) {
          T11 = CALL1(1,VARREF(YgooSmacrosYrevX),resF9612);
          T10 = CALL1(1,VARREF(YevalSastYsequentialize),T11);
          T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,formsF9610);
          a449_0 = T9;
          a449_1 = esF9613;
          formsF9610 = a449_0;
          sF9611 = a449_1;
          goto LOOP_449;
          T6 = T8;
        } else {
          if (YPtrue != YPfalse) {
            T15 = CALL1(1,VARREF(Yhead),esF9613);
            T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,resF9612);
            T16 = CALL1(1,VARREF(Ytail),esF9613);
            T17 = CALL2(1,VARREF(YgooSmathYA),countF9614,YPint((P)1));
            a450_0 = T14;
            a450_1 = T16;
            a450_2 = T17;
            resF9612 = a450_0;
            esF9613 = a450_1;
            countF9614 = a450_2;
            goto LOOP_450;
            T12 = T13;
          } else {
            T12 = YPfalse;
          }
          T6 = T12;
        }
        T0 = T6;
      }
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_67) {
  P o_,r_,max_count_;
  P callF9624;
  P defnF9623;
  P bindingF9622;
  P nameF9621;
  P formsF9620;
  P iF9619;
  P defnsF9618;
  P callsF9617;
  P base_indexF9616;
  P formsF9615;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
  T24 = CALL1(1,VARREF(YevalSast_linearizeYprogram_form),o_);
  T23 = CALL2(1,VARREF(YevalSast_linearizeYsplit_program),T24,max_count_);
  formsF9615 = T23;
  T22 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T21 = CALL1(1,VARREF(YgooStypesYlen),T22);
  base_indexF9616 = T21;
  callsF9617 = Ynil;
  T20 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  defnsF9618 = T20;
  iF9619 = YPint((P)0);
  formsF9620 = formsF9615;
  LOOP_451: {
    P a451_0,a451_1,a451_2,a451_3;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),formsF9620);
    if (T1 != YPfalse) {
      T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF9618);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T2,o_);
      T5 = CALL1(1,VARREF(YgooSmacrosYrevX),callsF9617);
      T4 = CALL1(1,VARREF(YevalSastYsequentialize),T5);
      T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defnsF9618);
      T3 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),T4,VARREF(YevalSast_linearizeYform_definitions),T6);
      CALL2(1,VARREF(YevalSast_linearizeYprogram_form_setter),T3,o_);
      T0 = o_;
    } else {
      T19 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_114),iF9619,LITREF(lit_115));
      nameF9621 = T19;
      T18 = CALL4(1,VARREF(YevalSastYast_define_binding),r_,nameF9621,YPfalse,LITREF(lit_116));
      bindingF9622 = T18;
      T15 = CALL2(1,VARREF(YevalSastYobjectify_quotation),nameF9621,YPint((P)4));
      T16 = CALL2(1,VARREF(YevalSastYobjectify_signature),Ynil,r_);
      T17 = CALL1(1,VARREF(Yhead),formsF9620);
      T14 = CALLN(1,VARREF(Ynew),9,VARREF(YevalSastYLast_primitiveG),VARREF(YevalSastYfunction_binding),bindingF9622,VARREF(YevalSastYfunction_debug_name),T15,VARREF(YevalSastYfunction_signature),T16,VARREF(YevalSastYfunction_body),T17);
      defnF9623 = T14;
      T13 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(YevalSastYLargumentsG));
      T12 = CALLN(1,VARREF(Ynew),7,VARREF(YevalSastYLpredefined_applicationG),VARREF(YevalSastYapplication_binding),bindingF9622,VARREF(YevalSastYapplication_arguments),T13,VARREF(YevalSastYapplication_tailQ),YPfalse);
      callF9624 = T12;
      T8 = CALL2(1,VARREF(YgooSmacrosYpair),callF9624,callsF9617);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),defnF9623,defnsF9618);
      T10 = CALL2(1,VARREF(YgooSmathYA),iF9619,YPint((P)1));
      T11 = CALL1(1,VARREF(Ytail),formsF9620);
      a451_0 = T8;
      a451_1 = T9;
      a451_2 = T10;
      a451_3 = T11;
      callsF9617 = a451_0;
      defnsF9618 = a451_1;
      iF9619 = a451_2;
      formsF9620 = a451_3;
      goto LOOP_451;
      T0 = T7;
    }
  }
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assoc_key_68) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_69) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_70) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_71) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYassoc) {
  P x_,y_;
  P T0;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  T0 = CALL5(1,VARREF(Ynew),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),x_,VARREF(YevalSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_73) {
  P x_,l_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(YevalSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(YevalSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_74) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_75) {
  P o_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  T1 = fun_74;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_76) {
  P o_,flat_fun_,r_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T0 = CALL4(1,VARREF(YevalSastYast_walkX),VARREF(YevalSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_77) {
  P o_,flat_fun_,r_;
  P bF9626;
  P bindingF9625;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T4 = CALL1(1,VARREF(YevalSastYreference_binding),o_);
  bindingF9625 = T4;
  T3 = CALL2(1,VARREF(YevalSast_linearizeYassocq),bindingF9625,r_);
  bF9626 = T3;
  if (bF9626 != YPfalse) {
    T2 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),bF9626);
    T1 = CALL3(1,VARREF(Ynew),VARREF(YevalSastYLlocal_referenceG),VARREF(YevalSastYreference_binding),T2);
    T0 = T1;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(YevalSast_linearizeYprepend_renamings) {
  P x_,y_,r_;
  P yF9629;
  P xF9628;
  P zF9627;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
  ARG(r_, 2);
  zF9627 = r_;
  xF9628 = x_;
  yF9629 = y_;
  LOOP_452: {
    P a452_0,a452_1,a452_2;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF9628);
    if (T1 != YPfalse) {
      T0 = zF9627;
    } else {
      T5 = CALL1(1,VARREF(Yhead),xF9628);
      T6 = CALL1(1,VARREF(Yhead),yF9629);
      T4 = CALL2(1,VARREF(YevalSast_linearizeYassoc),T5,T6);
      T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,zF9627);
      T7 = CALL1(1,VARREF(Ytail),xF9628);
      T8 = CALL1(1,VARREF(Ytail),yF9629);
      a452_0 = T3;
      a452_1 = T7;
      a452_2 = T8;
      zF9627 = a452_0;
      xF9628 = a452_1;
      yF9629 = a452_2;
      goto LOOP_452;
      T0 = T2;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_79) {
  P o_,flat_fun_,r_;
  P new_rF9631;
  P new_bindingsF9630;
  P T0,T1,T2,T3,T4,T5,T6,T7;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYfix_let_arguments_setter),T0,o_);
  T7 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T7);
  new_bindingsF9630 = T6;
  T5 = CALL1(1,VARREF(YevalSastYfix_let_bindings),o_);
  T4 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T5,new_bindingsF9630,r_);
  new_rF9631 = T4;
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF9630);
  CALL2(1,VARREF(YevalSastYfix_let_bindings_setter),new_bindingsF9630,o_);
  T3 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T3,flat_fun_,new_rF9631);
  CALL2(1,VARREF(YevalSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_80) {
  P b_;
  P nbF9632;
  P T0,T1,T2;
LINK_STACK();
  ARG(b_, 0);
  T2 = CALL2(1,VARREF(YevalSast_linearizeYassocq),b_,FREEREF(0));
  nbF9632 = T2;
  if (nbF9632 != YPfalse) {
    T1 = CALL1(1,VARREF(YevalSast_linearizeYassoc_value),nbF9632);
    T0 = T1;
  } else {
    T0 = b_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_81) {
  P o_,flat_fun_,r_;
  P T0,T1,T2,T3,T4;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T1 = FUNFAB(fun_80,1,r_);
  T2 = CALL1(1,VARREF(YevalSastYloop_bindings),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYloop_bindings_setter),T0,o_);
  T4 = CALL1(1,VARREF(YevalSastYloop_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T4,flat_fun_,r_);
  CALL2(1,VARREF(YevalSastYloop_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_82) {
  P o_,flat_fun_,r_;
  P new_rF9634;
  P new_bindingsF9633;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
  T8 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(YevalSast_linearizeYnew_renamed_binding),T8);
  new_bindingsF9633 = T7;
  T6 = CALL1(1,VARREF(YevalSastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YevalSast_linearizeYprepend_renamings),T6,new_bindingsF9633,r_);
  new_rF9634 = T5;
  T1 = CALL3(1,VARREF(YgooSfunctionalYrcurry),VARREF(YevalSast_linearizeYcollect_temporariesX),flat_fun_,new_rF9634);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(YevalSastYlocals_functions_setter),T0,o_);
  CALL2(1,VARREF(YevalSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF9633);
  CALL2(1,VARREF(YevalSastYlocals_bindings_setter),new_bindingsF9633,o_);
  T4 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  T3 = CALL3(1,VARREF(YevalSast_linearizeYcollect_temporariesX),T4,flat_fun_,new_rF9634);
  CALL2(1,VARREF(YevalSastYlocals_body_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_83) {
  P flat_fun_,new_bindings_;
  P bindingsF9636;
  P tempsF9635;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
  T12 = CALL1(1,VARREF(YevalSastYfunction_temporaries),flat_fun_);
  tempsF9635 = T12;
  bindingsF9636 = new_bindings_;
  LOOP_453: {
    P a453_0,a453_1;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindingsF9636);
    if (T1 != YPfalse) {
      T2 = CALL2(1,VARREF(YevalSastYfunction_temporaries_setter),tempsF9635,flat_fun_);
      T0 = T2;
    } else {
      T5 = CALL1(1,VARREF(Yhead),bindingsF9636);
      T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),tempsF9635,T5);
      if (T4 != YPfalse) {
        T7 = CALL1(1,VARREF(Ytail),bindingsF9636);
        a453_0 = tempsF9635;
        a453_1 = T7;
        tempsF9635 = a453_0;
        bindingsF9636 = a453_1;
        goto LOOP_453;
        T3 = T6;
      } else {
        T10 = CALL1(1,VARREF(Yhead),bindingsF9636);
        T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,tempsF9635);
        T11 = CALL1(1,VARREF(Ytail),bindingsF9636);
        a453_0 = T9;
        a453_1 = T11;
        tempsF9635 = a453_0;
        bindingsF9636 = a453_1;
        goto LOOP_453;
        T3 = T8;
      }
      T0 = T3;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_84) {
  P Ux_;
  P T0;
LINK_STACK();
  ARG(Ux_, 0);
  T0 = CALL2(1,VARREF(YgooSclassYprop_value),Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_85) {
  P Uz_,Ux_;
  P T0;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
  T0 = CALL3(1,VARREF(YgooSclassYprop_value_setter),Uz_,Ux_,VARREF(YevalSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_86) {
  P binding_;
  P T0,T1,T2,T3,T4,T5;
LINK_STACK();
  ARG(binding_, 0);
  T0 = CALL2(1,VARREF(YgooSmathYA),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  DYNSET(YevalSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(YevalSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(YevalSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(YevalSastYbinding_dynamic_extentQ),binding_);
  T5 = CALL1(1,VARREF(YevalSastYbinding_closed_overQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),11,VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_name),T2,VARREF(YevalSastYbinding_type),T3,VARREF(YevalSastYbinding_dynamic_extentQ),T4,VARREF(YevalSastYbinding_closed_overQ),T5,VARREF(YevalSastYbinding_index),DYNREF(YevalSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_87) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_88) {
  P T0,T1,T2;
LINK_STACK();
  VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_87;
  T2 = CALL1(1,VARREF(YevalSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_89) {
  P T0;
LINK_STACK();
  T0 = VARSET(YevalSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_90) {
  P o_,register_passiveQ_;
  P x_2443F9637;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
  x_2443F9637 = VARREF(YevalSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_88,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_89,1,x_2443F9637);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(YevalSast_linearizeYallocate_register) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3,T4,T5,T6,T7,T8;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  if (valQ_ != YPfalse) {
    if (f_ != YPfalse) {
      T4 = CALL1(1,VARREF(YevalSastYprogram_register),o_);
      T3 = CALL1(1,VARREF(Ynot),T4);
      T2 = T3;
    } else {
      T2 = YPfalse;
    }
    T1 = T2;
  } else {
    T1 = YPfalse;
  }
  if (T1 != YPfalse) {
    T6 = CALL1(1,VARREF(YevalSastYfunction_registers),f_);
    T5 = CALL1(1,VARREF(YgooStypesYlen),T6);
    CALL2(1,VARREF(YevalSastYprogram_register_setter),T5,o_);
    T8 = CALL1(1,VARREF(YevalSastYfunction_registers),f_);
    T7 = CALL2(1,VARREF(YgooScolsScolxYaddX),T8,o_);
    T0 = T7;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_92) {
  P o_,f_,valQ_;
  P T0;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = CALL4(1,VARREF(YevalSastYast_walk),VARREF(YevalSast_linearizeYcollect_registersX),o_,f_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_93) {
  P o_,f_,valQ_;
  P next_xF9639;
  P xF9638;
  P T0,T1,T2,T3,T4,T5,T6;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  xF9638 = o_;
  LOOP_454: {
    P a454_0;
    T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),xF9638);
    if (T1 != YPfalse) {
      T0 = o_;
    } else {
      T6 = CALL1(1,VARREF(Ytail),xF9638);
      next_xF9639 = T6;
      T2 = CALL1(1,VARREF(Yhead),xF9638);
      if (valQ_ != YPfalse) {
        T4 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF9639);
        T3 = T4;
      } else {
        T3 = YPfalse;
      }
      CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,T3);
      a454_0 = next_xF9639;
      xF9638 = a454_0;
      goto LOOP_454;
      T0 = T5;
    }
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_94) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  if (VARREF(YevalSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  } else {
  }
  T1 = CALL4(1,VARREF(YevalSastYast_walk),VARREF(YevalSast_linearizeYcollect_registersX),o_,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_95) {
  P def_;
  P T0;
LINK_STACK();
  ARG(def_, 0);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_96) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = FUNFAB(fun_95,2,f_,valQ_);
  T1 = CALL1(1,VARREF(YevalSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T3 = CALL1(1,VARREF(YevalSast_linearizeYform_program),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,f_,valQ_);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_registersX_97) {
  P o_,f_,valQ_;
  P T0,T1,T2,T3;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  CALL3(1,VARREF(YevalSast_linearizeYallocate_register),o_,f_,valQ_);
  T0 = CALL1(1,VARREF(YevalSastYfunction_signature),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T1 = CALL1(1,VARREF(YevalSastYfunction_debug_name),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,o_,YPtrue);
  T3 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T2 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T3,o_,YPtrue);
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_registersX_98) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYfunction_body),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,o_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_99) {
  P o_,f_,valQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T0 = CALL1(1,VARREF(YevalSastYlocals_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYlocals_functions),o_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_collect_registersX_100) {
  P o_,f_,valQ_;
  P T0,T1,T2;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T0 = CALL1(1,VARREF(YevalSastYfix_let_body),o_);
  CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T0,f_,YPtrue);
  T2 = CALL1(1,VARREF(YevalSastYfix_let_arguments),o_);
  T1 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T2,f_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_collect_registersX_101) {
  P o_,f_,valQ_;
  P T0,T1;
LINK_STACK();
  ARG(o_, 0);
  ARG(f_, 1);
  ARG(valQ_, 2);
  T1 = CALL1(1,VARREF(YevalSastYloop_body),o_);
  T0 = CALL3(1,VARREF(YevalSast_linearizeYcollect_registersX),T1,f_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

P YevalSast_linearizeY___main_0___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68,T69,T70,T71,T72,T73,T74,T75,T76,T77,T78,T79;
  P T80,T81,T82,T83,T84,T85,T86,T87,T88,T89,T90,T91,T92,T93,T94,T95;
  P T96,T97,T98,T99,T100,T101,T102,T103,T104,T105,T106,T107,T108,T109,T110,T111;
  P T112,T113,T114,T115,T116,T117,T118,T119,T120,T121,T122,T123,T124,T125,T126,T127;
  P T128,T129,T130,T131,T132,T133,T134,T135,T136,T137,T138,T139,T140,T141,T142,T143;
  P T144,T145,T146,T147,T148,T149,T150,T151,T152,T153,T154;
DEFCREGS();
  lit_0 = YPPsym((P)"<box-read>");
  T1 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T0 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_0),T1);
  VARSET(YevalSast_linearizeYLbox_readG,T0);
  lit_1 = YPPsym((P)"box-reference");
  lit_2 = YPPlist(1,YPPsym((P)"_x"));
  T2 = YPsig(LITREF(lit_2),YPPlist(1,VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_0 = YPmet(FUNCODEREF(fun_box_reference_0),LITREF(lit_1),T2,ENVNUL,PNUL,sloc(11));
  T4 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T5 = fun_box_reference_0;
  T3 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T4,T5);
  VARSET(YevalSast_linearizeYbox_reference,T3);
  lit_3 = YPPsym((P)"box-reference-setter");
  lit_4 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_4),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_1 = YPmet(FUNCODEREF(fun_box_reference_setter_1),LITREF(lit_3),T6,ENVNUL,PNUL,sloc(11));
  T8 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T9 = fun_box_reference_setter_1;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYbox_reference_setter,T7);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_readG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"<box-write>");
  T11 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T10 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_5),T11);
  VARSET(YevalSast_linearizeYLbox_writeG,T10);
  lit_6 = YPPlist(1,YPPsym((P)"_x"));
  T12 = YPsig(LITREF(lit_6),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_2 = YPmet(FUNCODEREF(fun_box_reference_2),LITREF(lit_1),T12,ENVNUL,PNUL,sloc(14));
  T14 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T15 = fun_box_reference_2;
  T13 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T14,T15);
  VARSET(YevalSast_linearizeYbox_reference,T13);
  lit_7 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T16 = YPsig(LITREF(lit_7),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_3 = YPmet(FUNCODEREF(fun_box_reference_setter_3),LITREF(lit_3),T16,ENVNUL,PNUL,sloc(14));
  T18 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T19 = fun_box_reference_setter_3;
  T17 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T18,T19);
  VARSET(YevalSast_linearizeYbox_reference_setter,T17);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_8 = YPPsym((P)"box-form");
  lit_9 = YPPlist(1,YPPsym((P)"_x"));
  T20 = YPsig(LITREF(lit_9),YPPlist(1,VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_4 = YPmet(FUNCODEREF(fun_box_form_4),LITREF(lit_8),T20,ENVNUL,PNUL,sloc(15));
  T22 = VARREF_OR(YevalSast_linearizeYbox_form,YPfalse);
  T23 = fun_box_form_4;
  T21 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T22,T23);
  VARSET(YevalSast_linearizeYbox_form,T21);
  lit_10 = YPPsym((P)"box-form-setter");
  lit_11 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T24 = YPsig(LITREF(lit_11),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_5 = YPmet(FUNCODEREF(fun_box_form_setter_5),LITREF(lit_10),T24,ENVNUL,PNUL,sloc(15));
  T26 = VARREF_OR(YevalSast_linearizeYbox_form_setter,YPfalse);
  T27 = fun_box_form_setter_5;
  T25 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T26,T27);
  VARSET(YevalSast_linearizeYbox_form_setter,T25);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_writeG),VARREF(YevalSast_linearizeYbox_form),VARREF(YevalSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_12 = YPPsym((P)"<box-creation>");
  T29 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T28 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_12),T29);
  VARSET(YevalSast_linearizeYLbox_creationG,T28);
  lit_13 = YPPlist(1,YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_13),YPPlist(1,VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_6 = YPmet(FUNCODEREF(fun_box_reference_6),LITREF(lit_1),T30,ENVNUL,PNUL,sloc(18));
  T32 = VARREF_OR(YevalSast_linearizeYbox_reference,YPfalse);
  T33 = fun_box_reference_6;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYbox_reference,T31);
  lit_14 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T34 = YPsig(LITREF(lit_14),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_7 = YPmet(FUNCODEREF(fun_box_reference_setter_7),LITREF(lit_3),T34,ENVNUL,PNUL,sloc(18));
  T36 = VARREF_OR(YevalSast_linearizeYbox_reference_setter,YPfalse);
  T37 = fun_box_reference_setter_7;
  T35 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T36,T37);
  VARSET(YevalSast_linearizeYbox_reference_setter,T35);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLbox_creationG),VARREF(YevalSast_linearizeYbox_reference),VARREF(YevalSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_15 = YPPsym((P)"insert-box!");
  lit_16 = YPPlist(1,YPPsym((P)"o"));
  T38 = YPsig(LITREF(lit_16),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_8 = YPmet(FUNCODEREF(fun_insert_boxX_8),LITREF(lit_15),T38,ENVNUL,PNUL,sloc(20));
  T40 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T41 = fun_insert_boxX_8;
  T39 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T40,T41);
  VARSET(YevalSast_linearizeYinsert_boxX,T39);
  lit_17 = YPPlist(1,YPPsym((P)"o"));
  T42 = YPsig(LITREF(lit_17),YPPlist(1,VARREF(YevalSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_9 = YPmet(FUNCODEREF(fun_insert_boxX_9),LITREF(lit_15),T42,ENVNUL,PNUL,sloc(23));
  T44 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T45 = fun_insert_boxX_9;
  T43 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T44,T45);
  VARSET(YevalSast_linearizeYinsert_boxX,T43);
  lit_18 = YPPlist(1,YPPsym((P)"o"));
  T46 = YPsig(LITREF(lit_18),YPPlist(1,VARREF(YevalSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_10 = YPmet(FUNCODEREF(fun_insert_boxX_10),LITREF(lit_15),T46,ENVNUL,PNUL,sloc(29));
  T48 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T49 = fun_insert_boxX_10;
  T47 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T48,T49);
  VARSET(YevalSast_linearizeYinsert_boxX,T47);
  lit_19 = YPPlist(1,YPPsym((P)"o"));
  T50 = YPsig(LITREF(lit_19),YPPlist(1,VARREF(YevalSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_11 = YPmet(FUNCODEREF(fun_insert_boxX_11),LITREF(lit_15),T50,ENVNUL,PNUL,sloc(35));
  T52 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T53 = fun_insert_boxX_11;
  T51 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T52,T53);
  VARSET(YevalSast_linearizeYinsert_boxX,T51);
  lit_20 = YPPlist(1,YPPsym((P)"o"));
  T54 = YPsig(LITREF(lit_20),YPPlist(1,VARREF(YevalSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_12 = YPmet(FUNCODEREF(fun_insert_boxX_12),LITREF(lit_15),T54,ENVNUL,PNUL,sloc(40));
  T56 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T57 = fun_insert_boxX_12;
  T55 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T56,T57);
  VARSET(YevalSast_linearizeYinsert_boxX,T55);
  lit_21 = YPPlist(1,YPPsym((P)"o"));
  T58 = YPsig(LITREF(lit_21),YPPlist(1,VARREF(YevalSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_13 = YPmet(FUNCODEREF(fun_insert_boxX_13),LITREF(lit_15),T58,ENVNUL,PNUL,sloc(46));
  T60 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T61 = fun_insert_boxX_13;
  T59 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T60,T61);
  VARSET(YevalSast_linearizeYinsert_boxX,T59);
  lit_22 = YPPlist(1,YPPsym((P)"o"));
  T62 = YPsig(LITREF(lit_22),YPPlist(1,VARREF(YevalSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_14 = YPmet(FUNCODEREF(fun_insert_boxX_14),LITREF(lit_15),T62,ENVNUL,PNUL,sloc(54));
  T64 = VARREF_OR(YevalSast_linearizeYinsert_boxX,YPfalse);
  T65 = fun_insert_boxX_14;
  T63 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T64,T65);
  VARSET(YevalSast_linearizeYinsert_boxX,T63);
  lit_23 = YPPsym((P)"boxify-mutable-bindings");
  lit_24 = YPPlist(2,YPPsym((P)"form"),YPPsym((P)"bindings"));
  T66 = YPsig(LITREF(lit_24),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_15 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_15),LITREF(lit_23),T66,ENVNUL,PNUL,sloc(62));
  T68 = VARREF_OR(YevalSast_linearizeYboxify_mutable_bindings,YPfalse);
  T69 = fun_boxify_mutable_bindings_15;
  T67 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T68,T69);
  VARSET(YevalSast_linearizeYboxify_mutable_bindings,T67);
  lit_25 = YPPsym((P)"<free-reference>");
  T71 = (P)YPpair(VARREF(YevalSastYLreal_referenceG),Ynil);
  T70 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_25),T71);
  VARSET(YevalSast_linearizeYLfree_referenceG,T70);
  lit_26 = YPPsym((P)"reference-offset");
  lit_27 = YPPlist(1,YPPsym((P)"_x"));
  T72 = YPsig(LITREF(lit_27),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_16 = YPmet(FUNCODEREF(fun_reference_offset_16),LITREF(lit_26),T72,ENVNUL,PNUL,sloc(79));
  T74 = VARREF_OR(YevalSast_linearizeYreference_offset,YPfalse);
  T75 = fun_reference_offset_16;
  T73 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T74,T75);
  VARSET(YevalSast_linearizeYreference_offset,T73);
  lit_28 = YPPsym((P)"reference-offset-setter");
  lit_29 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T77 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T76 = YPsig(LITREF(lit_29),YPPlist(2,T77,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_17 = YPmet(FUNCODEREF(fun_reference_offset_setter_17),LITREF(lit_28),T76,ENVNUL,PNUL,sloc(79));
  T79 = VARREF_OR(YevalSast_linearizeYreference_offset_setter,YPfalse);
  T80 = fun_reference_offset_setter_17;
  T78 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T79,T80);
  VARSET(YevalSast_linearizeYreference_offset_setter,T78);
  T81 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_offset),VARREF(YevalSast_linearizeYreference_offset_setter),T81,VARREF(YPprop_unbound_error));
  lit_30 = YPPsym((P)"reference-self?");
  lit_31 = YPPlist(1,YPPsym((P)"_x"));
  T82 = YPsig(LITREF(lit_31),YPPlist(1,VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_18 = YPmet(FUNCODEREF(fun_reference_selfQ_18),LITREF(lit_30),T82,ENVNUL,PNUL,sloc(80));
  T84 = VARREF_OR(YevalSast_linearizeYreference_selfQ,YPfalse);
  T85 = fun_reference_selfQ_18;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYreference_selfQ,T83);
  lit_32 = YPPsym((P)"reference-self?-setter");
  lit_33 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T86 = YPsig(LITREF(lit_33),YPPlist(2,VARREF(YLlogG),VARREF(YevalSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_19 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_19),LITREF(lit_32),T86,ENVNUL,PNUL,sloc(80));
  T88 = VARREF_OR(YevalSast_linearizeYreference_selfQ_setter,YPfalse);
  T89 = fun_reference_selfQ_setter_19;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYreference_selfQ_setter,T87);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLfree_referenceG),VARREF(YevalSast_linearizeYreference_selfQ),VARREF(YevalSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_34 = YPPsym((P)"lift!");
  lit_35 = YPPlist(1,YPPsym((P)"o"));
  T90 = YPsig(LITREF(lit_35),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_20 = YPmet(FUNCODEREF(fun_liftX_20),LITREF(lit_34),T90,ENVNUL,PNUL,sloc(82));
  T92 = VARREF_OR(YevalSast_linearizeYliftX,YPfalse);
  T93 = fun_liftX_20;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_linearizeYliftX,T91);
  lit_36 = YPPsym((P)"lift-procedures!");
  lit_37 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T94 = YPsig(LITREF(lit_37),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_21 = YPmet(FUNCODEREF(fun_lift_proceduresX_21),LITREF(lit_36),T94,ENVNUL,PNUL,sloc(85));
  T96 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T97 = fun_lift_proceduresX_21;
  T95 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T96,T97);
  VARSET(YevalSast_linearizeYlift_proceduresX,T95);
  lit_38 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T98 = YPsig(LITREF(lit_38),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_22 = YPmet(FUNCODEREF(fun_lift_proceduresX_22),LITREF(lit_36),T98,ENVNUL,PNUL,sloc(88));
  T100 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T101 = fun_lift_proceduresX_22;
  T99 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T100,T101);
  VARSET(YevalSast_linearizeYlift_proceduresX,T99);
  lit_39 = YPPsym((P)"adjoin-free-binding!");
  lit_40 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"ref"));
  T102 = YPsig(LITREF(lit_40),YPPlist(2,VARREF(YevalSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_23 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_23),LITREF(lit_39),T102,ENVNUL,PNUL,sloc(100));
  T104 = VARREF_OR(YevalSast_linearizeYadjoin_free_bindingX,YPfalse);
  T105 = fun_adjoin_free_bindingX_23;
  T103 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T104,T105);
  VARSET(YevalSast_linearizeYadjoin_free_bindingX,T103);
  lit_41 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T106 = YPsig(LITREF(lit_41),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_24 = YPmet(FUNCODEREF(fun_lift_proceduresX_24),LITREF(lit_36),T106,ENVNUL,PNUL,sloc(117));
  T108 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T109 = fun_lift_proceduresX_24;
  T107 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T108,T109);
  VARSET(YevalSast_linearizeYlift_proceduresX,T107);
  lit_42 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T110 = YPsig(LITREF(lit_42),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_25 = YPmet(FUNCODEREF(fun_lift_proceduresX_25),LITREF(lit_36),T110,ENVNUL,PNUL,sloc(125));
  T112 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T113 = fun_lift_proceduresX_25;
  T111 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T112,T113);
  VARSET(YevalSast_linearizeYlift_proceduresX,T111);
  lit_43 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T114 = YPsig(LITREF(lit_43),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_26 = YPmet(FUNCODEREF(fun_lift_proceduresX_26),LITREF(lit_36),T114,ENVNUL,PNUL,sloc(134));
  T116 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T117 = fun_lift_proceduresX_26;
  T115 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T116,T117);
  VARSET(YevalSast_linearizeYlift_proceduresX,T115);
  lit_44 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T118 = YPsig(LITREF(lit_44),YPPlist(3,VARREF(YevalSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_27 = YPmet(FUNCODEREF(fun_lift_proceduresX_27),LITREF(lit_36),T118,ENVNUL,PNUL,sloc(139));
  T120 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T121 = fun_lift_proceduresX_27;
  T119 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T120,T121);
  VARSET(YevalSast_linearizeYlift_proceduresX,T119);
  lit_45 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"bindings"));
  T122 = YPsig(LITREF(lit_45),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_28 = YPmet(FUNCODEREF(fun_lift_proceduresX_28),LITREF(lit_36),T122,ENVNUL,PNUL,sloc(142));
  T124 = VARREF_OR(YevalSast_linearizeYlift_proceduresX,YPfalse);
  T125 = fun_lift_proceduresX_28;
  T123 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T124,T125);
  VARSET(YevalSast_linearizeYlift_proceduresX,T123);
  lit_46 = YPPsym((P)"<flattened-program>");
  T127 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T126 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_46),T127);
  VARSET(YevalSast_linearizeYLflattened_programG,T126);
  lit_47 = YPPsym((P)"program-form");
  lit_48 = YPPlist(1,YPPsym((P)"_x"));
  T128 = YPsig(LITREF(lit_48),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_29 = YPmet(FUNCODEREF(fun_program_form_29),LITREF(lit_47),T128,ENVNUL,PNUL,sloc(152));
  T130 = VARREF_OR(YevalSast_linearizeYprogram_form,YPfalse);
  T131 = fun_program_form_29;
  T129 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T130,T131);
  VARSET(YevalSast_linearizeYprogram_form,T129);
  lit_49 = YPPsym((P)"program-form-setter");
  lit_50 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  T132 = YPsig(LITREF(lit_50),YPPlist(2,T133,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_30 = YPmet(FUNCODEREF(fun_program_form_setter_30),LITREF(lit_49),T132,ENVNUL,PNUL,sloc(152));
  T135 = VARREF_OR(YevalSast_linearizeYprogram_form_setter,YPfalse);
  T136 = fun_program_form_setter_30;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSast_linearizeYprogram_form_setter,T134);
  T137 = XCALL1(1,VARREF(YgooStypesYtQ),VARREF(YevalSastYLprogramG));
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_form),VARREF(YevalSast_linearizeYprogram_form_setter),T137,VARREF(YPprop_unbound_error));
  lit_51 = YPPsym((P)"program-quotations");
  lit_52 = YPPlist(1,YPPsym((P)"_x"));
  T138 = YPsig(LITREF(lit_52),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_31 = YPmet(FUNCODEREF(fun_program_quotations_31),LITREF(lit_51),T138,ENVNUL,PNUL,sloc(153));
  T140 = VARREF_OR(YevalSast_linearizeYprogram_quotations,YPfalse);
  T141 = fun_program_quotations_31;
  T139 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T140,T141);
  VARSET(YevalSast_linearizeYprogram_quotations,T139);
  lit_53 = YPPsym((P)"program-quotations-setter");
  lit_54 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T142 = YPsig(LITREF(lit_54),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_32 = YPmet(FUNCODEREF(fun_program_quotations_setter_32),LITREF(lit_53),T142,ENVNUL,PNUL,sloc(153));
  T144 = VARREF_OR(YevalSast_linearizeYprogram_quotations_setter,YPfalse);
  T145 = fun_program_quotations_setter_32;
  T143 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T144,T145);
  VARSET(YevalSast_linearizeYprogram_quotations_setter,T143);
  lit_55 = YPPlist(1,YPPsym((P)"x"));
  T146 = YPsig(LITREF(lit_55),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_33 = YPmet(FUNCODEREF(fun_33),YPfalse,T146,ENVNUL,PNUL,sloc(153));
  T147 = fun_33;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_quotations),VARREF(YevalSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T147);
  lit_56 = YPPsym((P)"program-bindings");
  lit_57 = YPPlist(1,YPPsym((P)"_x"));
  T150 = YPsig(LITREF(lit_57),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T149 = fun_program_bindings_34 = YPmet(FUNCODEREF(fun_program_bindings_34),LITREF(lit_56),T150,ENVNUL,PNUL,sloc(154));
  T153 = VARREF_OR(YevalSast_linearizeYprogram_bindings,YPfalse);
  T154 = fun_program_bindings_34;
  T152 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T153,T154);
  T151 = VARSET(YevalSast_linearizeYprogram_bindings,T152);
  T148 = T151;
  return T148;
}

P YevalSast_linearizeY___main_1___() {
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
  P T160,T161,T162,T163,T164,T165,T166,T167,T168,T169,T170;
DEFCREGS();
  lit_58 = YPPsym((P)"program-bindings-setter");
  lit_59 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T0 = YPsig(LITREF(lit_59),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_bindings_setter_35 = YPmet(FUNCODEREF(fun_program_bindings_setter_35),LITREF(lit_58),T0,ENVNUL,PNUL,sloc(154));
  T2 = VARREF_OR(YevalSast_linearizeYprogram_bindings_setter,YPfalse);
  T3 = fun_program_bindings_setter_35;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYprogram_bindings_setter,T1);
  lit_60 = YPPlist(1,YPPsym((P)"x"));
  T4 = YPsig(LITREF(lit_60),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_36 = YPmet(FUNCODEREF(fun_36),YPfalse,T4,ENVNUL,PNUL,sloc(154));
  T5 = fun_36;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_bindings),VARREF(YevalSast_linearizeYprogram_bindings_setter),VARREF(YLanyG),T5);
  lit_61 = YPPsym((P)"program-definitions");
  lit_62 = YPPlist(1,YPPsym((P)"_x"));
  T6 = YPsig(LITREF(lit_62),YPPlist(1,VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_37 = YPmet(FUNCODEREF(fun_program_definitions_37),LITREF(lit_61),T6,ENVNUL,PNUL,sloc(155));
  T8 = VARREF_OR(YevalSast_linearizeYprogram_definitions,YPfalse);
  T9 = fun_program_definitions_37;
  T7 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T8,T9);
  VARSET(YevalSast_linearizeYprogram_definitions,T7);
  lit_63 = YPPsym((P)"program-definitions-setter");
  lit_64 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_64),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_38 = YPmet(FUNCODEREF(fun_program_definitions_setter_38),LITREF(lit_63),T10,ENVNUL,PNUL,sloc(155));
  T12 = VARREF_OR(YevalSast_linearizeYprogram_definitions_setter,YPfalse);
  T13 = fun_program_definitions_setter_38;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSast_linearizeYprogram_definitions_setter,T11);
  lit_65 = YPPlist(1,YPPsym((P)"x"));
  T14 = YPsig(LITREF(lit_65),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T14,ENVNUL,PNUL,sloc(155));
  T15 = fun_39;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YevalSast_linearizeYprogram_definitions),VARREF(YevalSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T15);
  lit_66 = YPPsym((P)"<top-level-form>");
  T17 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T16 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_66),T17);
  VARSET(YevalSast_linearizeYLtop_level_formG,T16);
  lit_67 = YPPsym((P)"form-program");
  lit_68 = YPPlist(1,YPPsym((P)"_x"));
  T18 = YPsig(LITREF(lit_68),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_40 = YPmet(FUNCODEREF(fun_form_program_40),LITREF(lit_67),T18,ENVNUL,PNUL,sloc(158));
  T20 = VARREF_OR(YevalSast_linearizeYform_program,YPfalse);
  T21 = fun_form_program_40;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYform_program,T19);
  lit_69 = YPPsym((P)"form-program-setter");
  lit_70 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T22 = YPsig(LITREF(lit_70),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_41 = YPmet(FUNCODEREF(fun_form_program_setter_41),LITREF(lit_69),T22,ENVNUL,PNUL,sloc(158));
  T24 = VARREF_OR(YevalSast_linearizeYform_program_setter,YPfalse);
  T25 = fun_form_program_setter_41;
  T23 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T24,T25);
  VARSET(YevalSast_linearizeYform_program_setter,T23);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_program),VARREF(YevalSast_linearizeYform_program_setter),VARREF(YevalSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  lit_72 = YPPlist(1,YPPsym((P)"_x"));
  T26 = YPsig(LITREF(lit_72),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_42 = YPmet(FUNCODEREF(fun_form_quotations_42),LITREF(lit_71),T26,ENVNUL,PNUL,sloc(159));
  T28 = VARREF_OR(YevalSast_linearizeYform_quotations,YPfalse);
  T29 = fun_form_quotations_42;
  T27 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T28,T29);
  VARSET(YevalSast_linearizeYform_quotations,T27);
  lit_73 = YPPsym((P)"form-quotations-setter");
  lit_74 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T30 = YPsig(LITREF(lit_74),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_43 = YPmet(FUNCODEREF(fun_form_quotations_setter_43),LITREF(lit_73),T30,ENVNUL,PNUL,sloc(159));
  T32 = VARREF_OR(YevalSast_linearizeYform_quotations_setter,YPfalse);
  T33 = fun_form_quotations_setter_43;
  T31 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T32,T33);
  VARSET(YevalSast_linearizeYform_quotations_setter,T31);
  lit_75 = YPPlist(1,YPPsym((P)"x"));
  T34 = YPsig(LITREF(lit_75),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_44 = YPmet(FUNCODEREF(fun_44),YPfalse,T34,ENVNUL,PNUL,sloc(159));
  T35 = fun_44;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_quotations),VARREF(YevalSast_linearizeYform_quotations_setter),VARREF(YLanyG),T35);
  lit_76 = YPPsym((P)"form-definitions");
  lit_77 = YPPlist(1,YPPsym((P)"_x"));
  T36 = YPsig(LITREF(lit_77),YPPlist(1,VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_45 = YPmet(FUNCODEREF(fun_form_definitions_45),LITREF(lit_76),T36,ENVNUL,PNUL,sloc(160));
  T38 = VARREF_OR(YevalSast_linearizeYform_definitions,YPfalse);
  T39 = fun_form_definitions_45;
  T37 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T38,T39);
  VARSET(YevalSast_linearizeYform_definitions,T37);
  lit_78 = YPPsym((P)"form-definitions-setter");
  lit_79 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T40 = YPsig(LITREF(lit_79),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_46 = YPmet(FUNCODEREF(fun_form_definitions_setter_46),LITREF(lit_78),T40,ENVNUL,PNUL,sloc(160));
  T42 = VARREF_OR(YevalSast_linearizeYform_definitions_setter,YPfalse);
  T43 = fun_form_definitions_setter_46;
  T41 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T42,T43);
  VARSET(YevalSast_linearizeYform_definitions_setter,T41);
  lit_80 = YPPlist(1,YPPsym((P)"x"));
  T44 = YPsig(LITREF(lit_80),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_47 = YPmet(FUNCODEREF(fun_47),YPfalse,T44,ENVNUL,PNUL,sloc(160));
  T45 = fun_47;
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYform_definitions),VARREF(YevalSast_linearizeYform_definitions_setter),VARREF(YLanyG),T45);
  lit_81 = YPPsym((P)"<closure-creation>");
  T47 = (P)YPpair(VARREF(YevalSastYLcomputed_programG),Ynil);
  T46 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_81),T47);
  VARSET(YevalSast_linearizeYLclosure_creationG,T46);
  lit_82 = YPPsym((P)"closure-creation-index");
  lit_83 = YPPlist(1,YPPsym((P)"_x"));
  T48 = YPsig(LITREF(lit_83),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_48 = YPmet(FUNCODEREF(fun_closure_creation_index_48),LITREF(lit_82),T48,ENVNUL,PNUL,sloc(163));
  T50 = VARREF_OR(YevalSast_linearizeYclosure_creation_index,YPfalse);
  T51 = fun_closure_creation_index_48;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_linearizeYclosure_creation_index,T49);
  lit_84 = YPPsym((P)"closure-creation-index-setter");
  lit_85 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T52 = YPsig(LITREF(lit_85),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_49 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_49),LITREF(lit_84),T52,ENVNUL,PNUL,sloc(163));
  T54 = VARREF_OR(YevalSast_linearizeYclosure_creation_index_setter,YPfalse);
  T55 = fun_closure_creation_index_setter_49;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYclosure_creation_index_setter,T53);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_index),VARREF(YevalSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_86 = YPPsym((P)"closure-creation-free");
  lit_87 = YPPlist(1,YPPsym((P)"_x"));
  T56 = YPsig(LITREF(lit_87),YPPlist(1,VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_50 = YPmet(FUNCODEREF(fun_closure_creation_free_50),LITREF(lit_86),T56,ENVNUL,PNUL,sloc(164));
  T58 = VARREF_OR(YevalSast_linearizeYclosure_creation_free,YPfalse);
  T59 = fun_closure_creation_free_50;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_linearizeYclosure_creation_free,T57);
  lit_88 = YPPsym((P)"closure-creation-free-setter");
  lit_89 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T60 = YPsig(LITREF(lit_89),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_51 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_51),LITREF(lit_88),T60,ENVNUL,PNUL,sloc(164));
  T62 = VARREF_OR(YevalSast_linearizeYclosure_creation_free_setter,YPfalse);
  T63 = fun_closure_creation_free_setter_51;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_linearizeYclosure_creation_free_setter,T61);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLclosure_creationG),VARREF(YevalSast_linearizeYclosure_creation_free),VARREF(YevalSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_90 = YPPsym((P)"flatten-seqs");
  lit_91 = YPPlist(1,YPPsym((P)"o"));
  T64 = YPsig(LITREF(lit_91),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_52 = YPmet(FUNCODEREF(fun_flatten_seqs_52),LITREF(lit_90),T64,ENVNUL,PNUL,sloc(166));
  T66 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T67 = fun_flatten_seqs_52;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_linearizeYflatten_seqs,T65);
  lit_92 = YPPlist(1,YPPsym((P)"o"));
  T68 = YPsig(LITREF(lit_92),YPPlist(1,VARREF(YevalSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_53 = YPmet(FUNCODEREF(fun_flatten_seqs_53),LITREF(lit_90),T68,ENVNUL,PNUL,sloc(169));
  T70 = VARREF_OR(YevalSast_linearizeYflatten_seqs,YPfalse);
  T71 = fun_flatten_seqs_53;
  T69 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T70,T71);
  VARSET(YevalSast_linearizeYflatten_seqs,T69);
  lit_93 = YPPsym((P)"as-top-level-forms");
  lit_94 = YPPlist(1,YPPsym((P)"programs"));
  lit_95 = YPPlist(1,YPPsym((P)"x"));
  T73 = YPsig(LITREF(lit_95),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_54 = YPmet(FUNCODEREF(fun_54),YPfalse,T73,ENVNUL,PNUL,sloc(179));
  T72 = YPsig(LITREF(lit_94),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_55 = YPmet(FUNCODEREF(fun_as_top_level_forms_55),LITREF(lit_93),T72,ENVNUL,PNUL,sloc(178));
  T75 = VARREF_OR(YevalSast_linearizeYas_top_level_forms,YPfalse);
  T76 = fun_as_top_level_forms_55;
  T74 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T75,T76);
  VARSET(YevalSast_linearizeYas_top_level_forms,T74);
  lit_96 = YPPsym((P)"extract-things!");
  lit_97 = YPPlist(1,YPPsym((P)"o"));
  lit_98 = YPPlist(1,YPPsym((P)"form"));
  T78 = YPsig(LITREF(lit_98),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_56 = YPmet(FUNCODEREF(fun_56),YPfalse,T78,ENVNUL,PNUL,sloc(185));
  T77 = YPsig(LITREF(lit_97),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_57 = YPmet(FUNCODEREF(fun_extract_thingsX_57),LITREF(lit_96),T77,ENVNUL,PNUL,sloc(181));
  T80 = VARREF_OR(YevalSast_linearizeYextract_thingsX,YPfalse);
  T81 = fun_extract_thingsX_57;
  T79 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T80,T81);
  VARSET(YevalSast_linearizeYextract_thingsX,T79);
  lit_99 = YPPsym((P)"extract!");
  lit_100 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T82 = YPsig(LITREF(lit_100),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_58 = YPmet(FUNCODEREF(fun_extractX_58),LITREF(lit_99),T82,ENVNUL,PNUL,sloc(188));
  T84 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T85 = fun_extractX_58;
  T83 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T84,T85);
  VARSET(YevalSast_linearizeYextractX,T83);
  lit_101 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_102 = YPPsym((P)"quotation");
  T86 = YPsig(LITREF(lit_101),YPPlist(3,VARREF(YevalSastYLconstantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_59 = YPmet(FUNCODEREF(fun_extractX_59),LITREF(lit_99),T86,ENVNUL,PNUL,sloc(191));
  T88 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T89 = fun_extractX_59;
  T87 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T88,T89);
  VARSET(YevalSast_linearizeYextractX,T87);
  lit_103 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T90 = YPsig(LITREF(lit_103),YPPlist(3,VARREF(YevalSastYLraw_constantG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_60 = YPmet(FUNCODEREF(fun_extractX_60),LITREF(lit_99),T90,ENVNUL,PNUL,sloc(209));
  T92 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T93 = fun_extractX_60;
  T91 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T92,T93);
  VARSET(YevalSast_linearizeYextractX,T91);
  lit_104 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  lit_105 = YPPlist(1,YPPsym((P)"binding"));
  T95 = YPsig(LITREF(lit_105),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T95,ENVNUL,PNUL,sloc(218));
  T94 = YPsig(LITREF(lit_104),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_62 = YPmet(FUNCODEREF(fun_extractX_62),LITREF(lit_99),T94,ENVNUL,PNUL,sloc(212));
  T97 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T98 = fun_extractX_62;
  T96 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T97,T98);
  VARSET(YevalSast_linearizeYextractX,T96);
  lit_106 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"form"),YPPsym((P)"result"));
  T99 = YPsig(LITREF(lit_106),YPPlist(3,VARREF(YevalSastYLast_primitive_definitionG),VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_63 = YPmet(FUNCODEREF(fun_extractX_63),LITREF(lit_99),T99,ENVNUL,PNUL,sloc(230));
  T101 = VARREF_OR(YevalSast_linearizeYextractX,YPfalse);
  T102 = fun_extractX_63;
  T100 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T101,T102);
  VARSET(YevalSast_linearizeYextractX,T100);
  lit_107 = YPPsym((P)"adjoin-definition!");
  lit_108 = YPPlist(3,YPPsym((P)"form"),YPPsym((P)"result"),YPPsym((P)"x"));
  T103 = YPsig(LITREF(lit_108),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_64 = YPmet(FUNCODEREF(fun_adjoin_definitionX_64),LITREF(lit_107),T103,ENVNUL,PNUL,sloc(238));
  T105 = VARREF_OR(YevalSast_linearizeYadjoin_definitionX,YPfalse);
  T106 = fun_adjoin_definitionX_64;
  T104 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T105,T106);
  VARSET(YevalSast_linearizeYadjoin_definitionX,T104);
  lit_109 = YPPsym((P)"split-program");
  lit_110 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T107 = YPsig(LITREF(lit_110),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_65 = YPmet(FUNCODEREF(fun_split_program_65),LITREF(lit_109),T107,ENVNUL,PNUL,sloc(246));
  T109 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T110 = fun_split_program_65;
  T108 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T109,T110);
  VARSET(YevalSast_linearizeYsplit_program,T108);
  lit_111 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"max-count"));
  T111 = YPsig(LITREF(lit_111),YPPlist(2,VARREF(YevalSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_66 = YPmet(FUNCODEREF(fun_split_program_66),LITREF(lit_109),T111,ENVNUL,PNUL,sloc(249));
  T113 = VARREF_OR(YevalSast_linearizeYsplit_program,YPfalse);
  T114 = fun_split_program_66;
  T112 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T113,T114);
  VARSET(YevalSast_linearizeYsplit_program,T112);
  lit_112 = YPPsym((P)"closurize-main!");
  lit_113 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"r"),YPPsym((P)"max-count"));
  lit_114 = YPsb((P)"---main-");
  lit_115 = YPsb((P)"---");
  lit_116 = YPPsym((P)"predefined");
  T115 = YPsig(LITREF(lit_113),YPPlist(3,VARREF(YevalSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YevalSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_67 = YPmet(FUNCODEREF(fun_closurize_mainX_67),LITREF(lit_112),T115,ENVNUL,PNUL,sloc(259));
  T117 = VARREF_OR(YevalSast_linearizeYclosurize_mainX,YPfalse);
  T118 = fun_closurize_mainX_67;
  T116 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T117,T118);
  VARSET(YevalSast_linearizeYclosurize_mainX,T116);
  lit_117 = YPPsym((P)"<assoc>");
  T120 = (P)YPpair(VARREF(YLanyG),Ynil);
  T119 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_117),T120);
  VARSET(YevalSast_linearizeYLassocG,T119);
  lit_118 = YPPsym((P)"assoc-key");
  lit_119 = YPPlist(1,YPPsym((P)"_x"));
  T121 = YPsig(LITREF(lit_119),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_68 = YPmet(FUNCODEREF(fun_assoc_key_68),LITREF(lit_118),T121,ENVNUL,PNUL,sloc(293));
  T123 = VARREF_OR(YevalSast_linearizeYassoc_key,YPfalse);
  T124 = fun_assoc_key_68;
  T122 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T123,T124);
  VARSET(YevalSast_linearizeYassoc_key,T122);
  lit_120 = YPPsym((P)"assoc-key-setter");
  lit_121 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T125 = YPsig(LITREF(lit_121),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_69 = YPmet(FUNCODEREF(fun_assoc_key_setter_69),LITREF(lit_120),T125,ENVNUL,PNUL,sloc(293));
  T127 = VARREF_OR(YevalSast_linearizeYassoc_key_setter,YPfalse);
  T128 = fun_assoc_key_setter_69;
  T126 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T127,T128);
  VARSET(YevalSast_linearizeYassoc_key_setter,T126);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_key),VARREF(YevalSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_122 = YPPsym((P)"assoc-value");
  lit_123 = YPPlist(1,YPPsym((P)"_x"));
  T129 = YPsig(LITREF(lit_123),YPPlist(1,VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_70 = YPmet(FUNCODEREF(fun_assoc_value_70),LITREF(lit_122),T129,ENVNUL,PNUL,sloc(294));
  T131 = VARREF_OR(YevalSast_linearizeYassoc_value,YPfalse);
  T132 = fun_assoc_value_70;
  T130 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T131,T132);
  VARSET(YevalSast_linearizeYassoc_value,T130);
  lit_124 = YPPsym((P)"assoc-value-setter");
  lit_125 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T133 = YPsig(LITREF(lit_125),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_71 = YPmet(FUNCODEREF(fun_assoc_value_setter_71),LITREF(lit_124),T133,ENVNUL,PNUL,sloc(294));
  T135 = VARREF_OR(YevalSast_linearizeYassoc_value_setter,YPfalse);
  T136 = fun_assoc_value_setter_71;
  T134 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T135,T136);
  VARSET(YevalSast_linearizeYassoc_value_setter,T134);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLassocG),VARREF(YevalSast_linearizeYassoc_value),VARREF(YevalSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_126 = YPPsym((P)"assoc");
  lit_127 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"y"));
  T137 = YPsig(LITREF(lit_127),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YevalSast_linearizeYLassocG),Ynil);
  YevalSast_linearizeYassoc = YPmet(FUNCODEREF(YevalSast_linearizeYassoc),LITREF(lit_126),T137,ENVNUL,PNUL,sloc(295));
  T138 = YevalSast_linearizeYassoc;
  VARSET(YevalSast_linearizeYassoc,T138);
  lit_128 = YPPsym((P)"assocq");
  lit_129 = YPPlist(2,YPPsym((P)"x"),YPPsym((P)"l"));
  T139 = YPsig(LITREF(lit_129),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_73 = YPmet(FUNCODEREF(fun_assocq_73),LITREF(lit_128),T139,ENVNUL,PNUL,sloc(298));
  T141 = VARREF_OR(YevalSast_linearizeYassocq,YPfalse);
  T142 = fun_assocq_73;
  T140 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T141,T142);
  VARSET(YevalSast_linearizeYassocq,T140);
  lit_130 = YPPsym((P)"gather-temporaries!");
  lit_131 = YPPlist(1,YPPsym((P)"o"));
  lit_132 = YPPlist(1,YPPsym((P)"def"));
  T144 = YPsig(LITREF(lit_132),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_74 = YPmet(FUNCODEREF(fun_74),YPfalse,T144,ENVNUL,PNUL,sloc(307));
  T143 = YPsig(LITREF(lit_131),YPPlist(1,VARREF(YevalSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_75 = YPmet(FUNCODEREF(fun_gather_temporariesX_75),LITREF(lit_130),T143,ENVNUL,PNUL,sloc(305));
  T146 = VARREF_OR(YevalSast_linearizeYgather_temporariesX,YPfalse);
  T147 = fun_gather_temporariesX_75;
  T145 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T146,T147);
  VARSET(YevalSast_linearizeYgather_temporariesX,T145);
  lit_133 = YPPsym((P)"collect-temporaries!");
  lit_134 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T148 = YPsig(LITREF(lit_134),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_76 = YPmet(FUNCODEREF(fun_collect_temporariesX_76),LITREF(lit_133),T148,ENVNUL,PNUL,sloc(311));
  T150 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T151 = fun_collect_temporariesX_76;
  T149 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T150,T151);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T149);
  lit_135 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T152 = YPsig(LITREF(lit_135),YPPlist(3,VARREF(YevalSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_77 = YPmet(FUNCODEREF(fun_collect_temporariesX_77),LITREF(lit_133),T152,ENVNUL,PNUL,sloc(314));
  T154 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T155 = fun_collect_temporariesX_77;
  T153 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T154,T155);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T153);
  lit_136 = YPPsym((P)"prepend-renamings");
  lit_137 = YPPlist(3,YPPsym((P)"x"),YPPsym((P)"y"),YPPsym((P)"r"));
  T156 = YPsig(LITREF(lit_137),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYprepend_renamings = YPmet(FUNCODEREF(YevalSast_linearizeYprepend_renamings),LITREF(lit_136),T156,ENVNUL,PNUL,sloc(321));
  T157 = YevalSast_linearizeYprepend_renamings;
  VARSET(YevalSast_linearizeYprepend_renamings,T157);
  lit_138 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T158 = YPsig(LITREF(lit_138),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_79 = YPmet(FUNCODEREF(fun_collect_temporariesX_79),LITREF(lit_133),T158,ENVNUL,PNUL,sloc(328));
  T160 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T161 = fun_collect_temporariesX_79;
  T159 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T160,T161);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T159);
  lit_139 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  lit_140 = YPPlist(1,YPPsym((P)"b"));
  T166 = YPsig(LITREF(lit_140),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T165 = fun_80 = YPmet(FUNCODEREF(fun_80),YPfalse,T166,ENVNUL,PNUL,sloc(340));
  T164 = YPsig(LITREF(lit_139),YPPlist(3,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T163 = fun_collect_temporariesX_81 = YPmet(FUNCODEREF(fun_collect_temporariesX_81),LITREF(lit_133),T164,ENVNUL,PNUL,sloc(338));
  T169 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T170 = fun_collect_temporariesX_81;
  T168 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T169,T170);
  T167 = VARSET(YevalSast_linearizeYcollect_temporariesX,T168);
  T162 = T167;
  return T162;
}

P YevalSast_linearizeY___main_2___() {
  P T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15;
  P T16,T17,T18,T19,T20,T21,T22,T23,T24,T25,T26,T27,T28,T29,T30,T31;
  P T32,T33,T34,T35,T36,T37,T38,T39,T40,T41,T42,T43,T44,T45,T46,T47;
  P T48,T49,T50,T51,T52,T53,T54,T55,T56,T57,T58,T59,T60,T61,T62,T63;
  P T64,T65,T66,T67,T68;
DEFCREGS();
  lit_141 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"flat-fun"),YPPsym((P)"r"));
  T0 = YPsig(LITREF(lit_141),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_82 = YPmet(FUNCODEREF(fun_collect_temporariesX_82),LITREF(lit_133),T0,ENVNUL,PNUL,sloc(347));
  T2 = VARREF_OR(YevalSast_linearizeYcollect_temporariesX,YPfalse);
  T3 = fun_collect_temporariesX_82;
  T1 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T2,T3);
  VARSET(YevalSast_linearizeYcollect_temporariesX,T1);
  lit_142 = YPPsym((P)"adjoin-temporary-variables!");
  lit_143 = YPPlist(2,YPPsym((P)"flat-fun"),YPPsym((P)"new-bindings"));
  T4 = YPsig(LITREF(lit_143),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_83 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_83),LITREF(lit_142),T4,ENVNUL,PNUL,sloc(359));
  T6 = VARREF_OR(YevalSast_linearizeYadjoin_temporary_variablesX,YPfalse);
  T7 = fun_adjoin_temporary_variablesX_83;
  T5 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T6,T7);
  VARSET(YevalSast_linearizeYadjoin_temporary_variablesX,T5);
  lit_144 = YPPsym((P)"<renamed-local-binding>");
  T9 = (P)YPpair(VARREF(YevalSastYLlocal_bindingG),Ynil);
  T8 = XCALL2(1,VARREF(YgooSclassYfab_class),LITREF(lit_144),T9);
  VARSET(YevalSast_linearizeYLrenamed_local_bindingG,T8);
  lit_145 = YPPsym((P)"binding-index");
  lit_146 = YPPlist(1,YPPsym((P)"_x"));
  T10 = YPsig(LITREF(lit_146),YPPlist(1,VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_84 = YPmet(FUNCODEREF(fun_binding_index_84),LITREF(lit_145),T10,ENVNUL,PNUL,sloc(369));
  T12 = VARREF_OR(YevalSastYbinding_index,YPfalse);
  T13 = fun_binding_index_84;
  T11 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T12,T13);
  VARSET(YevalSastYbinding_index,T11);
  lit_147 = YPPsym((P)"binding-index-setter");
  lit_148 = YPPlist(2,YPPsym((P)"_z"),YPPsym((P)"_x"));
  T14 = YPsig(LITREF(lit_148),YPPlist(2,VARREF(YLanyG),VARREF(YevalSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_85 = YPmet(FUNCODEREF(fun_binding_index_setter_85),LITREF(lit_147),T14,ENVNUL,PNUL,sloc(369));
  T16 = VARREF_OR(YevalSastYbinding_index_setter,YPfalse);
  T17 = fun_binding_index_setter_85;
  T15 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T16,T17);
  VARSET(YevalSastYbinding_index_setter,T15);
  XCALL5(1,VARREF(YgooSclassYPprop),VARREF(YevalSast_linearizeYLrenamed_local_bindingG),VARREF(YevalSastYbinding_index),VARREF(YevalSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  DYNDEFSET(YevalSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_149 = YPPsym((P)"new-renamed-binding");
  lit_150 = YPPlist(1,YPPsym((P)"binding"));
  T18 = YPsig(LITREF(lit_150),YPPlist(1,VARREF(YevalSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_86 = YPmet(FUNCODEREF(fun_new_renamed_binding_86),LITREF(lit_149),T18,ENVNUL,PNUL,sloc(373));
  T20 = VARREF_OR(YevalSast_linearizeYnew_renamed_binding,YPfalse);
  T21 = fun_new_renamed_binding_86;
  T19 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T20,T21);
  VARSET(YevalSast_linearizeYnew_renamed_binding,T19);
  VARSET(YevalSast_linearizeYTregister_passiveQT,YPfalse);
  lit_151 = YPPsym((P)"register-allocate!");
  lit_152 = YPPlist(2,YPPsym((P)"o"),YPPsym((P)"register-passive?"));
  lit_153 = Ynil;
  lit_154 = YPPlist(1,YPPsym((P)"def"));
  T25 = YPsig(LITREF(lit_154),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_87 = YPmet(FUNCODEREF(fun_87),YPfalse,T25,ENVNUL,PNUL,sloc(388));
  T24 = YPsig(LITREF(lit_153),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T24,ENVNUL,PNUL,sloc(387));
  T23 = YPsig(LITREF(lit_153),Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_89 = YPmet(FUNCODEREF(fun_89),YPfalse,T23,ENVNUL,PNUL,sloc(387));
  T22 = YPsig(LITREF(lit_152),YPPlist(2,VARREF(YevalSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_90 = YPmet(FUNCODEREF(fun_register_allocateX_90),LITREF(lit_151),T22,ENVNUL,PNUL,sloc(386));
  T27 = VARREF_OR(YevalSast_linearizeYregister_allocateX,YPfalse);
  T28 = fun_register_allocateX_90;
  T26 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T27,T28);
  VARSET(YevalSast_linearizeYregister_allocateX,T26);
  lit_155 = YPPsym((P)"allocate-register");
  lit_156 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T29 = YPsig(LITREF(lit_156),YPPlist(3,VARREF(YevalSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  YevalSast_linearizeYallocate_register = YPmet(FUNCODEREF(YevalSast_linearizeYallocate_register),LITREF(lit_155),T29,ENVNUL,PNUL,sloc(391));
  T30 = YevalSast_linearizeYallocate_register;
  VARSET(YevalSast_linearizeYallocate_register,T30);
  lit_157 = YPPsym((P)"collect-registers!");
  lit_158 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T31 = YPsig(LITREF(lit_158),YPPlist(3,VARREF(YevalSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_92 = YPmet(FUNCODEREF(fun_collect_registersX_92),LITREF(lit_157),T31,ENVNUL,PNUL,sloc(397));
  T33 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T34 = fun_collect_registersX_92;
  T32 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T33,T34);
  VARSET(YevalSast_linearizeYcollect_registersX,T32);
  lit_159 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T35 = YPsig(LITREF(lit_159),YPPlist(3,VARREF(YevalSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_93 = YPmet(FUNCODEREF(fun_collect_registersX_93),LITREF(lit_157),T35,ENVNUL,PNUL,sloc(401));
  T37 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T38 = fun_collect_registersX_93;
  T36 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T37,T38);
  VARSET(YevalSast_linearizeYcollect_registersX,T36);
  lit_160 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T39 = YPsig(LITREF(lit_160),YPPlist(3,VARREF(YevalSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_94 = YPmet(FUNCODEREF(fun_collect_registersX_94),LITREF(lit_157),T39,ENVNUL,PNUL,sloc(409));
  T41 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T42 = fun_collect_registersX_94;
  T40 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T41,T42);
  VARSET(YevalSast_linearizeYcollect_registersX,T40);
  lit_161 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  lit_162 = YPPlist(1,YPPsym((P)"def"));
  T44 = YPsig(LITREF(lit_162),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_95 = YPmet(FUNCODEREF(fun_95),YPfalse,T44,ENVNUL,PNUL,sloc(416));
  T43 = YPsig(LITREF(lit_161),YPPlist(3,VARREF(YevalSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_96 = YPmet(FUNCODEREF(fun_collect_registersX_96),LITREF(lit_157),T43,ENVNUL,PNUL,sloc(414));
  T46 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T47 = fun_collect_registersX_96;
  T45 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T46,T47);
  VARSET(YevalSast_linearizeYcollect_registersX,T45);
  lit_163 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T48 = YPsig(LITREF(lit_163),YPPlist(3,VARREF(YevalSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_97 = YPmet(FUNCODEREF(fun_collect_registersX_97),LITREF(lit_157),T48,ENVNUL,PNUL,sloc(419));
  T50 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T51 = fun_collect_registersX_97;
  T49 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T50,T51);
  VARSET(YevalSast_linearizeYcollect_registersX,T49);
  lit_164 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T52 = YPsig(LITREF(lit_164),YPPlist(3,VARREF(YevalSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_98 = YPmet(FUNCODEREF(fun_collect_registersX_98),LITREF(lit_157),T52,ENVNUL,PNUL,sloc(425));
  T54 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T55 = fun_collect_registersX_98;
  T53 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T54,T55);
  VARSET(YevalSast_linearizeYcollect_registersX,T53);
  lit_165 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T56 = YPsig(LITREF(lit_165),YPPlist(3,VARREF(YevalSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_99 = YPmet(FUNCODEREF(fun_collect_registersX_99),LITREF(lit_157),T56,ENVNUL,PNUL,sloc(428));
  T58 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T59 = fun_collect_registersX_99;
  T57 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T58,T59);
  VARSET(YevalSast_linearizeYcollect_registersX,T57);
  lit_166 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T60 = YPsig(LITREF(lit_166),YPPlist(3,VARREF(YevalSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_100 = YPmet(FUNCODEREF(fun_collect_registersX_100),LITREF(lit_157),T60,ENVNUL,PNUL,sloc(432));
  T62 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T63 = fun_collect_registersX_100;
  T61 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T62,T63);
  VARSET(YevalSast_linearizeYcollect_registersX,T61);
  lit_167 = YPPlist(3,YPPsym((P)"o"),YPPsym((P)"f"),YPPsym((P)"val?"));
  T64 = YPsig(LITREF(lit_167),YPPlist(3,VARREF(YevalSastYLloopG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_101 = YPmet(FUNCODEREF(fun_collect_registersX_101),LITREF(lit_157),T64,ENVNUL,PNUL,sloc(436));
  T66 = VARREF_OR(YevalSast_linearizeYcollect_registersX,YPfalse);
  T67 = fun_collect_registersX_101;
  T65 = XCALL2(1,VARREF(YgooSfunYPdefine_method),T66,T67);
  VARSET(YevalSast_linearizeYcollect_registersX,T65);
  T68 = YPfalse;
  return T68;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_goo;
extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_evalSast;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSclass;
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
extern MODULE_INFO module_info_gooScolsScycle;
extern MODULE_INFO module_info_gooSloc;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooSioSread;
extern MODULE_INFO module_info_gooSlate_macros;

static USE_INFO use_infos[] = {
  {&module_info_goo},
  {&module_info_gooSboot},
  {&module_info_evalSast},
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
  {"<functions>", &module_info_evalSast, NULL},
  {"fun-refs", &module_info_gooSboot, NULL},
  {"<map>", &module_info_gooScolsSmap, NULL},
  {"src-loc-file", &module_info_gooSboot, NULL},
  {"%class-ancestors-setter", &module_info_gooSboot, NULL},
  {"type-error", &module_info_gooSboot, NULL},
  {"%dispatch", &module_info_gooSboot, NULL},
  {"%i&", &module_info_gooSboot, NULL},
  {"signature-arity-setter", &module_info_evalSast, NULL},
  {"fab", &module_info_gooScolsScol, NULL},
  {"match-sublist", &module_info_gooSmacros, NULL},
  {"<type>", &module_info_gooSboot, NULL},
  {"ct-also", &module_info_gooSboot, NULL},
  {"floor/", &module_info_gooSmath, NULL},
  {"global-box-value", &module_info_evalSast, NULL},
  {"<str-tab>", &module_info_gooScolsStab, NULL},
  {"<error>", &module_info_gooSconditions, NULL},
  {"dv", &module_info_gooSboot, NULL},
  {"<handler>", &module_info_gooSconditions, NULL},
  {"%tup", &module_info_gooSboot, NULL},
  {"application-arguments", &module_info_evalSast, NULL},
  {"@telt", &module_info_gooSboot, NULL},
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
  {"%prop-elt", &module_info_gooSboot, NULL},
  {"dlet", &module_info_gooSmacros, NULL},
  {"elt!", &module_info_gooScolsScolx, NULL},
  {"%binding-name", &module_info_gooSboot, NULL},
  {"now-setter", &module_info_gooScolsScol, NULL},
  {"@tlen", &module_info_gooSboot, NULL},
  {"arithmetic-error", &module_info_gooSboot, NULL},
  {"%vnm-setter", &module_info_gooSboot, NULL},
  {"assignment-reference", &module_info_evalSast, NULL},
  {"rep", &module_info_gooSboot, NULL},
  {"application-function", &module_info_evalSast, NULL},
  {"%sig-val", &module_info_gooSboot, NULL},
  {"module-mangled-string-name", &module_info_evalSast, NULL},
  {"@=", &module_info_gooSboot, NULL},
  {"%relt-setter", &module_info_gooSboot, NULL},
  {"%loc-off-setter", &module_info_gooSboot, NULL},
  {"num-to-str", &module_info_gooSmath, NULL},
  {"locals-bindings-setter", &module_info_evalSast, NULL},
  {"application-tail?", &module_info_evalSast, NULL},
  {"cat!", &module_info_gooScolsSseqx, NULL},
  {"@elt", &module_info_gooSboot, NULL},
  {"fix-let-body", &module_info_evalSast, NULL},
  {"find", &module_info_gooScolsScol, NULL},
  {"@isa?", &module_info_gooSboot, NULL},
  {"function-nary?", &module_info_evalSast, NULL},
  {"type-class", &module_info_gooSboot, NULL},
  {"t<", &module_info_gooStypes, NULL},
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
  {"property-error-generic", &module_info_gooSconditions, NULL},
  {"%loc-val-setter", &module_info_gooSboot, NULL},
  {"reference-called-function?-setter", &module_info_evalSast, NULL},
  {"<dynamic-assignment>", &module_info_evalSast, NULL},
  {"exported", &module_info_gooSmacros, NULL},
  {"signature-nary?", &module_info_evalSast, NULL},
  {"sqrt", &module_info_gooSmath, NULL},
  {"unknown-function-error", &module_info_gooSboot, NULL},
  {"%i!", &module_info_gooSboot, NULL},
  {"sub*", &module_info_gooScolsSseq, NULL},
  {"<str>", &module_info_gooSboot, NULL},
  {"%sp-reg-setter", &module_info_gooSboot, NULL},
  {"%class-mets-setter", &module_info_gooSboot, NULL},
  {"<fix-let>", &module_info_evalSast, NULL},
  {"reference-frame-number", &module_info_evalSast, NULL},
  {"map2", &module_info_gooSmacros, NULL},
  {"%it/", &module_info_gooSboot, NULL},
  {"binding-inferred-type-setter", &module_info_evalSast, NULL},
  {"find-getter", &module_info_gooSclass, NULL},
  {"quote", &module_info_gooSboot, NULL},
  {"mod+", &module_info_gooSmath, NULL},
  {"unexec", &module_info_gooSboot, NULL},
  {"binding-kind", &module_info_evalSast, NULL},
  {"unchecked-runtime-environment", &module_info_evalSast, NULL},
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
  {"%process-module", &module_info_gooSboot, NULL},
  {"property-not-found-error", &module_info_gooSboot, NULL},
  {"*early-classes*", &module_info_gooSboot, NULL},
  {"=", &module_info_gooSmath, NULL},
  {"find-or", &module_info_gooScolsScol, NULL},
  {"match-atom", &module_info_gooSmacros, NULL},
  {"trunc", &module_info_gooSmath, NULL},
  {"<file-port>", &module_info_gooSioSport, NULL},
  {"%i<", &module_info_gooSboot, NULL},
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
  {"module-mangled-string-name-setter", &module_info_evalSast, NULL},
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
  {"<regular-application>", &module_info_evalSast, NULL},
  {"program-line", &module_info_evalSast, NULL},
  {"empty?", &module_info_gooSmacros, NULL},
  {"<seq>", &module_info_gooSboot, NULL},
  {"<arguments>", &module_info_evalSast, NULL},
  {"class-parents", &module_info_gooSboot, NULL},
  {"tail", &module_info_gooSboot, NULL},
  {"pack", &module_info_gooSpacker, NULL},
  {"tup", &module_info_gooSboot, NULL},
  {"elt-setter", &module_info_gooScolsScolx, NULL},
  {"modincf", &module_info_gooSmath, NULL},
  {"%bb", &module_info_gooSboot, NULL},
  {"nil", &module_info_gooSboot, NULL},
  {"<dynamic-definition>", &module_info_evalSast, NULL},
  {"nul", &module_info_gooSboot, NULL},
  {"sig-nary?", &module_info_gooSboot, NULL},
  {"<return-type-error>", &module_info_gooSconditions, NULL},
  {"class-props", &module_info_gooSboot, NULL},
  {"<packer>", &module_info_gooSpacker, NULL},
  {"to-upper", &module_info_gooSmath, NULL},
  {"<local-binding>", &module_info_evalSast, NULL},
  {"<port>", &module_info_gooSioSport, NULL},
  {"%define-method", &module_info_gooSfun, NULL},
  {"%fun-cache-setter", &module_info_gooSboot, NULL},
  {"%%sym", &module_info_gooSboot, NULL},
  {"sig-unification-vars", &module_info_gooSboot, NULL},
  {"zip", &module_info_gooScolsSzip, NULL},
  {"@head", &module_info_gooSboot, NULL},
  {"<simple-condition>", &module_info_gooSconditions, NULL},
  {"quasiquote", &module_info_gooSboot, NULL},
  {"<seq.>", &module_info_gooSboot, NULL},
  {"<sym>", &module_info_gooSboot, NULL},
  {"<col!>", &module_info_gooSboot, NULL},
  {"@@empty?", &module_info_gooSboot, NULL},
  {"%loc-val", &module_info_gooSboot, NULL},
  {"@all2?", &module_info_gooSboot, NULL},
  {"binding-inferred-type", &module_info_evalSast, NULL},
  {"popf", &module_info_gooSmacros, NULL},
  {"prop-bound?", &module_info_gooSclass, NULL},
  {"loc", &module_info_gooSboot, NULL},
  {"msg", &module_info_gooSconditions, NULL},
  {"%class-direct-props", &module_info_gooSboot, NULL},
  {"global-box-value-setter", &module_info_evalSast, NULL},
  {"mod", &module_info_gooSmath, NULL},
  {"narity-error", &module_info_gooSboot, NULL},
  {"compile-time-program", &module_info_evalSast, NULL},
  {"<sig>", &module_info_gooSboot, NULL},
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
  {"do2", &module_info_gooScolsSseq, NULL},
  {"%raw-met-call", &module_info_gooSboot, NULL},
  {"no-applicable-methods-error", &module_info_gooSboot, NULL},
  {"<module>", &module_info_evalSast, NULL},
  {"fun-arity", &module_info_gooSfun, NULL},
  {"%eof-object", &module_info_gooSboot, NULL},
  {"%vm-box-val-setter", &module_info_gooSboot, NULL},
  {"<reference>", &module_info_evalSast, NULL},
  {"tab-shrink-threshold", &module_info_gooScolsStab, NULL},
  {"%gen-cache-arg-pos-setter", &module_info_gooSboot, NULL},
  {"%loc-off", &module_info_gooSboot, NULL},
  {"nul-prop", &module_info_gooSboot, NULL},
  {"<out-port>", &module_info_gooSioSport, NULL},
  {"%met", &module_info_gooSboot, NULL},
  {"%def-regs", &module_info_gooSboot, NULL},
  {"<unbound-error>", &module_info_gooSconditions, NULL},
  {"fold", &module_info_gooScolsScol, NULL},
  {"for", &module_info_gooSmacros, NULL},
  {"environment-uses-modules", &module_info_evalSast, NULL},
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
  {"push", &module_info_gooScolsSseq, NULL},
  {"emit", &module_info_gooSioSwrite, NULL},
  {"%rnul", &module_info_gooSboot, NULL},
  {"use", &module_info_gooSboot, NULL},
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
  {"function-free", &module_info_evalSast, NULL},
  {"min", &module_info_gooSmag, NULL},
  {"%vpc", &module_info_gooSboot, NULL},
  {"<ast-generic>", &module_info_evalSast, NULL},
  {"file-opening-error-filename", &module_info_gooSconditions, NULL},
  {"~==", &module_info_gooSmath, NULL},
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
  {"constant-value", &module_info_evalSast, NULL},
  {"odd?", &module_info_gooSmath, NULL},
  {"asin", &module_info_gooSmath, NULL},
  {"%class-id-setter", &module_info_gooSboot, NULL},
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
  {"sig-specs-setter", &module_info_gooSboot, NULL},
  {"%build-runtime-modules", &module_info_gooSboot, NULL},
  {"<product>", &module_info_gooSboot, NULL},
  {"%head", &module_info_gooSboot, NULL},
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
  {"loc-val-setter", &module_info_gooSloc, NULL},
  {"%class-direct-props-setter", &module_info_gooSboot, NULL},
  {"head", &module_info_gooSboot, NULL},
  {"def-list", &module_info_gooScolsSlst, NULL},
  {"function-ref-count-setter", &module_info_evalSast, NULL},
  {"sig-specs", &module_info_gooSboot, NULL},
  {"t*", &module_info_gooSboot, NULL},
  {"%sig-specs", &module_info_gooSboot, NULL},
  {"del-vals", &module_info_gooScolsSseq, NULL},
  {"<union>", &module_info_gooSboot, NULL},
  {"class-ancestors", &module_info_gooSboot, NULL},
  {"%snul", &module_info_gooSboot, NULL},
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
  {"<programs>", &module_info_evalSast, NULL},
  {"%class-forward-setter", &module_info_gooSboot, NULL},
  {"range-error-key", &module_info_gooSconditions, NULL},
  {"as-lst", &module_info_evalSast, NULL},
  {"%max-stack-len", &module_info_gooSboot, NULL},
  {"def-programs", &module_info_evalSast, NULL},
  {"%ib", &module_info_gooSboot, NULL},
  {"binding-module-name", &module_info_evalSast, NULL},
  {"%symbols", &module_info_gooSboot, NULL},
  {"loop-continue", &module_info_evalSast, NULL},
  {"@oelt-setter", &module_info_gooSboot, NULL},
  {"function-debug-name-setter", &module_info_evalSast, NULL},
  {"env-object-name", &module_info_evalSast, NULL},
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
  {"now", &module_info_gooScolsScol, NULL},
  {"load-in", &module_info_evalSast, NULL},
  {"function-adjectives", &module_info_evalSast, NULL},
  {"@tup", &module_info_gooSboot, NULL},
  {"address-of", &module_info_gooSmath, NULL},
  {"@pair", &module_info_gooSboot, NULL},
  {"packer-fab", &module_info_gooSpacker, NULL},
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
  {"2nd", &module_info_gooSmacros, NULL},
  {"<local-assignment>", &module_info_evalSast, NULL},
  {"vec", &module_info_gooScolsSvec, NULL},
  {"keyboard-interrupt", &module_info_gooSboot, NULL},
  {"%selt-setter", &module_info_gooSboot, NULL},
  {"<restart>", &module_info_gooSconditions, NULL},
  {"+", &module_info_gooSmath, NULL},
  {"property-unbound-error", &module_info_gooSboot, NULL},
  {"%do-stack-frames", &module_info_gooSboot, NULL},
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
  {"<macro-error>", &module_info_gooSconditions, NULL},
  {"@any?", &module_info_gooSboot, NULL},
  {"<macro-reference>", &module_info_evalSast, NULL},
  {"app-sup", &module_info_gooSmacros, NULL},
  {"stack-overflow-error", &module_info_gooSboot, NULL},
  {"do-named-static-global-bindings", &module_info_evalSast, NULL},
  {"try", &module_info_gooSboot, NULL},
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
  {"arity-error", &module_info_gooSboot, NULL},
  {"join", &module_info_gooScolsSseq, NULL},
  {"binding-dynamic-extent?-setter", &module_info_evalSast, NULL},
  {"%met-prop-len", &module_info_gooSboot, NULL},
  {"open", &module_info_gooSioSport, NULL},
  {"reference-called-function?", &module_info_evalSast, NULL},
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
  {"@telt-setter", &module_info_gooSboot, NULL},
  {"@rev", &module_info_gooSboot, NULL},
  {"as-error", &module_info_gooSboot, NULL},
  {"|", &module_info_gooSmath, NULL},
  {"<no-next-methods-error>", &module_info_gooSconditions, NULL},
  {"met-app?", &module_info_gooSfun, NULL},
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
  {"lower?", &module_info_gooSmath, NULL},
  {"identity", &module_info_gooSfunctional, NULL},
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
  {"function-source", &module_info_evalSast, NULL},
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
  {"reference-offset", CVAR, &YevalSast_linearizeYreference_offset},
  {"program-bindings-setter", CVAR, &YevalSast_linearizeYprogram_bindings_setter},
  {"assoc-key", CVAR, &YevalSast_linearizeYassoc_key},
  {"collect-temporaries!", CVAR, &YevalSast_linearizeYcollect_temporariesX},
  {"closure-creation-free", CVAR, &YevalSast_linearizeYclosure_creation_free},
  {"extract!", CVAR, &YevalSast_linearizeYextractX},
  {"program-definitions", CVAR, &YevalSast_linearizeYprogram_definitions},
  {"as-top-level-forms", CVAR, &YevalSast_linearizeYas_top_level_forms},
  {"form-definitions-setter", CVAR, &YevalSast_linearizeYform_definitions_setter},
  {"closure-creation-index", CVAR, &YevalSast_linearizeYclosure_creation_index},
  {"form-program-setter", CVAR, &YevalSast_linearizeYform_program_setter},
  {"<top-level-form>", CVAR, &YevalSast_linearizeYLtop_level_formG},
  {"box-form", CVAR, &YevalSast_linearizeYbox_form},
  {"<flattened-program>", CVAR, &YevalSast_linearizeYLflattened_programG},
  {"lift!", CVAR, &YevalSast_linearizeYliftX},
  {"lift-procedures!", CVAR, &YevalSast_linearizeYlift_proceduresX},
  {"reference-self?-setter", CVAR, &YevalSast_linearizeYreference_selfQ_setter},
  {"form-program", CVAR, &YevalSast_linearizeYform_program},
  {"program-form-setter", CVAR, &YevalSast_linearizeYprogram_form_setter},
  {"<free-reference>", CVAR, &YevalSast_linearizeYLfree_referenceG},
  {"reference-offset-setter", CVAR, &YevalSast_linearizeYreference_offset_setter},
  {"assocq", CVAR, &YevalSast_linearizeYassocq},
  {"<box-creation>", CVAR, &YevalSast_linearizeYLbox_creationG},
  {"box-reference-setter", CVAR, &YevalSast_linearizeYbox_reference_setter},
  {"<box-write>", CVAR, &YevalSast_linearizeYLbox_writeG},
  {"program-quotations-setter", CVAR, &YevalSast_linearizeYprogram_quotations_setter},
  {"reference-self?", CVAR, &YevalSast_linearizeYreference_selfQ},
  {"extract-things!", CVAR, &YevalSast_linearizeYextract_thingsX},
  {"---main-0---", PVAR, NULL},
  {"closure-creation-index-setter", CVAR, &YevalSast_linearizeYclosure_creation_index_setter},
  {"form-quotations-setter", CVAR, &YevalSast_linearizeYform_quotations_setter},
  {"form-definitions", CVAR, &YevalSast_linearizeYform_definitions},
  {"program-definitions-setter", CVAR, &YevalSast_linearizeYprogram_definitions_setter},
  {"closure-creation-free-setter", CVAR, &YevalSast_linearizeYclosure_creation_free_setter},
  {"assoc-value-setter", CVAR, &YevalSast_linearizeYassoc_value_setter},
  {"adjoin-definition!", CVAR, &YevalSast_linearizeYadjoin_definitionX},
  {"*renaming-bindings-counter*", DVAR, &YevalSast_linearizeYTrenaming_bindings_counterT},
  {"program-quotations", CVAR, &YevalSast_linearizeYprogram_quotations},
  {"<assoc>", CVAR, &YevalSast_linearizeYLassocG},
  {"---main-2---", PVAR, NULL},
  {"split-program", CVAR, &YevalSast_linearizeYsplit_program},
  {"assoc-key-setter", CVAR, &YevalSast_linearizeYassoc_key_setter},
  {"boxify-mutable-bindings", CVAR, &YevalSast_linearizeYboxify_mutable_bindings},
  {"box-reference", CVAR, &YevalSast_linearizeYbox_reference},
  {"new-renamed-binding", CVAR, &YevalSast_linearizeYnew_renamed_binding},
  {"gather-temporaries!", CVAR, &YevalSast_linearizeYgather_temporariesX},
  {"allocate-register", CVAR, &YevalSast_linearizeYallocate_register},
  {"*register-passive?*", CVAR, &YevalSast_linearizeYTregister_passiveQT},
  {"<renamed-local-binding>", CVAR, &YevalSast_linearizeYLrenamed_local_bindingG},
  {"assoc", CVAR, &YevalSast_linearizeYassoc},
  {"program-form", CVAR, &YevalSast_linearizeYprogram_form},
  {"adjoin-temporary-variables!", CVAR, &YevalSast_linearizeYadjoin_temporary_variablesX},
  {"<box-read>", CVAR, &YevalSast_linearizeYLbox_readG},
  {"flatten-seqs", CVAR, &YevalSast_linearizeYflatten_seqs},
  {"box-form-setter", CVAR, &YevalSast_linearizeYbox_form_setter},
  {"---main-1---", PVAR, NULL},
  {"adjoin-free-binding!", CVAR, &YevalSast_linearizeYadjoin_free_bindingX},
  {"program-bindings", CVAR, &YevalSast_linearizeYprogram_bindings},
  {"closurize-main!", CVAR, &YevalSast_linearizeYclosurize_mainX},
  {"prepend-renamings", CVAR, &YevalSast_linearizeYprepend_renamings},
  {"collect-registers!", CVAR, &YevalSast_linearizeYcollect_registersX},
  {"<closure-creation>", CVAR, &YevalSast_linearizeYLclosure_creationG},
  {"form-quotations", CVAR, &YevalSast_linearizeYform_quotations},
  {"insert-box!", CVAR, &YevalSast_linearizeYinsert_boxX},
  {"assoc-value", CVAR, &YevalSast_linearizeYassoc_value},
  {"register-allocate!", CVAR, &YevalSast_linearizeYregister_allocateX},
  {NULL, NVAR, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"reference-offset", NULL},
  {"closure-creation-free", NULL},
  {"program-definitions", NULL},
  {"box-form", NULL},
  {"register-allocate!", NULL},
  {"form-program", NULL},
  {"reference-self?", NULL},
  {"extract-things!", NULL},
  {"<box-write>", NULL},
  {"form-definitions", NULL},
  {"program-quotations", NULL},
  {"<top-level-form>", NULL},
  {"box-reference", NULL},
  {"<box-creation>", NULL},
  {"gather-temporaries!", NULL},
  {"<free-reference>", NULL},
  {"*register-passive?*", NULL},
  {"<renamed-local-binding>", NULL},
  {"closure-creation-index", NULL},
  {"program-form", NULL},
  {"<box-read>", NULL},
  {"flatten-seqs", NULL},
  {"lift!", NULL},
  {"program-bindings", NULL},
  {"closurize-main!", NULL},
  {"<closure-creation>", NULL},
  {"form-quotations", NULL},
  {"insert-box!", NULL},
  {NULL, NULL}
};

extern MODULE_INFO module_info_evalSast_linearize;
MODULE_INFO module_info_evalSast_linearize = {
  "eval/ast-linearize",
  NULL,
  use_infos,
  import_infos,
  binding_infos,
  export_infos,
};

/* MODULES USED: */

extern void load_module_goo (void);
extern void load_module_gooSboot (void);
extern void load_module_evalSast (void);

/* EXPRESSION: */

extern void load_module_evalSast_linearize (void);

void load_module_evalSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_goo();
  load_module_gooSboot();
  load_module_evalSast();

  (P)YevalSast_linearizeY___main_0___();
  (P)YevalSast_linearizeY___main_1___();
  (P)YevalSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
