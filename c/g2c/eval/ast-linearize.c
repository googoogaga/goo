/* GOO 2 C $REVISION: 0.111 $ 
  */

#include "grt.h"

/* MODULE ENVIRONMENT: x8r/ast-linearize */

EXT(YgooSmathYDe,"goo/math","$e");
DEF(Yx8rSast_linearizeYassoc_key,"x8r/ast-linearize","assoc-key");
EXT(YgooSruntimeYalways,"goo/runtime","always");
DEF(Yx8rSast_linearizeYLbox_readG,"x8r/ast-linearize","<box-read>");
EXT(YgooScolsStabYtab_shrink_threshold,"goo/cols/tab","tab-shrink-threshold");
EXT(Yx8rSastYLglobal_referenceG,"x8r/ast","<global-reference>");
EXT(YgooScolsScolYdo3,"goo/cols/col","do3");
DEF(Yx8rSast_linearizeYdo_dynamic_extentX,"x8r/ast-linearize","do-dynamic-extent!");
EXT(YgooSruntimeYcompose,"goo/runtime","compose");
EXT(YgooScolsSstrYascii_limit,"goo/cols/str","ascii-limit");
EXT(YgooScolsScolYfoldA,"goo/cols/col","fold+");
DEF(Yx8rSast_linearizeYprogram_form_setter,"x8r/ast-linearize","program-form-setter");
EXT(Yx8rSastYbinding_info,"x8r/ast","binding-info");
EXT(YgooScolsScolYnxt,"goo/cols/col","nxt");
DEF(Yx8rSast_linearizeYbox_reference_setter,"x8r/ast-linearize","box-reference-setter");
EXT(Yx8rSastYapplication_arguments,"x8r/ast","application-arguments");
EXT(Yx8rSastYDgoo_boot_module_name,"x8r/ast","$goo-boot-module-name");
EXT(Yx8rSastYset_module_environments,"x8r/ast","set-module-environments");
EXT(YgooScolsScolYas_copy,"goo/cols/col","as-copy");
EXT(Ysig_names,"goo/boot","sig-names");
EXT(Yx8rSastYLruntime_assignmentG,"x8r/ast","<runtime-assignment>");
EXT(Yx8rSastYfunction_value,"x8r/ast","function-value");
EXT(YgooScolsSstrYstring_join,"goo/cols/str","string-join");
DEF(Yx8rSast_linearizeYupdate_walkX,"x8r/ast-linearize","update-walk!");
EXT(Yx8rSastYLprogramsG,"x8r/ast","<programs>");
EXT(YgooSmathYto_str,"goo/math","to-str");
DEF(Yx8rSast_linearizeYbox_reference,"x8r/ast-linearize","box-reference");
EXT(YLsymG,"goo/boot","<sym>");
EXT(YgooSmathYisqrt,"goo/math","isqrt");
EXT(Ymet_appQ,"goo/boot","met-app?");
EXT(Yx8rSastYlocals_bindings,"x8r/ast","locals-bindings");
EXT(Yx8rSastYinstall_initial_bindings,"x8r/ast","install-initial-bindings");
EXT(YgooStypesYtE,"goo/types","t=");
EXT(Yx8rSastYsignature_naryQ_setter,"x8r/ast","signature-nary?-setter");
EXT(YgooSmathYlowerQ,"goo/math","lower?");
EXT(YgooScolsSseqY3rd,"goo/cols/seq","3rd");
EXT(Ywrong_number_arguments_error,"goo/boot","wrong-number-arguments-error");
EXT(YTboot_macro_namesT,"goo/boot","*boot-macro-names*");
EXT(Yx8rSastYmonitor_handler,"x8r/ast","monitor-handler");
EXT(YPsymbols,"goo/boot","%symbols");
EXT(Yx8rSastYconstant_index,"x8r/ast","constant-index");
EXT(YOisaQ,"goo/boot","@isa?");
EXT(YgooSmathYlogn,"goo/math","logn");
EXT(Yx8rSastYreference_binding,"x8r/ast","reference-binding");
DEF(Yx8rSast_linearizeYanalyze_calls,"x8r/ast-linearize","analyze-calls");
EXT(Yx8rSastYlocals_body,"x8r/ast","locals-body");
EXT(YgooStypesYanyQ,"goo/types","any?");
EXT(YgooSmathYroundS,"goo/math","round/");
EXT(YgooSmathYK,"goo/math","|");
DEF(Yx8rSast_linearizeYadjoin_free_bindingX,"x8r/ast-linearize","adjoin-free-binding!");
EXT(Yx8rSastYsignature_value,"x8r/ast","signature-value");
EXT(YLcolG,"goo/boot","<col>");
EXT(YgooScolsScolxYzapX,"goo/cols/colx","zap!");
EXT(YgooSmacrosYdo,"goo/macros","do");
EXT(Ytail_setter,"goo/boot","tail-setter");
EXT(YgooScolsScolYfind_or,"goo/cols/col","find-or");
EXT(Yx8rSastYLlocalsG,"x8r/ast","<locals>");
EXT(Yx8rSastYLlocal_assignmentG,"x8r/ast","<local-assignment>");
EXT(YgooSmathYsqrt,"goo/math","sqrt");
EXT(YgooScolsScolYnow_key,"goo/cols/col","now-key");
EXT(YgooScolsSlstYassq,"goo/cols/lst","assq");
EXT(Ysig_arity,"goo/boot","sig-arity");
EXT(YgooScolsSbufYlen_setter,"goo/cols/buf","len-setter");
EXT(Yx8rSastYfunction_debug_name_setter,"x8r/ast","function-debug-name-setter");
EXT(Yfab_gen,"goo/boot","fab-gen");
EXT(Yx8rSastYfunction_index,"x8r/ast","function-index");
EXT(YLpropG,"goo/boot","<prop>");
EXT(YgooSmathYtruncS,"goo/math","trunc/");
EXT(Yobject_parents,"goo/boot","object-parents");
EXT(YgooScolsScolYempty,"goo/cols/col","empty");
EXT(YgooSmathYfabs,"goo/math","fabs");
EXT(YgooScolsScolYdup,"goo/cols/col","dup");
EXT(YgooSmathYneg,"goo/math","neg");
EXT(YgooSmacrosYvar_type,"goo/macros","var-type");
EXT(Yx8rSastYfind_environment_module,"x8r/ast","find-environment-module");
EXT(YgooSmathYceilingS,"goo/math","ceiling/");
DEF(Yx8rSast_linearizeYreference_offset_setter,"x8r/ast-linearize","reference-offset-setter");
EXT(Yx8rSastYLast_signatureG,"x8r/ast","<ast-signature>");
EXT(Yx8rSastYfunction_debug_name,"x8r/ast","function-debug-name");
EXT(YgooSruntimeYread,"goo/runtime","read");
EXT(YgooStypesYtype_elts_setter,"goo/types","type-elts-setter");
EXT(YLgenG,"goo/boot","<gen>");
EXT(YgooSruntimeYDdefault_handler_info,"goo/runtime","$default-handler-info");
EXT(Yx8rSastYenv_object_name,"x8r/ast","env-object-name");
EXT(Yx8rSastYLstatic_global_environmentG,"x8r/ast","<static-global-environment>");
EXT(YgooScolsStabYcase_insensitive_string_equal,"goo/cols/tab","case-insensitive-string-equal");
EXT(Yx8rSastYLsequentialG,"x8r/ast","<sequential>");
DEF(Yx8rSast_linearizeYform_quotations,"x8r/ast-linearize","form-quotations");
DEF(Yx8rSast_linearizeYreference_selfQ_setter,"x8r/ast-linearize","reference-self?-setter");
DEF(Yx8rSast_linearizeYLfree_referenceG,"x8r/ast-linearize","<free-reference>");
EXT(Ytail,"goo/boot","tail");
EXT(Yx8rSastYfix_let_bindings_setter,"x8r/ast","fix-let-bindings-setter");
EXT(Yx8rSastYdo_named_static_global_bindings,"x8r/ast","do-named-static-global-bindings");
EXT(YgooScolsSbufYpop_lastX,"goo/cols/buf","pop-last!");
EXT(YgooScolsScolYnow,"goo/cols/col","now");
EXT(YgooScolsSseqxYalter,"goo/cols/seqx","alter");
EXT(YgooScolsScolYelt_setter,"goo/cols/col","elt-setter");
EXT(YgooScolsScolYelt_default,"goo/cols/col","elt-default");
EXT(Yx8rSastYbinding_global_box,"x8r/ast","binding-global-box");
EXT(YLsimple_handler_infoG,"goo/boot","<simple-handler-info>");
EXT(YgooSmathYA,"goo/math","+");
EXT(YgooSmathYupperQ,"goo/math","upper?");
EXT(YgooScolsStabYtab_growth_factor_setter,"goo/cols/tab","tab-growth-factor-setter");
EXT(YgooSruntimeYinvoke_handler_interactively,"goo/runtime","invoke-handler-interactively");
EXT(Yx8rSastYsequentialize,"x8r/ast","sequentialize");
EXT(YgooSmathYsinh,"goo/math","sinh");
EXT(Yx8rSastYlocals_functions_setter,"x8r/ast","locals-functions-setter");
EXT(Yx8rSastYfunction_source_setter,"x8r/ast","function-source-setter");
EXT(Yx8rSastYLconstantG,"x8r/ast","<constant>");
EXT(YgooScolsScolYdo2,"goo/cols/col","do2");
EXT(YgooScolsSseqYdo_key_vals,"goo/cols/seq","do-key-vals");
DEF(Yx8rSast_linearizeYunconstrained_typeQ,"x8r/ast-linearize","unconstrained-type?");
EXT(Yx8rSastYbinding_index_setter,"x8r/ast","binding-index-setter");
EXT(Ytype_elts,"goo/boot","type-elts");
EXT(YgooScolsSseqY1st,"goo/cols/seq","1st");
EXT(YgooSmathYlog,"goo/math","log");
EXT(YgooStypesY2nd,"goo/types","2nd");
EXT(YLstrG,"goo/boot","<str>");
EXT(YgooSmathYnegQ,"goo/math","neg?");
EXT(YgooScolsScolYlow_elt_setter,"goo/cols/col","low-elt-setter");
EXT(Yx8rSastYfunction_free_setter,"x8r/ast","function-free-setter");
EXT(Yfun_arity,"goo/boot","fun-arity");
EXT(Yvec,"goo/boot","vec");
EXT(YPprop,"goo/boot","%prop");
EXT(YOall2Q,"goo/boot","@all2?");
EXT(YgooSmacrosYfab_setter_name,"goo/macros","fab-setter-name");
EXT(YgooSruntimeYTgensym_counterT,"goo/runtime","*gensym-counter*");
EXT(Yobject_props,"goo/boot","object-props");
EXT(YgooScolsSstepYfirst_then,"goo/cols/step","first-then");
EXT(YgooSmacrosYmatch_sublist,"goo/macros","match-sublist");
DEF(Yx8rSast_linearizeYclosurize_mainX,"x8r/ast-linearize","closurize-main!");
EXT(Yclass_name,"goo/boot","class-name");
EXT(Yx8rSastYfunction_free,"x8r/ast","function-free");
EXT(Ynil,"goo/boot","nil");
EXT(YPisa,"goo/boot","%isa");
EXT(Yx8rSastYreference_called_functionQ_setter,"x8r/ast","reference-called-function?-setter");
EXT(YLmagG,"goo/boot","<mag>");
EXT(Yx8rSastYsignature_naryQ,"x8r/ast","signature-nary?");
EXT(Yx8rSastYLprogramG,"x8r/ast","<program>");
EXT(YgooScolsStabYtab_gc_state,"goo/cols/tab","tab-gc-state");
DEF(Yx8rSast_linearizeYnew_renamed_binding,"x8r/ast-linearize","new-renamed-binding");
EXT(YLlocG,"goo/boot","<loc>");
EXT(YgooScolsSzipYunzip,"goo/cols/zip","unzip");
EXT(YgooScolsSassocYassocs_test_setter,"goo/cols/assoc","assocs-test-setter");
EXT(YgooScolsSseqxYcatX,"goo/cols/seqx","cat!");
EXT(Yx8rSastYLast_functionG,"x8r/ast","<ast-function>");
EXT(YgooScolsScolYLenumG,"goo/cols/col","<enum>");
EXT(Yx8rSastYfix_let_types_setter,"x8r/ast","fix-let-types-setter");
EXT(YgooScolsStabYtab_growth_threshold,"goo/cols/tab","tab-growth-threshold");
EXT(Yx8rSastYreference_called_functionQ,"x8r/ast","reference-called-function?");
EXT(YgooScolsStabYLsetG,"goo/cols/tab","<set>");
EXT(Yx8rSastYbinding_inferred_type_setter,"x8r/ast","binding-inferred-type-setter");
EXT(YgooSmathYeof_object,"goo/math","eof-object");
EXT(Yx8rSastYprogram_register_setter,"x8r/ast","program-register-setter");
EXT(Yprop_setter,"goo/boot","prop-setter");
EXT(YgooSmathYto_lower,"goo/math","to-lower");
EXT(YPvnul,"goo/boot","%vnul");
DEF(Yx8rSast_linearizeYTregister_passiveQT,"x8r/ast-linearize","*register-passive?*");
EXT(Yx8rSastYreference_frame_number,"x8r/ast","reference-frame-number");
EXT(YgooSmathYLbotG,"goo/math","<bot>");
EXT(YgooScolsStabYtab_shrink_threshold_setter,"goo/cols/tab","tab-shrink-threshold-setter");
EXT(YgooSmathYGGG,"goo/math",">>>");
EXT(Yx8rSastYboundQ_reference,"x8r/ast","bound?-reference");
DEF(Yx8rSast_linearizeYform_definitions_setter,"x8r/ast-linearize","form-definitions-setter");
DEF(Yx8rSast_linearizeYLrenamed_local_bindingG,"x8r/ast-linearize","<renamed-local-binding>");
EXT(YgooScolsSstrYstring_split,"goo/cols/str","string-split");
EXT(Yx8rSastYprogram_type,"x8r/ast","program-type");
EXT(YLunionG,"goo/boot","<union>");
EXT(YgooSmathYbitQ,"goo/math","bit?");
EXT(Yclass_ancestors,"goo/boot","class-ancestors");
EXT(YgooSruntimeYrcurry,"goo/runtime","rcurry");
EXT(YgooSmathYoddQ,"goo/math","odd?");
EXT(Yx8rSastYbind_exit_main_fun,"x8r/ast","bind-exit-main-fun");
EXT(Yx8rSastYfab_g2c_module,"x8r/ast","fab-g2c-module");
EXT(YgooScolsScolYfinQ,"goo/cols/col","fin?");
EXT(YgooScolsScolYadd,"goo/cols/col","add");
DEF(Yx8rSast_linearizeYlift_proceduresX,"x8r/ast-linearize","lift-procedures!");
EXT(YgooStypesYlen,"goo/types","len");
EXT(Yx8rSastYglobal_box_value,"x8r/ast","global-box-value");
EXT(YgooSruntimeYdefault_handler_description,"goo/runtime","default-handler-description");
EXT(Yx8rSastYapplication_function,"x8r/ast","application-function");
EXT(Ymay_isaQ,"goo/boot","may-isa?");
EXT(Yfile_opening_error,"goo/boot","file-opening-error");
EXT(YgooSmathYsin,"goo/math","sin");
EXT(YgooSmathYC,"goo/math","^");
EXT(YgooSmathYB,"goo/math","&");
DEF(Yx8rSast_linearizeYgather_temporariesX,"x8r/ast-linearize","gather-temporaries!");
EXT(YgooSmagYmin,"goo/mag","min");
EXT(YgooSmathYpow,"goo/math","pow");
EXT(YgooScolsScolxYdelX,"goo/cols/colx","del!");
EXT(YgooSmacrosYvar_name,"goo/macros","var-name");
EXT(YgooScolsScolYmap_keyed,"goo/cols/col","map-keyed");
EXT(YTboot_macro_module_namesT,"goo/boot","*boot-macro-module-names*");
EXT(YgooSmathYround,"goo/math","round");
EXT(YgooScolsStabYcase_insensitive_string_hash,"goo/cols/tab","case-insensitive-string-hash");
EXT(Yx8rSastYbinding_locative,"x8r/ast","binding-locative");
EXT(YgooScolsSlstYpop,"goo/cols/lst","pop");
EXT(Yx8rSastYfunction_binding,"x8r/ast","function-binding");
EXT(YLvecG,"goo/boot","<vec>");
EXT(YgooScolsScolYelt_or,"goo/cols/col","elt-or");
EXT(Yx8rSastYLargumentsG,"x8r/ast","<arguments>");
EXT(YgooSmathYto_upper,"goo/math","to-upper");
DEF(Yx8rSast_linearizeYadjoin_definitionX,"x8r/ast-linearize","adjoin-definition!");
EXT(YgooSruntimeYLsimple_errorG,"goo/runtime","<simple-error>");
EXT(YgooScolsSseqYvals_to_str,"goo/cols/seq","vals-to-str");
EXT(YOanyQ,"goo/boot","@any?");
EXT(Yfun_mets,"goo/boot","fun-mets");
EXT(YgooSruntimeYcurry,"goo/runtime","curry");
EXT(YgooSmathYceil,"goo/math","ceil");
EXT(YgooScolsSlstYLlistG,"goo/cols/lst","<list>");
EXT(Yx8rSastYLast_genericG,"x8r/ast","<ast-generic>");
EXT(YLtupG,"goo/boot","<tup>");
EXT(Yx8rSastYunwind_protect_cleanup_thunk,"x8r/ast","unwind-protect-cleanup-thunk");
EXT(Yx8rSastYsignature_bindings_setter,"x8r/ast","signature-bindings-setter");
EXT(Yx8rSastYprobe_module,"x8r/ast","probe-module");
EXT(Ygen_src_setter,"goo/boot","gen-src-setter");
EXT(Yx8rSastYassignment_binding,"x8r/ast","assignment-binding");
EXT(YgooSmathYaddress_of,"goo/math","address-of");
EXT(YgooScolsScolYenum,"goo/cols/col","enum");
EXT(YPwith_monitor,"goo/boot","%with-monitor");
DEF(Yx8rSast_linearizeYLbox_creationG,"x8r/ast-linearize","<box-creation>");
DEF(Yx8rSast_linearizeYas_top_level_forms,"x8r/ast-linearize","as-top-level-forms");
EXT(YgooScolsScolYrange_error,"goo/cols/col","range-error");
EXT(YLfloG,"goo/boot","<flo>");
EXT(YgooScolsSbufYlenSfill_setter,"goo/cols/buf","len/fill-setter");
EXT(Yx8rSastYmodule_name_to_relpath,"x8r/ast","module-name-to-relpath");
EXT(Yx8rSastYfunction_signature_setter,"x8r/ast","function-signature-setter");
DEF(Yx8rSast_linearizeYextract_thingsX,"x8r/ast-linearize","extract-things!");
EXT(YgooScolsStabYDpermanent_hash_state,"goo/cols/tab","$permanent-hash-state");
EXT(YPPmacro,"goo/boot","%%macro");
EXT(YLmetG,"goo/boot","<met>");
DEF(Yx8rSast_linearizeYclosure_creation_index,"x8r/ast-linearize","closure-creation-index");
EXT(Yhandler_info_arguments,"goo/boot","handler-info-arguments");
EXT(Yx8rSastYsignature_value_setter,"x8r/ast","signature-value-setter");
EXT(Yx8rSastYLast_methodG,"x8r/ast","<ast-method>");
EXT(Yx8rSastYbinding_inferred_type,"x8r/ast","binding-inferred-type");
EXT(YgooScolsSrangeYfrom,"goo/cols/range","from");
EXT(Ynew,"goo/boot","new");
EXT(YgooSmathYcos,"goo/math","cos");
EXT(Yx8rSastYfunction_signature,"x8r/ast","function-signature");
EXT(YgooSruntimeYLhandler_infoG,"goo/runtime","<handler-info>");
EXT(Yx8rSastYLassignmentG,"x8r/ast","<assignment>");
EXT(YgooSmacrosYEE,"goo/macros","==");
DEF(Yx8rSast_linearizeYbox_form,"x8r/ast-linearize","box-form");
EXT(Yfun_naryQ,"goo/boot","fun-nary?");
EXT(Yx8rSastYfunction_source,"x8r/ast","function-source");
EXT(Yx8rSastYLast_primitive_definitionG,"x8r/ast","<ast-primitive-definition>");
EXT(Yx8rSastYprogram_type_setter,"x8r/ast","program-type-setter");
EXT(Yx8rSastYfunction_self_recursiveQ_setter,"x8r/ast","function-self-recursive?-setter");
EXT(Ygen_src,"goo/boot","gen-src");
EXT(YgooScolsSstrYstring_repeat,"goo/cols/str","string-repeat");
DEF(Yx8rSast_linearizeYassoc,"x8r/ast-linearize","assoc");
EXT(YDmax_int,"goo/boot","$max-int");
EXT(YLsubclassG,"goo/boot","<subclass>");
EXT(Yx8rSastYLast_primitiveG,"x8r/ast","<ast-primitive>");
EXT(Yx8rSastYfunction_bindings,"x8r/ast","function-bindings");
EXT(YgooSmathYrem,"goo/math","rem");
EXT(Yx8rSastYbinding_name,"x8r/ast","binding-name");
EXT(YgooSmathYas_log,"goo/math","as-log");
EXT(YgooSmathY_,"goo/math","-");
EXT(YgooScolsSseqYdel_dups,"goo/cols/seq","del-dups");
EXT(Yx8rSastYLglobal_assignmentG,"x8r/ast","<global-assignment>");
EXT(YgooScolsScolYdel,"goo/cols/col","del");
EXT(Yx8rSastYsignature_bindings,"x8r/ast","signature-bindings");
DEF(Yx8rSast_linearizeYprogram_form,"x8r/ast-linearize","program-form");
EXT(YgooSmacrosYgensym,"goo/macros","gensym");
EXT(YgooScolsSseqxYsub_setter,"goo/cols/seqx","sub-setter");
EXT(Yx8rSastYobjectify_signature,"x8r/ast","objectify-signature");
EXT(YgooScolsSrangeYrange_by,"goo/cols/range","range-by");
EXT(YgooScolsScolYdo_keyed,"goo/cols/col","do-keyed");
EXT(Yx8rSastYdo_static_global_bindings,"x8r/ast","do-static-global-bindings");
EXT(YgooScolsScolYfold,"goo/cols/col","fold");
EXT(YgooSmacrosYpair,"goo/macros","pair");
EXT(Yx8rSastYunchecked_runtime_environment,"x8r/ast","unchecked-runtime-environment");
EXT(Ysig_naryQ,"goo/boot","sig-nary?");
EXT(YgooSmagYGE,"goo/mag",">=");
EXT(YLintG,"goo/boot","<int>");
EXT(YgooScolsSseqxYinsX,"goo/cols/seqx","ins!");
EXT(YgooScolsScolYelts,"goo/cols/col","elts");
EXT(YgooScolsSseqYsub,"goo/cols/seq","sub");
EXT(YgooSruntimeYdescribe_handler,"goo/runtime","describe-handler");
EXT(YisaQ,"goo/boot","isa?");
EXT(Yx8rSastYsignature_specs_setter,"x8r/ast","signature-specs-setter");
EXT(Yprop_value_setter,"goo/boot","prop-value-setter");
EXT(YgooScolsScolYkey_type,"goo/cols/col","key-type");
EXT(YLflatG,"goo/boot","<flat>");
EXT(YgooScolsSstepYLstepG,"goo/cols/step","<step>");
EXT(Yx8rSastYsignature_arity_setter,"x8r/ast","signature-arity-setter");
DEF(Yx8rSast_linearizeYadjoin_temporary_variablesX,"x8r/ast-linearize","adjoin-temporary-variables!");
EXT(YgooSmathYtan,"goo/math","tan");
EXT(YgooScolsScolxYaddX,"goo/cols/colx","add!");
EXT(YgooScolsSseqYfinds,"goo/cols/seq","finds");
EXT(YgooScolsSseqYbelow,"goo/cols/seq","below");
EXT(YPsnul,"goo/boot","%snul");
EXT(YgooSruntimeYbuild_condition_interactively,"goo/runtime","build-condition-interactively");
EXT(YgooSmathYeof_objectQ,"goo/math","eof-object?");
EXT(YgooScolsScolYallQ,"goo/cols/col","all?");
EXT(Ylst,"goo/boot","lst");
EXT(Ynot,"goo/boot","not");
EXT(YgooSmathYposQ,"goo/math","pos?");
EXT(Yx8rSastYbinding_global_box_setter,"x8r/ast","binding-global-box-setter");
EXT(YgooSruntimeYLhandlerG,"goo/runtime","<handler>");
EXT(YgooSmathYfloor,"goo/math","floor");
EXT(YgooSmathYDpi,"goo/math","$pi");
EXT(YgooScolsSbufYLbufG,"goo/cols/buf","<buf>");
EXT(Yx8rSastYmodule_loader_module_type,"x8r/ast","module-loader-module-type");
EXT(YgooSruntimeYdescribe_condition,"goo/runtime","describe-condition");
EXT(YgooScolsSstrYstr_to_num,"goo/cols/str","str-to-num");
EXT(YgooSmacrosYemptyQ,"goo/macros","empty?");
EXT(YgooScolsSrangeYLrangeG,"goo/cols/range","<range>");
EXT(Ysig_unification_vars,"goo/boot","sig-unification-vars");
EXT(Yx8rSastYLalternativeG,"x8r/ast","<alternative>");
DEF(Yx8rSast_linearizeYextractX,"x8r/ast-linearize","extract!");
EXT(Yx8rSastYobjectify_quotation,"x8r/ast","objectify-quotation");
EXT(Yx8rSastYbinding_module_name,"x8r/ast","binding-module-name");
EXT(Yhead_setter,"goo/boot","head-setter");
EXT(Ytype_class,"goo/boot","type-class");
EXT(Yx8rSastYLimmediate_constantG,"x8r/ast","<immediate-constant>");
EXT(Ynul,"goo/boot","nul");
EXT(Yfun_sig_setter,"goo/boot","fun-sig-setter");
EXT(YgooSruntimeYsig,"goo/runtime","sig");
EXT(YgooSruntimeYhandler_matchesQ,"goo/runtime","handler-matches?");
EXT(YgooSmacrosYelt,"goo/macros","elt");
DEF(Yx8rSast_linearizeYprogram_definitions,"x8r/ast-linearize","program-definitions");
EXT(YgooSruntimeYcondition_message,"goo/runtime","condition-message");
DEF(Yx8rSast_linearizeYLclosure_creationG,"x8r/ast-linearize","<closure-creation>");
EXT(YgooScolsStabYLstr_tabG,"goo/cols/tab","<str-tab>");
EXT(YgooScolsScolYmemQ,"goo/cols/col","mem?");
EXT(Yx8rSastYmodule_syntax_environment,"x8r/ast","module-syntax-environment");
EXT(Yx8rSastYapplication_knownQ_setter,"x8r/ast","application-known?-setter");
EXT(YLsingletonG,"goo/boot","<singleton>");
EXT(YgooSruntimeYformat_to_string,"goo/runtime","format-to-string");
EXT(YgooSmathYcontagious_call,"goo/math","contagious-call");
EXT(YgooSmathYcontagious_type,"goo/math","contagious-type");
EXT(YgooScolsScolYany2Q,"goo/cols/col","any2?");
DEF(Yx8rSast_linearizeYast_walk,"x8r/ast-linearize","ast-walk");
EXT(YgooSmathYzeroQ,"goo/math","zero?");
EXT(YLfunG,"goo/boot","<fun>");
EXT(Yx8rSastYapplication_knownQ,"x8r/ast","application-known?");
EXT(YgooScolsSmapYfab_map,"goo/cols/map","fab-map");
EXT(Yx8rSastYbinding_value,"x8r/ast","binding-value");
EXT(Ytup,"goo/boot","tup");
EXT(YgooSruntimeYidentity,"goo/runtime","identity");
EXT(Yx8rSastYload_in,"x8r/ast","load-in");
EXT(YgooSmathYnum_to_str,"goo/math","num-to-str");
EXT(Yhandler_info_message,"goo/boot","handler-info-message");
EXT(Yhead,"goo/boot","head");
EXT(Yprop_boundQ,"goo/boot","prop-bound?");
EXT(Yx8rSastYLglobal_boxG,"x8r/ast","<global-box>");
EXT(YgooSruntimeYcondition_arguments,"goo/runtime","condition-arguments");
EXT(YOlst,"goo/boot","@lst");
EXT(Yx8rSastYLlocal_bindingG,"x8r/ast","<local-binding>");
EXT(YgooSmagYLE,"goo/mag","<=");
EXT(YLnumG,"goo/boot","<num>");
DEF(Yx8rSast_linearizeYreference_offset,"x8r/ast-linearize","reference-offset");
EXT(Yx8rSastYbinding_dynamic_extentQ_setter,"x8r/ast","binding-dynamic-extent?-setter");
EXT(Yprop_getter,"goo/boot","prop-getter");
EXT(YgooScolsSseqYdel_vals,"goo/cols/seq","del-vals");
EXT(Yunexec,"goo/boot","unexec");
EXT(Yx8rSastYsignature_arity,"x8r/ast","signature-arity");
EXT(Yx8rSastYfix_let_body,"x8r/ast","fix-let-body");
EXT(Yx8rSastYbinding_dottedQ_setter,"x8r/ast","binding-dotted?-setter");
EXT(Yx8rSastYfunction_temporaries_setter,"x8r/ast","function-temporaries-setter");
EXT(YgooScolsSseqYrange_check,"goo/cols/seq","range-check");
EXT(YgooSmacrosYmatch_atom,"goo/macros","match-atom");
EXT(Yx8rSastYLapplicationG,"x8r/ast","<application>");
EXT(Yfun_specs,"goo/boot","fun-specs");
EXT(Yx8rSastYfix_let_body_setter,"x8r/ast","fix-let-body-setter");
EXT(YgooScolsScolYnow_setter,"goo/cols/col","now-setter");
EXT(YgooSruntimeYapp_args,"goo/runtime","app-args");
DEF(Yx8rSast_linearizeYregister_allocateX,"x8r/ast-linearize","register-allocate!");
EXT(YgooSmathYatan2,"goo/math","atan2");
EXT(Yx8rSastYLmonitorG,"x8r/ast","<monitor>");
EXT(Yx8rSastYinit_ast,"x8r/ast","init-ast");
EXT(Yx8rSastYmodule_exports,"x8r/ast","module-exports");
EXT(Yx8rSastYbinding_dynamic_extentQ,"x8r/ast","binding-dynamic-extent?");
EXT(YgooStypesYas,"goo/types","as");
DEF(Yx8rSast_linearizeYprogram_quotations,"x8r/ast-linearize","program-quotations");
EXT(YLlstG,"goo/boot","<lst>");
EXT(YTboot_macro_expandersT,"goo/boot","*boot-macro-expanders*");
EXT(YgooScolsScolYfind,"goo/cols/col","find");
EXT(YgooScolsSseqYcat2,"goo/cols/seq","cat2");
DEF(Yx8rSast_linearizeYLflattened_programG,"x8r/ast-linearize","<flattened-program>");
EXT(Yx8rSastYlocals_bindings_setter,"x8r/ast","locals-bindings-setter");
EXT(YgooScolsScolYkeys,"goo/cols/col","keys");
EXT(Yfab_class,"goo/boot","fab-class");
EXT(YDmin_int,"goo/boot","$min-int");
EXT(YTrestarts_okQT,"goo/boot","*restarts-ok?*");
EXT(Yprop_init,"goo/boot","prop-init");
EXT(YLreplace_generic_restartG,"goo/boot","<replace-generic-restart>");
EXT(YgooSmathYchar_Gascii,"goo/math","char->ascii");
EXT(Yx8rSastYmodule_binding,"x8r/ast","module-binding");
EXT(YgooScolsStabYid_hash,"goo/cols/tab","id-hash");
EXT(Yx8rSastYbinding_type_setter,"x8r/ast","binding-type-setter");
EXT(YgooScolsStabYtab_growth_factor,"goo/cols/tab","tab-growth-factor");
EXT(YgooSruntimeYapp_filename,"goo/runtime","app-filename");
EXT(Yx8rSastYmodule_name,"x8r/ast","module-name");
EXT(YgooSruntimeYhandler_function,"goo/runtime","handler-function");
EXT(Yx8rSastYas_lst,"x8r/ast","as-lst");
EXT(Yx8rSastYobjectify_with_subtransaction,"x8r/ast","objectify-with-subtransaction");
EXT(YgooSmathYalphaQ,"goo/math","alpha?");
EXT(Yobject_class,"goo/boot","object-class");
EXT(YgooScolsSmapYLmapG,"goo/cols/map","<map>");
EXT(YgooSmathYcosh,"goo/math","cosh");
DEF(Yx8rSast_linearizeYsplit_program,"x8r/ast-linearize","split-program");
EXT(YgooScolsSzipYzip,"goo/cols/zip","zip");
EXT(Yx8rSastYunwind_protect_protected_thunk,"x8r/ast","unwind-protect-protected-thunk");
EXT(Yx8rSastYLpassive_programG,"x8r/ast","<passive-program>");
DEF(Yx8rSast_linearizeYdo_call_upgradesX,"x8r/ast-linearize","do-call-upgrades!");
EXT(Yclass_descendents,"goo/boot","class-descendents");
EXT(Yx8rSastYsignature_names,"x8r/ast","signature-names");
EXT(YgooSmagYmax,"goo/mag","max");
EXT(Yx8rSastYenvironment_uses_modules,"x8r/ast","environment-uses-modules");
EXT(Yx8rSastYfix_let_bindings,"x8r/ast","fix-let-bindings");
EXT(Ygen_refs_setter,"goo/boot","gen-refs-setter");
EXT(Yprop_value,"goo/boot","prop-value");
EXT(Yx8rSastYLregular_applicationG,"x8r/ast","<regular-application>");
EXT(YgooSruntimeYdefault_handler,"goo/runtime","default-handler");
EXT(Yx8rSastYprogram_register,"x8r/ast","program-register");
DEF(Yx8rSast_linearizeYdo_call_referencesX,"x8r/ast-linearize","do-call-references!");
EXT(Yx8rSastYreport_undefined_global_bindings,"x8r/ast","report-undefined-global-bindings");
EXT(YgooScolsSbufYpush_lastX,"goo/cols/buf","push-last!");
EXT(Yx8rSastYalternative_alternant,"x8r/ast","alternative-alternant");
EXT(YgooScolsSassocYLassocsG,"goo/cols/assoc","<assocs>");
EXT(Yx8rSastYassignment_reference,"x8r/ast","assignment-reference");
EXT(Yx8rSastYfunction_data_refs_setter,"x8r/ast","function-data-refs-setter");
EXT(Yx8rSastYglobal_box_value_setter,"x8r/ast","global-box-value-setter");
DEF(Yx8rSast_linearizeYcollect_temporariesX,"x8r/ast-linearize","collect-temporaries!");
EXT(YgooScolsSseqYlast,"goo/cols/seq","last");
EXT(Yx8rSastYast_evaluate,"x8r/ast","ast-evaluate");
EXT(YgooScolsSseqYins,"goo/cols/seq","ins");
EXT(YgooScolsScolYmap2,"goo/cols/col","map2");
EXT(YLchrG,"goo/boot","<chr>");
EXT(Yx8rSastYbinding_info_setter,"x8r/ast","binding-info-setter");
EXT(YgooScolsSseqYreject,"goo/cols/seq","reject");
EXT(YPdefine_method,"goo/boot","%define-method");
EXT(YgooScolsScolYLtabG,"goo/cols/col","<tab>");
EXT(Yincongruent_method_error,"goo/boot","incongruent-method-error");
EXT(Yx8rSastYsignature_names_setter,"x8r/ast","signature-names-setter");
DEF(Yx8rSast_linearizeYform_program_setter,"x8r/ast-linearize","form-program-setter");
EXT(YgooSmacrosYmatch_unquote,"goo/macros","match-unquote");
EXT(YgooSmathYflo_bits,"goo/math","flo-bits");
EXT(YgooScolsSlstYpush,"goo/cols/lst","push");
EXT(YgooSmathYpower_of_two_ceiling,"goo/math","power-of-two-ceiling");
EXT(YgooSmagYG,"goo/mag",">");
EXT(YgooScolsScolYzap,"goo/cols/col","zap");
EXT(Yx8rSastYLcomputed_programG,"x8r/ast","<computed-program>");
DEF(Yx8rSast_linearizeYdo_do_call_upgradesX,"x8r/ast-linearize","do-do-call-upgrades!");
EXT(Ygen_refs,"goo/boot","gen-refs");
EXT(YgooSruntimeYLerrorG,"goo/runtime","<error>");
EXT(YgooScolsScolYfill,"goo/cols/col","fill");
EXT(Yx8rSastYLboundQG,"x8r/ast","<bound?>");
EXT(YgooScolsSstrYstr,"goo/cols/str","str");
DEF(Yx8rSast_linearizeYLtop_level_formG,"x8r/ast-linearize","<top-level-form>");
EXT(YgooSmathYNE,"goo/math","~=");
EXT(YgooScolsSseqYrange_checkQ,"goo/cols/seq","range-check?");
EXT(Yx8rSastYmodule_target_environment,"x8r/ast","module-target-environment");
EXT(YgooSmathYtanh,"goo/math","tanh");
DEF(Yx8rSast_linearizeYast_contains_funQ,"x8r/ast-linearize","ast-contains-fun?");
EXT(YgooScolsSlstYassqn,"goo/cols/lst","assqn");
EXT(Yx8rSastYbinding_dottedQ,"x8r/ast","binding-dotted?");
EXT(YgooScolsStabYtab_hash,"goo/cols/tab","tab-hash");
EXT(Yx8rSastYbinding_kind,"x8r/ast","binding-kind");
EXT(YgooStypesYtT,"goo/types","t*");
EXT(Yx8rSastYLpredefined_applicationG,"x8r/ast","<predefined-application>");
EXT(Yx8rSastYLfree_environmentG,"x8r/ast","<free-environment>");
EXT(Yx8rSastYmonitor_main_thunk,"x8r/ast","monitor-main-thunk");
EXT(YLseqXG,"goo/boot","<seq!>");
DEF(Yx8rSast_linearizeYboxify_mutable_bindings,"x8r/ast-linearize","boxify-mutable-bindings");
EXT(Yx8rSastYfix_let_arguments,"x8r/ast","fix-let-arguments");
EXT(Yx8rSastYload_module,"x8r/ast","load-module");
EXT(Yx8rSastYapplication_tailQ,"x8r/ast","application-tail?");
EXT(YgooSmathYdigitQ,"goo/math","digit?");
EXT(YPprop_unbound_error,"goo/boot","%prop-unbound-error");
EXT(Yx8rSastYLfab_listG,"x8r/ast","<fab-list>");
EXT(YgooScolsScolYkey_test,"goo/cols/col","key-test");
EXT(Ysig_specs,"goo/boot","sig-specs");
EXT(Yx8rSastYremove_modules_by_nameX,"x8r/ast","remove-modules-by-name!");
EXT(YgooSmathYfloorS,"goo/math","floor/");
EXT(Yfab_sym,"goo/boot","fab-sym");
EXT(Yx8rSastYsignature_specs,"x8r/ast","signature-specs");
EXT(YLsigG,"goo/boot","<sig>");
DEF(Yx8rSast_linearizeYanalyze_call_references,"x8r/ast-linearize","analyze-call-references");
EXT(YgooSruntimeYlist_handlers,"goo/runtime","list-handlers");
EXT(Yx8rSastYreference_frame_offset,"x8r/ast","reference-frame-offset");
EXT(YgooStypesYLproductG,"goo/types","<product>");
EXT(YsubtypeQ,"goo/boot","subtype?");
EXT(Yx8rSastYLbindingG,"x8r/ast","<binding>");
EXT(Yfun_names,"goo/boot","fun-names");
EXT(YgooSmagYL,"goo/mag","<");
EXT(YgooSruntimeYloc_val_setter,"goo/runtime","loc-val-setter");
EXT(YgooSruntimeYformat,"goo/runtime","format");
EXT(Yfind_setter,"goo/boot","find-setter");
EXT(YgooStypesYtA,"goo/types","t+");
EXT(Yx8rSastYfix_let_types,"x8r/ast","fix-let-types");
EXT(YgooScolsSzipYLzipG,"goo/cols/zip","<zip>");
EXT(Yx8rSastYLcompile_timeG,"x8r/ast","<compile-time>");
EXT(Yx8rSastYLmoduleG,"x8r/ast","<module>");
EXT(YgooScolsSbufYbuf,"goo/cols/buf","buf");
EXT(YgooSruntimeYLconditionG,"goo/runtime","<condition>");
EXT(YgooSmathYmod,"goo/math","mod");
EXT(Yx8rSastYLruntime_referenceG,"x8r/ast","<runtime-reference>");
EXT(YgooSmathYLL,"goo/math","<<");
DEF(Yx8rSast_linearizeYform_program,"x8r/ast-linearize","form-program");
EXT(YgooSmathYE,"goo/math","=");
EXT(YgooSmathYabs,"goo/math","abs");
EXT(YgooSmathYasin,"goo/math","asin");
EXT(YgooScolsSrangeYrange,"goo/cols/range","range");
EXT(YgooSmacrosYcat_sym,"goo/macros","cat-sym");
EXT(Yx8rSastYfunction_registers_setter,"x8r/ast","function-registers-setter");
EXT(YgooSmathYS,"goo/math","/");
DEF(Yx8rSast_linearizeYform_quotations_setter,"x8r/ast-linearize","form-quotations-setter");
EXT(YLanyG,"goo/boot","<any>");
EXT(YgooScolsSseqYpos,"goo/cols/seq","pos");
EXT(YgooScolsScycleYLcycleG,"goo/cols/cycle","<cycle>");
DEF(Yx8rSast_linearizeYprogram_quotations_setter,"x8r/ast-linearize","program-quotations-setter");
EXT(YgooScolsSstrYnum_to_str_base,"goo/cols/str","num-to-str-base");
EXT(YgooSmacrosYcat,"goo/macros","cat");
EXT(YgooSruntimeYLsimple_conditionG,"goo/runtime","<simple-condition>");
DEF(Yx8rSast_linearizeYprogram_definitions_setter,"x8r/ast-linearize","program-definitions-setter");
EXT(Yx8rSastYbinding_value_setter,"x8r/ast","binding-value-setter");
EXT(Yx8rSastYfunction_data_refs,"x8r/ast","function-data-refs");
DEF(Yx8rSast_linearizeYdo_do_dynamic_extentX,"x8r/ast-linearize","do-do-dynamic-extent!");
EXT(Ysig_val,"goo/boot","sig-val");
EXT(YgooScolsSassocYassocs_test,"goo/cols/assoc","assocs-test");
DEF(Yx8rSast_linearizeYassoc_value_setter,"x8r/ast-linearize","assoc-value-setter");
EXT(YgooSmacrosYmap,"goo/macros","map");
EXT(Yx8rSastYast_define_binding,"x8r/ast","ast-define-binding");
EXT(YLlogG,"goo/boot","<log>");
EXT(YgooSmathYN,"goo/math","~");
DEF(Yx8rSast_linearizeYassoc_key_setter,"x8r/ast-linearize","assoc-key-setter");
DEF(Yx8rSast_linearizeYLassocG,"x8r/ast-linearize","<assoc>");
EXT(Ytype_object,"goo/boot","type-object");
EXT(Yfun_name_setter,"goo/boot","fun-name-setter");
EXT(YLclassG,"goo/boot","<class>");
EXT(Yerror,"goo/boot","error");
EXT(YgooSmathYevenQ,"goo/math","even?");
EXT(Ykeyboard_interrupt,"goo/boot","keyboard-interrupt");
EXT(YgooScolsStabYtab_test,"goo/cols/tab","tab-test");
EXT(Yx8rSastYLlocal_referenceG,"x8r/ast","<local-reference>");
EXT(Ytype_error,"goo/boot","type-error");
EXT(Yx8rSastYLmodule_bindingG,"x8r/ast","<module-binding>");
EXT(Yx8rSastYmonitor_type,"x8r/ast","monitor-type");
EXT(YgooScolsSstrYTprint_baseT,"goo/cols/str","*print-base*");
EXT(YgooSmathY1_,"goo/math","1-");
EXT(Ysym_name,"goo/boot","sym-name");
EXT(Yclass_direct_props,"goo/boot","class-direct-props");
EXT(YgooSruntimeYloc_val,"goo/runtime","loc-val");
EXT(YgooSruntimeYLrestartG,"goo/runtime","<restart>");
EXT(Yx8rSastYapplication_binding,"x8r/ast","application-binding");
EXT(Yx8rSastYLreal_referenceG,"x8r/ast","<real-reference>");
EXT(YgooScolsStabYtab_growth_threshold_setter,"goo/cols/tab","tab-growth-threshold-setter");
EXT(Yx8rSastYconstant_index_setter,"x8r/ast","constant-index-setter");
EXT(Yadd_prop,"goo/boot","add-prop");
DEF(Yx8rSast_linearizeYassoc_value,"x8r/ast-linearize","assoc-value");
EXT(YLseqG,"goo/boot","<seq>");
EXT(Yx8rSastYassignment_form_setter,"x8r/ast","assignment-form-setter");
EXT(YgooSmathYto_digit,"goo/math","to-digit");
DEF(Yx8rSast_linearizeYclosure_creation_index_setter,"x8r/ast-linearize","closure-creation-index-setter");
EXT(YgooScolsSseqYpick,"goo/cols/seq","pick");
EXT(Yx8rSastYfunction_index_setter,"x8r/ast","function-index-setter");
EXT(YgooSmathYacos,"goo/math","acos");
EXT(Yx8rSastYLdefinitionG,"x8r/ast","<definition>");
EXT(Yfun_name,"goo/boot","fun-name");
EXT(Yx8rSastYbinding_mutableQ,"x8r/ast","binding-mutable?");
EXT(Yx8rSastYruntime_environment,"x8r/ast","runtime-environment");
EXT(Yx8rSastYfunction_body_setter,"x8r/ast","function-body-setter");
EXT(Yx8rSastYfunction_temporaries,"x8r/ast","function-temporaries");
EXT(Yprop_owner,"goo/boot","prop-owner");
DEF(Yx8rSast_linearizeYLbox_writeG,"x8r/ast-linearize","<box-write>");
EXT(YgooScolsSlstYlist,"goo/cols/lst","list");
EXT(YgooSmacrosYrevX,"goo/macros","rev!");
EXT(Yx8rSastYalternative_condition,"x8r/ast","alternative-condition");
EXT(YgooSruntimeYfab_handler,"goo/runtime","fab-handler");
EXT(Yx8rSastYfind_binding,"x8r/ast","find-binding");
EXT(Yx8rSastYbinding_index,"x8r/ast","binding-index");
DEF(Yx8rSast_linearizeYliftX,"x8r/ast-linearize","lift!");
EXT(Yx8rSastYfunction_body,"x8r/ast","function-body");
EXT(YgooScolsSseqYrev,"goo/cols/seq","rev");
EXT(Yx8rSastYLmodule_binding_referenceG,"x8r/ast","<module-binding-reference>");
DEF(Yx8rSast_linearizeYform_definitions,"x8r/ast-linearize","form-definitions");
DEF(Yx8rSast_linearizeYflatten_seqs,"x8r/ast-linearize","flatten-seqs");
DEF(Yx8rSast_linearizeYallocate_register,"x8r/ast-linearize","allocate-register");
EXT(Yclass_parents,"goo/boot","class-parents");
DEF(Yx8rSast_linearizeYreference_selfQ,"x8r/ast-linearize","reference-self?");
EXT(YLoptsG,"goo/boot","<opts>");
EXT(Yfind_getter,"goo/boot","find-getter");
EXT(Yx8rSastYLmodule_loaderG,"x8r/ast","<module-loader>");
EXT(Yunknown_function_error,"goo/boot","unknown-function-error");
DEF(Yx8rSast_linearizeYbox_form_setter,"x8r/ast-linearize","box-form-setter");
EXT(Yx8rSastYconstant_value,"x8r/ast","constant-value");
EXT(Yx8rSastYLast_macro_definitionG,"x8r/ast","<ast-macro-definition>");
EXT(Yx8rSastYmonitor_info,"x8r/ast","monitor-info");
EXT(YgooSruntimeYbuild_condition_for_handler_interactively,"goo/runtime","build-condition-for-handler-interactively");
EXT(YgooSmathYT,"goo/math","*");
EXT(Yx8rSastYbinding_native_toQ,"x8r/ast","binding-native-to?");
EXT(YgooStypesYtQ,"goo/types","t?");
EXT(Yx8rSastYlocals_body_setter,"x8r/ast","locals-body-setter");
DEF(Yx8rSast_linearizeYanalyze_dynamic_extent,"x8r/ast-linearize","analyze-dynamic-extent");
DEF(Yx8rSast_linearizeYclosure_creation_free,"x8r/ast-linearize","closure-creation-free");
EXT(YTmacros_okQT,"goo/boot","*macros-ok?*");
EXT(YgooScolsScolYlow_elt,"goo/cols/col","low-elt");
EXT(YLtypeG,"goo/boot","<type>");
EXT(YgooScolsScolYelt_type,"goo/cols/col","elt-type");
EXT(YgooSmathYNEE,"goo/math","~==");
EXT(Yord_app_mets,"goo/boot","ord-app-mets");
EXT(YgooSmacrosYmatch_empty_list,"goo/macros","match-empty-list");
EXT(Yx8rSastYfree_environment,"x8r/ast","free-environment");
EXT(Yprop_type,"goo/boot","prop-type");
EXT(Yx8rSastYassignment_form,"x8r/ast","assignment-form");
EXT(Yx8rSastYlocals_functions,"x8r/ast","locals-functions");
EXT(YgooSmathYtrunc,"goo/math","trunc");
EXT(Yx8rSastYLunwind_protectG,"x8r/ast","<unwind-protect>");
EXT(Yx8rSastYcompile_time_program,"x8r/ast","compile-time-program");
EXT(YgooScolsScolYitems,"goo/cols/col","items");
EXT(YgooStypesYall2Q,"goo/types","all2?");
DEF(Yx8rSast_linearizeYinsert_boxX,"x8r/ast-linearize","insert-box!");
DEF(Yx8rSast_linearizeYcollect_registersX,"x8r/ast-linearize","collect-registers!");
EXT(Yx8rSastYenvironment_module,"x8r/ast","environment-module");
EXT(Yx8rSastYLfix_letG,"x8r/ast","<fix-let>");
EXT(Yx8rSastYenvironment_bindings,"x8r/ast","environment-bindings");
EXT(YgooScolsScolYfab,"goo/cols/col","fab");
EXT(Yx8rSastYbinding_type,"x8r/ast","binding-type");
EXT(YgooScolsScycleYcycle,"goo/cols/cycle","cycle");
EXT(YgooSmathY1A,"goo/math","1+");
EXT(Yx8rSastYLreferenceG,"x8r/ast","<reference>");
EXT(Yx8rSastYfunction_registers,"x8r/ast","function-registers");
EXT(Yclass_props,"goo/boot","class-props");
EXT(Yx8rSastYmonitor_test,"x8r/ast","monitor-test");
EXT(Yx8rSastYLraw_constantG,"x8r/ast","<raw-constant>");
EXT(Yx8rSastYLbind_exitG,"x8r/ast","<bind-exit>");
EXT(Yx8rSastYfix_let_arguments_setter,"x8r/ast","fix-let-arguments-setter");
EXT(YTreport_prop_unbound_errorsQT,"goo/boot","*report-prop-unbound-errors?*");
DEF(Yx8rSast_linearizeYTrenaming_bindings_counterT,"x8r/ast-linearize","*renaming-bindings-counter*");
EXT(YgooScolsSstrYascii_whitespaces,"goo/cols/str","ascii-whitespaces");
EXT(YLcolXG,"goo/boot","<col!>");
DEF(Yx8rSast_linearizeYclosure_creation_free_setter,"x8r/ast-linearize","closure-creation-free-setter");
EXT(Yx8rSastYalternative_consequent,"x8r/ast","alternative-consequent");
EXT(YgooSmathYatan,"goo/math","atan");
DEF(Yx8rSast_linearizeYassocq,"x8r/ast-linearize","assocq");
EXT(Yx8rSastYdo_module_loader_modules,"x8r/ast","do-module-loader-modules");
EXT(YgooSruntimeYLserious_conditionG,"goo/runtime","<serious-condition>");
EXT(Yx8rSastYfunction_naryQ,"x8r/ast","function-nary?");
DEF(Yx8rSast_linearizeYdo_do_call_referencesX,"x8r/ast-linearize","do-do-call-references!");
EXT(YgooSruntimeYspread,"goo/runtime","spread");
EXT(YgooSruntimeYchoose_handler,"goo/runtime","choose-handler");
EXT(Ygen_add_met,"goo/boot","gen-add-met");
EXT(YgooSmathYGG,"goo/math",">>");
EXT(Yx8rSastYfunction_self_recursiveQ,"x8r/ast","function-self-recursive?");
EXT(Yx8rSastYinit_environment_for_eval,"x8r/ast","init-environment-for-eval");
EXT(YgooSmacrosYnapp,"goo/macros","napp");
EXT(Yfun_val,"goo/boot","fun-val");
EXT(YgooScolsScolYinto,"goo/cols/col","into");
EXT(YgooStypesYtL,"goo/types","t<");

/* FORWARD QUOTATIONS: */

DEFLIT(lit_65);
DEFLIT(lit_76);
DEFLIT(lit_19);
DEFLIT(lit_16);
DEFLIT(lit_97);
DEFLIT(lit_62);
DEFLIT(lit_110);
DEFLIT(lit_36);
DEFLIT(lit_107);
DEFLIT(lit_74);
DEFLIT(lit_78);
DEFLIT(lit_64);
DEFLIT(lit_26);
DEFLIT(lit_27);
DEFLIT(lit_22);
DEFLIT(lit_114);
DEFLIT(lit_0);
DEFLIT(lit_21);
DEFLIT(lit_11);
DEFLIT(lit_113);
DEFLIT(lit_55);
DEFLIT(lit_84);
DEFLIT(lit_17);
DEFLIT(lit_66);
DEFLIT(lit_87);
DEFLIT(lit_3);
DEFLIT(lit_85);
DEFLIT(lit_111);
DEFLIT(lit_41);
DEFLIT(lit_53);
DEFLIT(lit_69);
DEFLIT(lit_44);
DEFLIT(lit_39);
DEFLIT(lit_40);
DEFLIT(lit_43);
DEFLIT(lit_73);
DEFLIT(lit_89);
DEFLIT(lit_58);
DEFLIT(lit_56);
DEFLIT(lit_45);
DEFLIT(lit_92);
DEFLIT(lit_60);
DEFLIT(lit_120);
DEFLIT(lit_116);
DEFLIT(lit_106);
DEFLIT(lit_108);
DEFLIT(lit_119);
DEFLIT(lit_121);
DEFLIT(lit_79);
DEFLIT(lit_32);
DEFLIT(lit_23);
DEFLIT(lit_91);
DEFLIT(lit_47);
DEFLIT(lit_122);
DEFLIT(lit_24);
DEFLIT(lit_63);
DEFLIT(lit_4);
DEFLIT(lit_2);
DEFLIT(lit_117);
DEFLIT(lit_118);
DEFLIT(lit_6);
DEFLIT(lit_68);
DEFLIT(lit_83);
DEFLIT(lit_15);
DEFLIT(lit_34);
DEFLIT(lit_42);
DEFLIT(lit_46);
DEFLIT(lit_70);
DEFLIT(lit_67);
DEFLIT(lit_59);
DEFLIT(lit_57);
DEFLIT(lit_29);
DEFLIT(lit_35);
DEFLIT(lit_72);
DEFLIT(lit_101);
DEFLIT(lit_25);
DEFLIT(lit_28);
DEFLIT(lit_112);
DEFLIT(lit_71);
DEFLIT(lit_5);
DEFLIT(lit_12);
DEFLIT(lit_30);
DEFLIT(lit_77);
DEFLIT(lit_104);
DEFLIT(lit_54);
DEFLIT(lit_88);
DEFLIT(lit_8);
DEFLIT(lit_105);
DEFLIT(lit_50);
DEFLIT(lit_7);
DEFLIT(lit_31);
DEFLIT(lit_48);
DEFLIT(lit_93);
DEFLIT(lit_102);
DEFLIT(lit_94);
DEFLIT(lit_49);
DEFLIT(lit_1);
DEFLIT(lit_98);
DEFLIT(lit_95);
DEFLIT(lit_99);
DEFLIT(lit_18);
DEFLIT(lit_90);
DEFLIT(lit_51);
DEFLIT(lit_115);
DEFLIT(lit_82);
DEFLIT(lit_61);
DEFLIT(lit_38);
DEFLIT(lit_80);
DEFLIT(lit_52);
DEFLIT(lit_96);
DEFLIT(lit_37);
DEFLIT(lit_9);
DEFLIT(lit_100);
DEFLIT(lit_103);
DEFLIT(lit_14);
DEFLIT(lit_81);
DEFLIT(lit_109);
DEFLIT(lit_33);
DEFLIT(lit_10);
DEFLIT(lit_86);
DEFLIT(lit_20);
DEFLIT(lit_75);
DEFLIT(lit_13);

/* FUNCTIONS: */

LOCFOR(fun_assoc_key_0);
LOCFOR(fun_assoc_key_setter_1);
LOCFOR(fun_assoc_value_2);
LOCFOR(fun_assoc_value_setter_3);
FUNFOR(Yx8rSast_linearizeYassoc);
LOCFOR(fun_assocq_5);
LOCFOR(fun_x_1446_6);
LOCFOR(fun_update_walkX_7);
LOCFOR(fun_x_1448_8);
LOCFOR(fun_ast_walk_9);
LOCFOR(fun_box_reference_10);
LOCFOR(fun_box_reference_setter_11);
LOCFOR(fun_box_reference_12);
LOCFOR(fun_box_reference_setter_13);
LOCFOR(fun_box_form_14);
LOCFOR(fun_box_form_setter_15);
LOCFOR(fun_box_reference_16);
LOCFOR(fun_box_reference_setter_17);
LOCFOR(fun_insert_boxX_18);
LOCFOR(fun_insert_boxX_19);
LOCFOR(fun_insert_boxX_20);
LOCFOR(fun_insert_boxX_21);
LOCFOR(fun_insert_boxX_22);
LOCFOR(fun_insert_boxX_23);
LOCFOR(fun_loop_24);
LOCFOR(fun_boxify_mutable_bindings_25);
LOCFOR(fun_do_do_call_referencesX_26);
LOCFOR(fun_do_call_referencesX_27);
LOCFOR(fun_do_call_referencesX_28);
LOCFOR(fun_analyze_call_references_29);
LOCFOR(fun_do_do_dynamic_extentX_30);
LOCFOR(fun_do_dynamic_extentX_31);
LOCFOR(fun_do_dynamic_extentX_32);
LOCFOR(fun_analyze_dynamic_extent_33);
LOCFOR(fun_do_do_call_upgradesX_34);
LOCFOR(fun_do_call_upgradesX_35);
LOCFOR(fun_unconstrained_typeQ_36);
LOCFOR(fun_unconstrained_typeQ_37);
LOCFOR(fun_unconstrained_typeQ_38);
LOCFOR(fun_39);
LOCFOR(fun_do_call_upgradesX_40);
LOCFOR(fun_analyze_calls_41);
LOCFOR(fun_reference_offset_42);
LOCFOR(fun_reference_offset_setter_43);
LOCFOR(fun_reference_selfQ_44);
LOCFOR(fun_reference_selfQ_setter_45);
LOCFOR(fun_liftX_46);
LOCFOR(fun_lift_proceduresX_47);
LOCFOR(fun_lift_proceduresX_48);
LOCFOR(fun_add_49);
LOCFOR(fun_check_50);
LOCFOR(fun_adjoin_free_bindingX_51);
LOCFOR(fun_lift_proceduresX_52);
LOCFOR(fun_lift_proceduresX_53);
LOCFOR(fun_lift_proceduresX_54);
LOCFOR(fun_lift_proceduresX_55);
LOCFOR(fun_lift_proceduresX_56);
LOCFOR(fun_program_form_57);
LOCFOR(fun_program_form_setter_58);
LOCFOR(fun_program_quotations_59);
LOCFOR(fun_program_quotations_setter_60);
LOCFOR(fun_61);
LOCFOR(fun_program_definitions_62);
LOCFOR(fun_program_definitions_setter_63);
LOCFOR(fun_64);
LOCFOR(fun_form_program_65);
LOCFOR(fun_form_program_setter_66);
LOCFOR(fun_form_quotations_67);
LOCFOR(fun_form_quotations_setter_68);
LOCFOR(fun_69);
LOCFOR(fun_form_definitions_70);
LOCFOR(fun_form_definitions_setter_71);
LOCFOR(fun_72);
LOCFOR(fun_closure_creation_index_73);
LOCFOR(fun_closure_creation_index_setter_74);
LOCFOR(fun_closure_creation_free_75);
LOCFOR(fun_closure_creation_free_setter_76);
LOCFOR(fun_flatten_seqs_77);
LOCFOR(fun_inner_78);
LOCFOR(fun_loop_79);
LOCFOR(fun_flatten_seqs_80);
LOCFOR(fun_81);
LOCFOR(fun_as_top_level_forms_82);
LOCFOR(fun_83);
LOCFOR(fun_extract_thingsX_84);
LOCFOR(fun_extractX_85);
LOCFOR(fun_extractX_86);
LOCFOR(fun_extractX_87);
LOCFOR(fun_88);
LOCFOR(fun_extractX_89);
LOCFOR(fun_extractX_90);
LOCFOR(fun_adjoin_definitionX_91);
LOCFOR(fun_split_program_92);
LOCFOR(fun_inner_93);
LOCFOR(fun_loop_94);
LOCFOR(fun_split_program_95);
LOCFOR(fun_loop_96);
LOCFOR(fun_closurize_mainX_97);
LOCFOR(fun_98);
LOCFOR(fun_gather_temporariesX_99);
LOCFOR(fun_collect_temporariesX_100);
LOCFOR(fun_collect_temporariesX_101);
LOCFOR(fun_collect_temporariesX_102);
LOCFOR(fun_collect_temporariesX_103);
LOCFOR(fun_adjoin_104);
LOCFOR(fun_adjoin_temporary_variablesX_105);
LOCFOR(fun_binding_index_106);
LOCFOR(fun_binding_index_setter_107);
LOCFOR(fun_new_renamed_binding_108);
LOCFOR(fun_109);
LOCFOR(fun_110);
LOCFOR(fun_111);
LOCFOR(fun_register_allocateX_112);
LOCFOR(fun_allocate_register_113);
LOCFOR(fun_collect_registersX_114);
LOCFOR(fun_loop_115);
LOCFOR(fun_collect_registersX_116);
LOCFOR(fun_collect_registersX_117);
LOCFOR(fun_118);
LOCFOR(fun_collect_registersX_119);
LOCFOR(fun_collect_registersX_120);
LOCFOR(fun_collect_registersX_121);
LOCFOR(fun_ast_contains_funQ_122);
LOCFOR(fun_walk_123);
LOCFOR(fun_124);
LOCFOR(fun_ast_contains_funQ_125);
extern P Yx8rSast_linearizeY___main_0___ ();
extern P Yx8rSast_linearizeY___main_1___ ();
extern P Yx8rSast_linearizeY___main_2___ ();

/* FUNCTION CODES: */

FUNCODEDEF(fun_assoc_key_0) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_key_setter_1) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYassoc_key));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_2) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_assoc_value_setter_3) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYassoc_value));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(Yx8rSast_linearizeYassoc) {
  P x_,y_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(y_, 1);
loop:
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_key),x_,VARREF(Yx8rSast_linearizeYassoc_value),y_);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_assocq_5) {
  P x_,l_;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(x_, 0);
  ARG(l_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),l_);
  if (T1 != YPfalse) {
    T0 = YPfalse;
  } else {
    T5 = CALL1(1,VARREF(Yhead),l_);
    T4 = CALL1(1,VARREF(Yx8rSast_linearizeYassoc_key),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYEE),x_,T4);
    if (T3 != YPfalse) {
      T6 = CALL1(1,VARREF(Yhead),l_);
      T2 = T6;
    } else {
      T8 = CALL1(1,VARREF(Ytail),l_);
      T7 = CALL2(1,VARREF(Yx8rSast_linearizeYassocq),x_,T8);
      T2 = T7;
    }
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_x_1446_6) {
  P x_1445_;
  P xF1835;
  P setterF1834;
  P getterF1833;
  P propF1832;
  P T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1445_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1445_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1445_);
    propF1832 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1832);
    getterF1833 = T6;
    T8 = CALL1(1,VARREF(Yprop_setter),propF1832);
    setterF1834 = T8;
    T10 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1833,VARREF(Yx8rSastYbinding_value));
    T9 = CALL1(1,VARREF(Ynot),T10);
    if (T9 != YPfalse) {
      T12 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1833);
      if (T12 != YPfalse) {
        T14 = CALL1(1,getterF1833,FREEREF(0));
        xF1835 = T14;
        T16 = CALL2(1,VARREF(YisaQ),xF1835,VARREF(Yx8rSastYLprogramG));
        if (T16 != YPfalse) {
          T18 = CALLN(1,VARREF(YgooSmacrosYnapp),4,FREEREF(1),YPfalse,xF1835,FREEREF(2));
          T17 = CALL2(1,setterF1834,T18,FREEREF(0));
          T15 = T17;
        } else {
          T15 = YPfalse;
        }
        T13 = T15;
        T11 = T13;
      } else {
        T11 = YPfalse;
      }
    } else {
    }
    T20 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1445_);
    a1 = T20;
    x_1445_ = a1;
    goto loop;
    T7 = T19;
    T5 = T7;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_update_walkX_7) {
  P g_,o_,args_;
  P x_1446F1836;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1446_6,4);
  x_1446F1836 = T0;
  FUNINIT(x_1446F1836, 4,o_,g_,args_,x_1446F1836);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1446F1836,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_x_1448_8) {
  P x_1447_;
  P xF1839;
  P getterF1838;
  P propF1837;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_1447_, 0);
loop:
  T2 = CALL1(1,VARREF(YgooScolsScolYfinQ),x_1447_);
  T1 = CALL1(1,VARREF(Ynot),T2);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYnow),x_1447_);
    propF1837 = T4;
    T6 = CALL1(1,VARREF(Yprop_getter),propF1837);
    getterF1838 = T6;
    T8 = CALL2(1,VARREF(YgooSmacrosYEE),getterF1838,VARREF(Yx8rSastYbinding_value));
    T7 = CALL1(1,VARREF(Ynot),T8);
    if (T7 != YPfalse) {
      T10 = CALL2(1,VARREF(Yprop_boundQ),FREEREF(0),getterF1838);
      if (T10 != YPfalse) {
        T12 = CALL1(1,getterF1838,FREEREF(0));
        xF1839 = T12;
        T14 = CALL2(1,VARREF(YisaQ),xF1839,VARREF(Yx8rSastYLprogramG));
        if (T14 != YPfalse) {
          T15 = CALLN(1,VARREF(YgooSmacrosYnapp),4,FREEREF(1),YPfalse,xF1839,FREEREF(2));
          T13 = T15;
        } else {
          T13 = YPfalse;
        }
        T11 = T13;
        T9 = T11;
      } else {
        T9 = YPfalse;
      }
    } else {
    }
    T17 = CALL1(1,VARREF(YgooScolsScolYnxt),x_1447_);
    a1 = T17;
    x_1447_ = a1;
    goto loop;
    T5 = T16;
    T3 = T5;
    T0 = T3;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_ast_walk_9) {
  P g_,o_,args_;
  P x_1448F1840;
  P T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(g_, 0);
  ARG(o_, 1);
  NARGS(args_, 2);
loop:
  T0 = FUNSHELL(1,fun_x_1448_8,4);
  x_1448F1840 = T0;
  FUNINIT(x_1448F1840, 4,o_,g_,args_,x_1448F1840);
  T3 = CALL1(1,VARREF(Yobject_props),o_);
  T2 = CALL1(1,VARREF(YgooScolsScolYenum),T3);
  T1 = CALL1(0,x_1448F1840,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_box_reference_10) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_11) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_12) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_13) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_14) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_form_setter_15) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_16) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_box_reference_setter_17) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYbox_reference));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_18) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYinsert_boxX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_19) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_mutableQ),T2);
  if (T1 != YPfalse) {
    T3 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLbox_readG),VARREF(Yx8rSast_linearizeYbox_reference),o_);
    T0 = T3;
  } else {
    T0 = o_;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_20) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYassignment_reference),o_);
  T3 = CALL1(1,VARREF(Yx8rSastYassignment_form),o_);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  T0 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_reference),T1,VARREF(Yx8rSast_linearizeYbox_form),T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_insert_boxX_21) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T2,T3);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_22) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T5 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_insert_boxX_23) {
  P o_;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYinsert_boxX),T1);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T5 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYboxify_mutable_bindings),T4,T5);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYinsert_boxX),T3);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T2,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_loop_24) {
  P res_,bindings_;
  P creatorF1842;
  P bindingF1841;
  P T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(res_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),FREEREF(0),res_);
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    bindingF1841 = T5;
    T7 = CALL1(1,VARREF(Yx8rSastYbinding_mutableQ),bindingF1841);
    if (T7 != YPfalse) {
      T10 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),bindingF1841);
      T9 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLbox_creationG),VARREF(Yx8rSast_linearizeYbox_reference),T10);
      creatorF1842 = T9;
      T12 = CALL2(1,VARREF(YgooSmacrosYpair),creatorF1842,res_);
      T13 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T12;
      a2 = T13;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T8 = T11;
      T6 = T8;
    } else {
      T15 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = res_;
      a2 = T15;
      res_ = a1;
      bindings_ = a2;
      goto loop;
      T6 = T14;
    }
    T4 = T6;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_boxify_mutable_bindings_25) {
  P form_,bindings_;
  P loopF1843;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(form_, 0);
  ARG(bindings_, 1);
loop:
  T2 = FUNSHELL(1,fun_loop_24,2);
  loopF1843 = T2;
  FUNINIT(loopF1843, 2,form_,loopF1843);
  T3 = CALL2(0,loopF1843,Ynil,bindings_);
  T1 = T3;
  T0 = CALL1(1,VARREF(Yx8rSastYsequentialize),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_referencesX_26) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_27) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_referencesX_28) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_referencesX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(Yx8rSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
    T2 = CALL2(1,VARREF(Yx8rSastYreference_called_functionQ_setter),YPtrue,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_call_references_29) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_call_referencesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_dynamic_extentX_30) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_31) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_dynamic_extentX_32) {
  P o_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYreference_called_functionQ),o_);
  T0 = CALL1(1,VARREF(Ynot),T1);
  if (T0 != YPfalse) {
    T3 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
    T2 = CALL2(1,VARREF(Yx8rSastYbinding_dynamic_extentQ_setter),YPfalse,T3);
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_dynamic_extent_33) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYanalyze_call_references),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_dynamic_extentX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_do_call_upgradesX_34) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL2(1,VARREF(Yx8rSast_linearizeYupdate_walkX),VARREF(Yx8rSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_35) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_36) {
  P b_;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
UNLINK_STACK();
  RET(YPfalse);
}

FUNCODEDEF(fun_unconstrained_typeQ_37) {
  P b_;
  P tmpF1844;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(b_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_module_name),b_);
  T1 = CALL2(1,VARREF(YgooSmacrosYEE),T2,LITREF(lit_44));
  tmpF1844 = T1;
  if (tmpF1844 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYbinding_name),b_);
    T4 = CALL2(1,VARREF(YgooSmacrosYEE),T5,LITREF(lit_45));
    T3 = T4;
  } else {
    T3 = YPfalse;
  }
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_unconstrained_typeQ_38) {
  P o_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_39) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYbinding_type),x_);
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T1);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_do_call_upgradesX_40) {
  P o_;
  P tmpF1849;
  P tmpF1848;
  P tmpF1847;
  P tmpF1846;
  P metF1845;
  P T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  CALL1(1,VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX),o_);
  T1 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
  T0 = CALL2(1,VARREF(YisaQ),T1,VARREF(Yx8rSastYLlocal_referenceG));
  if (T0 != YPfalse) {
    T5 = CALL1(1,VARREF(Yx8rSastYapplication_function),o_);
    T4 = CALL1(1,VARREF(Yx8rSastYreference_binding),T5);
    T3 = CALL1(1,VARREF(Yx8rSastYbinding_value),T4);
    metF1845 = T3;
    T8 = CALL2(1,VARREF(YisaQ),metF1845,VARREF(Yx8rSastYLast_functionG));
    tmpF1846 = T8;
    if (tmpF1846 != YPfalse) {
      T12 = fun_39;
      T13 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),metF1845);
      T11 = CALL2(1,VARREF(YgooScolsScolYallQ),T12,T13);
      tmpF1847 = T11;
      if (tmpF1847 != YPfalse) {
        T17 = CALL1(1,VARREF(Yx8rSastYfunction_value),metF1845);
        T16 = CALL1(1,VARREF(Yx8rSast_linearizeYunconstrained_typeQ),T17);
        tmpF1848 = T16;
        if (tmpF1848 != YPfalse) {
          T21 = CALL1(1,VARREF(Yx8rSastYfunction_naryQ),metF1845);
          T20 = CALL1(1,VARREF(Ynot),T21);
          tmpF1849 = T20;
          if (tmpF1849 != YPfalse) {
            T25 = CALL1(1,VARREF(Yx8rSastYapplication_arguments),o_);
            T24 = CALL1(1,VARREF(YgooStypesYlen),T25);
            T27 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),metF1845);
            T26 = CALL1(1,VARREF(YgooStypesYlen),T27);
            T23 = CALL2(1,VARREF(YgooSmathYE),T24,T26);
            T22 = T23;
          } else {
            T22 = YPfalse;
          }
          T19 = T22;
          T18 = T19;
        } else {
          T18 = YPfalse;
        }
        T15 = T18;
        T14 = T15;
      } else {
        T14 = YPfalse;
      }
      T10 = T14;
      T9 = T10;
    } else {
      T9 = YPfalse;
    }
    T7 = T9;
    if (T7 != YPfalse) {
      T28 = CALL2(1,VARREF(Yx8rSastYapplication_knownQ_setter),YPtrue,o_);
      T6 = T28;
    } else {
      T6 = YPfalse;
    }
    T2 = T6;
  } else {
  }
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_analyze_calls_41) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Yx8rSast_linearizeYdo_call_upgradesX),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_42) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_offset_setter_43) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYreference_offset));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_44) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_reference_selfQ_setter_45) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYreference_selfQ));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_liftX_46) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),o_,YPfalse,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_47) {
  P o_,flat_fun_,bindings_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T0 = CALLN(1,VARREF(Yx8rSast_linearizeYupdate_walkX),4,VARREF(Yx8rSast_linearizeYlift_proceduresX),o_,flat_fun_,bindings_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_48) {
  P o_,flat_fun_,bindings_;
  P offsetF1851;
  P bF1850;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  bF1850 = T1;
  T3 = CALL2(1,VARREF(YgooScolsScolYmemQ),bindings_,bF1850);
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T5 = CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_free_bindingX),flat_fun_,o_);
    offsetF1851 = T5;
    T8 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
    T9 = CALL1(1,VARREF(Yx8rSastYfunction_binding),flat_fun_);
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),T8,T9);
    T6 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSastYreference_binding),bF1850,VARREF(Yx8rSast_linearizeYreference_offset),offsetF1851,VARREF(Yx8rSast_linearizeYreference_selfQ),T7);
    T4 = T6;
    T2 = T4;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_add_49) {
  P freeT_;
  P tailF1852;
  P T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(freeT_, 0);
loop:
  T1 = CALL1(1,VARREF(Ytail),freeT_);
  tailF1852 = T1;
  T3 = CALL1(1,VARREF(YgooSmacrosYemptyQ),tailF1852);
  if (T3 != YPfalse) {
    T4 = CALL2(1,VARREF(Ytail_setter),FREEREF(0),freeT_);
    T2 = T4;
  } else {
    a1 = tailF1852;
    freeT_ = a1;
    goto loop;
    T2 = T5;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_check_50) {
  P i_,freeT_;
  P addF1854;
  P new_envF1853;
  P T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(i_, 0);
  ARG(freeT_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),freeT_);
  if (T1 != YPfalse) {
    T4 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLfree_environmentG));
    T3 = CALL2(1,VARREF(Yx8rSastYfree_environment),FREEREF(0),T4);
    new_envF1853 = T3;
    T6 = CALL1(1,VARREF(Yx8rSastYfunction_free),FREEREF(1));
    T5 = CALL1(1,VARREF(YgooSmacrosYemptyQ),T6);
    if (T5 != YPfalse) {
      T7 = CALL2(1,VARREF(Yx8rSastYfunction_free_setter),new_envF1853,FREEREF(1));
    } else {
      T9 = FUNSHELL(1,fun_add_49,2);
      addF1854 = T9;
      FUNINIT(addF1854, 2,new_envF1853,addF1854);
      T11 = CALL1(1,VARREF(Yx8rSastYfunction_free),FREEREF(1));
      T10 = CALL1(0,addF1854,T11);
      T8 = T10;
    }
    T2 = i_;
    T0 = T2;
  } else {
    T14 = CALL1(1,VARREF(Yx8rSastYreference_binding),FREEREF(0));
    T16 = CALL1(1,VARREF(Yhead),freeT_);
    T15 = CALL1(1,VARREF(Yx8rSastYreference_binding),T16);
    T13 = CALL2(1,VARREF(YgooSmacrosYEE),T14,T15);
    if (T13 != YPfalse) {
      T12 = i_;
    } else {
      T18 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
      T19 = CALL1(1,VARREF(Ytail),freeT_);
      a1 = T18;
      a2 = T19;
      i_ = a1;
      freeT_ = a2;
      goto loop;
      T12 = T17;
    }
    T0 = T12;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_free_bindingX_51) {
  P flat_fun_,ref_;
  P checkF1855;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(ref_, 1);
loop:
  T1 = FUNSHELL(1,fun_check_50,3);
  checkF1855 = T1;
  FUNINIT(checkF1855, 3,ref_,flat_fun_,checkF1855);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_free),flat_fun_);
  T2 = CALL2(1,checkF1855,YPint((P)0),T3);
  T0 = T2;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_52) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1856;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,flat_fun_,bindings_);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYcat),T4,bindings_);
  new_bindingsF1856 = T3;
  T6 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T5 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T6,flat_fun_,new_bindingsF1856);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T5,o_);
  T2 = o_;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_lift_proceduresX_53) {
  P o_,flat_fun_,bindings_;
  P new_bindingsF1857;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYcat),T2,bindings_);
  new_bindingsF1857 = T1;
  T4 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYlift_proceduresX),flat_fun_,new_bindingsF1857);
  T5 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),T4,T5);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T3,o_);
  T7 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T6 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T7,flat_fun_,new_bindingsF1857);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T6,o_);
  T0 = o_;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_lift_proceduresX_54) {
  P o_,flat_fun_,bindings_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,YPfalse,T2);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_55) {
  P o_,flat_fun_,bindings_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_lift_proceduresX_56) {
  P o_,flat_fun_,bindings_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(bindings_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T1,o_,T2);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_free),o_);
  T3 = CALL3(1,VARREF(Yx8rSast_linearizeYlift_proceduresX),T4,flat_fun_,bindings_);
  CALL2(1,VARREF(Yx8rSastYfunction_free_setter),T3,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_program_form_57) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_form_setter_58) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_form));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_59) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_quotations_setter_60) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_61) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooScolsScolYfab),VARREF(YgooScolsScolYLtabG),YPint((P)40));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_62) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_program_definitions_setter_63) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYprogram_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_64) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_program_65) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_program_setter_66) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_program));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_67) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_quotations_setter_68) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_quotations));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_69) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_form_definitions_70) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_form_definitions_setter_71) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYform_definitions));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_72) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  QRET(Ynil);
}

FUNCODEDEF(fun_closure_creation_index_73) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_index_setter_74) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_75) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closure_creation_free_setter_76) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSast_linearizeYclosure_creation_free));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_77) {
  P o_;
  P T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_78) {
  P ss_,r_;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(ss_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),ss_);
  if (T1 != YPfalse) {
    T3 = CALL1(1,VARREF(Ytail),FREEREF(1));
    T2 = CALL2(0,FREEREF(0),T3,r_);
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Ytail),ss_);
    T7 = CALL1(1,VARREF(Yhead),ss_);
    T6 = CALL2(1,VARREF(YgooSmacrosYpair),T7,r_);
    a1 = T5;
    a2 = T6;
    ss_ = a1;
    r_ = a2;
    goto loop;
    T0 = T4;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_79) {
  P s_,r_;
  P innerF1858;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(s_, 0);
  ARG(r_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),s_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),r_);
    T0 = T2;
  } else {
    T4 = FUNSHELL(1,fun_inner_78,3);
    innerF1858 = T4;
    FUNINIT(innerF1858, 3,FREEREF(0),s_,innerF1858);
    T7 = CALL1(1,VARREF(Yhead),s_);
    T6 = CALL1(1,VARREF(Yx8rSast_linearizeYflatten_seqs),T7);
    T5 = CALL2(0,innerF1858,T6,r_);
    T3 = T5;
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_flatten_seqs_80) {
  P o_;
  P loopF1859;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = FUNSHELL(1,fun_loop_79,1);
  loopF1859 = T1;
  FUNINIT(loopF1859, 1,loopF1859);
  T2 = CALL2(0,loopF1859,o_,Ynil);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_81) {
  P x_;
  P T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T0 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),x_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_as_top_level_forms_82) {
  P programs_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(programs_, 0);
loop:
  T1 = fun_81;
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,programs_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_83) {
  P form_;
  P T0;
  P a1;
LINK_STACK();
  ARG(form_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),form_,form_,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extract_thingsX_84) {
  P o_;
  P resultF1861;
  P formsF1860;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYflatten_seqs),o_);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYas_top_level_forms),T2);
  formsF1860 = T1;
  T4 = CALL1(1,VARREF(Ynew),VARREF(Yx8rSast_linearizeYLflattened_programG));
  resultF1861 = T4;
  T7 = FUNFAB(fun_83,1,resultF1861);
  T6 = CALL2(1,VARREF(YgooSmacrosYmap),T7,formsF1860);
  T5 = CALL1(1,VARREF(Yx8rSastYsequentialize),T6);
  CALL2(1,VARREF(Yx8rSast_linearizeYprogram_form_setter),T5,resultF1861);
  T3 = resultF1861;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_85) {
  P o_,form_,result_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T0 = CALLN(1,VARREF(Yx8rSast_linearizeYupdate_walkX),4,VARREF(Yx8rSast_linearizeYextractX),o_,form_,result_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_86) {
  P o_,form_,result_;
  P x_1449F1871;
  P qbF1870;
  P probeF1869;
  P indexF1868;
  P qbTF1867;
  P tmpF1866;
  P tmpF1865;
  P tmpF1864;
  P tmpF1863;
  P valueF1862;
  P T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14;
  P T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYconstant_value),o_);
  valueF1862 = T1;
  T4 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1862,YPfalse);
  tmpF1863 = T4;
  if (tmpF1863 != YPfalse) {
    T5 = tmpF1863;
  } else {
    T7 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1862,YPtrue);
    tmpF1864 = T7;
    if (tmpF1864 != YPfalse) {
      T8 = tmpF1864;
    } else {
      T10 = CALL2(1,VARREF(YgooSmacrosYEE),valueF1862,Ynil);
      tmpF1865 = T10;
      if (tmpF1865 != YPfalse) {
        T11 = tmpF1865;
      } else {
        T13 = CALL2(1,VARREF(YisaQ),valueF1862,VARREF(YLintG));
        tmpF1866 = T13;
        if (tmpF1866 != YPfalse) {
          T14 = tmpF1866;
        } else {
          T15 = CALL2(1,VARREF(YisaQ),valueF1862,VARREF(YLchrG));
          T14 = T15;
        }
        T12 = T14;
        T11 = T12;
      }
      T9 = T11;
      T8 = T9;
    }
    T6 = T8;
    T5 = T6;
  }
  T3 = T5;
  if (T3 != YPfalse) {
    T2 = o_;
  } else {
    T17 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_quotations),result_);
    qbTF1867 = T17;
    T19 = CALL1(1,VARREF(YgooStypesYlen),qbTF1867);
    indexF1868 = T19;
    T21 = CALL3(1,VARREF(YgooScolsScolYelt_or),qbTF1867,valueF1862,YPfalse);
    probeF1869 = T21;
    if (probeF1869 != YPfalse) {
      T23 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),probeF1869);
      T22 = T23;
    } else {
      T25 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLmodule_bindingG),VARREF(Yx8rSastYbinding_kind),LITREF(lit_90),VARREF(Yx8rSastYbinding_name),indexF1868,VARREF(Yx8rSastYbinding_info),valueF1862);
      qbF1870 = T25;
      CALL3(1,VARREF(YgooScolsScolYelt_setter),qbF1870,qbTF1867,valueF1862);
      x_1449F1871 = form_;
      T28 = CALL1(1,VARREF(Yx8rSast_linearizeYform_quotations),x_1449F1871);
      T27 = CALL2(1,VARREF(YgooScolsSlstYpush),T28,qbF1870);
      T26 = CALL2(1,VARREF(Yx8rSast_linearizeYform_quotations_setter),T27,x_1449F1871);
      T29 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLglobal_referenceG),VARREF(Yx8rSastYreference_binding),qbF1870);
      T24 = T29;
      T22 = T24;
    }
    T20 = T22;
    T18 = T20;
    T16 = T18;
    T2 = T16;
  }
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_87) {
  P o_,form_,result_;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_88) {
  P binding_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_type),binding_);
  T1 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T2,FREEREF(0),FREEREF(1));
  T0 = CALL2(1,VARREF(Yx8rSastYbinding_type_setter),T1,binding_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_extractX_89) {
  P o_,form_,result_;
  P indexF1874;
  P free_bindingsF1873;
  P freeF1872;
  P T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T1,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_debug_name_setter),T0,o_);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_signature),o_);
  T2 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_signature_setter),T2,o_);
  T5 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  T4 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T5,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T4,o_);
  T6 = FUNFAB(fun_88,2,form_,result_);
  T7 = CALL1(1,VARREF(Yx8rSastYfunction_bindings),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T6,T7);
  T9 = CALL1(1,VARREF(Yx8rSastYfunction_free),o_);
  freeF1872 = T9;
  T11 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSastYreference_binding),freeF1872);
  free_bindingsF1873 = T11;
  T13 = CALL3(1,VARREF(Yx8rSast_linearizeYadjoin_definitionX),form_,result_,o_);
  indexF1874 = T13;
  CALL2(1,VARREF(Yx8rSastYfunction_index_setter),indexF1874,o_);
  CALL2(1,VARREF(Yx8rSastYfunction_free_setter),free_bindingsF1873,o_);
  T14 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_index),indexF1874,VARREF(Yx8rSast_linearizeYclosure_creation_free),freeF1872);
  T12 = T14;
  T10 = T12;
  T8 = T10;
UNLINK_STACK();
  QRET(T8);
}

FUNCODEDEF(fun_extractX_90) {
  P o_,form_,result_;
  P x_1450F1876;
  P primF1875;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(form_, 1);
  ARG(result_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYassignment_form),o_);
  primF1875 = T1;
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_body),primF1875);
  T2 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T3,form_,result_);
  CALL2(1,VARREF(Yx8rSastYfunction_body_setter),T2,primF1875);
  x_1450F1876 = result_;
  T6 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),x_1450F1876);
  T5 = CALL2(1,VARREF(YgooScolsSlstYpush),T6,primF1875);
  T4 = CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T5,x_1450F1876);
  T8 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSastYconstant_value),YPfalse);
  T7 = CALL3(1,VARREF(Yx8rSast_linearizeYextractX),T8,form_,result_);
  T0 = T7;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_definitionX_91) {
  P form_,result_,x_;
  P x_1452F1879;
  P x_1451F1878;
  P new_indexF1877;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(form_, 0);
  ARG(result_, 1);
  ARG(x_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),result_);
  T1 = CALL1(1,VARREF(YgooStypesYlen),T2);
  new_indexF1877 = T1;
  x_1451F1878 = result_;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),x_1451F1878);
  T4 = CALL2(1,VARREF(YgooScolsSlstYpush),T5,x_);
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T4,x_1451F1878);
  x_1452F1879 = form_;
  T8 = CALL1(1,VARREF(Yx8rSast_linearizeYform_definitions),x_1452F1879);
  T7 = CALL2(1,VARREF(YgooScolsSlstYpush),T8,x_);
  T6 = CALL2(1,VARREF(Yx8rSast_linearizeYform_definitions_setter),T7,x_1452F1879);
  T0 = new_indexF1877;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_92) {
  P o_,max_count_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T0 = CALL1(1,VARREF(Ylst),o_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_inner_93) {
  P res_,es_,count_;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(res_, 0);
  ARG(es_, 1);
  ARG(count_, 2);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),es_);
  if (T1 != YPfalse) {
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
    T4 = CALL1(1,VARREF(Yx8rSastYsequentialize),T5);
    T3 = CALL2(1,VARREF(YgooSmacrosYpair),T4,FREEREF(0));
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),T3);
    T0 = T2;
  } else {
    T7 = CALL2(1,VARREF(YgooSmathYE),count_,FREEREF(1));
    if (T7 != YPfalse) {
      T11 = CALL1(1,VARREF(YgooSmacrosYrevX),res_);
      T10 = CALL1(1,VARREF(Yx8rSastYsequentialize),T11);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,FREEREF(0));
      T8 = CALL2(0,FREEREF(2),T9,es_);
      T6 = T8;
    } else {
      if (YPtrue != YPfalse) {
        T15 = CALL1(1,VARREF(Yhead),es_);
        T14 = CALL2(1,VARREF(YgooSmacrosYpair),T15,res_);
        T16 = CALL1(1,VARREF(Ytail),es_);
        T17 = CALL2(1,VARREF(YgooSmathYA),count_,YPint((P)1));
        a1 = T14;
        a2 = T16;
        a3 = T17;
        res_ = a1;
        es_ = a2;
        count_ = a3;
        goto loop;
        T12 = T13;
      } else {
        T12 = YPfalse;
      }
      T6 = T12;
    }
    T0 = T6;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_94) {
  P forms_,s_;
  P innerF1880;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(forms_, 0);
  ARG(s_, 1);
loop:
  T1 = FUNSHELL(1,fun_inner_93,4);
  innerF1880 = T1;
  FUNINIT(innerF1880, 4,forms_,FREEREF(0),FREEREF(1),innerF1880);
  T2 = CALL3(0,innerF1880,Ynil,s_,YPint((P)0));
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_split_program_95) {
  P o_,max_count_;
  P loopF1881;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(max_count_, 1);
loop:
  T1 = FUNSHELL(1,fun_loop_94,2);
  loopF1881 = T1;
  FUNINIT(loopF1881, 2,max_count_,loopF1881);
  T2 = CALL2(0,loopF1881,Ynil,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_96) {
  P calls_,defns_,i_,forms_;
  P callF1885;
  P defnF1884;
  P bindingF1883;
  P nameF1882;
  P T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11,T10,T9,T8;
  P T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3,a4;
LINK_STACK();
  ARG(calls_, 0);
  ARG(defns_, 1);
  ARG(i_, 2);
  ARG(forms_, 3);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),forms_);
  if (T1 != YPfalse) {
    T2 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T2,FREEREF(0));
    T5 = CALL1(1,VARREF(YgooSmacrosYrevX),calls_);
    T4 = CALL1(1,VARREF(Yx8rSastYsequentialize),T5);
    T6 = CALL1(1,VARREF(YgooSmacrosYrevX),defns_);
    T3 = CALLN(1,VARREF(Ynew),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),T4,VARREF(Yx8rSast_linearizeYform_definitions),T6);
    CALL2(1,VARREF(Yx8rSast_linearizeYprogram_form_setter),T3,FREEREF(0));
    T0 = FREEREF(0);
  } else {
    T8 = CALL3(1,VARREF(YgooSmacrosYcat_sym),LITREF(lit_101),i_,LITREF(lit_102));
    nameF1882 = T8;
    T10 = CALLN(1,VARREF(Yx8rSastYast_define_binding),4,FREEREF(1),nameF1882,YPfalse,LITREF(lit_103));
    bindingF1883 = T10;
    T13 = CALL2(1,VARREF(Yx8rSastYobjectify_quotation),nameF1882,YPint((P)4));
    T14 = CALL2(1,VARREF(Yx8rSastYobjectify_signature),Ynil,FREEREF(1));
    T15 = CALL1(1,VARREF(Yhead),forms_);
    T12 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSastYLast_primitiveG),VARREF(Yx8rSastYfunction_binding),bindingF1883,VARREF(Yx8rSastYfunction_debug_name),T13,VARREF(Yx8rSastYfunction_signature),T14,VARREF(Yx8rSastYfunction_body),T15);
    defnF1884 = T12;
    T18 = CALL1(1,VARREF(YgooScolsScolYempty),VARREF(Yx8rSastYLargumentsG));
    T17 = CALLN(1,VARREF(Ynew),7,VARREF(Yx8rSastYLpredefined_applicationG),VARREF(Yx8rSastYapplication_binding),bindingF1883,VARREF(Yx8rSastYapplication_arguments),T18,VARREF(Yx8rSastYapplication_tailQ),YPfalse);
    callF1885 = T17;
    T20 = CALL2(1,VARREF(YgooSmacrosYpair),callF1885,calls_);
    T21 = CALL2(1,VARREF(YgooSmacrosYpair),defnF1884,defns_);
    T22 = CALL2(1,VARREF(YgooSmathYA),i_,YPint((P)1));
    T23 = CALL1(1,VARREF(Ytail),forms_);
    a1 = T20;
    a2 = T21;
    a3 = T22;
    a4 = T23;
    calls_ = a1;
    defns_ = a2;
    i_ = a3;
    forms_ = a4;
    goto loop;
    T16 = T19;
    T11 = T16;
    T9 = T11;
    T7 = T9;
    T0 = T7;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_closurize_mainX_97) {
  P o_,r_,max_count_;
  P loopF1888;
  P base_indexF1887;
  P formsF1886;
  P T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(r_, 1);
  ARG(max_count_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_form),o_);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYsplit_program),T2,max_count_);
  formsF1886 = T1;
  T5 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T4 = CALL1(1,VARREF(YgooStypesYlen),T5);
  base_indexF1887 = T4;
  T7 = FUNSHELL(1,fun_loop_96,3);
  loopF1888 = T7;
  FUNINIT(loopF1888, 3,o_,r_,loopF1888);
  T9 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T8 = CALLN(0,loopF1888,4,Ynil,T9,YPint((P)0),formsF1886);
  T6 = T8;
  T3 = T6;
  T0 = T3;
UNLINK_STACK();
  RET(T0);
}

FUNCODEDEF(fun_98) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),def_,def_,Ynil);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_gather_temporariesX_99) {
  P o_;
  P T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(o_, 0);
loop:
  T1 = fun_98;
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),o_);
  T0 = CALL2(1,VARREF(YgooSmacrosYmap),T1,T2);
  CALL2(1,VARREF(Yx8rSast_linearizeYprogram_definitions_setter),T0,o_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_temporariesX_100) {
  P o_,flat_fun_,r_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T0 = CALLN(1,VARREF(Yx8rSast_linearizeYupdate_walkX),4,VARREF(Yx8rSast_linearizeYcollect_temporariesX),o_,flat_fun_,r_);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_101) {
  P o_,flat_fun_,r_;
  P bF1890;
  P bindingF1889;
  P T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYreference_binding),o_);
  bindingF1889 = T1;
  T3 = CALL2(1,VARREF(Yx8rSast_linearizeYassocq),bindingF1889,r_);
  bF1890 = T3;
  if (bF1890 != YPfalse) {
    T6 = CALL1(1,VARREF(Yx8rSast_linearizeYassoc_value),bF1890);
    T5 = CALL3(1,VARREF(Ynew),VARREF(Yx8rSastYLlocal_referenceG),VARREF(Yx8rSastYreference_binding),T6);
    T4 = T5;
  } else {
    T4 = o_;
  }
  T2 = T4;
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_temporariesX_102) {
  P o_,flat_fun_,r_;
  P new_rF1892;
  P new_bindingsF1891;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T1 = CALL1(1,VARREF(Yx8rSastYfix_let_arguments),o_);
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T1,flat_fun_,r_);
  CALL2(1,VARREF(Yx8rSastYfix_let_arguments_setter),T0,o_);
  T4 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T3 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYnew_renamed_binding),T4);
  new_bindingsF1891 = T3;
  T8 = CALL1(1,VARREF(Yx8rSastYfix_let_bindings),o_);
  T7 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSast_linearizeYassoc),T8,new_bindingsF1891);
  T6 = CALL2(1,VARREF(YgooSmacrosYcat),T7,r_);
  new_rF1892 = T6;
  CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1891);
  CALL2(1,VARREF(Yx8rSastYfix_let_bindings_setter),new_bindingsF1891,o_);
  T10 = CALL1(1,VARREF(Yx8rSastYfix_let_body),o_);
  T9 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T10,flat_fun_,new_rF1892);
  CALL2(1,VARREF(Yx8rSastYfix_let_body_setter),T9,o_);
  T5 = o_;
  T2 = T5;
UNLINK_STACK();
  QRET(T2);
}

FUNCODEDEF(fun_collect_temporariesX_103) {
  P o_,flat_fun_,r_;
  P new_rF1894;
  P new_bindingsF1893;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(r_, 2);
loop:
  T2 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T1 = CALL2(1,VARREF(YgooSmacrosYmap),VARREF(Yx8rSast_linearizeYnew_renamed_binding),T2);
  new_bindingsF1893 = T1;
  T6 = CALL1(1,VARREF(Yx8rSastYlocals_bindings),o_);
  T5 = CALL3(1,VARREF(YgooScolsScolYmap2),VARREF(Yx8rSast_linearizeYassoc),T6,new_bindingsF1893);
  T4 = CALL2(1,VARREF(YgooSmacrosYcat),T5,r_);
  new_rF1894 = T4;
  T8 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYcollect_temporariesX),flat_fun_,new_rF1894);
  T9 = CALL1(1,VARREF(Yx8rSastYlocals_functions),o_);
  T7 = CALL2(1,VARREF(YgooSmacrosYmap),T8,T9);
  CALL2(1,VARREF(Yx8rSastYlocals_functions_setter),T7,o_);
  CALL2(1,VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX),flat_fun_,new_bindingsF1893);
  CALL2(1,VARREF(Yx8rSastYlocals_bindings_setter),new_bindingsF1893,o_);
  T11 = CALL1(1,VARREF(Yx8rSastYlocals_body),o_);
  T10 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_temporariesX),T11,flat_fun_,new_rF1894);
  CALL2(1,VARREF(Yx8rSastYlocals_body_setter),T10,o_);
  T3 = o_;
  T0 = T3;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_104) {
  P temps_,bindings_;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(temps_, 0);
  ARG(bindings_, 1);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),bindings_);
  if (T1 != YPfalse) {
    T2 = CALL2(1,VARREF(Yx8rSastYfunction_temporaries_setter),temps_,FREEREF(0));
    T0 = T2;
  } else {
    T5 = CALL1(1,VARREF(Yhead),bindings_);
    T4 = CALL2(1,VARREF(YgooScolsScolYmemQ),temps_,T5);
    if (T4 != YPfalse) {
      T7 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = temps_;
      a2 = T7;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T6;
    } else {
      T10 = CALL1(1,VARREF(Yhead),bindings_);
      T9 = CALL2(1,VARREF(YgooSmacrosYpair),T10,temps_);
      T11 = CALL1(1,VARREF(Ytail),bindings_);
      a1 = T9;
      a2 = T11;
      temps_ = a1;
      bindings_ = a2;
      goto loop;
      T3 = T8;
    }
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_adjoin_temporary_variablesX_105) {
  P flat_fun_,new_bindings_;
  P adjoinF1895;
  P T3,T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(flat_fun_, 0);
  ARG(new_bindings_, 1);
loop:
  T1 = FUNSHELL(1,fun_adjoin_104,2);
  adjoinF1895 = T1;
  FUNINIT(adjoinF1895, 2,flat_fun_,adjoinF1895);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_temporaries),flat_fun_);
  T2 = CALL2(0,adjoinF1895,T3,new_bindings_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_106) {
  P Ux_;
  P T0;
  P a1;
LINK_STACK();
  ARG(Ux_, 0);
loop:
  T0 = CALL2(1,VARREF(Yprop_value),Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_binding_index_setter_107) {
  P Uz_,Ux_;
  P T0;
  P a1,a2;
LINK_STACK();
  ARG(Uz_, 0);
  ARG(Ux_, 1);
loop:
  T0 = CALL3(1,VARREF(Yprop_value_setter),Uz_,Ux_,VARREF(Yx8rSastYbinding_index));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_new_renamed_binding_108) {
  P binding_;
  P T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(binding_, 0);
loop:
  T0 = CALL2(1,VARREF(YgooSmathYA),VARREF(Yx8rSast_linearizeYTrenaming_bindings_counterT),YPint((P)1));
  VARSET(Yx8rSast_linearizeYTrenaming_bindings_counterT,T0);
  T2 = CALL1(1,VARREF(Yx8rSastYbinding_name),binding_);
  T3 = CALL1(1,VARREF(Yx8rSastYbinding_type),binding_);
  T4 = CALL1(1,VARREF(Yx8rSastYbinding_dynamic_extentQ),binding_);
  T1 = CALLN(1,VARREF(Ynew),9,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG),VARREF(Yx8rSastYbinding_name),T2,VARREF(Yx8rSastYbinding_type),T3,VARREF(Yx8rSastYbinding_dynamic_extentQ),T4,VARREF(Yx8rSastYbinding_index),VARREF(Yx8rSast_linearizeYTrenaming_bindings_counterT));
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_109) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),def_,YPfalse,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_110) {
  P T2,T1,T0;
LINK_STACK();
loop:
  VARSET(Yx8rSast_linearizeYTregister_passiveQT,FREEREF(0));
  T1 = fun_109;
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYprogram_definitions),FREEREF(1));
  T0 = CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_111) {
  P T0;
LINK_STACK();
loop:
  T0 = VARSET(Yx8rSast_linearizeYTregister_passiveQT,FREEREF(0));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_register_allocateX_112) {
  P o_,register_passiveQ_;
  P x_1453F1896;
  P T2,T1,T0;
  P a1,a2;
LINK_STACK();
  ARG(o_, 0);
  ARG(register_passiveQ_, 1);
loop:
  x_1453F1896 = VARREF(Yx8rSast_linearizeYTregister_passiveQT);
  T1 = FUNFAB(fun_110,2,register_passiveQ_,o_);
  T2 = FUNFAB(fun_111,1,x_1453F1896);
  T0 = with_cleanup(T1,T2);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_allocate_register_113) {
  P o_,flat_fun_,valQ_;
  P x_1454F1899;
  P tmpF1898;
  P tmpF1897;
  P T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  tmpF1897 = valQ_;
  if (tmpF1897 != YPfalse) {
    tmpF1898 = flat_fun_;
    if (tmpF1898 != YPfalse) {
      T6 = CALL1(1,VARREF(Yx8rSastYprogram_register),o_);
      T5 = CALL1(1,VARREF(Ynot),T6);
      T4 = T5;
    } else {
      T4 = YPfalse;
    }
    T3 = T4;
    T2 = T3;
  } else {
    T2 = YPfalse;
  }
  T1 = T2;
  if (T1 != YPfalse) {
    T8 = CALL1(1,VARREF(Yx8rSastYfunction_registers),flat_fun_);
    T7 = CALL1(1,VARREF(YgooStypesYlen),T8);
    CALL2(1,VARREF(Yx8rSastYprogram_register_setter),T7,o_);
    x_1454F1899 = flat_fun_;
    T12 = CALL1(1,VARREF(Yx8rSastYfunction_registers),x_1454F1899);
    T11 = CALL2(1,VARREF(YgooScolsSlstYpush),T12,o_);
    T10 = CALL2(1,VARREF(Yx8rSastYfunction_registers_setter),T11,x_1454F1899);
    T9 = T10;
    T0 = T9;
  } else {
    T0 = YPfalse;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_114) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALLN(1,VARREF(Yx8rSast_linearizeYupdate_walkX),4,VARREF(Yx8rSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_loop_115) {
  P x_;
  P tmpF1901;
  P next_xF1900;
  P T8,T7,T6,T5,T4,T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = CALL1(1,VARREF(YgooSmacrosYemptyQ),x_);
  if (T1 != YPfalse) {
    T0 = FREEREF(0);
  } else {
    T3 = CALL1(1,VARREF(Ytail),x_);
    next_xF1900 = T3;
    T4 = CALL1(1,VARREF(Yhead),x_);
    tmpF1901 = FREEREF(2);
    if (tmpF1901 != YPfalse) {
      T7 = CALL1(1,VARREF(YgooSmacrosYemptyQ),next_xF1900);
      T6 = T7;
    } else {
      T6 = YPfalse;
    }
    T5 = T6;
    CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T4,FREEREF(1),T5);
    a1 = next_xF1900;
    x_ = a1;
    goto loop;
    T2 = T8;
    T0 = T2;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_116) {
  P o_,flat_fun_,valQ_;
  P loopF1902;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T1 = FUNSHELL(1,fun_loop_115,4);
  loopF1902 = T1;
  FUNINIT(loopF1902, 4,o_,flat_fun_,valQ_,loopF1902);
  T2 = CALL1(0,loopF1902,o_);
  T0 = T2;
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_117) {
  P o_,flat_fun_,valQ_;
  P T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  if (VARREF(Yx8rSast_linearizeYTregister_passiveQT) != YPfalse) {
    T0 = CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  } else {
  }
  T1 = CALLN(1,VARREF(Yx8rSast_linearizeYupdate_walkX),4,VARREF(Yx8rSast_linearizeYcollect_registersX),o_,flat_fun_,YPtrue);
UNLINK_STACK();
  QRET(T1);
}

FUNCODEDEF(fun_118) {
  P def_;
  P T0;
  P a1;
LINK_STACK();
  ARG(def_, 0);
loop:
  T0 = CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),def_,FREEREF(0),FREEREF(1));
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_collect_registersX_119) {
  P o_,flat_fun_,valQ_;
  P T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = FUNFAB(fun_118,2,flat_fun_,valQ_);
  T1 = CALL1(1,VARREF(Yx8rSast_linearizeYform_definitions),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T0,T1);
  T2 = CALL1(1,VARREF(Yx8rSast_linearizeYform_program),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T2,flat_fun_,valQ_);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_120) {
  P o_,flat_fun_,valQ_;
  P T4,T3,T2,T1,T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  CALL3(1,VARREF(Yx8rSast_linearizeYallocate_register),o_,flat_fun_,valQ_);
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_signature),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T0,flat_fun_,YPtrue);
  T1 = CALL3(1,VARREF(YgooSruntimeYrcurry),VARREF(Yx8rSast_linearizeYcollect_registersX),flat_fun_,YPtrue);
  T2 = CALL1(1,VARREF(Yx8rSastYfunction_data_refs),o_);
  CALL2(1,VARREF(YgooSmacrosYdo),T1,T2);
  T3 = CALL1(1,VARREF(Yx8rSastYfunction_debug_name),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T3,o_,YPtrue);
  T4 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T4,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_collect_registersX_121) {
  P o_,flat_fun_,valQ_;
  P T0;
  P a1,a2,a3;
LINK_STACK();
  ARG(o_, 0);
  ARG(flat_fun_, 1);
  ARG(valQ_, 2);
loop:
  T0 = CALL1(1,VARREF(Yx8rSastYfunction_body),o_);
  CALL3(1,VARREF(Yx8rSast_linearizeYcollect_registersX),T0,o_,YPtrue);
UNLINK_STACK();
  QRET(o_);
}

FUNCODEDEF(fun_ast_contains_funQ_122) {
  P x_;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
UNLINK_STACK();
  RET(YPtrue);
}

FUNCODEDEF(fun_walk_123) {
  P y_;
  P T3,T2,T1,T0;
  P a1;
LINK_STACK();
  ARG(y_, 0);
loop:
  T1 = CALL2(1,VARREF(YisaQ),y_,VARREF(Yx8rSastYLast_methodG));
  if (T1 != YPfalse) {
    T2 = CALL1(1,FREEREF(0),YPtrue);
    T0 = T2;
  } else {
    T3 = CALL2(1,VARREF(Yx8rSast_linearizeYast_walk),FREEREF(1),y_);
    T0 = T3;
  }
UNLINK_STACK();
  QRET(T0);
}

FUNCODEDEF(fun_124) {
  P return_;
  P walkF1903;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(return_, 0);
loop:
  T0 = FUNSHELL(0,fun_walk_123,2);
  walkF1903 = T0;
  FUNINIT(walkF1903, 2,return_,walkF1903);
  T1 = CALL2(1,VARREF(Yx8rSast_linearizeYast_walk),walkF1903,FREEREF(0));
UNLINK_STACK();
  QRET(YPfalse);
}

FUNCODEDEF(fun_ast_contains_funQ_125) {
  P x_;
  P T1,T0;
  P a1;
LINK_STACK();
  ARG(x_, 0);
loop:
  T1 = FUNFAB(fun_124,1,x_);
  T0 = with_exit(T1);
UNLINK_STACK();
  RET(T0);
}

P Yx8rSast_linearizeY___main_0___() {
  P T235,T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220;
  P T219,T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204;
  P T203,T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188;
  P T187,T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172;
  P T171,T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156;
  P T155,T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140;
  P T139,T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124;
  P T123,T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108;
  P T107,T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92;
  P T91,T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76;
  P T75,T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60;
  P T59,T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44;
  P T43,T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28;
  P T27,T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12;
  P T11,T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  lit_0 = YPPsym((P)"<assoc>");
  T1 = (P)YPpair(VARREF(YLanyG),Ynil);
  T0 = CALL2(1,VARREF(Yfab_class),LITREF(lit_0),T1);
  VARSET(Yx8rSast_linearizeYLassocG,T0);
  lit_1 = YPPsym((P)"assoc-key");
  lit_2 = YPPsym((P)"_x");
  T2 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_key_0 = YPmet(FUNCODEREF(fun_assoc_key_0),LITREF(lit_1),T2,ENVNUL,PNUL,YPfalse);
  T5 = BOUNDP(Yx8rSast_linearizeYassoc_key);
  if (T5 != YPfalse) {
    T4 = VARREF(Yx8rSast_linearizeYassoc_key);
  } else {
    T4 = YPfalse;
  }
  T6 = fun_assoc_key_0;
  T3 = CALL2(1,VARREF(YPdefine_method),T4,T6);
  VARSET(Yx8rSast_linearizeYassoc_key,T3);
  lit_3 = YPPsym((P)"assoc-key-setter");
  lit_4 = YPPsym((P)"_z");
  T7 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_key_setter_1 = YPmet(FUNCODEREF(fun_assoc_key_setter_1),LITREF(lit_3),T7,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rSast_linearizeYassoc_key_setter);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rSast_linearizeYassoc_key_setter);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_assoc_key_setter_1;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rSast_linearizeYassoc_key_setter,T8);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_key),VARREF(Yx8rSast_linearizeYassoc_key_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_5 = YPPsym((P)"assoc-value");
  T12 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_assoc_value_2 = YPmet(FUNCODEREF(fun_assoc_value_2),LITREF(lit_5),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSast_linearizeYassoc_value);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSast_linearizeYassoc_value);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_assoc_value_2;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSast_linearizeYassoc_value,T13);
  lit_6 = YPPsym((P)"assoc-value-setter");
  T17 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLassocG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assoc_value_setter_3 = YPmet(FUNCODEREF(fun_assoc_value_setter_3),LITREF(lit_6),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSast_linearizeYassoc_value_setter);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSast_linearizeYassoc_value_setter);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_assoc_value_setter_3;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSast_linearizeYassoc_value_setter,T18);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLassocG),VARREF(Yx8rSast_linearizeYassoc_value),VARREF(Yx8rSast_linearizeYassoc_value_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_7 = YPPsym((P)"assoc");
  lit_8 = YPPsym((P)"x");
  lit_9 = YPPsym((P)"y");
  T22 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_9)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(Yx8rSast_linearizeYLassocG),Ynil);
  Yx8rSast_linearizeYassoc = YPmet(FUNCODEREF(Yx8rSast_linearizeYassoc),LITREF(lit_7),T22,ENVNUL,PNUL,YPfalse);
  T23 = Yx8rSast_linearizeYassoc;
  VARSET(Yx8rSast_linearizeYassoc,T23);
  lit_10 = YPPsym((P)"assocq");
  lit_11 = YPPsym((P)"l");
  T24 = YPsig(YPPlist(2,LITREF(lit_8),LITREF(lit_11)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_assocq_5 = YPmet(FUNCODEREF(fun_assocq_5),LITREF(lit_10),T24,ENVNUL,PNUL,YPfalse);
  T27 = BOUNDP(Yx8rSast_linearizeYassocq);
  if (T27 != YPfalse) {
    T26 = VARREF(Yx8rSast_linearizeYassocq);
  } else {
    T26 = YPfalse;
  }
  T28 = fun_assocq_5;
  T25 = CALL2(1,VARREF(YPdefine_method),T26,T28);
  VARSET(Yx8rSast_linearizeYassocq,T25);
  lit_12 = YPPsym((P)"update-walk!");
  lit_13 = YPPsym((P)"g");
  lit_14 = YPPsym((P)"o");
  lit_15 = YPPsym((P)"args");
  lit_16 = YPPsym((P)"x-1446");
  lit_17 = YPPsym((P)"x-1445");
  T30 = YPsig(YPPlist(1,LITREF(lit_17)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1446_6 = YPmet(FUNCODEREF(fun_x_1446_6),LITREF(lit_16),T30,ENVNUL,PNUL,YPfalse);
  T29 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_update_walkX_7 = YPmet(FUNCODEREF(fun_update_walkX_7),LITREF(lit_12),T29,ENVNUL,PNUL,YPfalse);
  T33 = BOUNDP(Yx8rSast_linearizeYupdate_walkX);
  if (T33 != YPfalse) {
    T32 = VARREF(Yx8rSast_linearizeYupdate_walkX);
  } else {
    T32 = YPfalse;
  }
  T34 = fun_update_walkX_7;
  T31 = CALL2(1,VARREF(YPdefine_method),T32,T34);
  VARSET(Yx8rSast_linearizeYupdate_walkX,T31);
  lit_18 = YPPsym((P)"ast-walk");
  lit_19 = YPPsym((P)"x-1448");
  lit_20 = YPPsym((P)"x-1447");
  T36 = YPsig(YPPlist(1,LITREF(lit_20)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_x_1448_8 = YPmet(FUNCODEREF(fun_x_1448_8),LITREF(lit_19),T36,ENVNUL,PNUL,YPfalse);
  T35 = YPsig(YPPlist(3,LITREF(lit_13),LITREF(lit_14),LITREF(lit_15)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPtrue,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_ast_walk_9 = YPmet(FUNCODEREF(fun_ast_walk_9),LITREF(lit_18),T35,ENVNUL,PNUL,YPfalse);
  T39 = BOUNDP(Yx8rSast_linearizeYast_walk);
  if (T39 != YPfalse) {
    T38 = VARREF(Yx8rSast_linearizeYast_walk);
  } else {
    T38 = YPfalse;
  }
  T40 = fun_ast_walk_9;
  T37 = CALL2(1,VARREF(YPdefine_method),T38,T40);
  VARSET(Yx8rSast_linearizeYast_walk,T37);
  lit_21 = YPPsym((P)"<box-read>");
  T42 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T41 = CALL2(1,VARREF(Yfab_class),LITREF(lit_21),T42);
  VARSET(Yx8rSast_linearizeYLbox_readG,T41);
  lit_22 = YPPsym((P)"box-reference");
  T43 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_readG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_10 = YPmet(FUNCODEREF(fun_box_reference_10),LITREF(lit_22),T43,ENVNUL,PNUL,YPfalse);
  T46 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T46 != YPfalse) {
    T45 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T45 = YPfalse;
  }
  T47 = fun_box_reference_10;
  T44 = CALL2(1,VARREF(YPdefine_method),T45,T47);
  VARSET(Yx8rSast_linearizeYbox_reference,T44);
  lit_23 = YPPsym((P)"box-reference-setter");
  T48 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_readG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_11 = YPmet(FUNCODEREF(fun_box_reference_setter_11),LITREF(lit_23),T48,ENVNUL,PNUL,YPfalse);
  T51 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T51 != YPfalse) {
    T50 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T50 = YPfalse;
  }
  T52 = fun_box_reference_setter_11;
  T49 = CALL2(1,VARREF(YPdefine_method),T50,T52);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T49);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_readG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_24 = YPPsym((P)"<box-write>");
  T54 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T53 = CALL2(1,VARREF(Yfab_class),LITREF(lit_24),T54);
  VARSET(Yx8rSast_linearizeYLbox_writeG,T53);
  T55 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_12 = YPmet(FUNCODEREF(fun_box_reference_12),LITREF(lit_22),T55,ENVNUL,PNUL,YPfalse);
  T58 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T58 != YPfalse) {
    T57 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T57 = YPfalse;
  }
  T59 = fun_box_reference_12;
  T56 = CALL2(1,VARREF(YPdefine_method),T57,T59);
  VARSET(Yx8rSast_linearizeYbox_reference,T56);
  T60 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_13 = YPmet(FUNCODEREF(fun_box_reference_setter_13),LITREF(lit_23),T60,ENVNUL,PNUL,YPfalse);
  T63 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T63 != YPfalse) {
    T62 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T62 = YPfalse;
  }
  T64 = fun_box_reference_setter_13;
  T61 = CALL2(1,VARREF(YPdefine_method),T62,T64);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T61);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_25 = YPPsym((P)"box-form");
  T65 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_form_14 = YPmet(FUNCODEREF(fun_box_form_14),LITREF(lit_25),T65,ENVNUL,PNUL,YPfalse);
  T68 = BOUNDP(Yx8rSast_linearizeYbox_form);
  if (T68 != YPfalse) {
    T67 = VARREF(Yx8rSast_linearizeYbox_form);
  } else {
    T67 = YPfalse;
  }
  T69 = fun_box_form_14;
  T66 = CALL2(1,VARREF(YPdefine_method),T67,T69);
  VARSET(Yx8rSast_linearizeYbox_form,T66);
  lit_26 = YPPsym((P)"box-form-setter");
  T70 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_writeG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_form_setter_15 = YPmet(FUNCODEREF(fun_box_form_setter_15),LITREF(lit_26),T70,ENVNUL,PNUL,YPfalse);
  T73 = BOUNDP(Yx8rSast_linearizeYbox_form_setter);
  if (T73 != YPfalse) {
    T72 = VARREF(Yx8rSast_linearizeYbox_form_setter);
  } else {
    T72 = YPfalse;
  }
  T74 = fun_box_form_setter_15;
  T71 = CALL2(1,VARREF(YPdefine_method),T72,T74);
  VARSET(Yx8rSast_linearizeYbox_form_setter,T71);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_writeG),VARREF(Yx8rSast_linearizeYbox_form),VARREF(Yx8rSast_linearizeYbox_form_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_27 = YPPsym((P)"<box-creation>");
  T76 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_27),T76);
  VARSET(Yx8rSast_linearizeYLbox_creationG,T75);
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLbox_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_box_reference_16 = YPmet(FUNCODEREF(fun_box_reference_16),LITREF(lit_22),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSast_linearizeYbox_reference);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSast_linearizeYbox_reference);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_box_reference_16;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSast_linearizeYbox_reference,T78);
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLbox_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_box_reference_setter_17 = YPmet(FUNCODEREF(fun_box_reference_setter_17),LITREF(lit_23),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSast_linearizeYbox_reference_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSast_linearizeYbox_reference_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_box_reference_setter_17;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSast_linearizeYbox_reference_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLbox_creationG),VARREF(Yx8rSast_linearizeYbox_reference),VARREF(Yx8rSast_linearizeYbox_reference_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_28 = YPPsym((P)"insert-box!");
  T87 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_18 = YPmet(FUNCODEREF(fun_insert_boxX_18),LITREF(lit_28),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_insert_boxX_18;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T88);
  T92 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_19 = YPmet(FUNCODEREF(fun_insert_boxX_19),LITREF(lit_28),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_insert_boxX_19;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_assignmentG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_20 = YPmet(FUNCODEREF(fun_insert_boxX_20),LITREF(lit_28),T97,ENVNUL,PNUL,YPfalse);
  T100 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T100 != YPfalse) {
    T99 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T99 = YPfalse;
  }
  T101 = fun_insert_boxX_20;
  T98 = CALL2(1,VARREF(YPdefine_method),T99,T101);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T98);
  T102 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_21 = YPmet(FUNCODEREF(fun_insert_boxX_21),LITREF(lit_28),T102,ENVNUL,PNUL,YPfalse);
  T105 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T105 != YPfalse) {
    T104 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T104 = YPfalse;
  }
  T106 = fun_insert_boxX_21;
  T103 = CALL2(1,VARREF(YPdefine_method),T104,T106);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T103);
  T107 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLfix_letG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_22 = YPmet(FUNCODEREF(fun_insert_boxX_22),LITREF(lit_28),T107,ENVNUL,PNUL,YPfalse);
  T110 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T110 != YPfalse) {
    T109 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T109 = YPfalse;
  }
  T111 = fun_insert_boxX_22;
  T108 = CALL2(1,VARREF(YPdefine_method),T109,T111);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T108);
  T112 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocalsG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_insert_boxX_23 = YPmet(FUNCODEREF(fun_insert_boxX_23),LITREF(lit_28),T112,ENVNUL,PNUL,YPfalse);
  T115 = BOUNDP(Yx8rSast_linearizeYinsert_boxX);
  if (T115 != YPfalse) {
    T114 = VARREF(Yx8rSast_linearizeYinsert_boxX);
  } else {
    T114 = YPfalse;
  }
  T116 = fun_insert_boxX_23;
  T113 = CALL2(1,VARREF(YPdefine_method),T114,T116);
  VARSET(Yx8rSast_linearizeYinsert_boxX,T113);
  lit_29 = YPPsym((P)"boxify-mutable-bindings");
  lit_30 = YPPsym((P)"form");
  lit_31 = YPPsym((P)"bindings");
  lit_32 = YPPsym((P)"loop");
  lit_33 = YPPsym((P)"res");
  T118 = YPsig(YPPlist(2,LITREF(lit_33),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_24 = YPmet(FUNCODEREF(fun_loop_24),LITREF(lit_32),T118,ENVNUL,PNUL,YPfalse);
  T117 = YPsig(YPPlist(2,LITREF(lit_30),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLlstG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_boxify_mutable_bindings_25 = YPmet(FUNCODEREF(fun_boxify_mutable_bindings_25),LITREF(lit_29),T117,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSast_linearizeYboxify_mutable_bindings);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSast_linearizeYboxify_mutable_bindings);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_boxify_mutable_bindings_25;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSast_linearizeYboxify_mutable_bindings,T119);
  lit_34 = YPPsym((P)"do-do-call-references!");
  T123 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_referencesX_26 = YPmet(FUNCODEREF(fun_do_do_call_referencesX_26),LITREF(lit_34),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSast_linearizeYdo_do_call_referencesX);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSast_linearizeYdo_do_call_referencesX);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_do_do_call_referencesX_26;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSast_linearizeYdo_do_call_referencesX,T124);
  lit_35 = YPPsym((P)"do-call-references!");
  T128 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_27 = YPmet(FUNCODEREF(fun_do_call_referencesX_27),LITREF(lit_35),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSast_linearizeYdo_call_referencesX);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSast_linearizeYdo_call_referencesX);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_do_call_referencesX_27;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSast_linearizeYdo_call_referencesX,T129);
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_referencesX_28 = YPmet(FUNCODEREF(fun_do_call_referencesX_28),LITREF(lit_35),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yx8rSast_linearizeYdo_call_referencesX);
  if (T136 != YPfalse) {
    T135 = VARREF(Yx8rSast_linearizeYdo_call_referencesX);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_do_call_referencesX_28;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yx8rSast_linearizeYdo_call_referencesX,T134);
  lit_36 = YPPsym((P)"analyze-call-references");
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_call_references_29 = YPmet(FUNCODEREF(fun_analyze_call_references_29),LITREF(lit_36),T138,ENVNUL,PNUL,YPfalse);
  T141 = BOUNDP(Yx8rSast_linearizeYanalyze_call_references);
  if (T141 != YPfalse) {
    T140 = VARREF(Yx8rSast_linearizeYanalyze_call_references);
  } else {
    T140 = YPfalse;
  }
  T142 = fun_analyze_call_references_29;
  T139 = CALL2(1,VARREF(YPdefine_method),T140,T142);
  VARSET(Yx8rSast_linearizeYanalyze_call_references,T139);
  lit_37 = YPPsym((P)"do-do-dynamic-extent!");
  T143 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_dynamic_extentX_30 = YPmet(FUNCODEREF(fun_do_do_dynamic_extentX_30),LITREF(lit_37),T143,ENVNUL,PNUL,YPfalse);
  T146 = BOUNDP(Yx8rSast_linearizeYdo_do_dynamic_extentX);
  if (T146 != YPfalse) {
    T145 = VARREF(Yx8rSast_linearizeYdo_do_dynamic_extentX);
  } else {
    T145 = YPfalse;
  }
  T147 = fun_do_do_dynamic_extentX_30;
  T144 = CALL2(1,VARREF(YPdefine_method),T145,T147);
  VARSET(Yx8rSast_linearizeYdo_do_dynamic_extentX,T144);
  lit_38 = YPPsym((P)"do-dynamic-extent!");
  T148 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_31 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_31),LITREF(lit_38),T148,ENVNUL,PNUL,YPfalse);
  T151 = BOUNDP(Yx8rSast_linearizeYdo_dynamic_extentX);
  if (T151 != YPfalse) {
    T150 = VARREF(Yx8rSast_linearizeYdo_dynamic_extentX);
  } else {
    T150 = YPfalse;
  }
  T152 = fun_do_dynamic_extentX_31;
  T149 = CALL2(1,VARREF(YPdefine_method),T150,T152);
  VARSET(Yx8rSast_linearizeYdo_dynamic_extentX,T149);
  T153 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLlocal_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_dynamic_extentX_32 = YPmet(FUNCODEREF(fun_do_dynamic_extentX_32),LITREF(lit_38),T153,ENVNUL,PNUL,YPfalse);
  T156 = BOUNDP(Yx8rSast_linearizeYdo_dynamic_extentX);
  if (T156 != YPfalse) {
    T155 = VARREF(Yx8rSast_linearizeYdo_dynamic_extentX);
  } else {
    T155 = YPfalse;
  }
  T157 = fun_do_dynamic_extentX_32;
  T154 = CALL2(1,VARREF(YPdefine_method),T155,T157);
  VARSET(Yx8rSast_linearizeYdo_dynamic_extentX,T154);
  lit_39 = YPPsym((P)"analyze-dynamic-extent");
  T158 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_dynamic_extent_33 = YPmet(FUNCODEREF(fun_analyze_dynamic_extent_33),LITREF(lit_39),T158,ENVNUL,PNUL,YPfalse);
  T161 = BOUNDP(Yx8rSast_linearizeYanalyze_dynamic_extent);
  if (T161 != YPfalse) {
    T160 = VARREF(Yx8rSast_linearizeYanalyze_dynamic_extent);
  } else {
    T160 = YPfalse;
  }
  T162 = fun_analyze_dynamic_extent_33;
  T159 = CALL2(1,VARREF(YPdefine_method),T160,T162);
  VARSET(Yx8rSast_linearizeYanalyze_dynamic_extent,T159);
  lit_40 = YPPsym((P)"do-do-call-upgrades!");
  T163 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_do_call_upgradesX_34 = YPmet(FUNCODEREF(fun_do_do_call_upgradesX_34),LITREF(lit_40),T163,ENVNUL,PNUL,YPfalse);
  T166 = BOUNDP(Yx8rSast_linearizeYdo_do_call_upgradesX);
  if (T166 != YPfalse) {
    T165 = VARREF(Yx8rSast_linearizeYdo_do_call_upgradesX);
  } else {
    T165 = YPfalse;
  }
  T167 = fun_do_do_call_upgradesX_34;
  T164 = CALL2(1,VARREF(YPdefine_method),T165,T167);
  VARSET(Yx8rSast_linearizeYdo_do_call_upgradesX,T164);
  lit_41 = YPPsym((P)"do-call-upgrades!");
  T168 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_35 = YPmet(FUNCODEREF(fun_do_call_upgradesX_35),LITREF(lit_41),T168,ENVNUL,PNUL,YPfalse);
  T171 = BOUNDP(Yx8rSast_linearizeYdo_call_upgradesX);
  if (T171 != YPfalse) {
    T170 = VARREF(Yx8rSast_linearizeYdo_call_upgradesX);
  } else {
    T170 = YPfalse;
  }
  T172 = fun_do_call_upgradesX_35;
  T169 = CALL2(1,VARREF(YPdefine_method),T170,T172);
  VARSET(Yx8rSast_linearizeYdo_call_upgradesX,T169);
  lit_42 = YPPsym((P)"unconstrained-type?");
  lit_43 = YPPsym((P)"b");
  T173 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_36 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_36),LITREF(lit_42),T173,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_unconstrained_typeQ_36;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T174);
  lit_44 = YPPsym((P)"goo/boot");
  lit_45 = YPPsym((P)"<any>");
  T178 = YPsig(YPPlist(1,LITREF(lit_43)),YPPlist(1,VARREF(Yx8rSastYLmodule_bindingG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_37 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_37),LITREF(lit_42),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_unconstrained_typeQ_37;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T179);
  T183 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLmodule_binding_referenceG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_unconstrained_typeQ_38 = YPmet(FUNCODEREF(fun_unconstrained_typeQ_38),LITREF(lit_42),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSast_linearizeYunconstrained_typeQ);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSast_linearizeYunconstrained_typeQ);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_unconstrained_typeQ_38;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSast_linearizeYunconstrained_typeQ,T184);
  T189 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_39 = YPmet(FUNCODEREF(fun_39),YPfalse,T189,ENVNUL,PNUL,YPfalse);
  T188 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLregular_applicationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_do_call_upgradesX_40 = YPmet(FUNCODEREF(fun_do_call_upgradesX_40),LITREF(lit_41),T188,ENVNUL,PNUL,YPfalse);
  T192 = BOUNDP(Yx8rSast_linearizeYdo_call_upgradesX);
  if (T192 != YPfalse) {
    T191 = VARREF(Yx8rSast_linearizeYdo_call_upgradesX);
  } else {
    T191 = YPfalse;
  }
  T193 = fun_do_call_upgradesX_40;
  T190 = CALL2(1,VARREF(YPdefine_method),T191,T193);
  VARSET(Yx8rSast_linearizeYdo_call_upgradesX,T190);
  lit_46 = YPPsym((P)"analyze-calls");
  T194 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_analyze_calls_41 = YPmet(FUNCODEREF(fun_analyze_calls_41),LITREF(lit_46),T194,ENVNUL,PNUL,YPfalse);
  T197 = BOUNDP(Yx8rSast_linearizeYanalyze_calls);
  if (T197 != YPfalse) {
    T196 = VARREF(Yx8rSast_linearizeYanalyze_calls);
  } else {
    T196 = YPfalse;
  }
  T198 = fun_analyze_calls_41;
  T195 = CALL2(1,VARREF(YPdefine_method),T196,T198);
  VARSET(Yx8rSast_linearizeYanalyze_calls,T195);
  lit_47 = YPPsym((P)"<free-reference>");
  T200 = (P)YPpair(VARREF(Yx8rSastYLreal_referenceG),Ynil);
  T199 = CALL2(1,VARREF(Yfab_class),LITREF(lit_47),T200);
  VARSET(Yx8rSast_linearizeYLfree_referenceG,T199);
  lit_48 = YPPsym((P)"reference-offset");
  T201 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_offset_42 = YPmet(FUNCODEREF(fun_reference_offset_42),LITREF(lit_48),T201,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yx8rSast_linearizeYreference_offset);
  if (T204 != YPfalse) {
    T203 = VARREF(Yx8rSast_linearizeYreference_offset);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_reference_offset_42;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yx8rSast_linearizeYreference_offset,T202);
  lit_49 = YPPsym((P)"reference-offset-setter");
  T207 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  T206 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T207,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_offset_setter_43 = YPmet(FUNCODEREF(fun_reference_offset_setter_43),LITREF(lit_49),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yx8rSast_linearizeYreference_offset_setter);
  if (T210 != YPfalse) {
    T209 = VARREF(Yx8rSast_linearizeYreference_offset_setter);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_reference_offset_setter_43;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yx8rSast_linearizeYreference_offset_setter,T208);
  T212 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(YLintG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSast_linearizeYreference_offset),VARREF(Yx8rSast_linearizeYreference_offset_setter),T212,VARREF(YPprop_unbound_error));
  lit_50 = YPPsym((P)"reference-self?");
  T213 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_44 = YPmet(FUNCODEREF(fun_reference_selfQ_44),LITREF(lit_50),T213,ENVNUL,PNUL,YPfalse);
  T216 = BOUNDP(Yx8rSast_linearizeYreference_selfQ);
  if (T216 != YPfalse) {
    T215 = VARREF(Yx8rSast_linearizeYreference_selfQ);
  } else {
    T215 = YPfalse;
  }
  T217 = fun_reference_selfQ_44;
  T214 = CALL2(1,VARREF(YPdefine_method),T215,T217);
  VARSET(Yx8rSast_linearizeYreference_selfQ,T214);
  lit_51 = YPPsym((P)"reference-self?-setter");
  T218 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLlogG),VARREF(Yx8rSast_linearizeYLfree_referenceG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_reference_selfQ_setter_45 = YPmet(FUNCODEREF(fun_reference_selfQ_setter_45),LITREF(lit_51),T218,ENVNUL,PNUL,YPfalse);
  T221 = BOUNDP(Yx8rSast_linearizeYreference_selfQ_setter);
  if (T221 != YPfalse) {
    T220 = VARREF(Yx8rSast_linearizeYreference_selfQ_setter);
  } else {
    T220 = YPfalse;
  }
  T222 = fun_reference_selfQ_setter_45;
  T219 = CALL2(1,VARREF(YPdefine_method),T220,T222);
  VARSET(Yx8rSast_linearizeYreference_selfQ_setter,T219);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLfree_referenceG),VARREF(Yx8rSast_linearizeYreference_selfQ),VARREF(Yx8rSast_linearizeYreference_selfQ_setter),VARREF(YLlogG),VARREF(YPprop_unbound_error));
  lit_52 = YPPsym((P)"lift!");
  T223 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_liftX_46 = YPmet(FUNCODEREF(fun_liftX_46),LITREF(lit_52),T223,ENVNUL,PNUL,YPfalse);
  T226 = BOUNDP(Yx8rSast_linearizeYliftX);
  if (T226 != YPfalse) {
    T225 = VARREF(Yx8rSast_linearizeYliftX);
  } else {
    T225 = YPfalse;
  }
  T227 = fun_liftX_46;
  T224 = CALL2(1,VARREF(YPdefine_method),T225,T227);
  VARSET(Yx8rSast_linearizeYliftX,T224);
  lit_53 = YPPsym((P)"lift-procedures!");
  lit_54 = YPPsym((P)"flat-fun");
  T230 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T229 = fun_lift_proceduresX_47 = YPmet(FUNCODEREF(fun_lift_proceduresX_47),LITREF(lit_53),T230,ENVNUL,PNUL,YPfalse);
  T234 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T234 != YPfalse) {
    T233 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T233 = YPfalse;
  }
  T235 = fun_lift_proceduresX_47;
  T232 = CALL2(1,VARREF(YPdefine_method),T233,T235);
  T231 = VARSET(Yx8rSast_linearizeYlift_proceduresX,T232);
  T228 = T231;
  return T228;
}

P Yx8rSast_linearizeY___main_1___() {
  P T282,T281,T280,T279,T278,T277,T276,T275,T274,T273,T272,T271,T270,T269,T268,T267;
  P T266,T265,T264,T263,T262,T261,T260,T259,T258,T257,T256,T255,T254,T253,T252,T251;
  P T250,T249,T248,T247,T246,T245,T244,T243,T242,T241,T240,T239,T238,T237,T236,T235;
  P T234,T233,T232,T231,T230,T229,T228,T227,T226,T225,T224,T223,T222,T221,T220,T219;
  P T218,T217,T216,T215,T214,T213,T212,T211,T210,T209,T208,T207,T206,T205,T204,T203;
  P T202,T201,T200,T199,T198,T197,T196,T195,T194,T193,T192,T191,T190,T189,T188,T187;
  P T186,T185,T184,T183,T182,T181,T180,T179,T178,T177,T176,T175,T174,T173,T172,T171;
  P T170,T169,T168,T167,T166,T165,T164,T163,T162,T161,T160,T159,T158,T157,T156,T155;
  P T154,T153,T152,T151,T150,T149,T148,T147,T146,T145,T144,T143,T142,T141,T140,T139;
  P T138,T137,T136,T135,T134,T133,T132,T131,T130,T129,T128,T127,T126,T125,T124,T123;
  P T122,T121,T120,T119,T118,T117,T116,T115,T114,T113,T112,T111,T110,T109,T108,T107;
  P T106,T105,T104,T103,T102,T101,T100,T99,T98,T97,T96,T95,T94,T93,T92,T91;
  P T90,T89,T88,T87,T86,T85,T84,T83,T82,T81,T80,T79,T78,T77,T76,T75;
  P T74,T73,T72,T71,T70,T69,T68,T67,T66,T65,T64,T63,T62,T61,T60,T59;
  P T58,T57,T56,T55,T54,T53,T52,T51,T50,T49,T48,T47,T46,T45,T44,T43;
  P T42,T41,T40,T39,T38,T37,T36,T35,T34,T33,T32,T31,T30,T29,T28,T27;
  P T26,T25,T24,T23,T22,T21,T20,T19,T18,T17,T16,T15,T14,T13,T12,T11;
  P T10,T9,T8,T7,T6,T5,T4,T3,T2,T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_48 = YPmet(FUNCODEREF(fun_lift_proceduresX_48),LITREF(lit_53),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_lift_proceduresX_48;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T1);
  lit_55 = YPPsym((P)"adjoin-free-binding!");
  lit_56 = YPPsym((P)"ref");
  lit_57 = YPPsym((P)"check");
  lit_58 = YPPsym((P)"i");
  lit_59 = YPPsym((P)"free*");
  lit_60 = YPPsym((P)"add");
  T7 = YPsig(YPPlist(1,LITREF(lit_59)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_add_49 = YPmet(FUNCODEREF(fun_add_49),LITREF(lit_60),T7,ENVNUL,PNUL,YPfalse);
  T6 = YPsig(YPPlist(2,LITREF(lit_58),LITREF(lit_59)),YPPlist(2,VARREF(YLintG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_check_50 = YPmet(FUNCODEREF(fun_check_50),LITREF(lit_57),T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_56)),YPPlist(2,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLintG),Ynil);
  fun_adjoin_free_bindingX_51 = YPmet(FUNCODEREF(fun_adjoin_free_bindingX_51),LITREF(lit_55),T5,ENVNUL,PNUL,YPfalse);
  T10 = BOUNDP(Yx8rSast_linearizeYadjoin_free_bindingX);
  if (T10 != YPfalse) {
    T9 = VARREF(Yx8rSast_linearizeYadjoin_free_bindingX);
  } else {
    T9 = YPfalse;
  }
  T11 = fun_adjoin_free_bindingX_51;
  T8 = CALL2(1,VARREF(YPdefine_method),T9,T11);
  VARSET(Yx8rSast_linearizeYadjoin_free_bindingX,T8);
  T12 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_52 = YPmet(FUNCODEREF(fun_lift_proceduresX_52),LITREF(lit_53),T12,ENVNUL,PNUL,YPfalse);
  T15 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T15 != YPfalse) {
    T14 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T14 = YPfalse;
  }
  T16 = fun_lift_proceduresX_52;
  T13 = CALL2(1,VARREF(YPdefine_method),T14,T16);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T13);
  T17 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_53 = YPmet(FUNCODEREF(fun_lift_proceduresX_53),LITREF(lit_53),T17,ENVNUL,PNUL,YPfalse);
  T20 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T20 != YPfalse) {
    T19 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T19 = YPfalse;
  }
  T21 = fun_lift_proceduresX_53;
  T18 = CALL2(1,VARREF(YPdefine_method),T19,T21);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T18);
  T22 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_54 = YPmet(FUNCODEREF(fun_lift_proceduresX_54),LITREF(lit_53),T22,ENVNUL,PNUL,YPfalse);
  T25 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T25 != YPfalse) {
    T24 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T24 = YPfalse;
  }
  T26 = fun_lift_proceduresX_54;
  T23 = CALL2(1,VARREF(YPdefine_method),T24,T26);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T23);
  T27 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_genericG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_55 = YPmet(FUNCODEREF(fun_lift_proceduresX_55),LITREF(lit_53),T27,ENVNUL,PNUL,YPfalse);
  T30 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T30 != YPfalse) {
    T29 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T29 = YPfalse;
  }
  T31 = fun_lift_proceduresX_55;
  T28 = CALL2(1,VARREF(YPdefine_method),T29,T31);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T28);
  T32 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_31)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_lift_proceduresX_56 = YPmet(FUNCODEREF(fun_lift_proceduresX_56),LITREF(lit_53),T32,ENVNUL,PNUL,YPfalse);
  T35 = BOUNDP(Yx8rSast_linearizeYlift_proceduresX);
  if (T35 != YPfalse) {
    T34 = VARREF(Yx8rSast_linearizeYlift_proceduresX);
  } else {
    T34 = YPfalse;
  }
  T36 = fun_lift_proceduresX_56;
  T33 = CALL2(1,VARREF(YPdefine_method),T34,T36);
  VARSET(Yx8rSast_linearizeYlift_proceduresX,T33);
  lit_61 = YPPsym((P)"<flattened-program>");
  T38 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T37 = CALL2(1,VARREF(Yfab_class),LITREF(lit_61),T38);
  VARSET(Yx8rSast_linearizeYLflattened_programG,T37);
  lit_62 = YPPsym((P)"program-form");
  T39 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_form_57 = YPmet(FUNCODEREF(fun_program_form_57),LITREF(lit_62),T39,ENVNUL,PNUL,YPfalse);
  T42 = BOUNDP(Yx8rSast_linearizeYprogram_form);
  if (T42 != YPfalse) {
    T41 = VARREF(Yx8rSast_linearizeYprogram_form);
  } else {
    T41 = YPfalse;
  }
  T43 = fun_program_form_57;
  T40 = CALL2(1,VARREF(YPdefine_method),T41,T43);
  VARSET(Yx8rSast_linearizeYprogram_form,T40);
  lit_63 = YPPsym((P)"program-form-setter");
  T45 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(Yx8rSastYLprogramG));
  T44 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,T45,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_form_setter_58 = YPmet(FUNCODEREF(fun_program_form_setter_58),LITREF(lit_63),T44,ENVNUL,PNUL,YPfalse);
  T48 = BOUNDP(Yx8rSast_linearizeYprogram_form_setter);
  if (T48 != YPfalse) {
    T47 = VARREF(Yx8rSast_linearizeYprogram_form_setter);
  } else {
    T47 = YPfalse;
  }
  T49 = fun_program_form_setter_58;
  T46 = CALL2(1,VARREF(YPdefine_method),T47,T49);
  VARSET(Yx8rSast_linearizeYprogram_form_setter,T46);
  T50 = CALL1(1,VARREF(YgooStypesYtQ),VARREF(Yx8rSastYLprogramG));
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_form),VARREF(Yx8rSast_linearizeYprogram_form_setter),T50,VARREF(YPprop_unbound_error));
  lit_64 = YPPsym((P)"program-quotations");
  T51 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_quotations_59 = YPmet(FUNCODEREF(fun_program_quotations_59),LITREF(lit_64),T51,ENVNUL,PNUL,YPfalse);
  T54 = BOUNDP(Yx8rSast_linearizeYprogram_quotations);
  if (T54 != YPfalse) {
    T53 = VARREF(Yx8rSast_linearizeYprogram_quotations);
  } else {
    T53 = YPfalse;
  }
  T55 = fun_program_quotations_59;
  T52 = CALL2(1,VARREF(YPdefine_method),T53,T55);
  VARSET(Yx8rSast_linearizeYprogram_quotations,T52);
  lit_65 = YPPsym((P)"program-quotations-setter");
  T56 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_quotations_setter_60 = YPmet(FUNCODEREF(fun_program_quotations_setter_60),LITREF(lit_65),T56,ENVNUL,PNUL,YPfalse);
  T59 = BOUNDP(Yx8rSast_linearizeYprogram_quotations_setter);
  if (T59 != YPfalse) {
    T58 = VARREF(Yx8rSast_linearizeYprogram_quotations_setter);
  } else {
    T58 = YPfalse;
  }
  T60 = fun_program_quotations_setter_60;
  T57 = CALL2(1,VARREF(YPdefine_method),T58,T60);
  VARSET(Yx8rSast_linearizeYprogram_quotations_setter,T57);
  T61 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_61 = YPmet(FUNCODEREF(fun_61),YPfalse,T61,ENVNUL,PNUL,YPfalse);
  T62 = fun_61;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_quotations),VARREF(Yx8rSast_linearizeYprogram_quotations_setter),VARREF(YLanyG),T62);
  lit_66 = YPPsym((P)"program-definitions");
  T63 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_program_definitions_62 = YPmet(FUNCODEREF(fun_program_definitions_62),LITREF(lit_66),T63,ENVNUL,PNUL,YPfalse);
  T66 = BOUNDP(Yx8rSast_linearizeYprogram_definitions);
  if (T66 != YPfalse) {
    T65 = VARREF(Yx8rSast_linearizeYprogram_definitions);
  } else {
    T65 = YPfalse;
  }
  T67 = fun_program_definitions_62;
  T64 = CALL2(1,VARREF(YPdefine_method),T65,T67);
  VARSET(Yx8rSast_linearizeYprogram_definitions,T64);
  lit_67 = YPPsym((P)"program-definitions-setter");
  T68 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_program_definitions_setter_63 = YPmet(FUNCODEREF(fun_program_definitions_setter_63),LITREF(lit_67),T68,ENVNUL,PNUL,YPfalse);
  T71 = BOUNDP(Yx8rSast_linearizeYprogram_definitions_setter);
  if (T71 != YPfalse) {
    T70 = VARREF(Yx8rSast_linearizeYprogram_definitions_setter);
  } else {
    T70 = YPfalse;
  }
  T72 = fun_program_definitions_setter_63;
  T69 = CALL2(1,VARREF(YPdefine_method),T70,T72);
  VARSET(Yx8rSast_linearizeYprogram_definitions_setter,T69);
  T73 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_64 = YPmet(FUNCODEREF(fun_64),YPfalse,T73,ENVNUL,PNUL,YPfalse);
  T74 = fun_64;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(Yx8rSast_linearizeYprogram_definitions),VARREF(Yx8rSast_linearizeYprogram_definitions_setter),VARREF(YLanyG),T74);
  lit_68 = YPPsym((P)"<top-level-form>");
  T76 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T75 = CALL2(1,VARREF(Yfab_class),LITREF(lit_68),T76);
  VARSET(Yx8rSast_linearizeYLtop_level_formG,T75);
  lit_69 = YPPsym((P)"form-program");
  T77 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_program_65 = YPmet(FUNCODEREF(fun_form_program_65),LITREF(lit_69),T77,ENVNUL,PNUL,YPfalse);
  T80 = BOUNDP(Yx8rSast_linearizeYform_program);
  if (T80 != YPfalse) {
    T79 = VARREF(Yx8rSast_linearizeYform_program);
  } else {
    T79 = YPfalse;
  }
  T81 = fun_form_program_65;
  T78 = CALL2(1,VARREF(YPdefine_method),T79,T81);
  VARSET(Yx8rSast_linearizeYform_program,T78);
  lit_70 = YPPsym((P)"form-program-setter");
  T82 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_program_setter_66 = YPmet(FUNCODEREF(fun_form_program_setter_66),LITREF(lit_70),T82,ENVNUL,PNUL,YPfalse);
  T85 = BOUNDP(Yx8rSast_linearizeYform_program_setter);
  if (T85 != YPfalse) {
    T84 = VARREF(Yx8rSast_linearizeYform_program_setter);
  } else {
    T84 = YPfalse;
  }
  T86 = fun_form_program_setter_66;
  T83 = CALL2(1,VARREF(YPdefine_method),T84,T86);
  VARSET(Yx8rSast_linearizeYform_program_setter,T83);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_program),VARREF(Yx8rSast_linearizeYform_program_setter),VARREF(Yx8rSastYLprogramG),VARREF(YPprop_unbound_error));
  lit_71 = YPPsym((P)"form-quotations");
  T87 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_quotations_67 = YPmet(FUNCODEREF(fun_form_quotations_67),LITREF(lit_71),T87,ENVNUL,PNUL,YPfalse);
  T90 = BOUNDP(Yx8rSast_linearizeYform_quotations);
  if (T90 != YPfalse) {
    T89 = VARREF(Yx8rSast_linearizeYform_quotations);
  } else {
    T89 = YPfalse;
  }
  T91 = fun_form_quotations_67;
  T88 = CALL2(1,VARREF(YPdefine_method),T89,T91);
  VARSET(Yx8rSast_linearizeYform_quotations,T88);
  lit_72 = YPPsym((P)"form-quotations-setter");
  T92 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_quotations_setter_68 = YPmet(FUNCODEREF(fun_form_quotations_setter_68),LITREF(lit_72),T92,ENVNUL,PNUL,YPfalse);
  T95 = BOUNDP(Yx8rSast_linearizeYform_quotations_setter);
  if (T95 != YPfalse) {
    T94 = VARREF(Yx8rSast_linearizeYform_quotations_setter);
  } else {
    T94 = YPfalse;
  }
  T96 = fun_form_quotations_setter_68;
  T93 = CALL2(1,VARREF(YPdefine_method),T94,T96);
  VARSET(Yx8rSast_linearizeYform_quotations_setter,T93);
  T97 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_69 = YPmet(FUNCODEREF(fun_69),YPfalse,T97,ENVNUL,PNUL,YPfalse);
  T98 = fun_69;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_quotations),VARREF(Yx8rSast_linearizeYform_quotations_setter),VARREF(YLanyG),T98);
  lit_73 = YPPsym((P)"form-definitions");
  T99 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_form_definitions_70 = YPmet(FUNCODEREF(fun_form_definitions_70),LITREF(lit_73),T99,ENVNUL,PNUL,YPfalse);
  T102 = BOUNDP(Yx8rSast_linearizeYform_definitions);
  if (T102 != YPfalse) {
    T101 = VARREF(Yx8rSast_linearizeYform_definitions);
  } else {
    T101 = YPfalse;
  }
  T103 = fun_form_definitions_70;
  T100 = CALL2(1,VARREF(YPdefine_method),T101,T103);
  VARSET(Yx8rSast_linearizeYform_definitions,T100);
  lit_74 = YPPsym((P)"form-definitions-setter");
  T104 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLtop_level_formG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_form_definitions_setter_71 = YPmet(FUNCODEREF(fun_form_definitions_setter_71),LITREF(lit_74),T104,ENVNUL,PNUL,YPfalse);
  T107 = BOUNDP(Yx8rSast_linearizeYform_definitions_setter);
  if (T107 != YPfalse) {
    T106 = VARREF(Yx8rSast_linearizeYform_definitions_setter);
  } else {
    T106 = YPfalse;
  }
  T108 = fun_form_definitions_setter_71;
  T105 = CALL2(1,VARREF(YPdefine_method),T106,T108);
  VARSET(Yx8rSast_linearizeYform_definitions_setter,T105);
  T109 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_72 = YPmet(FUNCODEREF(fun_72),YPfalse,T109,ENVNUL,PNUL,YPfalse);
  T110 = fun_72;
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYform_definitions),VARREF(Yx8rSast_linearizeYform_definitions_setter),VARREF(YLanyG),T110);
  lit_75 = YPPsym((P)"<closure-creation>");
  T112 = (P)YPpair(VARREF(Yx8rSastYLcomputed_programG),Ynil);
  T111 = CALL2(1,VARREF(Yfab_class),LITREF(lit_75),T112);
  VARSET(Yx8rSast_linearizeYLclosure_creationG,T111);
  lit_76 = YPPsym((P)"closure-creation-index");
  T113 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_73 = YPmet(FUNCODEREF(fun_closure_creation_index_73),LITREF(lit_76),T113,ENVNUL,PNUL,YPfalse);
  T116 = BOUNDP(Yx8rSast_linearizeYclosure_creation_index);
  if (T116 != YPfalse) {
    T115 = VARREF(Yx8rSast_linearizeYclosure_creation_index);
  } else {
    T115 = YPfalse;
  }
  T117 = fun_closure_creation_index_73;
  T114 = CALL2(1,VARREF(YPdefine_method),T115,T117);
  VARSET(Yx8rSast_linearizeYclosure_creation_index,T114);
  lit_77 = YPPsym((P)"closure-creation-index-setter");
  T118 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_index_setter_74 = YPmet(FUNCODEREF(fun_closure_creation_index_setter_74),LITREF(lit_77),T118,ENVNUL,PNUL,YPfalse);
  T121 = BOUNDP(Yx8rSast_linearizeYclosure_creation_index_setter);
  if (T121 != YPfalse) {
    T120 = VARREF(Yx8rSast_linearizeYclosure_creation_index_setter);
  } else {
    T120 = YPfalse;
  }
  T122 = fun_closure_creation_index_setter_74;
  T119 = CALL2(1,VARREF(YPdefine_method),T120,T122);
  VARSET(Yx8rSast_linearizeYclosure_creation_index_setter,T119);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_index),VARREF(Yx8rSast_linearizeYclosure_creation_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_78 = YPPsym((P)"closure-creation-free");
  T123 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_75 = YPmet(FUNCODEREF(fun_closure_creation_free_75),LITREF(lit_78),T123,ENVNUL,PNUL,YPfalse);
  T126 = BOUNDP(Yx8rSast_linearizeYclosure_creation_free);
  if (T126 != YPfalse) {
    T125 = VARREF(Yx8rSast_linearizeYclosure_creation_free);
  } else {
    T125 = YPfalse;
  }
  T127 = fun_closure_creation_free_75;
  T124 = CALL2(1,VARREF(YPdefine_method),T125,T127);
  VARSET(Yx8rSast_linearizeYclosure_creation_free,T124);
  lit_79 = YPPsym((P)"closure-creation-free-setter");
  T128 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLclosure_creationG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_closure_creation_free_setter_76 = YPmet(FUNCODEREF(fun_closure_creation_free_setter_76),LITREF(lit_79),T128,ENVNUL,PNUL,YPfalse);
  T131 = BOUNDP(Yx8rSast_linearizeYclosure_creation_free_setter);
  if (T131 != YPfalse) {
    T130 = VARREF(Yx8rSast_linearizeYclosure_creation_free_setter);
  } else {
    T130 = YPfalse;
  }
  T132 = fun_closure_creation_free_setter_76;
  T129 = CALL2(1,VARREF(YPdefine_method),T130,T132);
  VARSET(Yx8rSast_linearizeYclosure_creation_free_setter,T129);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLclosure_creationG),VARREF(Yx8rSast_linearizeYclosure_creation_free),VARREF(Yx8rSast_linearizeYclosure_creation_free_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  lit_80 = YPPsym((P)"flatten-seqs");
  T133 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_77 = YPmet(FUNCODEREF(fun_flatten_seqs_77),LITREF(lit_80),T133,ENVNUL,PNUL,YPfalse);
  T136 = BOUNDP(Yx8rSast_linearizeYflatten_seqs);
  if (T136 != YPfalse) {
    T135 = VARREF(Yx8rSast_linearizeYflatten_seqs);
  } else {
    T135 = YPfalse;
  }
  T137 = fun_flatten_seqs_77;
  T134 = CALL2(1,VARREF(YPdefine_method),T135,T137);
  VARSET(Yx8rSast_linearizeYflatten_seqs,T134);
  lit_81 = YPPsym((P)"s");
  lit_82 = YPPsym((P)"r");
  lit_83 = YPPsym((P)"inner");
  lit_84 = YPPsym((P)"ss");
  T140 = YPsig(YPPlist(2,LITREF(lit_84),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_inner_78 = YPmet(FUNCODEREF(fun_inner_78),LITREF(lit_83),T140,ENVNUL,PNUL,YPfalse);
  T139 = YPsig(YPPlist(2,LITREF(lit_81),LITREF(lit_82)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_79 = YPmet(FUNCODEREF(fun_loop_79),LITREF(lit_32),T139,ENVNUL,PNUL,YPfalse);
  T138 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLsequentialG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_flatten_seqs_80 = YPmet(FUNCODEREF(fun_flatten_seqs_80),LITREF(lit_80),T138,ENVNUL,PNUL,YPfalse);
  T143 = BOUNDP(Yx8rSast_linearizeYflatten_seqs);
  if (T143 != YPfalse) {
    T142 = VARREF(Yx8rSast_linearizeYflatten_seqs);
  } else {
    T142 = YPfalse;
  }
  T144 = fun_flatten_seqs_80;
  T141 = CALL2(1,VARREF(YPdefine_method),T142,T144);
  VARSET(Yx8rSast_linearizeYflatten_seqs,T141);
  lit_85 = YPPsym((P)"as-top-level-forms");
  lit_86 = YPPsym((P)"programs");
  T146 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_81 = YPmet(FUNCODEREF(fun_81),YPfalse,T146,ENVNUL,PNUL,YPfalse);
  T145 = YPsig(YPPlist(1,LITREF(lit_86)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_as_top_level_forms_82 = YPmet(FUNCODEREF(fun_as_top_level_forms_82),LITREF(lit_85),T145,ENVNUL,PNUL,YPfalse);
  T149 = BOUNDP(Yx8rSast_linearizeYas_top_level_forms);
  if (T149 != YPfalse) {
    T148 = VARREF(Yx8rSast_linearizeYas_top_level_forms);
  } else {
    T148 = YPfalse;
  }
  T150 = fun_as_top_level_forms_82;
  T147 = CALL2(1,VARREF(YPdefine_method),T148,T150);
  VARSET(Yx8rSast_linearizeYas_top_level_forms,T147);
  lit_87 = YPPsym((P)"extract-things!");
  T152 = YPsig(YPPlist(1,LITREF(lit_30)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_83 = YPmet(FUNCODEREF(fun_83),YPfalse,T152,ENVNUL,PNUL,YPfalse);
  T151 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_extract_thingsX_84 = YPmet(FUNCODEREF(fun_extract_thingsX_84),LITREF(lit_87),T151,ENVNUL,PNUL,YPfalse);
  T155 = BOUNDP(Yx8rSast_linearizeYextract_thingsX);
  if (T155 != YPfalse) {
    T154 = VARREF(Yx8rSast_linearizeYextract_thingsX);
  } else {
    T154 = YPfalse;
  }
  T156 = fun_extract_thingsX_84;
  T153 = CALL2(1,VARREF(YPdefine_method),T154,T156);
  VARSET(Yx8rSast_linearizeYextract_thingsX,T153);
  lit_88 = YPPsym((P)"extract!");
  lit_89 = YPPsym((P)"result");
  T157 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_85 = YPmet(FUNCODEREF(fun_extractX_85),LITREF(lit_88),T157,ENVNUL,PNUL,YPfalse);
  T160 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T160 != YPfalse) {
    T159 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T159 = YPfalse;
  }
  T161 = fun_extractX_85;
  T158 = CALL2(1,VARREF(YPdefine_method),T159,T161);
  VARSET(Yx8rSast_linearizeYextractX,T158);
  lit_90 = YPPsym((P)"quotation");
  T162 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLconstantG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_86 = YPmet(FUNCODEREF(fun_extractX_86),LITREF(lit_88),T162,ENVNUL,PNUL,YPfalse);
  T165 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T165 != YPfalse) {
    T164 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T164 = YPfalse;
  }
  T166 = fun_extractX_86;
  T163 = CALL2(1,VARREF(YPdefine_method),T164,T166);
  VARSET(Yx8rSast_linearizeYextractX,T163);
  T167 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLraw_constantG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_87 = YPmet(FUNCODEREF(fun_extractX_87),LITREF(lit_88),T167,ENVNUL,PNUL,YPfalse);
  T170 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T170 != YPfalse) {
    T169 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T169 = YPfalse;
  }
  T171 = fun_extractX_87;
  T168 = CALL2(1,VARREF(YPdefine_method),T169,T171);
  VARSET(Yx8rSast_linearizeYextractX,T168);
  lit_91 = YPPsym((P)"binding");
  T173 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_88 = YPmet(FUNCODEREF(fun_88),YPfalse,T173,ENVNUL,PNUL,YPfalse);
  T172 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_89 = YPmet(FUNCODEREF(fun_extractX_89),LITREF(lit_88),T172,ENVNUL,PNUL,YPfalse);
  T176 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T176 != YPfalse) {
    T175 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T175 = YPfalse;
  }
  T177 = fun_extractX_89;
  T174 = CALL2(1,VARREF(YPdefine_method),T175,T177);
  VARSET(Yx8rSast_linearizeYextractX,T174);
  T178 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_30),LITREF(lit_89)),YPPlist(3,VARREF(Yx8rSastYLast_primitive_definitionG),VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_extractX_90 = YPmet(FUNCODEREF(fun_extractX_90),LITREF(lit_88),T178,ENVNUL,PNUL,YPfalse);
  T181 = BOUNDP(Yx8rSast_linearizeYextractX);
  if (T181 != YPfalse) {
    T180 = VARREF(Yx8rSast_linearizeYextractX);
  } else {
    T180 = YPfalse;
  }
  T182 = fun_extractX_90;
  T179 = CALL2(1,VARREF(YPdefine_method),T180,T182);
  VARSET(Yx8rSast_linearizeYextractX,T179);
  lit_92 = YPPsym((P)"adjoin-definition!");
  T183 = YPsig(YPPlist(3,LITREF(lit_30),LITREF(lit_89),LITREF(lit_8)),YPPlist(3,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_adjoin_definitionX_91 = YPmet(FUNCODEREF(fun_adjoin_definitionX_91),LITREF(lit_92),T183,ENVNUL,PNUL,YPfalse);
  T186 = BOUNDP(Yx8rSast_linearizeYadjoin_definitionX);
  if (T186 != YPfalse) {
    T185 = VARREF(Yx8rSast_linearizeYadjoin_definitionX);
  } else {
    T185 = YPfalse;
  }
  T187 = fun_adjoin_definitionX_91;
  T184 = CALL2(1,VARREF(YPdefine_method),T185,T187);
  VARSET(Yx8rSast_linearizeYadjoin_definitionX,T184);
  lit_93 = YPPsym((P)"split-program");
  lit_94 = YPPsym((P)"max-count");
  T188 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(YLanyG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_92 = YPmet(FUNCODEREF(fun_split_program_92),LITREF(lit_93),T188,ENVNUL,PNUL,YPfalse);
  T191 = BOUNDP(Yx8rSast_linearizeYsplit_program);
  if (T191 != YPfalse) {
    T190 = VARREF(Yx8rSast_linearizeYsplit_program);
  } else {
    T190 = YPfalse;
  }
  T192 = fun_split_program_92;
  T189 = CALL2(1,VARREF(YPdefine_method),T190,T192);
  VARSET(Yx8rSast_linearizeYsplit_program,T189);
  lit_95 = YPPsym((P)"forms");
  lit_96 = YPPsym((P)"es");
  lit_97 = YPPsym((P)"count");
  T195 = YPsig(YPPlist(3,LITREF(lit_33),LITREF(lit_96),LITREF(lit_97)),YPPlist(3,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_inner_93 = YPmet(FUNCODEREF(fun_inner_93),LITREF(lit_83),T195,ENVNUL,PNUL,YPfalse);
  T194 = YPsig(YPPlist(2,LITREF(lit_95),LITREF(lit_81)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_loop_94 = YPmet(FUNCODEREF(fun_loop_94),LITREF(lit_32),T194,ENVNUL,PNUL,YPfalse);
  T193 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_94)),YPPlist(2,VARREF(Yx8rSastYLsequentialG),VARREF(YLintG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_split_program_95 = YPmet(FUNCODEREF(fun_split_program_95),LITREF(lit_93),T193,ENVNUL,PNUL,YPfalse);
  T198 = BOUNDP(Yx8rSast_linearizeYsplit_program);
  if (T198 != YPfalse) {
    T197 = VARREF(Yx8rSast_linearizeYsplit_program);
  } else {
    T197 = YPfalse;
  }
  T199 = fun_split_program_95;
  T196 = CALL2(1,VARREF(YPdefine_method),T197,T199);
  VARSET(Yx8rSast_linearizeYsplit_program,T196);
  lit_98 = YPPsym((P)"closurize-main!");
  lit_99 = YPPsym((P)"calls");
  lit_100 = YPPsym((P)"defns");
  lit_101 = YPsb((P)"---main-");
  lit_102 = YPsb((P)"---");
  lit_103 = YPPsym((P)"predefined");
  T201 = YPsig(YPPlist(4,LITREF(lit_99),LITREF(lit_100),LITREF(lit_58),LITREF(lit_95)),YPPlist(4,VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)4),VARREF(YLanyG),Ynil);
  fun_loop_96 = YPmet(FUNCODEREF(fun_loop_96),LITREF(lit_32),T201,ENVNUL,PNUL,YPfalse);
  T200 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_82),LITREF(lit_94)),YPPlist(3,VARREF(Yx8rSast_linearizeYLflattened_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(Yx8rSast_linearizeYLflattened_programG),Ynil);
  fun_closurize_mainX_97 = YPmet(FUNCODEREF(fun_closurize_mainX_97),LITREF(lit_98),T200,ENVNUL,PNUL,YPfalse);
  T204 = BOUNDP(Yx8rSast_linearizeYclosurize_mainX);
  if (T204 != YPfalse) {
    T203 = VARREF(Yx8rSast_linearizeYclosurize_mainX);
  } else {
    T203 = YPfalse;
  }
  T205 = fun_closurize_mainX_97;
  T202 = CALL2(1,VARREF(YPdefine_method),T203,T205);
  VARSET(Yx8rSast_linearizeYclosurize_mainX,T202);
  lit_104 = YPPsym((P)"gather-temporaries!");
  lit_105 = YPPsym((P)"def");
  T207 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_98 = YPmet(FUNCODEREF(fun_98),YPfalse,T207,ENVNUL,PNUL,YPfalse);
  T206 = YPsig(YPPlist(1,LITREF(lit_14)),YPPlist(1,VARREF(Yx8rSastYLprogramG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_gather_temporariesX_99 = YPmet(FUNCODEREF(fun_gather_temporariesX_99),LITREF(lit_104),T206,ENVNUL,PNUL,YPfalse);
  T210 = BOUNDP(Yx8rSast_linearizeYgather_temporariesX);
  if (T210 != YPfalse) {
    T209 = VARREF(Yx8rSast_linearizeYgather_temporariesX);
  } else {
    T209 = YPfalse;
  }
  T211 = fun_gather_temporariesX_99;
  T208 = CALL2(1,VARREF(YPdefine_method),T209,T211);
  VARSET(Yx8rSast_linearizeYgather_temporariesX,T208);
  lit_106 = YPPsym((P)"collect-temporaries!");
  T212 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_100 = YPmet(FUNCODEREF(fun_collect_temporariesX_100),LITREF(lit_106),T212,ENVNUL,PNUL,YPfalse);
  T215 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T215 != YPfalse) {
    T214 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T214 = YPfalse;
  }
  T216 = fun_collect_temporariesX_100;
  T213 = CALL2(1,VARREF(YPdefine_method),T214,T216);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T213);
  T217 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLlocal_referenceG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_101 = YPmet(FUNCODEREF(fun_collect_temporariesX_101),LITREF(lit_106),T217,ENVNUL,PNUL,YPfalse);
  T220 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T220 != YPfalse) {
    T219 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T219 = YPfalse;
  }
  T221 = fun_collect_temporariesX_101;
  T218 = CALL2(1,VARREF(YPdefine_method),T219,T221);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T218);
  T222 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLfix_letG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_102 = YPmet(FUNCODEREF(fun_collect_temporariesX_102),LITREF(lit_106),T222,ENVNUL,PNUL,YPfalse);
  T225 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T225 != YPfalse) {
    T224 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T224 = YPfalse;
  }
  T226 = fun_collect_temporariesX_102;
  T223 = CALL2(1,VARREF(YPdefine_method),T224,T226);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T223);
  T227 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_82)),YPPlist(3,VARREF(Yx8rSastYLlocalsG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_temporariesX_103 = YPmet(FUNCODEREF(fun_collect_temporariesX_103),LITREF(lit_106),T227,ENVNUL,PNUL,YPfalse);
  T230 = BOUNDP(Yx8rSast_linearizeYcollect_temporariesX);
  if (T230 != YPfalse) {
    T229 = VARREF(Yx8rSast_linearizeYcollect_temporariesX);
  } else {
    T229 = YPfalse;
  }
  T231 = fun_collect_temporariesX_103;
  T228 = CALL2(1,VARREF(YPdefine_method),T229,T231);
  VARSET(Yx8rSast_linearizeYcollect_temporariesX,T228);
  lit_107 = YPPsym((P)"adjoin-temporary-variables!");
  lit_108 = YPPsym((P)"new-bindings");
  lit_109 = YPPsym((P)"adjoin");
  lit_110 = YPPsym((P)"temps");
  T233 = YPsig(YPPlist(2,LITREF(lit_110),LITREF(lit_31)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_104 = YPmet(FUNCODEREF(fun_adjoin_104),LITREF(lit_109),T233,ENVNUL,PNUL,YPfalse);
  T232 = YPsig(YPPlist(2,LITREF(lit_54),LITREF(lit_108)),YPPlist(2,VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_adjoin_temporary_variablesX_105 = YPmet(FUNCODEREF(fun_adjoin_temporary_variablesX_105),LITREF(lit_107),T232,ENVNUL,PNUL,YPfalse);
  T236 = BOUNDP(Yx8rSast_linearizeYadjoin_temporary_variablesX);
  if (T236 != YPfalse) {
    T235 = VARREF(Yx8rSast_linearizeYadjoin_temporary_variablesX);
  } else {
    T235 = YPfalse;
  }
  T237 = fun_adjoin_temporary_variablesX_105;
  T234 = CALL2(1,VARREF(YPdefine_method),T235,T237);
  VARSET(Yx8rSast_linearizeYadjoin_temporary_variablesX,T234);
  lit_111 = YPPsym((P)"<renamed-local-binding>");
  T239 = (P)YPpair(VARREF(Yx8rSastYLlocal_bindingG),Ynil);
  T238 = CALL2(1,VARREF(Yfab_class),LITREF(lit_111),T239);
  VARSET(Yx8rSast_linearizeYLrenamed_local_bindingG,T238);
  lit_112 = YPPsym((P)"binding-index");
  T240 = YPsig(YPPlist(1,LITREF(lit_2)),YPPlist(1,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_binding_index_106 = YPmet(FUNCODEREF(fun_binding_index_106),LITREF(lit_112),T240,ENVNUL,PNUL,YPfalse);
  T243 = BOUNDP(Yx8rSastYbinding_index);
  if (T243 != YPfalse) {
    T242 = VARREF(Yx8rSastYbinding_index);
  } else {
    T242 = YPfalse;
  }
  T244 = fun_binding_index_106;
  T241 = CALL2(1,VARREF(YPdefine_method),T242,T244);
  VARSET(Yx8rSastYbinding_index,T241);
  lit_113 = YPPsym((P)"binding-index-setter");
  T245 = YPsig(YPPlist(2,LITREF(lit_4),LITREF(lit_2)),YPPlist(2,VARREF(YLanyG),VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_binding_index_setter_107 = YPmet(FUNCODEREF(fun_binding_index_setter_107),LITREF(lit_113),T245,ENVNUL,PNUL,YPfalse);
  T248 = BOUNDP(Yx8rSastYbinding_index_setter);
  if (T248 != YPfalse) {
    T247 = VARREF(Yx8rSastYbinding_index_setter);
  } else {
    T247 = YPfalse;
  }
  T249 = fun_binding_index_setter_107;
  T246 = CALL2(1,VARREF(YPdefine_method),T247,T249);
  VARSET(Yx8rSastYbinding_index_setter,T246);
  CALLN(1,VARREF(YPprop),5,VARREF(Yx8rSast_linearizeYLrenamed_local_bindingG),VARREF(Yx8rSastYbinding_index),VARREF(Yx8rSastYbinding_index_setter),VARREF(YLanyG),VARREF(YPprop_unbound_error));
  VARSET(Yx8rSast_linearizeYTrenaming_bindings_counterT,YPint((P)0));
  lit_114 = YPPsym((P)"new-renamed-binding");
  T250 = YPsig(YPPlist(1,LITREF(lit_91)),YPPlist(1,VARREF(Yx8rSastYLlocal_bindingG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_new_renamed_binding_108 = YPmet(FUNCODEREF(fun_new_renamed_binding_108),LITREF(lit_114),T250,ENVNUL,PNUL,YPfalse);
  T253 = BOUNDP(Yx8rSast_linearizeYnew_renamed_binding);
  if (T253 != YPfalse) {
    T252 = VARREF(Yx8rSast_linearizeYnew_renamed_binding);
  } else {
    T252 = YPfalse;
  }
  T254 = fun_new_renamed_binding_108;
  T251 = CALL2(1,VARREF(YPdefine_method),T252,T254);
  VARSET(Yx8rSast_linearizeYnew_renamed_binding,T251);
  VARSET(Yx8rSast_linearizeYTregister_passiveQT,YPfalse);
  lit_115 = YPPsym((P)"register-allocate!");
  lit_116 = YPPsym((P)"register-passive?");
  T258 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_109 = YPmet(FUNCODEREF(fun_109),YPfalse,T258,ENVNUL,PNUL,YPfalse);
  T257 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_110 = YPmet(FUNCODEREF(fun_110),YPfalse,T257,ENVNUL,PNUL,YPfalse);
  T256 = YPsig(Ynil,Ynil,YPfalse,YPint((P)0),VARREF(YLanyG),Ynil);
  fun_111 = YPmet(FUNCODEREF(fun_111),YPfalse,T256,ENVNUL,PNUL,YPfalse);
  T255 = YPsig(YPPlist(2,LITREF(lit_14),LITREF(lit_116)),YPPlist(2,VARREF(Yx8rSastYLprogramG),VARREF(YLlogG)),YPfalse,YPint((P)2),VARREF(YLanyG),Ynil);
  fun_register_allocateX_112 = YPmet(FUNCODEREF(fun_register_allocateX_112),LITREF(lit_115),T255,ENVNUL,PNUL,YPfalse);
  T261 = BOUNDP(Yx8rSast_linearizeYregister_allocateX);
  if (T261 != YPfalse) {
    T260 = VARREF(Yx8rSast_linearizeYregister_allocateX);
  } else {
    T260 = YPfalse;
  }
  T262 = fun_register_allocateX_112;
  T259 = CALL2(1,VARREF(YPdefine_method),T260,T262);
  VARSET(Yx8rSast_linearizeYregister_allocateX,T259);
  lit_117 = YPPsym((P)"allocate-register");
  lit_118 = YPPsym((P)"val?");
  T263 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLprogramG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_allocate_register_113 = YPmet(FUNCODEREF(fun_allocate_register_113),LITREF(lit_117),T263,ENVNUL,PNUL,YPfalse);
  T266 = BOUNDP(Yx8rSast_linearizeYallocate_register);
  if (T266 != YPfalse) {
    T265 = VARREF(Yx8rSast_linearizeYallocate_register);
  } else {
    T265 = YPfalse;
  }
  T267 = fun_allocate_register_113;
  T264 = CALL2(1,VARREF(YPdefine_method),T265,T267);
  VARSET(Yx8rSast_linearizeYallocate_register,T264);
  lit_119 = YPPsym((P)"collect-registers!");
  T268 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLcomputed_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_114 = YPmet(FUNCODEREF(fun_collect_registersX_114),LITREF(lit_119),T268,ENVNUL,PNUL,YPfalse);
  T271 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T271 != YPfalse) {
    T270 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T270 = YPfalse;
  }
  T272 = fun_collect_registersX_114;
  T269 = CALL2(1,VARREF(YPdefine_method),T270,T272);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T269);
  T277 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  T276 = fun_loop_115 = YPmet(FUNCODEREF(fun_loop_115),LITREF(lit_32),T277,ENVNUL,PNUL,YPfalse);
  T275 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLsequentialG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  T274 = fun_collect_registersX_116 = YPmet(FUNCODEREF(fun_collect_registersX_116),LITREF(lit_119),T275,ENVNUL,PNUL,YPfalse);
  T281 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T281 != YPfalse) {
    T280 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T280 = YPfalse;
  }
  T282 = fun_collect_registersX_116;
  T279 = CALL2(1,VARREF(YPdefine_method),T280,T282);
  T278 = VARSET(Yx8rSast_linearizeYcollect_registersX,T279);
  T273 = T278;
  return T273;
}

P Yx8rSast_linearizeY___main_2___() {
  P T33,T32,T31,T30,T29,T28,T27,T26,T25,T24,T23,T22,T21,T20,T19,T18;
  P T17,T16,T15,T14,T13,T12,T11,T10,T9,T8,T7,T6,T5,T4,T3,T2;
  P T1,T0;
loop:
  T0 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLpassive_programG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_117 = YPmet(FUNCODEREF(fun_collect_registersX_117),LITREF(lit_119),T0,ENVNUL,PNUL,YPfalse);
  T3 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T3 != YPfalse) {
    T2 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T2 = YPfalse;
  }
  T4 = fun_collect_registersX_117;
  T1 = CALL2(1,VARREF(YPdefine_method),T2,T4);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T1);
  T6 = YPsig(YPPlist(1,LITREF(lit_105)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_118 = YPmet(FUNCODEREF(fun_118),YPfalse,T6,ENVNUL,PNUL,YPfalse);
  T5 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSast_linearizeYLtop_level_formG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_119 = YPmet(FUNCODEREF(fun_collect_registersX_119),LITREF(lit_119),T5,ENVNUL,PNUL,YPfalse);
  T9 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T9 != YPfalse) {
    T8 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T8 = YPfalse;
  }
  T10 = fun_collect_registersX_119;
  T7 = CALL2(1,VARREF(YPdefine_method),T8,T10);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T7);
  T11 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLast_methodG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_120 = YPmet(FUNCODEREF(fun_collect_registersX_120),LITREF(lit_119),T11,ENVNUL,PNUL,YPfalse);
  T14 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T14 != YPfalse) {
    T13 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T13 = YPfalse;
  }
  T15 = fun_collect_registersX_120;
  T12 = CALL2(1,VARREF(YPdefine_method),T13,T15);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T12);
  T16 = YPsig(YPPlist(3,LITREF(lit_14),LITREF(lit_54),LITREF(lit_118)),YPPlist(3,VARREF(Yx8rSastYLast_primitiveG),VARREF(YLanyG),VARREF(YLanyG)),YPfalse,YPint((P)3),VARREF(YLanyG),Ynil);
  fun_collect_registersX_121 = YPmet(FUNCODEREF(fun_collect_registersX_121),LITREF(lit_119),T16,ENVNUL,PNUL,YPfalse);
  T19 = BOUNDP(Yx8rSast_linearizeYcollect_registersX);
  if (T19 != YPfalse) {
    T18 = VARREF(Yx8rSast_linearizeYcollect_registersX);
  } else {
    T18 = YPfalse;
  }
  T20 = fun_collect_registersX_121;
  T17 = CALL2(1,VARREF(YPdefine_method),T18,T20);
  VARSET(Yx8rSast_linearizeYcollect_registersX,T17);
  lit_120 = YPPsym((P)"ast-contains-fun?");
  T21 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(Yx8rSastYLast_methodG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_122 = YPmet(FUNCODEREF(fun_ast_contains_funQ_122),LITREF(lit_120),T21,ENVNUL,PNUL,YPfalse);
  T24 = BOUNDP(Yx8rSast_linearizeYast_contains_funQ);
  if (T24 != YPfalse) {
    T23 = VARREF(Yx8rSast_linearizeYast_contains_funQ);
  } else {
    T23 = YPfalse;
  }
  T25 = fun_ast_contains_funQ_122;
  T22 = CALL2(1,VARREF(YPdefine_method),T23,T25);
  VARSET(Yx8rSast_linearizeYast_contains_funQ,T22);
  lit_121 = YPPsym((P)"return");
  lit_122 = YPPsym((P)"walk");
  T28 = YPsig(YPPlist(1,LITREF(lit_9)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_walk_123 = YPmet(FUNCODEREF(fun_walk_123),LITREF(lit_122),T28,ENVNUL,PNUL,YPfalse);
  T27 = YPsig(YPPlist(1,LITREF(lit_121)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLanyG),Ynil);
  fun_124 = YPmet(FUNCODEREF(fun_124),YPfalse,T27,ENVNUL,PNUL,YPfalse);
  T26 = YPsig(YPPlist(1,LITREF(lit_8)),YPPlist(1,VARREF(YLanyG)),YPfalse,YPint((P)1),VARREF(YLlogG),Ynil);
  fun_ast_contains_funQ_125 = YPmet(FUNCODEREF(fun_ast_contains_funQ_125),LITREF(lit_120),T26,ENVNUL,PNUL,YPfalse);
  T31 = BOUNDP(Yx8rSast_linearizeYast_contains_funQ);
  if (T31 != YPfalse) {
    T30 = VARREF(Yx8rSast_linearizeYast_contains_funQ);
  } else {
    T30 = YPfalse;
  }
  T32 = fun_ast_contains_funQ_125;
  T29 = CALL2(1,VARREF(YPdefine_method),T30,T32);
  VARSET(Yx8rSast_linearizeYast_contains_funQ,T29);
  T33 = YPfalse;
  return T33;
}

/* MODULE ENVIRONMENT INFORMATION */

extern MODULE_INFO module_info_gooSboot;
extern MODULE_INFO module_info_gooSmacros;
extern MODULE_INFO module_info_gooSruntime;
extern MODULE_INFO module_info_x8rSast;
extern MODULE_INFO module_info_gooStypes;
extern MODULE_INFO module_info_gooSmath;
extern MODULE_INFO module_info_gooScols;
extern MODULE_INFO module_info_gooScolsStab;
extern MODULE_INFO module_info_gooScolsScol;
extern MODULE_INFO module_info_gooScolsSstr;
extern MODULE_INFO module_info_gooScolsSseq;
extern MODULE_INFO module_info_gooScolsScolx;
extern MODULE_INFO module_info_gooScolsSlst;
extern MODULE_INFO module_info_gooScolsSbuf;
extern MODULE_INFO module_info_gooScolsSseqx;
extern MODULE_INFO module_info_gooScolsSstep;
extern MODULE_INFO module_info_gooScolsSzip;
extern MODULE_INFO module_info_gooScolsSassoc;
extern MODULE_INFO module_info_gooSmag;
extern MODULE_INFO module_info_gooScolsSrange;
extern MODULE_INFO module_info_gooScolsSmap;
extern MODULE_INFO module_info_gooScolsScycle;

static USE_INFO use_infos[] = {
  {&module_info_gooSboot},
  {&module_info_gooSmacros},
  {&module_info_gooSruntime},
  {&module_info_x8rSast},
  {&module_info_gooStypes},
  {&module_info_gooSmath},
  {&module_info_gooScols},
  {NULL}
};

static IMPORT_INFO import_infos[] = {
  {"$e", &module_info_gooSmath, "$e"},
  {"always", &module_info_gooSruntime, "always"},
  {"def-programs", &module_info_x8rSast, "def-programs"},
  {"%fasin", &module_info_gooSboot, "%fasin"},
  {"tab-shrink-threshold", &module_info_gooScolsStab, "tab-shrink-threshold"},
  {"dp", &module_info_gooSboot, "dp"},
  {"<global-reference>", &module_info_x8rSast, "<global-reference>"},
  {"do3", &module_info_gooScolsScol, "do3"},
  {"compose", &module_info_gooSruntime, "compose"},
  {"%i-", &module_info_gooSboot, "%i-"},
  {"ascii-limit", &module_info_gooScolsSstr, "ascii-limit"},
  {"fold+", &module_info_gooScolsScol, "fold+"},
  {"binding-info", &module_info_x8rSast, "binding-info"},
  {"collected", &module_info_gooSmacros, "collected"},
  {"nxt", &module_info_gooScolsScol, "nxt"},
  {"application-arguments", &module_info_x8rSast, "application-arguments"},
  {"$goo-boot-module-name", &module_info_x8rSast, "$goo-boot-module-name"},
  {"set-module-environments", &module_info_x8rSast, "set-module-environments"},
  {"as-copy", &module_info_gooScolsScol, "as-copy"},
  {"sig-names", &module_info_gooSboot, "sig-names"},
  {"<runtime-assignment>", &module_info_x8rSast, "<runtime-assignment>"},
  {"function-value", &module_info_x8rSast, "function-value"},
  {"string-join", &module_info_gooScolsSstr, "string-join"},
  {"or", &module_info_gooSmacros, "or"},
  {"<programs>", &module_info_x8rSast, "<programs>"},
  {"%put", &module_info_gooSboot, "%put"},
  {"without-prop-unbound-errors", &module_info_gooSmacros, "without-prop-unbound-errors"},
  {"to-str", &module_info_gooSmath, "to-str"},
  {"%it/", &module_info_gooSboot, "%it/"},
  {"<sym>", &module_info_gooSboot, "<sym>"},
  {"if", &module_info_gooSboot, "if"},
  {"isqrt", &module_info_gooSmath, "isqrt"},
  {"met-app?", &module_info_gooSboot, "met-app?"},
  {"locals-bindings", &module_info_x8rSast, "locals-bindings"},
  {"install-initial-bindings", &module_info_x8rSast, "install-initial-bindings"},
  {"t=", &module_info_gooStypes, "t="},
  {"signature-nary?-setter", &module_info_x8rSast, "signature-nary?-setter"},
  {"lower?", &module_info_gooSmath, "lower?"},
  {"3rd", &module_info_gooScolsSseq, "3rd"},
  {"wrong-number-arguments-error", &module_info_gooSboot, "wrong-number-arguments-error"},
  {"*boot-macro-names*", &module_info_gooSboot, "*boot-macro-names*"},
  {"%i&", &module_info_gooSboot, "%i&"},
  {"monitor-handler", &module_info_x8rSast, "monitor-handler"},
  {"%symbols", &module_info_gooSboot, "%symbols"},
  {"constant-index", &module_info_x8rSast, "constant-index"},
  {"@isa?", &module_info_gooSboot, "@isa?"},
  {"logn", &module_info_gooSmath, "logn"},
  {"reference-binding", &module_info_x8rSast, "reference-binding"},
  {"locals-body", &module_info_x8rSast, "locals-body"},
  {"any?", &module_info_gooStypes, "any?"},
  {"round/", &module_info_gooSmath, "round/"},
  {"|", &module_info_gooSmath, "|"},
  {"signature-value", &module_info_x8rSast, "signature-value"},
  {"<col>", &module_info_gooSboot, "<col>"},
  {"%file-exists?", &module_info_gooSboot, "%file-exists?"},
  {"zap!", &module_info_gooScolsScolx, "zap!"},
  {"%do-stack-frames", &module_info_gooSboot, "%do-stack-frames"},
  {"do", &module_info_gooSmacros, "do"},
  {"tail-setter", &module_info_gooSboot, "tail-setter"},
  {"find-or", &module_info_gooScolsScol, "find-or"},
  {"<locals>", &module_info_x8rSast, "<locals>"},
  {"<local-assignment>", &module_info_x8rSast, "<local-assignment>"},
  {"sqrt", &module_info_gooSmath, "sqrt"},
  {"now-key", &module_info_gooScolsScol, "now-key"},
  {"%bb", &module_info_gooSboot, "%bb"},
  {"assq", &module_info_gooScolsSlst, "assq"},
  {"sig-arity", &module_info_gooSboot, "sig-arity"},
  {"mif", &module_info_gooSboot, "mif"},
  {"len-setter", &module_info_gooScolsSbuf, "len-setter"},
  {"%velt-setter", &module_info_gooSboot, "%velt-setter"},
  {"function-debug-name-setter", &module_info_x8rSast, "function-debug-name-setter"},
  {"%ready?", &module_info_gooSboot, "%ready?"},
  {"exported", &module_info_gooSmacros, "exported"},
  {"fab-gen", &module_info_gooSboot, "fab-gen"},
  {"function-index", &module_info_x8rSast, "function-index"},
  {"<prop>", &module_info_gooSboot, "<prop>"},
  {"trunc/", &module_info_gooSmath, "trunc/"},
  {"object-parents", &module_info_gooSboot, "object-parents"},
  {"empty", &module_info_gooScolsScol, "empty"},
  {"fabs", &module_info_gooSmath, "fabs"},
  {"dup", &module_info_gooScolsScol, "dup"},
  {"%peek", &module_info_gooSboot, "%peek"},
  {"%next-methods", &module_info_gooSboot, "%next-methods"},
  {"neg", &module_info_gooSmath, "neg"},
  {"var-type", &module_info_gooSmacros, "var-type"},
  {"find-environment-module", &module_info_x8rSast, "find-environment-module"},
  {"ceiling/", &module_info_gooSmath, "ceiling/"},
  {"<ast-signature>", &module_info_x8rSast, "<ast-signature>"},
  {"function-debug-name", &module_info_x8rSast, "function-debug-name"},
  {"read", &module_info_gooSruntime, "read"},
  {"type-elts-setter", &module_info_gooStypes, "type-elts-setter"},
  {"<gen>", &module_info_gooSboot, "<gen>"},
  {"$default-handler-info", &module_info_gooSruntime, "$default-handler-info"},
  {"quasiquote", &module_info_gooSboot, "quasiquote"},
  {"collecting", &module_info_gooSmacros, "collecting"},
  {"env-object-name", &module_info_x8rSast, "env-object-name"},
  {"<static-global-environment>", &module_info_x8rSast, "<static-global-environment>"},
  {"case-insensitive-string-equal", &module_info_gooScolsStab, "case-insensitive-string-equal"},
  {"%i<<<", &module_info_gooSboot, "%i<<<"},
  {"<sequential>", &module_info_x8rSast, "<sequential>"},
  {"tail", &module_info_gooSboot, "tail"},
  {"fix-let-bindings-setter", &module_info_x8rSast, "fix-let-bindings-setter"},
  {"do-named-static-global-bindings", &module_info_x8rSast, "do-named-static-global-bindings"},
  {"pop-last!", &module_info_gooScolsSbuf, "pop-last!"},
  {"@<", &module_info_gooSboot, "@<"},
  {"now", &module_info_gooScolsScol, "now"},
  {"alter", &module_info_gooScolsSseqx, "alter"},
  {"elt-setter", &module_info_gooScolsScol, "elt-setter"},
  {"elt-default", &module_info_gooScolsScol, "elt-default"},
  {"binding-global-box", &module_info_x8rSast, "binding-global-box"},
  {"<simple-handler-info>", &module_info_gooSboot, "<simple-handler-info>"},
  {"%fsinh", &module_info_gooSboot, "%fsinh"},
  {"swapf", &module_info_gooSmacros, "swapf"},
  {"+", &module_info_gooSmath, "+"},
  {"upper?", &module_info_gooSmath, "upper?"},
  {"tab-growth-factor-setter", &module_info_gooScolsStab, "tab-growth-factor-setter"},
  {"invoke-handler-interactively", &module_info_gooSruntime, "invoke-handler-interactively"},
  {"sequentialize", &module_info_x8rSast, "sequentialize"},
  {"sinh", &module_info_gooSmath, "sinh"},
  {"locals-functions-setter", &module_info_x8rSast, "locals-functions-setter"},
  {"function-source-setter", &module_info_x8rSast, "function-source-setter"},
  {"<constant>", &module_info_x8rSast, "<constant>"},
  {"do2", &module_info_gooScolsScol, "do2"},
  {"do-key-vals", &module_info_gooScolsSseq, "do-key-vals"},
  {"binding-index-setter", &module_info_x8rSast, "binding-index-setter"},
  {"type-elts", &module_info_gooSboot, "type-elts"},
  {"%create-directory", &module_info_gooSboot, "%create-directory"},
  {"1st", &module_info_gooScolsSseq, "1st"},
  {"log", &module_info_gooSmath, "log"},
  {"seq", &module_info_gooSboot, "seq"},
  {"2nd", &module_info_gooStypes, "2nd"},
  {"<str>", &module_info_gooSboot, "<str>"},
  {"neg?", &module_info_gooSmath, "neg?"},
  {"low-elt-setter", &module_info_gooScolsScol, "low-elt-setter"},
  {"%gen-src", &module_info_gooSboot, "%gen-src"},
  {"function-free-setter", &module_info_x8rSast, "function-free-setter"},
  {"fun-arity", &module_info_gooSboot, "fun-arity"},
  {"vec", &module_info_gooSboot, "vec"},
  {"%prop", &module_info_gooSboot, "%prop"},
  {"and", &module_info_gooSmacros, "and"},
  {"@all2?", &module_info_gooSboot, "@all2?"},
  {"fab-setter-name", &module_info_gooSmacros, "fab-setter-name"},
  {"*gensym-counter*", &module_info_gooSruntime, "*gensym-counter*"},
  {"%get", &module_info_gooSboot, "%get"},
  {"object-props", &module_info_gooSboot, "object-props"},
  {"first-then", &module_info_gooScolsSstep, "first-then"},
  {"fin", &module_info_gooSboot, "fin"},
  {"match-sublist", &module_info_gooSmacros, "match-sublist"},
  {"%current-out-port", &module_info_gooSboot, "%current-out-port"},
  {"%eof-object", &module_info_gooSboot, "%eof-object"},
  {"class-name", &module_info_gooSboot, "class-name"},
  {"function-free", &module_info_x8rSast, "function-free"},
  {"%%sym", &module_info_gooSboot, "%%sym"},
  {"nil", &module_info_gooSboot, "nil"},
  {"%isa", &module_info_gooSboot, "%isa"},
  {"reference-called-function?-setter", &module_info_x8rSast, "reference-called-function?-setter"},
  {"%c=", &module_info_gooSboot, "%c="},
  {"%current-in-port", &module_info_gooSboot, "%current-in-port"},
  {"<mag>", &module_info_gooSboot, "<mag>"},
  {"signature-nary?", &module_info_x8rSast, "signature-nary?"},
  {"<program>", &module_info_x8rSast, "<program>"},
  {"tab-gc-state", &module_info_gooScolsStab, "tab-gc-state"},
  {"let", &module_info_gooSboot, "let"},
  {"<loc>", &module_info_gooSboot, "<loc>"},
  {"%unlink-stack", &module_info_gooSboot, "%unlink-stack"},
  {"unzip", &module_info_gooScolsSzip, "unzip"},
  {"assocs-test-setter", &module_info_gooScolsSassoc, "assocs-test-setter"},
  {"cat!", &module_info_gooScolsSseqx, "cat!"},
  {"<ast-function>", &module_info_x8rSast, "<ast-function>"},
  {"<enum>", &module_info_gooScolsScol, "<enum>"},
  {"fix-let-types-setter", &module_info_x8rSast, "fix-let-types-setter"},
  {"tab-growth-threshold", &module_info_gooScolsStab, "tab-growth-threshold"},
  {"reference-called-function?", &module_info_x8rSast, "reference-called-function?"},
  {"<set>", &module_info_gooScolsStab, "<set>"},
  {"app-sup", &module_info_gooSmacros, "app-sup"},
  {"binding-inferred-type-setter", &module_info_x8rSast, "binding-inferred-type-setter"},
  {"eof-object", &module_info_gooSmath, "eof-object"},
  {"program-register-setter", &module_info_x8rSast, "program-register-setter"},
  {"prop-setter", &module_info_gooSboot, "prop-setter"},
  {"to-lower", &module_info_gooSmath, "to-lower"},
  {"%vnul", &module_info_gooSboot, "%vnul"},
  {"reference-frame-number", &module_info_x8rSast, "reference-frame-number"},
  {"<bot>", &module_info_gooSmath, "<bot>"},
  {"tab-shrink-threshold-setter", &module_info_gooScolsStab, "tab-shrink-threshold-setter"},
  {"%open-in-file", &module_info_gooSboot, "%open-in-file"},
  {">>>", &module_info_gooSmath, ">>>"},
  {"ds", &module_info_gooSboot, "ds"},
  {"bound?-reference", &module_info_x8rSast, "bound?-reference"},
  {"string-split", &module_info_gooScolsSstr, "string-split"},
  {"program-type", &module_info_x8rSast, "program-type"},
  {"<union>", &module_info_gooSboot, "<union>"},
  {"%str", &module_info_gooSboot, "%str"},
  {"bit?", &module_info_gooSmath, "bit?"},
  {"class-ancestors", &module_info_gooSboot, "class-ancestors"},
  {"rcurry", &module_info_gooSruntime, "rcurry"},
  {"odd?", &module_info_gooSmath, "odd?"},
  {"bind-exit-main-fun", &module_info_x8rSast, "bind-exit-main-fun"},
  {"macro-expand", &module_info_gooSboot, "macro-expand"},
  {"%lu", &module_info_gooSboot, "%lu"},
  {"%iu", &module_info_gooSboot, "%iu"},
  {"fab-g2c-module", &module_info_x8rSast, "fab-g2c-module"},
  {"fin?", &module_info_gooScolsScol, "fin?"},
  {"%build-runtime-modules", &module_info_gooSboot, "%build-runtime-modules"},
  {"add", &module_info_gooScolsScol, "add"},
  {"unless", &module_info_gooSmacros, "unless"},
  {"len", &module_info_gooStypes, "len"},
  {"sup", &module_info_gooSmacros, "sup"},
  {"%pair", &module_info_gooSboot, "%pair"},
  {"global-box-value", &module_info_x8rSast, "global-box-value"},
  {"default-handler-description", &module_info_gooSruntime, "default-handler-description"},
  {"application-function", &module_info_x8rSast, "application-function"},
  {"may-isa?", &module_info_gooSboot, "may-isa?"},
  {"incf", &module_info_gooSmacros, "incf"},
  {"%i+", &module_info_gooSboot, "%i+"},
  {"file-opening-error", &module_info_gooSboot, "file-opening-error"},
  {"sin", &module_info_gooSmath, "sin"},
  {"^", &module_info_gooSmath, "^"},
  {"&", &module_info_gooSmath, "&"},
  {"%eq?", &module_info_gooSboot, "%eq?"},
  {"match", &module_info_gooSmacros, "match"},
  {"min", &module_info_gooSmag, "min"},
  {"pow", &module_info_gooSmath, "pow"},
  {"del!", &module_info_gooScolsScolx, "del!"},
  {"var-name", &module_info_gooSmacros, "var-name"},
  {"map-keyed", &module_info_gooScolsScol, "map-keyed"},
  {"*boot-macro-module-names*", &module_info_gooSboot, "*boot-macro-module-names*"},
  {"%im", &module_info_gooSboot, "%im"},
  {"round", &module_info_gooSmath, "round"},
  {"%cu", &module_info_gooSboot, "%cu"},
  {"case-insensitive-string-hash", &module_info_gooScolsStab, "case-insensitive-string-hash"},
  {"binding-locative", &module_info_x8rSast, "binding-locative"},
  {"pop", &module_info_gooScolsSlst, "pop"},
  {"function-binding", &module_info_x8rSast, "function-binding"},
  {"<vec>", &module_info_gooSboot, "<vec>"},
  {"elt-or", &module_info_gooScolsScol, "elt-or"},
  {"<arguments>", &module_info_x8rSast, "<arguments>"},
  {"to-upper", &module_info_gooSmath, "to-upper"},
  {"%selt", &module_info_gooSboot, "%selt"},
  {"<simple-error>", &module_info_gooSruntime, "<simple-error>"},
  {"vals-to-str", &module_info_gooScolsSseq, "vals-to-str"},
  {"@any?", &module_info_gooSboot, "@any?"},
  {"@==", &module_info_gooSboot, "@=="},
  {"%loc-off-setter", &module_info_gooSboot, "%loc-off-setter"},
  {"%f+", &module_info_gooSboot, "%f+"},
  {"fun-mets", &module_info_gooSboot, "fun-mets"},
  {"curry", &module_info_gooSruntime, "curry"},
  {"ceil", &module_info_gooSmath, "ceil"},
  {"<list>", &module_info_gooScolsSlst, "<list>"},
  {"<ast-generic>", &module_info_x8rSast, "<ast-generic>"},
  {"<tup>", &module_info_gooSboot, "<tup>"},
  {"%f=", &module_info_gooSboot, "%f="},
  {"unwind-protect-cleanup-thunk", &module_info_x8rSast, "unwind-protect-cleanup-thunk"},
  {"dc", &module_info_gooSboot, "dc"},
  {"signature-bindings-setter", &module_info_x8rSast, "signature-bindings-setter"},
  {"probe-module", &module_info_x8rSast, "probe-module"},
  {"gen-src-setter", &module_info_gooSboot, "gen-src-setter"},
  {"%fi2f", &module_info_gooSboot, "%fi2f"},
  {"assignment-binding", &module_info_x8rSast, "assignment-binding"},
  {"address-of", &module_info_gooSmath, "address-of"},
  {"enum", &module_info_gooScolsScol, "enum"},
  {"%with-monitor", &module_info_gooSboot, "%with-monitor"},
  {"%fun-reg", &module_info_gooSboot, "%fun-reg"},
  {"%i*", &module_info_gooSboot, "%i*"},
  {"range-error", &module_info_gooScolsScol, "range-error"},
  {"<flo>", &module_info_gooSboot, "<flo>"},
  {"len/fill-setter", &module_info_gooScolsSbuf, "len/fill-setter"},
  {"module-name-to-relpath", &module_info_x8rSast, "module-name-to-relpath"},
  {"function-signature-setter", &module_info_x8rSast, "function-signature-setter"},
  {"cond", &module_info_gooSmacros, "cond"},
  {"$permanent-hash-state", &module_info_gooScolsStab, "$permanent-hash-state"},
  {"%i=", &module_info_gooSboot, "%i="},
  {"%%macro", &module_info_gooSboot, "%%macro"},
  {"%cb", &module_info_gooSboot, "%cb"},
  {"<met>", &module_info_gooSboot, "<met>"},
  {"%process-module", &module_info_gooSboot, "%process-module"},
  {"handler-info-arguments", &module_info_gooSboot, "handler-info-arguments"},
  {"signature-value-setter", &module_info_x8rSast, "signature-value-setter"},
  {"<ast-method>", &module_info_x8rSast, "<ast-method>"},
  {"binding-inferred-type", &module_info_x8rSast, "binding-inferred-type"},
  {"from", &module_info_gooScolsSrange, "from"},
  {"new", &module_info_gooSboot, "new"},
  {"cos", &module_info_gooSmath, "cos"},
  {"function-signature", &module_info_x8rSast, "function-signature"},
  {"<handler-info>", &module_info_gooSruntime, "<handler-info>"},
  {"<assignment>", &module_info_x8rSast, "<assignment>"},
  {"%gen-refs", &module_info_gooSboot, "%gen-refs"},
  {"%sp-reg-setter", &module_info_gooSboot, "%sp-reg-setter"},
  {"==", &module_info_gooSmacros, "=="},
  {"%selt-setter", &module_info_gooSboot, "%selt-setter"},
  {"%flo-bits", &module_info_gooSboot, "%flo-bits"},
  {"fun-nary?", &module_info_gooSboot, "fun-nary?"},
  {"function-source", &module_info_x8rSast, "function-source"},
  {"<ast-primitive-definition>", &module_info_x8rSast, "<ast-primitive-definition>"},
  {"program-type-setter", &module_info_x8rSast, "program-type-setter"},
  {"function-self-recursive?-setter", &module_info_x8rSast, "function-self-recursive?-setter"},
  {"gen-src", &module_info_gooSboot, "gen-src"},
  {"string-repeat", &module_info_gooScolsSstr, "string-repeat"},
  {"$max-int", &module_info_gooSboot, "$max-int"},
  {"<subclass>", &module_info_gooSboot, "<subclass>"},
  {"<ast-primitive>", &module_info_x8rSast, "<ast-primitive>"},
  {"assert", &module_info_gooSmacros, "assert"},
  {"function-bindings", &module_info_x8rSast, "function-bindings"},
  {"rem", &module_info_gooSmath, "rem"},
  {"binding-name", &module_info_x8rSast, "binding-name"},
  {"as-log", &module_info_gooSmath, "as-log"},
  {"df", &module_info_gooSboot, "df"},
  {"-", &module_info_gooSmath, "-"},
  {"%file-mtime", &module_info_gooSboot, "%file-mtime"},
  {"del-dups", &module_info_gooScolsSseq, "del-dups"},
  {"<global-assignment>", &module_info_x8rSast, "<global-assignment>"},
  {"%close-in-port", &module_info_gooSboot, "%close-in-port"},
  {"del", &module_info_gooScolsScol, "del"},
  {"%i>>>", &module_info_gooSboot, "%i>>>"},
  {"signature-bindings", &module_info_x8rSast, "signature-bindings"},
  {"%puts", &module_info_gooSboot, "%puts"},
  {"%f-", &module_info_gooSboot, "%f-"},
  {"gensym", &module_info_gooSmacros, "gensym"},
  {"sub-setter", &module_info_gooScolsSseqx, "sub-setter"},
  {"objectify-signature", &module_info_x8rSast, "objectify-signature"},
  {"range-by", &module_info_gooScolsSrange, "range-by"},
  {"renew", &module_info_gooSmacros, "renew"},
  {"bound?", &module_info_gooSboot, "bound?"},
  {"do-keyed", &module_info_gooScolsScol, "do-keyed"},
  {"%i>>", &module_info_gooSboot, "%i>>"},
  {"do-static-global-bindings", &module_info_x8rSast, "do-static-global-bindings"},
  {"fold", &module_info_gooScolsScol, "fold"},
  {"pair", &module_info_gooSmacros, "pair"},
  {"unchecked-runtime-environment", &module_info_x8rSast, "unchecked-runtime-environment"},
  {"sig-nary?", &module_info_gooSboot, "sig-nary?"},
  {">=", &module_info_gooSmag, ">="},
  {"dv", &module_info_gooSboot, "dv"},
  {"<int>", &module_info_gooSboot, "<int>"},
  {"ins!", &module_info_gooScolsSseqx, "ins!"},
  {"elts", &module_info_gooScolsScol, "elts"},
  {"sub", &module_info_gooScolsSseq, "sub"},
  {"describe-handler", &module_info_gooSruntime, "describe-handler"},
  {"def", &module_info_gooSboot, "def"},
  {"isa?", &module_info_gooSboot, "isa?"},
  {"signature-specs-setter", &module_info_x8rSast, "signature-specs-setter"},
  {"prop-value-setter", &module_info_gooSboot, "prop-value-setter"},
  {"key-type", &module_info_gooScolsScol, "key-type"},
  {"%os-val", &module_info_gooSboot, "%os-val"},
  {"%invoke-debugger", &module_info_gooSboot, "%invoke-debugger"},
  {"<flat>", &module_info_gooSboot, "<flat>"},
  {"case", &module_info_gooSmacros, "case"},
  {"<step>", &module_info_gooScolsSstep, "<step>"},
  {"signature-arity-setter", &module_info_x8rSast, "signature-arity-setter"},
  {"tan", &module_info_gooSmath, "tan"},
  {"add!", &module_info_gooScolsScolx, "add!"},
  {"finds", &module_info_gooScolsSseq, "finds"},
  {"set", &module_info_gooSboot, "set"},
  {"below", &module_info_gooScolsSseq, "below"},
  {"%snul", &module_info_gooSboot, "%snul"},
  {"build-condition-interactively", &module_info_gooSruntime, "build-condition-interactively"},
  {"eof-object?", &module_info_gooSmath, "eof-object?"},
  {"all?", &module_info_gooScolsScol, "all?"},
  {"lst", &module_info_gooSboot, "lst"},
  {"not", &module_info_gooSboot, "not"},
  {"%fsqrt", &module_info_gooSboot, "%fsqrt"},
  {"%iv", &module_info_gooSboot, "%iv"},
  {"rep", &module_info_gooSboot, "rep"},
  {"pos?", &module_info_gooSmath, "pos?"},
  {"binding-global-box-setter", &module_info_x8rSast, "binding-global-box-setter"},
  {"<handler>", &module_info_gooSruntime, "<handler>"},
  {"%force-out", &module_info_gooSboot, "%force-out"},
  {"floor", &module_info_gooSmath, "floor"},
  {"$pi", &module_info_gooSmath, "$pi"},
  {"<buf>", &module_info_gooScolsSbuf, "<buf>"},
  {"module-loader-module-type", &module_info_x8rSast, "module-loader-module-type"},
  {"describe-condition", &module_info_gooSruntime, "describe-condition"},
  {"str-to-num", &module_info_gooScolsSstr, "str-to-num"},
  {"empty?", &module_info_gooSmacros, "empty?"},
  {"<range>", &module_info_gooScolsSrange, "<range>"},
  {"sig-unification-vars", &module_info_gooSboot, "sig-unification-vars"},
  {"<alternative>", &module_info_x8rSast, "<alternative>"},
  {"ddv", &module_info_gooSmacros, "ddv"},
  {"objectify-quotation", &module_info_x8rSast, "objectify-quotation"},
  {"fun", &module_info_gooSboot, "fun"},
  {"binding-module-name", &module_info_x8rSast, "binding-module-name"},
  {"head-setter", &module_info_gooSboot, "head-setter"},
  {"type-class", &module_info_gooSboot, "type-class"},
  {"<immediate-constant>", &module_info_x8rSast, "<immediate-constant>"},
  {"nul", &module_info_gooSboot, "nul"},
  {"dm", &module_info_gooSboot, "dm"},
  {"fun-sig-setter", &module_info_gooSboot, "fun-sig-setter"},
  {"sig", &module_info_gooSruntime, "sig"},
  {"handler-matches?", &module_info_gooSruntime, "handler-matches?"},
  {"%raw", &module_info_gooSboot, "%raw"},
  {"elt", &module_info_gooSmacros, "elt"},
  {"%i!", &module_info_gooSboot, "%i!"},
  {"%i^", &module_info_gooSboot, "%i^"},
  {"condition-message", &module_info_gooSruntime, "condition-message"},
  {"<str-tab>", &module_info_gooScolsStab, "<str-tab>"},
  {"mem?", &module_info_gooScolsScol, "mem?"},
  {"collect", &module_info_gooSmacros, "collect"},
  {"module-syntax-environment", &module_info_x8rSast, "module-syntax-environment"},
  {"application-known?-setter", &module_info_x8rSast, "application-known?-setter"},
  {"<singleton>", &module_info_gooSboot, "<singleton>"},
  {"format-to-string", &module_info_gooSruntime, "format-to-string"},
  {"contagious-call", &module_info_gooSmath, "contagious-call"},
  {"contagious-type", &module_info_gooSmath, "contagious-type"},
  {"any2?", &module_info_gooScolsScol, "any2?"},
  {"decf", &module_info_gooSmacros, "decf"},
  {"ct", &module_info_gooSboot, "ct"},
  {"zero?", &module_info_gooSmath, "zero?"},
  {"<fun>", &module_info_gooSboot, "<fun>"},
  {"application-known?", &module_info_x8rSast, "application-known?"},
  {"fab-map", &module_info_gooScolsSmap, "fab-map"},
  {"dlet", &module_info_gooSmacros, "dlet"},
  {"binding-value", &module_info_x8rSast, "binding-value"},
  {"tup", &module_info_gooSboot, "tup"},
  {"identity", &module_info_gooSruntime, "identity"},
  {"load-in", &module_info_x8rSast, "load-in"},
  {"num-to-str", &module_info_gooSmath, "num-to-str"},
  {"handler-info-message", &module_info_gooSboot, "handler-info-message"},
  {"head", &module_info_gooSboot, "head"},
  {"prop-bound?", &module_info_gooSboot, "prop-bound?"},
  {"%vec", &module_info_gooSboot, "%vec"},
  {"<global-box>", &module_info_x8rSast, "<global-box>"},
  {"condition-arguments", &module_info_gooSruntime, "condition-arguments"},
  {"esc", &module_info_gooSboot, "esc"},
  {"@lst", &module_info_gooSboot, "@lst"},
  {"<local-binding>", &module_info_x8rSast, "<local-binding>"},
  {"<=", &module_info_gooSmag, "<="},
  {"<num>", &module_info_gooSboot, "<num>"},
  {"try", &module_info_gooSboot, "try"},
  {"dss", &module_info_gooSboot, "dss"},
  {"binding-dynamic-extent?-setter", &module_info_x8rSast, "binding-dynamic-extent?-setter"},
  {"prop-getter", &module_info_gooSboot, "prop-getter"},
  {"del-vals", &module_info_gooScolsSseq, "del-vals"},
  {"unexec", &module_info_gooSboot, "unexec"},
  {"signature-arity", &module_info_x8rSast, "signature-arity"},
  {"fix-let-body", &module_info_x8rSast, "fix-let-body"},
  {"%binding-name", &module_info_gooSboot, "%binding-name"},
  {"binding-dotted?-setter", &module_info_x8rSast, "binding-dotted?-setter"},
  {"function-temporaries-setter", &module_info_x8rSast, "function-temporaries-setter"},
  {"range-check", &module_info_gooScolsSseq, "range-check"},
  {"match-atom", &module_info_gooSmacros, "match-atom"},
  {"<application>", &module_info_x8rSast, "<application>"},
  {"fun-specs", &module_info_gooSboot, "fun-specs"},
  {"fix-let-body-setter", &module_info_x8rSast, "fix-let-body-setter"},
  {"pub", &module_info_gooSmacros, "pub"},
  {"now-setter", &module_info_gooScolsScol, "now-setter"},
  {"app-args", &module_info_gooSruntime, "app-args"},
  {"atan2", &module_info_gooSmath, "atan2"},
  {"%raw-call", &module_info_gooSboot, "%raw-call"},
  {"%f<", &module_info_gooSboot, "%f<"},
  {"%ftan", &module_info_gooSboot, "%ftan"},
  {"%fatan", &module_info_gooSboot, "%fatan"},
  {"<monitor>", &module_info_x8rSast, "<monitor>"},
  {"init-ast", &module_info_x8rSast, "init-ast"},
  {"module-exports", &module_info_x8rSast, "module-exports"},
  {"binding-dynamic-extent?", &module_info_x8rSast, "binding-dynamic-extent?"},
  {"%fsin", &module_info_gooSboot, "%fsin"},
  {"as", &module_info_gooStypes, "as"},
  {"%gen-code", &module_info_gooSboot, "%gen-code"},
  {"<lst>", &module_info_gooSboot, "<lst>"},
  {"*boot-macro-expanders*", &module_info_gooSboot, "*boot-macro-expanders*"},
  {"popf", &module_info_gooSmacros, "popf"},
  {"find", &module_info_gooScolsScol, "find"},
  {"cat2", &module_info_gooScolsSseq, "cat2"},
  {"%app-filename", &module_info_gooSboot, "%app-filename"},
  {"locals-bindings-setter", &module_info_x8rSast, "locals-bindings-setter"},
  {"keys", &module_info_gooScolsScol, "keys"},
  {"%sp-reg", &module_info_gooSboot, "%sp-reg"},
  {"fab-class", &module_info_gooSboot, "fab-class"},
  {"%fpow", &module_info_gooSboot, "%fpow"},
  {"$min-int", &module_info_gooSboot, "$min-int"},
  {"*restarts-ok?*", &module_info_gooSboot, "*restarts-ok?*"},
  {"%ft", &module_info_gooSboot, "%ft"},
  {"prop-init", &module_info_gooSboot, "prop-init"},
  {"<replace-generic-restart>", &module_info_gooSboot, "<replace-generic-restart>"},
  {"char->ascii", &module_info_gooSmath, "char->ascii"},
  {"module-binding", &module_info_x8rSast, "module-binding"},
  {"id-hash", &module_info_gooScolsStab, "id-hash"},
  {"binding-type-setter", &module_info_x8rSast, "binding-type-setter"},
  {"tab-growth-factor", &module_info_gooScolsStab, "tab-growth-factor"},
  {"%facos", &module_info_gooSboot, "%facos"},
  {"app-filename", &module_info_gooSruntime, "app-filename"},
  {"module-name", &module_info_x8rSast, "module-name"},
  {"handler-function", &module_info_gooSruntime, "handler-function"},
  {"as-lst", &module_info_x8rSast, "as-lst"},
  {"objectify-with-subtransaction", &module_info_x8rSast, "objectify-with-subtransaction"},
  {"%fu", &module_info_gooSboot, "%fu"},
  {"when", &module_info_gooSmacros, "when"},
  {"%fatan2", &module_info_gooSboot, "%fatan2"},
  {"alpha?", &module_info_gooSmath, "alpha?"},
  {"object-class", &module_info_gooSboot, "object-class"},
  {"<map>", &module_info_gooScolsSmap, "<map>"},
  {"cosh", &module_info_gooSmath, "cosh"},
  {"zip", &module_info_gooScolsSzip, "zip"},
  {"unwind-protect-protected-thunk", &module_info_x8rSast, "unwind-protect-protected-thunk"},
  {"<passive-program>", &module_info_x8rSast, "<passive-program>"},
  {"@oelt", &module_info_gooSboot, "@oelt"},
  {"class-descendents", &module_info_gooSboot, "class-descendents"},
  {"signature-names", &module_info_x8rSast, "signature-names"},
  {"%loc-val", &module_info_gooSboot, "%loc-val"},
  {"%untag", &module_info_gooSboot, "%untag"},
  {"max", &module_info_gooSmag, "max"},
  {"%ib", &module_info_gooSboot, "%ib"},
  {"environment-uses-modules", &module_info_x8rSast, "environment-uses-modules"},
  {"fix-let-bindings", &module_info_x8rSast, "fix-let-bindings"},
  {"gen-refs-setter", &module_info_gooSboot, "gen-refs-setter"},
  {"prop-value", &module_info_gooSboot, "prop-value"},
  {"until", &module_info_gooSmacros, "until"},
  {"<regular-application>", &module_info_x8rSast, "<regular-application>"},
  {"default-handler", &module_info_gooSruntime, "default-handler"},
  {"program-register", &module_info_x8rSast, "program-register"},
  {"report-undefined-global-bindings", &module_info_x8rSast, "report-undefined-global-bindings"},
  {"push-last!", &module_info_gooScolsSbuf, "push-last!"},
  {"alternative-alternant", &module_info_x8rSast, "alternative-alternant"},
  {"<assocs>", &module_info_gooScolsSassoc, "<assocs>"},
  {"assignment-reference", &module_info_x8rSast, "assignment-reference"},
  {"function-data-refs-setter", &module_info_x8rSast, "function-data-refs-setter"},
  {"global-box-value-setter", &module_info_x8rSast, "global-box-value-setter"},
  {"last", &module_info_gooScolsSseq, "last"},
  {"ast-evaluate", &module_info_x8rSast, "ast-evaluate"},
  {"ins", &module_info_gooScolsSseq, "ins"},
  {"map2", &module_info_gooScolsScol, "map2"},
  {"<chr>", &module_info_gooSboot, "<chr>"},
  {"binding-info-setter", &module_info_x8rSast, "binding-info-setter"},
  {"reject", &module_info_gooScolsSseq, "reject"},
  {"%define-method", &module_info_gooSboot, "%define-method"},
  {"<tab>", &module_info_gooScolsScol, "<tab>"},
  {"incongruent-method-error", &module_info_gooSboot, "incongruent-method-error"},
  {"signature-names-setter", &module_info_x8rSast, "signature-names-setter"},
  {"%fb", &module_info_gooSboot, "%fb"},
  {"app", &module_info_gooSmacros, "app"},
  {"match-unquote", &module_info_gooSmacros, "match-unquote"},
  {"flo-bits", &module_info_gooSmath, "flo-bits"},
  {"push", &module_info_gooScolsSlst, "push"},
  {"def-list", &module_info_x8rSast, "def-list"},
  {"power-of-two-ceiling", &module_info_gooSmath, "power-of-two-ceiling"},
  {">", &module_info_gooSmag, ">"},
  {"zap", &module_info_gooScolsScol, "zap"},
  {"<computed-program>", &module_info_x8rSast, "<computed-program>"},
  {"gen-refs", &module_info_gooSboot, "gen-refs"},
  {"<error>", &module_info_gooSruntime, "<error>"},
  {"fill", &module_info_gooScolsScol, "fill"},
  {"<bound?>", &module_info_x8rSast, "<bound?>"},
  {"str", &module_info_gooScolsSstr, "str"},
  {"~=", &module_info_gooSmath, "~="},
  {"range-check?", &module_info_gooScolsSseq, "range-check?"},
  {"@olen", &module_info_gooSboot, "@olen"},
  {"module-target-environment", &module_info_x8rSast, "module-target-environment"},
  {"tanh", &module_info_gooSmath, "tanh"},
  {"assqn", &module_info_gooScolsSlst, "assqn"},
  {"%flog", &module_info_gooSboot, "%flog"},
  {"binding-dotted?", &module_info_x8rSast, "binding-dotted?"},
  {"%c<", &module_info_gooSboot, "%c<"},
  {"tab-hash", &module_info_gooScolsStab, "tab-hash"},
  {"binding-kind", &module_info_x8rSast, "binding-kind"},
  {"t*", &module_info_gooStypes, "t*"},
  {"%app-args", &module_info_gooSboot, "%app-args"},
  {"<predefined-application>", &module_info_x8rSast, "<predefined-application>"},
  {"dl", &module_info_gooSboot, "dl"},
  {"<free-environment>", &module_info_x8rSast, "<free-environment>"},
  {"monitor-main-thunk", &module_info_x8rSast, "monitor-main-thunk"},
  {"<seq!>", &module_info_gooSboot, "<seq!>"},
  {"fix-let-arguments", &module_info_x8rSast, "fix-let-arguments"},
  {"load-module", &module_info_x8rSast, "load-module"},
  {"%loc-off", &module_info_gooSboot, "%loc-off"},
  {"application-tail?", &module_info_x8rSast, "application-tail?"},
  {"%fcos", &module_info_gooSboot, "%fcos"},
  {"digit?", &module_info_gooSmath, "digit?"},
  {"%prop-unbound-error", &module_info_gooSboot, "%prop-unbound-error"},
  {"<fab-list>", &module_info_x8rSast, "<fab-list>"},
  {"key-test", &module_info_gooScolsScol, "key-test"},
  {"sig-specs", &module_info_gooSboot, "sig-specs"},
  {"remove-modules-by-name!", &module_info_x8rSast, "remove-modules-by-name!"},
  {"floor/", &module_info_gooSmath, "floor/"},
  {"fab-sym", &module_info_gooSboot, "fab-sym"},
  {"%fcosh", &module_info_gooSboot, "%fcosh"},
  {"signature-specs", &module_info_x8rSast, "signature-specs"},
  {"<sig>", &module_info_gooSboot, "<sig>"},
  {"list-handlers", &module_info_gooSruntime, "list-handlers"},
  {"reference-frame-offset", &module_info_x8rSast, "reference-frame-offset"},
  {"<product>", &module_info_gooStypes, "<product>"},
  {"pushf", &module_info_gooSmacros, "pushf"},
  {"subtype?", &module_info_gooSboot, "subtype?"},
  {"%f*", &module_info_gooSboot, "%f*"},
  {"<binding>", &module_info_x8rSast, "<binding>"},
  {"fun-names", &module_info_gooSboot, "fun-names"},
  {"<", &module_info_gooSmag, "<"},
  {"loc-val-setter", &module_info_gooSruntime, "loc-val-setter"},
  {"format", &module_info_gooSruntime, "format"},
  {"find-setter", &module_info_gooSboot, "find-setter"},
  {"def-fun-var", &module_info_gooSmacros, "def-fun-var"},
  {"t+", &module_info_gooStypes, "t+"},
  {"fix-let-types", &module_info_x8rSast, "fix-let-types"},
  {"<zip>", &module_info_gooScolsSzip, "<zip>"},
  {"<compile-time>", &module_info_x8rSast, "<compile-time>"},
  {"<module>", &module_info_x8rSast, "<module>"},
  {"buf", &module_info_gooScolsSbuf, "buf"},
  {"<condition>", &module_info_gooSruntime, "<condition>"},
  {"mod", &module_info_gooSmath, "mod"},
  {"<runtime-reference>", &module_info_x8rSast, "<runtime-reference>"},
  {"<<", &module_info_gooSmath, "<<"},
  {"=", &module_info_gooSmath, "="},
  {"abs", &module_info_gooSmath, "abs"},
  {"asin", &module_info_gooSmath, "asin"},
  {"range", &module_info_gooScolsSrange, "range"},
  {"cat-sym", &module_info_gooSmacros, "cat-sym"},
  {"function-registers-setter", &module_info_x8rSast, "function-registers-setter"},
  {"/", &module_info_gooSmath, "/"},
  {"<any>", &module_info_gooSboot, "<any>"},
  {"pos", &module_info_gooScolsSseq, "pos"},
  {"<cycle>", &module_info_gooScolsScycle, "<cycle>"},
  {"num-to-str-base", &module_info_gooScolsSstr, "num-to-str-base"},
  {"cat", &module_info_gooSmacros, "cat"},
  {"<simple-condition>", &module_info_gooSruntime, "<simple-condition>"},
  {"binding-value-setter", &module_info_x8rSast, "binding-value-setter"},
  {"function-data-refs", &module_info_x8rSast, "function-data-refs"},
  {"sig-val", &module_info_gooSboot, "sig-val"},
  {"assocs-test", &module_info_gooScolsSassoc, "assocs-test"},
  {"map", &module_info_gooSmacros, "map"},
  {"ast-define-binding", &module_info_x8rSast, "ast-define-binding"},
  {"<log>", &module_info_gooSboot, "<log>"},
  {"use/export", &module_info_gooSboot, "use/export"},
  {"~", &module_info_gooSmath, "~"},
  {"type-object", &module_info_gooSboot, "type-object"},
  {"fun-name-setter", &module_info_gooSboot, "fun-name-setter"},
  {"%velt", &module_info_gooSboot, "%velt"},
  {"%i?", &module_info_gooSboot, "%i?"},
  {"<class>", &module_info_gooSboot, "<class>"},
  {"op", &module_info_gooSmacros, "op"},
  {"error", &module_info_gooSboot, "error"},
  {"even?", &module_info_gooSmath, "even?"},
  {"%f/", &module_info_gooSboot, "%f/"},
  {"keyboard-interrupt", &module_info_gooSboot, "keyboard-interrupt"},
  {"tab-test", &module_info_gooScolsStab, "tab-test"},
  {"%gen-code-setter", &module_info_gooSboot, "%gen-code-setter"},
  {"<local-reference>", &module_info_x8rSast, "<local-reference>"},
  {"type-error", &module_info_gooSboot, "type-error"},
  {"<module-binding>", &module_info_x8rSast, "<module-binding>"},
  {"monitor-type", &module_info_x8rSast, "monitor-type"},
  {"for", &module_info_gooSmacros, "for"},
  {"*print-base*", &module_info_gooScolsSstr, "*print-base*"},
  {"1-", &module_info_gooSmath, "1-"},
  {"sym-name", &module_info_gooSboot, "sym-name"},
  {"class-direct-props", &module_info_gooSboot, "class-direct-props"},
  {"loc-val", &module_info_gooSruntime, "loc-val"},
  {"export", &module_info_gooSboot, "export"},
  {"<restart>", &module_info_gooSruntime, "<restart>"},
  {"application-binding", &module_info_x8rSast, "application-binding"},
  {"%i<", &module_info_gooSboot, "%i<"},
  {"<real-reference>", &module_info_x8rSast, "<real-reference>"},
  {"tab-growth-threshold-setter", &module_info_gooScolsStab, "tab-growth-threshold-setter"},
  {"constant-index-setter", &module_info_x8rSast, "constant-index-setter"},
  {"add-prop", &module_info_gooSboot, "add-prop"},
  {"%met-code", &module_info_gooSboot, "%met-code"},
  {"<seq>", &module_info_gooSboot, "<seq>"},
  {"%su", &module_info_gooSboot, "%su"},
  {"assignment-form-setter", &module_info_x8rSast, "assignment-form-setter"},
  {"to-digit", &module_info_gooSmath, "to-digit"},
  {"pick", &module_info_gooScolsSseq, "pick"},
  {"%open-out-file", &module_info_gooSboot, "%open-out-file"},
  {"%file-type", &module_info_gooSboot, "%file-type"},
  {"function-index-setter", &module_info_x8rSast, "function-index-setter"},
  {"acos", &module_info_gooSmath, "acos"},
  {"<definition>", &module_info_x8rSast, "<definition>"},
  {"fun-name", &module_info_gooSboot, "fun-name"},
  {"binding-mutable?", &module_info_x8rSast, "binding-mutable?"},
  {"runtime-environment", &module_info_x8rSast, "runtime-environment"},
  {"function-body-setter", &module_info_x8rSast, "function-body-setter"},
  {"dg", &module_info_gooSboot, "dg"},
  {"function-temporaries", &module_info_x8rSast, "function-temporaries"},
  {"prop-owner", &module_info_gooSboot, "prop-owner"},
  {"%allocate-stack", &module_info_gooSboot, "%allocate-stack"},
  {"list", &module_info_gooScolsSlst, "list"},
  {"rev!", &module_info_gooSmacros, "rev!"},
  {"alternative-condition", &module_info_x8rSast, "alternative-condition"},
  {"use", &module_info_gooSboot, "use"},
  {"@len", &module_info_gooSboot, "@len"},
  {"fab-handler", &module_info_gooSruntime, "fab-handler"},
  {"quote", &module_info_gooSboot, "quote"},
  {"ct-also", &module_info_gooSboot, "ct-also"},
  {"find-binding", &module_info_x8rSast, "find-binding"},
  {"binding-index", &module_info_x8rSast, "binding-index"},
  {"function-body", &module_info_x8rSast, "function-body"},
  {"rev", &module_info_gooScolsSseq, "rev"},
  {"while", &module_info_gooSmacros, "while"},
  {"<module-binding-reference>", &module_info_x8rSast, "<module-binding-reference>"},
  {"class-parents", &module_info_gooSboot, "class-parents"},
  {"<opts>", &module_info_gooSboot, "<opts>"},
  {"find-getter", &module_info_gooSboot, "find-getter"},
  {"<module-loader>", &module_info_x8rSast, "<module-loader>"},
  {"unknown-function-error", &module_info_gooSboot, "unknown-function-error"},
  {"@+", &module_info_gooSboot, "@+"},
  {"constant-value", &module_info_x8rSast, "constant-value"},
  {"<ast-macro-definition>", &module_info_x8rSast, "<ast-macro-definition>"},
  {"opf", &module_info_gooSmacros, "opf"},
  {"monitor-info", &module_info_x8rSast, "monitor-info"},
  {"build-condition-for-handler-interactively", &module_info_gooSruntime, "build-condition-for-handler-interactively"},
  {"*", &module_info_gooSmath, "*"},
  {"binding-native-to?", &module_info_x8rSast, "binding-native-to?"},
  {"t?", &module_info_gooStypes, "t?"},
  {"locals-body-setter", &module_info_x8rSast, "locals-body-setter"},
  {"*macros-ok?*", &module_info_gooSboot, "*macros-ok?*"},
  {"low-elt", &module_info_gooScolsScol, "low-elt"},
  {"<type>", &module_info_gooSboot, "<type>"},
  {"elt-type", &module_info_gooScolsScol, "elt-type"},
  {"~==", &module_info_gooSmath, "~=="},
  {"ord-app-mets", &module_info_gooSboot, "ord-app-mets"},
  {"match-empty-list", &module_info_gooSmacros, "match-empty-list"},
  {"free-environment", &module_info_x8rSast, "free-environment"},
  {"%slen", &module_info_gooSboot, "%slen"},
  {"prop-type", &module_info_gooSboot, "prop-type"},
  {"assignment-form", &module_info_x8rSast, "assignment-form"},
  {"locals-functions", &module_info_x8rSast, "locals-functions"},
  {"%ftanh", &module_info_gooSboot, "%ftanh"},
  {"trunc", &module_info_gooSmath, "trunc"},
  {"<unwind-protect>", &module_info_x8rSast, "<unwind-protect>"},
  {"%os-val-setter", &module_info_gooSboot, "%os-val-setter"},
  {"compile-time-program", &module_info_x8rSast, "compile-time-program"},
  {"items", &module_info_gooScolsScol, "items"},
  {"all2?", &module_info_gooStypes, "all2?"},
  {"environment-module", &module_info_x8rSast, "environment-module"},
  {"<fix-let>", &module_info_x8rSast, "<fix-let>"},
  {"%lb", &module_info_gooSboot, "%lb"},
  {"%loc-val-setter", &module_info_gooSboot, "%loc-val-setter"},
  {"environment-bindings", &module_info_x8rSast, "environment-bindings"},
  {"fab", &module_info_gooScolsScol, "fab"},
  {"%sb", &module_info_gooSboot, "%sb"},
  {"binding-type", &module_info_x8rSast, "binding-type"},
  {"need-implementation", &module_info_gooSmacros, "need-implementation"},
  {"cycle", &module_info_gooScolsScycle, "cycle"},
  {"1+", &module_info_gooSmath, "1+"},
  {"<reference>", &module_info_x8rSast, "<reference>"},
  {"function-registers", &module_info_x8rSast, "function-registers"},
  {"class-props", &module_info_gooSboot, "class-props"},
  {"%check-call-types", &module_info_gooSboot, "%check-call-types"},
  {"monitor-test", &module_info_x8rSast, "monitor-test"},
  {"<raw-constant>", &module_info_x8rSast, "<raw-constant>"},
  {"<bind-exit>", &module_info_x8rSast, "<bind-exit>"},
  {"fix-let-arguments-setter", &module_info_x8rSast, "fix-let-arguments-setter"},
  {"*report-prop-unbound-errors?*", &module_info_gooSboot, "*report-prop-unbound-errors?*"},
  {"ascii-whitespaces", &module_info_gooScolsSstr, "ascii-whitespaces"},
  {"<col!>", &module_info_gooSboot, "<col!>"},
  {"%i<<", &module_info_gooSboot, "%i<<"},
  {"%close-out-port", &module_info_gooSboot, "%close-out-port"},
  {"loc", &module_info_gooSboot, "loc"},
  {"alternative-consequent", &module_info_x8rSast, "alternative-consequent"},
  {"atan", &module_info_gooSmath, "atan"},
  {"do-module-loader-modules", &module_info_x8rSast, "do-module-loader-modules"},
  {"<serious-condition>", &module_info_gooSruntime, "<serious-condition>"},
  {"function-nary?", &module_info_x8rSast, "function-nary?"},
  {"case-by", &module_info_gooSmacros, "case-by"},
  {"spread", &module_info_gooSruntime, "spread"},
  {"choose-handler", &module_info_gooSruntime, "choose-handler"},
  {"gen-add-met", &module_info_gooSboot, "gen-add-met"},
  {">>", &module_info_gooSmath, ">>"},
  {"function-self-recursive?", &module_info_x8rSast, "function-self-recursive?"},
  {"init-environment-for-eval", &module_info_x8rSast, "init-environment-for-eval"},
  {"napp", &module_info_gooSmacros, "napp"},
  {"%vlen", &module_info_gooSboot, "%vlen"},
  {"fun-val", &module_info_gooSboot, "fun-val"},
  {"into", &module_info_gooScolsScol, "into"},
  {"isa", &module_info_gooSboot, "isa"},
  {"t<", &module_info_gooStypes, "t<"},
  {"%os-name", &module_info_gooSboot, "%os-name"},
  {NULL,NULL,NULL}
};

static BINDING_INFO binding_infos[] = {
  {"assoc-key", &Yx8rSast_linearizeYassoc_key},
  {"<box-read>", &Yx8rSast_linearizeYLbox_readG},
  {"do-dynamic-extent!", &Yx8rSast_linearizeYdo_dynamic_extentX},
  {"program-form-setter", &Yx8rSast_linearizeYprogram_form_setter},
  {"box-reference-setter", &Yx8rSast_linearizeYbox_reference_setter},
  {"update-walk!", &Yx8rSast_linearizeYupdate_walkX},
  {"box-reference", &Yx8rSast_linearizeYbox_reference},
  {"analyze-calls", &Yx8rSast_linearizeYanalyze_calls},
  {"adjoin-free-binding!", &Yx8rSast_linearizeYadjoin_free_bindingX},
  {"reference-offset-setter", &Yx8rSast_linearizeYreference_offset_setter},
  {"form-quotations", &Yx8rSast_linearizeYform_quotations},
  {"reference-self?-setter", &Yx8rSast_linearizeYreference_selfQ_setter},
  {"<free-reference>", &Yx8rSast_linearizeYLfree_referenceG},
  {"unconstrained-type?", &Yx8rSast_linearizeYunconstrained_typeQ},
  {"closurize-main!", &Yx8rSast_linearizeYclosurize_mainX},
  {"new-renamed-binding", &Yx8rSast_linearizeYnew_renamed_binding},
  {"*register-passive?*", &Yx8rSast_linearizeYTregister_passiveQT},
  {"form-definitions-setter", &Yx8rSast_linearizeYform_definitions_setter},
  {"<renamed-local-binding>", &Yx8rSast_linearizeYLrenamed_local_bindingG},
  {"lift-procedures!", &Yx8rSast_linearizeYlift_proceduresX},
  {"gather-temporaries!", &Yx8rSast_linearizeYgather_temporariesX},
  {"adjoin-definition!", &Yx8rSast_linearizeYadjoin_definitionX},
  {"<box-creation>", &Yx8rSast_linearizeYLbox_creationG},
  {"as-top-level-forms", &Yx8rSast_linearizeYas_top_level_forms},
  {"extract-things!", &Yx8rSast_linearizeYextract_thingsX},
  {"closure-creation-index", &Yx8rSast_linearizeYclosure_creation_index},
  {"box-form", &Yx8rSast_linearizeYbox_form},
  {"assoc", &Yx8rSast_linearizeYassoc},
  {"program-form", &Yx8rSast_linearizeYprogram_form},
  {"adjoin-temporary-variables!", &Yx8rSast_linearizeYadjoin_temporary_variablesX},
  {"---main-0---", NULL},
  {"extract!", &Yx8rSast_linearizeYextractX},
  {"program-definitions", &Yx8rSast_linearizeYprogram_definitions},
  {"<closure-creation>", &Yx8rSast_linearizeYLclosure_creationG},
  {"ast-walk", &Yx8rSast_linearizeYast_walk},
  {"reference-offset", &Yx8rSast_linearizeYreference_offset},
  {"register-allocate!", &Yx8rSast_linearizeYregister_allocateX},
  {"program-quotations", &Yx8rSast_linearizeYprogram_quotations},
  {"<flattened-program>", &Yx8rSast_linearizeYLflattened_programG},
  {"split-program", &Yx8rSast_linearizeYsplit_program},
  {"---main-2---", NULL},
  {"do-call-upgrades!", &Yx8rSast_linearizeYdo_call_upgradesX},
  {"do-call-references!", &Yx8rSast_linearizeYdo_call_referencesX},
  {"collect-temporaries!", &Yx8rSast_linearizeYcollect_temporariesX},
  {"form-program-setter", &Yx8rSast_linearizeYform_program_setter},
  {"---main-1---", NULL},
  {"do-do-call-upgrades!", &Yx8rSast_linearizeYdo_do_call_upgradesX},
  {"<top-level-form>", &Yx8rSast_linearizeYLtop_level_formG},
  {"ast-contains-fun?", &Yx8rSast_linearizeYast_contains_funQ},
  {"boxify-mutable-bindings", &Yx8rSast_linearizeYboxify_mutable_bindings},
  {"analyze-call-references", &Yx8rSast_linearizeYanalyze_call_references},
  {"form-program", &Yx8rSast_linearizeYform_program},
  {"form-quotations-setter", &Yx8rSast_linearizeYform_quotations_setter},
  {"program-quotations-setter", &Yx8rSast_linearizeYprogram_quotations_setter},
  {"program-definitions-setter", &Yx8rSast_linearizeYprogram_definitions_setter},
  {"do-do-dynamic-extent!", &Yx8rSast_linearizeYdo_do_dynamic_extentX},
  {"assoc-value-setter", &Yx8rSast_linearizeYassoc_value_setter},
  {"assoc-key-setter", &Yx8rSast_linearizeYassoc_key_setter},
  {"<assoc>", &Yx8rSast_linearizeYLassocG},
  {"assoc-value", &Yx8rSast_linearizeYassoc_value},
  {"closure-creation-index-setter", &Yx8rSast_linearizeYclosure_creation_index_setter},
  {"<box-write>", &Yx8rSast_linearizeYLbox_writeG},
  {"lift!", &Yx8rSast_linearizeYliftX},
  {"form-definitions", &Yx8rSast_linearizeYform_definitions},
  {"flatten-seqs", &Yx8rSast_linearizeYflatten_seqs},
  {"allocate-register", &Yx8rSast_linearizeYallocate_register},
  {"reference-self?", &Yx8rSast_linearizeYreference_selfQ},
  {"box-form-setter", &Yx8rSast_linearizeYbox_form_setter},
  {"analyze-dynamic-extent", &Yx8rSast_linearizeYanalyze_dynamic_extent},
  {"closure-creation-free", &Yx8rSast_linearizeYclosure_creation_free},
  {"insert-box!", &Yx8rSast_linearizeYinsert_boxX},
  {"collect-registers!", &Yx8rSast_linearizeYcollect_registersX},
  {"*renaming-bindings-counter*", &Yx8rSast_linearizeYTrenaming_bindings_counterT},
  {"closure-creation-free-setter", &Yx8rSast_linearizeYclosure_creation_free_setter},
  {"assocq", &Yx8rSast_linearizeYassocq},
  {"do-do-call-references!", &Yx8rSast_linearizeYdo_do_call_referencesX},
  {NULL, NULL}
};

static EXPORT_INFO export_infos[] = {
  {"<box-read>", "<box-read>"},
  {"update-walk!", "update-walk!"},
  {"analyze-calls", "analyze-calls"},
  {"form-quotations", "form-quotations"},
  {"<free-reference>", "<free-reference>"},
  {"unconstrained-type?", "unconstrained-type?"},
  {"closurize-main!", "closurize-main!"},
  {"<closure-creation>", "<closure-creation>"},
  {"gather-temporaries!", "gather-temporaries!"},
  {"<box-creation>", "<box-creation>"},
  {"form-program", "form-program"},
  {"closure-creation-index", "closure-creation-index"},
  {"closure-creation-free", "closure-creation-free"},
  {"box-form", "box-form"},
  {"program-form", "program-form"},
  {"box-reference", "box-reference"},
  {"program-definitions", "program-definitions"},
  {"reference-offset", "reference-offset"},
  {"register-allocate!", "register-allocate!"},
  {"<renamed-local-binding>", "<renamed-local-binding>"},
  {"collect-temporaries!", "collect-temporaries!"},
  {"<top-level-form>", "<top-level-form>"},
  {"ast-contains-fun?", "ast-contains-fun?"},
  {"program-quotations", "program-quotations"},
  {"*register-passive?*", "*register-passive?*"},
  {"<box-write>", "<box-write>"},
  {"lift!", "lift!"},
  {"form-definitions", "form-definitions"},
  {"flatten-seqs", "flatten-seqs"},
  {"reference-self?", "reference-self?"},
  {"analyze-dynamic-extent", "analyze-dynamic-extent"},
  {"insert-box!", "insert-box!"},
  {"collect-registers!", "collect-registers!"},
  {"extract-things!", "extract-things!"},
  {NULL, NULL}
};

extern MODULE_INFO module_info_x8rSast_linearize;
MODULE_INFO module_info_x8rSast_linearize = {
  "x8r/ast-linearize",
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
extern void load_module_x8rSast (void);
extern void load_module_gooStypes (void);
extern void load_module_gooSmath (void);
extern void load_module_gooScols (void);

/* EXPRESSION: */

extern void load_module_x8rSast_linearize (void);

void load_module_x8rSast_linearize (void) {
  static int need_init = 1;
  if (!need_init) return;

  need_init = 0;
  load_module_gooSboot();
  load_module_gooSmacros();
  load_module_gooSruntime();
  load_module_x8rSast();
  load_module_gooStypes();
  load_module_gooSmath();
  load_module_gooScols();

  (P)Yx8rSast_linearizeY___main_0___();
  (P)Yx8rSast_linearizeY___main_1___();
  (P)Yx8rSast_linearizeY___main_2___();

}

/* END OF GENERATED CODE. */
